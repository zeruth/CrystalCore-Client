#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00b76910 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b76910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb76910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*((char *)GEN_TOP(((int)this + 0x20))) == '\0') {
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD);
  if (uVar1 == 3) {
    this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar1 = F_006c5190(this_00 GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      uVar2 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1);
      uVar3 = F_006d9e70(this_00 GEN_EDX_ARG);
      if (uVar2 == uVar3) {
        return 0;
      }
    }
    return 1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
  if (((uVar1 == 2) && ((*((byte *)GEN_TOP(((int)param_1 + 0x2dd2))) & 2) == 0)) &&
     ((char)param_1[0x62] != '\x02')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b769a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b769a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xb769a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x1c))) = 0;
  *((float *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return 1;
}

/* ref: FUN_00b769c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b769c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xb769c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  float10 fVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = F_00a4b780(10000);
  fVar3 = (float10)(int)uVar2;
  if ((int)uVar2 < 0) {
    fVar3 = GEN_X87(fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10a2b98);
  *((undefined1 *)GEN_TOP((param_1 + 0x1c))) = 0;
  *((float *)GEN_TOP((param_1 + 0x10))) =
       ((float)GEN_TOF((((float10)param_4 - (float10)param_3) * (float10)(float)(fVar3 / fVar1) +
              (float10)param_3)));
  return 1;
}

/* ref: FUN_00b76a20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b76a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb76a20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 3;
  F_00bc8440(param_1 + 0x1570 GEN_EDX_FWD,(float)(int)param_2[2],param_2[4],*param_2);
  return 1;
}

/* ref: FUN_00b76a60 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00b76a60(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xb76a60u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  float10 fVar2;
  float fVar3;
  
  uVar1 = F_00a5feb0(param_1 GEN_EDX_ARG);
  fVar3 = F_00aaea30(uVar1,param_2);
  if ((double)fVar3 < *(double *)&REFG(undefined, 0x1094810)) {
    fVar2 = F_00aae710(((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xb0))) - (float10)param_3))));
    if ((float10)((float)GEN_TOF(ABS(fVar2))) < (float10)*(float *)&REFG(undefined, 0x133df78)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b76ae0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00b76ae0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb76ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00aa0790(param_1 GEN_EDX_ARG);
  if ((char)uVar1 == '\0') {
    uVar1 = F_00a9fbf0(param_1 GEN_EDX_ARG);
    if ((char)uVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00b76b10 */
GEN_OWN GEN_NOFRAME uint F_00b76b10(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xb76b10u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_FRAME_DECL(0x30, 0);
  
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  if ((GEN_ISNAN(param_3) == (GEN_ISNAN(param_3) || param_3 == 0.0)) ||
     (GEN_ISNAN(param_4) == (GEN_ISNAN(param_4) || param_4 == 0.0))) {
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1302c98);
    (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1302c90);
    (*(float *)(gen_frame + 0x14)) = gen_bits2f(REFG(float, 0x1302c94));
    F_004f41e0(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG,param_2);
    (*(float *)(gen_frame + 0x14)) = 0.0;
    (*(float *)(gen_frame + 0x0)) = (float)((float10)REFG(float, 0x1302c88) * (float10)0 -
                      (float10)(*(float *)(gen_frame + 0x18)) * (float10)REFG(float, 0x1302c84));
    (*(float *)(gen_frame + 0x4)) = (float)((float10)REFG(float, 0x1302c80) * (float10)(*(float *)(gen_frame + 0x18)) -
                      (float10)(*(float *)(gen_frame + 0x10)) * (float10)REFG(float, 0x1302c88));
    (*(float *)(gen_frame + 0x8)) = (float)((float10)REFG(float, 0x1302c84) * (float10)(*(float *)(gen_frame + 0x10)) -
                      (float10)0 * (float10)REFG(float, 0x1302c80));
    if (GEN_ISNAN(param_3) == (GEN_ISNAN(param_3) || param_3 == 0.0)) {
      F_0046f0e0(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG,param_3);
      *param_1 = (float)((float10)*param_1 + (float10)(*(float *)(gen_frame + 0x10)));
      param_1[1] = (float)((float10)param_1[1] + (float10)(*(float *)(gen_frame + 0x14)));
      param_1[2] = (float)((float10)param_1[2] + (float10)(*(float *)(gen_frame + 0x18)));
    }
    if (GEN_ISNAN(param_4) == (GEN_ISNAN(param_4) || param_4 == 0.0)) {
      F_0046f0e0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,param_4);
      *param_1 = (float)((float10)*param_1 + (float10)(*(float *)(gen_frame + 0x0)));
      param_1[1] = (float)((float10)param_1[1] + (float10)(*(float *)(gen_frame + 0x4)));
      param_1[2] = (float)((float10)param_1[2] + (float10)(*(float *)(gen_frame + 0x8)));
    }
  }
  return (uint)param_1;
}

/* ref: FUN_00b76c70 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00b76c70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb76c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x1a))) = (ushort)param_2;
  *((undefined1 *)GEN_TOP((in_ecx + 0x21))) = 1;
  return (ushort)param_2;
}

/* ref: FUN_00b76ca0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b76ca0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb76ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((char *)GEN_TOP((in_ecx + 0x40))) == '\0') {
    *((undefined4 *)GEN_TOP((in_ecx + 0x34))) = 0;
  }
  return;
}

/* ref: FUN_00b76cb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b76cb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb76cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[7] = 0x10000;
  uVar1 = F_00bf0a20(in_ecx + 0x11 GEN_EDX_FWD);
  in_ecx[0x84] = (undefined4)REFG(float, 0x1375ad0);
  in_ecx[0x85] = (*(undefined4 *)((char *)&REFG(float, 0x1375ad0) + 4));
  in_ecx[0x86] = (undefined4)REFG(float, 0x1375ad8);
  in_ecx[0x87] = (*(undefined4 *)((char *)&REFG(float, 0x1375ad8) + 4));
  *(undefined1 *)(in_ecx + 0x88) = 0;
  in_ecx[0xb] = 0;
  *(undefined1 *)(in_ecx + 0xe) = 0;
  in_ecx[10] = 0xe0000000;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  *(undefined1 *)(in_ecx + 0x10) = 1;
  return uVar1;
}

/* ref: FUN_00b76d60 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00b76d60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb76d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x18))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00b76d70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b76d70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb76d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (int)*((short *)GEN_TOP((in_ecx + param_2 * 2)));
}

/* ref: FUN_00b76d80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b76d80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb76d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  short * psVar1;
  
  psVar1 = ((short *)GEN_TOP((in_ecx + param_2 * 2)));
  *psVar1 = *psVar1 + 1;
  return param_2;
}

/* ref: FUN_00b76d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b76d90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb76d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  short * psVar1;
  
  psVar1 = ((short *)GEN_TOP((in_ecx + param_2 * 2)));
  *psVar1 = *psVar1 - 1;
  return param_2;
}

/* ref: FUN_00b76da0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b76da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb76da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *((undefined2 *)GEN_TOP(((int)this + param_1 * 2))) = 0;
  return 0;
}

/* ref: FUN_00b76db0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00b76db0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb76db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((in_ecx + 8 + param_2 * 4)));
}

/* ref: FUN_00b76dc0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00b76dc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xb76dc0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *((float *)GEN_TOP((in_ecx + 8 + param_2 * 4))) = param_3;
  return (float10)param_3;
}

/* ref: FUN_00b76de0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b76de0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb76de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00aa0560(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00b76e00 */
GEN_OWN GEN_NOFRAME ulonglong GEN_THISCALL F_00b76e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb76e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((char *)GEN_TOP(((int)this + 0x40))) != '\0') {
    return *((ulonglong *)GEN_TOP(((int)this + 0x28)));
  }
  return 0xe0000000;
}

/* ref: FUN_00b76e20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b76e20(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb76e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  float10 fVar2;
  
  uVar1 = F_00a5feb0(param_1 GEN_EDX_ARG);
  fVar2 = F_00aaea90(param_2,uVar1);
  if (fVar2 < (float10)*(float *)&REFG(undefined, 0x10f50bc)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b76e60 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00b76e60(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb76e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG);
  return (int)uVar1 <= (int)(uint)param_2;
}

/* ref: FUN_00b76e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b76e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb76e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if ((param_1 != 0) && (*((int *)GEN_TOP(((int)this + 0xc))) == 0)) {
    uVar1 = F_005f3270(0x41,param_1,0);
    if (uVar1 != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0x60)));
    }
  }
  return *((uint *)GEN_TOP(((int)this + 0xc)));
}

/* ref: FUN_00b76ec0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00b76ec0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(byte * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb76ec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_3 = (byte *)(uintptr_t)gen_a2;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
  }
  if (*param_2 < uVar3) {
    bVar1 = *param_3 + 1;
    if (bVar1 < 0x10) {
      *param_3 = bVar1;
      return bVar1;
    }
    *param_3 = 0;
    *param_2 = *param_2 + 1;
    return bVar1;
  }
  *param_2 = (byte)uVar2;
  return (byte)uVar2;
}

/* ref: FUN_00b76f10 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_00b76f10(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb76f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float * pfVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  *param_1 = *param_4;
  param_1[1] = param_4[1];
  param_1[2] = param_4[2];
  pfVar9 = ((float *)GEN_TOP(F_00a5feb0(param_2 GEN_EDX_ARG)));
  fVar1 = *param_4;
  fVar2 = *pfVar9;
  fVar3 = param_4[1];
  fVar4 = pfVar9[1];
  fVar5 = param_4[2];
  fVar6 = pfVar9[2];
  fVar10 = GEN_X87((float10)(float)((float10)fVar3 - (float10)fVar4));
  fVar11 = GEN_X87((float10)(float)((float10)fVar1 - (float10)fVar2));
  fVar12 = GEN_X87((float10)(float)((float10)fVar5 - (float10)fVar6));
  fVar10 = (float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF((fVar12 * fVar12 +
                                                (fVar11 * fVar11 + fVar10 * fVar10))))))));
  if ((float10)1 < fVar10) {
    fVar10 = GEN_X87((float10)(float)((float10)1 / fVar10));
    pfVar9 = ((float *)GEN_TOP(F_00a5feb0(param_2 GEN_EDX_ARG)));
    fVar7 = pfVar9[1];
    fVar8 = pfVar9[2];
    *param_1 = ((float)GEN_TOF(((float10)*pfVar9 +
                      (float10)((float)GEN_TOF((fVar10 * (float10)(float)((float10)fVar1 - (float10)fVar2)))))));
    param_1[1] = ((float)GEN_TOF(((float10)fVar7 +
                        (float10)((float)GEN_TOF(((float10)(float)((float10)fVar3 - (float10)fVar4) * fVar10)))
                        )));
    param_1[2] = ((float)GEN_TOF(((float10)fVar8 +
                        (float10)((float)GEN_TOF((fVar10 * (float10)(float)((float10)fVar5 - (float10)fVar6))))
                        )));
    return (uint)param_1;
  }
  return (uint)param_1;
}

/* ref: FUN_00b77030 */
GEN_OWN GEN_NOFRAME unsigned int GEN_STDCALL F_00b77030(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb77030u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_FRAME_DECL(0x40, 0);
  float fVar1;
  uint uVar2;
  float * pfVar3;
  float * pfVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  
  if ((*((char *)GEN_TOP((param_4 + 2))) != '\0') &&
     (bVar6 = GEN_ISNAN(*((float *)GEN_TOP(((int)param_1 + 0x2ec8)))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114)),
     bVar6 != (bVar6 || *((float *)GEN_TOP(((int)param_1 + 0x2ec8))) == *(float *)&REFG(undefined, 0x1088114)))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x10))))(param_2 GEN_EDX_ARG);
    uVar5 = 0;
    if ((char)uVar2 != '\0') {
      uVar5 = uVar2 - 1;
    }
    if ((uVar5 & 0xff) <= param_3 + 1) {
      pfVar3 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar5 & 0xff)));
      pfVar4 = ((float *)GEN_TOP(F_00a5feb0(param_1 GEN_EDX_ARG)));
      (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar4 - (float10)*pfVar3);
      (*(float *)(gen_frame + 0x18)) = (float)((float10)pfVar4[2] - (float10)pfVar3[2]);
      fVar7 = GEN_X87((float10)(float)((float10)pfVar4[2] - (float10)pfVar3[2]));
      fVar8 = GEN_X87((float10)(float)((float10)*pfVar4 - (float10)*pfVar3));
      fVar1 = (float)(fVar8 * fVar8 + fVar7 * fVar7);
      (*(float *)(gen_frame + 0x2c)) = fVar1;
      fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar1))));
      (*(float *)(gen_frame + 0x2c)) = fVar1;
      (*(float *)(gen_frame + 0x28)) = fVar1;
      fVar7 = F_00a9fad0(param_1 GEN_EDX_ARG);
      (*(float *)(gen_frame + 0x2c)) = (float)(fVar7 * (float10)*(double *)&REFG(undefined, 0x109cb18));
      if ((float10)(*(float *)(gen_frame + 0x28)) <= (float10)(float)(fVar7 * (float10)*(double *)&REFG(undefined, 0x109cb18))) {
        *((undefined4 *)GEN_TOP(((int)param_1 + 0x2ec8))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)param_1 + 0x2ec8))), REFG(float, 0x10f49a4));
      }
    }
  }
  return 0;
}

/* ref: FUN_00b77140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b77140(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb77140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *param_1 = param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 6))) = param_3;
  *(undefined2 *)(param_1 + 1) = 0;
  *((undefined1 *)GEN_TOP(((int)param_1 + 7))) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  return 0;
}

/* ref: FUN_00b77190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b77190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb77190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = this;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP((((int)&REFG(undefined4, 0x14a31f0) - (int)this) + (int)puVar1)));
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar2 < 0x158);
  *((undefined4 *)GEN_TOP(((int)this + 0x560))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x564))) = 0;
  *((uint *)GEN_TOP(((int)this + 0x568))) = param_1;
  *((undefined1 *)GEN_TOP(((int)this + 0x56c))) = 1;
  return param_1;
}

/* ref: FUN_00b771f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b771f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xb771f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  
  if ((float10)*((float *)GEN_TOP((param_1 + 0x560))) < (float10)param_3) {
    *((float *)GEN_TOP((param_1 + 0x560))) = param_3;
    F_00ae2110(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_2,param_3);
    F_00ae21b0(param_1,0x158,((undefined1 *)(gen_frame + 0x0)));
    return;
  }
  return;
}

/* ref: FUN_00b77250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b77250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb77250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint3 uVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var_02 = 0;
  undefined3 uVar7;
  undefined3 extraout_var_03 = 0;
  undefined * this_00;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar1 = *(int *)this;
  uVar6 = (uint3)((uint)iVar1 >> 8);
  switch((unsigned int)(uintptr_t)(iVar1)) {
  case 0: ;
    return CONCAT31(uVar6,1);
  default: ;
    if (param_2 == ((int *)GEN_TOP(0x0))) {
      return (uint)uVar6 << 8;
    }
    uVar7 = (undefined3)((uint)(iVar1 - 1) >> 8);
    switch((unsigned int)(uintptr_t)(iVar1)) {
    case 1: ;
      bVar3 = F_00b760a0(param_1,(uint)param_2);
      if (bVar3 == 0) {
        return 0;
      }
      break;
    case 2: ;
      bVar3 = F_00b760a0(param_1,(uint)param_2);
      if (bVar3 == 0) {
        return 1;
      }
      fVar10 = F_00b763f0(param_1,param_2);
      fVar9 = (float10)*((int *)GEN_TOP(((int)this + 4)));
      if (*((int *)GEN_TOP(((int)this + 4))) < 0) {
        fVar9 = GEN_X87(fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      if (fVar9 <= (float10)fVar10) {
        return 1;
      }
      return 0;
    case 3: ;
      fVar9 = (float10)*((int *)GEN_TOP(((int)this + 4)));
      if (*((int *)GEN_TOP(((int)this + 4))) < 0) {
        fVar9 = GEN_X87(fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      uVar4 = F_00b760f0(param_1,param_2,(float)(float10)0,(float)fVar9);
      return uVar4;
    case 4: ;
      fVar9 = (float10)*((int *)GEN_TOP(((int)this + 4)));
      if (*((int *)GEN_TOP(((int)this + 4))) < 0) {
        fVar9 = GEN_X87(fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      fVar8 = (float10)0;
      goto LAB_00b776a0;
    case 5: ;
      fVar9 = (float10)*((int *)GEN_TOP(((int)this + 4)));
      if (*((int *)GEN_TOP(((int)this + 4))) < 0) {
        fVar9 = GEN_X87(fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      uVar4 = F_00b760f0(param_1,param_2,*(float *)&REFG(undefined, 0x133df6c),(float)fVar9);
      return uVar4;
    case 6: ;
      fVar9 = (float10)*((int *)GEN_TOP(((int)this + 4)));
      if (*((int *)GEN_TOP(((int)this + 4))) < 0) {
        fVar9 = GEN_X87(fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      uVar4 = F_00b761b0(param_1,param_2,*(float *)&REFG(undefined, 0x133df6c),(float)fVar9);
      return uVar4;
    case 7: ;
      fVar9 = (float10)*((int *)GEN_TOP(((int)this + 4)));
      if (*((int *)GEN_TOP(((int)this + 4))) < 0) {
        fVar9 = GEN_X87(fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      uVar4 = F_00b760f0(param_1,param_2,*(float *)&REFG(undefined, 0x133df70),(float)fVar9);
      return uVar4;
    case 8: ;
      fVar9 = (float10)*((int *)GEN_TOP(((int)this + 4)));
      if (*((int *)GEN_TOP(((int)this + 4))) < 0) {
        fVar9 = GEN_X87(fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      uVar4 = F_00b761b0(param_1,param_2,*(float *)&REFG(undefined, 0x133df70),(float)fVar9);
      return uVar4;
    case 9: ;
      fVar9 = (float10)*((int *)GEN_TOP(((int)this + 4)));
      if (*((int *)GEN_TOP(((int)this + 4))) < 0) {
        fVar9 = GEN_X87(fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      uVar4 = F_00b760f0(param_1,param_2,*(float *)&REFG(undefined, 0x133df74),(float)fVar9);
      return uVar4;
    case 10: ;
      fVar9 = (float10)*((int *)GEN_TOP(((int)this + 4)));
      if (*((int *)GEN_TOP(((int)this + 4))) < 0) {
        fVar9 = GEN_X87(fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      fVar8 = (float10)*(float *)&REFG(undefined, 0x133df74);
LAB_00b776a0: ;
      uVar4 = F_00b761b0(param_1,param_2,(float)fVar8,(float)fVar9);
      return uVar4;
    case 0xb: ;
      uVar4 = F_00a9fc10(param_2 GEN_EDX_ARG);
      return uVar4;
    case 0xc: ;
      uVar4 = F_00a9fc10(param_2 GEN_EDX_ARG);
      return CONCAT31((int3)(uVar4 >> 8),(char)uVar4 == '\0');
    default: ;
      return CONCAT31(uVar7,1);
    case 0x14: ;
      return (uint)(*((int *)GEN_TOP(((int)this + 4))) <= (int)(uint)*((byte *)GEN_TOP(((int)param_1 + 0x1689))));
    case 0x15: ;
      return (uint)((int)(uint)*((byte *)GEN_TOP(((int)param_1 + 0x1689))) <= *((int *)GEN_TOP(((int)this + 4))));
    case 0x1b: ;
      return (uint)((uint)*(byte *)(param_2 + 0xb6e) == *((uint *)GEN_TOP(((int)this + 4))));
    case 0x1c: ;
      return (uint)((uint)*(byte *)(param_2 + 0xb6f) == *((uint *)GEN_TOP(((int)this + 4))));
    case 0x1d: ;
      return (uint)((uint)*(byte *)(param_2 + 0x5a2) == *((uint *)GEN_TOP(((int)this + 4))));
    case 0x1e: ;
      bVar3 = F_00a9f440(param_2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))));
      return CONCAT31(extraout_var_03,bVar3);
    case 0x1f: ;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x1c))))(param_2 GEN_EDX_ARG);
      return CONCAT31((int3)(uVar4 >> 8),(char)uVar4 == '\0');
    case 0x20: ;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x1c))))(param_2 GEN_EDX_ARG);
      return CONCAT31((int3)(uVar4 >> 8),(char)uVar4 == '\x01');
    case 0x21: ;
      uVar11 = *((undefined4 *)GEN_TOP(((int)this + 4)));
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0xd4))))(param_2 GEN_EDX_ARG)));
      bVar3 = F_00b7aac0(this_00 GEN_EDX_ARG,uVar11);
      return CONCAT31(extraout_var_04,bVar3);
    case 0x22: ;
      bVar3 = F_00a9f390(*((undefined4 *)GEN_TOP(((int)this + 4))));
      return CONCAT31(extraout_var_05,bVar3);
    case 0x29: ;
      return (uint)((uint)*((byte *)GEN_TOP(((int)param_2 + 0x168a))) == *((uint *)GEN_TOP(((int)this + 4))));
    case 0x2a: ;
      return CONCAT31(uVar7,*((byte *)GEN_TOP(((int)param_2 + 0x2dd2))) >> 1) & 0xffffff01;
    case 0x2b: ;
      if ((uint)*((byte *)GEN_TOP(((int)param_2 + 0x168a))) != *((uint *)GEN_TOP(((int)this + 4)))) {
        return 0;
      }
      if ((uint)*((byte *)GEN_TOP(((int)param_2 + 0x168b))) <= *((uint *)GEN_TOP(((int)this + 8)))) {
        return 1;
      }
      return 0;
    case 0x2c: ;
      break;
    case 0x2d: ;
      fVar10 = F_00b763f0(param_1,param_2);
      fVar9 = (float10)*((int *)GEN_TOP(((int)this + 4)));
      if (*((int *)GEN_TOP(((int)this + 4))) < 0) {
        fVar9 = GEN_X87(fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      bVar2 = fVar9 <= (float10)fVar10;
      goto LAB_00b774b8;
    }
    fVar10 = F_00b763f0(param_1,param_2);
    fVar9 = (float10)*((int *)GEN_TOP(((int)this + 4)));
    if (*((int *)GEN_TOP(((int)this + 4))) < 0) {
      fVar9 = GEN_X87(fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    bVar2 = (float10)fVar10 <= fVar9;
LAB_00b774b8: ;
    if (bVar2) {
      return 1;
    }
    return 0;
  case 0xd: ;
    uVar4 = F_00b79ca0(((undefined *)GEN_TOP((REFG(int, 0x137104c) + 0x1210))) GEN_EDX_ARG,0);
    return uVar4;
  case 0xe: ;
    uVar4 = F_00b79ca0(((undefined *)GEN_TOP((REFG(int, 0x137104c) + 0x1210))) GEN_EDX_ARG,0);
    return CONCAT31((int3)(uVar4 >> 8),(char)uVar4 == '\0');
  case 0xf: ;
    uVar4 = F_00470090(((undefined *)GEN_TOP((REFG(int, 0x137104c) + 0x1210))) GEN_EDX_ARG,0);
    return (uint)(*((uint *)GEN_TOP(((int)this + 4))) <= uVar4);
  case 0x10: ;
    uVar4 = F_00470090(((undefined *)GEN_TOP((REFG(int, 0x137104c) + 0x1210))) GEN_EDX_ARG,0);
    return (uint)(uVar4 < *((uint *)GEN_TOP(((int)this + 4))));
  case 0x11: ;
    uVar4 = F_00470090(((undefined *)GEN_TOP((REFG(int, 0x137104c) + 0x1210))) GEN_EDX_ARG,0);
    if ((*((uint *)GEN_TOP(((int)this + 4))) <= uVar4) && (uVar4 < *((uint *)GEN_TOP(((int)this + 8))))) {
      return 1;
    }
    break;
  case 0x12: ;
    bVar3 = F_00b7c0c0(&REFG(undefined, 0x133e5c0) GEN_EDX_ARG);
    return (uint)((uint)bVar3 == *((uint *)GEN_TOP(((int)this + 4))));
  case 0x13: ;
    bVar3 = F_00b7c0c0(&REFG(undefined, 0x133e5c0) GEN_EDX_ARG);
    return (uint)((uint)bVar3 != *((uint *)GEN_TOP(((int)this + 4))));
  case 0x16: ;
    fVar9 = (float10)*((float *)GEN_TOP(((int)param_1 + *((int *)GEN_TOP(((int)this + 4))) * 4 + 0x1348)));
    fVar8 = (float10)*((int *)GEN_TOP(((int)this + 8)));
    if (*((int *)GEN_TOP(((int)this + 8))) < 0) {
      fVar8 = GEN_X87(fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    if ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar8)) && !(fVar9 < fVar8)) {
      return 1;
    }
    break;
  case 0x17: ;
    fVar9 = (float10)*((int *)GEN_TOP(((int)this + 8)));
    if (*((int *)GEN_TOP(((int)this + 8))) < 0) {
      fVar9 = GEN_X87(fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    if ((float10)*((float *)GEN_TOP(((int)param_1 + *((int *)GEN_TOP(((int)this + 4))) * 4 + 0x1348))) <= fVar9) {
      return 1;
    }
    break;
  case 0x18: ;
    return (uint)(*((int *)GEN_TOP(((int)this + 8))) <=
                 (int)*((short *)GEN_TOP(((int)param_1 + *((int *)GEN_TOP(((int)this + 4))) * 2 + 0x1340))));
  case 0x19: ;
    return (uint)((int)*((short *)GEN_TOP(((int)param_1 + *((int *)GEN_TOP(((int)this + 4))) * 2 + 0x1340))) <=
                 *((int *)GEN_TOP(((int)this + 8))));
  case 0x1a: ;
    uVar12 = 100;
    uVar11 = 0;
    F_009a46a0();
    uVar4 = F_00978ca0(uVar11,uVar12);
    return (uint)(uVar4 <= *((uint *)GEN_TOP(((int)this + 4))));
  case 0x23: ;
    bVar3 = F_00b76410(*((undefined4 *)GEN_TOP(((int)this + 4))));
    return CONCAT31(extraout_var,bVar3);
  case 0x24: ;
    bVar3 = F_00b76410(*((undefined4 *)GEN_TOP(((int)this + 4))));
    return CONCAT31(extraout_var_00,bVar3 == 0);
  case 0x25: ;
    uVar4 = F_00a5feb0(param_1 GEN_EDX_ARG);
    uVar5 = F_00b070f0();
    bVar3 = F_00b08460(uVar5 GEN_EDX_ARG,uVar4);
    return CONCAT31(extraout_var_01,bVar3);
  case 0x26: ;
    uVar4 = F_00a5feb0(param_1 GEN_EDX_ARG);
    uVar5 = F_00b070f0();
    bVar3 = F_00b08460(uVar5 GEN_EDX_ARG,uVar4);
    return CONCAT31(extraout_var_02,bVar3 == 0);
  }
  return 0;
}

/* ref: FUN_00b77930 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b77930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb77930u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 * local_8;
  
  uVar4 = 0;
  uVar2 = 0;
  local_8 = ((undefined4 *)GEN_TOP(0x0));
  if (param_2 == 5) {
    uVar2 = 0;
    local_8 = &REFG(undefined4, 0x14c5088);
  }
  else if (param_2 == 10) {
    uVar2 = 1;
    local_8 = &REFG(undefined4, 0x14c4ef8);
  }
  F_00b76650(param_1,uVar2);
  while (((puVar1 = ((undefined4 *)GEN_TOP(local_8[uVar4])), puVar1 == ((undefined4 *)GEN_TOP(0x0)) ||
          (lVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG), lVar5 == 0xe0000000)) ||
         (uVar3 = F_00b77250(this GEN_EDX_ARG,param_1,puVar1), (char)uVar3 == '\0'))) {
    uVar4 = uVar4 + 1;
    if (99 < uVar4) {
      return 0;
    }
  }
  uVar4 = F_00a5f330(puVar1);
  *param_3 = uVar4;
  return 1;
}

/* ref: FUN_00b779d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b779d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb779d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  float fVar5;
  
  pvVar1 = REFG(void * PTR32, 0x1379694);
  if (REFG(void * PTR32, 0x1379694) == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar2 = F_00a5feb0(REFG(void * PTR32, 0x1379694) GEN_EDX_FWD);
  uVar3 = F_00a5feb0(param_1 GEN_EDX_ARG);
  fVar5 = F_00aaea30(uVar3,uVar2);
  fVar4 = (float10)param_2;
  if (param_2 < 0) {
    fVar4 = GEN_X87(fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  if ((float10)fVar5 <= fVar4) {
    uVar2 = F_00b77250(this GEN_EDX_ARG,param_1,pvVar1);
    if ((char)uVar2 != '\0') {
      *param_3 = *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x74)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b77a50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b77a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb77a50u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  memcpy(&gen_args[2], &gen_a3, sizeof gen_a3);
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  iVar1 = (int)(*(undefined * PTR32 * PTR32 *)&gen_args[1]);
  fVar3 = (float10)(*(float *)&gen_args[2]);
  if ((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 * PTR32 *)&gen_args[1]) + 0x560))) < fVar3) {
    *((float *)GEN_TOP(((int)(*(undefined * PTR32 * PTR32 *)&gen_args[1]) + 0x560))) = (*(float *)&gen_args[2]);
    F_00ae2110(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),(*(float *)&gen_args[2]));
    F_00ae21b0(iVar1,0x158,((undefined1 *)(gen_frame + 0xc)));
    fVar3 = (float10)(*(float *)&gen_args[2]);
  }
  F_00ae2110(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(float)fVar3);
  (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = ((undefined1 *)(gen_frame + 0x0));
  (*(undefined * PTR32 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 (*)[2])REFP(0x10f50ec));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 (*)[2])REFP(0x10f50f8));
  (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined * PTR32 * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24));
  uVar2 = F_00ae21f0(iVar1,0x158,&(*(undefined1 * PTR32 *)(gen_frame + 0x18)),3);
  return uVar2;
}

/* ref: FUN_00b77af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b77af0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xb77af0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  uint uVar1;
  
  if ((float10)*((float *)GEN_TOP((param_3 + 0x560))) < (float10)param_4) {
    *((float *)GEN_TOP((param_3 + 0x560))) = param_4;
    F_00ae2110(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_FWD,param_2,param_4);
    F_00ae21b0(param_3,0x158,((undefined1 *)(gen_frame + 0xc)));
  }
  F_00ae2110(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2,param_4);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 (*)[2])REFP(0x10f50f8));
  (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x24)) = ((undefined1 *)(gen_frame + 0x0));
  (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x28)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18));
  uVar1 = F_00ae21f0(param_3,0x158,&(*(undefined1 * PTR32 *)(gen_frame + 0x24)),2);
  return uVar1;
}

/* ref: Client::Game::Think::Behavior::Condition::ConditionFilter::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b77b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb77b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xb8))))(param_1 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    uVar1 = F_00b77250(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(this + 4),param_1);
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00b77bd0 */
GEN_OWN GEN_NOFRAME byte F_00b77bd0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb77bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL(0x50, 0);
  float fVar1;
  int * piVar2;
  float * pfVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  
  piVar2 = ((int *)GEN_TOP(F_005f3270(8,*((undefined4 *)GEN_TOP(((int)param_1 + 0x78))),0)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    if (*((char *)GEN_TOP((param_2 + 0x16))) == '\x0f') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x38))))(piVar2 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)));
    }
    else if (*((char *)GEN_TOP((param_2 + 0x16))) == '\x10') {
      (*(float *)(gen_frame + 0x38)) = (float)*((int *)GEN_TOP((param_2 + 8)));
      (*(float *)(gen_frame + 0x3c)) = (float)(int)*((short *)GEN_TOP((param_2 + 0x12)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x38))))(piVar2 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)));
      if ((GEN_ISNAN((*(float *)(gen_frame + 0x38))) == (GEN_ISNAN((*(float *)(gen_frame + 0x38))) || (*(float *)(gen_frame + 0x38)) == 0.0)) ||
         (GEN_ISNAN((*(float *)(gen_frame + 0x3c))) == (GEN_ISNAN((*(float *)(gen_frame + 0x3c))) || (*(float *)(gen_frame + 0x3c)) == 0.0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x3c))))(piVar2 GEN_EDX_ARG,((float *)(gen_frame + 0x10)));
        pfVar3 = ((float *)GEN_TOP(F_00b76b10(((undefined1 *)(gen_frame + 0x0)),((float *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x38)),(*(float *)(gen_frame + 0x3c)))));
        (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x20)) + (float10)*pfVar3);
        (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar3[1] + (float10)(*(float *)(gen_frame + 0x24)));
        (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar3[2] + (float10)(*(float *)(gen_frame + 0x28)));
      }
    }
    (*(float *)(gen_frame + 0x38)) = *((float *)GEN_TOP(((int)param_1 + 0xc0)));
    uVar4 = F_00af2610(&(*(float *)(gen_frame + 0x20)),*(float *)&REFG(undefined, 0x133dec8),GEN_ARGF(*((float *)GEN_TOP(((int)param_1 + 0xc0)))),&(*(float *)(gen_frame + 0x34))
                         ,REFG(float, 0x10f49a4),0,0,0,0,0,0,0,3,0);
    if ((char)uVar4 != '\0') {
      (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x34));
    }
    pfVar3 = ((float *)GEN_TOP(F_00a5feb0(param_1 GEN_EDX_ARG)));
    fVar1 = *pfVar3;
    ((float *)(gen_frame + 0x10))[0] = (float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)fVar1);
    (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)pfVar3[2]);
    fVar5 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)pfVar3[2]));
    fVar6 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)fVar1));
    fVar1 = (float)(fVar6 * fVar6 + fVar5 * fVar5);
    (*(float *)(gen_frame + 0x34)) = fVar1;
    fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar1))));
    (*(float *)(gen_frame + 0x34)) = fVar1;
    if (!((float10)fVar1 < (float10)REFG(float, 0x10920a4))) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b77d70 */
