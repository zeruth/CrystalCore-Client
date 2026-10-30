#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00d21160 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d21160(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd21160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x30)));
}

/* ref: FUN_00d21170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d21170(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd21170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x18)));
  if (uVar1 != 0) {
    *((undefined1 *)GEN_TOP((uVar1 + 5))) = param_2;
  }
  return uVar1;
}

/* ref: FUN_00d21190 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d21190(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd21190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x18))) == 0) {
    return 0;
  }
  return *((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x18))) + 5)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d211a0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xd211a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  byte bVar1;
  
  bVar1 = F_00cbc040(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD);
  if (bVar1 != 0) {
    return REFG(undefined4, 0x1129a00);
  }
  *((uint *)GEN_TOP((param_1 + 0xb0))) = *((uint *)GEN_TOP((param_1 + 0xb0))) | 0x100;
  *((float *)GEN_TOP((param_1 + 0xbc))) = param_3;
  *((uint *)GEN_TOP((param_1 + 0xe4))) = *((uint *)GEN_TOP((param_1 + 0xe4))) | 1;
  *((float *)GEN_TOP((param_1 + 0xd0))) = param_4;
  *((undefined4 *)GEN_TOP((param_1 + 0xd4))) = param_2;
  return REFG(undefined4, 0x11299e4);
}

/* ref: FUN_00d21200 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d21200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd21200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00cbc040(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  if (bVar1 != 0) {
    return REFG(undefined4, 0x1129a00);
  }
  *((uint *)GEN_TOP(((int)this + 0xe4))) = *((uint *)GEN_TOP(((int)this + 0xe4))) | 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = param_1;
  return REFG(undefined4, 0x11299e4);
}

/* ref: FUN_00d21240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d21240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd21240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00cbc040(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  if (bVar1 != 0) {
    return REFG(undefined4, 0x1129a00);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = param_1;
  return REFG(undefined4, 0x11299e4);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d21270(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd21270u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *((float *)GEN_TOP((param_1 + 0xbc))) = param_2;
  bVar1 = F_00cbc040(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00cbc390(param_1 + 8 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0xbc)))),param_3);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d212b0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd212b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_3)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),local_c);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d21300(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd21300u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *((float *)GEN_TOP((param_1 + 0xc0))) = param_2;
  bVar1 = F_00cbc040(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00cbc680(param_1 + 8 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0xc0)))),param_3);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d21340(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd21340u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_3)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),local_c);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d21390(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd21390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xe4))) = *((uint *)GEN_TOP((in_ecx + 0xe4))) | 8;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf8 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d213a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd213a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d213b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd213b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  uint uVar1;
  
  uVar1 = ((uint)param_3 * 8 ^ *((uint *)GEN_TOP((in_ecx + 0xe4)))) & 8;
  *((uint *)GEN_TOP((in_ecx + 0xe4))) = *((uint *)GEN_TOP((in_ecx + 0xe4))) ^ uVar1;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf10 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d213d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd213d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf12 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d213e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd213e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf13 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d213f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd213f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00d21400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d21400(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd21400u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *((float *)GEN_TOP((param_1 + 0xc4))) = param_2;
  bVar1 = F_00cbc040(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00cbc710(param_1 + 8 GEN_EDX_ARG,
                         ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x8c))) *
                                (float10)*((float *)GEN_TOP((param_1 + 0xc4)))))));
  }
  return uVar2;
}

/* ref: FUN_00d21440 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d21440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd21440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cbc7e0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00d21450 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d21450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd21450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cbc850(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00d21460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d21460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd21460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00cbc040(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  if (bVar1 == 0) {
    *param_1 = 0;
    return (uint)param_1;
  }
  F_00cbcab0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_1);
  return (uint)param_1;
}

/* ref: FUN_00d214a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d214a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd214a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) | 0x400;
  bVar1 = F_00cbc040(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  if (bVar1 != 0) {
    uVar2 = F_00cbcbc0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    return uVar2;
  }
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00d214d0 */
GEN_LIB GEN_NOFRAME ushort GEN_THISCALL F_00d214d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd214d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x18))) != 0) {
    return *((ushort *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x18))) + 0xe)));
  }
  return 0;
}

/* ref: FUN_00d214e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d214e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd214e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *((float *)GEN_TOP((param_1 + 200))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0xcc))) = param_3;
  bVar1 = F_00cbc040(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00cbcd10(param_1 + 8 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((param_1 + 200)))),param_3);
  }
  return uVar2;
}

/* ref: FUN_00d21520 */
GEN_LIB GEN_NOFRAME float GEN_THISCALL F_00d21520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd21520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  float fVar2;
  
  bVar1 = F_00cbc040(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  if (bVar1 == 0) {
    return *(float *)&REFG(undefined, 0x1097254);
  }
  fVar2 = F_00cbcd90(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  return fVar2;
}

/* ref: FUN_00d21540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d21540(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd21540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *((undefined1 *)GEN_TOP((param_1 + 0xe0))) = param_2;
  bVar1 = F_00cbc040(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00cbce00(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP((param_1 + 0xe0))));
  }
  return uVar2;
}

/* ref: FUN_00d21580 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00d21580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd21580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  byte bVar1;
  int * piVar2;
  uint uVar3;
  float10 fVar4;
  float fVar5;
  
  bVar1 = F_00cbc040(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  if (bVar1 != 0) {
    fVar5 = F_00cbd050(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    return fVar5;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x90))))(piVar2 GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xfc))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x24))));
  if ((char)uVar3 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x48))))(piVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 0x24))));
    fVar4 = F_00cbec50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,*((uint *)GEN_TOP(((int)this + 0x28))));
    (*(float *)(gen_frame + 0xc)) = (float)fVar4;
    F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return (*(float *)(gen_frame + 0xc));
  }
  return *(float *)&REFG(undefined, 0x1097254);
}

/* ref: FUN_00d21610 */
GEN_LIB GEN_NOFRAME float GEN_THISCALL F_00d21610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd21610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  float fVar2;
  
  bVar1 = F_00cbc040(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  if (bVar1 == 0) {
    return *(float *)&REFG(undefined, 0x1097254);
  }
  fVar2 = F_00cbd0c0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  return fVar2;
}

/* ref: FUN_00d21630 */
GEN_LIB GEN_NOFRAME float GEN_THISCALL F_00d21630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd21630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  float fVar2;
  
  bVar1 = F_00cbc040(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  if (bVar1 == 0) {
    return *(float *)&REFG(undefined, 0x1097254);
  }
  fVar2 = F_00cbd130(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  return fVar2;
}

/* ref: FUN_00d21650 */
GEN_LIB GEN_NOFRAME double GEN_THISCALL F_00d21650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd21650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00cbc040(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  if (bVar1 == 0) {
    return (double)*(float *)&REFG(undefined, 0x1097254);
  }
  return (double)*((float *)GEN_TOP(((int)this + 0x8c)));
}

/* ref: FUN_00d21680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d21680(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd21680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xf8))) = param_2;
  return param_2;
}

/* ref: FUN_00d21690 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d21690(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd21690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xf8)));
}

/* ref: FUN_00d216a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d216a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd216a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cbd1a0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00d216b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d216b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd216b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cbd210(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00d216c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d216c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd216c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  byte bVar1;
  uint uVar2;
  
  F_00cbe360(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x24))));
  uVar2 = F_00cbe810(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x28))));
  if (uVar2 != 0) {
    bVar1 = *((byte *)GEN_TOP((uVar2 + 0xe)));
    F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return (uint)bVar1;
  }
  F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00d21710 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d21710(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd21710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0xb0))) >> 5 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf21 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d21720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd21720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf22 */
GEN_LIB GEN_NOFRAME float GEN_THISCALL F_00d21730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd21730u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return REFG(float, 0x1090708);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf23 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d21740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd21740u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: FUN_00d21750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d21750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd21750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x90))))(piVar2 GEN_EDX_FWD)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x48))))(piVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((iVar1 + 8))));
  uVar3 = F_00cbe720(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((iVar1 + 6))));
  F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf14 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d217a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd217a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  byte bVar1;
  int iVar2;
  
  *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) & 0xfffffffe;
  if (((*(uint *)(this + 0xe4) & 1) != 0) && ((*(uint *)(this + 0xe4) & 2) == 0)) {
    if (this[0x2d] != (undefined1)0x0) {
      F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),(uint)(byte)this[0x2d]);
      bVar1 = F_00cbb1b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      if (bVar1 != 0) {
        *(uint *)(this + 0xe4) = *(uint *)(this + 0xe4) | 2;
        F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        return 0;
      }
      F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    if (*(int *)(this + 0xd8) != 0) {
      iVar2 = *(int *)(this + 0xd8) - param_1;
      *(int *)(this + 0xd8) = iVar2;
      if (-1 < iVar2) {
        return 0;
      }
      *(undefined4 *)(this + 0xd8) = 0;
    }
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf15 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d21830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd21830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) | 1;
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x98))))
                            (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG);
  uVar3 = *(uint *)(this + 0xe4);
  *(uint *)(this + 0xb0) =
       *(uint *)(this + 0xb0) ^
       (((uVar3 >> 1 | uVar3) >> 1 | (uVar2 & 0xff) * 2) ^ *(uint *)(this + 0xb0)) & 2;
  *(uint *)(this + 0xe4) = uVar3 & 0xfffffff3;
  if ((*(uint *)(this + 0xb0) & 4) != 0) {
    return 0;
  }
  if ((*(uint *)(this + 0xb0) & 0x200) == 0) {
    F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)(this + 0x24));
    F_00cbe8e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) | 0x200;
    F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  uVar3 = F_00cbbff0(this + 8 GEN_EDX_ARG);
  return uVar3 != 0;
}

/* ref: FUN_00d218e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d218e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd218e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x1c))) + 0x10)));
}

/* ref: FUN_00d218f0 */
GEN_LIB GEN_FRAME byte F_00d218f0(GEN_P(float param_1, float gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd218f0u, gen_trace_f(gen_a0), gen_a1, gen_a2, gen_a3);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*(float *)&REFG(undefined, 0x1097254);
  fVar2 = GEN_X87((float10)(float)((float10)param_1 - (float10)*param_2));
  if (!(fVar1 <= fVar2) || ((GEN_ISNAN(fVar2) || GEN_ISNAN(fVar1)) || fVar2 == fVar1)) {
    if (((*((byte *)GEN_TOP((param_3 + 4))) & 0x10) == 0) &&
       (fVar1 = (float10)param_4[1],
       fVar2 <= fVar1 && ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(fVar2)) && fVar1 != fVar2))) {
      *param_2 = (float)((float10)*param_2 - (float10)param_4[1]);
      return 0;
    }
  }
  else if (((*((byte *)GEN_TOP((param_3 + 4))) & 8) == 0) &&
          (!(fVar2 <= (float10)*param_4) != (GEN_ISNAN((float10)*param_4) || GEN_ISNAN(fVar2)))) {
    *param_2 = (float)((float10)*param_2 + (float10)*param_4);
    return 0;
  }
  *param_2 = param_1;
  return 1;
}

/* ref: FUN_00d21970 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d21970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd21970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = *((undefined4 *)GEN_TOP(((int)this + 0x50)));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
  *((uint *)GEN_TOP(((int)this + 0x48))) = *((uint *)GEN_TOP(((int)this + 0x58)));
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = *((undefined4 *)GEN_TOP(((int)this + 0x5c)));
  *((int *)GEN_TOP(((int)this + 0xac))) = *((int *)GEN_TOP(((int)this + 0xac))) + 1;
  if (0x10 < *((int *)GEN_TOP(((int)this + 0xac)))) {
    *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0x10;
  }
  return *((uint *)GEN_TOP(((int)this + 0x58)));
}

/* ref: FUN_00d219b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d219b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd219b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  *((undefined4 *)GEN_TOP((in_ecx + 0xac))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x84))) = uVar1;
  *((undefined4 *)GEN_TOP((in_ecx + 0x88))) = uVar1;
  return;
}

/* ref: FUN_00d219d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d219d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd219d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  float fVar1;
  ushort uVar2;
  undefined4 in_EAX = 0;
  undefined2 uVar4;
  uint uVar3;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  bVar5 = GEN_ISNAN((float10)REFG(float, 0x1090708)) || GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0x84))));
  uVar4 = (undefined2)((uint)in_EAX >> 0x10);
  if (bVar5 != (bVar5 || (float10)REFG(float, 0x1090708) == (float10)*((float *)GEN_TOP((param_1 + 0x84))))) {
    *((undefined4 *)GEN_TOP((param_1 + 0x84))) = *((undefined4 *)GEN_TOP(param_2));
    *((float *)GEN_TOP((param_1 + 0x88))) = *param_3;
    return param_2;
  }
  fVar6 = (float10)*(float *)&REFG(undefined, 0x1097254);
  fVar7 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP(param_2)) - (float10)*((float *)GEN_TOP((param_1 + 0x84)))))));
  fVar8 = GEN_X87((float10)(float)((float10)(int)param_4 * (float10)REFG(double, 0x1091858)));
  if (!(fVar6 <= fVar7) == (GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6))) {
    if (!(fVar7 <= fVar8) != (GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7))) {
      fVar1 = ((float)GEN_TOF((fVar8 + (float10)*((float *)GEN_TOP((param_1 + 0x84))))));
      *((float *)GEN_TOP((param_1 + 0x84))) = fVar1;
      *((float *)GEN_TOP(param_2)) = fVar1;
      goto LAB_00d21a83;
    }
  }
  else {
    fVar9 = -fVar8;
    if (fVar7 <= fVar9 && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar7)) && fVar9 != fVar7)) {
      fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x84))) - fVar8)));
      *((float *)GEN_TOP((param_1 + 0x84))) = fVar1;
      *((float *)GEN_TOP(param_2)) = fVar1;
      goto LAB_00d21a83;
    }
  }
  *((undefined4 *)GEN_TOP((param_1 + 0x84))) = *((undefined4 *)GEN_TOP(param_2));
LAB_00d21a83: ;
  fVar7 = GEN_X87((float10)((float)GEN_TOF(((float10)*param_3 - (float10)*((float *)GEN_TOP((param_1 + 0x88)))))));
  if (!(fVar6 <= fVar7) == (GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6))) {
    bVar5 = GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7);
    uVar3 = CONCAT22(uVar4,(ushort)!(fVar7 <= fVar8) << 8 | (ushort)bVar5 << 10 |
                           (ushort)(bVar5 || fVar8 == fVar7) << 0xe);
    if (!(fVar7 <= fVar8) != bVar5) {
      fVar1 = ((float)GEN_TOF((fVar8 + (float10)*((float *)GEN_TOP((param_1 + 0x88))))));
      *((float *)GEN_TOP((param_1 + 0x88))) = fVar1;
      *param_3 = fVar1;
      return uVar3;
    }
  }
  else {
    fVar6 = -fVar8;
    uVar2 = (ushort)((GEN_ISNAN(fVar6) || GEN_ISNAN(fVar7)) || fVar6 == fVar7);
    uVar3 = CONCAT22(uVar4,(ushort)!(fVar7 <= fVar6) << 8 | (ushort)(GEN_ISNAN(fVar6) || GEN_ISNAN(fVar7)) << 10
                           | uVar2 << 0xe);
    if (fVar7 <= fVar6 && uVar2 == 0) {
      fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x88))) - fVar8)));
      *((float *)GEN_TOP((param_1 + 0x88))) = fVar1;
      *param_3 = fVar1;
      return uVar3;
    }
  }
  *((float *)GEN_TOP((param_1 + 0x88))) = *param_3;
  return uVar3;
}

/* ref: FUN_00d21b00 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d21b00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xd21b00u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)*(float *)&REFG(undefined, 0x1097254);
  if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x18))) + 0xc))) & 0x80) == 0) {
    fVar3 = GEN_X87((float10)param_3 * (float10)param_5);
    fVar2 = (float10)param_2;
  }
  else {
    fVar2 = GEN_X87((float10)(float)((float10)param_2 - (float10)param_4));
    if ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar1)) && fVar2 < fVar1 != (fVar2 == fVar1)) {
      *((float *)GEN_TOP((in_ecx + 0x94))) = (float)(float10)1;
      return 0;
    }
    fVar3 = GEN_X87((float10)param_5 * ((float10)param_3 - (float10)param_4));
  }
  param_3 = (float)fVar3;
  fVar3 = (float10)param_3;
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(fVar3)) == ((GEN_ISNAN(fVar1) || GEN_ISNAN(fVar3)) || fVar1 == fVar3)) {
    if (!(fVar2 <= fVar3) == (GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2))) {
      *((float *)GEN_TOP((in_ecx + 0x94))) = (float)((float10)1 - fVar2 / fVar3);
      return 0;
    }
  }
  *((float *)GEN_TOP((in_ecx + 0x94))) = *(float *)&REFG(undefined, 0x1097254);
  return 0;
}

/* ref: FUN_00d21ba0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d21ba0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xd21ba0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  int * piVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)param_2;
  fVar4 = (float10)param_4;
  if (!(fVar3 <= fVar4) == (GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3))) {
    fVar5 = (float10)param_3;
    if (fVar3 <= fVar5) {
      fVar3 = (float10)*(float *)&REFG(undefined, 0x1097254);
    }
    else {
      fVar3 = GEN_X87((float10)(float)(fVar3 - fVar5) / (fVar4 - fVar5));
    }
  }
  else {
    fVar3 = (float10)1;
  }
  *((float *)GEN_TOP((param_1 + 0x98))) = (float)fVar3;
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1c))) + 0xc)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x98))))(piVar1 GEN_EDX_FWD);
  if (*((char *)GEN_TOP((uVar2 + 0x39c))) != '\0') {
    *((float *)GEN_TOP((param_1 + 0x98))) =
         ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar2 + 0x3a0))) * (float10)*((float *)GEN_TOP((param_1 + 0x98))))));
    return 0;
  }
  *((float *)GEN_TOP((param_1 + 0x98))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0xb4))) * (float10)*((float *)GEN_TOP((param_1 + 0x98))))));
  return 0;
}

/* ref: FUN_00d21c40 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d21c40(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd21c40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x18))) + 0xc))) & 0x40) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1c))) + 0xc)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_FWD,&(*(float *)(gen_frame + 0x4)),&(*(float *)(gen_frame + 0x8)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0xc)));
    fVar2 = (float10)param_2;
    fVar3 = (float10)(*(float *)(gen_frame + 0x8));
    if (!(fVar2 <= fVar3) != (GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2))) {
      *((float *)GEN_TOP((param_1 + 0x9c))) = (*(float *)(gen_frame + 0xc));
      return 0;
    }
    fVar4 = (float10)(*(float *)(gen_frame + 0x4));
    if (fVar2 <= fVar4 && ((!GEN_ISNAN(fVar4) && !GEN_ISNAN(fVar2)) && fVar4 != fVar2)) {
      *((float *)GEN_TOP((param_1 + 0x9c))) = (float)(float10)1;
      return 0;
    }
    *((float *)GEN_TOP((param_1 + 0x9c))) =
         ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)1 -
                                                  (float10)((float)GEN_TOF(((float10)(float)(fVar2 - fVar4) /
                                                                  (fVar3 - fVar4))))))) *
                                 (float10)(*(float *)(gen_frame + 0x0))))) + (float10)(*(float *)(gen_frame + 0xc)))));
  }
  return 0;
}

/* ref: FUN_00d21d00 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d21d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd21d00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  int iVar1;
  byte bVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
  if ((*((byte *)GEN_TOP((iVar1 + 0xc))) & 4) != 0) {
    *param_2 = (float)(float10)1;
    return (byte)iVar1;
  }
  bVar2 = F_00d007c0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc))) GEN_EDX_FWD,param_1,param_2);
  return bVar2;
}

/* ref: FUN_00d21d30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d21d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd21d30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x90))))(piVar2 GEN_EDX_FWD)));
  if (*((short *)GEN_TOP((iVar1 + 6))) == -1) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x6c))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 8))),param_1,param_2);
    if ((char)uVar3 == '\0') {
      return 0;
    }
  }
  else {
    *param_1 = *((undefined4 *)GEN_TOP((iVar1 + 8)));
    *param_2 = (uint)*((ushort *)GEN_TOP((iVar1 + 6)));
  }
  return 1;
}

/* ref: FUN_00d21d90 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00d21d90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd21d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  int * piVar2;
  code * pcVar3;
  byte bVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1c))) + 0xc)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x34))))(piVar2 GEN_EDX_FWD);
  if (((uVar5 == 0) || ((*((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x18))) + 0xc))) & 8) != 0)) ||
     ((bVar4 = F_00cbc040(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG), bVar4 != 0 &&
      (bVar4 = F_00cbce70(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG), bVar4 != 1)))) {
    return (float10)*(float *)&REFG(undefined, 0x1097254);
  }
  fVar6 = ((float10)GEN_TOD(atan2((float10)*((float *)GEN_TOP((param_2 + 8))),
                          (float10)*((float *)GEN_TOP(param_2)))));
  fVar6 = GEN_X87((float10)(float)((float10)(float)fVar6 + (float10)*(double *)&REFG(undefined, 0x1094620)));
  if ((float10)*(double *)&REFG(undefined, 0x1080228) <= fVar6) {
    fVar6 = GEN_X87((float10)(float)(fVar6 - (float10)REFG(double, 0x10920b8)));
  }
  fVar7 = (float10)*(float *)&REFG(undefined, 0x1097254);
  if (fVar6 <= fVar7 && ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && fVar7 != fVar6)) {
    fVar6 = (float10)((float)GEN_TOF(-fVar6));
  }
  fVar6 = ((float10)GEN_TOD(fsin((float10)(float)(fVar6 - (float10)*(double *)&REFG(undefined, 0x1094620)))));
  fVar1 = (float)fVar6;
  fVar7 = (float10)*(float *)&REFG(undefined, 0x1097254);
  fVar6 = (float10)fVar1;
  if (!(fVar6 <= fVar7) || ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6)) || fVar7 == fVar6)) {
    fVar6 = ((float10)GEN_TOD(atan2((float10)*((float *)GEN_TOP((param_2 + 4))),
                            (float10)*((float *)GEN_TOP((param_2 + 8))))));
    fVar7 = GEN_X87((float10)(float)((float10)1 - (float10)(float)fVar6 / (float10)*(double *)&REFG(undefined, 0x1094620)));
    fVar6 = (float10)1;
    fVar7 = GEN_X87((float10)(float)(fVar7 + fVar7));
    param_2 = (uint)gen_fl2bits(fVar1);
    if (!(fVar6 <= fVar7) != ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6)) || fVar7 == fVar6)) {
      param_2 = (uint)gen_fl2bits((float)(fVar7 * (float10)fVar1));
    }
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x3c))))(piVar2);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x44)));
    *param_3 = ((float)GEN_TOF((((float10)1 - extraout_ST0 * ((float10)GEN_TOD(gen_bits2f(param_2)))) *
                      (float10)*param_3)));
    extraout_ST0_00 = (*pcVar3)(piVar2);
    fVar7 = ((float10)GEN_TOD(gen_bits2f(param_2)));
    *param_4 = ((float)GEN_TOF(((float10)*param_4 * ((float10)1 - fVar7 * extraout_ST0_00))));
    fVar1 = *(float *)&REFG(undefined, 0x1097254);
    fVar6 = (float10)*(float *)&REFG(undefined, 0x1097254);
    if ((float10)*param_3 <= fVar6) {
      *param_3 = *(float *)&REFG(undefined, 0x1097254);
    }
    if ((float10)*param_4 <= fVar6) {
      *param_4 = fVar1;
      return fVar7;
    }
  }
  return fVar7;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d21f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd21f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x18);
  F_00c49386(param_1,((char *)REFP(0x1133b70)),*(undefined4 *)(this + 0x20));
  F_00c49386(param_1,((char *)REFP(0x1133b94)),*(undefined4 *)(this + 0x20));
  F_00c49386(param_1,((char *)REFP(0x1133ba4)),(uint)*((byte *)GEN_TOP((iVar1 + 2))));
  F_00c49386(param_1,((char *)REFP(0x1133bb0)),(uint)*((byte *)GEN_TOP((iVar1 + 3))));
  F_00c49386(param_1,((char *)REFP(0x1133bc0)),*((byte *)GEN_TOP((iVar1 + 4))) >> 1 & 1);
  F_00c49386(param_1,((char *)REFP(0x1133bd8)),*((byte *)GEN_TOP((iVar1 + 4))) >> 2 & 1);
  F_00c49386(param_1,((char *)REFP(0x1133be8)),*((byte *)GEN_TOP((iVar1 + 4))) >> 3 & 1);
  F_00c49386(param_1,((char *)REFP(0x1133bfc)),*((byte *)GEN_TOP((iVar1 + 4))) >> 4 & 1);
  F_00c49386(param_1,((char *)REFP(0x1133c14)),(uint)(*((byte *)GEN_TOP((iVar1 + 4))) >> 7));
  F_00c49386(param_1,((char *)REFP(0x1133c2c)),*((byte *)GEN_TOP((iVar1 + 0xc))) >> 1 & 1);
  F_00c49386(param_1,((char *)REFP(0x1133c48)),*((byte *)GEN_TOP((iVar1 + 0xc))) >> 6 & 1);
  F_00c49386(param_1,((char *)REFP(0x1133c64)),(uint)*((byte *)GEN_TOP((iVar1 + 5))));
  F_00c49386(param_1,((char *)REFP(0x1133c74)),*((undefined4 *)GEN_TOP((iVar1 + 8))));
  F_00c49386(param_1,((char *)REFP(0x1133c84)),(uint)*((ushort *)GEN_TOP((iVar1 + 6))));
  F_00c49386(param_1,((char *)REFP(0x1133c94)),(uint)*((ushort *)GEN_TOP((iVar1 + 0xe))));
  F_00c49386(param_1,((char *)REFP(0x1133ca4)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf31 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d22040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd22040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  int iVar4;
  uint uVar5;
  char * pcVar6;
  byte * pbVar7;
  bool bVar8;
  
  iVar2 = *(int *)(this + 0x18);
  pbVar3 = &REFG(undefined1, 0x1133ca8);
  pbVar7 = param_1;
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_00d22075: ;
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00d2207a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_00d22075;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00d2207a: ;
  if (iVar4 == 0) {
    uVar5 = F_00d00d00(0,0);
    if (uVar5 != 0) {
      uVar5 = F_00c4c74c(uVar5);
      *((char *)GEN_TOP((iVar2 + 2))) = (char)uVar5;
      return 1;
    }
  }
  else {
    pcVar6 = ((char *)REFP(0x1133cb0));
    pbVar7 = param_1;
    do {
      bVar1 = *pcVar6;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_00d220d1: ;
        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00d220d6;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar6[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_00d220d1;
      pcVar6 = pcVar6 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00d220d6: ;
    if (iVar4 == 0) {
      uVar5 = F_00d00d00(0,0);
      if (uVar5 != 0) {
        uVar5 = F_00c4c74c(uVar5);
        *((char *)GEN_TOP((iVar2 + 3))) = (char)uVar5;
        return 1;
      }
    }
    else {
      pcVar6 = ((char *)REFP(0x1133cb8));
      pbVar7 = param_1;
      do {
        bVar1 = *pcVar6;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00d22124: ;
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00d22129;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar6[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00d22124;
        pcVar6 = pcVar6 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00d22129: ;
      if (iVar4 == 0) {
        uVar5 = F_00d00d00(0,0);
        if (uVar5 != 0) {
          uVar5 = F_00c4c74c(uVar5);
          *((byte *)GEN_TOP((iVar2 + 4))) =
               *((byte *)GEN_TOP((iVar2 + 4))) ^ ((char)uVar5 * '\x02' ^ *((byte *)GEN_TOP((iVar2 + 4)))) & 2;
          return 1;
        }
      }
      else {
        pbVar3 = &REFG(undefined1, 0x1133cc8);
        pbVar7 = param_1;
        do {
          bVar1 = *pbVar3;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00d22182: ;
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00d22187;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00d22182;
          pbVar3 = pbVar3 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00d22187: ;
        if (iVar4 == 0) {
          uVar5 = F_00d00d00(0,0);
          if (uVar5 != 0) {
            uVar5 = F_00c4c74c(uVar5);
            *((byte *)GEN_TOP((iVar2 + 4))) =
                 *((byte *)GEN_TOP((iVar2 + 4))) ^ ((char)uVar5 * '\x04' ^ *((byte *)GEN_TOP((iVar2 + 4)))) & 4;
            return 1;
          }
        }
        else {
          pcVar6 = ((char *)REFP(0x1133cd0));
          pbVar7 = param_1;
          do {
            bVar1 = *pcVar6;
            bVar8 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_00d221e2: ;
              iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_00d221e7;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar6[1];
            bVar8 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_00d221e2;
            pcVar6 = pcVar6 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00d221e7: ;
          if (iVar4 == 0) {
            uVar5 = F_00d00d00(0,0);
            if (uVar5 != 0) {
              uVar5 = F_00c4c74c(uVar5);
              *((byte *)GEN_TOP((iVar2 + 4))) =
                   *((byte *)GEN_TOP((iVar2 + 4))) ^ ((char)uVar5 << 3 ^ *((byte *)GEN_TOP((iVar2 + 4)))) & 8;
              return 1;
            }
          }
          else {
            pcVar6 = ((char *)REFP(0x1133cdc));
            pbVar7 = param_1;
            do {
              bVar1 = *pcVar6;
              bVar8 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_00d22244: ;
                iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                goto LAB_00d22249;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar6[1];
              bVar8 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_00d22244;
              pcVar6 = pcVar6 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_00d22249: ;
            if (iVar4 == 0) {
              uVar5 = F_00d00d00(0,0);
              if (uVar5 != 0) {
                uVar5 = F_00c4c74c(uVar5);
                *((byte *)GEN_TOP((iVar2 + 4))) =
                     *((byte *)GEN_TOP((iVar2 + 4))) ^ ((char)uVar5 << 4 ^ *((byte *)GEN_TOP((iVar2 + 4)))) & 0x10;
                return 1;
              }
            }
            else {
              pcVar6 = ((char *)REFP(0x1133cec));
              pbVar7 = param_1;
              do {
                bVar1 = *pcVar6;
                bVar8 = bVar1 < *pbVar7;
                if (bVar1 != *pbVar7) {
LAB_00d222a3: ;
                  iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                  goto LAB_00d222a8;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar6[1];
                bVar8 = bVar1 < pbVar7[1];
                if (bVar1 != pbVar7[1]) goto LAB_00d222a3;
                pcVar6 = pcVar6 + 2;
                pbVar7 = pbVar7 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_00d222a8: ;
              if (iVar4 == 0) {
                uVar5 = F_00d00d00(0,0);
                if (uVar5 != 0) {
                  uVar5 = F_00c4c74c(uVar5);
                  *((byte *)GEN_TOP((iVar2 + 4))) = *((byte *)GEN_TOP((iVar2 + 4))) & 0x7f | (char)uVar5 << 7;
                  return 1;
                }
              }
              else {
                pcVar6 = ((char *)REFP(0x1133d00));
                pbVar7 = param_1;
                do {
                  bVar1 = *pcVar6;
                  bVar8 = bVar1 < *pbVar7;
                  if (bVar1 != *pbVar7) {
LAB_00d22305: ;
                    iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                    goto LAB_00d2230a;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pcVar6[1];
                  bVar8 = bVar1 < pbVar7[1];
                  if (bVar1 != pbVar7[1]) goto LAB_00d22305;
                  pcVar6 = pcVar6 + 2;
                  pbVar7 = pbVar7 + 2;
                } while (bVar1 != 0);
                iVar4 = 0;
LAB_00d2230a: ;
                if (iVar4 == 0) {
                  uVar5 = F_00d00d00(0,0);
                  if (uVar5 != 0) {
                    uVar5 = F_00c4c74c(uVar5);
                    *((byte *)GEN_TOP((iVar2 + 0xc))) =
                         *((byte *)GEN_TOP((iVar2 + 0xc))) ^
                         ((char)uVar5 * '\x02' ^ *((byte *)GEN_TOP((iVar2 + 0xc)))) & 2;
                    return 1;
                  }
                }
                else {
                  pcVar6 = ((char *)REFP(0x1133d18));
                  pbVar7 = param_1;
                  do {
                    bVar1 = *pcVar6;
                    bVar8 = bVar1 < *pbVar7;
                    if (bVar1 != *pbVar7) {
LAB_00d22363: ;
                      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                      goto LAB_00d22368;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pcVar6[1];
                    bVar8 = bVar1 < pbVar7[1];
                    if (bVar1 != pbVar7[1]) goto LAB_00d22363;
                    pcVar6 = pcVar6 + 2;
                    pbVar7 = pbVar7 + 2;
                  } while (bVar1 != 0);
                  iVar4 = 0;
LAB_00d22368: ;
                  if (iVar4 == 0) {
                    uVar5 = F_00d00d00(0,0);
                    if (uVar5 != 0) {
                      uVar5 = F_00c4c74c(uVar5);
                      *((byte *)GEN_TOP((iVar2 + 0xc))) =
                           *((byte *)GEN_TOP((iVar2 + 0xc))) ^
                           ((char)uVar5 << 6 ^ *((byte *)GEN_TOP((iVar2 + 0xc)))) & 0x40;
                      return 1;
                    }
                  }
                  else {
                    pcVar6 = ((char *)REFP(0x1133d2c));
                    pbVar7 = param_1;
                    do {
                      bVar1 = *pcVar6;
                      bVar8 = bVar1 < *pbVar7;
                      if (bVar1 != *pbVar7) {
LAB_00d223c2: ;
                        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                        goto LAB_00d223c7;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pcVar6[1];
                      bVar8 = bVar1 < pbVar7[1];
                      if (bVar1 != pbVar7[1]) goto LAB_00d223c2;
                      pcVar6 = pcVar6 + 2;
                      pbVar7 = pbVar7 + 2;
                    } while (bVar1 != 0);
                    iVar4 = 0;
LAB_00d223c7: ;
                    if (iVar4 == 0) {
                      uVar5 = F_00d00d00(0,0);
                      if (uVar5 != 0) {
                        uVar5 = F_00c4c74c(uVar5);
                        *((char *)GEN_TOP((iVar2 + 5))) = (char)uVar5;
                        return 1;
                      }
                    }
                    else {
                      pcVar6 = ((char *)REFP(0x1133d34));
                      pbVar7 = param_1;
                      do {
                        bVar1 = *pcVar6;
                        bVar8 = bVar1 < *pbVar7;
                        if (bVar1 != *pbVar7) {
LAB_00d22420: ;
                          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                          goto LAB_00d22425;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pcVar6[1];
                        bVar8 = bVar1 < pbVar7[1];
                        if (bVar1 != pbVar7[1]) goto LAB_00d22420;
                        pcVar6 = pcVar6 + 2;
                        pbVar7 = pbVar7 + 2;
                      } while (bVar1 != 0);
                      iVar4 = 0;
LAB_00d22425: ;
                      if (iVar4 == 0) {
                        uVar5 = F_00d00d00(0,0);
                        if (uVar5 != 0) {
                          uVar5 = F_00c4c74c(uVar5);
                          *((uint *)GEN_TOP((iVar2 + 8))) = uVar5;
                          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x128))))
                                            (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG,uVar5);
                          *((uint *)GEN_TOP((iVar2 + 8))) = uVar5;
                          return 1;
                        }
                      }
                      else {
                        pcVar6 = ((char *)REFP(0x1133d3c));
                        pbVar7 = param_1;
                        do {
                          bVar1 = *pcVar6;
                          bVar8 = bVar1 < *pbVar7;
                          if (bVar1 != *pbVar7) {
LAB_00d22490: ;
                            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                            goto LAB_00d22495;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pcVar6[1];
                          bVar8 = bVar1 < pbVar7[1];
                          if (bVar1 != pbVar7[1]) goto LAB_00d22490;
                          pcVar6 = pcVar6 + 2;
                          pbVar7 = pbVar7 + 2;
                        } while (bVar1 != 0);
                        iVar4 = 0;
LAB_00d22495: ;
                        if (iVar4 == 0) {
                          uVar5 = F_00d00d00(0,0);
                          if (uVar5 != 0) {
                            uVar5 = F_00c4c74c(uVar5);
                            *((short *)GEN_TOP((iVar2 + 6))) = (short)uVar5;
                            return 1;
                          }
                        }
                        else {
                          pcVar6 = ((char *)REFP(0x1133d44));
                          pbVar7 = param_1;
                          do {
                            bVar1 = *pcVar6;
                            bVar8 = bVar1 < *pbVar7;
                            if (bVar1 != *pbVar7) {
LAB_00d224e8: ;
                              iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                              goto LAB_00d224ed;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pcVar6[1];
                            bVar8 = bVar1 < pbVar7[1];
                            if (bVar1 != pbVar7[1]) goto LAB_00d224e8;
                            pcVar6 = pcVar6 + 2;
                            pbVar7 = pbVar7 + 2;
                          } while (bVar1 != 0);
                          iVar4 = 0;
LAB_00d224ed: ;
                          if (iVar4 != 0) {
                            pcVar6 = ((char *)REFP(0x1133d50));
                            pbVar7 = param_1;
                            do {
                              bVar1 = *pcVar6;
                              bVar8 = bVar1 < *pbVar7;
                              if (bVar1 != *pbVar7) {
LAB_00d22540: ;
                                iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                                goto LAB_00d22545;
                              }
                              if (bVar1 == 0) break;
                              bVar1 = pcVar6[1];
                              bVar8 = bVar1 < pbVar7[1];
                              if (bVar1 != pbVar7[1]) goto LAB_00d22540;
                              pcVar6 = pcVar6 + 2;
                              pbVar7 = pbVar7 + 2;
                            } while (bVar1 != 0);
                            iVar4 = 0;
LAB_00d22545: ;
                            if (iVar4 == 0) {
                              uVar5 = F_00d00d00(0,0);
                              if (uVar5 == 0) {
                                return 0;
                              }
                              uVar5 = F_00c4c74c(uVar5);
                              *((byte *)GEN_TOP((iVar2 + 4))) =
                                   *((byte *)GEN_TOP((iVar2 + 4))) ^
                                   ((char)uVar5 << 5 ^ *((byte *)GEN_TOP((iVar2 + 4)))) & 0x20;
                            }
                            return 1;
                          }
                          uVar5 = F_00d00d00(0,0);
                          if (uVar5 != 0) {
                            uVar5 = F_00c4c74c(uVar5);
                            *((short *)GEN_TOP((iVar2 + 0xe))) = (short)uVar5;
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
  return 0;
}

/* ref: FUN_00d22580 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d22580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd22580u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  float10 fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133dc4));
  F_00cbbd70((int)this + 8 GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x108));
  *((undefined1 *)GEN_TOP(((int)this + 0x120))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  uVar4 = F_00cbbd70(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00cbbdc0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar4);
  F_00cbbdb0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2d))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((uint *)GEN_TOP(((int)this + 0xe4))) = *((uint *)GEN_TOP(((int)this + 0xe4))) & 0xfffffffd | 1;
  *((byte *)GEN_TOP(((int)this + 0x2c))) = *((byte *)GEN_TOP(((int)this + 0x2c))) & 0xfc;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1097254);
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *(undefined4 *)&REFG(undefined, 0x1097254);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = uVar3;
  *((uint *)GEN_TOP(((int)this + 0xe4))) = *((uint *)GEN_TOP(((int)this + 0xe4))) & 0xfffffff3;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = uVar3;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x84))), REFG(float, 0x1090708));
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = uVar2;
  *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) & 0xfffff820 | 0x20;
  fVar1 = (float10)1;
  *((undefined1 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((float *)GEN_TOP(((int)this + 0x8c))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((float *)GEN_TOP(((int)this + 0x9c))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = uVar3;
  *((float *)GEN_TOP(((int)this + 0xbc))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0xc0))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0xc4))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  return (uint)this;
}

/* ref: FUN_00d22720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d22720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd22720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  float10 fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133dc4));
  F_00cbbd70((int)this + 8 GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x108));
  *((undefined1 *)GEN_TOP(((int)this + 0x120))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  uVar4 = F_00cbbd70(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00cbbdc0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar4);
  F_00cbbdb0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2d))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((uint *)GEN_TOP(((int)this + 0xe4))) = *((uint *)GEN_TOP(((int)this + 0xe4))) & 0xfffffffd | 1;
  *((byte *)GEN_TOP(((int)this + 0x2c))) = *((byte *)GEN_TOP(((int)this + 0x2c))) & 0xfc;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1097254);
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *(undefined4 *)&REFG(undefined, 0x1097254);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = uVar3;
  *((uint *)GEN_TOP(((int)this + 0xe4))) = *((uint *)GEN_TOP(((int)this + 0xe4))) & 0xfffffff3;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = uVar3;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x84))), REFG(float, 0x1090708));
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = uVar2;
  *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) & 0xfffff820 | 0x20;
  fVar1 = (float10)1;
  *((undefined1 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((float *)GEN_TOP(((int)this + 0x8c))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((float *)GEN_TOP(((int)this + 0x9c))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = uVar3;
  *((float *)GEN_TOP(((int)this + 0xbc))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0xc0))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0xc4))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  return (uint)this;
}

/* ref: FUN_00d228c0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d228c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd228c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint * puVar1;
  int iVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  
  *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) & 0xffffffbf;
  piVar4 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x18)));
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x28)));
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x90))))(piVar4 GEN_EDX_FWD)));
  if (*((short *)GEN_TOP((iVar2 + 6))) == -1) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x6c))))(piVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 8))),(int)this + 0x24,puVar1)
    ;
    if ((char)uVar5 == '\0') {
      return 0;
    }
  }
  else {
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = *((undefined4 *)GEN_TOP((iVar2 + 8)));
    *puVar1 = (uint)*((ushort *)GEN_TOP((iVar2 + 6)));
  }
  F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 0x24))));
  bVar3 = F_00cbeb10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0xb0))) =
       *((uint *)GEN_TOP(((int)this + 0xb0))) ^ ((uint)bVar3 << 7 ^ *((uint *)GEN_TOP(((int)this + 0xb0)))) & 0x80;
  bVar3 = F_00cbe940(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (bVar3 != 0) {
    bVar3 = F_00cbe760(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,*puVar1);
    *((uint *)GEN_TOP(((int)this + 0xb0))) =
         *((uint *)GEN_TOP(((int)this + 0xb0))) ^ ((uint)bVar3 << 5 ^ *((uint *)GEN_TOP(((int)this + 0xb0)))) & 0x20;
    uVar5 = F_00cbe6e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,*puVar1);
    if (uVar5 != 0xffffffff) {
      *((char *)GEN_TOP(((int)this + 0x2d))) = (char)uVar5;
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
      if ((iVar2 != 0) && (bVar3 = F_00d009a0(iVar2 GEN_EDX_ARG), bVar3 != 0)) {
        F_00cbec10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,*puVar1,&(*(undefined4 *)(gen_frame + 0xc)));
        *((undefined4 *)GEN_TOP(((int)this + 0x30))) = (*(undefined4 *)(gen_frame + 0xc));
      }
      F_00cbe880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar5 = F_00cbe7a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,*puVar1);
      *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = *((undefined4 *)GEN_TOP((uVar5 + 0x78)));
      *((undefined1 *)GEN_TOP(((int)this + 0x2c))) = *((undefined1 *)GEN_TOP((uVar5 + 0x6c)));
      F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) | 0x40;
      F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return 1;
    }
  }
  F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d22a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd22a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1097254);
  *param_1 = *(undefined4 *)&REFG(undefined, 0x1097254);
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = (undefined4)gen_fl2bits((float)(float10)1);
  return (uint)param_1;
}

/* ref: FUN_00d22a30 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d22a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd22a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if ((*((byte *)GEN_TOP(((int)this + 0xb0))) & 0x40) == 0) {
    bVar1 = F_00d228c0(this GEN_EDX_FWD);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return *((byte *)GEN_TOP(((int)this + 0xb0))) >> 5 & 1;
}

/* ref: FUN_00d22a60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d22a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd22a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if ((*((byte *)GEN_TOP(((int)this + 0xb0))) & 0x40) == 0) {
    bVar1 = F_00d228c0(this GEN_EDX_FWD);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (uint)*((byte *)GEN_TOP(((int)this + 0x2d)));
}

/* ref: FUN_00d22a80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d22a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd22a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint extraout_EAX = 0;
  int * piVar2;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x120))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x108));
  uVar1 = 0;
  piVar2 = ((int *)GEN_TOP(((int)this + 0xe8)));
  do {
    if (*piVar2 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + uVar1 * 4 + 0xe8))) = param_1;
      break;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar1 < 4);
  if (*((char *)GEN_TOP(((int)this + 0x120))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x108));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00d22ad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d22ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd22ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint extraout_EAX = 0;
  int * piVar2;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x120))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x108));
  uVar1 = 0;
  piVar2 = ((int *)GEN_TOP(((int)this + 0xe8)));
  do {
    if (*piVar2 == param_1) {
      *((undefined4 *)GEN_TOP(((int)this + uVar1 * 4 + 0xe8))) = 0;
      break;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar1 < 4);
  if (*((char *)GEN_TOP(((int)this + 0x120))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x108));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00d22b20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d22b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd22b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  byte bVar2;
  ushort uVar3;
  int * piVar4;
  uint uVar5;
  
  piVar4 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x90))))(piVar4 GEN_EDX_FWD)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((iVar1 + 8))));
  if ((*((byte *)GEN_TOP(((int)this + 0xb0))) & 0x40) == 0) {
    bVar2 = F_00d228c0(this GEN_EDX_ARG);
    if (bVar2 == 0) {
      uVar3 = 0;
      goto LAB_00d22b6b;
    }
  }
  uVar3 = (ushort)*((byte *)GEN_TOP(((int)this + 0x2d)));
LAB_00d22b6b: ;
  *((ushort *)GEN_TOP((param_1 + 0x32))) = uVar3;
  *((undefined4 *)GEN_TOP((param_1 + 0x28))) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x10)));
  *((ushort *)GEN_TOP((param_1 + 0x30))) = (ushort)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 2)));
  *((byte *)GEN_TOP((param_1 + 0x34))) = *((byte *)GEN_TOP(((int)this + 0xb0))) & 1;
  *((undefined4 *)GEN_TOP((param_1 + 0x18))) = *((undefined4 *)GEN_TOP(((int)this + 0x50)));
  *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
  *((undefined4 *)GEN_TOP((param_1 + 0x20))) = *((undefined4 *)GEN_TOP(((int)this + 0x58)));
  if (*((ushort *)GEN_TOP((iVar1 + 6))) != 0xffff) {
    uVar5 = F_00cbe720(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((iVar1 + 6))));
    *((uint *)GEN_TOP((param_1 + 0x24))) = uVar5;
    F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return uVar5;
  }
  *((undefined4 *)GEN_TOP((param_1 + 0x24))) = *((undefined4 *)GEN_TOP((iVar1 + 8)));
  F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0xffff;
}

/* ref: FUN_00d22bf0 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d22bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd22bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x40, 0, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x1c)));
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x38;
    (*(ulonglong *)(gen_frame + 0x8)) = F_00427d90();
    F_00d0bf70(&(*(undefined2 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)));
    uVar1 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc))) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)),0x38);
  }
  return uVar1;
}

/* ref: FUN_00d22c70 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d22c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd22c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined * this_00;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this GEN_EDX_FWD,((undefined4 *)(gen_frame + 0x10)));
    ((undefined4 *)(gen_frame + 0x10))[0] = 0x380404;
    (*(ulonglong *)(gen_frame + 0x18)) = F_00427d90();
    F_00d0bf70(((undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x10)));
    F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc))) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x10)),0x38);
  }
  if ((*((uint *)GEN_TOP(((int)this + 0xb0))) & 0x200) != 0) {
    F_00d2dd80(((undefined1 *)(gen_frame + 0x4)),*((undefined4 *)GEN_TOP(((int)this + 0x24))));
    F_00cbe910(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) & 0xfffffdff;
    F_00cbe3b0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  this_00 = ((undefined *)GEN_TOP(((int)this + 8)));
  bVar1 = F_00cbc040(this_00 GEN_EDX_ARG);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    F_00cbdbf0(this_00 GEN_EDX_ARG,param_1);
    uVar2 = F_00cbbd70(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar2 = F_00cbbdc0(this_00 GEN_EDX_ARG,uVar2);
    F_00cbbdb0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_00d22d50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d22d50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd22d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_2)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = F_00d22c70(param_1 GEN_EDX_FWD,local_c);
  return uVar1;
}

/* ref: FUN_00d22da0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d22da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd22da0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  param_1[1] = (short)param_2 + 0x10;
  *param_1 = 3;
  *(undefined4 *)(param_1 + 2) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x10)));
  *(undefined4 *)(param_1 + 4) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xf4))))(piVar1 GEN_EDX_FWD);
  if (uVar2 == 0) {
    F_00d241f0(param_1 GEN_EDX_ARG,param_1);
  }
  return (uint)(param_1 + 8);
}

/* ref: FUN_00d22df0 */
GEN_LIB GEN_NOFRAME float10 F_00d22df0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xd22df0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_FRAME_DECL(0x40, 0);
  float * pfVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)&REFG(undefined, 0x1097254);
  fVar2 = (float10)param_4;
  if ((float10)1 <= fVar2) {
    (*(float *)(gen_frame + 0x2c)) = (float)((float10)param_3 + (float10)REFG(double, 0x1094800));
    *param_1 = *(float *)&REFG(undefined, 0x1097254);
    param_1[1] = fVar6;
    param_1[2] = fVar6;
    param_1[3] = fVar6;
  }
  else {
    if (fVar2 <= (float10)*(float *)&REFG(undefined, 0x1097254)) {
      (*(float *)(gen_frame + 0x2c)) = param_3;
      pfVar1 = ((float *)GEN_TOP(F_00d034e0(param_2 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)))));
      *param_1 = *pfVar1;
      param_1[1] = pfVar1[1];
      param_1[2] = pfVar1[2];
      fVar6 = pfVar1[3];
    }
    else {
      fVar6 = ((float)GEN_TOF(((fVar2 * (float10)*(double *)&REFG(undefined, 0x1080228)) * (float10)REFG(double, 0x1088108))));
      (*(float *)(gen_frame + 0x2c)) = fVar6;
      fVar2 = ((float10)GEN_TOD(fcos((float10)fVar6)));
      (*(float *)(gen_frame + 0x28)) = (float)fVar2;
      (*(float *)(gen_frame + 0x24)) = (float)fVar2;
      fVar2 = ((float10)GEN_TOD(fsin((float10)fVar6)));
      (*(float *)(gen_frame + 0x28)) = (float)fVar2;
      (*(float *)(gen_frame + 0x2c)) = (float)((float10)(float)fVar2 * (float10)REFG(double, 0x1094800) + (float10)param_3);
      pfVar1 = ((float *)GEN_TOP(F_00d034e0(param_2 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)))));
      fVar3 = *pfVar1 * (*(float *)(gen_frame + 0x24));
      fVar4 = pfVar1[1] * (*(float *)(gen_frame + 0x24));
      fVar5 = pfVar1[2] * (*(float *)(gen_frame + 0x24));
      fVar6 = pfVar1[3] * (*(float *)(gen_frame + 0x24));
      (*(float *)(gen_frame + 0x0)) = fVar3;
      (*(float *)(gen_frame + 0x4)) = fVar4;
      (*(float *)(gen_frame + 0x8)) = fVar5;
      (*(float *)(gen_frame + 0xc)) = fVar6;
      (*(float *)(gen_frame + 0x14)) = fVar3;
      *param_1 = fVar3;
      (*(float *)(gen_frame + 0x18)) = fVar4;
      param_1[1] = fVar4;
      (*(float *)(gen_frame + 0x1c)) = fVar5;
      param_1[2] = fVar5;
      (*(float *)(gen_frame + 0x20)) = fVar6;
    }
    param_1[3] = fVar6;
  }
  fVar2 = (float10)1;
  if (!((float10)(*(float *)(gen_frame + 0x2c)) <= fVar2) != (GEN_ISNAN(fVar2) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x2c))))) {
    (*(float *)(gen_frame + 0x2c)) = (float)fVar2;
  }
  param_1[3] = (float)fVar2;
  return (float10)(*(float *)(gen_frame + 0x2c));
}

/* ref: FUN_00d22f40 */
GEN_LIB GEN_NOFRAME float10 GEN_THISCALL F_00d22f40(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd22f40u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_3c;
  float fStack_38;
  volatile float fStack_34;
  float fStack_2c;
  float fStack_28;
  volatile float fStack_24;
  
  if (1 < *((int *)GEN_TOP((param_1 + 0xac)))) {
    fVar1 = (float10)param_2;
    fVar2 = (float10)*(float *)&REFG(undefined, 0x1097254);
    if ((GEN_ISNAN(fVar2) || GEN_ISNAN(fVar1)) == ((GEN_ISNAN(fVar2) || GEN_ISNAN(fVar1)) || fVar2 == fVar1)) {
      fStack_2c = *((float *)GEN_TOP((param_1 + 0x44)));
      fStack_3c = *((float *)GEN_TOP((param_1 + 0x54)));
      if (param_3 == 0) {
        fStack_2c = *(float *)&REFG(undefined, 0x1097254);
        fStack_3c = *(float *)&REFG(undefined, 0x1097254);
      }
      fVar3 = fStack_2c * fStack_2c;
      fVar5 = *((float *)GEN_TOP((param_1 + 0x48))) * *((float *)GEN_TOP((param_1 + 0x48)));
      fStack_2c = (fVar5 + fVar3) + fVar3;
      fStack_28 = (fVar5 + fVar5) + fVar3;
      fStack_24 = (fVar5 + *((float *)GEN_TOP((param_1 + 0x4c))) * *((float *)GEN_TOP((param_1 + 0x4c)))) + fVar3;
      fVar4 = fStack_3c * fStack_3c;
      fVar6 = *((float *)GEN_TOP((param_1 + 0x58))) * *((float *)GEN_TOP((param_1 + 0x58)));
      fStack_3c = (fVar6 + fVar4) + fVar4;
      fStack_38 = (fVar6 + fVar6) + fVar4;
      fStack_34 = (fVar6 + *((float *)GEN_TOP((param_1 + 0x5c))) * *((float *)GEN_TOP((param_1 + 0x5c)))) + fVar4;
      fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF((((float10)((float)GEN_TOF(((((float10)GEN_TOD(GEN_X87(SQRT((fVar5 + *((float *)GEN_TOP((param_1 
                                                  + 0x40))) * *((float *)GEN_TOP((param_1 + 0x40)))) + fVar3)))) -
                                                  ((float10)GEN_TOD(GEN_X87(SQRT((fVar6 + *((float *)GEN_TOP((param_1 + 0x50)))
                                                                         * *((float *)GEN_TOP((param_1 + 0x50
                                                                                     )))) + fVar4))))) /
                                                  (float10)*(double *)&REFG(undefined, 0x10947f0)))) +
                                       (float10)*(double *)&REFG(undefined, 0x1133e48)) /
                                      (float10)*(double *)&REFG(undefined, 0x1133e48)))) * fVar1 +
                     ((float10)1 - fVar1))));
      fVar1 = (float10)fVar3;
      if (!(fVar1 <= fVar2) || ((GEN_ISNAN(fVar2) || GEN_ISNAN(fVar1)) || fVar2 == fVar1)) {
        return (float10)fVar3;
      }
      return (float10)*(float *)&REFG(undefined, 0x1097254);
    }
  }
  return (float10)1;
}

/* ref: FUN_00d23090 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00d23090(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd23090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0xc0, 0);
  float fVar1;
  float fVar2;
  uint uVar3;
  float * pfVar4;
  bool bVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  (*(float *)(gen_frame + 0xa0)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0xa4)) = (float)(float10)1;
  fVar9 = param_2[2];
  (*(float *)(gen_frame + 0x84)) = param_2[1];
  (*(float *)(gen_frame + 0xa8)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x80)) = *param_2;
  (*(float *)(gen_frame + 0xac)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x88)) = fVar9;
  (*(float *)(gen_frame + 0x8c)) = param_2[3];
  uVar3 = F_004ec420(((undefined1 *)(gen_frame + 0x0)));
  F_004eb4e0(param_1 GEN_EDX_ARG,uVar3);
  fVar6 = (float10)*(float *)&REFG(undefined, 0x1097254);
  bVar5 = GEN_ISNAN(fVar6) || GEN_ISNAN((float10)*param_2);
  if (((bVar5 == (bVar5 || fVar6 == (float10)*param_2)) ||
      (bVar5 = GEN_ISNAN(fVar6) || GEN_ISNAN((float10)param_2[1]),
      bVar5 == (bVar5 || fVar6 == (float10)param_2[1]))) ||
     (bVar5 = GEN_ISNAN((float10)param_2[2]) || GEN_ISNAN(fVar6),
     bVar5 == (bVar5 || (float10)param_2[2] == fVar6))) {
    pfVar4 = ((float *)GEN_TOP(F_00d034e0(&(*(float *)(gen_frame + 0x80)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x60)))));
    fVar1 = *(float *)&REFG(undefined, 0x1097254);
    fVar9 = *pfVar4;
    fVar2 = pfVar4[1];
    fVar8 = pfVar4[2];
    fVar7 = pfVar4[3];
    (*(float *)(gen_frame + 0x8c)) = fVar7;
    (*(float *)(gen_frame + 0x80)) = fVar9;
    (*(float *)(gen_frame + 0x84)) = fVar2;
    (*(float *)(gen_frame + 0x88)) = fVar8;
    (*(float *)(gen_frame + 0x60)) = fVar9;
    (*(float *)(gen_frame + 0x64)) = fVar2;
    (*(float *)(gen_frame + 0x68)) = fVar8;
    (*(float *)(gen_frame + 0x6c)) = fVar7;
    (*(float *)(gen_frame + 0x50)) = fVar2;
    (*(float *)(gen_frame + 0x54)) = fVar8;
    (*(float *)(gen_frame + 0x58)) = fVar9;
    (*(float *)(gen_frame + 0x5c)) = fVar7;
    (*(float *)(gen_frame + 0x40)) = fVar8;
    (*(float *)(gen_frame + 0x44)) = fVar9;
    (*(float *)(gen_frame + 0x48)) = fVar2;
    (*(float *)(gen_frame + 0x4c)) = fVar7;
    fVar10 = (*(float *)(gen_frame + 0xa4)) * fVar8 - (*(float *)(gen_frame + 0xa8)) * fVar2;
    fVar11 = (*(float *)(gen_frame + 0xa8)) * fVar9 - (*(float *)(gen_frame + 0xa0)) * fVar8;
    fVar12 = (*(float *)(gen_frame + 0xa0)) * fVar2 - (*(float *)(gen_frame + 0xa4)) * fVar9;
    (*(float *)(gen_frame + 0x90)) = fVar10;
    (*(float *)(gen_frame + 0x94)) = fVar11;
    (*(float *)(gen_frame + 0x98)) = fVar12;
    (*(float *)(gen_frame + 0x9c)) = (*(float *)(gen_frame + 0xac));
    (*(float *)(gen_frame + 0x70)) = fVar10;
    (*(float *)(gen_frame + 0x74)) = fVar11;
    (*(float *)(gen_frame + 0x78)) = fVar12;
    (*(float *)(gen_frame + 0x7c)) = (*(float *)(gen_frame + 0xac));
    fVar6 = (float10)*(float *)&REFG(undefined, 0x1097254);
    bVar5 = GEN_ISNAN(fVar6) || GEN_ISNAN((float10)fVar10);
    if (((bVar5 != (bVar5 || fVar6 == (float10)fVar10)) &&
        (bVar5 = GEN_ISNAN(fVar6) || GEN_ISNAN((float10)fVar11), bVar5 != (bVar5 || fVar6 == (float10)fVar11)))
       && (bVar5 = GEN_ISNAN(fVar6) || GEN_ISNAN((float10)fVar12), bVar5 != (bVar5 || fVar6 == (float10)fVar12))
       ) {
      (*(float *)(gen_frame + 0xa0)) = *(float *)&REFG(undefined, 0x1097254);
      *param_1 = *(float *)&REFG(undefined, 0x1097254);
      (*(float *)(gen_frame + 0xa4)) = fVar1;
      param_1[1] = fVar1;
      (*(float *)(gen_frame + 0xa8)) = fVar2;
      param_1[2] = fVar2;
      fVar10 = (float)(float10)1;
      (*(float *)(gen_frame + 0xac)) = fVar10;
      param_1[3] = fVar10;
      (*(float *)(gen_frame + 0xa0)) = fVar2;
      param_1[4] = fVar2;
      (*(float *)(gen_frame + 0xa8)) = fVar1;
      param_1[5] = fVar1;
      param_1[6] = fVar1;
      fVar1 = (float)(float10)1;
      (*(float *)(gen_frame + 0xac)) = fVar1;
      param_1[7] = fVar1;
      param_1[8] = fVar9;
      param_1[9] = fVar2;
      param_1[10] = fVar8;
      param_1[0xb] = fVar7;
      return (uint)param_1;
    }
    pfVar4 = ((float *)GEN_TOP(F_00d034e0(&(*(float *)(gen_frame + 0x90)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x70)))));
    fVar9 = *pfVar4;
    fVar2 = pfVar4[1];
    fVar8 = pfVar4[2];
    fVar7 = pfVar4[3];
    (*(float *)(gen_frame + 0x90)) = fVar9;
    (*(float *)(gen_frame + 0x9c)) = fVar7;
    (*(float *)(gen_frame + 0x94)) = fVar2;
    (*(float *)(gen_frame + 0x98)) = fVar8;
    *param_1 = fVar9;
    param_1[1] = fVar2;
    param_1[2] = fVar8;
    param_1[3] = fVar7;
    fVar7 = fVar8 * (*(float *)(gen_frame + 0x50)) - fVar2 * (*(float *)(gen_frame + 0x40));
    fVar8 = fVar9 * (*(float *)(gen_frame + 0x54)) - fVar8 * (*(float *)(gen_frame + 0x44));
    fVar9 = fVar2 * (*(float *)(gen_frame + 0x58)) - fVar9 * (*(float *)(gen_frame + 0x48));
    (*(float *)(gen_frame + 0x90)) = fVar7;
    (*(float *)(gen_frame + 0x94)) = fVar8;
    (*(float *)(gen_frame + 0x98)) = fVar9;
    (*(float *)(gen_frame + 0x9c)) = (*(float *)(gen_frame + 0x6c));
    (*(float *)(gen_frame + 0x70)) = fVar7;
    param_1[4] = fVar7;
    (*(float *)(gen_frame + 0x74)) = fVar8;
    param_1[5] = fVar8;
    (*(float *)(gen_frame + 0x78)) = fVar9;
    param_1[6] = fVar9;
    (*(float *)(gen_frame + 0x7c)) = (*(float *)(gen_frame + 0x6c));
    param_1[7] = (*(float *)(gen_frame + 0x6c));
    param_1[8] = (*(float *)(gen_frame + 0x80));
    param_1[9] = (*(float *)(gen_frame + 0x84));
    param_1[10] = (*(float *)(gen_frame + 0x88));
    param_1[0xb] = (*(float *)(gen_frame + 0x8c));
  }
  return (uint)param_1;
}

/* ref: FUN_00d23370 */
GEN_LIB_GS GEN_FRAME float10 GEN_THISCALL F_00d23370(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd23370u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_GS(0xac, 4, 4);
  float fVar1;
  float fVar2;
  int * piVar3;
  uint uVar4;
  float * pfVar5;
  float10 fVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa8));
  piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1c))) + 0xc)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x98))))(piVar3 GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
  if ((char)uVar4 == '\0') {
    return (float10)*(float *)&REFG(undefined, 0x1097254);
  }
  fVar6 = ((float10)GEN_TOD(fcos((float10)param_2)));
  (*(float *)(gen_frame + 0x60)) = (float)fVar6;
  (*(float *)(gen_frame + 0x40)) = (float)((float10)(float)fVar6 * (float10)*(double *)&REFG(undefined, 0x1088120));
  (*(float *)(gen_frame + 0x44)) = *(float *)&REFG(undefined, 0x1097254);
  fVar6 = ((float10)GEN_TOD(fsin((float10)param_2)));
  (*(float *)(gen_frame + 0x60)) = (float)fVar6;
  (*(float *)(gen_frame + 0x48)) = (float)((float10)(float)fVar6 * (float10)*(double *)&REFG(undefined, 0x1088120));
  fVar6 = (float10)1;
  (*(float *)(gen_frame + 0x4c)) = (float)fVar6;
  (*(float *)(gen_frame + 0x50)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x54)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x58)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x98)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x5c)) = (float)fVar6;
  (*(float *)(gen_frame + 0x5c)) = (float)fVar6;
  (*(float *)(gen_frame + 0x94)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x9c)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0xa0)) = (float)fVar6;
  F_004eb600(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_004eb4e0(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pfVar5 = ((float *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0x40)))));
  fVar1 = *pfVar5;
  fVar2 = pfVar5[1];
  (*(float *)(gen_frame + 0x40)) = fVar1;
  (*(float *)(gen_frame + 0x48)) = pfVar5[2];
  (*(float *)(gen_frame + 0x44)) = fVar2;
  (*(float *)(gen_frame + 0x4c)) = pfVar5[3];
  fVar6 = ((float10)GEN_TOD(atan2((float10)pfVar5[2],(float10)fVar1)));
  fVar1 = (float)fVar6;
  (*(float *)(gen_frame + 0x60)) = fVar1;
  fVar6 = (float10)fVar1;
  if (!((float10)*(float *)&REFG(undefined, 0x1097254) <= fVar6) !=
      (GEN_ISNAN(fVar6) || GEN_ISNAN((float10)*(float *)&REFG(undefined, 0x1097254)))) {
    (*(float *)(gen_frame + 0x60)) = (float)(fVar6 + (float10)REFG(double, 0x10920b8));
    fVar6 = GEN_X87((float10)(float)(fVar6 + (float10)REFG(double, 0x10920b8)));
  }
  return fVar6;
}

/* ref: FUN_00d234c0 */
GEN_LIB_GS GEN_FRAME float10 GEN_THISCALL F_00d234c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd234c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_GS(0x6c, 4, 4);
  float fVar1;
  float fVar2;
  int * piVar3;
  uint uVar4;
  float * pfVar5;
  float10 fVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x68));
  piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1c))) + 0xc)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x98))))(piVar3 GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x24)));
  if ((char)uVar4 == '\0') {
    return (float10)*(float *)&REFG(undefined, 0x1097254);
  }
  fVar6 = ((float10)GEN_TOD(fcos((float10)param_2)));
  (*(float *)(gen_frame + 0x20)) = (float)fVar6;
  (*(float *)(gen_frame + 0x0)) = (float)((float10)(float)fVar6 * (float10)*(double *)&REFG(undefined, 0x1088120));
  (*(float *)(gen_frame + 0x4)) = *(float *)&REFG(undefined, 0x1097254);
  fVar6 = ((float10)GEN_TOD(fsin((float10)param_2)));
  (*(float *)(gen_frame + 0x20)) = (float)fVar6;
  (*(float *)(gen_frame + 0x8)) = (float)((float10)(float)fVar6 * (float10)*(double *)&REFG(undefined, 0x1088120));
  fVar6 = (float10)1;
  (*(float *)(gen_frame + 0xc)) = (float)fVar6;
  (*(float *)(gen_frame + 0x10)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x14)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x18)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x58)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x1c)) = (float)fVar6;
  (*(float *)(gen_frame + 0x1c)) = (float)fVar6;
  (*(float *)(gen_frame + 0x5c)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x54)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x60)) = (float)fVar6;
  pfVar5 = ((float *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x0)))));
  fVar1 = *pfVar5;
  fVar2 = pfVar5[1];
  (*(float *)(gen_frame + 0x0)) = fVar1;
  (*(float *)(gen_frame + 0x4)) = fVar2;
  (*(float *)(gen_frame + 0x8)) = pfVar5[2];
  (*(float *)(gen_frame + 0xc)) = pfVar5[3];
  fVar6 = ((float10)GEN_TOD(atan2((float10)pfVar5[2],(float10)fVar1)));
  fVar1 = (float)fVar6;
  (*(float *)(gen_frame + 0x20)) = fVar1;
  fVar6 = (float10)fVar1;
  if (!((float10)*(float *)&REFG(undefined, 0x1097254) <= fVar6) !=
      (GEN_ISNAN(fVar6) || GEN_ISNAN((float10)*(float *)&REFG(undefined, 0x1097254)))) {
    (*(float *)(gen_frame + 0x20)) = (float)(fVar6 + (float10)REFG(double, 0x10920b8));
    fVar6 = GEN_X87((float10)(float)(fVar6 + (float10)REFG(double, 0x10920b8)));
  }
  return fVar6;
}

/* ref: FUN_00d235f0 */
GEN_LIB GEN_NOFRAME uint F_00d235f0(GEN_P(float * in_eax, unsigned int gen_a0), GEN_P(float * in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xd235f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_eax = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1] * in_ecx[1];
  fVar2 = in_ecx[2] * in_ecx[2];
  fVar3 = in_ecx[3] * in_ecx[3];
  *in_eax = SQRT(((fVar1 + *in_ecx * *in_ecx) + fVar2) + fVar3);
  in_eax[1] = ((fVar1 + fVar1) + fVar2) + fVar3;
  in_eax[2] = ((fVar1 + fVar2) + fVar2) + fVar3;
  in_eax[3] = ((fVar1 + fVar3) + fVar2) + fVar3;
  return (uint)in_eax;
}

/* ref: FUN_00d23680 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d23680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd23680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x4c, 4, 4);
  int * piVar1;
  byte bVar2;
  uint extraout_EAX = 0;
  undefined4 uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133dc4));
  *((undefined1 *)GEN_TOP(((int)this + 0x120))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x108));
  (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(((int)this + 0xe8)));
  (*(int *)(gen_frame + 0x4)) = 4;
  do {
    piVar1 = ((int *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x8))));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      bVar2 = F_00cbc040(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
      if (bVar2 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x20))));
      }
      else {
        F_00cbbe30(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,piVar1);
        F_00cbca50(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x20))));
      }
    }
    (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)(gen_frame + 0x8)) + 1;
    (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) - 1;
  } while ((*(int *)(gen_frame + 0x4)) != 0);
  if (*((char *)GEN_TOP(((int)this + 0x34))) == '\0') {
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x38)));
  }
  else {
    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x4)) + 0)) = gen_x87_cw | 0xc00;
    gen_set_x87_cw((unsigned short)(ushort)(*(int *)(gen_frame + 0x4)));
    (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)
               (longlong)
               TRUNC((double)((float)GEN_TOF(((float10)*((int *)GEN_TOP(((int)this + 0x3c))) /
                                    (float10)*(double *)&REFG(undefined, 0x1097260)))) * *(double *)&REFG(undefined, 0x10912a8));
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    uVar3 = (*(undefined4 *)(gen_frame + 0x0));
  }
  F_00d22c70(this GEN_EDX_ARG,uVar3);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this GEN_EDX_ARG,((undefined4 *)(gen_frame + 0xc)));
    ((undefined4 *)(gen_frame + 0xc))[0] = 0x380402;
    (*(ulonglong *)(gen_frame + 0x14)) = F_00427d90();
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc))) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0xc)),0x38);
  }
  if (*((char *)GEN_TOP(((int)this + 0x120))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x108));
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x108));
  F_00cbbdb0((int)this + 8 GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00d237c0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d237c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(float param_8, float gen_a7))
{
  GEN_ENTER(0xd237c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_FRAME_DECL(0xd0, 0);
  int * this;
  double dVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  float * pfVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  (*(uint *)(gen_frame + 0xbc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0);
  (*(float * PTR32 *)(gen_frame + 0x2c)) = param_2;
  this = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1c))) + 0xc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = param_4;
  (*(float * PTR32 *)(gen_frame + 0x30)) = param_3;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x98))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  if ((char)uVar4 != '\0') {
    fVar11 = *(*(float * PTR32 *)(gen_frame + 0x2c));
    (*(float *)(gen_frame + 0x3c)) = (float)(float10)1;
    fVar12 = (*(float * PTR32 *)(gen_frame + 0x2c))[1];
    (*(float *)(gen_frame + 0xac)) = fVar11;
    (*(float *)(gen_frame + 0xb0)) = fVar12;
    (*(float *)(gen_frame + 0xb4)) = (*(float * PTR32 *)(gen_frame + 0x2c))[2];
    (*(float *)(gen_frame + 0xb8)) = (*(float * PTR32 *)(gen_frame + 0x2c))[3];
    if (((*((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x18))) + 0xc))) & 4) == 0) && (bVar2 = F_00d01b90(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0xac)),&(*(float *)(gen_frame + 0x3c)),(*(undefined4 * PTR32 *)(gen_frame + 0x28)),&(*(float *)(gen_frame + 0x9c)),&(*(float *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x24)), &(*(float *)(gen_frame + 0x38))), fVar11 = *(float *)&REFG(undefined, 0x1097254), bVar2 == 1)) {
      fVar7 = (float10)*(float *)&REFG(undefined, 0x1097254);
      *((float *)GEN_TOP((param_1 + 0x94))) = *(float *)&REFG(undefined, 0x1097254);
      fVar8 = (float10)param_5;
      fVar9 = (float10)(*(float *)(gen_frame + 0x38));
      fVar10 = (float10)param_6;
      if ((((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar8)) == ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar8)) || fVar7 == fVar8)) || ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar10)) == ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar10)) || fVar7 == fVar10))) && ((bVar6 = GEN_ISNAN(fVar7) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x3c))), bVar6 == (bVar6 || fVar7 == (float10)(*(float *)(gen_frame + 0x3c))) || (bVar6 = GEN_ISNAN(fVar7) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x34))), bVar6 == (bVar6 || fVar7 == (float10)(*(float *)(gen_frame + 0x34))))))) {
        if (!(fVar8 <= fVar9) || ((GEN_ISNAN(fVar9) || GEN_ISNAN(fVar8)) || fVar9 == fVar8)) {
          if (!(fVar10 <= fVar9) == (GEN_ISNAN(fVar9) || GEN_ISNAN(fVar10))) {
            (*(float *)(gen_frame + 0x54)) = (float)(fVar9 - fVar10);
            fVar11 = ((float)GEN_TOF(((float10)(float)(fVar9 - fVar10) / (fVar8 - fVar10))));
            (*(float *)(gen_frame + 0x54)) = fVar11;
            fVar11 = (float)((float10)1 - (float10)fVar11);
            (*(float *)(gen_frame + 0x54)) = fVar11;
            fVar8 = GEN_X87((float10)fVar11 * (float10)param_7);
          }
          else {
            (*(float *)(gen_frame + 0x54)) = (float)(fVar9 / fVar10);
            fVar11 = ((float)GEN_TOF(((float10)1 - (float10)(float)(fVar9 / fVar10))));
            (*(float *)(gen_frame + 0x54)) = fVar11;
            fVar8 = GEN_X87((float10)param_7 + (float10)fVar11 * ((float10)1 - (float10)param_7));
          }
          (*(float *)(gen_frame + 0x54)) = (float)fVar8;
        }
        else {
          (*(float *)(gen_frame + 0x54)) = fVar11;
        }
        (*(float *)(gen_frame + 0x3c)) = (float)((float10)(*(float *)(gen_frame + 0x54)) * (float10)(*(float *)(gen_frame + 0x3c)));
        (*(float *)(gen_frame + 0x34)) = (float)((float10)*(*(float * PTR32 *)(gen_frame + 0x30)) * (float10)(*(float *)(gen_frame + 0x34)));
      }
      if (!((float10)(*(float *)(gen_frame + 0x34)) <= (float10)(*(float *)(gen_frame + 0x3c))) == (GEN_ISNAN((float10)(*(float *)(gen_frame + 0x3c))) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x34))))) {
        *(*(float * PTR32 *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x3c));
      }
      else {
        (*(float *)(gen_frame + 0xac)) = (*(float *)(gen_frame + 0x9c));
        (*(float *)(gen_frame + 0xb0)) = (*(float *)(gen_frame + 0xa0));
        *(*(float * PTR32 *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x34));
        (*(float *)(gen_frame + 0xb8)) = (*(float *)(gen_frame + 0xa8));
        (*(float *)(gen_frame + 0xb4)) = (*(float *)(gen_frame + 0xa4));
        *(*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (*(undefined4 *)(gen_frame + 0x24));
        F_00c34320(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x40)),(*(float * PTR32 *)(gen_frame + 0x2c)));
        fVar11 = (*(float *)(gen_frame + 0x44)) * (*(float *)(gen_frame + 0x44));
        fVar12 = (*(float *)(gen_frame + 0x48)) * (*(float *)(gen_frame + 0x48));
        fVar14 = GEN_X87(SQRT((fVar12 + (*(float *)(gen_frame + 0x40)) * (*(float *)(gen_frame + 0x40))) + fVar11));
        (*(float *)(gen_frame + 0x40)) = fVar14;
        (*(float *)(gen_frame + 0x44)) = (fVar12 + fVar11) + fVar11;
        (*(float *)(gen_frame + 0x48)) = (fVar12 + fVar12) + fVar11;
        (*(float *)(gen_frame + 0x4c)) = (fVar12 + (*(float *)(gen_frame + 0x4c)) * (*(float *)(gen_frame + 0x4c))) + fVar11;
        (*(float *)(gen_frame + 0x38)) = fVar14;
        fVar9 = (float10)fVar14;
        fVar7 = (float10)*(float *)&REFG(undefined, 0x1097254);
      }
      bVar6 = GEN_ISNAN(fVar7) || GEN_ISNAN((float10)param_5);
      if ((bVar6 == (bVar6 || fVar7 == (float10)param_5)) || (bVar6 = GEN_ISNAN((float10)param_6) || GEN_ISNAN(fVar7), bVar6 == (bVar6 || (float10)param_6 == fVar7) )) {
        F_00d21b00(param_1 GEN_EDX_ARG,(float)fVar9,param_5,param_6,param_8);
        bVar6 = GEN_ISNAN((float10)*(float *)&REFG(undefined, 0x1097254)) || GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0xb4))));
        if (bVar6 == (bVar6 || (float10)*(float *)&REFG(undefined, 0x1097254) == (float10)*((float *)GEN_TOP((param_1 + 0xb4))))) {
          F_00d21ba0(((undefined4)(uint)(param_1)) GEN_EDX_ARG,(*(float *)(gen_frame + 0x38)),param_6,param_5);
        }
        F_00d21c40(param_1 GEN_EDX_ARG,(*(float *)(gen_frame + 0x38)));
      }
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x24))))(this GEN_EDX_ARG);
      if ((char)uVar4 != '\0') {
        (*(float *)(gen_frame + 0xb8)) = (float)(float10)1;
        F_00c34320(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0xac)));
        uVar4 = F_00d03460(param_1 + 0x70 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0xac)));
        pfVar5 = ((float *)GEN_TOP(F_00d235f0(((undefined1 *)(gen_frame + 0x0)),uVar4)));
        dVar1 = (double)*pfVar5;
        if (REFG(double, 0x1094800) <= dVar1 && ((!GEN_ISNAN(dVar1) && !GEN_ISNAN(REFG(double, 0x1094800))) && dVar1 != REFG(double, 0x1094800))) {
          *((uint *)GEN_TOP((param_1 + 0xe4))) = *((uint *)GEN_TOP((param_1 + 0xe4))) | 4;
        }
        *((float *)GEN_TOP((param_1 + 0x70))) = (*(float *)(gen_frame + 0xac));
        *((float *)GEN_TOP((param_1 + 0x74))) = (*(float *)(gen_frame + 0xb0));
        *((float *)GEN_TOP((param_1 + 0x78))) = (*(float *)(gen_frame + 0xb4));
        *((float *)GEN_TOP((param_1 + 0x7c))) = (*(float *)(gen_frame + 0xb8));
        *((float *)GEN_TOP((param_1 + 0x60))) = (*(float *)(gen_frame + 0x40));
        *((float *)GEN_TOP((param_1 + 100))) = (*(float *)(gen_frame + 0x44));
        *((float *)GEN_TOP((param_1 + 0x68))) = (*(float *)(gen_frame + 0x48));
        *((float *)GEN_TOP((param_1 + 0x6c))) = (*(float *)(gen_frame + 0x4c));
      }
      return 1;
    }
    F_00c34320(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0xac)));
    fVar8 = (float10)*(float *)&REFG(undefined, 0x1097254);
    bVar6 = GEN_ISNAN(fVar8) || GEN_ISNAN((float10)param_5);
    fVar11 = (*(float *)(gen_frame + 0x44)) * (*(float *)(gen_frame + 0x44));
    fVar12 = (*(float *)(gen_frame + 0x48)) * (*(float *)(gen_frame + 0x48));
    fVar14 = GEN_X87(SQRT((fVar12 + (*(float *)(gen_frame + 0x40)) * (*(float *)(gen_frame + 0x40))) + fVar11));
    (*(float *)(gen_frame + 0x40)) = fVar14;
    (*(float *)(gen_frame + 0x44)) = (fVar12 + fVar11) + fVar11;
    (*(float *)(gen_frame + 0x48)) = (fVar12 + fVar12) + fVar11;
    (*(float *)(gen_frame + 0x4c)) = (fVar12 + (*(float *)(gen_frame + 0x4c)) * (*(float *)(gen_frame + 0x4c))) + fVar11;
    if ((bVar6 == (bVar6 || fVar8 == (float10)param_5)) || (bVar6 = GEN_ISNAN((float10)param_6) || GEN_ISNAN(fVar8), bVar6 == (bVar6 || (float10)param_6 == fVar8))) {
      F_00d21b00(param_1 GEN_EDX_ARG,fVar14,param_5,param_6,param_8);
      bVar6 = GEN_ISNAN((float10)*(float *)&REFG(undefined, 0x1097254)) || GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0xb4))));
      if (bVar6 == (bVar6 || (float10)*(float *)&REFG(undefined, 0x1097254) == (float10)*((float *)GEN_TOP((param_1 + 0xb4))) )) {
        F_00d21ba0(((undefined4)(uint)(param_1)) GEN_EDX_ARG,(*(float *)(gen_frame + 0x40)),param_6,param_5);
      }
      F_00d21c40(param_1 GEN_EDX_ARG,(*(float *)(gen_frame + 0x40)));
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x24))))(this GEN_EDX_ARG);
    if ((char)uVar4 != '\0') {
      fVar11 = *((float *)GEN_TOP((param_1 + 0x70))) - (*(float *)(gen_frame + 0xac));
      fVar12 = *((float *)GEN_TOP((param_1 + 0x74))) - (*(float *)(gen_frame + 0xb0));
      fVar14 = *((float *)GEN_TOP((param_1 + 0x78))) - (*(float *)(gen_frame + 0xb4));
      fVar13 = *((float *)GEN_TOP((param_1 + 0x7c))) - (*(float *)(gen_frame + 0xb8));
      (*(float *)(gen_frame + 0x40)) = fVar11;
      (*(float *)(gen_frame + 0x44)) = fVar12;
      (*(float *)(gen_frame + 0x48)) = fVar14;
      (*(float *)(gen_frame + 0x4c)) = fVar13;
      (*(float *)(gen_frame + 0x9c)) = fVar11;
      (*(float *)(gen_frame + 0xa0)) = fVar12;
      (*(float *)(gen_frame + 0xa4)) = fVar14;
      (*(float *)(gen_frame + 0xa8)) = fVar13;
      fVar12 = fVar12 * fVar12;
      fVar14 = fVar14 * fVar14;
      fVar13 = fVar13 * fVar13;
      fVar11 = GEN_X87(SQRT(((fVar12 + fVar11 * fVar11) + fVar14) + fVar13));
      (*(float *)(gen_frame + 0x40)) = fVar11;
      (*(float *)(gen_frame + 0x44)) = ((fVar12 + fVar12) + fVar14) + fVar13;
      (*(float *)(gen_frame + 0x48)) = ((fVar12 + fVar14) + fVar14) + fVar13;
      (*(float *)(gen_frame + 0x4c)) = ((fVar12 + fVar13) + fVar14) + fVar13;
      dVar1 = (double)fVar11;
      if (REFG(double, 0x1094800) <= dVar1 && ((!GEN_ISNAN(dVar1) && !GEN_ISNAN(REFG(double, 0x1094800))) && dVar1 != REFG(double, 0x1094800))) {
        *((uint *)GEN_TOP((param_1 + 0xe4))) = *((uint *)GEN_TOP((param_1 + 0xe4))) | 4;
      }
      *((float *)GEN_TOP((param_1 + 0x70))) = (*(float *)(gen_frame + 0xac));
      *((float *)GEN_TOP((param_1 + 0x74))) = (*(float *)(gen_frame + 0xb0));
      *((float *)GEN_TOP((param_1 + 0x78))) = (*(float *)(gen_frame + 0xb4));
      *((float *)GEN_TOP((param_1 + 0x7c))) = (*(float *)(gen_frame + 0xb8));
      *((float *)GEN_TOP((param_1 + 0x8c))) = (float)(float10)1;
    }
  }
  return 0;
}

/* ref: FUN_00d23d50 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d23d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd23d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0xf0, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int * piVar5;
  byte bVar6;
  int * piVar7;
  uint uVar8;
  float * pfVar9;
  int iVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  (*(uint *)(gen_frame + 0xdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe0);
  (*(float * PTR32 *)(gen_frame + 0x68)) = param_2;
  piVar5 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  (*(float * PTR32 *)(gen_frame + 0x6c)) = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0x90)) = this;
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x98))))(piVar5 GEN_EDX_FWD)));
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x30))))(piVar7 GEN_EDX_ARG,&(*(float *)(gen_frame + 0xac)));
  if (((char)uVar8 != '\0') && (bVar6 = F_00d00970(&(*(float *)(gen_frame + 0xac)),param_1), bVar6 != 0)) {
    fVar1 = param_1[3];
    fVar2 = param_1[1];
    fVar3 = param_1[2];
    (*(int *)(gen_frame + 0x94)) = 0;
    (*(float *)(gen_frame + 0x70)) = *param_1 - (*(float *)(gen_frame + 0xac));
    (*(float *)(gen_frame + 0x74)) = fVar2 - (*(float *)(gen_frame + 0xb0));
    (*(float *)(gen_frame + 0x78)) = fVar3 - (*(float *)(gen_frame + 0xb4));
    (*(float *)(gen_frame + 0x7c)) = fVar1 - (*(float *)(gen_frame + 0xb8));
    (*(float *)(gen_frame + 0x98)) = *param_1 - (*(float *)(gen_frame + 0xac));
    (*(float *)(gen_frame + 0x9c)) = fVar2 - (*(float *)(gen_frame + 0xb0));
    (*(float *)(gen_frame + 0xa0)) = fVar3 - (*(float *)(gen_frame + 0xb4));
    (*(float *)(gen_frame + 0xa4)) = fVar1 - (*(float *)(gen_frame + 0xb8));
    pfVar9 = ((float *)GEN_TOP(F_00d034e0(&(*(float *)(gen_frame + 0x98)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x50)))));
    fVar1 = pfVar9[1];
    (*(float *)(gen_frame + 0x98)) = *pfVar9;
    (*(float *)(gen_frame + 0x9c)) = fVar1;
    (*(float *)(gen_frame + 0xa0)) = pfVar9[2];
    (*(float *)(gen_frame + 0xa4)) = pfVar9[3];
    F_00d23090(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x98)));
    (*(int *)(gen_frame + 0x8c)) = 0;
    do {
      fVar1 = (float)((float10)(*(int *)(gen_frame + 0x8c)) * (float10)*(double *)&REFG(undefined, 0x109cb10));
      (*(undefined * PTR32 *)(gen_frame + 0x90)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar1)));
      fVar11 = ((float10)GEN_TOD(fsin((float10)fVar1)));
      (*(float *)(gen_frame + 0xa8)) = (float)fVar11;
      fVar11 = (float10)(float)fVar11;
      (*(float *)(gen_frame + 0xbc)) = (float)(fVar11 + fVar11);
      (*(float *)(gen_frame + 0xc4)) = *(float *)&REFG(undefined, 0x1097254);
      fVar11 = ((float10)GEN_TOD(fcos((float10)fVar1)));
      (*(float *)(gen_frame + 0xa8)) = (float)fVar11;
      fVar11 = (float10)(float)fVar11;
      (*(float *)(gen_frame + 0xc0)) = (float)(fVar11 + fVar11);
      (*(float *)(gen_frame + 0xc8)) = (float)(float10)1;
      pfVar9 = ((float *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0xbc)))));
      fVar12 = *pfVar9;
      (*(float *)(gen_frame + 0xbc)) = fVar12;
      fVar13 = pfVar9[1];
      (*(float *)(gen_frame + 0xc0)) = fVar13;
      fVar14 = pfVar9[2];
      (*(float *)(gen_frame + 0xc4)) = fVar14;
      fVar15 = pfVar9[3];
      (*(float *)(gen_frame + 0xc8)) = fVar15;
      fVar1 = param_1[2];
      fVar2 = param_1[3];
      fVar16 = fVar12 + (*(float *)(gen_frame + 0xac));
      fVar17 = fVar13 + (*(float *)(gen_frame + 0xb0));
      fVar18 = fVar14 + (*(float *)(gen_frame + 0xb4));
      fVar19 = fVar15 + (*(float *)(gen_frame + 0xb8));
      fVar3 = *param_1;
      (*(float *)(gen_frame + 0x50)) = fVar16;
      (*(float *)(gen_frame + 0x54)) = fVar17;
      (*(float *)(gen_frame + 0x58)) = fVar18;
      (*(float *)(gen_frame + 0x5c)) = fVar19;
      fVar4 = param_1[1];
      (*(float *)(gen_frame + 0x98)) = fVar16;
      (*(float *)(gen_frame + 0x9c)) = fVar17;
      (*(float *)(gen_frame + 0xcc)) = fVar16;
      (*(float *)(gen_frame + 0xa0)) = fVar18;
      (*(float *)(gen_frame + 0xa4)) = fVar19;
      fVar12 = fVar12 + fVar3;
      fVar13 = fVar13 + fVar4;
      fVar14 = fVar14 + fVar1;
      fVar15 = fVar15 + fVar2;
      (*(float *)(gen_frame + 0x50)) = fVar12;
      (*(float *)(gen_frame + 0x54)) = fVar13;
      (*(float *)(gen_frame + 0x58)) = fVar14;
      (*(float *)(gen_frame + 0x5c)) = fVar15;
      (*(float *)(gen_frame + 0x70)) = fVar12;
      (*(float *)(gen_frame + 0xd4)) = fVar18;
      (*(float *)(gen_frame + 0x74)) = fVar13;
      (*(float *)(gen_frame + 0xd0)) = fVar17;
      (*(float *)(gen_frame + 0xd8)) = fVar19;
      (*(float *)(gen_frame + 0x78)) = fVar14;
      (*(float *)(gen_frame + 0xbc)) = fVar12;
      (*(float *)(gen_frame + 0x7c)) = fVar15;
      (*(float *)(gen_frame + 0xc0)) = fVar13;
      (*(float *)(gen_frame + 0xc4)) = fVar14;
      (*(float *)(gen_frame + 0xc8)) = fVar15;
      F_00d030f0(piVar5 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar12),(undefined4)gen_fl2bits(fVar13),
                   (undefined4)gen_fl2bits(fVar14),fVar15,(undefined4)gen_fl2bits(fVar16),
                   (undefined4)gen_fl2bits(fVar17),(undefined4)gen_fl2bits(fVar18),fVar19);
      bVar6 = F_00d00970(&(*(float *)(gen_frame + 0xbc)),&(*(float *)(gen_frame + 0xcc)));
      fVar1 = *(float *)&REFG(undefined, 0x1097254);
      if (bVar6 == 0) {
        (*(int *)(gen_frame + 0x94)) = (*(int *)(gen_frame + 0x94)) + 1;
      }
      iVar10 = (*(int *)(gen_frame + 0x8c)) + 1;
      (*(int *)(gen_frame + 0x8c)) = iVar10;
    } while (iVar10 < 8);
    if ((*(int *)(gen_frame + 0x94)) == 0) {
      *(*(float * PTR32 *)(gen_frame + 0x68)) = *(float *)&REFG(undefined, 0x1097254);
      *(*(float * PTR32 *)(gen_frame + 0x6c)) = fVar1;
      return 1;
    }
    (*(float *)(gen_frame + 0xa8)) = (float)((float10)(*(int *)(gen_frame + 0x94)) * (float10)*(double *)&REFG(double, 0x10948e0));
    fVar11 = GEN_X87((float10)(float)((float10)(*(int *)(gen_frame + 0x94)) * (float10)*(double *)&REFG(double, 0x10948e0)));
    *(*(float * PTR32 *)(gen_frame + 0x68)) = (float)(fVar11 * (float10)*(*(float * PTR32 *)(gen_frame + 0x68)));
    *(*(float * PTR32 *)(gen_frame + 0x6c)) = (float)(fVar11 * (float10)*(*(float * PTR32 *)(gen_frame + 0x6c)));
  }
  return 0;
}

/* ref: FUN_00d24070 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d24070(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(float param_8, float gen_a7))
{
  GEN_ENTER(0xd24070u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x1c))) + 0xc)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
  if (uVar3 == 1) {
    bVar2 = F_00d237c0(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar3 = (uint)bVar2;
  }
  else {
    if (uVar3 == 2) {
      bVar2 = F_00d23d50(param_1 GEN_EDX_ARG,param_2,param_3,param_4);
      return bVar2;
    }
    uVar3 = uVar3 - 3;
    if (uVar3 == 0) {
      F_00d237c0(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      bVar2 = F_00d23d50(param_1 GEN_EDX_ARG,param_2,param_3,param_4);
      return bVar2;
    }
  }
  return (byte)uVar3;
}

/* ref: FUN_00d24130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d24130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd24130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  return (uint)this;
}

/* ref: FUN_00d24160 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d24160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd24160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1[3];
  return (uint)this;
}

/* ref: FUN_00d24190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d24190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd24190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_1[3];
  return (uint)this;
}

/* ref: FUN_00d241f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d241f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd241f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *param_1 = *(ushort *)((int)(uintptr_t)this) << 8 | *(ushort *)((int)(uintptr_t)this) >> 8;
  param_1[1] = *((ushort *)GEN_TOP(((int)this + 2))) << 8 | *((ushort *)GEN_TOP(((int)this + 2))) >> 8;
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *(uint *)(param_1 + 2) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(uint *)(param_1 + 4) = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf25 */
GEN_LIB GEN_NOFRAME unsigned int F_00d24260(void)
{
  GEN_ENTER(0xd24260u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d24270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd24270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf27 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d24280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd24280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d24290(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd24290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00d23680(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d242d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd242d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  
  F_00d213b0(this GEN_EDX_FWD,param_1,(undefined1)param_2);
  iVar10 = 0;
  do {
    iVar9 = *(int *)(this + 0x128);
    fVar4 = *((float *)GEN_TOP((iVar9 + 0x28 + iVar10)));
    fVar5 = *((float *)GEN_TOP((iVar9 + 0x2c + iVar10)));
    pfVar1 = ((float *)GEN_TOP((iVar9 + 0x20 + iVar10)));
    pfVar2 = ((float *)GEN_TOP((iVar9 + 0x24 + iVar10)));
    fVar6 = param_1[3];
    pfVar3 = ((float *)GEN_TOP((iVar9 + 0x20 + iVar10)));
    iVar10 = iVar10 + 0x10;
    fVar7 = param_1[1];
    fVar8 = param_1[2];
    *pfVar3 = *pfVar1 + *param_1;
    pfVar3[1] = *pfVar2 + fVar7;
    pfVar3[2] = fVar4 + fVar8;
    pfVar3[3] = fVar5 + fVar6;
    *((float *)GEN_TOP((*(int *)(this + 0x128) + 0x1c + iVar10))) = (float)(float10)1;
  } while (iVar10 < 0x20);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf15 */
GEN_LIB GEN_NOFRAME byte F_00d243a0(void)
{
  GEN_ENTER(0xd243a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d24540(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd24540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x74) {
    return 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x128)));
  puVar3 = param_2;
  for (iVar1 = 0x1d; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x74;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf19 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d24570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3), GEN_P(float * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd24570u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a4;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x128);
  *param_1 = *((undefined4 *)GEN_TOP((iVar1 + 0x40)));
  *param_2 = *((undefined4 *)GEN_TOP((iVar1 + 0x44)));
  *param_3 = (float)(float10)0;
  *param_4 = (float)(float10)0;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d245a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd245a0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x128)));
  *((float *)GEN_TOP((uVar1 + 0x40))) = param_2;
  *((float *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x128))) + 0x44))) = param_3;
  return uVar1;
}

/* ref: FUN_00d245c0 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00d245c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd245c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x8c, 4, 4);
  int iVar1;
  code * pcVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x84)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x88));
  piVar4 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x98))))(piVar4 GEN_EDX_FWD)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x5c))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  if ((char)uVar5 != '\0') {
    iVar1 = *((int *)GEN_TOP(((int)this + 0x128)));
    bVar3 = *((byte *)GEN_TOP((iVar1 + 4)));
    fVar12 = *((float *)GEN_TOP((iVar1 + 0x24)));
    (*(undefined4 *)(gen_frame + 0x64)) = *((undefined4 *)GEN_TOP((iVar1 + 0x20)));
    (*(float *)(gen_frame + 0x68)) = fVar12;
    (*(undefined4 *)(gen_frame + 0x6c)) = *((undefined4 *)GEN_TOP((iVar1 + 0x28)));
    (*(undefined4 *)(gen_frame + 0x70)) = *((undefined4 *)GEN_TOP((iVar1 + 0x2c)));
    (*(undefined4 *)(gen_frame + 0x74)) = *((undefined4 *)GEN_TOP((iVar1 + 0x30)));
    (*(float *)(gen_frame + 0x78)) = *((float *)GEN_TOP((iVar1 + 0x34)));
    (*(undefined4 *)(gen_frame + 0x7c)) = *((undefined4 *)GEN_TOP((iVar1 + 0x38)));
    (*(undefined4 *)(gen_frame + 0x80)) = *((undefined4 *)GEN_TOP((iVar1 + 0x3c)));
    if ((bVar3 & 4) == 0) {
      pcVar2 = *((gen_code32 *)GEN_TOP((*piVar4 + 0x30)));
      (*(float *)(gen_frame + 0x0)) = fVar12;
      (*pcVar2)(piVar4,((undefined1 *)(gen_frame + 0x44)));
      bVar3 = F_00d218f0((*(float *)(gen_frame + 0x48)),&(*(float *)(gen_frame + 0x0)),*((int *)GEN_TOP(((int)this + 0x128))),
                           *((int *)GEN_TOP(((int)this + 0x128))) + 0x48);
      if (bVar3 != 1) {
        return 0;
      }
      (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x0));
      (*(float *)(gen_frame + 0x78)) = (*(float *)(gen_frame + 0x0));
    }
    puVar7 = &(*(undefined4 *)(gen_frame + 0x64));
    puVar8 = ((undefined4 *)GEN_TOP(((int)this + 300)));
    (*(float *)(gen_frame + 0x0)) = 2.8026e-45;
    do {
      puVar6 = ((undefined4 *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x44)),puVar7)));
      *puVar8 = *puVar6;
      puVar8[1] = puVar6[1];
      puVar8[2] = puVar6[2];
      puVar8[3] = puVar6[3];
      puVar7 = puVar7 + 4;
      puVar8 = puVar8 + 4;
      fVar12 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x0))) - 1);
      (*(float *)(gen_frame + 0x0)) = fVar12;
    } while (fVar12 != 0.0);
    fVar12 = F_010536a0((int)this + 300,(int)this + 0x13c,&(*(undefined4 *)(gen_frame + 0x54)));
    (*(float *)(gen_frame + 0x0)) = fVar12;
    fVar10 = (float10)fVar12;
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = (*(undefined4 *)(gen_frame + 0x54));
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = (*(undefined4 *)(gen_frame + 0x58));
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = (*(undefined4 *)(gen_frame + 0x5c));
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = (*(undefined4 *)(gen_frame + 0x60));
    *((undefined4 *)GEN_TOP(((int)this + 0x60))) = (*(undefined4 *)(gen_frame + 0x54));
    *((undefined4 *)GEN_TOP(((int)this + 100))) = (*(undefined4 *)(gen_frame + 0x58));
    *((undefined4 *)GEN_TOP(((int)this + 0x68))) = (*(undefined4 *)(gen_frame + 0x5c));
    *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = (*(undefined4 *)(gen_frame + 0x60));
    iVar1 = *((int *)GEN_TOP(((int)this + 0x128)));
    fVar11 = (float10)*((float *)GEN_TOP((iVar1 + 0x44)));
    if (!(fVar10 <= fVar11) == ((GEN_ISNAN(fVar11) || GEN_ISNAN(fVar10)) || fVar11 == fVar10)) {
      fVar11 = (float10)*((float *)GEN_TOP((iVar1 + 0x40)));
      if (!(fVar10 <= fVar11) || ((GEN_ISNAN(fVar11) || GEN_ISNAN(fVar10)) || fVar11 == fVar10)) {
        fVar12 = ((float)GEN_TOF((fVar10 - (float10)*((float *)GEN_TOP((iVar1 + 0x40))))));
        (*(float *)(gen_frame + 0x0)) = fVar12;
        *param_1 = fVar12;
        fVar12 = ((float)GEN_TOF(((float10)fVar12 /
                        ((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x44))) -
                        (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x40)))))));
        (*(float *)(gen_frame + 0x0)) = fVar12;
        fVar12 = (float)((float10)1 - (float10)fVar12);
        (*(float *)(gen_frame + 0x0)) = fVar12;
        *param_1 = fVar12;
        *param_1 = ((float)GEN_TOF(((float10)fVar12 * (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x50)))
                          )));
      }
      else {
        fVar12 = ((float)GEN_TOF((fVar10 / (float10)*((float *)GEN_TOP((iVar1 + 0x40))))));
        (*(float *)(gen_frame + 0x0)) = fVar12;
        fVar12 = (float)((float10)1 - (float10)fVar12);
        (*(float *)(gen_frame + 0x0)) = fVar12;
        *param_1 = fVar12;
        *param_1 = ((float)GEN_TOF(((float10)fVar12 *
                           ((float10)1 - (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x50)))) +
                          (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x50))))));
      }
      *((float *)GEN_TOP(((int)this + 0x80))) = *param_1;
      bVar9 = GEN_ISNAN((float10)0) || GEN_ISNAN((float10)*param_1);
      if (bVar9 == (bVar9 || (float10)0 == (float10)*param_1)) {
        return 1;
      }
    }
    else {
      *((float *)GEN_TOP(((int)this + 0x80))) = (float)(float10)0;
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d24820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd24820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xb0, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x84);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf27 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d248a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd248a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
  for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  bVar1 = F_00d228c0(this GEN_EDX_FWD);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf28 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d248d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd248d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf29 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d248e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(HWND param_1, unsigned int gen_a1), GEN_P(HDC param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd248e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(HWND param_1 = (HWND)gen_a1;)
  GEN_PIN(HDC param_2 = (HDC)gen_a2;)
  GEN_FRAME_DECL_GS(0x98, 8, 4);
  int iVar1;
  char cVar2;
  int iVar3;
  HGDIOBJ pvVar4;
  undefined * pHVar5;
  undefined * h;
  char * pcVar6;
  uint uVar7;
  int iVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x90)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x94));
  pvVar4 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x8)) = pvVar4;
  pvVar4 = gen_imp_SelectObject(param_2,pvVar4);
  (*(HGDIOBJ *)(gen_frame + 0xc)) = pvVar4;
  pHVar5 = gen_imp_CreatePen(0,2,0x9090);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = pHVar5;
  pvVar4 = gen_imp_SelectObject(param_2,pHVar5);
  (*(HGDIOBJ *)(gen_frame + 0x14)) = pvVar4;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x60)));
  iVar8 = (*(tagRECT *)(gen_frame + 0x60)).right / 2;
  (*(int *)(gen_frame + 0x20)) = (*(tagRECT *)(gen_frame + 0x60)).bottom / 2;
  gen_imp_MoveToEx(param_2,iVar8 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 300)),
           (*(tagRECT *)(gen_frame + 0x60)).bottom / 2 - (int)((double)*(float *)(this + 0x134) * *(double *)&REFG(double, 0x1132488)),
           (LPPOINT)0x0);
  gen_imp_LineTo(param_2,iVar8 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x13c)),
         (*(int *)(gen_frame + 0x20)) - (int)((double)*(float *)(this + 0x144) * *(double *)&REFG(double, 0x1132488)));
  iVar8 = iVar8 + (int)((double)*(float *)(this + 0x50) * *(double *)&REFG(undefined, 0x10947f0));
  iVar1 = (*(int *)(gen_frame + 0x20)) + (int)((double)*(float *)(this + 0x58) * *(double *)&REFG(undefined, 0x10947f0));
  (*(int *)(gen_frame + 0x20)) = iVar1;
  iVar3 = (int)(*(double *)&REFG(undefined, 0x10947f0) * (double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44))));
  gen_imp_Ellipse(param_2,iVar8 - iVar3,iVar1 - iVar3,iVar3 + iVar8,iVar3 + iVar1);
  iVar1 = (int)((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))) * *(double *)&REFG(undefined, 0x10947f0));
  gen_imp_Ellipse(param_2,iVar8 - iVar1,(*(int *)(gen_frame + 0x20)) - iVar1,iVar1 + iVar8,iVar1 + (*(int *)(gen_frame + 0x20)));
  if (((byte)this[0xb0] & 1) != 0) {
    (*(HGDIOBJ *)(gen_frame + 0x18)) = (HGDIOBJ)((*(tagRECT *)(gen_frame + 0x60)).right / 2);
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = ((undefined *)GEN_TOP(((*(tagRECT *)(gen_frame + 0x60)).bottom / 2)));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x14)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x10)));
    pHVar5 = gen_imp_CreatePen(0,1,0x900000);
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = pHVar5;
    pvVar4 = gen_imp_SelectObject(param_2,pHVar5);
    (*(HGDIOBJ *)(gen_frame + 0x14)) = pvVar4;
    gen_imp_MoveToEx(param_2,(int)(*(HGDIOBJ *)(gen_frame + 0x18)) -
                     (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x60)),
             (int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) - (int)((double)*(float *)(this + 0x68) * *(double *)&REFG(double, 0x1132488)),
             (LPPOINT)0x0);
    gen_imp_LineTo(param_2,(int)(*(HGDIOBJ *)(gen_frame + 0x18)),(int)(*(undefined * PTR32 *)(gen_frame + 0x1c)));
  }
  F_00c48350(((undefined *)(gen_frame + 0x24)),0,0x3c);
  F_00c49908(((CHAR *)(((char *)((undefined *)(gen_frame + 0x24)) + 28))),0x20,&REFG(undefined, 0x1133e60));
  (*(LONG *)((char *)((undefined *)(gen_frame + 0x24)))) = 0xd;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x24)) + 23))) = 0x80;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x24)) + 27))) = '\x01';
  h = gen_imp_CreateFontIndirectA(((undefined *)(gen_frame + 0x24)));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = h;
  pvVar4 = gen_imp_SelectObject(param_2,h);
  (*(HGDIOBJ *)(gen_frame + 0x18)) = pvVar4;
  if (((byte)this[0xb0] & 1) == 0) {
    F_00c472af(((char *)(gen_frame + 0x70)),0x20,&REFG(undefined, 0x1133e7c),&REFG(undefined, 0x1133e74));
  }
  else {
    F_00c472af(((char *)(gen_frame + 0x70)),0x20,&REFG(undefined, 0x1133e6c),
               (int)(ulonglong)
                    gen_d2bits((double)*(float *)(this + 0x80) * *(double *)&REFG(undefined, 0x1088118)),
               (int)((ulonglong)
                     gen_d2bits((double)*(float *)(this + 0x80) * *(double *)&REFG(undefined, 0x1088118)) >> 0x20)
              );
  }
  pcVar6 = ((char *)(gen_frame + 0x70));
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  gen_imp_GetTextExtentPoint32A(param_2,((char *)(gen_frame + 0x70)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x70)) + 1),&(*(undefined8 *)(gen_frame + 0x0)));
  gen_imp_TextOutA(param_2,iVar8 - (*(LONG *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) / 2,(*(int *)(gen_frame + 0x20)) - (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) / 2,((char *)(gen_frame + 0x70)),
           (int)pcVar6 - (int)(((char *)(gen_frame + 0x70)) + 1));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x18)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x14)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0xc)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x1c)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x10)));
  uVar7 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x8)));
  return uVar7;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d24c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd24c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined * _File;
  byte bVar5;
  int iVar6;
  
  _File = param_1;
  bVar5 = F_00d21f00((undefined *)this GEN_EDX_FWD,param_1);
  if (bVar5 == 0) {
    return 0;
  }
  iVar6 = 0;
  param_1 = ((undefined *)GEN_TOP(0x0));
  do {
    iVar1 = *(int *)(this + 0x128);
    dVar2 = (double)*((float *)GEN_TOP((iVar6 + 0x28 + iVar1)));
    dVar3 = (double)*((float *)GEN_TOP((iVar6 + 0x24 + iVar1)));
    dVar4 = (double)*((float *)GEN_TOP((iVar6 + 0x20 + iVar1)));
    F_00c49386(_File,((char *)REFP(0x1133e80)),param_1,(int)(ulonglong)gen_d2bits(dVar4),
             (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
             (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
             (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1)));
    iVar6 = iVar6 + 0x10;
  } while (iVar6 < 0x20);
  F_00c49386(_File,((char *)REFP(0x1133e9c)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))))));
  F_00c49386(_File,((char *)REFP(0x1133eac)),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44)))) >> 0x20));
  param_1 = ((undefined *)GEN_TOP(0x0));
  iVar6 = 0x48;
  do {
    F_00c49386(_File,((char *)REFP(0x1133ebc)),param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))) >> 0x20
                  ));
    param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1)));
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x50);
  F_00c49386(_File,((char *)REFP(0x1133ed0)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x50))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x50))))));
  F_00c49386(_File,((char *)REFP(0x1133ee4)),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x54)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x54)))) >> 0x20));
  F_00c49386(_File,((char *)REFP(0x1133ef4)),(uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x60))));
  F_00c49386(_File,((char *)REFP(0x1133f04)),*((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x5c))));
  F_00c49386(_File,((char *)REFP(0x1133f14)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x58))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x58))))));
  F_00c49386(_File,((char *)REFP(0x1133f28)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf31 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d24d60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd24d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  byte * pbVar6;
  bool bVar7;
  double dVar8;
  
  pcVar2 = ((char *)REFP(0x1133f40));
  pbVar6 = ((byte *)GEN_TOP(param_2));
  do {
    bVar1 = *pcVar2;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00d24d91: ;
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00d24d96;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00d24d91;
    pcVar2 = pcVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d24d96: ;
  if (iVar3 == 0) {
    uVar4 = F_00d00d00(0,0);
    if (uVar4 != 0) {
      uVar4 = F_00c4c74c(uVar4);
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar8 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 2) * 0x10))) = (float)dVar8;
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar8 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24 + uVar4 * 0x10))) = (float)dVar8;
          pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
          if (pcVar2 != ((char *)GEN_TOP(0x0))) {
            dVar8 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 0x10))) = (float)dVar8;
            return 1;
          }
        }
      }
    }
  }
  else {
    pcVar2 = ((char *)REFP(0x1133f4c));
    pbVar6 = ((byte *)GEN_TOP(param_2));
    do {
      bVar1 = *pcVar2;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00d24e66: ;
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00d24e6b;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00d24e66;
      pcVar2 = pcVar2 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d24e6b: ;
    if (iVar3 == 0) {
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar8 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x40))) = (float)dVar8;
        return 1;
      }
    }
    else {
      pcVar2 = ((char *)REFP(0x1133f58));
      pbVar6 = ((byte *)GEN_TOP(param_2));
      do {
        bVar1 = *pcVar2;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00d24ec8: ;
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00d24ecd;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00d24ec8;
        pcVar2 = pcVar2 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d24ecd: ;
      if (iVar3 == 0) {
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar8 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x44))) = (float)dVar8;
          return 1;
        }
      }
      else {
        pcVar2 = ((char *)REFP(0x1133f64));
        pbVar6 = ((byte *)GEN_TOP(param_2));
        do {
          bVar1 = *pcVar2;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00d24f30: ;
            iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_00d24f35;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00d24f30;
          pcVar2 = pcVar2 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d24f35: ;
        if (iVar3 == 0) {
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
            if (pcVar2 != ((char *)GEN_TOP(0x0))) {
              dVar8 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x48 + uVar4 * 4))) = (float)dVar8;
              return 1;
            }
          }
        }
        else {
          pcVar2 = ((char *)REFP(0x1133f6c));
          pbVar6 = ((byte *)GEN_TOP(param_2));
          do {
            bVar1 = *pcVar2;
            bVar7 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_00d24fb0: ;
              iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
              goto LAB_00d24fb5;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar7 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_00d24fb0;
            pcVar2 = pcVar2 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d24fb5: ;
          if (iVar3 == 0) {
            pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
            if (pcVar2 != ((char *)GEN_TOP(0x0))) {
              dVar8 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x50))) = (float)dVar8;
              return 1;
            }
          }
          else {
            pcVar2 = ((char *)REFP(0x1133f78));
            pbVar6 = ((byte *)GEN_TOP(param_2));
            do {
              bVar1 = *pcVar2;
              bVar7 = bVar1 < *pbVar6;
              if (bVar1 != *pbVar6) {
LAB_00d25012: ;
                iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
                goto LAB_00d25017;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar7 = bVar1 < pbVar6[1];
              if (bVar1 != pbVar6[1]) goto LAB_00d25012;
              pcVar2 = pcVar2 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d25017: ;
            if (iVar3 == 0) {
              pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
              if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                dVar8 = F_00c4acaa(pcVar2);
                *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x54))) = (float)dVar8;
                return 1;
              }
            }
            else {
              pcVar2 = ((char *)REFP(0x1133f80));
              pbVar6 = ((byte *)GEN_TOP(param_2));
              do {
                bVar1 = *pcVar2;
                bVar7 = bVar1 < *pbVar6;
                if (bVar1 != *pbVar6) {
LAB_00d25074: ;
                  iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
                  goto LAB_00d25079;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar2[1];
                bVar7 = bVar1 < pbVar6[1];
                if (bVar1 != pbVar6[1]) goto LAB_00d25074;
                pcVar2 = pcVar2 + 2;
                pbVar6 = pbVar6 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00d25079: ;
              if (iVar3 == 0) {
                uVar4 = F_00d00d00(0,0);
                if (uVar4 != 0) {
                  uVar4 = F_00c4c74c(uVar4);
                  *((char *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x60))) = (char)uVar4;
                  return 1;
                }
              }
              else {
                pbVar5 = &REFG(undefined1, 0x1133f8c);
                pbVar6 = ((byte *)GEN_TOP(param_2));
                do {
                  bVar1 = *pbVar5;
                  bVar7 = bVar1 < *pbVar6;
                  if (bVar1 != *pbVar6) {
LAB_00d250d0: ;
                    iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
                    goto LAB_00d250d5;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar5[1];
                  bVar7 = bVar1 < pbVar6[1];
                  if (bVar1 != pbVar6[1]) goto LAB_00d250d0;
                  pbVar5 = pbVar5 + 2;
                  pbVar6 = pbVar6 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_00d250d5: ;
                if (iVar3 == 0) {
                  uVar4 = F_00d00d00(0,0);
                  if (uVar4 != 0) {
                    uVar4 = F_00c4c74c(uVar4);
                    *((uint *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x5c))) = uVar4;
                    return 1;
                  }
                }
                else {
                  pcVar2 = ((char *)REFP(0x1133f94));
                  pbVar6 = ((byte *)GEN_TOP(param_2));
                  do {
                    bVar1 = *pcVar2;
                    bVar7 = bVar1 < *pbVar6;
                    if (bVar1 != *pbVar6) {
LAB_00d25130: ;
                      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
                      goto LAB_00d25135;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pcVar2[1];
                    bVar7 = bVar1 < pbVar6[1];
                    if (bVar1 != pbVar6[1]) goto LAB_00d25130;
                    pcVar2 = pcVar2 + 2;
                    pbVar6 = pbVar6 + 2;
                  } while (bVar1 != 0);
                  iVar3 = 0;
LAB_00d25135: ;
                  if (iVar3 != 0) {
                    bVar1 = F_00d22040(param_1 GEN_EDX_ARG,param_2);
                    return bVar1;
                  }
                  pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                  if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                    dVar8 = F_00c4acaa(pcVar2);
                    *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x58))) = (float)dVar8;
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
  return 0;
}

/* ref: FUN_00d25180 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d25180(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd25180u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_FRAME_DECL(0xb0, 0);
  uint uVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  F_00d22580(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  *param_1 = (int)(*(undefined * PTR32 (*)[33])REFP(0x1133fe4));
  param_1[0x2c] = param_1[0x2c] ^ ((uint)param_5 << 4 ^ param_1[0x2c]) & 0x10;
  if (param_5 == 0) {
    param_1[0x4a] = (int)param_2;
  }
  else {
    param_1[0x4a] = (int)(param_1 + 0x54);
    piVar3 = param_2;
    piVar4 = param_1 + 0x54;
    for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 - 1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
  }
  param_1[6] = param_1[0x4a];
  F_00d228c0(param_1 GEN_EDX_ARG);
  F_00d20fe0(param_1 GEN_EDX_ARG,~(*((byte *)GEN_TOP((param_1[0x4a] + 4))) >> 5) & 1);
  piVar3 = *((int * PTR32 *)GEN_TOP((param_1[7] + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe4))))(piVar3 GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x68))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x84);
  }
  return (uint)param_1;
}

/* ref: FUN_00d25290 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d25290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd25290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xb0, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  F_00d22720(this GEN_EDX_FWD,param_1,param_2);
  *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) | 0x10;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133fe4));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x128))) = ((undefined *)GEN_TOP(((int)this + 0x150)));
  F_00d25490(((undefined *)GEN_TOP(((int)this + 0x150))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP(((int)this + 0x128)));
  this_00 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x84);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf14 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d25340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd25340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  int iVar2;
  byte bVar3;
  uint in_ecx;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_FWD,0x406);
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x98))))(piVar1 GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(float10)0)));
  F_00d21970(this GEN_EDX_ARG);
  bVar3 = F_00d245c0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  if (bVar3 == 0) {
    if (((byte)this[0xb0] & 1) != 0) {
      if (*((char *)GEN_TOP((*(int *)(this + 0x128) + 0x60))) == '\0') {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))
                  (piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x20),
                   *((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x5c))),
                   (undefined4)gen_fl2bits((float)(float10)0));
      }
      *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) & 0xfffffffe;
    }
    return 0;
  }
  *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) | 1;
  iVar2 = *(int *)(this + 0x128);
  if (*((char *)GEN_TOP((iVar2 + 0x60))) == '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))
              (piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x20),*((undefined4 *)GEN_TOP((iVar2 + 0x5c))),
               *(undefined4 *)(this + 0x80));
  }
  else if (*((char *)GEN_TOP((iVar2 + 0x60))) == '\x01') {
    F_00d1b810(in_ecx GEN_EDX_ARG,*(float *)(this + 0x80),GEN_ARGF(*((float *)GEN_TOP((iVar2 + 0x58)))));
    return 1;
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d25430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd25430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00d22da0(this GEN_EDX_FWD,param_1,0x74)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x1d; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x1d);
  }
  F_00d25530(*(undefined4 *)(this + 0x128) GEN_EDX_ARG,(uint)puVar1);
  return (uint)(puVar1 + 0x1d);
}

/* ref: FUN_00d25490 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d25490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd25490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  fVar1 = (float10)1;
  *((undefined2 *)GEN_TOP(((int)this + 3))) = 0x400;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 5))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((float *)GEN_TOP(((int)this + 0x10))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x14))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x18))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x1c))) = (float)fVar1;
  *((undefined2 *)GEN_TOP(((int)this + 0xe))) = 0;
  fVar2 = (float10)0;
  *((undefined1 *)GEN_TOP(((int)this + 0xd))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 2))) = 0xd;
  *(undefined2 *)this = 0x74;
  *((float *)GEN_TOP(((int)this + 0x20))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x24))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x28))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x2c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x2c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x30))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x34))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x38))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x3c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x3c))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094880)));
  *((undefined1 *)GEN_TOP(((int)this + 0x60))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x44))), REFG(float, 0x10a0d00));
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = uVar3;
  *((float *)GEN_TOP(((int)this + 0x4c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x58))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x50))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x54))) = (float)fVar1;
  *((undefined2 *)GEN_TOP(((int)this + 0x61))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 99))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  return 0;
}

/* ref: FUN_00d25530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d25530(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd25530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  int local_8;
  
  F_00d0c080(param_1 GEN_EDX_FWD,param_2);
  puVar3 = ((uint *)GEN_TOP((param_1 + 0x28)));
  local_8 = 2;
  puVar2 = ((uint *)GEN_TOP((param_2 + 0x20)));
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar2)));
    *puVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[-1];
    puVar2[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar3;
    puVar2[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[1];
    puVar2[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar3 = puVar3 + 4;
    local_8 = local_8 - 1;
    puVar2 = puVar2 + 4;
  } while (local_8 != 0);
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x40)));
  *((uint *)GEN_TOP((param_2 + 0x40))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x44)));
  *((uint *)GEN_TOP((param_2 + 0x44))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x48)));
  *((uint *)GEN_TOP((param_2 + 0x48))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x4c)));
  *((uint *)GEN_TOP((param_2 + 0x4c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x50)));
  *((uint *)GEN_TOP((param_2 + 0x50))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x54)));
  *((uint *)GEN_TOP((param_2 + 0x54))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x58)));
  *((uint *)GEN_TOP((param_2 + 0x58))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((undefined1 *)GEN_TOP((param_2 + 0x60))) = *((undefined1 *)GEN_TOP((param_1 + 0x60)));
  *((undefined4 *)GEN_TOP((param_2 + 0x5c))) = *((undefined4 *)GEN_TOP((param_1 + 0x5c)));
  *((undefined2 *)GEN_TOP((param_2 + 0x61))) = 0;
  *((undefined1 *)GEN_TOP((param_2 + 99))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 100))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 0x68))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 0x70))) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d25670(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd25670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[33])REFP(0x1133fe4));
  F_00d23680(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d256a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd256a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auVar9 [16];
  
  iVar6 = *(int *)(this + 0x128);
  *(undefined4 *)(this + 300) = *((undefined4 *)GEN_TOP((iVar6 + 0x20)));
  *(undefined4 *)(this + 0x130) = *((undefined4 *)GEN_TOP((iVar6 + 0x24)));
  *(undefined4 *)(this + 0x134) = *((undefined4 *)GEN_TOP((iVar6 + 0x28)));
  *(undefined4 *)(this + 0x138) = *((undefined4 *)GEN_TOP((iVar6 + 0x2c)));
  iVar6 = *(int *)(this + 0x128);
  *(undefined4 *)(this + 0x13c) = *((undefined4 *)GEN_TOP((iVar6 + 0x20)));
  *(undefined4 *)(this + 0x140) = *((undefined4 *)GEN_TOP((iVar6 + 0x24)));
  *(undefined4 *)(this + 0x144) = *((undefined4 *)GEN_TOP((iVar6 + 0x28)));
  *(undefined4 *)(this + 0x148) = *((undefined4 *)GEN_TOP((iVar6 + 0x2c)));
  iVar6 = 0x30;
  do {
    iVar5 = *(int *)(this + 0x128);
    uVar4 = *((undefined4 *)GEN_TOP((iVar5 + 8 + iVar6)));
    (*(undefined4 *)((char *)&auVar7 + 4)) = uVar4;
    (*(undefined4 *)((char *)&auVar7 + 0)) = *((undefined4 *)GEN_TOP((iVar5 + iVar6)));
    (*(undefined4 *)((char *)&auVar7 + 8)) = uVar4;
    (*(undefined4 *)((char *)&auVar7 + 12)) = *((undefined4 *)GEN_TOP((iVar5 + 0xc + iVar6)));
    (*(undefined8 *)((char *)&auVar8 + 8)) = (*(undefined8 *)((char *)&auVar7 + 8));
    (*(undefined4 *)((char *)&auVar8 + 4)) = *((undefined4 *)GEN_TOP((iVar5 + 4 + iVar6)));
    (*(undefined4 *)((char *)&auVar8 + 0)) = *((undefined4 *)GEN_TOP((iVar5 + iVar6)));
    gen_minps(&(auVar8), &(auVar8), (this + 300));
    local_40 = (*(undefined4 *)((char *)&auVar8 + 0));
    uStack_3c = (*(undefined4 *)((char *)&auVar8 + 4));
    *(undefined4 *)(this + 300) = local_40;
    uStack_38 = (*(undefined4 *)((char *)&auVar8 + 8));
    *(undefined4 *)(this + 0x130) = uStack_3c;
    uStack_34 = (*(undefined4 *)((char *)&auVar8 + 12));
    *(undefined4 *)(this + 0x134) = uStack_38;
    *(undefined4 *)(this + 0x138) = uStack_34;
    iVar5 = *(int *)(this + 0x128);
    uVar4 = *((undefined4 *)GEN_TOP((iVar5 + 8 + iVar6)));
    puVar2 = ((undefined4 *)GEN_TOP((iVar5 + 0xc + iVar6)));
    puVar1 = ((undefined4 *)GEN_TOP((iVar5 + iVar6)));
    puVar3 = ((undefined4 *)GEN_TOP((iVar5 + 4 + iVar6)));
    iVar6 = iVar6 + 0x10;
    (*(undefined4 *)((char *)&auVar10 + 4)) = uVar4;
    (*(undefined4 *)((char *)&auVar10 + 0)) = *puVar1;
    (*(undefined4 *)((char *)&auVar10 + 8)) = uVar4;
    (*(undefined4 *)((char *)&auVar10 + 12)) = *puVar2;
    (*(undefined8 *)((char *)&auVar9 + 8)) = (*(undefined8 *)((char *)&auVar10 + 8));
    (*(undefined4 *)((char *)&auVar9 + 4)) = *puVar3;
    (*(undefined4 *)((char *)&auVar9 + 0)) = *puVar1;
    gen_maxps(&(auVar8), &(auVar9), (this + 0x13c));
    local_40 = (*(undefined4 *)((char *)&auVar8 + 0));
    uStack_3c = (*(undefined4 *)((char *)&auVar8 + 4));
    *(undefined4 *)(this + 0x13c) = local_40;
    uStack_38 = (*(undefined4 *)((char *)&auVar8 + 8));
    *(undefined4 *)(this + 0x140) = uStack_3c;
    uStack_34 = (*(undefined4 *)((char *)&auVar8 + 12));
    *(undefined4 *)(this + 0x144) = uStack_38;
    *(undefined4 *)(this + 0x148) = uStack_34;
  } while (iVar6 < 0x60);
  *(float *)(this + 0x130) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x130) - (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 100)))
              )));
  *(float *)(this + 0x140) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(uint *)(this + 0x128) + 0x60))) +
              (float10)*(float *)(this + 0x140))));
  return *(uint *)(this + 0x128);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d25890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd25890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  F_00d213b0(this GEN_EDX_FWD,param_1,(undefined1)param_2);
  iVar11 = 0;
  do {
    iVar9 = *(int *)(this + 0x128);
    fVar4 = *((float *)GEN_TOP((iVar9 + 0x28 + iVar11)));
    fVar5 = *((float *)GEN_TOP((iVar9 + 0x2c + iVar11)));
    pfVar1 = ((float *)GEN_TOP((iVar9 + 0x20 + iVar11)));
    pfVar2 = ((float *)GEN_TOP((iVar9 + 0x24 + iVar11)));
    fVar6 = param_1[3];
    pfVar3 = ((float *)GEN_TOP((iVar9 + 0x20 + iVar11)));
    iVar11 = iVar11 + 0x10;
    fVar7 = param_1[1];
    fVar8 = param_1[2];
    *pfVar3 = *pfVar1 + *param_1;
    pfVar3[1] = *pfVar2 + fVar7;
    pfVar3[2] = fVar4 + fVar8;
    pfVar3[3] = fVar5 + fVar6;
    *((float *)GEN_TOP((*(int *)(this + 0x128) + 0x1c + iVar11))) = (float)(float10)1;
  } while (iVar11 < 0x40);
  uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG);
  return uVar10;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf15 */
GEN_LIB GEN_NOFRAME byte F_00d25970(void)
{
  GEN_ENTER(0xd25970u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d25980 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d25980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd25980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  if (((((float10)*param_1 <= (float10)*((float *)GEN_TOP(((int)this + 0x13c)))) &&
       ((float10)*((float *)GEN_TOP(((int)this + 300))) <= (float10)*param_1)) &&
      ((float10)param_1[1] <= (float10)*((float *)GEN_TOP(((int)this + 0x140))))) &&
     ((((float10)*((float *)GEN_TOP(((int)this + 0x130))) <= (float10)param_1[1] &&
       ((float10)param_1[2] <= (float10)*((float *)GEN_TOP(((int)this + 0x144))))) &&
      ((float10)*((float *)GEN_TOP(((int)this + 0x134))) <= (float10)param_1[2])))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00d25a00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d25a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd25a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x70, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  byte bVar10;
  float * pfVar11;
  float * pfVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  iVar13 = *((int *)GEN_TOP(((int)this + 0x128)));
  fVar9 = (float10)0;
  fVar14 = GEN_X87((float10)((float)GEN_TOF(((float10)param_1[1] - (float10)*((float *)GEN_TOP((iVar13 + 0x24)))))));
  if (!(fVar9 <= fVar14) || ((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar9)) || fVar14 == fVar9)) {
    if ((!(fVar9 <= fVar14) != (GEN_ISNAN(fVar14) || GEN_ISNAN(fVar9))) && ((*((byte *)GEN_TOP((iVar13 + 4))) & 0x10) == 0)
       ) {
      fVar15 = (float10)*((float *)GEN_TOP((iVar13 + 100)));
      fVar14 = -fVar14;
      if (fVar15 <= fVar14 && ((!GEN_ISNAN(fVar14) && !GEN_ISNAN(fVar15)) && fVar14 != fVar15)) {
        return 0xfffffffe;
      }
    }
  }
  else if (((*((byte *)GEN_TOP((iVar13 + 4))) & 8) == 0) &&
          (!(fVar14 <= (float10)*((float *)GEN_TOP((iVar13 + 0x60)))) !=
           (GEN_ISNAN((float10)*((float *)GEN_TOP((iVar13 + 0x60)))) || GEN_ISNAN(fVar14)))) {
    return 0xffffffff;
  }
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  pfVar12 = ((float *)GEN_TOP((iVar13 + 0x20)));
  iVar13 = 4;
  pfVar11 = ((float *)(gen_frame + 0x18)) + 1;
  do {
    fVar5 = *pfVar12;
    fVar6 = pfVar12[1];
    fVar7 = pfVar12[2];
    fVar8 = pfVar12[3];
    pfVar12 = pfVar12 + 4;
    iVar13 = iVar13 - 1;
    (*(float *)(gen_frame + 0x0)) = fVar1 - fVar5;
    (*(float *)(gen_frame + 0x4)) = fVar2 - fVar6;
    (*(float *)(gen_frame + 0x8)) = fVar3 - fVar7;
    (*(float *)(gen_frame + 0xc)) = fVar4 - fVar8;
    pfVar11[-1] = fVar1 - fVar5;
    pfVar11[1] = fVar3 - fVar7;
    pfVar11[2] = fVar4 - fVar8;
    *pfVar11 = (float)fVar9;
    pfVar11 = pfVar11 + 4;
  } while (iVar13 != 0);
  F_01052f50(((float *)(gen_frame + 0x18)),&(*(float *)(gen_frame + 0x0)));
  bVar10 = F_01053270(((float *)(gen_frame + 0x18)),&(*(float *)(gen_frame + 0x0)));
  return (uint)(bVar10 != 0);
}

/* ref: FUN_00d25b70 */
GEN_LIB GEN_NOFRAME float GEN_THISCALL F_00d25b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd25b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x84, 12);
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  float * pfVar8;
  float * pfVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  (*(uint *)(gen_frame + 0x70)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x74);
  fVar16 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  pfVar8 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x20)));
  iVar10 = 4;
  pfVar9 = ((float *)(gen_frame + 0x1c)) + 1;
  do {
    fVar13 = *pfVar8;
    fVar6 = pfVar8[1];
    pfVar1 = pfVar8 + 2;
    pfVar2 = pfVar8 + 3;
    pfVar8 = pfVar8 + 4;
    iVar10 = iVar10 - 1;
    fVar13 = fVar13 - fVar16;
    fVar14 = *pfVar1 - fVar4;
    fVar15 = *pfVar2 - fVar5;
    (*(float *)(gen_frame + 0x4)) = fVar13;
    (*(float *)(gen_frame + 0x8)) = fVar6 - fVar3;
    (*(float *)(gen_frame + 0xc)) = fVar14;
    (*(float *)(gen_frame + 0x10)) = fVar15;
    (*(float *)(gen_frame + 0x60)) = fVar13;
    pfVar9[-1] = fVar13;
    (*(float *)(gen_frame + 0x64)) = fVar6 - fVar3;
    (*(float *)(gen_frame + 0x68)) = fVar14;
    pfVar9[1] = fVar14;
    (*(float *)(gen_frame + 0x6c)) = fVar15;
    pfVar9[2] = fVar15;
    *pfVar9 = (float)(float10)0;
    pfVar9 = pfVar9 + 4;
  } while (iVar10 != 0);
  (*(float *)(gen_frame + 0x0)) = (float)(float10)0;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x6c)) + 0)) = 1;
  bVar7 = false;
  (*(float *)(gen_frame + 0x68)) = 3.7616967e-37;
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x6c)) + 1)) = 0x302;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x6c)) + 3)) = 2;
  (*(float *)(gen_frame + 0x6c)) = 9.624935e-38;
  iVar10 = 0;
  do {
    fVar16 = F_010536a0(((float *)(gen_frame + 0x1c)) + (uint)*((byte *)GEN_TOP(((int)&(*(float *)(gen_frame + 0x68)) + iVar10 * 2))) * 4,
                          ((float *)(gen_frame + 0x1c)) + (uint)*((byte *)GEN_TOP(((int)&(*(float *)(gen_frame + 0x68)) + iVar10 * 2 + 1))) * 4,&(*(float *)(gen_frame + 0x4)))
    ;
    fVar11 = (float10)fVar16;
    if (bVar7) {
      fVar12 = (float10)(*(float *)(gen_frame + 0x0));
      if (fVar11 <= fVar12 && ((!GEN_ISNAN(fVar12) && !GEN_ISNAN(fVar11)) && fVar12 != fVar11)) {
        (*(float *)(gen_frame + 0x0)) = fVar16;
      }
    }
    else {
      bVar7 = true;
      (*(float *)(gen_frame + 0x0)) = fVar16;
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 4);
  return (*(float *)(gen_frame + 0x0));
}

/* ref: FUN_00d25cb0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d25cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd25cb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x8c, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  float * pfVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  iVar10 = *((int *)GEN_TOP(((int)this + 0x128)));
  uVar7 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = this;
  ((byte *)(gen_frame + 0x70))[0] = 0;
  ((byte *)(gen_frame + 0x70))[1] = 1;
  ((byte *)(gen_frame + 0x70))[2] = 1;
  ((byte *)(gen_frame + 0x70))[3] = 2;
  ((byte *)(gen_frame + 0x70))[4] = 2;
  ((byte *)(gen_frame + 0x70))[5] = 3;
  ((byte *)(gen_frame + 0x70))[6] = 3;
  ((byte *)(gen_frame + 0x70))[7] = 0;
  iVar6 = 0;
  (*(float *)(gen_frame + 0x40)) = gen_bits2f(iVar10);
  do {
    pfVar4 = ((float *)GEN_TOP(((((byte *)(gen_frame + 0x70))[(int)(iVar6 * 2)] + 2) * 0x10 + (int)gen_fl2bits((*(float *)(gen_frame + 0x40))))));
    pfVar5 = ((float *)GEN_TOP(((((byte *)(gen_frame + 0x70))[(int)(iVar6 * 2 + 1)] + 2) * 0x10 + (int)gen_fl2bits((*(float *)(gen_frame + 0x40))))));
    (*(float *)(gen_frame + 0x0)) = pfVar5[1] - pfVar4[1];
    (*(float *)(gen_frame + 0x8)) = pfVar5[3] - pfVar4[3];
    fVar12 = GEN_X87((float10)(pfVar5[2] - pfVar4[2]));
    fVar13 = GEN_X87((float10)(*pfVar5 - *pfVar4));
    fVar1 = (float)(fVar12 - fVar13 * (float10)0);
    (*(float *)(gen_frame + 0x3c)) = fVar1;
    fVar14 = (float10)fVar1;
    bVar11 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar14);
    if (bVar11 == (bVar11 || (float10)0 == fVar14)) {
      (*(float *)(gen_frame + 0x0)) = pfVar4[1] - param_1[1];
      (*(float *)(gen_frame + 0x8)) = pfVar4[3] - param_1[3];
      fVar15 = GEN_X87((float10)(*pfVar4 - *param_1));
      fVar16 = GEN_X87((float10)(pfVar4[2] - param_1[2]));
      fVar1 = ((float)GEN_TOF(((fVar15 * (float10)0 - fVar16) / fVar14)));
      (*(float *)(gen_frame + 0x3c)) = fVar1;
      fVar17 = (float10)fVar1;
      if ((!((float10)0 <= fVar17) == (GEN_ISNAN(fVar17) || GEN_ISNAN((float10)0))) &&
         (!(fVar17 <= (float10)1) == (GEN_ISNAN((float10)1) || GEN_ISNAN(fVar17)))) {
        ((byte *)(gen_frame + 0x34))[(int)(uVar7)] = (byte)iVar6;
        ((float *)(gen_frame + 0x50))[(int)(uVar7)] = fVar1;
        ((float *)(gen_frame + 0x60))[(int)(uVar7)] = ((float)GEN_TOF(((fVar12 * fVar15 - fVar16 * fVar13) / fVar14)));
        uVar7 = (uint)(byte)((char)uVar7 + 1);
      }
    }
    fVar12 = (float10)0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  if ((char)uVar7 != '\0') {
    (*(float *)(gen_frame + 0x4c)) = (float)fVar12;
    iVar10 = -1;
    iVar6 = 0;
    (*(float *)(gen_frame + 0x44)) = gen_bits2f(uVar7);
    if (3 < uVar7) {
      iVar8 = 2;
      do {
        if ((!((float10)((float *)(gen_frame + 0x60))[(int)(iVar6)] <= fVar12) ==
             (GEN_ISNAN(fVar12) || GEN_ISNAN((float10)((float *)(gen_frame + 0x60))[(int)(iVar6)]))) &&
           ((iVar10 == -1 ||
            (!((float10)((float *)(gen_frame + 0x60))[(int)(iVar6)] <= (float10)(*(float *)(gen_frame + 0x4c))) !=
             (GEN_ISNAN((float10)(*(float *)(gen_frame + 0x4c))) || GEN_ISNAN((float10)((float *)(gen_frame + 0x60))[(int)(iVar6)])))))) {
          (*(float *)(gen_frame + 0x4c)) = ((float *)(gen_frame + 0x60))[(int)(iVar6)];
          iVar10 = iVar6;
        }
        if ((!((float10)((float *)(gen_frame + 0x60))[(int)(iVar6 + 1)] <= fVar12) ==
             (GEN_ISNAN(fVar12) || GEN_ISNAN((float10)((float *)(gen_frame + 0x60))[(int)(iVar6 + 1)]))) &&
           ((iVar10 == -1 ||
            (!((float10)((float *)(gen_frame + 0x60))[(int)(iVar6 + 1)] <= (float10)(*(float *)(gen_frame + 0x4c))) !=
             (GEN_ISNAN((float10)(*(float *)(gen_frame + 0x4c))) || GEN_ISNAN((float10)((float *)(gen_frame + 0x60))[(int)(iVar6 + 1)])))))) {
          iVar10 = iVar8 - 1;
          (*(float *)(gen_frame + 0x4c)) = ((float *)(gen_frame + 0x60))[(int)(iVar6 + 1)];
        }
        if ((!((float10)((float *)(gen_frame + 0x60))[(int)(iVar6 + 2)] <= fVar12) ==
             (GEN_ISNAN(fVar12) || GEN_ISNAN((float10)((float *)(gen_frame + 0x60))[(int)(iVar6 + 2)]))) &&
           ((iVar10 == -1 ||
            (!((float10)((float *)(gen_frame + 0x60))[(int)(iVar6 + 2)] <= (float10)(*(float *)(gen_frame + 0x4c))) !=
             (GEN_ISNAN((float10)(*(float *)(gen_frame + 0x4c))) || GEN_ISNAN((float10)((float *)(gen_frame + 0x60))[(int)(iVar6 + 2)])))))) {
          (*(float *)(gen_frame + 0x4c)) = ((float *)(gen_frame + 0x60))[(int)(iVar6 + 2)];
          iVar10 = iVar8;
        }
        if ((!((float10)((float *)(gen_frame + 0x60))[(int)(iVar6 + 3)] <= fVar12) ==
             (GEN_ISNAN(fVar12) || GEN_ISNAN((float10)((float *)(gen_frame + 0x60))[(int)(iVar6 + 3)]))) &&
           ((iVar10 == -1 ||
            (!((float10)((float *)(gen_frame + 0x60))[(int)(iVar6 + 3)] <= (float10)(*(float *)(gen_frame + 0x4c))) !=
             (GEN_ISNAN((float10)(*(float *)(gen_frame + 0x4c))) || GEN_ISNAN((float10)((float *)(gen_frame + 0x60))[(int)(iVar6 + 3)])))))) {
          iVar10 = iVar8 + 1;
          (*(float *)(gen_frame + 0x4c)) = ((float *)(gen_frame + 0x60))[(int)(iVar6 + 3)];
        }
        iVar6 = iVar6 + 4;
        iVar8 = iVar8 + 4;
      } while (iVar6 < (int)(uVar7 - 3));
    }
    for (; iVar6 < (int)uVar7; iVar6 = iVar6 + 1) {
      if ((!((float10)((float *)(gen_frame + 0x60))[(int)(iVar6)] <= fVar12) ==
           (GEN_ISNAN(fVar12) || GEN_ISNAN((float10)((float *)(gen_frame + 0x60))[(int)(iVar6)]))) &&
         ((iVar10 == -1 ||
          (!((float10)((float *)(gen_frame + 0x60))[(int)(iVar6)] <= (float10)(*(float *)(gen_frame + 0x4c))) !=
           (GEN_ISNAN((float10)(*(float *)(gen_frame + 0x4c))) || GEN_ISNAN((float10)((float *)(gen_frame + 0x60))[(int)(iVar6)])))))) {
        (*(float *)(gen_frame + 0x4c)) = ((float *)(gen_frame + 0x60))[(int)(iVar6)];
        iVar10 = iVar6;
      }
    }
    if (iVar10 != -1) {
      (*(float *)(gen_frame + 0x48)) = (float)fVar12;
      iVar6 = -1;
      iVar8 = 0;
      if (3 < uVar7) {
        iVar9 = 2;
        do {
          fVar13 = (float10)((float *)(gen_frame + 0x60))[(int)(iVar8)];
          if (!(fVar13 <= fVar12) || ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar13)) || fVar12 == fVar13)) {
            if (iVar6 != -1) {
              fVar13 = (float10)((float *)(gen_frame + 0x60))[(int)(iVar8)];
              fVar14 = (float10)(*(float *)(gen_frame + 0x48));
              if (!(fVar13 <= fVar14) || ((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar13)) || fVar14 == fVar13))
              goto LAB_00d25fb0;
            }
            (*(float *)(gen_frame + 0x48)) = ((float *)(gen_frame + 0x60))[(int)(iVar8)];
            iVar6 = iVar8;
          }
LAB_00d25fb0: ;
          fVar13 = (float10)((float *)(gen_frame + 0x60))[(int)(iVar8 + 1)];
          if (!(fVar13 <= fVar12) || ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar13)) || fVar12 == fVar13)) {
            if (iVar6 != -1) {
              fVar13 = (float10)((float *)(gen_frame + 0x60))[(int)(iVar8 + 1)];
              fVar14 = (float10)(*(float *)(gen_frame + 0x48));
              if (!(fVar13 <= fVar14) || ((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar13)) || fVar14 == fVar13))
              goto LAB_00d25fda;
            }
            iVar6 = iVar9 - 1;
            (*(float *)(gen_frame + 0x48)) = ((float *)(gen_frame + 0x60))[(int)(iVar8 + 1)];
          }
LAB_00d25fda: ;
          fVar13 = (float10)((float *)(gen_frame + 0x60))[(int)(iVar8 + 2)];
          if (!(fVar13 <= fVar12) || ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar13)) || fVar12 == fVar13)) {
            if (iVar6 != -1) {
              fVar13 = (float10)((float *)(gen_frame + 0x60))[(int)(iVar8 + 2)];
              fVar14 = (float10)(*(float *)(gen_frame + 0x48));
              if (!(fVar13 <= fVar14) || ((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar13)) || fVar14 == fVar13))
              goto LAB_00d26003;
            }
            (*(float *)(gen_frame + 0x48)) = ((float *)(gen_frame + 0x60))[(int)(iVar8 + 2)];
            iVar6 = iVar9;
          }
LAB_00d26003: ;
          fVar13 = (float10)((float *)(gen_frame + 0x60))[(int)(iVar8 + 3)];
          if (!(fVar13 <= fVar12) || ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar13)) || fVar12 == fVar13)) {
            if (iVar6 != -1) {
              fVar13 = (float10)((float *)(gen_frame + 0x60))[(int)(iVar8 + 3)];
              fVar14 = (float10)(*(float *)(gen_frame + 0x48));
              if (!(fVar13 <= fVar14) || ((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar13)) || fVar14 == fVar13))
              goto LAB_00d2602d;
            }
            iVar6 = iVar9 + 1;
            (*(float *)(gen_frame + 0x48)) = ((float *)(gen_frame + 0x60))[(int)(iVar8 + 3)];
          }
LAB_00d2602d: ;
          iVar8 = iVar8 + 4;
          iVar9 = iVar9 + 4;
        } while (iVar8 < (int)(uVar7 - 3));
      }
      for (; iVar8 < (int)uVar7; iVar8 = iVar8 + 1) {
        fVar13 = (float10)((float *)(gen_frame + 0x60))[(int)(iVar8)];
        if (!(fVar13 <= fVar12) || ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar13)) || fVar12 == fVar13)) {
          if (iVar6 != -1) {
            fVar13 = (float10)((float *)(gen_frame + 0x60))[(int)(iVar8)];
            fVar14 = (float10)(*(float *)(gen_frame + 0x48));
            if (!(fVar13 <= fVar14) || ((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar13)) || fVar14 == fVar13))
            goto LAB_00d26071;
          }
          (*(float *)(gen_frame + 0x48)) = ((float *)(gen_frame + 0x60))[(int)(iVar8)];
          iVar6 = iVar8;
        }
LAB_00d26071: ;
      }
      if (iVar6 != -1) {
        (*(float *)(gen_frame + 0x44)) = ((float *)(gen_frame + 0x50))[(int)(iVar10)];
        fVar13 = (float10)((float *)(gen_frame + 0x50))[(int)(iVar10)];
        if (!(fVar12 <= fVar13) == ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) || fVar13 == fVar12)) {
          fVar14 = (float10)1;
          if ((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar13)) || fVar14 < fVar13 == (fVar14 == fVar13)) {
            pfVar4 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x128))) + 0x68 +
                              (uint)((byte *)(gen_frame + 0x70))[(int)((uint)((byte *)(gen_frame + 0x34))[(int)((int)(iVar10))] * 2)] * 4)));
            fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x128))) + 0x68 +
                                               (uint)((byte *)(gen_frame + 0x70))[(int)((uint)((byte *)(gen_frame + 0x34))[(int)((int)(iVar10))] * 2 + 1)] * 4)))
                           - (float10)*pfVar4)));
            (*(float *)(gen_frame + 0x3c)) = fVar1;
            fVar13 = GEN_X87(fVar13 * (float10)fVar1 + (float10)*pfVar4);
          }
          else {
            fVar13 = (float10)*((float *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x40))) + 0x68 +
                                        (uint)((byte *)(gen_frame + 0x70))[(int)((uint)((byte *)(gen_frame + 0x34))[(int)((int)(iVar10))] * 2 + 1)] * 4)));
          }
        }
        else {
          fVar13 = (float10)*((float *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x40))) + 0x68 +
                                      (uint)((byte *)(gen_frame + 0x70))[(int)((uint)((byte *)(gen_frame + 0x34))[(int)((int)(iVar10))] * 2)] * 4)));
        }
        (*(float *)(gen_frame + 0x3c)) = (float)fVar13;
        (*(float *)(gen_frame + 0x44)) = ((float *)(gen_frame + 0x50))[(int)(iVar6)];
        fVar14 = (float10)((float *)(gen_frame + 0x50))[(int)(iVar6)];
        if (!(fVar12 <= fVar14) == ((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar12)) || fVar14 == fVar12)) {
          fVar15 = (float10)1;
          if ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar14)) || fVar15 < fVar14 == (fVar15 == fVar14)) {
            pfVar4 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x128))) + 0x68 +
                              (uint)((byte *)(gen_frame + 0x70))[(int)((uint)((byte *)(gen_frame + 0x34))[(int)((int)(iVar6))] * 2)] * 4)));
            fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x128))) + 0x68 +
                                               (uint)((byte *)(gen_frame + 0x70))[(int)((uint)((byte *)(gen_frame + 0x34))[(int)((int)(iVar6))] * 2 + 1)] * 4)))
                           - (float10)*pfVar4)));
            (*(undefined * PTR32 *)(gen_frame + 0x38)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar1)));
            fVar14 = GEN_X87(fVar14 * (float10)fVar1 + (float10)*pfVar4);
          }
          else {
            fVar14 = (float10)*((float *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x40))) + 0x68 +
                                        (uint)((byte *)(gen_frame + 0x70))[(int)((uint)((byte *)(gen_frame + 0x34))[(int)((int)(iVar6))] * 2 + 1)] * 4)));
          }
        }
        else {
          fVar14 = (float10)*((float *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x40))) + 0x68 +
                                      (uint)((byte *)(gen_frame + 0x70))[(int)((uint)((byte *)(gen_frame + 0x34))[(int)((int)(iVar6))] * 2)] * 4)));
        }
        fVar1 = (float)fVar14;
        (*(float *)(gen_frame + 0x40)) = fVar1;
        fVar2 = (float)((float10)(*(float *)(gen_frame + 0x48)) - (float10)(*(float *)(gen_frame + 0x4c)));
        (*(float *)(gen_frame + 0x44)) = fVar2;
        fVar14 = (float10)fVar2;
        if ((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar12)) == ((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar12)) || fVar14 == fVar12)) {
          fVar2 = (float)((float10)(float)fVar13 - (float10)fVar1);
          (*(undefined * PTR32 *)(gen_frame + 0x38)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar2)));
          fVar3 = (float)((float10)(*(float *)(gen_frame + 0x48)) / fVar14);
          (*(undefined * PTR32 *)(gen_frame + 0x38)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar3)));
          *param_2 = (float)((float10)fVar2 * (float10)fVar3 + (float10)fVar1);
        }
        else {
          *param_2 = fVar1;
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d261d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd261d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x90) {
    return 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x128)));
  puVar3 = param_2;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x90;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf19 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d26210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd26210u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d26220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd26220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d26230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd26230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xc0, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0xa0);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf27 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d262b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd262b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x128)));
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf28 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d262d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd262d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf29 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d262e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(HWND param_1, unsigned int gen_a1), GEN_P(HDC param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd262e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(HWND param_1 = (HWND)gen_a1;)
  GEN_PIN(HDC param_2 = (HDC)gen_a2;)
  GEN_FRAME_DECL_GS(0x110, 0, 4);
  char cVar1;
  undefined * pBVar2;
  HGDIOBJ pvVar3;
  undefined * pHVar4;
  int * piVar5;
  uint uVar6;
  float * pfVar7;
  char * pcVar8;
  int iVar9;
  int x;
  int iVar10;
  int iVar11;
  float fVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c));
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  pvVar3 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x24)) = pvVar3;
  pvVar3 = gen_imp_SelectObject(param_2,pvVar3);
  (*(HGDIOBJ *)(gen_frame + 0x28)) = pvVar3;
  pHVar4 = gen_imp_CreatePen(0,2,0x800000);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pHVar4;
  pvVar3 = gen_imp_SelectObject(param_2,pHVar4);
  (*(HGDIOBJ *)(gen_frame + 0x1c)) = pvVar3;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x98)));
  iVar11 = (*(tagRECT *)(gen_frame + 0x98)).right / 2;
  iVar10 = (*(tagRECT *)(gen_frame + 0x98)).bottom / 2;
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x1c) + 0xc))) + 0x98))))
                            (*((int * PTR32 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x1c) + 0xc))) GEN_EDX_ARG)));
  (*(int * PTR32 *)(gen_frame + 0x38)) = piVar5;
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x5c))))(piVar5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x48)));
  if ((char)uVar6 != '\0') {
    (*(byte *)(gen_frame + 0x47)) = *((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x128) + 4))) >> 2 & 1;
    (*(float * PTR32 *)(gen_frame + 0x40)) = &(*(float *)(gen_frame + 0xac));
    (*(int *)(gen_frame + 0x34)) = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x128) + 0x20;
    (*(int *)(gen_frame + 0x3c)) = 4;
    do {
      pfVar7 = ((float *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x48)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x34)))));
      (*(float * PTR32 *)(gen_frame + 0x40))[-1] = *pfVar7;
      *(*(float * PTR32 *)(gen_frame + 0x40)) = pfVar7[1];
      fVar12 = pfVar7[3];
      (*(float * PTR32 *)(gen_frame + 0x40))[1] = pfVar7[2];
      (*(float * PTR32 *)(gen_frame + 0x40))[2] = fVar12;
      if ((*(byte *)(gen_frame + 0x47)) == 0) {
        *(*(float * PTR32 *)(gen_frame + 0x40)) = (float)(float10)0;
      }
      (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 0x10;
      iVar9 = (*(int *)(gen_frame + 0x3c)) - 1;
      (*(int *)(gen_frame + 0x3c)) = iVar9;
      (*(float * PTR32 *)(gen_frame + 0x40)) = (*(float * PTR32 *)(gen_frame + 0x40)) + 4;
    } while (iVar9 != 0);
    iVar9 = iVar10 - (int)((double)(*(float *)(gen_frame + 0xb0)) * *(double *)&REFG(double, 0x1132488));
    (*(int *)(gen_frame + 0x3c)) = iVar9;
    x = iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xa8)));
    (*(float * PTR32 *)(gen_frame + 0x40)) = ((float *)GEN_TOP(x));
    gen_imp_MoveToEx(param_2,x,iVar9,(LPPOINT)0x0);
    gen_imp_LineTo(param_2,iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xb8))),
           iVar10 - (int)((double)(*(float *)(gen_frame + 0xc0)) * *(double *)&REFG(double, 0x1132488)));
    gen_imp_LineTo(param_2,iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xc8))),
           iVar10 - (int)((double)(*(float *)(gen_frame + 0xd0)) * *(double *)&REFG(double, 0x1132488)));
    gen_imp_LineTo(param_2,iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xd8))),
           iVar10 - (int)((double)(*(float *)(gen_frame + 0xe0)) * *(double *)&REFG(double, 0x1132488)));
    iVar10 = (*(int *)(gen_frame + 0x3c));
    gen_imp_LineTo(param_2,(*(float * PTR32 *)(gen_frame + 0x40)),(*(int *)(gen_frame + 0x3c)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x38)) + 0x30))))((*(int * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
    pBVar2 = (*(undefined * PTR32 *)(gen_frame + 0x30));
    fVar12 = F_00d25b70((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
    (*(int * PTR32 *)(gen_frame + 0x38)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar12)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pBVar2 + 0x60))))
              (pBVar2 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x18)),(undefined4)gen_fl2bits(fVar12),0);
    F_00c472af(((char *)(gen_frame + 0xe8)),0x20,&REFG(undefined, 0x1134078),(int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x20))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x20))) >> 0x20));
    pcVar8 = ((char *)(gen_frame + 0xe8));
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    gen_imp_GetTextExtentPoint32A(param_2,((char *)(gen_frame + 0xe8)),(int)pcVar8 - (int)(((char *)(gen_frame + 0xe8)) + 1),&(*(undefined8 *)(gen_frame + 0x10)));
    gen_imp_TextOutA(param_2,(int)(*(float * PTR32 *)(gen_frame + 0x40)),iVar10,((char *)(gen_frame + 0xe8)),(int)pcVar8 - (int)(((char *)(gen_frame + 0xe8)) + 1));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x1c)));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x28)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x2c)));
    uVar6 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x24)));
  }
  return uVar6;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d265f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd265f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined * _File;
  byte bVar5;
  int iVar6;
  
  _File = param_1;
  bVar5 = F_00d21f00((undefined *)this GEN_EDX_FWD,param_1);
  if (bVar5 == 0) {
    return 0;
  }
  iVar6 = 0;
  param_1 = ((undefined *)GEN_TOP(0x0));
  do {
    iVar1 = *(int *)(this + 0x128);
    dVar2 = (double)*((float *)GEN_TOP((iVar6 + 0x28 + iVar1)));
    dVar3 = (double)*((float *)GEN_TOP((iVar6 + 0x24 + iVar1)));
    dVar4 = (double)*((float *)GEN_TOP((iVar6 + 0x20 + iVar1)));
    F_00c49386(_File,((char *)REFP(0x1134080)),param_1,(int)(ulonglong)gen_d2bits(dVar4),
             (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
             (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
             (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1)));
    iVar6 = iVar6 + 0x10;
  } while (iVar6 < 0x40);
  param_1 = ((undefined *)GEN_TOP(0x0));
  iVar6 = 0x60;
  do {
    F_00c49386(_File,((char *)REFP(0x113409c)),param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))) >> 0x20
                  ));
    param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1)));
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x68);
  param_1 = ((undefined *)GEN_TOP(0x0));
  iVar6 = 0x68;
  do {
    F_00c49386(_File,((char *)REFP(0x11340b0)),param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))) >> 0x20
                  ));
    param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1)));
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x78);
  F_00c49386(_File,((char *)REFP(0x11340c0)),(uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x7c))));
  F_00c49386(_File,((char *)REFP(0x11340d0)),*((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x78))));
  F_00c49386(_File,((char *)REFP(0x11340e0)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf31 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d26710(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd26710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  byte * pbVar6;
  bool bVar7;
  double dVar8;
  
  pcVar2 = ((char *)REFP(0x11340f8));
  pbVar6 = ((byte *)GEN_TOP(param_2));
  do {
    bVar1 = *pcVar2;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00d26741: ;
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00d26746;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00d26741;
    pcVar2 = pcVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d26746: ;
  if (iVar3 == 0) {
    uVar4 = F_00d00d00(0,0);
    if (uVar4 != 0) {
      uVar4 = F_00c4c74c(uVar4);
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar8 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 2) * 0x10))) = (float)dVar8;
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar8 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24 + uVar4 * 0x10))) = (float)dVar8;
          pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
          if (pcVar2 != ((char *)GEN_TOP(0x0))) {
            dVar8 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 0x10))) = (float)dVar8;
            return 1;
          }
        }
      }
    }
  }
  else {
    pcVar2 = ((char *)REFP(0x1134104));
    pbVar6 = ((byte *)GEN_TOP(param_2));
    do {
      bVar1 = *pcVar2;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00d26816: ;
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00d2681b;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00d26816;
      pcVar2 = pcVar2 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d2681b: ;
    if (iVar3 == 0) {
      uVar4 = F_00d00d00(0,0);
      if (uVar4 != 0) {
        uVar4 = F_00c4c74c(uVar4);
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar8 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x60 + uVar4 * 4))) = (float)dVar8;
          return 1;
        }
      }
    }
    else {
      pcVar2 = ((char *)REFP(0x113410c));
      pbVar6 = ((byte *)GEN_TOP(param_2));
      do {
        bVar1 = *pcVar2;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00d26895: ;
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00d2689a;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00d26895;
        pcVar2 = pcVar2 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d2689a: ;
      if (iVar3 == 0) {
        uVar4 = F_00d00d00(0,0);
        if (uVar4 != 0) {
          uVar4 = F_00c4c74c(uVar4);
          pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
          if (pcVar2 != ((char *)GEN_TOP(0x0))) {
            dVar8 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x68 + uVar4 * 4))) = (float)dVar8;
            return 1;
          }
        }
      }
      else {
        pcVar2 = ((char *)REFP(0x1134114));
        pbVar6 = ((byte *)GEN_TOP(param_2));
        do {
          bVar1 = *pcVar2;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00d26914: ;
            iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_00d26919;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00d26914;
          pcVar2 = pcVar2 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d26919: ;
        if (iVar3 == 0) {
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            *((char *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x7c))) = (char)uVar4;
            return 1;
          }
        }
        else {
          pbVar5 = &REFG(undefined1, 0x1134120);
          pbVar6 = ((byte *)GEN_TOP(param_2));
          do {
            bVar1 = *pbVar5;
            bVar7 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_00d26970: ;
              iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
              goto LAB_00d26975;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar7 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_00d26970;
            pbVar5 = pbVar5 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d26975: ;
          if (iVar3 != 0) {
            bVar1 = F_00d22040(param_1 GEN_EDX_ARG,param_2);
            return bVar1;
          }
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            *((uint *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x78))) = uVar4;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00d269c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d269c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd269c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_FRAME_DECL(0xc0, 0);
  int * this;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * pBVar4;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  F_00d22580(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[33])REFP(0x113416c));
  *(uint *)(param_1 + 0xb0) =
       *(uint *)(param_1 + 0xb0) ^ ((uint)param_5 << 4 ^ *(uint *)(param_1 + 0xb0)) & 0x10;
  if (param_5 == 0) {
    *(undefined4 * PTR32 *)(param_1 + 0x128) = param_2;
  }
  else {
    *(undefined * PTR32 *)(param_1 + 0x128) = param_1 + 0x150;
    puVar3 = param_2;
    pBVar4 = param_1 + 0x150;
    for (iVar2 = 0x24; iVar2 != 0; iVar2 = iVar2 - 1) {
      *(undefined4 *)pBVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pBVar4 = pBVar4 + 4;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x128);
  F_00d256a0(param_1 GEN_EDX_ARG);
  this = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xe4))))(this GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x68))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0xa0);
  }
  return (uint)param_1;
}

/* ref: FUN_00d26ab0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d26ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd26ab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xc0, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  F_00d22720(this GEN_EDX_FWD,param_1,param_2);
  *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) | 0x10;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x113416c));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x128))) = ((undefined *)GEN_TOP(((int)this + 0x150)));
  F_00d26ec0(((undefined *)GEN_TOP(((int)this + 0x150))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP(((int)this + 0x128)));
  this_00 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0xa0);
  }
  return (uint)this;
}

/* ref: FUN_00d26b60 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d26b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd26b60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_00d25980(this GEN_EDX_FWD,param_2);
  if (bVar1 != 0) {
    uVar2 = F_00d25a00((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,param_2);
    if (uVar2 != 0) {
      if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x7c))) == '\0') {
        bVar1 = F_00d25cb0(this GEN_EDX_ARG,param_2,param_1);
        return bVar1 != 0;
      }
      *param_1 = (float)(float10)0;
    }
  }
  return 0;
}

/* ref: FUN_00d26bb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d26bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd26bb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  int iVar1;
  int iVar2;
  float * pfVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_14;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x128)));
  iVar4 = 0;
  iVar2 = 1;
  pfVar3 = ((float *)GEN_TOP((iVar1 + 0x30)));
  fVar7 = *param_2 - *((float *)GEN_TOP((iVar1 + 0x20)));
  fVar8 = param_2[1] - *((float *)GEN_TOP((iVar1 + 0x24)));
  fVar9 = param_2[2] - *((float *)GEN_TOP((iVar1 + 0x28)));
  fVar10 = param_2[3] - *((float *)GEN_TOP((iVar1 + 0x2c)));
  fVar8 = fVar8 * fVar8;
  fVar9 = fVar9 * fVar9;
  fVar10 = fVar10 * fVar10;
  local_14 = SQRT(((fVar8 + fVar7 * fVar7) + fVar9) + fVar10);
  fStack_3c = ((fVar8 + fVar8) + fVar9) + fVar10;
  fStack_38 = ((fVar8 + fVar9) + fVar9) + fVar10;
  fStack_34 = ((fVar8 + fVar10) + fVar9) + fVar10;
  do {
    fVar7 = *param_2 - *pfVar3;
    fVar8 = param_2[1] - pfVar3[1];
    fVar9 = param_2[2] - pfVar3[2];
    fVar10 = param_2[3] - pfVar3[3];
    fVar8 = fVar8 * fVar8;
    fVar9 = fVar9 * fVar9;
    fVar10 = fVar10 * fVar10;
    fVar7 = SQRT(((fVar8 + fVar7 * fVar7) + fVar9) + fVar10);
    fStack_4c = ((fVar8 + fVar8) + fVar9) + fVar10;
    fStack_48 = ((fVar8 + fVar9) + fVar9) + fVar10;
    fStack_44 = ((fVar8 + fVar10) + fVar9) + fVar10;
    fVar5 = (float10)fVar7;
    fVar6 = (float10)local_14;
    if (fVar5 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar5)) && fVar6 != fVar5)) {
      iVar4 = iVar2;
      local_14 = fVar7;
    }
    iVar2 = iVar2 + 1;
    pfVar3 = pfVar3 + 4;
  } while (iVar2 < 4);
  *param_1 = *((undefined4 *)GEN_TOP((iVar1 + 0x68 + iVar4 * 4)));
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d26d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd26d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00d22da0(this GEN_EDX_FWD,param_1,0x90)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x24; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x24);
  }
  F_00d26f90(*(undefined4 *)(this + 0x128) GEN_EDX_ARG,(uint)puVar1);
  return (uint)(puVar1 + 0x24);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00d26da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd26da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x1c, 4, 4);
  int * piVar1;
  int iVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x14)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_FWD,0x406);
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x98))))(piVar1 GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x30))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  bVar3 = F_00d25980(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  if (bVar3 != 0) {
    uVar5 = F_00d25a00(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    if (uVar5 != 0) {
      if (*((char *)GEN_TOP((*(int *)(this + 0x128) + 0x7c))) == '\0') {
        bVar3 = F_00d25cb0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),&(*(float *)(gen_frame + 0x0)));
        if (bVar3 != 0) {
          *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) | 1;
          if (*((char *)GEN_TOP((*(int *)(this + 0x128) + 0x7c))) == '\0') {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))
                      (piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x20),
                       *((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x78))),
                       (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x0))));
          }
          return 1;
        }
      }
      else {
        (*(float *)(gen_frame + 0x0)) = (float)(float10)0;
      }
    }
  }
  if (((byte)this[0xb0] & 1) != 0) {
    iVar2 = *(int *)(this + 0x128);
    if (*((char *)GEN_TOP((iVar2 + 0x7c))) == '\0') {
      F_00d26bb0(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))
                (piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x20),*((undefined4 *)GEN_TOP((iVar2 + 0x78))),
                 (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x0))));
    }
    *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) & 0xfffffffe;
  }
  return 0;
}

/* ref: FUN_00d26ec0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d26ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd26ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  fVar1 = (float10)1;
  *((undefined2 *)GEN_TOP(((int)this + 3))) = 0x400;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 5))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((float *)GEN_TOP(((int)this + 0x10))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x14))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x18))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x1c))) = (float)fVar1;
  *((undefined2 *)GEN_TOP(((int)this + 0xe))) = 0;
  fVar2 = (float10)0;
  *((undefined1 *)GEN_TOP(((int)this + 0xd))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 2))) = 0xc;
  *(undefined2 *)this = 0x90;
  *((float *)GEN_TOP(((int)this + 0x20))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x24))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x28))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x2c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x2c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x68))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x30))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x34))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x38))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x3c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x3c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x6c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x40))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x44))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x48))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x4c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x4c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x70))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x50))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x54))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x58))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x5c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x5c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x74))) = (float)fVar2;
  *((undefined1 *)GEN_TOP(((int)this + 0x7c))) = 0;
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094880)));
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = uVar3;
  *((float *)GEN_TOP(((int)this + 100))) = (float)fVar2;
  *((undefined2 *)GEN_TOP(((int)this + 0x7d))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x7f))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  return 0;
}

/* ref: FUN_00d26f90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d26f90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd26f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  uint * puVar4;
  int local_8;
  
  F_00d0c080(param_1 GEN_EDX_FWD,param_2);
  puVar3 = ((uint *)GEN_TOP((param_1 + 0x28)));
  puVar2 = ((uint *)GEN_TOP((param_2 + 0x20)));
  local_8 = 4;
  puVar4 = ((uint *)GEN_TOP((param_2 + 0x68)));
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar2)));
    *puVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[-1];
    puVar2[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar3;
    puVar2[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[1];
    puVar2[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar4)));
    *puVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar2 = puVar2 + 4;
    puVar3 = puVar3 + 4;
    local_8 = local_8 - 1;
    puVar4 = puVar4 + 1;
  } while (local_8 != 0);
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x60)));
  *((uint *)GEN_TOP((param_2 + 0x60))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 100)));
  *((uint *)GEN_TOP((param_2 + 100))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((undefined1 *)GEN_TOP((param_2 + 0x7c))) = *((undefined1 *)GEN_TOP((param_1 + 0x7c)));
  *((undefined4 *)GEN_TOP((param_2 + 0x78))) = *((undefined4 *)GEN_TOP((param_1 + 0x78)));
  *((undefined2 *)GEN_TOP((param_2 + 0x7d))) = 0;
  *((undefined1 *)GEN_TOP((param_2 + 0x7f))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 0x80))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 0x84))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 0x88))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 0x8c))) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d270a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd270a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[33])REFP(0x113416c));
  F_00d23680(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d270e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd270e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int local_14;
  
  F_00d213b0(this GEN_EDX_FWD,param_1,(undefined1)param_2);
  iVar4 = *(int *)(this + 0x128);
  local_14 = 0;
  if (*((char *)GEN_TOP((iVar4 + 0x4e))) != '\0') {
    iVar5 = 0;
    do {
      fVar1 = param_1[3];
      local_14 = local_14 + 1;
      fVar2 = param_1[1];
      fVar3 = param_1[2];
      *((float *)GEN_TOP((iVar5 + 0x60 + iVar4))) = *((float *)GEN_TOP((iVar5 + 0x60 + iVar4))) + *param_1;
      *((float *)GEN_TOP((iVar5 + 100 + iVar4))) = *((float *)GEN_TOP((iVar5 + 100 + iVar4))) + fVar2;
      *((float *)GEN_TOP((iVar5 + 0x68 + iVar4))) = *((float *)GEN_TOP((iVar5 + 0x68 + iVar4))) + fVar3;
      *((float *)GEN_TOP((iVar5 + 0x6c + iVar4))) = *((float *)GEN_TOP((iVar5 + 0x6c + iVar4))) + fVar1;
      *((float *)GEN_TOP((iVar5 + 0x6c + *(int *)(this + 0x128)))) = (float)(float10)1;
      iVar4 = *(int *)(this + 0x128);
      iVar5 = iVar5 + 0x10;
    } while (local_14 < (int)(uint)*((byte *)GEN_TOP((iVar4 + 0x4e))));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d271d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd271d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x80)));
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d271f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd271f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  float10 fVar1;
  
  fVar1 = F_00d22f40(this GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40)))),
                       *((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) >> 2 & 1);
  *param_1 = ((float)GEN_TOF((fVar1 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x38))))));
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d27230(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd27230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x260) {
    return 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x128)));
  puVar3 = param_2;
  for (iVar1 = 0x98; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x260;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf19 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d27270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd27270u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x128);
  *param_1 = *((undefined4 *)GEN_TOP((iVar1 + 0x20)));
  *param_2 = *((undefined4 *)GEN_TOP((iVar1 + 0x24)));
  *param_3 = *((undefined4 *)GEN_TOP((iVar1 + 0x44)));
  *param_4 = *((undefined4 *)GEN_TOP((iVar1 + 0x40)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d272a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd272a0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x128)));
  *((float *)GEN_TOP((uVar1 + 0x20))) = param_2;
  *((float *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x128))) + 0x24))) = param_3;
  return uVar1;
}

/* ref: FUN_00d272c0 */
GEN_LIB_GS GEN_FRAME uint GEN_STDCALL F_00d272c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(byte * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd272c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(byte * param_3 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  ushort uVar1;
  undefined2 extraout_var = 0;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  fVar6 = F_010536a0(param_1,param_2,((byte *)(gen_frame + 0x0)));
  fVar4 = (float10)fVar6;
  if ((float10)*param_4 <= (float10)*(float *)&REFG(undefined, 0x1097254)) {
    *param_4 = fVar6;
    *(undefined4 *)param_3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    (*(undefined1 *)((char *)&uVar2 + 0)) = ((byte *)(gen_frame + 0x0))[0xc];
    (*(undefined1 *)((char *)&uVar2 + 1)) = ((byte *)(gen_frame + 0x0))[0xd];
    (*(undefined1 *)((char *)&uVar2 + 2)) = ((byte *)(gen_frame + 0x0))[0xe];
    (*(undefined1 *)((char *)&uVar2 + 3)) = ((byte *)(gen_frame + 0x0))[0xf];
    *(undefined4 *)(param_3 + 4) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
    *(undefined4 *)(param_3 + 8) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
    *(undefined4 *)(param_3 + 0xc) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12));
    return uVar2;
  }
  fVar5 = (float10)*param_4;
  uVar1 = (ushort)((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4)) || fVar5 == fVar4);
  if (fVar4 <= fVar5 && uVar1 == 0) {
    *param_4 = fVar6;
    (*(undefined1 *)((char *)&uVar3 + 0)) = ((byte *)(gen_frame + 0x0))[8];
    (*(undefined1 *)((char *)&uVar3 + 1)) = ((byte *)(gen_frame + 0x0))[9];
    (*(undefined1 *)((char *)&uVar3 + 2)) = ((byte *)(gen_frame + 0x0))[10];
    (*(undefined1 *)((char *)&uVar3 + 3)) = ((byte *)(gen_frame + 0x0))[0xb];
    *(undefined4 *)param_3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    *(undefined4 *)(param_3 + 4) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
    *(undefined4 *)(param_3 + 8) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
    *(undefined4 *)(param_3 + 0xc) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12));
    return uVar3;
  }
  return CONCAT22(extraout_var,
                  (ushort)!(fVar4 <= fVar5) << 8 | (ushort)(GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4)) << 10 |
                  uVar1 << 0xe);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d27380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd27380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x290, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x27c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x280);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x270);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf27 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d27400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd27400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
  for (iVar2 = 0x98; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  bVar1 = F_00d228c0(this GEN_EDX_FWD);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d27430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd27430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined * _File;
  byte bVar5;
  int iVar6;
  
  _File = param_1;
  bVar5 = F_00d21f00((undefined *)this GEN_EDX_FWD,param_1);
  if (bVar5 != 0) {
    iVar6 = 0;
    param_1 = ((undefined *)GEN_TOP(0x0));
    if (*((char *)GEN_TOP((*(int *)(this + 0x128) + 0x4e))) != '\0') {
      do {
        iVar1 = *(int *)(this + 0x128);
        dVar2 = (double)*((float *)GEN_TOP((iVar6 + 0x68 + iVar1)));
        dVar3 = (double)*((float *)GEN_TOP((iVar6 + 100 + iVar1)));
        dVar4 = (double)*((float *)GEN_TOP((iVar6 + 0x60 + iVar1)));
        F_00c49386(_File,((char *)REFP(0x1134228)),param_1,(int)(ulonglong)gen_d2bits(dVar4),
                 (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
                 (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
                 (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
        param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1)));
        iVar6 = iVar6 + 0x10;
      } while ((int)param_1 < (int)(uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x4e))));
    }
    F_00c49386(_File,((char *)REFP(0x1134244)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x20))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x20))))));
    F_00c49386(_File,((char *)REFP(0x1134254)),
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x24)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x24)))) >> 0x20)
            );
    param_1 = ((undefined *)GEN_TOP(0x0));
    iVar6 = 0x28;
    do {
      F_00c49386(_File,((char *)REFP(0x1134264)),param_1,
               (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar6 + *(int *)(this + 0x128))))),
               (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar6 + *(int *)(this + 0x128))))) >>
                    0x20));
      param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1)));
      iVar6 = iVar6 + 4;
    } while (iVar6 < 0x30);
    F_00c49386(_File,((char *)REFP(0x1134278)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x30))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x30))))));
    F_00c49386(_File,((char *)REFP(0x113428c)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x34))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x34))))));
    F_00c49386(_File,((char *)REFP(0x113429c)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x38))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x38))))));
    F_00c49386(_File,((char *)REFP(0x11342a8)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x3c))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x3c))))));
    F_00c49386(_File,((char *)REFP(0x11342b8)),
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40)))) >> 0x20)
            );
    F_00c49386(_File,((char *)REFP(0x11342cc)),*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x4d))) & 1);
    F_00c49386(_File,((char *)REFP(0x11342e4)),(uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x4e))));
    F_00c49386(_File,((char *)REFP(0x11342f8)));
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf31 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d275f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd275f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = ((char *)REFP(0x1134310));
  pbVar5 = ((byte *)GEN_TOP(param_2));
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d27621: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d27626;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d27621;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d27626: ;
  if (iVar3 == 0) {
    uVar4 = F_00d00d00(0,0);
    if (uVar4 != 0) {
      uVar4 = F_00c4c74c(uVar4);
      if ((int)uVar4 < 0x20) {
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 6) * 0x10))) = (float)dVar7;
          pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
          if (pcVar2 != ((char *)GEN_TOP(0x0))) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 100 + uVar4 * 0x10))) = (float)dVar7;
            pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
            if (pcVar2 != ((char *)GEN_TOP(0x0))) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x68 + uVar4 * 0x10))) = (float)dVar7;
              return 1;
            }
          }
        }
      }
    }
  }
  else {
    pcVar2 = ((char *)REFP(0x113431c));
    pbVar5 = ((byte *)GEN_TOP(param_2));
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d27700: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d27705;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d27700;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d27705: ;
    if (iVar3 == 0) {
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x20))) = (float)dVar7;
        return 1;
      }
    }
    else {
      pcVar2 = ((char *)REFP(0x1134328));
      pbVar5 = ((byte *)GEN_TOP(param_2));
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00d27762: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d27767;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00d27762;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d27767: ;
      if (iVar3 == 0) {
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = ((char *)REFP(0x1134334));
        pbVar5 = ((byte *)GEN_TOP(param_2));
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d277c4: ;
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d277c9;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d277c4;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d277c9: ;
        if (iVar3 == 0) {
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
            if (pcVar2 != ((char *)GEN_TOP(0x0))) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 4))) = (float)dVar7;
              return 1;
            }
          }
        }
        else {
          pcVar2 = ((char *)REFP(0x113433c));
          pbVar5 = ((byte *)GEN_TOP(param_2));
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d27843: ;
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d27848;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d27843;
            pcVar2 = pcVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d27848: ;
          if (iVar3 == 0) {
            pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
            if (pcVar2 != ((char *)GEN_TOP(0x0))) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x30))) = (float)dVar7;
              return 1;
            }
          }
          else {
            pcVar2 = ((char *)REFP(0x1134348));
            pbVar5 = ((byte *)GEN_TOP(param_2));
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d278a5: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d278aa;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d278a5;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d278aa: ;
            if (iVar3 == 0) {
              pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
              if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                dVar7 = F_00c4acaa(pcVar2);
                *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x34))) = (float)dVar7;
                return 1;
              }
            }
            else {
              pcVar2 = ((char *)REFP(0x1134350));
              pbVar5 = ((byte *)GEN_TOP(param_2));
              do {
                bVar1 = *pcVar2;
                bVar6 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_00d27907: ;
                  iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                  goto LAB_00d2790c;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar2[1];
                bVar6 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_00d27907;
                pcVar2 = pcVar2 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00d2790c: ;
              if (iVar3 == 0) {
                pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                  dVar7 = F_00c4acaa(pcVar2);
                  *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x38))) = (float)dVar7;
                  return 1;
                }
              }
              else {
                pcVar2 = ((char *)REFP(0x1134358));
                pbVar5 = ((byte *)GEN_TOP(param_2));
                do {
                  bVar1 = *pcVar2;
                  bVar6 = bVar1 < *pbVar5;
                  if (bVar1 != *pbVar5) {
LAB_00d27970: ;
                    iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                    goto LAB_00d27975;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pcVar2[1];
                  bVar6 = bVar1 < pbVar5[1];
                  if (bVar1 != pbVar5[1]) goto LAB_00d27970;
                  pcVar2 = pcVar2 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_00d27975: ;
                if (iVar3 == 0) {
                  pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                  if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                    dVar7 = F_00c4acaa(pcVar2);
                    *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x3c))) = (float)dVar7;
                    return 1;
                  }
                }
                else {
                  pcVar2 = ((char *)REFP(0x1134364));
                  pbVar5 = ((byte *)GEN_TOP(param_2));
                  do {
                    bVar1 = *pcVar2;
                    bVar6 = bVar1 < *pbVar5;
                    if (bVar1 != *pbVar5) {
LAB_00d279d2: ;
                      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                      goto LAB_00d279d7;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pcVar2[1];
                    bVar6 = bVar1 < pbVar5[1];
                    if (bVar1 != pbVar5[1]) goto LAB_00d279d2;
                    pcVar2 = pcVar2 + 2;
                    pbVar5 = pbVar5 + 2;
                  } while (bVar1 != 0);
                  iVar3 = 0;
LAB_00d279d7: ;
                  if (iVar3 == 0) {
                    pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                    if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                      dVar7 = F_00c4acaa(pcVar2);
                      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x40))) = (float)dVar7;
                      return 1;
                    }
                  }
                  else {
                    pcVar2 = ((char *)REFP(0x1134370));
                    pbVar5 = ((byte *)GEN_TOP(param_2));
                    do {
                      bVar1 = *pcVar2;
                      bVar6 = bVar1 < *pbVar5;
                      if (bVar1 != *pbVar5) {
LAB_00d27a34: ;
                        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                        goto LAB_00d27a39;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pcVar2[1];
                      bVar6 = bVar1 < pbVar5[1];
                      if (bVar1 != pbVar5[1]) goto LAB_00d27a34;
                      pcVar2 = pcVar2 + 2;
                      pbVar5 = pbVar5 + 2;
                    } while (bVar1 != 0);
                    iVar3 = 0;
LAB_00d27a39: ;
                    if (iVar3 == 0) {
                      uVar4 = F_00d00d00(0,0);
                      if (uVar4 != 0) {
                        uVar4 = F_00c4c74c(uVar4);
                        *((char *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x4c))) = (char)uVar4;
                        return 1;
                      }
                    }
                    else {
                      pcVar2 = ((char *)REFP(0x1134380));
                      pbVar5 = ((byte *)GEN_TOP(param_2));
                      do {
                        bVar1 = *pcVar2;
                        bVar6 = bVar1 < *pbVar5;
                        if (bVar1 != *pbVar5) {
LAB_00d27a90: ;
                          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                          goto LAB_00d27a95;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pcVar2[1];
                        bVar6 = bVar1 < pbVar5[1];
                        if (bVar1 != pbVar5[1]) goto LAB_00d27a90;
                        pcVar2 = pcVar2 + 2;
                        pbVar5 = pbVar5 + 2;
                      } while (bVar1 != 0);
                      iVar3 = 0;
LAB_00d27a95: ;
                      if (iVar3 == 0) {
                        uVar4 = F_00d00d00(0,0);
                        if (uVar4 != 0) {
                          uVar4 = F_00c4c74c(uVar4);
                          pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x4d)));
                          *pbVar5 = *pbVar5 ^ (*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x4d))) ^
                                              (byte)uVar4) & 1;
                          return 1;
                        }
                      }
                      else {
                        pcVar2 = ((char *)REFP(0x1134390));
                        pbVar5 = ((byte *)GEN_TOP(param_2));
                        do {
                          bVar1 = *pcVar2;
                          bVar6 = bVar1 < *pbVar5;
                          if (bVar1 != *pbVar5) {
LAB_00d27af4: ;
                            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                            goto LAB_00d27af9;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pcVar2[1];
                          bVar6 = bVar1 < pbVar5[1];
                          if (bVar1 != pbVar5[1]) goto LAB_00d27af4;
                          pcVar2 = pcVar2 + 2;
                          pbVar5 = pbVar5 + 2;
                        } while (bVar1 != 0);
                        iVar3 = 0;
LAB_00d27af9: ;
                        if (iVar3 != 0) {
                          bVar1 = F_00d22040(param_1 GEN_EDX_ARG,param_2);
                          return bVar1;
                        }
                        uVar4 = F_00d00d00(0,0);
                        if (uVar4 != 0) {
                          uVar4 = F_00c4c74c(uVar4);
                          *((char *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x4e))) = (char)uVar4;
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
  return 0;
}

/* ref: FUN_00d27b40 */
GEN_LIB GEN_NOFRAME float F_00d27b40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd27b40u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x280, 0);
  byte bVar1;
  float * pfVar2;
  int iVar3;
  float * pfVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  (*(uint *)(gen_frame + 0x26c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x270);
  bVar1 = *((byte *)GEN_TOP((param_1 + 0x4e)));
  (*(float *)(gen_frame + 0x34)) = param_2;
  (*(int *)(gen_frame + 0x20)) = param_1;
  (*(undefined2 *)(gen_frame + 0x264)) = SUB42(param_3,0);
  (*(undefined1 *)(gen_frame + 0x266)) = (undefined1)((uint)((int)(uintptr_t)param_3) >> 0x10);
  (*(undefined1 *)(gen_frame + 0x267)) = (undefined1)((uint)((int)(uintptr_t)param_3) >> 0x18);
  pfVar4 = param_3;
  if (gen_bits2f((uint)bVar1) != 0.0) {
    pfVar4 = ((float *)(gen_frame + 0x60));
    (*(float *)(gen_frame + 0x3c)) = gen_bits2f(param_1 + 0x60);
    (*(float *)(gen_frame + 0x38)) = gen_bits2f((uint)bVar1);
    do {
      pfVar2 = ((float *)GEN_TOP(F_00c34320((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x34))) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),
                                     (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x3c))))));
      (*(float *)(gen_frame + 0x3c)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 0x10);
      *pfVar4 = *pfVar2;
      pfVar4[1] = pfVar2[1];
      pfVar4[2] = pfVar2[2];
      pfVar4[3] = pfVar2[3];
      pfVar4 = pfVar4 + 4;
      fVar13 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x38))) - 1);
      (*(float *)(gen_frame + 0x38)) = fVar13;
    } while (fVar13 != 0.0);
    pfVar4 = ((float *)GEN_TOP(CONCAT13((*(undefined1 *)(gen_frame + 0x267)),CONCAT12((*(undefined1 *)(gen_frame + 0x266)),(*(undefined2 *)(gen_frame + 0x264))))));
  }
  if (((*((byte *)GEN_TOP((param_1 + 4))) & 4) == 0) && ((*(float *)(gen_frame + 0x3c)) = 0.0, *((char *)GEN_TOP((param_1 + 0x4e))) != '\0')) {
    pfVar2 = ((float *)(gen_frame + 0x60)) + 1;
    do {
      (*(float *)(gen_frame + 0x38)) = *pfVar2;
      F_00d218f0(pfVar4[1],&(*(float *)(gen_frame + 0x38)),param_1,param_1 + 0x28);
      bVar1 = *((byte *)GEN_TOP((param_1 + 0x4e)));
      *pfVar2 = (*(float *)(gen_frame + 0x38));
      iVar3 = (int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 1;
      pfVar2 = pfVar2 + 4;
      (*(float *)(gen_frame + 0x3c)) = gen_bits2f(iVar3);
      pfVar4 = ((float *)GEN_TOP(CONCAT13((*(undefined1 *)(gen_frame + 0x267)),CONCAT12((*(undefined1 *)(gen_frame + 0x266)),(*(undefined2 *)(gen_frame + 0x264))))));
    } while (iVar3 < (int)(uint)bVar1);
  }
  uVar6 = (uint)*((byte *)GEN_TOP((param_1 + 0x4e)));
  if (uVar6 != 0) {
    fVar13 = *pfVar4;
    fVar15 = pfVar4[1];
    fVar17 = pfVar4[2];
    fVar11 = pfVar4[3];
    pfVar4 = ((float *)(gen_frame + 0x60)) + 2;
    uVar5 = uVar6;
    do {
      uVar5 = uVar5 - 1;
      fVar10 = pfVar4[-2] - fVar13;
      fVar12 = pfVar4[-1] - fVar15;
      fVar14 = *pfVar4 - fVar17;
      fVar16 = pfVar4[1] - fVar11;
      (*(float *)(gen_frame + 0x10)) = fVar10;
      (*(float *)(gen_frame + 0x14)) = fVar12;
      (*(float *)(gen_frame + 0x18)) = fVar14;
      (*(float *)(gen_frame + 0x1c)) = fVar16;
      (*(float *)(gen_frame + 0x24)) = fVar10;
      pfVar4[-2] = fVar10;
      (*(float *)(gen_frame + 0x28)) = fVar12;
      pfVar4[-1] = fVar12;
      (*(float *)(gen_frame + 0x2c)) = fVar14;
      *pfVar4 = fVar14;
      (*(float *)(gen_frame + 0x30)) = fVar16;
      pfVar4[1] = fVar16;
      pfVar4 = pfVar4 + 4;
    } while (uVar5 != 0);
  }
  (*(float *)(gen_frame + 0x3c)) = *(float *)&REFG(undefined, 0x1097254);
  (*(undefined2 *)(gen_frame + 0x264)) = 0x100;
  (*(undefined1 *)(gen_frame + 0x266)) = 1;
  (*(undefined1 *)(gen_frame + 0x267)) = 2;
  (*(undefined1 *)(gen_frame + 0x268)) = 2;
  (*(undefined1 *)(gen_frame + 0x269)) = 0;
  if (uVar6 != 2 && -1 < (int)(uVar6 - 2)) {
    iVar3 = 0;
    do {
      pfVar4 = ((float *)(gen_frame + 0x60)) + iVar3 * 4;
      F_01052f50(pfVar4,&(*(float *)(gen_frame + 0x50)));
      bVar1 = F_010530d0(pfVar4,&(*(float *)(gen_frame + 0x50)));
      if (bVar1 == 0) {
        iVar7 = 0;
        do {
          fVar13 = F_010536a0(((float *)(gen_frame + 0x60)) + ((uint)*(byte *)(&(*(undefined2 *)(gen_frame + 0x264)) + iVar7) + iVar3) * 4, ((float *)(gen_frame + 0x60)) + ((uint)*((byte *)GEN_TOP(((int)&(*(undefined2 *)(gen_frame + 0x264)) + iVar7 * 2 + 1))) + iVar3) * 4, ((undefined1 *)(gen_frame + 0x40)));
          (*(float *)(gen_frame + 0x38)) = fVar13;
          fVar8 = (float10)fVar13;
          if (iVar7 + iVar3 == 0) {
            (*(float *)(gen_frame + 0x3c)) = fVar13;
          }
          else {
            fVar9 = (float10)(*(float *)(gen_frame + 0x3c));
            if (fVar8 <= fVar9 && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar8)) && fVar9 != fVar8)) {
              (*(float *)(gen_frame + 0x3c)) = fVar13;
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 3);
      }
      else {
        fVar11 = 0.0 - *pfVar4;
        fVar13 = 0.0 - ((float *)(gen_frame + 0x60))[(int)(iVar3 * 4 + 1)];
        fVar15 = 0.0 - ((float *)(gen_frame + 0x60))[(int)(iVar3 * 4 + 2)];
        fVar17 = 0.0 - ((float *)(gen_frame + 0x60))[(int)(iVar3 * 4 + 3)];
        (*(float *)(gen_frame + 0x10)) = fVar11;
        (*(float *)(gen_frame + 0x14)) = fVar13;
        (*(float *)(gen_frame + 0x18)) = fVar15;
        (*(float *)(gen_frame + 0x1c)) = fVar17;
        (*(float *)(gen_frame + 0x24)) = fVar11;
        (*(float *)(gen_frame + 0x28)) = fVar13;
        (*(float *)(gen_frame + 0x2c)) = fVar15;
        (*(float *)(gen_frame + 0x30)) = fVar17;
        fVar13 = (*(float *)(gen_frame + 0x54)) * fVar13;
        fVar15 = (*(float *)(gen_frame + 0x58)) * fVar15;
        fVar17 = (*(float *)(gen_frame + 0x5c)) * fVar17;
        fVar11 = ((fVar13 + (*(float *)(gen_frame + 0x50)) * fVar11) + fVar15) + fVar17;
        (*(float *)(gen_frame + 0x0)) = fVar11;
        (*(float *)(gen_frame + 0x4)) = ((fVar13 + fVar13) + fVar15) + fVar17;
        (*(float *)(gen_frame + 0x8)) = ((fVar13 + fVar15) + fVar15) + fVar17;
        (*(float *)(gen_frame + 0xc)) = ((fVar13 + fVar17) + fVar15) + fVar17;
        fVar13 = ((float)GEN_TOF(ABS((float10)fVar11)));
        (*(float *)(gen_frame + 0x34)) = fVar13;
        (*(float *)(gen_frame + 0x38)) = fVar13;
        fVar8 = (float10)fVar13;
        if (iVar3 == 0) {
          (*(float *)(gen_frame + 0x3c)) = fVar13;
        }
        else {
          fVar9 = (float10)(*(float *)(gen_frame + 0x3c));
          if (fVar8 <= fVar9 && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar8)) && fVar9 != fVar8)) {
            (*(float *)(gen_frame + 0x3c)) = fVar13;
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 0x4e))) - 2));
  }
  fVar8 = (float10)(*(float *)(gen_frame + 0x3c));
  fVar9 = (float10)*((float *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 0x24)));
  if (!(fVar8 <= fVar9) == ((GEN_ISNAN(fVar9) || GEN_ISNAN(fVar8)) || fVar9 == fVar8)) {
    return *(float *)&REFG(undefined, 0x1097254);
  }
  fVar13 = ((float)GEN_TOF((fVar8 - (float10)*((float *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 0x24))))));
  (*(float *)(gen_frame + 0x34)) = fVar13;
  return fVar13;
}

/* ref: FUN_00d27f60 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d27f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd27f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL(0x314, 12);
  char cVar1;
  code * pcVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  undefined4 * puVar8;
  int iVar9;
  float * pfVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined * pvVar17;
  undefined * pvVar18;
  
  (*(uint *)(gen_frame + 0x300)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x304);
  piVar4 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  (*(float * PTR32 *)(gen_frame + 0x1c)) = param_1;
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x98))))(piVar4 GEN_EDX_FWD)));
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar4;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x5c))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x34)));
  if ((char)uVar5 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x30))))((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb4)));
    iVar7 = *((int *)GEN_TOP(((int)this + 0x128)));
    cVar1 = *((char *)GEN_TOP((iVar7 + 0x4e)));
    pfVar10 = param_1;
    if (cVar1 != '\0') {
      puVar8 = ((undefined4 *)GEN_TOP((iVar7 + 0x60)));
      puVar6 = ((undefined4 *)(gen_frame + 0xf4));
      for (iVar9 = (uint)*((byte *)GEN_TOP((iVar7 + 0x4e))) * 4; pfVar10 = (*(float * PTR32 *)(gen_frame + 0x1c)), this = (*(undefined * PTR32 *)(gen_frame + 0x30)),
          iVar9 != 0; iVar9 = iVar9 - 1) {
        *puVar6 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    if (((*((byte *)GEN_TOP((iVar7 + 4))) & 4) == 0) && ((*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = ((undefined4 *)GEN_TOP(0x0)), cVar1 != '\0')) {
      puVar8 = ((undefined4 *)(gen_frame + 0xf4)) + 1;
      do {
        iVar7 = *((int *)GEN_TOP(((int)this + 0x128)));
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar8;
        F_00d218f0((*(float *)(gen_frame + 0xb8)),&(*(undefined4 *)(gen_frame + 0x0)),iVar7,iVar7 + 0x28);
        iVar7 = *((int *)GEN_TOP(((int)this + 0x128)));
        *puVar8 = (*(undefined4 *)(gen_frame + 0x0));
        iVar9 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x2c)) + 1;
        puVar8 = puVar8 + 4;
        (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = ((undefined4 *)GEN_TOP(iVar9));
        pfVar10 = (*(float * PTR32 *)(gen_frame + 0x1c));
      } while (iVar9 < (int)(uint)*((byte *)GEN_TOP((iVar7 + 0x4e))));
    }
    (*(int *)(gen_frame + 0x28)) = 0;
    if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x4e))) != '\0') {
      (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = ((undefined4 *)(gen_frame + 0xf4));
      puVar8 = ((undefined4 *)GEN_TOP(((int)this + 300)));
      do {
        puVar6 = ((undefined4 *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0xc4)),(*(undefined4 * PTR32 *)(gen_frame + 0x2c)))));
        (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) + 4;
        *puVar8 = *puVar6;
        puVar8[1] = puVar6[1];
        puVar8[2] = puVar6[2];
        puVar8[3] = puVar6[3];
        iVar7 = (*(int *)(gen_frame + 0x28)) + 1;
        puVar8 = puVar8 + 4;
        (*(int *)(gen_frame + 0x28)) = iVar7;
        pfVar10 = (*(float * PTR32 *)(gen_frame + 0x1c));
      } while (iVar7 < (int)(uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x4e))));
    }
    bVar3 = *((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x4e)));
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = *(undefined * PTR32 *)&REFG(undefined, 0x1097254);
    ((byte *)(gen_frame + 0x2f8))[0] = 0;
    ((byte *)(gen_frame + 0x2f8))[1] = 1;
    ((byte *)(gen_frame + 0x2f8))[2] = 1;
    ((byte *)(gen_frame + 0x2f8))[3] = 2;
    ((byte *)(gen_frame + 0x2f8))[4] = 2;
    ((byte *)(gen_frame + 0x2f8))[5] = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = ((undefined4 *)GEN_TOP(0x0));
    (*(int *)(gen_frame + 0x28)) = 0;
    if (0 < (int)(bVar3 - 2)) {
      do {
        pfVar10 = ((float *)GEN_TOP(((int)this + (*(int *)(gen_frame + 0x28)) * 0x10 + 300)));
        F_01052f50(pfVar10,&(*(float *)(gen_frame + 0xd4)));
        bVar3 = F_010530d0(pfVar10,&(*(float *)(gen_frame + 0xd4)));
        if (bVar3 == 0) {
          iVar7 = 0;
          do {
            pvVar18 = ((undefined *)(uintptr_t)gen_fl2bits((float)(F_010536a0((int)this +
                                           ((uint)((byte *)(gen_frame + 0x2f8))[(int)(iVar7 * 2)] + (*(int *)(gen_frame + 0x28))) * 0x10 + 300,
                                           (int)this +
                                           ((uint)((byte *)(gen_frame + 0x2f8))[(int)(iVar7 * 2 + 1)] + (*(int *)(gen_frame + 0x28))) * 0x10 + 300,
                                           &(*(undefined4 *)(gen_frame + 0xe4))))));
            (*(undefined * PTR32 *)(gen_frame + 0x30)) = pvVar18;
            fVar12 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar18)));
            if (iVar7 + (*(int *)(gen_frame + 0x28)) == 0) {
              (*(undefined * PTR32 *)(gen_frame + 0x24)) = pvVar18;
              *((undefined4 *)GEN_TOP(((int)this + 0x60))) = (*(undefined4 *)(gen_frame + 0xe4));
              *((undefined4 *)GEN_TOP(((int)this + 100))) = (*(undefined4 *)(gen_frame + 0xe8));
              *((undefined4 *)GEN_TOP(((int)this + 0x68))) = (*(undefined4 *)(gen_frame + 0xec));
              *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = (*(undefined4 *)(gen_frame + 0xf0));
              (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = ((undefined4 *)GEN_TOP(0x0));
            }
            else {
              fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x24)))));
              if (fVar12 <= fVar13 && ((!GEN_ISNAN(fVar13) && !GEN_ISNAN(fVar12)) && fVar13 != fVar12)) {
                (*(undefined * PTR32 *)(gen_frame + 0x24)) = pvVar18;
                *((undefined4 *)GEN_TOP(((int)this + 0x60))) = (*(undefined4 *)(gen_frame + 0xe4));
                *((undefined4 *)GEN_TOP(((int)this + 100))) = (*(undefined4 *)(gen_frame + 0xe8));
                *((undefined4 *)GEN_TOP(((int)this + 0x68))) = (*(undefined4 *)(gen_frame + 0xec));
                *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = (*(undefined4 *)(gen_frame + 0xf0));
                (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = ((undefined4 *)GEN_TOP(0x0));
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 3);
        }
        else {
          (*(float *)(gen_frame + 0x4)) = 0.0 - *pfVar10;
          (*(float *)(gen_frame + 0x8)) = 0.0 - pfVar10[1];
          (*(float *)(gen_frame + 0xc)) = 0.0 - pfVar10[2];
          (*(float *)(gen_frame + 0x10)) = 0.0 - pfVar10[3];
          fVar14 = (0.0 - pfVar10[1]) * (*(float *)(gen_frame + 0xd8));
          fVar15 = (0.0 - pfVar10[2]) * (*(float *)(gen_frame + 0xdc));
          fVar16 = (0.0 - pfVar10[3]) * (*(float *)(gen_frame + 0xe0));
          pvVar17 = ((undefined *)GEN_TOP((((fVar14 + (0.0 - *pfVar10) * (*(float *)(gen_frame + 0xd4))) + fVar15) + fVar16)));
          (*(undefined * PTR32 *)(gen_frame + 0xc4)) = pvVar17;
          (*(float *)(gen_frame + 0xc8)) = ((fVar14 + fVar14) + fVar15) + fVar16;
          (*(float *)(gen_frame + 0xcc)) = ((fVar14 + fVar15) + fVar15) + fVar16;
          (*(float *)(gen_frame + 0xd0)) = ((fVar14 + fVar16) + fVar15) + fVar16;
          (*(undefined * PTR32 *)(gen_frame + 0x30)) = pvVar17;
          pvVar18 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar17)))))))));
          (*(undefined * PTR32 *)(gen_frame + 0x20)) = pvVar18;
          fVar12 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar18)));
          if ((*(int *)(gen_frame + 0x28)) == 0) {
            (*(undefined * PTR32 *)(gen_frame + 0x24)) = pvVar18;
            fVar14 = gen_bits2f((uint)pvVar17 ^ REFG(uint, 0x10920d0));
            (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = ((undefined4 *)GEN_TOP(0x1));
            (*(float *)(gen_frame + 0x4)) = fVar14 * (*(float *)(gen_frame + 0xd4));
            (*(float *)(gen_frame + 0x8)) = fVar14 * (*(float *)(gen_frame + 0xd8));
            (*(float *)(gen_frame + 0xc)) = fVar14 * (*(float *)(gen_frame + 0xdc));
            (*(float *)(gen_frame + 0x10)) = fVar14 * (*(float *)(gen_frame + 0xe0));
            *((float *)GEN_TOP(((int)this + 0x60))) = fVar14 * (*(float *)(gen_frame + 0xd4));
            *((float *)GEN_TOP(((int)this + 100))) = fVar14 * (*(float *)(gen_frame + 0xd8));
            *((float *)GEN_TOP(((int)this + 0x68))) = fVar14 * (*(float *)(gen_frame + 0xdc));
            *((float *)GEN_TOP(((int)this + 0x6c))) = fVar14 * (*(float *)(gen_frame + 0xe0));
            *((float *)GEN_TOP(((int)this + 0x6c))) = (float)(float10)1;
          }
          else {
            fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x24)))));
            if (!(fVar12 <= fVar13) || ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) || fVar13 == fVar12)) {
              *((float *)GEN_TOP(((int)this + 0x6c))) = (float)(float10)1;
            }
            else {
              (*(undefined * PTR32 *)(gen_frame + 0x24)) = pvVar18;
              fVar14 = gen_bits2f((uint)pvVar17 ^ REFG(uint, 0x10920d0));
              (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = ((undefined4 *)GEN_TOP(0x1));
              (*(float *)(gen_frame + 0x4)) = fVar14 * (*(float *)(gen_frame + 0xd4));
              (*(float *)(gen_frame + 0x8)) = fVar14 * (*(float *)(gen_frame + 0xd8));
              (*(float *)(gen_frame + 0xc)) = fVar14 * (*(float *)(gen_frame + 0xdc));
              (*(float *)(gen_frame + 0x10)) = fVar14 * (*(float *)(gen_frame + 0xe0));
              *((float *)GEN_TOP(((int)this + 0x60))) = fVar14 * (*(float *)(gen_frame + 0xd4));
              *((float *)GEN_TOP(((int)this + 100))) = fVar14 * (*(float *)(gen_frame + 0xd8));
              *((float *)GEN_TOP(((int)this + 0x68))) = fVar14 * (*(float *)(gen_frame + 0xdc));
              *((float *)GEN_TOP(((int)this + 0x6c))) = fVar14 * (*(float *)(gen_frame + 0xe0));
              *((float *)GEN_TOP(((int)this + 0x6c))) = (float)(float10)1;
            }
          }
        }
        iVar7 = (*(int *)(gen_frame + 0x28)) + 1;
        (*(int *)(gen_frame + 0x28)) = iVar7;
      } while (iVar7 < (int)(*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x4e))) - 2));
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x2c)) != ((undefined4 *)GEN_TOP(0x0))) {
        *((float *)GEN_TOP(((int)this + 0x94))) = (float)(float10)1;
      }
      fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*(undefined * PTR32 *)&REFG(undefined, 0x1097254))));
      fVar12 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x24)))));
      pfVar10 = (*(float * PTR32 *)(gen_frame + 0x1c));
      if (fVar12 <= fVar13 && ((!GEN_ISNAN(fVar13) && !GEN_ISNAN(fVar12)) && fVar13 != fVar12)) {
        return 0;
      }
    }
    iVar7 = *((int *)GEN_TOP(((int)this + 0x128)));
    fVar12 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x24)))));
    fVar13 = (float10)*((float *)GEN_TOP((iVar7 + 0x24)));
    if (!(fVar12 <= fVar13) == ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) || fVar13 == fVar12)) {
      fVar13 = (float10)*((float *)GEN_TOP((iVar7 + 0x20)));
      if (!(fVar12 <= fVar13) || ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) || fVar13 == fVar12)) {
        fVar14 = ((float)GEN_TOF((fVar12 - (float10)*((float *)GEN_TOP((iVar7 + 0x20))))));
        (*(undefined * PTR32 *)(gen_frame + 0x30)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
        *pfVar10 = fVar14;
        fVar14 = ((float)GEN_TOF(((float10)fVar14 /
                        ((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x24))) -
                        (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x20)))))));
        (*(undefined * PTR32 *)(gen_frame + 0x30)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
        fVar14 = (float)((float10)1 - (float10)fVar14);
        (*(undefined * PTR32 *)(gen_frame + 0x30)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
        *pfVar10 = fVar14;
        fVar12 = GEN_X87((float10)fVar14 * (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x30))));
      }
      else {
        fVar14 = ((float)GEN_TOF((fVar12 / (float10)*((float *)GEN_TOP((iVar7 + 0x20))))));
        (*(undefined * PTR32 *)(gen_frame + 0x30)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
        fVar14 = (float)((float10)1 - (float10)fVar14);
        (*(undefined * PTR32 *)(gen_frame + 0x30)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
        *pfVar10 = fVar14;
        fVar12 = GEN_X87((float10)fVar14 *
                 ((float10)1 - (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x30)))) +
                 (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x30))));
      }
      *pfVar10 = (float)fVar12;
      *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *((undefined4 *)GEN_TOP(((int)this + 0x60)));
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP(((int)this + 100)));
      *((undefined4 *)GEN_TOP(((int)this + 0x58))) = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
      *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = *((undefined4 *)GEN_TOP(((int)this + 0x6c)));
      if ((*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x4d))) & 1) != 0) {
        return 1;
      }
      cVar1 = *((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x4c)));
      if (cVar1 == '\0') {
        puVar8 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x68))))((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0xc4)),(int)this + 0x60)));
        (*(undefined4 *)(gen_frame + 0xe4)) = *puVar8;
        (*(undefined4 *)(gen_frame + 0xe8)) = puVar8[1];
        (*(undefined4 *)(gen_frame + 0xec)) = puVar8[2];
        iVar7 = *((int *)GEN_TOP(((int)this + 0x128)));
        (*(undefined4 *)(gen_frame + 0xf0)) = puVar8[3];
        F_00d24070(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xe4)),pfVar10,(int)this + 0x8c,GEN_ARGF(*((float *)GEN_TOP((iVar7 + 0x24)))),GEN_ARGF(*((float *)GEN_TOP((iVar7 + 0x20)))),GEN_ARGF(*((float *)GEN_TOP((iVar7 + 0x30)))),GEN_ARGF(*((float *)GEN_TOP((iVar7 + 0x44)))));
        if ((*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0xc))) & 0x20) != 0) {
          *((undefined4 *)GEN_TOP(((int)this + 0x60))) = *((undefined4 *)GEN_TOP(((int)this + 300)));
          *((undefined4 *)GEN_TOP(((int)this + 100))) = *((undefined4 *)GEN_TOP(((int)this + 0x130)));
          *((undefined4 *)GEN_TOP(((int)this + 0x68))) = *((undefined4 *)GEN_TOP(((int)this + 0x134)));
          *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP(((int)this + 0x138)));
        }
      }
      else if (cVar1 == '\x01' || cVar1 == '\x02') {
        F_00d21d00(this GEN_EDX_ARG,pfVar10,(int)this + 0x8c);
      }
      F_00d219d0(this GEN_EDX_ARG,(uint)pfVar10,(int)this + 0x8c,param_2);
      pcVar2 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x18)) + 100)));
      *pfVar10 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x34))) * (float10)*pfVar10
                        )));
      uVar5 = (*pcVar2)((*(int * PTR32 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x74)));
      if ((char)uVar5 == '\x01') {
        puVar8 = ((undefined4 *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0xc4)),(int)this + 0x70)));
        (*(undefined4 *)(gen_frame + 0xe4)) = *puVar8;
        (*(undefined4 *)(gen_frame + 0xe8)) = puVar8[1];
        (*(undefined4 *)(gen_frame + 0xec)) = puVar8[2];
        (*(undefined4 *)(gen_frame + 0xf0)) = puVar8[3];
        puVar8 = &(*(undefined4 *)(gen_frame + 0xe4));
      }
      else {
        puVar8 = ((undefined4 *)GEN_TOP(((int)this + 0x60)));
      }
      fVar12 = F_00d21d90(this GEN_EDX_ARG,(uint)puVar8,pfVar10,(int)this + 0x8c);
      *((float *)GEN_TOP(((int)this + 0x90))) = (float)fVar12;
      *((float *)GEN_TOP(((int)this + 0x80))) = *pfVar10;
      bVar11 = GEN_ISNAN((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*(undefined * PTR32 *)&REFG(undefined, 0x1097254))))) || GEN_ISNAN((float10)*pfVar10);
      if (bVar11 == (bVar11 || (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*(undefined * PTR32 *)&REFG(undefined, 0x1097254)))) == (float10)*pfVar10)) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00d28770 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d28770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd28770u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x84, 12, 4);
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int * piVar7;
  uint uVar8;
  undefined4 * puVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  fVar1 = *(float *)&REFG(undefined, 0x1097254);
  GEN_COOKIE((*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80));
  fVar10 = (float10)*(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x38)) = *(float *)&REFG(undefined, 0x1097254);
  *param_3 = *(float *)&REFG(undefined, 0x1097254);
  param_3[1] = fVar1;
  param_3[3] = 0.0;
  param_3[2] = fVar1;
  *param_1 = fVar1;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x128)));
  (*(float * PTR32 *)(gen_frame + 0x20)) = param_1;
  cVar2 = *((char *)GEN_TOP((iVar3 + 0x4c)));
  if (cVar2 == '\0') {
    uVar8 = 0;
    if ((*((byte *)GEN_TOP(((int)this + 0xb0))) & 8) != 0) {
LAB_00d28978: ;
      *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 2;
      *((float *)GEN_TOP(((int)this + 0x80))) = (float)(float10)1;
      return uVar8;
    }
    if ((*((byte *)GEN_TOP((iVar3 + 4))) & 0x80) == 0) {
      param_3[2] = *((float *)GEN_TOP(((int)this + 0x98)));
      (*(float *)(gen_frame + 0x34)) = *((float *)GEN_TOP(((int)this + 0x60)));
      (*(float *)(gen_frame + 0x38)) = *((float *)GEN_TOP(((int)this + 0x68)));
      fVar11 = (float10)*((float *)GEN_TOP(((int)this + 0x60)));
      fVar12 = (float10)*((float *)GEN_TOP(((int)this + 0x68)));
      if (((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar11)) == ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar11)) || fVar10 == fVar11)) ||
         ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar10)) == ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar10)) || fVar12 == fVar10))) {
        fVar10 = ((float10)GEN_TOD(atan2(fVar11,-fVar12)));
        fVar1 = (float)fVar10;
        (*(float *)(gen_frame + 0x34)) = fVar1;
        (*(float *)(gen_frame + 0x38)) = fVar1;
        *((float *)GEN_TOP(((int)this + 0xa4))) = fVar1;
      }
      else {
        (*(float *)(gen_frame + 0x38)) = *((float *)GEN_TOP(((int)this + 0xa4)));
      }
      fVar10 = (float10)*((float *)GEN_TOP(((int)this + 0x94)));
LAB_00d28a1e: ;
      *param_3 = (float)fVar10;
      goto LAB_00d28a20;
    }
    *((float *)GEN_TOP(((int)this + 0x94))) = fVar1;
    if ((*((byte *)GEN_TOP((iVar3 + 0xc))) & 2) == 0) {
      (*(float *)(gen_frame + 0x38)) = *((float *)GEN_TOP((iVar3 + 0x48)));
      goto LAB_00d28a20;
    }
  }
  else {
    if (cVar2 == '\x01') {
      *((float *)GEN_TOP(((int)this + 0x60))) = fVar1;
      *((float *)GEN_TOP(((int)this + 100))) = fVar1;
      *((float *)GEN_TOP(((int)this + 0x68))) = fVar1;
      *((float *)GEN_TOP(((int)this + 0x6c))) = (float)(float10)1;
      return 0;
    }
    if (cVar2 != '\x02') goto LAB_00d28a20;
    piVar7 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x98))))(piVar7 GEN_EDX_FWD)));
    fVar10 = ((float10)GEN_TOD(fcos((float10)*((float *)GEN_TOP(((int)this + 0xa0))))));
    (*(float *)(gen_frame + 0x38)) = (float)fVar10;
    (*(float *)(gen_frame + 0x10)) = (float)((float10)(float)fVar10 * (float10)*(double *)&REFG(undefined, 0x1088120));
    (*(float *)(gen_frame + 0x14)) = *(float *)&REFG(undefined, 0x1097254);
    fVar10 = ((float10)GEN_TOD(fsin((float10)*((float *)GEN_TOP(((int)this + 0xa0))))));
    (*(float *)(gen_frame + 0x38)) = (float)fVar10;
    (*(float *)(gen_frame + 0x18)) = (float)((float10)(float)fVar10 * (float10)*(double *)&REFG(undefined, 0x1088120));
    (*(float *)(gen_frame + 0x1c)) = (float)(float10)1;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x5c))))(piVar7 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x3c)));
    if ((char)uVar8 == '\0') {
      return uVar8;
    }
    (*(float *)(gen_frame + 0x24)) = *(float *)&REFG(undefined, 0x1097254);
    (*(float *)(gen_frame + 0x28)) = *(float *)&REFG(undefined, 0x1097254);
    (*(float *)(gen_frame + 0x2c)) = *(float *)&REFG(undefined, 0x1097254);
    (*(float *)(gen_frame + 0x70)) = *(float *)&REFG(undefined, 0x1097254);
    fVar1 = (float)(float10)1;
    (*(float *)(gen_frame + 0x30)) = fVar1;
    (*(float *)(gen_frame + 0x74)) = *(float *)&REFG(undefined, 0x1097254);
    fVar1 = (float)(float10)1;
    (*(float *)(gen_frame + 0x30)) = fVar1;
    (*(float *)(gen_frame + 0x6c)) = *(float *)&REFG(undefined, 0x1097254);
    (*(float *)(gen_frame + 0x78)) = fVar1;
    puVar9 = ((undefined4 *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)))));
    uVar4 = *puVar9;
    uVar5 = puVar9[1];
    uVar6 = puVar9[2];
    uVar8 = puVar9[3];
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = uVar4;
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = uVar5;
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = uVar6;
    *((uint *)GEN_TOP(((int)this + 0x5c))) = uVar8;
    *((undefined4 *)GEN_TOP(((int)this + 0x60))) = uVar4;
    *((undefined4 *)GEN_TOP(((int)this + 100))) = uVar5;
    *((undefined4 *)GEN_TOP(((int)this + 0x68))) = uVar6;
    *((uint *)GEN_TOP(((int)this + 0x6c))) = uVar8;
    fVar1 = *(float *)&REFG(undefined, 0x1097254);
    fVar10 = (float10)*(float *)&REFG(undefined, 0x1097254);
    *((float *)GEN_TOP(((int)this + 0x94))) = *(float *)&REFG(undefined, 0x1097254);
    if ((*((byte *)GEN_TOP(((int)this + 0xb0))) & 8) != 0) goto LAB_00d28978;
    iVar3 = *((int *)GEN_TOP(((int)this + 0x128)));
    if ((*((byte *)GEN_TOP((iVar3 + 4))) & 0x80) == 0) {
      (*(float *)(gen_frame + 0x38)) = *((float *)GEN_TOP(((int)this + 0x60)));
      (*(float *)(gen_frame + 0x34)) = *((float *)GEN_TOP(((int)this + 0x68)));
      fVar11 = (float10)*((float *)GEN_TOP(((int)this + 0x60)));
      fVar12 = (float10)*((float *)GEN_TOP(((int)this + 0x68)));
      if (((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar11)) == ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar11)) || fVar10 == fVar11)) ||
         ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar12)) == ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar12)) || fVar10 == fVar12))) {
        fVar10 = ((float10)GEN_TOD(atan2(fVar11,-fVar12)));
        (*(float *)(gen_frame + 0x34)) = (float)fVar10;
        (*(float *)(gen_frame + 0x38)) = (float)fVar10;
        fVar10 = (float10)*(float *)&REFG(undefined, 0x1097254);
      }
      else {
        (*(float *)(gen_frame + 0x38)) = *((float *)GEN_TOP(((int)this + 0xa4)));
      }
      goto LAB_00d28a1e;
    }
    *((float *)GEN_TOP(((int)this + 0x94))) = fVar1;
    if ((*((byte *)GEN_TOP((iVar3 + 0xc))) & 2) == 0) {
      (*(float *)(gen_frame + 0x38)) = *((float *)GEN_TOP((iVar3 + 0x48)));
      goto LAB_00d28a20;
    }
  }
  fVar10 = F_00d234c0(this GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0xa0)))));
  (*(float *)(gen_frame + 0x38)) = (float)fVar10;
LAB_00d28a20: ;
  *(*(float * PTR32 *)(gen_frame + 0x20)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x38)) + (float10)(*(float *)(gen_frame + 0x38))) / (float10)*(double *)&REFG(undefined, 0x1080228))));
  return (uint)(*(float * PTR32 *)(gen_frame + 0x20));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d28a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd28a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00d22da0(this GEN_EDX_FWD,param_1,0x260)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x98; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x98);
  }
  F_00d29b40(*(undefined4 *)(this + 0x128) GEN_EDX_ARG,(uint)puVar1);
  return (uint)(puVar1 + 0x98);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf28 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d28ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd28ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x1d0, 0, 4);
  int iVar1;
  undefined * pPVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  ulonglong uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1cc));
  uVar3 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x1c8;
    uVar6 = F_00427d90();
    iVar1 = *(int *)(this + 0x128);
    (*(ulonglong *)(gen_frame + 0x8)) = uVar6;
    (*(undefined4 *)(gen_frame + 0x1bc)) = *((undefined4 *)GEN_TOP((iVar1 + 0x24)));
    iVar5 = 0;
    (*(undefined4 *)(gen_frame + 0x1b8)) = *((undefined4 *)GEN_TOP((iVar1 + 0x20)));
    (*(byte *)(gen_frame + 0x1c0)) = *((byte *)GEN_TOP((iVar1 + 0x4e)));
    if (*((byte *)GEN_TOP((iVar1 + 0x4e))) != 0) {
      pPVar2 = this + 0x130;
      puVar4 = ((undefined4 *)(gen_frame + 0x3c));
      do {
        iVar5 = iVar5 + 1;
        puVar4[-1] = *(undefined4 *)(pPVar2 - 4);
        *puVar4 = *(undefined4 *)pPVar2;
        puVar4[1] = *(undefined4 *)(pPVar2 + 4);
        pPVar2 = pPVar2 + 0x10;
        puVar4 = puVar4 + 3;
      } while (iVar5 < (int)(uint)(*(byte *)(gen_frame + 0x1c0)));
    }
    F_00d299e0(&(*(undefined2 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)));
    uVar3 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)),0x1c8);
  }
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf29 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d28ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(HWND param_1, unsigned int gen_a1), GEN_P(HDC param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd28ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(HWND param_1 = (HWND)gen_a1;)
  GEN_PIN(HDC param_2 = (HDC)gen_a2;)
  GEN_FRAME_DECL_GS(0xec, 4, 4);
  char cVar1;
  int iVar2;
  undefined * pHVar3;
  HGDIOBJ pvVar4;
  undefined * pHVar5;
  undefined * pPVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  ulong color;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xe4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe8));
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = (undefined *)param_1;
  F_00c48350(((undefined *)(gen_frame + 0x68)),0,0x3c);
  F_00c49908(((CHAR *)(((char *)((undefined *)(gen_frame + 0x68)) + 28))),0x20,&REFG(undefined, 0x1134208));
  (*(LONG *)((char *)((undefined *)(gen_frame + 0x68)))) = 0xd;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x68)) + 23))) = 0x80;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x68)) + 27))) = '\x01';
  pHVar3 = gen_imp_CreateFontIndirectA(((undefined *)(gen_frame + 0x68)));
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = pHVar3;
  pvVar4 = gen_imp_SelectObject(param_2,pHVar3);
  (*(HGDIOBJ *)(gen_frame + 0x44)) = pvVar4;
  pvVar4 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x48)) = pvVar4;
  pvVar4 = gen_imp_SelectObject(param_2,pvVar4);
  (*(HGDIOBJ *)(gen_frame + 0x4c)) = pvVar4;
  if (((byte)this[0xb0] & 1) == 0) {
    iVar10 = 1;
    color = 0x900000;
  }
  else {
    color = 0x80;
    iVar10 = 2;
  }
  pHVar5 = gen_imp_CreatePen(0,iVar10,color);
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = pHVar5;
  pvVar4 = gen_imp_SelectObject(param_2,pHVar5);
  (*(HGDIOBJ *)(gen_frame + 0x50)) = pvVar4;
  gen_imp_GetClientRect((HWND)(*(undefined * PTR32 *)(gen_frame + 0x64)),&(*(tagRECT *)(gen_frame + 0xb4)));
  iVar10 = (*(tagRECT *)(gen_frame + 0xb4)).right / 2;
  (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x58))) + 4))) = (*(tagRECT *)(gen_frame + 0xb4)).bottom / 2;
  gen_imp_MoveToEx(param_2,iVar10 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 300)),
           (*(tagRECT *)(gen_frame + 0xb4)).bottom / 2 - (int)((double)*(float *)(this + 0x134) * *(double *)&REFG(double, 0x1132488)),
           (LPPOINT)0x0);
  gen_imp_LineTo(param_2,iVar10 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x13c)),
         (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x58))) + 4))) - (int)((double)*(float *)(this + 0x144) * *(double *)&REFG(double, 0x1132488)));
  (*(undefined * PTR32 *)(gen_frame + 0x60)) = ((undefined *)GEN_TOP(((*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x4e))) + 1) / 2)));
  gen_imp_MoveToEx(param_2,iVar10 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 300)),
           (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x58))) + 4))) - (int)((double)*(float *)(this + 0x134) * *(double *)&REFG(double, 0x1132488)),
           (LPPOINT)0x0);
  if (1 < (int)(*(undefined * PTR32 *)(gen_frame + 0x60))) {
    pPVar6 = (*(undefined * PTR32 *)(gen_frame + 0x60)) - 1;
    (*(undefined * PTR32 *)(gen_frame + 0x60)) = this + 0x14c;
    (*(undefined * PTR32 *)(gen_frame + 0x64)) = pPVar6;
    do {
      gen_imp_LineTo(param_2,iVar10 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x60))),
             (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x58))) + 4))) - (int)((double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x60)) + 8) * *(double *)&REFG(double, 0x1132488)));
      (*(undefined * PTR32 *)(gen_frame + 0x60)) = (*(undefined * PTR32 *)(gen_frame + 0x60)) + 0x20;
      pPVar6 = (*(undefined * PTR32 *)(gen_frame + 0x64)) - 1;
      (*(undefined * PTR32 *)(gen_frame + 0x64)) = pPVar6;
    } while (pPVar6 != ((undefined *)GEN_TOP(0x0)));
  }
  pPVar6 = this + (uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x4e))) * 0x10;
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = pPVar6;
  gen_imp_MoveToEx(param_2,iVar10 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(pPVar6 + 0x11c)),
           (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x58))) + 4))) - (int)((double)*(float *)(pPVar6 + 0x124) * *(double *)&REFG(double, 0x1132488)),
           (LPPOINT)0x0);
  pPVar6 = this + (uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x4e))) * 0x10;
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = pPVar6;
  gen_imp_LineTo(param_2,iVar10 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(pPVar6 + 0x10c)),
         (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x58))) + 4))) - (int)((double)*(float *)(pPVar6 + 0x114) * *(double *)&REFG(double, 0x1132488)));
  (*(undefined * PTR32 *)(gen_frame + 0x60)) = ((undefined *)GEN_TOP((uint)(*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x4e))) >> 1)));
  gen_imp_MoveToEx(param_2,iVar10 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x13c)),
           (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x58))) + 4))) - (int)((double)*(float *)(this + 0x144) * *(double *)&REFG(double, 0x1132488)),
           (LPPOINT)0x0);
  if (1 < (int)(*(undefined * PTR32 *)(gen_frame + 0x60))) {
    pPVar6 = (*(undefined * PTR32 *)(gen_frame + 0x60)) - 1;
    (*(undefined * PTR32 *)(gen_frame + 0x60)) = this + 0x15c;
    (*(undefined * PTR32 *)(gen_frame + 0x64)) = pPVar6;
    do {
      gen_imp_LineTo(param_2,iVar10 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x60))),
             (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x58))) + 4))) - (int)((double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x60)) + 8) * *(double *)&REFG(double, 0x1132488)));
      (*(undefined * PTR32 *)(gen_frame + 0x60)) = (*(undefined * PTR32 *)(gen_frame + 0x60)) + 0x20;
      pPVar6 = (*(undefined * PTR32 *)(gen_frame + 0x64)) - 1;
      (*(undefined * PTR32 *)(gen_frame + 0x64)) = pPVar6;
    } while (pPVar6 != ((undefined *)GEN_TOP(0x0)));
  }
  if (((byte)this[0xb0] & 1) != 0) {
    iVar10 = iVar10 - (int)((double)*(float *)(this + 0x50) * *(double *)&REFG(double, 0x1132488));
    pPVar6 = ((undefined *)GEN_TOP(((*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x58))) + 4))) - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x58)))));
    (*(undefined * PTR32 *)(gen_frame + 0x60)) = pPVar6;
    iVar2 = (int)((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x24))) * *(double *)&REFG(undefined, 0x10947f0));
    gen_imp_Ellipse(param_2,iVar10 - iVar2,(int)pPVar6 - iVar2,iVar2 + iVar10,(int)(pPVar6 + iVar2));
    iVar2 = (int)((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x20))) * *(double *)&REFG(undefined, 0x10947f0));
    gen_imp_Ellipse(param_2,iVar10 - iVar2,(int)(*(undefined * PTR32 *)(gen_frame + 0x60)) - iVar2,iVar2 + iVar10,(int)((*(undefined * PTR32 *)(gen_frame + 0x60)) + iVar2));
    F_00c472af(((char *)(gen_frame + 0xc4)),0x20,&REFG(undefined, 0x1134214),
               (int)(ulonglong)
                    gen_d2bits((double)*(float *)(this + 0x80) * *(double *)&REFG(undefined, 0x1088118)),
               (int)((ulonglong)
                     gen_d2bits((double)*(float *)(this + 0x80) * *(double *)&REFG(undefined, 0x1088118)) >> 0x20)
              );
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x98))))
                              (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG)));
    (*(undefined * PTR32 *)(gen_frame + 0x64)) = (undefined *)piVar7;
    F_004ec420(((undefined1 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x30))))((*(undefined * PTR32 *)(gen_frame + 0x64)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa4)));
    fVar11 = F_00d27b40(*(undefined4 *)(this + 0x128),GEN_ARGF(((undefined1 *)(gen_frame + 0x0))),((undefined1 *)(gen_frame + 0xa4)));
    (*(undefined * PTR32 *)(gen_frame + 0x64)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar11)));
    F_00c472af(((char *)(gen_frame + 0xc4)),0x20,((char *)REFP(0x113421c)),(int)(ulonglong)gen_d2bits((double)fVar11),
               (int)((ulonglong)gen_d2bits((double)fVar11) >> 0x20));
    pcVar8 = ((char *)(gen_frame + 0xc4));
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    (*(undefined * PTR32 *)(gen_frame + 0x64)) = ((undefined *)GEN_TOP((pcVar8 - (int)(((char *)(gen_frame + 0xc4)) + 1))));
    gen_imp_GetTextExtentPoint32A(param_2,((char *)(gen_frame + 0xc4)),(int)(pcVar8 - (int)(((char *)(gen_frame + 0xc4)) + 1)),&(*(undefined8 *)(gen_frame + 0x58)));
    gen_imp_TextOutA(param_2,iVar10 - (*(LONG *)((char *)&((*(undefined8 *)(gen_frame + 0x58))))) / 2,(int)(*(undefined * PTR32 *)(gen_frame + 0x60)) - (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x58))) + 4))) / 2,((char *)(gen_frame + 0xc4)),(int)(*(undefined * PTR32 *)(gen_frame + 0x64))
            );
    if (((byte)this[0xb0] & 1) != 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x64)) = ((undefined *)GEN_TOP(((*(tagRECT *)(gen_frame + 0xb4)).bottom / 2)));
      gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x50)));
      gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x54)));
      pHVar5 = gen_imp_CreatePen(0,1,0x900000);
      (*(undefined * PTR32 *)(gen_frame + 0x54)) = pHVar5;
      pvVar4 = gen_imp_SelectObject(param_2,pHVar5);
      (*(HGDIOBJ *)(gen_frame + 0x50)) = pvVar4;
      gen_imp_MoveToEx(param_2,(*(tagRECT *)(gen_frame + 0xb4)).right / 2 -
                       (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x60)),
               (int)(*(undefined * PTR32 *)(gen_frame + 0x64)) - (int)((double)*(float *)(this + 0x68) * *(double *)&REFG(double, 0x1132488)),
               (LPPOINT)0x0);
      gen_imp_LineTo(param_2,(*(tagRECT *)(gen_frame + 0xb4)).right / 2,(int)(*(undefined * PTR32 *)(gen_frame + 0x64)));
    }
  }
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x44)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x50)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x4c)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x40)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x54)));
  uVar9 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x48)));
  return uVar9;
}

/* ref: FUN_00d291a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d291a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd291a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_FRAME_DECL(0x290, 0);
  int * this;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * pPVar4;
  
  (*(uint *)(gen_frame + 0x27c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x280);
  F_00d22580(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[33])REFP(0x11343dc));
  *(uint *)(param_1 + 0xb0) =
       *(uint *)(param_1 + 0xb0) ^ ((uint)param_5 << 4 ^ *(uint *)(param_1 + 0xb0)) & 0x10;
  if (param_5 == 0) {
    *(undefined4 * PTR32 *)(param_1 + 0x128) = param_2;
  }
  else {
    *(undefined * PTR32 *)(param_1 + 0x128) = param_1 + 0x330;
    puVar3 = param_2;
    pPVar4 = param_1 + 0x330;
    for (iVar2 = 0x98; iVar2 != 0; iVar2 = iVar2 - 1) {
      *(undefined4 *)pPVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pPVar4 = pPVar4 + 4;
    }
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x128);
  if ((*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x4d))) & 1) == 0) {
    F_00d228c0(param_1 GEN_EDX_ARG);
  }
  *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x44))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x44))) *
              (float10)*(double *)&REFG(undefined, 0x109cac8))));
  *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0xc))) = *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0xc))) | 0x80;
  *(undefined4 *)(param_1 + 0xa0) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x48)));
  F_00d20fe0(param_1 GEN_EDX_ARG,~(*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 4))) >> 5) & 1);
  this = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xe4))))(this GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x68))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x270);
  }
  F_00d28ab0(param_1 GEN_EDX_ARG,0x401);
  return (uint)param_1;
}

/* ref: FUN_00d292e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d292e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd292e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x290, 0);
  byte * pbVar1;
  int iVar2;
  int * this_00;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x27c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x280);
  F_00d22720(this GEN_EDX_FWD,param_1,param_2);
  *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) | 0x10;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11343dc));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x128))) = ((undefined *)GEN_TOP(((int)this + 0x330)));
  F_00d29aa0(((undefined *)GEN_TOP(((int)this + 0x330))) GEN_EDX_ARG);
  iVar2 = *((int *)GEN_TOP(((int)this + 0x128)));
  *((int *)GEN_TOP(((int)this + 0x18))) = iVar2;
  *((float *)GEN_TOP((iVar2 + 0x44))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 0x44))) * (float10)*(double *)&REFG(undefined, 0x109cac8))));
  pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0xc)));
  *pbVar1 = *pbVar1 | 0x80;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x48)));
  this_00 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_ARG);
  if ((char)uVar3 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x270);
  }
  F_00d28ab0(this GEN_EDX_ARG,0x401);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf14 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d293d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd293d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ushort uVar1;
  int * this;
  int iVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = param_1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x70))))(param_1 GEN_EDX_FWD,0x406);
  if (((byte)param_1[0xb0] & 4) != 0) {
    return 0;
  }
  bVar3 = F_00d217a0(param_1 GEN_EDX_ARG,param_2);
  if (bVar3 != 0) {
    if (((*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 4))) & 0x80) == 0) &&
       (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc))) + 0x10))))
                          (*((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc))) GEN_EDX_ARG), (char)uVar4 == '\0')) {
      fVar6 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x50)));
      fVar7 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*(undefined * PTR32 *)&REFG(undefined, 0x1097254))));
      bVar5 = GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6);
      if (bVar5 == (bVar5 || fVar7 == fVar6)) {
        fVar9 = ((float)GEN_TOF((((float10)(int)param_2 *
                        (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x50)))) /
                        (float10)*(double *)&REFG(undefined, 0x10912a8) + (float10)*(float *)(param_1 + 0xa0))));
        fVar6 = (float10)fVar9;
        *(float *)(param_1 + 0xa0) = fVar9;
        fVar8 = (float10)REFG(double, 0x10920b8);
        if (!(fVar6 <= fVar8) == (GEN_ISNAN(fVar8) || GEN_ISNAN(fVar6))) {
          if (fVar6 <= fVar7) {
            *(float *)(param_1 + 0xa0) = (float)(fVar6 + fVar8);
          }
        }
        else {
          *(float *)(param_1 + 0xa0) = (float)(fVar6 - fVar8);
        }
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = *(undefined * PTR32 *)&REFG(undefined, 0x1097254);
    *(float *)(param_1 + 0x8c) = (float)(float10)1;
    F_00d21970(param_1 GEN_EDX_ARG);
    bVar3 = F_00d27f60(param_1 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),param_2);
    if (bVar3 == 0) {
      F_00d219b0(param_1 GEN_EDX_ARG);
      F_00d22c70(param_1 GEN_EDX_ARG,0);
      return 1;
    }
    if ((*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x4d))) & 1) == 0) {
      this = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
      iVar2 = *(int *)(param_1 + 0x128);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x18))))(this GEN_EDX_ARG);
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 0x10 + (uVar4 & 0xff) * 4))) *
                       (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0)))))))))));
      uVar1 = *((ushort *)GEN_TOP((iVar2 + 0xe)));
      if (uVar1 != 0) {
        fVar9 = F_00d005d0(this GEN_EDX_ARG,(uint)uVar1);
        (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar9 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0)))))))));
      }
      iVar2 = *(int *)(param_1 + 0x128);
      *(undefined * PTR32 *)(param_1 + 0x80) = (*(undefined * PTR32 *)(gen_frame + 0x0));
      if ((*((byte *)GEN_TOP((iVar2 + 0xc))) & 8) != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x0)) = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x34)));
        *(undefined4 *)(param_1 + 0x80) = *((undefined4 *)GEN_TOP((iVar2 + 0x34)));
      }
      *(undefined * PTR32 *)(param_1 + 0x80) = (*(undefined * PTR32 *)(gen_frame + 0x0));
      if ((((byte)param_1[0xb0] & 0x40) != 0) || (bVar3 = F_00d228c0(param_1 GEN_EDX_ARG), bVar3 != 0)) {
        bVar3 = F_00d00ed0(this GEN_EDX_ARG,param_1,(uint)(byte)param_1[0x2d],*(undefined4 *)(param_1 + 0x30),
                             ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0))))));
        return bVar3;
      }
    }
    else {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc))) + 0x98))))
                        (*((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc))) GEN_EDX_ARG);
      F_00d1b9f0(uVar4 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x34)))),((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0))))));
    }
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00d295c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd295c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  undefined1 PVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  int * piVar8;
  float fVar9;
  float10 fVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  (*(char *)(gen_frame + 0x1f)) = '\0';
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar8;
  bVar5 = F_00d21830((undefined *)this GEN_EDX_FWD);
  if (bVar5 == 0) {
    piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x90))))(piVar8 GEN_EDX_ARG)));
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xfc))))(piVar6 GEN_EDX_ARG,*(undefined4 *)(this + 0x24));
    if ((char)uVar7 == '\0') goto LAB_00d299bf;
    F_00d2dd80(&(*(undefined4 *)(gen_frame + 0x34)),*(undefined4 *)(this + 0x24));
    if (((byte)this[0xb0] & 0x80) == 0) {
      bVar5 = F_00cbe970(&(*(undefined4 *)(gen_frame + 0x34)) GEN_EDX_ARG);
    }
    else {
      bVar5 = F_00cbe940(&(*(undefined4 *)(gen_frame + 0x34)) GEN_EDX_ARG);
    }
    if (bVar5 != 0) {
      uVar2 = *(undefined4 *)(this + 0x28);
      iVar3 = *piVar6;
      (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)&REFG(undefined, 0x1097254);
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)&REFG(undefined, 0x1097254);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x1097254);
      (*(float *)(gen_frame + 0xc)) = (float)(float10)1;
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x3c))))
                        (piVar6,((undefined1 *)(gen_frame + 0x20)),*(undefined4 *)(this + 0x24),uVar2,&(*(undefined4 *)(gen_frame + 0x0)),0,0,1);
      F_00cbbdc0(this + 8 GEN_EDX_ARG,uVar7);
      F_00cbbdb0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
      bVar5 = F_00cbc040(this + 8 GEN_EDX_ARG);
      if (bVar5 != 0) {
        iVar3 = *(int *)(this + 0x128);
        (*(char *)(gen_frame + 0x1f)) = '\x01';
        if (((*((byte *)GEN_TOP((iVar3 + 4))) & 0x80) != 0) && ((*((byte *)GEN_TOP((iVar3 + 0xc))) & 2) != 0)) {
          fVar10 = F_00d23370(this GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((iVar3 + 0x48)))));
          *(float *)(this + 0xa0) = (float)fVar10;
        }
        F_00d22bf0(this GEN_EDX_ARG,0x403);
        F_00cbe3b0(&(*(undefined4 *)(gen_frame + 0x34)) GEN_EDX_ARG);
        goto LAB_00d296ea;
      }
    }
    F_00cbe3b0(&(*(undefined4 *)(gen_frame + 0x34)) GEN_EDX_ARG);
  }
  else {
LAB_00d296ea: ;
    bVar5 = F_00cbc040(this + 8 GEN_EDX_ARG);
    if (bVar5 == 0) {
LAB_00d299bf: ;
      *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) | 4;
      return 0;
    }
    uVar7 = F_00d00230(piVar8 GEN_EDX_ARG);
    if (uVar7 == 1) {
      fVar10 = F_00d22df0(((undefined1 *)(gen_frame + 0x20)),this + 0x60,*(float *)(this + 0x80),*(float *)(this + 0x94));
      (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar10)));
      F_00cbc920(this + 8 GEN_EDX_ARG,(float)fVar10);
      F_00cbc4e0(this + 8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
    }
    else {
      (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)&REFG(undefined, 0x1097254);
      (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)&REFG(undefined, 0x1097254);
      (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)&REFG(undefined, 0x1097254);
      (*(undefined4 *)(gen_frame + 0x3c)) = 0;
      F_00d28770(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x18)),&(*(int * PTR32 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x30)));
      F_00cbc9e0(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0x18)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))),&(*(undefined4 *)(gen_frame + 0x30)));
      uVar7 = F_00d2e5a0();
      if ((uVar7 == 3) || (uVar7 == 5)) {
        fVar10 = F_00d2edb0(*(float *)(this + 0x80),0,2);
      }
      else {
        fVar10 = (float10)*(float *)(this + 0x80);
      }
      PVar1 = this[0x2c];
      (*(float *)(gen_frame + 0x18)) = (float)fVar10;
      if (((byte)PVar1 & 2) != 0) {
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x98))))(piVar8 GEN_EDX_ARG)));
        fVar9 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xd0))))(piVar8 GEN_EDX_ARG));
        iVar3 = *piVar8;
        (*(float *)(gen_frame + 0x14)) = fVar9;
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((iVar3 + 0x50))))(piVar8);
        fVar10 = F_00d2bc80((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))) GEN_EDX_ARG,(float)extraout_ST0);
        (*(float *)(gen_frame + 0x18)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x18)));
        piVar8 = (*(int * PTR32 *)(gen_frame + 0x10));
      }
      F_00cbc920(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0x18)));
    }
    if (((byte)this[0xb0] & 2) == 0) {
      fVar10 = F_00d22f40(this GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40)))),
                            *((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) >> 2 & 1);
      fVar9 = ((float)GEN_TOF((fVar10 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x38))))));
      (*(float *)(gen_frame + 0x14)) = fVar9;
      F_00cbc980(this + 8 GEN_EDX_ARG,fVar9);
    }
    PVar1 = this[0x2c];
    (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xc4) * (float10)*(float *)(this + 0x8c))));
    if (((byte)PVar1 & 2) != 0) {
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x98))))(piVar8 GEN_EDX_ARG)));
      fVar9 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xd0))))(piVar8 GEN_EDX_ARG));
      (*(float *)(gen_frame + 0x14)) = fVar9;
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x50))))(piVar8);
      fVar10 = F_00d2bc60((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))) GEN_EDX_ARG,(float)extraout_ST0_00);
      (*(float *)(gen_frame + 0x18)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x18)));
    }
    F_00cbc710(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0x18)));
    if ((*(char *)(gen_frame + 0x1f)) != '\0') {
      dVar4 = GEN_X87(*(double *)&REFG(undefined, 0x1097260) * 0.0);
      fVar9 = *(float *)(this + 0xbc);
      (*(float *)(gen_frame + 0x14)) = gen_bits2f((int)dVar4);
      F_00cbddc0(this + 8 GEN_EDX_ARG,fVar9,(uint)&(*(float *)(gen_frame + 0x14)));
      fVar9 = *(float *)(this + 0xc0);
      (*(float *)(gen_frame + 0x14)) = gen_bits2f((int)dVar4);
      F_00cbdeb0(this + 8 GEN_EDX_ARG,fVar9,(uint)&(*(float *)(gen_frame + 0x14)));
      F_00cbc980(this + 8 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x38)))));
      F_00cbcd10(this + 8 GEN_EDX_ARG,*(float *)(this + 200),*(undefined4 *)(this + 0xcc));
      F_00cbce00(this + 8 GEN_EDX_ARG,(uint)(byte)this[0xe0]);
      if ((*(uint *)(this + 0xb0) & 0x400) != 0) {
        F_00cbcbc0(this + 8 GEN_EDX_ARG);
      }
      if ((*(uint *)(this + 0xb0) & 0x100) == 0) {
        F_00cbd990(this + 8 GEN_EDX_ARG,*(undefined4 *)(this + 0xdc),*(undefined4 *)(this + 0xb8));
      }
      else {
        F_00cbdfe0(this + 8 GEN_EDX_ARG,*(undefined4 *)(this + 0xd4),*(float *)(this + 0xbc),
                     *(float *)(this + 0xd0),gen_bits2f((unsigned int)(*(undefined4 *)(this + 0xdc))),
                     *(undefined4 *)(this + 0xb8));
      }
      *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) & 0xfffffeff;
      *(undefined4 *)(this + 0xdc) = 0;
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_00d299e0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d299e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd299e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  *param_1 = *(undefined2 *)this;
  param_1[1] = *((undefined2 *)GEN_TOP(((int)this + 2)));
  *(undefined4 *)(param_1 + 4) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined4 *)(param_1 + 6) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  *(undefined4 *)(param_1 + 0xc) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *(undefined4 *)(param_1 + 0xe) = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  *(undefined4 *)(param_1 + 0x10) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  *(undefined4 *)(param_1 + 0x16) = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  *(undefined4 *)(param_1 + 0x14) = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  param_1[0x18] = *((undefined2 *)GEN_TOP(((int)this + 0x30)));
  param_1[0x19] = *((undefined2 *)GEN_TOP(((int)this + 0x32)));
  *(undefined1 *)(param_1 + 0x1a) = *((undefined1 *)GEN_TOP(((int)this + 0x34)));
  iVar2 = 0x20;
  puVar1 = (undefined4 *)(param_1 + 0x1c);
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x40)));
  do {
    *puVar1 = *((undefined4 *)GEN_TOP((((int)this - (int)param_1) + (int)puVar1)));
    iVar2 = iVar2 - 1;
    puVar1[1] = puVar3[-1];
    puVar1[2] = *puVar3;
    puVar1 = puVar1 + 3;
    puVar3 = puVar3 + 3;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0xdc) = *((undefined4 *)GEN_TOP(((int)this + 0x1b8)));
  *(undefined4 *)(param_1 + 0xde) = *((undefined4 *)GEN_TOP(((int)this + 0x1bc)));
  *(undefined1 *)(param_1 + 0xe0) = *((undefined1 *)GEN_TOP(((int)this + 0x1c0)));
  return 0;
}

/* ref: FUN_00d29aa0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d29aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd29aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  fVar1 = (float10)1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 4;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((float *)GEN_TOP(((int)this + 0x10))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x14))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x18))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x1c))) = (float)fVar1;
  *((undefined2 *)GEN_TOP(((int)this + 0xe))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xd))) = 0;
  *(undefined4 *)this = 0xb0260;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1097254);
  iVar6 = 0x20;
  puVar5 = ((undefined4 *)GEN_TOP(((int)this + 0x68)));
  do {
    puVar5[-2] = uVar3;
    iVar6 = iVar6 - 1;
    puVar5[-1] = uVar3;
    *puVar5 = uVar3;
    puVar5[1] = uVar3;
    puVar5[1] = (undefined4)gen_fl2bits((float)fVar1);
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094880)));
    puVar5 = puVar5 + 4;
  } while (iVar6 != 0);
  *((byte *)GEN_TOP(((int)this + 0x4d))) = *((byte *)GEN_TOP(((int)this + 0x4d))) & 0xfe;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = uVar2;
  *((undefined1 *)GEN_TOP(((int)this + 0x4c))) = 0;
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0d00)));
  *((undefined2 *)GEN_TOP(((int)this + 0x4e))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = uVar3;
  *((float *)GEN_TOP(((int)this + 0x30))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x34))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x38))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x3c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x44))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = uVar3;
  return 0;
}

/* ref: FUN_00d29b40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d29b40(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd29b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  int local_8;
  
  F_00d0c080(param_1 GEN_EDX_FWD,param_2);
  puVar3 = ((uint *)GEN_TOP((param_1 + 0x68)));
  local_8 = 0x20;
  puVar2 = ((uint *)GEN_TOP((param_2 + 0x60)));
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar2)));
    *puVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[-1];
    puVar2[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar3;
    puVar2[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[1];
    puVar2[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar3 = puVar3 + 4;
    local_8 = local_8 - 1;
    puVar2 = puVar2 + 4;
  } while (local_8 != 0);
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x20)));
  *((uint *)GEN_TOP((param_2 + 0x20))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x24)));
  *((uint *)GEN_TOP((param_2 + 0x24))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x28)));
  *((uint *)GEN_TOP((param_2 + 0x28))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x2c)));
  *((uint *)GEN_TOP((param_2 + 0x2c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x30)));
  *((uint *)GEN_TOP((param_2 + 0x30))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x34)));
  *((uint *)GEN_TOP((param_2 + 0x34))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x38)));
  *((uint *)GEN_TOP((param_2 + 0x38))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x3c)));
  *((uint *)GEN_TOP((param_2 + 0x3c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x40)));
  *((uint *)GEN_TOP((param_2 + 0x40))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x44)));
  *((uint *)GEN_TOP((param_2 + 0x44))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x48)));
  *((uint *)GEN_TOP((param_2 + 0x48))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((undefined1 *)GEN_TOP((param_2 + 0x4c))) = *((undefined1 *)GEN_TOP((param_1 + 0x4c)));
  *((byte *)GEN_TOP((param_2 + 0x4d))) =
       *((byte *)GEN_TOP((param_2 + 0x4d))) ^ (*((byte *)GEN_TOP((param_1 + 0x4d))) ^ *((byte *)GEN_TOP((param_2 + 0x4d)))) & 1;
  *((undefined1 *)GEN_TOP((param_2 + 0x4e))) = *((undefined1 *)GEN_TOP((param_1 + 0x4e)));
  *((undefined1 *)GEN_TOP((param_2 + 0x4f))) = 0;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x50)));
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((uint *)GEN_TOP((param_2 + 0x50))) = uVar1;
  *((undefined4 *)GEN_TOP((param_2 + 0x54))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 0x58))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 0x5c))) = 0;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d29ce0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd29ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[33])REFP(0x11343dc));
  F_00d23680(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d29d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd29d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auVar9 [16];
  
  iVar6 = *(int *)(this + 0x128);
  *(undefined4 *)(this + 300) = *((undefined4 *)GEN_TOP((iVar6 + 0x20)));
  *(undefined4 *)(this + 0x130) = *((undefined4 *)GEN_TOP((iVar6 + 0x24)));
  *(undefined4 *)(this + 0x134) = *((undefined4 *)GEN_TOP((iVar6 + 0x28)));
  *(undefined4 *)(this + 0x138) = *((undefined4 *)GEN_TOP((iVar6 + 0x2c)));
  iVar6 = *(int *)(this + 0x128);
  *(undefined4 *)(this + 0x13c) = *((undefined4 *)GEN_TOP((iVar6 + 0x20)));
  *(undefined4 *)(this + 0x140) = *((undefined4 *)GEN_TOP((iVar6 + 0x24)));
  *(undefined4 *)(this + 0x144) = *((undefined4 *)GEN_TOP((iVar6 + 0x28)));
  *(undefined4 *)(this + 0x148) = *((undefined4 *)GEN_TOP((iVar6 + 0x2c)));
  iVar6 = 0x30;
  do {
    iVar5 = *(int *)(this + 0x128);
    uVar4 = *((undefined4 *)GEN_TOP((iVar5 + 8 + iVar6)));
    (*(undefined4 *)((char *)&auVar7 + 4)) = uVar4;
    (*(undefined4 *)((char *)&auVar7 + 0)) = *((undefined4 *)GEN_TOP((iVar5 + iVar6)));
    (*(undefined4 *)((char *)&auVar7 + 8)) = uVar4;
    (*(undefined4 *)((char *)&auVar7 + 12)) = *((undefined4 *)GEN_TOP((iVar5 + 0xc + iVar6)));
    (*(undefined8 *)((char *)&auVar8 + 8)) = (*(undefined8 *)((char *)&auVar7 + 8));
    (*(undefined4 *)((char *)&auVar8 + 4)) = *((undefined4 *)GEN_TOP((iVar5 + 4 + iVar6)));
    (*(undefined4 *)((char *)&auVar8 + 0)) = *((undefined4 *)GEN_TOP((iVar5 + iVar6)));
    gen_minps(&(auVar8), &(auVar8), (this + 300));
    local_40 = (*(undefined4 *)((char *)&auVar8 + 0));
    uStack_3c = (*(undefined4 *)((char *)&auVar8 + 4));
    *(undefined4 *)(this + 300) = local_40;
    uStack_38 = (*(undefined4 *)((char *)&auVar8 + 8));
    *(undefined4 *)(this + 0x130) = uStack_3c;
    uStack_34 = (*(undefined4 *)((char *)&auVar8 + 12));
    *(undefined4 *)(this + 0x134) = uStack_38;
    *(undefined4 *)(this + 0x138) = uStack_34;
    iVar5 = *(int *)(this + 0x128);
    uVar4 = *((undefined4 *)GEN_TOP((iVar5 + 8 + iVar6)));
    puVar2 = ((undefined4 *)GEN_TOP((iVar5 + 0xc + iVar6)));
    puVar1 = ((undefined4 *)GEN_TOP((iVar5 + iVar6)));
    puVar3 = ((undefined4 *)GEN_TOP((iVar5 + 4 + iVar6)));
    iVar6 = iVar6 + 0x10;
    (*(undefined4 *)((char *)&auVar10 + 4)) = uVar4;
    (*(undefined4 *)((char *)&auVar10 + 0)) = *puVar1;
    (*(undefined4 *)((char *)&auVar10 + 8)) = uVar4;
    (*(undefined4 *)((char *)&auVar10 + 12)) = *puVar2;
    (*(undefined8 *)((char *)&auVar9 + 8)) = (*(undefined8 *)((char *)&auVar10 + 8));
    (*(undefined4 *)((char *)&auVar9 + 4)) = *puVar3;
    (*(undefined4 *)((char *)&auVar9 + 0)) = *puVar1;
    gen_maxps(&(auVar8), &(auVar9), (this + 0x13c));
    local_40 = (*(undefined4 *)((char *)&auVar8 + 0));
    uStack_3c = (*(undefined4 *)((char *)&auVar8 + 4));
    *(undefined4 *)(this + 0x13c) = local_40;
    uStack_38 = (*(undefined4 *)((char *)&auVar8 + 8));
    *(undefined4 *)(this + 0x140) = uStack_3c;
    uStack_34 = (*(undefined4 *)((char *)&auVar8 + 12));
    *(undefined4 *)(this + 0x144) = uStack_38;
    *(undefined4 *)(this + 0x148) = uStack_34;
  } while (iVar6 < 0x120);
  *(float *)(this + 300) =
       ((float)GEN_TOF(((float10)*(float *)(this + 300) - (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x134)))
              )));
  *(float *)(this + 0x130) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x130) -
              (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x134))))));
  *(float *)(this + 0x134) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x134) -
              (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x134))))));
  *(float *)(this + 0x13c) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x134))) +
              (float10)*(float *)(this + 0x13c))));
  *(float *)(this + 0x140) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x134))) +
              (float10)*(float *)(this + 0x140))));
  *(float *)(this + 0x144) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(uint *)(this + 0x128) + 0x134))) +
              (float10)*(float *)(this + 0x144))));
  return *(uint *)(this + 0x128);
}

/* ref: FUN_00d29f50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d29f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd29f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11345ec));
  F_00cccb40((int)this + 0x14c GEN_EDX_FWD);
  uVar1 = F_00d23680(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d29f70(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xd29f70u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  F_00d211a0(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  F_00cccbd0(param_1 + 0x14c GEN_EDX_ARG,param_4);
  F_00cccd90(param_1 + 0x14c GEN_EDX_ARG,param_3,param_2);
  return REFG(undefined4, 0x11299e4);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d29fc0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd29fc0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cccd90(param_1 + 0x14c GEN_EDX_FWD,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d29fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd29fe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  
  F_00d213b0(this GEN_EDX_FWD,param_1,(undefined1)param_2);
  iVar10 = 0;
  do {
    iVar9 = *(int *)(this + 0x128);
    fVar4 = *((float *)GEN_TOP((iVar9 + 0x28 + iVar10)));
    fVar5 = *((float *)GEN_TOP((iVar9 + 0x2c + iVar10)));
    pfVar1 = ((float *)GEN_TOP((iVar9 + 0x20 + iVar10)));
    pfVar2 = ((float *)GEN_TOP((iVar9 + 0x24 + iVar10)));
    fVar6 = param_1[3];
    pfVar3 = ((float *)GEN_TOP((iVar9 + 0x20 + iVar10)));
    iVar10 = iVar10 + 0x10;
    fVar7 = param_1[1];
    fVar8 = param_1[2];
    *pfVar3 = *pfVar1 + *param_1;
    pfVar3[1] = *pfVar2 + fVar7;
    pfVar3[2] = fVar4 + fVar8;
    pfVar3[3] = fVar5 + fVar6;
    *((float *)GEN_TOP((*(int *)(this + 0x128) + 0x1c + iVar10))) = (float)(float10)1;
  } while (iVar10 < 0x100);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf14 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2a0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2a0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_FWD,0x406);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
  if ((char)uVar1 == '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x14c) + 8))))(this + 0x14c GEN_EDX_ARG,param_1);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf15 */
GEN_LIB GEN_NOFRAME byte F_00d2a100(void)
{
  GEN_ENTER(0xd2a100u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf21 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2a110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd2a110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  if (((((float10)*param_1 <= (float10)*(float *)(this + 0x13c)) &&
       ((float10)*(float *)(this + 300) <= (float10)*param_2)) &&
      ((float10)param_1[1] <= (float10)*(float *)(this + 0x140))) &&
     ((((float10)*(float *)(this + 0x130) <= (float10)param_2[1] &&
       ((float10)param_1[2] <= (float10)*(float *)(this + 0x144))) &&
      ((float10)*(float *)(this + 0x134) <= (float10)param_2[2])))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00d2a1a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d2a1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2a1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x134, 12);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float * pfVar9;
  float * pfVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  
  (*(uint *)(gen_frame + 0x120)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x124);
  iVar8 = *((int *)GEN_TOP(((int)this + 0x128)));
  (*(int *)(gen_frame + 0x0)) = 0;
  if (*((char *)GEN_TOP((iVar8 + 0x131))) != '\0') {
    fVar14 = *param_1;
    fVar1 = param_1[1];
    fVar2 = param_1[2];
    fVar3 = param_1[3];
    pfVar9 = ((float *)GEN_TOP((iVar8 + 0x20)));
    pfVar10 = ((float *)(gen_frame + 0x1c));
    do {
      fVar4 = *pfVar9;
      fVar5 = pfVar9[1];
      fVar6 = pfVar9[2];
      fVar7 = pfVar9[3];
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      pfVar9 = pfVar9 + 4;
      (*(float *)(gen_frame + 0x4)) = fVar4 - fVar14;
      (*(float *)(gen_frame + 0x8)) = fVar5 - fVar1;
      (*(float *)(gen_frame + 0xc)) = fVar6 - fVar2;
      (*(float *)(gen_frame + 0x10)) = fVar7 - fVar3;
      *pfVar10 = fVar4 - fVar14;
      pfVar10[1] = fVar5 - fVar1;
      pfVar10[2] = fVar6 - fVar2;
      pfVar10[3] = fVar7 - fVar3;
      pfVar10 = pfVar10 + 4;
    } while ((*(int *)(gen_frame + 0x0)) < (int)(uint)*((byte *)GEN_TOP((iVar8 + 0x131))));
  }
  iVar11 = 0;
  if (*((byte *)GEN_TOP((iVar8 + 0x131))) != 1 && -1 < (int)(*((byte *)GEN_TOP((iVar8 + 0x131))) - 1)) {
    pfVar9 = ((float *)(gen_frame + 0x1c));
    do {
      fVar14 = F_010536a0(pfVar9,pfVar9 + 4,&(*(float *)(gen_frame + 0x4)));
      fVar12 = (float10)fVar14;
      fVar13 = (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x134)));
      if (fVar12 <= fVar13 && ((!GEN_ISNAN(fVar13) && !GEN_ISNAN(fVar12)) && fVar13 != fVar12)) {
        return 1;
      }
      iVar11 = iVar11 + 1;
      pfVar9 = pfVar9 + 4;
    } while (iVar11 < (int)(*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x131))) - 1));
  }
  return 0;
}

/* ref: FUN_00d2a330 */
GEN_LIB GEN_NOFRAME float GEN_THISCALL F_00d2a330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd2a330u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x138, 8);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float * pfVar9;
  float * pfVar10;
  int iVar11;
  bool bVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  
  (*(uint *)(gen_frame + 0x124)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x128);
  iVar8 = *((int *)GEN_TOP(((int)this + 0x128)));
  (*(float *)(gen_frame + 0xc)) = 0.0;
  if (*((char *)GEN_TOP((iVar8 + 0x131))) != '\0') {
    fVar15 = *param_1;
    fVar1 = param_1[1];
    fVar2 = param_1[2];
    fVar3 = param_1[3];
    pfVar9 = ((float *)GEN_TOP((iVar8 + 0x20)));
    pfVar10 = ((float *)(gen_frame + 0x20));
    do {
      fVar4 = *pfVar9;
      fVar5 = pfVar9[1];
      fVar6 = pfVar9[2];
      fVar7 = pfVar9[3];
      (*(float *)(gen_frame + 0xc)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 1);
      pfVar9 = pfVar9 + 4;
      (*(float *)(gen_frame + 0x10)) = fVar4 - fVar15;
      *pfVar10 = fVar4 - fVar15;
      (*(float *)(gen_frame + 0x14)) = fVar5 - fVar1;
      pfVar10[1] = fVar5 - fVar1;
      (*(float *)(gen_frame + 0x18)) = fVar6 - fVar2;
      pfVar10[2] = fVar6 - fVar2;
      (*(float *)(gen_frame + 0x1c)) = fVar7 - fVar3;
      pfVar10[3] = fVar7 - fVar3;
      pfVar10 = pfVar10 + 4;
    } while ((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) < (int)(uint)*((byte *)GEN_TOP((iVar8 + 0x131))));
  }
  (*(float *)(gen_frame + 0xc)) = (float)(float10)0;
  iVar11 = 0;
  (*(float *)(gen_frame + 0x0)) = (float)(float10)0;
  if (*((byte *)GEN_TOP((iVar8 + 0x131))) != 1 && -1 < (int)(*((byte *)GEN_TOP((iVar8 + 0x131))) - 1)) {
    do {
      fVar15 = F_010536a0(((float *)(gen_frame + 0x20)) + iVar11 * 4,((undefined1 *)(gen_frame + 0x30)) + iVar11 * 0x10,&(*(float *)(gen_frame + 0x10)));
      fVar13 = (float10)fVar15;
      iVar8 = *((int *)GEN_TOP(((int)this + 0x128)));
      fVar14 = (float10)*((float *)GEN_TOP((iVar8 + 0x134)));
      if (!(fVar13 <= fVar14) || ((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar13)) || fVar14 == fVar13)) {
        bVar12 = GEN_ISNAN((float10)*((float *)GEN_TOP((iVar8 + 0x134)))) || GEN_ISNAN(fVar13);
        if (bVar12 == (bVar12 || (float10)*((float *)GEN_TOP((iVar8 + 0x134))) == fVar13)) {
          fVar13 = GEN_X87(fVar13 - (float10)*((float *)GEN_TOP((iVar8 + 0x134))));
        }
        else {
          fVar13 = (float10)0;
        }
      }
      else {
        fVar13 = GEN_X87((float10)*((float *)GEN_TOP((iVar8 + 0x134))) - fVar13);
      }
      fVar1 = (float)fVar13;
      fVar13 = (float10)fVar1;
      if (iVar11 == 0) {
        *param_3 = (*(float *)(gen_frame + 0x10));
        param_3[1] = (*(float *)(gen_frame + 0x14));
        param_3[2] = (*(float *)(gen_frame + 0x18));
        param_3[3] = (*(float *)(gen_frame + 0x1c));
        (*(float *)(gen_frame + 0x0)) = fVar15;
        (*(float *)(gen_frame + 0xc)) = fVar1;
      }
      else {
        fVar14 = (float10)(*(float *)(gen_frame + 0xc));
        if (fVar13 <= fVar14 && ((!GEN_ISNAN(fVar14) && !GEN_ISNAN(fVar13)) && fVar14 != fVar13)) {
          *param_3 = (*(float *)(gen_frame + 0x10));
          param_3[1] = (*(float *)(gen_frame + 0x14));
          param_3[2] = (*(float *)(gen_frame + 0x18));
          param_3[3] = (*(float *)(gen_frame + 0x1c));
          (*(float *)(gen_frame + 0x0)) = fVar15;
          (*(float *)(gen_frame + 0xc)) = fVar1;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)(*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x131))) - 1));
    fVar13 = (float10)(*(float *)(gen_frame + 0x0));
    bVar12 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar13);
    if (bVar12 == (bVar12 || (float10)0 == fVar13)) {
      fVar15 = *param_3;
      fVar1 = param_3[1];
      fVar2 = param_3[2];
      fVar3 = param_3[3];
      fVar4 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x134))) / fVar13)));
      (*(float *)(gen_frame + 0x10)) = fVar15 * fVar4;
      *param_3 = fVar15 * fVar4;
      (*(float *)(gen_frame + 0x14)) = fVar1 * fVar4;
      param_3[1] = fVar1 * fVar4;
      (*(float *)(gen_frame + 0x18)) = fVar2 * fVar4;
      param_3[2] = fVar2 * fVar4;
      (*(float *)(gen_frame + 0x1c)) = fVar3 * fVar4;
      param_3[3] = fVar3 * fVar4;
    }
  }
  fVar15 = param_3[2];
  fVar1 = param_3[3];
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = param_1[3];
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar7 = *param_1;
  (*(float *)(gen_frame + 0x10)) = fVar2 + fVar7;
  *param_3 = fVar2 + fVar7;
  (*(float *)(gen_frame + 0x14)) = fVar3 + fVar5;
  param_3[1] = fVar3 + fVar5;
  (*(float *)(gen_frame + 0x18)) = fVar15 + fVar6;
  (*(float *)(gen_frame + 0x1c)) = fVar1 + fVar4;
  param_3[2] = fVar15 + fVar6;
  param_3[3] = fVar1 + fVar4;
  return (*(float *)(gen_frame + 0xc));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf22 */
GEN_LIB GEN_NOFRAME float GEN_THISCALL F_00d2a6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd2a6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x30, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  
  *param_4 = 0;
  fVar7 = param_2[3];
  fVar1 = param_1[2];
  fVar2 = param_1[3];
  fVar3 = param_1[1];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  (*(float *)(gen_frame + 0x10)) = *param_1 + *param_2;
  (*(float *)(gen_frame + 0x14)) = fVar3 + fVar4;
  (*(float *)(gen_frame + 0x18)) = fVar1 + fVar5;
  (*(float *)(gen_frame + 0x1c)) = fVar2 + fVar7;
  (*(float *)(gen_frame + 0x0)) = *param_1 + *param_2;
  (*(float *)(gen_frame + 0x4)) = fVar3 + fVar4;
  (*(float *)(gen_frame + 0x8)) = fVar1 + fVar5;
  (*(float *)(gen_frame + 0xc)) = fVar2 + fVar7;
  uVar6 = F_00d2a1a0(this GEN_EDX_FWD,param_1);
  *(uint *)(this + 0x170) = uVar6;
  uVar6 = F_00d2a1a0(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
  *(uint *)(this + 0x174) = uVar6;
  if (*(int *)(this + 0x170) != 0) {
    if (uVar6 != 0) {
      return REFG(float, 0x1090708);
    }
    if (*(int *)(this + 0x170) != 0) goto LAB_00d2a7b7;
  }
  if (uVar6 == 0) {
    return REFG(float, 0x1090708);
  }
LAB_00d2a7b7: ;
  fVar7 = F_00d2a330(this GEN_EDX_ARG,param_1,param_2,param_3);
  return fVar7;
}

/* ref: FUN_00d2a7e0 */
GEN_LIB GEN_NOFRAME float GEN_THISCALL F_00d2a7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2a7e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x74, 12);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  bool bVar9;
  float * pfVar10;
  float * pfVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  
  (*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64);
  iVar8 = *((int *)GEN_TOP(((int)this + 0x128)));
  (*(float *)(gen_frame + 0x0)) = 0.0;
  if (*((char *)GEN_TOP((iVar8 + 0x131))) != '\0') {
    fVar15 = *param_1;
    fVar1 = param_1[1];
    fVar2 = param_1[2];
    fVar3 = param_1[3];
    pfVar10 = ((float *)GEN_TOP((iVar8 + 0x20)));
    pfVar11 = ((float *)(gen_frame + 0x1c));
    do {
      fVar4 = *pfVar10;
      fVar5 = pfVar10[1];
      fVar6 = pfVar10[2];
      fVar7 = pfVar10[3];
      (*(float *)(gen_frame + 0x0)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x0))) + 1);
      pfVar10 = pfVar10 + 4;
      (*(float *)(gen_frame + 0x4)) = fVar4 - fVar15;
      (*(float *)(gen_frame + 0x8)) = fVar5 - fVar1;
      (*(float *)(gen_frame + 0xc)) = fVar6 - fVar2;
      (*(float *)(gen_frame + 0x10)) = fVar7 - fVar3;
      *pfVar11 = fVar4 - fVar15;
      pfVar11[1] = fVar5 - fVar1;
      pfVar11[2] = fVar6 - fVar2;
      pfVar11[3] = fVar7 - fVar3;
      pfVar11 = pfVar11 + 4;
    } while ((int)gen_fl2bits((*(float *)(gen_frame + 0x0))) < (int)(uint)*((byte *)GEN_TOP((iVar8 + 0x131))));
  }
  iVar12 = 0;
  (*(float *)(gen_frame + 0x0)) = (float)(float10)0;
  bVar9 = false;
  if (*((byte *)GEN_TOP((iVar8 + 0x131))) != 1 && -1 < (int)(*((byte *)GEN_TOP((iVar8 + 0x131))) - 1)) {
    pfVar10 = ((float *)(gen_frame + 0x1c));
    do {
      fVar15 = F_010536a0(pfVar10,pfVar10 + 4,&(*(float *)(gen_frame + 0x4)));
      fVar13 = (float10)fVar15;
      if (bVar9) {
        fVar14 = (float10)(*(float *)(gen_frame + 0x0));
        if (fVar13 <= fVar14 && ((!GEN_ISNAN(fVar14) && !GEN_ISNAN(fVar13)) && fVar14 != fVar13)) {
          (*(float *)(gen_frame + 0x0)) = fVar15;
        }
      }
      else {
        bVar9 = true;
        (*(float *)(gen_frame + 0x0)) = fVar15;
      }
      iVar12 = iVar12 + 1;
      pfVar10 = pfVar10 + 4;
    } while (iVar12 < (int)(*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x131))) - 1));
  }
  return (*(float *)(gen_frame + 0x0));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2a940(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd2a940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x140) {
    return 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x128)));
  puVar3 = param_2;
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x140;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf19 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d2a980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd2a980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d2a990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd2a990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf23 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d2a9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd2a9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2a9b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xd2a9b0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  float fVar1;
  uint uVar2;
  float10 fVar3;
  bool bVar4;
  float10 fVar5;
  float10 extraout_ST0;
  float local_8;
  
  fVar3 = (float10)0;
  local_8 = (float)fVar3;
  fVar5 = (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x128))) + 0x138)));
  bVar4 = GEN_ISNAN(fVar3) || GEN_ISNAN(fVar5);
  if (bVar4 == (bVar4 || fVar3 == fVar5)) {
    if (param_5 == 0.0) {
      fVar5 = (float10)param_4;
      if ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar3)) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar3)) || fVar5 == fVar3)) {
        local_8 = ((float)GEN_TOF((fVar5 / (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x128))) + 0x138))))));
        fVar3 = (float10)1;
        if (!((float10)local_8 <= fVar3) != (GEN_ISNAN(fVar3) || GEN_ISNAN((float10)local_8))) {
          local_8 = (float)fVar3;
        }
      }
    }
    else {
      local_8 = (float)(float10)1;
    }
  }
  else {
    local_8 = (float)(float10)1;
  }
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14c))) + 0x10))))(param_1 + 0x14c);
  uVar2 = *((uint *)GEN_TOP((param_1 + 0x128)));
  fVar1 = ((float)GEN_TOF(((float10)1 -
                 (float10)(float)(extraout_ST0 * (float10)local_8) *
                 (float10)*((float *)GEN_TOP((uVar2 + 0x128))))));
  *param_2 = fVar1;
  if ((*((byte *)GEN_TOP((uVar2 + 0x130))) & 0x10) == 0) {
    *param_3 = fVar1;
    return uVar2;
  }
  *param_3 = ((float)GEN_TOF(((float10)1 -
                    (float10)(float)(extraout_ST0 * (float10)local_8) *
                    (float10)*((float *)GEN_TOP((uVar2 + 300))))));
  return (uint)param_3;
}

/* ref: FUN_00d2aa90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2aa90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2aa90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  ushort uVar1;
  uint uVar2;
  float10 fVar3;
  
  if (param_1 == 0) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x13e)));
    fVar3 = (float10)1;
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x13c)));
    fVar3 = (float10)0;
  }
  uVar2 = F_00cccd90((int)this + 0x14c GEN_EDX_FWD,(float)fVar3,(uint)uVar1 * 1000 >> 4);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d2aad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2aad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x170, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x15c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x160);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x150);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf27 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d2ab50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2ab50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x128)));
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf29 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d2ab70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(HWND param_1, unsigned int gen_a1), GEN_P(HDC param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd2ab70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(HWND param_1 = (HWND)gen_a1;)
  GEN_PIN(HDC param_2 = (HDC)gen_a2;)
  GEN_FRAME_DECL_GS(0x1e0, 0, 4);
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined * pPVar5;
  HGDIOBJ pvVar6;
  undefined * h;
  int * piVar7;
  uint uVar8;
  float * pfVar9;
  char * pcVar10;
  int iVar11;
  float * pfVar12;
  HDC hdc;
  int iVar13;
  float fVar14;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1d8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1dc));
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  (*(HDC *)(gen_frame + 0x40)) = param_2;
  pvVar6 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x2c)) = pvVar6;
  pvVar6 = gen_imp_SelectObject(param_2,pvVar6);
  (*(HGDIOBJ *)(gen_frame + 0x20)) = pvVar6;
  h = gen_imp_CreatePen(0,2,0x8000);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = h;
  pvVar6 = gen_imp_SelectObject(param_2,h);
  (*(HGDIOBJ *)(gen_frame + 0x34)) = pvVar6;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0xa8)));
  (*(int *)(gen_frame + 0x38)) = (*(tagRECT *)(gen_frame + 0xa8)).bottom / 2;
  (*(int *)(gen_frame + 0x28)) = (*(tagRECT *)(gen_frame + 0xa8)).right / 2;
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x98))))
                            (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG)));
  (*(int * PTR32 *)(gen_frame + 0x44)) = piVar7;
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x5c))))(piVar7 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  if ((char)uVar8 != '\0') {
    iVar2 = *(int *)(this + 0x128);
    if (*((byte *)GEN_TOP((iVar2 + 0x131))) != 0) {
      (*(byte *)(gen_frame + 0x53)) = *((byte *)GEN_TOP((iVar2 + 4))) >> 2 & 1;
      pfVar12 = ((float *)(gen_frame + 0xb8)) + 1;
      (*(float * PTR32 *)(gen_frame + 0x54)) = ((float *)GEN_TOP((iVar2 + 0x20)));
      (*(uint *)(gen_frame + 0x4c)) = (uint)*((byte *)GEN_TOP((iVar2 + 0x131)));
      do {
        pfVar9 = ((float *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(float * PTR32 *)(gen_frame + 0x54)))));
        fVar14 = pfVar9[1];
        pfVar12[-1] = *pfVar9;
        fVar3 = pfVar9[2];
        fVar4 = pfVar9[3];
        *pfVar12 = fVar14;
        pfVar12[1] = fVar3;
        pfVar12[2] = fVar4;
        if ((*(byte *)(gen_frame + 0x53)) == 0) {
          *pfVar12 = (float)(float10)0;
        }
        (*(float * PTR32 *)(gen_frame + 0x54)) = (*(float * PTR32 *)(gen_frame + 0x54)) + 4;
        pfVar12 = pfVar12 + 4;
        uVar8 = (*(uint *)(gen_frame + 0x4c)) - 1;
        (*(uint *)(gen_frame + 0x4c)) = uVar8;
      } while (uVar8 != 0);
    }
    iVar13 = (*(tagRECT *)(gen_frame + 0xa8)).right / 2 - (int)((double)((float *)(gen_frame + 0xb8))[0] * *(double *)&REFG(double, 0x1132488));
    (*(int *)(gen_frame + 0x1c)) = iVar13;
    iVar11 = (*(int *)(gen_frame + 0x38)) - (int)(*(double *)&REFG(double, 0x1132488) * (double)((float *)(gen_frame + 0xb8))[2]);
    (*(uint *)(gen_frame + 0x4c)) = iVar11;
    iVar2 = (int)((double)*((float *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x128) + 0x134))) * *(double *)&REFG(undefined, 0x10947f0)
                 );
    gen_imp_MoveToEx(param_2,iVar13,iVar11,(LPPOINT)0x0);
    gen_imp_Ellipse(param_2,iVar13 - iVar2,(*(uint *)(gen_frame + 0x4c)) - iVar2,iVar2 + iVar13,iVar2 + (*(uint *)(gen_frame + 0x4c)));
    (*(int *)(gen_frame + 0x3c)) = 1;
    hdc = param_2;
    if (1 < *((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x128) + 0x131)))) {
      (*(float * PTR32 *)(gen_frame + 0x54)) = ((float *)(gen_frame + 0xb8)) + 6;
      do {
        iVar13 = (*(int *)(gen_frame + 0x28)) - (int)((double)(*(float * PTR32 *)(gen_frame + 0x54))[-2] * *(double *)&REFG(double, 0x1132488));
        iVar11 = (*(int *)(gen_frame + 0x38)) - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(*(float * PTR32 *)(gen_frame + 0x54)));
        gen_imp_LineTo((*(HDC *)(gen_frame + 0x40)),iVar13,iVar11);
        gen_imp_Ellipse((*(HDC *)(gen_frame + 0x40)),iVar13 - iVar2,iVar11 - iVar2,iVar2 + iVar13,iVar2 + iVar11);
        (*(float * PTR32 *)(gen_frame + 0x54)) = (*(float * PTR32 *)(gen_frame + 0x54)) + 4;
        iVar11 = (*(int *)(gen_frame + 0x3c)) + 1;
        (*(int *)(gen_frame + 0x3c)) = iVar11;
        hdc = (*(HDC *)(gen_frame + 0x40));
        iVar13 = (*(int *)(gen_frame + 0x1c));
      } while (iVar11 < (int)(uint)*((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x128) + 0x131))));
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x44)) + 0x30))))((*(int * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x98)));
    pPVar5 = (*(undefined * PTR32 *)(gen_frame + 0x48));
    fVar14 = F_00d2a7e0((*(undefined * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x98)));
    (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar14)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pPVar5 + 0x60))))
              (pPVar5 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x18)),(undefined4)gen_fl2bits(fVar14),0);
    F_00c472af(((char *)(gen_frame + 0x1b8)),0x20,&REFG(undefined, 0x1134470),(int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x30))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x30))) >> 0x20));
    pcVar10 = ((char *)(gen_frame + 0x1b8));
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    gen_imp_GetTextExtentPoint32A(hdc,((char *)(gen_frame + 0x1b8)),(int)pcVar10 - (int)(((char *)(gen_frame + 0x1b8)) + 1),&(*(undefined8 *)(gen_frame + 0x10)));
    gen_imp_TextOutA(hdc,iVar13,(*(uint *)(gen_frame + 0x4c)),((char *)(gen_frame + 0x1b8)),(int)pcVar10 - (int)(((char *)(gen_frame + 0x1b8)) + 1));
    gen_imp_SelectObject(hdc,(*(HGDIOBJ *)(gen_frame + 0x34)));
    gen_imp_SelectObject(hdc,(*(HGDIOBJ *)(gen_frame + 0x20)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x24)));
    uVar8 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x2c)));
  }
  return uVar8;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2af10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2af10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined * _File;
  byte bVar5;
  int iVar6;
  
  _File = param_1;
  bVar5 = F_00d21f00((undefined *)this GEN_EDX_FWD,param_1);
  if (bVar5 == 0) {
    return 0;
  }
  iVar6 = 0;
  param_1 = ((undefined *)GEN_TOP(0x0));
  do {
    iVar1 = *(int *)(this + 0x128);
    dVar2 = (double)*((float *)GEN_TOP((iVar6 + 0x28 + iVar1)));
    dVar3 = (double)*((float *)GEN_TOP((iVar6 + 0x24 + iVar1)));
    dVar4 = (double)*((float *)GEN_TOP((iVar6 + 0x20 + iVar1)));
    F_00c49386(_File,((char *)REFP(0x1134478)),param_1,(int)(ulonglong)gen_d2bits(dVar4),
             (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
             (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
             (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1)));
    iVar6 = iVar6 + 0x10;
  } while (iVar6 < 0x100);
  param_1 = ((undefined *)GEN_TOP(0x0));
  iVar6 = 0x120;
  do {
    F_00c49386(_File,((char *)REFP(0x1134494)),param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))) >> 0x20
                  ));
    param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1)));
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x128);
  F_00c49386(_File,((char *)REFP(0x11344a8)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x128))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x128))))));
  F_00c49386(_File,((char *)REFP(0x11344bc)),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 300)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 300)))) >> 0x20));
  F_00c49386(_File,((char *)REFP(0x11344cc)),*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x130))) & 0xf);
  F_00c49386(_File,((char *)REFP(0x11344e0)),*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x130))) >> 4 & 1);
  F_00c49386(_File,((char *)REFP(0x11344f4)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x138))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x138))))));
  F_00c49386(_File,((char *)REFP(0x1134504)),(uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x131))));
  F_00c49386(_File,((char *)REFP(0x1134518)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x134))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x134))))));
  F_00c49386(_File,((char *)REFP(0x1134524)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf31 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2b090(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2b090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = ((char *)REFP(0x113453c));
  pbVar5 = ((byte *)GEN_TOP(param_2));
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d2b0c1: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d2b0c6;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d2b0c1;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d2b0c6: ;
  if (iVar3 == 0) {
    uVar4 = F_00d00d00(0,0);
    if (uVar4 != 0) {
      uVar4 = F_00c4c74c(uVar4);
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 2) * 0x10))) = (float)dVar7;
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24 + uVar4 * 0x10))) = (float)dVar7;
          pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
          if (pcVar2 != ((char *)GEN_TOP(0x0))) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 0x10))) = (float)dVar7;
            return 1;
          }
        }
      }
    }
  }
  else {
    pcVar2 = ((char *)REFP(0x1134548));
    pbVar5 = ((byte *)GEN_TOP(param_2));
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d2b196: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d2b19b;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d2b196;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d2b19b: ;
    if (iVar3 == 0) {
      uVar4 = F_00d00d00(0,0);
      if (uVar4 != 0) {
        uVar4 = F_00c4c74c(uVar4);
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x120 + uVar4 * 4))) = (float)dVar7;
          return 1;
        }
      }
    }
    else {
      pcVar2 = ((char *)REFP(0x1134550));
      pbVar5 = ((byte *)GEN_TOP(param_2));
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00d2b218: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d2b21d;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00d2b218;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d2b21d: ;
      if (iVar3 == 0) {
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x128))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = ((char *)REFP(0x113455c));
        pbVar5 = ((byte *)GEN_TOP(param_2));
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d2b280: ;
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d2b285;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d2b280;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d2b285: ;
        if (iVar3 == 0) {
          pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
          if (pcVar2 != ((char *)GEN_TOP(0x0))) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 300))) = (float)dVar7;
            return 1;
          }
        }
        else {
          pcVar2 = ((char *)REFP(0x1134568));
          pbVar5 = ((byte *)GEN_TOP(param_2));
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d2b2e5: ;
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d2b2ea;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d2b2e5;
            pcVar2 = pcVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d2b2ea: ;
          if (iVar3 == 0) {
            uVar4 = F_00d00d00(0,0);
            if (uVar4 != 0) {
              uVar4 = F_00c4c74c(uVar4);
              pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x130)));
              *pbVar5 = *pbVar5 ^ (*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x130))) ^ (byte)uVar4) & 0xf
              ;
              return 1;
            }
          }
          else {
            pcVar2 = ((char *)REFP(0x1134578));
            pbVar5 = ((byte *)GEN_TOP(param_2));
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d2b350: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d2b355;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d2b350;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d2b355: ;
            if (iVar3 == 0) {
              uVar4 = F_00d00d00(0,0);
              if (uVar4 != 0) {
                uVar4 = F_00c4c74c(uVar4);
                pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x130)));
                *pbVar5 = *pbVar5 ^ ((char)uVar4 << 4 ^ *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x130)))
                                    ) & 0x10;
                return 1;
              }
            }
            else {
              pcVar2 = ((char *)REFP(0x1134588));
              pbVar5 = ((byte *)GEN_TOP(param_2));
              do {
                bVar1 = *pcVar2;
                bVar6 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_00d2b3c0: ;
                  iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                  goto LAB_00d2b3c5;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar2[1];
                bVar6 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_00d2b3c0;
                pcVar2 = pcVar2 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00d2b3c5: ;
              if (iVar3 == 0) {
                pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                  dVar7 = F_00c4acaa(pcVar2);
                  *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x138))) = (float)dVar7;
                  return 1;
                }
              }
              else {
                pcVar2 = ((char *)REFP(0x1134594));
                pbVar5 = ((byte *)GEN_TOP(param_2));
                do {
                  bVar1 = *pcVar2;
                  bVar6 = bVar1 < *pbVar5;
                  if (bVar1 != *pbVar5) {
LAB_00d2b425: ;
                    iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                    goto LAB_00d2b42a;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pcVar2[1];
                  bVar6 = bVar1 < pbVar5[1];
                  if (bVar1 != pbVar5[1]) goto LAB_00d2b425;
                  pcVar2 = pcVar2 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_00d2b42a: ;
                if (iVar3 == 0) {
                  uVar4 = F_00d00d00(0,0);
                  if (uVar4 != 0) {
                    uVar4 = F_00c4c74c(uVar4);
                    *((char *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x131))) = (char)uVar4;
                    return 1;
                  }
                }
                else {
                  pcVar2 = ((char *)REFP(0x11345a0));
                  pbVar5 = ((byte *)GEN_TOP(param_2));
                  do {
                    bVar1 = *pcVar2;
                    bVar6 = bVar1 < *pbVar5;
                    if (bVar1 != *pbVar5) {
LAB_00d2b484: ;
                      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                      goto LAB_00d2b489;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pcVar2[1];
                    bVar6 = bVar1 < pbVar5[1];
                    if (bVar1 != pbVar5[1]) goto LAB_00d2b484;
                    pcVar2 = pcVar2 + 2;
                    pbVar5 = pbVar5 + 2;
                  } while (bVar1 != 0);
                  iVar3 = 0;
LAB_00d2b489: ;
                  if (iVar3 != 0) {
                    bVar1 = F_00d22040(param_1 GEN_EDX_ARG,param_2);
                    return bVar1;
                  }
                  pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                  if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                    dVar7 = F_00c4acaa(pcVar2);
                    *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x134))) = (float)dVar7;
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
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2b4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2b4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00d22da0(this GEN_EDX_FWD,param_1,0x140)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x50; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x50);
  }
  F_00d2b9a0(*(undefined4 *)(this + 0x128) GEN_EDX_ARG,(uint)puVar1);
  return (uint)(puVar1 + 0x50);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf28 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d2b530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2b530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x108, 8, 4);
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  ulonglong uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x100)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x104));
  uVar3 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x100;
    uVar6 = F_00427d90();
    (*(ulonglong *)(gen_frame + 0x8)) = uVar6;
    bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x131)));
    iVar5 = 0;
    (*(byte *)(gen_frame + 0xf8)) = bVar1;
    if (bVar1 != 0) {
      puVar2 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x24)));
      puVar4 = ((undefined4 *)(gen_frame + 0x3c));
      do {
        iVar5 = iVar5 + 1;
        puVar4[-1] = puVar2[-1];
        *puVar4 = *puVar2;
        puVar4[1] = puVar2[1];
        puVar2 = puVar2 + 4;
        puVar4 = puVar4 + 3;
      } while (iVar5 < (int)(uint)(*(byte *)(gen_frame + 0xf8)));
    }
    F_00d2b860(&(*(undefined2 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)));
    uVar3 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)),0x100);
  }
  return uVar3;
}

/* ref: FUN_00d2b610 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d2b610(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd2b610u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_FRAME_DECL(0x170, 0);
  int * this;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * pPVar4;
  
  (*(uint *)(gen_frame + 0x15c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x160);
  F_00d22580(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[33])REFP(0x11345ec));
  F_00cccb10(param_1 + 0x14c GEN_EDX_ARG,(float)(float10)1);
  *(uint *)(param_1 + 0xb0) =
       *(uint *)(param_1 + 0xb0) ^ ((uint)param_5 << 4 ^ *(uint *)(param_1 + 0xb0)) & 0x10;
  if (param_5 == 0) {
    *(undefined4 * PTR32 *)(param_1 + 0x128) = param_2;
  }
  else {
    *(undefined * PTR32 *)(param_1 + 0x128) = param_1 + 0x180;
    puVar3 = param_2;
    pPVar4 = param_1 + 0x180;
    for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 - 1) {
      *(undefined4 *)pPVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pPVar4 = pPVar4 + 4;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x128);
  F_00d29d10(param_1 GEN_EDX_ARG);
  F_00d20fe0(param_1 GEN_EDX_ARG,~(*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 4))) >> 5) & 1);
  this = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xe4))))(this GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x68))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x150);
  }
  F_00d2b530(param_1 GEN_EDX_ARG,0x401);
  return (uint)param_1;
}

/* ref: FUN_00d2b740 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d2b740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd2b740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x170, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x15c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x160);
  F_00d22720(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11345ec));
  F_00cccb10((int)this + 0x14c GEN_EDX_ARG,(float)(float10)1);
  *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) | 0x10;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x128))) = ((undefined *)GEN_TOP(((int)this + 0x180)));
  F_00d2b900(((undefined *)GEN_TOP(((int)this + 0x180))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP(((int)this + 0x128)));
  this_00 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x150);
  }
  F_00d2b530(this GEN_EDX_ARG,0x401);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2b810(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd2b810u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_3)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),local_c);
  return uVar1;
}

/* ref: FUN_00d2b860 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d2b860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2b860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *param_1 = *(undefined2 *)this;
  param_1[1] = *((undefined2 *)GEN_TOP(((int)this + 2)));
  *(undefined4 *)(param_1 + 4) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined4 *)(param_1 + 6) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  *(undefined4 *)(param_1 + 0xc) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *(undefined4 *)(param_1 + 0xe) = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  *(undefined4 *)(param_1 + 0x10) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  *(undefined4 *)(param_1 + 0x16) = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  *(undefined4 *)(param_1 + 0x14) = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  param_1[0x18] = *((undefined2 *)GEN_TOP(((int)this + 0x30)));
  param_1[0x19] = *((undefined2 *)GEN_TOP(((int)this + 0x32)));
  *(undefined1 *)(param_1 + 0x1a) = *((undefined1 *)GEN_TOP(((int)this + 0x34)));
  *(undefined1 *)(param_1 + 0x7c) = *((undefined1 *)GEN_TOP(((int)this + 0xf8)));
  iVar1 = 0x10;
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x40)));
  do {
    *puVar2 = *((undefined4 *)GEN_TOP((((int)this - (int)param_1) + (int)puVar2)));
    iVar1 = iVar1 - 1;
    puVar2[1] = puVar3[-1];
    puVar2[2] = *puVar3;
    puVar2 = puVar2 + 3;
    puVar3 = puVar3 + 3;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00d2b900 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d2b900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2b900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  float * pfVar4;
  int iVar5;
  
  fVar1 = (float10)1;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 3))) = 0x400;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 5))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((float *)GEN_TOP(((int)this + 0x10))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x14))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x18))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x1c))) = (float)fVar1;
  *((undefined2 *)GEN_TOP(((int)this + 0xe))) = 0;
  fVar2 = (float10)0;
  *(undefined2 *)this = 0x140;
  *((undefined1 *)GEN_TOP(((int)this + 0xd))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 2))) = 10;
  iVar5 = 0x10;
  pfVar4 = ((float *)GEN_TOP(((int)this + 0x28)));
  do {
    pfVar4[-2] = (float)fVar2;
    iVar5 = iVar5 - 1;
    pfVar4[-1] = (float)fVar2;
    *pfVar4 = (float)fVar2;
    pfVar4[1] = (float)fVar2;
    pfVar4[1] = (float)fVar1;
    uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094880)));
    pfVar4 = pfVar4 + 4;
  } while (iVar5 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0x130))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x120))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x13c))) = 0;
  *((float *)GEN_TOP(((int)this + 0x124))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x128))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 300))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x134))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x138))) = (float)fVar2;
  return 0;
}

/* ref: FUN_00d2b9a0 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00d2b9a0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2b9a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  ushort uVar2;
  uint * puVar3;
  uint * puVar4;
  int local_8;
  
  F_00d0c080(param_1 GEN_EDX_FWD,param_2);
  puVar4 = ((uint *)GEN_TOP((param_1 + 0x28)));
  local_8 = 0x10;
  puVar3 = ((uint *)GEN_TOP((param_2 + 0x20)));
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar3)));
    *puVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar4[-1];
    puVar3[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar4;
    puVar3[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar4[1];
    puVar3[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar4 = puVar4 + 4;
    local_8 = local_8 - 1;
    puVar3 = puVar3 + 4;
  } while (local_8 != 0);
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x120)));
  *((uint *)GEN_TOP((param_2 + 0x120))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x124)));
  *((uint *)GEN_TOP((param_2 + 0x124))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x128)));
  *((uint *)GEN_TOP((param_2 + 0x128))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 300)));
  *((uint *)GEN_TOP((param_2 + 300))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((undefined1 *)GEN_TOP((param_2 + 0x131))) = *((undefined1 *)GEN_TOP((param_1 + 0x131)));
  *((byte *)GEN_TOP((param_2 + 0x130))) =
       *((byte *)GEN_TOP((param_2 + 0x130))) ^ (*((byte *)GEN_TOP((param_2 + 0x130))) ^ *((byte *)GEN_TOP((param_1 + 0x130)))) & 0xf;
  *((byte *)GEN_TOP((param_2 + 0x130))) =
       (*((byte *)GEN_TOP((param_1 + 0x130))) ^ *((byte *)GEN_TOP((param_2 + 0x130)))) & 0x10 ^ *((byte *)GEN_TOP((param_2 + 0x130)))
  ;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x134)));
  *((uint *)GEN_TOP((param_2 + 0x134))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x138)));
  *((byte *)GEN_TOP((param_2 + 0x130))) = *((byte *)GEN_TOP((param_2 + 0x130))) & 0x1f;
  *((uint *)GEN_TOP((param_2 + 0x138))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((undefined2 *)GEN_TOP((param_2 + 0x132))) = 0;
  *((ushort *)GEN_TOP((param_2 + 0x13c))) =
       *((ushort *)GEN_TOP((param_1 + 0x13c))) << 8 | *((ushort *)GEN_TOP((param_1 + 0x13c))) >> 8;
  uVar2 = *((ushort *)GEN_TOP((param_1 + 0x13e))) << 8 | *((ushort *)GEN_TOP((param_1 + 0x13e))) >> 8;
  *((ushort *)GEN_TOP((param_2 + 0x13e))) = uVar2;
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2bb50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2bb50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[33])REFP(0x11345ec));
  F_00cccb40(param_1 + 0x53 GEN_EDX_FWD);
  F_00d23680(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00d2bb90 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d2bb90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2bb90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  float10 fVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  F_010538c0(this GEN_EDX_FWD);
  F_010538c0((int)this + 0x48 GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x20)) = (float)(float10)0;
  fVar1 = (float10)1;
  (*(float *)(gen_frame + 0x24)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abe50)));
  (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)&REFG(undefined, 0x113467c);
  (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac1a8)));
  (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac1a8)));
  (*(float *)(gen_frame + 0x38)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x3c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(float *)(gen_frame + 0x0)) = (float)(float10)0;
  (*(float *)(gen_frame + 0x4)) = (float)fVar1;
  (*(float *)(gen_frame + 0xc)) = (float)fVar1;
  (*(float *)(gen_frame + 0x14)) = (float)fVar1;
  (*(float *)(gen_frame + 0x18)) = (float)fVar1;
  (*(float *)(gen_frame + 0x1c)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abe50)));
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac1a8)));
  F_010538e0(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)),4,1);
  F_010538e0((int)this + 0x48 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),4,1);
  return (uint)this;
}

/* ref: FUN_00d2bc40 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d2bc40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2bc40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  F_010538d0(in_ecx + 0x48 GEN_EDX_FWD);
  F_010538d0(in_ecx GEN_EDX_ARG);
  return;
}

/* ref: FUN_00d2bc60 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00d2bc60(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd2bc60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  
  fVar1 = F_01053e40(param_1 GEN_EDX_FWD,param_2);
  return fVar1;
}

/* ref: FUN_00d2bc80 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00d2bc80(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd2bc80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  
  fVar1 = F_01053e40(param_1 + 0x48 GEN_EDX_FWD,param_2);
  return fVar1;
}

/* ref: FUN_00d2bca0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d2bca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd2bca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_010538e0(this GEN_EDX_FWD,param_1,param_2,1);
  return;
}

/* ref: FUN_00d2bcc0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d2bcc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd2bcc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_010538e0((int)this + 0x48 GEN_EDX_FWD,param_1,param_2,1);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf5 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2bcf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2bcf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00d2c710((undefined *)this GEN_EDX_FWD,param_1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf6 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2bd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2bd10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00d2c730((undefined *)this GEN_EDX_FWD,param_1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf8 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2bd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2bd30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined4 *)(this + 0x70) = param_1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf14 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2bd50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd2bd50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  if (1 < param_2) {
    return 0;
  }
  piVar1 = ((int *)GEN_TOP(F_00d1d1f0(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  if ((uVar2 == 3) &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8)), (char)uVar2 == '\x01'
     )) {
    return 0;
  }
  *(undefined4 *)(this + param_2 * 4 + 0xa0) = param_1;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf18 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2bdc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2bdc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined * pLVar4;
  int iVar5;
  
  iVar5 = 0;
  pLVar4 = this + 0xa0;
  while ((iVar1 = *(int *)pLVar4, iVar1 == 0 ||
         ((iVar1 != param_1 &&
          (((piVar2 = ((int *)GEN_TOP(F_00d1d1f0(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,iVar1))), piVar2 == ((int *)GEN_TOP(0x0)) ||
            (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG), uVar3 != 3)) ||
           (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x48))))(piVar2 GEN_EDX_ARG,param_1), (char)uVar3 != '\x01'))))))) {
    iVar5 = iVar5 + 1;
    pLVar4 = pLVar4 + 4;
    if (1 < iVar5) {
      return 0;
    }
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2be30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2be30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (1 < param_2) {
    return 0;
  }
  return *((uint *)GEN_TOP((in_ecx + 0xa0 + param_2 * 4)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf16 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2be50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd2be50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0xa8))) = param_2;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf17 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2be70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2be70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xa8)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d2be90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2be90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x60, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  this_00 = ((int *)GEN_TOP(F_00d1b7a0(*(undefined4 *)(this + 0xc) GEN_EDX_FWD)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x54))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x40);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf22 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2bf00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2bf00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00d2c890((undefined *)this GEN_EDX_FWD,param_1)));
  *(undefined4 *)(this + 0x80) = *puVar1;
  *(undefined4 *)(this + 0x84) = puVar1[1];
  *(undefined4 *)(this + 0x88) = puVar1[2];
  *(undefined4 *)(this + 0x8c) = puVar1[3];
  *(undefined4 *)(this + 0x90) = puVar1[4];
  *(undefined4 *)(this + 0x94) = puVar1[5];
  *(undefined4 *)(this + 0x98) = puVar1[6];
  *(undefined4 *)(this + 0x9c) = puVar1[7];
  *(undefined4 *)(this + 0xa0) = puVar1[8];
  *(undefined4 *)(this + 0xa4) = puVar1[9];
  *(undefined4 *)(this + 0xa8) = puVar1[10];
  this[0xac] = (undefined1)((byte)this[0xac] ^ (*(byte *)(puVar1 + 0xb) ^ (byte)this[0xac]) & 1);
  return (uint)(puVar1 + 0xc);
}

/* ref: FUN_00d2bf90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d2bf90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd2bf90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x60, 0);
  float10 fVar1;
  int * this_00;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  F_00d2c8e0(this GEN_EDX_FWD,param_1,param_2);
  fVar1 = (float10)0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x1134694));
  *((undefined1 *)GEN_TOP(((int)this + 4))) = 3;
  *((float *)GEN_TOP(((int)this + 0x80))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x84))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x88))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x8c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x90))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x94))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x98))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x9c))) = (float)fVar1;
  *((byte *)GEN_TOP(((int)this + 0xac))) = *((byte *)GEN_TOP(((int)this + 0xac))) | 1;
  *((float *)GEN_TOP(((int)this + 0xa8))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  this_00 = ((int *)GEN_TOP(F_00d1b7a0(*((undefined4 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x54))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x40);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf19 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d2c070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2c070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x78, 8);
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  undefined * pLVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  (*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x68);
  bVar5 = F_00d2c820(this GEN_EDX_FWD);
  if (bVar5 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this + 0xa0;
    pLVar8 = this + 0x80;
    (*(int *)(gen_frame + 0x0)) = 0;
    do {
      fVar9 = (float10)0;
      uVar2 = *(undefined4 *)pLVar8;
      *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0x0))))) = (float)fVar9;
      uVar3 = *(undefined4 *)(pLVar8 + 4);
      *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0x0)) + 4))) = (float)fVar9;
      *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0x0)) + 8))) = (float)fVar9;
      *((undefined4 *)GEN_TOP(((int)((float *)(gen_frame + 0x44)) + (*(int *)(gen_frame + 0x0))))) = uVar2;
      *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0x0)) + 0xc))) = (float)fVar9;
      uVar2 = *(undefined4 *)(pLVar8 + 8);
      *((undefined4 *)GEN_TOP(((int)((float *)(gen_frame + 0x44)) + (*(int *)(gen_frame + 0x0)) + 4))) = uVar3;
      *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0x0))))) = (float)(float10)1;
      uVar3 = *(undefined4 *)(pLVar8 + 0xc);
      *((undefined4 *)GEN_TOP(((int)((float *)(gen_frame + 0x44)) + (*(int *)(gen_frame + 0x0)) + 8))) = uVar2;
      iVar4 = *(int *)(*(undefined * PTR32 *)(gen_frame + 0x4));
      *((undefined4 *)GEN_TOP(((int)((float *)(gen_frame + 0x44)) + (*(int *)(gen_frame + 0x0)) + 0xc))) = uVar3;
      if ((iVar4 != 0) &&
         (piVar6 = ((int *)GEN_TOP(F_00d1d1f0(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_ARG,iVar4))), piVar6 != ((int *)GEN_TOP(0x0)))) {
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 4))))(piVar6 GEN_EDX_ARG);
        if (uVar7 == 3) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x4c))))(piVar6 GEN_EDX_ARG);
        }
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x10))))(piVar6 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x8)));
        if ((char)uVar7 == '\x01') {
          F_00c34180(((undefined4 *)GEN_TOP(((int)((float *)(gen_frame + 0x44)) + (*(int *)(gen_frame + 0x0))))) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x8)));
        }
      }
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x4)) + 4;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 0x10;
      pLVar8 = pLVar8 + 0x10;
    } while ((*(int *)(gen_frame + 0x0)) < 0x20);
    fVar10 = ((float *)(gen_frame + 0x44))[4] - ((float *)(gen_frame + 0x44))[0];
    fVar11 = ((float *)(gen_frame + 0x44))[5] - ((float *)(gen_frame + 0x44))[1];
    fVar12 = ((float *)(gen_frame + 0x44))[6] - ((float *)(gen_frame + 0x44))[2];
    fVar13 = (*(float *)(gen_frame + 0x60)) - ((float *)(gen_frame + 0x44))[3];
    (*(float *)(gen_frame + 0x8)) = fVar10;
    (*(float *)(gen_frame + 0xc)) = fVar11;
    (*(float *)(gen_frame + 0x10)) = fVar12;
    (*(float *)(gen_frame + 0x14)) = fVar13;
    ((float *)(gen_frame + 0x44))[4] = fVar10;
    ((float *)(gen_frame + 0x44))[5] = fVar11;
    ((float *)(gen_frame + 0x44))[6] = fVar12;
    (*(float *)(gen_frame + 0x60)) = fVar13;
    fVar1 = *(float *)(this + 0xa8);
    fVar10 = fVar10 * fVar1;
    fVar11 = fVar11 * fVar1;
    fVar12 = fVar12 * fVar1;
    fVar13 = fVar13 * fVar1;
    (*(float *)(gen_frame + 0x8)) = fVar10;
    (*(float *)(gen_frame + 0xc)) = fVar11;
    (*(float *)(gen_frame + 0x10)) = fVar12;
    (*(float *)(gen_frame + 0x14)) = fVar13;
    ((float *)(gen_frame + 0x44))[4] = fVar10;
    ((float *)(gen_frame + 0x44))[5] = fVar11;
    ((float *)(gen_frame + 0x44))[6] = fVar12;
    (*(float *)(gen_frame + 0x60)) = fVar13;
    fVar10 = fVar10 + ((float *)(gen_frame + 0x44))[0];
    fVar11 = fVar11 + ((float *)(gen_frame + 0x44))[1];
    fVar12 = fVar12 + ((float *)(gen_frame + 0x44))[2];
    fVar13 = fVar13 + ((float *)(gen_frame + 0x44))[3];
    (*(float *)(gen_frame + 0x8)) = fVar10;
    (*(float *)(gen_frame + 0xc)) = fVar11;
    (*(float *)(gen_frame + 0x10)) = fVar12;
    (*(float *)(gen_frame + 0x14)) = fVar13;
    ((float *)(gen_frame + 0x44))[4] = fVar10;
    *(float *)(this + 0x10) = fVar10;
    ((float *)(gen_frame + 0x44))[5] = fVar11;
    *(float *)(this + 0x14) = fVar11;
    ((float *)(gen_frame + 0x44))[6] = fVar12;
    *(float *)(this + 0x18) = fVar12;
    (*(float *)(gen_frame + 0x60)) = fVar13;
    *(float *)(this + 0x1c) = fVar13;
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2c280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00d2ca20(this GEN_EDX_FWD,param_1,0x30)));
  *puVar1 = *(undefined4 *)(this + 0x80);
  puVar1[1] = *(undefined4 *)(this + 0x84);
  puVar1[2] = *(undefined4 *)(this + 0x88);
  puVar1[3] = *(undefined4 *)(this + 0x8c);
  puVar1[4] = *(undefined4 *)(this + 0x90);
  puVar1[5] = *(undefined4 *)(this + 0x94);
  puVar1[6] = *(undefined4 *)(this + 0x98);
  puVar1[7] = *(undefined4 *)(this + 0x9c);
  puVar1[8] = *(undefined4 *)(this + 0xa0);
  puVar1[10] = *(undefined4 *)(this + 0xa8);
  *(byte *)(puVar1 + 0xb) = (byte)this[0xac] & 1;
  piVar2 = ((int *)GEN_TOP(F_00d1b7a0(*(undefined4 *)(this + 0xc) GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xf4))))(piVar2 GEN_EDX_ARG);
  if (uVar3 == 0) {
    F_00d2c340(puVar1 GEN_EDX_ARG,(uint)puVar1);
  }
  return (uint)(puVar1 + 0xc);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf1 */
GEN_LIB GEN_NOFRAME uint F_00d2c330(void)
{
  GEN_ENTER(0xd2c330u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: FUN_00d2c340 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2c340(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  uint * puVar4;
  int local_8;
  
  puVar3 = ((uint *)GEN_TOP((param_1 + 0xc)));
  puVar4 = ((uint *)GEN_TOP((param_2 + 0x20)));
  puVar2 = ((uint *)GEN_TOP((param_2 + 4)));
  local_8 = 2;
  do {
    uVar1 = puVar3[-3];
    puVar2[-1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar2)));
    *puVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[-1];
    puVar2[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar3;
    puVar2[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar4)));
    *puVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 4;
    puVar2 = puVar2 + 4;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  *((undefined1 *)GEN_TOP((param_2 + 0x2c))) = *((undefined1 *)GEN_TOP((param_1 + 0x2c)));
  *((undefined2 *)GEN_TOP((param_2 + 0x2d))) = 0;
  *((undefined1 *)GEN_TOP((param_2 + 0x2f))) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2c3f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[23])REFP(0x1134694));
  F_00d2c6d0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf5 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2c430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00d2c710((undefined *)this GEN_EDX_FWD,param_1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf6 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2c450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00d2c730((undefined *)this GEN_EDX_FWD,param_1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf8 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2c470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined4 *)(this + 0x70) = param_1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d2c4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2c4a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x60, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  this_00 = ((int *)GEN_TOP(F_00d1b7a0(*(undefined4 *)(this + 0xc) GEN_EDX_FWD)));
  uVar1 = 0;
  if (this_00 != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x54))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x40);
    }
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2c520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d2ca20(this GEN_EDX_FWD,param_1,0x30);
  uVar1 = F_00d2c9a0((undefined *)this GEN_EDX_ARG,uVar1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf22 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2c540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d2c890((undefined *)this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00d2c550 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d2c550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd2c550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x60, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  F_00d2c8e0(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x1134704));
  *((undefined1 *)GEN_TOP(((int)this + 4))) = 2;
  this_00 = ((int *)GEN_TOP(F_00d1b7a0(*((undefined4 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG)));
  if (this_00 != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x54))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x40);
    }
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf1 */
GEN_LIB GEN_NOFRAME uint F_00d2c5e0(void)
{
  GEN_ENTER(0xd2c5e0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2c5f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[23])REFP(0x1134704));
  F_00d2c6d0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00d2c6d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d2c6d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2c6d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[18])REFP(0x1134784));
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf2 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2c6e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  byte bVar1;
  
  bVar1 = (*((byte *)GEN_TOP((in_ecx + 0x7c))) ^ param_2) & 1;
  *((byte *)GEN_TOP((in_ecx + 0x7c))) = *((byte *)GEN_TOP((in_ecx + 0x7c))) ^ bVar1;
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf3 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d2c700(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2c700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x7c))) & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf5 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2c710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  this[0x7c] = (undefined1)((byte)this[0x7c] | 2);
  F_004eb4e0(this + 0x30 GEN_EDX_FWD,param_1);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf6 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2c730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_004eb4e0(this + 0x30 GEN_EDX_FWD,param_1);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf7 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2c750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  F_004eb4e0(param_1 GEN_EDX_FWD,this + 0x30);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf8 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2c770(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x70))) = param_2;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d2c780(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2c780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x70)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2c790(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x74))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d2c7a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2c7a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x74)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf12 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d2c7b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd2c7b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x78))) = param_2;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf13 */
GEN_LIB GEN_NOFRAME float10 GEN_THISCALL F_00d2c7c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2c7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x78)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf14 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d2c7d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd2c7d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf15 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d2c7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c7e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf16 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d2c7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf17 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d2c800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf18 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d2c810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf19 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d2c820(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2c820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x7c))) & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d2c830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2c830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x60, 0);
  undefined * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x54))))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
  this_00 = ((undefined *)GEN_TOP(F_00d1b7a0(*(undefined4 *)(this + 0xc) GEN_EDX_ARG)));
  uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x40);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf22 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2c890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  this[0x7c] = (undefined1)((byte)this[0x7c] ^ (*((byte *)GEN_TOP((param_1 + 1))) ^ (byte)this[0x7c]) & 1);
  *(undefined4 *)(this + 0x70) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *(undefined4 *)(this + 0x10) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  *(undefined4 *)(this + 0x14) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  *(undefined4 *)(this + 0x18) = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
  *(undefined4 *)(this + 0x1c) = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
  *(undefined4 *)(this + 0x20) = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
  *(undefined4 *)(this + 0x24) = *((undefined4 *)GEN_TOP((param_1 + 0x24)));
  *(undefined4 *)(this + 0x28) = *((undefined4 *)GEN_TOP((param_1 + 0x28)));
  *(undefined4 *)(this + 0x2c) = *((undefined4 *)GEN_TOP((param_1 + 0x2c)));
  return param_1 + 0x30;
}

/* ref: FUN_00d2c8e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2c8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd2c8e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x44, 12, 4);
  undefined4 uVar1;
  uint uVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x11347d4));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
  *((byte *)GEN_TOP(((int)this + 0x7c))) = *((byte *)GEN_TOP(((int)this + 0x7c))) | 1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = 1;
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1097254);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *(undefined4 *)&REFG(undefined, 0x1097254);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = uVar1;
  uVar2 = F_004ec420(((undefined1 *)(gen_frame + 0x0)));
  F_004eb4e0(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG,uVar2);
  *((byte *)GEN_TOP(((int)this + 0x7c))) = *((byte *)GEN_TOP(((int)this + 0x7c))) | 2;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = *(undefined4 *)&REFG(undefined, 0x1097254);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf4 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2c960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x44, 12, 4);
  
  F_004eb600(this + 0x30 GEN_EDX_FWD,((byte *)(gen_frame + 0x0)));
  *(undefined4 *)param_1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48));
  *(undefined4 *)(param_1 + 4) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52));
  *(undefined4 *)(param_1 + 8) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56));
  *(undefined4 *)(param_1 + 0xc) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 60));
  *(undefined4 *)(param_1 + 0xc) = GEN_FLT_TO(*(undefined4 *)(param_1 + 0xc), REFG(float, 0x1097250));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2c9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2c9a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  *param_1 = this[4];
  param_1[1] = (undefined1)((byte)this[0x7c] & 1);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x70);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(this + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(this + 0x2c);
  piVar1 = ((int *)GEN_TOP(F_00d1b7a0(*(undefined4 *)(this + 0xc) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xf4))))(piVar1 GEN_EDX_ARG);
  if (uVar2 == 0) {
    F_00d2cb60(param_1 GEN_EDX_ARG,(uint)param_1);
  }
  return (uint)(param_1 + 0x30);
}

/* ref: FUN_00d2ca20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2ca20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd2ca20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ushort * puVar1;
  int * piVar2;
  uint uVar3;
  
  *param_1 = 5;
  param_1[1] = (short)param_2 + 0x10;
  *(undefined4 *)(param_1 + 2) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  piVar2 = ((int *)GEN_TOP(F_00d1b7a0(*((undefined4 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xf4))))(piVar2 GEN_EDX_ARG);
  if (uVar3 == 0) {
    *param_1 = *param_1 << 8 | *param_1 >> 8;
    uVar3 = *(uint *)(param_1 + 2);
    param_1[1] = param_1[1] << 8 | param_1[1] >> 8;
    *(uint *)(param_1 + 2) =
         uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    puVar1 = param_1;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return (uint)(param_1 + 8);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::IListener::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2cac0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2cac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[18])REFP(0x1134784));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00d2cb00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2cb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2cb00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a1;)
  uint uVar1;
  ushort * puVar2;
  
  *param_1 = *(ushort *)((int)(uintptr_t)this) << 8 | *(ushort *)((int)(uintptr_t)this) >> 8;
  param_1[1] = *((ushort *)GEN_TOP(((int)this + 2))) << 8 | *((ushort *)GEN_TOP(((int)this + 2))) >> 8;
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *(uint *)(param_1 + 2) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  puVar2 = param_1;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  return 0;
}

/* ref: FUN_00d2cb60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2cb60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2cb60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x10)));
  *((uint *)GEN_TOP((param_2 + 0x10))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x14)));
  *((uint *)GEN_TOP((param_2 + 0x14))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x18)));
  *((uint *)GEN_TOP((param_2 + 0x18))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x1c)));
  *((uint *)GEN_TOP((param_2 + 0x1c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x20)));
  *((uint *)GEN_TOP((param_2 + 0x20))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x24)));
  *((uint *)GEN_TOP((param_2 + 0x24))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x28)));
  *((uint *)GEN_TOP((param_2 + 0x28))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x2c)));
  *((uint *)GEN_TOP((param_2 + 0x2c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 4)));
  *((uint *)GEN_TOP((param_2 + 4))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((undefined1 *)GEN_TOP((param_2 + 1))) = *((undefined1 *)GEN_TOP((param_1 + 1)));
  *((undefined2 *)GEN_TOP((param_2 + 2))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 8))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 0xc))) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf1 */
GEN_LIB GEN_NOFRAME uint F_00d2cc40(void)
{
  GEN_ENTER(0xd2cc40u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2cc50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2cc50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[18])REFP(0x1134784));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00d2cc80 */
GEN_LIB GEN_FRAME unsigned int F_00d2cc80(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2cc80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00d2cca0 */
GEN_LIB GEN_NOFRAME byte F_00d2cca0(void)
{
  GEN_ENTER(0xd2cca0u, 0u, 0u, 0u, 0u);
  return REFG(undefined1, 0x15d9349);
}

/* ref: FUN_00d2ccc0 */
GEN_LIB GEN_FRAME uint F_00d2ccc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2ccc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x15d938c) = param_1;
  return param_1;
}

/* ref: FUN_00d2ccd0 */
GEN_LIB GEN_NOFRAME uint F_00d2ccd0(void)
{
  GEN_ENTER(0xd2ccd0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d934c);
}

/* ref: FUN_00d2cce0 */
GEN_LIB GEN_NOFRAME uint F_00d2cce0(void)
{
  GEN_ENTER(0xd2cce0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d9350);
}

/* ref: FUN_00d2ccf0 */
GEN_LIB GEN_NOFRAME uint F_00d2ccf0(void)
{
  GEN_ENTER(0xd2ccf0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d9358);
}

/* ref: FUN_00d2cd00 */
GEN_LIB GEN_NOFRAME uint F_00d2cd00(void)
{
  GEN_ENTER(0xd2cd00u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d9354);
}

/* ref: FUN_00d2cd10 */
GEN_LIB GEN_FRAME byte F_00d2cd10(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2cd10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  REFG(undefined1, 0x15d934a) = param_1;
  return param_1;
}

/* ref: FUN_00d2cd50 */
GEN_LIB GEN_FRAME unsigned int F_00d2cd50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2cd50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xd0))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00d2cd90 */
GEN_LIB GEN_FRAME unsigned int F_00d2cd90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2cd90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    if (((char)param_1 != '\0') &&
       (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x124))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG), (int)uVar1 < 8)) {
      return;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xd8))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  if (REFG(int * PTR32, 0x15d9350) != ((int *)GEN_TOP(0x0))) {
    if ((char)param_1 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x38))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,2);
      return;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x38))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,1);
  }
  return;
}

/* ref: FUN_00d2cdf0 */
GEN_LIB GEN_NOFRAME byte F_00d2cdf0(void)
{
  GEN_ENTER(0xd2cdf0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xdc))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG);
    return (byte)uVar1;
  }
  return 0;
}

/* ref: FUN_00d2ce10 */
GEN_LIB GEN_FRAME unsigned int F_00d2ce10(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2ce10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xe0))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00d2cea0 */
GEN_LIB GEN_FRAME unsigned int F_00d2cea0(GEN_P(float param_1, float gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2cea0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (REFG(int * PTR32, 0x15d9358) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9358) + 0xbc))))(REFG(int * PTR32, 0x15d9358) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_1),param_2);
  }
  return;
}

/* ref: FUN_00d2ced0 */
GEN_LIB GEN_FRAME unsigned int F_00d2ced0(GEN_P(float param_1, float gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd2ced0u, gen_trace_f(gen_a0), gen_a1, gen_a2, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (REFG(int * PTR32, 0x15d9358) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9358) + 0xc4))))
              (REFG(int * PTR32, 0x15d9358) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_1),param_2,param_3);
  }
  return;
}

/* ref: FUN_00d2cf00 */
GEN_LIB GEN_FRAME unsigned int F_00d2cf00(GEN_P(float param_1, float gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd2cf00u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  if (REFG(int * PTR32, 0x15d9358) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9358) + 0xc0))))
              (REFG(int * PTR32, 0x15d9358) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_1),(undefined4)gen_fl2bits(param_2),
               (undefined4)gen_fl2bits(param_3),param_4,param_5);
  }
  return;
}

/* ref: FUN_00d2cf40 */
GEN_LIB GEN_FRAME uint F_00d2cf40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2cf40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x15d935c) = param_1;
  return param_1;
}

/* ref: FUN_00d2cf50 */
GEN_LIB GEN_FRAME uint F_00d2cf50(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2cf50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x15d9360) = param_1;
  return param_1;
}

/* ref: FUN_00d2cf60 */
GEN_LIB GEN_FRAME uint F_00d2cf60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2cf60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (REFG(undefined * PTR32, 0x15d935c) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)REFG(gen_code32, 0x15d935c))(param_1,param_2);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00d2cf80 */
GEN_LIB GEN_FRAME uint F_00d2cf80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xd2cf80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  uint uVar1;
  
  if (REFG(undefined * PTR32, 0x15d9360) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)REFG(gen_code32, 0x15d9360))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00d2cff0 */
GEN_LIB GEN_NOFRAME double F_00d2cff0(void)
{
  GEN_ENTER(0xd2cff0u, 0u, 0u, 0u, 0u);
  return (double)*(float *)&REFG(undefined, 0x1134834);
}

/* ref: FUN_00d2d020 */
GEN_LIB GEN_FRAME uint F_00d2d020(void)
{
  GEN_ENTER(0xd2d020u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x50044, 12, 4);
  char cVar1;
  undefined * pFVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x5003c)) = 0xd2d02d;
  (*(uint *)(gen_frame + 0x5003c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  F_00c48350(((char *)(gen_frame + 0x10000)),0,0x3fffc);
  if (REFG(int * PTR32, 0x15d934c) == ((int *)GEN_TOP(0x0))) {
    F_00c4720f(((char *)(gen_frame + 0x10000)),((char *)REFP(0x11349f4)));
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x128))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,((char *)(gen_frame + 0x10000)));
  }
  iVar5 = 0;
  F_00c4720f(((char *)(gen_frame + 0x4fffc)),((char *)REFP(0x1134a0c)),0);
  pFVar2 = F_00c495d8(((char *)(gen_frame + 0x4fffc)),((char *)REFP(0x1134a28)));
  while (pFVar2 != ((undefined *)GEN_TOP(0x0))) {
    F_00c49312(pFVar2);
    iVar5 = iVar5 + 1;
    F_00c4720f(((char *)(gen_frame + 0x4fffc)),((char *)REFP(0x1134a0c)),iVar5);
    pFVar2 = F_00c495d8(((char *)(gen_frame + 0x4fffc)),((char *)REFP(0x1134a28)));
  }
  pFVar2 = F_00c495d8(((char *)(gen_frame + 0x4fffc)),((char *)REFP(0x1134a2c)));
  pcVar3 = ((char *)(gen_frame + 0x10000));
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_00c4922b(((char *)(gen_frame + 0x10000)),1,(int)pcVar3 - (int)(((char *)(gen_frame + 0x10000)) + 1),pFVar2);
  uVar4 = F_00c49312(pFVar2);
  return uVar4;
}

/* ref: FUN_00d2d180 */
GEN_LIB GEN_FRAME uint F_00d2d180(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2d180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  uint extraout_EAX = 0;
  int iVar2;
  ulonglong uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = F_00427d90();
  iVar1 = (int)uVar3;
  iVar2 = param_1;
  if (param_1 < 0) {
    iVar2 = iVar1 - *(int *)&REFG(undefined, 0x15d9368);
  }
  if (REFG(char, 0x15d934a) != '\0') {
    *(int *)&REFG(undefined, 0x15d937c) = iVar2 >> 0x1f;
    *(int *)&REFG(undefined, 0x15d9378) = iVar2;
  }
  if ((REFG(int * PTR32, 0x15d9358) != ((int *)GEN_TOP(0x0))) && (REFG(int * PTR32, 0x15d9350) != ((int *)GEN_TOP(0x0)))) {
    *(ulonglong *)&REFG(undefined, 0x15d9368) = uVar3;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9358) + 4))))(REFG(int * PTR32, 0x15d9358) GEN_EDX_ARG,iVar2);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x84))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,iVar2);
    F_00d1ba20(REFG(int * PTR32, 0x15d9358) GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x88))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG);
    uVar3 = *(ulonglong *)&REFG(undefined, 0x15d9368);
    if (REFG(int * PTR32, 0x15d9354) != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9354) + 0x18))))(REFG(int * PTR32, 0x15d9354) GEN_EDX_ARG,iVar1);
      uVar3 = *(ulonglong *)&REFG(undefined, 0x15d9368);
    }
  }
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    *(ulonglong *)&REFG(undefined, 0x15d9368) = uVar3;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x24))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,iVar2);
    uVar3 = *(ulonglong *)&REFG(undefined, 0x15d9368);
  }
  *(ulonglong *)&REFG(undefined, 0x15d9368) = uVar3;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00d2d250 */
GEN_LIB GEN_NOFRAME unsigned int F_00d2d250(void)
{
  GEN_ENTER(0xd2d250u, 0u, 0u, 0u, 0u);
  ulonglong uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = CONCAT44(*(undefined4 *)&REFG(undefined, 0x15d9374),*(int *)&REFG(undefined, 0x15d9370));
  if (REFG(char, 0x15d934a) != '\0') {
    uVar1 = F_00427d90();
    *(int *)&REFG(undefined, 0x15d9380) = (int)uVar1 - *(int *)&REFG(undefined, 0x15d9370);
    *(int *)&REFG(undefined, 0x15d9384) = *(int *)&REFG(undefined, 0x15d9380) >> 0x1f;
  }
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    *(ulonglong *)&REFG(undefined, 0x15d9370) = uVar1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x28))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG);
    uVar1 = *(ulonglong *)&REFG(undefined, 0x15d9370);
  }
  *(ulonglong *)&REFG(undefined, 0x15d9370) = uVar1;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2d340 */
GEN_LIB GEN_FRAME uint F_00d2d340(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2d340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x10))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2d390 */
GEN_LIB GEN_FRAME uint F_00d2d390(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2d390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xc))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2d3e0 */
GEN_LIB GEN_FRAME uint F_00d2d3e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2d3e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 8))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2d430 */
GEN_LIB GEN_FRAME uint F_00d2d430(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd2d430u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x14))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00d2d480 */
GEN_LIB GEN_FRAME uint F_00d2d480(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd2d480u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  uint uVar1;
  int iVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    iVar2 = param_4;
    if (param_4 == 0) {
      iVar2 = param_3;
    }
    uVar1 = param_5;
    if (param_5 < 2) {
      uVar1 = 2;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x14))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2,param_3,iVar2,uVar1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2d4f0 */
GEN_LIB GEN_FRAME uint F_00d2d4f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd2d4f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x18))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2,param_3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00d2d530 */
GEN_LIB GEN_FRAME byte F_00d2d530(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2d530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (((char)param_2 == '\0') && (REFG(int * PTR32, 0x15d9350) != ((int *)GEN_TOP(0x0)))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xc0))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_1);
    if ((char)uVar1 == '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return 0;
    }
  }
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x1c))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (byte)uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 1;
}

/* ref: FUN_00d2d5b0 */
GEN_LIB GEN_FRAME byte F_00d2d5b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2d5b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if ((REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) && (REFG(int * PTR32, 0x15d9350) != ((int *)GEN_TOP(0x0)))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x20))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
    if ((char)uVar1 != '\0') {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xc0))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_1);
      if ((char)uVar1 != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
        return 1;
      }
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 1;
}

/* ref: FUN_00d2d630 */
GEN_LIB GEN_FRAME uint F_00d2d630(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd2d630u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  code * pcVar1;
  double dVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x3c)));
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
    (*pcVar1)(REFG(int * PTR32, 0x15d934c),((undefined1 *)(gen_frame + 0x10)),param_1,param_2,&(*(undefined4 *)(gen_frame + 0x0)),0,0,1);
    dVar2 = GEN_X87(*(double *)&REFG(undefined, 0x1097260) * 0.0);
    (*(int *)(gen_frame + 0x20)) = (int)dVar2;
    F_00cbddc0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,param_3,(uint)&(*(int *)(gen_frame + 0x20)));
    F_00cbc4e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,param_4);
    (*(int *)(gen_frame + 0x20)) = (int)dVar2;
    F_00cbdf90(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)&(*(int *)(gen_frame + 0x20)),0);
    uVar3 = F_00cbbff0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    F_00cbbdb0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar3;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2d700 */
GEN_LIB_GS GEN_FRAME uint F_00d2d700(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd2d700u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_FRAME_DECL_GS(0x20, 0, 4);
  int iVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),param_4);
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),param_5);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) == ((int *)GEN_TOP(0x0))) {
    F_00cbbd70(param_1 GEN_EDX_ARG);
  }
  else {
    iVar1 = *REFG(int * PTR32, 0x15d934c);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x34))))
              (REFG(int * PTR32, 0x15d934c),param_1,param_2,param_3,&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),0,0,(*(undefined4 *)(gen_frame + 0x0)));
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2d7a0 */
GEN_LIB_GS GEN_FRAME uint F_00d2d7a0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd2d7a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_FRAME_DECL_GS(0x20, 0, 4);
  int iVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),param_3);
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),param_4);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) == ((int *)GEN_TOP(0x0))) {
    F_00cbbd70(param_1 GEN_EDX_ARG);
  }
  else {
    iVar1 = *REFG(int * PTR32, 0x15d934c);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x30))))(REFG(int * PTR32, 0x15d934c),param_1,param_2,&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),0,0,(*(undefined4 *)(gen_frame + 0x0)));
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2d830 */
GEN_LIB GEN_FRAME uint F_00d2d830(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd2d830u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x34))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,0,0,1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cbbd70(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2d8a0 */
GEN_LIB_GS GEN_FRAME uint F_00d2d8a0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd2d8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  GEN_FRAME_DECL_GS(0x24, 12, 4);
  int iVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20));
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),param_6);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) == ((int *)GEN_TOP(0x0))) {
    F_00cbbd70(param_1 GEN_EDX_ARG);
  }
  else {
    iVar1 = *REFG(int * PTR32, 0x15d934c);
    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x34))))
              (REFG(int * PTR32, 0x15d934c),param_1,param_2,param_3,&(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x0)),param_4,param_5,1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2d940 */
GEN_LIB_GS GEN_FRAME uint F_00d2d940(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd2d940u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_FRAME_DECL_GS(0x1c, 4, 4);
  int iVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x14)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18));
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),param_5);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) == ((int *)GEN_TOP(0x0))) {
    F_00cbbd70(param_1 GEN_EDX_ARG);
  }
  else {
    iVar1 = *REFG(int * PTR32, 0x15d934c);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x30))))(REFG(int * PTR32, 0x15d934c),param_1,param_2,&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),param_3,param_4,1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2d9e0 */
GEN_LIB GEN_FRAME byte F_00d2d9e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd2d9e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x6c))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2,param_3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (byte)uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2da30 */
GEN_LIB GEN_FRAME unsigned int F_00d2da30(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2da30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  undefined4 local_10;
  ushort uStack_c;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d9350) != ((int *)GEN_TOP(0x0))) {
    uStack_c = gen_x87_cw | 0xc00;
    gen_set_x87_cw((unsigned short)uStack_c);
    local_10 = (undefined4)
               (longlong)
               TRUNC((double)(float)((float10)*param_1 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                     *(double *)&REFG(undefined, 0x10912a8));
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xb4))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,local_10);
  }
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    uStack_c = gen_x87_cw | 0xc00;
    gen_set_x87_cw((unsigned short)uStack_c);
    local_10 = (undefined4)
               (longlong)
               TRUNC((double)(float)((float10)*param_1 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                     *(double *)&REFG(undefined, 0x10912a8));
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x70))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,local_10);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2dae0 */
GEN_LIB GEN_FRAME unsigned int F_00d2dae0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2dae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d9350) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xb4))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_1);
  }
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x70))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2db30 */
GEN_LIB GEN_NOFRAME byte F_00d2db30(void)
{
  GEN_ENTER(0xd2db30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x74))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (byte)uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 1;
}

/* ref: FUN_00d2db70 */
GEN_LIB GEN_FRAME unsigned int F_00d2db70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2db70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  undefined4 local_10;
  ushort uStack_c;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d9350) != ((int *)GEN_TOP(0x0))) {
    uStack_c = gen_x87_cw | 0xc00;
    gen_set_x87_cw((unsigned short)uStack_c);
    local_10 = (undefined4)
               (longlong)
               TRUNC((double)(float)((float10)*param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                     *(double *)&REFG(undefined, 0x10912a8));
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xbc))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_1,local_10);
  }
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    uStack_c = gen_x87_cw | 0xc00;
    gen_set_x87_cw((unsigned short)uStack_c);
    local_10 = (undefined4)
               (longlong)
               TRUNC((double)(float)((float10)*param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                     *(double *)&REFG(undefined, 0x10912a8));
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x78))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,local_10);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2dc30 */
GEN_LIB GEN_FRAME unsigned int F_00d2dc30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2dc30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xbc))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_1,param_2);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x78))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2dc80 */
GEN_LIB GEN_FRAME unsigned int F_00d2dc80(GEN_P(float param_1, float gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2dc80u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  undefined4 local_10;
  ushort uStack_c;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    uStack_c = gen_x87_cw | 0xc00;
    gen_set_x87_cw((unsigned short)uStack_c);
    local_10 = (undefined4)
               (longlong)
               TRUNC((double)(float)((float10)*param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                     *(double *)&REFG(undefined, 0x10912a8));
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x7c))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_1),local_10);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2dcf0 */
GEN_LIB GEN_FRAME uint F_00d2dcf0(GEN_P(float param_1, float gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2dcf0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint extraout_EAX = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x7c))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_1),param_2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00d2dd30 */
GEN_LIB GEN_FRAME uint F_00d2dd30(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2dd30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x40))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cbbd70(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2dd80 */
GEN_LIB GEN_FRAME uint F_00d2dd80(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2dd80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x48))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cbe380(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2ddd0 */
GEN_LIB GEN_FRAME uint F_00d2ddd0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2ddd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x4c))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cbaed0(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2de20 */
GEN_LIB GEN_FRAME uint F_00d2de20(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2de20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x50))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cbb8a0(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2de70 */
GEN_LIB GEN_FRAME uint F_00d2de70(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2de70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x54))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cc6a90(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2dec0 */
GEN_LIB GEN_FRAME uint F_00d2dec0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2dec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x58))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cc6a90(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2df10 */
GEN_LIB GEN_FRAME uint F_00d2df10(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2df10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x5c))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cc6a90(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2df60 */
GEN_LIB GEN_FRAME uint F_00d2df60(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2df60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x60))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cc6a90(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2dfb0 */
GEN_LIB GEN_FRAME uint F_00d2dfb0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2dfb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 100))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cc6a90(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2e000 */
GEN_LIB GEN_FRAME uint F_00d2e000(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd2e000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x68))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2,param_3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cc6a90(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2e060 */
GEN_LIB GEN_FRAME unsigned int F_00d2e060(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2e060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x94))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e0a0 */
GEN_LIB GEN_FRAME unsigned int F_00d2e0a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2e0a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x98))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e0e0 */
GEN_LIB GEN_FRAME unsigned int F_00d2e0e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2e0e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x9c))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e120 */
GEN_LIB GEN_FRAME uint F_00d2e120(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2e120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xac))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2e170 */
GEN_LIB GEN_FRAME uint F_00d2e170(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2e170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xb0))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2e1c0 */
GEN_LIB GEN_FRAME uint F_00d2e1c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd2e1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if ((REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) && (param_1 != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xb4))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2,param_3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2e220 */
GEN_LIB GEN_FRAME unsigned int F_00d2e220(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2e220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 200))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e2a0 */
GEN_LIB GEN_FRAME unsigned int F_00d2e2a0(GEN_P(float param_1, float gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2e2a0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xf0))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_1),param_2);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e2e0 */
GEN_LIB GEN_FRAME float F_00d2e2e0(void)
{
  GEN_ENTER(0xd2e2e0u, 0u, 0u, 0u, 0u);
  float10 extraout_ST0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xf4))))(REFG(int * PTR32, 0x15d934c));
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (float)extraout_ST0;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return REFG(float, 0x1097250);
}

/* ref: FUN_00d2e330 */
GEN_LIB GEN_FRAME unsigned int F_00d2e330(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2e330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xf8))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e370 */
GEN_LIB GEN_FRAME unsigned int F_00d2e370(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2e370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xe8))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e3f0 */
GEN_LIB GEN_FRAME uint F_00d2e3f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2e3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x84))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2e4c0 */
GEN_LIB GEN_FRAME unsigned int F_00d2e4c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2e4c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  REFG(undefined4, 0x1350728) = param_1;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e4f0 */
GEN_LIB GEN_NOFRAME uint F_00d2e4f0(void)
{
  GEN_ENTER(0xd2e4f0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = REFG(undefined4, 0x1350728);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00d2e560 */
GEN_LIB GEN_FRAME unsigned int F_00d2e560(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2e560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x108))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e5a0 */
GEN_LIB GEN_NOFRAME uint F_00d2e5a0(void)
{
  GEN_ENTER(0xd2e5a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x10c))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 1;
}

/* ref: FUN_00d2e5f0 */
GEN_LIB GEN_FRAME uint F_00d2e5f0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2e5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ushort uVar1;
  ushort uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*param_1 == 0x42444553) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((*((ushort *)GEN_TOP(((int)param_1 + 0xe))) + 0x20 + param_2 * 4 + (int)param_1))) + 0xc +
             (int)param_1)));
    uVar2 = *((ushort *)GEN_TOP((*((ushort *)GEN_TOP(((int)param_1 + 0xe))) + 6 + (int)param_1)));
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (uint)uVar1 + (uint)uVar2 * 1000;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0xffffffff;
}

/* ref: FUN_00d2e650 */
GEN_LIB GEN_FRAME uint F_00d2e650(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2e650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  ushort uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*param_1 == 0x42444553) {
    uVar1 = *((ushort *)GEN_TOP(((uint)*((ushort *)GEN_TOP(((int)param_1 + 0xe))) + (int)param_1)));
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (uint)uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0xffffffff;
}

/* ref: FUN_00d2e6a0 */
GEN_LIB GEN_FRAME unsigned int F_00d2e6a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2e6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xc0))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e6e0 */
GEN_LIB GEN_FRAME byte F_00d2e6e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2e6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xc4))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (byte)uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2e740 */
GEN_LIB GEN_NOFRAME uint F_00d2e740(void)
{
  GEN_ENTER(0xd2e740u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00d2d180(0xffffffff);
  return uVar1;
}

/* ref: FUN_00d2e750 */
GEN_LIB GEN_NOFRAME unsigned int F_00d2e750(void)
{
  GEN_ENTER(0xd2e750u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  
  puVar1 = REFG(undefined4 * PTR32, 0x15d9398);
  if (REFG(char, 0x15d9394) != '\0') {
    if (REFG(undefined4 * PTR32, 0x15d9398)[10] != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined4 * PTR32, 0x15d9398)[4] + 4))))(REFG(undefined4 * PTR32, 0x15d9398) + 4);
      *(undefined1 *)(puVar1 + 0x10) = 1;
      ((code *)*((gen_code32 *)GEN_TOP((puVar1[4] + 4))))(puVar1 + 4);
      F_004cf020(puVar1 + 4 GEN_EDX_ARG);
      puVar1[10] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined1 *)(puVar1 + 0x10) = 0;
    }
    puVar1 = REFG(undefined4 * PTR32, 0x15d9398);
    if (REFG(undefined4 * PTR32, 0x15d9398) != ((undefined4 *)GEN_TOP(0x0))) {
      if (REFG(undefined4 * PTR32, 0x15d9398)[10] != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined4 * PTR32, 0x15d9398)[4] + 4))))(REFG(undefined4 * PTR32, 0x15d9398) + 4);
        *(undefined1 *)(puVar1 + 0x10) = 1;
        ((code *)*((gen_code32 *)GEN_TOP((puVar1[4] + 4))))(puVar1 + 4);
        F_004cf020(puVar1 + 4 GEN_EDX_ARG);
        puVar1[10] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *(undefined1 *)(puVar1 + 0x10) = 0;
      }
      puVar1[4] = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
      F_004cf880(puVar1 + 4 GEN_EDX_ARG);
      F_00406ad0(puVar1);
    }
    REFG(undefined4 * PTR32, 0x15d9398) = ((undefined4 *)GEN_TOP(0x0));
    REFG(char, 0x15d9394) = '\0';
  }
  return;
}

/* ref: FUN_00d2e810 */
GEN_LIB GEN_FRAME float F_00d2e810(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2e810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  float fVar2;
  
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  uVar1 = F_00cbced0(param_1 GEN_EDX_ARG);
  if (uVar1 != 0) {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
    if (REFG(int * PTR32, 0x15d934c) == ((int *)GEN_TOP(0x0))) {
      F_00cbe380(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x48))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar1);
    }
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
    fVar2 = F_00cbeb40(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    (*(float *)(gen_frame + 0xc)) = fVar2;
    F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
    return (*(float *)(gen_frame + 0xc));
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return REFG(float, 0x1090708);
}

/* ref: FUN_00d2e8a0 */
GEN_LIB_GS GEN_FRAME uint F_00d2e8a0(void)
{
  GEN_ENTER(0xd2e8a0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  int * piVar1;
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if ((REFG(int * PTR32, 0x15d9358) != ((int *)GEN_TOP(0x0))) && (REFG(undefined4, 0x15d9364) == 0)) {
    REFG(undefined4, 0x15d9364) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9358) + 8))))(REFG(int * PTR32, 0x15d9358) GEN_EDX_ARG,2,0xffffffff);
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9358) + 0x14))))(REFG(int * PTR32, 0x15d9358) GEN_EDX_ARG,REFG(undefined4, 0x15d9364))));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      F_004ec420(((undefined1 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG,100);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,1);
    }
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00d2e940 */
GEN_LIB GEN_FRAME unsigned int F_00d2e940(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2e940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int * piVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if ((REFG(int * PTR32, 0x15d9358) != ((int *)GEN_TOP(0x0))) && (REFG(int, 0x15d9364) != 0)) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9358) + 0x14))))(REFG(int * PTR32, 0x15d9358) GEN_EDX_ARG,REFG(int, 0x15d9364))));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      if (param_2 != '\0') {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG,param_1);
        return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG,param_1);
    }
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e9b0 */
GEN_LIB GEN_FRAME uint F_00d2e9b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2e9b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = param_1;
  if (param_1 < 0) {
    iVar1 = REFG(int, 0x1350724);
    REFG(int, 0x1350724) = REFG(int, 0x1350724) + 1;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x9c))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,iVar1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00d2ea00 */
GEN_LIB GEN_FRAME unsigned int F_00d2ea00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2ea00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xa8))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_1);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2ea30 */
GEN_LIB GEN_FRAME unsigned int F_00d2ea30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2ea30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined * this;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xa0))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_1)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    F_00d05170(this GEN_EDX_ARG,(uint)param_2,0xffffffff);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2ea80 */
GEN_LIB GEN_FRAME uint F_00d2ea80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd2ea80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  undefined * this;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xa0))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_1)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d07c70(this GEN_EDX_ARG,param_2,param_3,0,0,0,1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_3;
}

/* ref: FUN_00d2eaf0 */
GEN_LIB GEN_FRAME uint F_00d2eaf0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2eaf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  uint extraout_EAX = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xa0))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_1);
  if (uVar1 != 0) {
    F_00d055c0(uVar1 GEN_EDX_ARG,param_2,1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00d2eb30 */
GEN_LIB GEN_FRAME unsigned int F_00d2eb30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd2eb30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined * this;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (param_1 < 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x7c))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_2,param_3);
    return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
  }
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xa0))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_1)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    F_00d07430(this GEN_EDX_ARG,param_2,param_3);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2eba0 */
GEN_LIB GEN_FRAME uint F_00d2eba0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2eba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xa4))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2ebf0 */
GEN_LIB GEN_FRAME unsigned int F_00d2ebf0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2ebf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc42f0(param_1);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2ec20 */
GEN_LIB GEN_FRAME uint F_00d2ec20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2ec20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc2770(param_1,param_2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00d2ec60 */
GEN_LIB GEN_FRAME byte F_00d2ec60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2ec60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc58a0(param_1,param_2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00d2eca0 */
GEN_LIB_GS GEN_FRAME uint F_00d2eca0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd2eca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x1134a50)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x1134a30)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00d2ed40 */
GEN_LIB GEN_FRAME unsigned int F_00d2ed40(void)
{
  GEN_ENTER(0xd2ed40u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x98))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,0);
  }
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  (*(int *)(gen_frame + 0x0)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  F_00d2da30(&(*(int *)(gen_frame + 0x0)));
  F_00ce3b10(0);
  return (uint)(gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2edb0 */
GEN_LIB_GS GEN_FRAME float10 F_00d2edb0(GEN_P(float param_1, float gen_a0), GEN_P(char param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd2edb0u, gen_trace_f(gen_a0), gen_a1, gen_a2, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_FRAME_DECL_GS(0x34, 12, 4);
  int iVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30));
  fVar5 = (float10)REFG(float, 0x1097250);
  if (fVar5 <= (float10)param_1) {
    return fVar5;
  }
  fVar6 = (float10)*(float *)&REFG(undefined, 0x1097254);
  if ((float10)param_1 <= fVar6) {
    return fVar6;
  }
  uVar4 = param_3;
  if (param_3 == 0) {
    uVar4 = F_00d2e5a0();
    fVar6 = (float10)*(float *)&REFG(undefined, 0x1097254);
    fVar5 = (float10)REFG(float, 0x1097250);
  }
  fVar7 = (float10)param_1;
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 1: ;
    return GEN_X87((float10)(float)(fVar7 * fVar7));
  case 2: ;
switchD_00d2ee31_caseD_2: ;
    ((float *)(gen_frame + 0x0))[0] = (float)fVar5;
    ((float *)(gen_frame + 0x0))[1] = gen_bits2f(*(undefined4 *)&REFG(undefined, 0x1134a70));
    ((float *)(gen_frame + 0x0))[2] = gen_bits2f(REFG(float, 0x10ac168));
    ((float *)(gen_frame + 0x0))[3] = gen_bits2f(REFG(float, 0x1094808));
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)&REFG(undefined, 0x1134a6c);
    (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094884)));
    (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10add7c)));
    (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b2cbc)));
    (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10add80)));
    (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x110e278)));
    (*(float *)(gen_frame + 0x28)) = (float)fVar6;
    iVar2 = (int)(fVar7 * (float10)REFG(double, 0x10944b8));
    iVar3 = -iVar2;
    return GEN_X87((float10)((float)GEN_TOF((((float10)((float *)(gen_frame + 0x0))[(int)(iVar3 + 9)] - (float10)((float *)(gen_frame + 0x0))[(int)(iVar3 + 10)]) *
                            (fVar7 * (float10)REFG(double, 0x10944b8) - (float10)iVar2) +
                           (float10)((float *)(gen_frame + 0x0))[(int)(iVar3 + 10)]))));
  case 4: ;
    fVar5 = ((float10)GEN_TOD(GEN_X87MATH(fVar7,3)));
    fVar5 = ((float10)GEN_TOD(pow((float10)REFG(double, 0x10944b8),
                                 (float10)((float)GEN_TOF(((float10)(float)((float10)(float)fVar5 *
                                                                  (float10)*(double *)&REFG(undefined, 0x1134a78))
                                                 / (float10)*(double *)&REFG(undefined, 0x1088120)))))));
    return (float10)(float)fVar5;
  case 5: ;
    if (param_2 != '\0') goto switchD_00d2ee31_caseD_2;
  default: ;
    break;
  case 6: ;
    if (param_2 == '\0') {
      return GEN_X87((float10)((float)GEN_TOF(((fVar7 + fVar7) - fVar7 * fVar7))));
    }
  }
  return fVar7;
}

/* ref: FUN_00d2efa0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d2efa0(void)
{
  GEN_ENTER(0xd2efa0u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  
  puVar1 = REFG(undefined4 * PTR32, 0x15d9390);
  if (REFG(char, 0x15d934b) != '\0') {
    if (REFG(undefined4 * PTR32, 0x15d9390)[10] != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined4 * PTR32, 0x15d9390)[4] + 4))))(REFG(undefined4 * PTR32, 0x15d9390) + 4);
      *(undefined1 *)(puVar1 + 0x10) = 1;
      ((code *)*((gen_code32 *)GEN_TOP((puVar1[4] + 4))))(puVar1 + 4);
      F_004cf020(puVar1 + 4 GEN_EDX_ARG);
      puVar1[10] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined1 *)(puVar1 + 0x10) = 0;
    }
    puVar1 = REFG(undefined4 * PTR32, 0x15d9390);
    if (REFG(undefined4 * PTR32, 0x15d9390) != ((undefined4 *)GEN_TOP(0x0))) {
      if (REFG(undefined4 * PTR32, 0x15d9390)[10] != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined4 * PTR32, 0x15d9390)[4] + 4))))(REFG(undefined4 * PTR32, 0x15d9390) + 4);
        *(undefined1 *)(puVar1 + 0x10) = 1;
        ((code *)*((gen_code32 *)GEN_TOP((puVar1[4] + 4))))(puVar1 + 4);
        F_004cf020(puVar1 + 4 GEN_EDX_ARG);
        puVar1[10] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *(undefined1 *)(puVar1 + 0x10) = 0;
      }
      puVar1[4] = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
      F_004cf880(puVar1 + 4 GEN_EDX_ARG);
      F_00406ad0(puVar1);
    }
    REFG(undefined4 * PTR32, 0x15d9390) = ((undefined4 *)GEN_TOP(0x0));
    REFG(char, 0x15d934b) = '\0';
  }
  return;
}

/* ref: FUN_00d2f060 */
GEN_LIB GEN_FRAME uint F_00d2f060(GEN_P(char param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2f060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  uint uVar1;
  
  F_00d2e750();
  F_00d2efa0();
  if (param_1 != '\0') {
    uVar1 = F_00ce3530();
    return uVar1;
  }
  if (REFG(undefined4 * PTR32, 0x15d9358) != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d9358))))(REFG(undefined4 * PTR32, 0x15d9358) GEN_EDX_ARG,1);
    REFG(undefined4 * PTR32, 0x15d9358) = ((undefined4 *)GEN_TOP(0x0));
    REFG(undefined4, 0x15d9364) = 0;
  }
  if (REFG(undefined4 * PTR32, 0x15d9354) != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d9354))))(REFG(undefined4 * PTR32, 0x15d9354) GEN_EDX_ARG,1);
    REFG(undefined4 * PTR32, 0x15d9354) = ((undefined4 *)GEN_TOP(0x0));
  }
  if (REFG(undefined4 * PTR32, 0x15d9350) != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d9350))))(REFG(undefined4 * PTR32, 0x15d9350) GEN_EDX_ARG,1);
    REFG(undefined4 * PTR32, 0x15d9350) = ((undefined4 *)GEN_TOP(0x0));
  }
  if (REFG(undefined4 * PTR32, 0x15d934c) != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d934c))))(REFG(undefined4 * PTR32, 0x15d934c) GEN_EDX_ARG,1);
    REFG(undefined4 * PTR32, 0x15d934c) = ((undefined4 *)GEN_TOP(0x0));
  }
  F_00ccbb70();
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG);
  }
  uVar1 = F_00cca6f0(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG);
  if (REFG(int, 0x15d9388) != 0) {
    REFG(int, 0x15d9388) = 0;
  }
  return uVar1;
}

/* ref: FUN_00d2f120 */
GEN_LIB GEN_NOFRAME uint F_00d2f120(void)
{
  GEN_ENTER(0xd2f120u, 0u, 0u, 0u, 0u);
  uint uVar1;
  ulonglong uVar2;
  
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x98))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,0);
  }
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d9350) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xb4))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,0);
  }
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x70))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,0);
  }
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  F_00ce3b10(0);
  F_00d2e750();
  F_00d2efa0();
  while( true ) {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
    if (REFG(int * PTR32, 0x15d934c) == ((int *)GEN_TOP(0x0))) break;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x74))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG);
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
    if ((char)uVar1 != '\0') goto LAB_00d2f270;
    F_00d2d180(0xffffffff);
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
    uVar2 = *(ulonglong *)&REFG(undefined, 0x15d9370);
    if (REFG(char, 0x15d934a) != '\0') {
      uVar2 = F_00427d90();
      *(int *)&REFG(undefined, 0x15d9380) = (int)uVar2 - *(int *)&REFG(undefined, 0x15d9370);
      *(int *)&REFG(undefined, 0x15d9384) = *(int *)&REFG(undefined, 0x15d9380) >> 0x1f;
    }
    if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
      *(ulonglong *)&REFG(undefined, 0x15d9370) = uVar2;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x28))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG);
      uVar2 = *(ulonglong *)&REFG(undefined, 0x15d9370);
    }
    *(ulonglong *)&REFG(undefined, 0x15d9370) = uVar2;
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
    if (REFG(int * PTR32, 0x15d9350) != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xb4))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,0);
    }
    if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x70))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,0);
    }
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
    F_004cee60(1);
  }
  gen_imp_LeaveCriticalSection(0,&REFG(undefined, 0x15d939c));
LAB_00d2f270: ;
  uVar1 = F_00d2f060(0);
  return uVar1;
}

/* ref: FUN_00d2f280 */
GEN_LIB GEN_FRAME unsigned int F_00d2f280(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2f280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (REFG(char, 0x15d934b) == '\0') {
    piVar1 = ((int *)GEN_TOP(F_004042b0()));
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,0x48,0)));
    if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar2 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      F_004cefe0(puVar2 + 4 GEN_EDX_ARG);
      puVar2[10] = 0;
      puVar2[4] = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      *(undefined1 *)(puVar2 + 0x10) = 0;
    }
    *puVar2 = param_1;
    puVar2[2] = 0;
    puVar2[1] = ((code *)REFP(0xd2d250));
    puVar2[0xc] = ((code *)REFP(0xd2fb80));
    puVar2[0xd] = puVar2;
    puVar2[0xe] = ((code *)REFP(0xd2fae0));
    REFG(undefined4 * PTR32, 0x15d9390) = puVar2;
    puVar2[0xf] = 0;
    uVar3 = F_004cf9e0(puVar2 + 4 GEN_EDX_ARG,0,-(uint)(param_2 != 0xffff) & param_2,0x10000,
                         ((char *)REFP(0x1134994)));
    puVar2[10] = uVar3;
    REFG(char, 0x15d934b) = '\x01';
  }
  return;
}

/* ref: FUN_00d2f350 */
GEN_LIB GEN_FRAME unsigned int F_00d2f350(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2f350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (REFG(char, 0x15d9394) == '\0') {
    piVar1 = ((int *)GEN_TOP(F_004042b0()));
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,0x48,0)));
    if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar2 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      F_004cefe0(puVar2 + 4 GEN_EDX_ARG);
      puVar2[10] = 0;
      puVar2[4] = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      *(undefined1 *)(puVar2 + 0x10) = 0;
    }
    *puVar2 = param_1;
    puVar2[2] = 0;
    puVar2[1] = ((code *)REFP(0xd2e740));
    puVar2[0xc] = ((code *)REFP(0xd2fb80));
    puVar2[0xd] = puVar2;
    puVar2[0xe] = ((code *)REFP(0xd2fae0));
    REFG(undefined4 * PTR32, 0x15d9398) = puVar2;
    puVar2[0xf] = 0;
    uVar3 = F_004cf9e0(puVar2 + 4 GEN_EDX_ARG,0,-(uint)(param_2 != 0xffff) & param_2,0x10000,
                         ((char *)REFP(0x11349c4)));
    puVar2[10] = uVar3;
    REFG(char, 0x15d9394) = '\x01';
  }
  return;
}

/* ref: FUN_00d2f420 */
GEN_LIB GEN_FRAME uint F_00d2f420(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2f420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  byte bVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  
  if (0x20 < *((int *)GEN_TOP((param_1 + 0x38))) + 1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xd2eca0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x11348b8),&REFG(undefined, 0x11348b0),((char *)REFP(0x11348a0)),0x144,
                    ((char *)REFP(0x1134870)));
  }
  if (REFG(int * PTR32, 0x15d934c) == ((int *)GEN_TOP(0x0))) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
    }
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x50,"CDev.Engine.Sd.SoundSystem",0,0,0x10)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      REFG(int * PTR32, 0x15d934c) = ((int *)GEN_TOP(0x0));
    }
    else {
      REFG(int * PTR32, 0x15d934c) = ((int *)GEN_TOP(F_01054f70(pvVar2 GEN_EDX_ARG,param_1)));
    }
    *(ulonglong *)&REFG(undefined, 0x15d9368) = F_00427d90();
  }
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
  }
  if (REFG(char, 0x15d7798) == '\0') {
    uVar3 = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  }
  else {
    uVar3 = REFG(undefined4, 0x15d8614);
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
      uVar3 = REFG(undefined4, 0x15d8614);
    }
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x108))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,uVar3);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d9350) == ((int *)GEN_TOP(0x0))) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
    }
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x328,"CDev.Engine.Sd.SoundSystem",0,0,0x10)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      REFG(int * PTR32, 0x15d9350) = ((int *)GEN_TOP(0x0));
    }
    else {
      REFG(int * PTR32, 0x15d9350) = ((int *)GEN_TOP(F_00d02ee0(pvVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x20))),
                                         *((undefined4 *)GEN_TOP((param_1 + 0x24))),
                                         *((undefined4 *)GEN_TOP((param_1 + 0x28))))));
    }
  }
  if (REFG(int * PTR32, 0x15d9354) == ((int *)GEN_TOP(0x0))) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
    }
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x3c,"CDev.Engine.Sd.SoundSystem",0,0,0x10)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      REFG(int * PTR32, 0x15d9354) = ((int *)GEN_TOP(0x0));
    }
    else {
      REFG(int * PTR32, 0x15d9354) = ((int *)GEN_TOP(F_01056680(pvVar2 GEN_EDX_ARG)));
    }
  }
  if (REFG(int * PTR32, 0x15d9358) == ((int *)GEN_TOP(0x0))) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
    }
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x3b4,"CDev.Engine.Sd.SoundSystem",0,0,0x10)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      REFG(int * PTR32, 0x15d9358) = ((int *)GEN_TOP(0x0));
    }
    else {
      REFG(int * PTR32, 0x15d9358) = ((int *)GEN_TOP(F_00d1e280(pvVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x2c))))));
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x8c))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,REFG(int * PTR32, 0x15d934c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x94))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,REFG(int * PTR32, 0x15d9358));
  F_00d1b7b0(REFG(int * PTR32, 0x15d9358) GEN_EDX_ARG,REFG(int * PTR32, 0x15d9350));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 4))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9354) + 8))))(REFG(int * PTR32, 0x15d9354) GEN_EDX_ARG,REFG(int * PTR32, 0x15d9358));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9354) + 4))))(REFG(int * PTR32, 0x15d9354) GEN_EDX_ARG,REFG(int * PTR32, 0x15d934c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x1c))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,2);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9358) + 0x6c))))(REFG(int * PTR32, 0x15d9358) GEN_EDX_ARG,2);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x28))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x38))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x34))));
  bVar1 = *((byte *)GEN_TOP((param_1 + 0x1bd)));
  F_00d00980(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,bVar1);
  *(undefined4 *)&REFG(undefined, 0x135071c) = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
  *(undefined4 *)&REFG(undefined, 0x1350720) = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
  return (uint)bVar1;
}

/* ref: FUN_00d2f740 */
GEN_LIB_GS GEN_FRAME uint F_00d2f740(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2f740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x1cc, 4, 4);
  byte bVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1c4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c8));
  F_00ccff00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2);
  bVar1 = F_00ccbd20(((undefined1 *)(gen_frame + 0x0)));
  if (bVar1 == 1) {
    uVar2 = F_00d2f420(((undefined1 *)(gen_frame + 0x0)));
  }
  else {
    uVar2 = F_00d2f420(((undefined1 *)(gen_frame + 0x0)));
    REFG(undefined1, 0x15d8bd9) = 1;
    REFG(undefined1, 0x15d9349) = 1;
  }
  F_00ccf610(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00d2f7c0 */
GEN_LIB GEN_FRAME byte F_00d2f7c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2f7c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d2f740(param_1,param_2);
  REFG(undefined1, 0x15d8bd9) = 1;
  REFG(undefined1, 0x15d9349) = 1;
  return 1;
}

/* ref: FUN_00d2f7f0 */
GEN_LIB_GS GEN_FRAME uint F_00d2f7f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2f7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x1cc, 4, 4);
  byte bVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1c4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c8));
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG);
  }
  uVar2 = F_00cca6d0(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG,param_1);
  if (uVar2 != 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG);
    }
    F_00cca900(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG);
  }
  if (param_2 != 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG);
    }
    uVar2 = F_00cca910(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG,param_2);
    if (uVar2 != 0) {
      if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
        F_00ccaf80(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG);
      }
      F_00cca790(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG);
    }
  }
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG);
  }
  REFG(undefined1, 0x15d7798) = 1;
  F_00ccff00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  bVar1 = F_00ccbd20(((undefined1 *)(gen_frame + 0x0)));
  if (bVar1 == 1) {
    uVar2 = F_00d2f420(((undefined1 *)(gen_frame + 0x0)));
  }
  else {
    uVar2 = F_00d2f420(((undefined1 *)(gen_frame + 0x0)));
    REFG(undefined1, 0x15d8bd9) = 1;
    REFG(undefined1, 0x15d9349) = 1;
  }
  F_00ccf610(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00d2f930 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d2f930(GEN_P(byte * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2f930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte * in_ecx = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d2fa60 */
GEN_LIB GEN_FRAME uint F_00d2fa60(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2fa60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_004042b0()));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,param_1,0);
  return uVar2;
}

/* ref: FUN_00d2fa80 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d2fa80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2fa80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((int *)GEN_TOP(((int)this + 0x28))) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))))((int)this + 0x10);
    *((undefined1 *)GEN_TOP(((int)this + 0x40))) = 1;
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))))((int)this + 0x10);
    F_004cf020(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x40))) = 0;
  }
  return;
}

/* ref: FUN_00d2fac0 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00d2fac0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd2fac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  return (uint)(gen_imp_SetEvent((HANDLE)*param_3));
}

/* ref: FUN_00d2fae0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d2fae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2fae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  char cVar1;
  HANDLE pvVar2;
  uint MVar3;
  
  pvVar2 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
  (*(HANDLE *)(gen_frame + 0xc)) = pvVar2;
  gen_imp_timeGetDevCaps(&(*(undefined8 *)(gen_frame + 0x0)),8);
  gen_imp_timeBeginPeriod((*(UINT *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))));
  MVar3 = gen_imp_timeSetEvent(*(UINT *)this,0,((code *)REFP(0xd2fac0)),(DWORD_PTR)&(*(HANDLE *)(gen_frame + 0xc)),1);
  (*(UINT *)(gen_frame + 0x8)) = MVar3;
  cVar1 = *((char *)GEN_TOP(((int)this + 0x40)));
  while (cVar1 == '\0') {
    gen_imp_WaitForSingleObject((*(HANDLE *)(gen_frame + 0xc)),0xffffffff);
    ((code *)*((gen_code32 *)GEN_TOP(((int)this + 4))))(*((undefined4 *)GEN_TOP(((int)this + 8))));
    cVar1 = *((char *)GEN_TOP(((int)this + 0x40)));
  }
  gen_imp_timeKillEvent((*(UINT *)(gen_frame + 0x8)));
  gen_imp_timeEndPeriod((*(UINT *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))));
  return (uint)(gen_imp_CloseHandle((*(HANDLE *)(gen_frame + 0xc))));
}

/* ref: FUN_00d2fb80 */
GEN_LIB GEN_FRAME uint F_00d2fb80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xd2fb80u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00d2fb90 */
GEN_LIB GEN_FRAME uint F_00d2fb90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd2fb90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(undefined4, 0x15d778c) = F_004042b0();
  }
  if (param_1 != 0) {
    REFG(undefined4, 0x15d778c) = param_1;
  }
  return param_1;
}

/* ref: FUN_00d2fbc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d2fbc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2fbc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  F_004cefe0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x40))) = 0;
  return (uint)this;
}

/* ref: FUN_00d2fc00 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d2fc00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2fc00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((int *)GEN_TOP(((int)this + 0x28))) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))))((int)this + 0x10);
    *((undefined1 *)GEN_TOP(((int)this + 0x40))) = 1;
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))))((int)this + 0x10);
    F_004cf020(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x40))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
  F_004cf880(((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00d2fc50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2fc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd2fc50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xd2fb80));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00d2fc70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2fc70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2fc70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (param_1[10] != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((param_1[4] + 4))))(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 1;
    ((code *)*((gen_code32 *)GEN_TOP((param_1[4] + 4))))(param_1 + 4);
    F_004cf020(param_1 + 4 GEN_EDX_ARG);
    param_1[10] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  param_1[4] = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
  F_004cf880(param_1 + 4 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00d2fce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2fce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd2fce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  char * pcVar1;
  uint uVar2;
  
  *((gen_code32 *)GEN_TOP(((int)this + 0x20))) = ((code *)REFP(0xd2fb80));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  pcVar1 = ((char *)GEN_TOP(*param_3));
  if (pcVar1 == ((char *)GEN_TOP(0x0))) {
    pcVar1 = ((char *)REFP(0x112f6a0));
  }
  uVar2 = F_004cf9e0(this GEN_EDX_ARG,0,param_3[2],param_3[1],pcVar1);
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar2;
  return uVar2;
}

/* ref: FUN_00d2fd30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2fd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd2fd30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  char * pcVar1;
  uint uVar2;
  
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((gen_code32 *)GEN_TOP(((int)this + 0x30))) = ((code *)REFP(0xd2fb80));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x34))) = this;
  *((gen_code32 *)GEN_TOP(((int)this + 0x38))) = ((code *)REFP(0xd2fae0));
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  pcVar1 = ((char *)GEN_TOP(*param_4));
  if (pcVar1 == ((char *)GEN_TOP(0x0))) {
    pcVar1 = ((char *)REFP(0x112f6a0));
  }
  uVar2 = F_004cf9e0((int)this + 0x10 GEN_EDX_ARG,0,param_4[2],param_4[1],pcVar1);
  *((uint *)GEN_TOP(((int)this + 0x28))) = uVar2;
  return uVar2;
}

/* ref: FUN_00d2fda0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2fda0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2fda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0xc))) + param_2;
}

/* ref: FUN_00d2fdb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2fdb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2fdb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = param_2;
  return param_2;
}

/* ref: FUN_00d2fdd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2fdd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2fdd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  *((undefined4 *)GEN_TOP((uVar1 + 4 + param_1))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + param_1))) = 0;
  *((undefined * PTR32 *)GEN_TOP((uVar1 + 8 + param_1))) = this;
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
  *(int *)this = param_1;
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar1;
}

/* ref: FUN_00d2fe00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2fe00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2fe00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP((uVar1 + 4 + param_1))) = 0;
  *((undefined * PTR32 *)GEN_TOP((uVar1 + 8 + param_1))) = this;
  if (iVar2 != 0) {
    *((int *)GEN_TOP((uVar1 + param_1))) = iVar2;
    uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
    *((int *)GEN_TOP((uVar1 + 4 + *((int *)GEN_TOP(((int)this + 4)))))) = param_1;
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
    *((int *)GEN_TOP(((int)this + 4))) = param_1;
    return uVar1;
  }
  *((undefined4 *)GEN_TOP((uVar1 + param_1))) = 0;
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
  *(int *)this = param_1;
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar1;
}

/* ref: FUN_00d2fe50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2fe50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2fe50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  iVar2 = *(int *)this;
  *((undefined4 *)GEN_TOP((uVar1 + param_1))) = 0;
  if (iVar2 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 4 + param_1))) = *(undefined4 *)this;
    *((undefined * PTR32 *)GEN_TOP((uVar1 + 8 + param_1))) = this;
    uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
    *((int *)GEN_TOP((uVar1 + *(int *)this))) = param_1;
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
    *(int *)this = param_1;
    return uVar1;
  }
  *((undefined4 *)GEN_TOP((uVar1 + 4 + param_1))) = 0;
  *((undefined * PTR32 *)GEN_TOP((uVar1 + 8 + param_1))) = this;
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  *(int *)this = param_1;
  return uVar1;
}

/* ref: FUN_00d2fea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2fea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd2fea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    if (*(int *)this == param_1) {
      uVar3 = F_00d2fe50(this GEN_EDX_FWD,param_2);
      return uVar3;
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
    iVar2 = *((int *)GEN_TOP((iVar1 + param_1)));
    *((int *)GEN_TOP((iVar1 + param_2))) = iVar2;
    *((int *)GEN_TOP((iVar1 + 4 + param_2))) = param_1;
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 8 + param_2))) = this;
    *((int *)GEN_TOP((iVar1 + 4 + iVar2))) = param_2;
    uVar3 = *((uint *)GEN_TOP(((int)this + 0xc)));
    *((int *)GEN_TOP((param_1 + uVar3))) = param_2;
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
    return uVar3;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  uVar3 = *((uint *)GEN_TOP(((int)this + 0xc)));
  *((undefined4 *)GEN_TOP((uVar3 + 4 + param_2))) = 0;
  *((undefined * PTR32 *)GEN_TOP((uVar3 + 8 + param_2))) = this;
  if (iVar1 != 0) {
    *((int *)GEN_TOP((uVar3 + param_2))) = iVar1;
    uVar3 = *((uint *)GEN_TOP(((int)this + 0xc)));
    *((int *)GEN_TOP((uVar3 + 4 + *((int *)GEN_TOP(((int)this + 4)))))) = param_2;
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
    *((int *)GEN_TOP(((int)this + 4))) = param_2;
    return uVar3;
  }
  *((undefined4 *)GEN_TOP((uVar3 + param_2))) = 0;
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
  *(int *)this = param_2;
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar3;
}

/* ref: FUN_00d2ff30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2ff30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2ff30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  uVar2 = *((uint *)GEN_TOP((iVar1 + 4 + param_1)));
  if (*((int *)GEN_TOP((iVar1 + param_1))) == 0) {
    *(uint *)this = uVar2;
  }
  else {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar1 + param_1))) + 4 + iVar1))) = uVar2;
  }
  iVar3 = *((int *)GEN_TOP((iVar1 + 4 + param_1)));
  if (iVar3 == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((iVar1 + param_1)));
  }
  else {
    *((undefined4 *)GEN_TOP((iVar3 + *((int *)GEN_TOP(((int)this + 0xc)))))) = *((undefined4 *)GEN_TOP((iVar1 + param_1)));
  }
  *((undefined4 *)GEN_TOP((iVar1 + param_1))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 4 + param_1))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 8 + param_1))) = 0;
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  return uVar2;
}

/* ref: FUN_00d2ff90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2ff90(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2ff90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 0) {
    return *((uint *)GEN_TOP((in_ecx[3] + 4 + param_2)));
  }
  return *in_ecx;
}

/* ref: FUN_00d2ffb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2ffb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd2ffb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 0) {
    return *((uint *)GEN_TOP((param_2 + *((int *)GEN_TOP((in_ecx + 0xc))))));
  }
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: FUN_00d2ffd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d2ffd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd2ffd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  
  if (param_1 < 0) {
    return 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  if (param_1 < iVar1) {
    uVar2 = 0;
    if (param_1 < iVar1 / 2) {
      iVar1 = 0;
      while( true ) {
        if (uVar2 == 0) {
          uVar2 = *(uint *)this;
        }
        else {
          uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 4 + uVar2)));
        }
        if (uVar2 == 0) {
          return 0;
        }
        if (param_1 == iVar1) break;
        iVar1 = iVar1 + 1;
      }
    }
    else {
      do {
        iVar1 = iVar1 - 1;
        if (uVar2 == 0) {
          uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
        }
        else {
          uVar2 = *((uint *)GEN_TOP((uVar2 + *((int *)GEN_TOP(((int)this + 0xc))))));
        }
        if (uVar2 == 0) {
          return 0;
        }
      } while (param_1 != iVar1);
    }
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00d30050 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d30050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd30050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 8 + param_1))) == this;
}

/* ref: FUN_00d30070 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d30070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd30070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (param_1 != param_2) {
    piVar1 = ((int *)GEN_TOP((iVar2 + 4 + param_1)));
    iVar3 = *((int *)GEN_TOP((iVar2 + param_1)));
    if (*piVar1 == param_2) {
      if (iVar3 == 0) {
        *(int *)this = param_2;
      }
      else {
        *((int *)GEN_TOP((iVar3 + 4 + iVar2))) = param_2;
      }
      iVar3 = *((int *)GEN_TOP((iVar2 + 4 + param_2)));
      piVar1 = ((int *)GEN_TOP((iVar2 + 4 + param_2)));
      if (iVar3 == 0) {
        *((int *)GEN_TOP(((int)this + 4))) = param_1;
      }
      else {
        *((int *)GEN_TOP((iVar3 + *((int *)GEN_TOP(((int)this + 0xc)))))) = param_1;
      }
      *((undefined4 *)GEN_TOP((iVar2 + param_2))) = *((undefined4 *)GEN_TOP((iVar2 + param_1)));
      *((int *)GEN_TOP((iVar2 + 4 + param_1))) = *piVar1;
      *((int *)GEN_TOP((iVar2 + param_1))) = param_2;
      *piVar1 = param_1;
      return 0;
    }
    if (iVar3 == param_2) {
      if (*((int *)GEN_TOP((iVar2 + param_2))) == 0) {
        *(int *)this = param_1;
      }
      else {
        *((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + param_2))) + 4 + iVar2))) = param_1;
      }
      if (*piVar1 == 0) {
        *((int *)GEN_TOP(((int)this + 4))) = param_2;
      }
      else {
        *((int *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)this + 0xc)))))) = param_2;
      }
      *((undefined4 *)GEN_TOP((iVar2 + param_1))) = *((undefined4 *)GEN_TOP((iVar2 + param_2)));
      iVar3 = *piVar1;
      *((int *)GEN_TOP((iVar2 + param_2))) = param_1;
      *((int *)GEN_TOP((iVar2 + 4 + param_2))) = iVar3;
      *piVar1 = param_2;
      return 0;
    }
    if (iVar3 == 0) {
      *(int *)this = param_2;
    }
    else {
      *((int *)GEN_TOP((iVar3 + 4 + iVar2))) = param_2;
    }
    if (*piVar1 == 0) {
      *((int *)GEN_TOP(((int)this + 4))) = param_2;
    }
    else {
      *((int *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)this + 0xc)))))) = param_2;
    }
    if (*((int *)GEN_TOP((iVar2 + param_2))) == 0) {
      *(int *)this = param_1;
    }
    else {
      *((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + param_2))) + 4 + *((int *)GEN_TOP(((int)this + 0xc)))))) = param_1;
    }
    iVar3 = *((int *)GEN_TOP((iVar2 + 4 + param_2)));
    if (iVar3 == 0) {
      *((int *)GEN_TOP(((int)this + 4))) = param_1;
    }
    else {
      *((int *)GEN_TOP((iVar3 + *((int *)GEN_TOP(((int)this + 0xc)))))) = param_1;
    }
    uVar4 = *((undefined4 *)GEN_TOP((iVar2 + 4 + param_1)));
    uVar5 = *((undefined4 *)GEN_TOP((iVar2 + param_1)));
    *((undefined4 *)GEN_TOP((iVar2 + 4 + param_1))) = *((undefined4 *)GEN_TOP((iVar2 + 4 + param_2)));
    *((undefined4 *)GEN_TOP((iVar2 + param_1))) = *((undefined4 *)GEN_TOP((iVar2 + param_2)));
    *((undefined4 *)GEN_TOP((iVar2 + param_2))) = uVar5;
    *((undefined4 *)GEN_TOP((iVar2 + 4 + param_2))) = uVar4;
  }
  return 0;
}

/* ref: FUN_00d30170 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d30170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(code * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd30170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(code * param_1 = (code *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_14;
  int local_10;
  int local_8;
  
  iVar8 = param_2;
  do {
    if (param_3 < iVar8) {
      return 0;
    }
    local_8 = param_3;
    uVar3 = F_00d2ffd0(this GEN_EDX_FWD,iVar8);
    uVar4 = F_00d2ffd0((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,param_3);
    uVar5 = F_00d2ffd0((((undefined *)GEN_TOP((uint)((this))))) GEN_EDX_ARG,iVar8 + param_3 >> 1);
    local_10 = iVar8;
    while( true ) {
      uVar6 = (*param_1)(uVar3,uVar5);
      iVar1 = local_10;
      while ((int)uVar6 < 0) {
        iVar1 = iVar1 + 1;
        if (uVar3 == 0) {
          uVar3 = *(uint *)this;
        }
        else {
          uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 4 + uVar3)));
        }
        uVar6 = (*param_1)(uVar3,uVar5);
      }
      uVar7 = (*param_1)(uVar4,uVar5);
      uVar6 = uVar4;
      iVar2 = local_8;
      while (0 < (int)uVar7) {
        iVar2 = iVar2 - 1;
        if (uVar6 == 0) {
          uVar6 = *((uint *)GEN_TOP(((int)this + 4)));
        }
        else {
          uVar6 = *((uint *)GEN_TOP((uVar6 + *((int *)GEN_TOP(((int)this + 0xc))))));
        }
        uVar7 = (*param_1)(uVar6,uVar5);
      }
      if (iVar2 <= iVar1) break;
      local_8 = iVar2 - 1;
      local_10 = iVar1 + 1;
      if (uVar3 == 0) {
        local_14 = *(uint *)this;
      }
      else {
        local_14 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 4 + uVar3)));
      }
      if (uVar6 == 0) {
        uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
        F_00d30070(this GEN_EDX_ARG,uVar3,0);
        uVar3 = local_14;
      }
      else {
        uVar4 = *((uint *)GEN_TOP((uVar6 + *((int *)GEN_TOP(((int)this + 0xc))))));
        F_00d30070(this GEN_EDX_ARG,uVar3,uVar6);
        uVar3 = local_14;
      }
    }
    if (iVar8 < iVar1 - 1) {
      F_00d30170(this GEN_EDX_ARG,param_1,iVar8,iVar1 - 1);
    }
    iVar8 = iVar2 + 1;
  } while (iVar8 < param_3);
  return 0;
}

/* ref: FUN_00d302c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d302c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd302c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00d30170(this GEN_EDX_FWD,param_1,0,*((int *)GEN_TOP(((int)this + 8))) - 1);
  return;
}

/* ref: FUN_00d302f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d302f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xd302f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  return (uint)this;
}

/* ref: FUN_00d30330 */
GEN_LIB GEN_FRAME uint F_00d30330(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd30330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d30350 */
GEN_LIB GEN_FRAME uint F_00d30350(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd30350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d30360 */
GEN_LIB GEN_FRAME uint F_00d30360(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd30360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1134b34));
  }
  return (uint)param_1;
}

/* ref: FUN_00d30380 */
GEN_LIB GEN_NOFRAME uint F_00d30380(void)
{
  GEN_ENTER(0xd30380u, 0u, 0u, 0u, 0u);
  return 0x1134b34;
}

/* ref: FUN_00d303e0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d303e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd303e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00d30460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d30460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd30460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d30490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d30490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd30490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d304c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d304c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd304c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d304f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d304f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd304f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d30520 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d30520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd30520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d30540 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d30540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd30540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00d30560 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d30560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd30560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00d30580 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d30580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd30580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00d305a0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d305a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd305a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00d30610 */
GEN_LIB GEN_FRAME unsigned int F_00d30610(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd30610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00d30640 */
GEN_LIB GEN_FRAME unsigned int F_00d30640(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd30640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00d30670 */
GEN_LIB GEN_FRAME unsigned int F_00d30670(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd30670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00d306a0 */
GEN_LIB GEN_FRAME unsigned int F_00d306a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd306a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00d306d0 */
GEN_LIB GEN_FRAME unsigned int F_00d306d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd306d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00d30700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d30700(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd30700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: FUN_00d30740 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d30740(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd30740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: FUN_00d30780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d30780(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd30780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: FUN_00d307c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d307c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd307c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: FUN_00d30800 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d30800(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd30800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

