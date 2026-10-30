#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Apricot::ApricotListenner::vf29 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00983350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x983350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_FWD,1);
  }
  return;
}

/* ref: Apricot::ApricotListenner::vf22 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00983370(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(undefined4 * param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x983370u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;)
  undefined4 uVar1;
  undefined4 in_EAX = 0;
  undefined4 * puVar2;
  
  puVar2 = ((undefined4 *)GEN_TOP(CONCAT31((int3)((uint)in_EAX >> 8),param_2)));
  *((char *)GEN_TOP((in_ecx + 0xa0))) = param_2;
  if (param_2 != '\0') {
    if (param_6 < 0.0) {
      param_6 = 0.0;
    }
    if ((float10)param_7 <= (float10)param_6) {
      param_7 = (float)((float10)param_6 + (float10)*(double *)&REFG(undefined, 0x10928e8));
    }
    *((float *)GEN_TOP((in_ecx + 0xa4))) = param_3;
    *((float *)GEN_TOP((in_ecx + 0xa8))) = param_4;
    *((float *)GEN_TOP((in_ecx + 0xac))) = param_5;
    *((undefined4 *)GEN_TOP((in_ecx + 0xb0))) = *param_8;
    uVar1 = param_8[1];
    *((float *)GEN_TOP((in_ecx + 0xc0))) = param_6;
    *((float *)GEN_TOP((in_ecx + 0xc4))) = param_6;
    *((undefined4 *)GEN_TOP((in_ecx + 0xb4))) = uVar1;
    *((float *)GEN_TOP((in_ecx + 200))) = param_7;
    *((float *)GEN_TOP((in_ecx + 0xcc))) = param_7;
    puVar2 = param_8;
  }
  return (uint)puVar2;
}

/* ref: Apricot::ApricotListenner::vf23 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00983420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x983420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x60, 0);
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float * pfVar5;
  float * pfVar6;
  float10 fVar7;
  
  if (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0))) {
    fVar1 = *((float *)GEN_TOP(((int)REFG(void * PTR32, 0x1379694) + 0xb0)));
    (*(float *)(gen_frame + 0x4c)) = fVar1;
    fVar7 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    fVar2 = (float)fVar7;
    (*(float *)(gen_frame + 0x48)) = fVar2;
    fVar7 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    fVar1 = (float)fVar7;
    (*(float *)(gen_frame + 0x4c)) = fVar1;
    ((float *)(gen_frame + 0x0))[0] = fVar1;
    (*(float *)(gen_frame + 0x20)) = fVar2;
    ((float *)(gen_frame + 0x0))[2] = ((float)GEN_TOF(-(float10)fVar2));
    ((float *)(gen_frame + 0x0))[1] = 0.0;
    ((float *)(gen_frame + 0x0))[3] = 0.0;
    ((float *)(gen_frame + 0x0))[4] = 0.0;
    ((float *)(gen_frame + 0x0))[5] = gen_bits2f(REFG(float, 0x1087f04));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(float *)(gen_frame + 0x28)) = fVar1;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    uVar3 = F_00a5feb0(REFG(void * PTR32, 0x1379694) GEN_EDX_FWD);
    F_0065f330(((float *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar3);
    pfVar5 = ((float *)(gen_frame + 0x0));
    pfVar6 = param_1;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
  }
  return;
}

/* ref: Apricot::ApricotListenner::vf24 */
GEN_OWN GEN_NOFRAME unsigned int F_00983510(void)
{
  GEN_ENTER(0x983510u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::ApricotListenner::vf25 */
GEN_OWN GEN_NOFRAME uint F_00983520(void)
{
  GEN_ENTER(0x983520u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::ApricotListenner::vf26 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00983530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x983530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xe8))) = 0;
  return;
}

/* ref: Apricot::ApricotListenner::vf27 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00983570(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x983570u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  if ((float10)*((float *)GEN_TOP((in_ecx + 0xd0))) < fVar1) {
    *((float *)GEN_TOP((in_ecx + 0xd0))) = param_2;
    *((float *)GEN_TOP((in_ecx + 0xd4))) = (float)((float10)*param_3 * fVar1);
    *((float *)GEN_TOP((in_ecx + 0xd8))) = (float)((float10)param_3[1] * fVar1);
    *((float *)GEN_TOP((in_ecx + 0xdc))) = (float)((float10)param_3[2] * fVar1);
    *((float *)GEN_TOP((in_ecx + 0xe0))) = (float)((float10)*param_4 * fVar1);
    *((float *)GEN_TOP((in_ecx + 0xe4))) = (float)((float10)param_4[1] * fVar1);
    *((float *)GEN_TOP((in_ecx + 0xe8))) = (float)(fVar1 * (float10)param_4[2]);
    return;
  }
  return;
}

/* ref: Apricot::ApricotListenner::vf32 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009835e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9835e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Apricot::ApricotListenner::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009835f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x9835f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  if (*((int *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8))) != 0) {
    uVar1 = F_004e95a0(*((int *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8))) GEN_EDX_FWD,param_1,(float)(float10)1,0,*param_3,
                         param_3[1],param_3[2],(float)(float10)1,0,param_2,0);
    return uVar1;
  }
  return 0;
}

/* ref: Apricot::ApricotListenner::vf34 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00983650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x983650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x137104c);
  if ((*((int *)GEN_TOP((REFG(undefined4, 0x137104c) + 0x25f8))) != 0) && (param_1 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x50))))(param_1 GEN_EDX_FWD,500);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x78))))(param_1 GEN_EDX_ARG,500);
  }
  return uVar1;
}

/* ref: Apricot::ApricotListenner::vf35 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00983690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x983690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x44))))(param_1 GEN_EDX_FWD,*param_2,param_2[1],param_2[2]);
  }
  return;
}

/* ref: Apricot::ApricotDeviceListenner::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009836d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9836d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pAVar1;
  uint uVar2;
  
  pAVar1 = this + 8;
  *(int *)pAVar1 = *(int *)pAVar1 - 1;
  uVar2 = *(uint *)(this + 8);
  if (*(int *)pAVar1 == 0) {
    (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  }
  return uVar2;
}

/* ref: Apricot::ApricotDeviceListenner::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009836f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9836f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP((in_ecx + 8))) + 1;
  *((uint *)GEN_TOP((in_ecx + 8))) = uVar1;
  return uVar1;
}

/* ref: Apricot::ApricotDeviceListenner::vf17 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00983700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x983700u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  *(uint *)(this + param_1 * 4 + 0x240) =
       *(uint *)(this + param_1 * 4 + 0x240) ^
       ((uint)(&REFG(undefined * PTR32, 0x10de6ec))[(int)(param_2)] ^ *(uint *)(this + param_1 * 4 + 0x240)) & 3;
  *(uint *)(this + param_1 * 4 + 0x240) =
       ((uint)(&REFG(undefined * PTR32, 0x10de6ec))[(int)(param_3)] & 3 | 8) * 4 |
       *(uint *)(this + param_1 * 4 + 0x240) & 0xffffffe3;
  return param_1;
}

/* ref: Apricot::ApricotDeviceListenner::vf31 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00983750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x983750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  return;
}

/* ref: Apricot::ApricotDeviceListenner::vf32 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00983760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x983760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Apricot::ApricotDeviceListenner::vf33 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00983770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x983770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Apricot::ApricotDeviceListenner::vf34 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00983780(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x983780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x26e))) = param_2;
  return param_2;
}

/* ref: FUN_00983790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00983790(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x983790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x10de6fc));
  puVar2 = param_2;
  puVar3 = in_ecx + 4;
  for (iVar1 = 0x58; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: FUN_009837b0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009837b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9837b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x10b2a9c));
  return;
}

/* ref: FUN_009837c0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_009837c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9837c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_FRAME_DECL(0xb0, 0);
  undefined4 uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = param_2;
  puVar2 = ((undefined4 *)GEN_TOP(F_004ef350(((undefined1 *)(gen_frame + 0x50)),in_ecx + 0x10,param_3)));
  puVar4 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = ((undefined4 *)(gen_frame + 0x0))[0];
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[1] = ((undefined4 *)(gen_frame + 0x0))[1];
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[2] = ((undefined4 *)(gen_frame + 0x0))[2];
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[4] = (*(undefined4 *)(gen_frame + 0x10));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[3] = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[5] = (*(undefined4 *)(gen_frame + 0x14));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[7] = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[0xb] = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[6] = (*(undefined4 *)(gen_frame + 0x18));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[0xc] = (*(undefined4 *)(gen_frame + 0x30));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[8] = (*(undefined4 *)(gen_frame + 0x20));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[0xd] = (*(undefined4 *)(gen_frame + 0x34));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[9] = (*(undefined4 *)(gen_frame + 0x24));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[0xe] = (*(undefined4 *)(gen_frame + 0x38));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[10] = (*(undefined4 *)(gen_frame + 0x28));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[0xf] = uVar1;
  return 1;
}

/* ref: FUN_00983930 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00983930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x983930u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x60, 0);
  byte bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  bVar1 = F_00a5fcc0(param_3 GEN_EDX_FWD,param_2);
  if (bVar1 == 0) {
    bVar1 = 0;
  }
  else {
    uVar2 = F_00a608f0(param_3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_2);
    bVar1 = F_009837c0(this GEN_EDX_ARG,param_1,uVar2);
  }
  return bVar1;
}

/* ref: FUN_009839b0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_009839b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x9839b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x60, 0);
  byte bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0x50))))(param_3 GEN_EDX_FWD,param_2);
  if ((char)uVar2 == '\0') {
    bVar1 = 0;
  }
  else {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0x40))))(param_3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_2);
    bVar1 = F_009837c0(this GEN_EDX_ARG,param_1,uVar2);
  }
  return bVar1;
}

/* ref: FUN_00983a30 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_00983a30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x983a30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x60, 0);
  uint uVar1;
  bool bVar2;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0x50))))(param_3 GEN_EDX_ARG,param_2);
  bVar2 = (char)uVar1 != '\0';
  if (bVar2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0x40))))(param_3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_2);
    *param_1 = (*(undefined4 *)(gen_frame + 0x30));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x34));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x38));
  }
  return bVar2;
}

/* ref: Apricot::ApricotInstanceListenner::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00983ac0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x983ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x98)));
}

/* ref: Apricot::ApricotInstanceListenner::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00983ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x983ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return param_1;
}

/* ref: FUN_00983ae0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00983ae0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x983ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP((in_ecx + 0x10)));
  for (iVar1 = 0x58; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: Apricot::ApricotCommunicatorInstanceListenner::vf2 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00983b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x983b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (REFG(int, 0x1379694) != 0) {
    *param_1 = *((undefined4 *)GEN_TOP((REFG(int, 0x1379694) + 0xb8)));
    return 1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
  return 1;
}

/* ref: Apricot::ApricotCommunicatorInstanceListenner::vf3 */
GEN_OWN GEN_NOFRAME uint F_00983b50(void)
{
  GEN_ENTER(0x983b50u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_005369a0(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG);
  if ((uVar1 == 0) && (REFG(int, 0x1379694) == 0)) {
    return 8;
  }
  return 1;
}

/* ref: Apricot::ApricotCommunicatorInstanceListenner::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00983b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x983b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return param_1;
}

/* ref: Apricot::ApricotCommunicatorInstanceListenner::vf6 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00983b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x983b90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005369a0(&REFG(undefined4, 0x1375b90) GEN_EDX_FWD);
  if ((uVar1 == 0) && (uVar1 = REFG(undefined4, 0x1379694), REFG(undefined4, 0x1379694) == 0)) {
    *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1087f04));
    return 1;
  }
  *param_2 = *((undefined4 *)GEN_TOP((uVar1 + 0xb8)));
  return 1;
}

/* ref: Apricot::ApricotCommunicatorInstanceListenner::vf7 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00983bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x983bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  GEN_FRAME_DECL(0x60, 0);
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  float10 fVar5;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  piVar2 = ((int *)GEN_TOP(F_005369a0(&REFG(undefined4, 0x1375b90) GEN_EDX_FWD)));
  piVar4 = REFG(int * PTR32, 0x1379694);
  if (param_5 != -1) {
    piVar4 = piVar2;
  }
  if ((piVar4 != ((int *)GEN_TOP(0x0))) && (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xb8))))(piVar4 GEN_EDX_ARG), (char)uVar3 != '\0')
     ) {
    if (param_4 == 0) {
      piVar4 = piVar4 + 0x5b0;
    }
    else {
      if (param_4 != 1) {
        return 0;
      }
      piVar4 = piVar4 + 0x798;
    }
    if ((piVar4 != ((int *)GEN_TOP(0x0))) &&
       (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x50))))(piVar4 GEN_EDX_ARG,3), (char)uVar3 != '\0')) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x40))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),3);
      *param_1 = (*(float *)(gen_frame + 0x30));
      param_1[1] = (*(float *)(gen_frame + 0x34));
      param_1[2] = (*(float *)(gen_frame + 0x38));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x50))))(piVar4 GEN_EDX_ARG,5);
      if ((char)uVar3 != '\0') {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x40))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),5);
        *param_3 = (*(float *)(gen_frame + 0x30));
        param_3[1] = (*(float *)(gen_frame + 0x34));
        param_3[2] = (*(float *)(gen_frame + 0x38));
        bVar1 = F_00983a30(param_2,4,piVar4);
        if (bVar1 == 0) {
          fVar5 = (float10)REFG(double, 0x1088108);
          *param_2 = ((float)GEN_TOF((((float10)*param_1 + (float10)*param_3) * fVar5)));
          param_2[1] = ((float)GEN_TOF((((float10)param_1[1] + (float10)param_3[1]) * fVar5)));
          param_2[2] = ((float)GEN_TOF((((float10)param_1[2] + (float10)param_3[2]) * fVar5)));
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00983d50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00983d50(GEN_P(float param_1, float gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x983d50u, gen_trace_f(gen_a0), gen_a1, gen_a2, gen_a3);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar2 = (float10)param_1;
  fVar3 = GEN_X87((float10)(float)(fVar2 * fVar2));
  fVar4 = GEN_X87((float10)(float)(fVar3 * fVar2));
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar6 = GEN_X87(fVar4 * fVar5);
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  *param_2 = ((float)GEN_TOF(((fVar6 - fVar3 * fVar1) + (float10)REFG(double, 0x1088130))));
  *param_3 = (float)(fVar3 * fVar1 - fVar6);
  *param_4 = ((float)GEN_TOF(((fVar4 - fVar3 * fVar5) + fVar2)));
  *param_5 = (float)(fVar4 - fVar3);
  return (uint)param_5;
}

/* ref: FUN_00983db0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00983db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x983db0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  float fVar1;
  float fVar2;
  float * pfVar3;
  float * pfVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_2c;
  float local_28;
  
  pfVar3 = ((float *)GEN_TOP((param_2 * 0x30 + (int)this)));
  fVar7 = (float10)1;
  pfVar4 = ((float *)GEN_TOP(((param_2 * 3 + 6) * 0x10 + (int)this)));
  fVar5 = (float10)*((float *)GEN_TOP((param_2 * 0x30 + 0x54 + (int)this)));
  fVar1 = ((float)GEN_TOF((((float10)pfVar3[0x16] + fVar7) *
                 ((fVar7 - fVar5) * (fVar7 - (float10)pfVar3[0x14])))));
  fVar2 = (float)((float10)pfVar4[4] - (float10)pfVar3[0x10]);
  local_2c = (float)((float10)pfVar4[5] - (float10)pfVar3[0x11]);
  local_28 = (float)((float10)pfVar4[6] - (float10)pfVar3[0x12]);
  if (-1 < param_2 - 1) {
    fVar6 = (float10)fVar1;
    fVar7 = GEN_X87((float10)((float)GEN_TOF(((fVar7 - (float10)pfVar3[0x16]) *
                            ((fVar5 + fVar7) * (fVar7 - (float10)pfVar3[0x14]))))));
    fVar2 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar7 * (float10)(float)((float10)pfVar3[0x10] -
                                                             (float10)pfVar3[4])))) +
                   (float10)(float)(fVar6 * (float10)fVar2))));
    local_2c = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)pfVar3[0x11] - (float10)pfVar3[5])
                                       * fVar7))) + (float10)(float)((float10)local_2c * fVar6))));
    local_28 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar7 * (float10)(float)((float10)pfVar3[0x12] -
                                                                (float10)pfVar3[6])))) +
                      (float10)(float)(fVar6 * (float10)local_28))));
    fVar1 = ((float)GEN_TOF((((float10)*pfVar4 - (float10)pfVar3[0xc]) /
                   ((float10)*pfVar4 - (float10)*pfVar3))));
  }
  fVar7 = (float10)fVar1;
  *param_1 = (float)(fVar7 * (float10)fVar2);
  param_1[1] = (float)((float10)local_2c * fVar7);
  param_1[2] = (float)(fVar7 * (float10)local_28);
  return (uint)param_1;
}

/* ref: FUN_00983f30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00983f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x983f30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  float fVar1;
  float fVar2;
  int iVar3;
  float * pfVar4;
  float * pfVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float local_2c;
  float local_28;
  
  iVar3 = (param_2 + 2) * 0x30;
  pfVar4 = ((float *)GEN_TOP((iVar3 + (int)this)));
  fVar9 = (float10)1;
  pfVar6 = ((float *)GEN_TOP(((param_2 * 3 + 3) * 0x10 + (int)this)));
  fVar7 = (float10)*((float *)GEN_TOP((iVar3 + 0x24 + (int)this)));
  fVar1 = ((float)GEN_TOF(((fVar9 - (float10)pfVar4[10]) * ((fVar7 + fVar9) * (fVar9 - (float10)pfVar4[8])))));
  fVar2 = (float)((float10)pfVar4[4] - (float10)pfVar6[4]);
  local_2c = (float)((float10)pfVar4[5] - (float10)pfVar6[5]);
  local_28 = (float)((float10)pfVar4[6] - (float10)pfVar6[6]);
  if (param_2 + 2 <= *((int *)GEN_TOP(((int)this + 0x24))) - 1) {
    pfVar5 = ((float *)GEN_TOP(((param_2 * 3 + 9) * 0x10 + (int)this)));
    fVar8 = (float10)fVar1;
    fVar9 = GEN_X87((float10)((float)GEN_TOF((((float10)pfVar4[10] + fVar9) *
                            ((fVar9 - fVar7) * (fVar9 - (float10)pfVar4[8]))))));
    fVar2 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar9 * (float10)(float)((float10)pfVar5[4] -
                                                             (float10)pfVar4[4])))) +
                   (float10)(float)(fVar8 * (float10)fVar2))));
    local_2c = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)pfVar5[5] - (float10)pfVar4[5]) *
                                       fVar9))) + (float10)(float)((float10)local_2c * fVar8))));
    local_28 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar9 * (float10)(float)((float10)pfVar5[6] -
                                                                (float10)pfVar4[6])))) +
                      (float10)(float)(fVar8 * (float10)local_28))));
    fVar1 = ((float)GEN_TOF((((float10)*pfVar4 - (float10)*pfVar6) / ((float10)*pfVar5 - (float10)*pfVar6))));
  }
  fVar9 = (float10)fVar1;
  *param_1 = (float)(fVar9 * (float10)fVar2);
  param_1[1] = (float)((float10)local_2c * fVar9);
  param_1[2] = (float)(fVar9 * (float10)local_28);
  return (uint)param_1;
}

/* ref: FUN_00984260 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00984260(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x984260u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x60, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float * pfVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  
  fVar10 = (float10)param_3;
  iVar6 = *param_4;
  iVar7 = *((int *)GEN_TOP(((int)param_1 + 0x24))) - 1;
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = param_1;
  iVar8 = iVar7;
  if (iVar6 < iVar7) {
    pfVar9 = ((float *)GEN_TOP(((iVar6 * 3 + 6) * 0x10 + (int)param_1)));
    do {
      iVar8 = iVar6;
      if ((!GEN_ISNAN((float10)*pfVar9) && !GEN_ISNAN(fVar10)) && !((float10)*pfVar9 < fVar10)) break;
      iVar6 = iVar6 + 1;
      pfVar9 = pfVar9 + 0xc;
      iVar8 = iVar7;
    } while (iVar6 < iVar7);
  }
  iVar6 = (iVar8 * 3 + 3) * 0x10;
  (*(float *)(gen_frame + 0x4c)) = *((float *)GEN_TOP((iVar6 + (int)param_1)));
  fVar11 = (float10)*((float *)GEN_TOP((iVar6 + (int)param_1)));
  pfVar9 = ((float *)GEN_TOP(((iVar8 * 3 + 6) * 0x10 + (int)param_1)));
  (*(float * PTR32 *)(gen_frame + 0x44)) = pfVar9;
  (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF(((fVar10 - fVar11) / ((float10)*pfVar9 - fVar11))));
  F_00983f30(param_1 GEN_EDX_FWD,&(*(float *)(gen_frame + 0x0)),iVar8);
  F_00983db0((*(undefined * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x10)),iVar8);
  fVar12 = (float10)(*(float *)(gen_frame + 0x4c));
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(fVar12 * fVar12))));
  fVar13 = GEN_X87((float10)(float)(fVar12 * fVar12));
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(fVar13 * fVar12))));
  fVar14 = GEN_X87((float10)(float)(fVar13 * fVar12));
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(fVar14 - fVar13))));
  fVar15 = (float10)(*(float *)(gen_frame + 0x0));
  fVar16 = GEN_X87((float10)(float)(fVar14 - fVar13));
  fVar10 = (float10)(*(float *)(gen_frame + 0x4));
  fVar11 = (float10)(*(float *)(gen_frame + 0x8));
  fVar1 = ((float)GEN_TOF(((fVar14 - fVar13 * (float10)*(double *)&REFG(undefined, 0x1092098)) + fVar12)));
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar1)));
  fVar17 = (float10)(*(float *)(gen_frame + 0x10));
  fVar18 = (float10)fVar1;
  (*(float *)(gen_frame + 0x0)) = (float)(fVar18 * fVar17);
  fVar19 = (float10)(*(float *)(gen_frame + 0x14));
  (*(float *)(gen_frame + 0x4)) = (float)(fVar19 * fVar18);
  fVar12 = (float10)(*(float *)(gen_frame + 0x18));
  (*(float *)(gen_frame + 0x8)) = (float)(fVar18 * fVar12);
  fVar14 = GEN_X87(fVar14 * (float10)*(double *)&REFG(undefined, 0x1092098));
  fVar1 = (float)(fVar13 * (float10)*(double *)&REFG(undefined, 0x10944e0) - fVar14);
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar1)));
  pfVar9 = (*(float * PTR32 *)(gen_frame + 0x44)) + 4;
  fVar20 = (float10)fVar1;
  (*(float *)(gen_frame + 0x20)) = (float)(fVar20 * (float10)*pfVar9);
  fVar1 = (*(float * PTR32 *)(gen_frame + 0x44))[5];
  (*(float *)(gen_frame + 0x24)) = (float)((float10)fVar1 * fVar20);
  fVar2 = (*(float * PTR32 *)(gen_frame + 0x44))[6];
  (*(float *)(gen_frame + 0x28)) = (float)(fVar20 * (float10)fVar2);
  fVar3 = ((float)GEN_TOF(((fVar14 - fVar13 * (float10)*(double *)&REFG(undefined, 0x10944e0)) + (float10)REFG(double, 0x1088130))));
  (*(float * PTR32 *)(gen_frame + 0x44)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar3)));
  fVar13 = (float10)fVar3;
  fVar3 = ((float)GEN_TOF((fVar13 * (float10)*((float *)GEN_TOP(((int)param_1 + iVar6 + 0x10))))));
  (*(float *)(gen_frame + 0x30)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + iVar6 + 0x14))) * fVar13)));
  (*(float *)(gen_frame + 0x34)) = fVar4;
  fVar5 = ((float)GEN_TOF((fVar13 * (float10)*((float *)GEN_TOP(((int)param_1 + iVar6 + 0x18))))));
  (*(float *)(gen_frame + 0x38)) = fVar5;
  fVar3 = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)(fVar20 * (float10)*pfVar9))));
  (*(float *)(gen_frame + 0x10)) = fVar3;
  fVar1 = ((float)GEN_TOF(((float10)fVar4 + (float10)(float)((float10)fVar1 * fVar20))));
  (*(float *)(gen_frame + 0x14)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)fVar5 + (float10)(float)(fVar20 * (float10)fVar2))));
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)(fVar18 * fVar17))));
  (*(float *)(gen_frame + 0x20)) = fVar3;
  fVar1 = ((float)GEN_TOF(((float10)fVar1 + (float10)(float)(fVar19 * fVar18))));
  (*(float *)(gen_frame + 0x24)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)fVar2 + (float10)(float)(fVar18 * fVar12))));
  (*(float *)(gen_frame + 0x28)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)(fVar16 * fVar15))));
  (*(float *)(gen_frame + 0x0)) = fVar3;
  fVar1 = ((float)GEN_TOF(((float10)fVar1 + (float10)(float)(fVar16 * fVar10))));
  (*(float *)(gen_frame + 0x4)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)fVar2 + (float10)(float)(fVar16 * fVar11))));
  (*(float *)(gen_frame + 0x8)) = fVar2;
  *param_2 = fVar3;
  param_2[1] = fVar1;
  param_2[2] = fVar2;
  *param_4 = iVar8;
  return 0;
}

/* ref: FUN_00984440 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00984440(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x984440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((uint *)GEN_TOP((in_ecx + 0x1fc))) = *((uint *)GEN_TOP((in_ecx + 0x1fc))) | 1;
    return;
  }
  *((uint *)GEN_TOP((in_ecx + 0x1fc))) = *((uint *)GEN_TOP((in_ecx + 0x1fc))) & 0xfffffffe;
  return;
}

/* ref: FUN_00984460 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00984460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x984460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((uint *)GEN_TOP((in_ecx + 0x200))) = *((uint *)GEN_TOP((in_ecx + 0x200))) | 1;
    return;
  }
  *((uint *)GEN_TOP((in_ecx + 0x200))) = *((uint *)GEN_TOP((in_ecx + 0x200))) & 0xfffffffe;
  return;
}

/* ref: FUN_00984480 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00984480(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x984480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((uint *)GEN_TOP((in_ecx + 0x1fc))) = *((uint *)GEN_TOP((in_ecx + 0x1fc))) | 2;
    return;
  }
  *((uint *)GEN_TOP((in_ecx + 0x1fc))) = *((uint *)GEN_TOP((in_ecx + 0x1fc))) & 0xfffffffd;
  return;
}

/* ref: FUN_009844a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_009844a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9844a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((uint *)GEN_TOP((in_ecx + 0x200))) = *((uint *)GEN_TOP((in_ecx + 0x200))) | 2;
    return;
  }
  *((uint *)GEN_TOP((in_ecx + 0x200))) = *((uint *)GEN_TOP((in_ecx + 0x200))) & 0xfffffffd;
  return;
}

/* ref: FUN_009844c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009844c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x9844c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a7;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)this = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_6;
  uVar1 = *param_7;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return (uint)this;
}

/* ref: FUN_00984530 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00984530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x984530u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar3 = (float10)param_2;
  *((float *)GEN_TOP((in_ecx + 0x18))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x18))) +
              (((float10)*(double *)&REFG(undefined, 0x1094560) * fVar3) / (float10)*(double *)&REFG(undefined, 0x1094568)) /
              (float10)*((float *)GEN_TOP((in_ecx + 0x2c))))));
  fVar2 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  *((float *)GEN_TOP((in_ecx + 0x1c))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x1c))) +
              ((fVar3 * fVar2) / (float10)*(double *)&REFG(undefined, 0x1088120)) /
              (float10)*((float *)GEN_TOP((in_ecx + 0x2c))))));
  *((float *)GEN_TOP((in_ecx + 0x20))) =
       ((float)GEN_TOF(((fVar3 * fVar2) / (float10)*(double *)&REFG(undefined, 0x10de740) +
              (float10)*((float *)GEN_TOP((in_ecx + 0x20))))));
  fVar1 = ((float)GEN_TOF((fVar3 / (float10)*(double *)&REFG(undefined, 0x10943d8) + (float10)*((float *)GEN_TOP((in_ecx + 0x24))))));
  *((float *)GEN_TOP((in_ecx + 0x24))) = fVar1;
  if ((float10)1 < (float10)fVar1) {
    *((undefined4 *)GEN_TOP((in_ecx + 0x24))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((in_ecx + 0x24))), REFG(float, 0x1087f04));
  }
  return;
}

/* ref: FUN_009845c0 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_009845c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x9845c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x60, 0);
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0xb8))))(param_2 GEN_EDX_ARG);
  if ((char)uVar2 == '\0') {
    if (param_3 != 0x3d) {
      bVar1 = F_00a5fcc0(param_2 GEN_EDX_ARG,param_3);
      if (bVar1 == 0) goto LAB_00984684;
      F_00a608f0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_3);
      goto LAB_0098461a;
    }
  }
  else if (param_3 != 0x3d) {
    bVar1 = F_00a5fcc0(param_2 GEN_EDX_ARG,param_3);
    if (bVar1 == 0) {
LAB_00984684: ;
      puVar3 = ((undefined4 *)GEN_TOP(F_00a5feb0(param_2 GEN_EDX_ARG)));
      *param_1 = *puVar3;
      param_1[1] = puVar3[1];
      param_1[2] = puVar3[2];
      return (uint)param_1;
    }
    F_00a608f0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_3);
    goto LAB_0098461a;
  }
  F_00a60ca0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_4,0);
LAB_0098461a: ;
  *param_1 = (*(undefined4 *)(gen_frame + 0x30));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x34));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x38));
  return (uint)param_1;
}

/* ref: FUN_009846c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_009846c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9846c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int * piVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  piVar4 = ((int *)GEN_TOP(((int)this + 0x94)));
  iVar5 = 0x20;
  fVar6 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))) *
                          (float10)*(double *)&REFG(undefined, 0x10943d8)))));
  fVar7 = (float10)*(double *)&REFG(undefined, 0x1094560);
  fVar8 = (float10)*(double *)&REFG(undefined, 0x1094568);
  fVar9 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  fVar10 = (float10)*(double *)&REFG(undefined, 0x1088120);
  fVar11 = (float10)*(double *)&REFG(undefined, 0x10de740);
  do {
    iVar2 = piVar4[-1];
    if (iVar2 != 0) {
      *((float *)GEN_TOP((iVar2 + 0x18))) =
           ((float)GEN_TOF((((fVar6 * fVar7) / fVar8) / (float10)*((float *)GEN_TOP((iVar2 + 0x2c))) +
                  (float10)*((float *)GEN_TOP((iVar2 + 0x18))))));
      *((float *)GEN_TOP((iVar2 + 0x1c))) =
           ((float)GEN_TOF((((fVar6 * fVar9) / fVar10) / (float10)*((float *)GEN_TOP((iVar2 + 0x2c))) +
                  (float10)*((float *)GEN_TOP((iVar2 + 0x1c))))));
      *((float *)GEN_TOP((iVar2 + 0x20))) =
           ((float)GEN_TOF(((float10)(double)(fVar6 * fVar9) / fVar11 + (float10)*((float *)GEN_TOP((iVar2 + 0x20))))));
      fVar1 = ((float)GEN_TOF((fVar6 / (float10)*(double *)&REFG(undefined, 0x10943d8) + (float10)*((float *)GEN_TOP((iVar2 + 0x24))))))
      ;
      *((float *)GEN_TOP((iVar2 + 0x24))) = fVar1;
      if ((float10)1 < (float10)fVar1) {
        *((undefined4 *)GEN_TOP((iVar2 + 0x24))) = uVar3;
      }
    }
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      *((float *)GEN_TOP((iVar2 + 0x18))) =
           ((float)GEN_TOF((((fVar6 * fVar7) / fVar8) / (float10)*((float *)GEN_TOP((iVar2 + 0x2c))) +
                  (float10)*((float *)GEN_TOP((iVar2 + 0x18))))));
      *((float *)GEN_TOP((iVar2 + 0x1c))) =
           ((float)GEN_TOF((((fVar6 * fVar9) / fVar10) / (float10)*((float *)GEN_TOP((iVar2 + 0x2c))) +
                  (float10)*((float *)GEN_TOP((iVar2 + 0x1c))))));
      *((float *)GEN_TOP((iVar2 + 0x20))) =
           ((float)GEN_TOF(((float10)(double)(fVar6 * fVar9) / fVar11 + (float10)*((float *)GEN_TOP((iVar2 + 0x20))))));
      fVar1 = ((float)GEN_TOF((fVar6 / (float10)*(double *)&REFG(undefined, 0x10943d8) + (float10)*((float *)GEN_TOP((iVar2 + 0x24))))))
      ;
      *((float *)GEN_TOP((iVar2 + 0x24))) = fVar1;
      if ((float10)1 < (float10)fVar1) {
        *((undefined4 *)GEN_TOP((iVar2 + 0x24))) = uVar3;
      }
    }
    iVar2 = piVar4[1];
    if (iVar2 != 0) {
      *((float *)GEN_TOP((iVar2 + 0x18))) =
           ((float)GEN_TOF((((fVar6 * fVar7) / fVar8) / (float10)*((float *)GEN_TOP((iVar2 + 0x2c))) +
                  (float10)*((float *)GEN_TOP((iVar2 + 0x18))))));
      *((float *)GEN_TOP((iVar2 + 0x1c))) =
           ((float)GEN_TOF((((fVar6 * fVar9) / fVar10) / (float10)*((float *)GEN_TOP((iVar2 + 0x2c))) +
                  (float10)*((float *)GEN_TOP((iVar2 + 0x1c))))));
      *((float *)GEN_TOP((iVar2 + 0x20))) =
           ((float)GEN_TOF(((float10)(double)(fVar6 * fVar9) / fVar11 + (float10)*((float *)GEN_TOP((iVar2 + 0x20))))));
      fVar1 = ((float)GEN_TOF((fVar6 / (float10)*(double *)&REFG(undefined, 0x10943d8) + (float10)*((float *)GEN_TOP((iVar2 + 0x24))))))
      ;
      *((float *)GEN_TOP((iVar2 + 0x24))) = fVar1;
      if ((float10)1 < (float10)fVar1) {
        *((undefined4 *)GEN_TOP((iVar2 + 0x24))) = uVar3;
      }
    }
    iVar2 = piVar4[2];
    if (iVar2 != 0) {
      *((float *)GEN_TOP((iVar2 + 0x18))) =
           ((float)GEN_TOF((((fVar6 * fVar7) / fVar8) / (float10)*((float *)GEN_TOP((iVar2 + 0x2c))) +
                  (float10)*((float *)GEN_TOP((iVar2 + 0x18))))));
      *((float *)GEN_TOP((iVar2 + 0x1c))) =
           ((float)GEN_TOF((((fVar6 * fVar9) / fVar10) / (float10)*((float *)GEN_TOP((iVar2 + 0x2c))) +
                  (float10)*((float *)GEN_TOP((iVar2 + 0x1c))))));
      *((float *)GEN_TOP((iVar2 + 0x20))) =
           ((float)GEN_TOF(((float10)(double)(fVar6 * fVar9) / fVar11 + (float10)*((float *)GEN_TOP((iVar2 + 0x20))))));
      fVar1 = ((float)GEN_TOF((fVar6 / (float10)*(double *)&REFG(undefined, 0x10943d8) + (float10)*((float *)GEN_TOP((iVar2 + 0x24))))))
      ;
      *((float *)GEN_TOP((iVar2 + 0x24))) = fVar1;
      if ((float10)1 < (float10)fVar1) {
        *((undefined4 *)GEN_TOP((iVar2 + 0x24))) = uVar3;
      }
    }
    piVar4 = piVar4 + 4;
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  return 0;
}

/* ref: FUN_00984890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00984890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x984890u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a7;)
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 * puVar4;
  int * piVar5;
  
  iVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != param_5) {
    piVar5 = ((int *)GEN_TOP(((int)this + 0x90)));
    while (*piVar5 != 0) {
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 1;
      if (0x7f < iVar3) {
        return (uint)param_1;
      }
    }
    piVar5 = ((int *)GEN_TOP(((int)this + 0x294)));
    *piVar5 = *piVar5 + 1;
    if (*piVar5 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x294))) = 1;
    }
    *((int *)GEN_TOP(((int)this + 0x290))) = *((int *)GEN_TOP(((int)this + 0x290))) + 1;
    *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x294)));
    param_1[1] = iVar3;
    puVar4 = ((undefined4 *)GEN_TOP(F_00406b90(0x30,0,0)));
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar4 = param_2;
      puVar4[2] = param_4;
      puVar4[3] = param_5;
      puVar4[1] = param_3;
      puVar4[4] = param_6;
      uVar1 = *param_1;
      puVar4[5] = *param_7;
      iVar3 = param_1[1];
      puVar4[0xb] = uVar2;
      puVar4[10] = uVar1;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      *((undefined4 * PTR32 *)GEN_TOP(((int)this + iVar3 * 4 + 0x90))) = puVar4;
      return (uint)param_1;
    }
    *((undefined4 *)GEN_TOP(((int)this + param_1[1] * 4 + 0x90))) = 0;
  }
  return (uint)param_1;
}

/* ref: FUN_009849c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009849c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9849c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_009849d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_009849d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x9849d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return;
}

/* ref: FUN_00984a00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00984a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x984a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar2 = F_00406b30(*((int *)GEN_TOP(((int)this + 4))));
    uVar1 = (uint)uVar2;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00984a30 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00984a30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x984a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 8))) != 0;
}

/* ref: FUN_00984a50 */
GEN_OWN GEN_FRAME unsigned int F_00984a50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x984a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&REFG(undefined4, 0x14a06d8))[(int)(iVar1)] == 0) {
      (&REFG(undefined4, 0x14a06d8))[(int)(iVar1)] = param_1;
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return 0;
}

/* ref: FUN_00984a80 */
GEN_OWN GEN_FRAME unsigned int F_00984a80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x984a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  
  piVar1 = &REFG(undefined4, 0x14a06d8);
  do {
    if (*piVar1 == param_1) {
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x14a0718);
  return 0;
}

/* ref: FUN_00984ab0 */
GEN_OWN GEN_NOFRAME uint F_00984ab0(void)
{
  GEN_ENTER(0x984ab0u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  
  if (REFG(int, 0x14a06d0) != 0) {
    F_0050c620(REFG(int, 0x14a06d0),0,0);
    REFG(int, 0x14a06d0) = 0;
  }
  if (REFG(int * PTR32, 0x14a06c4) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a06c4) + 0xc))))(REFG(int * PTR32, 0x14a06c4) GEN_EDX_ARG);
    REFG(int * PTR32, 0x14a06c4) = ((int *)GEN_TOP(0x0));
  }
  if (REFG(int * PTR32, 0x14a06bc) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a06bc) + 0xc))))(REFG(int * PTR32, 0x14a06bc) GEN_EDX_ARG);
    REFG(int * PTR32, 0x14a06bc) = ((int *)GEN_TOP(0x0));
  }
  if (REFG(int * PTR32, 0x14a06c0) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a06c0) + 0xc))))(REFG(int * PTR32, 0x14a06c0) GEN_EDX_ARG);
    REFG(int * PTR32, 0x14a06c0) = ((int *)GEN_TOP(0x0));
  }
  pvVar1 = F_00c48350(&REFG(undefined4, 0x14a06d8),0,0x40);
  return (uint)pvVar1;
}

/* ref: FUN_00984b30 */
GEN_OWN GEN_FRAME unsigned int F_00984b30(GEN_P(char param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x984b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  if (param_1 != '\0') {
    REFG(undefined4, 0x14a06b8) = REFG(undefined4, 0x14a06b8) | 1;
    return;
  }
  REFG(undefined4, 0x14a06b8) = REFG(undefined4, 0x14a06b8) & 0xfffffffe;
  return;
}

/* ref: FUN_00984b50 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00984b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x984b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x10))),0,0x60);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x70))),0,0x40);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xb0))) = 0;
  return 1;
}

/* ref: FUN_00984c30 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00984c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x984c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x78)));
  F_00981430((int)this + 0x48,(uint)puVar1);
  F_00982720((int)this + 0xe8,puVar1,(int)this + 0xa8);
  *(undefined4 *)this = *puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP(((int)this + 0x84)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x90)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP(((int)this + 0x7c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP(((int)this + 0x88)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP(((int)this + 0x94)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP(((int)this + 0x80)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = *((undefined4 *)GEN_TOP(((int)this + 0x8c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *((undefined4 *)GEN_TOP(((int)this + 0x98)));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = *((undefined4 *)GEN_TOP(((int)this + 0x6c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = *((undefined4 *)GEN_TOP(((int)this + 0x70)));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = *((undefined4 *)GEN_TOP(((int)this + 0x74)));
  return;
}

/* ref: FUN_00984cd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00984cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x984cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  short * psVar2;
  ushort uVar3;
  int iVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  uint local_c;
  int local_8;
  
  local_c = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x3a000)));
  if (local_c != 0) {
    local_8 = 0x39000;
    do {
      iVar4 = *((int *)GEN_TOP(((int)this + 0x158)));
      uVar3 = *((ushort *)GEN_TOP((local_8 + iVar4)));
      iVar7 = (uint)uVar3 * 0x68;
      iVar1 = iVar7 + 0x1000 + iVar4;
      if (*((int *)GEN_TOP((iVar7 + 0x103c + iVar4))) != 4) {
        piVar5 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x30)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x30))))(piVar5 GEN_EDX_FWD);
        piVar5 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x30))) + 0x1dc)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xe8))))(piVar5 GEN_EDX_ARG);
        *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x3b004 +
         ((uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x46004 + uVar6 * 2))) + uVar6 * 0x800) * 2)))
             = uVar3;
        psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x46004 + uVar6 * 2)));
        *psVar2 = *psVar2 + 1;
      }
      local_8 = local_8 + 2;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x150))) + 0x54))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x150))) GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_00984d90 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00984d90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6))
{
  GEN_ENTER(0x984d90u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP((param_1 + 0x1164)));
  if (iVar3 < 0x80) {
    puVar1 = ((undefined4 *)GEN_TOP((iVar3 * 0x20 + 0x164 + param_1)));
    *((int *)GEN_TOP((param_1 + 0x1164))) = iVar3 + 1;
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    uVar2 = param_2[2];
    puVar1[3] = (undefined4)gen_fl2bits(param_3);
    puVar1[2] = uVar2;
    puVar1[4] = (undefined4)gen_fl2bits(param_4);
    puVar1[5] = (undefined4)gen_fl2bits(param_5);
    puVar1[6] = (undefined4)gen_fl2bits((float)((float10)param_5 * (float10)param_6));
    puVar1[7] = (undefined4)gen_fl2bits((float)((float10)param_5 * (float10)param_7));
  }
  return;
}

/* ref: FUN_00984e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00984e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x984e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  undefined * this_00;
  int iVar3;
  uint uVar4;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x150)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x158)));
  iVar3 = 0;
  while (*piVar2 != 0) {
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
    if (0x3ff < iVar3) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG);
      return 0;
    }
  }
  if (REFG(char, 0x14a06d6) == '\0') {
    this_00 = ((undefined *)GEN_TOP((REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8))));
    REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + 0xa0;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar4 = F_0097acd0(this_00 GEN_EDX_ARG,iVar3);
      goto LAB_00984e5b;
    }
  }
  else {
    REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + 0xa0;
  }
  uVar4 = 0;
LAB_00984e5b: ;
  *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + iVar3 * 4))) = uVar4;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00984ea0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00984ea0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x984ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,1);
    if ((REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0))) && (uVar1 != 0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
    }
  }
  return;
}

/* ref: FUN_00984ee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00984ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x984ee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if ((param_2 < 0x800) && (param_1 != 0)) {
    uVar3 = param_2 * 0x68;
    iVar1 = *((int *)GEN_TOP(((int)this + 0x158))) + 0x1000 + uVar3;
    if ((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x1040 + uVar3))) == param_1) &&
       (*((int *)GEN_TOP((iVar1 + 0x3c))) != 3)) {
      uVar3 = *((uint *)GEN_TOP((iVar1 + 0x30)));
      if ((uVar3 != 0) && (piVar2 = *((int * PTR32 *)GEN_TOP((uVar3 + 0x270))), piVar2 != ((int *)GEN_TOP(0x0)))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_FWD,iVar1);
      }
      *((undefined4 *)GEN_TOP((iVar1 + 0x3c))) = 3;
    }
  }
  return uVar3;
}

/* ref: FUN_00984f40 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00984f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x984f40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if ((((param_2 < 0x800) && (param_1 != 0)) &&
      (uVar3 = *((int *)GEN_TOP(((int)this + 0x158))) + 0x1000 + param_2 * 0x68,
      *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x1040 + param_2 * 0x68))) == param_1)) &&
     ((iVar1 = *((int *)GEN_TOP((uVar3 + 0x30))), iVar1 != 0 && (uVar3 = *((int *)GEN_TOP((uVar3 + 0x3c))) - 1, uVar3 < 2)
      ))) {
    uVar2 = (ushort)(~(byte)((ushort)*((undefined2 *)GEN_TOP((iVar1 + 0x3ac))) >> 10) & 1) << 10 |
            *((ushort *)GEN_TOP((iVar1 + 0x3ac))) & 0xfbff;
    uVar3 = (uint)uVar2;
    *((ushort *)GEN_TOP((iVar1 + 0x3ac))) = uVar2;
  }
  return (ushort)uVar3;
}

/* ref: FUN_00984fc0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00984fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x984fc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  int iVar2;
  byte bVar3;
  
  if ((((param_2 < 0x800) && (param_1 != 0)) &&
      (iVar1 = *((int *)GEN_TOP(((int)this + 0x158))) + 0x1000 + param_2 * 0x68,
      *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x1040 + param_2 * 0x68))) == param_1)) &&
     (iVar2 = *((int *)GEN_TOP((iVar1 + 0x3c))), iVar2 != 3)) {
    if (iVar2 == 4) {
      return 1;
    }
    iVar1 = *((int *)GEN_TOP((iVar1 + 0x30)));
    if (iVar1 != 0) {
      bVar3 = F_0097ec70(iVar1 GEN_EDX_FWD);
      return bVar3 == 0;
    }
  }
  return 0;
}

/* ref: FUN_00985020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00985020(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x985020u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  uint uVar1;
  
  uVar1 = param_3;
  if (((param_3 < 0x800) && (param_2 != 0)) &&
     (uVar1 = *((int *)GEN_TOP((param_1 + 0x158))) + 0x1000 + param_3 * 0x68,
     *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x158))) + 0x1040 + param_3 * 0x68))) == param_2)) {
    *((byte *)GEN_TOP((uVar1 + 0x62))) = *((byte *)GEN_TOP((uVar1 + 0x62))) ^ (*((byte *)GEN_TOP((uVar1 + 0x62))) ^ param_4) & 1;
  }
  return uVar1;
}

/* ref: FUN_00985060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00985060(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x985060u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  uint uVar1;
  
  uVar1 = param_3;
  if (((param_3 < 0x800) && (param_2 != 0)) &&
     (uVar1 = *((int *)GEN_TOP((param_1 + 0x158))) + 0x1000 + param_3 * 0x68,
     *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x158))) + 0x1040 + param_3 * 0x68))) == param_2)) {
    *((byte *)GEN_TOP((uVar1 + 0x62))) =
         *((byte *)GEN_TOP((uVar1 + 0x62))) ^ (param_4 * '\x02' ^ *((byte *)GEN_TOP((uVar1 + 0x62)))) & 2;
  }
  return uVar1;
}

/* ref: FUN_009850a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009850a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x9850a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = param_2;
  if ((((param_2 < 0x800) && (param_1 != 0)) &&
      (uVar1 = *((int *)GEN_TOP(((int)this + 0x158))) + 0x1000 + param_2 * 0x68,
      *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x1040 + param_2 * 0x68))) == param_1)) &&
     (*((int *)GEN_TOP((uVar1 + 0x30))) != 0)) {
    *((byte *)GEN_TOP((uVar1 + 0x5e))) = (byte)param_4;
    *((ushort *)GEN_TOP((uVar1 + 0x60))) = *((ushort *)GEN_TOP((uVar1 + 0x60))) | 1 << GEN_SHC((byte)param_4, (unsigned int)(uintptr_t)param_4);
  }
  return uVar1;
}

/* ref: FUN_009850f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009850f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x9850f0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  uint uVar1;
  
  uVar1 = param_3;
  if ((((param_3 < 0x800) && (param_2 != 0)) &&
      (uVar1 = *((int *)GEN_TOP((param_1 + 0x158))) + 0x1000 + param_3 * 0x68,
      *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x158))) + 0x1040 + param_3 * 0x68))) == param_2)) &&
     ((uVar1 = *((uint *)GEN_TOP((uVar1 + 0x30))), uVar1 != 0 &&
      (((*((uint *)GEN_TOP((uVar1 + 0x1d0))) & 0x40000) == 0 || (*((int *)GEN_TOP((uVar1 + 0x1e0))) != 0)))))) {
    *((float *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x1ec))) + 0x94))) = param_4;
  }
  return uVar1;
}

/* ref: FUN_00985150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00985150(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x985150u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  uint uVar1;
  
  uVar1 = param_3;
  if ((((param_3 < 0x800) && (param_2 != 0)) &&
      (uVar1 = *((int *)GEN_TOP((param_1 + 0x158))) + 0x1000 + param_3 * 0x68,
      *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x158))) + 0x1040 + param_3 * 0x68))) == param_2)) &&
     ((uVar1 = *((uint *)GEN_TOP((uVar1 + 0x30))), uVar1 != 0 &&
      (((*((uint *)GEN_TOP((uVar1 + 0x1d0))) & 0x40000) == 0 || (*((int *)GEN_TOP((uVar1 + 0x1e0))) != 0)))))) {
    *((float *)GEN_TOP((uVar1 + 0x318))) = param_4;
  }
  return uVar1;
}

/* ref: FUN_009851b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009851b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x9851b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = param_2;
  if (((param_2 < ((undefined4 *)GEN_TOP(0x800))) && (param_1 != 0)) &&
     (puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x1000 + (int)((int)(uintptr_t)param_2) * 0x68))),
     *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x1040 + (int)((int)(uintptr_t)param_2) * 0x68))) == param_1)) {
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
    puVar2[3] = param_3[4];
    puVar2[4] = param_3[5];
    puVar2[5] = param_3[6];
    puVar2[6] = param_3[8];
    puVar2[7] = param_3[9];
    puVar2[8] = param_3[10];
    puVar2[9] = param_3[0xc];
    puVar2[10] = param_3[0xd];
    piVar1 = ((int *)GEN_TOP(puVar2[0xc]));
    puVar2[0xb] = param_3[0xe];
    if ((piVar1 != ((int *)GEN_TOP(0x0))) && (((piVar1[0x74] & 0x40000U) == 0 || (piVar1[0x78] != 0)))) {
      puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD,puVar2)));
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00985260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00985260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(float param_2, float gen_a2), GEN_P(char * param_3, unsigned int gen_a3), GEN_P(float * param_4, unsigned int gen_a4), GEN_P(float * param_5, unsigned int gen_a5), GEN_P(float * param_6, unsigned int gen_a6), GEN_P(float * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x985260u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(float param_2 = (float)gen_a2;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a5;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a7;)
  int * piVar1;
  int iVar2;
  float fVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  
  *param_3 = '\0';
  fVar3 = param_2;
  if (((((uint)gen_fl2bits(param_2) < 0x800) && (param_1 != 0)) &&
      (fVar3 = gen_bits2f((int)gen_fl2bits(param_2) * 0x68 + 0x1000 + *((int *)GEN_TOP(((int)this + 0x158)))),
      *((int *)GEN_TOP(((int)gen_fl2bits(param_2) * 0x68 + 0x1040 + *((int *)GEN_TOP(((int)this + 0x158)))))) == param_1))
     && ((fVar3 = *((float *)GEN_TOP(((int)gen_fl2bits(fVar3) + 0x30))), fVar3 != 0.0 &&
         (((*((uint *)GEN_TOP(((int)gen_fl2bits(fVar3) + 0x1d0))) & 0x40000) == 0 ||
          (*((int *)GEN_TOP(((int)gen_fl2bits(fVar3) + 0x1e0))) != 0)))))) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)gen_fl2bits(fVar3) + 0x1dc)));
    fVar3 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x70))))(piVar1 GEN_EDX_FWD));
    *param_3 = (char)(uint)gen_fl2bits(fVar3);
    if ((char)(uint)gen_fl2bits(fVar3) != '\0') {
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x74))))(piVar1);
      iVar2 = *piVar1;
      *param_4 = (float)extraout_ST0;
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((iVar2 + 0x78))))(piVar1);
      iVar2 = *piVar1;
      *param_5 = (float)extraout_ST0_00;
      extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((iVar2 + 0x7c))))(piVar1);
      iVar2 = *piVar1;
      *param_6 = (float)extraout_ST0_01;
      extraout_ST0_02 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((iVar2 + 0x80))))(piVar1); fVar3 = extraout_ST0_02;
      *param_7 = (float)extraout_ST0_02;
    }
  }
  return (uint)gen_fl2bits(fVar3);
}

/* ref: FUN_00985340 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00985340(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x985340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = (uint)(param_1 - REFG(int, 0x14a09f4)) >> 10;
  *((uint *)GEN_TOP((uVar1 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
  REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
  REFG(undefined4, 0x14a09e8) = uVar1;
  return uVar1;
}

/* ref: FUN_00985370 */
GEN_OWN GEN_FRAME uint F_00985370(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x985370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x68, 8, 4);
  float fVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  undefined4 uVar5;
  
  fVar1 = *((float *)GEN_TOP((param_1 + 0x14)));
  uVar5 = *((undefined4 *)GEN_TOP((param_1 + 8)));
  (*(undefined4 *)(gen_frame + 0x30)) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  (*(undefined4 *)(gen_frame + 0x40)) = uVar5;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  fVar4 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  fVar2 = (float)fVar4;
  (*(float *)(gen_frame + 0x60)) = fVar2;
  fVar4 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  uVar5 = 0;
  (*(float *)(gen_frame + 0x0)) = fVar2;
  (*(float *)(gen_frame + 0x4)) = (float)fVar4;
  (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(-(float10)(float)fVar4));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(float *)(gen_frame + 0x10)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  uVar3 = F_00981ba0(param_2,&(*(float *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x30)));
  fVar4 = (float10)REFG(double, 0x1088108);
  *((float *)GEN_TOP((param_2 + 0x24))) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0xc))) + fVar4)));
  fVar1 = *((float *)GEN_TOP((param_1 + 0x10)));
  *((undefined4 *)GEN_TOP((param_2 + 0x2c))) = uVar5;
  *((float *)GEN_TOP((param_2 + 0x28))) = (float)(fVar4 + (float10)fVar1);
  return uVar3;
}

/* ref: FUN_00985470 */
GEN_OWN GEN_FRAME uint F_00985470(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x985470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  REFG(int, 0x14a09fc) = param_1;
  *(undefined4 *)&REFG(undefined, 0x14a0a00) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0a04) = 0;
  if ((REFG(undefined * PTR32, 0x14a0a14) == ((code *)GEN_TOP(0x0))) || (param_1 == 0)) {
    REFG(undefined4, 0x14a0a08) = 0;
  }
  else {
    REFG(undefined4, 0x14a0a08) = ((code *)REFG(gen_code32, 0x14a0a14))(param_1,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
  }
  if ((REFG(undefined * PTR32, 0x14a0a14) == ((code *)GEN_TOP(0x0))) || (REFG(int, 0x14a09fc) == 0)) {
    REFG(undefined4, 0x14a0a0c) = 0;
  }
  else {
    REFG(undefined4, 0x14a0a0c) = ((code *)REFG(gen_code32, 0x14a0a14))(REFG(int, 0x14a09fc),0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
  }
  uVar1 = 1 - REFG(undefined4, 0x14a09f8);
  REFG(undefined4, 0x14a09f8) = uVar1;
  *(undefined4 *)(&REFG(undefined, 0x14a0a00) + uVar1 * 4) = 0;
  return uVar1;
}

/* ref: FUN_00985510 */
GEN_OWN GEN_FRAME uint F_00985510(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x985510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  iVar1 = (&REFG(undefined4, 0x14a0a08))[(int)(REFG(int, 0x14a09f8))];
  uVar2 = *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
  uVar3 = (param_1 + 0xfU & 0xfffffff0) + uVar2;
  bVar4 = REFG(undefined4, 0x14a09fc) < uVar3;
  *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar3;
  return ~-(uint)bVar4 & iVar1 + uVar2;
}

/* ref: FUN_00985560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00985560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x985560u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x64, 12, 4);
  int * piVar1;
  code * pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  undefined4 * puVar8;
  uint * puVar9;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  iVar7 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0xa0))), REFG(float, 0x132f458));
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0xa4))), REFG(float, 0x132f45c));
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0xa8))), REFG(float, 0x132f460));
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0xac))), REFG(float, 0x132f464));
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0xb0))), REFG(float, 0x132f468));
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0xb4))), REFG(float, 0x132f46c));
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0xb8))), REFG(float, 0x132f470));
  puVar9 = ((uint *)GEN_TOP(((int)this + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0xbc))), REFG(float, 0x132f474));
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0xc0))), REFG(float, 0x132f478));
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0xc4))), REFG(float, 0x132f47c));
  *((undefined4 *)GEN_TOP(((int)this + 200))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 200))), REFG(float, 0x132f480));
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0xcc))), REFG(float, 0x132f484));
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0xd0))), REFG(float, 0x132f488));
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0xd4))), REFG(float, 0x132f48c));
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0xd8))), REFG(float, 0x132f490));
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0xdc))), REFG(float, 0x132f494));
  *((undefined1 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = param_2;
  *(int * PTR32 *)this = param_1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  do {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x1c))))(*(int * PTR32 *)this GEN_EDX_ARG,iVar7);
    *puVar9 = uVar5;
    iVar7 = iVar7 + 1;
    puVar9 = puVar9 + 1;
  } while (iVar7 < 2);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this GEN_EDX_ARG,param_2,1);
  *((uint *)GEN_TOP(((int)this + 0x68))) = uVar5;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x14))))(*(int * PTR32 *)this GEN_EDX_ARG,param_3,1);
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cab8)));
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  piVar1 = *(int * PTR32 *)this;
  *((uint *)GEN_TOP(((int)this + 0x6c))) = uVar5;
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x10)));
  ((undefined4 *)(gen_frame + 0x0))[0] = uVar4;
  ((undefined4 *)(gen_frame + 0x0))[1] = uVar4;
  ((undefined4 *)(gen_frame + 0x0))[2] = uVar4;
  ((undefined4 *)(gen_frame + 0x0))[3] = uVar4;
  (*(undefined4 *)(gen_frame + 0x10)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x14)) = uVar4;
  ((undefined4 *)(gen_frame + 0x18))[0] = uVar4;
  ((undefined4 *)(gen_frame + 0x18))[1] = uVar3;
  ((undefined4 *)(gen_frame + 0x18))[2] = uVar3;
  ((undefined4 *)(gen_frame + 0x18))[3] = uVar4;
  ((undefined4 *)(gen_frame + 0x18))[4] = uVar4;
  ((undefined4 *)(gen_frame + 0x18))[5] = uVar3;
  ((undefined4 *)(gen_frame + 0x18))[6] = uVar3;
  ((undefined4 *)(gen_frame + 0x18))[7] = uVar4;
  ((undefined4 *)(gen_frame + 0x18))[8] = uVar4;
  ((undefined4 *)(gen_frame + 0x18))[9] = uVar3;
  ((undefined4 *)(gen_frame + 0x18))[10] = uVar3;
  ((undefined4 *)(gen_frame + 0x18))[0xb] = uVar4;
  ((undefined4 *)(gen_frame + 0x18))[0xc] = uVar3;
  ((undefined4 *)(gen_frame + 0x18))[0xd] = uVar3;
  ((undefined4 *)(gen_frame + 0x18))[0xe] = uVar3;
  ((undefined4 *)(gen_frame + 0x18))[0xf] = uVar3;
  ((undefined4 *)(gen_frame + 0x18))[0x10] = uVar4;
  ((undefined4 *)(gen_frame + 0x18))[0x11] = uVar3;
  uVar5 = (*pcVar2)(piVar1,0x60,0);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar5;
  puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x70))))(*(int * PTR32 *)this GEN_EDX_ARG,uVar5,0,0x60,0)));
  puVar8 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar7 = 0x18; iVar7 != 0; iVar7 = iVar7 - 1) {
    *puVar6 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar6 = puVar6 + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x78))))(*(int * PTR32 *)this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))));
  ((undefined4 *)(gen_frame + 0x18))[0] = 0x10000;
  ((undefined4 *)(gen_frame + 0x18))[1] = 0x20002;
  ((undefined4 *)(gen_frame + 0x18))[2] = 3;
  ((undefined4 *)(gen_frame + 0x18))[3] = 0x60007;
  ((undefined4 *)(gen_frame + 0x18))[4] = 0x50005;
  ((undefined4 *)(gen_frame + 0x18))[5] = 0x70004;
  ((undefined4 *)(gen_frame + 0x18))[6] = 0x10005;
  ((undefined4 *)(gen_frame + 0x18))[7] = 0;
  ((undefined4 *)(gen_frame + 0x18))[8] = 0x50004;
  ((undefined4 *)(gen_frame + 0x18))[9] = 0x60002;
  ((undefined4 *)(gen_frame + 0x18))[10] = 0x70007;
  ((undefined4 *)(gen_frame + 0x18))[0xb] = 0x20003;
  ((undefined4 *)(gen_frame + 0x18))[0xc] = 0x20006;
  ((undefined4 *)(gen_frame + 0x18))[0x10] = 0;
  ((undefined4 *)(gen_frame + 0x18))[0xd] = 0x10001;
  ((undefined4 *)(gen_frame + 0x18))[0xe] = 0x60005;
  ((undefined4 *)(gen_frame + 0x18))[0xf] = 0x40007;
  ((undefined4 *)(gen_frame + 0x18))[0x11] = 0x70003;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x14))))(*(int * PTR32 *)this GEN_EDX_ARG,0x48,0);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar5;
  puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x6c))))(*(int * PTR32 *)this GEN_EDX_ARG,uVar5,0,0x48,0)));
  puVar8 = ((undefined4 *)(gen_frame + 0x18));
  for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 - 1) {
    *puVar6 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x74))))(*(int * PTR32 *)this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))));
  return uVar5;
}

/* ref: FUN_00985860 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00985860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x985860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  code * pcVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  switch((unsigned int)(uintptr_t)(*param_2 & 7)) {
  case 0: ;
  case 1: ;
    piVar2 = *(int * PTR32 *)this;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 10;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_FWD,param_1,param_2,&(*(undefined4 *)(gen_frame + 0x0)),1);
    break;
  case 2: ;
    (*(undefined4 *)(gen_frame + 0x64)) = 10;
    (*(undefined4 *)(gen_frame + 0x74)) = 10;
    (*(undefined4 *)(gen_frame + 0x84)) = 10;
    (*(undefined4 *)(gen_frame + 0x78)) = 5;
    (*(undefined4 *)(gen_frame + 0x88)) = 5;
    (*(undefined4 *)(gen_frame + 0x98)) = 5;
    (*(undefined4 *)(gen_frame + 0xa8)) = 5;
    (*(undefined4 *)(gen_frame + 0x94)) = 3;
    (*(undefined4 *)(gen_frame + 0xac)) = 3;
    piVar2 = *(int * PTR32 *)this;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    (*(undefined4 *)(gen_frame + 0x6c)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x7c)) = 0;
    (*(undefined4 *)(gen_frame + 0x80)) = 0;
    (*(undefined4 *)(gen_frame + 0x90)) = 0;
    (*(undefined4 *)(gen_frame + 0xa0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8c)) = 1;
    (*(undefined4 *)(gen_frame + 0x9c)) = 2;
    (*(undefined4 *)(gen_frame + 0xa4)) = 4;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1,param_2,&(*(undefined4 *)(gen_frame + 0x60)),5);
    break;
  case 3: ;
    piVar2 = *(int * PTR32 *)this;
    (*(undefined4 *)(gen_frame + 0x74)) = 4;
    (*(undefined4 *)(gen_frame + 0x84)) = 4;
    (*(undefined4 *)(gen_frame + 0x78)) = 5;
    (*(undefined4 *)(gen_frame + 0x88)) = 5;
    (*(undefined4 *)(gen_frame + 0x8c)) = 1;
    (*(undefined4 *)(gen_frame + 0x98)) = 5;
    (*(undefined4 *)(gen_frame + 0xa4)) = 1;
    (*(undefined4 *)(gen_frame + 0xa8)) = 5;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = 0xb;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    (*(undefined4 *)(gen_frame + 0x6c)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x7c)) = 0;
    (*(undefined4 *)(gen_frame + 0x80)) = 0;
    (*(undefined4 *)(gen_frame + 0x90)) = 0;
    (*(undefined4 *)(gen_frame + 0x94)) = 4;
    (*(undefined4 *)(gen_frame + 0x9c)) = 2;
    (*(undefined4 *)(gen_frame + 0xa0)) = 0;
    (*(undefined4 *)(gen_frame + 0xac)) = 3;
    uVar4 = 5;
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar2 + 0xc)));
    puVar3 = &(*(undefined4 *)(gen_frame + 0x60));
    goto LAB_00985ae4;
  case 4: ;
    (*(undefined4 *)(gen_frame + 0x98)) = 5;
    (*(undefined4 *)(gen_frame + 0xa8)) = 5;
    (*(undefined4 *)(gen_frame + 0x64)) = 1;
    (*(undefined4 *)(gen_frame + 0x74)) = 1;
    (*(undefined4 *)(gen_frame + 0x84)) = 1;
    (*(undefined4 *)(gen_frame + 0x88)) = 1;
    (*(undefined4 *)(gen_frame + 0xac)) = 1;
    piVar2 = *(int * PTR32 *)this;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x5c)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x6c)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x7c)) = 0;
    (*(undefined4 *)(gen_frame + 0x80)) = 0;
    (*(undefined4 *)(gen_frame + 0x8c)) = 0;
    (*(undefined4 *)(gen_frame + 0x90)) = 0;
    (*(undefined4 *)(gen_frame + 0x9c)) = 0;
    (*(undefined4 *)(gen_frame + 0xa0)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 7;
    (*(undefined4 *)(gen_frame + 0x68)) = 2;
    (*(undefined4 *)(gen_frame + 0x78)) = 4;
    (*(undefined4 *)(gen_frame + 0x94)) = 7;
    (*(undefined4 *)(gen_frame + 0xa4)) = 7;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1,param_2,&(*(undefined4 *)(gen_frame + 0x50)),6);
    break;
  case 5: ;
    piVar2 = *(int * PTR32 *)this;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x5c)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 5;
    (*(undefined4 *)(gen_frame + 0x64)) = 7;
    (*(undefined4 *)(gen_frame + 0x68)) = 5;
    (*(undefined4 *)(gen_frame + 0x74)) = 7;
    (*(undefined4 *)(gen_frame + 0x78)) = 5;
    (*(undefined4 *)(gen_frame + 0x88)) = 5;
    (*(undefined4 *)(gen_frame + 0x98)) = 5;
    (*(undefined4 *)(gen_frame + 0x14)) = 7;
    (*(undefined4 *)(gen_frame + 0x24)) = 1;
    (*(undefined4 *)(gen_frame + 0x28)) = 2;
    (*(undefined4 *)(gen_frame + 0x34)) = 1;
    (*(undefined4 *)(gen_frame + 0x38)) = 4;
    (*(undefined4 *)(gen_frame + 0x44)) = 1;
    (*(undefined4 *)(gen_frame + 0x48)) = 1;
    (*(undefined4 *)(gen_frame + 0x54)) = 7;
    (*(undefined4 *)(gen_frame + 0x6c)) = 1;
    (*(undefined4 *)(gen_frame + 0x70)) = 1;
    (*(undefined4 *)(gen_frame + 0x7c)) = 2;
    (*(undefined4 *)(gen_frame + 0x80)) = 1;
    (*(undefined4 *)(gen_frame + 0x84)) = 1;
    (*(undefined4 *)(gen_frame + 0x8c)) = 3;
    (*(undefined4 *)(gen_frame + 0x90)) = 1;
    (*(undefined4 *)(gen_frame + 0x94)) = 1;
    (*(undefined4 *)(gen_frame + 0x9c)) = 4;
    (*(undefined4 *)(gen_frame + 0xa0)) = 1;
    (*(undefined4 *)(gen_frame + 0xa4)) = 1;
    (*(undefined4 *)(gen_frame + 0xa8)) = 1;
    (*(undefined4 *)(gen_frame + 0xac)) = 1;
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar2 + 0xc)));
    uVar4 = 10;
    puVar3 = &(*(undefined4 *)(gen_frame + 0x10));
LAB_00985ae4: ;
    (*(undefined4 *)(gen_frame + 0xa4)) = 1;
    (*(undefined4 *)(gen_frame + 0x98)) = 5;
    (*(undefined4 *)(gen_frame + 0x88)) = 5;
    (*(undefined4 *)(gen_frame + 0x78)) = 5;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*pcVar1)(piVar2,param_1,param_2,puVar3,uVar4);
  }
  return (uint)param_1;
}

/* ref: FUN_00985b20 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00985b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x985b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0x74))) != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x78))))(*(int * PTR32 *)this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x68))));
  }
  if (*((int *)GEN_TOP(((int)this + 0x84))) != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x74))))(*(int * PTR32 *)this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x6c))));
  }
  return;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00985b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x985b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if ((-1 < param_1) && (param_1 < *(int *)(this + 8) - *(int *)(this + 4) >> 2)) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 4) + param_1 * 4)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    return uVar2;
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00985ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x985ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x18) - *(int *)(this + 0x14) >> 2)) {
    return *((uint *)GEN_TOP((*(int *)(this + 0x14) + param_1 * 4)));
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf7 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00985bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x985bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if ((-1 < param_1) && (param_1 < *(int *)(this + 8) - *(int *)(this + 4) >> 2)) {
    return *((uint *)GEN_TOP((*(int *)(this + 4) + param_1 * 4)));
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf9 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00985c00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x985c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x24))) + param_2 * 4)));
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00985c10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x985c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x34))) + param_2 * 4)));
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf11 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00985c20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x985c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x44))) + param_2 * 4)));
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf12 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00985c30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x985c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x54))) + param_2 * 4)));
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf13 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00985c40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x985c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 100))) + param_2 * 4)));
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf14 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00985c50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x985c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x74))) + param_2 * 4)));
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00985c60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x985c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 8))) - *((int *)GEN_TOP((in_ecx + 4))) >> 2;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf21 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00985c70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x985c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x18))) - *((int *)GEN_TOP((in_ecx + 0x14))) >> 2;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf22 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00985c80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x985c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x28))) - *((int *)GEN_TOP((in_ecx + 0x24))) >> 2;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf23 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00985c90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x985c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x38))) - *((int *)GEN_TOP((in_ecx + 0x34))) >> 2;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf24 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00985ca0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x985ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x48))) - *((int *)GEN_TOP((in_ecx + 0x44))) >> 2;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00985cb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x985cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x58))) - *((int *)GEN_TOP((in_ecx + 0x54))) >> 2;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf26 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00985cc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x985cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x68))) - *((int *)GEN_TOP((in_ecx + 100))) >> 2;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf27 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00985cd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x985cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x78))) - *((int *)GEN_TOP((in_ecx + 0x74))) >> 2;
}

/* ref: FUN_00985ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00985ce0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x985ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10dda64));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00985d00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00985d00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x985d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10dda70));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00985d20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00985d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x985d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de77c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda98))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x4c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x4c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x14))) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*((int *)GEN_TOP(((int)this + 0x14))))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd268));
  return (uint)pcVar1;
}

/* ref: FUN_00985d90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00985d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x985d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de788));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda98))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x4c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x4c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x14))) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*((int *)GEN_TOP(((int)this + 0x14))))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd250));
  return (uint)pcVar1;
}

/* ref: FUN_00985e00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00985e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x985e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de794));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda98))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x4c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x4c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x14))) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*((int *)GEN_TOP(((int)this + 0x14))))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd244));
  return (uint)pcVar1;
}

/* ref: FUN_00985e70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00985e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x985e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda98))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x4c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x4c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x14))) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*((int *)GEN_TOP(((int)this + 0x14))))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd25c));
  return (uint)pcVar1;
}

/* ref: FUN_00985ee0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00985ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x985ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10de7ac));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xec))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xec))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xb4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xb4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x78))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x7c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x7c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x78))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x44))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x44))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xc))) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*((int *)GEN_TOP(((int)this + 0xc))))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10dd8c8));
  return (uint)pcVar1;
}

/* ref: FUN_00985fa0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00985fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x985fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10de7d0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x338))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x378))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x37c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x37c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x378))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x340))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x344))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x344))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x340))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x338))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2b0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2f0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x2f4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x2f4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2f0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2b8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 700))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 700))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2b8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2b0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x228))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x268))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x26c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x26c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x268))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x230))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x234))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x234))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x230))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x228))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1e0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x1e4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x1e4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1e0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x1ac))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x1ac))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x118))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x158))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x15c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x15c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x158))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x120))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x124))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x124))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x120))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x118))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x90))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xd4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xd4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x98))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x9c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x9c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x98))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x90))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda98))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x4c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x4c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x14))) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*((int *)GEN_TOP(((int)this + 0x14))))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10dd374));
  return (uint)pcVar1;
}

/* ref: FUN_00986240 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00986240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x986240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10de7f8));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x300))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x304))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x304))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x300))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x2cc))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x2cc))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x238))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x278))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x27c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x27c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x278))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x240))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x244))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x244))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x240))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x238))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1f0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 500))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 500))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1f0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x1bc))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x1bc))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x128))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x168))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x16c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x16c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x168))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x130))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x134))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x134))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x130))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x128))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xe4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xe4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xac))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xac))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x5c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x5c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x24))) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*((int *)GEN_TOP(((int)this + 0x24))))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10dd39c));
  return (uint)pcVar1;
}

/* ref: FUN_00986480 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00986480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x986480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10de828));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x300))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x304))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x304))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x300))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x2cc))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x2cc))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x238))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x278))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x27c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x27c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x278))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x240))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x244))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x244))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x240))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x238))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1f0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 500))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 500))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1f0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x1bc))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x1bc))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x128))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x168))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x16c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x16c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x168))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x130))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x134))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x134))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x130))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x128))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xe4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xe4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xac))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xac))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x5c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x5c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x24))) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*((int *)GEN_TOP(((int)this + 0x24))))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10dd3f8));
  return (uint)pcVar1;
}

/* ref: FUN_009866c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009866c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9866c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10de858));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a8))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1e8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x1ec))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x1ec))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1e8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x1b4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x1b4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a8))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x120))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x160))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x164))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x164))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x160))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x128))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 300))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 300))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x128))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x120))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x98))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xdc))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xdc))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xa4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xa4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x98))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x50))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x54))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x54))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x50))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x1c))) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*((int *)GEN_TOP(((int)this + 0x1c))))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10dd428));
  return (uint)pcVar1;
}

/* ref: FUN_00986850 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00986850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x986850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10de884));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x238))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x278))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x27c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x27c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x278))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x240))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x244))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x244))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x240))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x238))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1f0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 500))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 500))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1f0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x1bc))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x1bc))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x128))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x168))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x16c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x16c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x168))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x130))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x134))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x134))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x130))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x128))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xe4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xe4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xac))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xac))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x5c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x5c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x24))) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*((int *)GEN_TOP(((int)this + 0x24))))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10dd3cc));
  return (uint)pcVar1;
}

/* ref: FUN_00986a30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00986a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x986a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de8b0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xb4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xb4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x78))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x7c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x7c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x78))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x44))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x44))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xc))) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*((int *)GEN_TOP(((int)this + 0xc))))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10dd658));
  return (uint)pcVar1;
}

/* ref: FUN_00986ad0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00986ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x986ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10de8c0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x120))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x124))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x124))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x120))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xec))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xec))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xb4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xb4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x78))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x7c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x7c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x78))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x44))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x44))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xc))) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*((int *)GEN_TOP(((int)this + 0xc))))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  return (uint)pcVar1;
}

/* ref: FUN_00986bc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00986bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x986bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10de8d8));
  uVar1 = F_00986ad0(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10dd2b0));
  return uVar1;
}

/* ref: FUN_00986c10 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00986c10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x986c10u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float fVar4;
  
  puVar1 = *((uint * PTR32 *)GEN_TOP((param_1 + 4)));
  uVar2 = REFG(undefined4, 0x14a0a38);
  if (puVar1 != ((uint *)GEN_TOP(0x0))) {
    uVar2 = *puVar1;
  }
  uVar3 = REFG(undefined4, 0x14a0a38);
  if (puVar1 != ((uint *)GEN_TOP(0x0))) {
    uVar3 = *puVar1;
  }
  fVar4 = gen_bits2f(param_2);
  if ((uVar3 >> 2 & 3) == 2) {
    fVar4 = param_3;
  }
  if (!((float10)fVar4 <= (float10)((ushort)puVar1[2] & 0x3fff))) {
    if (!(((float10)GEN_TOD(((ushort)puVar1[(uVar2 >> 9 & 0xffff) * 2] & 0x3fff))) <= (float10)fVar4)) {
      uVar2 = F_0097a0b0(param_1 GEN_EDX_FWD,fVar4);
      uVar3 = (uint)(*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x10 + uVar2 * 8))) >> 0xe);
      extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((param_1 + 0x10 + uVar3 * 8))))
                (*((int *)GEN_TOP((param_1 + 0x14 + uVar3 * 8))) + param_1,(undefined4)gen_fl2bits(fVar4),uVar2
                );
      return (float10)(float)extraout_ST0_01;
    }
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((param_1 + 0x30))))(*((int *)GEN_TOP((param_1 + 0x34))) + param_1,(undefined4)gen_fl2bits(fVar4))
    ;
    return (float10)(float)extraout_ST0_00;
  }
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((param_1 + 0x28))))(*((int *)GEN_TOP((param_1 + 0x2c))) + param_1,(undefined4)gen_fl2bits(fVar4));
  return (float10)(float)extraout_ST0;
}

/* ref: FUN_00986dc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00986dc0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x986dc0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  int * piVar1;
  float10 fVar2;
  
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + param_3 * 0x14)));
  fVar2 = GEN_X87((float10)((float)GEN_TOF(((float10)(float)((float10)param_2 - (float10)*piVar1) /
                          ((float10)GEN_TOD((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x14 + param_3 * 0x14))) -
                                   *piVar1)))))));
  *param_4 = ((float)GEN_TOF((fVar2 * (((float10)GEN_TOD(gen_bits2f(piVar1[6]))) - ((float10)GEN_TOD(gen_bits2f(piVar1[1])))) +
                    ((float10)GEN_TOD(gen_bits2f(piVar1[1]))))));
  param_4[1] = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(piVar1[2]))) +
                      fVar2 * (((float10)GEN_TOD(gen_bits2f(piVar1[7]))) - ((float10)GEN_TOD(gen_bits2f(piVar1[2])))))));
  param_4[2] = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(piVar1[3]))) +
                      (((float10)GEN_TOD(gen_bits2f(piVar1[8]))) - ((float10)GEN_TOD(gen_bits2f(piVar1[3])))) * fVar2)));
  return (uint)piVar1;
}

/* ref: FUN_00986e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00986e50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x986e50u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 4))) + param_3 * 0x14;
  puVar2 = ((undefined4 *)GEN_TOP((iVar1 + 0x18)));
  if (!((float10)*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 0x14 + param_3 * 0x14))) <= (float10)param_2)) {
    puVar2 = ((undefined4 *)GEN_TOP((iVar1 + 4)));
  }
  *param_4 = *puVar2;
  param_4[1] = puVar2[1];
  param_4[2] = puVar2[2];
  return (uint)puVar2;
}

/* ref: FUN_00986e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00986e90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x986e90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (*((int *)GEN_TOP((param_1 + 8))) - *((int *)GEN_TOP((param_1 + 4)))) / 0x14 - 1;
  iVar3 = 0;
  if (-1 < iVar4) {
    do {
      uVar2 = (iVar4 - iVar3) / 2 + iVar3;
      piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + uVar2 * 0x14)));
      if ((float10)param_2 < (float10)*piVar1) {
        iVar4 = uVar2 - 1;
      }
      else {
        if (!((float10)piVar1[5] < (float10)param_2)) {
          return uVar2;
        }
        iVar3 = uVar2 + 1;
      }
    } while (iVar3 <= iVar4);
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::RgbFunctionCurve::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00986f10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x986f10u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  volatile float local_8;
  
  iVar3 = (int)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (piVar2 == *((int * PTR32 *)GEN_TOP((param_1 + 8)))) {
    param_3[2] = GEN_FLT_TO(param_3[2], REFG(float, 0x1087f04));
    param_3[1] = iVar3;
    *param_3 = iVar3;
    return (uint)param_3;
  }
  iVar3 = ((int)*((int * PTR32 *)GEN_TOP((param_1 + 8))) - (int)piVar2) / 0x14;
  if (iVar3 == 1) {
    *param_3 = piVar2[1];
    param_3[1] = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8)));
    param_3[2] = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0xc)));
    return (uint)param_3;
  }
  piVar1 = piVar2 + iVar3 * 5 - 5;
  fVar5 = (float10)param_2;
  fVar6 = (float10)*piVar2;
  if (fVar5 <= fVar6) {
    if (*((int *)GEN_TOP((param_1 + 0x18))) == 0) {
      *param_3 = piVar2[1];
      param_3[1] = piVar2[2];
      param_3[2] = piVar2[3];
      return (uint)param_3;
    }
    if ((*((int *)GEN_TOP((param_1 + 0x18))) == 1) && (fVar6 = (float10)*piVar2, fVar5 < fVar6)) {
      param_2 = ((float)GEN_TOF((((float10)GEN_TOD(((int)(fVar6 - fVar5) / (int)((float10)*piVar1 - fVar6) + 1))) *
                        (float10)(float)((float10)*piVar1 - fVar6) + fVar5)));
      fVar5 = (float10)param_2;
    }
  }
  else {
    iVar3 = *piVar1;
    if ((float10)iVar3 <= fVar5) {
      if (*((int *)GEN_TOP((param_1 + 0x1c))) == 0) {
        *param_3 = piVar1[1];
        param_3[1] = piVar1[2];
        param_3[2] = piVar1[3];
        return (uint)param_3;
      }
      if ((*((int *)GEN_TOP((param_1 + 0x1c))) == 1) && (fVar7 = (float10)iVar3, fVar7 < fVar5)) {
        fVar6 = GEN_X87(fVar7 - fVar6);
        param_2 = ((float)GEN_TOF((fVar5 - ((float10)GEN_TOD(((int)(fVar5 - fVar7) / (int)fVar6 + 1))) *
                                  (float10)(float)fVar6)));
        fVar5 = (float10)param_2;
        goto LAB_00987080;
      }
    }
    local_8 = (float)iVar3;
  }
LAB_00987080: ;
  uVar4 = F_00986e90(param_1 GEN_EDX_FWD,(float)fVar5);
  iVar3 = piVar2[uVar4 * 5 + 9];
  if (-1 < iVar3) {
    if (iVar3 < 2) {
      uVar4 = F_00986dc0(param_1 GEN_EDX_ARG,param_2,uVar4,param_3);
    }
    else if (iVar3 == 2) {
      uVar4 = F_00986e50(param_1 GEN_EDX_ARG,param_2,uVar4,param_3);
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: FUN_00987100 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00987100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x987100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((gen_code32 *)GEN_TOP(((int)this + 0x18))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x20))) = ((code *)REFP(0x979ff0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x28))) = ((code *)REFP(0x97a060));
  *((gen_code32 *)GEN_TOP(((int)this + 0x50))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x58))) = ((code *)REFP(0x979ff0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x60))) = ((code *)REFP(0x97a060));
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  return 0;
}

/* ref: FUN_00987170 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00987170(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x987170u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x40))) + 0x10))))
            (param_1 + 0x40,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
             (undefined4)gen_fl2bits((float)(float10)0));
  return GEN_X87((float10)((float)GEN_TOF((extraout_ST0 *
                         (float10)(float)((float10)(int)(char)param_4 *
                                         (float10)*(double *)&REFG(undefined, 0x10928e8))))));
}

/* ref: FUN_009871c0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_009871c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x9871c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x40))) + 0x10))))
            (param_1 + 0x40,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
             (undefined4)gen_fl2bits((float)(float10)0));
  return GEN_X87((float10)((float)GEN_TOF((extraout_ST0 *
                         (float10)(float)((float10)(int)(char)param_4 *
                                         (float10)*(double *)&REFG(undefined, 0x10928e8))))));
}

/* ref: FUN_00987210 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00987210(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x987210u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x40))) + 0x10))))
            (param_1 + 0x40,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
             (undefined4)gen_fl2bits((float)(float10)0));
  return GEN_X87((float10)((float)GEN_TOF((extraout_ST0 *
                         (float10)(float)((float10)(int)(char)param_4 *
                                         (float10)*(double *)&REFG(undefined, 0x10928e8))))));
}

/* ref: FUN_00987260 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00987260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x987260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10de928));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1e8))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x228))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x22c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x22c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x228))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1f0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 500))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 500))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1f0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1e8))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  F_00986a30(((undefined *)GEN_TOP(((int)this + 0xf8))) GEN_EDX_ARG);
  uVar2 = F_00986a30(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd668));
  return uVar2;
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color1::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00987300(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x987300u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  float10 extraout_ST0;
  
  if (*((char *)GEN_TOP((param_1 + 5))) != '\0') {
    return (*((char *)GEN_TOP((param_1 + 7))) == '\0') - 3;
  }
  if (*((int *)GEN_TOP((param_1 + 0xa8))) == *((int *)GEN_TOP((param_1 + 0xac)))) {
    return 0xffffffff;
  }
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x10))))
            (param_1 + 0x20,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
             param_4);
  iVar1 = *((int *)GEN_TOP((param_1 + 0xa8)));
  return (int)*((char *)GEN_TOP(((uint)((*((int *)GEN_TOP((param_1 + 0xac))) - iVar1) * 0x10000 +
                              (int)(extraout_ST0 + (float10)REFG(double, 0x1088108))) %
                        (uint)(*((int *)GEN_TOP((param_1 + 0xac))) - iVar1) + iVar1)));
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color2::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00987390(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x987390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((char *)GEN_TOP((in_ecx + 5))) != '\0') {
    return (*((char *)GEN_TOP((in_ecx + 7))) == '\0') - 3;
  }
  if (*((char * PTR32 *)GEN_TOP((in_ecx + 0x20))) == *((char * PTR32 *)GEN_TOP((in_ecx + 0x24)))) {
    return 0xffffffff;
  }
  return (int)**((char * PTR32 *)GEN_TOP((in_ecx + 0x20)));
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Normal::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009873c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9873c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((char * PTR32 *)GEN_TOP((in_ecx + 0x50))) == *((char * PTR32 *)GEN_TOP((in_ecx + 0x54)))) {
    return 0xffffffff;
  }
  return (int)**((char * PTR32 *)GEN_TOP((in_ecx + 0x50)));
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Reflection::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009873d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9873d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((char *)GEN_TOP((in_ecx + 5))) != '\0') {
    return 0xfffffffc;
  }
  if (*((char * PTR32 *)GEN_TOP((in_ecx + 0x10))) == *((char * PTR32 *)GEN_TOP((in_ecx + 0x14)))) {
    return 0xffffffff;
  }
  return (int)**((char * PTR32 *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Distortion::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009873f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9873f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((char * PTR32 *)GEN_TOP((in_ecx + 0x58))) == *((char * PTR32 *)GEN_TOP((in_ecx + 0x5c)))) {
    return 0xffffffff;
  }
  return (int)**((char * PTR32 *)GEN_TOP((in_ecx + 0x58)));
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Palette::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00987400(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x987400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((char * PTR32 *)GEN_TOP((in_ecx + 0x48))) == *((char * PTR32 *)GEN_TOP((in_ecx + 0x4c)))) {
    return 0xffffffff;
  }
  return (int)**((char * PTR32 *)GEN_TOP((in_ecx + 0x48)));
}

/* ref: FUN_00987410 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00987410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x987410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ddab4));
  F_00987100(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x90))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf12 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00987430(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x987430u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *((int *)GEN_TOP((param_1 + 8))) - *((int *)GEN_TOP((param_1 + 4))) >> 2;
  if (iVar2 == 1) {
    *param_3 = **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)));
    *param_4 = **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)));
    return 0;
  }
  uVar1 = (uint)param_2;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  uVar3 = iVar2 - 2;
  if ((int)uVar3 < (int)uVar1) {
    uVar1 = uVar3;
  }
  *param_3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + uVar1 * 4)));
  *param_4 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4 + uVar1 * 4)));
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf13 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00987490(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x987490u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  float10 extraout_ST0;
  
  if (*((int *)GEN_TOP((param_1 + 4))) == *((int *)GEN_TOP((param_1 + 8)))) {
    return 0xffffffff;
  }
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x740))) + 0x10))))
            (param_1 + 0x740,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
             (undefined4)gen_fl2bits((float)(float10)0));
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) +
                  ((uint)(int)extraout_ST0 %
                  (uint)(*((int *)GEN_TOP((param_1 + 8))) - *((int *)GEN_TOP((param_1 + 4))) >> 2)) * 4)));
}

/* ref: FUN_00987500 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00987500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x987500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ddac4));
  F_00987100(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00987560 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00987560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x987560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10ddad0));
  F_00987100(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00987580 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00987580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x987580u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint * puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  uint * puVar7;
  
  uVar4 = 0;
  (*(int *)(gen_frame + 0x0)) = 0;
  puVar7 = param_2;
  if (param_3 != 0) {
    do {
      uVar2 = *puVar7;
      puVar6 = puVar7 + 2;
      cVar3 = (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x0)) + 3));
      if (uVar2 < 0x5472436f) {
        if (uVar2 == 0x5472436e) {
          cVar3 = (char)*puVar6;
          *((char *)GEN_TOP(((int)this + 0xd))) = cVar3;
          if ('\0' < cVar3) {
            if (REFG(char, 0x14a06d6) == '\0') {
              iVar5 = REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8);
              REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + cVar3 * 4;
              *((int *)GEN_TOP(((int)this + 8))) = iVar5;
            }
            else {
              REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + cVar3 * 4;
              *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
            }
          }
        }
        else if (uVar2 == 0x4974436e) {
          cVar3 = (char)*puVar6;
          *((char *)GEN_TOP(((int)this + 0xc))) = cVar3;
          if ('\0' < cVar3) {
            if (REFG(char, 0x14a06d6) == '\0') {
              iVar5 = REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8);
              REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + cVar3 * 4;
              *((int *)GEN_TOP(((int)this + 4))) = iVar5;
            }
            else {
              REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + cVar3 * 4;
              *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
            }
          }
        }
        else if (uVar2 == 0x4974656d) {
          iVar5 = *((int *)GEN_TOP(((int)this + 4)));
          (*(int *)(gen_frame + 0x0)) = CONCAT13((*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x0)) + 3)) + '\x01',(undefined3)(*(int *)(gen_frame + 0x0)));
          goto LAB_0098768d;
        }
      }
      else if (uVar2 == 0x54726772) {
        cVar3 = (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x0)) + 2));
        iVar5 = *((int *)GEN_TOP(((int)this + 8)));
        (*(int *)(gen_frame + 0x0)) = (uint)CONCAT11((*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x0)) + 3)),(*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x0)) + 2)) + '\x01') << 0x10;
LAB_0098768d: ;
        F_009dae30(((undefined *)GEN_TOP((iVar5 + cVar3 * 4))) GEN_EDX_FWD,puVar6,puVar7[1]);
      }
      puVar1 = puVar7 + 1;
      puVar7 = ((uint *)GEN_TOP(((int)puVar6 + (*puVar1 + 3 & 0xfffffffc))));
      uVar4 = uVar4 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar4 < param_3);
  }
  return;
}

/* ref: FUN_009876d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_009876d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x9876d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  uint * puVar6;
  char local_6;
  char local_5;
  
  uVar4 = 0;
  local_6 = '\0';
  local_5 = '\0';
  puVar6 = param_2;
  if (param_3 != 0) {
    do {
      uVar2 = *puVar6;
      puVar5 = puVar6 + 2;
      if (uVar2 < 0x4974656e) {
        if (uVar2 == 0x4974656d) {
          iVar3 = (int)local_6;
          local_6 = local_6 + '\x01';
          F_009db020(((undefined *)GEN_TOP((iVar3 * 0x2a + *((int *)GEN_TOP(((int)this + 0x14)))))) GEN_EDX_FWD,puVar5,puVar6[1]);
        }
        else if (uVar2 == 0x426e4e6f) {
          *((char *)GEN_TOP(((int)this + 0x10))) = (char)*puVar5;
        }
        else if (uVar2 == 0x436c6970) {
          iVar3 = (int)local_5;
          local_5 = local_5 + '\x01';
          F_00c46aa0(iVar3 * 0xa4 + *((int *)GEN_TOP(((int)this + 0x18))),puVar5,puVar6[1]);
        }
        else if ((uVar2 == 0x4370436e) && ('\0' < (char)*puVar5)) {
          uVar2 = F_0097ab00((char)*puVar5 * 0xa4);
          *((uint *)GEN_TOP(((int)this + 0x18))) = uVar2;
        }
      }
      else if (uVar2 == 0x4c704564) {
        uVar2 = *puVar5;
        *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
        *((int *)GEN_TOP(((int)this + 0xc))) =
             (int)(int3)CONCAT21((short)uVar2,*((undefined1 *)GEN_TOP(((int)this + 0xc))));
      }
      else if (uVar2 == 0x4c705374) {
        uVar2 = *puVar5;
        *((uint *)GEN_TOP(((int)this + 8))) =
             *((uint *)GEN_TOP(((int)this + 8))) ^
             ((int)(short)uVar2 << 0x10 ^ *((uint *)GEN_TOP(((int)this + 8)))) & 0xffff0000;
        *((uint *)GEN_TOP(((int)this + 0xc))) =
             *((uint *)GEN_TOP(((int)this + 0xc))) ^
             ((uint)(int)(short)uVar2 >> 0x10 ^ *((uint *)GEN_TOP(((int)this + 0xc)))) & 0xff;
      }
      else if ((uVar2 == 0x5449436e) &&
              (uVar2 = *puVar5, *((char *)GEN_TOP(((int)this + 8))) = (char)uVar2, (char)uVar2 != '\0')) {
        uVar2 = (uint)*((byte *)GEN_TOP(((int)this + 8))) * 0x2a + 3 & 0xfffffffc;
        if (REFG(char, 0x14a06d6) == '\0') {
          iVar3 = REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8);
          REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + uVar2;
          *((int *)GEN_TOP(((int)this + 0x14))) = iVar3;
        }
        else {
          REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + uVar2;
          *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
        }
      }
      puVar1 = puVar6 + 1;
      puVar6 = ((uint *)GEN_TOP(((int)puVar5 + (*puVar1 + 3 & 0xfffffffc))));
      uVar4 = uVar4 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar4 < param_3);
  }
  return;
}

/* ref: FUN_00987880 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00987880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x987880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de980));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x18))) = *((uint *)GEN_TOP(((int)this + 0x18))) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_009878d0 */
GEN_OWN GEN_FRAME unsigned int F_009878d0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9878d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  uVar2 = 0;
  piVar5 = param_1;
  if (param_2 != 0) {
    do {
      if ((*piVar5 == 0x447374) || (*piVar5 == 0x44737452)) {
        uVar4 = 0;
        piVar3 = piVar5 + 2;
        if (piVar5[1] != 0) {
          do {
            if ((*piVar3 == 0x4b657943) && (cVar1 = (char)piVar3[2], '\0' < cVar1)) {
              REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
            }
            uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
            piVar3 = ((int *)GEN_TOP(((int)(piVar3 + 2) + (piVar3[1] + 3U & 0xfffffffc))));
          } while (uVar4 < (uint)piVar5[1]);
        }
      }
      uVar2 = uVar2 + 8 + (piVar5[1] + 3U & 0xfffffffc);
      piVar5 = ((int *)GEN_TOP(((int)(piVar5 + 2) + (piVar5[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return;
}

/* ref: FUN_00987990 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00987990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x987990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de98c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x18))) = *((uint *)GEN_TOP(((int)this + 0x18))) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_009879e0 */
GEN_OWN GEN_FRAME unsigned int F_009879e0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9879e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  uVar2 = 0;
  piVar5 = param_1;
  if (param_2 != 0) {
    do {
      if ((*piVar5 == 0x434f46) || (*piVar5 == 0x434f4652)) {
        uVar4 = 0;
        piVar3 = piVar5 + 2;
        if (piVar5[1] != 0) {
          do {
            if ((*piVar3 == 0x4b657943) && (cVar1 = (char)piVar3[2], '\0' < cVar1)) {
              REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
            }
            uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
            piVar3 = ((int *)GEN_TOP(((int)(piVar3 + 2) + (piVar3[1] + 3U & 0xfffffffc))));
          } while (uVar4 < (uint)piVar5[1]);
        }
      }
      uVar2 = uVar2 + 8 + (piVar5[1] + 3U & 0xfffffffc);
      piVar5 = ((int *)GEN_TOP(((int)(piVar5 + 2) + (piVar5[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return;
}

/* ref: FUN_00987aa0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00987aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x987aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de998));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x18))) = *((uint *)GEN_TOP(((int)this + 0x18))) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_00987af0 */
GEN_OWN GEN_FRAME unsigned int F_00987af0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x987af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  uVar2 = 0;
  piVar5 = param_1;
  if (param_2 != 0) {
    do {
      if ((*piVar5 == 0x537053) || (*piVar5 == 0x53705352)) {
        uVar4 = 0;
        piVar3 = piVar5 + 2;
        if (piVar5[1] != 0) {
          do {
            if ((*piVar3 == 0x4b657943) && (cVar1 = (char)piVar3[2], '\0' < cVar1)) {
              REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
            }
            uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
            piVar3 = ((int *)GEN_TOP(((int)(piVar3 + 2) + (piVar3[1] + 3U & 0xfffffffc))));
          } while (uVar4 < (uint)piVar5[1]);
        }
      }
      uVar2 = uVar2 + 8 + (piVar5[1] + 3U & 0xfffffffc);
      piVar5 = ((int *)GEN_TOP(((int)(piVar5 + 2) + (piVar5[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return;
}

/* ref: FUN_00987bb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00987bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x987bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de9a4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x18))) = *((uint *)GEN_TOP(((int)this + 0x18))) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_00987c00 */
GEN_OWN GEN_FRAME unsigned int F_00987c00(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x987c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  uVar2 = 0;
  piVar5 = param_1;
  if (param_2 != 0) {
    do {
      if ((*piVar5 == 0x434f46) || (*piVar5 == 0x434f4652)) {
        uVar4 = 0;
        piVar3 = piVar5 + 2;
        if (piVar5[1] != 0) {
          do {
            if ((*piVar3 == 0x4b657943) && (cVar1 = (char)piVar3[2], '\0' < cVar1)) {
              REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
            }
            uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
            piVar3 = ((int *)GEN_TOP(((int)(piVar3 + 2) + (piVar3[1] + 3U & 0xfffffffc))));
          } while (uVar4 < (uint)piVar5[1]);
        }
      }
      uVar2 = uVar2 + 8 + (piVar5[1] + 3U & 0xfffffffc);
      piVar5 = ((int *)GEN_TOP(((int)(piVar5 + 2) + (piVar5[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return;
}

/* ref: FUN_00987cc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00987cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x987cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094834)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10de9b0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 8))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x24))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))) = &REFG(undefined, 0x14a0a44);
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x30))), REFG(float, 0x10abe54));
  return (uint)this;
}

/* ref: FUN_00987d30 */
GEN_OWN GEN_FRAME unsigned int F_00987d30(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x987d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  char cVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar2 = 0;
  puVar5 = param_1;
  if (param_2 != 0) {
    do {
      uVar4 = *puVar5;
      if (uVar4 < 0x537473) {
        if ((uVar4 == 0x537472) || ((uVar4 == 0x477261 || (uVar4 == 0x4c656e)))) {
LAB_00987d81: ;
          uVar4 = 0;
          puVar3 = puVar5 + 2;
          if (puVar5[1] != 0) {
            do {
              if ((*puVar3 == 0x4b657943) && (cVar1 = (char)puVar3[2], '\0' < cVar1)) {
                REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0)
                ;
              }
              uVar4 = uVar4 + 8 + (puVar3[1] + 3 & 0xfffffffc);
              puVar3 = ((uint *)GEN_TOP(((int)(puVar3 + 2) + (puVar3[1] + 3 & 0xfffffffc))));
            } while (uVar4 < puVar5[1]);
          }
        }
      }
      else if ((uVar4 == 0x49526164) || (uVar4 == 0x4f526164)) goto LAB_00987d81;
      uVar2 = uVar2 + 8 + (puVar5[1] + 3 & 0xfffffffc);
      puVar5 = ((uint *)GEN_TOP(((int)(puVar5 + 2) + (puVar5[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return;
}

/* ref: FUN_00987e10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00987e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x987e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10de9d4));
  *((undefined1 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x24))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x30))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x34))) = *((uint *)GEN_TOP(((int)this + 0x34))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x38))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x44))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x48))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x4c))) = *((uint *)GEN_TOP(((int)this + 0x4c))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x50))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x54))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x58))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x5c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x60))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 100))) = *((uint *)GEN_TOP(((int)this + 100))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x6c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x70))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x74))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x7c))) = *((uint *)GEN_TOP(((int)this + 0x7c))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x80))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x88))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x90))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x94))) = *((uint *)GEN_TOP(((int)this + 0x94))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x98))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x9c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xa0))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xa8))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0xac))) = *((uint *)GEN_TOP(((int)this + 0xac))) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_00987ee0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00987ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x987ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x9c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x98))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x80))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x74))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x6c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x5c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x54))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x50))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x44))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x38))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x24))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10dd374));
  return 0x10dd20c;
}

/* ref: FUN_00987f50 */
GEN_OWN GEN_FRAME unsigned int F_00987f50(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x987f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  char cVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar2 = 0;
  puVar5 = param_1;
  if (param_2 != 0) {
    do {
      uVar4 = *puVar5;
      if (uVar4 < 0x416e5953) {
        if (uVar4 != 0x416e5952) {
          if (uVar4 < 0x496e54) {
            if (uVar4 != 0x496e53) {
              if (uVar4 < 0x496a42) {
                if ((uVar4 == 0x496a41) || ((0x416e57 < uVar4 && (uVar4 < 0x416e5b))))
                goto LAB_00987ff2;
              }
              else if (uVar4 == 0x496a53) goto LAB_00987ff2;
              goto LAB_00988055;
            }
          }
          else if ((uVar4 != 0x4f7553) && (uVar4 != 0x416e5852)) goto LAB_00988055;
        }
LAB_00987ff2: ;
        uVar4 = 0;
        puVar3 = puVar5 + 2;
        if (puVar5[1] != 0) {
          do {
            if ((*puVar3 == 0x4b657943) && (cVar1 = (char)puVar3[2], '\0' < cVar1)) {
              REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
            }
            uVar4 = uVar4 + 8 + (puVar3[1] + 3 & 0xfffffffc);
            puVar3 = ((uint *)GEN_TOP(((int)(puVar3 + 2) + (puVar3[1] + 3 & 0xfffffffc))));
          } while (uVar4 < puVar5[1]);
        }
      }
      else if (uVar4 < 0x496a5353) {
        if ((uVar4 == 0x496a5352) || ((uVar4 == 0x416e5a52 || (uVar4 == 0x496a4152))))
        goto LAB_00987ff2;
      }
      else if ((uVar4 == 0x496e5352) || (uVar4 == 0x4f755352)) goto LAB_00987ff2;
LAB_00988055: ;
      uVar2 = uVar2 + 8 + (puVar5[1] + 3 & 0xfffffffc);
      puVar5 = ((uint *)GEN_TOP(((int)(puVar5 + 2) + (puVar5[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return;
}

/* ref: FUN_00988080 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00988080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x988080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10de9fc));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x3030000;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x24))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x30))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x34))) = *((uint *)GEN_TOP(((int)this + 0x34))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x38))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x44))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x48))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x4c))) = *((uint *)GEN_TOP(((int)this + 0x4c))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x50))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x54))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x58))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x5c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x60))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 100))) = *((uint *)GEN_TOP(((int)this + 100))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x6c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x70))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x74))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x7c))) = *((uint *)GEN_TOP(((int)this + 0x7c))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x80))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x88))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x90))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x94))) = *((uint *)GEN_TOP(((int)this + 0x94))) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_00988180 */
GEN_OWN GEN_FRAME unsigned int F_00988180(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x988180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  char cVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar2 = 0;
  puVar5 = param_1;
  if (param_2 != 0) {
    do {
      uVar4 = *puVar5;
      if (uVar4 < 0x416e5953) {
        if (uVar4 == 0x416e5952) goto LAB_0098820d;
        if (uVar4 < 0x496a54) {
          if ((uVar4 == 0x496a53) ||
             ((0x416e57 < uVar4 && ((uVar4 < 0x416e5b || (uVar4 == 0x496a41)))))) goto LAB_0098820d;
        }
        else if ((uVar4 == 0x526164) || (uVar4 == 0x416e5852)) goto LAB_0098820d;
      }
      else if (uVar4 < 0x496a5353) {
        if (((uVar4 == 0x496a5352) || (uVar4 == 0x416e5a52)) || (uVar4 == 0x496a4152)) {
LAB_0098820d: ;
          uVar4 = 0;
          puVar3 = puVar5 + 2;
          if (puVar5[1] != 0) {
            do {
              if ((*puVar3 == 0x4b657943) && (cVar1 = (char)puVar3[2], '\0' < cVar1)) {
                REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0)
                ;
              }
              uVar4 = uVar4 + 8 + (puVar3[1] + 3 & 0xfffffffc);
              puVar3 = ((uint *)GEN_TOP(((int)(puVar3 + 2) + (puVar3[1] + 3 & 0xfffffffc))));
            } while (uVar4 < puVar5[1]);
          }
        }
      }
      else if (uVar4 == 0x52616452) goto LAB_0098820d;
      uVar2 = uVar2 + 8 + (puVar5[1] + 3 & 0xfffffffc);
      puVar5 = ((uint *)GEN_TOP(((int)(puVar5 + 2) + (puVar5[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return;
}

/* ref: FUN_00988290 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00988290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x988290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10dea2c));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x3030000;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x24))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x30))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x34))) = *((uint *)GEN_TOP(((int)this + 0x34))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x38))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x44))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x48))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x4c))) = *((uint *)GEN_TOP(((int)this + 0x4c))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x50))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x54))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x58))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x5c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x60))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 100))) = *((uint *)GEN_TOP(((int)this + 100))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x6c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x70))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x74))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x7c))) = *((uint *)GEN_TOP(((int)this + 0x7c))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x80))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x88))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x90))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x94))) = *((uint *)GEN_TOP(((int)this + 0x94))) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_00988390 */
GEN_OWN GEN_FRAME unsigned int F_00988390(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x988390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  char cVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar2 = 0;
  puVar5 = param_1;
  if (param_2 != 0) {
    do {
      uVar4 = *puVar5;
      if (uVar4 < 0x416e5853) {
        if (uVar4 == 0x416e5852) goto LAB_00988405;
        if (uVar4 < 0x4c656f) {
          if ((uVar4 == 0x4c656e) ||
             ((0x416e57 < uVar4 && ((uVar4 < 0x416e5b || (uVar4 == 0x496a53)))))) goto LAB_00988405;
        }
        else if (uVar4 == 0x526164) goto LAB_00988405;
      }
      else {
        if (((uVar4 != 0x416e5952) && (uVar4 != 0x416e5a52)) && (uVar4 != 0x496a5352))
        goto LAB_00988465;
LAB_00988405: ;
        uVar4 = 0;
        puVar3 = puVar5 + 2;
        if (puVar5[1] != 0) {
          do {
            if ((*puVar3 == 0x4b657943) && (cVar1 = (char)puVar3[2], '\0' < cVar1)) {
              REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
            }
            uVar4 = uVar4 + 8 + (puVar3[1] + 3 & 0xfffffffc);
            puVar3 = ((uint *)GEN_TOP(((int)(puVar3 + 2) + (puVar3[1] + 3 & 0xfffffffc))));
          } while (uVar4 < puVar5[1]);
        }
      }
LAB_00988465: ;
      uVar2 = uVar2 + 8 + (puVar5[1] + 3 & 0xfffffffc);
      puVar5 = ((uint *)GEN_TOP(((int)(puVar5 + 2) + (puVar5[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return;
}

/* ref: FUN_00988490 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00988490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x988490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10dea5c));
  *((undefined2 *)GEN_TOP(((int)this + 4))) = 0xff;
  *((undefined1 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x24))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x30))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x34))) = *((uint *)GEN_TOP(((int)this + 0x34))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x38))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x44))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x48))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x4c))) = *((uint *)GEN_TOP(((int)this + 0x4c))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x50))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x54))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x58))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x5c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x60))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 100))) = *((uint *)GEN_TOP(((int)this + 100))) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_00988550 */
GEN_OWN GEN_FRAME unsigned int F_00988550(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x988550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  char cVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar2 = 0;
  puVar5 = param_1;
  if (param_2 != 0) {
    do {
      uVar4 = *puVar5;
      if (uVar4 < 0x416e5953) {
        if (uVar4 == 0x416e5952) goto LAB_009885b7;
        if (uVar4 < 0x496a54) {
          if ((uVar4 == 0x496a53) || ((0x416e57 < uVar4 && (uVar4 < 0x416e5b)))) goto LAB_009885b7;
        }
        else if (uVar4 == 0x416e5852) goto LAB_009885b7;
      }
      else {
        if ((uVar4 != 0x416e5a52) && (uVar4 != 0x496a5352)) goto LAB_00988617;
LAB_009885b7: ;
        uVar4 = 0;
        puVar3 = puVar5 + 2;
        if (puVar5[1] != 0) {
          do {
            if ((*puVar3 == 0x4b657943) && (cVar1 = (char)puVar3[2], '\0' < cVar1)) {
              REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
            }
            uVar4 = uVar4 + 8 + (puVar3[1] + 3 & 0xfffffffc);
            puVar3 = ((uint *)GEN_TOP(((int)(puVar3 + 2) + (puVar3[1] + 3 & 0xfffffffc))));
          } while (uVar4 < puVar5[1]);
        }
      }
LAB_00988617: ;
      uVar2 = uVar2 + 8 + (puVar5[1] + 3 & 0xfffffffc);
      puVar5 = ((uint *)GEN_TOP(((int)(puVar5 + 2) + (puVar5[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return;
}

/* ref: FUN_00988640 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00988640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x988640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10dea80));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x3030000;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x24))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x30))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x34))) = *((uint *)GEN_TOP(((int)this + 0x34))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x38))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x44))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x48))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x4c))) = *((uint *)GEN_TOP(((int)this + 0x4c))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x50))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x54))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x58))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x5c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x60))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 100))) = *((uint *)GEN_TOP(((int)this + 100))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x6c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x70))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x74))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x7c))) = *((uint *)GEN_TOP(((int)this + 0x7c))) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_00988710 */
GEN_OWN GEN_FRAME unsigned int F_00988710(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x988710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  char cVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar2 = 0;
  puVar5 = param_1;
  if (param_2 != 0) {
    do {
      uVar4 = *puVar5;
      if (uVar4 < 0x416e5953) {
        if (uVar4 == 0x416e5952) goto LAB_00988781;
        if (uVar4 < 0x496a54) {
          if ((uVar4 == 0x496a53) || ((0x416e57 < uVar4 && (uVar4 < 0x416e5b)))) goto LAB_00988781;
        }
        else if (uVar4 == 0x416e5852) goto LAB_00988781;
      }
      else {
        if (((uVar4 != 0x416e5a52) && (uVar4 != 0x496a5352)) && (uVar4 != 0x52616473))
        goto LAB_009887e5;
LAB_00988781: ;
        uVar4 = 0;
        puVar3 = puVar5 + 2;
        if (puVar5[1] != 0) {
          do {
            if ((*puVar3 == 0x4b657943) && (cVar1 = (char)puVar3[2], '\0' < cVar1)) {
              REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
            }
            uVar4 = uVar4 + 8 + (puVar3[1] + 3 & 0xfffffffc);
            puVar3 = ((uint *)GEN_TOP(((int)(puVar3 + 2) + (puVar3[1] + 3 & 0xfffffffc))));
          } while (uVar4 < puVar5[1]);
        }
      }
LAB_009887e5: ;
      uVar2 = uVar2 + 8 + (puVar5[1] + 3 & 0xfffffffc);
      puVar5 = ((uint *)GEN_TOP(((int)(puVar5 + 2) + (puVar5[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return;
}

/* ref: FUN_00988860 */
GEN_OWN GEN_FRAME unsigned int F_00988860(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x988860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  char cVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar2 = 0;
  puVar5 = param_1;
  if (param_2 != 0) {
    do {
      uVar4 = *puVar5;
      if (uVar4 < 0x5853) {
        if ((uVar4 == 0x5852) || ((0x57 < uVar4 && (uVar4 < 0x5a)))) {
LAB_009888a6: ;
          uVar4 = 0;
          puVar3 = puVar5 + 2;
          if (puVar5[1] != 0) {
            do {
              if ((*puVar3 == 0x4b657943) && (cVar1 = (char)puVar3[2], '\0' < cVar1)) {
                REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0)
                ;
              }
              uVar4 = uVar4 + 8 + (puVar3[1] + 3 & 0xfffffffc);
              puVar3 = ((uint *)GEN_TOP(((int)(puVar3 + 2) + (puVar3[1] + 3 & 0xfffffffc))));
            } while (uVar4 < puVar5[1]);
          }
        }
      }
      else if (uVar4 == 0x5952) goto LAB_009888a6;
      uVar2 = uVar2 + 8 + (puVar5[1] + 3 & 0xfffffffc);
      puVar5 = ((uint *)GEN_TOP(((int)(puVar5 + 2) + (puVar5[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return;
}

/* ref: FUN_00988990 */
GEN_OWN GEN_FRAME unsigned int F_00988990(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x988990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + 0x10;
  uVar2 = 0;
  puVar3 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = *puVar3;
      if (uVar1 < 0x5953) {
        if ((uVar1 == 0x5952) || ((0x57 < uVar1 && ((uVar1 < 0x5b || (uVar1 == 0x5852)))))) {
LAB_009889e0: ;
          F_0097c440(puVar3 + 2,puVar3[1]);
        }
      }
      else if (uVar1 == 0x5a52) goto LAB_009889e0;
      uVar2 = uVar2 + 8 + (puVar3[1] + 3 & 0xfffffffc);
      puVar3 = ((uint *)GEN_TOP(((int)(puVar3 + 2) + (puVar3[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_00988a10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00988a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x988a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((byte *)GEN_TOP(((int)this + 0x2a))) = *((byte *)GEN_TOP(((int)this + 0x2a))) & 0xf8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10dead4));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x26))) = 0xffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c))) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x34))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x38))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x44))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x48))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x4c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x54))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x58))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x5c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x60))) = &REFG(undefined, 0x14a0a44);
  return (uint)this;
}

/* ref: FUN_00988ab0 */
GEN_OWN GEN_FRAME unsigned int F_00988ab0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x988ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  uint uVar6;
  
  uVar4 = 0;
  if (param_2 != 0) {
    do {
      if (*param_1 == 0x506f73) {
        uVar2 = param_1[1];
        REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + 0x10;
        uVar6 = 0;
        puVar5 = (uint *)(param_1 + 2);
        if (uVar2 != 0) {
          do {
            uVar3 = *puVar5;
            if (uVar3 < 0x5953) {
              if ((uVar3 == 0x5952) || ((0x57 < uVar3 && ((uVar3 < 0x5b || (uVar3 == 0x5852)))))) {
LAB_00988b2d: ;
                F_0097c440(puVar5 + 2,puVar5[1]);
              }
            }
            else if (uVar3 == 0x5a52) goto LAB_00988b2d;
            uVar6 = uVar6 + 8 + (puVar5[1] + 3 & 0xfffffffc);
            puVar5 = ((uint *)GEN_TOP(((int)(puVar5 + 2) + (puVar5[1] + 3 & 0xfffffffc))));
          } while (uVar6 < uVar2);
        }
      }
      piVar1 = param_1 + 1;
      param_1 = ((int *)GEN_TOP(((int)(param_1 + 2) + (*piVar1 + 3U & 0xfffffffc))));
      uVar4 = uVar4 + 8 + (*piVar1 + 3U & 0xfffffffc);
    } while (uVar4 < param_2);
  }
  return;
}

/* ref: FUN_00988b80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00988b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x988b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10deb10));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[4])REFP(0x10ddcd4));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) = &REFG(undefined, 0x14a0a50);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x24))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x28))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x2c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x34))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x38))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x3c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x44))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x4c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x50))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x54))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x5c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x60))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 100))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x68))) = *((uint *)GEN_TOP(((int)this + 0x68))) & 0xffffc009;
  return (uint)this;
}

/* ref: FUN_00988c40 */
GEN_OWN GEN_FRAME unsigned int F_00988c40(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x988c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + 0x10;
  uVar2 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar1 < 0x52616e48) {
        if (uVar1 == 0x52616e47) goto LAB_00988cdb;
        if (uVar1 < 0x524743) {
          if (uVar1 == 0x524742) {
            F_0097c9a0(puVar3,puVar4[1]);
          }
          else if ((uVar1 == 0x41) || (uVar1 == 0x427269)) goto LAB_00988cdb;
        }
        else if ((uVar1 == 0x52427269) || ((0x52616e40 < uVar1 && (uVar1 < 0x52616e43))))
        goto LAB_00988cdb;
      }
      else if (uVar1 < 0x53636c48) {
        if (((uVar1 == 0x53636c47) || (uVar1 == 0x52616e52)) ||
           ((0x53636c40 < uVar1 && (uVar1 < 0x53636c43)))) {
LAB_00988cdb: ;
          F_0097c440(puVar3,puVar4[1]);
        }
      }
      else if (uVar1 == 0x53636c52) goto LAB_00988cdb;
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_00988d10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00988d10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x988d10u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + 4))))
                    (param_1 + 8,(undefined4)gen_fl2bits(param_2),param_4);
  return uVar1;
}

/* ref: FUN_00988d30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00988d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x988d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  *param_4 = GEN_FLT_TO(*param_4, REFG(float, 0x132f3a8));
  param_4[1] = GEN_FLT_TO(param_4[1], REFG(float, 0x132f3ac));
  param_4[2] = GEN_FLT_TO(param_4[2], REFG(float, 0x132f3b0));
  param_4[3] = GEN_FLT_TO(param_4[3], REFG(float, 0x132f3b4));
  return (uint)param_4;
}

/* ref: FUN_00988d70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00988d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x988d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  double dVar1;
  uint * puVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  int iVar6;
  uint * puVar7;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  byte local_5;
  
  dVar1 = *(double *)&REFG(undefined, 0x1094560);
  uVar3 = 0;
  puVar4 = ((uint *)GEN_TOP(0x0));
  local_c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  iVar6 = REFG(int, 0x14a09d8);
  if (param_3 != 0) {
    do {
      uVar5 = *param_2;
      puVar2 = param_2 + 2;
      if (uVar5 < 0x4b657944) {
        if (uVar5 == 0x4b657943) {
          local_c = (uint)(char)*puVar2;
          if (local_c != 0) {
            if (REFG(char, 0x14a06d6) == '\0') {
              uVar5 = iVar6 + 0xfU & 0xfffffff0;
              puVar4 = ((uint *)GEN_TOP((REFG(int, 0x14a09e0) + uVar5)));
              iVar6 = uVar5 + (local_c * 8 + 0x13 & 0xfffffff0);
              REFG(int, 0x14a09d8) = iVar6;
            }
            else {
              REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + (local_c * 8 + 0x13 & 0xfffffff0);
              puVar4 = ((uint *)GEN_TOP(0x0));
            }
          }
        }
        else if (uVar5 == 0x4276506f) {
          local_14 = (uint)(char)*puVar2;
        }
        else if (uVar5 == 0x42765072) {
          local_18 = (uint)(char)*puVar2;
        }
      }
      else if (uVar5 == 0x4b657973) {
        if (local_c != 0) {
          local_5 = 0;
          uVar5 = 0;
          do {
            puVar7 = puVar2 + uVar5 * 4;
            puVar4[uVar5 * 2 + 1] = puVar2[uVar5 * 4 + 3];
            *(ushort *)(puVar4 + uVar5 * 2 + 2) =
                 (ushort)puVar4[uVar5 * 2 + 2] ^
                 ((ushort)*puVar7 ^ (ushort)puVar4[uVar5 * 2 + 2]) & 0x3fff;
            *(ushort *)(puVar4 + uVar5 * 2 + 2) =
                 *((ushort *)GEN_TOP(((int)puVar7 + 2))) << 0xe | (ushort)puVar4[uVar5 * 2 + 2] & 0x3fff;
            *((char *)GEN_TOP(((int)puVar4 + uVar5 * 8 + 10))) =
                 (char)(int)(((double)GEN_TOD(gen_bits2f(puVar7[1]))) * dVar1);
            *((char *)GEN_TOP(((int)puVar4 + uVar5 * 8 + 0xb))) =
                 (char)(int)(((double)GEN_TOD(gen_bits2f(puVar7[2]))) * dVar1);
            local_5 = local_5 + 1;
            uVar5 = (uint)local_5;
            iVar6 = REFG(int, 0x14a09d8);
          } while (uVar5 < local_c);
        }
      }
      else if (uVar5 == 0x52616e54) {
        local_10 = (uint)(char)*puVar2;
      }
      puVar7 = param_2 + 1;
      param_2 = ((uint *)GEN_TOP(((int)puVar2 + (*puVar7 + 3 & 0xfffffffc))));
      uVar3 = uVar3 + 8 + (*puVar7 + 3 & 0xfffffffc);
    } while (uVar3 < param_3);
    if (puVar4 != ((uint *)GEN_TOP(0x0))) {
      *puVar4 = (((local_c & 0xffff) << 5 | local_10 & 7) * 4 | local_14 & 3) * 4 |
                *puVar4 & 0xfe000180 | local_18 & 3;
      *((uint * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
    }
  }
  puVar4 = *((uint * PTR32 *)GEN_TOP(((int)this + 4)));
  uVar3 = *puVar4 >> 9 & 0xffff;
  if (uVar3 == 0) {
    *puVar4 = *puVar4 & 0xfffffe7f;
    return 0;
  }
  uVar3 = uVar3 - 1;
  if (uVar3 == 0) {
    uVar3 = *puVar4 & 0xfffffeff | 0x80;
    *puVar4 = uVar3;
    return uVar3;
  }
  *puVar4 = *puVar4 & 0xffffff7f | 0x100;
  return uVar3;
}

/* ref: FUN_00988fa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00988fa0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x988fa0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  double dVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  dVar2 = (GEN_X87MATH(((double)param_2),0xe));
  uVar6 = 0;
  uVar5 = (**((uint * PTR32 *)GEN_TOP((param_1 + 4))) >> 9 & 0xffff) - 1;
  do {
    iVar3 = (int)(uVar5 + uVar6) >> 1;
    uVar4 = (int)(((ushort)(*((uint * PTR32 *)GEN_TOP((param_1 + 4))))[iVar3 * 2 + 2] & 0x3fff) - (int)dVar2) >> 0x1f;
    uVar6 = uVar6 ^ (iVar3 + 1U ^ uVar6) & uVar4;
    uVar5 = (uVar5 ^ iVar3 - 1U) & uVar4 ^ iVar3 - 1U;
  } while ((int)uVar6 <= (int)uVar5);
  return (int)~(uVar6 - 1) >> 0x1f & uVar6 - 1;
}

/* ref: FUN_00989020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00989020(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x989020u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  
  puVar2 = *((uint * PTR32 *)GEN_TOP((param_1 + 4)));
  fVar5 = (float10)((ushort)puVar2[2] & 0x3fff);
  fVar6 = GEN_X87(((float10)GEN_TOD(((ushort)puVar2[(*puVar2 >> 9 & 0xffff) * 2] & 0x3fff))) - fVar5);
  fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(((int)(fVar5 - (float10)param_2) / (int)fVar6 + 1))) *
                  (float10)(float)fVar6 + (float10)param_2)));
  uVar3 = F_00988fa0(param_1 GEN_EDX_FWD,fVar1);
  uVar4 = (uint)(*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x10 + uVar3 * 8))) >> 0xe);
  uVar3 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c30) + uVar4 * 8))
                    (*(int *)(&REFG(undefined, 0x14a0c34) + uVar4 * 8) + param_1,(undefined4)gen_fl2bits(fVar1),
                     uVar3);
  return uVar3;
}

/* ref: FUN_009890e0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_009890e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x9890e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float10 extraout_ST0;
  float10 fVar8;
  
  puVar2 = *((uint * PTR32 *)GEN_TOP((param_1 + 4)));
  uVar3 = *puVar2;
  fVar7 = (float10)((ushort)puVar2[2] & 0x3fff);
  fVar8 = GEN_X87(((float10)GEN_TOD(((ushort)puVar2[(uVar3 >> 9 & 0xffff) * 2] & 0x3fff))) - fVar7);
  iVar4 = (int)(fVar7 - (float10)param_2) / (int)fVar8 + 1;
  fVar1 = (float)((float10)iVar4 * (float10)(float)fVar8 + (float10)param_2);
  uVar5 = F_00988fa0(param_1 GEN_EDX_FWD,fVar1);
  uVar6 = (uint)(*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x10 + uVar5 * 8))) >> 0xe);
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(&REFG(undefined, 0x14a0c30) + uVar6 * 8))
            (*(int *)(&REFG(undefined, 0x14a0c34) + uVar6 * 8) + param_1,(undefined4)gen_fl2bits(fVar1),uVar5);
  return GEN_X87((float10)((float)GEN_TOF((extraout_ST0 -
                         (((float10)GEN_TOD(gen_bits2f((puVar2 + (uVar3 >> 9 & 0xffff) * 2)[-1]))) -
                         ((float10)GEN_TOD(gen_bits2f(puVar2[1])))) * (float10)iVar4))));
}

/* ref: FUN_009891b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009891b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x9891b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  
  puVar2 = *((uint * PTR32 *)GEN_TOP((param_1 + 4)));
  fVar5 = ((float10)GEN_TOD(((ushort)puVar2[(*puVar2 >> 9 & 0xffff) * 2] & 0x3fff)));
  fVar6 = GEN_X87(fVar5 - (float10)((ushort)puVar2[2] & 0x3fff));
  fVar1 = ((float)GEN_TOF(((float10)param_2 -
                 ((float10)GEN_TOD(((int)((float10)param_2 - fVar5) / (int)fVar6 + 1))) * (float10)(float)fVar6
                 )));
  uVar3 = F_00988fa0(param_1 GEN_EDX_FWD,fVar1);
  uVar4 = (uint)(*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x10 + uVar3 * 8))) >> 0xe);
  uVar3 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c30) + uVar4 * 8))
                    (*(int *)(&REFG(undefined, 0x14a0c34) + uVar4 * 8) + param_1,(undefined4)gen_fl2bits(fVar1),
                     uVar3);
  return uVar3;
}

/* ref: FUN_00989260 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00989260(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x989260u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 extraout_ST0;
  
  puVar2 = *((uint * PTR32 *)GEN_TOP((param_1 + 4)));
  uVar3 = *puVar2 >> 9 & 0xffff;
  fVar7 = ((float10)GEN_TOD(((ushort)puVar2[uVar3 * 2] & 0x3fff)));
  fVar8 = GEN_X87(fVar7 - (float10)((ushort)puVar2[2] & 0x3fff));
  iVar4 = (int)((float10)param_2 - fVar7) / (int)fVar8 + 1;
  fVar1 = (float)((float10)param_2 - (float10)iVar4 * (float10)(float)fVar8);
  uVar5 = F_00988fa0(param_1 GEN_EDX_FWD,fVar1);
  uVar6 = (uint)(*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x10 + uVar5 * 8))) >> 0xe);
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(&REFG(undefined, 0x14a0c30) + uVar6 * 8))
            (*(int *)(&REFG(undefined, 0x14a0c34) + uVar6 * 8) + param_1,(undefined4)gen_fl2bits(fVar1),uVar5);
  return GEN_X87((float10)((float)GEN_TOF(((((float10)GEN_TOD(gen_bits2f(puVar2[uVar3 * 2 - 1]))) -
                          ((float10)GEN_TOD(gen_bits2f(puVar2[1])))) * (float10)iVar4 + extraout_ST0))));
}

/* ref: FUN_00989330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00989330(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x989330u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00988fa0(param_1 GEN_EDX_FWD,param_2);
  iVar1 = (uint)(*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x10 + uVar2 * 8))) >> 0xe) * 8;
  uVar2 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c30) + iVar1))
                    (*(int *)(&REFG(undefined, 0x14a0c34) + iVar1) + param_1,(undefined4)gen_fl2bits(param_2),
                     uVar2);
  return uVar2;
}

/* ref: FUN_00989370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00989370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x989370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint * puVar6;
  uint * puVar7;
  uint * puVar8;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar3 = 0;
  uVar2 = 0;
  puVar8 = ((uint *)GEN_TOP(0x0));
  local_8 = 0;
  local_10 = 0;
  local_c = 0;
  puVar7 = param_2;
  if (param_3 != 0) {
    do {
      uVar5 = *puVar7;
      puVar6 = puVar7 + 2;
      if (uVar5 < 0x4b657944) {
        if (uVar5 == 0x4b657943) {
          uVar2 = (uint)(char)*puVar6;
          local_8 = uVar2;
          if (uVar2 != 0) {
            iVar1 = (uVar2 - 1) * 0x10 + 0x20;
            if (REFG(char, 0x14a06d6) == '\0') {
              uVar5 = REFG(int, 0x14a09d8) + 0xfU & 0xfffffff0;
              puVar8 = ((uint *)GEN_TOP((REFG(int, 0x14a09e0) + uVar5)));
              REFG(int, 0x14a09d8) = uVar5 + iVar1;
            }
            else {
              REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + iVar1;
              puVar8 = ((uint *)GEN_TOP(0x0));
            }
          }
        }
        else if (uVar5 == 0x4276506f) {
          local_c = (uint)(char)*puVar6;
        }
        else if (uVar5 == 0x42765072) {
          local_10 = (uint)(char)*puVar6;
        }
      }
      else if ((uVar5 == 0x4b657973) && (bVar4 = 0, uVar2 != 0)) {
        uVar5 = 0;
        do {
          uVar2 = (int)*((short *)GEN_TOP(((int)puVar7 + uVar5 * 0x10 + 10))) << 0x1c |
                  puVar8[uVar5 * 4 + 1] & 0xfffffff;
          puVar8[uVar5 * 4 + 1] = uVar2;
          puVar8[uVar5 * 4 + 1] = ((int)(short)puVar6[uVar5 * 4] ^ uVar2) & 0xfffffff ^ uVar2;
          bVar4 = bVar4 + 1;
          puVar8[uVar5 * 4 + 2] = puVar7[uVar5 * 4 + 3];
          puVar8[uVar5 * 4 + 3] = puVar7[uVar5 * 4 + 4];
          puVar8[uVar5 * 4 + 4] = puVar7[uVar5 * 4 + 5];
          uVar5 = (uint)bVar4;
          uVar2 = local_8;
        } while (uVar5 < local_8);
      }
      uVar3 = uVar3 + 8 + (puVar7[1] + 3 & 0xfffffffc);
      puVar7 = ((uint *)GEN_TOP(((int)puVar6 + (puVar7[1] + 3 & 0xfffffffc))));
    } while (uVar3 < param_3);
    if (puVar8 != ((uint *)GEN_TOP(0x0))) {
      *puVar8 = ((uVar2 & 0xffff) << 7 | local_c & 3) * 4 | *puVar8 & 0xfe0001f0 | local_10 & 3;
      *((uint * PTR32 *)GEN_TOP(((int)this + 4))) = puVar8;
    }
  }
  puVar7 = *((uint * PTR32 *)GEN_TOP(((int)this + 4)));
  uVar2 = *puVar7 >> 9 & 0xffff;
  if (uVar2 == 0) {
    *puVar7 = *puVar7 & 0xfffffe7f;
    return 0;
  }
  uVar2 = uVar2 - 1;
  if (uVar2 == 0) {
    uVar2 = *puVar7 & 0xfffffeff | 0x80;
    *puVar7 = uVar2;
    return uVar2;
  }
  *puVar7 = *puVar7 & 0xffffff7f | 0x100;
  return uVar2;
}

/* ref: FUN_00989540 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00989540(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x989540u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = *((uint * PTR32 *)GEN_TOP((param_1 + 4)));
  if ((float10)param_2 <= (float10)(puVar1[1] & 0xfffffff)) {
    uVar3 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0cc0) + (*puVar1 & 3) * 8))
                      (*(int *)(&REFG(undefined, 0x14a0cc4) + (*puVar1 & 3) * 8) + param_1,
                       (undefined4)gen_fl2bits(param_2),param_3);
    return uVar3;
  }
  if (!(((float10)GEN_TOD((puVar1[(*puVar1 >> 9 & 0xffff) * 4 - 3] & 0xfffffff))) <= (float10)param_2)) {
    uVar3 = F_0097cb20(param_1 GEN_EDX_ARG,param_2);
    iVar2 = (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x14 + uVar3 * 0x10))) >> 0x1c) * 8;
    uVar3 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c90) + iVar2))
                      (*(int *)(&REFG(undefined, 0x14a0c94) + iVar2) + param_1,(undefined4)gen_fl2bits(param_2),
                       uVar3,param_3);
    return uVar3;
  }
  iVar2 = (**((uint * PTR32 *)GEN_TOP((param_1 + 4))) >> 2 & 3) * 8;
  uVar3 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0cd8) + iVar2))
                    (*(int *)(&REFG(undefined, 0x14a0cdc) + iVar2) + param_1,(undefined4)gen_fl2bits(param_2),
                     param_3);
  return uVar3;
}

/* ref: FUN_009896f0 */
GEN_OWN GEN_FRAME unsigned int F_009896f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9896f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + 0x10;
  uVar2 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    do {
      puVar1 = ((undefined *)GEN_TOP(*puVar4));
      puVar3 = puVar4 + 2;
      if (&REFG(undefined, 0x536372) < puVar1) {
        if (puVar1 == ((undefined *)GEN_TOP(0x526f7452))) {
LAB_00989747: ;
          F_0097c440(puVar3,puVar4[1]);
        }
      }
      else {
        if (puVar1 != &REFG(undefined, 0x536372)) {
          if (puVar1 == ((undefined *)GEN_TOP(0x526f74))) goto LAB_00989747;
          if (puVar1 != &REFG(undefined, 0x53636c)) goto LAB_00989754;
        }
        F_00988860(puVar3,puVar4[1]);
      }
LAB_00989754: ;
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((undefined4 *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_00989770 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00989770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x989770u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint * puVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint * puVar7;
  uint * puVar8;
  
  uVar4 = 0;
  puVar8 = param_2;
  if (param_3 != 0) {
    do {
      uVar5 = *puVar8;
      puVar7 = puVar8 + 2;
      if (uVar5 < 0x544c7375) {
        if (uVar5 == 0x544c7374) {
          *((ushort *)GEN_TOP(((int)this + 6))) =
               *((ushort *)GEN_TOP(((int)this + 6))) ^
               ((char)(byte)puVar8[1] * 8 ^ *((ushort *)GEN_TOP(((int)this + 6)))) & 0x7f8;
          uVar5 = puVar8[1] + 3 & 0xfffffffc;
          if (REFG(char, 0x14a06d6) == '\0') {
            iVar2 = REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8);
            REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + uVar5;
          }
          else {
            REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + uVar5;
            iVar2 = 0;
          }
          *((int *)GEN_TOP(((int)this + 8))) = iVar2;
          *((uint *)GEN_TOP(((int)this + 0xc))) = (*((ushort *)GEN_TOP(((int)this + 6))) >> 3 & 0xff) << 0x10;
          if ((*((ushort *)GEN_TOP(((int)this + 6))) & 0x7f8) != 0) {
            F_00c46aa0(iVar2,puVar7,puVar8[1]);
          }
        }
        else if (uVar5 < 0x54425655) {
          if (uVar5 == 0x54425654) {
            *((ushort *)GEN_TOP(((int)this + 4))) =
                 (short)(char)(byte)*puVar7 << 0xe | *((ushort *)GEN_TOP(((int)this + 4))) & 0x3fff;
          }
          else if (uVar5 == 0x544654) {
            *((ushort *)GEN_TOP(((int)this + 6))) =
                 (short)(char)((byte)*puVar7 & 7) | *((ushort *)GEN_TOP(((int)this + 6))) & 0xfff8;
          }
          else if (uVar5 == 0x54784e) {
            F_00988d70(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,param_1,puVar7,param_3);
          }
          else if (uVar5 == 0x54425554) {
            *((ushort *)GEN_TOP(((int)this + 4))) =
                 (short)(char)((byte)*puVar7 & 3) << 0xc | *((ushort *)GEN_TOP(((int)this + 4))) & 0xcfff;
          }
        }
        else {
          if (uVar5 == 0x54434154) {
            uVar6 = (short)(char)((byte)*puVar7 & 3) << 10;
            uVar3 = 0xf3ff;
            goto LAB_009899fb;
          }
          if (uVar5 == 0x54434354) {
            *((ushort *)GEN_TOP(((int)this + 4))) =
                 (short)(char)((byte)*puVar7 & 7) << 7 | *((ushort *)GEN_TOP(((int)this + 4))) & 0xfc7f;
          }
        }
      }
      else if (uVar5 < 0x62456e62) {
        if (uVar5 == 0x62456e61) {
          *((ushort *)GEN_TOP(((int)this + 4))) =
               (short)(char)((byte)*puVar7 & 1) | *((ushort *)GEN_TOP(((int)this + 4))) & 0xfffe;
        }
        else if (uVar5 == 0x54784e52) {
          F_00988d70(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,param_1,puVar7,param_3);
        }
        else if (uVar5 == 0x5576534e) {
          *((ushort *)GEN_TOP(((int)this + 4))) =
               (short)(char)((byte)*puVar7 & 7) << 4 | *((ushort *)GEN_TOP(((int)this + 4))) & 0xff8f;
        }
        else if (uVar5 == 0x62433241) {
          *((ushort *)GEN_TOP(((int)this + 4))) =
               (char)((byte)*puVar7 & 1) * 4 | *((ushort *)GEN_TOP(((int)this + 4))) & 0xfffb;
        }
      }
      else if (uVar5 == 0x62504643) {
        uVar6 = (char)((byte)*puVar7 & 1) * 8;
        uVar3 = 0xfff7;
LAB_009899fb: ;
        *((ushort *)GEN_TOP(((int)this + 4))) = uVar6 | *((ushort *)GEN_TOP(((int)this + 4))) & uVar3;
      }
      else if (uVar5 == 0x62555343) {
        *((ushort *)GEN_TOP(((int)this + 4))) =
             (char)((byte)*puVar7 & 1) * 2 | *((ushort *)GEN_TOP(((int)this + 4))) & 0xfffd;
      }
      puVar1 = puVar8 + 1;
      puVar8 = ((uint *)GEN_TOP(((int)puVar7 + (*puVar1 + 3 & 0xfffffffc))));
      uVar4 = uVar4 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar4 < param_3);
  }
  return;
}

/* ref: FUN_00989a30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00989a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x989a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  uVar2 = 0;
  puVar4 = param_2;
  if (param_3 != 0) {
    do {
      uVar1 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar1 < 0x54425655) {
        if (uVar1 == 0x54425654) {
          *((ushort *)GEN_TOP(((int)this + 4))) =
               (short)(char)((byte)*puVar3 & 3) << 6 | *((ushort *)GEN_TOP(((int)this + 4))) & 0xff3f;
        }
        else if (uVar1 == 0x544654) {
          *((ushort *)GEN_TOP(((int)this + 4))) =
               (short)(char)((byte)*puVar3 & 7) << 8 | *((ushort *)GEN_TOP(((int)this + 4))) & 0xf8ff;
        }
        else if (uVar1 == 0x4e506f77) {
          F_00988d70(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1,puVar3,puVar4[1]);
        }
        else if (uVar1 == 0x54425554) {
          *((ushort *)GEN_TOP(((int)this + 4))) =
               (short)(char)((byte)*puVar3 & 3) << 4 | *((ushort *)GEN_TOP(((int)this + 4))) & 0xffcf;
        }
      }
      else if (uVar1 == 0x54784e6f) {
        *((byte *)GEN_TOP(((int)this + 6))) = (byte)*puVar3;
      }
      else if (uVar1 == 0x5576534e) {
        *((ushort *)GEN_TOP(((int)this + 4))) =
             (char)((byte)*puVar3 & 7) * 2 | *((ushort *)GEN_TOP(((int)this + 4))) & 0xfff1;
      }
      else if (uVar1 == 0x62456e61) {
        *((ushort *)GEN_TOP(((int)this + 4))) =
             (short)(char)((byte)*puVar3 & 1) | *((ushort *)GEN_TOP(((int)this + 4))) & 0xfffe;
      }
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_3);
  }
  return;
}

/* ref: FUN_00989b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00989b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x989b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  
  uVar3 = 0;
  puVar5 = param_2;
  if (param_3 != 0) {
    do {
      uVar1 = *puVar5;
      puVar4 = puVar5 + 2;
      if (uVar1 < 0x54784e70) {
        if (uVar1 == 0x54784e6f) {
          *((byte *)GEN_TOP(((int)this + 5))) = (byte)*puVar4;
        }
        else if (uVar1 == 0x544654) {
          *((byte *)GEN_TOP(((int)this + 4))) = *((byte *)GEN_TOP(((int)this + 4))) & 0x1f | (byte)*puVar4 << 5;
        }
        else if (uVar1 == 0x52617465) {
          F_00988d70(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1,puVar4,puVar5[1]);
        }
        else if (uVar1 == 0x54434354) {
          bVar2 = ((byte)*puVar4 * '\x04' ^ *((byte *)GEN_TOP(((int)this + 4)))) & 0x1c;
          goto LAB_00989c20;
        }
      }
      else if (uVar1 == 0x62456e61) {
        bVar2 = (*((byte *)GEN_TOP(((int)this + 4))) ^ (byte)*puVar4) & 1;
LAB_00989c20: ;
        *((byte *)GEN_TOP(((int)this + 4))) = *((byte *)GEN_TOP(((int)this + 4))) ^ bVar2;
      }
      else if (uVar1 == 0x62555343) {
        *((byte *)GEN_TOP(((int)this + 4))) =
             *((byte *)GEN_TOP(((int)this + 4))) ^ ((byte)*puVar4 * '\x02' ^ *((byte *)GEN_TOP(((int)this + 4)))) & 2;
      }
      uVar3 = uVar3 + 8 + (puVar5[1] + 3 & 0xfffffffc);
      puVar5 = ((uint *)GEN_TOP(((int)puVar4 + (puVar5[1] + 3 & 0xfffffffc))));
    } while (uVar3 < param_3);
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc))))
                    ((int)this + 8,(undefined4)gen_fl2bits((float)(float10)0));
  if ((char)uVar3 == '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 5))) = 0xff;
  }
  return uVar3;
}

/* ref: FUN_00989c60 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00989c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x989c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint * puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  uint * puVar6;
  uint * puVar7;
  
  uVar4 = 0;
  puVar7 = param_2;
  if (param_3 != 0) {
    do {
      uVar2 = *puVar7;
      puVar6 = puVar7 + 2;
      if (uVar2 < 0x44506f78) {
        if (uVar2 == 0x44506f77) {
          F_00988d70(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1,puVar6,puVar7[1]);
        }
        else if (uVar2 < 0x625432) {
          if (uVar2 == 0x625431) {
            *((ushort *)GEN_TOP(((int)this + 4))) =
                 (char)((byte)*puVar6 & 1) * 2 | *((ushort *)GEN_TOP(((int)this + 4))) & 0xfffd;
          }
          else if (uVar2 == 0x544654) {
            *((ushort *)GEN_TOP(((int)this + 4))) =
                 (short)(char)((byte)*puVar6 & 7) << 0xc | *((ushort *)GEN_TOP(((int)this + 4))) & 0x8fff;
          }
        }
        else if (uVar2 == 0x625432) {
          *((ushort *)GEN_TOP(((int)this + 4))) =
               (char)((byte)*puVar6 & 1) * 4 | *((ushort *)GEN_TOP(((int)this + 4))) & 0xfffb;
        }
        else if (uVar2 == 0x625433) {
          *((ushort *)GEN_TOP(((int)this + 4))) =
               (char)((byte)*puVar6 & 1) * 8 | *((ushort *)GEN_TOP(((int)this + 4))) & 0xfff7;
        }
        else if (uVar2 == 0x625434) {
          uVar3 = (short)(char)((byte)*puVar6 & 1) << 4;
          uVar5 = 0xffef;
          goto LAB_00989e14;
        }
      }
      else if (uVar2 < 0x54784e70) {
        if (uVar2 == 0x54784e6f) {
          *((byte *)GEN_TOP(((int)this + 6))) = (byte)*puVar6;
        }
        else {
          if (uVar2 == 0x54425554) {
            uVar3 = (short)(char)((byte)*puVar6 & 3) << 8;
            uVar5 = 0xfcff;
            goto LAB_00989e14;
          }
          if (uVar2 == 0x54425654) {
            *((ushort *)GEN_TOP(((int)this + 4))) =
                 (short)(char)((byte)*puVar6 & 3) << 10 | *((ushort *)GEN_TOP(((int)this + 4))) & 0xf3ff;
          }
        }
      }
      else if (uVar2 == 0x5576534e) {
        uVar3 = (short)(char)((byte)*puVar6 & 7) << 5;
        uVar5 = 0xff1f;
LAB_00989e14: ;
        *((ushort *)GEN_TOP(((int)this + 4))) = uVar3 | *((ushort *)GEN_TOP(((int)this + 4))) & uVar5;
      }
      else if (uVar2 == 0x62456e61) {
        *((ushort *)GEN_TOP(((int)this + 4))) =
             (short)(char)((byte)*puVar6 & 1) | *((ushort *)GEN_TOP(((int)this + 4))) & 0xfffe;
      }
      puVar1 = puVar7 + 1;
      puVar7 = ((uint *)GEN_TOP(((int)puVar6 + (*puVar1 + 3 & 0xfffffffc))));
      uVar4 = uVar4 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar4 < param_3);
  }
  return;
}

/* ref: FUN_00989e50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00989e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x989e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint * puVar4;
  uint * puVar5;
  
  uVar2 = 0;
  puVar5 = param_2;
  if (param_3 != 0) {
    do {
      uVar1 = *puVar5;
      puVar4 = puVar5 + 2;
      if (uVar1 < 0x54784e70) {
        if (uVar1 == 0x54784e6f) {
          *((byte *)GEN_TOP(((int)this + 5))) = (byte)*puVar4;
        }
        else {
          if (uVar1 == 0x544654) {
            bVar3 = ((byte)*puVar4 * '\x02' ^ *((byte *)GEN_TOP(((int)this + 4)))) & 0xe;
            goto LAB_00989ebe;
          }
          if (uVar1 == 0x504f6666) {
            F_00988d70(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1,puVar4,puVar5[1]);
          }
        }
      }
      else if (uVar1 == 0x62456e61) {
        bVar3 = ((byte)*puVar4 ^ *((byte *)GEN_TOP(((int)this + 4)))) & 1;
LAB_00989ebe: ;
        *((byte *)GEN_TOP(((int)this + 4))) = *((byte *)GEN_TOP(((int)this + 4))) ^ bVar3;
      }
      uVar2 = uVar2 + 8 + (puVar5[1] + 3 & 0xfffffffc);
      puVar5 = ((uint *)GEN_TOP(((int)puVar4 + (puVar5[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_3);
  }
  return;
}

/* ref: FUN_00989ee0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00989ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x989ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  double dVar1;
  uint uVar2;
  undefined * this_00;
  uint * puVar3;
  uint * puVar4;
  uint uVar5;
  uint uVar6;
  uint * puVar7;
  uint * puVar8;
  uint uVar9;
  int iVar10;
  uint * puVar11;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_c;
  byte local_5;
  
  uVar5 = 0;
  dVar1 = *(double *)&REFG(undefined, 0x1094560);
  if (param_3 != 0) {
    do {
      puVar7 = ((uint *)GEN_TOP(0x0));
      uVar2 = *param_2;
      puVar8 = param_2 + 2;
      if (uVar2 < 0x4c656e53) {
        if (uVar2 == 0x4c656e52) {
          this_00 = ((undefined *)GEN_TOP(((int)this + 0x28)));
          goto LAB_0098a16c;
        }
        if (uVar2 != 0x4c656e) {
          if (uVar2 != 0x576474) goto LAB_0098a182;
          uVar2 = param_2[1];
          this_00 = ((undefined *)GEN_TOP(((int)this + 8)));
          goto LAB_0098a175;
        }
        uVar2 = param_2[1];
        uVar6 = 0;
        local_c = 0;
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        puVar3 = puVar8;
        iVar10 = REFG(int, 0x14a09d8);
        if (uVar2 != 0) {
          do {
            uVar9 = *puVar3;
            puVar4 = puVar3 + 2;
            if (uVar9 < 0x4b657944) {
              if (uVar9 == 0x4b657943) {
                local_c = (uint)(char)*puVar4;
                if (local_c != 0) {
                  if (REFG(char, 0x14a06d6) == '\0') {
                    uVar9 = iVar10 + 0xfU & 0xfffffff0;
                    puVar7 = ((uint *)GEN_TOP((REFG(int, 0x14a09e0) + uVar9)));
                    iVar10 = uVar9 + (local_c * 8 + 0x13 & 0xfffffff0);
                    REFG(int, 0x14a09d8) = iVar10;
                  }
                  else {
                    REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) +
                                   (local_c * 8 + 0x13 & 0xfffffff0);
                    puVar7 = ((uint *)GEN_TOP(0x0));
                  }
                }
              }
              else if (uVar9 == 0x4276506f) {
                local_20 = (uint)(char)*puVar4;
              }
              else if (uVar9 == 0x42765072) {
                local_24 = (uint)(char)*puVar4;
              }
            }
            else if (uVar9 == 0x4b657973) {
              if (local_c != 0) {
                local_5 = 0;
                uVar9 = 0;
                do {
                  puVar11 = puVar4 + uVar9 * 4;
                  puVar7[uVar9 * 2 + 1] = puVar4[uVar9 * 4 + 3];
                  *(ushort *)(puVar7 + uVar9 * 2 + 2) =
                       (ushort)puVar7[uVar9 * 2 + 2] ^
                       ((ushort)puVar7[uVar9 * 2 + 2] ^ (ushort)*puVar11) & 0x3fff;
                  *(ushort *)(puVar7 + uVar9 * 2 + 2) =
                       *((ushort *)GEN_TOP(((int)puVar11 + 2))) << 0xe | (ushort)puVar7[uVar9 * 2 + 2] & 0x3fff
                  ;
                  *((char *)GEN_TOP(((int)puVar7 + uVar9 * 8 + 10))) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar11[1]))) * dVar1);
                  *((char *)GEN_TOP(((int)puVar7 + uVar9 * 8 + 0xb))) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar11[2]))) * dVar1);
                  local_5 = local_5 + 1;
                  uVar9 = (uint)local_5;
                  iVar10 = REFG(int, 0x14a09d8);
                } while (uVar9 < local_c);
              }
            }
            else if (uVar9 == 0x52616e54) {
              local_1c = (uint)(char)*puVar4;
            }
            uVar6 = uVar6 + 8 + (puVar3[1] + 3 & 0xfffffffc);
            puVar3 = ((uint *)GEN_TOP(((int)puVar4 + (puVar3[1] + 3 & 0xfffffffc))));
          } while (uVar6 < uVar2);
          if (puVar7 != ((uint *)GEN_TOP(0x0))) {
            *puVar7 = (((local_c & 0xffff) << 5 | local_1c & 7) * 4 | local_20 & 3) * 4 |
                      *puVar7 & 0xfe000180 | local_24 & 3;
            *((uint * PTR32 *)GEN_TOP(((int)this + 0x24))) = puVar7;
          }
        }
        puVar7 = *((uint * PTR32 *)GEN_TOP(((int)this + 0x24)));
        uVar2 = *puVar7 >> 9 & 0xffff;
        if (uVar2 == 0) {
          *puVar7 = *puVar7 & 0xfffffe7f;
        }
        else if (uVar2 == 1) {
          *puVar7 = *puVar7 & 0xfffffeff | 0x80;
        }
        else {
          *puVar7 = *puVar7 & 0xffffff7f | 0x100;
        }
      }
      else {
        if (uVar2 != 0x57647452) goto LAB_0098a182;
        this_00 = ((undefined *)GEN_TOP(((int)this + 0x10)));
LAB_0098a16c: ;
        uVar2 = param_2[1];
LAB_0098a175: ;
        F_00988d70(this_00 GEN_EDX_FWD,param_1,puVar8,uVar2);
        dVar1 = *(double *)&REFG(undefined, 0x1094560);
      }
LAB_0098a182: ;
      puVar7 = param_2 + 1;
      param_2 = ((uint *)GEN_TOP(((int)puVar8 + (*puVar7 + 3 & 0xfffffffc))));
      uVar5 = uVar5 + 8 + (*puVar7 + 3 & 0xfffffffc);
    } while (uVar5 < param_3);
  }
  return;
}

/* ref: FUN_0098a1b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098a1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98a1b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10deb40));
  *((undefined1 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) & 0xfffffff8;
  F_00988b80(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_FWD);
  F_00988b80(((undefined *)GEN_TOP(((int)this + 0x8c))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_0098a200 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0098a200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98a200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xec))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xdc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xcc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xbc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xac))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x9c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x94))) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8c))) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x80))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x78))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x70))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x60))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x50))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x38))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x28))) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd4e8));
  return 0;
}

/* ref: FUN_0098a2a0 */
GEN_OWN GEN_FRAME unsigned int F_0098a2a0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x98a2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  uVar2 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar1 < 0x436f6c46) {
        if (uVar1 != 0x436f6c45) {
          if (uVar1 == 0x4c656e) goto LAB_0098a2e4;
          if (uVar1 != 0x436f6c42) goto LAB_0098a2f1;
        }
        F_00988c40(puVar3,puVar4[1]);
      }
      else if (uVar1 == 0x4c656e52) {
LAB_0098a2e4: ;
        F_0097c440(puVar3,puVar4[1]);
      }
LAB_0098a2f1: ;
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return;
}

/* ref: FUN_0098a310 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098a310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98a310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10deb58));
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((uint *)GEN_TOP(((int)this + 0xc))) = *((uint *)GEN_TOP(((int)this + 0xc))) & 0xffff00ff;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x24))) = *((uint *)GEN_TOP(((int)this + 0x24))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x28))) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x34))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x38))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x3c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x44))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x4c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x50))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x54))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x5c))) = &REFG(undefined, 0x14a0a44);
  F_00988b80(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_FWD);
  F_00988b80(((undefined *)GEN_TOP(((int)this + 0xcc))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x138))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x13c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x140))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x144))) = &REFG(undefined, 0x14a0a44);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_0098a3b0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0098a3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98a3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x140))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x138))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 300))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x124))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x11c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x114))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x104))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xfc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xf4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xec))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xdc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd4))) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xcc))) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x98))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x90))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x88))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x80))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x78))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x70))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x60))) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x50))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x38))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x28))) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10dd5ac));
  return 0;
}

/* ref: FUN_0098a490 */
GEN_OWN GEN_FRAME unsigned int F_0098a490(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x98a490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  uVar2 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar1 < 0x46724353) {
        if ((uVar1 == 0x46724352) || (uVar1 == 0x467243)) {
LAB_0098a4e7: ;
          F_0097c440(puVar3,puVar4[1]);
        }
        else if ((uVar1 == 0x436f6c42) || (uVar1 == 0x436f6c45)) {
          F_00988c40(puVar3,puVar4[1]);
        }
      }
      else if (uVar1 == 0x46725274) {
        F_00988990(puVar3,puVar4[1]);
      }
      else if ((uVar1 == 0x4d6f7068) || (uVar1 == 0x4e6f416e)) goto LAB_0098a4e7;
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return;
}

/* ref: FUN_0098a520 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0098a520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x98a520u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  int * piVar1;
  double dVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  uint * puVar6;
  uint uVar7;
  uint * puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint * puVar12;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_c;
  byte local_5;
  
  uVar9 = 0;
  dVar2 = *(double *)&REFG(undefined, 0x1094560);
  if (param_3 != 0) {
    do {
      puVar8 = ((uint *)GEN_TOP(0x0));
      puVar4 = (uint *)(param_2 + 2);
      if (*param_2 == 0x436e74) {
        uVar3 = param_2[1];
        uVar7 = 0;
        local_c = 0;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        puVar5 = puVar4;
        iVar11 = REFG(int, 0x14a09d8);
        if (uVar3 != 0) {
          do {
            uVar10 = *puVar5;
            puVar6 = puVar5 + 2;
            if (uVar10 < 0x4b657944) {
              if (uVar10 == 0x4b657943) {
                local_c = (uint)(char)*puVar6;
                if (local_c != 0) {
                  if (REFG(char, 0x14a06d6) == '\0') {
                    uVar10 = iVar11 + 0xfU & 0xfffffff0;
                    puVar8 = ((uint *)GEN_TOP((REFG(int, 0x14a09e0) + uVar10)));
                    iVar11 = uVar10 + (local_c * 8 + 0x13 & 0xfffffff0);
                    REFG(int, 0x14a09d8) = iVar11;
                  }
                  else {
                    REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) +
                                   (local_c * 8 + 0x13 & 0xfffffff0);
                    puVar8 = ((uint *)GEN_TOP(0x0));
                  }
                }
              }
              else if (uVar10 == 0x4276506f) {
                local_1c = (uint)(char)*puVar6;
              }
              else if (uVar10 == 0x42765072) {
                local_20 = (uint)(char)*puVar6;
              }
            }
            else if (uVar10 == 0x4b657973) {
              if (local_c != 0) {
                local_5 = 0;
                uVar10 = 0;
                do {
                  puVar12 = puVar6 + uVar10 * 4;
                  puVar8[uVar10 * 2 + 1] = puVar6[uVar10 * 4 + 3];
                  *(ushort *)(puVar8 + uVar10 * 2 + 2) =
                       (ushort)puVar8[uVar10 * 2 + 2] ^
                       ((ushort)puVar8[uVar10 * 2 + 2] ^ (ushort)*puVar12) & 0x3fff;
                  *(ushort *)(puVar8 + uVar10 * 2 + 2) =
                       *((ushort *)GEN_TOP(((int)puVar12 + 2))) << 0xe |
                       (ushort)puVar8[uVar10 * 2 + 2] & 0x3fff;
                  *((char *)GEN_TOP(((int)puVar8 + uVar10 * 8 + 10))) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[1]))) * dVar2);
                  *((char *)GEN_TOP(((int)puVar8 + uVar10 * 8 + 0xb))) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[2]))) * dVar2);
                  local_5 = local_5 + 1;
                  uVar10 = (uint)local_5;
                  iVar11 = REFG(int, 0x14a09d8);
                } while (uVar10 < local_c);
              }
            }
            else if (uVar10 == 0x52616e54) {
              local_18 = (uint)(char)*puVar6;
            }
            uVar7 = uVar7 + 8 + (puVar5[1] + 3 & 0xfffffffc);
            puVar5 = ((uint *)GEN_TOP(((int)puVar6 + (puVar5[1] + 3 & 0xfffffffc))));
          } while (uVar7 < uVar3);
          if (puVar8 != ((uint *)GEN_TOP(0x0))) {
            *puVar8 = (((local_c & 0xffff) << 5 | local_18 & 7) * 4 | local_1c & 3) * 4 |
                      *puVar8 & 0xfe000180 | local_20 & 3;
            *((uint * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
          }
        }
        puVar8 = *((uint * PTR32 *)GEN_TOP(((int)this + 0xc)));
        uVar3 = *puVar8 >> 9 & 0xffff;
        if (uVar3 == 0) {
          *puVar8 = *puVar8 & 0xfffffe7f;
        }
        else if (uVar3 == 1) {
          *puVar8 = *puVar8 & 0xfffffeff | 0x80;
        }
        else {
          *puVar8 = *puVar8 & 0xffffff7f | 0x100;
        }
      }
      else if (*param_2 == 0x436e7452) {
        F_00988d70(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,param_1,puVar4,param_2[1]);
        dVar2 = *(double *)&REFG(undefined, 0x1094560);
      }
      piVar1 = param_2 + 1;
      param_2 = ((int *)GEN_TOP(((int)puVar4 + (*piVar1 + 3U & 0xfffffffc))));
      uVar9 = uVar9 + 8 + (*piVar1 + 3U & 0xfffffffc);
    } while (uVar9 < param_3);
  }
  return;
}

/* ref: FUN_0098a7c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098a7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98a7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((byte *)GEN_TOP(((int)this + 8))) = *((byte *)GEN_TOP(((int)this + 8))) & 0xe0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10deb94));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x20))) = *((uint *)GEN_TOP(((int)this + 0x20))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x24))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x28))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x2c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x34))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x38))) = *((uint *)GEN_TOP(((int)this + 0x38))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x44))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x4c))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x50))) = *((uint *)GEN_TOP(((int)this + 0x50))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x54))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x5c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x60))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 100))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x68))) = *((uint *)GEN_TOP(((int)this + 0x68))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x6c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x70))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x74))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x78))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x7c))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x80))) = *((uint *)GEN_TOP(((int)this + 0x80))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x88))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x8c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x90))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x94))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x98))) = *((uint *)GEN_TOP(((int)this + 0x98))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x9c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xa4))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xac))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xb8))) = &REFG(undefined, 0x14a0a44);
  F_00988b80(((undefined *)GEN_TOP(((int)this + 0xbc))) GEN_EDX_FWD);
  F_00988b80(((undefined *)GEN_TOP(((int)this + 0x128))) GEN_EDX_ARG);
  F_00988b80(((undefined *)GEN_TOP(((int)this + 0x194))) GEN_EDX_ARG);
  F_00988b80(((undefined *)GEN_TOP(((int)this + 0x200))) GEN_EDX_ARG);
  F_00988b80(((undefined *)GEN_TOP(((int)this + 0x26c))) GEN_EDX_ARG);
  F_00988b80(((undefined *)GEN_TOP(((int)this + 0x2d8))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_0098a8f0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0098a8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98a8f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x338))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x330))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x328))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 800))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x318))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x308))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x300))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2f8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2f0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2e8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2e0))) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2d8))) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2cc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 700))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2b4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2ac))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2a4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x29c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x294))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x28c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x284))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x27c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x274))) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x26c))) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x260))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 600))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x250))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x248))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x240))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x238))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x230))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x228))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x220))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x218))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x210))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x208))) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x200))) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 500))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1ec))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1e4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1dc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1d4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1cc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1bc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1ac))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x19c))) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x194))) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x188))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x180))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x178))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x170))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x168))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x160))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x158))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x150))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x148))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x140))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x138))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x130))) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x128))) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x11c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x114))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x104))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xfc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xf4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xec))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xdc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xcc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc4))) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xbc))) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x9c))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x90))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x88))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x78))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x70))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x6c))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x60))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x54))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3c))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x28))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x24))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228))
  ;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10dd544));
  return 0;
}

/* ref: FUN_0098ab40 */
GEN_OWN GEN_FRAME unsigned int F_0098ab40(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x98ab40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  uVar2 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar1 < 0x436f4546) {
        if (uVar1 == 0x436f4545) {
LAB_0098ac07: ;
          F_00988c40(puVar3,puVar4[1]);
        }
        else if (uVar1 < 0x536675) {
          if (uVar1 == 0x536674) goto LAB_0098ac31;
          if (uVar1 < 0x434653) {
            if (((uVar1 == 0x434652) || (uVar1 == 0x4346)) || (uVar1 == 0x5764)) goto LAB_0098ac31;
          }
          else if (uVar1 == 0x4c656e) goto LAB_0098ac31;
        }
        else if (uVar1 < 0x576453) {
          if ((uVar1 == 0x576452) ||
             ((0x576441 < uVar1 && ((uVar1 < 0x576444 || (uVar1 == 0x576445)))))) goto LAB_0098ac31;
        }
        else if ((0x436f4541 < uVar1) && (uVar1 < 0x436f4544)) goto LAB_0098ac07;
        goto LAB_0098ac3e;
      }
      if (uVar1 < 0x53667453) {
        if (uVar1 == 0x53667452) goto LAB_0098ac31;
        if (uVar1 < 0x4c656e53) {
          if (uVar1 == 0x4c656e52) goto LAB_0098ac31;
          if ((0x436f6c41 < uVar1) && ((uVar1 < 0x436f6c44 || (uVar1 == 0x436f6c45))))
          goto LAB_0098ac07;
        }
        else if (uVar1 == 0x506e4473) goto LAB_0098ac31;
      }
      else {
        if (((uVar1 != 0x57644252) && (uVar1 != 0x57644352)) && (uVar1 != 0x57644552))
        goto LAB_0098ac3e;
LAB_0098ac31: ;
        F_0097c440(puVar3,puVar4[1]);
      }
LAB_0098ac3e: ;
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return;
}

/* ref: FUN_0098ac60 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0098ac60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x98ac60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  double dVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  uint uVar5;
  uint uVar6;
  uint * puVar7;
  uint * puVar8;
  uint uVar9;
  int iVar10;
  uint * puVar11;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_c;
  byte local_5;
  
  uVar5 = 0;
  dVar1 = *(double *)&REFG(undefined, 0x1094560);
  if (param_3 != 0) {
    do {
      puVar7 = ((uint *)GEN_TOP(0x0));
      uVar2 = *param_2;
      puVar8 = param_2 + 2;
      if (uVar2 < 0x574945) {
        if (uVar2 == 0x574944) {
          uVar2 = param_2[1];
          uVar6 = 0;
          local_c = 0;
          local_24 = 0;
          local_20 = 0;
          local_1c = 0;
          puVar3 = puVar8;
          iVar10 = REFG(int, 0x14a09d8);
          if (uVar2 != 0) {
            do {
              uVar9 = *puVar3;
              puVar4 = puVar3 + 2;
              if (uVar9 < 0x4b657944) {
                if (uVar9 == 0x4b657943) {
                  local_c = (uint)(char)*puVar4;
                  if (local_c != 0) {
                    if (REFG(char, 0x14a06d6) == '\0') {
                      uVar9 = iVar10 + 0xfU & 0xfffffff0;
                      puVar7 = ((uint *)GEN_TOP((REFG(int, 0x14a09e0) + uVar9)));
                      iVar10 = uVar9 + (local_c * 8 + 0x13 & 0xfffffff0);
                      REFG(int, 0x14a09d8) = iVar10;
                    }
                    else {
                      REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) +
                                     (local_c * 8 + 0x13 & 0xfffffff0);
                      puVar7 = ((uint *)GEN_TOP(0x0));
                    }
                  }
                }
                else if (uVar9 == 0x4276506f) {
                  local_20 = (uint)(char)*puVar4;
                }
                else if (uVar9 == 0x42765072) {
                  local_24 = (uint)(char)*puVar4;
                }
              }
              else if (uVar9 == 0x4b657973) {
                if (local_c != 0) {
                  local_5 = 0;
                  uVar9 = 0;
                  do {
                    puVar11 = puVar4 + uVar9 * 4;
                    puVar7[uVar9 * 2 + 1] = puVar4[uVar9 * 4 + 3];
                    *(ushort *)(puVar7 + uVar9 * 2 + 2) =
                         (ushort)puVar7[uVar9 * 2 + 2] ^
                         ((ushort)puVar7[uVar9 * 2 + 2] ^ (ushort)*puVar11) & 0x3fff;
                    *(ushort *)(puVar7 + uVar9 * 2 + 2) =
                         *((ushort *)GEN_TOP(((int)puVar11 + 2))) << 0xe |
                         (ushort)puVar7[uVar9 * 2 + 2] & 0x3fff;
                    *((char *)GEN_TOP(((int)puVar7 + uVar9 * 8 + 10))) =
                         (char)(int)(((double)GEN_TOD(gen_bits2f(puVar11[1]))) * dVar1);
                    *((char *)GEN_TOP(((int)puVar7 + uVar9 * 8 + 0xb))) =
                         (char)(int)(((double)GEN_TOD(gen_bits2f(puVar11[2]))) * dVar1);
                    local_5 = local_5 + 1;
                    uVar9 = (uint)local_5;
                    iVar10 = REFG(int, 0x14a09d8);
                  } while (uVar9 < local_c);
                }
              }
              else if (uVar9 == 0x52616e54) {
                local_1c = (uint)(char)*puVar4;
              }
              uVar6 = uVar6 + 8 + (puVar3[1] + 3 & 0xfffffffc);
              puVar3 = ((uint *)GEN_TOP(((int)puVar4 + (puVar3[1] + 3 & 0xfffffffc))));
            } while (uVar6 < uVar2);
            if (puVar7 != ((uint *)GEN_TOP(0x0))) {
              *puVar7 = (((local_c & 0xffff) << 5 | local_1c & 7) * 4 | local_20 & 3) * 4 |
                        *puVar7 & 0xfe000180 | local_24 & 3;
              *((uint * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar7;
            }
          }
          puVar7 = *((uint * PTR32 *)GEN_TOP(((int)this + 0xc)));
          uVar2 = *puVar7 >> 9 & 0xffff;
          if (uVar2 == 0) {
            *puVar7 = *puVar7 & 0xfffffe7f;
          }
          else if (uVar2 == 1) {
            *puVar7 = *puVar7 & 0xfffffeff | 0x80;
          }
          else {
            *puVar7 = *puVar7 & 0xffffff7f | 0x100;
          }
        }
        else if (uVar2 == 0x5246) {
          *((uint *)GEN_TOP(((int)this + 0x20))) = *puVar8;
        }
        else if (uVar2 == 0x5353) {
          *((uint *)GEN_TOP(((int)this + 0x1c))) = *puVar8;
        }
      }
      else if (uVar2 == 0x57494452) {
        F_00988d70(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,param_1,puVar8,param_2[1]);
        dVar1 = *(double *)&REFG(undefined, 0x1094560);
      }
      puVar7 = param_2 + 1;
      param_2 = ((uint *)GEN_TOP(((int)puVar8 + (*puVar7 + 3 & 0xfffffffc))));
      uVar5 = uVar5 + 8 + (*puVar7 + 3 & 0xfffffffc);
    } while (uVar5 < param_3);
  }
  return;
}

/* ref: FUN_0098af30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098af30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98af30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10debfc));
  *((undefined2 *)GEN_TOP(((int)this + 4))) = 0x201;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 6))) = 2;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x20))) = *((uint *)GEN_TOP(((int)this + 0x20))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x24))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x28))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x2c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x34))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x38))) = *((uint *)GEN_TOP(((int)this + 0x38))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x44))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x4c))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x50))) = *((uint *)GEN_TOP(((int)this + 0x50))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x54))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x5c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x60))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 100))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x68))) = *((uint *)GEN_TOP(((int)this + 0x68))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x6c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x70))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x74))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x78))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x7c))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x80))) = *((uint *)GEN_TOP(((int)this + 0x80))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x88))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x8c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x90))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x94))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x98))) = *((uint *)GEN_TOP(((int)this + 0x98))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x9c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xa4))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xac))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xbc))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc0))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc4))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 200))) = *((uint *)GEN_TOP(((int)this + 200))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xcc))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd0))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xd4))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xdc))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0xe0))) = *((uint *)GEN_TOP(((int)this + 0xe0))) & 0xfffffff8;
  F_00988b80(((undefined *)GEN_TOP(((int)this + 0xe4))) GEN_EDX_FWD);
  F_00988b80(((undefined *)GEN_TOP(((int)this + 0x150))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_0098b070 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0098b070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98b070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x198))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 400))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x188))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x180))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x178))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x170))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x168))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x160))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x158))) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x150))) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x144))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x13c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x134))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 300))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x124))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x11c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x114))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x104))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xfc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xf4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xec))) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xcc))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb4))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x9c))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x90))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x88))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x78))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x70))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x6c))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x60))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x54))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3c))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x28))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x24))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228))
  ;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10dd614));
  return 0;
}

/* ref: FUN_0098b1a0 */
GEN_OWN GEN_FRAME unsigned int F_0098b1a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x98b1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  uVar2 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    do {
      puVar1 = ((undefined *)GEN_TOP(*puVar4));
      puVar3 = puVar4 + 2;
      if (puVar1 < ((undefined *)GEN_TOP(0x484550))) {
        if (puVar1 != ((undefined *)GEN_TOP(0x48454f))) {
          if (puVar1 <= &REFG(undefined, 0x434549)) {
            if (puVar1 == &REFG(undefined, 0x434549)) {
LAB_0098b22a: ;
              F_00988c40(puVar3,puVar4[1]);
            }
            else if (puVar1 < ((undefined *)GEN_TOP(0x5743))) {
              if ((puVar1 == ((undefined *)GEN_TOP(0x5742))) ||
                 ((puVar1 == ((undefined *)GEN_TOP(0x5242)) || (puVar1 == ((undefined *)GEN_TOP(0x5245))))))
              goto LAB_0098b28a;
            }
            else if ((puVar1 == ((undefined *)GEN_TOP(0x5745))) || (puVar1 == ((undefined *)GEN_TOP(0x416e67))))
            goto LAB_0098b28a;
            goto LAB_0098b297;
          }
          if (puVar1 < ((undefined *)GEN_TOP(0x484250))) {
            if (puVar1 != ((undefined *)GEN_TOP(0x48424f))) {
              if (puVar1 == &REFG(undefined, 0x43454f)) goto LAB_0098b22a;
              if (puVar1 != ((undefined *)GEN_TOP(0x484249))) goto LAB_0098b297;
            }
          }
          else if (puVar1 != ((undefined *)GEN_TOP(0x484549))) goto LAB_0098b297;
        }
LAB_0098b28a: ;
        F_0097c440(puVar3,puVar4[1]);
      }
      else {
        if (puVar1 < ((undefined *)GEN_TOP(0x416e6753))) {
          if (puVar1 != ((undefined *)GEN_TOP(0x416e6752))) {
            if (puVar1 < ((undefined *)GEN_TOP(0x574253))) {
              if (((puVar1 == ((undefined *)GEN_TOP(0x574252))) || (puVar1 == ((undefined *)GEN_TOP(0x524252)))) ||
                 (puVar1 == ((undefined *)GEN_TOP(0x524552)))) goto LAB_0098b28a;
            }
            else if (puVar1 == ((undefined *)GEN_TOP(0x574552))) goto LAB_0098b28a;
            goto LAB_0098b297;
          }
          goto LAB_0098b28a;
        }
        if (puVar1 < ((undefined *)GEN_TOP(0x48454953))) {
          if (((puVar1 == ((undefined *)GEN_TOP(0x48454952))) || (puVar1 == ((undefined *)GEN_TOP(0x48424952)))) ||
             (puVar1 == ((undefined *)GEN_TOP(0x48424f52)))) goto LAB_0098b28a;
        }
        else if (puVar1 == ((undefined *)GEN_TOP(0x48454f52))) goto LAB_0098b28a;
      }
LAB_0098b297: ;
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((undefined4 *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return;
}

/* ref: FUN_0098b2c0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0098b2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98b2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x204))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de010));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1f8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de010));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[31])REFP(0x10dde84));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1e0)));
  while (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(puVar2[0x7a]));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD,1);
    puVar2 = puVar1;
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::BinderInstance::vf25 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0098b300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98b300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pBVar1;
  float fVar2;
  code * pcVar3;
  float10 fVar4;
  
  fVar2 = *(float *)(this + 0x1ec);
  if ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar2 <= *(float *)&REFG(undefined, 0x1088114))) {
    fVar4 = GEN_X87((float10)((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)(this + 0x1b0)))));
    *(float *)(this + 0x1ec) = ((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)(this + 0x1b0))));
    if (fVar4 <= (float10)0) {
      pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x7c)));
      fVar2 = ((float)GEN_TOF((-fVar4 * (float10)*(float *)(this + 0x1bc))));
      *(float *)(this + 0x1a8) = fVar2;
      *(float *)(this + 0x1ac) = fVar2;
      (*pcVar3)(this);
    }
  }
  pBVar1 = this + 0x1b8;
  if ((!GEN_ISNAN(*(float *)pBVar1) && (!(0.0 < *(float *)pBVar1) && *(float *)pBVar1 != 0.0)) &&
     ((*(uint *)(this + 0x1d0) & 0x7fe00) == 0)) {
    *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) & 0xf81fffff | 0x40000;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
  }
  return;
}

/* ref: Apricot::Engine::Instance::BinderInstance::vf27 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0098b3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98b3a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pBVar1;
  float fVar2;
  code * pcVar3;
  float10 fVar4;
  
  fVar2 = *(float *)(this + 0x1ec);
  if ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar2 <= *(float *)&REFG(undefined, 0x1088114))) {
    fVar4 = GEN_X87((float10)((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)(this + 0x1b0)))));
    *(float *)(this + 0x1ec) = ((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)(this + 0x1b0))));
    if (fVar4 <= (float10)0) {
      pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x7c)));
      fVar2 = ((float)GEN_TOF((-fVar4 * (float10)*(float *)(this + 0x1bc))));
      *(float *)(this + 0x1a8) = fVar2;
      *(float *)(this + 0x1ac) = fVar2;
      (*pcVar3)(this);
    }
  }
  pBVar1 = this + 0x1b8;
  if ((!GEN_ISNAN(*(float *)pBVar1) && (!(0.0 < *(float *)pBVar1) && *(float *)pBVar1 != 0.0)) &&
     ((*(uint *)(this + 0x1d0) & 0x7fe00) == 0)) {
    *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) & 0xf81fffff | 0x40000;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
  }
  return;
}

/* ref: Apricot::Engine::Instance::DocumentInstance::vf12 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0098b440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98b440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  int * piVar3;
  undefined * pDVar4;
  undefined * pDVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int local_8;
  
  pDVar5 = this + 0x324;
  pDVar4 = this + 0x382;
  local_8 = 4;
  do {
    iVar1 = (&REFG(undefined4, 0x14a0a08))[(int)(REFG(int, 0x14a09f8))];
    uVar6 = *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
    uVar7 = uVar6 + *(short *)(pDVar4 - 2) * 0x10;
    bVar8 = REFG(undefined4, 0x14a09fc) < uVar7;
    *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar7;
    *(uint *)(pDVar5 - 4) = ~-(uint)bVar8 & iVar1 + uVar6;
    iVar1 = (&REFG(undefined4, 0x14a0a08))[(int)(REFG(int, 0x14a09f8))];
    iVar2 = *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
    uVar6 = *(short *)((int)(uintptr_t)pDVar4) * 0x10 + iVar2;
    *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar6;
    *(uint *)pDVar5 = ~-(uint)(REFG(undefined4, 0x14a09fc) < uVar6) & iVar1 + iVar2;
    iVar1 = (&REFG(undefined4, 0x14a0a08))[(int)(REFG(int, 0x14a09f8))];
    iVar2 = *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
    uVar6 = *(short *)(pDVar4 + 2) * 0x10 + iVar2;
    *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar6;
    *(uint *)(pDVar5 + 4) = ~-(uint)(REFG(undefined4, 0x14a09fc) < uVar6) & iVar1 + iVar2;
    iVar1 = (&REFG(undefined4, 0x14a0a08))[(int)(REFG(int, 0x14a09f8))];
    iVar2 = *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
    uVar6 = *(short *)(pDVar4 + 4) * 0x10 + iVar2;
    bVar8 = REFG(undefined4, 0x14a09fc) < uVar6;
    *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar6;
    *(uint *)(pDVar5 + 8) = ~-(uint)bVar8 & iVar1 + iVar2;
    pDVar4 = pDVar4 + 8;
    pDVar5 = pDVar5 + 0x10;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  iVar1 = (&REFG(undefined4, 0x14a0a08))[(int)(REFG(int, 0x14a09f8))];
  iVar2 = *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
  uVar6 = (uint)*(ushort *)(this + 0x3a8) * 0x10 + iVar2;
  *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar6;
  *(uint *)(this + 0x31c) = ~-(uint)(REFG(undefined4, 0x14a09fc) < uVar6) & iVar1 + iVar2;
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f050))[(int)(*(uint *)(this + 0x1d0) >> 0x17 & 1)])))(this);
  for (piVar3 = *(int * PTR32 *)(this + 0x1e0); piVar3 != ((int *)GEN_TOP(0x0)); piVar3 = ((int *)GEN_TOP(piVar3[0x7a]))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x30))))(piVar3 GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_0098b5e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098b5e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x98b5e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  int iVar1;
  float * pfVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_10;
  float local_c;
  float local_8;
  
  fVar3 = (float10)*(double *)&REFG(undefined, 0x1088118);
  local_10 = REFG(float, 0x132f3f8);
  local_c = REFG(float, 0x132f3fc);
  local_8 = REFG(float, 0x132f400);
  if (param_3 == 0) {
    iVar1 = *((int *)GEN_TOP((in_ecx + 0x1ec)));
    fVar7 = (float10)1;
    fVar4 = GEN_X87((float10)(float)((float10)(int)param_4 / fVar3));
    fVar5 = GEN_X87((float10)((float)GEN_TOF((fVar4 * ((float10)*((float *)GEN_TOP((iVar1 + 0x18))) - fVar7) + fVar7))) *
            (float10)REFG(float, 0x132f3f8));
    fVar6 = GEN_X87((float10)((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar1 + 0x1c))) - fVar7) * fVar4 + fVar7))) *
            (float10)REFG(float, 0x132f3fc));
    fVar7 = GEN_X87(fVar7 + ((float10)*((float *)GEN_TOP((iVar1 + 0x20))) - fVar7) * fVar4);
  }
  else {
    if (param_3 != 1) goto LAB_0098b6d9;
    iVar1 = *((int *)GEN_TOP((in_ecx + 0x1ec)));
    fVar7 = (float10)1;
    fVar4 = GEN_X87((float10)(float)((float10)(int)param_4 / fVar3));
    fVar5 = GEN_X87((float10)((float)GEN_TOF((fVar4 * ((float10)*((float *)GEN_TOP((iVar1 + 0x24))) - fVar7) + fVar7))) *
            (float10)REFG(float, 0x132f3f8));
    fVar6 = GEN_X87((float10)((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar1 + 0x28))) - fVar7) * fVar4 + fVar7))) *
            (float10)REFG(float, 0x132f3fc));
    fVar7 = GEN_X87(fVar7 + ((float10)*((float *)GEN_TOP((iVar1 + 0x2c))) - fVar7) * fVar4);
  }
  local_c = (float)fVar6;
  local_10 = (float)fVar5;
  local_8 = (float)((float10)(float)fVar7 * (float10)REFG(float, 0x132f400));
LAB_0098b6d9: ;
  if (param_5 == 0) {
    pfVar2 = *((float * PTR32 *)GEN_TOP((in_ecx + 0x1ec)));
    fVar3 = GEN_X87((float10)(float)((float10)param_6 / fVar3));
    local_10 = (float)((float10)local_10 + fVar3 * (float10)*pfVar2);
    local_c = (float)((float10)pfVar2[1] * fVar3 + (float10)local_c);
    local_8 = (float)(fVar3 * (float10)pfVar2[2] + (float10)local_8);
  }
  else if (param_5 == 1) {
    iVar1 = *((int *)GEN_TOP((in_ecx + 0x1ec)));
    fVar3 = GEN_X87((float10)(float)((float10)param_6 / fVar3));
    local_10 = ((float)GEN_TOF(((float10)local_10 + fVar3 * (float10)*((float *)GEN_TOP((iVar1 + 0xc))))));
    local_c = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar1 + 0x10))) * fVar3 + (float10)local_c)));
    local_8 = ((float)GEN_TOF((fVar3 * (float10)*((float *)GEN_TOP((iVar1 + 0x14))) + (float10)local_8)));
  }
  *param_2 = (float)((float10)*param_2 * (float10)local_10);
  param_2[1] = (float)((float10)param_2[1] * (float10)local_c);
  param_2[2] = (float)((float10)local_8 * (float10)param_2[2]);
  return (uint)param_2;
}

/* ref: FUN_0098b780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098b780(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x98b780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float in_EAX = 0;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  if (*((int *)GEN_TOP((param_1 + 0x1ec))) != 0) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1dc))) + 0xc0))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1dc))));
    *((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1ec))) + 0x30))) =
         (float)(extraout_ST0 * (float10)*((float *)GEN_TOP(param_2)));
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1dc))) + 0xc4))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1dc))));
    *((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1ec))) + 0x34))) =
         ((float)GEN_TOF((extraout_ST0_00 * (float10)*((float *)GEN_TOP((param_2 + 4))))));
    extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1dc))) + 200))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1dc)))); in_EAX = extraout_ST0_01;
    *((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1ec))) + 0x38))) =
         ((float)GEN_TOF((extraout_ST0_01 * (float10)*((float *)GEN_TOP((param_2 + 8))))));
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1ec))) + 0x3c))) = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
  }
  return (uint)gen_fl2bits(in_EAX);
}

/* ref: switchD_0097e40e::caseD_1 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0098b840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98b840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int * piVar4;
  float10 extraout_ST0;
  
  if (*(float *)&REFG(undefined, 0x1088114) < *((float *)GEN_TOP(((int)this + 0x208)))) {
    fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x208))) - (float10)*((float *)GEN_TOP(((int)this + 0x1b0))))))
    ;
    *((float *)GEN_TOP(((int)this + 0x208))) = fVar1;
    if ((float10)fVar1 <= (float10)0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x80))))(this GEN_EDX_FWD,0);
      return;
    }
  }
  else {
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x1ac)));
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x1a8)));
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) + 0x38))))
                              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) GEN_EDX_ARG)));
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4,uVar3,uVar2,(uint)*((byte *)GEN_TOP(((int)this + 0x2a4))));
    *((float *)GEN_TOP(((int)this + 0x208))) = (float)extraout_ST0;
    if ((float10)0 < (float10)(float)extraout_ST0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x80))))(this GEN_EDX_ARG,0);
    }
  }
  return;
}

/* ref: FUN_0098b900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098b900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98b900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x1a8)));
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x1ac)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) GEN_EDX_FWD)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))
            (piVar3 GEN_EDX_ARG,uVar1,uVar2,(undefined4)gen_fl2bits((float)(float10)1),(int)this + 0x290,
             (int)this + 0x98);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) + 0x4c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))
            (piVar3 GEN_EDX_ARG,uVar1,uVar2,(undefined4)gen_fl2bits((float)(float10)0),(int)this + 0x293,
             (int)this + 0xa4);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))
            (piVar3 GEN_EDX_ARG,uVar1,uVar2,(undefined4)gen_fl2bits((float)(float10)0),(int)this + 0x296,
             (int)this + 0xb0);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,uVar1,uVar2,(int)this + 0x299,(int)this + 0x88);
  return uVar4;
}

/* ref: FUN_0098ba20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098ba20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98ba20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  uVar1 = F_009820e0((int)this + 4,(int)this + 4,uVar1);
  return uVar1;
}

/* ref: FUN_0098ba40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098ba40(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x98ba40u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  float fVar1;
  int * piVar2;
  float fVar3;
  float10 extraout_ST0;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) + 0x3c))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) GEN_EDX_FWD)));
  fVar1 = *((float *)GEN_TOP((param_1 + 0x1b0)));
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))
                    (piVar2,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
                     (uint)*((byte *)GEN_TOP((param_1 + 0x29e)))); fVar3 = extraout_ST0;
  fVar1 = ((float)GEN_TOF((extraout_ST0 * (float10)fVar1 + (float10)*((float *)GEN_TOP((param_1 + 0x7c))))));
  *((float *)GEN_TOP((param_1 + 0x7c))) = fVar1;
  *((float *)GEN_TOP((param_1 + 0x80))) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)*((float *)GEN_TOP((param_1 + 0x1b0))) +
              (float10)*((float *)GEN_TOP((param_1 + 0x80))))));
  return (uint)gen_fl2bits(fVar3);
}

/* ref: FUN_0098bab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098bab0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x98bab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  *((float *)GEN_TOP((in_ecx + 0x34))) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x34))) + (float10)*param_4)));
  *((float *)GEN_TOP((in_ecx + 0x38))) = ((float)GEN_TOF(((float10)param_4[1] + (float10)*((float *)GEN_TOP((in_ecx + 0x38))))));
  *((float *)GEN_TOP((in_ecx + 0x3c))) = ((float)GEN_TOF(((float10)param_4[2] + (float10)*((float *)GEN_TOP((in_ecx + 0x3c))))));
  return (uint)param_4;
}

/* ref: FUN_0098bae0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0098bae0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x98bae0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  int * piVar3;
  float10 extraout_ST0;
  float10 fVar4;
  
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) + 0x40))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) GEN_EDX_FWD)));
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))
            (piVar3,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
             (uint)*((byte *)GEN_TOP((param_1 + 0x29f))));
  fVar4 = (float10)(float)extraout_ST0;
  fVar1 = param_4[1];
  fVar2 = param_4[2];
  *((float *)GEN_TOP((param_1 + 0x34))) =
       ((float)GEN_TOF(((float10)(float)(fVar4 * (float10)*param_4) + (float10)*((float *)GEN_TOP((param_1 + 0x34))))));
  *((float *)GEN_TOP((param_1 + 0x38))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x38))) + (float10)(float)((float10)fVar1 * fVar4))));
  *((float *)GEN_TOP((param_1 + 0x3c))) =
       ((float)GEN_TOF(((float10)(float)(fVar4 * (float10)fVar2) + (float10)*((float *)GEN_TOP((param_1 + 0x3c))))));
  return 0;
}

/* ref: FUN_0098bb60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098bb60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x98bb60u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  code * pcVar1;
  uint uVar2;
  float10 fVar3;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((param_1 + 0x2b4)));
  (*(float *)(gen_frame + 0xc)) = *((float *)GEN_TOP((param_1 + 0x1b0)));
  fVar3 = (float10)*((float *)GEN_TOP((param_1 + 0x1b0)));
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF((fVar3 * (float10)*((float *)GEN_TOP((param_1 + 0x174))))));
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x178))) * fVar3)));
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF((fVar3 * (float10)*((float *)GEN_TOP((param_1 + 0x17c))))));
  uVar2 = (*pcVar1)(param_1,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
                    &(*(float *)(gen_frame + 0x0)));
  return uVar2;
}

/* ref: FUN_0098bbc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098bbc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x98bbc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x1f0)));
  *param_2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 0x98))) * (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 0x9c))) * (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 0xa0))) * (float10)param_2[2])));
  return uVar1;
}

/* ref: FUN_0098bc00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098bc00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x98bc00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x1f0)));
  *param_2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 0xa4))) + (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 0xa8))) + (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 0xac))) + (float10)param_2[2])));
  return uVar1;
}

/* ref: FUN_0098bc40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098bc40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x98bc40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x1f0)));
  *param_2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 0xb0))) + (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 0xb4))) + (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 0xb8))) + (float10)param_2[2])));
  return uVar1;
}

/* ref: FUN_0098bc80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098bc80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x98bc80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 0x1f0)));
  *param_2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar1 + 0x88))) * (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar1 + 0x8c))) * (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar1 + 0x90))) * (float10)param_2[2])));
  param_2[3] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar1 + 0x94))) * (float10)param_2[3])));
  return (uint)param_2;
}

/* ref: FUN_0098bcc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098bcc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x98bcc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 700))))(this,((undefined4 *)GEN_TOP(((int)this + 0x98))));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = *((undefined4 *)GEN_TOP(((int)this + 0x98)));
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = *((undefined4 *)GEN_TOP(((int)this + 0x9c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = *((undefined4 *)GEN_TOP(((int)this + 0xa0)));
  return uVar1;
}

/* ref: FUN_0098bcf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098bcf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x98bcf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = *((gen_code32 *)GEN_TOP(((int)this + 700)));
  (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  uVar2 = (*pcVar1)(this,&(*(undefined4 *)(gen_frame + 0x0)));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = (*(undefined4 *)(gen_frame + 0x0));
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = (*(undefined4 *)(gen_frame + 0x4));
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = (*(undefined4 *)(gen_frame + 0x8));
  return uVar2;
}

/* ref: FUN_0098bd50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098bd50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x98bd50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x2c0))))(this,((undefined4 *)GEN_TOP(((int)this + 0xa4))));
  *((undefined4 *)GEN_TOP(((int)this + 100))) = *((undefined4 *)GEN_TOP(((int)this + 0xa4)));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = *((undefined4 *)GEN_TOP(((int)this + 0xa8)));
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP(((int)this + 0xac)));
  return uVar1;
}

/* ref: FUN_0098bd80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098bd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x98bd80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = *((gen_code32 *)GEN_TOP(((int)this + 0x2c0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  uVar2 = (*pcVar1)(this,&(*(undefined4 *)(gen_frame + 0x0)));
  *((undefined4 *)GEN_TOP(((int)this + 100))) = (*(undefined4 *)(gen_frame + 0x0));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = (*(undefined4 *)(gen_frame + 0x4));
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = (*(undefined4 *)(gen_frame + 0x8));
  return uVar2;
}

/* ref: FUN_0098bdd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098bdd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x98bdd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  code * pcVar4;
  uint uVar5;
  
  fVar1 = *((float *)GEN_TOP(((int)this + 0x34)));
  pcVar4 = *((gen_code32 *)GEN_TOP(((int)this + 0x2c4)));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = *((float *)GEN_TOP(((int)this + 0x38)));
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = *((float *)GEN_TOP(((int)this + 0x3c)));
  (*(float *)(gen_frame + 0x8)) = fVar3;
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0xb0))) + (float10)fVar1)));
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0xb4))) + (float10)fVar2)));
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0xb8))) + (float10)fVar3)));
  uVar5 = (*pcVar4)(this,&(*(float *)(gen_frame + 0x0)));
  *((float *)GEN_TOP(((int)this + 0x70))) = (*(float *)(gen_frame + 0x0));
  *((float *)GEN_TOP(((int)this + 0x74))) = (*(float *)(gen_frame + 0x4));
  *((float *)GEN_TOP(((int)this + 0x78))) = (*(float *)(gen_frame + 0x8));
  return uVar5;
}

/* ref: FUN_0098be40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098be40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x98be40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = *((gen_code32 *)GEN_TOP(((int)this + 0x2c4)));
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP(((int)this + 0x34)));
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + 0x38)));
  (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP(((int)this + 0x3c)));
  uVar2 = (*pcVar1)(this,&(*(undefined4 *)(gen_frame + 0x0)));
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = (*(undefined4 *)(gen_frame + 0x0));
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = (*(undefined4 *)(gen_frame + 0x4));
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = (*(undefined4 *)(gen_frame + 0x8));
  return uVar2;
}

/* ref: FUN_0098bea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098bea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x98bea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xd8, 8, 4);
  float fVar1;
  bool bVar2;
  bool bVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  uint uVar7;
  bool bVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  (*(undefined4 *)(gen_frame + 0xc4)) = *((undefined4 *)GEN_TOP(((int)this + 0x1a8)));
  (*(undefined4 *)(gen_frame + 0xc0)) = *((undefined4 *)GEN_TOP(((int)this + 0x1ac)));
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) + 0x68))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) GEN_EDX_FWD)));
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) + 100))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) GEN_EDX_ARG)));
  piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) + 0x60))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) GEN_EDX_ARG)));
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x10))))(piVar6,(*(undefined4 *)(gen_frame + 0xc4)),(*(undefined4 *)(gen_frame + 0xc0)),(uint)*((byte *)GEN_TOP(((int)this + 0x2a5))));
  (*(float *)(gen_frame + 0xc8)) = (float)extraout_ST0;
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x10))))(piVar5,(*(undefined4 *)(gen_frame + 0xc4)),(*(undefined4 *)(gen_frame + 0xc0)),(uint)*((byte *)GEN_TOP(((int)this + 0x2a6))));
  (*(float *)(gen_frame + 0xcc)) = (float)extraout_ST0_00;
  extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4,(*(undefined4 *)(gen_frame + 0xc4)),(*(undefined4 *)(gen_frame + 0xc0)),(uint)*((byte *)GEN_TOP(((int)this + 0x2a7))));
  fVar1 = (float)extraout_ST0_01;
  (*(float *)(gen_frame + 0xd0)) = fVar1;
  bVar8 = GEN_ISNAN((float10)(*(float *)(gen_frame + 0xc8))) || GEN_ISNAN((float10)0);
  bVar2 = GEN_ISNAN((*(float *)(gen_frame + 0xcc))) != (GEN_ISNAN((*(float *)(gen_frame + 0xcc))) || (*(float *)(gen_frame + 0xcc)) == 0.0);
  bVar3 = GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0);
  if (bVar8 == (bVar8 || (float10)(*(float *)(gen_frame + 0xc8)) == (float10)0)) {
    if (bVar2) {
      if (bVar3) {
        F_009818e0(((undefined1 *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0xc8)));
        F_009819e0(((undefined1 *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0xd0)));
        F_00981c90(&(*(undefined4 *)(gen_frame + 0x90)),((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x30)));
        goto LAB_0098c1e1;
      }
    }
    else if (bVar3) {
      F_009818e0(((undefined1 *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0xc8)));
      F_00981960(((undefined1 *)(gen_frame + 0x60)),(*(float *)(gen_frame + 0xcc)));
      F_009819e0(((undefined1 *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0xd0)));
      F_00981c90(&(*(undefined4 *)(gen_frame + 0x90)),((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x60)));
      F_009820e0(&(*(undefined4 *)(gen_frame + 0x90)),(uint)&(*(undefined4 *)(gen_frame + 0x90)),(uint)((undefined1 *)(gen_frame + 0x30)));
      goto LAB_0098c1e1;
    }
    if (bVar2) {
      if (!bVar3) {
        F_009818e0(&(*(undefined4 *)(gen_frame + 0x90)),(*(float *)(gen_frame + 0xc8)));
        goto LAB_0098c1e1;
      }
    }
    else if (!bVar3) {
      F_009818e0(((undefined1 *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0xc8)));
      F_00981960(((undefined1 *)(gen_frame + 0x60)),(*(float *)(gen_frame + 0xcc)));
      F_00981c90(&(*(undefined4 *)(gen_frame + 0x90)),((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x60)));
      goto LAB_0098c1e1;
    }
  }
  else {
    if (!bVar2) {
      if (bVar3) {
        F_00981960(((undefined1 *)(gen_frame + 0x60)),(*(float *)(gen_frame + 0xcc)));
        F_009819e0(((undefined1 *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0xd0)));
        F_00981c90(&(*(undefined4 *)(gen_frame + 0x90)),((undefined1 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0x30)));
      }
      else {
        F_00981960(&(*(undefined4 *)(gen_frame + 0x90)),(*(float *)(gen_frame + 0xcc)));
      }
      goto LAB_0098c1e1;
    }
    if (bVar3) {
      F_009819e0(&(*(undefined4 *)(gen_frame + 0x90)),fVar1);
      goto LAB_0098c1e1;
    }
  }
  (*(undefined4 *)(gen_frame + 0x90)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f428)));
  (*(undefined4 *)(gen_frame + 0x94)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f42c)));
  (*(undefined4 *)(gen_frame + 0x98)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f430)));
  (*(undefined4 *)(gen_frame + 0x9c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f434)));
  (*(undefined4 *)(gen_frame + 0xa0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f438)));
  (*(undefined4 *)(gen_frame + 0xa4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f43c)));
  (*(undefined4 *)(gen_frame + 0xa8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f440)));
  (*(undefined4 *)(gen_frame + 0xac)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f444)));
  (*(undefined4 *)(gen_frame + 0xb0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f448)));
  (*(undefined4 *)(gen_frame + 0xb4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f44c)));
  (*(undefined4 *)(gen_frame + 0xb8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f450)));
  (*(undefined4 *)(gen_frame + 0xbc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f454)));
LAB_0098c1e1: ;
  uVar7 = F_00981050(param_1,0x132f41c,(uint)&(*(undefined4 *)(gen_frame + 0x90)));
  return uVar7;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf3 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0098c230(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x98c230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 4))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = param_2[2];
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = param_2[3];
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = param_2[4];
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = param_2[5];
  *((undefined4 *)GEN_TOP((in_ecx + 0x1c))) = param_2[6];
  *((undefined4 *)GEN_TOP((in_ecx + 0x20))) = param_2[7];
  *((undefined4 *)GEN_TOP((in_ecx + 0x24))) = param_2[8];
  *((undefined4 *)GEN_TOP((in_ecx + 0x28))) = param_2[9];
  *((undefined4 *)GEN_TOP((in_ecx + 0x2c))) = param_2[10];
  *((undefined4 *)GEN_TOP((in_ecx + 0x30))) = param_2[0xb];
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098c290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x98c290u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d8) + 0x14))))
                    (*(int * PTR32 *)(this + 0x1d8) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098c2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x98c2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d8) + 0x18))))
                    (*(int * PTR32 *)(this + 0x1d8) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098c2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x98c2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d8) + 0x1c))))
                    (*(int * PTR32 *)(this + 0x1d8) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf9 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0098c2c0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x98c2c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  float fVar2;
  uint uVar3;
  code * pcVar4;
  int * piVar5;
  
  uVar3 = param_1[0x74];
  param_1[0x6d] =
       (int)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_1[0x6d]))) +
                               ((float10)GEN_TOD(gen_bits2f(param_1[0x6f]))) * (float10)param_2));
  if ((~(byte)(uVar3 >> 0x12) & 1) != 0) {
    piVar1 = ((int *)(uintptr_t)gen_fl2bits((float)((float)(((float10)GEN_TOD(gen_bits2f(param_1[0x6f]))) * (float10)param_2))));
    (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
    param_1[0x6c] = (int)piVar1;
    pcVar4 = ((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f078))[(int)(uVar3 >> 0x1c & 1)]));
    (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar1))) + ((float10)GEN_TOD(gen_bits2f(param_1[0x6a])))))));
    fVar2 = gen_bits2f(param_1[0x6b]);
    (*pcVar4)(param_1,&(*(int * PTR32 *)(gen_frame + 0x0)));
    (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f080))[(int)((uint)param_1[0x74] >> 0x1d & 1)])))(param_1,&(*(int * PTR32 *)(gen_frame + 0x0)));
    if ((~(byte)((uint)param_1[0x74] >> 0x12) & 1) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 100))))(param_1 GEN_EDX_ARG);
    }
    param_1[0x6a] = (int)(*(int * PTR32 *)(gen_frame + 0x0));
    param_1[0x6b] = (int)gen_fl2bits((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar1))) + (float10)fVar2));
  }
  piVar1 = ((int *)GEN_TOP(param_1[0x78]));
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
  while (piVar1 != ((int *)GEN_TOP(0x0))) {
    pcVar4 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x24)));
    (*pcVar4)(piVar1,(undefined4)gen_fl2bits(param_2));
    piVar5 = ((int *)GEN_TOP(piVar1[0x7a]));
    if (((piVar1[0x74] & 0x40000U) == 0) || (piVar1[0x78] != 0)) {
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
      piVar1 = piVar5;
    }
    else {
      if ((*(int * PTR32 *)(gen_frame + 0x0)) == ((int *)GEN_TOP(0x0))) {
        param_1[0x78] = (int)piVar5;
      }
      else {
        (*(int * PTR32 *)(gen_frame + 0x0))[0x7a] = (int)piVar5;
      }
      if (((int *)GEN_TOP(param_1[0x79])) == piVar1) {
        param_1[0x79] = (int)(*(int * PTR32 *)(gen_frame + 0x0));
      }
      uVar3 = param_1[0x74];
      param_1[0x74] = (((uVar3 >> 9) - 1) * 0x200 ^ uVar3) & 0x3fe00 ^ uVar3;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar1)))(piVar1 GEN_EDX_ARG,1);
      piVar1 = piVar5;
    }
  }
  return 0;
}

/* ref: FUN_0098c430 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0098c430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x98c430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  
  fVar1 = *((float *)GEN_TOP(((int)this + 0x1b8)));
  if ((*(float *)&REFG(undefined, 0x1088114) <= fVar1) && ((float10)fVar1 < (float10)*param_1)) {
    *param_1 = fVar1;
    if ((*((uint *)GEN_TOP(((int)this + 0x1d0))) & 0x40000) == 0) {
      *((uint *)GEN_TOP(((int)this + 0x1d0))) = *((uint *)GEN_TOP(((int)this + 0x1d0))) & 0xf81fffff | 0x40000;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
    }
  }
  return;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf10 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0098c490(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x98c490u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int * piVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  int * local_8;
  
  *((float *)GEN_TOP((param_1 + 0x1b4))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x1b4))) +
              (float10)param_2 * (float10)*((float *)GEN_TOP((param_1 + 0x1bc))))));
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f040))[(int)(*((uint *)GEN_TOP((param_1 + 0x1d0))) >> 0x15 & 1)])))
            (param_1,(undefined4)gen_fl2bits(param_2));
  local_8 = ((int *)GEN_TOP(0x0));
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x1e0)));
  piVar4 = local_8;
  while (piVar3 = piVar1, piVar3 != ((int *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(piVar3[0x7a]));
    if (((piVar3[0x74] & 0x40000U) == 0) || (piVar3[0x78] != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
      piVar4 = piVar3;
    }
    else {
      if (piVar4 == ((int *)GEN_TOP(0x0))) {
        *((int * PTR32 *)GEN_TOP((param_1 + 0x1e0))) = piVar1;
      }
      else {
        piVar4[0x7a] = (int)piVar1;
      }
      if (*((int * PTR32 *)GEN_TOP((param_1 + 0x1e4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((param_1 + 0x1e4))) = piVar4;
      }
      uVar2 = *((uint *)GEN_TOP((param_1 + 0x1d0)));
      *((uint *)GEN_TOP((param_1 + 0x1d0))) = (((uVar2 >> 9) - 1) * 0x200 ^ uVar2) & 0x3fe00 ^ uVar2;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
    }
  }
  return 0;
}

/* ref: switchD_0097e83e::caseD_1 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0098c580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98c580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  float10 fVar2;
  
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x1b0))) + (float10)*((float *)GEN_TOP(((int)this + 0x1cc))))));
  fVar2 = (float10)fVar1;
  *((float *)GEN_TOP(((int)this + 0x1cc))) = fVar1;
  if ((float10)*((float *)GEN_TOP(((int)this + 0x1c8))) < fVar2) {
    if ((*((uint *)GEN_TOP(((int)this + 0x1d0))) & 0x40000) == 0) {
      *((uint *)GEN_TOP(((int)this + 0x1d0))) = *((uint *)GEN_TOP(((int)this + 0x1d0))) & 0xf81fffff | 0x40000;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
    return;
  }
  *((float *)GEN_TOP(((int)this + 0x94))) =
       ((float)GEN_TOF((((float10)1 - fVar2 / (float10)*((float *)GEN_TOP(((int)this + 0x1c8)))) *
              (float10)*((float *)GEN_TOP(((int)this + 0x94))))));
  return;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf16 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098c600(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x98c600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x58)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0x5c)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x60)));
  return (uint)param_2;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf17 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098c620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x98c620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  undefined * pIVar1;
  undefined * pIVar2;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x40))))(this GEN_EDX_FWD,param_1);
  pIVar2 = this + 4;
  if (*(int *)(this + 0x1a4) != 0) {
    while (((byte)pIVar2[0x194] & 2) != 0) {
      pIVar1 = *(undefined * PTR32 *)(pIVar2 + 0x1a0);
      if (*(int *)(pIVar2 + 0x180) == 3) {
        *param_1 = ((float)GEN_TOF(((float10)*(float *)(pIVar2 + 0x124) * (float10)*param_1)));
        param_1[1] = ((float)GEN_TOF(((float10)*(float *)(pIVar2 + 0x128) * (float10)param_1[1])));
        param_1[2] = ((float)GEN_TOF(((float10)*(float *)(pIVar2 + 300) * (float10)param_1[2])));
        return (uint)param_1;
      }
      *param_1 = ((float)GEN_TOF(((float10)*param_1 * (float10)*(float *)(pIVar1 + 0x54))));
      param_1[1] = ((float)GEN_TOF(((float10)*(float *)(pIVar1 + 0x58) * (float10)param_1[1])));
      param_1[2] = ((float)GEN_TOF(((float10)*(float *)(pIVar1 + 0x5c) * (float10)param_1[2])));
      pIVar2 = pIVar1;
      if (*(int *)(pIVar1 + 0x1a0) == 0) {
        return (uint)param_1;
      }
    }
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf18 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098c6b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x98c6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  *param_2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x150))) + (float10)*((float *)GEN_TOP((in_ecx + 100))))));
  param_2[1] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x154))) + (float10)*((float *)GEN_TOP((in_ecx + 0x68))))));
  param_2[2] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x158))) + (float10)*((float *)GEN_TOP((in_ecx + 0x6c))))));
  return (uint)param_2;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf19 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098c6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x98c6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  undefined * pIVar1;
  undefined * pIVar2;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,param_1);
  pIVar2 = this + 4;
  if (*(int *)(this + 0x1a4) != 0) {
    while (((byte)pIVar2[0x194] & 4) != 0) {
      pIVar1 = *(undefined * PTR32 *)(pIVar2 + 0x1a0);
      if (*(int *)(pIVar2 + 0x180) == 3) {
        *param_1 = ((float)GEN_TOF(((float10)*(float *)(pIVar2 + 0x130) + (float10)*param_1)));
        param_1[1] = ((float)GEN_TOF(((float10)*(float *)(pIVar2 + 0x134) + (float10)param_1[1])));
        param_1[2] = ((float)GEN_TOF(((float10)*(float *)(pIVar2 + 0x138) + (float10)param_1[2])));
        return (uint)param_1;
      }
      *param_1 = ((float)GEN_TOF(((float10)*param_1 + (float10)*(float *)(pIVar1 + 0x60))));
      param_1[1] = ((float)GEN_TOF(((float10)*(float *)(pIVar1 + 100) + (float10)param_1[1])));
      param_1[2] = ((float)GEN_TOF(((float10)*(float *)(pIVar1 + 0x68) + (float10)param_1[2])));
      *param_1 = ((float)GEN_TOF(((float10)*param_1 + (float10)*(float *)(pIVar1 + 0x14c))));
      param_1[1] = ((float)GEN_TOF(((float10)*(float *)(pIVar1 + 0x150) + (float10)param_1[1])));
      param_1[2] = ((float)GEN_TOF(((float10)*(float *)(pIVar1 + 0x154) + (float10)param_1[2])));
      pIVar2 = pIVar1;
      if (*(int *)(pIVar1 + 0x1a0) == 0) {
        return (uint)param_1;
      }
    }
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098c7a0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x98c7a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  int * piVar2;
  int * piVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x48))))(param_1 GEN_EDX_FWD,param_2);
  piVar3 = param_1 + 1;
  if (param_1[0x69] != 0) {
    while ((*(byte *)(piVar3 + 0x65) & 4) != 0) {
      piVar2 = ((int *)GEN_TOP(piVar3[0x68]));
      if (piVar3[0x60] == 3) {
        *((float *)GEN_TOP((param_2 + 8))) =
             ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(piVar3[0x4e]))) + (float10)*((float *)GEN_TOP((param_2 + 8))))));
        return param_2;
      }
      fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(piVar2[0x1a]))) + (float10)*((float *)GEN_TOP((param_2 + 8))))));
      *((float *)GEN_TOP((param_2 + 8))) = fVar1;
      *((float *)GEN_TOP((param_2 + 8))) = (float)((float10)fVar1 + ((float10)GEN_TOD(gen_bits2f(piVar2[0x55]))));
      piVar3 = piVar2;
      if (piVar2[0x68] == 0) {
        return param_2;
      }
    }
  }
  return param_2;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf21 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098c820(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x98c820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x70)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0x74)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x78)));
  return (uint)param_2;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf22 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098c840(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x98c840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x28)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0x2c)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x30)));
  return (uint)param_2;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf23 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098c860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x98c860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (((byte)this[0x198] & 8) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d8) + 0x58))))
              (*(int * PTR32 *)(this + 0x1d8) GEN_EDX_ARG,param_1,(int)*(short *)(this + 0x1a0));
    return (uint)param_1;
  }
  *param_1 = *(undefined4 *)(this + 0x11c);
  param_1[1] = *(undefined4 *)(this + 0x120);
  param_1[2] = *(undefined4 *)(this + 0x124);
  return (uint)param_1;
}

/* ref: FUN_0098c8b0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0098c8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98c8b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  
  if ((*((uint *)GEN_TOP(((int)this + 0x1d0))) & 0x40000) == 0) {
    *((uint *)GEN_TOP(((int)this + 0x1d0))) = *((uint *)GEN_TOP(((int)this + 0x1d0))) & 0xf81fffff | 0x40000;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
  }
  for (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1e0))); this_00 != ((undefined *)GEN_TOP(0x0));
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1e8)))) {
    F_0098c8b0(this_00 GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_0098c900 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098c900(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98c900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_009820e0(in_ecx + 4,in_ecx + 4,in_ecx + 0xec);
  return uVar1;
}

/* ref: FUN_0098c920 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0098c920(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98c920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x168))) = *((undefined4 *)GEN_TOP((in_ecx + 0x28)));
  *((undefined4 *)GEN_TOP((in_ecx + 0x16c))) = *((undefined4 *)GEN_TOP((in_ecx + 0x2c)));
  *((undefined4 *)GEN_TOP((in_ecx + 0x170))) = *((undefined4 *)GEN_TOP((in_ecx + 0x30)));
  return;
}

/* ref: switchD_009be164::caseD_1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0098c940(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98c940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((float *)GEN_TOP((in_ecx + 0x88))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x140))) * (float10)*((float *)GEN_TOP((in_ecx + 0x88))))));
  *((float *)GEN_TOP((in_ecx + 0x8c))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x144))) * (float10)*((float *)GEN_TOP((in_ecx + 0x8c))))));
  *((float *)GEN_TOP((in_ecx + 0x90))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x148))) * (float10)*((float *)GEN_TOP((in_ecx + 0x90))))));
  *((float *)GEN_TOP((in_ecx + 0x94))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x14c))) * (float10)*((float *)GEN_TOP((in_ecx + 0x94))))));
  return;
}

/* ref: switchD_009be164::caseD_2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098c990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98c990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float * pfVar1;
  
  pfVar1 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1d8))) + 0x3c))))
                              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1d8))) GEN_EDX_ARG)));
  *((float *)GEN_TOP(((int)this + 0x88))) = ((float)GEN_TOF(((float10)*pfVar1 * (float10)*((float *)GEN_TOP(((int)this + 0x88))))));
  *((float *)GEN_TOP(((int)this + 0x8c))) = ((float)GEN_TOF(((float10)pfVar1[1] * (float10)*((float *)GEN_TOP(((int)this + 0x8c))))))
  ;
  *((float *)GEN_TOP(((int)this + 0x90))) = ((float)GEN_TOF(((float10)pfVar1[2] * (float10)*((float *)GEN_TOP(((int)this + 0x90))))))
  ;
  *((float *)GEN_TOP(((int)this + 0x94))) = ((float)GEN_TOF(((float10)pfVar1[3] * (float10)*((float *)GEN_TOP(((int)this + 0x94))))))
  ;
  return (uint)pfVar1;
}

/* ref: Apricot::Engine::Instance::ParticleInstance::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098c9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x98c9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097ef70(this GEN_EDX_FWD);
  F_0097f2c0(this GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))(this GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x84))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::ParticleInstance::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098ca10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x98ca10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0ac))[(int)(*(uint *)(this + 0x2ac) >> 9 & 1)])))(this);
  F_0097f2c0(this GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0098ca40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098ca40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x98ca40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*((byte *)GEN_TOP(((int)this + 0x19f))) - 3)));
  switch((unsigned int)(uintptr_t)(*((byte *)GEN_TOP(((int)this + 0x19f))))) {
  case 3: ;
  case 7: ;
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_FWD)));
    param_1[3] = *puVar1;
    param_1[4] = puVar1[1];
    param_1[5] = puVar1[2];
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG)));
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
    return (uint)puVar1;
  case 4: ;
  case 5: ;
  case 6: ;
  case 8: ;
  case 9: ;
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG)));
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
  }
  return (uint)puVar1;
}

/* ref: FUN_0098cad0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098cad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98cad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0098b5e0(*((undefined4 *)GEN_TOP(((int)this + 0x1d4))) GEN_EDX_FWD,(int)this + 0x88,
                       *((byte *)GEN_TOP(((int)this + 0x1fa))) & 3,(uint)*((byte *)GEN_TOP(((int)this + 0x1f8))),
                       *((byte *)GEN_TOP(((int)this + 0x1fa))) >> 2 & 3,(uint)*((byte *)GEN_TOP(((int)this + 0x1f9))));
  return uVar1;
}

/* ref: FUN_0098cb10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098cb10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x98cb10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  *((float *)GEN_TOP((in_ecx + 0x34))) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x34))) + (float10)*param_4)));
  *((float *)GEN_TOP((in_ecx + 0x38))) = ((float)GEN_TOF(((float10)param_4[1] + (float10)*((float *)GEN_TOP((in_ecx + 0x38))))));
  *((float *)GEN_TOP((in_ecx + 0x3c))) = ((float)GEN_TOF(((float10)param_4[2] + (float10)*((float *)GEN_TOP((in_ecx + 0x3c))))));
  return (uint)param_4;
}

/* ref: FUN_0098cb40 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0098cb40(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x98cb40u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  int * piVar3;
  float10 extraout_ST0;
  float10 fVar4;
  
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x29c))) + 0x10))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x29c))) GEN_EDX_FWD)));
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))
            (piVar3,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
             (uint)*((byte *)GEN_TOP((param_1 + 0x1fc))));
  fVar4 = (float10)(float)extraout_ST0;
  fVar1 = param_4[1];
  fVar2 = param_4[2];
  *((float *)GEN_TOP((param_1 + 0x34))) =
       ((float)GEN_TOF(((float10)(float)(fVar4 * (float10)*param_4) + (float10)*((float *)GEN_TOP((param_1 + 0x34))))));
  *((float *)GEN_TOP((param_1 + 0x38))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x38))) + (float10)(float)((float10)fVar1 * fVar4))));
  *((float *)GEN_TOP((param_1 + 0x3c))) =
       ((float)GEN_TOF(((float10)(float)(fVar4 * (float10)fVar2) + (float10)*((float *)GEN_TOP((param_1 + 0x3c))))));
  return 0;
}

/* ref: FUN_0098cbc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098cbc0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x98cbc0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  code * pcVar1;
  uint uVar2;
  float10 fVar3;
  
  (*(float *)(gen_frame + 0xc)) = *((float *)GEN_TOP((param_1 + 0x1b0)));
  fVar3 = (float10)*((float *)GEN_TOP((param_1 + 0x1b0)));
  pcVar1 = ((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0c4))[(int)(*((uint *)GEN_TOP((param_1 + 0x2ac))) >> 0xc & 1)]));
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF((fVar3 * (float10)*((float *)GEN_TOP((param_1 + 0x174))))));
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x178))) * fVar3)));
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF((fVar3 * (float10)*((float *)GEN_TOP((param_1 + 0x17c))))));
  uVar2 = (*pcVar1)(param_1,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
                    &(*(float *)(gen_frame + 0x0)));
  return uVar2;
}

/* ref: FUN_0098cc30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098cc30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x98cc30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x1f0)));
  *param_2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 0x98))) * (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 0x9c))) * (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 0xa0))) * (float10)param_2[2])));
  return uVar1;
}

/* ref: FUN_0098cc70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098cc70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x98cc70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x1f0)));
  *param_2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 0xa4))) + (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 0xa8))) + (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 0xac))) + (float10)param_2[2])));
  return uVar1;
}

/* ref: FUN_0098ccb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098ccb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x98ccb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x1f0)));
  *param_2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 0xb0))) + (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 0xb4))) + (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar1 + 0xb8))) + (float10)param_2[2])));
  return uVar1;
}

/* ref: FUN_0098ccf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098ccf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x98ccf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 0x1f0)));
  *param_2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar1 + 0x88))) * (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar1 + 0x8c))) * (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar1 + 0x90))) * (float10)param_2[2])));
  param_2[3] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar1 + 0x94))) * (float10)param_2[3])));
  return (uint)param_2;
}

/* ref: FUN_0098cd30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098cd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x98cd30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = ((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0d4))[(int)(*((uint *)GEN_TOP(((int)this + 0x2ac))) >> 0xe & 1)]));
  (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  uVar2 = (*pcVar1)(this,&(*(undefined4 *)(gen_frame + 0x0)));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = (*(undefined4 *)(gen_frame + 0x0));
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = (*(undefined4 *)(gen_frame + 0x4));
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = (*(undefined4 *)(gen_frame + 0x8));
  return uVar2;
}

/* ref: FUN_0098cd90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098cd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x98cd90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = ((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0dc))[(int)(*((uint *)GEN_TOP(((int)this + 0x2ac))) >> 0xe & 1)]));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  uVar2 = (*pcVar1)(this,&(*(undefined4 *)(gen_frame + 0x0)));
  *((undefined4 *)GEN_TOP(((int)this + 100))) = (*(undefined4 *)(gen_frame + 0x0));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = (*(undefined4 *)(gen_frame + 0x4));
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = (*(undefined4 *)(gen_frame + 0x8));
  return uVar2;
}

/* ref: FUN_0098cdf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098cdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x98cdf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  code * pcVar4;
  uint uVar5;
  
  fVar1 = *((float *)GEN_TOP(((int)this + 0x34)));
  uVar5 = *((uint *)GEN_TOP(((int)this + 0x2ac)));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = *((float *)GEN_TOP(((int)this + 0x38)));
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = *((float *)GEN_TOP(((int)this + 0x3c)));
  pcVar4 = ((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0e4))[(int)(uVar5 >> 0xe & 1)]));
  (*(float *)(gen_frame + 0x8)) = fVar3;
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0xb0))) + (float10)fVar1)));
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0xb4))) + (float10)fVar2)));
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0xb8))) + (float10)fVar3)));
  uVar5 = (*pcVar4)(this,&(*(float *)(gen_frame + 0x0)));
  *((float *)GEN_TOP(((int)this + 0x70))) = (*(float *)(gen_frame + 0x0));
  *((float *)GEN_TOP(((int)this + 0x74))) = (*(float *)(gen_frame + 0x4));
  *((float *)GEN_TOP(((int)this + 0x78))) = (*(float *)(gen_frame + 0x8));
  return uVar5;
}

/* ref: FUN_0098ce70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098ce70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x98ce70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x2ac)));
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP(((int)this + 0x34)));
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + 0x38)));
  (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP(((int)this + 0x3c)));
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0e4))[(int)(uVar1 >> 0xe & 1)])))(this,&(*(undefined4 *)(gen_frame + 0x0)));
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = (*(undefined4 *)(gen_frame + 0x0));
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = (*(undefined4 *)(gen_frame + 0x4));
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = (*(undefined4 *)(gen_frame + 0x8));
  return uVar1;
}

/* ref: FUN_0098cee0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0098cee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x98cee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  uint uVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP(((int)this + 0x1a8)));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(undefined4 *)(gen_frame + 0x20)) = *((undefined4 *)GEN_TOP(((int)this + 0x1ac)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x29c))) + 0x8c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x29c))) GEN_EDX_FWD);
  iVar5 = 0;
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  if (0 < (int)uVar1) {
    iVar4 = param_1 + 0x18;
    iVar3 = (int)this + 0x240;
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x29c)));
      (*(undefined4 *)(gen_frame + 0x0)) = 1;
      (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xd8))))(piVar2 GEN_EDX_ARG,iVar5)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),iVar3,&(*(undefined4 *)(gen_frame + 0x0)));
      F_00979150((uint)&(*(undefined4 *)(gen_frame + 0x0)),iVar4 - 0x18,iVar4 - 0x14,iVar4 - 0x10,iVar4 - 0xc,iVar4 - 8
                   ,iVar4 - 4,iVar4,iVar4 + 4);
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 5;
      iVar4 = iVar4 + 0x20;
    } while (iVar5 < (int)(*(uint *)(gen_frame + 0x18)));
  }
  return;
}

/* ref: FUN_0098cfd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098cfd0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x98cfd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc0, 0, 4);
  float fVar1;
  float fVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  undefined4 * puVar6;
  int iVar7;
  float10 fVar8;
  float fVar9;
  undefined4 uVar10;
  
  (*(undefined4 *)(gen_frame + 0x98)) = *((undefined4 *)GEN_TOP((param_1 + 0x1a8)));
  (*(int *)(gen_frame + 0x94)) = param_1;
  (*(undefined4 *)(gen_frame + 0x9c)) = *((undefined4 *)GEN_TOP((param_1 + 0x1ac)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x29c))) + 0x8c))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x29c))) GEN_EDX_FWD);
  iVar7 = 0;
  (*(uint *)(gen_frame + 0xa0)) = uVar3;
  if (0 < (int)uVar3) {
    fVar9 = 0.0;
    puVar6 = ((undefined4 *)GEN_TOP((param_2 + 8)));
    iVar5 = param_1 + 0x240;
    uVar10 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    do {
      piVar4 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x94)) + 0x29c)));
      (*(undefined4 *)(gen_frame + 0xa4)) = 1;
      (*(undefined4 *)(gen_frame + 0xa8)) = uVar10;
      (*(undefined4 *)(gen_frame + 0xac)) = uVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar9;
      (*(float *)(gen_frame + 0xb4)) = fVar9;
      (*(float *)(gen_frame + 0xb8)) = fVar9;
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xd8))))(piVar4 GEN_EDX_ARG,iVar7)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x98)),(*(undefined4 *)(gen_frame + 0x9c)),iVar5,&(*(undefined4 *)(gen_frame + 0xa4)));
      (*(undefined4 *)(gen_frame + 0x60)) = (*(undefined4 *)(gen_frame + 0xa8));
      (*(undefined4 *)(gen_frame + 0x70)) = (*(undefined4 *)(gen_frame + 0xac));
      (*(undefined4 *)(gen_frame + 0x64)) = 0;
      (*(undefined4 *)(gen_frame + 0x68)) = 0;
      (*(undefined4 *)(gen_frame + 0x6c)) = 0;
      (*(undefined4 *)(gen_frame + 0x74)) = 0;
      (*(undefined4 *)(gen_frame + 0x78)) = 0;
      (*(undefined4 *)(gen_frame + 0x7c)) = 0;
      (*(undefined4 *)(gen_frame + 0x80)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      (*(undefined4 *)(gen_frame + 0x84)) = 0;
      (*(undefined4 *)(gen_frame + 0x88)) = 0;
      (*(undefined4 *)(gen_frame + 0x8c)) = 0;
      fVar8 = ((float10)GEN_TOD(fcos((float10)(*(float *)(gen_frame + 0xb8)))));
      fVar1 = (float)fVar8;
      (*(float *)(gen_frame + 0x90)) = fVar1;
      fVar8 = ((float10)GEN_TOD(fsin((float10)(*(float *)(gen_frame + 0xb8)))));
      fVar9 = 0.0;
      (*(float *)(gen_frame + 0x30)) = fVar1;
      (*(float *)(gen_frame + 0x34)) = (float)fVar8;
      (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(-(float10)(float)fVar8));
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(float *)(gen_frame + 0x40)) = fVar1;
      (*(undefined4 *)(gen_frame + 0x44)) = 0;
      (*(undefined4 *)(gen_frame + 0x48)) = 0;
      (*(undefined4 *)(gen_frame + 0x4c)) = 0;
      (*(undefined4 *)(gen_frame + 0x50)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      (*(undefined4 *)(gen_frame + 0x54)) = 0;
      (*(undefined4 *)(gen_frame + 0x58)) = 0;
      (*(undefined4 *)(gen_frame + 0x5c)) = 0;
      uVar10 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      uVar3 = F_00981ba0(&(*(undefined4 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x60)));
      fVar1 = (float)((float10)(*(float *)(gen_frame + 0xb0)) + (float10)REFG(double, 0x1088108));
      (*(float *)(gen_frame + 0x24)) = fVar1;
      fVar2 = (float)((float10)REFG(double, 0x1088108) + (float10)(*(float *)(gen_frame + 0xb4)));
      (*(float *)(gen_frame + 0x28)) = fVar2;
      puVar6[-2] = (*(undefined4 *)(gen_frame + 0x0));
      puVar6[1] = (undefined4)gen_fl2bits(fVar1);
      puVar6[-1] = (*(undefined4 *)(gen_frame + 0xc));
      puVar6[5] = (undefined4)gen_fl2bits(fVar2);
      *puVar6 = (*(undefined4 *)(gen_frame + 0x18));
      puVar6[2] = (*(undefined4 *)(gen_frame + 0x4));
      puVar6[3] = (*(undefined4 *)(gen_frame + 0x10));
      puVar6[4] = (*(undefined4 *)(gen_frame + 0x1c));
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 5;
      puVar6 = puVar6 + 8;
    } while (iVar7 < (int)(*(uint *)(gen_frame + 0xa0)));
  }
  return uVar3;
}

/* ref: FUN_0098d200 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0098d200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x98d200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_0098cee0(this GEN_EDX_FWD,param_1);
  return;
}

/* ref: FUN_0098d210 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098d210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x98d210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0098cfd0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::SchedulerInstance::vf9 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0098d220(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x98d220u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  ((code *)*((gen_code32 *)GEN_TOP((param_1 + 0x1ec))))(param_1);
  F_0098c2c0(param_1 GEN_EDX_ARG,param_2);
  return;
}

/* ref: Apricot::Engine::Instance::TimelineInstance::vf9 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0098d250(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x98d250u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  ((code *)*((gen_code32 *)GEN_TOP((param_1 + 0x1ec))))(param_1);
  F_0098c2c0(param_1 GEN_EDX_ARG,param_2);
  return;
}

/* ref: Apricot::Engine::Instance::EndClipInstance::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0098d2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98d2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  
  piVar1 = *(int * PTR32 *)(this + 0x1d4);
  if ((piVar1[0x74] & 0x40000U) == 0) {
    piVar1[0x74] = piVar1[0x74] & 0xf81fffffU | 0x40000;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
  }
  for (this_00 = ((undefined *)GEN_TOP(piVar1[0x78])); this_00 != ((undefined *)GEN_TOP(0x0));
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1e8)))) {
    F_0098c8b0(this_00 GEN_EDX_ARG);
  }
  return;
}

/* ref: Apricot::Engine::Instance::KillClipInstance::vf1 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0098d310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98d310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float * pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int * this_00;
  uint uVar6;
  float fVar7;
  
  iVar2 = *(int *)(this + 0x1f0);
  iVar3 = *((int *)GEN_TOP((iVar2 + 8)));
  iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
  iVar5 = *((int *)GEN_TOP((iVar2 + 4)));
  this_00 = *(int * PTR32 *)(this + 0x1d8);
  iVar2 = *((int *)GEN_TOP((iVar2 + 0x10)));
  while ((this_00 != ((int *)GEN_TOP(0x0)) && (uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x20))))(this_00 GEN_EDX_FWD), uVar6 != 2))) {
    this_00 = ((int *)GEN_TOP(this_00[0x76]));
  }
  if (0 < iVar3) {
    F_0097fb60(this_00 GEN_EDX_ARG,iVar3 - 1,iVar5);
  }
  if (0 < iVar4) {
    F_0097fb60(this_00 GEN_EDX_ARG,iVar4 - 1,iVar5);
  }
  if (0 < iVar2) {
    F_0097fb60(this_00 GEN_EDX_ARG,iVar2 - 1,iVar5);
  }
  fVar7 = 0.0;
  pfVar1 = ((float *)GEN_TOP((*(int *)(this + 0x1f0) + 0x14)));
  if (!GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0)) {
    fVar7 = (float)iVar5;
  }
  *(float *)(this + 0x1b8) = fVar7;
  return;
}

/* ref: Apricot::Engine::Instance::KillClipInstance::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0098d3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98d3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float * pfVar1;
  
  pfVar1 = ((float *)GEN_TOP((*(int *)(this + 0x1f0) + 0x14)));
  if (!GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0)) {
    F_0098c8b0(*(undefined * PTR32 *)(this + 0x1d4) GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: Apricot::Engine::Instance::UnlockLoopPointClipInstance::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098d3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x98d3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = *(int * PTR32 *)(this + 0x1d8);
  while ((piVar1 != ((int *)GEN_TOP(0x0)) && (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_FWD), uVar2 != 2))) {
    piVar1 = ((int *)GEN_TOP(piVar1[0x76]));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x38))))(piVar1 GEN_EDX_ARG);
  uVar2 = *(uint *)(this + 0x1d0);
  if ((uVar2 & 0x40000) == 0) {
    *(uint *)(this + 0x1d0) = uVar2 & 0xf81fffff | 0x40000;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))
                      (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_0098d4f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0098d4f0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x98d4f0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL_TOP(0x40, 0, 4);
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  float10 extraout_ST0;
  float10 fVar6;
  
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x7b])) + 0x24))))(((int *)GEN_TOP(param_1[0x7b])) GEN_EDX_FWD)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))
            (piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),param_1 + 0x82
             ,&(*(undefined4 *)(gen_frame + 0x0)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x7b])) + 0x24))))(((int *)GEN_TOP(param_1[0x7b])) GEN_EDX_ARG)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))
            (piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
             (int)param_1 + 0x20d,&(*(float *)(gen_frame + 0x10)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x7b])) + 0x24))))(((int *)GEN_TOP(param_1[0x7b])) GEN_EDX_ARG)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))
            (piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
             (undefined4)gen_fl2bits((float)(float10)0),(int)param_1 + 0x212,&(*(int *)(gen_frame + 0x30)));
  param_1[0x19] = (*(int *)(gen_frame + 0x30));
  param_1[0x1a] = (*(int *)(gen_frame + 0x34));
  param_1[0x1b] = (*(int *)(gen_frame + 0x38));
  piVar3 = param_1 + 1;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x7b])) + 8))))(((int *)GEN_TOP(param_1[0x7b])) GEN_EDX_ARG);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x48))))(param_1 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x24)));
  F_009df1b0(piVar3,uVar5,uVar4);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x76])) + 0x10))))(((int *)GEN_TOP(param_1[0x76])) GEN_EDX_ARG);
  F_009820e0(piVar3,(uint)piVar3,uVar4);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x7b])) + 0x24))))(((int *)GEN_TOP(param_1[0x7b])) GEN_EDX_ARG)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG)));
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))
            (piVar3,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
             (uint)*((byte *)GEN_TOP(((int)param_1 + 0x215))));
  iVar2 = param_1[0x75];
  fVar6 = (float10)(float)extraout_ST0;
  (*(float *)(gen_frame + 0x20)) = (float)(fVar6 * (float10)(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x14)) * fVar6);
  *((undefined4 *)GEN_TOP((iVar2 + 0x30c))) = (*(undefined4 *)(gen_frame + 0x0));
  *((undefined4 *)GEN_TOP((iVar2 + 0x310))) = (*(undefined4 *)(gen_frame + 0x4));
  (*(float *)(gen_frame + 0x28)) = (float)(fVar6 * (float10)(*(float *)(gen_frame + 0x18)));
  *((undefined4 *)GEN_TOP((iVar2 + 0x314))) = (*(undefined4 *)(gen_frame + 0x8));
  *((int *)GEN_TOP((iVar2 + 0x300))) = param_1[7];
  *((int *)GEN_TOP((iVar2 + 0x304))) = param_1[8];
  iVar1 = param_1[9];
  *((float *)GEN_TOP((iVar2 + 0x2f4))) = (float)(fVar6 * (float10)(*(float *)(gen_frame + 0x10)));
  *((int *)GEN_TOP((iVar2 + 0x308))) = iVar1;
  *((float *)GEN_TOP((iVar2 + 0x2f8))) = (float)((float10)(*(float *)(gen_frame + 0x14)) * fVar6);
  *((float *)GEN_TOP((iVar2 + 0x2fc))) = (float)(fVar6 * (float10)(*(float *)(gen_frame + 0x18)));
  return 0;
}

/* ref: Apricot::Engine::Instance::DirectionalLightEffectorInstance::vf27 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0098d6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98d6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0098d4f0(this GEN_EDX_FWD,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac));
  return;
}

/* ref: Apricot::Engine::Instance::ConeModelEmitterInstance::vf22 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098d700(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x98d700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_FRAME_DECL_TOP(0x94, 12, 4);
  float fVar1;
  float fVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 fVar6;
  
  (*(float *)(gen_frame + 0x88)) = gen_bits2f((uint)*((byte *)GEN_TOP((param_1 + 0x2e6))));
  (*(uint *)(gen_frame + 0x60)) = (uint)*((byte *)GEN_TOP((param_1 + 0x2e7)));
  if (*((byte *)GEN_TOP((param_1 + 0x2e6))) != 0) {
    (*(int *)(gen_frame + 0x8c)) = *((undefined4 *)GEN_TOP((param_1 + 0x1a8)));
    (*(undefined4 *)(gen_frame + 0x84)) = *((undefined4 *)GEN_TOP((param_1 + 0x1ac)));
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) + 0x74))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) GEN_EDX_FWD)));
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG)));
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3,(*(int *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x84)),(uint)*((byte *)GEN_TOP((param_1 + 0x2ec))));
    (*(float *)(gen_frame + 0x64)) = (float)extraout_ST0;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) + 0x74))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) GEN_EDX_ARG)));
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x20))))(piVar3 GEN_EDX_ARG)));
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3,(*(int *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x84)),(uint)*((byte *)GEN_TOP((param_1 + 0x2eb))));
    (*(float *)(gen_frame + 0x68)) = (float)extraout_ST0_00;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) + 0x74))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) GEN_EDX_ARG)));
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG)));
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) + 0x74))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) GEN_EDX_ARG)));
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG)));
    piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) + 0x74))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) GEN_EDX_ARG)));
    piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG)));
    extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x10))))(piVar5,(*(int *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x84)),(uint)*((byte *)GEN_TOP((param_1 + 0x2e8))));
    (*(float *)(gen_frame + 0x6c)) = (float)extraout_ST0_01;
    extraout_ST0_02 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4,(*(int *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x84)),(uint)*((byte *)GEN_TOP((param_1 + 0x2e9))));
    (*(float *)(gen_frame + 0x70)) = (float)extraout_ST0_02;
    extraout_ST0_03 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3,(*(int *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x84)),(uint)*((byte *)GEN_TOP((param_1 + 0x2ea))));
    (*(float *)(gen_frame + 0x74)) = (float)extraout_ST0_03;
    F_009df1b0(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x6c)),(uint)*((byte *)GEN_TOP((param_1 + 0x2e5))));
    (*(int *)(gen_frame + 0x8c)) = (int)param_3 / (int)gen_fl2bits((*(float *)(gen_frame + 0x88)));
    fVar1 = ((float)GEN_TOF((((float10)((int)param_3 % (int)gen_fl2bits((*(float *)(gen_frame + 0x88)))) *
                    (float10)*(float *)&REFG(undefined, 0x132f3a4)) / (float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x88))))));
    fVar6 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    fVar2 = (float)fVar6;
    (*(float *)(gen_frame + 0x88)) = fVar2;
    fVar6 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    (*(float *)(gen_frame + 0x30)) = fVar2;
    (*(float *)(gen_frame + 0x34)) = (float)fVar6;
    (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(-(float10)(float)fVar6));
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(float *)(gen_frame + 0x40)) = fVar2;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x5c)) = 0;
    F_00981050(&(*(float *)(gen_frame + 0x78)),0x132f404,(uint)&(*(float *)(gen_frame + 0x30)));
    F_00981a60(&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x78)),
                 ((float)GEN_TOF((((float10)(*(int *)(gen_frame + 0x8c)) * (float10)(*(float *)(gen_frame + 0x64))) / (float10)(int)(*(uint *)(gen_frame + 0x60))))));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) + 0x8c))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) GEN_EDX_ARG);
    F_00981050(&(*(float *)(gen_frame + 0x78)),0x132f41c,(uint)&(*(float *)(gen_frame + 0x30)));
    F_00981050(&(*(float *)(gen_frame + 0x6c)),(uint)&(*(float *)(gen_frame + 0x78)),(uint)((undefined1 *)(gen_frame + 0x0)));
    fVar6 = (float10)(*(float *)(gen_frame + 0x68));
    (*(float *)(gen_frame + 0x78)) = (float)(fVar6 * (float10)(*(float *)(gen_frame + 0x6c)));
    (*(float *)(gen_frame + 0x7c)) = (float)((float10)(*(float *)(gen_frame + 0x70)) * fVar6);
    (*(float *)(gen_frame + 0x80)) = (float)(fVar6 * (float10)(*(float *)(gen_frame + 0x74)));
    F_00981170(param_2,(uint)&(*(float *)(gen_frame + 0x78)),param_1 + 4);
    return (uint)param_2;
  }
  *param_2 = *((undefined4 *)GEN_TOP((param_1 + 0x28)));
  param_2[1] = *((undefined4 *)GEN_TOP((param_1 + 0x2c)));
  param_2[2] = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  return (uint)param_2;
}

/* ref: Apricot::Engine::Instance::CylinderModelEmitterInstance::vf22 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098d9d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x98d9d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_FRAME_DECL_TOP(0xa0, 0, 4);
  float fVar1;
  float fVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int iVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 fVar7;
  
  (*(float *)(gen_frame + 0x98)) = gen_bits2f((uint)*((byte *)GEN_TOP((param_1 + 0x2e6))));
  (*(uint *)(gen_frame + 0x8c)) = (uint)*((byte *)GEN_TOP((param_1 + 0x2e7)));
  if (*((byte *)GEN_TOP((param_1 + 0x2e6))) != 0) {
    (*(int *)(gen_frame + 0x94)) = *((undefined4 *)GEN_TOP((param_1 + 0x1a8)));
    (*(undefined4 *)(gen_frame + 0x90)) = *((undefined4 *)GEN_TOP((param_1 + 0x1ac)));
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) + 0x7c))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) GEN_EDX_FWD)));
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG)));
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3,(*(int *)(gen_frame + 0x94)),(*(undefined4 *)(gen_frame + 0x90)),(uint)*((byte *)GEN_TOP((param_1 + 0x2ec))));
    (*(float *)(gen_frame + 0x78)) = (float)extraout_ST0;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) + 0x7c))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) GEN_EDX_ARG)));
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG)));
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3,(*(int *)(gen_frame + 0x94)),(*(undefined4 *)(gen_frame + 0x90)),(uint)*((byte *)GEN_TOP((param_1 + 0x2eb))));
    (*(float *)(gen_frame + 0x88)) = (float)extraout_ST0_00;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) + 0x7c))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) GEN_EDX_ARG)));
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x24))))(piVar3 GEN_EDX_ARG)));
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) + 0x7c))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) GEN_EDX_ARG)));
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x20))))(piVar4 GEN_EDX_ARG)));
    piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) + 0x7c))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) GEN_EDX_ARG)));
    piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x1c))))(piVar5 GEN_EDX_ARG)));
    extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x10))))(piVar5,(*(int *)(gen_frame + 0x94)),(*(undefined4 *)(gen_frame + 0x90)),(uint)*((byte *)GEN_TOP((param_1 + 0x2e8))));
    (*(float *)(gen_frame + 0x7c)) = (float)extraout_ST0_01;
    extraout_ST0_02 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4,(*(int *)(gen_frame + 0x94)),(*(undefined4 *)(gen_frame + 0x90)),(uint)*((byte *)GEN_TOP((param_1 + 0x2e9))));
    (*(float *)(gen_frame + 0x80)) = (float)extraout_ST0_02;
    extraout_ST0_03 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3,(*(int *)(gen_frame + 0x94)),(*(undefined4 *)(gen_frame + 0x90)),(uint)*((byte *)GEN_TOP((param_1 + 0x2ea))));
    (*(float *)(gen_frame + 0x84)) = (float)extraout_ST0_03;
    F_009df1b0(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x7c)),(uint)*((byte *)GEN_TOP((param_1 + 0x2e5))));
    iVar6 = (int)param_3 / (int)gen_fl2bits((*(float *)(gen_frame + 0x98)));
    (*(int *)(gen_frame + 0x94)) = iVar6;
    fVar1 = ((float)GEN_TOF((((float10)((int)param_3 % (int)gen_fl2bits((*(float *)(gen_frame + 0x98)))) *
                    (float10)*(float *)&REFG(undefined, 0x132f3a4)) / (float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x98))))));
    fVar7 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    fVar2 = (float)fVar7;
    (*(float *)(gen_frame + 0x98)) = fVar2;
    fVar7 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    ((float *)(gen_frame + 0x3c))[0] = fVar2;
    (*(undefined4 *)(gen_frame + 0x4c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    ((float *)(gen_frame + 0x3c))[1] = 0.0;
    ((float *)(gen_frame + 0x3c))[2] = ((float)GEN_TOF(-(float10)(float)fVar7));
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(float *)(gen_frame + 0x54)) = (float)fVar7;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(float *)(gen_frame + 0x5c)) = fVar2;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    if ((*(uint *)(gen_frame + 0x8c)) == 0) {
      param_3 = 0;
    }
    else {
      param_3 = (uint)gen_fl2bits(((float)GEN_TOF(((((float10)(*(float *)(gen_frame + 0x78)) * (float10)iVar6) /
                                           (float10)(int)(*(uint *)(gen_frame + 0x8c)) -
                                          (float10)(*(float *)(gen_frame + 0x78)) * (float10)REFG(double, 0x1088108)) /
                                         (float10)(*(float *)(gen_frame + 0x88))))));
    }
    F_00981050(&(*(float *)(gen_frame + 0x7c)),0x132f41c,(uint)((float *)(gen_frame + 0x3c)));
    (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x80)) + ((float10)GEN_TOD(gen_bits2f(param_3))));
    fVar7 = (float10)(*(float *)(gen_frame + 0x88));
    (*(float *)(gen_frame + 0x6c)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x7c)));
    (*(float *)(gen_frame + 0x70)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x80)) + ((float10)GEN_TOD(gen_bits2f(param_3)))) * fVar7)));
    (*(float *)(gen_frame + 0x74)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x84)));
    F_00981170(param_2,(uint)&(*(float *)(gen_frame + 0x6c)),(uint)((undefined1 *)(gen_frame + 0x0)));
    F_00981170(param_2,(uint)param_2,param_1 + 4);
    return (uint)param_2;
  }
  *param_2 = *((undefined4 *)GEN_TOP((param_1 + 0x28)));
  param_2[1] = *((undefined4 *)GEN_TOP((param_1 + 0x2c)));
  param_2[2] = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  return (uint)param_2;
}

/* ref: FUN_0098dc90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098dc90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x98dc90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x48, 8, 4);
  int iVar1;
  byte bVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  if ((param_2 != -1) && (*((int *)GEN_TOP(((int)this + 0x2f8))) != 0)) {
    (*(undefined4 *)(gen_frame + 0x3c)) = *((undefined4 *)GEN_TOP(((int)this + 0x1a8)));
    (*(undefined4 *)(gen_frame + 0x40)) = *((undefined4 *)GEN_TOP(((int)this + 0x1ac)));
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) + 0x80))))
                              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) GEN_EDX_ARG)));
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG)));
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) + 0x80))))
                              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) GEN_EDX_ARG)));
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x14))))(piVar4 GEN_EDX_ARG)));
    piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) + 0x80))))
                              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) GEN_EDX_ARG)));
    piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x10))))(piVar5 GEN_EDX_ARG)));
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x10))))(piVar5,(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(uint)*((byte *)GEN_TOP(((int)this + 0x2ec))));
    bVar2 = *((byte *)GEN_TOP(((int)this + 0x2ed)));
    (*(float *)(gen_frame + 0x30)) = (float)extraout_ST0;
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4,(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(uint)bVar2);
    (*(float *)(gen_frame + 0x34)) = (float)extraout_ST0_00;
    extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3,(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(uint)*((byte *)GEN_TOP(((int)this + 0x2ee))));
    (*(float *)(gen_frame + 0x38)) = (float)extraout_ST0_01;
    F_009df1b0(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),(uint)*((byte *)GEN_TOP(((int)this + 0x2e5))));
    iVar1 = *((int *)GEN_TOP(((int)this + 0x2f8))) + param_2 * 0x1c;
    (*(float *)(gen_frame + 0x30)) = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2f8))) + param_2 * 0x1c)));
    (*(float *)(gen_frame + 0x34)) = gen_bits2f(*((undefined4 *)GEN_TOP((iVar1 + 4))));
    (*(float *)(gen_frame + 0x38)) = gen_bits2f(*((undefined4 *)GEN_TOP((iVar1 + 8))));
    F_00981170(param_1,(uint)&(*(float *)(gen_frame + 0x30)),(uint)((undefined1 *)(gen_frame + 0x0)));
    uVar6 = F_00981170(param_1,(uint)param_1,(int)this + 4);
    return uVar6;
  }
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  param_1[1] = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  param_1[2] = *((undefined4 *)GEN_TOP(((int)this + 0x30)));
  return (uint)param_1;
}

/* ref: FUN_0098de10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098de10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x98de10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  uint uVar1;
  
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  param_1[1] = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  param_1[2] = *((undefined4 *)GEN_TOP(((int)this + 0x30)));
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x14a0a2c));
  param_2[1] = GEN_FLT_TO(param_2[1], REFG(float, 0x14a0a30));
  param_2[2] = GEN_FLT_TO(param_2[2], REFG(float, 0x14a0a34));
  *param_3 = GEN_FLT_TO(*param_3, REFG(float, 0x132f41c));
  param_3[1] = GEN_FLT_TO(param_3[1], REFG(float, 0x132f420));
  param_3[2] = GEN_FLT_TO(param_3[2], REFG(float, 0x132f424));
  uVar1 = *((int *)GEN_TOP((param_4 + 4))) - 2;
  if (uVar1 < 2) {
    F_00981430(((undefined1 *)(gen_frame + 0x0)),(int)this + 4);
    F_00981170(param_1,(uint)param_1,(uint)((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00981050(param_2,(uint)param_2,(uint)((undefined1 *)(gen_frame + 0x0)));
  }
  return uVar1;
}

/* ref: Apricot::Engine::Instance::SphereModelEmitterInstance::vf22 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098dec0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x98dec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc0, 0, 4);
  float fVar1;
  float fVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  int * piVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 fVar9;
  
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) + 0x78))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) GEN_EDX_FWD)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
  (*(float *)(gen_frame + 0xb0)) = gen_bits2f(uVar5);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) + 0x78))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG);
  (*(float *)(gen_frame + 0xac)) = gen_bits2f(uVar6);
  if ((-1 < (int)param_3) && (0 < (int)uVar5)) {
    (*(float *)(gen_frame + 0xb8)) = gen_bits2f(*((undefined4 *)GEN_TOP((param_1 + 0x1a8))));
    (*(int *)(gen_frame + 0xb4)) = *((undefined4 *)GEN_TOP((param_1 + 0x1ac)));
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) + 0x78))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) GEN_EDX_ARG)));
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x14))))(piVar4 GEN_EDX_ARG)));
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))
              (piVar4,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0xb8))),(*(int *)(gen_frame + 0xb4)),(uint)*((byte *)GEN_TOP((param_1 + 0x2eb))));
    (*(float *)(gen_frame + 0x9c)) = (float)extraout_ST0;
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) + 0x78))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) GEN_EDX_ARG)));
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x20))))(piVar4 GEN_EDX_ARG)));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) + 0x78))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) GEN_EDX_ARG)));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x1c))))(piVar7 GEN_EDX_ARG)));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) + 0x78))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) GEN_EDX_ARG)));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x18))))(piVar8 GEN_EDX_ARG)));
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x10))))
              (piVar8,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0xb8))),(*(int *)(gen_frame + 0xb4)),(uint)*((byte *)GEN_TOP((param_1 + 0x2e8))));
    bVar3 = *((byte *)GEN_TOP((param_1 + 0x2e9)));
    (*(float *)(gen_frame + 0xa0)) = (float)extraout_ST0_00;
    extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x10))))(piVar7,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0xb8))),(*(int *)(gen_frame + 0xb4)),(uint)bVar3);
    (*(float *)(gen_frame + 0xa4)) = (float)extraout_ST0_01;
    extraout_ST0_02 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))
              (piVar4,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0xb8))),(*(int *)(gen_frame + 0xb4)),(uint)*((byte *)GEN_TOP((param_1 + 0x2ea))));
    (*(float *)(gen_frame + 0xa8)) = (float)extraout_ST0_02;
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) + 0x78))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1f8))) GEN_EDX_ARG)));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
    F_009df1b0(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0xa0)),uVar5);
    (*(int *)(gen_frame + 0xb4)) = (int)param_3 % (int)gen_fl2bits((*(float *)(gen_frame + 0xb0)));
    fVar1 = ((float)GEN_TOF((((float10)((int)param_3 / (int)gen_fl2bits((*(float *)(gen_frame + 0xb0)))) *
                    (float10)*(double *)&REFG(undefined, 0x1080228)) / (float10)(int)gen_fl2bits((*(float *)(gen_frame + 0xac))))));
    fVar9 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    fVar2 = (float)fVar9;
    (*(float *)(gen_frame + 0xac)) = fVar2;
    (*(float *)(gen_frame + 0xb8)) = fVar2;
    fVar9 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    (*(undefined4 *)(gen_frame + 0x60)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(float *)(gen_frame + 0x70)) = fVar2;
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
    (*(float *)(gen_frame + 0x74)) = (float)fVar9;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    (*(undefined4 *)(gen_frame + 0x6c)) = 0;
    (*(float *)(gen_frame + 0x7c)) = ((float)GEN_TOF(-(float10)(float)fVar9));
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(float *)(gen_frame + 0x80)) = fVar2;
    (*(undefined4 *)(gen_frame + 0x84)) = 0;
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    (*(undefined4 *)(gen_frame + 0x8c)) = 0;
    fVar1 = ((float)GEN_TOF((((float10)((int)param_3 % (int)gen_fl2bits((*(float *)(gen_frame + 0xb0)))) *
                    (float10)*(float *)&REFG(undefined, 0x132f3a4)) / (float10)(int)gen_fl2bits((*(float *)(gen_frame + 0xb0))))));
    fVar9 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    fVar2 = (float)fVar9;
    (*(float *)(gen_frame + 0xac)) = fVar2;
    (*(float *)(gen_frame + 0xb0)) = fVar2;
    fVar9 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    ((float *)(gen_frame + 0x30))[1] = 0.0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    ((float *)(gen_frame + 0x30))[0] = fVar2;
    ((float *)(gen_frame + 0x30))[2] = ((float)GEN_TOF(-(float10)(float)fVar9));
    (*(float *)(gen_frame + 0x48)) = (float)fVar9;
    (*(undefined4 *)(gen_frame + 0x40)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(float *)(gen_frame + 0x50)) = fVar2;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x5c)) = 0;
    F_00981050(&(*(float *)(gen_frame + 0xa0)),0x132f410,(uint)&(*(undefined4 *)(gen_frame + 0x60)));
    F_00981050(&(*(float *)(gen_frame + 0x90)),(uint)&(*(float *)(gen_frame + 0xa0)),(uint)((float *)(gen_frame + 0x30)));
    F_00981050(&(*(float *)(gen_frame + 0xa0)),(uint)&(*(float *)(gen_frame + 0x90)),(uint)((undefined1 *)(gen_frame + 0x0)));
    fVar9 = (float10)(*(float *)(gen_frame + 0x9c));
    (*(float *)(gen_frame + 0x90)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0xa0)));
    (*(float *)(gen_frame + 0x94)) = (float)((float10)(*(float *)(gen_frame + 0xa4)) * fVar9);
    (*(float *)(gen_frame + 0x98)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0xa8)));
    F_00981170(param_2,(uint)&(*(float *)(gen_frame + 0x90)),param_1 + 4);
    return (uint)param_2;
  }
  *param_2 = *((undefined4 *)GEN_TOP((param_1 + 0x28)));
  param_2[1] = *((undefined4 *)GEN_TOP((param_1 + 0x2c)));
  param_2[2] = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  return (uint)param_2;
}

/* ref: Apricot::Engine::Instance::LaserParticleInstance::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098e1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x98e1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097ef70(this GEN_EDX_FWD);
  F_0097f2c0(this GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))(this GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x84))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::LineParticleInstance::vf30 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0098e220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98e220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(int *)(this + 0x298) != 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xf4))))(*(int * PTR32 *)(this + 0x29c) GEN_EDX_FWD);
    iVar1 = *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
    uVar2 = *(undefined4 *)(this + 0x298);
    iVar3 = (&REFG(undefined4, 0x14a0a08))[(int)(REFG(int, 0x14a09f8))];
    uVar4 = *((short *)GEN_TOP((uVar4 + 0xb8))) * 0x50 + iVar1;
    bVar5 = REFG(undefined4, 0x14a09fc) < uVar4;
    *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar4;
    uVar4 = ~-(uint)bVar5 & iVar3 + iVar1;
    *(uint *)(this + 0x298) = uVar4;
    if (uVar4 == 0) {
      if ((*(uint *)(this + 0x1d0) & 0x40000) == 0) {
        *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) & 0xf81fffff | 0x40000;
        return;
      }
    }
    else {
      F_009806e0(this GEN_EDX_ARG,uVar4,uVar2);
    }
  }
  return;
}

/* ref: FUN_0098e2c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0098e2c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x98e2c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x4f))) = 1;
  *param_1 = 0;
  if (param_3 == '\0') {
    F_009defa0(param_1 GEN_EDX_ARG,(uint)((byte *)(gen_frame + 0x0)));
    F_00981170(((byte *)(gen_frame + 0x0)),(uint)((byte *)(gen_frame + 0x0)),param_2);
    param_1[1] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    param_1[4] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    param_1[2] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
    param_1[5] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
    param_1[3] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
    param_1[6] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
    F_009df080(param_1 GEN_EDX_ARG,(uint)((byte *)(gen_frame + 0x0)));
    uVar1 = F_00981050(((byte *)(gen_frame + 0x0)),(uint)((byte *)(gen_frame + 0x0)),param_2);
  }
  else {
    F_009defa0(param_1 GEN_EDX_ARG,(uint)((byte *)(gen_frame + 0x0)));
    param_1[1] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    param_1[4] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    param_1[2] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
    param_1[5] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
    param_1[3] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
    param_1[6] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
    uVar1 = F_009df080(param_1 GEN_EDX_ARG,(uint)((byte *)(gen_frame + 0x0)));
  }
  param_1[7] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
  param_1[8] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
  param_1[9] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
  return uVar1;
}

/* ref: FUN_0098e3b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098e3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x98e3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  float * pfVar1;
  float fVar2;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  char * pcVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float fVar3;
  float fVar4;
  
  (*(int *)(gen_frame + 0x10)) = param_1;
  if ((*(uint *)&gen_args[0]) != (*(uint *)&gen_args[1])) {
    F_00c46aa0((*(uint *)&gen_args[0]),(*(uint *)&gen_args[1]),(*(int *)&gen_args[2]) * 0x50);
  }
  uVar14 = (*(uint *)&gen_args[4]);
  iVar13 = (*(int *)&gen_args[3]);
  pfVar1 = ((float *)GEN_TOP((param_1 + 0x1b0)));
  fVar2 = *pfVar1;
  fVar3 = *pfVar1;
  fVar4 = *pfVar1;
  (*(uint *)&gen_args[4]) = param_1 + 0x1b0;
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(REFG(float, 0x1094880));
  if ((GEN_ISNAN(REFG(float, 0x1094880)) || GEN_ISNAN(fVar2)) || (REFG(float, 0x1094880) < fVar4 || REFG(uint, 0x1094880) == fVar3)) {
    (*(uint *)&gen_args[4]) = (uint)&(*(uint *)&gen_args[1]);
  }
  (*(uint *)&gen_args[1]) = *((uint *)GEN_TOP((*(uint *)&gen_args[4])));
  if ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[1]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(gen_bits2f((*(uint *)&gen_args[1])) <= *(float *)&REFG(undefined, 0x1088114))) {
    fVar16 = (float10)REFG(double, 0x1094800);
    fVar17 = (float10)*(double *)&REFG(undefined, 0x1088118);
    do {
      if ((*(int *)&gen_args[2]) != 0) {
        pcVar15 = ((char *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x4f)));
        (*(int *)&gen_args[3]) = (*(int *)&gen_args[2]);
        do {
          pfVar1 = (float *)(pcVar15 - 0x4f);
          fVar2 = ((float)GEN_TOF(((float10)*(float *)(pcVar15 - 0x4f) + fVar16)));
          *pfVar1 = fVar2;
          if (*pcVar15 == 0) {
            (*(uint *)&gen_args[4]) = 0;
            if ((float10)(int)*(short *)(pcVar15 - 0x1b) <= (float10)fVar2) {
              cVar9 = *((char *)GEN_TOP((iVar13 + 0xce)));
              cVar10 = pcVar15[-4];
              *pfVar1 = 0.0;
              cVar11 = pcVar15[-5];
              *pcVar15 = '\x01';
              if (cVar9 == '\0') {
                fVar2 = (float)((float10)(int)pcVar15[-6] / fVar17);
                (*(float *)(gen_frame + 0x0)) = fVar2;
                fVar3 = (float)((float10)(int)cVar11 / fVar17);
                (*(float *)(gen_frame + 0x4)) = fVar3;
                fVar4 = (float)((float10)(int)cVar10 / fVar17);
                (*(float *)(gen_frame + 0x8)) = fVar4;
                (*(uint *)&gen_args[4]) = *(uint *)(pcVar15 - 0x23);
                fVar16 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4]))));
                (*(float *)(gen_frame + 0x0)) = (float)(fVar16 * (float10)fVar2);
                (*(float *)(gen_frame + 0x4)) = (float)(fVar16 * (float10)fVar3);
                (*(float *)(gen_frame + 0x8)) = (float)(fVar16 * (float10)fVar4);
                F_00981170(&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x0)),uVar14);
                *(float *)(pcVar15 - 0x4b) = (*(float *)(gen_frame + 0x0));
                *(float *)(pcVar15 - 0x3f) = (*(float *)(gen_frame + 0x0));
                (*(uint *)&gen_args[4]) = (uint)pcVar15[-8];
                *(float *)(pcVar15 - 0x47) = (*(float *)(gen_frame + 0x4));
                *(float *)(pcVar15 - 0x3b) = (*(float *)(gen_frame + 0x4));
                *(float *)(pcVar15 - 0x43) = (*(float *)(gen_frame + 0x8));
                *(float *)(pcVar15 - 0x37) = (*(float *)(gen_frame + 0x8));
                fVar17 = (float10)*(double *)&REFG(undefined, 0x1088118);
                fVar16 = (float10)*(float *)(pcVar15 - 0x27);
                fVar18 = GEN_X87((float10)((float)GEN_TOF((fVar16 * (float10)(float)((float10)(int)(*(uint *)&gen_args[4]) / fVar17)))));
                fVar19 = GEN_X87((float10)((float)GEN_TOF((fVar16 * (float10)(float)((float10)(int)pcVar15[-9] /
                                                                   fVar17)))));
                fVar16 = GEN_X87((float10)((float)GEN_TOF((fVar16 * (float10)(float)((float10)(int)pcVar15[-7] /
                                                                   fVar17)))));
                fVar2 = ((float)GEN_TOF(((fVar18 * (float10)*((float *)GEN_TOP((uVar14 + 0x14))) +
                                fVar19 * (float10)*((float *)GEN_TOP((uVar14 + 8)))) +
                               fVar16 * (float10)*((float *)GEN_TOP((uVar14 + 0x20))))));
                (*(float *)(gen_frame + 0xc)) = fVar2;
                fVar3 = *((float *)GEN_TOP((uVar14 + 0x10)));
                fVar4 = *((float *)GEN_TOP((uVar14 + 4)));
                fVar5 = *((float *)GEN_TOP((uVar14 + 0x1c)));
                fVar6 = *((float *)GEN_TOP((uVar14 + 0xc)));
                fVar7 = *((float *)GEN_TOP(uVar14));
                fVar8 = *((float *)GEN_TOP((uVar14 + 0x18)));
                *(float *)(pcVar15 - 0x2b) = fVar2;
                *(float *)(pcVar15 - 0x33) =
                     ((float)GEN_TOF((fVar16 * (float10)fVar8 +
                            ((float10)fVar6 * fVar18 + (float10)fVar7 * fVar19))));
                *(float *)(pcVar15 - 0x2f) =
                     ((float)GEN_TOF(((float10)fVar5 * fVar16 +
                            ((float10)fVar4 * fVar19 + (float10)fVar3 * fVar18))));
LAB_0098e50a: ;
                fVar16 = (float10)REFG(double, 0x1094800);
              }
              else {
                (*(uint *)&gen_args[4]) = (uint)pcVar15[-9];
                fVar18 = (float10)*(float *)(pcVar15 - 0x23);
                fVar2 = ((float)GEN_TOF((fVar18 * (float10)(float)((float10)(int)pcVar15[-6] / fVar17))));
                fVar3 = ((float)GEN_TOF((fVar18 * (float10)(float)((float10)(int)cVar11 / fVar17))));
                fVar4 = ((float)GEN_TOF((fVar18 * (float10)(float)((float10)(int)cVar10 / fVar17))));
                *(float *)(pcVar15 - 0x4b) = fVar2;
                *(float *)(pcVar15 - 0x3f) = fVar2;
                *(float *)(pcVar15 - 0x47) = fVar3;
                *(float *)(pcVar15 - 0x3b) = fVar3;
                *(float *)(pcVar15 - 0x43) = fVar4;
                *(float *)(pcVar15 - 0x37) = fVar4;
                fVar18 = (float10)*(float *)(pcVar15 - 0x27);
                *(float *)(pcVar15 - 0x33) =
                     ((float)GEN_TOF((fVar18 * (float10)(float)((float10)(int)(*(uint *)&gen_args[4]) / fVar17))));
                *(float *)(pcVar15 - 0x2f) =
                     ((float)GEN_TOF((fVar18 * (float10)(float)((float10)(int)pcVar15[-8] / fVar17))));
                *(float *)(pcVar15 - 0x2b) =
                     ((float)GEN_TOF((fVar18 * (float10)(float)((float10)(int)pcVar15[-7] / fVar17))));
              }
            }
          }
          else {
            (*(uint *)&gen_args[4]) = *pcVar15 - 1;
            if (((float *)GEN_TOP((*(uint *)&gen_args[4]))) == ((float *)GEN_TOP(0x0))) {
              *(float *)(pcVar15 - 0x33) =
                   ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar13 + 0xc))) * (float10)*(float *)(pcVar15 - 0x33))))
              ;
              *(float *)(pcVar15 - 0x2f) =
                   ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar13 + 0x10))) * (float10)*(float *)(pcVar15 - 0x2f)
                          )));
              *(float *)(pcVar15 - 0x2b) =
                   ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar13 + 0x14))) * (float10)*(float *)(pcVar15 - 0x2b)
                          )));
              if ((*((char *)GEN_TOP((iVar13 + 200))) == -1) ||
                 ((float10)0 <
                  (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar13 + 0x8c))) * (float10)fVar2 +
                                  (float10)*((float *)GEN_TOP((iVar13 + 0x88)))))))) {
                *(float *)(pcVar15 - 0x4b) =
                     ((float)GEN_TOF(((float10)*(float *)(pcVar15 - 0x33) * fVar16 +
                            (float10)*(float *)(pcVar15 - 0x4b))));
                *(float *)(pcVar15 - 0x47) =
                     ((float)GEN_TOF(((float10)*(float *)(pcVar15 - 0x2f) * fVar16 +
                            (float10)*(float *)(pcVar15 - 0x47))));
                *(float *)(pcVar15 - 0x43) =
                     ((float)GEN_TOF(((float10)*(float *)(pcVar15 - 0x2b) * fVar16 +
                            (float10)*(float *)(pcVar15 - 0x43))));
              }
              uVar12 = *((ushort *)GEN_TOP((iVar13 + 0xbc)));
              (*(uint *)&gen_args[4]) = (uint)uVar12;
              if ((0 < (short)uVar12) &&
                 ((*(uint *)&gen_args[4]) = (uint)(short)uVar12, (float10)(int)(*(uint *)&gen_args[4]) <= (float10)fVar2)) {
                if (*((char *)GEN_TOP((iVar13 + 0xcb))) != '\0') {
                  (*(uint *)&gen_args[4]) = F_0098e2c0(pfVar1,uVar14,*((char *)GEN_TOP((iVar13 + 0xce))) != '\0');
                  fVar17 = (float10)*(double *)&REFG(undefined, 0x1088118);
                  goto LAB_0098e50a;
                }
                *pcVar15 = '\x02';
              }
            }
          }
          pcVar15 = pcVar15 + 0x50;
          (*(int *)&gen_args[3]) = (*(int *)&gen_args[3]) - 1;
        } while ((*(int *)&gen_args[3]) != 0);
      }
      (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))) - fVar16));
    } while ((!GEN_ISNAN(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1]))))) && !GEN_ISNAN((float10)0)) &&
             !(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))) <= (float10)0));
  }
  return (*(uint *)&gen_args[4]);
}

/* ref: Apricot::Engine::Instance::PowderParticleInstance::vf30 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0098e780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98e780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(int *)(this + 0x298) != 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xf4))))(*(int * PTR32 *)(this + 0x29c) GEN_EDX_FWD);
    iVar1 = *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
    uVar2 = *(undefined4 *)(this + 0x298);
    iVar3 = (&REFG(undefined4, 0x14a0a08))[(int)(REFG(int, 0x14a09f8))];
    uVar4 = *((short *)GEN_TOP((uVar4 + 0xb8))) * 0x50 + iVar1;
    bVar5 = REFG(undefined4, 0x14a09fc) < uVar4;
    *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar4;
    uVar4 = ~-(uint)bVar5 & iVar3 + iVar1;
    *(uint *)(this + 0x298) = uVar4;
    if (uVar4 == 0) {
      if ((*(uint *)(this + 0x1d0) & 0x40000) == 0) {
        *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) & 0xf81fffff | 0x40000;
        return;
      }
    }
    else {
      F_00980780(this GEN_EDX_ARG,uVar4,uVar2);
    }
  }
  return;
}

/* ref: FUN_0098e820 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0098e820(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x98e820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x4f))) = 1;
  *param_1 = 0;
  if (param_3 == '\0') {
    F_009defa0(param_1 GEN_EDX_ARG,(uint)((byte *)(gen_frame + 0x0)));
    F_00981170(((byte *)(gen_frame + 0x0)),(uint)((byte *)(gen_frame + 0x0)),param_2);
    param_1[1] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    param_1[2] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
    param_1[3] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
    F_009df080(param_1 GEN_EDX_ARG,(uint)((byte *)(gen_frame + 0x0)));
    uVar1 = F_00981050(((byte *)(gen_frame + 0x0)),(uint)((byte *)(gen_frame + 0x0)),param_2);
  }
  else {
    F_009defa0(param_1 GEN_EDX_ARG,(uint)((byte *)(gen_frame + 0x0)));
    param_1[1] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    param_1[2] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
    param_1[3] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
    uVar1 = F_009df080(param_1 GEN_EDX_ARG,(uint)((byte *)(gen_frame + 0x0)));
  }
  param_1[7] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
  param_1[8] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
  param_1[9] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
  return uVar1;
}

/* ref: FUN_0098e8f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098e8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x98e8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  float * pfVar1;
  float fVar2;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  ushort uVar13;
  uint uVar14;
  float * pfVar15;
  float * pfVar16;
  int iVar17;
  char * pcVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float fVar3;
  float fVar4;
  
  iVar17 = (*(int *)&gen_args[2]);
  (*(int *)(gen_frame + 0x18)) = param_1;
  if ((*(uint *)&gen_args[0]) != (*(uint *)&gen_args[1])) {
    F_00c46aa0((*(uint *)&gen_args[0]),(*(uint *)&gen_args[1]),(*(int *)&gen_args[2]) * 0x50);
  }
  uVar14 = (*(uint *)&gen_args[3]);
  pfVar16 = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + 0x1b0)));
  fVar2 = *pfVar16;
  fVar3 = *pfVar16;
  fVar4 = *pfVar16;
  (*(uint *)(gen_frame + 0xc)) = (uint)(ushort)((short)*((char *)GEN_TOP(((*(uint *)&gen_args[3]) + 0xc3))) * (short)*((char *)GEN_TOP(((*(uint *)&gen_args[3]) + 0xc2))));
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(REFG(float, 0x1094880));
  if ((GEN_ISNAN(REFG(float, 0x1094880)) || GEN_ISNAN(fVar2)) || (REFG(float, 0x1094880) < fVar4 || REFG(uint, 0x1094880) == fVar3)) {
    pfVar16 = (float *)&(*(uint *)&gen_args[1]);
  }
  (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(*pfVar16);
  if ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[3]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(gen_bits2f((*(uint *)&gen_args[3])) <= *(float *)&REFG(undefined, 0x1088114))) {
    fVar19 = (float10)REFG(double, 0x1094800);
    fVar20 = (float10)*(double *)&REFG(undefined, 0x1088118);
    do {
      if (iVar17 != 0) {
        pcVar18 = ((char *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x4f)));
        (*(int *)(gen_frame + 0x14)) = iVar17;
        do {
          pfVar15 = (*(float * PTR32 *)&gen_args[4]);
          pfVar1 = (float *)(pcVar18 - 0x4f);
          fVar2 = ((float)GEN_TOF(((float10)*(float *)(pcVar18 - 0x4f) + fVar19)));
          *pfVar1 = fVar2;
          if (*pcVar18 == 0) {
            pfVar16 = ((float *)GEN_TOP((int)*(short *)(pcVar18 - 0x1b)));
            if ((float10)(int)pfVar16 <= (float10)fVar2) {
              cVar10 = *((char *)GEN_TOP((uVar14 + 0xce)));
              cVar11 = pcVar18[-5];
              cVar12 = pcVar18[-4];
              *pcVar18 = '\x01';
              *pfVar1 = 0.0;
              if (cVar10 == '\0') {
                fVar2 = (float)((float10)(int)pcVar18[-6] / fVar20);
                (*(float *)(gen_frame + 0x0)) = fVar2;
                fVar3 = (float)((float10)(int)cVar11 / fVar20);
                (*(float *)(gen_frame + 0x4)) = fVar3;
                fVar4 = (float)((float10)(int)cVar12 / fVar20);
                (*(float *)(gen_frame + 0x8)) = fVar4;
                (*(uint *)&gen_args[1]) = *(uint *)(pcVar18 - 0x23);
                fVar19 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1]))));
                (*(float *)(gen_frame + 0x0)) = (float)(fVar19 * (float10)fVar2);
                (*(float *)(gen_frame + 0x4)) = (float)(fVar19 * (float10)fVar3);
                (*(float *)(gen_frame + 0x8)) = (float)(fVar19 * (float10)fVar4);
                F_00981170(&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x0)),(uint)(*(float * PTR32 *)&gen_args[4]));
                *(float *)(pcVar18 - 0x4b) = (*(float *)(gen_frame + 0x0));
                pfVar16 = ((float *)GEN_TOP((int)pcVar18[-8]));
                *(float *)(pcVar18 - 0x47) = (*(float *)(gen_frame + 0x4));
                *(float *)(pcVar18 - 0x43) = (*(float *)(gen_frame + 0x8));
                fVar20 = (float10)*(double *)&REFG(undefined, 0x1088118);
                fVar19 = (float10)*(float *)(pcVar18 - 0x27);
                fVar21 = GEN_X87((float10)((float)GEN_TOF((fVar19 * (float10)(float)((float10)(int)((int)(uintptr_t)pfVar16) / fVar20)))));
                fVar22 = GEN_X87((float10)((float)GEN_TOF((fVar19 * (float10)(float)((float10)(int)pcVar18[-9] /
                                                                   fVar20)))));
                fVar19 = GEN_X87((float10)((float)GEN_TOF((fVar19 * (float10)(float)((float10)(int)pcVar18[-7] /
                                                                   fVar20)))));
                fVar2 = ((float)GEN_TOF(((fVar21 * (float10)pfVar15[5] + fVar22 * (float10)pfVar15[2]) +
                               fVar19 * (float10)pfVar15[8])));
                (*(float *)(gen_frame + 0x10)) = fVar2;
                fVar3 = pfVar15[4];
                fVar4 = pfVar15[1];
                fVar6 = pfVar15[7];
                fVar7 = pfVar15[3];
                fVar8 = *pfVar15;
                fVar9 = pfVar15[6];
                *(float *)(pcVar18 - 0x2b) = fVar2;
                *(float *)(pcVar18 - 0x33) =
                     ((float)GEN_TOF((fVar19 * (float10)fVar9 +
                            ((float10)fVar7 * fVar21 + (float10)fVar8 * fVar22))));
                *(float *)(pcVar18 - 0x2f) =
                     ((float)GEN_TOF(((float10)fVar6 * fVar19 +
                            ((float10)fVar4 * fVar22 + (float10)fVar3 * fVar21))));
LAB_0098ed24: ;
                fVar19 = (float10)REFG(double, 0x1094800);
              }
              else {
                pfVar16 = ((float *)GEN_TOP((int)pcVar18[-7]));
                fVar21 = (float10)*(float *)(pcVar18 - 0x23);
                *(float *)(pcVar18 - 0x4b) =
                     ((float)GEN_TOF((fVar21 * (float10)(float)((float10)(int)pcVar18[-6] / fVar20))));
                *(float *)(pcVar18 - 0x47) =
                     ((float)GEN_TOF((fVar21 * (float10)(float)((float10)(int)cVar11 / fVar20))));
                *(float *)(pcVar18 - 0x43) =
                     ((float)GEN_TOF((fVar21 * (float10)(float)((float10)(int)cVar12 / fVar20))));
                fVar21 = (float10)*(float *)(pcVar18 - 0x27);
                *(float *)(pcVar18 - 0x33) =
                     ((float)GEN_TOF((fVar21 * (float10)(float)((float10)(int)pcVar18[-9] / fVar20))));
                *(float *)(pcVar18 - 0x2f) =
                     ((float)GEN_TOF((fVar21 * (float10)(float)((float10)(int)pcVar18[-8] / fVar20))));
                *(float *)(pcVar18 - 0x2b) =
                     ((float)GEN_TOF((fVar21 * (float10)(float)((float10)(int)((int)(uintptr_t)pfVar16) / fVar20))));
              }
            }
          }
          else {
            pfVar16 = ((float *)GEN_TOP((*pcVar18 - 1)));
            if (pfVar16 == ((float *)GEN_TOP(0x0))) {
              *(float *)(pcVar18 - 0x33) =
                   ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar14 + 0xc))) * (float10)*(float *)(pcVar18 - 0x33))))
              ;
              *(float *)(pcVar18 - 0x2f) =
                   ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar14 + 0x10))) * (float10)*(float *)(pcVar18 - 0x2f)
                          )));
              *(float *)(pcVar18 - 0x2b) =
                   ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar14 + 0x14))) * (float10)*(float *)(pcVar18 - 0x2b)
                          )));
              if ((*((char *)GEN_TOP((uVar14 + 200))) == -1) ||
                 ((float10)0 <
                  (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar14 + 0x8c))) * (float10)fVar2 +
                                  (float10)*((float *)GEN_TOP((uVar14 + 0x88)))))))) {
                *(float *)(pcVar18 - 0x4b) =
                     ((float)GEN_TOF(((float10)*(float *)(pcVar18 - 0x33) * fVar19 +
                            (float10)*(float *)(pcVar18 - 0x4b))));
                *(float *)(pcVar18 - 0x47) =
                     ((float)GEN_TOF(((float10)*(float *)(pcVar18 - 0x2f) * fVar19 +
                            (float10)*(float *)(pcVar18 - 0x47))));
                *(float *)(pcVar18 - 0x43) =
                     ((float)GEN_TOF(((float10)*(float *)(pcVar18 - 0x2b) * fVar19 +
                            (float10)*(float *)(pcVar18 - 0x43))));
              }
              uVar13 = *((ushort *)GEN_TOP((uVar14 + 0xbc)));
              pfVar16 = ((float *)GEN_TOP((uint)uVar13));
              if ((0 < (short)uVar13) &&
                 ((*(uint *)&gen_args[1]) = (uint)(short)uVar13, (float10)(int)(*(uint *)&gen_args[1]) <= (float10)fVar2)) {
                if (*((char *)GEN_TOP((uVar14 + 0xcb))) == '\0') {
                  *pcVar18 = '\x02';
                }
                else {
                  cVar10 = *((char *)GEN_TOP((uVar14 + 0xce)));
                  pfVar16 = ((float *)GEN_TOP(F_0098e820(pfVar1,(*(float * PTR32 *)&gen_args[4]),cVar10 != '\0')));
                  fVar20 = (float10)*(double *)&REFG(undefined, 0x1088118);
                  fVar19 = (float10)REFG(double, 0x1094800);
                }
              }
              cVar10 = *((char *)GEN_TOP((uVar14 + 0xc6)));
              if ('\0' < cVar10) {
                cVar11 = *((char *)GEN_TOP((uVar14 + 0xc4)));
                fVar2 = *pfVar1;
                (*(uint *)&gen_args[1]) = CONCAT22(gen_x87_cw,(short)cVar11);
                (*(float *)(gen_frame + 0x10)) = gen_bits2f(gen_x87_cw | 0xc00);
                (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x10)) + 0)) = (undefined2)(gen_x87_cw | 0xc00);
                gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x10)) + 0)));
                fVar2 = gen_bits2f((int)TRUNC((float10)fVar2 / (float10)(int)cVar11));
                (*(float *)(gen_frame + 0x10)) = fVar2;
                gen_set_x87_cw((unsigned short)gen_x87_cw);
                pfVar16 = ((float *)GEN_TOP((((uint)gen_fl2bits(fVar2) & 0xffff) +
                                   (*(ushort *)(pcVar18 - 0x19) & 0x7fff))));
                if ((int)((int)cVar10 * ((*(uint *)(gen_frame + 0xc)) & 0xffff)) <= (int)pfVar16) {
                  if (*((char *)GEN_TOP((uVar14 + 0xcb))) != '\0') {
                    pfVar16 = ((float *)GEN_TOP(F_0098e820(pfVar1,(*(float * PTR32 *)&gen_args[4]),*((char *)GEN_TOP((uVar14 + 0xce))) != '\0')))
                    ;
                    fVar20 = (float10)*(double *)&REFG(undefined, 0x1088118);
                    goto LAB_0098ed24;
                  }
                  *pcVar18 = '\x02';
                }
              }
            }
          }
          pcVar18 = pcVar18 + 0x50;
          iVar5 = (*(int *)(gen_frame + 0x14)) - 1;
          (*(int *)(gen_frame + 0x14)) = iVar5;
          iVar17 = (*(int *)&gen_args[2]);
        } while (iVar5 != 0);
      }
      (*(uint *)&gen_args[3]) = (uint)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) - fVar19));
    } while ((!GEN_ISNAN(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3]))))) && !GEN_ISNAN((float10)0)) &&
             !(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) <= (float10)0));
  }
  return (uint)pfVar16;
}

/* ref: FUN_0098ed70 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_0098ed70(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x98ed70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  float fVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  
  uVar2 = param_2;
  fVar5 = *((float *)GEN_TOP((param_3 + 0x1c)));
  fVar3 = GEN_X87((float10)(float)((float10)*((float *)GEN_TOP(param_2)) * (float10)*((float *)GEN_TOP(param_2))));
  fVar4 = (float10)REFG(double, 0x1088108);
  fVar1 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_3 + 0x20))) * fVar3) * fVar4)));
  (*(float *)(gen_frame + 0xc)) = fVar1;
  *param_1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar3 * (float10)*((float *)GEN_TOP((param_3 + 0x18)))) * fVar4))) +
                    (float10)*((float *)GEN_TOP((param_2 + 4))))));
  param_1[1] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 8))) +
                      (float10)((float)GEN_TOF(((fVar3 * (float10)fVar5) * fVar4))))));
  param_1[2] = ((float)GEN_TOF(((float10)fVar1 + (float10)*((float *)GEN_TOP((param_2 + 0xc))))));
  if (*((char *)GEN_TOP((param_3 + 200))) == -1) goto LAB_0098eeae;
  param_2 = (uint)gen_fl2bits(((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_3 + 0x8c))) *
                                      (float10)*((float *)GEN_TOP(param_2)) +
                                     (float10)*((float *)GEN_TOP((param_3 + 0x88)))))));
  if (((float10)GEN_TOD(gen_bits2f(param_2))) < (float10)0) {
    fVar5 = 0.0;
LAB_0098ee0c: ;
    param_2 = (uint)gen_fl2bits(fVar5);
  }
  else {
    fVar5 = REFG(float, 0x1087f04);
    if (REFG(float, 0x1087f04) < gen_bits2f(param_2)) goto LAB_0098ee0c;
  }
  fVar3 = ((float10)GEN_TOD(fcos(
                        (float10)(float)(((float10)GEN_TOD(gen_bits2f(param_2))) *
                                        (float10)*(double *)&REFG(undefined, 0x1080228)))));
  fVar4 = (float10)REFG(double, 0x1088108);
  F_009df010(uVar2 GEN_EDX_ARG,(uint)((byte *)(gen_frame + 0x0)));
  if (*((char *)GEN_TOP((param_3 + 0xce))) == '\0') {
    F_00981170(((byte *)(gen_frame + 0x0)),(uint)((byte *)(gen_frame + 0x0)),param_4);
  }
  fVar3 = GEN_X87((float10)(float)(fVar4 - (float10)(float)fVar3 * fVar4));
  *param_1 = ((float)GEN_TOF((fVar3 * (((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0))))) - (float10)*((float *)GEN_TOP((uVar2 + 4)))) +
                    (float10)*((float *)GEN_TOP((uVar2 + 4))))));
  param_1[1] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar2 + 8))) +
                      fVar3 * (((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4))))) - (float10)*((float *)GEN_TOP((uVar2 + 8)))))));
  param_1[2] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar2 + 0xc))) +
                      (((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))))) - (float10)*((float *)GEN_TOP((uVar2 + 0xc)))) * fVar3
                      )));
LAB_0098eeae: ;
  if (*((char *)GEN_TOP((param_3 + 0xce))) != '\0') {
    F_00981170(param_1,(uint)param_1,param_4);
  }
  return;
}

/* ref: Apricot::Engine::Instance::ModelParticleInstance::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098eed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x98eed0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097ef70(this GEN_EDX_FWD);
  F_0097f2c0(this GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))(this GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x84))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::ModelParticleInstance::vf26 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098ef00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98ef00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  F_0098cfd0(this GEN_EDX_FWD,*(uint *)(this + 0x300));
  if (*((int *)GEN_TOP((*(int *)(this + 0x300) + 0xf4))) != 0) {
    uVar1 = *(undefined4 *)(this + 0x1a8);
    uVar2 = *(undefined4 *)(this + 0x1ac);
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xc4))))(*(int * PTR32 *)(this + 0x29c) GEN_EDX_ARG)));
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x20))))(piVar3 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG,uVar1,uVar2,this + 0x2f1,*(int *)(this + 0x300) + 0x90,2);
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xc4))))(*(int * PTR32 *)(this + 0x29c) GEN_EDX_ARG)));
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x24))))(piVar3 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG,uVar1,uVar2,this + 0x2f6,*(int *)(this + 0x300) + 0xa0,2);
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xc4))))(*(int * PTR32 *)(this + 0x29c) GEN_EDX_ARG)));
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))
              (piVar3 GEN_EDX_ARG,uVar1,uVar2,(undefined4)gen_fl2bits((float)(float10)0),this + 0x2fb,
               *(int *)(this + 0x300) + 0xe0);
  }
  uVar4 = F_0097ef70(this GEN_EDX_ARG);
  return uVar4;
}

/* ref: Apricot::Engine::Instance::LightModelParticleInstance::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098f030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x98f030u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097ef70(this GEN_EDX_FWD);
  F_0097f2c0(this GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))(this GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x84))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::LightModelParticleInstance::vf26 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098f060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98f060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0098cfd0(this GEN_EDX_FWD,*(uint *)(this + 0x2f0));
  uVar1 = F_0097ef70(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::PolygonParticleInstance::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098f080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x98f080u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097ef70(this GEN_EDX_FWD);
  F_0097f2c0(this GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))(this GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x84))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::PolygonParticleInstance::vf26 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098f0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98f0b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0098cfd0(this GEN_EDX_FWD,*(uint *)(this + 0x2f4));
  uVar1 = F_0097ef70(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::PolyLineParticleInstance::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098f0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x98f0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097ef70(this GEN_EDX_FWD);
  F_0097f2c0(this GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))(this GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x84))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::PolyLineParticleInstance::vf26 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098f100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98f100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  undefined * pPVar7;
  
  F_0098cfd0(this GEN_EDX_FWD,*(uint *)(this + 0x31c));
  uVar1 = *(undefined4 *)(this + 0x1a8);
  uVar2 = *(undefined4 *)(this + 0x1ac);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xc0))))(*(int * PTR32 *)(this + 0x29c) GEN_EDX_ARG)));
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x4c))))(piVar3 GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG,uVar1,uVar2,this + 0x2f0,*(int *)(this + 0x31c) + 0x80,2);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x54))))(piVar3 GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG,uVar1,uVar2,this + 0x2fa,*(int *)(this + 0x31c) + 0xa0,2);
  if ((*((uint *)GEN_TOP((*(int *)(this + 0x31c) + 0x128))) & 0x10) == 0) {
    if ((*((uint *)GEN_TOP((*(int *)(this + 0x31c) + 0x128))) & 1) == 0) goto LAB_0098f2d2;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x50))))(piVar3 GEN_EDX_ARG)));
    iVar6 = *(int *)(this + 0x31c) + 0x90;
    pPVar7 = this + 0x2f5;
  }
  else {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x58))))(piVar3 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG,uVar1,uVar2,this + 0x2ff,*(int *)(this + 0x31c) + 0xb0,2);
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x60))))(piVar3 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG,uVar1,uVar2,this + 0x309,*(int *)(this + 0x31c) + 0xd0,2);
    if ((*((byte *)GEN_TOP((*(int *)(this + 0x31c) + 0x128))) & 1) == 0) goto LAB_0098f2d2;
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x50))))(piVar3 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG,uVar1,uVar2,this + 0x2f5,*(int *)(this + 0x31c) + 0x90,2);
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG)));
    iVar6 = *(int *)(this + 0x31c) + 0xc0;
    pPVar7 = this + 0x304;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG,uVar1,uVar2,pPVar7,iVar6,2);
LAB_0098f2d2: ;
  uVar5 = F_0097ef70(this GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_0098f2e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098f2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x98f2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  undefined4 * puVar10;
  int iVar11;
  int iVar12;
  undefined4 * puVar13;
  int iVar14;
  undefined4 * puVar15;
  undefined4 * local_20;
  undefined4 * local_1c;
  int local_10;
  undefined4 * local_c;
  
  iVar14 = *((int *)GEN_TOP(((int)param_1 + 0x150)));
  if ((*((byte *)GEN_TOP(((int)param_1 + 0x128))) & 4) == 0) {
    iVar12 = *((int *)GEN_TOP(((int)this + 0x31c)));
    iVar11 = *((int *)GEN_TOP((iVar12 + 0x15c)));
    if (iVar11 == 1) {
      iVar11 = iVar14 - 1;
      puVar7 = ((undefined4 *)GEN_TOP(0x0));
      if (3 < iVar11) {
        iVar1 = iVar11 * 0x10;
        iVar14 = (iVar14 - 5U >> 2) + 1;
        iVar11 = iVar11 + iVar14 * -4;
        puVar8 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 800))) - 0x10 + iVar1)));
        do {
          puVar7 = puVar8 - 0x10;
          iVar14 = iVar14 - 1;
          puVar8[4] = *puVar8;
          puVar8[5] = puVar8[1];
          puVar8[6] = puVar8[2];
          *puVar8 = puVar8[-4];
          puVar8[1] = puVar8[-3];
          puVar8[2] = puVar8[-2];
          puVar8[-4] = puVar8[-8];
          puVar8[-3] = puVar8[-7];
          puVar8[-2] = puVar8[-6];
          puVar8[-8] = puVar8[-0xc];
          puVar8[-7] = puVar8[-0xb];
          puVar8[-6] = puVar8[-10];
          puVar8 = puVar7;
        } while (iVar14 != 0);
      }
      if (0 < iVar11) {
        puVar10 = ((undefined4 *)GEN_TOP((iVar11 * 0x10 + *((int *)GEN_TOP(((int)this + 800))))));
        puVar8 = puVar10 - 2;
        do {
          iVar11 = iVar11 - 1;
          *puVar10 = puVar8[-2];
          puVar10 = puVar10 - 4;
          puVar7 = puVar8 - 4;
          puVar8[3] = puVar8[-1];
          puVar8[4] = *puVar8;
          puVar8 = puVar7;
        } while (0 < iVar11);
      }
      puVar8 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 800)));
      *puVar8 = *((undefined4 *)GEN_TOP((iVar12 + 0x104)));
      puVar8[1] = *((undefined4 *)GEN_TOP((iVar12 + 0x108)));
      puVar8[2] = *((undefined4 *)GEN_TOP((iVar12 + 0x10c)));
    }
    else {
      if (iVar11 == 2) {
        iVar12 = iVar14 - 1;
        if (3 < iVar12) {
          iVar3 = *((int *)GEN_TOP(((int)this + 800)));
          iVar5 = *((int *)GEN_TOP(((int)this + 0x324)));
          iVar11 = iVar12 * 0x10;
          iVar1 = iVar12 * 0x10;
          iVar2 = iVar12 * 0x10;
          iVar14 = (iVar14 - 5U >> 2) + 1;
          iVar12 = iVar12 + iVar14 * -4;
          puVar7 = ((undefined4 *)GEN_TOP((iVar5 - 0x10 + iVar11)));
          puVar8 = ((undefined4 *)GEN_TOP((iVar3 - 8 + iVar2)));
          puVar10 = ((undefined4 *)GEN_TOP((iVar3 + 8 + iVar1)));
          do {
            puVar10[-2] = puVar10[-6];
            iVar14 = iVar14 - 1;
            puVar10[-1] = puVar8[-1];
            *puVar10 = *puVar8;
            puVar7[4] = *puVar7;
            puVar7[5] = puVar7[1];
            *((undefined4 *)GEN_TOP(((int)puVar10 + (iVar5 - iVar3)))) = puVar7[2];
            puVar10[-6] = puVar10[-10];
            puVar8[-1] = puVar8[-5];
            *puVar8 = puVar8[-4];
            *puVar7 = puVar7[-4];
            puVar7[1] = puVar7[-3];
            puVar7[2] = puVar7[-2];
            puVar10[-10] = puVar10[-0xe];
            puVar8[-5] = puVar8[-9];
            puVar8[-4] = puVar8[-8];
            puVar7[-4] = puVar7[-8];
            puVar7[-3] = puVar7[-7];
            puVar7[-2] = puVar7[-6];
            puVar10[-0xe] = puVar10[-0x12];
            puVar8[-9] = puVar8[-0xd];
            puVar8[-8] = puVar8[-0xc];
            puVar7[-8] = puVar7[-0xc];
            puVar7[-7] = puVar7[-0xb];
            puVar7[-6] = puVar7[-10];
            puVar7 = puVar7 - 0x10;
            puVar8 = puVar8 - 0x10;
            puVar10 = puVar10 - 0x10;
          } while (iVar14 != 0);
        }
        if (0 < iVar12) {
          iVar14 = *((int *)GEN_TOP(((int)this + 0x324)));
          iVar11 = *((int *)GEN_TOP(((int)this + 800)));
          puVar7 = ((undefined4 *)GEN_TOP((iVar14 + iVar12 * 0x10)));
          puVar8 = ((undefined4 *)GEN_TOP((iVar11 - 8 + iVar12 * 0x10)));
          puVar10 = puVar7 - 2;
          do {
            iVar12 = iVar12 - 1;
            *((undefined4 *)GEN_TOP(((iVar11 - iVar14) + (int)puVar7))) = puVar8[-2];
            puVar8[3] = puVar8[-1];
            puVar8[4] = *puVar8;
            *puVar7 = puVar10[-2];
            puVar10[3] = puVar10[-1];
            puVar10[4] = *puVar10;
            puVar8 = puVar8 - 4;
            puVar10 = puVar10 - 4;
            puVar7 = puVar7 - 4;
          } while (0 < iVar12);
        }
        uVar4 = *((uint *)GEN_TOP(((int)this + 0x31c)));
        puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 800)));
        puVar8 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x324)));
        *puVar7 = *((undefined4 *)GEN_TOP((uVar4 + 0x104)));
        puVar7[1] = *((undefined4 *)GEN_TOP((uVar4 + 0x108)));
        puVar7[2] = *((undefined4 *)GEN_TOP((uVar4 + 0x10c)));
        *puVar8 = *((undefined4 *)GEN_TOP((uVar4 + 0x11c)));
        puVar8[1] = *((undefined4 *)GEN_TOP((uVar4 + 0x120)));
        puVar8[2] = *((undefined4 *)GEN_TOP((uVar4 + 0x124)));
        return uVar4;
      }
      puVar7 = ((undefined4 *)GEN_TOP((iVar11 - 3)));
      if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
        param_1 = ((undefined4 *)GEN_TOP((iVar14 - 1)));
        if (3 < (int)param_1) {
          iVar3 = *((int *)GEN_TOP(((int)this + 800)));
          iVar5 = *((int *)GEN_TOP(((int)this + 0x324)));
          iVar12 = (int)((int)(uintptr_t)param_1) * 0x10;
          iVar6 = *((int *)GEN_TOP(((int)this + 0x328)));
          iVar11 = (int)((int)(uintptr_t)param_1) * 0x10;
          iVar1 = (int)((int)(uintptr_t)param_1) * 0x10;
          iVar2 = (int)((int)(uintptr_t)param_1) * 0x10;
          iVar9 = *((int *)GEN_TOP(((int)this + 0x324))) - *((int *)GEN_TOP(((int)this + 0x328)));
          local_20 = ((undefined4 *)GEN_TOP(((iVar14 - 5U >> 2) + 1)));
          param_1 = ((undefined4 *)GEN_TOP(((int)param_1 + (int)local_20 * -4)));
          puVar7 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x328))) - 0x10 + iVar1)));
          puVar8 = ((undefined4 *)GEN_TOP(((iVar14 - 3) * 0x10 + *((int *)GEN_TOP(((int)this + 0x324))))));
          puVar10 = ((undefined4 *)GEN_TOP((iVar3 - 8 + iVar2)));
          puVar13 = ((undefined4 *)GEN_TOP((iVar5 - 8 + iVar12)));
          puVar15 = ((undefined4 *)GEN_TOP((iVar3 + 8 + iVar11)));
          do {
            puVar15[-2] = puVar15[-6];
            puVar15[-1] = puVar10[-1];
            *puVar15 = *puVar10;
            local_20 = ((undefined4 *)GEN_TOP(((int)local_20 - 1)));
            puVar8[8] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar9)));
            *((undefined4 *)GEN_TOP(((int)puVar7 + iVar9 + 0x14))) = puVar13[-1];
            *((undefined4 *)GEN_TOP(((int)puVar15 + (iVar5 - iVar3)))) = *puVar13;
            puVar7[4] = *puVar7;
            puVar7[5] = puVar7[1];
            *((undefined4 *)GEN_TOP(((int)puVar15 + (iVar6 - iVar3)))) = puVar7[2];
            puVar15[-6] = puVar15[-10];
            puVar10[-1] = puVar10[-5];
            *puVar10 = puVar10[-4];
            *((undefined4 *)GEN_TOP(((int)puVar7 + iVar9))) = *puVar8;
            puVar13[-1] = puVar13[-5];
            *puVar13 = puVar13[-4];
            *puVar7 = puVar7[-4];
            puVar7[1] = puVar7[-3];
            puVar7[2] = puVar7[-2];
            puVar15[-10] = puVar15[-0xe];
            puVar10[-5] = puVar10[-9];
            puVar10[-4] = puVar10[-8];
            *puVar8 = puVar8[-4];
            puVar13[-5] = puVar13[-9];
            puVar13[-4] = puVar13[-8];
            puVar7[-4] = puVar7[-8];
            puVar7[-3] = puVar7[-7];
            puVar7[-2] = puVar7[-6];
            puVar15[-0xe] = puVar15[-0x12];
            puVar10[-9] = puVar10[-0xd];
            puVar10[-8] = puVar10[-0xc];
            puVar8[-4] = puVar8[-8];
            puVar13[-9] = puVar13[-0xd];
            puVar13[-8] = puVar13[-0xc];
            puVar7[-8] = puVar7[-0xc];
            puVar7[-7] = puVar7[-0xb];
            puVar7[-6] = puVar7[-10];
            puVar7 = puVar7 - 0x10;
            puVar8 = puVar8 - 0x10;
            puVar10 = puVar10 - 0x10;
            puVar13 = puVar13 - 0x10;
            puVar15 = puVar15 - 0x10;
          } while (local_20 != ((undefined4 *)GEN_TOP(0x0)));
        }
        if (0 < (int)param_1) {
          iVar14 = *((int *)GEN_TOP(((int)this + 0x324)));
          iVar12 = *((int *)GEN_TOP(((int)this + 800)));
          puVar7 = ((undefined4 *)GEN_TOP((iVar14 + (int)((int)(uintptr_t)param_1) * 0x10)));
          iVar11 = *((int *)GEN_TOP(((int)this + 0x328)));
          puVar8 = ((undefined4 *)GEN_TOP((iVar12 - 8 + (int)((int)(uintptr_t)param_1) * 0x10)));
          puVar10 = puVar7 - 2;
          puVar13 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x328))) - 8 + (int)((int)(uintptr_t)param_1) * 0x10)));
          do {
            *((undefined4 *)GEN_TOP(((int)puVar7 + (iVar12 - iVar14)))) = puVar8[-2];
            puVar8[3] = puVar8[-1];
            puVar8[4] = *puVar8;
            *puVar7 = puVar10[-2];
            puVar10[3] = puVar10[-1];
            puVar10[4] = *puVar10;
            *((undefined4 *)GEN_TOP(((int)puVar7 + (iVar11 - iVar14)))) = puVar13[-2];
            param_1 = ((undefined4 *)GEN_TOP(((int)param_1 - 1)));
            puVar13[3] = puVar13[-1];
            puVar13[4] = *puVar13;
            puVar8 = puVar8 - 4;
            puVar10 = puVar10 - 4;
            puVar13 = puVar13 - 4;
            puVar7 = puVar7 - 4;
          } while (0 < (int)param_1);
        }
        uVar4 = *((uint *)GEN_TOP(((int)this + 0x31c)));
        puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 800)));
        *puVar7 = *((undefined4 *)GEN_TOP((uVar4 + 0x104)));
        puVar7[1] = *((undefined4 *)GEN_TOP((uVar4 + 0x108)));
        puVar7[2] = *((undefined4 *)GEN_TOP((uVar4 + 0x10c)));
        puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x324)));
        puVar8 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x328)));
        *puVar7 = *((undefined4 *)GEN_TOP((uVar4 + 0x11c)));
        puVar7[1] = *((undefined4 *)GEN_TOP((uVar4 + 0x120)));
        puVar7[2] = *((undefined4 *)GEN_TOP((uVar4 + 0x124)));
        *puVar8 = *((undefined4 *)GEN_TOP((uVar4 + 0x110)));
        puVar8[1] = *((undefined4 *)GEN_TOP((uVar4 + 0x114)));
        puVar8[2] = *((undefined4 *)GEN_TOP((uVar4 + 0x118)));
        return uVar4;
      }
    }
  }
  else {
    puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x31c)));
    iVar12 = puVar7[0x57];
    if (iVar12 == 1) {
      iVar12 = 0;
      if (3 < iVar14) {
        iVar11 = (iVar14 - 4U >> 2) + 1;
        iVar12 = iVar11 * 4;
        puVar8 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 800))) + 8)));
        puVar10 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 800))) + 0x18)));
        do {
          puVar8[-2] = puVar7[0x41];
          iVar11 = iVar11 - 1;
          puVar8[-1] = puVar7[0x42];
          *puVar8 = puVar7[0x43];
          puVar8[2] = puVar7[0x41];
          puVar10[-1] = puVar7[0x42];
          *puVar10 = puVar7[0x43];
          puVar8[6] = puVar7[0x41];
          puVar10[3] = puVar7[0x42];
          puVar10[4] = puVar7[0x43];
          puVar8[10] = puVar7[0x41];
          puVar10[7] = puVar7[0x42];
          puVar10[8] = puVar7[0x43];
          puVar8 = puVar8 + 0x10;
          puVar10 = puVar10 + 0x10;
        } while (iVar11 != 0);
      }
      if (iVar12 < iVar14) {
        iVar14 = iVar14 - iVar12;
        puVar8 = ((undefined4 *)GEN_TOP((iVar12 * 0x10 + *((int *)GEN_TOP(((int)this + 800))))));
        do {
          iVar14 = iVar14 - 1;
          *puVar8 = puVar7[0x41];
          puVar8[1] = puVar7[0x42];
          puVar8[2] = puVar7[0x43];
          puVar8 = puVar8 + 4;
        } while (iVar14 != 0);
        return (uint)puVar7;
      }
    }
    else if (iVar12 == 2) {
      param_1 = ((undefined4 *)GEN_TOP(0x0));
      if (3 < iVar14) {
        iVar12 = *((int *)GEN_TOP(((int)this + 800)));
        iVar11 = *((int *)GEN_TOP(((int)this + 0x324)));
        local_1c = ((undefined4 *)GEN_TOP(((iVar14 - 4U >> 2) + 1)));
        param_1 = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)local_1c) * 4)));
        puVar8 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x324))) + 0x10)));
        puVar10 = ((undefined4 *)GEN_TOP((iVar12 + 8)));
        local_20 = ((undefined4 *)GEN_TOP((iVar12 + 0x18)));
        do {
          puVar10[-2] = puVar7[0x41];
          puVar10[-1] = puVar7[0x42];
          *puVar10 = puVar7[0x43];
          puVar8[-4] = puVar7[0x47];
          puVar8[-3] = puVar7[0x48];
          *((undefined4 *)GEN_TOP(((iVar11 - iVar12) - 0x40 + (int)(puVar10 + 0x10)))) = puVar7[0x49];
          local_1c = ((undefined4 *)GEN_TOP(((int)local_1c - 1)));
          puVar10[2] = puVar7[0x41];
          local_20[-1] = puVar7[0x42];
          *local_20 = puVar7[0x43];
          *puVar8 = puVar7[0x47];
          puVar8[1] = puVar7[0x48];
          puVar8[2] = puVar7[0x49];
          puVar10[6] = puVar7[0x41];
          local_20[3] = puVar7[0x42];
          local_20[4] = puVar7[0x43];
          puVar8[4] = puVar7[0x47];
          puVar8[5] = puVar7[0x48];
          puVar8[6] = puVar7[0x49];
          puVar10[10] = puVar7[0x41];
          local_20[7] = puVar7[0x42];
          local_20[8] = puVar7[0x43];
          puVar8[8] = puVar7[0x47];
          puVar8[9] = puVar7[0x48];
          puVar8[10] = puVar7[0x49];
          puVar8 = puVar8 + 0x10;
          puVar10 = puVar10 + 0x10;
          local_20 = local_20 + 0x10;
        } while (local_1c != ((undefined4 *)GEN_TOP(0x0)));
      }
      if ((int)param_1 < iVar14) {
        iVar12 = *((int *)GEN_TOP(((int)this + 800)));
        uVar4 = *((uint *)GEN_TOP(((int)this + 0x31c)));
        iVar11 = *((int *)GEN_TOP(((int)this + 0x324)));
        iVar14 = iVar14 - (int)param_1;
        puVar7 = ((undefined4 *)GEN_TOP((iVar11 + (int)((int)(uintptr_t)param_1) * 0x10)));
        puVar8 = ((undefined4 *)GEN_TOP((iVar12 + 8 + (int)((int)(uintptr_t)param_1) * 0x10)));
        do {
          *((undefined4 *)GEN_TOP(((int)puVar7 + (iVar12 - iVar11)))) = *((undefined4 *)GEN_TOP((uVar4 + 0x104)));
          iVar14 = iVar14 - 1;
          puVar8[-1] = *((undefined4 *)GEN_TOP((uVar4 + 0x108)));
          *puVar8 = *((undefined4 *)GEN_TOP((uVar4 + 0x10c)));
          *puVar7 = *((undefined4 *)GEN_TOP((uVar4 + 0x11c)));
          puVar7[1] = *((undefined4 *)GEN_TOP((uVar4 + 0x120)));
          puVar7[2] = *((undefined4 *)GEN_TOP((uVar4 + 0x124)));
          puVar7 = puVar7 + 4;
          puVar8 = puVar8 + 4;
        } while (iVar14 != 0);
        return uVar4;
      }
    }
    else if (iVar12 == 3) {
      local_10 = 0;
      if (3 < iVar14) {
        iVar12 = *((int *)GEN_TOP(((int)this + 0x324)));
        iVar11 = *((int *)GEN_TOP(((int)this + 800)));
        param_1 = ((undefined4 *)GEN_TOP((iVar12 + 0x20)));
        puVar8 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x328))) + 4)));
        local_1c = ((undefined4 *)GEN_TOP((iVar12 + 0x18)));
        iVar1 = *((int *)GEN_TOP(((int)this + 0x328)));
        puVar10 = ((undefined4 *)GEN_TOP((iVar11 + 8)));
        puVar13 = ((undefined4 *)GEN_TOP((iVar11 + 0x18)));
        iVar2 = *((int *)GEN_TOP(((int)this + 0x324)));
        iVar3 = *((int *)GEN_TOP(((int)this + 0x328)));
        local_20 = ((undefined4 *)GEN_TOP(((iVar14 - 4U >> 2) + 1)));
        local_10 = (int)((int)(uintptr_t)local_20) * 4;
        local_c = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x328))) + 0x18)));
        do {
          puVar10[-2] = puVar7[0x41];
          puVar10[-1] = puVar7[0x42];
          *puVar10 = puVar7[0x43];
          param_1[-8] = puVar7[0x47];
          *((undefined4 *)GEN_TOP(((int)puVar8 + (iVar2 - iVar3)))) = puVar7[0x48];
          *((undefined4 *)GEN_TOP(((int)puVar10 + (iVar12 - iVar11)))) = puVar7[0x49];
          puVar8[-1] = puVar7[0x44];
          *puVar8 = puVar7[0x45];
          *((undefined4 *)GEN_TOP(((int)puVar10 + (iVar1 - iVar11)))) = puVar7[0x46];
          puVar10[2] = puVar7[0x41];
          puVar13[-1] = puVar7[0x42];
          *puVar13 = puVar7[0x43];
          param_1[-4] = puVar7[0x47];
          local_1c[-1] = puVar7[0x48];
          *local_1c = puVar7[0x49];
          puVar8[3] = puVar7[0x44];
          local_c[-1] = puVar7[0x45];
          *local_c = puVar7[0x46];
          puVar10[6] = puVar7[0x41];
          puVar13[3] = puVar7[0x42];
          puVar13[4] = puVar7[0x43];
          *param_1 = puVar7[0x47];
          local_1c[3] = puVar7[0x48];
          local_1c[4] = puVar7[0x49];
          puVar8[7] = puVar7[0x44];
          local_c[3] = puVar7[0x45];
          local_c[4] = puVar7[0x46];
          puVar10[10] = puVar7[0x41];
          puVar13[7] = puVar7[0x42];
          puVar13[8] = puVar7[0x43];
          param_1[4] = puVar7[0x47];
          local_1c[7] = puVar7[0x48];
          local_1c[8] = puVar7[0x49];
          puVar8[0xb] = puVar7[0x44];
          local_c[7] = puVar7[0x45];
          param_1 = param_1 + 0x10;
          local_c[8] = puVar7[0x46];
          local_1c = local_1c + 0x10;
          puVar8 = puVar8 + 0x10;
          puVar10 = puVar10 + 0x10;
          puVar13 = puVar13 + 0x10;
          local_20 = ((undefined4 *)GEN_TOP(((int)local_20 - 1)));
          local_c = local_c + 0x10;
        } while (local_20 != ((undefined4 *)GEN_TOP(0x0)));
      }
      if (local_10 < iVar14) {
        iVar12 = *((int *)GEN_TOP(((int)this + 800)));
        iVar11 = *((int *)GEN_TOP(((int)this + 0x324)));
        uVar4 = *((uint *)GEN_TOP(((int)this + 0x31c)));
        iVar1 = *((int *)GEN_TOP(((int)this + 0x328)));
        param_1 = ((undefined4 *)GEN_TOP((iVar14 - local_10)));
        puVar7 = ((undefined4 *)GEN_TOP((iVar11 + local_10 * 0x10)));
        puVar8 = ((undefined4 *)GEN_TOP((iVar1 + 8 + local_10 * 0x10)));
        puVar10 = ((undefined4 *)GEN_TOP((iVar12 + 8 + local_10 * 0x10)));
        do {
          *((undefined4 *)GEN_TOP(((int)puVar7 + (iVar12 - iVar11)))) = *((undefined4 *)GEN_TOP((uVar4 + 0x104)));
          puVar10[-1] = *((undefined4 *)GEN_TOP((uVar4 + 0x108)));
          param_1 = ((undefined4 *)GEN_TOP(((int)param_1 - 1)));
          *puVar10 = *((undefined4 *)GEN_TOP((uVar4 + 0x10c)));
          *puVar7 = *((undefined4 *)GEN_TOP((uVar4 + 0x11c)));
          puVar7[1] = *((undefined4 *)GEN_TOP((uVar4 + 0x120)));
          puVar7[2] = *((undefined4 *)GEN_TOP((uVar4 + 0x124)));
          *((undefined4 *)GEN_TOP(((int)puVar7 + (iVar1 - iVar11)))) = *((undefined4 *)GEN_TOP((uVar4 + 0x110)));
          puVar8[-1] = *((undefined4 *)GEN_TOP((uVar4 + 0x114)));
          *puVar8 = *((undefined4 *)GEN_TOP((uVar4 + 0x118)));
          puVar7 = puVar7 + 4;
          puVar8 = puVar8 + 4;
          puVar10 = puVar10 + 4;
        } while (param_1 != ((undefined4 *)GEN_TOP(0x0)));
        return uVar4;
      }
    }
  }
  return (uint)puVar7;
}

/* ref: Apricot::Engine::Instance::QuadParticleInstance::vf26 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098fd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98fd90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0098cee0(this GEN_EDX_FWD,*(undefined4 *)(this + 0x2f0));
  uVar1 = F_0097ef70(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::DecalParticleInstance::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098fdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x98fdb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097ef70(this GEN_EDX_FWD);
  F_0097f2c0(this GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))(this GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x84))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::DecalParticleInstance::vf26 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098fde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98fde0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0098cfd0(this GEN_EDX_FWD,*(uint *)(this + 0x2f0));
  uVar1 = F_0097ef70(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::DecalRingParticleInstance::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098fe00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x98fe00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097ef70(this GEN_EDX_FWD);
  F_0097f2c0(this GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))(this GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x84))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::DecalRingParticleInstance::vf26 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098fe30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98fe30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0098cfd0(this GEN_EDX_FWD,*(uint *)(this + 0x2f0));
  uVar1 = F_0097ef70(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::DiscParticleInstance::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0098fe50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x98fe50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097ef70(this GEN_EDX_FWD);
  F_0097f2c0(this GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))(this GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x84))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::DiscParticleInstance::vf26 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0098fe80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x98fe80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  F_0098cfd0(this GEN_EDX_FWD,*(uint *)(this + 0x304));
  uVar1 = *(undefined4 *)(this + 0x1a8);
  uVar2 = *(undefined4 *)(this + 0x1ac);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xd4))))(*(int * PTR32 *)(this + 0x29c) GEN_EDX_ARG)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x38))))(piVar3 GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG,uVar1,uVar2,this + 0x2f9,*(int *)(this + 0x304) + 0x80,2);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xd4))))(*(int * PTR32 *)(this + 0x29c) GEN_EDX_ARG)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x3c))))(piVar3 GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG,uVar1,uVar2,this + 0x2fe,*(int *)(this + 0x304) + 0x90,2);
  uVar4 = F_0097ef70(this GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_0098ff40 */
GEN_OWN GEN_FRAME unsigned int F_0098ff40(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x98ff40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float * pfVar1;
  float * pfVar2;
  
  pfVar1 = param_3;
  if (!((float10)*param_3 < (float10)*param_2)) {
    pfVar1 = param_2;
  }
  *param_1 = *pfVar1;
  pfVar1 = param_3;
  if (!((float10)param_3[1] < (float10)param_2[1])) {
    pfVar1 = param_2;
  }
  pfVar2 = param_3 + 2;
  param_1[1] = pfVar1[1];
  if (!((float10)*pfVar2 < (float10)param_2[2])) {
    pfVar2 = param_2 + 2;
  }
  param_1[2] = *pfVar2;
  if ((float10)param_3[3] < (float10)param_2[3]) {
    param_1[3] = param_3[3];
    return 0;
  }
  param_1[3] = param_2[3];
  return 0;
}

/* ref: FUN_0098ffb0 */
GEN_OWN GEN_FRAME unsigned int F_0098ffb0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x98ffb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float * pfVar1;
  float * pfVar2;
  
  pfVar1 = param_3;
  if (!((float10)*param_2 < (float10)*param_3)) {
    pfVar1 = param_2;
  }
  *param_1 = *pfVar1;
  pfVar1 = param_3 + 1;
  if (!((float10)param_2[1] < (float10)*pfVar1)) {
    pfVar1 = param_2 + 1;
  }
  pfVar2 = param_3 + 2;
  param_1[1] = *pfVar1;
  if (!((float10)param_2[2] < (float10)*pfVar2)) {
    pfVar2 = param_2 + 2;
  }
  param_1[2] = *pfVar2;
  if ((float10)param_2[3] < (float10)param_3[3]) {
    param_1[3] = param_3[3];
    return 0;
  }
  param_1[3] = param_2[3];
  return 0;
}

/* ref: FUN_00990020 */
GEN_OWN GEN_FRAME unsigned int F_00990020(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x990020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float * pfVar1;
  
  pfVar1 = param_3;
  if (!((float10)*param_3 < (float10)*param_2)) {
    pfVar1 = param_2;
  }
  *param_1 = *pfVar1;
  pfVar1 = param_3 + 1;
  if (!((float10)*pfVar1 < (float10)param_2[1])) {
    pfVar1 = param_2 + 1;
  }
  param_1[1] = *pfVar1;
  if ((float10)param_3[2] < (float10)param_2[2]) {
    param_1[2] = param_3[2];
    return 0;
  }
  param_1[2] = param_2[2];
  return 0;
}

/* ref: FUN_00990080 */
GEN_OWN GEN_FRAME unsigned int F_00990080(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x990080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float * pfVar1;
  
  pfVar1 = param_3;
  if (!((float10)*param_2 < (float10)*param_3)) {
    pfVar1 = param_2;
  }
  *param_1 = *pfVar1;
  pfVar1 = param_3 + 1;
  if (!((float10)param_2[1] < (float10)*pfVar1)) {
    pfVar1 = param_2 + 1;
  }
  param_1[1] = *pfVar1;
  if ((float10)param_2[2] < (float10)param_3[2]) {
    param_1[2] = param_3[2];
    return 0;
  }
  param_1[2] = param_2[2];
  return 0;
}

/* ref: FUN_009900e0 */
GEN_OWN GEN_FRAME uint F_009900e0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9900e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  
  fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 8))) *
                                       (float10)*((float *)GEN_TOP((param_2 + 8))) +
                                      ((float10)*((float *)GEN_TOP(param_2)) * (float10)*((float *)GEN_TOP(param_2)) +
                                      (float10)*((float *)GEN_TOP((param_2 + 4))) *
                                      (float10)*((float *)GEN_TOP((param_2 + 4)))))))))));
  *param_1 = fVar1;
  param_1[1] = fVar1;
  param_1[2] = fVar1;
  return (uint)param_1;
}

/* ref: FUN_00990130 */
GEN_OWN GEN_FRAME uint F_00990130(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x990130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float10 fVar1;
  
  fVar1 = (float10)*((float *)GEN_TOP(param_2));
  fVar1 = GEN_X87((float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 8))) *
                                                                (float10)*((float *)GEN_TOP((param_2 + 8))) +
                                                               (fVar1 * fVar1 +
                                                               (float10)*((float *)GEN_TOP((param_2 + 4))) *
                                                               (float10)*((float *)GEN_TOP((param_2 + 4)))))))))))))));
  *param_1 = (float)(fVar1 * (float10)*((float *)GEN_TOP(param_2)));
  param_1[1] = ((float)GEN_TOF((fVar1 * (float10)*((float *)GEN_TOP((param_2 + 4))))));
  param_1[2] = ((float)GEN_TOF((fVar1 * (float10)*((float *)GEN_TOP((param_2 + 8))))));
  return (uint)param_1;
}

/* ref: FUN_009901a0 */
GEN_OWN GEN_FRAME unsigned int F_009901a0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9901a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = *((float *)GEN_TOP((param_2 + 4)));
  fVar2 = *((float *)GEN_TOP((param_3 + 4)));
  fVar3 = *((float *)GEN_TOP((param_2 + 8)));
  fVar4 = *((float *)GEN_TOP((param_3 + 8)));
  fVar5 = GEN_X87((float10)((float)GEN_TOF(((float10)fVar4 * (float10)fVar3 +
                          ((float10)*((float *)GEN_TOP(param_2)) * (float10)*((float *)GEN_TOP(param_3)) +
                          (float10)fVar1 * (float10)fVar2)))));
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1092098);
  *param_1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(param_3)) -
                    (float10)((float)GEN_TOF(((float10)(float)(fVar5 * (float10)*((float *)GEN_TOP(param_2))) * fVar6))))));
  param_1[1] = ((float)GEN_TOF(((float10)fVar2 -
                      (float10)((float)GEN_TOF(((float10)(float)(fVar5 * (float10)fVar1) * fVar6))))));
  param_1[2] = ((float)GEN_TOF(((float10)fVar4 -
                      (float10)((float)GEN_TOF((fVar6 * (float10)(float)((float10)fVar3 * fVar5)))))));
  return 0;
}

/* ref: FUN_00990270 */
GEN_OWN GEN_FRAME unsigned int F_00990270(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x990270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x132f428));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x132f42c));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x132f430));
  param_1[3] = GEN_FLT_TO(param_1[3], REFG(float, 0x132f434));
  param_1[4] = GEN_FLT_TO(param_1[4], REFG(float, 0x132f438));
  param_1[5] = GEN_FLT_TO(param_1[5], REFG(float, 0x132f43c));
  param_1[6] = GEN_FLT_TO(param_1[6], REFG(float, 0x132f440));
  param_1[7] = GEN_FLT_TO(param_1[7], REFG(float, 0x132f444));
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x132f448));
  param_1[9] = *param_2;
  param_1[10] = param_2[1];
  param_1[0xb] = param_2[2];
  return 0;
}

/* ref: FUN_00990300 */
GEN_OWN GEN_FRAME byte F_00990300(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x990300u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
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
  
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_3 + 4))) - (float10)*((float *)GEN_TOP((param_2 + 4))))));
  fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_3 + 8))) - (float10)*((float *)GEN_TOP((param_2 + 8))))));
  fVar7 = (float10)fVar1;
  fVar8 = GEN_X87((float10)(float)((float10)*((float *)GEN_TOP(param_3)) - (float10)*((float *)GEN_TOP(param_2))));
  fVar9 = (float10)fVar2;
  fVar7 = GEN_X87((float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF((fVar9 * fVar9 +
                                                               (fVar8 * fVar8 + fVar7 * fVar7))))))))))));
  fVar3 = ((float)GEN_TOF((fVar7 * (float10)(float)((float10)*((float *)GEN_TOP(param_3)) - (float10)*((float *)GEN_TOP(param_2))))))
  ;
  fVar1 = (float)((float10)fVar1 * fVar7);
  fVar2 = (float)(fVar7 * (float10)fVar2);
  fVar7 = (float10)*param_4;
  fVar8 = (float10)*param_4;
  fVar7 = GEN_X87((float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)param_4[2] *
                                                                (float10)param_4[2] +
                                                               (fVar7 * fVar7 +
                                                               (float10)param_4[1] *
                                                               (float10)param_4[1]))))))))))));
  fVar9 = (float10)fVar1;
  fVar10 = (float10)fVar3;
  fVar11 = (float10)fVar2;
  if (*(double *)&REFG(undefined, 0x10b3238) <
      (double)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((fVar9 * (float10)(float)((float10)param_4[1] * fVar7) +
                                          fVar10 * (float10)(float)(fVar7 * fVar8)) +
                                         fVar11 * (float10)(float)(fVar7 * (float10)param_4[2])))))))) {
    return 0;
  }
  fVar4 = (float)((float10)param_4[1] * fVar11 - (float10)param_4[2] * fVar9);
  fVar5 = (float)((float10)param_4[2] * fVar10 - fVar8 * fVar11);
  fVar6 = (float)(fVar8 * fVar9 - (float10)param_4[1] * fVar10);
  fVar7 = (float10)fVar5;
  fVar8 = (float10)fVar4;
  fVar9 = (float10)fVar6;
  fVar7 = GEN_X87((float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF((fVar9 * fVar9 +
                                                               (fVar8 * fVar8 + fVar7 * fVar7))))))))))));
  fVar4 = (float)(fVar7 * (float10)fVar4);
  fVar5 = (float)((float10)fVar5 * fVar7);
  fVar6 = (float)(fVar7 * (float10)fVar6);
  fVar7 = (float10)fVar6;
  fVar8 = (float10)fVar5;
  fVar9 = (float10)fVar4;
  *param_1 = fVar4;
  param_1[1] = fVar5;
  param_1[2] = fVar6;
  param_1[4] = (float)(fVar9 * (float10)fVar2 - (float10)fVar3 * fVar7);
  param_1[3] = (float)((float10)fVar1 * fVar7 - (float10)fVar2 * fVar8);
  param_1[5] = (float)(fVar8 * (float10)fVar3 - (float10)fVar1 * fVar9);
  param_1[6] = fVar3;
  param_1[7] = fVar1;
  param_1[8] = fVar2;
  param_1[9] = *((float *)GEN_TOP(param_2));
  param_1[10] = *((float *)GEN_TOP((param_2 + 4)));
  param_1[0xb] = *((float *)GEN_TOP((param_2 + 8)));
  return 1;
}

/* ref: FUN_00990560 */
GEN_OWN GEN_FRAME byte F_00990560(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x990560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
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
  double dVar26;
  float fVar27;
  uint uVar28;
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
  
  fVar27 = REFG(float, 0x1087f04);
  fVar7 = *((float *)GEN_TOP((param_2 + 0x28)));
  fVar8 = *((float *)GEN_TOP((param_2 + 0x2c)));
  fVar9 = *((float *)GEN_TOP((param_2 + 0x34)));
  fVar10 = *((float *)GEN_TOP((param_2 + 0x38)));
  fVar11 = *((float *)GEN_TOP((param_2 + 0x3c)));
  fVar1 = *((float *)GEN_TOP((param_2 + 0x10)));
  fVar2 = *((float *)GEN_TOP((param_2 + 0x18)));
  fVar3 = *((float *)GEN_TOP((param_2 + 0x1c)));
  fVar4 = *((float *)GEN_TOP((param_2 + 0x20)));
  fVar5 = *((float *)GEN_TOP((param_2 + 0x24)));
  fVar6 = *((float *)GEN_TOP((param_2 + 0x30)));
  fVar37 = GEN_X87((float10)fVar7 * (float10)fVar11 - (float10)fVar8 * (float10)fVar10);
  fVar40 = GEN_X87((float10)fVar5 * (float10)fVar11 - (float10)fVar9 * (float10)fVar8);
  fVar38 = GEN_X87((float10)fVar10 * (float10)fVar5 - (float10)fVar9 * (float10)fVar7);
  fVar29 = (float10)*((float *)GEN_TOP((param_2 + 0x14)));
  fVar30 = (float10)fVar2;
  fVar31 = (float10)*((float *)GEN_TOP((param_2 + 8)));
  fVar32 = (float10)*((float *)GEN_TOP((param_2 + 4)));
  fVar33 = (float10)*((float *)GEN_TOP((param_2 + 0xc)));
  dVar12 = GEN_X87((double)((float10)fVar11 * fVar30 - (float10)fVar10 * (float10)fVar3));
  dVar13 = GEN_X87((double)((float10)fVar11 * fVar29 - (float10)fVar9 * (float10)fVar3));
  dVar14 = GEN_X87((double)((float10)fVar10 * fVar29 - (float10)fVar9 * fVar30));
  dVar15 = GEN_X87((double)((float10)fVar8 * fVar29 - (float10)fVar5 * (float10)fVar3));
  dVar16 = GEN_X87((double)((float10)fVar8 * fVar30 - (float10)fVar7 * (float10)fVar3));
  dVar17 = GEN_X87((double)((float10)fVar7 * fVar29 - (float10)fVar5 * fVar30));
  dVar18 = GEN_X87((double)((float10)fVar11 * (float10)fVar4 - (float10)fVar6 * (float10)fVar8));
  fVar39 = GEN_X87((float10)fVar10 * (float10)fVar4 - (float10)fVar6 * (float10)fVar7);
  dVar19 = (double)fVar39;
  fVar34 = (float10)*((float *)GEN_TOP(param_2));
  dVar20 = GEN_X87((double)((float10)fVar11 * (float10)fVar1 - (float10)fVar6 * (float10)fVar3));
  dVar21 = GEN_X87((double)((float10)fVar10 * (float10)fVar1 - (float10)fVar6 * (float10)fVar2));
  dVar22 = GEN_X87((double)((float10)fVar8 * (float10)fVar1 - (float10)fVar4 * (float10)fVar3));
  dVar23 = GEN_X87((double)((float10)fVar7 * (float10)fVar1 - (float10)fVar4 * (float10)fVar2));
  dVar24 = GEN_X87((double)((float10)fVar9 * (float10)fVar4 - (float10)fVar6 * (float10)fVar5));
  dVar25 = GEN_X87((double)((float10)fVar9 * (float10)fVar1 - (float10)fVar6 * fVar29));
  dVar26 = GEN_X87((double)((float10)fVar5 * (float10)fVar1 - (float10)fVar4 * fVar29));
  fVar39 = GEN_X87((float10)((float)GEN_TOF(((fVar30 * (float10)dVar18 - (float10)fVar1 * (float10)(double)fVar37) -
                           (float10)fVar3 * fVar39))));
  fVar30 = GEN_X87((float10)((float)GEN_TOF(((float10)fVar3 * fVar38 + (fVar29 * fVar37 - fVar30 * fVar40)))));
  fVar35 = GEN_X87((float10)((float)GEN_TOF(((float10)fVar3 * (float10)dVar24 +
                           ((float10)fVar1 * (float10)(double)fVar40 - fVar29 * (float10)dVar18)))));
  fVar29 = GEN_X87((float10)((float)GEN_TOF(((fVar29 * (float10)dVar19 - (float10)fVar1 * (float10)(double)fVar38) -
                           (float10)fVar2 * (float10)dVar24))));
  fVar1 = ((float)GEN_TOF((((fVar39 * fVar32 + fVar30 * fVar34) + fVar35 * fVar31) + fVar29 * fVar33)));
  fVar36 = (float10)fVar1;
  if (((float10)*(double *)&REFG(undefined, 0x10de528) <= fVar36) && (fVar1 <= ((float)GEN_TOF((*(float (*)[1])REFP(0x10de524))[0])))) {
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 0.0;
    param_1[5] = fVar27;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[8] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = fVar27;
    param_1[0xb] = 0.0;
    uVar28 = (uint)gen_fl2bits((float)(REFG(float, 0x10920d0)));
    param_1[0xc] = gen_bits2f((uint)gen_fl2bits(fVar6) ^ REFG(uint, 0x10920d0));
    param_1[0xd] = gen_bits2f((uint)gen_fl2bits(fVar9) ^ uVar28);
    param_1[0xe] = gen_bits2f((uint)gen_fl2bits(fVar10) ^ uVar28);
    param_1[0xf] = fVar27;
    return 0;
  }
  fVar36 = GEN_X87((float10)(float)((float10)1 / fVar36));
  *param_1 = (float)(fVar36 * fVar30);
  param_1[1] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF(((fVar31 * fVar40 - fVar32 * fVar37) -
                                                fVar33 * fVar38))))));
  param_1[2] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF((fVar33 * (float10)dVar14 +
                                                (fVar32 * (float10)dVar12 - fVar31 * (float10)dVar13
                                                )))))));
  param_1[3] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF(((fVar31 * (float10)dVar15 -
                                                 fVar32 * (float10)dVar16) -
                                                fVar33 * (float10)dVar17))))));
  param_1[4] = (float)(fVar36 * fVar39);
  param_1[5] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF((fVar33 * (float10)dVar19 +
                                                (fVar34 * (float10)(double)fVar37 -
                                                fVar31 * (float10)dVar18)))))));
  param_1[6] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF(((fVar31 * (float10)dVar20 -
                                                 fVar34 * (float10)dVar12) -
                                                fVar33 * (float10)dVar21))))));
  param_1[7] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF((fVar33 * (float10)dVar23 +
                                                ((float10)dVar16 * fVar34 - fVar31 * (float10)dVar22
                                                )))))));
  param_1[8] = (float)(fVar36 * fVar35);
  param_1[9] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF(((fVar32 * (float10)dVar18 -
                                                 fVar34 * (float10)(double)fVar40) -
                                                fVar33 * (float10)dVar24))))));
  param_1[10] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF((fVar33 * (float10)dVar25 +
                                                 ((float10)dVar13 * fVar34 -
                                                 fVar32 * (float10)dVar20)))))));
  param_1[0xb] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF(((fVar32 * (float10)dVar22 -
                                                   fVar34 * (float10)dVar15) -
                                                  fVar33 * (float10)dVar26))))));
  param_1[0xc] = (float)(fVar36 * fVar29);
  param_1[0xd] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF(((float10)dVar24 * fVar31 +
                                                  (fVar34 * (float10)(double)fVar38 -
                                                  fVar32 * (float10)dVar19)))))));
  param_1[0xe] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF(((fVar32 * (float10)dVar21 -
                                                   fVar34 * (float10)dVar14) -
                                                  fVar31 * (float10)dVar25))))));
  param_1[0xf] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF((fVar31 * (float10)dVar26 +
                                                  ((float10)dVar17 * fVar34 -
                                                  fVar32 * (float10)dVar23)))))));
  return 1;
}

/* ref: FUN_00990ad0 */
GEN_OWN_GS GEN_FRAME uint F_00990ad0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x990ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  F_0042cc20(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG,param_1,REFG(undefined4, 0x108cc50));
  uVar5 = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x28)) = ((undefined1 *)(gen_frame + 0x2c));
  uVar4 = 0;
  puVar3 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined1 * PTR32 *)(gen_frame + 0x28));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 5;
  (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x18)) = 5000;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x10100;
  (*(undefined2 *)(gen_frame + 0x20)) = 0;
  (*(undefined1 *)(gen_frame + 0x22)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
  uVar2 = F_00513dc0(uVar2,puVar3,uVar4,uVar5);
  uVar2 = *((uint *)GEN_TOP((uVar2 + 0xa0)));
  piVar1 = ((int *)GEN_TOP((uVar2 + 4)));
  _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(1));
  F_0042c880(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00990b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00990b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x990b80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dee60));
  _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 4))))), (long)(0));
  _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 8))))), (long)(0));
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = param_2;
  return (uint)this;
}

/* ref: FUN_00990bc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00990bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x990bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x60))) != 0) {
    _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 8))))), (long)(1));
  }
  piVar2 = ((int *)GEN_TOP(((int)this + 8)));
  iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
  return (uint)(iVar1 == 1);
}

/* ref: FUN_00990c00 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00990c00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x990c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x40))) + 100)));
  if (iVar1 != 0) {
    piVar2 = ((int *)GEN_TOP((iVar1 + 0x8c)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
    return 7 < iVar1;
  }
  return 0;
}

/* ref: FUN_00990c20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00990c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x990c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = this;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  F_00982d80(this GEN_EDX_FWD,0);
  return (uint)this;
}

/* ref: FUN_00990c50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00990c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x990c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1;
  if ((param_1 < 0x158) &&
     (puVar1 = ((undefined4 *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(param_1)])), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *((uint *)GEN_TOP(((int)this + 0x44))) = param_1;
    *((undefined2 *)GEN_TOP(((int)this + 0x8e))) = (undefined2)param_3;
    *((undefined2 *)GEN_TOP(((int)this + 0x8c))) = (undefined2)param_2;
    uVar3 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1);
    uVar2 = (uint)uVar3;
    *((undefined8 *)GEN_TOP(((int)this + 0xd0))) = uVar3;
  }
  return uVar2;
}

/* ref: FUN_00990ca0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00990ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x990ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*((uint *)GEN_TOP(((int)this + 0x88))) < 0x10) && (param_1 < 0x158)) &&
     (puVar1 = ((undefined4 *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(param_1)])), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *((uint *)GEN_TOP(((int)this + *((uint *)GEN_TOP(((int)this + 0x88))) * 4 + 0x48))) = param_1;
    *((undefined2 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x88))) * 2 + 0x90))) = (undefined2)param_2;
    *((undefined2 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x88))) * 2 + 0xb0))) = (undefined2)param_3;
    uVar3 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1);
    iVar2 = *((int *)GEN_TOP(((int)this + 0x88)));
    *((int *)GEN_TOP(((int)this + iVar2 * 8 + 0xd8))) = (int)uVar3;
    *((int *)GEN_TOP(((int)this + iVar2 * 8 + 0xdc))) = (int)((ulonglong)uVar3 >> 0x20);
    *((int *)GEN_TOP(((int)this + 0x88))) = *((int *)GEN_TOP(((int)this + 0x88))) + 1;
  }
  return;
}

/* ref: Apricot::ApricotListenner::vf14 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00990d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3), GEN_P(float * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x990d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x70, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  
  fVar2 = *param_1;
  fVar1 = param_1[2];
  (*(float *)(gen_frame + 0x40)) = fVar2;
  (*(float *)(gen_frame + 0x48)) = fVar1;
  fVar3 = param_1[1];
  (*(float *)(gen_frame + 0x44)) = fVar3;
  fVar4 = *param_2;
  (*(float *)(gen_frame + 0x30)) = fVar4;
  fVar5 = param_2[1];
  (*(float *)(gen_frame + 0x34)) = fVar5;
  fVar6 = param_2[2];
  (*(float *)(gen_frame + 0x38)) = fVar6;
  fVar2 = (float)((float10)fVar4 - (float10)fVar2);
  (*(float *)(gen_frame + 0x20)) = fVar2;
  fVar3 = (float)((float10)fVar5 - (float10)fVar3);
  (*(float *)(gen_frame + 0x24)) = fVar3;
  fVar1 = (float)((float10)fVar6 - (float10)fVar1);
  (*(float *)(gen_frame + 0x28)) = fVar1;
  (*(float *)(gen_frame + 0x30)) = fVar2;
  (*(float *)(gen_frame + 0x34)) = fVar3;
  (*(float *)(gen_frame + 0x38)) = fVar1;
  fVar1 = ((float)GEN_TOF((((float10)fVar2 * (float10)fVar2 + (float10)fVar3 * (float10)fVar3) +
                 (float10)fVar1 * (float10)fVar1)));
  (*(float *)(gen_frame + 0x5c)) = fVar1;
  fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar1))));
  (*(float *)(gen_frame + 0x5c)) = fVar1;
  if ((float10)REFG(float, 0x10947f8) < (float10)fVar1) {
    F_005fe2e0(&(*(float *)(gen_frame + 0x20)),(uint)&(*(float *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x40));
    (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x44));
    (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x48));
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x20));
    (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x24));
    (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x28));
    bVar7 = F_00a1c690(&(*(float *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x5c)),&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x30)));
    if (bVar7 != 0) {
      *param_3 = (*(float *)(gen_frame + 0x20));
      param_3[1] = (*(float *)(gen_frame + 0x24));
      param_3[2] = (*(float *)(gen_frame + 0x28));
      *param_4 = (*(float *)(gen_frame + 0x30));
      param_4[1] = (*(float *)(gen_frame + 0x34));
      param_4[2] = (*(float *)(gen_frame + 0x38));
      return 1;
    }
  }
  return 0;
}

/* ref: Apricot::ApricotListenner::vf15 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00990e90(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x990e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  F_004aa490(REFG(void * PTR32, 0x1371290) GEN_EDX_FWD,param_3,param_2);
  *param_3 = ((float)GEN_TOF(SQRT((float10)*param_3)));
  param_3[1] = ((float)GEN_TOF(SQRT((float10)param_3[1])));
  param_3[2] = ((float)GEN_TOF(SQRT((float10)param_3[2])));
  F_004afaf0(REFG(void * PTR32, 0x1371290) GEN_EDX_ARG,param_4,param_2);
  *param_4 = ((float)GEN_TOF(SQRT((float10)*param_4)));
  param_4[1] = ((float)GEN_TOF(SQRT((float10)param_4[1])));
  param_4[2] = ((float)GEN_TOF(SQRT((float10)param_4[2])));
  return 0;
}

/* ref: Apricot::ApricotListenner::vf16 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00990f20(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x990f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  F_004afca0(REFG(void * PTR32, 0x1371290) GEN_EDX_FWD,param_4,param_2);
  *param_3 = ((float)GEN_TOF(SQRT((float10)*param_4)));
  param_3[1] = ((float)GEN_TOF(SQRT((float10)param_4[1])));
  param_3[2] = ((float)GEN_TOF(SQRT((float10)param_4[2])));
  F_004aa540(REFG(void * PTR32, 0x1371290) GEN_EDX_ARG,param_4,param_2);
  *param_4 = ((float)GEN_TOF(SQRT((float10)*param_4)));
  param_4[1] = ((float)GEN_TOF(SQRT((float10)param_4[1])));
  param_4[2] = ((float)GEN_TOF(SQRT((float10)param_4[2])));
  return 0;
}

/* ref: Apricot::ApricotListenner::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00990fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(float * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x990fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x40, 0);
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  F_004aa490(REFG(void * PTR32, 0x1371290) GEN_EDX_FWD,param_2,param_1);
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(SQRT((float10)*param_2)));
  *param_2 = ((float)GEN_TOF(SQRT((float10)*param_2)));
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(SQRT((float10)param_2[1])));
  param_2[1] = ((float)GEN_TOF(SQRT((float10)param_2[1])));
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(SQRT((float10)param_2[2])));
  param_2[2] = ((float)GEN_TOF(SQRT((float10)param_2[2])));
  iVar1 = *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1371290) + 0x840)));
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(SQRT((float10)*((float *)GEN_TOP((iVar1 + 0x14))))));
  *param_4 = ((float)GEN_TOF(SQRT((float10)*((float *)GEN_TOP((iVar1 + 0x14))))));
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(SQRT((float10)*((float *)GEN_TOP((iVar1 + 0x18))))));
  param_4[1] = ((float)GEN_TOF(SQRT((float10)*((float *)GEN_TOP((iVar1 + 0x18))))));
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(SQRT((float10)*((float *)GEN_TOP((iVar1 + 0x1c))))));
  param_4[2] = ((float)GEN_TOF(SQRT((float10)*((float *)GEN_TOP((iVar1 + 0x1c))))));
  iVar2 = *((int *)GEN_TOP((iVar1 + 0x10)));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  puVar3 = ((undefined4 *)GEN_TOP(F_004f4130(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),iVar2 + 0x10)));
  *param_3 = *puVar3;
  iVar2 = *((int *)GEN_TOP((iVar1 + 0x10)));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  uVar4 = F_004f4130(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),iVar2 + 0x10);
  param_3[1] = *((undefined4 *)GEN_TOP((uVar4 + 4)));
  iVar1 = *((int *)GEN_TOP((iVar1 + 0x10)));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  uVar4 = F_004f4130(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),iVar1 + 0x10);
  param_3[2] = *((undefined4 *)GEN_TOP((uVar4 + 8)));
  return uVar4;
}

/* ref: Apricot::ApricotListenner::vf36 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00991110(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x991110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0xf0))) - *((int *)GEN_TOP((in_ecx + 0xec))) >> 2;
}

/* ref: Apricot::ApricotListenner::vf37 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00991120(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x991120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xec))) + param_2 * 4)));
  if (iVar1 != 0) {
    return iVar1 + 0x90;
  }
  return 0;
}

/* ref: Apricot::ApricotListenner::vf18 */
GEN_OWN GEN_NOFRAME uint F_00991150(void)
{
  GEN_ENTER(0x991150u, 0u, 0u, 0u, 0u);
  return *((int *)GEN_TOP((REFG(int, 0x1371280) + 300))) - *((int *)GEN_TOP((REFG(int, 0x1371280) + 0x128))) >> 2;
}

/* ref: Apricot::ApricotListenner::vf19 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00991170(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x991170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  F_00624af0(REFG(void * PTR32, 0x1371280) GEN_EDX_FWD,param_2,param_3,param_4,param_5,param_6);
  *param_4 = ((float)GEN_TOF(SQRT((float10)*param_4)));
  param_4[1] = ((float)GEN_TOF(SQRT((float10)param_4[1])));
  param_4[2] = ((float)GEN_TOF(SQRT((float10)param_4[2])));
  return 0;
}

/* ref: Apricot::ApricotListenner::vf20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009911d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9911d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  *((undefined1 *)GEN_TOP((in_ecx + 0xa0))) = 0;
  uVar1 = REFG(undefined4, 0x137128c);
  *((undefined4 *)GEN_TOP((REFG(undefined4, 0x137128c) + 0x1684))) = 0;
  *((undefined4 *)GEN_TOP((REFG(undefined4, 0x137128c) + 0x168c))) = 0;
  return uVar1;
}

/* ref: Apricot::ApricotListenner::vf21 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00991200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x991200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined * pAVar7;
  uint uVar8;
  
  uVar8 = REFG(undefined4, 0x1371278);
  if (*((char *)GEN_TOP((REFG(undefined4, 0x1371278) + 0x1c))) != '\0') {
    if (this[0xa0] == (undefined1)0x0) {
      uVar8 = F_0067a900(REFG(undefined4, 0x137128c) GEN_EDX_FWD,9,0);
      return uVar8;
    }
    fVar4 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((REFG(undefined4, 0x137128c) + 0x168c))) *
                   (float10)*((float *)GEN_TOP((REFG(undefined4, 0x137128c) + 0x1684))))));
    (*(float *)(gen_frame + 0x4)) = fVar4;
    fVar5 = *(float *)(this + 0xa8);
    fVar6 = *(float *)(this + 0xa4);
    (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar5 * (float10)fVar6);
    if ((float10)fVar4 <= (float10)(float)((float10)fVar5 * (float10)fVar6)) {
      F_0067a900(REFG(undefined4, 0x137128c) GEN_EDX_ARG,9,1);
      *((undefined4 *)GEN_TOP((REFG(undefined4, 0x137128c) + 0x167c))) = 0;
      *((undefined4 *)GEN_TOP((REFG(undefined4, 0x137128c) + 0x1684))) = *(undefined4 *)(this + 0xa4);
      (*(float *)(gen_frame + 0x4)) = 0.0;
      fVar4 = *(float *)(this + 0xa8);
      (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
      pAVar7 = this + 0xa8;
      if (!((float10)0 < (float10)fVar4)) {
        pAVar7 = (undefined *)&(*(float *)(gen_frame + 0x4));
      }
      if ((GEN_ISNAN(REFG(float, 0x1087f04)) || GEN_ISNAN(*(float *)pAVar7)) ||
          (REFG(float, 0x1087f04) < *(float *)pAVar7 || REFG(uint, 0x1087f04) == *(float *)pAVar7)) {
        pAVar7 = (undefined *)&(*(float *)(gen_frame + 0x0));
      }
      *((float *)GEN_TOP((REFG(undefined4, 0x137128c) + 0x168c))) = *(float *)pAVar7;
      *((undefined4 *)GEN_TOP((REFG(undefined4, 0x137128c) + 0x1690))) = *(undefined4 *)(this + 0xac);
      uVar1 = *(undefined4 *)(this + 0xb4);
      *((undefined4 *)GEN_TOP((REFG(undefined4, 0x137128c) + 0x1694))) = *(undefined4 *)(this + 0xb0);
      (*(float *)(gen_frame + 0x0)) = gen_bits2f(uVar1);
      *((undefined4 *)GEN_TOP((REFG(undefined4, 0x137128c) + 0x1698))) = uVar1;
      uVar8 = REFG(undefined4, 0x137128c);
      uVar1 = *(undefined4 *)(this + 0xc4);
      uVar2 = *(undefined4 *)(this + 200);
      uVar3 = *(undefined4 *)(this + 0xcc);
      *((undefined4 *)GEN_TOP((REFG(undefined4, 0x137128c) + 0x169c))) = *(undefined4 *)(this + 0xc0);
      *((undefined4 *)GEN_TOP((uVar8 + 0x16a0))) = uVar1;
      (*(float *)(gen_frame + 0x0)) = gen_bits2f(uVar3);
      *((undefined4 *)GEN_TOP((uVar8 + 0x16a4))) = uVar2;
      *((undefined4 *)GEN_TOP((uVar8 + 0x16a8))) = uVar3;
    }
  }
  return uVar8;
}

/* ref: Apricot::ApricotDeviceListenner::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00991400(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x991400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = ((int *)GEN_TOP(F_004dcc90(param_2,(-(uint)(param_3 != '\0') & 0xfffffffd) + 4,10)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  if (REFG(undefined * PTR32, 0x14a0a14) != ((code *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x10,4,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10de600));
      puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de730));
      puVar2[2] = piVar1;
      puVar2[3] = 1;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10dee84));
      puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x10dee7c));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      return (uint)puVar2;
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  return 0;
}

/* ref: Apricot::ApricotDeviceListenner::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009914b0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9914b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = ((int *)GEN_TOP(F_004dccf0(param_2,1,(-(uint)(param_3 != '\0') & 0xfffffffd) + 4,10)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  if (REFG(undefined * PTR32, 0x14a0a14) != ((code *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x10,4,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10de610));
      puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de738));
      puVar2[2] = piVar1;
      puVar2[3] = 1;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10dee9c));
      puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x10dee94));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      return (uint)puVar2;
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  return 0;
}

/* ref: Apricot::ApricotDeviceListenner::vf6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00991560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x991560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00b4ec10(param_1)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  if (REFG(undefined * PTR32, 0x14a0a14) != ((code *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x10,4,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10de620));
      puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
      puVar2[2] = piVar1;
      puVar2[3] = 1;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10deeb4));
      puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x10deeac));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      return (uint)puVar2;
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  return 0;
}

/* ref: Apricot::ApricotDeviceListenner::vf7 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00991600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x991600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    if (REFG(undefined * PTR32, 0x14a0a14) != ((code *)GEN_TOP(0x0))) {
      pvVar1 = ((undefined *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x10,4,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
      if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
        uVar2 = F_009e1ac0(pvVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((REFG(int, 0x1371288) + 0x38))));
        return uVar2;
      }
    }
  }
  else if ((param_1 == 1) && (REFG(undefined * PTR32, 0x14a0a14) != ((code *)GEN_TOP(0x0)))) {
    pvVar1 = ((undefined *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x10,4,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_009e1ac0(pvVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((REFG(int, 0x1371288) + 0x3c))));
      return uVar2;
    }
  }
  return 0;
}

/* ref: Apricot::ApricotDeviceListenner::vf8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00991690(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x991690u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  int iVar1;
  uint uVar2;
  
  if (param_2 == '\0') {
    iVar1 = 7;
  }
  else {
    iVar1 = (param_4 != '\0') + 3;
  }
  uVar2 = (uint)(param_2 != '\0') | ((uint)(param_3 != '\0') | iVar1 * 2) * 2;
  *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8))) + 0x50))) =
       uVar2;
  return uVar2;
}

/* ref: Apricot::ApricotDeviceListenner::vf11 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009916f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9916f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = false;
  uVar3 = REFG(undefined4, 0x1302354);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar3 = REFG(undefined4, 0x1302354) & 0xfffff541 | 0x541;
    break;
  case 1: ;
    uVar3 = REFG(undefined4, 0x1302354) & 0xfffff201 | 0x201;
    break;
  case 2: ;
    uVar3 = REFG(undefined4, 0x1302354) & 0xfffff141 | 0x141;
    goto switchD_00991702_default;
  case 3: ;
    uVar3 = REFG(undefined4, 0x1302354) & 0xfffff145 | 0x145;
    break;
  case 4: ;
    uVar3 = REFG(undefined4, 0x1302354) & 0xfffff311 | 0x311;
    goto switchD_00991702_default;
  case 5: ;
    uVar3 = REFG(undefined4, 0x1302354) & 0xfffff091 | 0x91;
    break;
  case 6: ;
    uVar3 = REFG(undefined4, 0x1302354) & 0xfffff117 | 0x117;
    break;
  case 7: ;
    uVar3 = REFG(undefined4, 0x1302354) & 0xfffff119 | 0x119;
    break;
  case 8: ;
    uVar3 = REFG(undefined4, 0x1302354) & 0xfffff540 | 0x540;
    break;
  default: ;
    goto switchD_00991702_default;
  }
  bVar2 = true;
switchD_00991702_default: ;
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
  if (((byte)(*((uint *)GEN_TOP((iVar1 + 8))) >> 0x13) & 0xf) < 9) {
    if (bVar2) {
      *((uint *)GEN_TOP((iVar1 + 0x38))) = uVar3 & 0x7800fff;
      return uVar3 & 0x7800fff;
    }
  }
  else if (bVar2) {
    uVar3 = uVar3 & 0x7a88fff | 0x288000;
    *((uint *)GEN_TOP((iVar1 + 0x38))) = uVar3;
    return uVar3;
  }
  uVar3 = uVar3 & 0x7880fff | 0x80000;
  *((uint *)GEN_TOP((iVar1 + 0x38))) = uVar3;
  return uVar3;
}

/* ref: Apricot::ApricotDeviceListenner::vf13 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00991810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x991810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  if ((param_2 != 0) && (*((int *)GEN_TOP((param_2 + 8))) != 0)) {
    iVar1 = *((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4)));
    *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x1a8))) + 0x2ac + *(int *)(this + param_1 * 4 + 0x210) * 8))) =
         *(uint *)(this + param_1 * 4 + 0x240) & 0xfffffff;
    uVar2 = *(uint *)(this + param_1 * 4 + 0x210);
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x1a8))) + 0x2a8 + uVar2 * 8))) = *((undefined4 *)GEN_TOP((param_2 + 8)));
    return uVar2;
  }
  iVar1 = *((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4)));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x1a8))) + 0x2ac + *(int *)(this + param_1 * 4 + 0x210) * 8))) = 0;
  uVar2 = *(uint *)(this + param_1 * 4 + 0x210);
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x1a8))) + 0x2a8 + uVar2 * 8))) = *(undefined4 *)(this + 0xc);
  return uVar2;
}

/* ref: Apricot::ApricotDeviceListenner::vf14 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009918d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9918d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4)));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x1a8))) + 0x2ac + *(int *)(this + param_1 * 4 + 0x210) * 8))) = 0x2a
  ;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x1a8))) + 0x2a8 + *(int *)(this + param_1 * 4 + 0x210) * 8))) =
       *((undefined4 *)GEN_TOP((REFG(int, 0x1371288) + 0x14)));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x1a8))) + 0x2ac + *(int *)(this + param_1 * 4 + 0x214) * 8))) = 0x2a
  ;
  uVar2 = *(uint *)(this + param_1 * 4 + 0x214);
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x1a8))) + 0x2a8 + uVar2 * 8))) =
       *((undefined4 *)GEN_TOP((REFG(int, 0x1371288) + 0x18)));
  return uVar2;
}

/* ref: Apricot::ApricotDeviceListenner::vf15 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00991970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x991970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4)));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x1a8))) + 0x2ac + *(int *)(this + param_1 * 4 + 0x210) * 8))) = 0x2a
  ;
  uVar2 = *(uint *)(this + param_1 * 4 + 0x210);
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x1a8))) + 0x2a8 + uVar2 * 8))) =
       *((undefined4 *)GEN_TOP((REFG(int, 0x1371288) + 0x20)));
  return uVar2;
}

/* ref: Apricot::ApricotDeviceListenner::vf16 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009919e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9919e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined * puVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  
  iVar3 = (*(int *)&gen_args[0]);
  *(uint *)(this + (*(int *)&gen_args[0]) * 4 + 0x240) =
       *(uint *)(this + (*(int *)&gen_args[0]) * 4 + 0x240) ^
       (*(int *)(&REFG(undefined, 0x10defc8) + (*(int *)&gen_args[1]) * 4) << 6 ^ *(uint *)(this + (*(int *)&gen_args[0]) * 4 + 0x240)) & 0x3c0;
  *(uint *)(this + (*(int *)&gen_args[0]) * 4 + 0x240) =
       (*(int *)(&REFG(undefined, 0x10defb4) + (*(int *)&gen_args[1]) * 4) << 0x18 ^ *(uint *)(this + (*(int *)&gen_args[0]) * 4 + 0x240)) &
       0x7000000 ^ *(uint *)(this + (*(int *)&gen_args[0]) * 4 + 0x240);
  puVar1 = (undefined *)(uintptr_t)gen_fl2bits((float)((&REFG(float, 0x10defa0))[(int)((*(int *)&gen_args[1]))]));
  (*(int *)&gen_args[0]) = (int)((double)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar1))) * *(double *)&REFG(undefined, 0x10968a0));
  (*(int *)&gen_args[1]) = 0x1ff;
  piVar4 = &(*(int *)&gen_args[0]);
  if (0x1fe < (int)((double)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar1))) * *(double *)&REFG(undefined, 0x10968a0))) {
    piVar4 = &(*(int *)&gen_args[1]);
  }
  iVar2 = *piVar4;
  (*(int *)&gen_args[0]) = iVar2;
  (*(int *)&gen_args[1]) = 0xfffffe00;
  piVar4 = &(*(int *)&gen_args[1]);
  if (-0x201 < iVar2) {
    piVar4 = &(*(int *)&gen_args[0]);
  }
  uVar5 = (*piVar4 << 10 ^ *(uint *)(this + iVar3 * 4 + 0x240)) & 0xffc00;
  *(uint *)(this + iVar3 * 4 + 0x240) = *(uint *)(this + iVar3 * 4 + 0x240) ^ uVar5;
  return uVar5;
}

/* ref: Apricot::ApricotDeviceListenner::vf18 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00991a90(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x991a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
  *((undefined4 *)GEN_TOP((uVar2 + 0x68 + param_2 * 8))) = *((undefined4 *)GEN_TOP((param_3 + 8)));
  puVar1 = ((uint *)GEN_TOP((uVar2 + 0x6c + param_2 * 8)));
  *puVar1 = *puVar1 ^ (param_4 << 8 ^ *((uint *)GEN_TOP((uVar2 + 0x6c + param_2 * 8)))) & 0x7fffff00;
  *((undefined1 *)GEN_TOP((uVar2 + 0x6c + param_2 * 8))) = param_5;
  puVar1 = ((uint *)GEN_TOP((uVar2 + 0x6c + param_2 * 8)));
  *puVar1 = *puVar1 & 0x7fffffff;
  return uVar2;
}

/* ref: Apricot::ApricotDeviceListenner::vf19 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00991ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x991ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
  *((undefined4 *)GEN_TOP((uVar1 + 0x48))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  return uVar1;
}

/* ref: Apricot::ApricotDeviceListenner::vf20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00991b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x991b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
  *((undefined4 *)GEN_TOP((uVar1 + 0x4c))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  return uVar1;
}

/* ref: Apricot::ApricotDeviceListenner::vf21 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00991b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x991b40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_004d9920(*(undefined4 *)(this + param_1 * 8 + 0x14) GEN_EDX_FWD,0,param_3 << 4,2);
  uVar3 = 0;
  if (uVar2 != 0) {
    F_00c46aa0(uVar2,param_2,param_3 << 4);
    iVar1 = REFG(int, 0x15d6870);
    *((undefined4 *)GEN_TOP((*(int *)(this + param_1 * 8 + 0x14) + 0x24))) = 0;
    uVar3 = *(uint *)(this + param_1 * 8 + 0x10);
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + iVar1 * 4))) + 0x1a8))) + 0xa8 + uVar3 * 4))) =
         *(undefined4 *)(this + param_1 * 8 + 0x14);
  }
  return uVar3;
}

/* ref: Apricot::ApricotDeviceListenner::vf22 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00991bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x991bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
  *((undefined4 *)GEN_TOP((uVar1 + 0x40))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP((uVar1 + 0x60))) = 0;
  return uVar1;
}

/* ref: Apricot::ApricotDeviceListenner::vf23 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00991be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x991be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_004d9920(*(undefined4 *)(this + param_1 * 8 + 0x94) GEN_EDX_FWD,0,param_3 << 4,2);
  uVar3 = 0;
  if (uVar2 != 0) {
    F_00c46aa0(uVar2,param_2,param_3 << 4);
    iVar1 = REFG(int, 0x15d6870);
    *((undefined4 *)GEN_TOP((*(int *)(this + param_1 * 8 + 0x94) + 0x24))) = 0;
    uVar3 = *(uint *)(this + param_1 * 8 + 0x90);
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + iVar1 * 4))) + 0x1a8))) + 0xa8 + uVar3 * 4))) =
         *(undefined4 *)(this + param_1 * 8 + 0x94);
  }
  return uVar3;
}

/* ref: Apricot::ApricotDeviceListenner::vf24 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00991c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x991c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
  *((undefined4 *)GEN_TOP((uVar1 + 0x44))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP((uVar1 + 0x60))) = 0;
  return uVar1;
}

/* ref: Apricot::ApricotDeviceListenner::vf28 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00991c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x991c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = F_004d68c0(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD,param_2,param_3,2);
  return uVar1;
}

/* ref: Apricot::ApricotDeviceListenner::vf30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00991cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x991cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_004d6970(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: Apricot::ApricotDeviceListenner::vf27 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00991ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x991ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = F_004d6a30(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD,param_2,param_3,2);
  return uVar1;
}

/* ref: Apricot::ApricotDeviceListenner::vf29 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00991d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x991d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_004d6ae0(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: FUN_00991d30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00991d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x991d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10de6fc));
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x10)));
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  F_00982d80(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,0);
  return (uint)this;
}

/* ref: FUN_00991d60 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00991d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x991d60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x1b0, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  int * piVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  undefined * this_00;
  float * pfVar8;
  undefined4 * puVar9;
  int iVar10;
  undefined4 * puVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  longlong lVar15;
  undefined1 uVar16;
  
  (*(uint *)(gen_frame + 0x19c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1a0);
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x54)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = param_1;
  (*(int * PTR32 *)(gen_frame + 0x8c)) = piVar4;
  if (*((int *)GEN_TOP(((int)this + 0x50))) == 0) {
    if (piVar4 < ((int *)GEN_TOP(0x158))) {
      puVar9 = ((undefined4 *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)((int)piVar4)]));
      (*(int * PTR32 *)(gen_frame + 0x8c)) = puVar9;
      if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
        (*(float *)(gen_frame + 0x58)) = *((float *)GEN_TOP(((int)this + 0xe0)));
        (*(float *)(gen_frame + 0x5c)) = gen_bits2f(*((undefined4 *)GEN_TOP(((int)this + 0xe4))));
        lVar15 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar9)))(puVar9);
        if (lVar15 == (longlong)CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x5c))),(uint)gen_fl2bits((*(float *)(gen_frame + 0x58)))))
        {
          if ((*(int * PTR32 *)(gen_frame + 0x8c))[0x3b] == 0) {
            pfVar8 = ((float *)GEN_TOP(F_00a5feb0((*(int * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_FWD)));
          }
          else {
            pfVar8 = ((float *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x8c))[0x3b] + 0x30)));
          }
          (*(float *)(gen_frame + 0x70)) = *pfVar8;
          (*(float *)(gen_frame + 0x74)) = pfVar8[1];
          (*(float *)(gen_frame + 0x78)) = pfVar8[2];
          if (*((int *)GEN_TOP(((int)param_2 + 0xec))) == 0) {
            pfVar8 = ((float *)GEN_TOP(F_00a5feb0(param_2 GEN_EDX_ARG)));
          }
          else {
            pfVar8 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)param_2 + 0xec))) + 0x30)));
          }
          (*(float *)(gen_frame + 0x40)) = *pfVar8;
          (*(float *)(gen_frame + 0x44)) = pfVar8[1];
          (*(float *)(gen_frame + 0x48)) = pfVar8[2];
          fVar1 = (float)((float10)(*(float *)(gen_frame + 0x70)) - (float10)*pfVar8);
          (*(float *)(gen_frame + 0x50)) = fVar1;
          fVar2 = (float)((float10)(*(float *)(gen_frame + 0x74)) - (float10)pfVar8[1]);
          (*(float *)(gen_frame + 0x54)) = fVar2;
          fVar3 = (float)((float10)(*(float *)(gen_frame + 0x78)) - (float10)pfVar8[2]);
          (*(float *)(gen_frame + 0x58)) = fVar3;
          (*(float *)(gen_frame + 0x70)) = fVar1;
          (*(float *)(gen_frame + 0x74)) = fVar2;
          (*(float *)(gen_frame + 0x78)) = fVar3;
          fVar1 = ((float)GEN_TOF((((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2) +
                         (float10)fVar3 * (float10)fVar3)));
          (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar1)));
          fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar1))));
          (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar1)));
          if (*(double *)&REFG(undefined, 0x10a1b58) < (double)fVar1) {
            uVar16 = 1;
            pfVar8 = &(*(float *)(gen_frame + 0x70));
            uVar7 = F_00a5feb0(param_2 GEN_EDX_ARG);
            uVar7 = F_004bd670(((undefined1 *)(gen_frame + 0x0)),uVar7,pfVar8);
            F_00a60ca0(param_2 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x150)),uVar7,uVar16);
            bVar6 = F_009837c0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x3c)),((undefined4 *)(gen_frame + 0x150)));
            return bVar6;
          }
        }
      }
    }
  }
  else if ((*((int *)GEN_TOP(((int)this + 0x50))) == 1) && (piVar4 != ((int *)GEN_TOP(0x0)))) {
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x4c))))(piVar4 GEN_EDX_ARG);
    if (uVar7 == 0) {
      pfVar8 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8c)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_ARG)));
    }
    else {
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8c)) + 0x4c))))((*(int * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_ARG)));
      if (*((int *)GEN_TOP(((int)this_00 + 0xec))) == 0) {
        pfVar8 = ((float *)GEN_TOP(F_00a5feb0(this_00 GEN_EDX_ARG)));
      }
      else {
        pfVar8 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 0xec))) + 0x30)));
      }
    }
    (*(float *)(gen_frame + 0x40)) = *pfVar8;
    (*(float *)(gen_frame + 0x44)) = pfVar8[1];
    (*(float *)(gen_frame + 0x48)) = pfVar8[2];
    if (*((int *)GEN_TOP(((int)param_2 + 0xec))) == 0) {
      pfVar8 = ((float *)GEN_TOP(F_00a5feb0(param_2 GEN_EDX_ARG)));
    }
    else {
      pfVar8 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)param_2 + 0xec))) + 0x30)));
    }
    fVar1 = *pfVar8;
    (*(float *)(gen_frame + 0x70)) = fVar1;
    (*(float *)(gen_frame + 0x74)) = pfVar8[1];
    (*(float *)(gen_frame + 0x78)) = pfVar8[2];
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0x40)) - (float10)fVar1);
    (*(float *)(gen_frame + 0x50)) = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x44)) - (float10)pfVar8[1]);
    (*(float *)(gen_frame + 0x54)) = fVar2;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0x48)) - (float10)pfVar8[2]);
    (*(float *)(gen_frame + 0x58)) = fVar3;
    fVar12 = (float10)fVar2;
    fVar13 = (float10)fVar1;
    fVar14 = (float10)fVar3;
    fVar1 = ((float)GEN_TOF((fVar14 * fVar14 + (fVar13 * fVar13 + fVar12 * fVar12))));
    (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar1)));
    fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar1))));
    (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar1)));
    if (*(double *)&REFG(undefined, 0x10a1b58) < (double)fVar1) {
      pfVar8 = ((float *)GEN_TOP(F_00a5feb0(param_2 GEN_EDX_ARG)));
      fVar1 = *pfVar8;
      (*(float *)(gen_frame + 0x70)) = (float)((float10)(*(float *)(gen_frame + 0x50)) + (float10)fVar1);
      fVar2 = pfVar8[1];
      (*(float *)(gen_frame + 0x74)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x54)));
      fVar3 = pfVar8[2];
      (*(float *)(gen_frame + 0x78)) = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x58)));
      (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x50)) + (float10)fVar1);
      (*(float *)(gen_frame + 0x24)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x54)));
      (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x58)));
      F_00a60ca0(param_2 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x150)),&(*(float *)(gen_frame + 0x20)),1);
      bVar6 = F_009837c0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x3c)),((undefined4 *)(gen_frame + 0x150)));
      return bVar6;
    }
  }
  fVar1 = *((float *)GEN_TOP(((int)param_2 + 0xb0)));
  (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar1)));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094724)));
  fVar12 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  fVar2 = (float)fVar12;
  (*(float *)(gen_frame + 0x6c)) = fVar2;
  (*(float *)(gen_frame + 0x5c)) = fVar2;
  fVar12 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  fVar1 = (float)fVar12;
  (*(float *)(gen_frame + 0x6c)) = fVar1;
  ((float *)(gen_frame + 0x110))[0] = fVar1;
  ((float *)(gen_frame + 0x110))[2] = ((float)GEN_TOF(-(float10)fVar2));
  ((float *)(gen_frame + 0x110))[1] = 0.0;
  (*(float *)(gen_frame + 0x130)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x120)) = 0;
  (*(undefined4 *)(gen_frame + 0x124)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(float *)(gen_frame + 0x138)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x128)) = 0;
  (*(undefined4 *)(gen_frame + 0x134)) = 0;
  (*(undefined4 *)(gen_frame + 0x140)) = 0;
  (*(undefined4 *)(gen_frame + 0x144)) = 0;
  (*(undefined4 *)(gen_frame + 0x148)) = 0;
  pfVar8 = ((float *)GEN_TOP(F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),((float *)(gen_frame + 0x110)))));
  (*(float *)(gen_frame + 0x70)) = *pfVar8;
  (*(float *)(gen_frame + 0x74)) = pfVar8[1];
  (*(float *)(gen_frame + 0x78)) = pfVar8[2];
  pfVar8 = ((float *)GEN_TOP(F_00a5feb0(param_2 GEN_EDX_ARG)));
  (*(float *)(gen_frame + 0x40)) = (float)((float10)*pfVar8 + (float10)(*(float *)(gen_frame + 0x70)));
  fVar1 = pfVar8[1];
  (*(float *)(gen_frame + 0x44)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x74)));
  fVar2 = pfVar8[2];
  (*(float *)(gen_frame + 0x48)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x78)));
  (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar8 + (float10)(*(float *)(gen_frame + 0x70)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x74)));
  (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x78)));
  F_00a60ca0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xd0)),&(*(float *)(gen_frame + 0x20)),1);
  puVar9 = ((undefined4 *)GEN_TOP(F_004ef350(((undefined1 *)(gen_frame + 0x90)),(int)this + 0x10,(uint)((undefined1 *)(gen_frame + 0xd0)))));
  puVar11 = ((undefined4 *)(gen_frame + 0x150));
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 - 1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)(gen_frame + 0x150))[0];
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1] = ((undefined4 *)(gen_frame + 0x150))[1];
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2] = ((undefined4 *)(gen_frame + 0x150))[2];
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[4] = (*(undefined4 *)(gen_frame + 0x160));
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[3] = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[5] = (*(undefined4 *)(gen_frame + 0x164));
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[7] = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[0xb] = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[6] = (*(undefined4 *)(gen_frame + 0x168));
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[0xc] = (*(undefined4 *)(gen_frame + 0x180));
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[8] = (*(undefined4 *)(gen_frame + 0x170));
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[0xd] = (*(undefined4 *)(gen_frame + 0x184));
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[9] = (*(undefined4 *)(gen_frame + 0x174));
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[0xe] = (*(undefined4 *)(gen_frame + 0x188));
  uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[10] = (*(undefined4 *)(gen_frame + 0x178));
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[0xf] = uVar5;
  return 1;
}

/* ref: Apricot::ApricotInstanceListenner::vf2 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00992330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x992330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  if (*(int *)(this + 0x50) == 0) {
    if (((*(uint *)(this + 0x54) < 0x158) &&
        (puVar2 = ((undefined4 *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(*(uint *)(this + 0x54))])), puVar2 != ((undefined4 *)GEN_TOP(0x0))
        )) && (lVar3 = *(longlong *)(this + 0xe0), lVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD),
              lVar5 == lVar3)) {
      *param_1 = puVar2[0x2e];
      return 1;
    }
  }
  else if (((*(int *)(this + 0x50) == 1) && (piVar1 = *(int * PTR32 *)(this + 0x54), piVar1 != ((int *)GEN_TOP(0x0))))
          && (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG), uVar4 != 0)) {
    *param_1 = *((undefined4 *)GEN_TOP((uVar4 + 0xb8)));
    return 1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
  return 0;
}

/* ref: Apricot::ApricotInstanceListenner::vf6 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009923d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9923d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int * piVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  
  if (*(int *)(this + 0x50) == 0) {
    if (((*(uint *)(this + param_1 * 4 + 0x58) < 0x158) &&
        (puVar2 = ((undefined4 *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(*(uint *)(this + param_1 * 4 + 0x58))])),
        puVar2 != ((undefined4 *)GEN_TOP(0x0)))) &&
       (uVar3 = *(undefined4 *)(this + param_1 * 8 + 0xec),
       uVar4 = *(undefined4 *)(this + param_1 * 8 + 0xe8), lVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD),
       lVar6 == (longlong)CONCAT44(uVar3,uVar4))) {
      *param_2 = puVar2[0x2e];
      return 1;
    }
  }
  else if (((*(int *)(this + 0x50) == 1) &&
           (piVar1 = *(int * PTR32 *)(this + param_1 * 4 + 0x58), piVar1 != ((int *)GEN_TOP(0x0)))) &&
          (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG), uVar5 != 0)) {
    *param_2 = *((undefined4 *)GEN_TOP((uVar5 + 0xb8)));
    return 1;
  }
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1087f04));
  return 0;
}

/* ref: Apricot::ApricotInstanceListenner::vf7 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00992470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x992470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  GEN_FRAME_DECL(0x60, 0);
  byte bVar1;
  uint uVar2;
  int * piVar3;
  float10 fVar4;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  if (param_5 == -1) {
    uVar2 = *(uint *)(this + 0x54);
  }
  else {
    uVar2 = *(uint *)(this + param_5 * 4 + 0x58);
  }
  if (((uVar2 < 0x158) && (piVar3 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar2)])), piVar3 != ((int *)GEN_TOP(0x0)))) &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xb8))))(piVar3 GEN_EDX_FWD), (char)uVar2 != '\0')) {
    if (param_4 == 0) {
      piVar3 = piVar3 + 0x5b0;
    }
    else {
      if (param_4 != 1) {
        return 0;
      }
      piVar3 = piVar3 + 0x798;
    }
    if ((piVar3 != ((int *)GEN_TOP(0x0))) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x50))))(piVar3 GEN_EDX_ARG,3), (char)uVar2 != '\0')) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x40))))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),3);
      *param_1 = (*(float *)(gen_frame + 0x30));
      param_1[1] = (*(float *)(gen_frame + 0x34));
      param_1[2] = (*(float *)(gen_frame + 0x38));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x50))))(piVar3 GEN_EDX_ARG,5);
      if ((char)uVar2 != '\0') {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x40))))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),5);
        *param_3 = (*(float *)(gen_frame + 0x30));
        param_3[1] = (*(float *)(gen_frame + 0x34));
        param_3[2] = (*(float *)(gen_frame + 0x38));
        bVar1 = F_00983a30(param_2,4,piVar3);
        if (bVar1 == 0) {
          fVar4 = (float10)REFG(double, 0x1088108);
          *param_2 = ((float)GEN_TOF((((float10)*param_1 + (float10)*param_3) * fVar4)));
          param_2[1] = ((float)GEN_TOF((((float10)param_3[1] + (float10)param_1[1]) * fVar4)));
          param_2[2] = ((float)GEN_TOF((((float10)param_3[2] + (float10)param_1[2]) * fVar4)));
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00992610 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00992610(GEN_P(uint * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x992610u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  float fVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * this;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  
  if (*param_1 < 0x158) {
    this = ((undefined4 *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(*param_1)]));
  }
  else {
    this = ((undefined4 *)GEN_TOP(0x0));
  }
  puVar3 = ((uint *)GEN_TOP(param_1[1]));
  if (puVar3 < ((uint *)GEN_TOP(0x158))) {
    puVar3 = ((uint *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)((int)puVar3)]));
    (*(uint * PTR32 *)(gen_frame + 0x1c)) = puVar3;
  }
  else {
    (*(uint * PTR32 *)(gen_frame + 0x1c)) = ((uint *)GEN_TOP(0x0));
  }
  if (this != ((undefined4 *)GEN_TOP(0x0))) {
    uVar11 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*this)))(this);
    puVar3 = ((uint *)GEN_TOP((uint)uVar11));
    if (((puVar3 == ((uint *)GEN_TOP(param_1[2]))) && ((uint)((ulonglong)uVar11 >> 0x20) == param_1[3])) &&
       ((*(uint * PTR32 *)(gen_frame + 0x1c)) != ((uint *)GEN_TOP(0x0)))) {
      uVar11 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x1c)))))((*(uint * PTR32 *)(gen_frame + 0x1c)));
      puVar3 = ((uint *)GEN_TOP((uint)uVar11));
      if ((puVar3 == ((uint *)GEN_TOP(param_1[4]))) && ((uint)((ulonglong)uVar11 >> 0x20) == param_1[5])) {
        uVar12 = F_007c9d00(this);
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 0)) = gen_bits2f(param_1[0x48]);
        fVar7 = (float10)(int)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 4)));
        fVar8 = ((float10)GEN_TOD(gen_bits2f(param_1[0x48])));
        (*(ulonglong *)(gen_frame + 0x14)) = uVar12 & 0xff000000ff;
        uVar5 = (uint)(uVar12 >> 0x28) & 0xff;
        fVar9 = (float10)REFG(double, 0x1094800);
        uVar4 = (uint)(*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 6));
        fVar10 = (float10)param_2;
        (*(ulonglong *)(gen_frame + 0x8)) = uVar12;
        uVar12 = (*(ulonglong *)(gen_frame + 0x8));
        uVar2 = (uint)uVar12 >> 8 & 0xff;
        param_1[0x48] = (uint)gen_fl2bits(((float)GEN_TOF((fVar10 * ((fVar7 - fVar8) * fVar9) + fVar8))));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 0)) = gen_bits2f((uint)(uVar12 & 0xff000000ff));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 4)) = gen_bits2f(param_1[0x4b]);
        fVar7 = (float10)(int)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0x14)));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 0)) = gen_bits2f(uVar5);
        fVar8 = ((float10)GEN_TOD(gen_bits2f(param_1[0x4b])));
        (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 2)) = (byte)(uVar12 >> 0x10);
        uVar6 = (uint)(*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 2));
        param_1[0x4b] = (uint)gen_fl2bits(((float)GEN_TOF((((fVar7 - fVar8) * fVar9) * fVar10 + fVar8))));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 4)) = gen_bits2f(param_1[0x49]);
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 0)) = gen_bits2f(uVar2);
        fVar7 = ((float10)GEN_TOD(gen_bits2f(param_1[0x49])));
        param_1[0x49] =
             (uint)gen_fl2bits(((float)GEN_TOF(((((float10)uVar5 - fVar7) * fVar9) * fVar10 + fVar7))));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 4)) = gen_bits2f(param_1[0x4c]);
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 0)) = gen_bits2f(uVar4);
        fVar7 = ((float10)GEN_TOD(gen_bits2f(param_1[0x4c])));
        param_1[0x4c] =
             (uint)gen_fl2bits(((float)GEN_TOF(((((float10)uVar2 - fVar7) * fVar9) * fVar10 + fVar7))));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 4)) = gen_bits2f(param_1[0x4a]);
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 0)) = gen_bits2f(uVar6);
        fVar7 = ((float10)GEN_TOD(gen_bits2f(param_1[0x4a])));
        param_1[0x4a] =
             (uint)gen_fl2bits(((float)GEN_TOF(((((float10)uVar4 - fVar7) * fVar9) * fVar10 + fVar7))));
        fVar1 = gen_bits2f(param_1[0x4d]);
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 4)) = fVar1;
        (*(ulonglong *)(gen_frame + 0x14)) = CONCAT44((uint)gen_fl2bits(fVar1),uVar6);
        param_1[0x4d] =
             (uint)gen_fl2bits(((float)GEN_TOF(((float10)fVar1 +
                                      (((float10)uVar6 - (float10)fVar1) * fVar9) * fVar10))));
        (*(ulonglong *)(gen_frame + 0x8)) = uVar12;
        puVar3 = ((uint *)GEN_TOP(F_00a60a40(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x2d)));
        param_1[0x50] = *puVar3;
        param_1[0x51] = puVar3[1];
        param_1[0x52] = puVar3[2];
        puVar3 = ((uint *)GEN_TOP(F_00a60a40((*(uint * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x1c)));
        param_1[0x54] = *puVar3;
        param_1[0x55] = puVar3[1];
        param_1[0x56] = puVar3[2];
      }
    }
  }
  return (uint)puVar3;
}

/* ref: FUN_00992810 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00992810(GEN_P(float * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x992810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL(0x130, 0);
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float * pfVar6;
  float fVar7;
  float * pfVar8;
  int iVar9;
  undefined4 * puVar10;
  float10 fVar11;
  float10 fVar12;
  undefined4 * puVar13;
  
  (*(uint *)(gen_frame + 0x11c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x120);
  pfVar8 = param_1 + 0x50;
  pfVar1 = param_1 + 0x54;
  (*(float * PTR32 *)(gen_frame + 0x18)) = param_1;
  (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar8;
  (*(float * PTR32 *)(gen_frame + 0x14)) = pfVar1;
  if (param_2 == '\0') {
    param_1[(int)gen_fl2bits(param_1[9]) * 0xc] = *(float *)&REFG(undefined, 0x10dcc1c);
    pfVar8 = param_1 + (int)gen_fl2bits(param_1[9]) * 0xc + 4;
    *pfVar8 = *pfVar1;
    pfVar8[1] = param_1[0x55];
    pfVar8[2] = param_1[0x56];
  }
  else {
    (*(float * PTR32 *)(gen_frame + 0x40)) = ((float *)GEN_TOP((REFG(int, 0x1487c8c) + 0x10)));
    fVar7 = (float)((float10)*pfVar1 - (float10)*pfVar8);
    (*(float *)(gen_frame + 0x20)) = fVar7;
    fVar2 = (float)((float10)param_1[0x55] - (float10)param_1[0x51]);
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = (float)((float10)param_1[0x56] - (float10)param_1[0x52]);
    (*(float *)(gen_frame + 0x28)) = fVar3;
    (*(float *)(gen_frame + 0x0)) = fVar7;
    (*(float *)(gen_frame + 0x4)) = fVar2;
    (*(float *)(gen_frame + 0x8)) = fVar3;
    fVar7 = ((float)GEN_TOF((((float10)fVar7 * (float10)fVar7 + (float10)fVar2 * (float10)fVar2) +
                   (float10)fVar3 * (float10)fVar3)));
    (*(float *)(gen_frame + 0x4c)) = fVar7;
    fVar7 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar7))));
    (*(float *)(gen_frame + 0x4c)) = fVar7;
    (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1094838);
    pfVar6 = &(*(float *)(gen_frame + 0x44));
    if (!((float10)*(double *)&REFG(undefined, 0x1094560) < (float10)fVar7)) {
      pfVar6 = &(*(float *)(gen_frame + 0x4c));
    }
    fVar7 = *pfVar6;
    (*(float *)(gen_frame + 0x3c)) = gen_bits2f((uint)gen_fl2bits(*((float *)GEN_TOP((REFG(int, 0x1487c8c) + 0x40)))) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x4c)) = *((float *)GEN_TOP((REFG(int, 0x1487c8c) + 0x40)));
    (*(float *)(gen_frame + 0x48)) = (float)((float10)fVar7 / (float10)*(double *)&REFG(undefined, 0x1094560));
    fVar7 = gen_bits2f(F_00c4f2dd());
    (*(float *)(gen_frame + 0x44)) = fVar7;
    (*(float *)(gen_frame + 0x44)) = (float)((float10)(int)gen_fl2bits(fVar7) / (float10)*(double *)&REFG(undefined, 0x10920e0));
    (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x4c)) - (float10)(*(float *)(gen_frame + 0x3c))) *
                       (float10)(float)((float10)(int)gen_fl2bits(fVar7) /
                                       (float10)*(double *)&REFG(undefined, 0x10920e0)) + (float10)(*(float *)(gen_frame + 0x3c)))));
    fVar11 = (float10)(*(float *)(gen_frame + 0x48));
    (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF((((float10)1 + ((float10)1 - fVar11)) * (float10)(*(float * PTR32 *)(gen_frame + 0x40))[0xd])));
    (*(float *)(gen_frame + 0x48)) = (*(float * PTR32 *)(gen_frame + 0x40))[0xe];
    fVar12 = (float10)(*(float * PTR32 *)(gen_frame + 0x40))[0xe];
    (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF(((fVar12 + fVar12) * fVar11 - fVar12)));
    F_005fe2e0(&(*(float *)(gen_frame + 0x20)),(uint)&(*(float *)(gen_frame + 0x0)));
    fVar7 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x28)) * (float10)REFG(float, 0x1302c88) +
                   ((float10)(*(float *)(gen_frame + 0x20)) * (float10)REFG(float, 0x1302c80) +
                   (float10)(*(float *)(gen_frame + 0x24)) * (float10)REFG(float, 0x1302c84)))));
    (*(float *)(gen_frame + 0x48)) = fVar7;
    fVar7 = ((float)GEN_TOF(ABS((float10)fVar7)));
    (*(float *)(gen_frame + 0x48)) = fVar7;
    if (*(double *)&REFG(undefined, 0x10ab998) < (double)fVar7) {
      puVar13 = &REFG(float, 0x1302c90);
    }
    else {
      puVar13 = (undefined4 *)&REFG(float, 0x1302c80);
    }
    F_004f4290(((undefined1 *)(gen_frame + 0xd0)) GEN_EDX_ARG,pfVar8,pfVar1,puVar13);
    puVar13 = ((undefined4 *)GEN_TOP(F_004f45d0(((undefined1 *)(gen_frame + 0x50)),((undefined1 *)(gen_frame + 0xd0)))));
    puVar10 = ((undefined4 *)(gen_frame + 0x90));
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 - 1) {
      *puVar10 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar10 = puVar10 + 1;
    }
    (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x3c));
    (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x44));
    (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x4c));
    pfVar8 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x90)))));
    fVar7 = *pfVar8;
    fVar2 = pfVar8[1];
    fVar3 = pfVar8[2];
    (*(float * PTR32 *)(gen_frame + 0x18))[9] = 0.0;
    (*(float * PTR32 *)(gen_frame + 0x18))[0xc] = 0.0;
    fVar4 = (*(float * PTR32 *)(gen_frame + 0x18))[9];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar4) * 0xc + 0x10] = *(*(float * PTR32 *)(gen_frame + 0x1c));
    fVar5 = REFG(float, 0x10a0d10);
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar4) * 0xc + 0x11] = (*(float * PTR32 *)(gen_frame + 0x1c))[1];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar4) * 0xc + 0x12] = (*(float * PTR32 *)(gen_frame + 0x1c))[2];
    fVar4 = (*(float * PTR32 *)(gen_frame + 0x18))[9];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar4) * 0xc + 0x14] = *(*(float * PTR32 *)(gen_frame + 0x40));
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar4) * 0xc + 0x15] = (*(float * PTR32 *)(gen_frame + 0x40))[1];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar4) * 0xc + 0x16] = (*(float * PTR32 *)(gen_frame + 0x40))[2];
    (*(float * PTR32 *)(gen_frame + 0x18))[9] = gen_bits2f((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x18))[9]) + 1);
    (*(float * PTR32 *)(gen_frame + 0x18))[((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x18))[9]) * 3 + 3) * 4] = fVar5;
    fVar4 = (*(float * PTR32 *)(gen_frame + 0x18))[9];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar4) * 0xc + 0x10] = fVar7;
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar4) * 0xc + 0x11] = fVar2;
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar4) * 0xc + 0x12] = fVar3;
    fVar7 = (*(float * PTR32 *)(gen_frame + 0x18))[9];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar7) * 0xc + 0x14] = (*(float * PTR32 *)(gen_frame + 0x40))[4];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar7) * 0xc + 0x15] = (*(float * PTR32 *)(gen_frame + 0x40))[5];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar7) * 0xc + 0x16] = (*(float * PTR32 *)(gen_frame + 0x40))[6];
    (*(float * PTR32 *)(gen_frame + 0x18))[9] = gen_bits2f((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x18))[9]) + 1);
    (*(float * PTR32 *)(gen_frame + 0x18))[((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x18))[9]) * 3 + 3) * 4] = *(float *)&REFG(undefined, 0x10dcc1c);
    fVar7 = (*(float * PTR32 *)(gen_frame + 0x18))[9];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar7) * 0xc + 0x10] = *(*(float * PTR32 *)(gen_frame + 0x14));
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar7) * 0xc + 0x11] = (*(float * PTR32 *)(gen_frame + 0x14))[1];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar7) * 0xc + 0x12] = (*(float * PTR32 *)(gen_frame + 0x14))[2];
    fVar7 = (*(float * PTR32 *)(gen_frame + 0x18))[9];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar7) * 0xc + 0x14] = (*(float * PTR32 *)(gen_frame + 0x40))[8];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar7) * 0xc + 0x15] = (*(float * PTR32 *)(gen_frame + 0x40))[9];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar7) * 0xc + 0x16] = (*(float * PTR32 *)(gen_frame + 0x40))[10];
    (*(float * PTR32 *)(gen_frame + 0x18))[9] = gen_bits2f((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x18))[9]) + 1);
    pfVar8 = (*(float * PTR32 *)(gen_frame + 0x18));
  }
  return (uint)pfVar8;
}

/* ref: FUN_00992c10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00992c10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x992c10u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL(0x3a8, 8);
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
  byte bVar16;
  bool bVar17;
  float10 fVar18;
  double dVar19;
  float fVar20;
  int iVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  uint uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  float * pfVar29;
  float fVar30;
  float * pfVar31;
  uint uVar32;
  float10 fVar33;
  float10 fVar34;
  float10 fVar35;
  float10 fVar36;
  float10 fVar37;
  float fVar38;
  
  (*(uint *)(gen_frame + 0x394)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x398);
  (*(float *)(gen_frame + 0x6c)) = *((float *)GEN_TOP((param_1 + 0x18)));
  fVar33 = (float10)*((float *)GEN_TOP((param_1 + 0x18)));
  fVar38 = 0.0;
  (*(float *)(gen_frame + 0x84)) = gen_bits2f(param_5);
  pfVar29 = ((float *)GEN_TOP((param_1 + 0x18)));
  fVar1 = (float)(fVar33 - (float10)*(float *)&REFG(undefined, 0x132f570));
  (*(float *)(gen_frame + 0x74)) = fVar1;
  (*(int *)(gen_frame + 0x80)) = param_1;
  (*(float * PTR32 *)(gen_frame + 0x10)) = param_2;
  (*(float * PTR32 *)(gen_frame + 0x44)) = pfVar29;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  pfVar31 = &(*(float *)(gen_frame + 0x74));
  if (!((float10)fVar1 < (float10)*(double *)&REFG(undefined, 0x1088070))) {
    pfVar31 = (float *)&REFG(undefined, 0x10dcc1c);
  }
  if (!((float10)0 < (float10)*pfVar31)) {
    pfVar31 = &(*(float *)(gen_frame + 0x8));
  }
  fVar1 = *pfVar31;
  (*(float *)(gen_frame + 0x74)) = fVar1;
  (*(float *)(gen_frame + 0x70)) = 0.0;
  if (!(fVar33 < (float10)*(double *)&REFG(undefined, 0x1088070))) {
    pfVar29 = (float *)&REFG(undefined, 0x10dcc1c);
  }
  if (!((float10)0 < (float10)*pfVar29)) {
    pfVar29 = &(*(float *)(gen_frame + 0x70));
  }
  fVar20 = *pfVar29;
  (*(float *)(gen_frame + 0x70)) = fVar20;
  ((float *)(gen_frame + 0x14))[1] = 0.0;
  (*(float * PTR32 *)(gen_frame + 0x68)) = ((float *)GEN_TOP(0x0));
  pfVar29 = ((float *)(gen_frame + 0x88));
  (*(double *)(gen_frame + 0x388)) = GEN_X87((double)fVar20 - (double)fVar1);
  do {
    pfVar31 = (*(float * PTR32 *)(gen_frame + 0x68));
    (*(float *)(gen_frame + 0x70)) = (float)((float10)(int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x68))) / (float10)*(double *)&REFG(undefined, 0x10df020));
    fVar1 = ((float)GEN_TOF((((float10)(float)((float10)(int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x68))) / (float10)*(double *)&REFG(undefined, 0x10df020)) *
                    (float10)(*(double *)(gen_frame + 0x388))) * (float10)*(double *)&REFG(undefined, 0x10df018) + (float10)(*(float *)(gen_frame + 0x74)))));
    (*(float *)(gen_frame + 0x70)) = fVar1;
    F_00984260((*(int *)(gen_frame + 0x80)) GEN_EDX_FWD,pfVar29,fVar1,((float *)(gen_frame + 0x14)) + 1);
    dVar19 = (*(double *)(gen_frame + 0x388));
    pfVar29 = pfVar29 + 4;
    (*(float * PTR32 *)(gen_frame + 0x68)) = ((float *)GEN_TOP(((int)pfVar31 + 1)));
  } while ((int)pfVar31 + 1 < 0x30);
  fVar1 = *((float *)GEN_TOP(((*(int *)(gen_frame + 0x80)) + 0x130)));
  uVar22 = (undefined1)(int)*((float *)GEN_TOP(((*(int *)(gen_frame + 0x80)) + 300)));
  (*(undefined1 *)((char *)&(*(double *)(gen_frame + 0x388)) + 0)) = uVar22;
  fVar20 = *((float *)GEN_TOP(((*(int *)(gen_frame + 0x80)) + 0x134)));
  uVar26 = (undefined1)(int)fVar1;
  (*(undefined1 *)((char *)&(*(double *)(gen_frame + 0x388)) + 1)) = uVar26;
  fVar1 = *((float *)GEN_TOP(((*(int *)(gen_frame + 0x80)) + 0x120)));
  uVar23 = (undefined1)(int)fVar20;
  (*(undefined1 *)((char *)&(*(double *)(gen_frame + 0x388)) + 2)) = uVar23;
  fVar20 = *((float *)GEN_TOP(((*(int *)(gen_frame + 0x80)) + 0x124)));
  uVar27 = (undefined1)(int)fVar1;
  (*(undefined1 *)((char *)&(*(double *)(gen_frame + 0x388)) + 3)) = uVar27;
  fVar1 = *((float *)GEN_TOP(((*(int *)(gen_frame + 0x80)) + 0x128)));
  fVar30 = *(*(float * PTR32 *)(gen_frame + 0x44));
  uVar24 = (undefined1)(int)fVar20;
  (*(undefined1 *)((char *)&(*(double *)(gen_frame + 0x388)) + 4)) = uVar24;
  (*(float *)(gen_frame + 0x6c)) = fVar30;
  uVar28 = (undefined1)(int)fVar1;
  (*(undefined2 *)((char *)&(*(double *)(gen_frame + 0x388)) + 6)) = SUB82((ulonglong)gen_d2bits(dVar19),6);
  (*(undefined1 *)((char *)&(*(double *)(gen_frame + 0x388)) + 5)) = uVar28;
  gen_piece_set(&(*(double *)(gen_frame + 0x388)), 0, 6, (unsigned long long)(CONCAT15(uVar28,CONCAT14(uVar24,CONCAT13(uVar27,CONCAT12(uVar23,CONCAT11(uVar26,uVar22)))))));
  fVar33 = (float10)*(float *)&REFG(undefined, 0x14a0ac0);
  fVar34 = (float10)fVar30;
  fVar1 = ((float)GEN_TOF(((fVar34 - (float10)REFG(double, 0x1088108) * fVar33) / ((float10)REFG(double, 0x1088108) * fVar33))));
  (*(float *)(gen_frame + 0x78)) = fVar1;
  fVar35 = (float10)fVar1;
  if (fVar35 < (float10)0) {
    (*(float *)(gen_frame + 0x78)) = ((float)GEN_TOF(-fVar35));
    (*(float *)(gen_frame + 0x0)) = fVar38;
    (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1087f04);
    pfVar29 = &(*(float *)(gen_frame + 0x78));
    if (!((float10)0 < (float10)((float)GEN_TOF(-fVar35)))) {
      pfVar29 = &(*(float *)(gen_frame + 0x0));
    }
    if ((GEN_ISNAN(REFG(float, 0x1087f04)) || GEN_ISNAN(*pfVar29)) ||
        (REFG(float, 0x1087f04) < *pfVar29 || REFG(uint, 0x1087f04) == *pfVar29)) {
      pfVar29 = &(*(float *)(gen_frame + 0x20));
    }
    fVar35 = GEN_X87((float10)*pfVar29 * (float10)*(double *)&REFG(undefined, 0x10df010));
  }
  else {
    ((float *)(gen_frame + 0x14))[0] = fVar1;
    (*(float *)(gen_frame + 0xc)) = fVar38;
    (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1087f04);
    pfVar29 = ((float *)(gen_frame + 0x14));
    if (!((float10)0 < fVar35)) {
      pfVar29 = &(*(float *)(gen_frame + 0xc));
    }
    if ((GEN_ISNAN(REFG(float, 0x1087f04)) || GEN_ISNAN(*pfVar29)) ||
        (REFG(float, 0x1087f04) < *pfVar29 || REFG(uint, 0x1087f04) == *pfVar29)) {
      pfVar29 = &(*(float *)(gen_frame + 0x24));
    }
    fVar35 = GEN_X87((float10)*pfVar29 * (float10)*(double *)&REFG(undefined, 0x10df008));
  }
  fVar18 = (float10)*(double *)&REFG(undefined, 0x1092098);
  ((float *)(gen_frame + 0x14))[2] = fVar38;
  (*(float *)(gen_frame + 0x7c)) = REFG(float, 0x1087f04);
  pfVar29 = &(*(float *)(gen_frame + 0x64));
  (*(float *)(gen_frame + 0x40)) = (float)(fVar35 + fVar18);
  fVar1 = ((float)GEN_TOF((((fVar34 - fVar33 * (float10)*(double *)&REFG(undefined, 0x1094818)) +
                  (float10)*(double *)&REFG(undefined, 0x10944e0)) / (fVar33 * (float10)REFG(double, 0x1094800)))));
  (*(float *)(gen_frame + 0x64)) = fVar1;
  if (!((float10)0 < (float10)fVar1)) {
    pfVar29 = ((float *)(gen_frame + 0x14)) + 2;
  }
  if ((GEN_ISNAN(REFG(float, 0x1087f04)) || GEN_ISNAN(*pfVar29)) || (REFG(float, 0x1087f04) < *pfVar29 || REFG(uint, 0x1087f04) == *pfVar29))
  {
    pfVar29 = &(*(float *)(gen_frame + 0x7c));
  }
  fVar1 = *pfVar29;
  iVar21 = param_4 * 3;
  bVar16 = *((byte *)GEN_TOP(((int)&(*(double *)(gen_frame + 0x388)) + iVar21)));
  fVar30 = gen_bits2f((uint)*((byte *)GEN_TOP(((int)&(*(double *)(gen_frame + 0x388)) + iVar21 + 1))));
  fVar20 = gen_bits2f((uint)*((byte *)GEN_TOP(((int)&(*(double *)(gen_frame + 0x388)) + iVar21 + 2))));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)1 - (float10)fVar1);
  (*(float *)(gen_frame + 0x7c)) = gen_bits2f((uint)bVar16);
  (*(float *)(gen_frame + 0x7c)) = fVar30;
  pfVar29 = ((float *)(gen_frame + 0x88)) + 2;
  (*(float * PTR32 *)(gen_frame + 0x68)) = pfVar29;
  (*(float *)(gen_frame + 0x7c)) = fVar20;
  pfVar31 = ((float *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x84))) + 8)));
  uVar32 = 1;
  do {
    (*(float *)(gen_frame + 0x84)) = gen_bits2f(uVar32 - 1);
    iVar21 = uVar32 - 2;
    fVar2 = ((float)GEN_TOF(((float10)1 - (float10)(int)(uVar32 - 1) / (float10)*(double *)&REFG(undefined, 0x10df020))));
    (*(float *)(gen_frame + 0x7c)) = fVar2;
    if (iVar21 < 0) {
      iVar21 = 0;
    }
    uVar25 = uVar32;
    if (0x2f < (int)uVar32) {
      uVar25 = 0x2f;
    }
    fVar3 = ((float *)(gen_frame + 0x88))[(int)(iVar21 * 4)];
    fVar4 = ((float *)(gen_frame + 0x88))[(int)(uVar25 * 4)];
    fVar5 = ((float *)(gen_frame + 0x88))[(int)(iVar21 * 4 + 1)];
    fVar6 = ((float *)(gen_frame + 0x88))[(int)(uVar25 * 4 + 1)];
    fVar7 = ((float *)(gen_frame + 0x88))[(int)(iVar21 * 4 + 2)];
    fVar8 = ((float *)(gen_frame + 0x88))[(int)(uVar25 * 4 + 2)];
    fVar9 = pfVar29[-2];
    (*(float *)(gen_frame + 0x64)) = fVar9;
    fVar10 = (float)((float10)*(*(float * PTR32 *)(gen_frame + 0x10)) - (float10)fVar9);
    (*(float *)(gen_frame + 0x28)) = fVar10;
    fVar11 = pfVar29[-1];
    (*(float *)(gen_frame + 0x78)) = fVar11;
    fVar12 = (float)((float10)(*(float * PTR32 *)(gen_frame + 0x10))[1] - (float10)fVar11);
    (*(float *)(gen_frame + 0x2c)) = fVar12;
    fVar13 = *pfVar29;
    (*(float *)(gen_frame + 0x74)) = fVar13;
    fVar14 = (float)((float10)(*(float * PTR32 *)(gen_frame + 0x10))[2] - (float10)fVar13);
    (*(float *)(gen_frame + 0x30)) = fVar14;
    fVar15 = ((float)GEN_TOF(((float10)(float)((float10)fVar7 - (float10)fVar8) * (float10)fVar12 -
                    (float10)(float)((float10)fVar5 - (float10)fVar6) * (float10)fVar14)));
    (*(float *)(gen_frame + 0x48)) = fVar15;
    fVar7 = ((float)GEN_TOF(((float10)(float)((float10)fVar3 - (float10)fVar4) * (float10)fVar14 -
                   (float10)fVar10 * (float10)(float)((float10)fVar7 - (float10)fVar8))));
    (*(float *)(gen_frame + 0x4c)) = fVar7;
    fVar3 = ((float)GEN_TOF(((float10)fVar10 * (float10)(float)((float10)fVar5 - (float10)fVar6) -
                   (float10)fVar12 * (float10)(float)((float10)fVar3 - (float10)fVar4))));
    (*(float *)(gen_frame + 0x50)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)fVar3 * (float10)fVar3 +
                   ((float10)fVar15 * (float10)fVar15 + (float10)fVar7 * (float10)fVar7))));
    (*(float *)(gen_frame + 0x84)) = fVar4;
    fVar33 = (float10)fVar4;
    if (fVar33 <= (float10)REFG(float, 0x10905c4)) {
      (*(float *)(gen_frame + 0x48)) = fVar38;
      (*(float *)(gen_frame + 0x4c)) = fVar38;
      (*(float *)(gen_frame + 0x50)) = fVar38;
    }
    else {
      fVar38 = ((float)GEN_TOF(GEN_X87(SQRT(fVar33))));
      (*(float *)(gen_frame + 0x84)) = fVar38;
      fVar38 = (float)((float10)1 / (float10)fVar38);
      (*(float *)(gen_frame + 0x84)) = fVar38;
      fVar33 = (float10)fVar38;
      (*(float *)(gen_frame + 0x48)) = (float)(fVar33 * (float10)fVar15);
      (*(float *)(gen_frame + 0x4c)) = (float)((float10)fVar7 * fVar33);
      (*(float *)(gen_frame + 0x50)) = (float)(fVar33 * (float10)fVar3);
    }
    fVar38 = ((float)GEN_TOF(((float10)fVar14 * (float10)fVar14 +
                    ((float10)fVar10 * (float10)fVar10 + (float10)fVar12 * (float10)fVar12))));
    (*(float *)(gen_frame + 0x84)) = fVar38;
    fVar38 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar38))));
    (*(float *)(gen_frame + 0x84)) = fVar38;
    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x80)) + 2)) = gen_x87_cw;
    fVar38 = ((float)GEN_TOF((((float10)fVar38 * (float10)*(double *)&REFG(undefined, 0x10928e8)) / (float10)param_3)));
    (*(float *)(gen_frame + 0x84)) = fVar38;
    fVar36 = (float10)fVar38;
    fVar33 = (float10)(*(float *)(gen_frame + 0x48));
    (*(float *)(gen_frame + 0x48)) = (float)(fVar36 * fVar33);
    fVar37 = (float10)(*(float *)(gen_frame + 0x4c));
    (*(float *)(gen_frame + 0x4c)) = (float)(fVar37 * fVar36);
    fVar34 = (float10)(*(float *)(gen_frame + 0x50));
    (*(float *)(gen_frame + 0x50)) = (float)(fVar36 * fVar34);
    fVar33 = GEN_X87((float10)(float)(fVar36 * fVar33));
    pfVar31[-2] = (float)((float10)fVar9 - fVar33);
    fVar37 = GEN_X87((float10)(float)(fVar37 * fVar36));
    fVar34 = GEN_X87((float10)(float)(fVar36 * fVar34));
    fVar38 = (float)((float10)1 - (float10)fVar2);
    (*(float *)(gen_frame + 0x84)) = fVar38;
    fVar36 = (float10)fVar38;
    (*(float *)(gen_frame + 0x84)) = gen_bits2f(gen_x87_cw | 0xc00);
    (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0)) = (undefined2)(gen_x87_cw | 0xc00);
    gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0)));
    iVar21 = (int)TRUNC((fVar36 * (float10)(float)((float10)1 - (float10)fVar1)) *
                        (float10)*(double *)&REFG(undefined, 0x1088100));
    (*(float *)(gen_frame + 0x84)) = gen_bits2f(iVar21);
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0)) = (undefined1)iVar21;
    uVar22 = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0));
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    fVar2 = ((float)GEN_TOF((((float10)1 - fVar36) * (float10)(float)(fVar35 + fVar18))));
    (*(float * PTR32 *)(gen_frame + 0x44)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar2)));
    fVar3 = (float)(fVar36 * (float10)*(double *)&REFG(undefined, 0x109ca50) + (float10)*(double *)&REFG(undefined, 0x10920a8));
    (*(float *)(gen_frame + 0x84)) = fVar3;
    pfVar29 = pfVar29 + 4;
    (*(float * PTR32 *)(gen_frame + 0x68)) = pfVar29;
    (*(float *)(gen_frame + 0x84)) = gen_bits2f(gen_x87_cw | 0xc00);
    pfVar31[-1] = (float)((float10)fVar11 - fVar37);
    (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0)) = (undefined2)(gen_x87_cw | 0xc00);
    gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0)));
    *pfVar31 = (float)((float10)fVar13 - fVar34);
    fVar38 = 0.0;
    iVar21 = (int)TRUNC((float)bVar16 * fVar3);
    (*(float *)(gen_frame + 0x84)) = gen_bits2f(iVar21);
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0)) = (undefined1)iVar21;
    uVar23 = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0));
    *(undefined1 *)(pfVar31 + 1) = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0));
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    (*(int *)(gen_frame + 0x80)) = CONCAT22(gen_x87_cw,(undefined2)(*(int *)(gen_frame + 0x80)));
    (*(float *)(gen_frame + 0x84)) = gen_bits2f(gen_x87_cw | 0xc00);
    (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0)) = (undefined2)(gen_x87_cw | 0xc00);
    gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0)));
    iVar21 = (int)TRUNC((float)(int)gen_fl2bits(fVar30) * fVar3);
    (*(float *)(gen_frame + 0x84)) = gen_bits2f(iVar21);
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0)) = (undefined1)iVar21;
    uVar24 = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0));
    *((undefined1 *)GEN_TOP(((int)pfVar31 + 5))) = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0));
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x80)) + 3)) = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0));
    (*(int *)(gen_frame + 0x80)) = CONCAT13((*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0)),(undefined3)(*(int *)(gen_frame + 0x80)));
    (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x6c)) + 2)) = gen_x87_cw;
    (*(float *)(gen_frame + 0x6c)) = gen_bits2f(CONCAT22(gen_x87_cw,(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x6c)) + 0))));
    (*(float *)(gen_frame + 0x84)) = gen_bits2f(gen_x87_cw | 0xc00);
    (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0)) = (undefined2)(gen_x87_cw | 0xc00);
    gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0)));
    iVar21 = (int)TRUNC(fVar3 * (float)(int)gen_fl2bits(fVar20));
    (*(float *)(gen_frame + 0x84)) = gen_bits2f(iVar21);
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0)) = (undefined1)iVar21;
    pfVar31[4] = (float)(fVar33 + (float10)fVar9);
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    pfVar31[5] = (float)(fVar37 + (float10)fVar11);
    pfVar31[6] = (float)(fVar34 + (float10)fVar13);
    fVar3 = REFG(float, 0x1087f04);
    *(undefined1 *)(pfVar31 + 7) = uVar23;
    pfVar31[8] = fVar3;
    *((undefined1 *)GEN_TOP(((int)pfVar31 + 6))) = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0));
    pfVar31[3] = fVar2;
    *((undefined1 *)GEN_TOP(((int)pfVar31 + 0x1e))) = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0));
    *((undefined1 *)GEN_TOP(((int)pfVar31 + 7))) = uVar22;
    pfVar31[2] = 0.0;
    *((undefined1 *)GEN_TOP(((int)pfVar31 + 0x1d))) = uVar24;
    *((undefined1 *)GEN_TOP(((int)pfVar31 + 0x1f))) = uVar22;
    pfVar31[9] = fVar2;
    uVar25 = uVar32;
    bVar17 = (int)uVar32 < 0x30;
    pfVar31 = pfVar31 + 0xc;
    uVar32 = uVar32 + 1;
  } while (bVar17);
  return uVar25;
}

/* ref: FUN_00993410 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00993410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x993410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x20, 0);
  undefined4 uVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  *(uint *)this = *param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (*param_1 < 0x158) {
    puVar3 = ((undefined4 *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(*param_1)]));
  }
  else {
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
  }
  uVar5 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3);
  *((undefined8 *)GEN_TOP(((int)this + 0x10))) = uVar5;
  if (param_1[1] < 0x158) {
    puVar3 = ((undefined4 *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(param_1[1])]));
  }
  else {
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
  }
  uVar5 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3);
  *((undefined8 *)GEN_TOP(((int)this + 0x18))) = uVar5;
  if (*param_1 < 0x158) {
    uVar1 = (&REFG(undefined4, 0x14a31f0))[(int)(*param_1)];
  }
  else {
    uVar1 = 0;
  }
  uVar6 = F_007c9d00(uVar1);
  uVar4 = (uint)(uVar6 >> 0x20);
  *((float *)GEN_TOP(((int)this + 0x20))) = (float)(int)((uVar6 & 0xff000000ff) >> 0x20);
  *((float *)GEN_TOP(((int)this + 0x24))) = (float)(uVar4 >> 8 & 0xff);
  *((float *)GEN_TOP(((int)this + 0x28))) = (float)(uVar4 >> 0x10 & 0xff);
  *((float *)GEN_TOP(((int)this + 0x2c))) = (float)(int)(uVar6 & 0xff000000ff);
  *((float *)GEN_TOP(((int)this + 0x30))) = (float)((uint)uVar6 >> 8 & 0xff);
  *((float *)GEN_TOP(((int)this + 0x34))) = (float)((uint)uVar6 >> 0x10 & 0xff);
  if (*param_1 < 0x158) {
    pvVar2 = ((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(*param_1)]));
  }
  else {
    pvVar2 = ((undefined *)GEN_TOP(0x0));
  }
  puVar3 = ((undefined4 *)GEN_TOP(F_00a60a40(pvVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x2f)));
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = *puVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = puVar3[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = puVar3[2];
  if (param_1[1] < 0x158) {
    pvVar2 = ((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(param_1[1])]));
  }
  else {
    pvVar2 = ((undefined *)GEN_TOP(0x0));
  }
  puVar3 = ((undefined4 *)GEN_TOP(F_00a60a40(pvVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x1e)));
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *puVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = puVar3[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = puVar3[2];
  return (uint)this;
}

/* ref: FUN_00993580 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00993580(GEN_P(uint * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x993580u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  float fVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * this;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  
  if (*param_1 < 0x158) {
    this = ((undefined4 *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(*param_1)]));
  }
  else {
    this = ((undefined4 *)GEN_TOP(0x0));
  }
  puVar2 = ((undefined4 *)GEN_TOP(param_1[1]));
  if (puVar2 < ((undefined4 *)GEN_TOP(0x158))) {
    puVar2 = ((undefined4 *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)((int)puVar2)]));
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar2;
  }
  else {
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = ((undefined4 *)GEN_TOP(0x0));
  }
  if (this != ((undefined4 *)GEN_TOP(0x0))) {
    uVar12 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*this)))(this);
    puVar2 = ((undefined4 *)GEN_TOP((uint)uVar12));
    if (((puVar2 == ((undefined4 *)GEN_TOP(param_1[4]))) && ((uint)((ulonglong)uVar12 >> 0x20) == param_1[5]))
       && ((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0)))) {
      uVar12 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c)))))((*(undefined4 * PTR32 *)(gen_frame + 0x1c)));
      puVar2 = ((undefined4 *)GEN_TOP((uint)uVar12));
      if ((puVar2 == ((undefined4 *)GEN_TOP(param_1[6]))) && ((uint)((ulonglong)uVar12 >> 0x20) == param_1[7]))
      {
        uVar13 = F_007c9d00(this);
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 0)) = gen_bits2f(param_1[8]);
        fVar8 = (float10)(int)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 4)));
        fVar9 = ((float10)GEN_TOD(gen_bits2f(param_1[8])));
        (*(ulonglong *)(gen_frame + 0x14)) = uVar13 & 0xff000000ff;
        uVar6 = (uint)(uVar13 >> 0x28) & 0xff;
        fVar10 = (float10)REFG(double, 0x1094800);
        uVar5 = (uint)(*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 6));
        fVar11 = (float10)param_2;
        (*(ulonglong *)(gen_frame + 0x8)) = uVar13;
        uVar13 = (*(ulonglong *)(gen_frame + 0x8));
        uVar3 = (uint)uVar13 >> 8 & 0xff;
        param_1[8] = (uint)gen_fl2bits(((float)GEN_TOF((fVar11 * ((fVar8 - fVar9) * fVar10) + fVar9))));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 0)) = gen_bits2f((uint)(uVar13 & 0xff000000ff));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 4)) = gen_bits2f(param_1[0xb]);
        fVar8 = (float10)(int)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0x14)));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 0)) = gen_bits2f(uVar6);
        fVar9 = ((float10)GEN_TOD(gen_bits2f(param_1[0xb])));
        (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 2)) = (byte)(uVar13 >> 0x10);
        uVar7 = (uint)(*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 2));
        param_1[0xb] = (uint)gen_fl2bits(((float)GEN_TOF((((fVar8 - fVar9) * fVar10) * fVar11 + fVar9))));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 4)) = gen_bits2f(param_1[9]);
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 0)) = gen_bits2f(uVar3);
        fVar8 = ((float10)GEN_TOD(gen_bits2f(param_1[9])));
        param_1[9] = (uint)gen_fl2bits(((float)GEN_TOF(((((float10)uVar6 - fVar8) * fVar10) * fVar11 + fVar8)))
                                      );
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 4)) = gen_bits2f(param_1[0xc]);
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 0)) = gen_bits2f(uVar5);
        fVar8 = ((float10)GEN_TOD(gen_bits2f(param_1[0xc])));
        param_1[0xc] = (uint)gen_fl2bits(((float)GEN_TOF(((((float10)uVar3 - fVar8) * fVar10) * fVar11 +
                                                fVar8))));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 4)) = gen_bits2f(param_1[10]);
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 0)) = gen_bits2f(uVar7);
        fVar8 = ((float10)GEN_TOD(gen_bits2f(param_1[10])));
        param_1[10] = (uint)gen_fl2bits(((float)GEN_TOF(((((float10)uVar5 - fVar8) * fVar10) * fVar11 + fVar8
                                               ))));
        fVar1 = gen_bits2f(param_1[0xd]);
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 4)) = fVar1;
        (*(ulonglong *)(gen_frame + 0x14)) = CONCAT44((uint)gen_fl2bits(fVar1),uVar7);
        param_1[0xd] = (uint)gen_fl2bits(((float)GEN_TOF(((float10)fVar1 +
                                                (((float10)uVar7 - (float10)fVar1) * fVar10) *
                                                fVar11))));
        (*(ulonglong *)(gen_frame + 0x8)) = uVar13;
        puVar4 = ((uint *)GEN_TOP(F_00a60a40(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x2f)));
        param_1[0x10] = *puVar4;
        param_1[0x11] = puVar4[1];
        param_1[0x12] = puVar4[2];
        puVar4 = ((uint *)GEN_TOP(F_00a60a40((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x1e)));
        param_1[0x14] = *puVar4;
        param_1[0x15] = puVar4[1];
        param_1[0x16] = puVar4[2];
        fVar1 = (float)(((float10)GEN_TOD(gen_bits2f(param_1[2]))) + (float10)param_2);
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 0)) = fVar1;
        param_1[2] = (uint)gen_fl2bits(fVar1);
        if ((float10)fVar1 <= (float10)*(float *)&REFG(undefined, 0x14a0abc)) {
          return 1;
        }
        return 0;
      }
    }
  }
  return (uint)puVar2 & 0xffffff00;
}

/* ref: FUN_00993780 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00993780(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x993780u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0xb0, 0);
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
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  int iVar16;
  float * pfVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  fVar2 = *((float *)GEN_TOP((param_1 + 8)));
  (*(float *)(gen_frame + 0x4c)) = fVar2;
  fVar18 = (float10)fVar2;
  (*(float *)(gen_frame + 0x84)) = gen_bits2f(param_4);
  fVar2 = *((float *)GEN_TOP((param_1 + 0x30)));
  ((undefined1 *)(gen_frame + 0x94))[0] = (char)(int)*((float *)GEN_TOP((param_1 + 0x2c)));
  fVar1 = *((float *)GEN_TOP((param_1 + 0x34)));
  ((float *)(gen_frame + 0x0))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[0], REFG(float, 0x10df028));
  ((undefined1 *)(gen_frame + 0x94))[1] = (char)(int)fVar2;
  ((undefined1 *)(gen_frame + 0x94))[2] = (char)(int)fVar1;
  ((float *)(gen_frame + 0x0))[1] = gen_bits2f(REFG(float, 0x10947f8));
  ((undefined1 *)(gen_frame + 0x94))[3] = (char)(int)*((float *)GEN_TOP((param_1 + 0x20)));
  ((undefined1 *)(gen_frame + 0x94))[4] = (char)(int)*((float *)GEN_TOP((param_1 + 0x24)));
  ((undefined1 *)(gen_frame + 0x94))[5] = (char)(int)*((float *)GEN_TOP((param_1 + 0x28)));
  (*(float *)(gen_frame + 0x4c)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x8c)) = 0.0;
  pfVar17 = &(*(float *)(gen_frame + 0x90));
  fVar2 = (float)(fVar18 / (float10)*(double *)&REFG(undefined, 0x1088070));
  (*(float *)(gen_frame + 0x90)) = fVar2;
  if (!((float10)fVar2 < (float10)1)) {
    pfVar17 = &(*(float *)(gen_frame + 0x4c));
  }
  if (!((float10)0 < (float10)*pfVar17)) {
    pfVar17 = &(*(float *)(gen_frame + 0x8c));
  }
  fVar2 = *pfVar17;
  ((float *)(gen_frame + 0x0))[3] = fVar2;
  (*(float *)(gen_frame + 0x8c)) = 0.0;
  pfVar17 = &(*(float *)(gen_frame + 0x90));
  fVar1 = ((float)GEN_TOF(((fVar18 - (float10)*(float *)&REFG(undefined, 0x132f56c)) / (float10)*(double *)&REFG(undefined, 0x1088070))));
  (*(float *)(gen_frame + 0x90)) = fVar1;
  if (!((float10)fVar1 < (float10)1)) {
    pfVar17 = &(*(float *)(gen_frame + 0x4c));
  }
  if (!((float10)0 < (float10)*pfVar17)) {
    pfVar17 = &(*(float *)(gen_frame + 0x8c));
  }
  fVar1 = *pfVar17;
  fVar3 = *((float *)GEN_TOP((param_1 + 0x50)));
  (*(float *)(gen_frame + 0x4c)) = fVar3;
  (*(float *)(gen_frame + 0x90)) = fVar1;
  fVar4 = *((float *)GEN_TOP((param_1 + 0x40)));
  (*(float *)(gen_frame + 0x8c)) = fVar4;
  fVar18 = (float10)fVar3;
  fVar19 = (float10)fVar4;
  fVar3 = (float)(fVar18 - fVar19);
  ((float *)(gen_frame + 0x0))[2] = fVar3;
  (*(float *)(gen_frame + 0x60)) = fVar3;
  fVar4 = *((float *)GEN_TOP((param_1 + 0x54)));
  (*(float *)(gen_frame + 0x4c)) = fVar4;
  fVar5 = *((float *)GEN_TOP((param_1 + 0x44)));
  (*(float *)(gen_frame + 0x8c)) = fVar5;
  fVar20 = (float10)fVar4;
  fVar21 = (float10)fVar5;
  fVar4 = (float)(fVar20 - fVar21);
  (*(float *)(gen_frame + 0x8c)) = fVar4;
  (*(float *)(gen_frame + 0x64)) = fVar4;
  fVar5 = *((float *)GEN_TOP((param_1 + 0x58)));
  (*(float *)(gen_frame + 0x4c)) = fVar5;
  (*(float *)(gen_frame + 0x88)) = *((float *)GEN_TOP((param_1 + 0x48)));
  fVar22 = (float10)fVar5;
  fVar23 = (float10)*((float *)GEN_TOP((param_1 + 0x48)));
  fVar5 = (float)(fVar22 - fVar23);
  (*(float *)(gen_frame + 0x4c)) = fVar5;
  (*(float *)(gen_frame + 0x68)) = fVar5;
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar3 * (float10)fVar2);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar4 * (float10)fVar2);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar5 * (float10)fVar2);
  fVar6 = ((float)GEN_TOF(((float10)(float)((float10)fVar3 * (float10)fVar2) + fVar19)));
  (*(float *)(gen_frame + 0x20)) = fVar6;
  fVar7 = ((float)GEN_TOF(((float10)(float)((float10)fVar4 * (float10)fVar2) + fVar21)));
  (*(float *)(gen_frame + 0x24)) = fVar7;
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)fVar5 * (float10)fVar2) + fVar23)));
  (*(float *)(gen_frame + 0x28)) = fVar2;
  (*(float *)(gen_frame + 0x40)) = (float)((float10)fVar3 * (float10)fVar1);
  (*(float *)(gen_frame + 0x44)) = (float)((float10)fVar4 * (float10)fVar1);
  (*(float *)(gen_frame + 0x48)) = (float)((float10)fVar5 * (float10)fVar1);
  fVar3 = ((float)GEN_TOF(((float10)(float)((float10)fVar3 * (float10)fVar1) + fVar19)));
  (*(float *)(gen_frame + 0x10)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)(float)((float10)fVar4 * (float10)fVar1) + fVar21)));
  (*(float *)(gen_frame + 0x14)) = fVar4;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar5 * (float10)fVar1) + fVar23)));
  (*(float *)(gen_frame + 0x18)) = fVar1;
  (*(float *)(gen_frame + 0x60)) = (float)(fVar19 + fVar18);
  (*(float *)(gen_frame + 0x64)) = (float)(fVar21 + fVar20);
  (*(float *)(gen_frame + 0x68)) = (float)(fVar23 + fVar22);
  fVar24 = (float10)REFG(double, 0x1088108);
  fVar5 = ((float)GEN_TOF(((float10)(float)(fVar19 + fVar18) * fVar24)));
  (*(float *)(gen_frame + 0x30)) = fVar5;
  fVar8 = ((float)GEN_TOF(((float10)(float)(fVar21 + fVar20) * fVar24)));
  (*(float *)(gen_frame + 0x34)) = fVar8;
  fVar9 = ((float)GEN_TOF((fVar24 * (float10)(float)(fVar23 + fVar22))));
  (*(float *)(gen_frame + 0x38)) = fVar9;
  fVar10 = *param_2;
  (*(float *)(gen_frame + 0x90)) = fVar10;
  fVar5 = (float)((float10)fVar10 - (float10)fVar5);
  (*(float *)(gen_frame + 0x70)) = fVar5;
  fVar11 = param_2[1];
  (*(float *)(gen_frame + 0x4c)) = fVar11;
  fVar8 = (float)((float10)fVar11 - (float10)fVar8);
  (*(float *)(gen_frame + 0x74)) = fVar8;
  fVar12 = param_2[2];
  (*(float *)(gen_frame + 0x8c)) = fVar12;
  fVar9 = (float)((float10)fVar12 - (float10)fVar9);
  (*(float *)(gen_frame + 0x78)) = fVar9;
  (*(float *)(gen_frame + 0x50)) = (float)(fVar19 - fVar18);
  (*(float *)(gen_frame + 0x54)) = (float)(fVar21 - fVar20);
  (*(float *)(gen_frame + 0x58)) = (float)(fVar23 - fVar22);
  fVar6 = (float)((float10)fVar10 - (float10)fVar6);
  (*(float *)(gen_frame + 0x30)) = fVar6;
  fVar7 = (float)((float10)fVar11 - (float10)fVar7);
  (*(float *)(gen_frame + 0x34)) = fVar7;
  fVar2 = (float)((float10)fVar12 - (float10)fVar2);
  (*(float *)(gen_frame + 0x38)) = fVar2;
  fVar24 = (float10)fVar7;
  fVar25 = (float10)fVar6;
  fVar26 = (float10)fVar2;
  fVar2 = ((float)GEN_TOF((fVar26 * fVar26 + (fVar25 * fVar25 + fVar24 * fVar24))));
  (*(float *)(gen_frame + 0x88)) = fVar2;
  fVar2 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar2))));
  (*(float *)(gen_frame + 0x88)) = fVar2;
  (*(float *)(gen_frame + 0x48)) = (float)((float10)fVar2 / (float10)param_3);
  fVar2 = (float)((float10)fVar10 - (float10)fVar3);
  (*(float *)(gen_frame + 0x30)) = fVar2;
  fVar3 = (float)((float10)param_2[1] - (float10)fVar4);
  (*(float *)(gen_frame + 0x34)) = fVar3;
  fVar1 = (float)((float10)param_2[2] - (float10)fVar1);
  (*(float *)(gen_frame + 0x38)) = fVar1;
  fVar24 = (float10)fVar3;
  fVar25 = (float10)fVar2;
  fVar26 = (float10)fVar1;
  fVar2 = ((float)GEN_TOF((fVar26 * fVar26 + (fVar25 * fVar25 + fVar24 * fVar24))));
  (*(float *)(gen_frame + 0x88)) = fVar2;
  fVar2 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar2))));
  (*(float *)(gen_frame + 0x88)) = fVar2;
  (*(float *)(gen_frame + 0x4c)) = (float)((float10)fVar2 / (float10)param_3);
  fVar22 = GEN_X87((float10)(float)(fVar23 - fVar22));
  fVar23 = (float10)fVar8;
  fVar20 = GEN_X87((float10)(float)(fVar21 - fVar20));
  fVar21 = (float10)fVar9;
  (*(float *)(gen_frame + 0x60)) = (float)(fVar23 * fVar22 - fVar21 * fVar20);
  fVar18 = GEN_X87((float10)(float)(fVar19 - fVar18));
  fVar19 = (float10)fVar5;
  (*(float *)(gen_frame + 0x64)) = (float)(fVar18 * fVar21 - fVar19 * fVar22);
  (*(float *)(gen_frame + 0x68)) = (float)(fVar20 * fVar19 - fVar23 * fVar18);
  F_0046f390(&(*(float *)(gen_frame + 0x60)) GEN_EDX_FWD);
  fVar11 = (*(float *)(gen_frame + 0x84));
  fVar18 = (float10)(*(float *)(gen_frame + 0x60));
  fVar2 = ((float *)(gen_frame + 0x0))[(int)((int)gen_fl2bits((*(float *)(gen_frame + 0x84))))];
  (*(float *)(gen_frame + 0x84)) = fVar2;
  fVar19 = (float10)fVar2;
  (*(float *)(gen_frame + 0x88)) = fVar2;
  (*(float *)(gen_frame + 0x70)) = (float)(fVar19 * fVar18);
  fVar20 = (float10)(*(float *)(gen_frame + 0x64));
  (*(float *)(gen_frame + 0x74)) = (float)(fVar20 * fVar19);
  fVar21 = (float10)(*(float *)(gen_frame + 0x68));
  (*(float *)(gen_frame + 0x78)) = (float)(fVar21 * fVar19);
  fVar22 = (float10)(*(float *)(gen_frame + 0x48));
  fVar1 = ((float)GEN_TOF((fVar22 * (float10)(float)(fVar19 * fVar18))));
  (*(float *)(gen_frame + 0x50)) = fVar1;
  fVar3 = ((float)GEN_TOF(((float10)(float)(fVar20 * fVar19) * fVar22)));
  (*(float *)(gen_frame + 0x54)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)(float)(fVar21 * fVar19) * fVar22)));
  (*(float *)(gen_frame + 0x58)) = fVar4;
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)fVar1);
  (*(float *)(gen_frame + 0x30)) = fVar1;
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)fVar3);
  (*(float *)(gen_frame + 0x34)) = fVar3;
  fVar4 = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)fVar4);
  (*(float *)(gen_frame + 0x38)) = fVar4;
  fVar19 = (float10)fVar2;
  (*(float *)(gen_frame + 0x70)) = (float)(fVar19 * fVar18);
  (*(float *)(gen_frame + 0x74)) = (float)(fVar20 * fVar19);
  (*(float *)(gen_frame + 0x78)) = (float)(fVar19 * fVar21);
  fVar5 = ((float)GEN_TOF(((float10)(float)(fVar19 * fVar18) * fVar22)));
  (*(float *)(gen_frame + 0x50)) = fVar5;
  fVar6 = ((float)GEN_TOF(((float10)(float)(fVar20 * fVar19) * fVar22)));
  (*(float *)(gen_frame + 0x54)) = fVar6;
  fVar7 = ((float)GEN_TOF(((float10)(float)(fVar19 * fVar21) * fVar22)));
  (*(float *)(gen_frame + 0x58)) = fVar7;
  fVar5 = (float)((float10)fVar5 + (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x60)) = fVar5;
  fVar6 = (float)((float10)fVar6 + (float10)(*(float *)(gen_frame + 0x24)));
  (*(float *)(gen_frame + 0x64)) = fVar6;
  fVar7 = (float)((float10)fVar7 + (float10)(*(float *)(gen_frame + 0x28)));
  (*(float *)(gen_frame + 0x68)) = fVar7;
  fVar19 = (float10)fVar2;
  (*(float *)(gen_frame + 0x70)) = (float)(fVar19 * fVar18);
  (*(float *)(gen_frame + 0x74)) = (float)(fVar20 * fVar19);
  (*(float *)(gen_frame + 0x78)) = (float)(fVar19 * fVar21);
  fVar22 = (float10)(*(float *)(gen_frame + 0x4c));
  fVar8 = ((float)GEN_TOF((fVar22 * (float10)(float)(fVar19 * fVar18))));
  (*(float *)(gen_frame + 0x50)) = fVar8;
  fVar9 = ((float)GEN_TOF(((float10)(float)(fVar20 * fVar19) * fVar22)));
  (*(float *)(gen_frame + 0x54)) = fVar9;
  fVar10 = ((float)GEN_TOF(((float10)(float)(fVar19 * fVar21) * fVar22)));
  (*(float *)(gen_frame + 0x58)) = fVar10;
  fVar8 = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)fVar8);
  (*(float *)(gen_frame + 0x20)) = fVar8;
  fVar9 = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)fVar9);
  (*(float *)(gen_frame + 0x24)) = fVar9;
  fVar10 = (float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)fVar10);
  (*(float *)(gen_frame + 0x28)) = fVar10;
  fVar19 = (float10)fVar2;
  (*(float *)(gen_frame + 0x70)) = (float)(fVar19 * fVar18);
  (*(float *)(gen_frame + 0x74)) = (float)(fVar19 * fVar20);
  param_5[6] = fVar5;
  (*(float *)(gen_frame + 0x78)) = (float)(fVar21 * fVar19);
  param_5[7] = fVar6;
  param_5[8] = fVar7;
  fVar2 = ((float)GEN_TOF(((float10)(float)(fVar19 * fVar18) * fVar22)));
  (*(float *)(gen_frame + 0x50)) = fVar2;
  param_5[0xc] = fVar8;
  param_5[0xd] = fVar9;
  iVar16 = (int)gen_fl2bits(fVar11) * 3;
  fVar5 = ((float)GEN_TOF(((float10)(float)(fVar19 * fVar20) * fVar22)));
  (*(float *)(gen_frame + 0x54)) = fVar5;
  uVar13 = ((undefined1 *)(gen_frame + 0x94))[(int)(iVar16 + 1)];
  uVar14 = ((undefined1 *)(gen_frame + 0x94))[(int)(iVar16)];
  uVar15 = ((undefined1 *)(gen_frame + 0x94))[(int)(iVar16 + 2)];
  *param_5 = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)(float)(fVar21 * fVar19) * fVar22)));
  (*(float *)(gen_frame + 0x58)) = fVar1;
  param_5[0xe] = fVar10;
  param_5[1] = fVar3;
  *((undefined1 *)GEN_TOP(((int)param_5 + 0xd))) = uVar13;
  *((undefined1 *)GEN_TOP(((int)param_5 + 0x25))) = uVar13;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x10)) + (float10)fVar2);
  (*(float *)(gen_frame + 0x70)) = fVar2;
  *((undefined1 *)GEN_TOP(((int)param_5 + 0x3d))) = uVar13;
  param_5[0x12] = fVar2;
  *((undefined1 *)GEN_TOP(((int)param_5 + 0x55))) = uVar13;
  fVar2 = (float)((float10)fVar5 + (float10)(*(float *)(gen_frame + 0x14)));
  (*(float *)(gen_frame + 0x74)) = fVar2;
  param_5[2] = fVar4;
  fVar3 = REFG(float, 0x1087f04);
  param_5[0x13] = fVar2;
  fVar2 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x18)));
  (*(float *)(gen_frame + 0x78)) = fVar2;
  *(undefined1 *)(param_5 + 3) = uVar14;
  *((undefined1 *)GEN_TOP(((int)param_5 + 0xe))) = uVar15;
  *((undefined1 *)GEN_TOP(((int)param_5 + 0xf))) = 0xff;
  param_5[4] = fVar3;
  param_5[5] = 0.0;
  *(undefined1 *)(param_5 + 9) = uVar14;
  *((undefined1 *)GEN_TOP(((int)param_5 + 0x26))) = uVar15;
  *((undefined1 *)GEN_TOP(((int)param_5 + 0x27))) = 0xff;
  param_5[10] = fVar3;
  param_5[0xb] = fVar3;
  *(undefined1 *)(param_5 + 0xf) = uVar14;
  *((undefined1 *)GEN_TOP(((int)param_5 + 0x3e))) = uVar15;
  *((undefined1 *)GEN_TOP(((int)param_5 + 0x3f))) = 0xff;
  param_5[0x10] = 0.0;
  param_5[0x11] = 0.0;
  param_5[0x14] = fVar2;
  *(undefined1 *)(param_5 + 0x15) = uVar14;
  *((undefined1 *)GEN_TOP(((int)param_5 + 0x56))) = uVar15;
  *((undefined1 *)GEN_TOP(((int)param_5 + 0x57))) = 0xff;
  param_5[0x16] = 0.0;
  param_5[0x17] = fVar3;
  return CONCAT31((int3)((uint)gen_fl2bits(fVar11) >> 8),uVar14);
}

/* ref: FUN_00993d90 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00993d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x993d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint * puVar4;
  uint uVar5;
  char * PTR32 * ppcVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_004ff310(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_FWD,0,0);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined2 *)(gen_frame + 0x31)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x746578;
  (*(undefined4 *)(gen_frame + 0x20)) = 5;
  (*(undefined4 *)(gen_frame + 0x2d)) = 0x101;
  (*(undefined1 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 5000;
  (*(undefined1 *)(gen_frame + 0x2c)) = 0;
  ((char * PTR32 *)(gen_frame + 0x0))[0] = ((char *)REFP(0x10dcc20));
  ((char * PTR32 *)(gen_frame + 0x0))[1] = ((char *)REFP(0x10dcc50));
  ((char * PTR32 *)(gen_frame + 0x0))[2] = "common/graphics/texture/-line005_o.tex";
  ((char * PTR32 *)(gen_frame + 0x0))[3] = "common/graphics/texture/-line005_o.tex";
  ppcVar6 = ((char * PTR32 *)(gen_frame + 0x0));
  puVar4 = ((uint *)GEN_TOP(((int)this + 0x50)));
  (*(int *)(gen_frame + 0x44)) = 2;
  do {
    (*(int *)(gen_frame + 0x40)) = 2;
    do {
      uVar5 = F_00513d20(((undefined1 *)(gen_frame + 0x3c)),&(*(undefined4 *)(gen_frame + 0x38)),*ppcVar6,&(*(undefined4 *)(gen_frame + 0x10)),0,0);
      *puVar4 = uVar5;
      ppcVar6 = ppcVar6 + 1;
      puVar4 = puVar4 + 1;
      iVar1 = (*(int *)(gen_frame + 0x40)) - 1;
      (*(int *)(gen_frame + 0x40)) = iVar1;
    } while (iVar1 != 0);
    iVar1 = (*(int *)(gen_frame + 0x44)) - 1;
    (*(int *)(gen_frame + 0x44)) = iVar1;
  } while (iVar1 != 0);
  F_004d58e0(((undefined1 *)(gen_frame + 0x48)) GEN_EDX_ARG,0,0,0x23,0);
  F_004d58e0(((undefined1 *)(gen_frame + 0x4c)) GEN_EDX_ARG,0,0xc,0x44,8);
  F_004d58e0(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG,0,0x10,0x22,9);
  uVar5 = F_004deb40(REFG(void * PTR32, 0x1370b90) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x48)),3);
  *((uint *)GEN_TOP(((int)this + 0x74))) = uVar5;
  uVar5 = F_004dcc90(0x38400,1,0);
  *((uint *)GEN_TOP(((int)this + 0x6c))) = uVar5;
  uVar5 = F_004dccf0(0xd800,1,1,0);
  *((uint *)GEN_TOP(((int)this + 0x70))) = uVar5;
  uVar5 = F_004dcd60(0x40,2,0);
  *((uint *)GEN_TOP(((int)this + 0x68))) = uVar5;
  uVar5 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))) GEN_EDX_ARG,((char *)REFP(0x10dcccc)));
  *((uint *)GEN_TOP(((int)this + 0x60))) = uVar5;
  uVar5 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x20))) GEN_EDX_ARG,((char *)REFP(0x10dcce0)));
  *((uint *)GEN_TOP(((int)this + 100))) = uVar5;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x78))),0,0xc0);
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x138))),0,0xc0);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109482c)));
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x44))), REFG(float, 0x109482c));
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = uVar2;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1fc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  return 1;
}

/* ref: FUN_00993fa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00993fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x993fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  int * piVar3;
  int local_8;
  
  piVar3 = ((int *)GEN_TOP(((int)this + 0x50)));
  local_8 = 2;
  do {
    iVar2 = 2;
    do {
      uVar1 = 0;
      if (*piVar3 != 0) {
        uVar1 = F_0050c620(*piVar3,0,0);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x68)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  }
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x74)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  }
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x70)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  }
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x6c)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  }
  piVar3 = ((int *)GEN_TOP(((int)this + 0x78)));
  iVar2 = 0x30;
  do {
    if (*piVar3 != 0) {
      *((int *)GEN_TOP(((int)this + 0x1f8))) = *((int *)GEN_TOP(((int)this + 0x1f8))) - 1;
      uVar1 = 0;
      if (*piVar3 != 0) {
        uVar1 = F_00406ad0(*piVar3);
      }
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  piVar3 = ((int *)GEN_TOP(((int)this + 0x138)));
  iVar2 = 0x30;
  do {
    if (*piVar3 != 0) {
      *((int *)GEN_TOP(((int)this + 0x1f8))) = *((int *)GEN_TOP(((int)this + 0x1f8))) - 1;
      uVar1 = 0;
      if (*piVar3 != 0) {
        uVar1 = F_00406ad0(*piVar3);
      }
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00994090 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00994090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x994090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int * piVar1;
  int iVar2;
  int * piVar3;
  undefined * this_00;
  uint uVar4;
  int * piVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if ((*((int *)GEN_TOP(((int)this + 0x200))) == 0) && (param_1 != param_2)) {
    piVar3 = ((int *)GEN_TOP(((int)this + 0x138)));
    (*(int *)(gen_frame + 0x0)) = param_1;
    (*(int *)(gen_frame + 0x4)) = param_2;
    iVar2 = 0;
    piVar5 = piVar3;
    do {
      piVar1 = ((int *)GEN_TOP(*piVar5));
      if (((piVar1 != ((int *)GEN_TOP(0x0))) && (*piVar1 == param_1)) && (piVar1[1] == param_2)) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < 0x30);
    iVar2 = 0;
    do {
      if (*piVar3 == 0) {
        *((int *)GEN_TOP(((int)this + 0x1f8))) = *((int *)GEN_TOP(((int)this + 0x1f8))) + 1;
        this_00 = ((undefined *)GEN_TOP(F_00406b90(0x60,0,0)));
        if (this_00 != ((undefined *)GEN_TOP(0x0))) {
          uVar4 = F_00993410(this_00 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)));
          *((uint *)GEN_TOP(((int)this + iVar2 * 4 + 0x138))) = uVar4;
          return 1;
        }
        *((undefined4 *)GEN_TOP(((int)this + iVar2 * 4 + 0x138))) = 0;
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < 0x30);
  }
  return 0;
}

/* ref: FUN_00994150 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00994150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x994150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0xb4, 12, 4);
  int iVar1;
  uint uVar2;
  char * PTR32 * ppcVar3;
  uint * puVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0));
  F_004ff310(((undefined1 *)(gen_frame + 0x8c)) GEN_EDX_FWD,0,0);
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined2 *)(gen_frame + 0x81)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0x746578;
  (*(undefined4 *)(gen_frame + 0x70)) = 5;
  (*(undefined4 *)(gen_frame + 0x7d)) = 0x101;
  (*(undefined1 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 5000;
  (*(undefined1 *)(gen_frame + 0x7c)) = 0;
  ((char * PTR32 *)(gen_frame + 0x0))[0] = ((char *)REFP(0x10dccf4));
  ((char * PTR32 *)(gen_frame + 0x0))[1] = "common/graphics/texture/-ch_msk_002af.tex";
  ((char * PTR32 *)(gen_frame + 0x0))[2] = "common/graphics/texture/-ch_dist001cf.tex";
  ((char * PTR32 *)(gen_frame + 0x0))[3] = "common/graphics/texture/-ch_ele_000af.tex";
  (*(char * PTR32 *)(gen_frame + 0x10)) = "common/graphics/texture/-ch_msk_002af.tex";
  (*(char * PTR32 *)(gen_frame + 0x14)) = "common/graphics/texture/-ch_dist001cf.tex";
  (*(char * PTR32 *)(gen_frame + 0x18)) = "common/graphics/texture/-ch_ele_000af.tex";
  (*(char * PTR32 *)(gen_frame + 0x1c)) = "common/graphics/texture/-ch_msk_002af.tex";
  (*(char * PTR32 *)(gen_frame + 0x20)) = "common/graphics/texture/-ch_dist001cf.tex";
  (*(char * PTR32 *)(gen_frame + 0x24)) = "common/graphics/texture/-ch_ele_000af.tex";
  (*(char * PTR32 *)(gen_frame + 0x28)) = "common/graphics/texture/-ch_msk_002af.tex";
  (*(char * PTR32 *)(gen_frame + 0x2c)) = "common/graphics/texture/-ch_dist001cf.tex";
  (*(char * PTR32 *)(gen_frame + 0x30)) = "common/graphics/texture/-ch_ele_000af.tex";
  (*(char * PTR32 *)(gen_frame + 0x34)) = "common/graphics/texture/-ch_msk_002af.tex";
  (*(char * PTR32 *)(gen_frame + 0x38)) = "common/graphics/texture/-ch_dist001cf.tex";
  (*(char * PTR32 *)(gen_frame + 0x3c)) = "common/graphics/texture/-ch_ele_000af.tex";
  (*(char * PTR32 *)(gen_frame + 0x40)) = "common/graphics/texture/-ch_msk_002af.tex";
  (*(char * PTR32 *)(gen_frame + 0x44)) = "common/graphics/texture/-ch_dist001cf.tex";
  (*(char * PTR32 *)(gen_frame + 0x48)) = "common/graphics/texture/-ch_ele_000af.tex";
  (*(char * PTR32 *)(gen_frame + 0x4c)) = "common/graphics/texture/-ch_msk_002af.tex";
  (*(char * PTR32 *)(gen_frame + 0x50)) = "common/graphics/texture/-ch_dist001cf.tex";
  (*(char * PTR32 *)(gen_frame + 0x54)) = "common/graphics/texture/-ch_ele_000af.tex";
  (*(char * PTR32 *)(gen_frame + 0x58)) = "common/graphics/texture/-ch_msk_002af.tex";
  (*(char * PTR32 *)(gen_frame + 0x5c)) = "common/graphics/texture/-ch_dist001cf.tex";
  ppcVar3 = ((char * PTR32 *)(gen_frame + 0x0));
  puVar4 = ((uint *)GEN_TOP(((int)this + 0x10)));
  (*(int *)(gen_frame + 0x94)) = 8;
  do {
    (*(int *)(gen_frame + 0x90)) = 3;
    do {
      uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x8c)),&(*(undefined4 *)(gen_frame + 0x88)),*ppcVar3,&(*(undefined4 *)(gen_frame + 0x60)),0,0);
      *puVar4 = uVar2;
      ppcVar3 = ppcVar3 + 1;
      puVar4 = puVar4 + 1;
      iVar1 = (*(int *)(gen_frame + 0x90)) - 1;
      (*(int *)(gen_frame + 0x90)) = iVar1;
    } while (iVar1 != 0);
    iVar1 = (*(int *)(gen_frame + 0x94)) - 1;
    (*(int *)(gen_frame + 0x94)) = iVar1;
  } while (iVar1 != 0);
  F_004d58e0(((undefined1 *)(gen_frame + 0x98)) GEN_EDX_ARG,0,0,0x23,0);
  F_004d58e0(((undefined1 *)(gen_frame + 0x9c)) GEN_EDX_ARG,0,0xc,0x44,8);
  F_004d58e0(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG,0,0x10,0x22,9);
  F_004d58e0(((undefined1 *)(gen_frame + 0xa4)) GEN_EDX_ARG,0,0x18,0x22,10);
  F_004d58e0(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,0,0x20,0x22,0xb);
  uVar2 = F_004deb40(REFG(void * PTR32, 0x1370b90) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x98)),5);
  *((uint *)GEN_TOP(((int)this + 0x8c))) = uVar2;
  uVar2 = F_004dcc90(0x5000,1,0);
  *((uint *)GEN_TOP(((int)this + 0x84))) = uVar2;
  uVar2 = F_004dccf0(0x600,1,1,0);
  *((uint *)GEN_TOP(((int)this + 0x88))) = uVar2;
  uVar2 = F_004dcd60(0x40,2,0);
  *((uint *)GEN_TOP(((int)this + 0x80))) = uVar2;
  uVar2 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))) GEN_EDX_ARG,((char *)REFP(0x10dd114)));
  *((uint *)GEN_TOP(((int)this + 0x70))) = uVar2;
  uVar2 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x20))) GEN_EDX_ARG,((char *)REFP(0x10dd128)));
  *((uint *)GEN_TOP(((int)this + 0x74))) = uVar2;
  uVar2 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x20))) GEN_EDX_ARG,((char *)REFP(0x10dd13c)));
  *((uint *)GEN_TOP(((int)this + 0x78))) = uVar2;
  uVar2 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x20))) GEN_EDX_ARG,((char *)REFP(0x10dd150)));
  *((uint *)GEN_TOP(((int)this + 0x7c))) = uVar2;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x90))),0,0x200);
  *((undefined4 *)GEN_TOP(((int)this + 0x294))) = 0;
  return 1;
}

/* ref: FUN_00994410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00994410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x994410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  int iVar3;
  int local_8;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x80)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x8c)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x88)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x84)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  }
  piVar2 = ((int *)GEN_TOP(((int)this + 0x10)));
  local_8 = 8;
  do {
    iVar3 = 3;
    do {
      if (*piVar2 != 0) {
        F_0050c620(*piVar2,0,0);
        *piVar2 = 0;
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  piVar2 = ((int *)GEN_TOP(((int)this + 0x90)));
  iVar3 = 0x80;
  do {
    uVar1 = 0;
    if (*piVar2 != 0) {
      uVar1 = F_00406ad0(*piVar2);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0x290))) = 0;
  return uVar1;
}

/* ref: FUN_009944e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009944e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9944e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int * in_EAX = 0;
  
  if (((*param_1 != 0) &&
      (in_EAX = ((int *)GEN_TOP(((int)this + param_1[1] * 4 + 0x90))),
      *((int *)GEN_TOP(((int)this + param_1[1] * 4 + 0x90))) != 0)) && (*((int *)GEN_TOP((*in_EAX + 0x28))) == *param_1))
  {
    *((int *)GEN_TOP(((int)this + 0x290))) = *((int *)GEN_TOP(((int)this + 0x290))) - 1;
    in_EAX = ((int *)GEN_TOP(((int)this + param_1[1] * 4 + 0x90)));
    if (*((int *)GEN_TOP(((int)this + param_1[1] * 4 + 0x90))) != 0) {
      iVar1 = *in_EAX;
      in_EAX = ((int *)GEN_TOP(0x0));
      if (iVar1 != 0) {
        in_EAX = ((int *)GEN_TOP(F_00406ad0(iVar1)));
      }
      *((undefined4 *)GEN_TOP(((int)this + param_1[1] * 4 + 0x90))) = 0;
    }
    *param_1 = 0;
  }
  return (uint)in_EAX;
}

/* ref: FUN_00994550 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00994550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x994550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0d00)));
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0xff808080;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = uVar1;
  iVar2 = 0;
  do {
    if ((&REFG(undefined4, 0x14a06d8))[(int)(iVar2)] == 0) {
      (&REFG(undefined4, 0x14a06d8))[(int)(iVar2)] = this;
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return 0;
}

/* ref: FUN_009945a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009945a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9945a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 4))));
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  piVar1 = &REFG(undefined4, 0x14a06d8);
  do {
    if (((undefined *)GEN_TOP(*piVar1)) == this) {
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x14a0718);
  return 0;
}

/* ref: FUN_009945e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009945e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9945e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x1f0, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  float * pfVar12;
  float10 fVar13;
  float10 fVar14;
  
  uVar11 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1e0);
  (*(uint *)(gen_frame + 0x1dc)) = uVar11;
  if (*(int *)this != 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      F_00406b30(*((int *)GEN_TOP(((int)this + 4))));
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    }
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10c))))(*(int * PTR32 *)this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x180)));
    (*(float *)(gen_frame + 0x160)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x1c0))) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x164)) = gen_bits2f((*(uint *)(gen_frame + 0x1c4)));
    (*(float *)(gen_frame + 0x168)) = 0.0;
    pfVar12 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0xe0)),&(*(float *)(gen_frame + 0x160)),((undefined1 *)(gen_frame + 0x180)))));
    (*(float *)(gen_frame + 0x130)) = *pfVar12;
    (*(float *)(gen_frame + 0x134)) = pfVar12[1];
    (*(float *)(gen_frame + 0x138)) = pfVar12[2];
    (*(float *)(gen_frame + 0x160)) = (*(float *)(gen_frame + 0x1c0));
    (*(float *)(gen_frame + 0x164)) = gen_bits2f((*(uint *)(gen_frame + 0x1c4)));
    (*(float *)(gen_frame + 0x168)) = 0.0;
    pfVar12 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0xe0)),&(*(float *)(gen_frame + 0x160)),((undefined1 *)(gen_frame + 0x180)))));
    (*(float *)(gen_frame + 0x150)) = *pfVar12;
    (*(float *)(gen_frame + 0x154)) = pfVar12[1];
    fVar1 = pfVar12[2];
    (*(float *)(gen_frame + 0x160)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x1c0))) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x158)) = fVar1;
    (*(float *)(gen_frame + 0x164)) = gen_bits2f((*(uint *)(gen_frame + 0x1c4)) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x168)) = 0.0;
    pfVar12 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0xe0)),&(*(float *)(gen_frame + 0x160)),((undefined1 *)(gen_frame + 0x180)))));
    (*(float *)(gen_frame + 0x110)) = *pfVar12;
    (*(float *)(gen_frame + 0x114)) = pfVar12[1];
    (*(float *)(gen_frame + 0x118)) = pfVar12[2];
    (*(float *)(gen_frame + 0x160)) = (*(float *)(gen_frame + 0x1c0));
    (*(float *)(gen_frame + 0x164)) = gen_bits2f((*(uint *)(gen_frame + 0x1c4)) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x168)) = 0.0;
    pfVar12 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0xe0)),&(*(float *)(gen_frame + 0x160)),((undefined1 *)(gen_frame + 0x180)))));
    (*(float *)(gen_frame + 0xa0)) = *pfVar12;
    (*(float *)(gen_frame + 0xa4)) = pfVar12[1];
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0x150)) - (float10)(*(float *)(gen_frame + 0x130)));
    (*(float *)(gen_frame + 0xfc)) = fVar1;
    (*(float *)(gen_frame + 0x140)) = fVar1;
    (*(float *)(gen_frame + 0xa8)) = pfVar12[2];
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x154)) - (float10)(*(float *)(gen_frame + 0x134)));
    (*(float *)(gen_frame + 0x128)) = fVar2;
    (*(float *)(gen_frame + 0x144)) = fVar2;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0x158)) - (float10)(*(float *)(gen_frame + 0x138)));
    (*(float *)(gen_frame + 0x12c)) = fVar3;
    (*(float *)(gen_frame + 0x148)) = fVar3;
    fVar1 = ((float)GEN_TOF(((float10)fVar3 * (float10)fVar3 +
                   ((float10)fVar2 * (float10)fVar2 + (float10)fVar1 * (float10)fVar1))));
    (*(float *)(gen_frame + 0x178)) = fVar1;
    fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar1))));
    (*(float *)(gen_frame + 0x178)) = fVar1;
    uVar9 = (uint)((double)fVar1 / *(double *)&REFG(undefined, 0x10920a8));
    uVar11 = 0;
    if (uVar9 != 0) {
      *((uint *)GEN_TOP(((int)this + 8))) = uVar9;
      uVar11 = F_00406bb0(-(uint)((int)((ulonglong)uVar9 * 0x10 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar9 * 0x10),0,0);
      *((uint *)GEN_TOP(((int)this + 4))) = uVar11;
      uVar11 = 0;
      (*(float *)(gen_frame + 0x178)) = 0.0;
      if (0 < (int)uVar9) {
        (*(float *)(gen_frame + 0xf8)) = (float)(int)(uVar9 - 1);
        (*(int *)(gen_frame + 0x174)) = 0;
        do {
          (*(float *)(gen_frame + 0x17c)) = (float)((float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x178))) / (float10)(*(float *)(gen_frame + 0xf8)));
          fVar13 = GEN_X87((float10)(float)((float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x178))) / (float10)(*(float *)(gen_frame + 0xf8))));
          if (uVar9 == 1) {
            (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x130));
            (*(float *)(gen_frame + 0x44)) = (*(float *)(gen_frame + 0x134));
            (*(float *)(gen_frame + 0x48)) = (*(float *)(gen_frame + 0x138));
            pfVar12 = &(*(float *)(gen_frame + 0x40));
          }
          else {
            pfVar12 = &(*(float *)(gen_frame + 0x20));
            (*(float *)(gen_frame + 0xc0)) = (*(float *)(gen_frame + 0xfc));
            (*(float *)(gen_frame + 0xc4)) = (*(float *)(gen_frame + 0x128));
            (*(float *)(gen_frame + 0xc8)) = (*(float *)(gen_frame + 0x12c));
            (*(float *)(gen_frame + 0xd0)) = (float)((float10)(*(float *)(gen_frame + 0xfc)) * fVar13);
            (*(float *)(gen_frame + 0xd4)) = (float)((float10)(*(float *)(gen_frame + 0x128)) * fVar13);
            (*(float *)(gen_frame + 0xd8)) = (float)((float10)(*(float *)(gen_frame + 0x12c)) * fVar13);
            fVar1 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0xfc)) * fVar13) + (float10)(*(float *)(gen_frame + 0x130)))));
            (*(float *)(gen_frame + 0x50)) = fVar1;
            fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x128)) * fVar13) + (float10)(*(float *)(gen_frame + 0x134)))));
            (*(float *)(gen_frame + 0x54)) = fVar2;
            fVar3 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x12c)) * fVar13) + (float10)(*(float *)(gen_frame + 0x138)))));
            (*(float *)(gen_frame + 0x58)) = fVar3;
            (*(float *)(gen_frame + 0x20)) = fVar1;
            (*(float *)(gen_frame + 0x24)) = fVar2;
            (*(float *)(gen_frame + 0x28)) = fVar3;
          }
          fVar1 = *pfVar12;
          (*(float *)(gen_frame + 0x100)) = fVar1;
          fVar2 = pfVar12[1];
          (*(float *)(gen_frame + 0x104)) = fVar2;
          fVar3 = pfVar12[2];
          (*(float *)(gen_frame + 0x108)) = fVar3;
          if (uVar9 == 1) {
            (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x110));
            (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x114));
            (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x118));
            pfVar12 = &(*(float *)(gen_frame + 0x30));
          }
          else {
            pfVar12 = &(*(float *)(gen_frame + 0xe0));
            fVar4 = (float)((float10)(*(float *)(gen_frame + 0xa0)) - (float10)(*(float *)(gen_frame + 0x110)));
            (*(float *)(gen_frame + 0x90)) = fVar4;
            fVar5 = (float)((float10)(*(float *)(gen_frame + 0xa4)) - (float10)(*(float *)(gen_frame + 0x114)));
            (*(float *)(gen_frame + 0x94)) = fVar5;
            fVar6 = (float)((float10)(*(float *)(gen_frame + 0xa8)) - (float10)(*(float *)(gen_frame + 0x118)));
            (*(float *)(gen_frame + 0x98)) = fVar6;
            fVar4 = (float)((float10)fVar4 * fVar13);
            (*(float *)(gen_frame + 0x70)) = fVar4;
            fVar5 = (float)((float10)fVar5 * fVar13);
            (*(float *)(gen_frame + 0x74)) = fVar5;
            fVar6 = (float)(fVar13 * (float10)fVar6);
            (*(float *)(gen_frame + 0x78)) = fVar6;
            fVar4 = (float)((float10)(*(float *)(gen_frame + 0x110)) + (float10)fVar4);
            (*(float *)(gen_frame + 0x60)) = fVar4;
            fVar5 = (float)((float10)(*(float *)(gen_frame + 0x114)) + (float10)fVar5);
            (*(float *)(gen_frame + 0x64)) = fVar5;
            fVar6 = (float)((float10)(*(float *)(gen_frame + 0x118)) + (float10)fVar6);
            (*(float *)(gen_frame + 0x68)) = fVar6;
            (*(float *)(gen_frame + 0xe0)) = fVar4;
            (*(float *)(gen_frame + 0xe4)) = fVar5;
            (*(float *)(gen_frame + 0xe8)) = fVar6;
          }
          (*(float *)(gen_frame + 0x150)) = *pfVar12;
          (*(float *)(gen_frame + 0x154)) = pfVar12[1];
          (*(float *)(gen_frame + 0x158)) = pfVar12[2];
          fVar4 = (float)((float10)*pfVar12 - (float10)fVar1);
          (*(float *)(gen_frame + 0x140)) = fVar4;
          fVar5 = (float)((float10)pfVar12[1] - (float10)fVar2);
          (*(float *)(gen_frame + 0x144)) = fVar5;
          fVar6 = (float)((float10)pfVar12[2] - (float10)fVar3);
          (*(float *)(gen_frame + 0x148)) = fVar6;
          fVar7 = ((float)GEN_TOF(((float10)fVar6 * (float10)fVar6 +
                         ((float10)fVar5 * (float10)fVar5 + (float10)fVar4 * (float10)fVar4))));
          (*(float *)(gen_frame + 0x17c)) = fVar7;
          fVar7 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar7))));
          (*(float *)(gen_frame + 0x17c)) = fVar7;
          fVar13 = (float10)fVar7;
          iVar8 = *((int *)GEN_TOP(((int)this + 4)));
          (*(float *)(gen_frame + 0x0)) = fVar1;
          (*(float *)(gen_frame + 0x4)) = fVar2;
          (*(float *)(gen_frame + 0x8)) = fVar3;
          fVar1 = (float)((float10)1 / fVar13);
          (*(float *)(gen_frame + 0x17c)) = fVar1;
          fVar14 = (float10)fVar1;
          (*(float *)(gen_frame + 0x80)) = (float)(fVar14 * (float10)fVar4);
          (*(float *)(gen_frame + 0x84)) = (float)((float10)fVar5 * fVar14);
          (*(float *)(gen_frame + 0x88)) = (float)(fVar14 * (float10)fVar6);
          (*(float *)(gen_frame + 0x10)) = (float)(fVar14 * (float10)fVar4);
          (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar5 * fVar14);
          (*(float *)(gen_frame + 0x18)) = (float)(fVar14 * (float10)fVar6);
          fVar1 = (float)((float10)1 + fVar13);
          (*(float *)(gen_frame + 0x17c)) = fVar1;
          bVar10 = F_00a1c690(&(*(float *)(gen_frame + 0x0)),fVar1,iVar8 + (*(int *)(gen_frame + 0x174)),0);
          if (bVar10 == 0) {
            pfVar12 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + (*(int *)(gen_frame + 0x174)))));
            (*(float *)(gen_frame + 0xb0)) = (float)((float10)(*(float *)(gen_frame + 0x150)) + (float10)(*(float *)(gen_frame + 0x100)));
            (*(float *)(gen_frame + 0xb4)) = (float)((float10)(*(float *)(gen_frame + 0x154)) + (float10)(*(float *)(gen_frame + 0x104)));
            (*(float *)(gen_frame + 0xb8)) = (float)((float10)(*(float *)(gen_frame + 0x158)) + (float10)(*(float *)(gen_frame + 0x108)));
            fVar13 = (float10)REFG(double, 0x1088108);
            fVar1 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x150)) + (float10)(*(float *)(gen_frame + 0x100))) * fVar13)));
            (*(float *)(gen_frame + 0x160)) = fVar1;
            fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x154)) + (float10)(*(float *)(gen_frame + 0x104))) * fVar13)));
            (*(float *)(gen_frame + 0x164)) = fVar2;
            fVar3 = ((float)GEN_TOF((fVar13 * (float10)(float)((float10)(*(float *)(gen_frame + 0x158)) + (float10)(*(float *)(gen_frame + 0x108))))));
            (*(float *)(gen_frame + 0x168)) = fVar3;
            *pfVar12 = fVar1;
            pfVar12[1] = fVar2;
            pfVar12[2] = fVar3;
          }
          else {
            *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4 + (*(int *)(gen_frame + 0x174))))) =
                 ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4 + (*(int *)(gen_frame + 0x174))))) +
                        (float10)REFG(double, 0x1088130))));
          }
          (*(int *)(gen_frame + 0x174)) = (*(int *)(gen_frame + 0x174)) + 0x10;
          uVar11 = (int)gen_fl2bits((*(float *)(gen_frame + 0x178))) + 1;
          (*(float *)(gen_frame + 0x178)) = gen_bits2f(uVar11);
        } while ((int)uVar11 < (int)uVar9);
      }
    }
  }
  return uVar11;
}

/* ref: FUN_00994cb0 */
GEN_OWN_GS GEN_FRAME uint F_00994cb0(void)
{
  GEN_ENTER(0x994cb0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_GS(0x44, 12, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  F_00c48350(&REFG(undefined4, 0x14a06d8),0,0x40);
  F_004ff310(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG,0,0);
  (*(undefined4 *)(gen_frame + 0x28)) = 0x746578;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 5;
  (*(undefined4 *)(gen_frame + 0x1d)) = 0x101;
  (*(undefined2 *)(gen_frame + 0x21)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined1 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 5000;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0;
  REFG(undefined4, 0x14a06d0) = F_00513d20(((undefined1 *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x28)),((char *)REFP(0x10dd168)),&(*(undefined4 *)(gen_frame + 0x0)),0
                              ,0);
  F_004d58e0(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,0,0,0x23,0);
  F_004d58e0(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,0,0xc,0x24,8);
  F_004d58e0(((undefined1 *)(gen_frame + 0x38)) GEN_EDX_ARG,0,0x1c,0x22,9);
  REFG(undefined4, 0x14a06bc) = F_004deb40(REFG(void * PTR32, 0x1370b90) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)),3);
  REFG(undefined4, 0x14a06c0) = F_004dcc90(0x1b000,1,0);
  REFG(undefined4, 0x14a06c4) = F_004dcd60(0x40,2,0);
  REFG(undefined4, 0x14a06cc) = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))) GEN_EDX_ARG,((char *)REFP(0x10dd190)));
  uVar1 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x20))) GEN_EDX_ARG,((char *)REFP(0x10dd1a4)));
  REFG(undefined4, 0x14a06c8) = uVar1;
  return uVar1;
}

/* ref: FUN_00994de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00994de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x994de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  float10 fVar2;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  fVar2 = (float10)*(double *)&REFG(undefined, 0x10df038);
  *((undefined4 *)GEN_TOP(((int)this + 0x134))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x134))), REFG(float, 0x1087f04));
  *((undefined4 *)GEN_TOP(((int)this + 0x138))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x13c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x140))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x144))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x148))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14c))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x150))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x154))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x158))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x160))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x15c))) = 0x3c;
  *((undefined1 *)GEN_TOP(((int)this + 0x1574))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1578))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x157c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1580))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1584))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1588))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x158c))) = 0;
  fVar2 = GEN_X87((float10)(float)((float10)1 / (float10)((float)GEN_TOF(GEN_X87(SQRT(fVar2))))));
  *((float *)GEN_TOP(((int)this + 0x128))) = (float)((float10)REFG(double, 0x1088108) * fVar2);
  *((float *)GEN_TOP(((int)this + 300))) = (float)((float10)REFG(double, 0x1094890) * fVar2);
  *((float *)GEN_TOP(((int)this + 0x130))) = (float)(fVar2 * (float10)*(double *)&REFG(undefined, 0x10df030));
  return (uint)this;
}

/* ref: FUN_00994ed0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00994ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x994ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = param_1[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = param_1[6];
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = param_1[8];
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = param_1[9];
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = param_1[10];
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = param_1[0xc];
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = param_1[0xd];
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = param_1[0xe];
  F_009db630((int)this + 0xa8 GEN_EDX_FWD,param_2);
  F_00984c30(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00994f60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00994f60(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6, float gen_a7, float gen_a8)
{
  GEN_ENTER(0x994f60u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  unsigned int gen_args[8];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[1], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[2], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[3], &gen_a4, sizeof gen_a4);
  memcpy(&gen_args[4], &gen_a5, sizeof gen_a5);
  gen_args[5] = gen_a6;
  memcpy(&gen_args[6], &gen_a7, sizeof gen_a7);
  memcpy(&gen_args[7], &gen_a8, sizeof gen_a8);
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  int * piVar4;
  code * pcVar5;
  float * pfVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  uVar7 = (*(uint *)&gen_args[5]);
  pfVar6 = ((float *)GEN_TOP(F_00980f90(&(*(float *)(gen_frame + 0x0)),(*(uint *)&gen_args[5]),param_1 + 0xe8)));
  if ((!GEN_ISNAN((*(float *)(gen_frame + 0xc))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !((*(float *)(gen_frame + 0xc)) <= *(float *)&REFG(undefined, 0x1088114))) {
    pfVar6 = &(*(float *)&gen_args[7]);
    (*(uint *)&gen_args[5]) = (uint)gen_fl2bits((float)((float10)(*(float *)&gen_args[6]) + (float10)*(double *)&REFG(undefined, 0x10928e8)));
    if (!((float10)(float)((float10)(*(float *)&gen_args[6]) + (float10)*(double *)&REFG(undefined, 0x10928e8)) < (float10)(*(float *)&gen_args[7]))
       ) {
      pfVar6 = (float *)&(*(uint *)&gen_args[5]);
    }
    fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(uVar7)) - (float10)*((float *)GEN_TOP((param_1 + 0x3c))))));
    (*(float *)(gen_frame + 0x10)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar7 + 4))) - (float10)*((float *)GEN_TOP((param_1 + 0x40))))));
    (*(float *)(gen_frame + 0x14)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar7 + 8))) - (float10)*((float *)GEN_TOP((param_1 + 0x44))))));
    (*(float *)(gen_frame + 0x18)) = fVar3;
    fVar8 = (float10)fVar2;
    fVar9 = (float10)fVar1;
    fVar10 = (float10)fVar3;
    fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF((fVar10 * fVar10 + (fVar9 * fVar9 + fVar8 * fVar8))))))));
    (*(float *)(gen_frame + 0x10)) = fVar1;
    fVar8 = (float10)fVar1;
    fVar9 = (float10)*pfVar6;
    if (fVar8 <= fVar9) {
      fVar10 = (float10)(*(float *)(gen_frame + 0xc));
      (*(float *)&gen_args[7]) = REFG(float, 0x10928e4);
      (*(uint *)&gen_args[5]) = REFG(float, 0x109cb08);
      pfVar6 = &(*(float *)(gen_frame + 0x0));
      fVar1 = (float)((float10)(*(float *)(gen_frame + 0x0)) / fVar10);
      (*(float *)(gen_frame + 0x0)) = fVar1;
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x4)) / fVar10);
      (*(float *)(gen_frame + 0x4)) = fVar2;
      (*(float *)(gen_frame + 0x8)) = (float)((float10)(*(float *)(gen_frame + 0x8)) / fVar10);
      (*(float *)(gen_frame + 0xc)) = (float)(fVar10 / fVar10);
      if (!(fVar1 < REFG(float, 0x10928e4))) {
        pfVar6 = &(*(float *)&gen_args[7]);
      }
      if (!(*(double *)&REFG(undefined, 0x10944c0) < (double)*pfVar6)) {
        pfVar6 = (float *)&(*(uint *)&gen_args[5]);
      }
      fVar3 = *pfVar6;
      fVar11 = (float10)REFG(double, 0x1088108);
      pfVar6 = &(*(float *)(gen_frame + 0x4));
      fVar10 = (float10)1;
      fVar3 = ((float)GEN_TOF((fVar10 - (float10)((float)GEN_TOF(ABS((float10)(float)((float10)fVar3 * fVar11)))))));
      (*(float *)(gen_frame + 0x1c)) = fVar3;
      if (!(fVar2 < REFG(float, 0x10928e4))) {
        pfVar6 = &(*(float *)&gen_args[7]);
      }
      if (!(*(double *)&REFG(undefined, 0x10944c0) < (double)*pfVar6)) {
        pfVar6 = (float *)&(*(uint *)&gen_args[5]);
      }
      fVar12 = GEN_X87(fVar10 - (float10)((float)GEN_TOF(ABS((float10)(float)((float10)*pfVar6 * fVar11)))));
      (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar1 * fVar11 + fVar11);
      (*(float *)(gen_frame + 0x4)) = (float)(fVar11 - (float10)fVar2 * fVar11);
      fVar11 = (float10)(*(float *)&gen_args[6]);
      if (!(fVar8 < fVar11)) {
        if (fVar9 < fVar8) {
          fVar10 = (float10)0;
        }
        else {
          fVar10 = GEN_X87(fVar10 - (fVar8 - fVar11) / (fVar9 - fVar11));
        }
      }
      piVar4 = *((int * PTR32 *)GEN_TOP((param_1 + 0x150)));
      pcVar5 = *((gen_code32 *)GEN_TOP((*piVar4 + 0x58)));
      (*(float *)&gen_args[7]) = ((float)GEN_TOF(((((float10)fVar3 * (float10)(*(float *)&gen_args[0])) * (float10)(float)fVar12) *
                       (float10)(float)fVar10)));
      uVar7 = (*pcVar5)(piVar4,1,(undefined4)gen_fl2bits((*(float *)&gen_args[7])),(undefined4)gen_fl2bits((*(float *)&gen_args[1])),
                        (undefined4)gen_fl2bits((*(float *)&gen_args[2])),(undefined4)gen_fl2bits((*(float *)&gen_args[3])),
                        (undefined4)gen_fl2bits((*(float *)&gen_args[4])),&(*(float *)(gen_frame + 0x0)));
      return uVar7;
    }
  }
  return (uint)pfVar6;
}

/* ref: FUN_00995170 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00995170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x995170u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar11;
  float * pfVar12;
  int iVar13;
  float * pfVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  
  uVar11 = (*(uint *)&gen_args[1]);
  iVar13 = *((int *)GEN_TOP((param_1 + 0x1164)));
  if (0 < iVar13) {
    pfVar14 = ((float *)GEN_TOP((param_1 + 0x178)));
    (*(int *)(gen_frame + 0x4)) = iVar13;
    do {
      fVar2 = *((float *)GEN_TOP(uVar11));
      (*(float *)(gen_frame + 0x10)) = fVar2;
      fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)pfVar14[-5] - ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[0])))))) - (float10)fVar2)));
      fVar4 = *((float *)GEN_TOP((uVar11 + 4)));
      (*(float *)(gen_frame + 0xc)) = fVar4;
      fVar5 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)pfVar14[-4] - ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[0])[1]))))) - (float10)fVar4)))
      ;
      fVar6 = *((float *)GEN_TOP((uVar11 + 8)));
      (*(float *)(gen_frame + 0x8)) = fVar6;
      fVar7 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)pfVar14[-3] - ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[0])[2]))))) - (float10)fVar6)))
      ;
      fVar15 = (float10)fVar5;
      fVar16 = (float10)fVar3;
      fVar17 = (float10)fVar7;
      fVar8 = ((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF((fVar17 * fVar17 + (fVar16 * fVar16 + fVar15 * fVar15))))))));
      fVar15 = (float10)fVar8;
      if (fVar15 < (float10)*pfVar14) {
        fVar15 = ((float10)GEN_TOD(pow((float10)(float)((float10)1 - fVar15 / (float10)*pfVar14),(float10)pfVar14[-1])));
        fVar9 = pfVar14[-2];
        (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
        pfVar12 = (float *)&(*(uint *)&gen_args[1]);
        fVar8 = ((float)GEN_TOF((((float10)(float)fVar15 * (float10)fVar9) / (float10)fVar8)));
        (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar8);
        if (!((float10)fVar8 < (float10)1)) {
          pfVar12 = &(*(float *)(gen_frame + 0x0));
        }
        fVar15 = (float10)*pfVar12;
        *((float *)GEN_TOP(uVar11)) = ((float)GEN_TOF(((float10)fVar2 + (float10)(float)(fVar15 * (float10)fVar3))));
        *((float *)GEN_TOP((uVar11 + 4))) = ((float)GEN_TOF(((float10)fVar4 + (float10)(float)((float10)fVar5 * fVar15))))
        ;
        *((float *)GEN_TOP((uVar11 + 8))) = ((float)GEN_TOF(((float10)fVar6 + (float10)(float)(fVar15 * (float10)fVar7))))
        ;
      }
      pfVar14 = pfVar14 + 8;
      iVar1 = (*(int *)(gen_frame + 0x4)) - 1;
      (*(int *)(gen_frame + 0x4)) = iVar1;
    } while (iVar1 != 0);
    if (0 < iVar13) {
      pfVar14 = ((float *)GEN_TOP((param_1 + 0x16c)));
      do {
        fVar15 = GEN_X87((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)pfVar14[-1] - ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[0])[1]))))) -
                                 (float10)*((float *)GEN_TOP((uVar11 + 4)))))));
        fVar16 = GEN_X87((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)pfVar14[-2] - ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[0])))))) -
                                 (float10)*((float *)GEN_TOP(uVar11))))));
        fVar17 = GEN_X87((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*pfVar14 - ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[0])[2]))))) -
                                 (float10)*((float *)GEN_TOP((uVar11 + 8)))))));
        fVar15 = (float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF((fVar17 * fVar17 +
                                                      (fVar16 * fVar16 + fVar15 * fVar15))))))));
        if (fVar15 < (float10)pfVar14[3]) {
          if (0.0 < pfVar14[4]) {
            pfVar12 = (float *)&(*(uint *)&gen_args[1]);
            fVar2 = (float)(fVar15 / (float10)pfVar14[4]);
            (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar2);
            if (!((float10)fVar2 < ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[2]))))) {
              pfVar12 = (*(float * PTR32 *)&gen_args[2]);
            }
            *(*(float * PTR32 *)&gen_args[2]) = *pfVar12;
          }
          fVar2 = pfVar14[5];
          (*(float *)(gen_frame + 0x0)) = fVar2;
          if (0.0 < fVar2) {
            pfVar12 = (float *)&(*(uint *)&gen_args[1]);
            (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)(fVar15 / (float10)fVar2));
            if (!((float10)(float)(fVar15 / (float10)fVar2) < ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[3]))))) {
              pfVar12 = (*(float * PTR32 *)&gen_args[3]);
            }
            *(*(float * PTR32 *)&gen_args[3]) = *pfVar12;
          }
        }
        pfVar14 = pfVar14 + 8;
        iVar13 = iVar13 - 1;
      } while (iVar13 != 0);
    }
  }
  return;
}

/* ref: FUN_009953b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009953b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6))
{
  GEN_ENTER(0x9953b0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  
  pfVar3 = param_3;
  if ((param_3 < ((float *)GEN_TOP(0x800))) && (pfVar3 = param_3, param_2 != 0)) {
    iVar1 = *((int *)GEN_TOP((param_1 + 0x158)));
    pfVar2 = ((float *)GEN_TOP(((int)((int)(uintptr_t)param_3) * 0x68)));
    pfVar3 = pfVar2;
    if (*((int *)GEN_TOP((iVar1 + 0x1040 + (int)pfVar2))) == param_2) {
      pfVar3 = ((float *)GEN_TOP(((int)pfVar2 + iVar1 + 0x1048)));
      *pfVar3 = param_4;
      *((float *)GEN_TOP(((int)pfVar2 + iVar1 + 0x104c))) = param_5;
      *((float *)GEN_TOP(((int)pfVar2 + iVar1 + 0x1050))) = param_6;
      *((float *)GEN_TOP(((int)pfVar2 + iVar1 + 0x1054))) = param_7;
      iVar1 = *((int *)GEN_TOP(((int)pfVar2 + iVar1 + 0x1030)));
      if ((iVar1 != 0) &&
         (((*((uint *)GEN_TOP((iVar1 + 0x1d0))) & 0x40000) == 0 || (*((int *)GEN_TOP((iVar1 + 0x1e0))) != 0)))) {
        pfVar3 = ((float *)GEN_TOP(F_0098b780(iVar1 GEN_EDX_FWD,(uint)pfVar3)));
      }
    }
  }
  return (uint)pfVar3;
}

/* ref: FUN_00995470 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00995470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x995470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10df044));
  F_00985d20(((undefined *)GEN_TOP(((int)this + 0x848))) GEN_EDX_FWD);
  F_00985e70(((undefined *)GEN_TOP(((int)this + 0x7b8))) GEN_EDX_ARG);
  F_00985d90(((undefined *)GEN_TOP(((int)this + 0x728))) GEN_EDX_ARG);
  F_00985e00(((undefined *)GEN_TOP(((int)this + 0x698))) GEN_EDX_ARG);
  iVar2 = 3;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x698)));
  do {
    puVar4 = puVar3 - 0x68;
    *puVar4 = (*(undefined * PTR32 (*)[14])REFP(0x10de8d8));
    uVar1 = F_00986ad0(puVar3 - 0x58 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
    *puVar4 = (*(undefined * PTR32 (*)[14])REFP(0x10dd2b0));
    puVar3 = puVar4;
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10dd2ec));
  return uVar1;
}

/* ref: FUN_009954f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009954f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9954f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de77c));
  F_00987100(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00995510 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00995510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x995510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de788));
  F_00987100(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00995530 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00995530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x995530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de794));
  F_00987100(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00995550 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00995550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x995550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de7a0));
  F_00987100(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00995570 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00995570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x995570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10de7ac));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x18))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x20))) = ((code *)REFP(0x979ff0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((gen_code32 *)GEN_TOP(((int)this + 0x28))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x50))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x58))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x60))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x78))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x88))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x90))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x98))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((gen_code32 *)GEN_TOP(((int)this + 0xc0))) = ((code *)REFP(0x979f10));
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 200))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0xd0))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((gen_code32 *)GEN_TOP(((int)this + 0xf8))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x100))) = ((code *)REFP(0x979ff0));
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x108))) = ((code *)REFP(0x97a060));
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = 0;
  return 0;
}

/* ref: FUN_00995690 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00995690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x995690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10df078));
  F_00986ad0(((undefined *)GEN_TOP(((int)this + 0x410))) GEN_EDX_FWD);
  F_00986ad0(((undefined *)GEN_TOP(((int)this + 0x2b0))) GEN_EDX_ARG);
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x228))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x268))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x26c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x26c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x268))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x230))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x234))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x234))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x230))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x228))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1e0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x1e4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x1e4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1e0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x1ac))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x1ac))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x118))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x158))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x15c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x15c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x158))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x120))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x124))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x124))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x120))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x118))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x90))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xd4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xd4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x98))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x9c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x9c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x98))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x90))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda98))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x4c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x4c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x14))) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*((int *)GEN_TOP(((int)this + 0x14))))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10dd8ec));
  return (uint)pcVar1;
}

/* ref: FUN_00995890 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00995890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x995890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10df09c));
  F_00986ad0(((undefined *)GEN_TOP(((int)this + 0x300))) GEN_EDX_FWD);
  F_00986ad0(((undefined *)GEN_TOP(((int)this + 0x1a0))) GEN_EDX_ARG);
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x118))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x158))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x15c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x15c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x158))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x120))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x124))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x124))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x120))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x118))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x90))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xd4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xd4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x98))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x9c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x9c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x98))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x90))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda98))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x4c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x4c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x14))) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*((int *)GEN_TOP(((int)this + 0x14))))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10dd910));
  return (uint)pcVar1;
}

/* ref: FUN_009959d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009959d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9959d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10de7d0));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 2;
  F_00987100(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x90))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x118))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x1a0))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x228))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x2b0))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x338))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00995a30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00995a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x995a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10de7f8));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 6;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 6;
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0xa0))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x128))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x1b0))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x238))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x2c0))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00995aa0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00995aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x995aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10de828));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 4;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 4;
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0xa0))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x128))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x1b0))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x238))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x2c0))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00995b10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00995b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x995b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10de858));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x98))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x120))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x1a8))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00995b60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00995b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x995b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10de884));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 1;
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0xa0))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x128))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x1b0))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x238))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00995bc0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00995bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x995bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de8b0));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x18))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x20))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x28))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x50))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x58))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x60))) = ((code *)REFP(0x97a060));
  *((gen_code32 *)GEN_TOP(((int)this + 0x88))) = ((code *)REFP(0x979f10));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x78))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x90))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x98))) = ((code *)REFP(0x97a060));
  *((gen_code32 *)GEN_TOP(((int)this + 0xc0))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 200))) = ((code *)REFP(0x979ff0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0xd0))) = ((code *)REFP(0x97a060));
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  return 0;
}

/* ref: FUN_00995cb0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00995cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x995cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10de8c0));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x18))) = ((code *)REFP(0x979f10));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((gen_code32 *)GEN_TOP(((int)this + 0x20))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x28))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x50))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x58))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x60))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x78))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x88))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x90))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x98))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0xc0))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 200))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0xd0))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0xf8))) = ((code *)REFP(0x979f10));
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x100))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x108))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x120))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((gen_code32 *)GEN_TOP(((int)this + 0x130))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x138))) = ((code *)REFP(0x979ff0));
  *((undefined4 *)GEN_TOP(((int)this + 0x124))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x134))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x13c))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x140))) = ((code *)REFP(0x97a060));
  *((undefined4 *)GEN_TOP(((int)this + 0x144))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x158))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x15c))) = 0;
  return 0;
}

/* ref: FUN_00995e70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00995e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x995e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10de928));
  F_00995bc0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  F_00995bc0(((undefined *)GEN_TOP(((int)this + 0xf8))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x1e8))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00995ea0 */
GEN_OWN GEN_FRAME unsigned int F_00995ea0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x995ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  uint * puVar6;
  uint * puVar7;
  undefined4 uVar8;
  undefined1 local_5;
  
  uVar5 = 0;
  local_5 = 0xff;
  if (param_2 != 0) {
    uVar8 = 0;
    puVar7 = param_1;
    do {
      uVar3 = *puVar7;
      puVar6 = puVar7 + 2;
      if (uVar3 < 0x50727033) {
        if (uVar3 < 0x50727031) {
          if (uVar3 == 0x426e5672) {
            local_5 = (undefined1)*puVar6;
          }
          else if (uVar3 == 0x44617461) {
            switch((unsigned int)(uintptr_t)(local_5)) {
            case 0: ;
              pvVar4 = ((undefined *)GEN_TOP(F_0097abd0(0x1c)));
              if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
                F_00987aa0(pvVar4 GEN_EDX_ARG);
              }
              F_00987af0(puVar6,puVar7[1]);
              break;
            case 1: ;
              pvVar4 = ((undefined *)GEN_TOP(F_0097abd0(0x1c)));
              if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
                F_00987990(pvVar4 GEN_EDX_ARG);
              }
              F_009879e0(puVar6,puVar7[1]);
              break;
            case 2: ;
              pvVar4 = ((undefined *)GEN_TOP(F_0097abd0(0x1c)));
              if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
                F_00987bb0(pvVar4 GEN_EDX_ARG);
              }
              F_00987c00(puVar6,puVar7[1]);
              break;
            case 3: ;
              pvVar4 = ((undefined *)GEN_TOP(F_0097abd0(0x1c)));
              if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
                F_00987880(pvVar4 GEN_EDX_ARG);
              }
              F_009878d0(puVar6,puVar7[1]);
            }
          }
        }
        else {
LAB_00995fba: ;
          if (REFG(char, 0x14a06d6) == '\0') {
            puVar2 = ((undefined4 *)GEN_TOP((REFG(int, 0x14a09d8) + REFG(int, 0x14a09e0))));
            REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + 100;
            if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
              *puVar2 = (*(undefined * PTR32 (*)[14])REFP(0x10dead4));
              puVar2[5] = uVar8;
              puVar2[6] = uVar8;
              puVar2[7] = uVar8;
              puVar2[8] = uVar8;
              *(undefined2 *)(puVar2 + 9) = 0;
              *(undefined2 *)(puVar2 + 10) = 0;
              *((byte *)GEN_TOP(((int)puVar2 + 0x2a))) = *((byte *)GEN_TOP(((int)puVar2 + 0x2a))) & 0xf8;
              *((undefined2 *)GEN_TOP(((int)puVar2 + 0x26))) = 0xffff;
              puVar2[0xc] = 0;
              puVar2[0xb] = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
              puVar2[0xe] = &REFG(undefined, 0x14a0a44);
              puVar2[0xd] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
              puVar2[0xf] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
              puVar2[0x10] = &REFG(undefined, 0x14a0a44);
              puVar2[0x11] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
              puVar2[0x12] = &REFG(undefined, 0x14a0a44);
              puVar2[0x13] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
              puVar2[0x14] = &REFG(undefined, 0x14a0a44);
              puVar2[0x15] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
              puVar2[0x16] = &REFG(undefined, 0x14a0a44);
              puVar2[0x17] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
              puVar2[0x18] = &REFG(undefined, 0x14a0a44);
            }
          }
          else {
            REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + 100;
          }
          F_00988ab0(puVar6,puVar7[1]);
        }
      }
      else if ((uVar3 == 0x50727047) || (uVar3 == 0x50727053)) goto LAB_00995fba;
      puVar1 = puVar7 + 1;
      puVar7 = ((uint *)GEN_TOP(((int)puVar6 + (*puVar1 + 3 & 0xfffffffc))));
      uVar5 = uVar5 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar5 < param_2);
  }
  return;
}

/* ref: FUN_00996090 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00996090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x996090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1e))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[38])REFP(0x10df0bc));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xffffffff;
  *((undefined1 *)GEN_TOP(((int)this + 0x1f))) = 0xff;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c))) = (*(undefined * PTR32 (*)[4])REFP(0x10ddce8));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x44))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x4c))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x50))) = *((uint *)GEN_TOP(((int)this + 0x50))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x54))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x5c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x60))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 100))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x68))) = *((uint *)GEN_TOP(((int)this + 0x68))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x6c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x70))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x74))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x78))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x7c))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x80))) = *((uint *)GEN_TOP(((int)this + 0x80))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x88))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x8c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x90))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x94))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x98))) = *((uint *)GEN_TOP(((int)this + 0x98))) & 0xfffffff8;
  F_00988b80(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x108))) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x110))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x114))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x118))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x11c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x120))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x124))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x128))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 300))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x130))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x134))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x138))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x13c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x140))) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *((undefined4 *)GEN_TOP(((int)this + 0x144))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x148))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x14c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x150))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x154))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x158))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x15c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x160))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x164))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x168))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x16c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x170))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x174))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x178))) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *((undefined4 *)GEN_TOP(((int)this + 0x17c))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x180))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x184))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x188))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 400))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x194))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x198))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x19c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a0))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1a4))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1ac))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b0))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1b8))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1bc))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c0))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x1c4))) = *((uint *)GEN_TOP(((int)this + 0x1c4))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1cc))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1d0))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1d4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1d8))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x1dc))) = *((uint *)GEN_TOP(((int)this + 0x1dc))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1e0))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1e4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1e8))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1ec))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1f0))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 500))) = *((uint *)GEN_TOP(((int)this + 500))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1f8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1fc))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x200))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x204))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x208))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x20c))) = *((uint *)GEN_TOP(((int)this + 0x20c))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x210))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x214))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x218))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x21c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x220))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x224))) = *((uint *)GEN_TOP(((int)this + 0x224))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x228))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x22c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x230))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x234))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x238))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x23c))) = *((uint *)GEN_TOP(((int)this + 0x23c))) & 0xfffffff8;
  *((undefined4 *)GEN_TOP(((int)this + 0x240))) = 0;
  return (uint)this;
}

/* ref: FUN_00996350 */
GEN_OWN GEN_FRAME unsigned int F_00996350(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x996350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined * puVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  char local_5;
  
  uVar4 = 0;
  local_5 = -1;
  pcVar6 = param_1;
  if (param_2 != 0) {
    do {
      puVar1 = *(undefined * PTR32 *)pcVar6;
      pcVar5 = pcVar6 + 8;
      if (puVar1 < ((undefined *)GEN_TOP(0x43724353))) {
        if (puVar1 == ((undefined *)GEN_TOP(0x43724352))) goto LAB_009965df;
        if (puVar1 < ((undefined *)GEN_TOP(0x49415b))) {
          if (((undefined *)GEN_TOP(0x494157)) < puVar1) goto LAB_009965df;
          if (puVar1 < ((undefined *)GEN_TOP(0x43724a))) {
            if ((puVar1 == ((undefined *)GEN_TOP(0x437249))) || (puVar1 == ((undefined *)GEN_TOP(0x415273))))
            goto LAB_009965df;
            if (puVar1 == ((undefined *)GEN_TOP(0x436f6c))) {
              F_00988c40(pcVar5,*(undefined4 *)(pcVar6 + 4));
            }
            else if (puVar1 == ((undefined *)GEN_TOP(0x437243))) goto LAB_009965df;
          }
          else if (puVar1 == ((undefined *)GEN_TOP(0x455654))) {
            local_5 = *pcVar5;
          }
          else if (puVar1 == ((undefined *)GEN_TOP(0x477261))) goto LAB_009965df;
        }
        else if (&REFG(undefined, 0x53636c) < puVar1) {
          if ((((undefined *)GEN_TOP(0x565257)) < puVar1) &&
             ((puVar1 < ((undefined *)GEN_TOP(0x56525b)) || (puVar1 == ((undefined *)GEN_TOP(0x41527352))))))
          goto LAB_009965df;
        }
        else if ((puVar1 == &REFG(undefined, 0x53636c)) ||
                ((puVar1 == ((undefined *)GEN_TOP(0x506f73)) || (puVar1 == ((undefined *)GEN_TOP(0x526f74)))))) {
          F_00988990(pcVar5,*(undefined4 *)(pcVar6 + 4));
        }
      }
      else if (puVar1 < ((undefined *)GEN_TOP(0x49415a53))) {
        if (puVar1 == ((undefined *)GEN_TOP(0x49415a52))) goto LAB_009965df;
        if (puVar1 < ((undefined *)GEN_TOP(0x47726153))) {
          if ((puVar1 == ((undefined *)GEN_TOP(0x47726152))) || (puVar1 == ((undefined *)GEN_TOP(0x43724952))))
          goto LAB_009965df;
          if (puVar1 == ((undefined *)GEN_TOP(0x44617461))) {
            switch((unsigned int)(uintptr_t)(local_5)) {
            case '\0': ;
              puVar2 = ((undefined4 *)GEN_TOP(F_0097abd0(4)));
              if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
                *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10ddca4));
              }
              break;
            case '\x01': ;
              pvVar3 = ((undefined *)GEN_TOP(F_0097abd0(0xb0)));
              if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
                F_00987e10(pvVar3 GEN_EDX_ARG);
              }
              F_00987f50(pcVar5,*(undefined4 *)(pcVar6 + 4));
              break;
            case '\x02': ;
              pvVar3 = ((undefined *)GEN_TOP(F_0097abd0(0x98)));
              if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
                F_00988080(pvVar3 GEN_EDX_ARG);
              }
              F_00988180(pcVar5,*(undefined4 *)(pcVar6 + 4));
              break;
            case '\x03': ;
              pvVar3 = ((undefined *)GEN_TOP(F_0097abd0(0x80)));
              if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
                F_00988640(pvVar3 GEN_EDX_ARG);
              }
              F_00988710(pcVar5,*(undefined4 *)(pcVar6 + 4));
              break;
            case '\x04': ;
              pvVar3 = ((undefined *)GEN_TOP(F_0097abd0(0x98)));
              if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
                F_00988290(pvVar3 GEN_EDX_ARG);
              }
              F_00988390(pcVar5,*(undefined4 *)(pcVar6 + 4));
              break;
            case '\x05': ;
              pvVar3 = ((undefined *)GEN_TOP(F_0097abd0(0x68)));
              if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
                F_00988490(pvVar3 GEN_EDX_ARG);
              }
              F_00988550(pcVar5,*(undefined4 *)(pcVar6 + 4));
            }
          }
          else if (puVar1 == ((undefined *)GEN_TOP(0x456d436e))) goto LAB_0099648b;
        }
        else if ((puVar1 == ((undefined *)GEN_TOP(0x49415852))) || (puVar1 == ((undefined *)GEN_TOP(0x49415952))))
        goto LAB_009965df;
      }
      else if (puVar1 < ((undefined *)GEN_TOP(0x56525853))) {
        if (puVar1 == ((undefined *)GEN_TOP(0x56525852))) {
LAB_009965df: ;
          F_0097c440(pcVar5,*(undefined4 *)(pcVar6 + 4));
        }
        else if (puVar1 == ((undefined *)GEN_TOP(0x5072436e))) {
LAB_0099648b: ;
          REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + *pcVar5 * 0x44;
        }
        else if (puVar1 == ((undefined *)GEN_TOP(0x53644e6d))) {
          REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + (*(int *)(pcVar6 + 4) + 3U & 0xfffffffc);
        }
      }
      else if ((puVar1 == ((undefined *)GEN_TOP(0x56525952))) || (puVar1 == ((undefined *)GEN_TOP(0x56525a52))))
      goto LAB_009965df;
      uVar4 = uVar4 + 8 + (*(int *)(pcVar6 + 4) + 3U & 0xfffffffc);
      pcVar6 = pcVar5 + (*(int *)(pcVar6 + 4) + 3U & 0xfffffffc);
    } while (uVar4 < param_2);
  }
  return;
}

/* ref: FUN_00996630 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00996630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x996630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10df15c));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c))) = (*(undefined * PTR32 (*)[4])REFP(0x10ddce8));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x44))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x4c))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x50))) = *((uint *)GEN_TOP(((int)this + 0x50))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x54))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x5c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x60))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 100))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x68))) = *((uint *)GEN_TOP(((int)this + 0x68))) & 0xfffffff8;
  F_00988b80(((undefined *)GEN_TOP(((int)this + 0x6c))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd8))) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe0))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xe4))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xec))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xf0))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xf4))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xf8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xfc))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x100))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x104))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x108))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x110))) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *((undefined4 *)GEN_TOP(((int)this + 0x114))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x118))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x11c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x120))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x124))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x128))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 300))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x130))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x134))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x138))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x13c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x140))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x144))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x148))) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *((undefined4 *)GEN_TOP(((int)this + 0x14c))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x150))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x154))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x158))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x15c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x160))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x164))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x168))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x16c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x170))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x174))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x178))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x17c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x180))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x184))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x188))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 400))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x194))) = *((uint *)GEN_TOP(((int)this + 0x194))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x198))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x19c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1a0))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1a8))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x1ac))) = *((uint *)GEN_TOP(((int)this + 0x1ac))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b0))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1b8))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1bc))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c0))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x1c4))) = *((uint *)GEN_TOP(((int)this + 0x1c4))) & 0xfffffff8;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1cc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 500))) = 0;
  return (uint)this;
}

/* ref: FUN_00996890 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00996890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x996890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1bc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x19c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x198))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x184))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x180))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x178))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x170))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x168))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x160))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x158))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x150))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x148))) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x140))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x138))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x130))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x128))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x120))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x118))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x110))) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x108))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x100))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xf8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xf0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd8))) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xcc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xbc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xac))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x9c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x94))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x7c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x74))) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x6c))) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x60))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x54))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3c))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c))) = (*(undefined * PTR32 (*)[4])REFP(0x10dd358));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10dd77c));
  return 0;
}

/* ref: FUN_009969d0 */
GEN_OWN GEN_FRAME unsigned int F_009969d0(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9969d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int * piVar1;
  char cVar2;
  undefined * puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined * pvVar7;
  uint * puVar8;
  uint uVar9;
  uint * puVar10;
  int iVar11;
  char * pcVar12;
  char * pcVar13;
  uint local_10;
  char local_5;
  
  local_5 = -1;
  local_10 = 0;
  pcVar13 = param_1;
  if (param_2 != 0) {
    do {
      puVar3 = *(undefined * PTR32 *)pcVar13;
      pcVar12 = pcVar13 + 8;
      if (puVar3 < ((undefined *)GEN_TOP(0x544333))) {
        if (puVar3 == ((undefined *)GEN_TOP(0x544332))) {
          if (REFG(char, 0x14a06d6) == '\0') {
            puVar6 = ((undefined4 *)GEN_TOP((REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8))));
            REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + 0xc;
            if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
              *((ushort *)GEN_TOP(((int)puVar6 + 6))) = *((ushort *)GEN_TOP(((int)puVar6 + 6))) & 0xfff8;
              *puVar6 = (*(undefined * PTR32 (*)[12])REFP(0x10ddd50));
              *(undefined2 *)(puVar6 + 1) = 0;
              *(undefined1 *)(puVar6 + 2) = 0xff;
            }
          }
          else {
            REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + 0xc;
          }
        }
        else if (puVar3 < ((undefined *)GEN_TOP(0x436f6d))) {
          if (puVar3 == ((undefined *)GEN_TOP(0x436f6c))) {
            F_00988c40(pcVar12,*(undefined4 *)(pcVar13 + 4));
          }
          else if (puVar3 < ((undefined *)GEN_TOP(0x5451))) {
            if (puVar3 == ((undefined *)GEN_TOP(0x5450))) {
              puVar6 = ((undefined4 *)GEN_TOP(F_0097abd0(0x10)));
              if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
                *(byte *)(puVar6 + 1) = *(byte *)(puVar6 + 1) & 0xf0;
                *puVar6 = (*(undefined * PTR32 (*)[5])REFP(0x10dddfc));
                *((undefined1 *)GEN_TOP(((int)puVar6 + 5))) = 0xff;
                puVar6[2] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                puVar6[3] = &REFG(undefined, 0x14a0a44);
              }
              F_0097d900(pcVar12,*(undefined4 *)(pcVar13 + 4));
            }
            else if (puVar3 == ((undefined *)GEN_TOP(0x5444))) {
              uVar5 = F_0097abd0(0x10);
              if (uVar5 != 0) {
                F_0097d7d0(uVar5 GEN_EDX_ARG);
              }
              F_0097d810(pcVar12,*(undefined4 *)(pcVar13 + 4));
            }
            else if (puVar3 == ((undefined *)GEN_TOP(0x544e))) {
              uVar5 = F_0097abd0(0x10);
              if (uVar5 != 0) {
                F_0097d5e0(uVar5 GEN_EDX_ARG);
              }
              F_0097d620(pcVar12,*(undefined4 *)(pcVar13 + 4));
            }
          }
          else if (puVar3 == ((undefined *)GEN_TOP(0x5452))) {
            puVar6 = ((undefined4 *)GEN_TOP(F_0097abd0(0x10)));
            if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
              *puVar6 = (*(undefined * PTR32 (*)[7])REFP(0x10ddda8));
              *(undefined2 *)(puVar6 + 1) = 0xff00;
              puVar6[2] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
              puVar6[3] = &REFG(undefined, 0x14a0a44);
            }
            F_0097d710(pcVar12,*(undefined4 *)(pcVar13 + 4));
          }
          else if (puVar3 == ((undefined *)GEN_TOP(0x415273))) goto LAB_00996f9d;
        }
        else {
          if (puVar3 < ((undefined *)GEN_TOP(0x526f75))) {
            if (puVar3 != ((undefined *)GEN_TOP(0x526f74))) {
              if (puVar3 == ((undefined *)GEN_TOP(0x477261))) goto LAB_00996f9d;
              if (puVar3 != ((undefined *)GEN_TOP(0x506f73))) goto switchD_00996c26_caseD_1;
            }
          }
          else if (puVar3 != &REFG(undefined, 0x53636c)) {
            if (puVar3 == ((undefined *)GEN_TOP(0x544331))) {
              pvVar7 = ((undefined *)GEN_TOP(F_0097abd0(0x28)));
              if (pvVar7 != ((undefined *)GEN_TOP(0x0))) {
                F_0097d220(pvVar7 GEN_EDX_ARG);
              }
              F_0097d280(pcVar12,*(undefined4 *)(pcVar13 + 4));
            }
            goto switchD_00996c26_caseD_1;
          }
          F_00988990(pcVar12,*(undefined4 *)(pcVar13 + 4));
        }
      }
      else if (puVar3 < ((undefined *)GEN_TOP(0x536d706d))) {
        if (puVar3 == ((undefined *)GEN_TOP(0x536d706c))) {
          REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + 0xd0;
        }
        else if (puVar3 < ((undefined *)GEN_TOP(0x44617462))) {
          if (puVar3 == ((undefined *)GEN_TOP(0x44617461))) {
            switch((unsigned int)(uintptr_t)(local_5)) {
            case '\x03': ;
              F_0098a2a0(pcVar12,*(undefined4 *)(pcVar13 + 4));
              break;
            case '\x04': ;
              F_0097da40(pcVar12,*(undefined4 *)(pcVar13 + 4));
              break;
            case '\x05': ;
              F_0098a490(pcVar12,*(undefined4 *)(pcVar13 + 4));
              break;
            case '\x06': ;
              F_0098ab40(pcVar12,*(undefined4 *)(pcVar13 + 4));
              break;
            case '\t': ;
              F_0097dca0(pcVar12,*(undefined4 *)(pcVar13 + 4));
              break;
            case '\v': ;
              F_0097dfc0(pcVar12,*(undefined4 *)(pcVar13 + 4));
              break;
            case '\f': ;
              F_0098b1a0(pcVar12,*(undefined4 *)(pcVar13 + 4));
            }
          }
          else if ((((undefined *)GEN_TOP(0x565257)) < puVar3) &&
                  ((puVar3 < ((undefined *)GEN_TOP(0x56525b)) || (puVar3 == ((undefined *)GEN_TOP(0x41527352))))))
          goto LAB_00996f9d;
        }
        else {
          if (puVar3 == ((undefined *)GEN_TOP(0x47726152))) goto LAB_00996f9d;
          if (puVar3 == ((undefined *)GEN_TOP(0x50725654))) {
            local_5 = *pcVar12;
            switch((unsigned int)(uintptr_t)(local_5)) {
            case '\x01': ;
              puVar6 = ((undefined4 *)GEN_TOP(F_0097abd0(0xc)));
              if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
                *puVar6 = (*(undefined * PTR32 (*)[4])REFP(0x10dde3c));
                *(undefined2 *)(puVar6 + 1) = 0;
                puVar6[2] = 0;
              }
              break;
            case '\x02': ;
              puVar6 = ((undefined4 *)GEN_TOP(F_0097abd0(8)));
              if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
                *puVar6 = (*(undefined * PTR32 (*)[2])REFP(0x10dde50));
                *(undefined1 *)(puVar6 + 1) = 0;
              }
              break;
            case '\x03': ;
              pvVar7 = ((undefined *)GEN_TOP(F_0097abd0(0xf8)));
              if (pvVar7 != ((undefined *)GEN_TOP(0x0))) {
                F_0098a1b0(pvVar7 GEN_EDX_ARG);
              }
              break;
            case '\x04': ;
              pvVar7 = ((undefined *)GEN_TOP(F_0097abd0(0x34)));
              if (pvVar7 != ((undefined *)GEN_TOP(0x0))) {
                F_0097d9c0(pvVar7 GEN_EDX_ARG);
              }
              break;
            case '\x05': ;
              pvVar7 = ((undefined *)GEN_TOP(F_0097abd0(0x148)));
              if (pvVar7 != ((undefined *)GEN_TOP(0x0))) {
                F_0098a310(pvVar7 GEN_EDX_ARG);
              }
              break;
            case '\x06': ;
              pvVar7 = ((undefined *)GEN_TOP(F_0097abd0(0x344)));
              if (pvVar7 != ((undefined *)GEN_TOP(0x0))) {
                F_0098a7c0(pvVar7 GEN_EDX_ARG);
              }
              break;
            case '\b': ;
              puVar6 = ((undefined4 *)GEN_TOP(F_0097abd0(4)));
              if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
                *puVar6 = (*(undefined * PTR32 (*)[1])REFP(0x10dde5c));
              }
              break;
            case '\t': ;
              pvVar7 = ((undefined *)GEN_TOP(F_0097abd0(0x1c)));
              if (pvVar7 != ((undefined *)GEN_TOP(0x0))) {
                F_0097dc50(pvVar7 GEN_EDX_ARG);
              }
              break;
            case '\n': ;
              puVar6 = ((undefined4 *)GEN_TOP(F_0097abd0(8)));
              uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
              if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
                *puVar6 = (*(undefined * PTR32 (*)[2])REFP(0x10dde64));
                puVar6[1] = uVar4;
              }
              break;
            case '\v': ;
              pvVar7 = ((undefined *)GEN_TOP(F_0097abd0(0x24)));
              if (pvVar7 != ((undefined *)GEN_TOP(0x0))) {
                F_0097df60(pvVar7 GEN_EDX_ARG);
              }
              break;
            case '\f': ;
              pvVar7 = ((undefined *)GEN_TOP(F_0097abd0(0x1bc)));
              if (pvVar7 != ((undefined *)GEN_TOP(0x0))) {
                F_0098af30(pvVar7 GEN_EDX_ARG);
              }
              break;
            case '\r': ;
              puVar6 = ((undefined4 *)GEN_TOP(F_0097abd0(8)));
              if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
                *puVar6 = (*(undefined * PTR32 (*)[2])REFP(0x10dde24));
                *(undefined1 *)(puVar6 + 1) = 0xff;
              }
            }
          }
        }
      }
      else if (puVar3 < ((undefined *)GEN_TOP(0x56525853))) {
        if (puVar3 == ((undefined *)GEN_TOP(0x56525852))) {
LAB_00996f9d: ;
          F_0097c440(pcVar12,*(undefined4 *)(pcVar13 + 4));
        }
        else if (puVar3 == ((undefined *)GEN_TOP(0x5576534e))) {
          cVar2 = *pcVar12;
          if ('\0' < cVar2) {
            uVar5 = (uint)cVar2;
            if (cVar2 == '\0') {
              puVar8 = ((uint *)GEN_TOP(F_00406a50(4)));
            }
            else {
              uVar9 = -(uint)((int)((ulonglong)uVar5 * 0x70 >> 0x20) != 0) |
                      (uint)((ulonglong)uVar5 * 0x70);
              puVar8 = ((uint *)GEN_TOP(F_0097ac20(-(uint)(0xfffffffb < uVar9) | uVar9 + 4)));
            }
            if (puVar8 != ((uint *)GEN_TOP(0x0))) {
              iVar11 = uVar5 - 1;
              *puVar8 = uVar5;
              puVar10 = puVar8 + 1;
              if (-1 < iVar11) {
                puVar8 = puVar8 + 7;
                do {
                  *puVar10 = (uint)(*(undefined * PTR32 (*)[5])REFP(0x10deb28));
                  puVar8[-5] = 0;
                  puVar8[-4] = (uint)(*(undefined * PTR32 (*)[3])REFP(0x10deaac));
                  puVar8[-3] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  puVar8[-2] = (uint)&REFG(undefined, 0x14a0a44);
                  puVar8[-1] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  *puVar8 = (uint)&REFG(undefined, 0x14a0a44);
                  puVar8[1] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  puVar8[2] = (uint)&REFG(undefined, 0x14a0a44);
                  puVar8[3] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  puVar8[4] = (uint)&REFG(undefined, 0x14a0a44);
                  puVar8[6] = (uint)(*(undefined * PTR32 (*)[3])REFP(0x10deaac));
                  puVar8[7] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  puVar8[8] = (uint)&REFG(undefined, 0x14a0a44);
                  puVar8[9] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  puVar8[10] = (uint)&REFG(undefined, 0x14a0a44);
                  puVar8[0xb] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  puVar8[0xc] = (uint)&REFG(undefined, 0x14a0a44);
                  puVar8[0xd] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  puVar8[0xe] = (uint)&REFG(undefined, 0x14a0a44);
                  puVar8[0x10] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
                  puVar8[0x11] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  puVar8[0x12] = (uint)&REFG(undefined, 0x14a0a44);
                  puVar8[0x13] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  puVar8[0x14] = (uint)&REFG(undefined, 0x14a0a44);
                  puVar8[0x15] = puVar8[0x15] & 0xfffffff8;
                  puVar10 = puVar10 + 0x1c;
                  puVar8 = puVar8 + 0x1c;
                  iVar11 = iVar11 - 1;
                } while (-1 < iVar11);
              }
            }
          }
        }
        else if (puVar3 == ((undefined *)GEN_TOP(0x55765374))) {
          F_009896f0(pcVar12,*(undefined4 *)(pcVar13 + 4));
        }
      }
      else if ((puVar3 == ((undefined *)GEN_TOP(0x56525952))) || (puVar3 == ((undefined *)GEN_TOP(0x56525a52))))
      goto LAB_00996f9d;
switchD_00996c26_caseD_1: ;
      piVar1 = (int *)(pcVar13 + 4);
      pcVar13 = pcVar12 + (*piVar1 + 3U & 0xfffffffc);
      local_10 = local_10 + 8 + (*piVar1 + 3U & 0xfffffffc);
    } while (local_10 < param_2);
  }
  return;
}

/* ref: FUN_00997040 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00997040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x997040u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  int * piVar1;
  double dVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  uint * puVar6;
  uint uVar7;
  uint * puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint * puVar12;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_c;
  byte local_5;
  
  uVar9 = 0;
  dVar2 = *(double *)&REFG(undefined, 0x1094560);
  if (param_3 != 0) {
    do {
      puVar8 = ((uint *)GEN_TOP(0x0));
      puVar4 = (uint *)(param_2 + 2);
      if (*param_2 == 0x447374) {
        uVar3 = param_2[1];
        uVar7 = 0;
        local_c = 0;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        puVar5 = puVar4;
        iVar11 = REFG(int, 0x14a09d8);
        if (uVar3 != 0) {
          do {
            uVar10 = *puVar5;
            puVar6 = puVar5 + 2;
            if (uVar10 < 0x4b657944) {
              if (uVar10 == 0x4b657943) {
                local_c = (uint)(char)*puVar6;
                if (local_c != 0) {
                  if (REFG(char, 0x14a06d6) == '\0') {
                    uVar10 = iVar11 + 0xfU & 0xfffffff0;
                    puVar8 = ((uint *)GEN_TOP((REFG(int, 0x14a09e0) + uVar10)));
                    iVar11 = uVar10 + (local_c * 8 + 0x13 & 0xfffffff0);
                    REFG(int, 0x14a09d8) = iVar11;
                  }
                  else {
                    REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) +
                                   (local_c * 8 + 0x13 & 0xfffffff0);
                    puVar8 = ((uint *)GEN_TOP(0x0));
                  }
                }
              }
              else if (uVar10 == 0x4276506f) {
                local_1c = (uint)(char)*puVar6;
              }
              else if (uVar10 == 0x42765072) {
                local_20 = (uint)(char)*puVar6;
              }
            }
            else if (uVar10 == 0x4b657973) {
              if (local_c != 0) {
                local_5 = 0;
                uVar10 = 0;
                do {
                  puVar12 = puVar6 + uVar10 * 4;
                  puVar8[uVar10 * 2 + 1] = puVar6[uVar10 * 4 + 3];
                  *(ushort *)(puVar8 + uVar10 * 2 + 2) =
                       (ushort)puVar8[uVar10 * 2 + 2] ^
                       ((ushort)puVar8[uVar10 * 2 + 2] ^ (ushort)*puVar12) & 0x3fff;
                  *(ushort *)(puVar8 + uVar10 * 2 + 2) =
                       *((ushort *)GEN_TOP(((int)puVar12 + 2))) << 0xe |
                       (ushort)puVar8[uVar10 * 2 + 2] & 0x3fff;
                  *((char *)GEN_TOP(((int)puVar8 + uVar10 * 8 + 10))) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[1]))) * dVar2);
                  *((char *)GEN_TOP(((int)puVar8 + uVar10 * 8 + 0xb))) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[2]))) * dVar2);
                  local_5 = local_5 + 1;
                  uVar10 = (uint)local_5;
                  iVar11 = REFG(int, 0x14a09d8);
                } while (uVar10 < local_c);
              }
            }
            else if (uVar10 == 0x52616e54) {
              local_18 = (uint)(char)*puVar6;
            }
            uVar7 = uVar7 + 8 + (puVar5[1] + 3 & 0xfffffffc);
            puVar5 = ((uint *)GEN_TOP(((int)puVar6 + (puVar5[1] + 3 & 0xfffffffc))));
          } while (uVar7 < uVar3);
          if (puVar8 != ((uint *)GEN_TOP(0x0))) {
            *puVar8 = (((local_c & 0xffff) << 5 | local_18 & 7) * 4 | local_1c & 3) * 4 |
                      *puVar8 & 0xfe000180 | local_20 & 3;
            *((uint * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
          }
        }
        puVar8 = *((uint * PTR32 *)GEN_TOP(((int)this + 0xc)));
        uVar3 = *puVar8 >> 9 & 0xffff;
        if (uVar3 == 0) {
          *puVar8 = *puVar8 & 0xfffffe7f;
        }
        else if (uVar3 == 1) {
          *puVar8 = *puVar8 & 0xfffffeff | 0x80;
        }
        else {
          *puVar8 = *puVar8 & 0xffffff7f | 0x100;
        }
      }
      else if (*param_2 == 0x44737452) {
        F_00988d70(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,param_1,puVar4,param_2[1]);
        dVar2 = *(double *)&REFG(undefined, 0x1094560);
      }
      piVar1 = param_2 + 1;
      param_2 = ((int *)GEN_TOP(((int)puVar4 + (*piVar1 + 3U & 0xfffffffc))));
      uVar9 = uVar9 + 8 + (*piVar1 + 3U & 0xfffffffc);
    } while (uVar9 < param_3);
  }
  return;
}

/* ref: FUN_009972e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_009972e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x9972e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  int * piVar1;
  double dVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  uint * puVar6;
  uint uVar7;
  uint * puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint * puVar12;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_c;
  byte local_5;
  
  uVar9 = 0;
  dVar2 = *(double *)&REFG(undefined, 0x1094560);
  if (param_3 != 0) {
    do {
      puVar8 = ((uint *)GEN_TOP(0x0));
      puVar4 = (uint *)(param_2 + 2);
      if (*param_2 == 0x434f46) {
        uVar3 = param_2[1];
        uVar7 = 0;
        local_c = 0;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        puVar5 = puVar4;
        iVar11 = REFG(int, 0x14a09d8);
        if (uVar3 != 0) {
          do {
            uVar10 = *puVar5;
            puVar6 = puVar5 + 2;
            if (uVar10 < 0x4b657944) {
              if (uVar10 == 0x4b657943) {
                local_c = (uint)(char)*puVar6;
                if (local_c != 0) {
                  if (REFG(char, 0x14a06d6) == '\0') {
                    uVar10 = iVar11 + 0xfU & 0xfffffff0;
                    puVar8 = ((uint *)GEN_TOP((REFG(int, 0x14a09e0) + uVar10)));
                    iVar11 = uVar10 + (local_c * 8 + 0x13 & 0xfffffff0);
                    REFG(int, 0x14a09d8) = iVar11;
                  }
                  else {
                    REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) +
                                   (local_c * 8 + 0x13 & 0xfffffff0);
                    puVar8 = ((uint *)GEN_TOP(0x0));
                  }
                }
              }
              else if (uVar10 == 0x4276506f) {
                local_1c = (uint)(char)*puVar6;
              }
              else if (uVar10 == 0x42765072) {
                local_20 = (uint)(char)*puVar6;
              }
            }
            else if (uVar10 == 0x4b657973) {
              if (local_c != 0) {
                local_5 = 0;
                uVar10 = 0;
                do {
                  puVar12 = puVar6 + uVar10 * 4;
                  puVar8[uVar10 * 2 + 1] = puVar6[uVar10 * 4 + 3];
                  *(ushort *)(puVar8 + uVar10 * 2 + 2) =
                       (ushort)puVar8[uVar10 * 2 + 2] ^
                       ((ushort)puVar8[uVar10 * 2 + 2] ^ (ushort)*puVar12) & 0x3fff;
                  *(ushort *)(puVar8 + uVar10 * 2 + 2) =
                       *((ushort *)GEN_TOP(((int)puVar12 + 2))) << 0xe |
                       (ushort)puVar8[uVar10 * 2 + 2] & 0x3fff;
                  *((char *)GEN_TOP(((int)puVar8 + uVar10 * 8 + 10))) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[1]))) * dVar2);
                  *((char *)GEN_TOP(((int)puVar8 + uVar10 * 8 + 0xb))) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[2]))) * dVar2);
                  local_5 = local_5 + 1;
                  uVar10 = (uint)local_5;
                  iVar11 = REFG(int, 0x14a09d8);
                } while (uVar10 < local_c);
              }
            }
            else if (uVar10 == 0x52616e54) {
              local_18 = (uint)(char)*puVar6;
            }
            uVar7 = uVar7 + 8 + (puVar5[1] + 3 & 0xfffffffc);
            puVar5 = ((uint *)GEN_TOP(((int)puVar6 + (puVar5[1] + 3 & 0xfffffffc))));
          } while (uVar7 < uVar3);
          if (puVar8 != ((uint *)GEN_TOP(0x0))) {
            *puVar8 = (((local_c & 0xffff) << 5 | local_18 & 7) * 4 | local_1c & 3) * 4 |
                      *puVar8 & 0xfe000180 | local_20 & 3;
            *((uint * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
          }
        }
        puVar8 = *((uint * PTR32 *)GEN_TOP(((int)this + 0xc)));
        uVar3 = *puVar8 >> 9 & 0xffff;
        if (uVar3 == 0) {
          *puVar8 = *puVar8 & 0xfffffe7f;
        }
        else if (uVar3 == 1) {
          *puVar8 = *puVar8 & 0xfffffeff | 0x80;
        }
        else {
          *puVar8 = *puVar8 & 0xffffff7f | 0x100;
        }
      }
      else if (*param_2 == 0x434f4652) {
        F_00988d70(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,param_1,puVar4,param_2[1]);
        dVar2 = *(double *)&REFG(undefined, 0x1094560);
      }
      piVar1 = param_2 + 1;
      param_2 = ((int *)GEN_TOP(((int)puVar4 + (*piVar1 + 3U & 0xfffffffc))));
      uVar9 = uVar9 + 8 + (*piVar1 + 3U & 0xfffffffc);
    } while (uVar9 < param_3);
  }
  return;
}

/* ref: FUN_00997580 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00997580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x997580u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  int * piVar1;
  double dVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  uint * puVar6;
  uint uVar7;
  uint * puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint * puVar12;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_c;
  byte local_5;
  
  uVar9 = 0;
  dVar2 = *(double *)&REFG(undefined, 0x1094560);
  if (param_3 != 0) {
    do {
      puVar8 = ((uint *)GEN_TOP(0x0));
      puVar4 = (uint *)(param_2 + 2);
      if (*param_2 == 0x537053) {
        uVar3 = param_2[1];
        uVar7 = 0;
        local_c = 0;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        puVar5 = puVar4;
        iVar11 = REFG(int, 0x14a09d8);
        if (uVar3 != 0) {
          do {
            uVar10 = *puVar5;
            puVar6 = puVar5 + 2;
            if (uVar10 < 0x4b657944) {
              if (uVar10 == 0x4b657943) {
                local_c = (uint)(char)*puVar6;
                if (local_c != 0) {
                  if (REFG(char, 0x14a06d6) == '\0') {
                    uVar10 = iVar11 + 0xfU & 0xfffffff0;
                    puVar8 = ((uint *)GEN_TOP((REFG(int, 0x14a09e0) + uVar10)));
                    iVar11 = uVar10 + (local_c * 8 + 0x13 & 0xfffffff0);
                    REFG(int, 0x14a09d8) = iVar11;
                  }
                  else {
                    REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) +
                                   (local_c * 8 + 0x13 & 0xfffffff0);
                    puVar8 = ((uint *)GEN_TOP(0x0));
                  }
                }
              }
              else if (uVar10 == 0x4276506f) {
                local_1c = (uint)(char)*puVar6;
              }
              else if (uVar10 == 0x42765072) {
                local_20 = (uint)(char)*puVar6;
              }
            }
            else if (uVar10 == 0x4b657973) {
              if (local_c != 0) {
                local_5 = 0;
                uVar10 = 0;
                do {
                  puVar12 = puVar6 + uVar10 * 4;
                  puVar8[uVar10 * 2 + 1] = puVar6[uVar10 * 4 + 3];
                  *(ushort *)(puVar8 + uVar10 * 2 + 2) =
                       (ushort)puVar8[uVar10 * 2 + 2] ^
                       ((ushort)puVar8[uVar10 * 2 + 2] ^ (ushort)*puVar12) & 0x3fff;
                  *(ushort *)(puVar8 + uVar10 * 2 + 2) =
                       *((ushort *)GEN_TOP(((int)puVar12 + 2))) << 0xe |
                       (ushort)puVar8[uVar10 * 2 + 2] & 0x3fff;
                  *((char *)GEN_TOP(((int)puVar8 + uVar10 * 8 + 10))) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[1]))) * dVar2);
                  *((char *)GEN_TOP(((int)puVar8 + uVar10 * 8 + 0xb))) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[2]))) * dVar2);
                  local_5 = local_5 + 1;
                  uVar10 = (uint)local_5;
                  iVar11 = REFG(int, 0x14a09d8);
                } while (uVar10 < local_c);
              }
            }
            else if (uVar10 == 0x52616e54) {
              local_18 = (uint)(char)*puVar6;
            }
            uVar7 = uVar7 + 8 + (puVar5[1] + 3 & 0xfffffffc);
            puVar5 = ((uint *)GEN_TOP(((int)puVar6 + (puVar5[1] + 3 & 0xfffffffc))));
          } while (uVar7 < uVar3);
          if (puVar8 != ((uint *)GEN_TOP(0x0))) {
            *puVar8 = (((local_c & 0xffff) << 5 | local_18 & 7) * 4 | local_1c & 3) * 4 |
                      *puVar8 & 0xfe000180 | local_20 & 3;
            *((uint * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
          }
        }
        puVar8 = *((uint * PTR32 *)GEN_TOP(((int)this + 0xc)));
        uVar3 = *puVar8 >> 9 & 0xffff;
        if (uVar3 == 0) {
          *puVar8 = *puVar8 & 0xfffffe7f;
        }
        else if (uVar3 == 1) {
          *puVar8 = *puVar8 & 0xfffffeff | 0x80;
        }
        else {
          *puVar8 = *puVar8 & 0xffffff7f | 0x100;
        }
      }
      else if (*param_2 == 0x53705352) {
        F_00988d70(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,param_1,puVar4,param_2[1]);
        dVar2 = *(double *)&REFG(undefined, 0x1094560);
      }
      piVar1 = param_2 + 1;
      param_2 = ((int *)GEN_TOP(((int)puVar4 + (*piVar1 + 3U & 0xfffffffc))));
      uVar9 = uVar9 + 8 + (*piVar1 + 3U & 0xfffffffc);
    } while (uVar9 < param_3);
  }
  return;
}

/* ref: FUN_00997820 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00997820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x997820u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  int * piVar1;
  double dVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  uint * puVar6;
  uint uVar7;
  uint * puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint * puVar12;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_c;
  byte local_5;
  
  uVar9 = 0;
  dVar2 = *(double *)&REFG(undefined, 0x1094560);
  if (param_3 != 0) {
    do {
      puVar8 = ((uint *)GEN_TOP(0x0));
      puVar4 = (uint *)(param_2 + 2);
      if (*param_2 == 0x434f46) {
        uVar3 = param_2[1];
        uVar7 = 0;
        local_c = 0;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        puVar5 = puVar4;
        iVar11 = REFG(int, 0x14a09d8);
        if (uVar3 != 0) {
          do {
            uVar10 = *puVar5;
            puVar6 = puVar5 + 2;
            if (uVar10 < 0x4b657944) {
              if (uVar10 == 0x4b657943) {
                local_c = (uint)(char)*puVar6;
                if (local_c != 0) {
                  if (REFG(char, 0x14a06d6) == '\0') {
                    uVar10 = iVar11 + 0xfU & 0xfffffff0;
                    puVar8 = ((uint *)GEN_TOP((REFG(int, 0x14a09e0) + uVar10)));
                    iVar11 = uVar10 + (local_c * 8 + 0x13 & 0xfffffff0);
                    REFG(int, 0x14a09d8) = iVar11;
                  }
                  else {
                    REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) +
                                   (local_c * 8 + 0x13 & 0xfffffff0);
                    puVar8 = ((uint *)GEN_TOP(0x0));
                  }
                }
              }
              else if (uVar10 == 0x4276506f) {
                local_1c = (uint)(char)*puVar6;
              }
              else if (uVar10 == 0x42765072) {
                local_20 = (uint)(char)*puVar6;
              }
            }
            else if (uVar10 == 0x4b657973) {
              if (local_c != 0) {
                local_5 = 0;
                uVar10 = 0;
                do {
                  puVar12 = puVar6 + uVar10 * 4;
                  puVar8[uVar10 * 2 + 1] = puVar6[uVar10 * 4 + 3];
                  *(ushort *)(puVar8 + uVar10 * 2 + 2) =
                       (ushort)puVar8[uVar10 * 2 + 2] ^
                       ((ushort)puVar8[uVar10 * 2 + 2] ^ (ushort)*puVar12) & 0x3fff;
                  *(ushort *)(puVar8 + uVar10 * 2 + 2) =
                       *((ushort *)GEN_TOP(((int)puVar12 + 2))) << 0xe |
                       (ushort)puVar8[uVar10 * 2 + 2] & 0x3fff;
                  *((char *)GEN_TOP(((int)puVar8 + uVar10 * 8 + 10))) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[1]))) * dVar2);
                  *((char *)GEN_TOP(((int)puVar8 + uVar10 * 8 + 0xb))) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[2]))) * dVar2);
                  local_5 = local_5 + 1;
                  uVar10 = (uint)local_5;
                  iVar11 = REFG(int, 0x14a09d8);
                } while (uVar10 < local_c);
              }
            }
            else if (uVar10 == 0x52616e54) {
              local_18 = (uint)(char)*puVar6;
            }
            uVar7 = uVar7 + 8 + (puVar5[1] + 3 & 0xfffffffc);
            puVar5 = ((uint *)GEN_TOP(((int)puVar6 + (puVar5[1] + 3 & 0xfffffffc))));
          } while (uVar7 < uVar3);
          if (puVar8 != ((uint *)GEN_TOP(0x0))) {
            *puVar8 = (((local_c & 0xffff) << 5 | local_18 & 7) * 4 | local_1c & 3) * 4 |
                      *puVar8 & 0xfe000180 | local_20 & 3;
            *((uint * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
          }
        }
        puVar8 = *((uint * PTR32 *)GEN_TOP(((int)this + 0xc)));
        uVar3 = *puVar8 >> 9 & 0xffff;
        if (uVar3 == 0) {
          *puVar8 = *puVar8 & 0xfffffe7f;
        }
        else if (uVar3 == 1) {
          *puVar8 = *puVar8 & 0xfffffeff | 0x80;
        }
        else {
          *puVar8 = *puVar8 & 0xffffff7f | 0x100;
        }
      }
      else if (*param_2 == 0x434f4652) {
        F_00988d70(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,param_1,puVar4,param_2[1]);
        dVar2 = *(double *)&REFG(undefined, 0x1094560);
      }
      piVar1 = param_2 + 1;
      param_2 = ((int *)GEN_TOP(((int)puVar4 + (*piVar1 + 3U & 0xfffffffc))));
      uVar9 = uVar9 + 8 + (*piVar1 + 3U & 0xfffffffc);
    } while (uVar9 < param_3);
  }
  return;
}

/* ref: FUN_00997ac0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00997ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x997ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  
  uVar3 = 0;
  puVar5 = param_2;
  if (param_3 != 0) {
    do {
      uVar2 = *puVar5;
      puVar4 = puVar5 + 2;
      if (uVar2 < 0x46454464) {
        if (uVar2 == 0x46454463) {
          *((uint *)GEN_TOP(((int)this + 0x30))) = *puVar4;
        }
        else if (uVar2 == 0x477261) {
          F_00988d70(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1,puVar4,puVar5[1]);
        }
        else if (uVar2 == 0x4c656e) {
          F_00988d70(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1,puVar4,puVar5[1]);
        }
        else if (uVar2 == 0x537472) {
          F_00988d70(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,param_1,puVar4,puVar5[1]);
        }
      }
      else if (uVar2 == 0x46534463) {
        *((uint *)GEN_TOP(((int)this + 0x2c))) = *puVar4;
      }
      else if (uVar2 == 0x49526164) {
        F_00988d70(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,param_1,puVar4,puVar5[1]);
      }
      else if (uVar2 == 0x4f526164) {
        F_00988d70(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG,param_1,puVar4,puVar5[1]);
      }
      puVar1 = puVar5 + 1;
      puVar5 = ((uint *)GEN_TOP(((int)puVar4 + (*puVar1 + 3 & 0xfffffffc))));
      uVar3 = uVar3 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar3 < param_3);
  }
  return;
}

/* ref: FUN_00997bb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00997bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x997bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10df25c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x18))) = *((uint *)GEN_TOP(((int)this + 0x18))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x24))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x28))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x2c))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x30))) = *((uint *)GEN_TOP(((int)this + 0x30))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x34))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x38))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x3c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x44))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x48))) = *((uint *)GEN_TOP(((int)this + 0x48))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x4c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x50))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x54))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x5c))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x60))) = *((uint *)GEN_TOP(((int)this + 0x60))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 100))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x6c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x70))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x74))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x78))) = *((uint *)GEN_TOP(((int)this + 0x78))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x7c))) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x88))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x90))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x94))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x98))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x9c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xa0))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xa8))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xac))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xb0))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb4))) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xbc))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc0))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 200))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xcc))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xd0))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xd8))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xdc))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xe0))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xe8))) = &REFG(undefined, 0x14a0a44);
  return (uint)this;
}

/* ref: FUN_00997ce0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00997ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x997ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xdc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xcc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xbc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb4))) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xac))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x9c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x94))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x7c))) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x70))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 100))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x50))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x4c))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x38))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x34))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x28))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10dd8ec));
  return 0;
}

/* ref: FUN_00997d80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00997d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x997d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10df280));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x18))) = *((uint *)GEN_TOP(((int)this + 0x18))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x24))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x28))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x2c))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x30))) = *((uint *)GEN_TOP(((int)this + 0x30))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x34))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x38))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x3c))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x44))) = &REFG(undefined, 0x14a0a44);
  *((uint *)GEN_TOP(((int)this + 0x48))) = *((uint *)GEN_TOP(((int)this + 0x48))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x4c))) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x54))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x58))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x5c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x60))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 100))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x68))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x6c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x70))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x74))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x7c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x80))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x90))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x94))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x98))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x9c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xa0))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xa8))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xac))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xb0))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb4))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xb8))) = &REFG(undefined, 0x14a0a44);
  return (uint)this;
}

/* ref: FUN_00997e60 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00997e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x997e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xac))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x9c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x94))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x7c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x74))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x6c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 100))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x5c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x54))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x4c))) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x38))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x34))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x28))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10dd910));
  return 0;
}

/* ref: FUN_00997ed0 */
GEN_OWN GEN_FRAME unsigned int F_00997ed0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x997ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  uVar2 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar1 < 0x526f75) {
        if (uVar1 == 0x526f74) {
LAB_00997f0a: ;
          F_00988990(puVar3,puVar4[1]);
        }
        else if (uVar1 < 0x52644a) {
          if ((uVar1 == 0x526449) || (uVar1 == 0x417474)) {
LAB_00997f34: ;
            F_0097c440(puVar3,puVar4[1]);
          }
          else if (uVar1 == 0x506f73) goto LAB_00997f0a;
        }
        else if (uVar1 == 0x52644f) goto LAB_00997f34;
      }
      else if (((uVar1 == 0x41747452) || (uVar1 == 0x52644952)) || (uVar1 == 0x52644f52))
      goto LAB_00997f34;
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return;
}

/* ref: FUN_00997f60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00997f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x997f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10df29c));
  F_00988b80(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  F_00988b80(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xdc))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xe4))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe0))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xec))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe8))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((uint *)GEN_TOP(((int)this + 0xf0))) = *((uint *)GEN_TOP(((int)this + 0xf0))) & 0xfffffff8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xf4))) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x100))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xfc))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x108))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x104))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x110))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x118))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x114))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x120))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x11c))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x128))) = &REFG(undefined, 0x14a0a44);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x124))) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  return (uint)this;
}

/* ref: FUN_00998010 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00998010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x998010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x124))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x11c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x114))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x104))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xfc))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xf4))) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xdc))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 200))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x98))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x90))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x88))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x80))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x78))) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x70))) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 100))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x5c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x54))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x4c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x44))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x34))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x24))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd8b0));
  return 0;
}

/* ref: FUN_009980e0 */
GEN_OWN GEN_FRAME unsigned int F_009980e0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9980e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  uVar2 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar1 < 0x506f78) {
        if (uVar1 == 0x506f77) {
LAB_0099812b: ;
          F_0097c440(puVar3,puVar4[1]);
        }
        else if ((uVar1 == 0x416d62) || (uVar1 == 0x436f6c)) {
          F_00988c40(puVar3,puVar4[1]);
        }
      }
      else if (uVar1 == 0x526f74) {
        F_00988990(puVar3,puVar4[1]);
      }
      else if (uVar1 == 0x506f7752) goto LAB_0099812b;
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return;
}