GEN_OWN GEN_NOFRAME byte F_00b77d70(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb77d70u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x80, 0);
  float fVar1;
  float fVar2;
  int iVar3;
  int * piVar4;
  float * pfVar5;
  float10 fVar6;
  float fVar7;
  
  (*(byte *)(gen_frame + 0x6f)) = 0;
  piVar4 = ((int *)GEN_TOP(F_005f3270(8,*((undefined4 *)GEN_TOP(((int)param_1 + 0x78))),0)));
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1375ac8);
    if ((GEN_ISNAN(param_2) == (GEN_ISNAN(param_2) || param_2 == 0.0)) ||
       (GEN_ISNAN(param_3) == (GEN_ISNAN(param_3) || param_3 == 0.0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x3c))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
      iVar3 = *piVar4;
      (*(float *)(gen_frame + 0x40)) = REFG(float, 0x1375ac0);
      (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1375ac4);
      (*(float *)(gen_frame + 0x48)) = REFG(float, 0x1375ac8);
      ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x38))))(piVar4,&(*(float *)(gen_frame + 0x40)));
      pfVar5 = ((float *)GEN_TOP(F_00b76b10(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x10)),param_2,param_3)));
      (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar5 + (float10)(*(float *)(gen_frame + 0x40)));
      (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar5[1] + (float10)(*(float *)(gen_frame + 0x44)));
      (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar5[2] + (float10)(*(float *)(gen_frame + 0x48)));
      (*(float *)(gen_frame + 0x50)) = (float)((float10)*pfVar5 + (float10)(*(float *)(gen_frame + 0x40)));
      (*(float *)(gen_frame + 0x54)) = (float)((float10)pfVar5[1] + (float10)(*(float *)(gen_frame + 0x44)));
      (*(float *)(gen_frame + 0x58)) = (float)((float10)pfVar5[2] + (float10)(*(float *)(gen_frame + 0x48)));
    }
    pfVar5 = ((float *)GEN_TOP(F_00a5feb0(param_1 GEN_EDX_ARG)));
    fVar7 = (float)((float10)(*(float *)(gen_frame + 0x50)) - (float10)*pfVar5);
    (*(float *)(gen_frame + 0x20)) = fVar7;
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0x54)) - (float10)pfVar5[1]);
    (*(float *)(gen_frame + 0x24)) = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x58)) - (float10)pfVar5[2]);
    (*(float *)(gen_frame + 0x28)) = fVar2;
    (*(float *)(gen_frame + 0x30)) = fVar7;
    (*(float *)(gen_frame + 0x34)) = fVar1;
    (*(float *)(gen_frame + 0x38)) = fVar2;
    fVar7 = ((float)GEN_TOF((((float10)fVar7 * (float10)fVar7 + (float10)fVar1 * (float10)fVar1) +
                   (float10)fVar2 * (float10)fVar2)));
    (*(float *)(gen_frame + 0x68)) = fVar7;
    fVar7 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar7))));
    (*(float *)(gen_frame + 0x68)) = fVar7;
    if ((float10)*(float *)&REFG(undefined, 0x10f50c8) < (float10)fVar7) {
      (*(float *)(gen_frame + 0x68)) = *((float *)GEN_TOP(((int)param_1 + 0xb0)));
      fVar7 = F_00aae900(&(*(float *)(gen_frame + 0x30)));
      fVar6 = (float10)(*(float *)(gen_frame + 0x68));
      (*(float *)(gen_frame + 0x68)) = (float)((float10)fVar7 - fVar6);
      fVar6 = F_00aae710((float)((float10)fVar7 - fVar6));
      (*(float *)(gen_frame + 0x68)) = ((float)GEN_TOF(ABS(fVar6)));
      if ((float10)*(float *)&REFG(undefined, 0x10f5100) < (float10)((float)GEN_TOF(ABS(fVar6)))) {
        *param_4 = (*(float *)(gen_frame + 0x30));
        param_4[1] = (*(float *)(gen_frame + 0x34));
        param_4[2] = (*(float *)(gen_frame + 0x38));
        return 1;
      }
    }
  }
  return (*(byte *)(gen_frame + 0x6f));
}

/* ref: FUN_00b77f50 */
GEN_OWN GEN_FRAME byte F_00b77f50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb77f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  byte bVar1;
  uint uVar2;
  
  bVar1 = 1;
  if ((*((char *)GEN_TOP((param_2 + 0x16))) != '\0') || (*((short *)GEN_TOP((param_2 + 0xc))) != 0)) {
    uVar2 = (uint)*((byte *)GEN_TOP((param_2 + 0x14)));
    if (uVar2 != 0) {
      if (uVar2 != 1) {
        return uVar2 != param_4;
      }
      return param_1 != param_3;
    }
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: FUN_00b77f90 */
GEN_OWN GEN_FRAME uint F_00b77f90(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb77f90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *param_3;
  param_3[2] = param_2;
  iVar3 = 0;
  do {
    uVar2 = F_00ab2990(uVar1,iVar3);
    if ((uVar2 != 0) && (*((char *)GEN_TOP((uVar2 + 0x14))) == (char)param_2)) goto LAB_00b77fc3;
    iVar3 = iVar3 + 1;
  } while (uVar2 != 0);
  iVar3 = 0;
LAB_00b77fc3: ;
  param_3[1] = iVar3;
  *((undefined4 *)GEN_TOP((param_1 + 0x1340))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x1344))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x1348))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x134c))) = 0;
  return param_1;
}

/* ref: FUN_00b78000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b78000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb78000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  float fVar3;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0xe0000000) || (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 8))) - (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))))))
    ;
    *((float *)GEN_TOP(((int)this + 8))) = fVar3;
    if ((*((char *)GEN_TOP(((int)this + 0x10))) != '\0') && (fVar3 <= 0.0)) {
      *(undefined4 *)this = 0xe0000000;
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      return uVar1;
    }
    if (uVar1 != 0xe0000000) {
      this_00 = ((undefined *)GEN_TOP(F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,uVar1,*((int *)GEN_TOP(((int)this + 4))))));
      uVar1 = 0;
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        uVar1 = F_00a5feb0(param_1 GEN_EDX_ARG);
        uVar2 = F_00a5feb0(this_00 GEN_EDX_ARG);
        fVar3 = F_00aaea30(uVar2,uVar1);
        uVar1 = extraout_EAX;
        if (!((float10)*((float *)GEN_TOP(((int)this + 0xc))) <= (float10)fVar3)) {
          return extraout_EAX;
        }
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *(undefined4 *)this = 0xe0000000;
  }
  return uVar1;
}

/* ref: FUN_00b780b0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b780b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb780b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x40, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  undefined * pvVar4;
  float * pfVar5;
  float * pfVar6;
  float fVar7;
  undefined4 uVar8;
  
  if (param_2 != -0x20000000) {
    pvVar4 = ((undefined *)GEN_TOP(F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,param_2,param_3)));
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pvVar4;
    if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
      pfVar5 = ((float *)GEN_TOP(F_00a5feb0(param_1 GEN_EDX_ARG)));
      pfVar6 = ((float *)GEN_TOP(F_00a5feb0((*(undefined * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG)));
      uVar8 = 0;
      (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar6 - (float10)*pfVar5);
      fVar7 = pfVar6[1];
      fVar1 = pfVar5[1];
      (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar7 - (float10)fVar1);
      fVar2 = pfVar6[2];
      fVar3 = pfVar5[2];
      (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 - (float10)fVar3);
      (*(float *)(gen_frame + 0x0)) = (float)((float10)*pfVar6 - (float10)*pfVar5);
      (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar7 - (float10)fVar1);
      (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar2 - (float10)fVar3);
      fVar7 = F_00aae900(&(*(float *)(gen_frame + 0x0)));
      F_00a9f850(param_1 GEN_EDX_ARG,fVar7,uVar8);
      *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 2;
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
      return 1;
    }
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x10))), REFG(float, 0x10f50cc));
  return 0;
}

/* ref: FUN_00b78180 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b78180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb78180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x40, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float * pfVar6;
  float * pfVar7;
  uint uVar8;
  undefined1 uVar9;
  undefined * this_00;
  float fVar10;
  
  *((int *)GEN_TOP(((int)this + 0x14))) = param_2[2];
  iVar4 = *param_2;
  this_00 = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  if ((iVar4 != -0x20000000) && (iVar4 != -0x20000000)) {
    this_00 = ((undefined *)GEN_TOP(F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,iVar4,0)));
  }
  pfVar6 = ((float *)GEN_TOP(0x0));
  (*(float *)(gen_frame + 0x2c)) = 0.0;
  if ((this_00 != ((undefined *)GEN_TOP(0x0))) && (param_2[1] != 0x15)) {
    pfVar6 = ((float *)GEN_TOP(F_00a5feb0(param_1 GEN_EDX_ARG)));
    pfVar7 = ((float *)GEN_TOP(F_00a5feb0(this_00 GEN_EDX_ARG)));
    (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar7 - (float10)*pfVar6);
    fVar10 = pfVar7[1];
    fVar1 = pfVar6[1];
    (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar10 - (float10)fVar1);
    fVar2 = pfVar7[2];
    fVar3 = pfVar6[2];
    (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 - (float10)fVar3);
    (*(float *)(gen_frame + 0x0)) = (float)((float10)*pfVar7 - (float10)*pfVar6);
    (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar10 - (float10)fVar1);
    (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar2 - (float10)fVar3);
    fVar10 = F_00aae900(&(*(float *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x2c)) = fVar10;
    pfVar6 = &(*(float *)(gen_frame + 0x2c));
  }
  if ((param_2[1] == 3) || (param_2[1] == 0x15)) {
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  (*(undefined1 *)(gen_frame + 0x26)) = uVar9;
  (*(undefined2 *)(gen_frame + 0x24)) = 0;
  uVar5 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x14)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 (*)[1])REFP(0x109c984));
  uVar8 = F_00aa0000(param_1 GEN_EDX_ARG,uVar5,pfVar6,0,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)),0);
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00bf0ae0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x44))) GEN_EDX_ARG,param_2);
    uVar8 = F_00bc8170((int)param_1 + 0x1570 GEN_EDX_ARG,param_2[4],*param_2);
  }
  return uVar8;
}

/* ref: FUN_00b782a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b782a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xb782a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined2 *)(gen_frame + 0x24)) = 0;
  (*(undefined1 *)(gen_frame + 0x26)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined1 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)(gen_frame + 0x27)) = 1;
  (*(undefined4 *)(gen_frame + 0x20)) = 1;
  (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f49a4)));
  fVar1 = param_2[2];
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f49a4)));
  (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f49a4)));
  fVar2 = param_2[1];
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f49a4)));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f49a4)));
  fVar3 = *param_2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  uVar4 = F_00a9f7c0(param_1 GEN_EDX_ARG,fVar3,fVar2,fVar1,param_3,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  return uVar4;
}

/* ref: FUN_00b78330 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00b78330(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb78330u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  ushort uVar1;
  
  uVar1 = (ushort)param_3;
  if ((ushort)param_4 != 0) {
    uVar1 = (ushort)param_4;
  }
  if (param_5 != '\0') {
    *((undefined1 *)GEN_TOP((param_1 + 0x21))) = 0;
    F_00b76cb0(param_1 GEN_EDX_FWD);
    if ((ushort)param_4 == 0) {
      F_00aa05b0(param_2 GEN_EDX_ARG);
      F_00aa2cc0(param_2 GEN_EDX_ARG,0);
    }
  }
  return uVar1;
}

/* ref: FUN_00b78380 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b78380(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb78380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = 0;
  *((undefined2 *)GEN_TOP((in_ecx + 0x20))) = 1;
  uVar1 = F_00b76cb0(in_ecx GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00b78390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b78390(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb78390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  undefined4 uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_3;
  *((undefined1 *)GEN_TOP((param_1 + 0x40))) = 1;
  *((undefined4 *)GEN_TOP((param_1 + 0x28))) = 0xe0000000;
  *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x30))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x34))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x38))) = 0;
  uVar5 = *((uint *)GEN_TOP(param_3));
  if (uVar5 != 0xe0000000) {
    uVar4 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,uVar5,0);
    fVar2 = REFG(float, 0x10a509c);
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar1 = *((undefined4 *)GEN_TOP(param_3));
      *((undefined4 *)GEN_TOP((param_1 + 0x30))) = 0;
      param_3 = *((uint *)GEN_TOP((param_1 + 0x34)));
      *((undefined4 *)GEN_TOP((param_1 + 0x28))) = uVar1;
      *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = 0;
      *((undefined1 *)GEN_TOP((param_1 + 0x38))) = 0;
      if (gen_bits2f(param_3) <= fVar2) {
        param_3 = (uint)gen_fl2bits((float)(REFG(float, 0x1094880)));
      }
      *((float *)GEN_TOP((param_1 + 0x34))) = (float)(((float10)GEN_TOD(gen_bits2f(param_3))) + (float10)REFG(double, 0x1094800));
      uVar5 = F_00bc8170(param_2 + 0x1570 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar3 + 0x10))),*((undefined4 *)GEN_TOP(uVar3)));
    }
  }
  return uVar5;
}

/* ref: FUN_00b78440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b78440(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb78440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  undefined4 uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_3;
  *((undefined1 *)GEN_TOP((param_1 + 0x40))) = 1;
  *((undefined4 *)GEN_TOP((param_1 + 0x28))) = 0xe0000000;
  *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x30))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x34))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x38))) = 0;
  uVar5 = *((uint *)GEN_TOP(param_3));
  if (uVar5 != 0xe0000000) {
    uVar4 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,uVar5,0);
    fVar2 = REFG(float, 0x10a509c);
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar1 = *((undefined4 *)GEN_TOP(param_3));
      *((float *)GEN_TOP((param_1 + 0x30))) = (float)*((int *)GEN_TOP((param_3 + 8)));
      param_3 = *((uint *)GEN_TOP((param_1 + 0x34)));
      *((undefined4 *)GEN_TOP((param_1 + 0x28))) = uVar1;
      *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = 0;
      *((undefined1 *)GEN_TOP((param_1 + 0x38))) = 1;
      if (gen_bits2f(param_3) <= fVar2) {
        param_3 = (uint)gen_fl2bits((float)(REFG(float, 0x1094880)));
      }
      *((float *)GEN_TOP((param_1 + 0x34))) = (float)(((float10)GEN_TOD(gen_bits2f(param_3))) + (float10)REFG(double, 0x1094800));
      uVar5 = F_00bc8170(param_2 + 0x1570 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar3 + 0x10))),*((undefined4 *)GEN_TOP(uVar3)));
    }
  }
  return uVar5;
}

/* ref: FUN_00b784f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b784f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb784f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  uint uVar1;
  float fVar2;
  
  if (((param_2 != ((int *)GEN_TOP(0x0))) && ((char)param_3 == '\x01')) && (param_4 == '\0')) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
    if ((uVar1 == 3) && (*((char *)GEN_TOP((param_1 + 0x1c))) == '\x04')) {
      fVar2 = gen_bits2f(param_2[0x2c]);
      uVar1 = F_00a5feb0(param_2 GEN_EDX_ARG);
      F_00b782a0(param_2,uVar1,fVar2);
      *((undefined1 *)GEN_TOP((param_1 + 0x220))) = 1;
    }
  }
  return;
}

/* ref: FUN_00b78550 */
GEN_OWN GEN_FRAME float10 GEN_STDCALL F_00b78550(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb78550u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  float fVar1;
  float * pfVar2;
  float10 fVar3;
  
  fVar3 = F_00a9fad0((*(uint *)&gen_args[0]) GEN_EDX_ARG);
  (*(uint *)&gen_args[0]) = (uint)gen_fl2bits((float)fVar3);
  pfVar2 = (float *)&(*(uint *)&gen_args[0]);
  if (!((float10)1 < (float10)(float)fVar3)) {
    pfVar2 = (float *)&REFG(undefined4, 0x10f50c0);
  }
  fVar1 = *pfVar2;
  pfVar2 = (float *)&(*(uint *)&gen_args[0]);
  (*(uint *)&gen_args[0]) = (uint)gen_fl2bits((float)((float10)fVar1 * (float10)(*(float *)&gen_args[1])));
  if (!((float10)(float)((float10)fVar1 * (float10)(*(float *)&gen_args[1])) < (float10)REFG(float, 0x10f50c4))) {
    pfVar2 = &REFG(float, 0x10f50c4);
  }
  fVar1 = *pfVar2;
  return (float10)fVar1;
}

/* ref: FUN_00b785a0 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_00b785a0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb785a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x74, 12);
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  float * pfVar4;
  uint uVar5;
  float fVar6;
  undefined * PTR32 * PTR32 * pppuVar7;
  
  pfVar4 = ((float *)GEN_TOP(F_00a5feb0(param_1 GEN_EDX_ARG)));
  fVar6 = *param_2;
  (*(float *)(gen_frame + 0x60)) = fVar6;
  uVar3 = *param_3;
  (*(float *)(gen_frame + 0x44)) = (float)((float10)fVar6 - (float10)*pfVar4);
  fVar1 = param_2[2];
  (*(float *)(gen_frame + 0x5c)) = fVar1;
  fVar2 = pfVar4[2];
  (*(float *)(gen_frame + 0x4c)) = (float)((float10)fVar1 - (float10)fVar2);
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x10f49a4);
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x10f49a4);
  ((float *)(gen_frame + 0x34))[0] = (float)((float10)fVar6 - (float10)*pfVar4);
  (*(float *)(gen_frame + 0xc)) = REFG(float, 0x10f49a4);
  (*(float *)(gen_frame + 0x10)) = REFG(float, 0x10f49a4);
  ((float *)(gen_frame + 0x34))[2] = (float)((float10)fVar1 - (float10)fVar2);
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f50d0)));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined2 *)(gen_frame + 0x24)) = 0;
  (*(undefined1 *)(gen_frame + 0x26)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(float *)(gen_frame + 0x44)) = fVar6;
  (*(float *)(gen_frame + 0x48)) = param_2[1];
  ((float *)(gen_frame + 0x34))[1] = 0.0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined1 *)(gen_frame + 0x27)) = uVar3;
  (*(undefined1 *)(gen_frame + 0x2c)) = 1;
  (*(undefined4 *)(gen_frame + 0x20)) = 3;
  (*(float *)(gen_frame + 0x4c)) = fVar1;
  (*(float *)(gen_frame + 0x58)) = 0.0;
  uVar5 = F_00a9fa80(param_1 GEN_EDX_ARG,param_2,&(*(float *)(gen_frame + 0x58)),(float)(float10)0,REFG(float, 0x10f49a4),0,1);
  if ((char)uVar5 != '\0') {
    (*(float *)(gen_frame + 0x48)) = (*(float *)(gen_frame + 0x58));
  }
  pppuVar7 = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0));
  fVar6 = F_00aae900(((float *)(gen_frame + 0x34)));
  uVar5 = F_00a9f7c0(param_1 GEN_EDX_ARG,(*(float *)(gen_frame + 0x44)),(*(float *)(gen_frame + 0x48)),(*(float *)(gen_frame + 0x4c)),fVar6,pppuVar7);
  return uVar5;
}

/* ref: FUN_00b78700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b78700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb78700u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x194, 12, 4);
  float fVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  uint uVar5;
  
  uVar4 = 0;
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP(((int)this + 0xc))))) {
  case 0xe: ;
  case 0x10: ;
    fVar1 = REFG(float, 0x10a509c);
    break;
  case 0xf: ;
  case 0x11: ;
    fVar1 = REFG(float, 0x1094880);
    break;
  default: ;
    goto switchD_00b78721_default;
  }
  uVar4 = F_00b77a50(this GEN_EDX_FWD,param_1,param_3,fVar1);
switchD_00b78721_default: ;
  iVar2 = REFG(int, 0x1379694);
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP(((int)this + 0xc))))) {
  case 0: ;
    *param_2 = 0xe0000000;
    uVar4 = F_00b77250(this GEN_EDX_ARG,param_1,0);
    return uVar4;
  case 1: ;
    *param_2 = *((uint *)GEN_TOP((param_1 + 0x74)));
    uVar4 = F_00b77250(this GEN_EDX_ARG,param_1,param_1);
    return uVar4;
  case 2: ;
    uVar4 = F_00b76280(param_1);
    uVar5 = F_00a5f330(uVar4);
    *param_2 = uVar5;
    uVar4 = F_00b77250(this GEN_EDX_ARG,param_1,uVar4);
    return uVar4;
  case 3: ;
    uVar4 = F_00b76310(param_1);
    uVar5 = F_00a5f330(uVar4);
    *param_2 = uVar5;
    uVar4 = F_00b77250(this GEN_EDX_ARG,param_1,uVar4);
    return uVar4;
  case 4: ;
    bVar3 = F_00b77930(this GEN_EDX_ARG,param_1,5,param_2);
    return CONCAT31(extraout_var,bVar3);
  case 5: ;
    bVar3 = F_00b77930(this GEN_EDX_ARG,param_1,10,param_2);
    return CONCAT31(extraout_var_00,bVar3);
  case 7: ;
    uVar5 = F_00b77af0(this GEN_EDX_ARG,param_1,param_3,REFG(float, 0x1094880));
    uVar4 = 0;
    if (uVar5 == 0) break;
    uVar4 = *((uint *)GEN_TOP((uVar5 + 0x74)));
    *param_2 = uVar4;
  default: ;
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 8: ;
    fVar1 = REFG(float, 0x10a509c);
    goto LAB_00b78822;
  case 9: ;
    fVar1 = REFG(float, 0x1094880);
LAB_00b78822: ;
    uVar4 = F_00b76390(param_1,fVar1,((undefined1 *)(gen_frame + 0x0)),100);
    return (uint)(uVar4 == 0);
  case 10: ;
    bVar3 = F_00b779d0(this GEN_EDX_ARG,param_1,5,param_2);
    return CONCAT31(extraout_var_01,bVar3);
  case 0xb: ;
    bVar3 = F_00b779d0(this GEN_EDX_ARG,param_1,10,param_2);
    return CONCAT31(extraout_var_02,bVar3);
  case 0xc: ;
    bVar3 = F_00b779d0(this GEN_EDX_ARG,param_1,5,param_2);
    return CONCAT31(extraout_var_03,bVar3 == 0);
  case 0xd: ;
    bVar3 = F_00b779d0(this GEN_EDX_ARG,param_1,10,param_2);
    return CONCAT31(extraout_var_04,bVar3 == 0);
  case 0xe: ;
  case 0xf: ;
    if (uVar4 != 0) {
      *param_2 = *((uint *)GEN_TOP((uVar4 + 0x74)));
      return CONCAT31((int3)((uint)((int)(uintptr_t)param_2) >> 8),1);
    }
    break;
  case 0x10: ;
  case 0x11: ;
    *param_2 = 0xe0000000;
    return CONCAT31((int3)(uVar4 >> 8),uVar4 == 0);
  case 0x12: ;
    if ((REFG(int, 0x1379694) != 0) &&
       (uVar4 = F_00b77250(this GEN_EDX_ARG,param_1,REFG(int, 0x1379694)), (char)uVar4 != '\0')) {
      *param_2 = *((uint *)GEN_TOP((iVar2 + 0x74)));
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return uVar4 & 0xffffff00;
}

/* ref: FUN_00b789a0 */
GEN_OWN GEN_NOFRAME byte F_00b789a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb789a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  float fVar1;
  byte bVar2;
  
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((int)*((short *)GEN_TOP((param_2 + 0x12))));
  (*(float *)(gen_frame + 0x18)) = (float)*((int *)GEN_TOP((param_2 + 8)));
  fVar1 = (float)(int)*((short *)GEN_TOP((param_2 + 0x12)));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  bVar2 = F_00b77d70(param_1,(float)*((int *)GEN_TOP((param_2 + 8))),fVar1,((undefined1 *)(gen_frame + 0x0)));
  return bVar2;
}

/* ref: FUN_00b78a00 */
GEN_OWN GEN_FRAME byte F_00b78a00(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb78a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  char cVar1;
  byte bVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((param_2 + 0x16)));
  bVar2 = 1;
  if ((((cVar1 == '\x02') || (cVar1 == '\x03')) || (cVar1 == '\x14')) || (cVar1 == '\x15')) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
    if ((uVar3 != 2) || (uVar3 = F_00a9fbf0(param_1 GEN_EDX_ARG), (char)uVar3 == '\0')) {
      return 1;
    }
  }
  else {
    switch((unsigned int)(uintptr_t)(cVar1)) {
    case '\x01': ;
      uVar3 = F_00aa0580(param_1 GEN_EDX_ARG,0);
      return *((uint *)GEN_TOP((param_2 + 8))) != uVar3;
    default: ;
      goto switchD_00b78a4f_caseD_2;
    case '\t': ;
    case '\n': ;
    case '\v': ;
    case '\f': ;
      bVar2 = F_00b79b90(param_1 + 0x4d0 GEN_EDX_ARG);
      return bVar2 == 0;
    case '\x0f': ;
    case '\x10': ;
      bVar2 = F_00b77bd0(param_1,param_2);
      return bVar2;
    case '\x11': ;
      bVar2 = F_00b789a0(param_1,param_2);
      return bVar2;
    case '\x13': ;
      if ((*((int *)GEN_TOP((param_2 + 8))) != 0) && (bVar2 = F_00b79b90(param_1 + 0x4d0 GEN_EDX_ARG), bVar2 == 0)) {
        return 1;
      }
    }
  }
  bVar2 = 0;
switchD_00b78a4f_caseD_2: ;
  return bVar2;
}

/* ref: FUN_00b78af0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b78af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb78af0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  F_00b78180(this GEN_EDX_FWD,param_1,param_2);
  return 1;
}

/* ref: FUN_00b78b20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b78b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb78b20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  F_00b78180(this GEN_EDX_FWD,param_1,param_2);
  return 1;
}

/* ref: FUN_00b78b50 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b78b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb78b50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL(0x60, 0);
  float fVar1;
  float fVar2;
  int * piVar3;
  float * pfVar4;
  uint uVar5;
  float fVar6;
  
  piVar3 = ((int *)GEN_TOP(F_005f3270(8,*((undefined4 *)GEN_TOP(((int)param_1 + 0x78))),0)));
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  if (*((int *)GEN_TOP((param_2 + 4))) == 0xf) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x38))))(piVar3 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x30)));
  }
  else if (*((int *)GEN_TOP((param_2 + 4))) == 0x10) {
    (*(float *)(gen_frame + 0x48)) = (float)*((int *)GEN_TOP((param_2 + 8)));
    (*(float *)(gen_frame + 0x4c)) = (float)*((int *)GEN_TOP((param_2 + 0xc)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x38))))(piVar3 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x30)));
    if ((GEN_ISNAN((*(float *)(gen_frame + 0x48))) == (GEN_ISNAN((*(float *)(gen_frame + 0x48))) || (*(float *)(gen_frame + 0x48)) == 0.0)) ||
       (GEN_ISNAN((*(float *)(gen_frame + 0x4c))) == (GEN_ISNAN((*(float *)(gen_frame + 0x4c))) || (*(float *)(gen_frame + 0x4c)) == 0.0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x3c))))(piVar3 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)));
      pfVar4 = ((float *)GEN_TOP(F_00b76b10(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x20)),(*(float *)(gen_frame + 0x48)),(*(float *)(gen_frame + 0x4c)))));
      (*(float *)(gen_frame + 0x30)) = (float)((float10)*pfVar4 + (float10)(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x34)) = (float)((float10)pfVar4[1] + (float10)(*(float *)(gen_frame + 0x34)));
      (*(float *)(gen_frame + 0x38)) = (float)((float10)pfVar4[2] + (float10)(*(float *)(gen_frame + 0x38)));
    }
  }
  (*(float *)(gen_frame + 0x48)) = *((float *)GEN_TOP(((int)param_1 + 0xc0)));
  uVar5 = F_00af2610(&(*(float *)(gen_frame + 0x30)),*(float *)&REFG(undefined, 0x133dec8),GEN_ARGF(*((float *)GEN_TOP(((int)param_1 + 0xc0)))),&(*(float *)(gen_frame + 0x44)),
                       REFG(float, 0x10f49a4),0,0,0,0,0,0,0,3,0);
  if ((char)uVar5 != '\0') {
    (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x44));
  }
  pfVar4 = ((float *)GEN_TOP(F_00a5feb0(param_1 GEN_EDX_ARG)));
  fVar6 = *pfVar4;
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)fVar6);
  fVar1 = pfVar4[1];
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)fVar1);
  fVar2 = pfVar4[2];
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)fVar2);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)fVar6);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)fVar1);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)fVar2);
  uVar5 = F_0046f390(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG);
  fVar6 = F_00aae900(uVar5);
  (*(float *)(gen_frame + 0x48)) = fVar6;
  F_00b782a0(param_1,&(*(float *)(gen_frame + 0x30)),fVar6);
  *((float *)GEN_TOP(((int)this + 0x21c))) = (*(float *)(gen_frame + 0x48));
  *((float *)GEN_TOP(((int)this + 0x210))) = (*(float *)(gen_frame + 0x30));
  *((float *)GEN_TOP(((int)this + 0x214))) = (*(float *)(gen_frame + 0x34));
  *((float *)GEN_TOP(((int)this + 0x218))) = (*(float *)(gen_frame + 0x38));
  *((undefined1 *)GEN_TOP(((int)this + 0x220))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 4;
  return 1;
}

/* ref: FUN_00b78d40 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b78d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb78d40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL(0x30, 0);
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  float10 fVar5;
  float fVar6;
  
  iVar1 = *((int *)GEN_TOP((param_2 + 8)));
  (*(float *)(gen_frame + 0x18)) = (float)iVar1;
  iVar2 = *((int *)GEN_TOP((param_2 + 0xc)));
  (*(float *)(gen_frame + 0x1c)) = (float)iVar2;
  (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c90)));
  (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c94)));
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c98)));
  bVar3 = F_00b77d70(param_1,(float)iVar1,(float)iVar2,&(*(undefined4 *)(gen_frame + 0x0)));
  if (bVar3 != 0) {
    fVar6 = F_00aae900(&(*(undefined4 *)(gen_frame + 0x0)));
    fVar5 = F_00aae710(fVar6);
    fVar6 = (float)fVar5;
    (*(float *)(gen_frame + 0x18)) = fVar6;
    uVar4 = F_00a5feb0(param_1 GEN_EDX_ARG);
    F_00b782a0(param_1,uVar4,fVar6);
    *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 2;
    return 1;
  }
  return 0;
}

/* ref: FUN_00b78e00 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_00b78e00(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb78e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x30, 0);
  float fVar1;
  uint uVar2;
  float * pfVar3;
  undefined4 * puVar4;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG);
  if (((int)(uint)param_2 < (int)uVar2) && (param_3 < 0x10)) {
    ((float *)(gen_frame + 0x14))[2] = gen_bits2f((uint)param_3);
    ((float *)(gen_frame + 0x14))[1] = gen_bits2f(REFG(float, 0x10f50cc));
    ((float *)(gen_frame + 0x14))[0] = 0.0;
    pfVar3 = ((float *)(gen_frame + 0x14)) + 2;
    fVar1 = (float)((float10)param_3 / (float10)*(double *)&REFG(undefined, 0x1094560));
    ((float *)(gen_frame + 0x14))[2] = fVar1;
    if (!((float10)fVar1 < (float10)1)) {
      pfVar3 = ((float *)(gen_frame + 0x14)) + 1;
    }
    if (!(0.0 < *pfVar3)) {
      pfVar3 = ((float *)(gen_frame + 0x14));
    }
    puVar4 = ((undefined4 *)GEN_TOP(F_00b66960(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*pfVar3,(uint)param_2)));
    *param_4 = *puVar4;
    param_4[1] = puVar4[1];
    param_4[2] = puVar4[2];
    return 1;
  }
  return 0;
}

/* ref: FUN_00b78ec0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b78ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb78ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  undefined1 uVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  float10 fVar5;
  
  (*(byte *)(gen_frame + 0x2c)) = 1;
  if ((*(int *)this != 0) && (*((int *)GEN_TOP(((int)this + 0xc))) == 0)) {
    uVar4 = F_005f3270(0x41,*(int *)this,0);
    if (uVar4 != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((uVar4 + 0x60)));
    }
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar1 = *((undefined1 *)GEN_TOP(((int)this + 5)));
    (*(byte * PTR32 *)(gen_frame + 0x28)) = ((byte *)GEN_TOP(((int)this + 4)));
    bVar3 = *((byte *)GEN_TOP(((int)this + 4)));
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    bVar3 = F_00b78e00(piVar2,bVar3,uVar1,&(*(undefined4 *)(gen_frame + 0x10)));
    if (bVar3 != 0) {
      (*(byte *)(gen_frame + 0x2c)) = 0;
      uVar4 = F_00a5feb0(param_1 GEN_EDX_ARG);
      fVar5 = F_00aaea90((uint)&(*(undefined4 *)(gen_frame + 0x10)),uVar4);
      if (fVar5 < (float10)*(float *)&REFG(undefined, 0x10f50bc)) {
        F_00b76ec0(piVar2,(*(byte * PTR32 *)(gen_frame + 0x28)),(int)this + 5);
        bVar3 = F_00b78e00(piVar2,*(*(byte * PTR32 *)(gen_frame + 0x28)),*((undefined1 *)GEN_TOP(((int)this + 5))),&(*(undefined4 *)(gen_frame + 0x10)));
        (*(byte *)(gen_frame + 0x2c)) = bVar3;
      }
      uVar4 = F_00ab29f0((uint)*((byte *)GEN_TOP(((int)this + 6))));
      (*(uint *)(gen_frame + 0x20)) = uVar4;
      if ((*((byte *)GEN_TOP(((int)this + 7))) < 4) && ((*(byte *)(gen_frame + 0x2c)) == 0)) {
        *((byte *)GEN_TOP(((int)this + 7))) = *((byte *)GEN_TOP(((int)this + 7))) + 1;
      }
      else {
        (*(undefined4 *)(gen_frame + 0x24)) = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x1198)));
        F_00b76f10(((undefined1 *)(gen_frame + 0x0)),param_1,*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))),&(*(undefined4 *)(gen_frame + 0x10)));
        if ((*(uint *)(gen_frame + 0x20)) != 0) {
          F_00b785a0(param_1,((undefined1 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)));
        }
        *((undefined1 *)GEN_TOP(((int)this + 7))) = 0;
      }
      if ((*(uint *)(gen_frame + 0x20)) != 0) {
        F_00b77030(param_1,piVar2,*(*(byte * PTR32 *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x20)));
      }
      (*(byte *)(gen_frame + 0x2c)) = *(*(byte * PTR32 *)(gen_frame + 0x28));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG);
      return (int)uVar4 <= (int)(uint)(*(byte *)(gen_frame + 0x2c));
    }
  }
  return (*(byte *)(gen_frame + 0x2c));
}

/* ref: FUN_00b79060 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b79060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb79060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL(0x50, 0);
  int * piVar1;
  code * pcVar2;
  byte bVar3;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  
  if ((param_2 != 0) && (*((int *)GEN_TOP(((int)this + 0xc))) == 0)) {
    uVar4 = F_005f3270(0x41,param_2,0);
    if (uVar4 != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((uVar4 + 0x60)));
    }
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x10)));
    ((float *)(gen_frame + 0x20))[0] = 0.0;
    (*(float *)(gen_frame + 0x28)) = 0.0;
    uVar4 = (*pcVar2)(piVar1);
    if (1 < (int)uVar4) {
      bVar3 = F_00b78e00(piVar1,0,1,((float *)(gen_frame + 0x20)));
      if (bVar3 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x30)),0);
        uVar6 = 0;
        (*(float *)(gen_frame + 0x10)) = (float)((float10)((float *)(gen_frame + 0x20))[0] - (float10)(*(float *)(gen_frame + 0x30)));
        ((float *)(gen_frame + 0x0))[1] = 0.0;
        (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)(gen_frame + 0x38)));
        ((float *)(gen_frame + 0x0))[0] = (float)((float10)((float *)(gen_frame + 0x20))[0] - (float10)(*(float *)(gen_frame + 0x30)));
        ((float *)(gen_frame + 0x0))[2] = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)(gen_frame + 0x38)));
        fVar5 = F_00aae900(((float *)(gen_frame + 0x0)));
        F_00a9f980(param_1 GEN_EDX_ARG,(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),fVar5,uVar6);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b79160 */
GEN_OWN_GS GEN_FRAME byte F_00b79160(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb79160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x40, 0, 4);
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c));
  (*(int *)(gen_frame + 0x14)) = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = param_3;
  (*(undefined4 *)(gen_frame + 0xc)) = param_4;
  bVar3 = F_00b78a00(param_1,param_2);
  if (bVar3 == 0) {
    return 0;
  }
  uVar2 = *param_2;
  bVar3 = *((byte *)GEN_TOP(((int)param_2 + 0x17)));
  (*(uint *)(gen_frame + 0x18)) = (uint)*(byte *)(param_2 + 6);
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
  (*(uint *)(gen_frame + 0x24)) = (uint)bVar3;
  (*(uint *)(gen_frame + 0x20)) = (uint)*((ushort *)GEN_TOP(((int)param_2 + 0xe)));
  (*(uint *)(gen_frame + 0x34)) = (uint)*((byte *)GEN_TOP(((int)param_2 + 0x19)));
  (*(uint *)(gen_frame + 0x28)) = (uint)*((byte *)GEN_TOP(((int)param_2 + 0x1a)));
  uVar2 = param_2[1];
  (*(uint *)(gen_frame + 0x2c)) = (uint)*(ushort *)(param_2 + 4);
  param_3[1] = (uint)*((byte *)GEN_TOP(((int)param_2 + 0x16)));
  (*(undefined4 *)(gen_frame + 0x30)) = uVar2;
  uVar6 = 0;
  (*(uint * PTR32 *)(gen_frame + 0x10)) = &(*(uint *)(gen_frame + 0x18));
  puVar5 = &(*(undefined4 *)(gen_frame + 0x0));
  do {
    uVar4 = F_00b78700((*(uint * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x14)),puVar5,(*(undefined4 *)(gen_frame + 0xc)));
    if ((char)uVar4 == '\0') {
      return 0;
    }
    (*(uint * PTR32 *)(gen_frame + 0x10)) = (*(uint * PTR32 *)(gen_frame + 0x10)) + 4;
    uVar6 = uVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar6 < 2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x8))[4] = (uint)*(ushort *)(param_2 + 3);
  cVar1 = *((char *)GEN_TOP(((int)param_2 + 0x15)));
  if (cVar1 == '\x02') {
    *(*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x0));
  }
  else if (cVar1 == '\x03') {
    *(*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x4));
  }
  else {
    switch((unsigned int)(uintptr_t)(cVar1)) {
    case '\x01': ;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x74)));
      break;
    case '\x04': ;
      if (REFG(int, 0x1379694) != 0) {
        *(*(undefined4 * PTR32 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((REFG(int, 0x1379694) + 0x74)));
        break;
      }
    default: ;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x8)) = 0xe0000000;
    }
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8))[2] = param_2[2];
  (*(undefined4 * PTR32 *)(gen_frame + 0x8))[3] = (int)*((short *)GEN_TOP(((int)param_2 + 0x12)));
  cVar1 = *((char *)GEN_TOP(((int)param_2 + 0x16)));
  if (((((cVar1 == '\x02') || (cVar1 == '\x03')) || (cVar1 == '\x14')) || (cVar1 == '\x15')) &&
     (bVar3 = F_00bf0a60(((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x1384))) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x8))), bVar3 != 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b792e0 */
GEN_OWN GEN_FRAME uint F_00b792e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb792e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  uint local_8;
  
  local_8 = 4;
  do {
    uVar4 = F_00ab2990(*param_2,REFG(int, 0x14c5780));
    if ((uVar4 == 0) || ((*((char *)GEN_TOP((uVar4 + 0x16))) == '\0' && (*((short *)GEN_TOP((uVar4 + 0xc))) == 0)))) {
LAB_00b79338: ;
      iVar1 = *param_2;
      iVar2 = param_2[2];
      iVar6 = 0;
      do {
        uVar4 = F_00ab2990(iVar1,iVar6);
        if ((uVar4 != 0) && (*((char *)GEN_TOP((uVar4 + 0x14))) == (char)iVar2)) goto LAB_00b7935a;
        iVar6 = iVar6 + 1;
      } while (uVar4 != 0);
      iVar6 = 0;
LAB_00b7935a: ;
      if (REFG(int, 0x14c5780) == param_2[1]) {
        param_2[1] = iVar6;
      }
      REFG(int, 0x14c5780) = iVar6;
      uVar4 = F_00ab2990(*param_2,iVar6);
    }
    else {
      uVar5 = (uint)*((byte *)GEN_TOP((uVar4 + 0x14)));
      if (uVar5 != 0) {
        if (uVar5 == 1) {
          bVar7 = REFG(int, 0x14c5780) == *param_2;
        }
        else {
          bVar7 = uVar5 == param_2[2];
        }
        if (!bVar7) goto LAB_00b79338;
      }
    }
    if ((REFG(char, 0x14c5784) == '\0') && (REFG(int, 0x14c5780) == param_2[1])) {
      local_8 = 1;
    }
    else if (uVar4 == 0) {
      local_8 = 3;
    }
    else {
      bVar3 = F_00b79160(param_1,uVar4,param_4,param_3);
      if (bVar3 != 0) {
        local_8 = 0;
      }
      REFG(int, 0x14c5780) = REFG(int, 0x14c5780) + 1;
    }
    REFG(undefined4, 0x14c577c) = REFG(undefined4, 0x14c577c) + 1;
    if (0x31 < REFG(undefined4, 0x14c577c)) {
      local_8 = 2;
    }
    REFG(char, 0x14c5784) = '\0';
    if (local_8 != 4) {
      return local_8;
    }
  } while( true );
}

/* ref: FUN_00b79410 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b79410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb79410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = F_00b79060(((undefined4 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_FWD,param_1,*((undefined4 *)GEN_TOP((param_2 + 8))));
  if (bVar2 != 0) {
    *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 5;
    uVar1 = *((undefined4 *)GEN_TOP((param_2 + 8)));
    *((undefined1 *)GEN_TOP(((int)this + 0x2e))) = *((undefined1 *)GEN_TOP((param_2 + 0xc)));
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = uVar1;
    *((undefined2 *)GEN_TOP(((int)this + 0x2c))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x2f))) = 4;
    *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x40))) = 0;
    uVar3 = F_00ab29f0(*((undefined4 *)GEN_TOP((param_2 + 0xc))));
    if ((uVar3 != 0) && (*((char *)GEN_TOP((uVar3 + 1))) != '\0')) {
      *((undefined4 *)GEN_TOP((param_1 + 0x2ec8))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((param_1 + 0x2ec8))), REFG(float, 0x10f50cc));
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00b794a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b794a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb794a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)this + 0x1c))))) {
  case 0: ;
  case 3: ;
    if (!(*((float *)GEN_TOP(((int)this + 0x10))) <= 0.0)) {
      return 0;
    }
    return 1;
  case 1: ;
    uVar2 = F_00aa02d0(param_1 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x14))),0);
    if ((char)uVar2 == '\0') {
      F_00bc81b0(param_1 + 0x1570 GEN_EDX_ARG);
      *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x10))), REFG(float, 0x10f50cc));
    }
    break;
  case 2: ;
    bVar1 = F_00a9fc00(param_1 GEN_EDX_ARG);
    return bVar1 == 0;
  case 4: ;
    bVar1 = F_00b76ae0(param_1);
    if (bVar1 == 0) {
      uVar2 = F_00aa0210(param_1 GEN_EDX_ARG,0,0);
      bVar1 = F_00aa06e0(param_1 GEN_EDX_ARG,uVar2);
      if (bVar1 == 0) {
        bVar1 = F_00b76a60(param_1,(int)this + 0x210U,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x21c)))));
        if (bVar1 != 0) {
          return 1;
        }
        if (*((char *)GEN_TOP(((int)this + 0x220))) != '\0') {
          F_00b782a0(param_1,(int)this + 0x210U,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x21c)))));
          *((undefined1 *)GEN_TOP(((int)this + 0x220))) = 0;
        }
        return 0;
      }
    }
    break;
  case 5: ;
    bVar1 = F_005e1600();
    if (((bVar1 != 0) && (bVar1 = F_005d99e0(), bVar1 != 0)) && (REFG(char, 0x1379c96) == '\0')) {
      bVar1 = F_00b78ec0(((undefined *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,param_1);
      return bVar1;
    }
    break;
  default: ;
    return 1;
  }
  return 0;
}

/* ref: FUN_00b79600 */
GEN_OWN GEN_FRAME byte F_00b79600(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb79600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  short * psVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  F_00b77190(&REFG(undefined, 0x14c5218) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 4))));
  puVar6 = &REFG(undefined4, 0x14c4ef8);
  for (iVar5 = 100; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = &REFG(undefined4, 0x14c5088);
  for (iVar5 = 100; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  REFG(undefined1, 0x14c4ef1) = 0;
  REFG(undefined1, 0x14c4ef0) = 0;
  do {
    uVar3 = F_00b792e0(param_1,param_2,&REFG(undefined, 0x14c5218),param_3);
    switch((unsigned int)(uintptr_t)(uVar3)) {
    case 0: ;
      if ((*((byte *)GEN_TOP((param_1 + 0x8e))) & 0x40) == 0) {
        switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((param_3 + 4))))) {
        case 1: ;
          uVar3 = *((uint *)GEN_TOP((param_3 + 8)));
          uVar4 = F_00aa0580(param_1 GEN_EDX_ARG,0);
          if (uVar4 != uVar3) {
            F_00aa0560(param_1 GEN_EDX_ARG,uVar3);
          }
          break;
        default: ;
          goto switchD_00b79659_caseD_1;
        case 4: ;
          psVar1 = ((short *)GEN_TOP((param_1 + 0x1340 + *((int *)GEN_TOP((param_3 + 8))) * 2)));
          *psVar1 = *psVar1 + 1;
          break;
        case 5: ;
          psVar1 = ((short *)GEN_TOP((param_1 + 0x1340 + *((int *)GEN_TOP((param_3 + 8))) * 2)));
          *psVar1 = *psVar1 - 1;
          break;
        case 6: ;
          *((undefined2 *)GEN_TOP((param_1 + 0x1340 + *((int *)GEN_TOP((param_3 + 8))) * 2))) = 0;
          break;
        case 7: ;
          *((undefined4 *)GEN_TOP((param_1 + 0x1348 + *((int *)GEN_TOP((param_3 + 8))) * 4))) = 0;
          break;
        case 9: ;
          F_00b78390(param_1 + 0x1340 GEN_EDX_ARG,param_1,param_3);
          break;
        case 10: ;
          F_00b78440(param_1 + 0x1340 GEN_EDX_ARG,param_1,param_3);
          break;
        case 0x16: ;
          uVar2 = *((ushort *)GEN_TOP((param_1 + 0x2f00)));
          uVar3 = F_00aa0580(param_1 GEN_EDX_ARG,0);
          if (uVar3 != uVar2) {
            F_00aa0560(param_1 GEN_EDX_ARG,(uint)uVar2);
          }
          break;
        case 0x17: ;
          F_00b77f90(param_1,*((undefined4 *)GEN_TOP((param_3 + 8))),param_2);
          REFG(undefined1, 0x14c5784) = 1;
          break;
        case 0x18: ;
          if (REFG(int, 0x1379694) != 0) {
            F_00bf0b70(param_1 + 0x1384 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((REFG(int, 0x1379694) + 0x74))));
          }
        }
      }
      break;
    case 1: ;
    case 2: ;
    case 3: ;
switchD_00b79659_caseD_1: ;
      *((undefined4 *)GEN_TOP((param_3 + 0x14))) = REFG(undefined4, 0x14c5780);
      return uVar3 == 0;
    }
  } while( true );
}

/* ref: FUN_00b797d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b797d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb797d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  (*(uint *)(gen_frame + 0x24)) = uVar2;
  if (*((int *)GEN_TOP((param_1 + 0x11c))) != 0) {
LAB_00b79a15: ;
    return (byte)uVar2;
  }
  if (((ushort)param_2 == 0) || (uVar2 = (uint)*((byte *)GEN_TOP(((int)this + 0x1e))), *((byte *)GEN_TOP(((int)this + 0x1e))) == 0)) {
    *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x10))), REFG(float, 0x10f50cc));
    goto LAB_00b79a15;
  }
  if ((ushort)param_2 < 0x7531) goto LAB_00b79a15;
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x1d)));
  (*(uint *)(gen_frame + 0x0)) = (uint)(ushort)param_2;
  (*(uint *)(gen_frame + 0x4)) = (uint)bVar1;
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  F_00bf0ba0(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD);
  bVar1 = F_00b79600(param_1,&(*(uint *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0xc)));
  if (bVar1 == 0) {
    *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x10))), REFG(float, 0x10f50cc));
    goto switchD_00b79894_caseD_1;
  }
  F_00bc81b0(param_1 + 0x1570 GEN_EDX_ARG);
  iVar3 = F_00b767a0((*(int *)(gen_frame + 0x10)));
  if ((char)iVar3 == '\0') {
    switch((unsigned int)(uintptr_t)(((undefined4)(uint)(param_1 + 0x1570)))) {
    case 0: ;
      if ((*(int *)(gen_frame + 0x1c)) == 0) goto switchD_00b79894_caseD_1;
    case 0x12: ;
      F_00b76a20(this GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0xc)));
      *((undefined1 *)GEN_TOP(((int)this + 0x1d))) = (*(undefined1 *)(gen_frame + 0x20));
      *((byte *)GEN_TOP(((int)this + 0x1e))) = (byte)(*(uint *)(gen_frame + 0x8));
      return (byte)(*(uint *)(gen_frame + 0x8));
    default: ;
      goto switchD_00b79894_caseD_1;
    case 8: ;
      bVar1 = F_00b780b0(this GEN_EDX_ARG,param_1,(*(undefined4 *)(gen_frame + 0xc)),0);
      break;
    case 0xd: ;
      *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 0;
      *((float *)GEN_TOP(((int)this + 0x10))) = (float)(*(int *)(gen_frame + 0x14));
      goto LAB_00b798e6;
    case 0xe: ;
      bVar1 = F_00b769c0(this GEN_EDX_ARG,param_1,(float)(*(int *)(gen_frame + 0x14)),(float)(*(int *)(gen_frame + 0x18)));
      break;
    case 0xf: ;
    case 0x10: ;
      F_00b78b50(this GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0xc)));
      *((undefined1 *)GEN_TOP(((int)this + 0x1d))) = (*(undefined1 *)(gen_frame + 0x20));
      *((byte *)GEN_TOP(((int)this + 0x1e))) = (byte)(*(uint *)(gen_frame + 0x8));
      return (byte)(*(uint *)(gen_frame + 0x8));
    case 0x11: ;
      F_00b78d40(this GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0xc)));
      *((undefined1 *)GEN_TOP(((int)this + 0x1d))) = (*(undefined1 *)(gen_frame + 0x20));
      *((byte *)GEN_TOP(((int)this + 0x1e))) = (byte)(*(uint *)(gen_frame + 0x8));
      return (byte)(*(uint *)(gen_frame + 0x8));
    case 0x13: ;
      F_00b79410(this GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0xc)));
      *((undefined1 *)GEN_TOP(((int)this + 0x1d))) = (*(undefined1 *)(gen_frame + 0x20));
      *((byte *)GEN_TOP(((int)this + 0x1e))) = (byte)(*(uint *)(gen_frame + 0x8));
      return (byte)(*(uint *)(gen_frame + 0x8));
    case 0x14: ;
      goto switchD_00b79894_caseD_14;
    }
    if (bVar1 == 0) {
switchD_00b79894_caseD_1: ;
      *((undefined1 *)GEN_TOP(((int)this + 0x1d))) = (*(undefined1 *)(gen_frame + 0x20));
      *((byte *)GEN_TOP(((int)this + 0x1e))) = (byte)(*(uint *)(gen_frame + 0x8));
      return (byte)(*(uint *)(gen_frame + 0x8));
    }
  }
  else {
switchD_00b79894_caseD_14: ;
    *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    F_00b78180(this GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0xc)));
  }
LAB_00b798e6: ;
  F_00bc8170(param_1 + 0x1570 GEN_EDX_ARG,(*(int *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0xc)));
  *((undefined1 *)GEN_TOP(((int)this + 0x1d))) = (*(undefined1 *)(gen_frame + 0x20));
  *((byte *)GEN_TOP(((int)this + 0x1e))) = (byte)(*(uint *)(gen_frame + 0x8));
  return (byte)(*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_00b79a70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b79a70(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb79a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  ushort uVar1;
  ushort uVar2;
  uint this;
  byte bVar3;
  byte bVar4;
  float10 fVar5;
  
  this = param_2;
  if (*((char *)GEN_TOP(((int)param_1 + 0x40))) != '\0') {
    F_00b78000(((undefined *)GEN_TOP(((int)param_1 + 0x28))) GEN_EDX_FWD,param_2);
  }
  bVar3 = F_00b76910(param_1 GEN_EDX_ARG,param_2);
  bVar4 = 0;
  if (bVar3 != 0) {
    fVar5 = (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198)));
    *((float *)GEN_TOP(((int)param_1 + 8))) = ((float)GEN_TOF((fVar5 + (float10)*((float *)GEN_TOP(((int)param_1 + 8))))));
    *((float *)GEN_TOP(((int)param_1 + 0xc))) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xc))) + fVar5)));
    *((float *)GEN_TOP(((int)param_1 + 0x10))) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0x10))) - fVar5)));
    bVar3 = F_00b794a0(param_1 GEN_EDX_ARG,param_2);
    bVar4 = 0;
    if (bVar3 != 0) {
      uVar1 = *((ushort *)GEN_TOP(((int)param_1 + 0x1a)));
      uVar2 = *((ushort *)GEN_TOP(((int)param_1 + 0x18)));
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      param_2 = (uint)uVar2;
      if (*((char *)GEN_TOP(((int)param_1 + 0x21))) != '\0') {
        *((undefined1 *)GEN_TOP(((int)param_1 + 0x21))) = 0;
        F_00b76cb0(param_1 GEN_EDX_ARG);
        if (uVar1 == 0) {
          F_00aa05b0(((undefined *)GEN_TOP(this)) GEN_EDX_ARG);
          F_00aa2cc0(((undefined *)GEN_TOP(this)) GEN_EDX_ARG,0);
        }
      }
      bVar4 = F_00b797d0(param_1 GEN_EDX_ARG,this,param_2);
    }
  }
  return bVar4;
}

/* ref: FUN_00b79b20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b79b20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb79b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 6))) = param_2;
  return param_2;
}

/* ref: FUN_00b79b90 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b79b90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb79b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((char *)GEN_TOP((in_ecx + 0x40))) == '\0') {
    return 0;
  }
  if ((*((int *)GEN_TOP((in_ecx + 0x28))) == -0x20000000) && (*((int *)GEN_TOP((in_ecx + 0x2c))) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: Client::Game::Object::BnpcFilter::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b79c40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb79c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Think::Behavior::Condition::ConditionFilter::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b79c70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb79c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b79ca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b79ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb79ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this,param_1);
  if (REFG(undefined4, 0x133dd04) <= (uint)((uVar1 / 0xe10) % 0x18)) {
    uVar1 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this,param_1);
    if ((uint)((uVar1 / 0xe10) % 0x18) < REFG(undefined4, 0x133de90)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b79d60 */
GEN_OWN GEN_FRAME float10 F_00b79d60(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xb79d60u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00b79d80 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b79d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb79d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x2f20;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 400;
  uVar1 = F_00406bb0(0x75d00,0,0);
  *(uint *)this = uVar1;
  uVar1 = F_00406bb0(*((int *)GEN_TOP(((int)this + 0xc))) * 0x14,0,0);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
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
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  return 0;
}

/* ref: FUN_00b79ee0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_STDCALL F_00b79ee0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb79ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return;
}

/* ref: FUN_00b79f30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b79f30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb79f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 < 0x3c) {
    return *((uint *)GEN_TOP((in_ecx + 0x10 + param_2 * 4)));
  }
  return 0;
}

/* ref: FUN_00b79f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b79f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb79f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = ((uint *)GEN_TOP(((int)this + 0x10)));
  while (((0x3b < uVar3 || (uVar1 = *puVar2, uVar1 == 0)) || (*((int *)GEN_TOP((uVar1 + 0x78))) != param_1))) {
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
    if (0x3b < (int)uVar3) {
      return 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00b79f80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b79f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb79f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar3 = ((int *)GEN_TOP(((int)this + 0x10)));
  do {
    if (((uVar4 < 0x3c) && (piVar1 = ((int *)GEN_TOP(*piVar3)), piVar1 != ((int *)GEN_TOP(0x0)))) &&
       (piVar1[0x20] == param_1)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb8))))(piVar1 GEN_EDX_FWD);
      if ((char)uVar2 != '\0') {
        return (uint)piVar1;
      }
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 1;
  } while ((int)uVar4 < 0x3c);
  return 0;
}

/* ref: FUN_00b79fe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b79fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb79fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  piVar3 = ((int *)GEN_TOP(((int)this + 0x10)));
  do {
    if ((uVar4 < 0x3c) && (piVar1 = ((int *)GEN_TOP(*piVar3)), piVar1 != ((int *)GEN_TOP(0x0)))) {
      uVar5 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*piVar1)))(piVar1);
      if (((int)uVar5 == param_1) && ((int)((ulonglong)uVar5 >> 0x20) == 0)) {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb8))))(piVar1 GEN_EDX_FWD);
        if ((char)uVar2 == '\0') {
          return (uint)piVar1;
        }
      }
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 1;
  } while ((int)uVar4 < 0x3c);
  return 0;
}

/* ref: FUN_00b7a040 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b7a040(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7a040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00a35730(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00b7a050 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b7a050(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7a050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00a35760(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00b7a060 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b7a060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7a060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1;
  iVar3 = 0xc;
  do {
    if (((iVar2 - 1U < 0x3c) && (iVar1 = *((int *)GEN_TOP(((int)this + 0x10))), iVar1 != 0)) &&
       (*((int *)GEN_TOP((iVar1 + 0xe4))) == param_1)) {
      *((byte *)GEN_TOP((iVar1 + 0x8f))) = *((byte *)GEN_TOP((iVar1 + 0x8f))) | 0x2c;
    }
    if (((-1 < iVar2) && (iVar2 < 0x3c)) &&
       ((iVar1 = *((int *)GEN_TOP(((int)this + 0x14))), iVar1 != 0 && (*((int *)GEN_TOP((iVar1 + 0xe4))) == param_1)))) {
      *((byte *)GEN_TOP((iVar1 + 0x8f))) = *((byte *)GEN_TOP((iVar1 + 0x8f))) | 0x2c;
    }
    if (((-1 < iVar2 + 1) && (iVar2 + 1 < 0x3c)) &&
       ((iVar1 = *((int *)GEN_TOP(((int)this + 0x18))), iVar1 != 0 && (*((int *)GEN_TOP((iVar1 + 0xe4))) == param_1)))) {
      *((byte *)GEN_TOP((iVar1 + 0x8f))) = *((byte *)GEN_TOP((iVar1 + 0x8f))) | 0x2c;
    }
    if ((((-1 < iVar2 + 2) && (iVar2 + 2 < 0x3c)) &&
        (iVar1 = *((int *)GEN_TOP(((int)this + 0x1c))), iVar1 != 0)) && (*((int *)GEN_TOP((iVar1 + 0xe4))) == param_1)) {
      *((byte *)GEN_TOP((iVar1 + 0x8f))) = *((byte *)GEN_TOP((iVar1 + 0x8f))) | 0x2c;
    }
    if (((-1 < iVar2 + 3) && (iVar2 + 3 < 0x3c)) &&
       ((iVar1 = *((int *)GEN_TOP(((int)this + 0x20))), iVar1 != 0 && (*((int *)GEN_TOP((iVar1 + 0xe4))) == param_1)))) {
      *((byte *)GEN_TOP((iVar1 + 0x8f))) = *((byte *)GEN_TOP((iVar1 + 0x8f))) | 0x2c;
    }
    iVar2 = iVar2 + 5;
    iVar3 = iVar3 - 1;
    this = ((int *)GEN_TOP(((int)this + 0x14)));
  } while (iVar3 != 0);
  return 0;
}

/* ref: FUN_00b7a140 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b7a140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7a140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  piVar3 = ((int *)GEN_TOP(((int)this + 0x10)));
  uVar5 = 0;
  while ((((0x3b < uVar5 || (piVar2 = ((int *)GEN_TOP(*piVar3)), piVar2 == ((int *)GEN_TOP(0x0)))) ||
          (bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x8a))), ((byte)param_1 & 1 < bVar1) == 0)) ||
         ((uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x68))))(piVar2 GEN_EDX_FWD), (char)uVar4 != '\0' &&
          (((*((byte *)GEN_TOP(((int)piVar2 + 0x8e))) & 0x80) == 0 ||
           ((uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x70))))(piVar2 GEN_EDX_ARG), (char)uVar4 != '\0' &&
            ((bVar1 != 7 || ((char)piVar2[99] != '\0'))))))))))) {
    uVar5 = uVar5 + 1;
    piVar3 = piVar3 + 1;
    if (0x3b < uVar5) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b7a1d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b7a1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7a1d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if ((param_1 < 0x3c) && (piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 0x10))), piVar1 != ((int *)GEN_TOP(0x0)))
     ) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb0))))(piVar1 GEN_EDX_ARG);
    if ((uVar2 == 3) || ((uVar2 == 5 || (uVar2 == 7)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb4))))(piVar1 GEN_EDX_ARG,0);
    }
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x10))) = 0;
    F_00a35760(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,piVar1);
  }
  return;
}

/* ref: FUN_00b7a240 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b7a240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7a240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int * piVar3;
  uint local_8;
  
  local_8 = 0;
  piVar3 = ((int *)GEN_TOP(((int)this + 0x10)));
  do {
    if ((local_8 < 0x3c) && (piVar1 = ((int *)GEN_TOP(*piVar3)), piVar1 != ((int *)GEN_TOP(0x0)))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb0))))(piVar1 GEN_EDX_ARG);
      if ((uVar2 == 3) || ((uVar2 == 5 || (uVar2 == 7)))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb4))))(piVar1 GEN_EDX_ARG,0);
      }
      *piVar3 = 0;
      F_00a35760(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,piVar1);
    }
    local_8 = local_8 + 1;
    piVar3 = piVar3 + 1;
  } while ((int)local_8 < 0x3c);
  return 0;
}

/* ref: FUN_00b7a2c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7a2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7a2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int local_8;
  
  uVar4 = 0;
  local_8 = 0;
  iVar3 = 0;
  piVar5 = ((int *)GEN_TOP(((int)this + 0x10)));
  do {
    if (((uVar4 < 0x3c) && (piVar1 = ((int *)GEN_TOP(*piVar5)), piVar1 != ((int *)GEN_TOP(0x0)))) && (piVar1[0x3b] != 0))
    {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x68))))(piVar1 GEN_EDX_FWD);
      if ((char)uVar2 != '\0') {
        local_8 = local_8 + 1;
      }
      iVar3 = iVar3 + 1;
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 1;
  } while ((int)uVar4 < 0x3c);
  if (iVar3 == 0) {
    return 100;
  }
  return (local_8 * 100) / iVar3;
}

/* ref: FUN_00b7a320 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b7a320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7a320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  if ((REFG(char, 0x1379c96) == '\0') && (REFG(char, 0x1379c97) == '\0')) {
    uVar2 = 0;
    piVar3 = ((int *)GEN_TOP(((int)this + 0x10)));
    do {
      if ((uVar2 < 0x3c) && (piVar1 = ((int *)GEN_TOP(*piVar3)), piVar1 != ((int *)GEN_TOP(0x0)))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while ((int)uVar2 < 0x3c);
  }
  return;
}

/* ref: FUN_00b7a360 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7a360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7a360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00b7a240(this GEN_EDX_FWD);
  F_00406ad0(*(undefined4 *)this);
  *(undefined4 *)this = 0;
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return uVar1;
}

/* ref: FUN_00b7a390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7a390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb7a390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int * piVar1;
  int iVar2;
  
  if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
    return 0xffffffff;
  }
  iVar2 = 0;
  piVar1 = ((int *)GEN_TOP(((int)this + 0xb0)));
  do {
    if (*piVar1 == 0) {
      if (iVar2 == -1) {
        return 0xffffffff;
      }
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + iVar2 * 4 + 0xb0)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb0))))(piVar1 GEN_EDX_FWD);
      }
      piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) * iVar2 + *((int *)GEN_TOP(((int)this + 4))))));
      if (piVar1 == ((int *)GEN_TOP(0x0))) {
        piVar1 = ((int *)GEN_TOP(0x0));
      }
      else {
        *piVar1 = (int)(*(undefined * PTR32 (*)[53])REFP(0x10eb834));
      }
      *((int * PTR32 *)GEN_TOP(((int)this + iVar2 * 4 + 0xb0))) = piVar1;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xac))))(piVar1 GEN_EDX_ARG,iVar2 + 0x144);
      F_00ae1e60(piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4);
      F_00a35730(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + iVar2 * 4 + 0xb0))));
      return iVar2 + 0x28;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0x14);
  return 0xffffffff;
}

/* ref: FUN_00b7a450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7a450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb7a450u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int * piVar1;
  int iVar2;
  
  if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
    return 0xffffffff;
  }
  iVar2 = 0;
  piVar1 = ((int *)GEN_TOP(((int)this + 0xb0)));
  do {
    if (*piVar1 == 0) {
      if (iVar2 == -1) {
        return 0xffffffff;
      }
      piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) * iVar2 + *((int *)GEN_TOP(((int)this + 4))))));
      if (piVar1 == ((int *)GEN_TOP(0x0))) {
        piVar1 = ((int *)GEN_TOP(0x0));
      }
      else {
        *piVar1 = (int)(*(undefined * PTR32 (*)[53])REFP(0x10f518c));
      }
      *((int * PTR32 *)GEN_TOP(((int)this + iVar2 * 4 + 0xb0))) = piVar1;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xac))))(piVar1 GEN_EDX_FWD,iVar2 + 0x144);
      F_00bf0cb0(piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4);
      F_00a35730(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + iVar2 * 4 + 0xb0))));
      return iVar2 + 0x28;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0x14);
  return 0xffffffff;
}

/* ref: FUN_00b7a500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7a500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb7a500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  if (*(int *)this == 0) {
    return 0xffffffff;
  }
  uVar2 = 0;
  piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
  do {
    if (*piVar1 == 0) {
      if (uVar2 == 0xffffffff) {
        return 0xffffffff;
      }
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + uVar2 * 4 + 0x10)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb0))))(piVar1 GEN_EDX_FWD);
      }
      this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) * uVar2 + *(int *)this)));
      if (this_00 == ((undefined *)GEN_TOP(0x0))) {
        piVar1 = ((int *)GEN_TOP(0x0));
      }
      else {
        piVar1 = ((int *)GEN_TOP(F_00a665b0(this_00 GEN_EDX_ARG)));
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xac))))(piVar1 GEN_EDX_ARG,uVar2 + 0x11c);
      F_00a5f430(piVar1 GEN_EDX_ARG,param_2);
      F_00aaa870(piVar1 GEN_EDX_ARG,param_1);
      *((int * PTR32 *)GEN_TOP(((int)this + uVar2 * 4 + 0x10))) = piVar1;
      F_00a35730(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,piVar1);
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 1;
  } while ((int)uVar2 < 0x28);
  return 0xffffffff;
}

/* ref: FUN_00b7a5b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7a5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7a5b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x150, 0);
  char cVar1;
  code * pcVar2;
  int iVar3;
  int * piVar4;
  byte bVar5;
  uint uVar6;
  int * piVar7;
  undefined3 extraout_var = 0;
  int iVar8;
  int * piVar9;
  bool bVar10;
  
  (*(undefined * PTR32 *)(gen_frame + 0x12c)) = this;
  (*(undefined1 *)(gen_frame + 0x13f)) = 0;
  uVar6 = F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  piVar7 = ((int *)GEN_TOP(0x0));
  if ((uVar6 != 0) && (piVar7 = ((int *)GEN_TOP(F_00974710(uVar6 GEN_EDX_ARG))), (char)piVar7 != '\0')) {
    bVar5 = F_005e1600();
    piVar7 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar5)));
    if ((bVar5 != 0) && ((REFG(char, 0x1379c96) == '\0' && (REFG(char, 0x1379c97) == '\0')))) {
      piVar7 = ((int *)(gen_frame + 0x0));
      for (iVar8 = 0x3c; iVar8 != 0; iVar8 = iVar8 - 1) {
        *piVar7 = 0;
        piVar7 = piVar7 + 1;
      }
      (*(int *)(gen_frame + 0x138)) = 0;
      uVar6 = F_005effe0(8,&(*(undefined1 *)(gen_frame + 0x13f)));
      piVar7 = ((int *)GEN_TOP(0x0));
      if (uVar6 != 0) {
        piVar7 = *((int * PTR32 *)GEN_TOP((uVar6 + 4)));
        (*(int * PTR32 *)(gen_frame + 0x134)) = ((int *)GEN_TOP(*piVar7));
        while (((*(int * PTR32 *)(gen_frame + 0x134)) != piVar7 && ((*(int *)(gen_frame + 0x138)) < 0x28))) {
          piVar9 = ((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x134))[4]));
          if (piVar9 != ((int *)GEN_TOP(0x0))) {
            pcVar2 = *((gen_code32 *)GEN_TOP((*piVar9 + 0x114)));
            uVar6 = (*pcVar2)(piVar9);
            uVar6 = F_00ab2440(uVar6);
            if ((*((char *)GEN_TOP((uVar6 + 0x14))) != '\x01') && (*((char *)GEN_TOP((uVar6 + 0x14))) != '\x02')) {
              ((int *)(gen_frame + 0x0))[(int)((*(int *)(gen_frame + 0x138)))] = (int)piVar9;
              (*(int *)(gen_frame + 0x138)) = (*(int *)(gen_frame + 0x138)) + 1;
            }
          }
          F_0054f4d0(&(*(int * PTR32 *)(gen_frame + 0x134)) GEN_EDX_ARG);
        }
        iVar8 = 0x28;
        (*(int *)(gen_frame + 0x138)) = 0x28;
        uVar6 = F_005effe0(0xc,&(*(undefined1 *)(gen_frame + 0x13f)));
        piVar7 = ((int *)GEN_TOP(0x0));
        if (uVar6 != 0) {
          piVar7 = *((int * PTR32 *)GEN_TOP((uVar6 + 4)));
          piVar9 = ((int *)GEN_TOP(*piVar7));
          (*(int * PTR32 *)(gen_frame + 0x134)) = piVar9;
          if (piVar9 != piVar7) {
            do {
              if (0x3b < iVar8) break;
              ((int *)(gen_frame + 0x0))[(int)(iVar8)] = (*(int * PTR32 *)(gen_frame + 0x134))[4];
              iVar8 = iVar8 + 1;
              F_0054f4d0(&(*(int * PTR32 *)(gen_frame + 0x134)) GEN_EDX_ARG);
            } while ((*(int * PTR32 *)(gen_frame + 0x134)) != piVar7);
            (*(int *)(gen_frame + 0x138)) = iVar8;
          }
          uVar6 = F_005effe0(0x2d,&(*(undefined1 *)(gen_frame + 0x13f)));
          piVar7 = ((int *)GEN_TOP(0x0));
          if (uVar6 != 0) {
            piVar7 = *((int * PTR32 *)GEN_TOP((uVar6 + 4)));
            piVar9 = ((int *)GEN_TOP(*piVar7));
            (*(int * PTR32 *)(gen_frame + 0x130)) = piVar7;
            if (piVar9 != piVar7) {
              do {
                if (0x3b < (*(int *)(gen_frame + 0x138))) break;
                iVar8 = piVar9[4];
                if ((iVar8 != 0) &&
                   (uVar6 = F_00ab2470(*((undefined4 *)GEN_TOP((iVar8 + 0x30)))),
                   *((char *)GEN_TOP((uVar6 + 0x16))) == '\x03')) {
                  ((int *)(gen_frame + 0x0))[(int)((*(int *)(gen_frame + 0x138)))] = iVar8;
                  (*(int *)(gen_frame + 0x138)) = (*(int *)(gen_frame + 0x138)) + 1;
                }
                if (*((char *)GEN_TOP(((int)piVar9 + 0x15))) == '\0') {
                  piVar7 = ((int *)GEN_TOP(piVar9[2]));
                  if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
                    cVar1 = *((char *)GEN_TOP((*piVar7 + 0x15)));
                    piVar9 = piVar7;
                    piVar7 = ((int *)GEN_TOP(*piVar7));
                    while (cVar1 == '\0') {
                      cVar1 = *((char *)GEN_TOP((*piVar7 + 0x15)));
                      piVar9 = piVar7;
                      piVar7 = ((int *)GEN_TOP(*piVar7));
                    }
                  }
                  else {
                    cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
                    piVar4 = ((int *)GEN_TOP(piVar9[1]));
                    piVar7 = piVar9;
                    while ((piVar9 = piVar4, cVar1 == '\0' && (piVar7 == ((int *)GEN_TOP(piVar9[2]))))) {
                      cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
                      piVar4 = ((int *)GEN_TOP(piVar9[1]));
                      piVar7 = piVar9;
                    }
                  }
                }
              } while (piVar9 != (*(int * PTR32 *)(gen_frame + 0x130)));
            }
            (*(int * PTR32 *)(gen_frame + 0x130)) = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x12c)) + 0x10)));
            (*(int * PTR32 *)(gen_frame + 0x134)) = ((int *)GEN_TOP(0x0));
            do {
              piVar7 = (*(int * PTR32 *)(gen_frame + 0x134));
              if (((*(int * PTR32 *)(gen_frame + 0x134)) < ((int *)GEN_TOP(0x3c))) && (piVar9 = ((int *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x130)))), piVar9 != ((int *)GEN_TOP(0x0)))) {
                iVar8 = 0;
                bVar10 = (*(int *)(gen_frame + 0x138)) == 0;
                if (0 < (*(int *)(gen_frame + 0x138))) {
                  do {
                    iVar3 = ((int *)(gen_frame + 0x0))[(int)(iVar8)];
                    if ((iVar3 != 0) &&
                       (uVar6 = F_00b79f30((*(undefined * PTR32 *)(gen_frame + 0x12c)) GEN_EDX_ARG,piVar7), piVar7 = (*(int * PTR32 *)(gen_frame + 0x134)),
                       *((int *)GEN_TOP((uVar6 + 0x78))) == *((int *)GEN_TOP((iVar3 + 0x14))))) break;
                    iVar8 = iVar8 + 1;
                  } while (iVar8 < (*(int *)(gen_frame + 0x138)));
                  bVar10 = iVar8 == (*(int *)(gen_frame + 0x138));
                }
                if (bVar10) {
                  if (piVar9 != ((int *)GEN_TOP(0x0))) {
                    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 4))))(piVar9 GEN_EDX_ARG);
                    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xb0))))(piVar9 GEN_EDX_ARG);
                    if (((uVar6 == 3) || (uVar6 == 5)) || (uVar6 == 7)) {
                      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xb4))))(piVar9 GEN_EDX_ARG,0);
                    }
                    *(*(int * PTR32 *)(gen_frame + 0x130)) = 0;
                    F_00a35760(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,piVar9);
                    piVar7 = (*(int * PTR32 *)(gen_frame + 0x134));
                  }
                }
                else {
                  ((int *)(gen_frame + 0x0))[(int)(iVar8)] = 0;
                }
              }
              (*(int * PTR32 *)(gen_frame + 0x130)) = (*(int * PTR32 *)(gen_frame + 0x130)) + 1;
              (*(int * PTR32 *)(gen_frame + 0x134)) = ((int *)GEN_TOP(((int)piVar7 + 1U)));
            } while ((int)((int)piVar7 + 1U) < 0x3c);
            piVar7 = ((int *)GEN_TOP(0x0));
            (*(int * PTR32 *)(gen_frame + 0x134)) = ((int *)GEN_TOP(0x0));
            if (0 < (*(int *)(gen_frame + 0x138))) {
              do {
                piVar7 = ((int *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)((int)(*(int * PTR32 *)(gen_frame + 0x134)))]));
                if (piVar7 != ((int *)GEN_TOP(0x0))) {
                  cVar1 = *((char *)GEN_TOP(((int)piVar7 + 0x11)));
                  if (cVar1 == '\b') {
                    piVar9 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x114))))(piVar7 GEN_EDX_ARG)));
                    (*(int * PTR32 *)(gen_frame + 0x130)) = piVar9;
                    uVar6 = F_00b7a500((*(undefined * PTR32 *)(gen_frame + 0x12c)) GEN_EDX_ARG,piVar9,piVar7[5]);
                  }
                  else if (cVar1 == '\f') {
                    (*(int * PTR32 *)(gen_frame + 0x130)) = ((int *)GEN_TOP(piVar7[0xc]));
                    uVar6 = F_00b7a450((*(undefined * PTR32 *)(gen_frame + 0x12c)) GEN_EDX_ARG,((int *)GEN_TOP(piVar7[0xc])),
                                         (uint)*((ushort *)GEN_TOP(((int)piVar7 + 0x12))),piVar7[5],piVar7[0xd]
                                        );
                  }
                  else {
                    if (cVar1 != '-') goto LAB_00b7a992;
                    (*(int * PTR32 *)(gen_frame + 0x130)) = ((int *)GEN_TOP(piVar7[0xc]));
                    uVar6 = F_00b7a390((*(undefined * PTR32 *)(gen_frame + 0x12c)) GEN_EDX_ARG,((int *)GEN_TOP(piVar7[0xc])),
                                         (uint)*((ushort *)GEN_TOP(((int)piVar7 + 0x12))),piVar7[5],piVar7[0xd]
                                        );
                  }
                  if (uVar6 != 0xffffffff) {
                    if (uVar6 < 0x3c) {
                      if ((int)uVar6 < 0x28) {
                        piVar9 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x12c)) + uVar6 * 4 + 0x10)));
                      }
                      else {
                        piVar9 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x12c)) + uVar6 * 4 + 0x10)));
                      }
                    }
                    else {
                      piVar9 = ((int *)GEN_TOP(0x0));
                    }
                    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x38))))(piVar7 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x110)));
                    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x3c))))(piVar9 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x110)));
                    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x3c))))(piVar7 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xf0)));
                    F_00a1e160(&(*(undefined4 *)(gen_frame + 0x128)),((undefined1 *)(gen_frame + 0xf0)));
                    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x48))))(piVar9 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x128)));
                    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x40))))(piVar7 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x100)));
                    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x4c))))(piVar9 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x100))[0]);
                    F_00a5f430(piVar9 GEN_EDX_ARG,piVar7[5]);
                    piVar9[0x20] = (int)(*(int * PTR32 *)(gen_frame + 0x130));
                    if ((*((char *)GEN_TOP(((int)piVar7 + 0x11))) != '-') &&
                       (piVar7 = ((int *)GEN_TOP(piVar9[0x3b])), piVar7 != ((int *)GEN_TOP(0x0)))) {
                      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x1c))))(piVar7 GEN_EDX_ARG,1);
                    }
                  }
                }
LAB_00b7a992: ;
                piVar7 = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x134)) + 1)));
                (*(int * PTR32 *)(gen_frame + 0x134)) = piVar7;
              } while ((int)piVar7 < (*(int *)(gen_frame + 0x138)));
            }
          }
        }
      }
    }
  }
  return (uint)piVar7;
}

/* ref: Client::Game::Object::Aetheryte::vf47 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b7a9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb7a9e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::Game::Object::Aetheryte::vf45 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7aa00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7aa00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[53])REFP(0x10e6c8c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b7aa30 */
GEN_OWN GEN_FRAME float10 F_00b7aa30(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xb7aa30u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00b7aa60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7aa60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7aa60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  
  *((undefined2 *)GEN_TOP(((int)this + 0x16c))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 8)));
  iVar2 = 0x1e;
  do {
    *(undefined2 *)(puVar1 - 1) = 0;
    *puVar1 = 0;
    *((undefined2 *)GEN_TOP(((int)puVar1 - 2))) = 0;
    puVar1[1] = 0xe0000000;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return (uint)puVar1;
}

/* ref: FUN_00b7aaa0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b7aaa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7aaa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return (*((ushort *)GEN_TOP((in_ecx + 0x16c))) & (ushort)param_2) != 0;
}

/* ref: FUN_00b7aac0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b7aac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7aac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  ushort * puVar2;
  
  iVar1 = 0;
  puVar2 = ((ushort *)GEN_TOP(((int)this + 4)));
  do {
    if (*puVar2 == param_1) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 6;
  } while (iVar1 < 0x1e);
  return 0;
}

/* ref: FUN_00b7aaf0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00b7aaf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7aaf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (0x1d < param_2) {
    return (float10)0;
  }
  return (float10)*((float *)GEN_TOP((in_ecx + 8 + param_2 * 0xc)));
}

/* ref: FUN_00b7ab10 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00b7ab10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7ab10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (0x1d < param_2) {
    return 0xffff;
  }
  return *((ushort *)GEN_TOP((in_ecx + 6 + param_2 * 0xc)));
}

/* ref: FUN_00b7ab30 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00b7ab30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7ab30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  if (((param_1 < 0xfc) || (0x103 < param_1)) && (1 < param_1 - 0x105)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b7ab60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7ab60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7ab60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (0x1d < param_2) {
    return 0;
  }
  return (uint)*((ushort *)GEN_TOP((in_ecx + 4 + param_2 * 0xc)));
}

/* ref: FUN_00b7ab80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7ab80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7ab80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (0x1d < param_2) {
    return 0;
  }
  return *((uint *)GEN_TOP((in_ecx + (param_2 * 3 + 3) * 4)));
}

/* ref: FUN_00b7aba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7aba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7aba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  ushort * puVar2;
  
  uVar1 = 0;
  puVar2 = ((ushort *)GEN_TOP(((int)this + 4)));
  do {
    if (*puVar2 == param_1) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 6;
  } while ((int)uVar1 < 0x1e);
  return 0xffffffff;
}

/* ref: FUN_00b7abd0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00b7abd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7abd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  ushort * puVar2;
  
  iVar1 = 0;
  puVar2 = ((ushort *)GEN_TOP(((int)this + 4)));
  do {
    if (*puVar2 == param_1) {
      if (iVar1 == -1) {
        return 0;
      }
      return *((ushort *)GEN_TOP(((int)this + iVar1 * 0xc + 6)));
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 6;
  } while (iVar1 < 0x1e);
  return 0;
}

/* ref: FUN_00b7ac20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7ac20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7ac20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  ushort * puVar3;
  
  uVar2 = 0;
  puVar3 = ((ushort *)GEN_TOP(((int)this + 4)));
  do {
    if (*puVar3 != 0) {
      uVar1 = F_00ab1ff0((uint)*puVar3);
      if ((uVar1 != 0) && (*((byte *)GEN_TOP((uVar1 + 0xc))) == (ushort)param_1)) {
        return uVar2;
      }
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 6;
    if (0x1d < (int)uVar2) {
      return 0xffffffff;
    }
  } while( true );
}

/* ref: FUN_00b7ac70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7ac70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb7ac70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * pvVar1;
  
  pvVar1 = ((undefined *)GEN_TOP(((int)this + param_1 * 0xc)));
  if (*((short *)GEN_TOP(((int)pvVar1 + 4))) == (short)param_2) {
    *((undefined2 *)GEN_TOP(((int)pvVar1 + 6))) = (undefined2)param_3;
  }
  return (uint)pvVar1;
}

/* ref: FUN_00b7aca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7aca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7aca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ab1ff0(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uint)*((ushort *)GEN_TOP((uVar1 + 10)));
    if (*((ushort *)GEN_TOP((uVar1 + 10))) == 0) {
      uVar2 = (*((char *)GEN_TOP((uVar1 + 0xf))) == '\x02') + 0x25b;
    }
    uVar2 = F_00a7d4b0(uVar2,*(undefined4 *)this,*(undefined4 *)this,0,0,param_1,0,0,0,
                         REFG(float, 0x10916ec));
  }
  return uVar2;
}

/* ref: FUN_00b7ad00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7ad00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7ad00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ab1ff0(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00ab4370((uint)*((byte *)GEN_TOP((uVar1 + 0x10))),*(undefined4 *)this,*(undefined4 *)this,0,0);
  }
  return uVar2;
}

/* ref: FUN_00b7ad30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7ad30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb7ad30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ab1ff0(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a7d4b0(0x226,*(undefined4 *)this,*(undefined4 *)this,0,0,param_1,param_2,0,0,
                         REFG(float, 0x10916ec));
  }
  return uVar2;
}

/* ref: FUN_00b7ad80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7ad80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7ad80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  uVar2 = F_006b8c00();
  bVar1 = F_006c5260(uVar2 GEN_EDX_ARG);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    uVar3 = F_00ab1ff0(param_1);
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = F_00ab4370(((*((char *)GEN_TOP((uVar3 + 0xf))) != '\x02') - 1 & 0xffffffdf) + 0x49,
                           *(undefined4 *)this,*(undefined4 *)this,0,0);
    }
  }
  return uVar2;
}

/* ref: FUN_00b7add0 */
GEN_OWN GEN_NOFRAME unsigned int F_00b7add0(void)
{
  GEN_ENTER(0xb7add0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00b7ade0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b7ade0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb7ade0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = param_3 - 3;
  if (uVar2 < 0x1e) {
    uVar2 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xb7aecc) + param_3 + 1)));
    switch((unsigned int)(uintptr_t)(param_3)) {
    case 3: ;
      F_00a77000(param_1,param_1,0,0,0,0,param_4,0,0,0);
      uVar2 = F_00ab4370(0x45,param_1,param_1,0,0);
      return uVar2;
    case 4: ;
      uVar2 = F_00a7b5b0(param_1,param_1,0x207,0,0,param_4,0,0,0);
      return uVar2;
    case 0xe: ;
      uVar2 = F_00a7b5b0(param_1,param_1,0x212,0,0,param_4,0,0,0);
      return uVar2;
    case 0x20: ;
      F_00ab4370(0x2e,param_1,param_1,0,0);
      bVar1 = F_00a9f620(param_1 GEN_EDX_ARG);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0xc,1);
        uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0xd,1);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00b7aef0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7aef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7aef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  short sVar1;
  short * psVar2;
  int iVar3;
  
  iVar3 = 0;
  psVar2 = ((short *)GEN_TOP(((int)this + 4)));
  do {
    sVar1 = *psVar2;
    if (sVar1 != 0) {
      if (sVar1 == 0xad) {
        return 1;
      }
      if (sVar1 == 0xae) {
        return 2;
      }
      if (sVar1 == 0xaf) {
        return 3;
      }
      if (sVar1 == 0xb0) {
        return 0xffffffff;
      }
      if (sVar1 == 0xb1) {
        return 0xfffffffe;
      }
      if (sVar1 == 0xb2) {
        return 0xfffffffd;
      }
    }
    iVar3 = iVar3 + 1;
    psVar2 = psVar2 + 6;
    if (0x1d < iVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b7af70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7af70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7af70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = param_1;
  *((undefined2 *)GEN_TOP(((int)this + 0x16c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x170))) = 0;
  uVar1 = F_00b7aa60(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00b7afa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7afa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7afa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2;
  if ((0x1d < param_2) ||
     (uVar1 = (uint)*((ushort *)GEN_TOP((in_ecx + 4 + param_2 * 0xc))), uVar2 = 0, uVar1 == 0)) {
    return uVar2 & 0xffffff00;
  }
  if (((uVar1 < 0xfc) || (0x103 < uVar1)) && (1 < uVar1 - 0x105)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b7aff0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7aff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7aff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x64, 12);
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 in_ecx;
  float10 fVar4;
  undefined4 uVar5;
  float fVar6;
  float * pfVar7;
  float * pfVar8;
  float10 fVar9;
  float10 fVar10;
  
  pfVar8 = ((float *)GEN_TOP(((int)this + 8)));
  (*(int *)(gen_frame + 0x4c)) = 0x1e;
  do {
    fVar6 = gen_bits2f((uint)*(ushort *)(pfVar8 - 1));
    if (*(ushort *)(pfVar8 - 1) != 0) {
      fVar6 = gen_bits2f(F_00ab1ff0((undefined4)gen_fl2bits(fVar6)));
      fVar3 = REFG(float, 0x137104c);
      (*(float *)(gen_frame + 0x44)) = fVar6;
      if (fVar6 != 0.0) {
        if (*(short *)(pfVar8 - 1) == 0x128) {
          fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x170))) -
                         (float10)*((float *)GEN_TOP(((int)gen_fl2bits(REFG(float, 0x137104c)) + 0x1198))))));
          (*(float *)(gen_frame + 0x50)) = fVar2;
          *((float *)GEN_TOP(((int)this + 0x170))) = fVar2;
          fVar6 = fVar3;
          if ((float10)fVar2 <= (float10)0) {
            fVar6 = F_00a4b7d0();
            uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f529c)));
            in_ecx = *(undefined4 *)this;
            (*(float *)(gen_frame + 0x4)) = gen_bits2f(REFG(float, 0x10f529c));
            (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f529c)));
            (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f529c)));
            *((float *)GEN_TOP(((int)this + 0x170))) =
                 ((float)GEN_TOF((((float10)fVar6 + (float10)fVar6) + (float10)*(double *)&REFG(undefined, 0x10944e0))));
            (*(undefined4 *)(gen_frame + 0x10)) = uVar5;
            (*(undefined4 *)(gen_frame + 0x14)) = uVar5;
            (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            (*(undefined4 *)(gen_frame + 0x1c)) = 0;
            (*(undefined4 *)(gen_frame + 0x20)) = 0;
            (*(undefined4 *)(gen_frame + 0x24)) = 0;
            (*(undefined4 *)(gen_frame + 0x28)) = 0;
            (*(undefined1 *)(gen_frame + 0x2c)) = 0;
            (*(undefined4 *)(gen_frame + 0x30)) = 0;
            fVar9 = F_00a9fad0(in_ecx GEN_EDX_ARG);
            (*(float *)(gen_frame + 0x4)) = (float)fVar9;
            fVar6 = F_00a4b7d0();
            fVar6 = (float)((float10)fVar6 * (float10)*(double *)&REFG(undefined, 0x10f59a0) -
                           (float10)*(double *)&REFG(undefined, 0x10f5998));
            (*(float *)(gen_frame + 0x50)) = fVar6;
            fVar9 = ((float10)GEN_TOD(fsin((float10)fVar6)));
            fVar3 = (float)fVar9;
            (*(float *)(gen_frame + 0x48)) = fVar3;
            (*(float *)(gen_frame + 0x34)) = fVar3;
            fVar9 = ((float10)GEN_TOD(fcos((float10)fVar6)));
            fVar6 = (float)fVar9;
            (*(float *)(gen_frame + 0x48)) = fVar6;
            (*(float *)(gen_frame + 0x3c)) = fVar6;
            fVar9 = (float10)*(double *)&REFG(undefined, 0x1094560);
            (*(float *)(gen_frame + 0x34)) = (float)((float10)fVar3 * fVar9);
            (*(float *)(gen_frame + 0x38)) = (float)((float10)0 * fVar9);
            (*(float *)(gen_frame + 0x3c)) = (float)(fVar9 * (float10)fVar6);
            pfVar7 = ((float *)GEN_TOP(F_00a5feb0(*(undefined * PTR32 *)this GEN_EDX_ARG)));
            fVar10 = (float10)(*(float *)(gen_frame + 0x34));
            (*(float *)(gen_frame + 0x34)) = (float)(fVar10 + (float10)*pfVar7);
            fVar9 = (float10)(*(float *)(gen_frame + 0x38));
            (*(float *)(gen_frame + 0x38)) = (float)((float10)pfVar7[1] + fVar9);
            fVar4 = (float10)(*(float *)(gen_frame + 0x3c));
            (*(float *)(gen_frame + 0x3c)) = (float)((float10)pfVar7[2] + fVar4);
            fVar6 = gen_bits2f(F_00a9f7c0(*(undefined4 *)this GEN_EDX_ARG,(float)(fVar10 + (float10)*pfVar7),
                                            (float)((float10)pfVar7[1] + fVar9),
                                            (float)((float10)pfVar7[2] + fVar4),(*(float *)(gen_frame + 0x50)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0))))
            ;
          }
        }
        if (*((char *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x44))) + 0x14))) == '\0') {
          fVar3 = ((float)GEN_TOF(((float10)*pfVar8 -
                         (float10)*((float *)GEN_TOP(((int)gen_fl2bits(REFG(float, 0x137104c)) + 0x1198))))));
          (*(float *)(gen_frame + 0x44)) = fVar3;
          *pfVar8 = fVar3;
          if ((float10)fVar3 <= (float10)0) {
            *pfVar8 = 0.0;
          }
        }
      }
    }
    pfVar8 = pfVar8 + 3;
    iVar1 = (*(int *)(gen_frame + 0x4c)) - 1;
    (*(int *)(gen_frame + 0x4c)) = iVar1;
  } while (iVar1 != 0);
  return (uint)gen_fl2bits(fVar6);
}

/* ref: FUN_00b7b1c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7b1c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7b1c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  
  if (param_2 < 0x1e) {
    iVar1 = in_ecx + param_2 * 0xc;
    uVar2 = (uint)*((ushort *)GEN_TOP((iVar1 + 4)));
    if ((uVar2 != 0) && (((0xfb < uVar2 && (uVar2 < 0x104)) || (uVar2 - 0x105 < 2)))) {
      return (uint)*((ushort *)GEN_TOP((iVar1 + 6)));
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00b7b200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7b200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7b200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ushort * puVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = *(uint *)this;
  if (uVar3 != 0) {
    switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
    case 1: ;
      uVar3 = F_00b5b2d0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,(uint)*((ushort *)GEN_TOP((uVar3 + 0x88))),1);
      *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) | 1;
      *((byte *)GEN_TOP((*(int *)this + 0x2dd2))) = *((byte *)GEN_TOP((*(int *)this + 0x2dd2))) | 0x20;
      return uVar3;
    case 3: ;
      *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) | 2;
      return uVar3;
    case 0xd: ;
      *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) | 4;
      return uVar3;
    case 0xe: ;
      *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) | 8;
      return uVar3;
    case 0x2f: ;
      piVar2 = ((int *)GEN_TOP((uVar3 + 0xec)));
      uVar3 = 0;
      if (*piVar2 != 0) {
        puVar1 = ((ushort *)GEN_TOP((*piVar2 + 0x70)));
        *puVar1 = *puVar1 | 8;
        *((ushort *)GEN_TOP((*(int *)this + 0x1730))) = *((ushort *)GEN_TOP((*(int *)this + 0x1730))) | 8;
        uVar3 = *(uint *)this;
        puVar1 = ((ushort *)GEN_TOP((uVar3 + 0x1ed0)));
        *puVar1 = *puVar1 | 8;
        *((ushort *)GEN_TOP((*(int *)this + 0x2670))) = *((ushort *)GEN_TOP((*(int *)this + 0x2670))) | 8;
        return uVar3;
      }
      break;
    case 0x43: ;
      *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) | 0x10;
      return uVar3;
    case 0x5d: ;
    case 0x5e: ;
    case 0x5f: ;
    case 0x60: ;
    case 0x61: ;
      *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) | 0x40;
      break;
    case 0x6f: ;
    case 0x70: ;
    case 0x71: ;
      *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) | 0x20;
      return uVar3;
    case 0xad: ;
    case 0xae: ;
    case 0xaf: ;
      *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) | 0x80;
      return uVar3;
    case 0xb0: ;
    case 0xb1: ;
    case 0xb2: ;
      *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) | 0x100;
      return uVar3;
    case 0xb5: ;
      *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) | 0x200;
      return 0x200;
    }
  }
  return uVar3;
}

/* ref: FUN_00b7b400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7b400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7b400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ushort * puVar1;
  byte * pbVar2;
  byte bVar3;
  uint in_EAX = 0;
  uint uVar4;
  undefined3 extraout_var = 0;
  int * piVar5;
  undefined * pvVar6;
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
  undefined4 uVar7;
  
  pvVar6 = *(undefined * PTR32 *)this;
  if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
    uVar4 = param_1 & 0xffff;
    in_EAX = uVar4;
    if (uVar4 < 0x129) {
      if (uVar4 == 0x128) {
        in_EAX = F_00a9fa00(pvVar6 GEN_EDX_FWD);
      }
      else {
        in_EAX = uVar4 - 1;
        if (in_EAX < 0xf3) {
          in_EAX = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xb7b740) + uVar4 + 3)));
          switch((unsigned int)(uintptr_t)(uVar4)) {
          case 1: ;
            F_00b5b2d0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar6 + 0x88))),0);
            uVar4 = *(uint *)this;
            pbVar2 = ((byte *)GEN_TOP((uVar4 + 0x2dd2)));
            *pbVar2 = *pbVar2 & 0xdf;
            *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) & 0xfffe;
            return uVar4;
          case 3: ;
            *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) & 0xfffd;
            return in_EAX;
          case 0xd: ;
            *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) & 0xfffb;
            return 0xfffb;
          case 0xe: ;
            *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) & 0xfff7;
            return in_EAX;
          case 0x2f: ;
            in_EAX = 0;
            if (*((int *)GEN_TOP(((int)pvVar6 + 0xec))) != 0) {
              puVar1 = ((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar6 + 0xec))) + 0x70)));
              *puVar1 = *puVar1 & 0xfff7;
              *((ushort *)GEN_TOP((*(int *)this + 0x1730))) = *((ushort *)GEN_TOP((*(int *)this + 0x1730))) & 0xfff7;
              uVar4 = *(uint *)this;
              puVar1 = ((ushort *)GEN_TOP((uVar4 + 0x1ed0)));
              *puVar1 = *puVar1 & 0xfff7;
              *((ushort *)GEN_TOP((*(int *)this + 0x2670))) = *((ushort *)GEN_TOP((*(int *)this + 0x2670))) & 0xfff7;
              return uVar4;
            }
            break;
          case 0x43: ;
            *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) & 0xffef;
            return in_EAX;
          case 0x5d: ;
          case 0x5e: ;
          case 0x5f: ;
          case 0x60: ;
          case 0x61: ;
            bVar3 = F_00b7aac0(this GEN_EDX_ARG,0x5d);
            in_EAX = CONCAT31(extraout_var_11,bVar3);
            if (bVar3 == 0) {
              bVar3 = F_00b7aac0(this GEN_EDX_ARG,0x5e);
              in_EAX = CONCAT31(extraout_var_12,bVar3);
              if (bVar3 == 0) {
                bVar3 = F_00b7aac0(this GEN_EDX_ARG,0x5f);
                in_EAX = CONCAT31(extraout_var_13,bVar3);
                if (bVar3 == 0) {
                  bVar3 = F_00b7aac0(this GEN_EDX_ARG,0x60);
                  in_EAX = CONCAT31(extraout_var_14,bVar3);
                  if (bVar3 == 0) {
                    bVar3 = F_00b7aac0(this GEN_EDX_ARG,0x61);
                    in_EAX = CONCAT31(extraout_var_15,bVar3);
                    if (bVar3 == 0) {
                      *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) & 0xffbf;
                      return in_EAX;
                    }
                  }
                }
              }
            }
            break;
          case 0x6f: ;
          case 0x70: ;
          case 0x71: ;
            bVar3 = F_00b7aac0(this GEN_EDX_ARG,0x6f);
            in_EAX = CONCAT31(extraout_var_08,bVar3);
            if (bVar3 == 0) {
              bVar3 = F_00b7aac0(this GEN_EDX_ARG,0x70);
              in_EAX = CONCAT31(extraout_var_09,bVar3);
              if (bVar3 == 0) {
                bVar3 = F_00b7aac0(this GEN_EDX_ARG,0x71);
                in_EAX = CONCAT31(extraout_var_10,bVar3);
                if (bVar3 == 0) {
                  *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) & 0xffdf;
                  return 0xffdf;
                }
              }
            }
            break;
          case 0xad: ;
          case 0xae: ;
          case 0xaf: ;
            bVar3 = F_00b7aac0(this GEN_EDX_ARG,0xad);
            in_EAX = CONCAT31(extraout_var_02,bVar3);
            if (bVar3 == 0) {
              bVar3 = F_00b7aac0(this GEN_EDX_ARG,0xae);
              in_EAX = CONCAT31(extraout_var_03,bVar3);
              if (bVar3 == 0) {
                bVar3 = F_00b7aac0(this GEN_EDX_ARG,0xaf);
                in_EAX = CONCAT31(extraout_var_04,bVar3);
                if (bVar3 == 0) {
                  *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) & 0xff7f;
                  return in_EAX;
                }
              }
            }
            break;
          case 0xb0: ;
          case 0xb1: ;
          case 0xb2: ;
            bVar3 = F_00b7aac0(this GEN_EDX_ARG,0xb0);
            in_EAX = CONCAT31(extraout_var_05,bVar3);
            if (bVar3 == 0) {
              bVar3 = F_00b7aac0(this GEN_EDX_ARG,0xb1);
              in_EAX = CONCAT31(extraout_var_06,bVar3);
              if (bVar3 == 0) {
                bVar3 = F_00b7aac0(this GEN_EDX_ARG,0xb2);
                in_EAX = CONCAT31(extraout_var_07,bVar3);
                if (bVar3 == 0) {
                  *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) & 0xfeff;
                  return in_EAX;
                }
              }
            }
            break;
          case 0xb5: ;
            *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) & 0xfdff;
            return 0xfdff;
          case 0xdd: ;
            bVar3 = F_00a9f620(pvVar6 GEN_EDX_ARG);
            in_EAX = CONCAT31(extraout_var_00,bVar3);
            if (bVar3 != 0) {
              piVar5 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
              in_EAX = 0;
              if (piVar5 != ((int *)GEN_TOP(0x0))) {
                uVar7 = 0x1f;
                uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x48))))(piVar5 GEN_EDX_ARG);
                pvVar6 = ((undefined *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar7)));
                in_EAX = 0;
                if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
                  uVar4 = F_00773e40(pvVar6 GEN_EDX_ARG,2);
                  return uVar4;
                }
              }
            }
            break;
          case 0xde: ;
            bVar3 = F_00a9f620(pvVar6 GEN_EDX_ARG);
            in_EAX = CONCAT31(extraout_var_01,bVar3);
            if (bVar3 != 0) {
              piVar5 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
              in_EAX = 0;
              if (piVar5 != ((int *)GEN_TOP(0x0))) {
                uVar7 = 0x1f;
                uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x48))))(piVar5 GEN_EDX_ARG);
                pvVar6 = ((undefined *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar7)));
                in_EAX = 0;
                if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
                  uVar4 = F_00773e40(pvVar6 GEN_EDX_ARG,1);
                  return uVar4;
                }
              }
            }
            break;
          case 0xe9: ;
          case 0xea: ;
          case 0xf2: ;
          case 0xf3: ;
            bVar3 = F_00a9f620(pvVar6 GEN_EDX_ARG);
            in_EAX = CONCAT31(extraout_var,bVar3);
            if (bVar3 != 0) {
              piVar5 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
              in_EAX = 0;
              if (piVar5 != ((int *)GEN_TOP(0x0))) {
                uVar7 = 0x1f;
                uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x48))))(piVar5 GEN_EDX_ARG);
                pvVar6 = ((undefined *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar7)));
                in_EAX = 0;
                if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
                  uVar4 = F_00773e40(pvVar6 GEN_EDX_ARG,0);
                  return uVar4;
                }
              }
            }
          }
        }
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00b7b840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7b840(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb7b840u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2;
  if (param_2 < 0x1e) {
    uVar2 = (uint)*((ushort *)GEN_TOP(((int)param_1 + param_2 * 0xc + 4)));
    *((undefined2 *)GEN_TOP(((int)param_1 + param_2 * 0xc + 6))) = (undefined2)param_5;
    *((short *)GEN_TOP(((int)param_1 + param_2 * 0xc + 4))) = (short)param_3;
    *((float *)GEN_TOP(((int)param_1 + param_2 * 0xc + 8))) = param_4;
    *((undefined4 *)GEN_TOP(((int)param_1 + param_2 * 0xc + 0xc))) = param_6;
    uVar1 = param_3 & 0xffff;
    if (uVar2 != uVar1) {
      F_00b7b400(param_1 GEN_EDX_FWD,uVar2);
      uVar1 = F_00b7b200(param_1 GEN_EDX_ARG,param_3);
    }
  }
  return uVar1;
}

/* ref: FUN_00b7b8a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7b8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7b8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ushort uVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_1 < 0x1e) {
    uVar1 = *((ushort *)GEN_TOP(((int)this + param_1 * 0xc + 4)));
    *((undefined2 *)GEN_TOP(((int)this + param_1 * 0xc + 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 0xc + 8))) = 0;
    *((undefined2 *)GEN_TOP(((int)this + param_1 * 0xc + 6))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 0xc + 0xc))) = 0xe0000000;
    uVar2 = F_00b7b400(this GEN_EDX_FWD,(uint)uVar1);
  }
  return uVar2;
}

/* ref: FUN_00b7b8e0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b7b8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7b8e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x4c, 4, 4);
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  ushort * puVar7;
  int iVar8;
  ushort * puVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48));
  iVar6 = 0;
  puVar7 = ((ushort *)GEN_TOP(((int)this + 4)));
  do {
    ((ushort *)(gen_frame + 0x8))[(int)(iVar6)] = *puVar7;
    iVar6 = iVar6 + 1;
    puVar7 = puVar7 + 6;
  } while (iVar6 < 0x1e);
  (*(uint *)(gen_frame + 0x0)) = 0;
  puVar7 = ((ushort *)GEN_TOP(((int)this + 4)));
  puVar9 = ((ushort *)GEN_TOP((param_1 + 2)));
  do {
    uVar2 = *puVar9;
    uVar5 = *(undefined4 *)(puVar9 + 3);
    uVar1 = *(undefined4 *)(puVar9 + 1);
    uVar3 = puVar9[-1];
    if ((*(uint *)(gen_frame + 0x0)) < 0x1e) {
      uVar4 = *puVar7;
      *puVar7 = uVar3;
      *(undefined4 *)(puVar7 + 2) = uVar1;
      puVar7[1] = uVar2;
      *(undefined4 *)(puVar7 + 4) = uVar5;
      if ((uint)uVar4 != (uint)uVar3) {
        F_00b7b400(this GEN_EDX_FWD,(uint)uVar4);
        F_00b7b200(this GEN_EDX_ARG,(uint)uVar3);
      }
    }
    (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
    puVar9 = puVar9 + 6;
    puVar7 = puVar7 + 6;
  } while ((int)(*(uint *)(gen_frame + 0x0)) < 0x1e);
  iVar6 = 0;
  do {
    uVar2 = ((ushort *)(gen_frame + 0x8))[(int)(iVar6)];
    iVar8 = 0;
    puVar7 = ((ushort *)GEN_TOP((param_1 + 0x18)));
    do {
      if (uVar2 == puVar7[-0xc]) break;
      if (uVar2 == puVar7[-6]) {
        iVar8 = iVar8 + 1;
        break;
      }
      if (uVar2 == *puVar7) {
        iVar8 = iVar8 + 2;
        break;
      }
      if (uVar2 == puVar7[6]) {
        iVar8 = iVar8 + 3;
        break;
      }
      if (uVar2 == puVar7[0xc]) {
        iVar8 = iVar8 + 4;
        break;
      }
      if (uVar2 == puVar7[0x12]) {
        iVar8 = iVar8 + 5;
        break;
      }
      iVar8 = iVar8 + 6;
      puVar7 = puVar7 + 0x24;
    } while (iVar8 < 0x1e);
    if (iVar8 == 0x1e) {
      puVar7 = ((ushort *)GEN_TOP(F_00b7b400(this GEN_EDX_ARG,(uint)((ushort *)(gen_frame + 0x8))[(int)(iVar6)])));
    }
    iVar6 = iVar6 + 1;
    if (0x1d < iVar6) {
      return (uint)puVar7;
    }
  } while( true );
}

/* ref: FUN_00b7ba00 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b7ba00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7ba00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x4c, 4, 4);
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  ushort * puVar7;
  int iVar8;
  ushort * puVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48));
  iVar6 = 0;
  puVar7 = ((ushort *)GEN_TOP(((int)this + 4)));
  do {
    ((ushort *)(gen_frame + 0x8))[(int)(iVar6)] = *puVar7;
    iVar6 = iVar6 + 1;
    puVar7 = puVar7 + 6;
  } while (iVar6 < 0x1e);
  (*(uint *)(gen_frame + 0x0)) = 0;
  puVar7 = ((ushort *)GEN_TOP(((int)this + 4)));
  puVar9 = ((ushort *)GEN_TOP((param_1 + 2)));
  do {
    uVar2 = *puVar9;
    uVar5 = *(undefined4 *)(puVar9 + 3);
    uVar1 = *(undefined4 *)(puVar9 + 1);
    uVar3 = puVar9[-1];
    if ((*(uint *)(gen_frame + 0x0)) < 0x1e) {
      uVar4 = *puVar7;
      *puVar7 = uVar3;
      *(undefined4 *)(puVar7 + 2) = uVar1;
      puVar7[1] = uVar2;
      *(undefined4 *)(puVar7 + 4) = uVar5;
      if ((uint)uVar4 != (uint)uVar3) {
        F_00b7b400(this GEN_EDX_FWD,(uint)uVar4);
        F_00b7b200(this GEN_EDX_ARG,(uint)uVar3);
      }
    }
    (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
    puVar9 = puVar9 + 6;
    puVar7 = puVar7 + 6;
  } while ((int)(*(uint *)(gen_frame + 0x0)) < 0x1e);
  iVar6 = 0;
  do {
    uVar2 = ((ushort *)(gen_frame + 0x8))[(int)(iVar6)];
    iVar8 = 0;
    puVar7 = ((ushort *)GEN_TOP((param_1 + 0x18)));
    do {
      if (uVar2 == puVar7[-0xc]) break;
      if (uVar2 == puVar7[-6]) {
        iVar8 = iVar8 + 1;
        break;
      }
      if (uVar2 == *puVar7) {
        iVar8 = iVar8 + 2;
        break;
      }
      if (uVar2 == puVar7[6]) {
        iVar8 = iVar8 + 3;
        break;
      }
      if (uVar2 == puVar7[0xc]) {
        iVar8 = iVar8 + 4;
        break;
      }
      if (uVar2 == puVar7[0x12]) {
        iVar8 = iVar8 + 5;
        break;
      }
      iVar8 = iVar8 + 6;
      puVar7 = puVar7 + 0x24;
    } while (iVar8 < 0x1e);
    if (iVar8 == 0x1e) {
      puVar7 = ((ushort *)GEN_TOP(F_00b7b400(this GEN_EDX_ARG,(uint)((ushort *)(gen_frame + 0x8))[(int)(iVar6)])));
    }
    iVar6 = iVar6 + 1;
    if (0x1d < iVar6) {
      return (uint)puVar7;
    }
  } while( true );
}

/* ref: FUN_00b7bb20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7bb20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb7bb20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  ushort uVar1;
  uint in_EAX = 0;
  uint uVar2;
  ushort * puVar3;
  
  if (param_2 != 0) {
    if (param_4 != '\0') {
      uVar2 = F_00ab1ff0(param_2);
      if (uVar2 != 0) {
        F_00a7d4b0(0x226,*param_1,*param_1,0,0,param_2,param_3,0,0,REFG(float, 0x10916ec));
      }
    }
    if (param_5 != '\0') {
      F_00b7ad80(param_1 GEN_EDX_ARG,param_2);
    }
    in_EAX = 0;
    puVar3 = (ushort *)(param_1 + 1);
    while (*puVar3 != param_2) {
      in_EAX = in_EAX + 1;
      puVar3 = puVar3 + 6;
      if (0x1d < (int)in_EAX) {
        return in_EAX;
      }
    }
    if (in_EAX < 0x1e) {
      uVar1 = *(ushort *)(param_1 + in_EAX * 3 + 1);
      *(undefined2 *)(param_1 + in_EAX * 3 + 1) = 0;
      param_1[in_EAX * 3 + 2] = 0;
      *((undefined2 *)GEN_TOP(((int)param_1 + in_EAX * 0xc + 6))) = 0;
      param_1[in_EAX * 3 + 3] = 0xe0000000;
      in_EAX = F_00b7b400(param_1 GEN_EDX_ARG,(uint)uVar1);
    }
  }
  return in_EAX;
}

/* ref: FUN_00b7bbd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7bbd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7bbd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ushort * puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = ((ushort *)GEN_TOP(((int)this + 4)));
  do {
    uVar1 = (uint)*puVar2;
    if ((*puVar2 != 0) && (uVar3 < 0x1e)) {
      puVar2[0] = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0xe000;
      uVar1 = F_00b7b400(this GEN_EDX_FWD,uVar1);
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 6;
  } while ((int)uVar3 < 0x1e);
  return uVar1;
}

/* ref: FUN_00b7bc20 */
GEN_OWN GEN_FRAME byte F_00b7bc20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7bc20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  ushort uVar1;
  int * piVar2;
  uint uVar3;
  undefined * this;
  ushort * puVar4;
  
  piVar2 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar3 = F_00ab1ff0(param_1);
  if (((uVar3 != 0) && (*((char *)GEN_TOP((uVar3 + 0xf))) == '\x01')) && (*((char *)GEN_TOP((uVar3 + 0x16))) != '\x01')) {
    F_00a51200(7,param_1,0,0,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xd4))))(piVar2 GEN_EDX_ARG);
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xd4))))(piVar2 GEN_EDX_ARG)));
    if (param_1 != 0) {
      uVar3 = 0;
      puVar4 = ((ushort *)GEN_TOP(((int)this + 4)));
      while (*puVar4 != param_1) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 6;
        if (0x1d < (int)uVar3) {
          return 1;
        }
      }
      if (uVar3 < 0x1e) {
        uVar1 = *((ushort *)GEN_TOP(((int)this + uVar3 * 0xc + 4)));
        *((undefined2 *)GEN_TOP(((int)this + uVar3 * 0xc + 4))) = 0;
        *((undefined2 *)GEN_TOP(((int)this + uVar3 * 0xc + 6))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + uVar3 * 0xc + 8))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + uVar3 * 0xc + 0xc))) = 0xe0000000;
        F_00b7b400(this GEN_EDX_ARG,(uint)uVar1);
      }
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00b7bce0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b7bce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7bce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ushort * puVar1;
  int iVar2;
  undefined2 * puVar3;
  int local_8;
  
  *((undefined2 *)GEN_TOP(((int)this + 0x16c))) = 0;
  puVar3 = ((undefined2 *)GEN_TOP(((int)this + 4)));
  local_8 = 0x1e;
  do {
    iVar2 = *(int *)this;
    if (iVar2 != 0) {
      switch((unsigned int)(uintptr_t)(*puVar3)) {
      case 1: ;
        F_00b5b2d0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,(uint)*((ushort *)GEN_TOP((iVar2 + 0x88))),1);
        *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) | 1;
        *((byte *)GEN_TOP((*(int *)this + 0x2dd2))) = *((byte *)GEN_TOP((*(int *)this + 0x2dd2))) | 0x20;
        break;
      case 3: ;
        *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) | 2;
        break;
      case 0xd: ;
        *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) | 4;
        break;
      case 0xe: ;
        *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) | 8;
        break;
      case 0x2f: ;
        if (*((int *)GEN_TOP((iVar2 + 0xec))) != 0) {
          puVar1 = ((ushort *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0xec))) + 0x70)));
          *puVar1 = *puVar1 | 8;
          *((ushort *)GEN_TOP((*(int *)this + 0x1730))) = *((ushort *)GEN_TOP((*(int *)this + 0x1730))) | 8;
          *((ushort *)GEN_TOP((*(int *)this + 0x1ed0))) = *((ushort *)GEN_TOP((*(int *)this + 0x1ed0))) | 8;
          *((ushort *)GEN_TOP((*(int *)this + 0x2670))) = *((ushort *)GEN_TOP((*(int *)this + 0x2670))) | 8;
        }
        break;
      case 0x43: ;
        *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) | 0x10;
        break;
      case 0x5d: ;
      case 0x5e: ;
      case 0x5f: ;
      case 0x60: ;
      case 0x61: ;
        *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) | 0x40;
        break;
      case 0x6f: ;
      case 0x70: ;
      case 0x71: ;
        *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) | 0x20;
        break;
      case 0xad: ;
      case 0xae: ;
      case 0xaf: ;
        *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) | 0x80;
        break;
      case 0xb0: ;
      case 0xb1: ;
      case 0xb2: ;
        *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) | 0x100;
        break;
      case 0xb5: ;
        *((ushort *)GEN_TOP(((int)this + 0x16c))) = *((ushort *)GEN_TOP(((int)this + 0x16c))) | 0x200;
      }
    }
    puVar3 = puVar3 + 6;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  return 0;
}

/* ref: FUN_00b7bee0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b7bee0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7bee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 << 5 ^ *((byte *)GEN_TOP((in_ecx + 0x2dd2)))) & 0x20;
  *((byte *)GEN_TOP((in_ecx + 0x2dd2))) = *((byte *)GEN_TOP((in_ecx + 0x2dd2))) ^ bVar1;
  return bVar1;
}

/* ref: Client::Game::WeatherManager::WeatherInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7bf10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7bf10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x10f60e4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b7bf40 */
GEN_OWN GEN_FRAME float10 F_00b7bf40(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xb7bf40u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00b7bf80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b7bf80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7bf80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 uVar1;
  
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f59a8)));
  *((byte *)GEN_TOP((in_ecx + 4))) = param_2;
  *((byte *)GEN_TOP((in_ecx + 5))) = param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = uVar1;
  return param_2;
}

/* ref: Client::Game::WeatherManager::ServerWeather::SetWeather */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b7bfb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xb7bfb0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  float10 fVar1;
  
  if (param_2 != '\0') {
    *((char *)GEN_TOP((in_ecx + 4))) = param_2;
    if (*((char *)GEN_TOP((in_ecx + 5))) == '\0') {
      *((char *)GEN_TOP((in_ecx + 5))) = param_2;
    }
    fVar1 = (float10)REFG(double, 0x1088108);
    *((float *)GEN_TOP((in_ecx + 0xc))) = param_3;
    *((float *)GEN_TOP((in_ecx + 8))) = (float)((float10)param_3 * fVar1);
  }
  return 0;
}

/* ref: FUN_00b7c040 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7c040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f59a8)));
  *((undefined2 *)GEN_TOP(((int)this + 0x30))) = 0x202;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = uVar1;
  *((undefined2 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *(int *)this = (int)this + 0xc;
  *((undefined1 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((int *)GEN_TOP(((int)this + 4))) = (int)this + 0x1c;
  *((uint *)GEN_TOP(((int)this + 8))) = (int)this + 0x2cU;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 3;
  return (int)this + 0x2cU;
}

/* ref: FUN_00b7c0a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7c0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7c0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2c))) + 0xc))))((int)this + 0x2c,param_1,(unsigned int)gen_fl2bits((float)(REFG(float, 0x10f59a8))));
  return uVar1;
}

/* ref: FUN_00b7c0c0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b7c0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c0c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2c))) + 8))))((int)this + 0x2c);
  return (byte)uVar1;
}

/* ref: FUN_00b7c0d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7c0d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xb7c0d0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + param_2 * 4)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD,param_3,(undefined4)gen_fl2bits(param_4));
  return uVar2;
}

/* ref: FUN_00b7c0f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7c0f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7c0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + param_2 * 4)));
  *((undefined2 *)GEN_TOP((uVar1 + 4))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00b7c110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7c110(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xb7c110u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = **((int * PTR32 *)GEN_TOP((param_1 + param_2 * 4)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x2c))) + 0x18))))
                    (param_1 + 0x2c,(undefined4)gen_fl2bits(param_3));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0xc))))(*((undefined4 *)GEN_TOP((param_1 + param_2 * 4))),uVar2 & 0xff);
  return uVar2;
}

/* ref: FUN_00b7c150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7c150(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xb7c150u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = **((int * PTR32 *)GEN_TOP((param_1 + param_2 * 4)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x2c))) + 0x10))))
                    (param_1 + 0x2c,(undefined4)gen_fl2bits(param_3));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0xc))))(*((undefined4 *)GEN_TOP((param_1 + param_2 * 4))),uVar2 & 0xff);
  return uVar2;
}

/* ref: FUN_00b7c190 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b7c190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = *((byte *)GEN_TOP(((int)this + 0x3c)));
  if (bVar2 == 3) {
    bVar2 = 2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + (uint)bVar2 * 4)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_FWD);
  return (byte)uVar3;
}

/* ref: FUN_00b7c1b0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b7c1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c1b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = *((byte *)GEN_TOP(((int)this + 0x3c)));
  if (bVar2 == 3) {
    bVar2 = 2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + (uint)bVar2 * 4)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD);
  return (byte)uVar3;
}

/* ref: FUN_00b7c1d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7c1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 3;
  uVar3 = 0;
  do {
    if ((int)uVar4 < 3) {
      return uVar4;
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + uVar3 * 4)));
    if ((piVar1 != ((int *)GEN_TOP(0x0))) && (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD), (char)uVar2 != '\0'))
    {
      uVar4 = uVar3;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  return uVar4;
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf5 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b7c210(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  float fVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = REFG(undefined4, 0x137104c);
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 8))) - (float10)*((float *)GEN_TOP((REFG(undefined4, 0x137104c) + 0x1198))))));
  *((float *)GEN_TOP((in_ecx + 8))) = fVar1;
  if ((float10)fVar1 <= (float10)0) {
    bVar2 = *((byte *)GEN_TOP((in_ecx + 4)));
    uVar3 = (uint)bVar2;
    *((undefined4 *)GEN_TOP((in_ecx + 8))) = 0;
    if (*((byte *)GEN_TOP((in_ecx + 5))) != bVar2) {
      *((byte *)GEN_TOP((in_ecx + 5))) = bVar2;
    }
  }
  return (byte)uVar3;
}

/* ref: FUN_00b7c250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7c250(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb7c250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (int)gen_fl2bits((float)(REFG(float, 0x10f59a8)));
  *(undefined1 *)(param_1 + 0xc) = param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x31))) = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = iVar1;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[2] = (int)(param_1 + 0xb);
  *param_1 = (int)(param_1 + 3);
  param_1[1] = (int)(param_1 + 7);
  param_1[0xf] = 3;
  *(undefined1 *)(param_1 + 0x10) = 0;
  iVar1 = REFG(int, 0x137104c);
  uVar2 = F_00ab1c90(param_3 & 0xffff);
  uVar3 = 0;
  if ((uVar2 != 0) && (uVar3 = *((uint *)GEN_TOP((uVar2 + 0x18))), uVar3 < 0x960)) {
    uVar3 = F_00b7c780(((undefined *)GEN_TOP((iVar1 + 0x1210))) GEN_EDX_ARG,uVar3);
    return uVar3;
  }
  *((undefined1 *)GEN_TOP((iVar1 + 0x1231))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1228))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x122c))) = 0;
  return uVar3;
}

/* ref: FUN_00b7c2f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b7c2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float10 extraout_ST0;
  float local_8;
  
  uVar5 = 0;
  do {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + uVar5 * 4)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_FWD);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 3);
  uVar5 = 3;
  uVar6 = 0;
  do {
    if ((int)uVar5 < 3) goto LAB_00b7c344;
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + uVar6 * 4)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
      if ((char)uVar4 != '\0') {
        uVar5 = uVar6;
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 3);
  if ((int)uVar5 < 3) {
LAB_00b7c344: ;
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + uVar5 * 4)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1);
      local_8 = (float)extraout_ST0;
      if (*((uint *)GEN_TOP(((int)this + 0x3c))) != uVar5) {
        local_8 = 0.0;
      }
      *((uint *)GEN_TOP(((int)this + 0x3c))) = uVar5;
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG);
      iVar2 = REFG(int, 0x1371290);
      cVar3 = (char)uVar5;
      if ((cVar3 != *((char *)GEN_TOP(((int)this + 0x40)))) ||
         ((GEN_ISNAN(local_8) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
          ((GEN_ISNAN(local_8) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || local_8 == *(float *)&REFG(undefined, 0x1088114)))) {
        *((char *)GEN_TOP((REFG(int, 0x1371290) + 0x23))) = cVar3;
        *((float *)GEN_TOP((iVar2 + 0x24))) = local_8;
        *((char *)GEN_TOP(((int)this + 0x40))) = cVar3;
      }
    }
  }
  return;
}

/* ref: Global::UpdateEorzeaTime */
GEN_OWN GEN_FRAME uint F_00b7c3b0(void)
{
  GEN_ENTER(0xb7c3b0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x3c, 4, 4);
  float fVar1;
  int iVar2;
  double dVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  iVar6 = REFG(int, 0x137104c);
  uVar11 = F_00b7c610(((undefined *)GEN_TOP((REFG(int, 0x137104c) + 0x1210))) GEN_EDX_ARG);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x108bed4));
  (*(ulonglong *)(gen_frame + 0x8)) = uVar11;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined2 *)(gen_frame + 0x20)) = 0;
  uVar11 = F_00428080(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  uVar8 = (uint)((uVar11 / 0xe10) % 0x18);
  uVar11 = (*((gen_lcode *)GEN_TOP(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0][1])))(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0);
  uVar12 = (*((gen_lcode *)GEN_TOP(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0][1])))(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0);
  iVar2 = (int)(uVar12 % 0x3c);
  (*(float *)(gen_frame + 0x34)) = gen_bits2f(iVar2);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4)) = (float)iVar2;
  (*(double *)(gen_frame + 0x2c)) = gen_bits2d(CONCAT44((uint)gen_fl2bits((float)iVar2),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 0))));
  iVar5 = ((int)((uVar11 / 0x3c) % 0x3c) + uVar8 * 0x3c) * 0x3c;
  (*(float *)(gen_frame + 0x34)) = gen_bits2f(iVar5);
  fVar1 = (float)((float10)iVar5 + (float10)iVar2);
  (*(float *)(gen_frame + 0x34)) = fVar1;
  *((float *)GEN_TOP((REFG(int, 0x1371290) + 0xc))) = fVar1;
  uVar11 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 0x1210))) + 4))))(iVar6 + 0x1210,0);
  uVar7 = (uint)((uVar11 / 0x15180) % (ulonglong)REFG(undefined4, 0x10e90e8));
  if (0xb < uVar8) {
    uVar7 = uVar7 + 1;
  }
  uVar7 = uVar7 % REFG(undefined4, 0x10e90e8);
  (*(float *)(gen_frame + 0x34)) = gen_bits2f(uVar7);
  fVar9 = (float10)(int)uVar7;
  if ((int)uVar7 < 0) {
    fVar9 = GEN_X87(fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  (*(float *)(gen_frame + 0x34)) = gen_bits2f(REFG(undefined4, 0x10e90e8));
  fVar10 = (float10)(int)REFG(undefined4, 0x10e90e8);
  if ((int)REFG(undefined4, 0x10e90e8) < 0) {
    fVar10 = GEN_X87(fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  (*(float *)(gen_frame + 0x34)) = (float)(fVar9 / fVar10);
  fVar1 = ((float)GEN_TOF(((float10)1 - (float10)(float)(fVar9 / fVar10))));
  (*(float *)(gen_frame + 0x34)) = fVar1;
  (*(double *)(gen_frame + 0x2c)) = (double)fVar1;
  dVar4 = (GEN_X87MATH(((double)fVar1),0xd));
  uVar8 = REFG(undefined4, 0x137128c);
  (*(float *)(gen_frame + 0x34)) = (float)dVar4;
  *((float *)GEN_TOP((REFG(undefined4, 0x137128c) + 0x1620))) = (float)((float10)fVar1 - (float10)(float)dVar4);
  return uVar8;
}

/* ref: FUN_00b7c570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7c570(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xb7c570u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  param_1[2] = param_2;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x108bed4));
  param_1[3] = param_3;
  param_1[4] = (undefined4)gen_fl2bits(param_4);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  return (uint)param_1;
}

/* ref: FUN_00b7c5b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7c5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb7c5b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 * 0x3c + param_2;
  iVar2 = ((((((int)param_1 >> 0x1f) << 4 | param_1 >> 0x1c) - ((int)param_1 >> 0x1f)) -
           (uint)(param_1 * 0x10 < param_1)) * 4 | param_1 * 0xf >> 0x1e) + ((int)param_2 >> 0x1f) +
          (uint)CARRY4(param_1 * 0x3c,param_2);
  *((undefined1 *)GEN_TOP(((int)this + 0x21))) = 1;
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar1 * 0x3c;
  *((uint *)GEN_TOP(((int)this + 0x1c))) =
       (((iVar2 * 0x10 | uVar1 >> 0x1c) - iVar2) - (uint)(uVar1 * 0x10 < uVar1)) * 4 |
       uVar1 * 0xf >> 0x1e;
  return uVar1 * 0x3c;
}

/* ref: FUN_00b7c610 */
GEN_OWN GEN_FRAME ulonglong GEN_THISCALL F_00b7c610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong * puVar1;
  bool bVar2;
  float10 fVar3;
  ulonglong uVar4;
  
  uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this,0);
  puVar1 = ((ulonglong *)GEN_TOP(((int)this + 0x38)));
  fVar3 = GEN_X87(-(float10)(longlong)(((ulonglong)*((uint *)GEN_TOP(((int)this + 0x3c))) & 0x80000000) << 0x20) +
          (float10)(*puVar1 & 0x7fffffffffffffff));
  bVar2 = GEN_ISNAN(fVar3) || GEN_ISNAN((float10)0);
  if (bVar2 != (bVar2 || fVar3 == (float10)0)) {
    return uVar4;
  }
  if (*((char *)GEN_TOP(((int)this + 0x40))) != '\0') {
    return *puVar1;
  }
  return uVar4 + *puVar1;
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf1 */
GEN_OWN GEN_NOFRAME byte F_00b7c6c0(void)
{
  GEN_ENTER(0xb7c6c0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf2 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b7c6d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c6d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 5)));
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf4 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b7c6e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 4)));
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf6 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b7c6f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c6f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 5)));
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf7 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_00b7c700(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7c710(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7c710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x10f60e4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b7c740 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b7c740(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xb7c740u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  double dVar2;
  uint uVar3;
  
  dVar2 = (GEN_X87MATH(((double)(float)((float10)1 - (float10)param_1)),0xd));
  uVar3 = REFG(undefined4, 0x137128c);
  *((float *)GEN_TOP((REFG(undefined4, 0x137128c) + 0x1620))) =
       ((float)GEN_TOF(((float10)(float)((float10)1 - (float10)param_1) - (float10)(float)dVar2)));
  return uVar3;
}

/* ref: FUN_00b7c780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7c780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7c780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * pvVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined * PTR32 * ppvVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *((undefined1 *)GEN_TOP(((int)this + 0x21))) = 1;
  if ((*(uint *)&gen_args[0]) < 0x961) {
    uVar2 = (*(uint *)&gen_args[0]) / 100;
    uVar4 = (*(uint *)&gen_args[0]) % 100;
    (*(uint *)&gen_args[0]) = uVar4;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x3b));
    ppvVar3 = (undefined * PTR32 *)&(*(uint *)&gen_args[0]);
    if (0x3a < uVar4) {
      ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x0));
    }
    pvVar1 = *ppvVar3;
    pvVar5 = ((undefined *)GEN_TOP((uVar2 * 0x3c + (int)pvVar1)));
    iVar6 = (uint)(uVar2 * 0x10 < uVar2) * -4 + ((int)((int)(uintptr_t)pvVar1) >> 0x1f) +
            (uint)CARRY4(uVar2 * 0x3c,(uint)pvVar1);
    in_EAX = (int)((int)(uintptr_t)pvVar5) * 0x3c;
    *((undefined1 *)GEN_TOP(((int)this + 0x21))) = 1;
    *((uint *)GEN_TOP(((int)this + 0x18))) = in_EAX;
    *((uint *)GEN_TOP(((int)this + 0x1c))) =
         (((iVar6 * 0x10 | (uint)((int)(uintptr_t)pvVar5) >> 0x1c) - iVar6) -
         (uint)(((undefined *)GEN_TOP(((int)((int)(uintptr_t)pvVar5) * 0x10))) < pvVar5)) * 4 | (uint)((int)((int)(uintptr_t)pvVar5) * 0xf) >> 0x1e;
  }
  return in_EAX;
}

/* ref: Client::Game::WeatherManager::Weather::vf1 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b7c830(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((char *)GEN_TOP((in_ecx + 5))) != '\0';
}

/* ref: Client::Game::WeatherManager::Weather::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7c840(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7c840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x10f60e4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::DevEnv::Common::ControlPoint::LayoutPath::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7c890(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((ushort *)GEN_TOP((in_ecx + 0x14)));
}

/* ref: FUN_00b7c8a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7c8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f6150));
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    F_00406ad0(*((int *)GEN_TOP(((int)this + 0x10))));
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  uVar1 = F_00b65520(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00b7c8d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7c8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb7c8d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x90, 0);
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  (*(int * PTR32 *)(gen_frame + 0x2c)) = param_2;
  F_00b66510(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f6150));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x16))) = 0;
  if (*(*(int * PTR32 *)(gen_frame + 0x2c)) == 0x41) {
    bVar9 = (char)(*(int * PTR32 *)(gen_frame + 0x2c))[0x10] != '\0';
  }
  else {
    bVar9 = false;
  }
  *((bool *)GEN_TOP(((int)this + 0x16))) = bVar9;
  iVar8 = (*(int * PTR32 *)(gen_frame + 0x2c))[0xd];
  *((short *)GEN_TOP(((int)this + 0x14))) = (short)iVar8;
  if ((short)iVar8 != 0) {
    fVar4 = (float10)0;
    fVar1 = param_1[9];
    (*(float *)(gen_frame + 0x60)) = (float)fVar4;
    ((float *)(gen_frame + 0x30))[0] = param_1[8];
    (*(float *)(gen_frame + 0x64)) = (float)fVar4;
    (*(float *)(gen_frame + 0x68)) = (float)fVar4;
    ((float *)(gen_frame + 0x30))[1] = 0.0;
    ((float *)(gen_frame + 0x30))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(float *)(gen_frame + 0x44)) = fVar1;
    (*(float *)(gen_frame + 0x58)) = param_1[10];
    F_004efe70(((float *)(gen_frame + 0x30)) GEN_EDX_ARG,(uint)(param_1 + 4));
    (*(float *)(gen_frame + 0x60)) = (float)((float10)*param_1 + (float10)(*(float *)(gen_frame + 0x60)));
    (*(float *)(gen_frame + 0x64)) = (float)((float10)param_1[1] + (float10)(*(float *)(gen_frame + 0x64)));
    (*(float *)(gen_frame + 0x68)) = (float)((float10)param_1[2] + (float10)(*(float *)(gen_frame + 0x68)));
    uVar5 = F_00406bb0((uint)*((ushort *)GEN_TOP(((int)this + 0x14))) * 0x10,0,0);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar5;
    (*(int *)(gen_frame + 0x28)) = 0;
    if (*((short *)GEN_TOP(((int)this + 0x14))) != 0) {
      iVar8 = 0;
      do {
        puVar6 = ((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + (*(int * PTR32 *)(gen_frame + 0x2c))[0xc] + iVar8)));
        (*(undefined4 *)(gen_frame + 0x10)) = *puVar6;
        (*(undefined4 *)(gen_frame + 0x14)) = puVar6[1];
        (*(undefined4 *)(gen_frame + 0x18)) = puVar6[2];
        puVar6 = ((undefined4 *)GEN_TOP(F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),((float *)(gen_frame + 0x30)))));
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        iVar7 = *((int *)GEN_TOP(((int)this + 0x10)));
        *((undefined4 *)GEN_TOP((iVar7 + iVar8))) = *puVar6;
        *((undefined4 *)GEN_TOP((iVar7 + 4 + iVar8))) = uVar2;
        *((undefined4 *)GEN_TOP((iVar7 + 8 + iVar8))) = uVar3;
        *((undefined2 *)GEN_TOP((iVar8 + 0xc + *((int *)GEN_TOP(((int)this + 0x10)))))) =
             *((undefined2 *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + (*(int * PTR32 *)(gen_frame + 0x2c))[0xc] + iVar8 + 0xc)));
        *((undefined1 *)GEN_TOP((iVar8 + 0xe + *((int *)GEN_TOP(((int)this + 0x10)))))) =
             *((undefined1 *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + (*(int * PTR32 *)(gen_frame + 0x2c))[0xc] + iVar8 + 0xe)));
        iVar7 = (*(int *)(gen_frame + 0x28)) + 1;
        iVar8 = iVar8 + 0x10;
        (*(int *)(gen_frame + 0x28)) = iVar7;
      } while (iVar7 < (int)(uint)*((ushort *)GEN_TOP(((int)this + 0x14))));
    }
  }
  if (*((ushort *)GEN_TOP(((int)this + 0x14))) < 3) {
    *((undefined2 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  else {
    *((undefined2 *)GEN_TOP(((int)this + 0xc))) = 2;
    F_00b66cc0(this GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this + 0x14))),*((undefined4 *)GEN_TOP(((int)this + 0x10))),
                 *((char *)GEN_TOP(((int)this + 0x16))) != '\0');
  }
  return (uint)this;
}

/* ref: Client::DevEnv::Common::ControlPoint::LayoutPath::vf6 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00b7cae0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7cae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((ushort *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x10))) + 0xc + param_2 * 0x10)));
}

/* ref: FUN_00b7cb00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7cb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7cb00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 0x30))) + param_1 * 0x10 + (int)this;
}

/* ref: Client::DevEnv::Common::ControlPoint::LayoutPath::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7cb20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb7cb20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 0x10))) + param_3 * 0x10;
  *param_2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x10))) + param_3 * 0x10)));
  param_2[1] = *((undefined4 *)GEN_TOP((iVar1 + 4)));
  param_2[2] = *((undefined4 *)GEN_TOP((iVar1 + 8)));
  return (uint)param_2;
}

/* ref: FUN_00b7cb50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7cb50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb7cb50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((param_2 * 0x10 + *((int *)GEN_TOP((in_ecx + 0x10))))));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return (uint)puVar1;
}

/* ref: Client::DevEnv::Common::ControlPoint::LayoutPath::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7cbf0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7cbf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x10f6150));
  if (param_1[4] != 0) {
    F_00406ad0(param_1[4]);
    param_1[4] = 0;
  }
  F_00b65520(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupObject::vf43 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7cc40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7cc40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x80)));
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupObject::vf42 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7cc50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7cc50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x80)));
}

/* ref: FUN_00b7cc60 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b7cc60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7cc60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x88)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    if (puVar3[4] != 0) {
      F_00b5bab0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,puVar3[4]);
    }
    puVar4 = ((undefined4 *)GEN_TOP(puVar3[4]));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,1);
      puVar3[4] = 0;
    }
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
        puVar3 = puVar4;
        puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
          puVar3 = puVar4;
          puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar5 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar5 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
        }
      }
    }
  }
  return;
}

/* ref: FUN_00b7cce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7cce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7cce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  undefined * this_00;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x90,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    piVar2 = ((int *)GEN_TOP(0x0));
  }
  else {
    piVar2 = ((int *)GEN_TOP(F_00becaf0(this_00 GEN_EDX_ARG,param_1)));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x60))))(piVar2 GEN_EDX_ARG,8);
  piVar2[0x21] = *((int *)GEN_TOP(((int)this + 0x80)));
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,0x136)));
  *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x88)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 0x88)));
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 0x88)));
  *(undefined2 *)(puVar3 + 5) = 0;
  if (puVar3 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar3[3] = uVar1;
    puVar3[4] = piVar2;
  }
  uVar4 = F_00b7db30(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar3,0);
  return uVar4;
}

/* ref: FUN_00b7cd90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7cd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7cd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  F_00bf0d90(this GEN_EDX_FWD,param_1 + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x10f617c));
  *((int *)GEN_TOP(((int)this + 0x80))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  uVar1 = F_004296a0(0x18,0,0x136);
  *((uint *)GEN_TOP(((int)this + 0x88))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x88))) + 4))) = *((int *)GEN_TOP(((int)this + 0x88)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x88))) + 8))) = *((int *)GEN_TOP(((int)this + 0x88)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x88))) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x88))) + 0x15))) = 1;
  return (uint)this;
}

/* ref: FUN_00b7ce00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b7ce00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7ce00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x10f617c));
  if (*((int *)GEN_TOP(((int)this + 0x80))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x80))) + 0x3c))) = 0;
  }
  F_00b7cc60(this GEN_EDX_FWD);
  F_00b7dc30(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x88))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x88))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x88))),0x18,0x136);
  F_00bf0db0(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00b7ce60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7ce60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7ce60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  F_00bf0d90(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x10f617c));
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  uVar1 = F_004296a0(0x18,0,0x136);
  *((uint *)GEN_TOP(((int)this + 0x88))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x88))) + 4))) = *((int *)GEN_TOP(((int)this + 0x88)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x88))) + 8))) = *((int *)GEN_TOP(((int)this + 0x88)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x88))) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x88))) + 0x15))) = 1;
  return (uint)this;
}

/* ref: FUN_00b7cef0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b7cef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7cef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00b7cf20 */
GEN_OWN GEN_FRAME uint F_00b7cf20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7cf20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b7cf30 */
GEN_OWN GEN_FRAME uint F_00b7cf30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7cf30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00b7cf60 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b7cf60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7cf60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x136);
  return (uint)uVar1;
}

/* ref: FUN_00b7cfb0 */
GEN_OWN GEN_FRAME uint F_00b7cfb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7cfb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_00b7cfc0 */
GEN_OWN GEN_FRAME uint F_00b7cfc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7cfc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: FUN_00b7cfd0 */
GEN_OWN GEN_FRAME uint F_00b7cfd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7cfd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00b7cfe0 */
GEN_OWN GEN_FRAME uint F_00b7cfe0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7cfe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00b7cff0 */
GEN_OWN GEN_FRAME uint F_00b7cff0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7cff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00b7d010 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b7d010(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7d010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x136);
  return uVar1;
}

/* ref: FUN_00b7d040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7d040(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb7d040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b7d060 */
GEN_OWN GEN_FRAME uint F_00b7d060(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7d060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00b7d090 */
GEN_OWN GEN_FRAME uint F_00b7d090(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7d090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b7d0a0 */
GEN_OWN GEN_FRAME uint F_00b7d0a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7d0a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b7d0d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7d0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7d0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x15))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x15))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x15))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x15))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x15)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x15))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00b7d140 */
GEN_OWN GEN_FRAME uint F_00b7d140(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7d140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b7d150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7d150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb7d150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b7d170 */
GEN_OWN GEN_FRAME uint F_00b7d170(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7d170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b7d180 */
GEN_OWN GEN_FRAME uint F_00b7d180(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7d180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b7d1c0 */
GEN_OWN GEN_FRAME uint F_00b7d1c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7d1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b7d1d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7d1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb7d1d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b7d1f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7d1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7d1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00b7d210 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b7d210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7d210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00b7d240 */
GEN_OWN GEN_FRAME uint F_00b7d240(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7d240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00b7d280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7d280(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb7d280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b7d290 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b7d290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7d290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x15))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00b7d300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7d300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7d300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x15))) == '\0') {
    *((int *)GEN_TOP((*piVar2 + 4))) = param_1;
  }
  piVar2[1] = *((int *)GEN_TOP((param_1 + 4)));
  if (param_1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00b7d360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7d360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7d360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP((uVar2 + 4))) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = ((uint *)GEN_TOP(param_1[1]));
  if (param_1 == ((uint *)GEN_TOP(puVar1[2]))) {
    puVar1[2] = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00b7d3c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7d3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb7d3c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b7d3f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7d3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7d3f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00b7d0d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00b7d410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7d410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb7d410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b7d430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7d430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb7d430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b7d450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7d450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7d450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00b7d4b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7d4b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb7d4b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b7d4c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7d4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7d4c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00b7d290(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00b7d510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7d510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00b7d290(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x15))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar3[2];
        *((int * PTR32 *)GEN_TOP((piVar3[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar3[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00b7d62a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar6)) == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00b7cff0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00b7d060(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00b7d62a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00b7d300(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00b7d360(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00b7d300(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00b7d6e8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00b7d360(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00b7d6e8;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00b7d300(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00b7d360(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,0x136);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00b7d770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7d770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb7d770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00b7d290(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00b7d790 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b7d790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7d790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00b7d790(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x18,0x136);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_00b7d7d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7d7d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb7d7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00429760(param_5,0x18,0x136);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
  }
  else if (param_3 == '\0') {
    param_4[2] = param_5;
    if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
    }
  }
  else {
    *param_4 = param_5;
    if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
      **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
    }
  }
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x14)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x14))) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00b7d9cd: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x14))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar4[2]))) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar2 + 8))) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar3))) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00b7d9cd;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_00b7da00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7da00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb7da00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b7da20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7da20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7da20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00b7d0d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00b7da30 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00b7da30(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb7da30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00b7da50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7da50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7da50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00b7da70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7da70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7da70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00b7da80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7da80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7da80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00b7d290(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00b7dad0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7dad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7dad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00b7d790(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x18,0x136);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x15)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: FUN_00b7db30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7db30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb7db30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool local_8;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  local_8 = true;
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) < (uint)puVar2[3];
      }
      else {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) <= (uint)puVar2[3];
      }
      if (local_8 == false) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(*puVar2));
      }
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x15))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_00b7d7d0(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00b7d0d0(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00b7d7d0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00429760((*(int *)&gen_args[1]),0x18,0x136);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00b7dc10 */
GEN_OWN GEN_FRAME unsigned int F_00b7dc10(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb7dc10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00b7dc30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7dc30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb7dc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) && (param_3 == *((int * PTR32 *)GEN_TOP(((int)this + 4))))) {
    F_00b7dad0(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x15)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x15)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00b7d510(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00b7dcd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7dcd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7dcd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,0x136)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_1;
    puVar1[4] = param_1[1];
  }
  return (uint)puVar1;
}

/* ref: FUN_00b7dd20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7dd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7dd20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00b7dc30(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00b7dd40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7dd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb7dd40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,0x136)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
  }
  F_00b7db30(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00b7dda0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7dda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7dda0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00b7dc30(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,0x136);
  return (uint)uVar1;
}

/* ref: FUN_00b7dde0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7dde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7dde0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00b7dc30(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,0x136);
  return (uint)uVar1;
}

/* ref: FUN_00b7dea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7dea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7dea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00b7dc30(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,0x136);
  return (uint)uVar1;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf13 */
GEN_OWN GEN_NOFRAME uint F_00b7dee0(void)
{
  GEN_ENTER(0xb7dee0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf12 */
GEN_OWN GEN_NOFRAME uint F_00b7def0(void)
{
  GEN_ENTER(0xb7def0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupObject::vf45 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7df00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7df00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x80)));
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupObject::vf44 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7df10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7df10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x80)));
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupObject::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7df20(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7df20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b7ce00(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b7df50 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b7df50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7df50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x7f90)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x7f90))) = 0;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x7f8c)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x7f8c))) = 0;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x7f88)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x7f88))) = 0;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x7f84)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x7f84))) = 0;
  }
  piVar2 = ((int *)GEN_TOP(((int)this + 0x2fd4)));
  iVar3 = 0x13ec;
  do {
    piVar1 = ((int *)GEN_TOP(*piVar2));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return;
}

/* ref: FUN_00b7dfe0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7dfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7dfe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x7fa0))) != 0) {
    F_0050c620(*((int *)GEN_TOP(((int)this + 0x7fa0))),0,0);
    *((undefined4 *)GEN_TOP(((int)this + 0x7fa0))) = 0;
  }
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x7f9c))) != 0) {
    uVar1 = F_0050c620(*((int *)GEN_TOP(((int)this + 0x7f9c))),0,0);
    *((undefined4 *)GEN_TOP(((int)this + 0x7f9c))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00b7e070 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b7e070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7e070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  F_004ff310(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,5,0);
  (*(undefined4 *)(gen_frame + 0x4)) = 0x73686364;
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),((char *)REFP(0x10f625c)),0,0,0);
  *((uint *)GEN_TOP(((int)this + 0x7f9c))) = uVar1;
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),((char *)REFP(0x10f627c)),0,0,0);
  *((uint *)GEN_TOP(((int)this + 0x7fa0))) = uVar1;
  return uVar1 != 0;
}

/* ref: FUN_00b7e0f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b7e0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7e0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return (byte)(*((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x7fc0))) + (uint)((ushort)param_1 >> 5) * 4))) >>
               ((byte)(ushort)param_1 & 0x1f)) & 1;
}

/* ref: FUN_00b7e120 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7e120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7e120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar2;
  
  uVar3 = (ulonglong)(byte)((char)*((undefined4 *)GEN_TOP(((int)this + 0x8014))) * '\n');
  lVar2 = ((ulonglong)((uVar3 < 0x40) ? ((0x3ffL << uVar3)) : 0));
  uVar1 = (uint)lVar2;
  uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
  param_1[1] = ~uVar4 & param_1[1] | uVar4;
  *param_1 = ~uVar1 & *param_1 | uVar1;
  return uVar1;
}

/* ref: FUN_00b7e160 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7e160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7e160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f62a8));
  *((undefined4 *)GEN_TOP(((int)this + 0x7f84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7f88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7f8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7f90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7f94))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x7f98))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x7f9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7fa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7fb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7fbc))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0x80,4)));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x7fc0))) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x7fc4))) = 0x3fc;
  *((undefined4 *)GEN_TOP(((int)this + 0x8010))) = 0xffffffff;
  *((undefined2 *)GEN_TOP(((int)this + 0x8018))) = 0x101;
  *((undefined1 *)GEN_TOP(((int)this + 0x801a))) = 1;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x2fd4))),0,0x4fb0);
  return (uint)this;
}

/* ref: FUN_00b7e270 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b7e270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7e270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint * puVar6;
  
  uVar5 = 0;
  F_004d58e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,0,0,0x23,0);
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar6 = ((uint *)GEN_TOP(((int)this + 0x2fd4)));
  do {
    uVar3 = F_004dcde0(2,4);
    *puVar6 = uVar3;
    if (uVar3 == 0) break;
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
    uVar5 = uVar5 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar5 < 0x13ec);
  *((uint *)GEN_TOP(((int)this + 0x7fbc))) = (*(uint *)(gen_frame + 0x4)) / 5;
  uVar5 = F_004dcc90(0x60,4,4);
  *((uint *)GEN_TOP(((int)this + 0x7f84))) = uVar5;
  if (uVar5 != 0) {
    uVar5 = F_004dccf0(0x48,1,4,4);
    *((uint *)GEN_TOP(((int)this + 0x7f88))) = uVar5;
    if (uVar5 != 0) {
      uVar5 = F_004dcd60(0x30,2,4);
      *((uint *)GEN_TOP(((int)this + 0x7f8c))) = uVar5;
      if (uVar5 != 0) {
        uVar5 = F_004deb40(REFG(void * PTR32, 0x1370b90) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),1);
        *((uint *)GEN_TOP(((int)this + 0x7f90))) = uVar5;
        if (uVar5 != 0) {
          uVar5 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))) GEN_EDX_ARG,((char *)REFP(0x10f6238)));
          *((uint *)GEN_TOP(((int)this + 0x7f94))) = uVar5;
          uVar5 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))) GEN_EDX_ARG,((char *)REFP(0x10f624c)));
          *((uint *)GEN_TOP(((int)this + 0x7f98))) = uVar5;
          puVar4 = ((undefined4 *)GEN_TOP(F_004d68c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x7f84))) GEN_EDX_ARG,0,0,2)));
          uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
          uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
          if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
            *puVar4 = GEN_FLT_TO(*puVar4, REFG(float, 0x1090708));
            puVar4[1] = uVar2;
            puVar4[2] = uVar2;
            puVar4[3] = uVar1;
            puVar4[4] = uVar2;
            puVar4[5] = uVar2;
            puVar4[6] = uVar1;
            puVar4[7] = uVar1;
            puVar4[8] = uVar2;
            puVar4[9] = uVar2;
            puVar4[10] = uVar1;
            puVar4[0xb] = uVar2;
            puVar4[0xc] = uVar2;
            puVar4[0xd] = uVar2;
            puVar4[0xe] = uVar1;
            puVar4[0xf] = uVar1;
            puVar4[0x10] = uVar2;
            puVar4[0x11] = uVar1;
            puVar4[0x12] = uVar1;
            puVar4[0x13] = uVar1;
            puVar4[0x15] = uVar2;
            puVar4[0x14] = uVar1;
            puVar4[0x16] = uVar1;
            puVar4[0x17] = uVar1;
            F_004d6970(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x7f84))) GEN_EDX_ARG);
          }
          puVar4 = ((undefined4 *)GEN_TOP(F_004d6a30(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x7f88))) GEN_EDX_ARG,0,0,2)));
          if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
            *puVar4 = 0x20000;
            puVar4[1] = 1;
            puVar4[2] = 0x20003;
            puVar4[3] = 0x60001;
            puVar4[4] = 0x10005;
            puVar4[5] = 0x60002;
            puVar4[6] = 0x70005;
            puVar4[7] = 0x50004;
            puVar4[8] = 0x70006;
            puVar4[9] = 0x30004;
            puVar4[10] = 0x40000;
            puVar4[0xb] = 0x30007;
            puVar4[0xc] = 0x40001;
            puVar4[0xd] = 0x10000;
            puVar4[0xe] = 0x40005;
            puVar4[0xf] = 0x60003;
            puVar4[0x10] = 0x30002;
            puVar4[0x11] = 0x60007;
            F_004d6ae0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x7f88))) GEN_EDX_ARG);
          }
          *((undefined4 *)GEN_TOP(((int)this + 0x7fa4))) = 0;
          *((undefined4 *)GEN_TOP(((int)this + 0x7fa8))) = 0;
          *((undefined4 *)GEN_TOP(((int)this + 0x7fac))) = 0;
          *((undefined4 *)GEN_TOP(((int)this + 0x7fb0))) = 0;
          *((undefined4 *)GEN_TOP(((int)this + 0x7fb4))) = 0;
          F_00c48350(((undefined *)GEN_TOP(((int)this + 0x7fd0))),0,0x40);
          *((undefined4 *)GEN_TOP(((int)this + 0x8014))) = 0;
          return 1;
        }
      }
    }
  }
  F_00b7df50(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00b7e5a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7e5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb7e5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint * puVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  
  uVar2 = *((ushort *)GEN_TOP(((int)param_1 + 6)));
  if (((uVar2 & 0x7000) == 0) && ((uVar2 & 0xfc) == 0)) {
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x8014)));
    *((ushort *)GEN_TOP(((int)param_1 + 6))) = uVar2 & 0xff3f | 0x3c;
    uVar6 = (ulonglong)(byte)((char)uVar3 * '\n');
    lVar4 = ((ulonglong)((uVar6 < 0x40) ? ((0x3ffL << uVar6)) : 0));
    uVar8 = (uint)lVar4;
    uVar7 = (uint)((ulonglong)lVar4 >> 0x20);
    param_1[1] = ~uVar7 & param_1[1] | uVar7;
    *param_1 = ~uVar8 & *param_1 | uVar8;
    return uVar8;
  }
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x7fb8)));
  uVar8 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  uVar7 = 0x3ff;
  if (uVar8 < *((uint *)GEN_TOP(((int)this + 0x7fbc)))) {
    *((undefined4 *)GEN_TOP(((int)this + uVar8 * 8 + 4))) = param_2;
    *((undefined4 *)GEN_TOP(((int)this + uVar8 * 8 + 8))) = param_3;
    *((undefined4 *)GEN_TOP(((int)this + uVar8 * 4 + 0x1fe4))) = 0;
    uVar7 = uVar8 & 0xffff;
  }
  bVar9 = (char)*((undefined4 *)GEN_TOP(((int)this + 0x8014))) * '\n';
  lVar4 = ((ulonglong)(((ulonglong)bVar9 < 0x40) ? (((ulonglong)(uVar7 & 0x3ff) << (ulonglong)bVar9)) : 0));
  lVar5 = ((ulonglong)(((ulonglong)bVar9 < 0x40) ? ((0x3ffL << (ulonglong)bVar9)) : 0));
  *param_1 = (uint)lVar4 | ~(uint)lVar5 & *param_1;
  uVar8 = (uint)((ulonglong)lVar4 >> 0x20) | ~(uint)((ulonglong)lVar5 >> 0x20) & param_1[1];
  param_1[1] = uVar8;
  return uVar8;
}

/* ref: FUN_00b7e680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7e680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb7e680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint * puVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  
  uVar2 = *((ushort *)GEN_TOP(((int)param_1 + 6)));
  if (((uVar2 & 0x7000) == 0) && ((uVar2 & 0xfc) == 0)) {
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x8014)));
    *((ushort *)GEN_TOP(((int)param_1 + 6))) = uVar2 & 0xff3f | 0x3c;
    uVar6 = (ulonglong)(byte)((char)uVar3 * '\n');
    lVar4 = ((ulonglong)((uVar6 < 0x40) ? ((0x3ffL << uVar6)) : 0));
    uVar8 = (uint)lVar4;
    uVar7 = (uint)((ulonglong)lVar4 >> 0x20);
    param_1[1] = ~uVar7 & param_1[1] | uVar7;
    *param_1 = ~uVar8 & *param_1 | uVar8;
    return uVar8;
  }
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x7fb8)));
  uVar8 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  uVar7 = 0x3ff;
  if (uVar8 < *((uint *)GEN_TOP(((int)this + 0x7fbc)))) {
    *((undefined4 *)GEN_TOP(((int)this + uVar8 * 4 + 0x1fe4))) = param_2;
    uVar7 = uVar8 & 0xffff;
  }
  bVar9 = (char)*((undefined4 *)GEN_TOP(((int)this + 0x8014))) * '\n';
  lVar4 = ((ulonglong)(((ulonglong)bVar9 < 0x40) ? (((ulonglong)(uVar7 & 0x3ff) << (ulonglong)bVar9)) : 0));
  lVar5 = ((ulonglong)(((ulonglong)bVar9 < 0x40) ? ((0x3ffL << (ulonglong)bVar9)) : 0));
  *param_1 = (uint)lVar4 | ~(uint)lVar5 & *param_1;
  uVar8 = (uint)((ulonglong)lVar4 >> 0x20) | ~(uint)((ulonglong)lVar5 >> 0x20) & param_1[1];
  param_1[1] = uVar8;
  return uVar8;
}

/* ref: FUN_00b7e750 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b7e750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7e750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x34, 12);
  uint * puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  float * pfVar13;
  float * pfVar14;
  float10 fVar15;
  float10 fVar16;
  
  fVar15 = (float10)REFG(float, 0x10920a4);
  uVar12 = (*((int *)GEN_TOP(((int)this + 0x8014))) + 1U) % 5;
  (*(char *)(gen_frame + 0x23)) = '\x01';
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xc)) + 4)) = 3;
  (*(ulonglong *)(gen_frame + 0xc)) = CONCAT44(3,(uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xc))));
  *((uint *)GEN_TOP(((int)this + 0x8014))) = uVar12;
  iVar7 = *((int *)GEN_TOP((REFG(int, 0x137127c) + 0x66f4)));
  (*(float * PTR32 *)(gen_frame + 0x18)) = ((float *)GEN_TOP((iVar7 + 0x10)));
  (*(float * PTR32 *)(gen_frame + 0x1c)) = ((float *)GEN_TOP(((int)this + 0x7fd0)));
  do {
    uVar9 = 0;
    pfVar13 = (*(float * PTR32 *)(gen_frame + 0x18));
    pfVar14 = (*(float * PTR32 *)(gen_frame + 0x1c));
    do {
      if ((!GEN_ISNAN((float10)((float)GEN_TOF(ABS((float10)(float)((float10)*pfVar13 - (float10)*pfVar14))))) &&
          !GEN_ISNAN(fVar15)) &&
          !((float10)((float)GEN_TOF(ABS((float10)(float)((float10)*pfVar13 - (float10)*pfVar14)))) <= fVar15))
      {
        (*(char *)(gen_frame + 0x23)) = '\0';
        break;
      }
      uVar9 = uVar9 + 1;
      pfVar13 = pfVar13 + 1;
      pfVar14 = pfVar14 + 1;
    } while (uVar9 < 3);
    (*(float * PTR32 *)(gen_frame + 0x1c)) = (*(float * PTR32 *)(gen_frame + 0x1c)) + 4;
    (*(float * PTR32 *)(gen_frame + 0x18)) = (*(float * PTR32 *)(gen_frame + 0x18)) + 4;
    iVar10 = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xc)) + 4)) - 1;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xc)) + 4)) = iVar10;
    (*(ulonglong *)(gen_frame + 0xc)) = CONCAT44(iVar10,(uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xc))));
    if (iVar10 == 0) {
      if ((*(char *)(gen_frame + 0x23)) != '\0') {
        fVar2 = *((float *)GEN_TOP(((int)this + 0x8000)));
        fVar3 = *((float *)GEN_TOP((iVar7 + 0x40)));
        fVar4 = *((float *)GEN_TOP(((int)this + 0x8004)));
        fVar5 = *((float *)GEN_TOP((iVar7 + 0x44)));
        fVar6 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x8008))) - (float10)*((float *)GEN_TOP((iVar7 + 0x48))))))
        ;
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0xc)) + 0)) = fVar6;
        (*(ulonglong *)(gen_frame + 0xc)) = (ulonglong)(uint)gen_fl2bits(fVar6);
        fVar15 = GEN_X87((float10)(float)((float10)fVar4 - (float10)fVar5));
        fVar16 = GEN_X87((float10)(float)((float10)fVar2 - (float10)fVar3));
        if (*(double *)&REFG(undefined, 0x1090710) <
            (double)((float)GEN_TOF(((float10)fVar6 * (float10)fVar6 + (fVar16 * fVar16 + fVar15 * fVar15)))))
        {
          (*(char *)(gen_frame + 0x23)) = '\0';
        }
      }
      pfVar13 = ((float *)GEN_TOP((iVar7 + 0x10)));
      pfVar14 = ((float *)GEN_TOP(((int)this + 0x7fd0)));
      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 - 1) {
        *pfVar14 = *pfVar13;
        pfVar13 = pfVar13 + 1;
        pfVar14 = pfVar14 + 1;
      }
      uVar11 = 0;
      *((uint *)GEN_TOP(((int)this + 0x8010))) =
           ~(1 << (sbyte)uVar12) & *((uint *)GEN_TOP(((int)this + 0x8010))) |
           (uint)((*(char *)(gen_frame + 0x23)) != '\0') << (sbyte)uVar12;
      uVar9 = *((int *)GEN_TOP(((int)this + 0x7fc4))) + 0x1fU >> 5;
      if (uVar9 != 0) {
        do {
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x7fc0))) + uVar11 * 4))) = 0;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
      if (*((int *)GEN_TOP(((int)this + 0x8010))) == -1) {
        iVar7 = *((int *)GEN_TOP(((int)this + 0x7fbc)));
        uVar9 = *((uint *)GEN_TOP(((int)this + uVar12 * 4 + 0x7fa4)));
        (*(uint *)(gen_frame + 0x0)) = 0;
        if (uVar9 == 0) {
          *((undefined4 *)GEN_TOP(((int)this + 0x7fb8))) = 0;
          return 0;
        }
        do {
          iVar10 = *((int *)GEN_TOP(((int)this + (*(uint *)(gen_frame + 0x0)) * 4 + iVar7 * uVar12 * 4 + 0x2fd4)));
          if ((*((int *)GEN_TOP((iVar10 + 0x1c))) != 0) &&
             (uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar10 + 0x1c))) + 0x1c))))
                                 (*((int * PTR32 *)GEN_TOP((iVar10 + 0x1c))) GEN_EDX_ARG,&(*(ulonglong *)(gen_frame + 0xc)),4,0), uVar11 == 0)) {
            if (*((int *)GEN_TOP((iVar10 + 0x18))) == 3) {
              (*(ulonglong *)(gen_frame + 0xc)) = ((*(ulonglong *)(gen_frame + 0xc)) * 1000) / CONCAT44(REFG(undefined4, 0x1375a34),REFG(undefined4, 0x1375a30));
            }
            puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x7fc0))) + ((*(uint *)(gen_frame + 0x0)) >> 5) * 4)));
            bVar8 = (byte)(*(uint *)(gen_frame + 0x0)) & 0x1f;
            *puVar1 = (uint)((uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xc))) < 5) << bVar8 |
                      ~(1 << bVar8) & *puVar1;
          }
          (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
        } while ((*(uint *)(gen_frame + 0x0)) < uVar9);
      }
      *((undefined4 *)GEN_TOP(((int)this + 0x7fb8))) = 0;
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b7e9b0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b7e9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7e9b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x7f9c))) != 0) {
    piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x7f9c))) + 0x88)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
    if (iVar1 == 2) {
      piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x7f9c))) + 0x8c)));
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      if ((iVar1 < 8) && (*((int *)GEN_TOP(((int)this + 0x7fa0))) != 0)) {
        piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x7fa0))) + 0x88)));
        iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
        if (iVar1 == 2) {
          piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x7fa0))) + 0x8c)));
          iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
          return iVar1 < 8;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00b7ea20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7ea20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7ea20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x110, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined * pvVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined * pvVar14;
  byte bVar15;
  undefined3 extraout_var = 0;
  float * pfVar16;
  undefined4 * puVar17;
  uint uVar18;
  uint * puVar19;
  int iVar20;
  float * pfVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  
  (*(uint *)(gen_frame + 0xfc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x100);
  (*(undefined * PTR32 *)(gen_frame + 0x9c)) = this;
  bVar15 = F_00b7e9b0(this GEN_EDX_FWD);
  uVar18 = CONCAT31(extraout_var,bVar15);
  if (bVar15 != 0) {
    pvVar10 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
    *((undefined4 *)GEN_TOP(((int)pvVar10 + 8))) = 0xf617ffff;
    (*(undefined * PTR32 *)(gen_frame + 0x94)) = pvVar10;
    if (*((int *)GEN_TOP((REFG(int, 0x137127c) + 0x66f4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)pvVar10 + *((int *)GEN_TOP(((int)this + 0x7f94))) * 4 + 0xa8))) =
           *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x137127c) + 0x66f4))) + 0x120)));
    }
    uVar13 = REFG(undefined4, 0x1302370);
    uVar12 = REFG(undefined4, 0x1302360);
    uVar18 = REFG(undefined4, 0x1302350);
    (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x1302370) & 0xfffffffb;
    uVar11 = *((undefined4 *)GEN_TOP(((int)this + 0x7f84)));
    *((uint *)GEN_TOP(((int)pvVar10 + 0x6c))) = *((uint *)GEN_TOP(((int)pvVar10 + 0x6c))) & 0x800000ff;
    *((undefined1 *)GEN_TOP(((int)pvVar10 + 0x6c))) = 0xc;
    *((uint *)GEN_TOP(((int)pvVar10 + 0x6c))) = *((uint *)GEN_TOP(((int)pvVar10 + 0x6c))) & 0x7fffffff;
    *((undefined4 *)GEN_TOP(((int)pvVar10 + 0x68))) = uVar11;
    *((undefined4 *)GEN_TOP(((int)pvVar10 + 0x48))) = *((undefined4 *)GEN_TOP(((int)this + 0x7f88)));
    *((undefined4 *)GEN_TOP(((int)pvVar10 + 0x40))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x7f9c))) + 0x98)));
    *((undefined4 *)GEN_TOP(((int)pvVar10 + 0x60))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar10 + 0x44))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x7fa0))) + 0x9c)));
    *((undefined4 *)GEN_TOP(((int)pvVar10 + 0x60))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar10 + 0x4c))) = *((undefined4 *)GEN_TOP(((int)this + 0x7f90)));
    *((uint *)GEN_TOP(((int)pvVar10 + 0x38))) = uVar18 & 0x7fffff;
    *((uint *)GEN_TOP(((int)pvVar10 + 0x50))) = uVar12 & 0x1d;
    uVar18 = REFG(undefined4, 0x1302368);
    *((uint *)GEN_TOP(((int)pvVar10 + 0x5c))) = REFG(undefined4, 0x130236c) & 0xfffffffc;
    *((uint *)GEN_TOP(((int)pvVar10 + 0x58))) = uVar18 & 0xfe000000;
    *((uint *)GEN_TOP(((int)pvVar10 + 0x3c))) = uVar13 & 0x7ffffffb;
    puVar19 = ((uint *)GEN_TOP(((int)this + 0x7fbc)));
    puVar17 = ((undefined4 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x8014))) * *((uint *)GEN_TOP(((int)this + 0x7fbc))) * 4 + 0x2fd4
              )));
    if (*((uint *)GEN_TOP(((int)this + 0x7fb8))) < *((uint *)GEN_TOP(((int)this + 0x7fbc)))) {
      puVar19 = ((uint *)GEN_TOP(((int)this + 0x7fb8)));
    }
    (*(uint *)(gen_frame + 0xa8)) = *puVar19;
    (*(uint *)(gen_frame + 0xa0)) = 0;
    if (*puVar19 != 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(((int)this + 0x1fe4)));
      (*(undefined4 * PTR32 *)(gen_frame + 0xac)) = puVar17;
      (*(int *)(gen_frame + 0x90)) = ((int)this + 0x1fe4) - (int)puVar17;
      do {
        fVar24 = (float10)REFG(double, 0x1088108);
        fVar23 = (float10)*(double *)&REFG(undefined, 0x10928e8);
        fVar22 = (float10)0;
        if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x90)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0xac))))) == 0) {
          pfVar16 = *((float * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0xa0)) * 8 + 8 + (int)this)));
          pfVar21 = *((float * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0xa0)) * 8 + 4 + (int)this)));
          (*(float *)(gen_frame + 0x60)) = (float)((float10)*pfVar16 + fVar23);
          fVar1 = pfVar16[1];
          (*(float *)(gen_frame + 0x64)) = (float)((float10)fVar1 + fVar23);
          fVar2 = pfVar16[2];
          (*(undefined4 *)(gen_frame + 0xb4)) = 0;
          (*(undefined4 *)(gen_frame + 0xb8)) = 0;
          (*(undefined4 *)(gen_frame + 0xc0)) = 0;
          (*(float *)(gen_frame + 0x68)) = (float)(fVar23 + (float10)fVar2);
          (*(undefined4 *)(gen_frame + 0xc8)) = 0;
          (*(undefined4 *)(gen_frame + 0xd0)) = 0;
          (*(float *)(gen_frame + 0xb0)) = (float)((float10)*pfVar16 + fVar23);
          (*(undefined4 *)(gen_frame + 0xd4)) = 0;
          (*(float *)(gen_frame + 0xc4)) = (float)((float10)fVar1 + fVar23);
          (*(float *)(gen_frame + 0xd8)) = (float)(fVar23 + (float10)fVar2);
          (*(float *)(gen_frame + 0xe0)) = (float)fVar22;
          (*(float *)(gen_frame + 0xe4)) = (float)fVar22;
          (*(float *)(gen_frame + 0xe8)) = (float)fVar22;
          F_004efe70(&(*(float *)(gen_frame + 0xb0)) GEN_EDX_ARG,0x1302cf0);
          (*(float *)(gen_frame + 0xe0)) = (float)((float10)(*(float *)(gen_frame + 0xe0)) + (float10)*pfVar21);
          (*(float *)(gen_frame + 0xe4)) = (float)((float10)pfVar21[1] + (float10)(*(float *)(gen_frame + 0xe4)));
          fVar22 = GEN_X87((float10)pfVar21[2] + (float10)(*(float *)(gen_frame + 0xe8)));
        }
        else {
          pfVar16 = ((float *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0xa4))));
          (*(float *)(gen_frame + 0x50)) = (float)((float10)pfVar16[4] - (float10)*pfVar16);
          (*(float *)(gen_frame + 0x54)) = (float)((float10)pfVar16[5] - (float10)pfVar16[1]);
          (*(float *)(gen_frame + 0x58)) = (float)((float10)pfVar16[6] - (float10)pfVar16[2]);
          fVar1 = ((float)GEN_TOF(((float10)(float)((float10)pfVar16[4] - (float10)*pfVar16) * fVar24)));
          (*(float *)(gen_frame + 0x40)) = fVar1;
          fVar2 = ((float)GEN_TOF(((float10)(float)((float10)pfVar16[5] - (float10)pfVar16[1]) * fVar24)));
          (*(float *)(gen_frame + 0x44)) = fVar2;
          fVar3 = ((float)GEN_TOF(((float10)(float)((float10)pfVar16[6] - (float10)pfVar16[2]) * fVar24)));
          (*(float *)(gen_frame + 0x48)) = fVar3;
          fVar1 = (float)((float10)fVar1 + fVar23);
          (*(float *)(gen_frame + 0x80)) = fVar1;
          fVar2 = (float)((float10)fVar2 + fVar23);
          (*(float *)(gen_frame + 0x84)) = fVar2;
          fVar3 = (float)((float10)fVar3 + fVar23);
          (*(float *)(gen_frame + 0x88)) = fVar3;
          fVar4 = pfVar16[4];
          fVar5 = *pfVar16;
          (*(float *)(gen_frame + 0x30)) = (float)((float10)fVar4 + (float10)fVar5);
          fVar6 = pfVar16[5];
          fVar7 = pfVar16[1];
          (*(float *)(gen_frame + 0x34)) = (float)((float10)fVar6 + (float10)fVar7);
          fVar8 = pfVar16[6];
          fVar9 = pfVar16[2];
          (*(float *)(gen_frame + 0xb0)) = fVar1;
          (*(undefined4 *)(gen_frame + 0xb4)) = 0;
          (*(float *)(gen_frame + 0x38)) = (float)((float10)fVar8 + (float10)fVar9);
          (*(undefined4 *)(gen_frame + 0xb8)) = 0;
          (*(undefined4 *)(gen_frame + 0xc0)) = 0;
          (*(undefined4 *)(gen_frame + 0xc8)) = 0;
          (*(undefined4 *)(gen_frame + 0xd0)) = 0;
          (*(undefined4 *)(gen_frame + 0xd4)) = 0;
          (*(float *)(gen_frame + 0x70)) = ((float)GEN_TOF(((float10)(float)((float10)fVar4 + (float10)fVar5) * fVar24)));
          (*(float *)(gen_frame + 0xc4)) = fVar2;
          (*(float *)(gen_frame + 0xd8)) = fVar3;
          (*(float *)(gen_frame + 0x74)) = ((float)GEN_TOF(((float10)(float)((float10)fVar6 + (float10)fVar7) * fVar24)));
          (*(float *)(gen_frame + 0x78)) = ((float)GEN_TOF(((float10)(float)((float10)fVar8 + (float10)fVar9) * fVar24)));
          (*(float *)(gen_frame + 0xe0)) = (float)fVar22;
          (*(float *)(gen_frame + 0xe4)) = (float)fVar22;
          (*(float *)(gen_frame + 0xe8)) = (float)fVar22;
          F_004efe70(&(*(float *)(gen_frame + 0xb0)) GEN_EDX_ARG,0x1302cf0);
          (*(float *)(gen_frame + 0xe0)) = (float)((float10)(*(float *)(gen_frame + 0xe0)) + (float10)(*(float *)(gen_frame + 0x70)));
          (*(float *)(gen_frame + 0xe4)) = (float)((float10)(*(float *)(gen_frame + 0xe4)) + (float10)(*(float *)(gen_frame + 0x74)));
          fVar22 = GEN_X87((float10)(*(float *)(gen_frame + 0xe8)) + (float10)(*(float *)(gen_frame + 0x78)));
        }
        (*(float *)(gen_frame + 0xe8)) = (float)fVar22;
        pfVar16 = ((float *)GEN_TOP(F_004d9920(*((undefined4 *)GEN_TOP(((int)this + 0x7f8c))) GEN_EDX_ARG,0,0,2)));
        pvVar14 = (*(undefined * PTR32 *)(gen_frame + 0x9c));
        pvVar10 = (*(undefined * PTR32 *)(gen_frame + 0x94));
        if (pfVar16 == ((float *)GEN_TOP(0x0))) break;
        ((float *)(gen_frame + 0x0))[0] = (*(float *)(gen_frame + 0xb0));
        ((float *)(gen_frame + 0x0))[1] = gen_bits2f((*(undefined4 *)(gen_frame + 0xc0)));
        ((float *)(gen_frame + 0x0))[2] = gen_bits2f((*(undefined4 *)(gen_frame + 0xd0)));
        ((float *)(gen_frame + 0x0))[3] = (*(float *)(gen_frame + 0xe0));
        (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0xb4));
        (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0xc4));
        (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0xd4));
        (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0xe4));
        (*(undefined4 *)(gen_frame + 0x20)) = (*(undefined4 *)(gen_frame + 0xb8));
        (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 *)(gen_frame + 0xc8));
        (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0xd8));
        (*(float *)(gen_frame + 0x2c)) = (*(float *)(gen_frame + 0xe8));
        pfVar21 = ((float *)(gen_frame + 0x0));
        for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 - 1) {
          *pfVar16 = *pfVar21;
          pfVar21 = pfVar21 + 1;
          pfVar16 = pfVar16 + 1;
        }
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x9c)) + 0x7f8c))) + 0x24))) = 0;
        (*(undefined4 *)(gen_frame + 0x98)) = *(*(undefined4 * PTR32 *)(gen_frame + 0xac));
        puVar17 = ((undefined4 *)GEN_TOP(F_004d4760((*(undefined * PTR32 *)(gen_frame + 0x94)) GEN_EDX_ARG,0xc)));
        if (puVar17 != ((undefined4 *)GEN_TOP(0x0))) {
          *puVar17 = 0xc;
          puVar17[1] = (*(undefined4 *)(gen_frame + 0x98));
          puVar17[2] = 2;
          F_004d4810(pvVar10 GEN_EDX_ARG,puVar17);
        }
        *((undefined4 *)GEN_TOP(((int)pvVar10 + *((int *)GEN_TOP(((int)pvVar14 + 0x7f98))) * 4 + 0xa8))) =
             *((undefined4 *)GEN_TOP(((int)pvVar14 + 0x7f8c)));
        puVar17 = ((undefined4 *)GEN_TOP(F_004d4760(pvVar10 GEN_EDX_ARG,0x54)));
        if (puVar17 != ((undefined4 *)GEN_TOP(0x0))) {
          *puVar17 = 5;
          puVar17[1] = 5;
          puVar17[2] = 0;
          puVar17[3] = 0;
          puVar17[4] = 8;
          puVar17[5] = 0;
          puVar17[6] = 0x24;
          bVar15 = F_004dc830(pvVar10 GEN_EDX_ARG,puVar17 + 7);
          if (bVar15 != 0) {
            F_004d4810(pvVar10 GEN_EDX_ARG,puVar17);
          }
        }
        uVar11 = *(*(undefined4 * PTR32 *)(gen_frame + 0xac));
        puVar17 = ((undefined4 *)GEN_TOP(F_004d4760(pvVar10 GEN_EDX_ARG,0xc)));
        if (puVar17 != ((undefined4 *)GEN_TOP(0x0))) {
          *puVar17 = 0xc;
          puVar17[1] = uVar11;
          puVar17[2] = 1;
          F_004d4810(pvVar10 GEN_EDX_ARG,puVar17);
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) + 1;
        (*(undefined4 * PTR32 *)(gen_frame + 0xac)) = (*(undefined4 * PTR32 *)(gen_frame + 0xac)) + 1;
        uVar18 = (*(uint *)(gen_frame + 0xa0)) + 1;
        (*(uint *)(gen_frame + 0xa0)) = uVar18;
        this = (*(undefined * PTR32 *)(gen_frame + 0x9c));
      } while (uVar18 < (*(uint *)(gen_frame + 0xa8)));
    }
    uVar18 = *((uint *)GEN_TOP(((int)this + 0x8014)));
    *((uint *)GEN_TOP(((int)this + uVar18 * 4 + 0x7fa4))) = (*(uint *)(gen_frame + 0xa8));
  }
  return uVar18;
}

/* ref: FUN_00b7efa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7efa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7efa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return *((uint *)GEN_TOP((*(int *)this + (param_1 >> 5) * 4))) >> ((byte)param_1 & 0x1f) & 1;
}

/* ref: FUN_00b7efc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7efc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb7efc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  
  bVar4 = (char)param_1 * '\n';
  lVar1 = ((ulonglong)(((ulonglong)bVar4 < 0x40) ? ((0x3ffL << (ulonglong)bVar4)) : 0));
  lVar2 = ((ulonglong)(((ulonglong)bVar4 < 0x40) ? (((ulonglong)(param_2 & 0x3ff) << (ulonglong)bVar4)) : 0));
  uVar3 = ~(uint)((ulonglong)lVar1 >> 0x20) & *((uint *)GEN_TOP(((int)this + 4))) |
          (uint)((ulonglong)lVar2 >> 0x20);
  *(uint *)this = ~(uint)lVar1 & *(uint *)this | (uint)lVar2;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar3;
  return uVar3;
}

/* ref: FUN_00b7f010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7f010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7f010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar3;
  longlong lVar2;
  
  *((ushort *)GEN_TOP(((int)this + 6))) = *((ushort *)GEN_TOP(((int)this + 6))) & 0xff3f | 0x3c;
  lVar2 = ((ulonglong)(((ulonglong)(byte)((char)param_1 * '\n') < 0x40) ? ((0x3ffL << (ulonglong)(byte)((char)param_1 * '\n'))) : 0));
  uVar1 = (uint)lVar2;
  uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
  *((uint *)GEN_TOP(((int)this + 4))) = ~uVar3 & *((uint *)GEN_TOP(((int)this + 4))) | uVar3;
  *(uint *)this = ~uVar1 & *(uint *)this | uVar1;
  return uVar1;
}

/* ref: Singleton_VOcclusionCullingManager_Culling_Graphics_Client_Graphics::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7f080(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7f080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10f62a0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b7f0b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7f0b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb7f0b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  if (param_3 != 0) {
    uVar2 = param_3 + 0x1fU >> 5;
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))
                              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,uVar2 * 4,4)));
    piVar3 = piVar1;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *piVar3 = -(uint)(param_2 != '\0');
        piVar3 = piVar3 + 1;
      }
    }
    param_1[1] = param_3;
    *param_1 = piVar1;
    return (uint)param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00b7f130 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7f130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7f130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f62a8));
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x7fc0))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x7fc0))));
    *((undefined4 *)GEN_TOP(((int)this + 0x7fc0))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62a0));
  return uVar1;
}

/* ref: Client::Graphics::Culling::OcclusionCullingManager::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7f170(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7f170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10f62a8));
  if (param_1[0x1ff0] != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,param_1[0x1ff0]);
    param_1[0x1ff0] = 0;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10f62a0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b7f230 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b7f230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7f230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 8;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  return 1;
}

/* ref: FUN_00b7f280 */
GEN_OWN GEN_FRAME uint F_00b7f280(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb7f280u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00b7f2e0 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_00b7f2e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb7f2e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  float fVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  uVar2 = *((ushort *)GEN_TOP((param_1 + 0xff0)));
  uVar5 = 0;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      uVar4 = uVar5 & 0xffff;
      uVar3 = uVar4 * 2;
      fVar6 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + uVar4 * 0x10))) - (float10)*param_2))));
      fVar7 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 4 + uVar4 * 0x10))) - (float10)param_2[1]
                              ))));
      fVar8 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 8 + uVar4 * 0x10))) - (float10)param_2[2]
                              ))));
      fVar1 = ((float)GEN_TOF((fVar8 * fVar8 + (fVar7 * fVar7 + fVar6 * fVar6))));
      if ((float10)fVar1 < (float10)*(float *)&REFG(undefined, 0x14c58b0)) {
        uVar3 = F_00b14350(param_3 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((param_1 + 0xf00 + uVar4 * 2))),fVar1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return uVar3;
}

/* ref: FUN_00b7f390 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7f390(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7f390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10f62d0));
  in_ecx[0x18] = (*(undefined * PTR32 (*)[1])REFP(0x10f62c8));
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1b] = 0;
  in_ecx[0x1c] = 0;
  in_ecx[0x1d] = 0;
  in_ecx[0x1e] = 0;
  in_ecx[0x2f] = 0;
  in_ecx[0x30] = 0;
  in_ecx[0x31] = 0;
  *(undefined2 *)(in_ecx + 0x37) = 0;
  in_ecx[0xc] = in_ecx[0xc] & 0xfffffffc;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  in_ecx[0x33] = GEN_FLT_TO(in_ecx[0x33], REFG(float, 0x1087f04));
  in_ecx[0x34] = uVar1;
  in_ecx[0x35] = uVar1;
  in_ecx[0x36] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00b7f420 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b7f420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7f420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (0x7f < *((byte *)GEN_TOP(((int)this + 0xdd)))) {
    return 0;
  }
  *((short *)GEN_TOP(((int)this + (uint)*((byte *)GEN_TOP(((int)this + 0xdd))) * 2 + 0xde))) =
       (short)(param_1 - *((int *)GEN_TOP((REFG(int, 0x1370c1c) + 8))) >> 4);
  *((char *)GEN_TOP(((int)this + 0xdd))) = *((char *)GEN_TOP(((int)this + 0xdd))) + '\x01';
  return 1;
}

/* ref: FUN_00b7f460 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b7f460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7f460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  short * psVar3;
  
  uVar2 = (uint)*((byte *)GEN_TOP(((int)this + 0xdd)));
  if ((uVar2 != 0) && (uVar1 = 0, uVar2 != 0)) {
    psVar3 = ((short *)GEN_TOP(((int)this + 0xde)));
    while (*psVar3 != (short)(param_1 - *((int *)GEN_TOP((REFG(int, 0x1370c1c) + 8))) >> 4)) {
      uVar1 = uVar1 + 1;
      psVar3 = psVar3 + 1;
      if (uVar2 <= uVar1) {
        return 0;
      }
    }
    if (uVar1 != 0xffffffff) {
      if (uVar1 != uVar2 - 1) {
        *((undefined2 *)GEN_TOP(((int)this + uVar1 * 2 + 0xde))) =
             *((undefined2 *)GEN_TOP(((int)this + (uVar2 - 1) * 2 + 0xde)));
      }
      *((char *)GEN_TOP(((int)this + 0xdd))) = *((char *)GEN_TOP(((int)this + 0xdd))) - 1;
    }
  }
  return 0;
}

/* ref: FUN_00b7f4d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7f4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7f4d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ushort uVar1;
  int iVar2;
  float * pfVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  uint local_1c;
  ushort * local_14;
  
  iVar2 = REFG(int, 0x1370c1c);
  local_1c = (uint)*((byte *)GEN_TOP(((int)this + 0xdd)));
  uVar4 = 0;
  if (local_1c != 0) {
    local_14 = ((ushort *)GEN_TOP(((int)this + 0xde)));
    do {
      uVar1 = *local_14;
      pfVar3 = ((float *)GEN_TOP(F_00b81f10(((undefined *)GEN_TOP(((uint)uVar1 * 0x10 + *((int *)GEN_TOP((iVar2 + 8)))))) GEN_EDX_FWD)));
      fVar5 = GEN_X87((float10)((float)GEN_TOF(((float10)*pfVar3 - (float10)*((float *)GEN_TOP(((int)this + 0x50)))))));
      fVar6 = GEN_X87((float10)((float)GEN_TOF(((float10)pfVar3[1] - (float10)*((float *)GEN_TOP(((int)this + 0x54)))))));
      fVar7 = GEN_X87((float10)((float)GEN_TOF(((float10)pfVar3[2] - (float10)*((float *)GEN_TOP(((int)this + 0x58)))))));
      uVar4 = F_00b14350(iVar2 GEN_EDX_ARG,(uint)uVar1,
                           ((float)GEN_TOF((fVar7 * fVar7 + (fVar6 * fVar6 + fVar5 * fVar5)))));
      local_14 = local_14 + 1;
      local_1c = local_1c - 1;
    } while (local_1c != 0);
  }
  return uVar4;
}

/* ref: FUN_00b7f580 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7f580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb7f580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x30, 0);
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x30)));
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1370c1c);
  (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  if ((bVar1 & 2) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
    (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
    (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  }
  bVar1 = F_00b16570(param_2 GEN_EDX_FWD,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    (*(uint *)(gen_frame + 0x1c)) = 0;
    uVar2 = param_1[1] - *param_1 >> 2;
    (*(uint *)(gen_frame + 0x14)) = uVar2;
    if (uVar2 != 0) {
      do {
        F_00b7f2e0(*((undefined4 *)GEN_TOP((*param_1 + (*(uint *)(gen_frame + 0x1c)) * 4))),&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x18)));
        uVar2 = (*(uint *)(gen_frame + 0x1c)) + 1;
        (*(uint *)(gen_frame + 0x1c)) = uVar2;
      } while (uVar2 < (*(uint *)(gen_frame + 0x14)));
    }
    (*(uint *)(gen_frame + 0x1c)) = 0;
    uVar2 = param_1[5] - param_1[4] >> 2;
    (*(uint *)(gen_frame + 0x14)) = uVar2;
    if (uVar2 != 0) {
      do {
        F_00b7f2e0(*((undefined4 *)GEN_TOP((param_1[4] + (*(uint *)(gen_frame + 0x1c)) * 4))),&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x18)));
        uVar2 = (*(uint *)(gen_frame + 0x1c)) + 1;
        (*(uint *)(gen_frame + 0x1c)) = uVar2;
      } while (uVar2 < (*(uint *)(gen_frame + 0x14)));
    }
    (*(uint *)(gen_frame + 0x1c)) = 0;
    uVar3 = param_1[9] - param_1[8] >> 2;
    (*(uint *)(gen_frame + 0x14)) = uVar3;
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        F_00b7f2e0(*((undefined4 *)GEN_TOP((param_1[8] + (*(uint *)(gen_frame + 0x1c)) * 4))),&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x18)));
        uVar2 = (*(uint *)(gen_frame + 0x1c)) + 1;
        (*(uint *)(gen_frame + 0x1c)) = uVar2;
      } while (uVar2 < (*(uint *)(gen_frame + 0x14)));
    }
  }
  return uVar2;
}

/* ref: FUN_00b7f6c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7f6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7f6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b7f580(this GEN_EDX_FWD,*param_1,param_1[1]);
  return uVar1;
}

/* ref: FUN_00b7f6e0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b7f6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7f6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  
  bVar4 = F_00b7fc40(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((REFG(int, 0x1370b90) + 0x24))));
  if (bVar4 == 0) {
    return 0;
  }
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x6c)));
  uVar3 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  if (*((uint *)GEN_TOP(((int)this + 0x68))) <= uVar3) {
    *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
    return 0;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 100))) + uVar3 * 0x14;
  *((int *)GEN_TOP(((int)this + 200))) = iVar2;
  return iVar2 != 0;
}

/* ref: FUN_00b7f740 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7f740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7f740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b7fda0(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00b7f750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7f750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7f750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x11008, 8, 4);
  int * piVar1;
  int * piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  pvVar5 = REFG(void * PTR32, 0x1370c1c);
  (*(uint *)(gen_frame + 0x11000)) = 0xb7f75d;
  uVar6 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  (*(uint *)(gen_frame + 0x11000)) = uVar6;
  if ((*((byte *)GEN_TOP(((int)this + 0x30))) & 1) != 0) {
    uVar7 = F_00b136e0(REFG(void * PTR32, 0x1370c1c) GEN_EDX_FWD,((int *)(gen_frame + 0x10000)));
    uVar6 = 0;
    if (uVar7 != 0) {
      if ((*((byte *)GEN_TOP(((int)this + 0x30))) & 2) == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
        *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
        uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
      }
      else {
        *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
        *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
        uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
      }
      *((undefined4 *)GEN_TOP(((int)this + 0x58))) = uVar3;
      iVar4 = *((int *)GEN_TOP(((int)this + 200)));
      uVar6 = 0;
      if (uVar7 != 0) {
        do {
          if (7 < *((uint *)GEN_TOP((iVar4 + 8)))) {
            if (*((uint * PTR32 *)GEN_TOP((iVar4 + 0x10))) != ((uint *)GEN_TOP(0x0))) {
              **((uint * PTR32 *)GEN_TOP((iVar4 + 0x10))) = *((uint *)GEN_TOP((iVar4 + 8)));
            }
            uVar8 = F_00b7ffe0(*((undefined * PTR32 *)GEN_TOP((iVar4 + 0xc))) GEN_EDX_ARG);
            *((uint *)GEN_TOP((iVar4 + 0x10))) = uVar8;
            *((uint *)GEN_TOP((iVar4 + 4))) = uVar8 + 0x10;
            *((undefined4 *)GEN_TOP((iVar4 + 8))) = 0;
          }
          piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 4))) + *((int *)GEN_TOP((iVar4 + 8))) * 8)));
          *((int *)GEN_TOP((iVar4 + 8))) = *((int *)GEN_TOP((iVar4 + 8))) + 1;
          *piVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar5 + 0x3930))) + 4))) + ((int *)(gen_frame + 0x10000))[(int)(uVar6)] * 0x48;
          piVar2 = ((int *)(gen_frame + 0x10000)) + uVar6;
          uVar6 = uVar6 + 1;
          piVar1[1] = *piVar2 * 0x20 + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar5 + 0x3930))) + 0xc)));
        } while (uVar6 < uVar7);
      }
      F_00b7fe50((int)this + 0x60 GEN_EDX_ARG,this,((code *)REFP(0xb7f6c0)),1);
      uVar6 = F_00b7f4d0(this GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)this + 0x30))) = *((uint *)GEN_TOP(((int)this + 0x30))) & 0xfffffffd;
    }
  }
  return uVar6;
}

/* ref: FUN_00b7f880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7f880(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7f880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 4))) + param_2 * 0x48;
}

/* ref: FUN_00b7f8a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7f8a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7f8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x20 + *((int *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: FUN_00b7f8b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7f8b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7f8b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x20 + *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x3930))) + 0xc)));
}

/* ref: FUN_00b7f8d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7f8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7f8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3930))) + 4))) + param_1 * 0x48;
}

/* ref: FUN_00b7f920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7f920(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xb7f920u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *((float *)GEN_TOP((in_ecx + 0xcc + param_2 * 4))) = (float)((float10)param_3 * (float10)param_3);
  return param_2;
}

/* ref: FUN_00b7f940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7f940(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xb7f940u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *((float *)GEN_TOP((in_ecx + 0xd4 + param_2 * 4))) = (float)((float10)param_3 * (float10)param_3);
  return param_2;
}

/* ref: Singleton_VStreamingManager_Streaming_Graphics_Client_Graphics::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7f980(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7f980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10f62b8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b7f9e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b7f9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7f9e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  pcVar3 = *((gen_code32 *)GEN_TOP(((int)this + 0x18)));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x5c)));
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x60)));
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 2;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    puVar1 = ((uint *)GEN_TOP(((int)this + 0x60)));
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  uVar7 = *((int *)GEN_TOP(((int)this + 0x5c))) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x50;
  uVar5 = *((uint *)GEN_TOP((iVar4 + iVar8)));
  puVar1 = ((uint *)GEN_TOP(((int)this + 100)));
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 8);
    puVar1 = ((uint *)GEN_TOP(((int)this + 100)));
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  return 0;
}

/* ref: FUN_00b7fab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7fab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb7fab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xb7f280));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00b7fad0 */
GEN_OWN GEN_FRAME uint F_00b7fad0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7fad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Streaming::StreamingManager::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7faf0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7faf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x18] =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62c8));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10f62b8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b7fb20 */
GEN_OWN GEN_FRAME uint F_00b7fb20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7fb20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b7fb40 */
GEN_OWN GEN_FRAME uint F_00b7fb40(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7fb40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b7fb60 */
GEN_OWN GEN_FRAME uint F_00b7fb60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7fb60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b7fb80 */
GEN_OWN GEN_FRAME uint F_00b7fb80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7fb80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b7fbe0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b7fbe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb7fbe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b7f9e0(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00b7fbf0 */
GEN_OWN GEN_FRAME uint F_00b7fbf0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb7fbf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: JobSystem_VStreamingManager_Streaming_Graphics_Client_UStreamingJob::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7fc10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7fc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10f62c8));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b7fc40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b7fc40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7fc40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  code * pcVar1;
  int * PTR32 * ppiVar2;
  uint * puVar3;
  uint * puVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  
  (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x2));
  ppiVar2 = &(*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) < 3) {
    ppiVar2 = &(*(int * PTR32 *)(gen_frame + 0x14));
  }
  piVar9 = *ppiVar2;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar9;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[0]) = piVar9;
  if (piVar9 == ((int *)GEN_TOP(0x0))) {
    puVar3 = ((uint *)GEN_TOP(F_00406a50(4)));
  }
  else {
    piVar8 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar8;
    (*(int *)(gen_frame + 0x10)) = *piVar8;
    uVar6 = -(uint)((int)(ZEXT48(piVar9) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar9) * 0x14);
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar8 + 8)));
    puVar3 = ((uint *)GEN_TOP((*pcVar1)(piVar8,-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0x10)));
    piVar9 = (*(int * PTR32 *)&gen_args[0]);
  }
  if (puVar3 == ((uint *)GEN_TOP(0x0))) {
    puVar4 = ((uint *)GEN_TOP(0x0));
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = (uint)piVar9;
    puVar3 = puVar4;
    piVar8 = piVar9;
    while (piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1))), -1 < (int)piVar8) {
      *puVar3 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10f62c0));
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3 = puVar3 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
  if (piVar9 != ((int *)GEN_TOP(0x0))) {
    iVar7 = 0;
    piVar8 = piVar9;
    do {
      iVar5 = *((int *)GEN_TOP(((int)this + 4))) + iVar7;
      iVar7 = iVar7 + 0x14;
      piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1)));
      *((undefined4 *)GEN_TOP((iVar5 + 4))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 8))) = 8;
      *((undefined * PTR32 *)GEN_TOP((iVar5 + 0xc))) = this;
      *((undefined4 *)GEN_TOP((iVar5 + 0x10))) = 0;
    } while (piVar8 != ((int *)GEN_TOP(0x0)));
  }
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x78,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar6 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)GEN_TOP(0x0));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0xb7f280));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0xb7fbe0));
    uVar6 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x0)),0,(int)piVar9 - 1);
  }
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar6;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return 1;
}

/* ref: FUN_00b7fda0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7fda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7fda0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  piVar5 = ((int *)GEN_TOP(((int)this + 0x1c)));
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *((int *)GEN_TOP(((int)this + 4)));
      *((undefined4 *)GEN_TOP((uVar3 + 0x10 + iVar2))) = 0;
      *((undefined4 *)GEN_TOP((uVar3 + 0xc + iVar2))) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,3);
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: FUN_00b7fe50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b7fe50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb7fe50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *((int *)GEN_TOP(((int)param_1 + 8)));
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 0x10 + iVar2)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = param_3;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 100))) = 0;
  if (*((int *)GEN_TOP(((int)param_1 + 0x5c))) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))));
    F_00b7f9e0(param_1 GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_ARG);
  }
  iVar4 = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 - 1) {
    iVar2 = *((int *)GEN_TOP(((int)param_1 + 4)));
    *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar4))) = 8;
    *((undefined4 *)GEN_TOP((iVar2 + 0x10 + iVar4))) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if (param_4 != '\0') {
    piVar5 = ((int *)GEN_TOP(((int)param_1 + 0x1c)));
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = 0;
  }
  return 0;
}

/* ref: JobQueue_JobSystem_VStreamingManager_Streaming_Graphics_Client::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7ff20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb7ff20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_2 & 2) != 0) {
    iVar2 = param_1[-1];
    puVar1 = param_1 - 1;
    puVar3 = param_1 + iVar2 * 5;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      puVar3 = puVar3 - 5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10f62c0));
    }
    if (((param_2 & 1) != 0) && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,puVar1);
    }
    return (uint)puVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10f62c0));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b7ff90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b7ff90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb7ff90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0xa00,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  uVar4 = _InterlockedExchange((volatile long *)(puVar2), (long)(uVar5));
  return uVar4;
}

/* ref: FUN_00b7ffe0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b7ffe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7ffe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x5c)));
  uVar3 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  uVar6 = uVar3 >> 5;
  if (*((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = ((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
      do {
        iVar4 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0xa00,0x10);
    _InterlockedExchange((volatile long *)((((uint *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))))), (long)(uVar5));
  }
  return (uVar3 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
}

/* ref: FUN_00b80050 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b80050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb80050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  if (7 < *((uint *)GEN_TOP(((int)this + 8)))) {
    if (*((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((uint *)GEN_TOP(0x0))) {
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = *((uint *)GEN_TOP(((int)this + 8)));
    }
    uVar2 = F_00b7ffe0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2 + 0x10;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP(((int)this + 8))) = iVar1 + 1;
  return *((int *)GEN_TOP(((int)this + 4))) + iVar1 * 8;
}

/* ref: FUN_00b800a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b800a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb800a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x13c))) = param_2;
  return param_2;
}

/* ref: FUN_00b800e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b800e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb800e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10f6310));
  in_ecx[1] = (*(undefined * PTR32 (*)[1])REFP(0x10f62f8));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1b] = (*(undefined * PTR32 (*)[1])REFP(0x10f6300));
  in_ecx[0x1c] = 0;
  in_ecx[0x1d] = 0;
  in_ecx[0x1e] = 0;
  in_ecx[0x1f] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x32] = 0;
  in_ecx[0x33] = 0;
  in_ecx[0x34] = 0;
  in_ecx[0x35] = (*(undefined * PTR32 (*)[1])REFP(0x10f6308));
  in_ecx[0x36] = 0;
  in_ecx[0x37] = 0;
  in_ecx[0x38] = 0;
  in_ecx[0x39] = 0;
  in_ecx[0x3a] = 0;
  in_ecx[0x3b] = 0;
  in_ecx[0x4c] = 0;
  in_ecx[0x4d] = 0;
  in_ecx[0x4e] = 0;
  *(undefined2 *)(in_ecx + 0x4f) = 1;
  return (uint)in_ecx;
}

/* ref: FUN_00b80190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b80190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb80190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(*param_1));
  iVar2 = piVar1[10];
  uVar3 = F_00a065a0();
  if (((char)uVar3 == '\0') || (*((char *)GEN_TOP((iVar2 + 0xa8))) < '\x01')) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_00b801c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b801c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb801c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined * this_00;
  int iVar1;
  uint uVar2;
  
  this_00 = ((undefined *)GEN_TOP(*param_1));
  iVar1 = *((int *)GEN_TOP(((int)this_00 + 0x98)));
  uVar2 = F_00a065a0();
  if (((char)uVar2 == '\0') || (*((char *)GEN_TOP((iVar1 + 0xa8))) < '\x01')) {
    uVar2 = F_00b83820(this_00 GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_00b801f0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b801f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb801f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x10)));
  uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  if (uVar2 < *((uint *)GEN_TOP(((int)this + 0xc)))) {
    iVar4 = *((int *)GEN_TOP(((int)this + 8))) + uVar2 * 0x14;
  }
  else {
    iVar4 = 0;
  }
  iVar3 = *((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4)));
  *((int *)GEN_TOP((iVar3 + 0x1c8))) = iVar4;
  if (iVar4 != 0) {
    puVar1 = ((uint *)GEN_TOP(((int)this + 0x78)));
    uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
    if (uVar2 < *((uint *)GEN_TOP(((int)this + 0x74)))) {
      iVar4 = *((int *)GEN_TOP(((int)this + 0x70))) + uVar2 * 0x14;
    }
    else {
      iVar4 = 0;
    }
    *((int *)GEN_TOP((iVar3 + 0x1cc))) = iVar4;
    if (iVar4 != 0) {
      puVar1 = ((uint *)GEN_TOP(((int)this + 0xe0)));
      uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
      if (*((uint *)GEN_TOP(((int)this + 0xdc))) <= uVar2) {
        *((undefined4 *)GEN_TOP((iVar3 + 0x1d0))) = 0;
        return 0;
      }
      iVar4 = *((int *)GEN_TOP(((int)this + 0xd8))) + uVar2 * 0x14;
      *((int *)GEN_TOP((iVar3 + 0x1d0))) = iVar4;
      return iVar4 != 0;
    }
  }
  return 0;
}

/* ref: FUN_00b802a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b802a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb802a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined * this_00;
  int iVar1;
  uint uVar2;
  
  this_00 = ((undefined *)GEN_TOP(*param_1));
  if (*((char *)GEN_TOP(((int)this + 0x13d))) == '\0') {
    *((float *)GEN_TOP(((int)this_00 + 0x60))) = GEN_FLT_TO(*((float *)GEN_TOP(((int)this_00 + 0x60))), REFG(float, 0x1104960));
    F_00a05fd0(this_00 GEN_EDX_FWD,REFG(float, 0x1104960));
  }
  iVar1 = *((int *)GEN_TOP(((int)this_00 + 0x14)));
  uVar2 = F_00a065a0();
  if (((char)uVar2 == '\0') || (*((char *)GEN_TOP((iVar1 + 0xa8))) < '\x01')) {
    if (*((char *)GEN_TOP(((int)this_00 + 0xc5))) != '\0') {
      uVar2 = F_00bbc320(this_00 GEN_EDX_ARG,param_1[1]);
      return uVar2;
    }
    uVar2 = F_00bbcb10(this_00 GEN_EDX_ARG,param_1[1]);
  }
  return uVar2;
}

/* ref: FUN_00b80320 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b80320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb80320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00b80fd0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((REFG(int, 0x1370b90) + 0x24))));
  if (bVar1 != 0) {
    bVar1 = F_00b81340(((undefined *)GEN_TOP(((int)this + 0x6c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((REFG(int, 0x1370b90) + 0x24))));
    if (bVar1 != 0) {
      bVar1 = F_00b816b0(((undefined *)GEN_TOP(((int)this + 0xd4))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((REFG(int, 0x1370b90) + 0x24))));
      if (bVar1 != 0) {
        bVar1 = F_00b801f0(this GEN_EDX_ARG);
        return bVar1 != 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b80380 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b80380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb80380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00b81130(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  F_00b814a0(((undefined *)GEN_TOP(((int)this + 0x6c))) GEN_EDX_ARG);
  uVar1 = F_00b81810(((undefined *)GEN_TOP(((int)this + 0xd4))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00b803a0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b803a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb803a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x13c))) == '\0') {
    F_00b812b0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    F_00b81620(((undefined *)GEN_TOP(((int)this + 0x6c))) GEN_EDX_ARG);
    F_00b81990(((undefined *)GEN_TOP(((int)this + 0xd4))) GEN_EDX_ARG);
    *((byte *)GEN_TOP(((int)this + 0x13d))) = *((byte *)GEN_TOP(((int)this + 0x13c)));
    return *((byte *)GEN_TOP(((int)this + 0x13c)));
  }
  F_00b811e0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,this,((code *)REFP(0xb80190)),1);
  F_00b81550((int)this + 0x6c GEN_EDX_ARG,this,((code *)REFP(0xb802a0)),1);
  bVar1 = F_00b818c0((int)this + 0xd4 GEN_EDX_ARG,this,((code *)REFP(0xb801c0)),1);
  *((undefined1 *)GEN_TOP(((int)this + 0x13d))) = *((undefined1 *)GEN_TOP(((int)this + 0x13c)));
  return bVar1;
}

/* ref: FUN_00b80420 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b80420(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb80420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1c8)));
  if (7 < *((uint *)GEN_TOP((iVar1 + 8)))) {
    if (*((uint * PTR32 *)GEN_TOP((iVar1 + 0x10))) != ((uint *)GEN_TOP(0x0))) {
      **((uint * PTR32 *)GEN_TOP((iVar1 + 0x10))) = *((uint *)GEN_TOP((iVar1 + 8)));
    }
    uVar3 = F_00b81c60(*((undefined * PTR32 *)GEN_TOP((iVar1 + 0xc))) GEN_EDX_ARG);
    *((uint *)GEN_TOP((iVar1 + 0x10))) = uVar3;
    *((uint *)GEN_TOP((iVar1 + 4))) = uVar3 + 0x10;
    *((undefined4 *)GEN_TOP((iVar1 + 8))) = 0;
  }
  iVar2 = *((int *)GEN_TOP((iVar1 + 8)));
  uVar3 = iVar2 + 1;
  *((uint *)GEN_TOP((iVar1 + 8))) = uVar3;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 4))) + iVar2 * 4))) = param_1;
  return uVar3;
}

/* ref: FUN_00b80480 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b80480(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb80480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1cc)));
  if (7 < *((uint *)GEN_TOP((iVar2 + 8)))) {
    if (*((uint * PTR32 *)GEN_TOP((iVar2 + 0x10))) != ((uint *)GEN_TOP(0x0))) {
      **((uint * PTR32 *)GEN_TOP((iVar2 + 0x10))) = *((uint *)GEN_TOP((iVar2 + 8)));
    }
    uVar3 = F_00b81cd0(*((undefined * PTR32 *)GEN_TOP((iVar2 + 0xc))) GEN_EDX_ARG);
    *((uint *)GEN_TOP((iVar2 + 0x10))) = uVar3;
    *((uint *)GEN_TOP((iVar2 + 4))) = uVar3 + 0x10;
    *((undefined4 *)GEN_TOP((iVar2 + 8))) = 0;
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 4))) + *((int *)GEN_TOP((iVar2 + 8))) * 8)));
  *((int *)GEN_TOP((iVar2 + 8))) = *((int *)GEN_TOP((iVar2 + 8))) + 1;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return param_2;
}

/* ref: FUN_00b804e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b804e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb804e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1d0)));
  if (7 < *((uint *)GEN_TOP((iVar1 + 8)))) {
    if (*((uint * PTR32 *)GEN_TOP((iVar1 + 0x10))) != ((uint *)GEN_TOP(0x0))) {
      **((uint * PTR32 *)GEN_TOP((iVar1 + 0x10))) = *((uint *)GEN_TOP((iVar1 + 8)));
    }
    uVar3 = F_00b81d40(*((undefined * PTR32 *)GEN_TOP((iVar1 + 0xc))) GEN_EDX_ARG);
    *((uint *)GEN_TOP((iVar1 + 0x10))) = uVar3;
    *((uint *)GEN_TOP((iVar1 + 4))) = uVar3 + 0x10;
    *((undefined4 *)GEN_TOP((iVar1 + 8))) = 0;
  }
  iVar2 = *((int *)GEN_TOP((iVar1 + 8)));
  uVar3 = iVar2 + 1;
  *((uint *)GEN_TOP((iVar1 + 8))) = uVar3;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 4))) + iVar2 * 4))) = param_1;
  return uVar3;
}

/* ref: FUN_00b80630 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b80630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb80630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 8;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  return 1;
}

/* ref: FUN_00b806a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b806a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb806a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 8;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  return 1;
}

/* ref: FUN_00b80710 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b80710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb80710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 8;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  return 1;
}

/* ref: FUN_00b80760 */
GEN_OWN GEN_FRAME uint F_00b80760(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb80760u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00b80780 */
GEN_OWN GEN_FRAME uint F_00b80780(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb80780u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00b807a0 */
GEN_OWN GEN_FRAME uint F_00b807a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb807a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_1,param_3,param_4);
  return uVar1;
}

/* ref: Singleton_VBonePhysicsUpdater_Physics_Graphics_Client_Graphics::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b80850(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb80850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10f62d8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b808e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b808e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb808e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  pcVar3 = *((gen_code32 *)GEN_TOP(((int)this + 0x18)));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x5c)));
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x60)));
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x30 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 1;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    puVar1 = ((uint *)GEN_TOP(((int)this + 0x60)));
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  uVar7 = *((int *)GEN_TOP(((int)this + 0x5c))) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x30;
  uVar5 = *((uint *)GEN_TOP((iVar4 + iVar8)));
  puVar1 = ((uint *)GEN_TOP(((int)this + 100)));
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 4);
    puVar1 = ((uint *)GEN_TOP(((int)this + 100)));
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  return 0;
}

/* ref: FUN_00b809b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b809b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb809b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xb80760));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00b809d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b809d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb809d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  pcVar3 = *((gen_code32 *)GEN_TOP(((int)this + 0x18)));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x5c)));
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x60)));
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 2;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    puVar1 = ((uint *)GEN_TOP(((int)this + 0x60)));
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  uVar7 = *((int *)GEN_TOP(((int)this + 0x5c))) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x50;
  uVar5 = *((uint *)GEN_TOP((iVar4 + iVar8)));
  puVar1 = ((uint *)GEN_TOP(((int)this + 100)));
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 8);
    puVar1 = ((uint *)GEN_TOP(((int)this + 100)));
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  return 0;
}

/* ref: FUN_00b80aa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b80aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb80aa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xb80780));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00b80ac0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b80ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb80ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  pcVar3 = *((gen_code32 *)GEN_TOP(((int)this + 0x18)));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x5c)));
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x60)));
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x30 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 1;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    puVar1 = ((uint *)GEN_TOP(((int)this + 0x60)));
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  uVar7 = *((int *)GEN_TOP(((int)this + 0x5c))) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x30;
  uVar5 = *((uint *)GEN_TOP((iVar4 + iVar8)));
  puVar1 = ((uint *)GEN_TOP(((int)this + 100)));
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 4);
    puVar1 = ((uint *)GEN_TOP(((int)this + 100)));
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  return 0;
}

/* ref: FUN_00b80b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b80b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb80b90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xb807a0));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: Client::Graphics::Physics::BonePhysicsUpdater::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b80bd0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb80bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x35] =
       (*(undefined * PTR32 (*)[1])REFP(0x10f6308));
  param_1[0x1b] =
       (*(undefined * PTR32 (*)[1])REFP(0x10f6300));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10f62f8));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10f62d8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b80c10 */
GEN_OWN GEN_FRAME uint F_00b80c10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb80c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80c30 */
GEN_OWN GEN_FRAME uint F_00b80c30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb80c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80c50 */
GEN_OWN GEN_FRAME uint F_00b80c50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb80c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80c70 */
GEN_OWN GEN_FRAME uint F_00b80c70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb80c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80c90 */
GEN_OWN GEN_FRAME uint F_00b80c90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb80c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80cb0 */
GEN_OWN GEN_FRAME uint F_00b80cb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb80cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80cd0 */
GEN_OWN GEN_FRAME uint F_00b80cd0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb80cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b80cf0 */
GEN_OWN GEN_FRAME uint F_00b80cf0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb80cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80d10 */
GEN_OWN GEN_FRAME uint F_00b80d10(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb80d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b80d30 */
GEN_OWN GEN_FRAME uint F_00b80d30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb80d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80d50 */
GEN_OWN GEN_FRAME uint F_00b80d50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb80d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b80d70 */
GEN_OWN GEN_FRAME uint F_00b80d70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb80d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80d90 */
GEN_OWN GEN_FRAME uint F_00b80d90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb80d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80db0 */
GEN_OWN GEN_FRAME uint F_00b80db0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb80db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80dd0 */
GEN_OWN GEN_FRAME uint F_00b80dd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb80dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80e30 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b80e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb80e30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b808e0(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00b80e80 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b80e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb80e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b809d0(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00b80ed0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b80ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb80ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b80ac0(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00b80ee0 */
GEN_OWN GEN_FRAME uint F_00b80ee0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb80ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b80f00 */
GEN_OWN GEN_FRAME uint F_00b80f00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb80f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b80f20 */
GEN_OWN GEN_FRAME uint F_00b80f20(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb80f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: JobSystem_VBonePhysicsUpdater_Physics_Graphics_Client_UCollisionObjectJob::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b80f40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb80f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10f62f8));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: JobSystem_VBonePhysicsUpdater_Physics_Graphics_Client_UBoneSimulatorJob::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b80f70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb80f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10f6300));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: JobSystem_VBonePhysicsUpdater_Physics_Graphics_Client_UTransformUpdaterJob::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b80fa0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb80fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10f6308));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b80fd0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b80fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb80fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  code * pcVar1;
  int * PTR32 * ppiVar2;
  uint * puVar3;
  uint * puVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  
  (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x2));
  ppiVar2 = &(*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) < 3) {
    ppiVar2 = &(*(int * PTR32 *)(gen_frame + 0x14));
  }
  piVar9 = *ppiVar2;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar9;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[0]) = piVar9;
  if (piVar9 == ((int *)GEN_TOP(0x0))) {
    puVar3 = ((uint *)GEN_TOP(F_00406a50(4)));
  }
  else {
    piVar8 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar8;
    (*(int *)(gen_frame + 0x10)) = *piVar8;
    uVar6 = -(uint)((int)(ZEXT48(piVar9) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar9) * 0x14);
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar8 + 8)));
    puVar3 = ((uint *)GEN_TOP((*pcVar1)(piVar8,-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0x10)));
    piVar9 = (*(int * PTR32 *)&gen_args[0]);
  }
  if (puVar3 == ((uint *)GEN_TOP(0x0))) {
    puVar4 = ((uint *)GEN_TOP(0x0));
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = (uint)piVar9;
    puVar3 = puVar4;
    piVar8 = piVar9;
    while (piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1))), -1 < (int)piVar8) {
      *puVar3 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10f62e0));
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3 = puVar3 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
  if (piVar9 != ((int *)GEN_TOP(0x0))) {
    iVar7 = 0;
    piVar8 = piVar9;
    do {
      iVar5 = *((int *)GEN_TOP(((int)this + 4))) + iVar7;
      iVar7 = iVar7 + 0x14;
      piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1)));
      *((undefined4 *)GEN_TOP((iVar5 + 4))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 8))) = 8;
      *((undefined * PTR32 *)GEN_TOP((iVar5 + 0xc))) = this;
      *((undefined4 *)GEN_TOP((iVar5 + 0x10))) = 0;
    } while (piVar8 != ((int *)GEN_TOP(0x0)));
  }
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x78,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar6 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)GEN_TOP(0x0));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0xb80760));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0xb80e30));
    uVar6 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x0)),0,(int)piVar9 - 1);
  }
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar6;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return 1;
}

/* ref: FUN_00b81130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b81130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  piVar5 = ((int *)GEN_TOP(((int)this + 0x1c)));
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *((int *)GEN_TOP(((int)this + 4)));
      *((undefined4 *)GEN_TOP((uVar3 + 0x10 + iVar2))) = 0;
      *((undefined4 *)GEN_TOP((uVar3 + 0xc + iVar2))) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,3);
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: FUN_00b811e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b811e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb811e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *((int *)GEN_TOP(((int)param_1 + 8)));
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 0x10 + iVar2)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = param_3;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 100))) = 0;
  if (*((int *)GEN_TOP(((int)param_1 + 0x5c))) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))));
    F_00b808e0(param_1 GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_ARG);
  }
  iVar4 = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 - 1) {
    iVar2 = *((int *)GEN_TOP(((int)param_1 + 4)));
    *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar4))) = 8;
    *((undefined4 *)GEN_TOP((iVar2 + 0x10 + iVar4))) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if (param_4 != '\0') {
    piVar5 = ((int *)GEN_TOP(((int)param_1 + 0x1c)));
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = 0;
  }
  return 0;
}

/* ref: FUN_00b812b0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b812b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb812b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x10 + iVar2)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    if (iVar3 != 0) {
      iVar4 = 0;
      do {
        iVar2 = *((int *)GEN_TOP(((int)this + 4)));
        *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar4))) = 8;
        *((undefined4 *)GEN_TOP((iVar2 + 0x10 + iVar4))) = 0;
        iVar4 = iVar4 + 0x14;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
    }
  }
  piVar5 = ((int *)GEN_TOP(((int)this + 0x1c)));
  iVar3 = 0x10;
  do {
    if (*piVar5 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  return 0;
}

/* ref: FUN_00b81340 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b81340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb81340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  code * pcVar1;
  int * PTR32 * ppiVar2;
  uint * puVar3;
  uint * puVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  
  (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x2));
  ppiVar2 = &(*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) < 3) {
    ppiVar2 = &(*(int * PTR32 *)(gen_frame + 0x14));
  }
  piVar9 = *ppiVar2;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar9;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[0]) = piVar9;
  if (piVar9 == ((int *)GEN_TOP(0x0))) {
    puVar3 = ((uint *)GEN_TOP(F_00406a50(4)));
  }
  else {
    piVar8 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar8;
    (*(int *)(gen_frame + 0x10)) = *piVar8;
    uVar6 = -(uint)((int)(ZEXT48(piVar9) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar9) * 0x14);
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar8 + 8)));
    puVar3 = ((uint *)GEN_TOP((*pcVar1)(piVar8,-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0x10)));
    piVar9 = (*(int * PTR32 *)&gen_args[0]);
  }
  if (puVar3 == ((uint *)GEN_TOP(0x0))) {
    puVar4 = ((uint *)GEN_TOP(0x0));
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = (uint)piVar9;
    puVar3 = puVar4;
    piVar8 = piVar9;
    while (piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1))), -1 < (int)piVar8) {
      *puVar3 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10f62e8));
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3 = puVar3 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
  if (piVar9 != ((int *)GEN_TOP(0x0))) {
    iVar7 = 0;
    piVar8 = piVar9;
    do {
      iVar5 = *((int *)GEN_TOP(((int)this + 4))) + iVar7;
      iVar7 = iVar7 + 0x14;
      piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1)));
      *((undefined4 *)GEN_TOP((iVar5 + 4))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 8))) = 8;
      *((undefined * PTR32 *)GEN_TOP((iVar5 + 0xc))) = this;
      *((undefined4 *)GEN_TOP((iVar5 + 0x10))) = 0;
    } while (piVar8 != ((int *)GEN_TOP(0x0)));
  }
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x78,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar6 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)GEN_TOP(0x0));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0xb80780));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0xb80e80));
    uVar6 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x0)),0,(int)piVar9 - 1);
  }
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar6;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return 1;
}

/* ref: FUN_00b814a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b814a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb814a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  piVar5 = ((int *)GEN_TOP(((int)this + 0x1c)));
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *((int *)GEN_TOP(((int)this + 4)));
      *((undefined4 *)GEN_TOP((uVar3 + 0x10 + iVar2))) = 0;
      *((undefined4 *)GEN_TOP((uVar3 + 0xc + iVar2))) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,3);
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: FUN_00b81550 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b81550(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb81550u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *((int *)GEN_TOP(((int)param_1 + 8)));
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 0x10 + iVar2)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = param_3;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 100))) = 0;
  if (*((int *)GEN_TOP(((int)param_1 + 0x5c))) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))));
    F_00b809d0(param_1 GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_ARG);
  }
  iVar4 = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 - 1) {
    iVar2 = *((int *)GEN_TOP(((int)param_1 + 4)));
    *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar4))) = 8;
    *((undefined4 *)GEN_TOP((iVar2 + 0x10 + iVar4))) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if (param_4 != '\0') {
    piVar5 = ((int *)GEN_TOP(((int)param_1 + 0x1c)));
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = 0;
  }
  return 0;
}

/* ref: FUN_00b81620 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b81620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x10 + iVar2)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    if (iVar3 != 0) {
      iVar4 = 0;
      do {
        iVar2 = *((int *)GEN_TOP(((int)this + 4)));
        *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar4))) = 8;
        *((undefined4 *)GEN_TOP((iVar2 + 0x10 + iVar4))) = 0;
        iVar4 = iVar4 + 0x14;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
    }
  }
  piVar5 = ((int *)GEN_TOP(((int)this + 0x1c)));
  iVar3 = 0x10;
  do {
    if (*piVar5 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  return 0;
}

/* ref: FUN_00b816b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b816b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb816b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  code * pcVar1;
  int * PTR32 * ppiVar2;
  uint * puVar3;
  uint * puVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  
  (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x2));
  ppiVar2 = &(*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) < 3) {
    ppiVar2 = &(*(int * PTR32 *)(gen_frame + 0x14));
  }
  piVar9 = *ppiVar2;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar9;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[0]) = piVar9;
  if (piVar9 == ((int *)GEN_TOP(0x0))) {
    puVar3 = ((uint *)GEN_TOP(F_00406a50(4)));
  }
  else {
    piVar8 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar8;
    (*(int *)(gen_frame + 0x10)) = *piVar8;
    uVar6 = -(uint)((int)(ZEXT48(piVar9) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar9) * 0x14);
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar8 + 8)));
    puVar3 = ((uint *)GEN_TOP((*pcVar1)(piVar8,-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0x10)));
    piVar9 = (*(int * PTR32 *)&gen_args[0]);
  }
  if (puVar3 == ((uint *)GEN_TOP(0x0))) {
    puVar4 = ((uint *)GEN_TOP(0x0));
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = (uint)piVar9;
    puVar3 = puVar4;
    piVar8 = piVar9;
    while (piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1))), -1 < (int)piVar8) {
      *puVar3 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10f62f0));
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3 = puVar3 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
  if (piVar9 != ((int *)GEN_TOP(0x0))) {
    iVar7 = 0;
    piVar8 = piVar9;
    do {
      iVar5 = *((int *)GEN_TOP(((int)this + 4))) + iVar7;
      iVar7 = iVar7 + 0x14;
      piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1)));
      *((undefined4 *)GEN_TOP((iVar5 + 4))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 8))) = 8;
      *((undefined * PTR32 *)GEN_TOP((iVar5 + 0xc))) = this;
      *((undefined4 *)GEN_TOP((iVar5 + 0x10))) = 0;
    } while (piVar8 != ((int *)GEN_TOP(0x0)));
  }
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x78,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar6 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)GEN_TOP(0x0));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0xb807a0));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0xb80ed0));
    uVar6 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x0)),0,(int)piVar9 - 1);
  }
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar6;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return 1;
}

/* ref: FUN_00b81810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b81810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  piVar5 = ((int *)GEN_TOP(((int)this + 0x1c)));
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *((int *)GEN_TOP(((int)this + 4)));
      *((undefined4 *)GEN_TOP((uVar3 + 0x10 + iVar2))) = 0;
      *((undefined4 *)GEN_TOP((uVar3 + 0xc + iVar2))) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,3);
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: FUN_00b818c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b818c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb818c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined4 * puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  
  iVar5 = *((int *)GEN_TOP(((int)param_1 + 8)));
  if (iVar5 != 0) {
    iVar4 = 0;
    iVar6 = iVar5;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 0x10 + iVar4)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 8 + iVar4)));
      }
      iVar4 = iVar4 + 0x14;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = param_2;
  *((uint *)GEN_TOP(((int)param_1 + 0x18))) = param_3;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 100))) = 0;
  uVar3 = param_3;
  if (*((int *)GEN_TOP(((int)param_1 + 0x5c))) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))));
    F_00b80ac0(param_1 GEN_EDX_ARG);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_ARG);
  }
  iVar6 = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = 0;
  for (; iVar5 != 0; iVar5 = iVar5 - 1) {
    uVar3 = *((uint *)GEN_TOP(((int)param_1 + 4)));
    *((undefined4 *)GEN_TOP((uVar3 + 8 + iVar6))) = 8;
    *((undefined4 *)GEN_TOP((uVar3 + 0x10 + iVar6))) = 0;
    iVar6 = iVar6 + 0x14;
  }
  bVar2 = (byte)uVar3;
  if (param_4 != '\0') {
    piVar7 = ((int *)GEN_TOP(((int)param_1 + 0x1c)));
    iVar5 = 0x10;
    do {
      bVar2 = 0;
      if (*piVar7 != 0) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))
                          (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar7);
        bVar2 = (byte)uVar3;
        *piVar7 = 0;
      }
      piVar7 = piVar7 + 1;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = 0;
  }
  return bVar2;
}

/* ref: FUN_00b81990 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b81990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x10 + iVar2)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    if (iVar3 != 0) {
      iVar4 = 0;
      do {
        iVar2 = *((int *)GEN_TOP(((int)this + 4)));
        *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar4))) = 8;
        *((undefined4 *)GEN_TOP((iVar2 + 0x10 + iVar4))) = 0;
        iVar4 = iVar4 + 0x14;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
    }
  }
  piVar5 = ((int *)GEN_TOP(((int)this + 0x1c)));
  iVar3 = 0x10;
  do {
    if (*piVar5 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  return 0;
}

/* ref: JobQueue_JobSystem_VBonePhysicsUpdater_Physics_Graphics_Client::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b81a20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb81a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_2 & 2) != 0) {
    iVar2 = param_1[-1];
    puVar1 = param_1 - 1;
    puVar3 = param_1 + iVar2 * 5;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      puVar3 = puVar3 - 5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10f62e0));
    }
    if (((param_2 & 1) != 0) && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,puVar1);
    }
    return (uint)puVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10f62e0));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: JobQueue_JobSystem_VBonePhysicsUpdater_Physics_Graphics_Client::vf0_00b81a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b81a90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb81a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_2 & 2) != 0) {
    iVar2 = param_1[-1];
    puVar1 = param_1 - 1;
    puVar3 = param_1 + iVar2 * 5;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      puVar3 = puVar3 - 5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10f62e8));
    }
    if (((param_2 & 1) != 0) && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,puVar1);
    }
    return (uint)puVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10f62e8));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: JobQueue_JobSystem_VBonePhysicsUpdater_Physics_Graphics_Client::vf0_00b81b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b81b00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb81b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_2 & 2) != 0) {
    iVar2 = param_1[-1];
    puVar1 = param_1 - 1;
    puVar3 = param_1 + iVar2 * 5;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      puVar3 = puVar3 - 5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10f62f0));
    }
    if (((param_2 & 1) != 0) && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,puVar1);
    }
    return (uint)puVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10f62f0));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b81b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b81b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb81b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0x600,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  uVar4 = _InterlockedExchange((volatile long *)(puVar2), (long)(uVar5));
  return uVar4;
}

/* ref: FUN_00b81bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b81bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb81bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0xa00,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  uVar4 = _InterlockedExchange((volatile long *)(puVar2), (long)(uVar5));
  return uVar4;
}

/* ref: FUN_00b81c10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b81c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb81c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0x600,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  uVar4 = _InterlockedExchange((volatile long *)(puVar2), (long)(uVar5));
  return uVar4;
}

/* ref: FUN_00b81c60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b81c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x5c)));
  uVar3 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  uVar6 = uVar3 >> 5;
  if (*((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = ((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
      do {
        iVar4 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x30 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0x600,0x10);
    _InterlockedExchange((volatile long *)((((uint *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))))), (long)(uVar5));
  }
  return (uVar3 & 0x1f) * 0x30 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
}

/* ref: FUN_00b81cd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b81cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x5c)));
  uVar3 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  uVar6 = uVar3 >> 5;
  if (*((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = ((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
      do {
        iVar4 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0xa00,0x10);
    _InterlockedExchange((volatile long *)((((uint *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))))), (long)(uVar5));
  }
  return (uVar3 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
}

/* ref: FUN_00b81d40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b81d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x5c)));
  uVar3 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  uVar6 = uVar3 >> 5;
  if (*((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = ((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
      do {
        iVar4 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x30 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0x600,0x10);
    _InterlockedExchange((volatile long *)((((uint *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))))), (long)(uVar5));
  }
  return (uVar3 & 0x1f) * 0x30 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
}

/* ref: FUN_00b81db0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b81db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  if (7 < *((uint *)GEN_TOP(((int)this + 8)))) {
    if (*((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((uint *)GEN_TOP(0x0))) {
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = *((uint *)GEN_TOP(((int)this + 8)));
    }
    uVar2 = F_00b81c60(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2 + 0x10;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP(((int)this + 8))) = iVar1 + 1;
  return *((int *)GEN_TOP(((int)this + 4))) + iVar1 * 4;
}

/* ref: FUN_00b81df0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b81df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  if (7 < *((uint *)GEN_TOP(((int)this + 8)))) {
    if (*((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((uint *)GEN_TOP(0x0))) {
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = *((uint *)GEN_TOP(((int)this + 8)));
    }
    uVar2 = F_00b81cd0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2 + 0x10;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP(((int)this + 8))) = iVar1 + 1;
  return *((int *)GEN_TOP(((int)this + 4))) + iVar1 * 8;
}

/* ref: FUN_00b81e30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b81e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  if (7 < *((uint *)GEN_TOP(((int)this + 8)))) {
    if (*((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((uint *)GEN_TOP(0x0))) {
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = *((uint *)GEN_TOP(((int)this + 8)));
    }
    uVar2 = F_00b81d40(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2 + 0x10;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP(((int)this + 8))) = iVar1 + 1;
  return *((int *)GEN_TOP(((int)this + 4))) + iVar1 * 4;
}

/* ref: FUN_00b81e70 */
GEN_OWN GEN_NOFRAME unsigned int F_00b81e70(void)
{
  GEN_ENTER(0xb81e70u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00b81e80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b81e80(GEN_P(undefined2 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;)
  *(undefined1 *)(in_ecx + 1) = 0;
  *(undefined4 *)(in_ecx + 2) = 0;
  *in_ecx = 0xffff;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 3))) = 0xff;
  *(undefined4 *)(in_ecx + 4) = 0xffffffff;
  *(undefined4 *)(in_ecx + 6) = 0x3ffff;
  return 0xffff;
}

/* ref: FUN_00b81eb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b81eb0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = 0xffffffff;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 0x3ffff;
  return in_ecx;
}

/* ref: FUN_00b81ed0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b81ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb81ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b141b0(REFG(void * PTR32, 0x1370c1c) GEN_EDX_FWD,this,param_1);
  return uVar1;
}

/* ref: FUN_00b81ef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b81ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb81ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b14280(REFG(void * PTR32, 0x1370c1c) GEN_EDX_FWD,this,param_1);
  return uVar1;
}

/* ref: FUN_00b81f10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b81f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return ((uint)*(ushort *)((int)(uintptr_t)this) * 0x100 + 8 + (uint)*((byte *)GEN_TOP(((int)this + 3)))) * 0x10 +
         *((int *)GEN_TOP((REFG(int, 0x1370c1c) + 0x3930)));
}

/* ref: FUN_00b81f30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b81f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb81f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  F_00b81fb0(((undefined *)GEN_TOP(((uint)*(ushort *)((int)(uintptr_t)this) * 0x1000 + 0x80 + *((int *)GEN_TOP((REFG(int, 0x1370c1c) + 0x3930)))))) GEN_EDX_FWD,
               param_1,(uint)*((byte *)GEN_TOP(((int)this + 3))));
  return param_1;
}

/* ref: FUN_00b81f70 */
GEN_OWN GEN_NOFRAME ushort GEN_THISCALL F_00b81f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ushort uVar1;
  
  uVar1 = F_00bcb330(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1370c1c) + 0x3930))) GEN_EDX_FWD,this);
  return uVar1;
}

/* ref: FUN_00b81fb0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b81fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb81fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  uVar3 = (uint)(ushort)param_2;
  iVar4 = uVar3 + 0x78;
  fVar5 = (float10)*((float *)GEN_TOP(((int)this + uVar3 * 0x10)));
  fVar6 = (float10)*((float *)GEN_TOP(((int)this + iVar4 * 0x10)));
  fVar7 = (float10)*((float *)GEN_TOP(((int)this + uVar3 * 0x10 + 4)));
  fVar8 = (float10)*((float *)GEN_TOP(((int)this + iVar4 * 0x10 + 4)));
  fVar1 = *((float *)GEN_TOP(((int)this + uVar3 * 0x10 + 8)));
  fVar2 = *((float *)GEN_TOP(((int)this + iVar4 * 0x10 + 8)));
  *param_1 = (float)(fVar5 - fVar6);
  fVar9 = (float10)fVar1;
  param_1[1] = (float)(fVar7 - fVar8);
  fVar10 = (float10)fVar2;
  param_1[2] = (float)(fVar9 - fVar10);
  param_1[4] = (float)(fVar6 + fVar5);
  param_1[5] = (float)(fVar8 + fVar7);
  param_1[6] = (float)(fVar10 + fVar9);
  return 0;
}

/* ref: FUN_00b82080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b82080(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb82080u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  F_00b81fb0(((undefined *)GEN_TOP((param_3 * 0x1000 + 0x80 + param_1))) GEN_EDX_FWD,param_2,(uint)param_4);
  return param_2;
}

/* ref: FUN_00b820b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b820b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb820b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  F_00b81fb0(((undefined *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x3930))) + 0x80 + param_3 * 0x1000))) GEN_EDX_FWD,param_2,(uint)param_4)
  ;
  return param_2;
}

/* ref: FUN_00b820e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b820e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb820e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0xffffffff;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_00b82100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b82100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb82100u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_4;
  return (uint)this;
}

/* ref: FUN_00b82120 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b82120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb82120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  if (((*(int *)this == *param_1) && (*((int *)GEN_TOP(((int)this + 4))) == param_1[1])) &&
     (*((int *)GEN_TOP(((int)this + 8))) == param_1[2])) {
    return *((int *)GEN_TOP(((int)this + 0xc))) == param_1[3];
  }
  return 0;
}

/* ref: FUN_00b82190 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b82190(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb82190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_009f7cb0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_ARG,&REFG(undefined, 0x14a2434));
  piVar1 = ((int *)GEN_TOP(*param_1));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *param_1 = 0;
  }
  return uVar2;
}

/* ref: FUN_00b821d0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b821d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb821d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  if (iVar2 != 0) {
    iVar1 = 0;
    do {
      F_009f9140(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar1))) GEN_EDX_FWD);
      iVar1 = iVar1 + 0x94;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00b82200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b82200(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb82200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_8;
  
  local_8 = *((int *)GEN_TOP((in_ecx + 4)));
  uVar2 = 0;
  if (local_8 != 0) {
    iVar3 = 0;
    do {
      uVar1 = F_009f1410(*((int *)GEN_TOP((in_ecx + 8))) + iVar3 GEN_EDX_FWD);
      uVar2 = uVar2 + uVar1;
      iVar3 = iVar3 + 0x94;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return uVar2;
}

/* ref: FUN_00b82240 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b82240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb82240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (((*((int *)GEN_TOP(((int)this + 8))) != 0) && (uVar1 != 0)) && (uVar4 = 0, uVar1 != 0)) {
    iVar3 = 0;
    do {
      uVar2 = F_009f0ab0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar3))) GEN_EDX_FWD,param_1);
      if (uVar2 != 0) {
        return uVar2;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x94;
    } while (uVar4 < uVar1);
  }
  return 0;
}

/* ref: FUN_00b82290 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b82290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb82290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *param_1 - 1;
  if ((uVar1 == 0) && (uVar2 = 0, *((int *)GEN_TOP(((int)this + 4))) != 0)) {
    iVar3 = 0;
    do {
      F_009f9490(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar3))) GEN_EDX_FWD);
      F_009f1450(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar3))) GEN_EDX_ARG,param_2);
      uVar1 = F_009f7700(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar3))) GEN_EDX_ARG);
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x94;
    } while (uVar2 < *((uint *)GEN_TOP(((int)this + 4))));
  }
  return uVar1;
}

/* ref: FUN_00b822f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b822f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb822f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *param_1 - 1;
  if ((uVar1 == 0) && (uVar3 = 0, *((int *)GEN_TOP(((int)this + 4))) != 0)) {
    iVar2 = 0;
    do {
      uVar1 = F_009f0a70(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2))) GEN_EDX_FWD);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x94;
    } while (uVar3 < *((uint *)GEN_TOP(((int)this + 4))));
  }
  return uVar1;
}

/* ref: FUN_00b82330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b82330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb82330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = *param_1 - 1;
  if (uVar1 == 0) {
    uVar1 = F_009f1490(((undefined *)GEN_TOP((param_1[2] * 0x94 + *((int *)GEN_TOP(((int)this + 8)))))) GEN_EDX_FWD,param_2);
  }
  return uVar1;
}

/* ref: FUN_00b82360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b82360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb82360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *param_1 - 1;
  if (uVar1 == 0) {
    uVar1 = F_009f0a90(((undefined *)GEN_TOP((param_1[2] * 0x94 + *((int *)GEN_TOP(((int)this + 8)))))) GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: FUN_00b82390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b82390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb82390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    F_009f1420(((undefined *)GEN_TOP((param_2 * 0x94 + *((int *)GEN_TOP(((int)this + 8)))))) GEN_EDX_FWD,param_1,param_3);
    return (uint)param_1;
  }
  *param_1 = REFG(undefined4, 0x1302e54);
  param_1[1] = REFG(undefined4, 0x1302e58);
  param_1[2] = REFG(undefined4, 0x1302e5c);
  param_1[3] = REFG(undefined4, 0x1302e60);
  return (uint)param_1;
}

/* ref: FUN_00b823f0 */
GEN_OWN GEN_FRAME double GEN_THISCALL F_00b823f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb823f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  float fVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    fVar1 = F_009f0a50(((undefined *)GEN_TOP((param_1 * 0x94 + *((int *)GEN_TOP(((int)this + 8)))))) GEN_EDX_FWD,param_2);
    return (double)fVar1;
  }
  return 1.0;
}

/* ref: FUN_00b82420 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b82420(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb82420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00b82430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b82430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb82430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint * puVar1;
  uint uVar2;
  uint * this_00;
  
  *((uint *)GEN_TOP(((int)this + 4))) = param_1;
  uVar2 = -(uint)((int)((ulonglong)param_1 * 0x94 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x94)
  ;
  puVar1 = ((uint *)GEN_TOP(F_00406bb0(-(uint)(0xfffffffb < uVar2) | uVar2 + 4,0,0)));
  if (puVar1 != ((uint *)GEN_TOP(0x0))) {
    *puVar1 = param_1;
    puVar1 = puVar1 + 1;
    this_00 = puVar1;
    uVar2 = param_1;
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      F_009f9010(this_00 GEN_EDX_ARG);
      this_00 = this_00 + 0x25;
    }
    *(uint *)this = *(uint *)this | 2;
    *((uint * PTR32 *)GEN_TOP(((int)this + 8))) = puVar1;
    return (uint)puVar1;
  }
  *(uint *)this = *(uint *)this | 2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_00b824b0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b824b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb824b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,3);
      *(uint *)this = *(uint *)this & 0xfffffffd;
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      return;
    }
    F_00406b30(puVar1 - 1);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffd;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return;
}

/* ref: FUN_00b82500 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b82500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb82500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    F_0061eec0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,5);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffe;
  return;
}

/* ref: FUN_00b82530 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b82530(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb82530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  return *in_ecx >> 1 & 1;
}

/* ref: FUN_00b82540 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b82540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb82540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 - 1);
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,3);
    }
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffd;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    F_0061eec0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,5);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffe;
  return;
}

/* ref: FUN_00b825a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b825a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb825a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    F_0061eec0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,5);
    *(uint *)this = *(uint *)this | 1;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
    return;
  }
  *(uint *)this = *(uint *)this | 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  return;
}

/* ref: FUN_00b825e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b825e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb825e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                               (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,0x20,0x10)));
    if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_009f92d0(pvVar1 GEN_EDX_ARG);
    }
    *param_1 = uVar2;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137129c) + 0x60)));
  uVar2 = F_00500af0(pvVar1 GEN_EDX_ARG,param_2);
  uVar2 = F_00500ae0(pvVar1 GEN_EDX_ARG,uVar2 & 0xffff);
  uVar2 = *((uint *)GEN_TOP((uVar2 + 8))) >> 4;
  if ((uVar2 & 1) == 0) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_0063a2f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,param_2,param_3,param_1);
      return uVar2;
    }
  }
  else {
    uVar4 = 0;
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      iVar5 = 0;
      do {
        uVar3 = F_009f7970(*((int *)GEN_TOP(((int)this + 8))) + iVar5 GEN_EDX_ARG,param_2,param_3);
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = F_009f7d80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_ARG,uVar3);
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x94;
      } while (uVar4 < *((uint *)GEN_TOP(((int)this + 4))));
    }
  }
  return uVar2;
}

/* ref: FUN_00b826a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b826a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb826a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 - 1);
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,3);
    }
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffd;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    F_0061eec0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,5);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffe;
  return;
}

/* ref: FUN_00b82700 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b82700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb82700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 - 1);
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,3);
    }
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffd;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    F_0061eec0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,5);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffe;
  return;
}

/* ref: Client::Graphics::Animation::MaterialAnimationModule::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b82760(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb82760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  int iVar2;
  int * this;
  
  if ((param_2 & 2) == 0) {
    F_009f9cd0(param_1 GEN_EDX_FWD);
    if ((param_2 & 1) != 0) {
      F_00406ad0(param_1);
    }
  }
  else {
    piVar1 = param_1 - 1;
    iVar2 = *piVar1;
    this = param_1 + iVar2 * 0x25;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      this = this - 0x25;
      F_009f9cd0(this GEN_EDX_ARG);
    }
    param_1 = piVar1;
    if ((param_2 & 1) != 0) {
      F_00406b30(piVar1);
      return (uint)piVar1;
    }
  }
  return (uint)param_1;
}

/* ref: FUN_00b827f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b827f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb827f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

