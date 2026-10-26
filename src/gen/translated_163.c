#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf28 */
uint F_00d1b1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar1 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0x2f8))) != 0) {
    F_00d22b20(this,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x38;
    (*(ulonglong *)(gen_frame + 0x8)) = F_00427d90();
    F_00d1b510(&(*(undefined2 *)(gen_frame + 0x0)),&(*(undefined2 *)(gen_frame + 0x0)));
    uVar1 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))),&(*(undefined2 *)(gen_frame + 0x0)),0x38);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: FUN_00d1b270 */
uint F_00d1b270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd1b270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * this_00;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  F_00d22580(this,param_1,param_2,param_3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133504));
  *(uint *)((int)this + 0xb0) =
       *(uint *)((int)this + 0xb0) ^ ((param_4 & 0xff) << 4 ^ *(uint *)((int)this + 0xb0)) & 0x10;
  if ((char)param_4 == '\0') {
    *(undefined4 * PTR32 *)((int)this + 0x128) = param_1;
  }
  else {
    *(undefined4 * PTR32 *)((int)this + 0x128) = (undefined4 *)((int)this + 0x130);
    puVar3 = param_1;
    puVar4 = (undefined4 *)((int)this + 0x130);
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  F_00d228c0(this);
  F_00d20fe0(this,(uint)(~(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 4))) >> 5) & 1));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x60);
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this,((undefined4 *)(gen_frame + 0x28)));
    ((undefined4 *)(gen_frame + 0x28))[0] = 0x380401;
    (*(ulonglong *)(gen_frame + 0x30)) = F_00427d90();
    F_00d1b510(((undefined4 *)(gen_frame + 0x28)),((undefined4 *)(gen_frame + 0x28)));
    F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc))),((undefined4 *)(gen_frame + 0x28)),0x38);
  }
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return (uint)this;
}

/* ref: FUN_00d1b3b0 */
uint F_00d1b3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1b3b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * this_00;
  float10 fVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  F_00d22720(this,param_1,param_2);
  fVar1 = (float10)1;
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  *(undefined2 * PTR32 *)((int)this + 0x128) = (undefined2 *)((int)this + 0x130);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133504));
  *(undefined2 *)((int)this + 0x133) = 0x400;
  *(undefined1 *)((int)this + 0x13c) = 0;
  *(undefined1 *)((int)this + 0x135) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined2 *)((int)this + 0x136) = 0;
  *(float *)((int)this + 0x140) = (float)fVar1;
  *(float *)((int)this + 0x144) = (float)fVar1;
  *(float *)((int)this + 0x148) = (float)fVar1;
  *(float *)((int)this + 0x14c) = (float)fVar1;
  *(undefined2 *)((int)this + 0x13e) = 0;
  *(float *)((int)this + 0x150) = (float)fVar1;
  *(undefined1 *)((int)this + 0x13d) = 0;
  *(float *)((int)this + 0x154) = (float)fVar1;
  *(undefined1 *)((int)this + 0x132) = 1;
  *(float *)((int)this + 0x158) = (float)fVar1;
  *(undefined2 *)((int)this + 0x130) = 0x50;
  *(float *)((int)this + 0x15c) = (float)fVar1;
  *(float *)((int)this + 0x160) = (float)fVar1;
  *(float *)((int)this + 0x164) = (float)fVar1;
  *(float *)((int)this + 0x168) = (float)fVar1;
  *(float *)((int)this + 0x16c) = (float)fVar1;
  *(float *)((int)this + 0x170) = (float)fVar1;
  *(float *)((int)this + 0x174) = (float)fVar1;
  *(float *)((int)this + 0x178) = (float)fVar1;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar2 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x60);
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this,((undefined4 *)(gen_frame + 0x28)));
    ((undefined4 *)(gen_frame + 0x28))[0] = 0x380401;
    (*(ulonglong *)(gen_frame + 0x30)) = F_00427d90();
    F_00d1b510(((undefined4 *)(gen_frame + 0x28)),((undefined4 *)(gen_frame + 0x28)));
    F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc))),((undefined4 *)(gen_frame + 0x28)),0x38);
  }
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf29 */
unsigned int F_00d1b500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1b500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00d1b510 */
unsigned int F_00d1b510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined2 *)this;
  param_1[1] = *(undefined2 *)((int)this + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x28);
  param_1[0x18] = *(undefined2 *)((int)this + 0x30);
  param_1[0x19] = *(undefined2 *)((int)this + 0x32);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)((int)this + 0x34);
  return 0;
}

/* ref: FUN_00d1b580 */
unsigned int F_00d1b580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b580u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  F_00d0c080(param_1,param_2);
  uVar1 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_2 + 0x20) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x24);
  *(uint *)(param_2 + 0x24) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_2 + 0x28) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  iVar3 = 8;
  puVar2 = (uint *)(param_2 + 0x2c);
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar2)));
    iVar3 = iVar3 + -1;
    *puVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  *(undefined4 *)(param_2 + 0x4c) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf0 */
uint F_00d1b600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133504));
  F_00d23680(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00d1b630 */
unsigned int F_00d1b630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b630u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00d1b650 */
unsigned int F_00d1b650(float gen_a0)
{
  GEN_ENTER(0xd1b650u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00d1b670 */
uint F_00d1b670(float gen_a0)
{
  GEN_ENTER(0xd1b670u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = (float10)param_1;
  if ((float10)0 <= fVar1) {
    fVar1 = (float10)*(double *)&REFG(undefined, 0x1080228) + fVar1;
  }
  else {
    fVar1 = fVar1 - (float10)*(double *)&REFG(undefined, 0x1080228);
  }
  return (int)(fVar1 / (float10)REFG(double, 0x10920b8));
}

/* ref: FUN_00d1b7a0 */
uint F_00d1b7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd1b7a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00d1b7b0 */
uint F_00d1b7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b7b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf4 */
uint F_00d1b7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1b7c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00cffbb0(param_1,param_2,this);
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf7 */
byte F_00d1b7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1b7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf8 */
byte F_00d1b7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1b7f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf9 */
byte F_00d1b800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1b800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00d1b810 */
unsigned int F_00d1b810(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd1b810u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x58) = param_2;
  *(float *)(in_ecx + 0x5c) = param_3;
  return 0;
}

/* ref: FUN_00d1b830 */
unsigned int F_00d1b830(unsigned int gen_a0)
{
  GEN_ENTER(0xd1b830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(float *)(in_ecx + 0x58) = (float)(float10)0;
  *(float *)(in_ecx + 0x5c) = (float)(float10)0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf19 */
float F_00d1b840(unsigned int gen_a0)
{
  GEN_ENTER(0xd1b840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  
  fVar1 = F_00cccde0(this + 0x30);
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf20 */
float10 F_00d1b850(unsigned int gen_a0)
{
  GEN_ENTER(0xd1b850u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x54) - (float10)*(float *)(in_ecx + 0x58))));
  fVar2 = (float10)*(float *)(in_ecx + 0x5c);
  if (fVar1 <= fVar2 && ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar1)) && fVar2 != fVar1)) {
    fVar1 = (float10)*(float *)(in_ecx + 0x5c);
  }
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf12 */
byte F_00d1b880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (*(int *)(this + 0x68) == 0) {
    return 0;
  }
  *param_1 = *(undefined4 *)(this + 0x70);
  param_1[1] = *(undefined4 *)(this + 0x74);
  param_1[2] = *(undefined4 *)(this + 0x78);
  param_1[3] = *(undefined4 *)(this + 0x7c);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf22 */
byte F_00d1b8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (*(int *)(this + 0x68) == 0) {
    return 0;
  }
  *param_1 = *(undefined4 *)(this + 0x80);
  param_1[1] = *(undefined4 *)(this + 0x84);
  param_1[2] = *(undefined4 *)(this + 0x88);
  param_1[3] = *(undefined4 *)(this + 0x8c);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf23 */
byte F_00d1b8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (*(int *)(this + 0x68) == 0) {
    return 0;
  }
  F_004eb4e0(param_1,this + 0x90);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf24 */
unsigned int F_00d1b930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004eb4e0(this + 0x110,param_1);
  this[0x6d] = (undefined1)0x1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf25 */
byte F_00d1b950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (this[0x6d] == (undefined1)0x0) {
    return 0;
  }
  F_004eb4e0(param_1,this + 0x110);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf26 */
uint F_00d1b980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1b980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 * puVar2;
  
  if (*(int *)(this + 0x68) == 0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    uVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar1;
    return (uint)param_1;
  }
  puVar2 = (undefined4 *)F_00c34320(this + 0xd0,((undefined1 *)(gen_frame + 0xc)),param_2);
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  uVar1 = puVar2[3];
  param_1[2] = puVar2[2];
  param_1[3] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d1b9f0 */
unsigned int F_00d1b9f0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd1b9f0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  if ((float10)*(float *)(in_ecx + 0x24) <= (float10)param_3) {
    *(float *)(in_ecx + 0x20) = param_2;
    *(float *)(in_ecx + 0x24) = param_3;
    return 0;
  }
  return 0;
}

/* ref: FUN_00d1ba20 */
uint F_00d1ba20(unsigned int gen_a0)
{
  GEN_ENTER(0xd1ba20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  bVar2 = GEN_ISNAN((float10)*(float *)((int)this + 0x20)) || GEN_ISNAN((float10)*(float *)((int)this + 0x28));
  if (bVar2 != (bVar2 || (float10)*(float *)((int)this + 0x20) ==
                         (float10)*(float *)((int)this + 0x28))) {
    fVar4 = (float10)*(float *)((int)this + 0x2c);
    fVar5 = (float10)*(float *)((int)this + 0x24);
    bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
    bVar3 = bVar2 || fVar5 == fVar4;
    uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),
                     (ushort)!(fVar4 <= fVar5) << 8 | (ushort)bVar2 << 10 | (ushort)bVar3 << 0xe);
    if (bVar2 != bVar3) goto LAB_00d1ba7b;
  }
  F_00d2de20(((undefined1 *)(gen_frame + 0x4)),0);
  uVar1 = F_00cbb980(((undefined1 *)(gen_frame + 0x4)),*(float *)((int)this + 0x20),*(float *)((int)this + 0x24));
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x24);
  F_00cbb890(((undefined1 *)(gen_frame + 0x4)));
LAB_00d1ba7b: ;
  *(float *)((int)this + 0x20) = (float)(float10)0;
  *(float *)((int)this + 0x24) = (float)(float10)0;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf27 */
unsigned int F_00d1ba90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1ba90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  float * pfVar2;
  float10 fVar3;
  
  iVar1 = 0;
  *(uint *)(param_1 + 0x150) = param_2;
  if (*(char *)(param_1 + 0x1f2 + param_2 * 2) != '\0') {
    pfVar2 = (float *)(param_1 + 0x15c);
    do {
      fVar3 = ((float10)GEN_TOD(fcos(
                            (float10)*((float *)GEN_TOP((param_1 + 0x1fc +
                                               (iVar1 + *(int *)(param_1 + 0x150) * 6) * 4))))));
      pfVar2[-2] = (float)fVar3;
      fVar3 = ((float10)GEN_TOD(fsin(
                            (float10)*((float *)GEN_TOP((param_1 + 0x1fc +
                                               (iVar1 + *(int *)(param_1 + 0x150) * 6) * 4))))));
      iVar1 = iVar1 + 1;
      *pfVar2 = (float)fVar3;
      pfVar2[-1] = (float)(float10)0;
      pfVar2[1] = (float)(float10)0;
      pfVar2 = pfVar2 + 4;
    } while (iVar1 < (int)(uint)*((byte *)GEN_TOP((param_1 + 0x1f2 + *(int *)(param_1 + 0x150) * 2))));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf32 */
unsigned int F_00d1bb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1bb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined * pLVar4;
  uint local_8;
  
  iVar1 = *(int *)(this + 0x150);
  uVar2 = (uint)(byte)this[iVar1 * 2 + 0x1f2];
  local_8 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = 0;
      if (uVar2 != 0) {
        pLVar4 = this + (iVar1 * 3 + 0xea) * 2;
        do {
          if (local_8 == (byte)*pLVar4) {
            *(undefined4 *)(param_1 + local_8 * 4) =
                 *((undefined4 *)GEN_TOP((this + (iVar3 + iVar1 * 6) * 4 + 0x1fc)));
            break;
          }
          iVar3 = iVar3 + 1;
          pLVar4 = pLVar4 + 1;
        } while (iVar3 < (int)uVar2);
      }
      iVar1 = *(int *)(this + 0x150);
      uVar2 = (uint)(byte)this[iVar1 * 2 + 0x1f2];
      local_8 = local_8 + 1;
    } while ((int)local_8 < (int)uVar2);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf31 */
unsigned int F_00d1bba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1bba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(byte)this[param_1 * 2 + 0x1f2];
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      iVar1 = 0;
      if (uVar2 != 0) {
        do {
          if (uVar3 == (byte)this[iVar1 + (param_1 * 3 + 0xea) * 2]) {
            *(undefined4 *)(param_2 + uVar3 * 4) =
                 *((undefined4 *)GEN_TOP((this + (iVar1 + param_1 * 6) * 4 + 0x1fc)));
            break;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)uVar2);
      }
      uVar2 = (uint)(byte)this[param_1 * 2 + 0x1f2];
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)uVar2);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf36 */
unsigned int F_00d1bc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1bc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x150);
  iVar2 = 0;
  if (this[iVar1 * 2 + 0x1f2] != (undefined1)0x0) {
    do {
      iVar1 = iVar2 + iVar1 * 6;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(param_1 + -4 + iVar2 * 4) = *(undefined4 *)(this + iVar1 * 4 + 0x274);
      iVar1 = *(int *)(this + 0x150);
    } while (iVar2 < (int)(uint)(byte)this[iVar1 * 2 + 0x1f2]);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf35 */
unsigned int F_00d1bc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1bc60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  undefined * pLVar2;
  
  iVar1 = 0;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar2 = this + param_1 * 0x18 + 0x274;
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(param_2 + -4 + iVar1 * 4) = *(undefined4 *)pLVar2;
      pLVar2 = pLVar2 + 4;
    } while (iVar1 < (int)(uint)(byte)this[param_1 * 2 + 0x1f2]);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf39 */
unsigned int F_00d1bca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1bca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * pLVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (this[*(int *)(this + 0x150) * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar1 = this + 0x154;
    puVar2 = param_1;
    do {
      *puVar2 = *(undefined4 *)pLVar1;
      puVar2[1] = *(undefined4 *)(pLVar1 + 4);
      puVar2[2] = *(undefined4 *)(pLVar1 + 8);
      puVar2[3] = *(undefined4 *)(pLVar1 + 0xc);
      iVar3 = iVar3 + 1;
      pLVar1 = pLVar1 + 0x10;
      puVar2 = puVar2 + 4;
    } while (iVar3 < (int)(uint)(byte)this[*(int *)(this + 0x150) * 2 + 0x1f2]);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf30 */
byte F_00d1bd00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1bd00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined1 LVar1;
  
  *param_1 = this[*(int *)(this + 0x150) * 2 + 0x1f2];
  LVar1 = this[*(int *)(this + 0x150) * 2 + 499];
  *(undefined1 *)param_2 = LVar1;
  return (byte)LVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf29 */
byte F_00d1bd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd1bd30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined1 LVar1;
  
  *param_2 = this[param_1 * 2 + 0x1f2];
  LVar1 = this[param_1 * 2 + 499];
  *(undefined1 *)param_3 = LVar1;
  return (byte)LVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf40 */
uint F_00d1bd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd1bd60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  if (6 < (byte)*param_2) {
    *param_2 = (undefined1)0x6;
  }
  if (1 < (byte)*param_3) {
    *param_3 = (undefined1)0x1;
  }
  this[param_1 * 2 + 0x1f2] = *param_2;
  this[param_1 * 2 + 499] = *param_3;
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf33 */
unsigned int F_00d1bda0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd1bda0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10920c0);
  *(float *)(in_ecx + 0x60) = (float)((float10)param_2 / fVar1);
  *(float *)(in_ecx + 100) = (float)((float10)param_3 / fVar1);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf34 */
uint F_00d1bdc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1bdc0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10920c0);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x60) * fVar1)));
  *param_3 = ((float)GEN_TOF((fVar1 * (float10)*(float *)(in_ecx + 100))));
  return (uint)param_2;
}

/* ref: FUN_00d1bdf0 */
uint F_00d1bdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1bdf0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*param_1;
  fVar2 = (float10)*param_2;
  if (fVar1 <= fVar2 && ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar1)) && fVar2 != fVar1)) {
    return 0xffffffff;
  }
  if (!((float10)*param_1 <= (float10)*param_2) !=
      (GEN_ISNAN((float10)*param_2) || GEN_ISNAN((float10)*param_1))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00d1be30 */
uint F_00d1be30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1be30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  byte bVar2;
  undefined1 uVar3;
  float10 fVar4;
  uint uVar5;
  float fVar6;
  float * pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  fVar6 = 0.0;
  if (*(char *)((int)this + param_1 * 2 + 0x1f2) != '\0') {
    fVar4 = (float10)0;
    (*(float * PTR32 *)(gen_frame + 0x0)) = (float *)((int)this + param_1 * 0x18 + 0x1fc);
    fVar8 = (float10)REFG(double, 0x10920b8);
    do {
      fVar9 = (float10)*(*(float * PTR32 *)(gen_frame + 0x0));
      if (fVar4 <= fVar9) {
        fVar10 = fVar9 + (float10)*(double *)&REFG(undefined, 0x1080228);
      }
      else {
        fVar10 = fVar9 - (float10)*(double *)&REFG(undefined, 0x1080228);
      }
      fVar1 = ((float)GEN_TOF((fVar9 - (float10)(int)(fVar10 / fVar8) * fVar8)));
      fVar9 = (float10)fVar1;
      ((float *)(gen_frame + 0xc))[(int)((int)gen_fl2bits(fVar6) * 2 + -1)] = fVar1;
      if (!(fVar4 <= fVar9) != (GEN_ISNAN(fVar9) || GEN_ISNAN(fVar4))) {
        ((float *)(gen_frame + 0xc))[(int)((int)gen_fl2bits(fVar6) * 2 + -1)] = (float)(fVar9 + fVar8);
      }
      bVar2 = *(byte *)((int)this + param_1 * 2 + 0x1f2);
      (*(float * PTR32 *)(gen_frame + 0x0)) = (*(float * PTR32 *)(gen_frame + 0x0)) + 1;
      ((float *)(gen_frame + 0xc))[(int)((int)gen_fl2bits(fVar6) * 2)] = fVar6;
      fVar6 = gen_bits2f((int)gen_fl2bits(fVar6) + 1);
    } while ((int)gen_fl2bits(fVar6) < (int)(uint)bVar2);
  }
  F_00c4f040(&(*(float *)(gen_frame + 0x8)),(uint)*(byte *)((int)this + param_1 * 2 + 0x1f2),8,((code *)REFP(0xd1bdf0)));
  uVar5 = 0;
  if (*(char *)((int)this + param_1 * 2 + 0x1f2) != '\0') {
    pfVar7 = (float *)((int)this + param_1 * 0x18 + 0x1fc);
    do {
      uVar3 = *(undefined1 *)(((float *)(gen_frame + 0xc)) + uVar5 * 2);
      *pfVar7 = ((float *)(gen_frame + 0xc))[(int)(uVar5 * 2 + -1)];
      *((undefined1 *)GEN_TOP(((int)this + uVar5 + (param_1 * 3 + 0xea) * 2))) = uVar3;
      uVar5 = uVar5 + 1;
      pfVar7 = pfVar7 + 1;
    } while ((int)uVar5 < (int)(uint)*(byte *)((int)this + param_1 * 2 + 0x1f2));
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf42 */
unsigned int F_00d1bf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1bf50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  undefined * pLVar3;
  
  iVar2 = 0;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar3 = this + param_1 * 0x18 + 0x274;
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *(undefined4 *)pLVar3 = *(undefined4 *)(param_2 + iVar1);
      pLVar3 = pLVar3 + 4;
    } while (iVar2 < (int)(uint)(byte)this[param_1 * 2 + 0x1f2]);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf38 */
uint F_00d1bf90(unsigned int gen_a0)
{
  GEN_ENTER(0xd1bf90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  undefined1 LVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined * pLVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  this[*(int *)(this + 0x150) * 2 + 0x1f2] =
       *(undefined *)(&REFG(undefined, 0x13503a0) + *(int *)(this + 0x150) * 2);
  this[*(int *)(this + 0x150) * 2 + 499] =
       *(undefined *)(&REFG(undefined, 0x13503a1) + *(int *)(this + 0x150) * 2);
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x1fc))) =
       *(undefined4 *)(&REFG(undefined, 0x13503b8) + *(int *)(this + 0x150) * 0x18);
  uVar5 = REFG(float, 0x1097250);
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x274))) = REFG(float, 0x1097250);
  iVar8 = 0;
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x200))) =
       *(undefined4 *)(&REFG(undefined, 0x13503bc) + *(int *)(this + 0x150) * 0x18);
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x278))) = uVar5;
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x204))) =
       *(undefined4 *)(&REFG(undefined, 0x13503c0) + *(int *)(this + 0x150) * 0x18);
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x27c))) = uVar5;
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x208))) =
       *(undefined4 *)(&REFG(undefined, 0x13503c4) + *(int *)(this + 0x150) * 0x18);
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x280))) = uVar5;
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x20c))) =
       *(undefined4 *)(&REFG(undefined, 0x13503c8) + *(int *)(this + 0x150) * 0x18);
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x284))) = uVar5;
  *((undefined4 *)GEN_TOP((this + (*(int *)(this + 0x150) * 3 + 0x42) * 8))) =
       *(undefined4 *)(&REFG(undefined, 0x13503cc) + *(int *)(this + 0x150) * 0x18);
  *((undefined4 *)GEN_TOP((this + (*(int *)(this + 0x150) * 3 + 0x51) * 8))) = uVar5;
  iVar3 = *(int *)(this + 0x150);
  if (this[iVar3 * 2 + 0x1f2] != (undefined1)0x0) {
    fVar4 = (float10)0;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + iVar3 * 0x18 + 0x1fc;
    fVar9 = (float10)REFG(double, 0x10920b8);
    do {
      fVar10 = (float10)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x0));
      if (fVar4 <= fVar10) {
        fVar11 = fVar10 + (float10)*(double *)&REFG(undefined, 0x1080228);
      }
      else {
        fVar11 = fVar10 - (float10)*(double *)&REFG(undefined, 0x1080228);
      }
      fVar1 = ((float)GEN_TOF((fVar10 - (float10)(int)(fVar11 / fVar9) * fVar9)));
      fVar10 = (float10)fVar1;
      *(float *)(((undefined1 *)(gen_frame + 0xc)) + iVar8 * 8 + -4) = fVar1;
      if (!(fVar4 <= fVar10) != (GEN_ISNAN(fVar10) || GEN_ISNAN(fVar4))) {
        *(float *)(((undefined1 *)(gen_frame + 0xc)) + iVar8 * 8 + -4) = (float)(fVar10 + fVar9);
      }
      LVar2 = this[iVar3 * 2 + 0x1f2];
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
      *(int *)(((undefined1 *)(gen_frame + 0xc)) + iVar8 * 8) = iVar8;
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)(uint)(byte)LVar2);
  }
  F_00c4f040(((undefined1 *)(gen_frame + 0x8)),(uint)(byte)this[iVar3 * 2 + 0x1f2],8,((code *)REFP(0xd1bdf0)));
  uVar6 = 0;
  if (this[iVar3 * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar7 = this + iVar3 * 0x18 + 0x1fc;
    do {
      LVar2 = ((undefined1 *)(gen_frame + 0xc))[(int)(uVar6 * 8)];
      *(undefined4 *)pLVar7 = *(undefined4 *)(((undefined1 *)(gen_frame + 0xc)) + uVar6 * 8 + -4);
      this[uVar6 + (iVar3 * 3 + 0xea) * 2] = LVar2;
      uVar6 = uVar6 + 1;
      pLVar7 = pLVar7 + 4;
    } while ((int)uVar6 < (int)(uint)(byte)this[iVar3 * 2 + 0x1f2]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar6;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf37 */
uint F_00d1c1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1c1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  undefined1 LVar2;
  float10 fVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined * pLVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  this[param_1 * 2 + 0x1f2] = *(undefined *)(&REFG(undefined, 0x13503a0) + param_1 * 2);
  this[param_1 * 2 + 499] = *(undefined *)(&REFG(undefined, 0x13503a1) + param_1 * 2);
  *(undefined4 *)(this + param_1 * 0x18 + 0x1fc) = *(undefined4 *)(&REFG(undefined, 0x13503b8) + param_1 * 0x18);
  uVar4 = REFG(float, 0x1097250);
  iVar7 = 0;
  *(undefined4 *)(this + param_1 * 0x18 + 0x274) = REFG(float, 0x1097250);
  *(undefined4 *)(this + param_1 * 0x18 + 0x200) = *(undefined4 *)(&REFG(undefined, 0x13503bc) + param_1 * 0x18);
  *(undefined4 *)(this + param_1 * 0x18 + 0x278) = uVar4;
  *(undefined4 *)(this + param_1 * 0x18 + 0x204) = *(undefined4 *)(&REFG(undefined, 0x13503c0) + param_1 * 0x18);
  *(undefined4 *)(this + param_1 * 0x18 + 0x27c) = uVar4;
  *(undefined4 *)(this + param_1 * 0x18 + 0x208) = *(undefined4 *)(&REFG(undefined, 0x13503c4) + param_1 * 0x18);
  *(undefined4 *)(this + param_1 * 0x18 + 0x280) = uVar4;
  *(undefined4 *)(this + param_1 * 0x18 + 0x20c) = *(undefined4 *)(&REFG(undefined, 0x13503c8) + param_1 * 0x18);
  *(undefined4 *)(this + param_1 * 0x18 + 0x284) = uVar4;
  *((undefined4 *)GEN_TOP((this + (param_1 * 3 + 0x42) * 8))) = *(undefined4 *)(&REFG(undefined, 0x13503cc) + param_1 * 0x18)
  ;
  *((undefined4 *)GEN_TOP((this + (param_1 * 3 + 0x51) * 8))) = uVar4;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    fVar3 = (float10)0;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + param_1 * 0x18 + 0x1fc;
    fVar8 = (float10)REFG(double, 0x10920b8);
    do {
      fVar9 = (float10)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x0));
      if (fVar3 <= fVar9) {
        fVar10 = fVar9 + (float10)*(double *)&REFG(undefined, 0x1080228);
      }
      else {
        fVar10 = fVar9 - (float10)*(double *)&REFG(undefined, 0x1080228);
      }
      fVar1 = ((float)GEN_TOF((fVar9 - (float10)(int)(fVar10 / fVar8) * fVar8)));
      fVar9 = (float10)fVar1;
      *(float *)(((undefined1 *)(gen_frame + 0xc)) + iVar7 * 8 + -4) = fVar1;
      if (!(fVar3 <= fVar9) != (GEN_ISNAN(fVar9) || GEN_ISNAN(fVar3))) {
        *(float *)(((undefined1 *)(gen_frame + 0xc)) + iVar7 * 8 + -4) = (float)(fVar9 + fVar8);
      }
      LVar2 = this[param_1 * 2 + 0x1f2];
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
      *(int *)(((undefined1 *)(gen_frame + 0xc)) + iVar7 * 8) = iVar7;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)(byte)LVar2);
  }
  F_00c4f040(((undefined1 *)(gen_frame + 0x8)),(uint)(byte)this[param_1 * 2 + 0x1f2],8,((code *)REFP(0xd1bdf0)));
  uVar5 = 0;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar6 = this + param_1 * 0x18 + 0x1fc;
    do {
      LVar2 = ((undefined1 *)(gen_frame + 0xc))[(int)(uVar5 * 8)];
      *(undefined4 *)pLVar6 = *(undefined4 *)(((undefined1 *)(gen_frame + 0xc)) + uVar5 * 8 + -4);
      this[uVar5 + (param_1 * 3 + 0xea) * 2] = LVar2;
      uVar5 = uVar5 + 1;
      pLVar6 = pLVar6 + 4;
    } while ((int)uVar5 < (int)(uint)(byte)this[param_1 * 2 + 0x1f2]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf43 */
float10 F_00d1c390(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd1c390u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)((float)GEN_TOF((((float10)REFG(double, 0x10920b8) - (float10)param_1) -
                          (float10)*(double *)&REFG(undefined, 0x1094620))));
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1080228);
  if (fVar1 <= fVar2 && ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar1)) && fVar2 != fVar1)) {
    return (float10)(float)(fVar2 - (float10)REFG(double, 0x10920b8));
  }
  return fVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf44 */
float10 F_00d1c3d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd1c3d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)(float)((float10)param_1 - (float10)*(double *)&REFG(undefined, 0x1133868));
  if (!((float10)*(double *)&REFG(undefined, 0x109c9b8) <= fVar1) !=
      (GEN_ISNAN(fVar1) || GEN_ISNAN((float10)*(double *)&REFG(undefined, 0x109c9b8)))) {
    fVar1 = (float10)(float)(fVar1 + (float10)REFG(double, 0x10920b8));
  }
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf45 */
float10 F_00d1c400(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd1c400u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)((float)GEN_TOF((((float10)REFG(double, 0x10920b8) - (float10)param_1) -
                          (float10)*(double *)&REFG(undefined, 0x1094620))));
  if (!((float10)0 <= fVar1) != (GEN_ISNAN(fVar1) || GEN_ISNAN((float10)0))) {
    return (float10)(float)(fVar1 + (float10)REFG(double, 0x10920b8));
  }
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf46 */
float10 F_00d1c440(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd1c440u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)(float)((float10)param_1 - (float10)*(double *)&REFG(undefined, 0x1094620));
  if (!((float10)0 <= fVar1) != (GEN_ISNAN(fVar1) || GEN_ISNAN((float10)0))) {
    fVar1 = (float10)(float)(fVar1 + (float10)REFG(double, 0x10920b8));
  }
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf47 */
unsigned int F_00d1c470(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1c470u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float10 fVar2;
  
  fVar1 = ((float)GEN_TOF(((((float10)param_1 - (float10)REFG(double, 0x1088130)) * (float10)REFG(double, 0x1088108)) *
                 (float10)*(double *)&REFG(undefined, 0x1080228))));
  fVar2 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  *param_2 = (float)((float10)(float)fVar2 * (float10)REFG(double, 0x10944b8));
  param_2[1] = (float)(float10)0;
  fVar2 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  param_2[2] = (float)((float10)(float)fVar2 * (float10)REFG(double, 0x10944b8));
  param_2[3] = GEN_FLT_TO(param_2[3], REFG(float, 0x1097250));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf55 */
unsigned int F_00d1c4e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd1c4e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf56 */
unsigned int F_00d1c500(unsigned int gen_a0)
{
  GEN_ENTER(0xd1c500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  }
  return 0;
}

/* ref: FUN_00d1c830 */
float10 F_00d1c830(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd1c830u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  int param_6 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float * pfVar5;
  uint uVar6;
  byte * pbVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float * pfVar11;
  float10 extraout_ST0;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  ((code *)*(gen_code32 *)(*param_1 + 0x78))(param_1,&(*(byte *)(gen_frame + 0x17)),&(*(char *)(gen_frame + 0x7)));
  fVar12 = (float10)REFG(float, 0x1097250);
  fVar13 = (float10)param_4;
  fVar15 = (float10)0;
  if (!(fVar13 <= fVar12) == ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar13)) || fVar12 == fVar13)) {
    fVar13 = (float10)param_3;
    (*(float *)(gen_frame + 0xc)) = param_3;
    fVar12 = (float10)REFG(double, 0x10920b8);
    if (!(fVar15 <= fVar13) == (GEN_ISNAN(fVar13) || GEN_ISNAN(fVar15))) {
      if (!(fVar13 <= fVar12) != ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar13)) || fVar12 == fVar13)) {
        (*(float *)(gen_frame + 0xc)) = (float)(fVar13 - fVar12);
      }
    }
    else {
      (*(float *)(gen_frame + 0xc)) = (float)(fVar13 + fVar12);
    }
    iVar8 = param_1[0x54];
    uVar10 = (uint)(*(byte *)(gen_frame + 0x17));
    uVar6 = uVar10;
    pfVar5 = param_2;
    if (uVar10 != 0) {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pfVar5 = 0.0;
        pfVar5 = pfVar5 + 1;
      }
    }
    fVar13 = (float10)(*(float *)(gen_frame + 0xc));
    uVar6 = 0;
    if (uVar10 != 0) {
      do {
        fVar14 = ((float10)GEN_TOD(gen_bits2f(param_1[iVar8 * 6 + uVar6 + 0x7f])));
        if (fVar13 <= fVar14 && ((!GEN_ISNAN(fVar14) && !GEN_ISNAN(fVar13)) && fVar14 != fVar13)) {
          (*(float *)(gen_frame + 0x8)) = gen_bits2f(uVar6);
          uVar3 = uVar10;
          if ((uVar6 == 0) || (uVar3 = uVar6, uVar6 != 0xffffffff)) goto LAB_00d1c91b;
          break;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar10);
    }
    (*(float *)(gen_frame + 0x8)) = 0.0;
    uVar3 = uVar10;
LAB_00d1c91b: ;
    (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((fVar13 - ((float10)GEN_TOD(gen_bits2f(param_1[iVar8 * 6 + uVar3 + 0x7e]))))));
    fVar13 = (float10)((float)GEN_TOF((fVar13 - ((float10)GEN_TOD(gen_bits2f(param_1[iVar8 * 6 + uVar3 + 0x7e]))))));
    if (!(fVar15 <= fVar13) != (GEN_ISNAN(fVar13) || GEN_ISNAN(fVar15))) {
      (*(float *)(gen_frame + 0xc)) = (float)(fVar13 + fVar12);
      fVar13 = (float10)(float)(fVar13 + fVar12);
    }
    (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_1[iVar8 * 6 + (int)gen_fl2bits((*(float *)(gen_frame + 0x8))) + 0x7fU])))
                      - ((float10)GEN_TOD(gen_bits2f(param_1[iVar8 * 6 + uVar3 + 0x7e]))))));
    fVar14 = (float10)((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_1[iVar8 * 6 +
                                                          (int)gen_fl2bits((*(float *)(gen_frame + 0x8))) + 0x7fU]))) -
                             ((float10)GEN_TOD(gen_bits2f(param_1[iVar8 * 6 + uVar3 + 0x7e]))))));
    if (!(fVar15 <= fVar14) != (GEN_ISNAN(fVar14) || GEN_ISNAN(fVar15))) {
      (*(float *)(gen_frame + 0xc)) = (float)(fVar14 + fVar12);
      fVar14 = (float10)(float)(fVar14 + fVar12);
    }
    fVar1 = ((float)GEN_TOF((((fVar13 / fVar14) * (float10)*(double *)&REFG(undefined, 0x1080228)) * (float10)REFG(double, 0x1088108))))
    ;
    (*(float *)(gen_frame + 0xc)) = fVar1;
    fVar13 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    (*(float *)(gen_frame + 0x10)) = (float)fVar13;
    param_2[uVar3 - 1] = (float)fVar13;
    fVar13 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    (*(float *)(gen_frame + 0x10)) = (float)fVar13;
    iVar8 = 0;
    param_2[(int)gen_fl2bits((*(float *)(gen_frame + 0x8)))] = (float)fVar13;
    if (3 < uVar10) {
      iVar9 = (uVar10 - 4 >> 2) + 1;
      iVar8 = iVar9 * 4;
      pfVar5 = param_2 + 2;
      pbVar7 = (byte *)((int)param_1 + param_1[0x54] * 6 + 0x1d6);
      do {
        iVar9 = iVar9 + -1;
        ((float *)(gen_frame + 0x18))[(int)(pbVar7[-2])] = pfVar5[-2];
        ((float *)(gen_frame + 0x18))[(int)(pbVar7[-1])] = pfVar5[-1];
        ((float *)(gen_frame + 0x18))[(int)(*pbVar7)] = *pfVar5;
        ((float *)(gen_frame + 0x18))[(int)(pbVar7[1])] = pfVar5[1];
        pfVar5 = pfVar5 + 4;
        pbVar7 = pbVar7 + 4;
      } while (iVar9 != 0);
    }
    uVar6 = (uint)(*(byte *)(gen_frame + 0x17));
    if (iVar8 < (int)uVar6) {
      iVar9 = param_1[0x54];
      do {
        iVar4 = iVar8 + (iVar9 * 3 + 0xea) * 2;
        pfVar5 = param_2 + iVar8;
        iVar8 = iVar8 + 1;
        ((float *)(gen_frame + 0x18))[(int)(*(byte *)((int)param_1 + iVar4))] = *pfVar5;
      } while (iVar8 < (int)uVar6);
    }
    if (uVar6 != 0) {
      pfVar5 = ((float *)(gen_frame + 0x18));
      pfVar11 = param_2;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pfVar11 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar11 = pfVar11 + 1;
      }
    }
    if (param_6 != 0) {
      fVar13 = (float10)0;
      fVar15 = (float10)param_5;
      if (!(fVar13 <= fVar15) == ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar13)) || fVar15 == fVar13)) {
        if (fVar15 <= ((float10)GEN_TOD(gen_bits2f(param_1[0x18])))) {
          fVar1 = ((float)GEN_TOF((((((float10)1 / ((float10)GEN_TOD(gen_bits2f(param_1[0x18])))) * fVar15) *
                          (float10)*(double *)&REFG(undefined, 0x1080228)) * (float10)REFG(double, 0x1088108))));
          (*(float *)(gen_frame + 0x8)) = fVar1;
          fVar13 = ((float10)GEN_TOD(fcos((float10)fVar1)));
          fVar2 = (float)fVar13;
          (*(float *)(gen_frame + 0x10)) = fVar2;
          (*(float *)(gen_frame + 0xc)) = fVar2;
          fVar13 = ((float10)GEN_TOD(fsin((float10)fVar1)));
          fVar1 = (float)fVar13;
          (*(float *)(gen_frame + 0x10)) = fVar1;
          param_2[4] = (float)((float10)fVar1 * (float10)*param_2);
          param_2[5] = (float)((float10)fVar1 * (float10)param_2[1]);
          *param_2 = (float)((float10)fVar2 * (float10)*param_2);
          fVar13 = (float10)fVar2 * (float10)param_2[1];
        }
        else {
          if (fVar15 <= ((float10)GEN_TOD(gen_bits2f(param_1[0x19])))) {
            param_2[4] = *param_2;
            param_2[5] = param_2[1];
          }
          else {
            fVar1 = ((float)GEN_TOF(((fVar15 - ((float10)GEN_TOD(gen_bits2f(param_1[0x19])))) /
                           ((float10)1 - ((float10)GEN_TOD(gen_bits2f(param_1[0x19])))))));
            (*(float *)(gen_frame + 0x10)) = fVar1;
            fVar1 = ((float)GEN_TOF((((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x1080228)) *
                           (float10)*(double *)&REFG(undefined, 0x1094878))));
            (*(float *)(gen_frame + 0x8)) = fVar1;
            fVar13 = ((float10)GEN_TOD(fcos((float10)fVar1)));
            fVar2 = (float)fVar13;
            (*(float *)(gen_frame + 0x10)) = fVar2;
            (*(float *)(gen_frame + 0xc)) = fVar2;
            fVar13 = ((float10)GEN_TOD(fsin((float10)fVar1)));
            fVar1 = (float)fVar13;
            (*(float *)(gen_frame + 0x10)) = fVar1;
            fVar13 = (float10)fVar1;
            fVar15 = (float10)fVar2;
            param_2[4] = (float)(fVar13 * (float10)param_2[2] + fVar15 * (float10)*param_2);
            param_2[5] = (float)(fVar13 * (float10)param_2[3] + (float10)param_2[1] * fVar15);
            param_2[2] = (float)((float10)*param_2 * fVar13 + (float10)param_2[2] * fVar15);
            param_2[3] = (float)(fVar13 * (float10)param_2[1] + (float10)param_2[3] * fVar15);
          }
          fVar13 = (float10)0;
          *param_2 = (float)fVar13;
        }
        param_2[1] = (float)fVar13;
      }
      else {
        param_2[4] = (float)fVar13;
        param_2[5] = (float)fVar13;
      }
      (*(byte *)(gen_frame + 0x17)) = 6;
    }
    fVar1 = ((float)GEN_TOF((((float10)param_4 * (float10)*(double *)&REFG(undefined, 0x1080228)) * (float10)REFG(double, 0x1088108))));
    (*(float *)(gen_frame + 0x8)) = fVar1;
    fVar13 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    fVar2 = (float)fVar13;
    (*(float *)(gen_frame + 0x10)) = fVar2;
    (*(float *)(gen_frame + 0xc)) = fVar2;
    fVar13 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    fVar1 = (float)fVar13;
    (*(float *)(gen_frame + 0x10)) = fVar1;
    uVar6 = (uint)(*(byte *)(gen_frame + 0x17));
    iVar8 = 0;
    fVar13 = (float10)fVar2;
    if (3 < uVar6) {
      fVar15 = (float10)REFG(double, 0x1088108) * (float10)fVar1;
      iVar9 = (uVar6 - 4 >> 2) + 1;
      iVar8 = iVar9 * 4;
      pfVar5 = param_2 + 2;
      do {
        iVar9 = iVar9 + -1;
        pfVar5[-2] = (float)(fVar13 * (float10)pfVar5[-2] + fVar15);
        pfVar5[-1] = (float)((float10)pfVar5[-1] * fVar13 + fVar15);
        *pfVar5 = (float)((float10)*pfVar5 * fVar13 + fVar15);
        pfVar5[1] = (float)((float10)pfVar5[1] * fVar13 + fVar15);
        pfVar5 = pfVar5 + 4;
      } while (iVar9 != 0);
    }
    if (iVar8 < (int)uVar6) {
      fVar15 = (float10)REFG(double, 0x1088108);
      do {
        iVar9 = iVar8 + 1;
        param_2[iVar8] = (float)((float10)param_2[iVar8] * fVar13 + (float10)fVar1 * fVar15);
        iVar8 = iVar9;
      } while (iVar9 < (int)uVar6);
    }
  }
  else {
    uVar6 = 6;
    if (param_6 == 0) {
      uVar6 = (uint)(*(byte *)(gen_frame + 0x17));
    }
    uVar10 = uVar6;
    pfVar5 = param_2;
    if (uVar6 != 0) {
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pfVar5 = 0.5;
        pfVar5 = pfVar5 + 1;
      }
    }
  }
  if (uVar6 < 8) {
    pfVar5 = param_2 + uVar6;
    for (iVar8 = 8 - uVar6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar5 = 0.0;
      pfVar5 = pfVar5 + 1;
    }
  }
  param_2[7] = param_2[5];
  param_2[6] = param_2[4];
  param_2[5] = param_2[3];
  param_2[4] = param_2[2];
  param_2[3] = (float)(float10)0;
  param_2[2] = (float)(float10)0;
  if ((*(char *)(gen_frame + 0x7)) != '\0') {
    param_2[3] = *(float *)&REFG(undefined, 0x11335a0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return extraout_ST0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf51 */
byte F_00d1cca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd1cca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float * pfVar3;
  float * pfVar4;
  uint uVar5;
  float * pfVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  pfVar4 = (*(float * PTR32 *)&gen_args[6]);
  pfVar3 = (*(float * PTR32 *)&gen_args[5]);
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))))((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x28)));
  if ((char)uVar5 != '\0') {
    pfVar6 = (float *)F_00c34320(((undefined1 *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[1]));
    fVar1 = pfVar6[1];
    (*(float *)(gen_frame + 0x14)) = *pfVar6;
    (*(float *)(gen_frame + 0x18)) = fVar1;
    (*(float *)(gen_frame + 0x1c)) = pfVar6[2];
    (*(float *)(gen_frame + 0x20)) = pfVar6[3];
    pfVar6 = (float *)F_00d034e0(&(*(float *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x0)));
    fVar1 = *pfVar6;
    fVar2 = pfVar6[1];
    (*(float *)(gen_frame + 0x14)) = fVar1;
    fVar8 = (float10)fVar1;
    fVar10 = (float10)0;
    (*(float *)(gen_frame + 0x18)) = fVar2;
    (*(float *)(gen_frame + 0x1c)) = pfVar6[2];
    (*(float *)(gen_frame + 0x20)) = pfVar6[3];
    fVar9 = (float10)pfVar6[2];
    if (((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar8)) == ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar8)) || fVar10 == fVar8)) ||
       ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar9)) == ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar9)) || fVar10 == fVar9))) {
      fVar10 = F_00c4d1fa(GEN_TOD(-fVar9));
      (*(float *)(gen_frame + 0x24)) = (float)fVar10;
      (*(float *)(gen_frame + 0x10)) = (float)fVar10;
      fVar8 = (float10)(*(float *)(gen_frame + 0x14));
      fVar9 = (float10)(*(float *)(gen_frame + 0x1c));
    }
    else {
      (*(float *)(gen_frame + 0x10)) = (float)fVar10;
    }
    fVar1 = (float)(fVar9 * fVar9 + fVar8 * fVar8);
    (*(float *)(gen_frame + 0x24)) = fVar1;
    fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
    (*(float *)(gen_frame + 0x24)) = fVar1;
    fVar10 = (float10)0;
    bVar7 = GEN_ISNAN(fVar10) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x18)));
    fVar8 = (float10)fVar1;
    if ((bVar7 == (bVar7 || fVar10 == (float10)(*(float *)(gen_frame + 0x18)))) ||
       ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar8)) == ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar8)) || fVar10 == fVar8))) {
      fVar10 = F_00c4d1fa(fVar8);
      (*(float *)(gen_frame + 0x24)) = (float)fVar10;
      fVar10 = (float10)(float)fVar10;
    }
    (*(float *)(gen_frame + 0x24)) = (float)fVar10;
    fVar8 = (float10)*(double *)&REFG(undefined, 0x1092098);
    fVar9 = (float10)*(double *)&REFG(undefined, 0x1080228);
    *pfVar3 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x10)) * fVar8) / fVar9)));
    *pfVar4 = ((float)GEN_TOF(((fVar8 * (float10)(float)fVar10) / fVar9)));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf53 */
uint F_00d1cdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd1cdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  
  *param_1 = *(undefined4 *)(this + 0x10);
  *param_2 = *(undefined4 *)(this + 0x14);
  uVar1 = *(uint *)(this + 0x18);
  *param_3 = uVar1;
  return uVar1;
}

/* ref: FUN_00d1ce10 */
unsigned int F_00d1ce10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1ce10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  int local_8;
  
  *(uint *)((int)this + 0xc) = (uint)*(byte *)((int)param_1 + 4);
  *(uint *)((int)this + 0x150) = (uint)*(byte *)((int)param_1 + 5);
  puVar3 = (undefined1 *)((int)this + 499);
  local_8 = 5;
  puVar1 = (undefined4 *)((int)param_1 + 0x88);
  puVar2 = (undefined4 *)((int)this + 0x274);
  puVar4 = (undefined1 *)((int)param_1 + 0x101);
  puVar5 = (undefined1 *)((int)this + 0x1d5);
  param_1 = (undefined1 *)((int)param_1 + 7);
  do {
    puVar3[-1] = param_1[-1];
    *puVar3 = *param_1;
    param_1 = param_1 + 2;
    puVar3 = puVar3 + 2;
    puVar2[-0x1e] = puVar1[-0x1e];
    *puVar2 = *puVar1;
    puVar5[-1] = puVar4[-1];
    local_8 = local_8 + -1;
    puVar2[-0x1d] = puVar1[-0x1d];
    puVar2[1] = puVar1[1];
    *puVar5 = *puVar4;
    puVar2[-0x1c] = puVar1[-0x1c];
    puVar2[2] = puVar1[2];
    puVar5[1] = puVar4[1];
    puVar2[-0x1b] = puVar1[-0x1b];
    puVar2[3] = puVar1[3];
    puVar5[2] = puVar4[2];
    puVar2[-0x1a] = puVar1[-0x1a];
    puVar2[4] = puVar1[4];
    puVar5[3] = puVar4[3];
    puVar2[-0x19] = puVar1[-0x19];
    puVar2[5] = puVar1[5];
    puVar5[4] = puVar4[4];
    puVar1 = puVar1 + 6;
    puVar2 = puVar2 + 6;
    puVar4 = puVar4 + 6;
    puVar5 = puVar5 + 6;
  } while (local_8 != 0);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf2 */
uint F_00d1cf10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1cf10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2f0);
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_2 == 0xffffffff) {
    param_2 = *(uint *)(this + 8);
    *(uint *)(this + 8) = param_2 + 1;
  }
  iVar7 = 0;
  if (0 < *(int *)(this + 0x10)) {
    piVar4 = *(int * PTR32 *)(this + 0x2ec);
LAB_00d1cf58: ;
    if (*(uint *)(*piVar4 + 8) != param_2) goto code_r0x00d1cf5f;
    piVar4 = ((int *)GEN_TOP((*(int * PTR32 *)(this + 0x2ec))[iVar7]));
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
    if (uVar5 == param_1) {
      if (this[0x308] == (undefined1)0x0) {
        return param_2;
      }
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return param_2;
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar7 * 4)));
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    }
    iVar7 = iVar7 + 1;
    if (iVar7 < *(int *)(this + 0x10)) {
      do {
        iVar1 = iVar7 * 4;
        iVar2 = iVar7 * 4;
        iVar7 = iVar7 + 1;
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar2 + -4))) =
             *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar1)));
      } while (iVar7 < *(int *)(this + 0x10));
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) + -4 + iVar7 * 4))) = 0;
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
  }
LAB_00d1cfe9: ;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
  case 1: ;
    if (*(int *)(this + 0x18) <= *(int *)(this + 0x10)) {
LAB_00d1d0b7: ;
      if (this[0x308] != (undefined1)0x0) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
      }
      return 0;
    }
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0x80,"CDev.Engine.Sd.SoundLayout",0,0,0x10)));
    if (pvVar6 == (undefined *)0x0) {
LAB_00d1d11b: ;
      uVar5 = 0;
    }
    else {
      uVar5 = F_00d2c8e0(pvVar6,param_2,this);
    }
    break;
  case 2: ;
    if (*(int *)(this + 0x18) <= *(int *)(this + 0x10)) goto LAB_00d1d0b7;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0x80,"CDev.Engine.Sd.SoundLayout",0,0,0x10)));
    if (pvVar6 == (undefined *)0x0) goto LAB_00d1d11b;
    uVar5 = F_00d2c550(pvVar6,param_2,this);
    break;
  case 3: ;
    if (*(int *)(this + 0x18) <= *(int *)(this + 0x10)) goto LAB_00d1d0b7;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0xb0,"CDev.Engine.Sd.SoundLayout",0,0,0x10)));
    if (pvVar6 == (undefined *)0x0) goto LAB_00d1d11b;
    uVar5 = F_00d2bf90(pvVar6,param_2,this);
    break;
  default: ;
    goto switchD_00d1cff5_default;
  }
  *((uint *)GEN_TOP((*(int *)(this + 0x2ec) + *(int *)(this + 0x10) * 4))) = uVar5;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
switchD_00d1cff5_default: ;
  if (*(int *)(this + 0x14) < *(int *)(this + 0x10)) {
    *(int *)(this + 0x14) = *(int *)(this + 0x10);
  }
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return param_2;
code_r0x00d1cf5f: ;
  iVar7 = iVar7 + 1;
  piVar4 = piVar4 + 1;
  if (*(int *)(this + 0x10) <= iVar7) goto LAB_00d1cfe9;
  goto LAB_00d1cf58;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf5 */
uint F_00d1d160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1d160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2f0);
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar2 = 0;
  if (0 < *(int *)(this + 0x10)) {
    piVar3 = *(int * PTR32 *)(this + 0x2ec);
    do {
      if (*(int *)(*piVar3 + 8) == param_1) {
        uVar1 = (*(int * PTR32 *)(this + 0x2ec))[iVar2];
        if (this[0x308] != (undefined1)0x0) {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return uVar1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(this + 0x10));
  }
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_00d1d1f0 */
uint F_00d1d1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1d1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x2f0);
  *(undefined1 *)((int)this + 0x308) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    piVar3 = *(int * PTR32 *)((int)this + 0x2ec);
    do {
      if (*(int *)(*piVar3 + 8) == param_1) {
        uVar1 = (*(int * PTR32 *)((int)this + 0x2ec))[iVar2];
        if (*(char *)((int)this + 0x308) != '\0') {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return uVar1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)((int)this + 0x10));
  }
  if (*(char *)((int)this + 0x308) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf3 */
unsigned int F_00d1d280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1d280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  
  if (param_1 != 0) {
    this[0x308] = (undefined1)0x1;
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
    iVar5 = 0;
    if (0 < *(int *)(this + 0x10)) {
      piVar4 = *(int * PTR32 *)(this + 0x2ec);
LAB_00d1d2b6: ;
      if (*(int *)(*piVar4 + 8) != param_1) goto code_r0x00d1d2c0;
      puVar3 = ((undefined4 *)GEN_TOP((*(int * PTR32 *)(this + 0x2ec))[iVar5]));
      if (puVar3 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      }
      iVar5 = iVar5 + 1;
      if (iVar5 < *(int *)(this + 0x10)) {
        do {
          iVar1 = iVar5 * 4;
          iVar2 = iVar5 * 4;
          iVar5 = iVar5 + 1;
          *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar2 + -4))) =
               *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar1)));
        } while (iVar5 < *(int *)(this + 0x10));
      }
      *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) + -4 + iVar5 * 4))) = 0;
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
    }
LAB_00d1d30b: ;
    if (this[0x308] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
    }
  }
  return 0;
code_r0x00d1d2c0: ;
  iVar5 = iVar5 + 1;
  piVar4 = piVar4 + 1;
  if (*(int *)(this + 0x10) <= iVar5) goto LAB_00d1d30b;
  goto LAB_00d1d2b6;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf6 */
unsigned int F_00d1d330(unsigned int gen_a0)
{
  GEN_ENTER(0xd1d330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  iVar2 = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar2 * 4)));
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x10));
  }
  *(undefined4 *)(this + 0x10) = 0;
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf10 */
uint F_00d1d390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1d390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  piVar1 = (int *)F_00d1d1f0(this,param_1);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_2);
  }
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf11 */
byte F_00d1d3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1d3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2f0);
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)F_00d1d1f0(this,param_1);
  if (piVar1 == (int *)0x0) {
    if (this[0x308] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (byte)uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf13 */
byte F_00d1d440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1d440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2f0);
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)F_00d1d1f0(this,param_1);
  if (piVar1 == (int *)0x0) {
    if (this[0x308] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_2);
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (byte)uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf14 */
byte F_00d1d4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1d4b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0x2f0);
  *(undefined1 *)((int)param_1 + 0x308) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)F_00d1d1f0(param_1,param_2);
  if (piVar1 == (int *)0x0) {
    if (*(char *)((int)param_1 + 0x308) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  iVar2 = F_00c51673((double)*(float *)(param_3 + 0x30));
  if (iVar2 == 0) {
    iVar2 = F_00c51673((double)*(float *)(param_3 + 0x34));
    if (iVar2 == 0) {
      iVar2 = F_00c51673((double)*(float *)(param_3 + 0x38));
      if (iVar2 == 0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,param_3);
        if (*(char *)((int)param_1 + 0x308) != '\0') {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return (byte)uVar3;
      }
    }
  }
  if (*(char *)((int)param_1 + 0x308) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf15 */
byte F_00d1d580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1d580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0x2f0);
  *(undefined1 *)((int)param_1 + 0x308) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)F_00d1d1f0(param_1,param_2);
  if (piVar1 == (int *)0x0) {
    if (*(char *)((int)param_1 + 0x308) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  iVar2 = F_00c51673((double)*(float *)(param_3 + 0x30));
  if (iVar2 == 0) {
    iVar2 = F_00c51673((double)*(float *)(param_3 + 0x34));
    if (iVar2 == 0) {
      iVar2 = F_00c51673((double)*(float *)(param_3 + 0x38));
      if (iVar2 == 0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,param_3);
        if (*(char *)((int)param_1 + 0x308) != '\0') {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return (byte)uVar3;
      }
    }
  }
  if (*(char *)((int)param_1 + 0x308) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf16 */
byte F_00d1d650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1d650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2f0);
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)F_00d1d1f0(this,param_1);
  if (piVar1 == (int *)0x0) {
    if (this[0x308] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,param_2);
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (byte)uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf17 */
uint F_00d1d6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1d6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2f0);
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)F_00d1d1f0(this,param_1);
  if (piVar1 == (int *)0x0) {
    if (this[0x308] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1);
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf18 */
uint F_00d1d720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1d720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  piVar1 = (int *)F_00d1d1f0(this,param_1);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,param_2);
  }
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf1 */
byte F_00d1d770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1d770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte * pbVar1;
  int * piVar2;
  int * piVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  float10 extraout_ST0;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  ulonglong uVar14;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  iVar7 = *(int *)(this + 0x68);
  *(undefined4 *)(this + 0x68) = 0;
  (*(byte *)(gen_frame + 0xf)) = 1;
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x30) + 8))))(this + 0x30,param_1);
  (*(int *)(gen_frame + 0x8)) = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x2ec) + (*(int *)(gen_frame + 0x8)) * 4)));
      uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      if ((char)uVar5 != '\0') {
        piVar3 = *(int * PTR32 *)(this + 0x68);
        if (piVar3 != (int *)0x0) {
          uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3);
          uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2);
          if (uVar6 < uVar5) goto LAB_00d1d808;
        }
        *(int * PTR32 *)(this + 0x68) = piVar2;
      }
LAB_00d1d808: ;
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
    } while ((*(int *)(gen_frame + 0x8)) < *(int *)(this + 0x10));
  }
  piVar2 = *(int * PTR32 *)(this + 0x68);
  if (piVar2 == (int *)0x0) {
    (*(byte *)(gen_frame + 0xf)) = 0;
  }
  else {
    uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2);
    if ((char)uVar5 == '\0') {
      (*(byte *)(gen_frame + 0xf)) = 0;
    }
    else {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x68) + 0x1c))))(*(int * PTR32 *)(this + 0x68),this + 0x90);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x68) + 0x10))))(*(int * PTR32 *)(this + 0x68),this + 0x70);
      F_004eb600(this + 0x90,&(*(undefined4 *)(gen_frame + 0x68)));
      *(undefined4 *)(this + 0xd0) = (*(undefined4 *)(gen_frame + 0x68));
      *(undefined4 *)(this + 0xd4) = (*(undefined4 *)(gen_frame + 0x6c));
      *(undefined4 *)(this + 0xd8) = (*(undefined4 *)(gen_frame + 0x70));
      *(undefined4 *)(this + 0xdc) = (*(undefined4 *)(gen_frame + 0x74));
      *(undefined4 *)(this + 0xe0) = (*(undefined4 *)(gen_frame + 0x78));
      *(undefined4 *)(this + 0xe4) = (*(undefined4 *)(gen_frame + 0x7c));
      *(undefined4 *)(this + 0xe8) = (*(undefined4 *)(gen_frame + 0x80));
      *(undefined4 *)(this + 0xec) = (*(undefined4 *)(gen_frame + 0x84));
      *(undefined4 *)(this + 0xf0) = (*(undefined4 *)(gen_frame + 0x88));
      *(undefined4 *)(this + 0xf4) = (*(undefined4 *)(gen_frame + 0x8c));
      *(undefined4 *)(this + 0xf8) = (*(undefined4 *)(gen_frame + 0x90));
      *(undefined4 *)(this + 0xfc) = (*(undefined4 *)(gen_frame + 0x94));
      *(undefined4 *)(this + 0x100) = (*(undefined4 *)(gen_frame + 0x98));
      *(undefined4 *)(this + 0x104) = (*(undefined4 *)(gen_frame + 0x9c));
      *(undefined4 *)(this + 0x108) = (*(undefined4 *)(gen_frame + 0xa0));
      *(undefined4 *)(this + 0x10c) = (*(undefined4 *)(gen_frame + 0xa4));
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x68) + 0x2c))))(*(int * PTR32 *)(this + 0x68));
      if (*(uint *)(this + 0x1c) != uVar5) {
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x68) + 0x2c))))(*(int * PTR32 *)(this + 0x68));
        *(uint *)(this + 0x1c) = uVar5;
        fVar4 = REFG(float, 0x10c75a0);
        if (uVar5 == 0) {
          fVar4 = REFG(float, 0x1097250);
        }
        F_00cccd90(this + 0x30,fVar4,300);
      }
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x68) + 0x34))))(*(int * PTR32 *)(this + 0x68));
      fVar9 = (float10)(float)extraout_ST0;
      bVar8 = GEN_ISNAN((float10)*(float *)(this + 0x54)) || GEN_ISNAN(fVar9);
      if (bVar8 == (bVar8 || (float10)*(float *)(this + 0x54) == fVar9)) {
        fVar10 = (float10)*(double *)&REFG(undefined, 0x1133870);
        fVar13 = (float10)((float)GEN_TOF((fVar9 - (float10)*(float *)(this + 0x54)))) * fVar10;
        fVar11 = (float10)param_1;
        if (!(fVar13 <= fVar11) == (GEN_ISNAN(fVar11) || GEN_ISNAN(fVar13))) {
          fVar12 = ((float10)GEN_TOD(-param_1));
          if (!(fVar13 <= fVar12) || ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar13)) || fVar12 == fVar13)) {
            *(float *)(this + 0x54) =
                 ((float)GEN_TOF(((float10)*(float *)(this + 0x54) +
                        (float10)((float)GEN_TOF((fVar9 - (float10)*(float *)(this + 0x54)))))));
          }
          else {
            *(float *)(this + 0x54) =
                 ((float)GEN_TOF(((float10)*(float *)(this + 0x54) + (float10)(float)(-fVar11 / fVar10))));
          }
        }
        else {
          *(float *)(this + 0x54) =
               ((float)GEN_TOF(((float10)*(float *)(this + 0x54) + (float10)(float)(fVar11 / fVar10))));
        }
      }
    }
  }
  if (iVar7 == *(int *)(this + 0x68)) {
    this[0x6c] = (undefined1)(*((byte *)GEN_TOP((*(int *)(this + 0x68) + 0x7c))) >> 1 & 1);
  }
  else {
    this[0x6c] = (undefined1)0x1;
  }
  iVar7 = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x2ec) + iVar7 * 4))) + 0x7c)));
      *pbVar1 = *pbVar1 & 0xfd;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(this + 0x10));
  }
  if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x2f8))) != 0) {
    ((undefined4 *)(gen_frame + 0x10))[0] = 0x580203;
    uVar14 = F_00427d90();
    (*(ulonglong *)(gen_frame + 0x18)) = uVar14;
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,&(*(undefined4 *)(gen_frame + 0x68)));
    if ((char)uVar5 == '\x01') {
      (*(undefined4 *)(gen_frame + 0x2c)) = (*(undefined4 *)(gen_frame + 0x6c));
      (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 *)(gen_frame + 0x68));
      (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 *)(gen_frame + 0x78));
      (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 *)(gen_frame + 0x70));
      (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 *)(gen_frame + 0x74));
      (*(undefined4 *)(gen_frame + 0x44)) = (*(undefined4 *)(gen_frame + 0x84));
      (*(undefined4 *)(gen_frame + 0x3c)) = (*(undefined4 *)(gen_frame + 0x7c));
      (*(undefined4 *)(gen_frame + 0x40)) = (*(undefined4 *)(gen_frame + 0x80));
      (*(undefined4 *)(gen_frame + 0x50)) = (*(undefined4 *)(gen_frame + 0x90));
      (*(undefined4 *)(gen_frame + 0x48)) = (*(undefined4 *)(gen_frame + 0x88));
      (*(undefined4 *)(gen_frame + 0x4c)) = (*(undefined4 *)(gen_frame + 0x8c));
      (*(undefined4 *)(gen_frame + 0x5c)) = (*(undefined4 *)(gen_frame + 0x9c));
      (*(undefined4 *)(gen_frame + 0x54)) = (*(undefined4 *)(gen_frame + 0x94));
      (*(undefined4 *)(gen_frame + 0x58)) = (*(undefined4 *)(gen_frame + 0x98));
      (*(undefined4 *)(gen_frame + 0x60)) = (*(undefined4 *)(gen_frame + 0xa0));
      (*(undefined4 *)(gen_frame + 0x64)) = (*(undefined4 *)(gen_frame + 0xa4));
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_00d00b10(*(undefined * PTR32 *)(this + 4),((undefined4 *)(gen_frame + 0x10)),0x58);
    }
  }
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return (*(byte *)(gen_frame + 0xf));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf41 */
uint F_00d1db20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1db20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  float fVar2;
  undefined1 LVar3;
  float10 fVar4;
  int iVar5;
  uint uVar6;
  undefined * pLVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar5 = 0;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar7 = this + param_1 * 0x18 + 0x1fc;
    do {
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(undefined4 *)pLVar7 = *(undefined4 *)(param_2 + iVar1);
      pLVar7 = pLVar7 + 4;
    } while (iVar5 < (int)(uint)(byte)this[param_1 * 2 + 0x1f2]);
  }
  iVar5 = 0;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    fVar4 = (float10)0;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + param_1 * 0x18 + 0x1fc;
    fVar8 = (float10)REFG(double, 0x10920b8);
    do {
      fVar9 = (float10)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x0));
      if (fVar4 <= fVar9) {
        fVar10 = fVar9 + (float10)*(double *)&REFG(undefined, 0x1080228);
      }
      else {
        fVar10 = fVar9 - (float10)*(double *)&REFG(undefined, 0x1080228);
      }
      fVar2 = ((float)GEN_TOF((fVar9 - (float10)(int)(fVar10 / fVar8) * fVar8)));
      fVar9 = (float10)fVar2;
      *(float *)(((undefined1 *)(gen_frame + 0xc)) + iVar5 * 8 + -4) = fVar2;
      if (!(fVar4 <= fVar9) != (GEN_ISNAN(fVar9) || GEN_ISNAN(fVar4))) {
        *(float *)(((undefined1 *)(gen_frame + 0xc)) + iVar5 * 8 + -4) = (float)(fVar9 + fVar8);
      }
      LVar3 = this[param_1 * 2 + 0x1f2];
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
      *(int *)(((undefined1 *)(gen_frame + 0xc)) + iVar5 * 8) = iVar5;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)(byte)LVar3);
  }
  F_00c4f040(((undefined1 *)(gen_frame + 0x8)),(uint)(byte)this[param_1 * 2 + 0x1f2],8,((code *)REFP(0xd1bdf0)));
  uVar6 = 0;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar7 = this + param_1 * 0x18 + 0x1fc;
    do {
      LVar3 = ((undefined1 *)(gen_frame + 0xc))[(int)(uVar6 * 8)];
      *(undefined4 *)pLVar7 = *(undefined4 *)(((undefined1 *)(gen_frame + 0xc)) + uVar6 * 8 + -4);
      this[uVar6 + (param_1 * 3 + 0xea) * 2] = LVar3;
      uVar6 = uVar6 + 1;
      pLVar7 = pLVar7 + 4;
    } while ((int)uVar6 < (int)(uint)(byte)this[param_1 * 2 + 0x1f2]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar6;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf49 */
uint F_00d1dc70(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd1dc70u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((code *)*(gen_code32 *)(*param_1 + 0xbc))(param_1,(undefined4)gen_fl2bits(param_2),((undefined1 *)(gen_frame + 0x8)));
  F_00d1c520(param_1,param_3,((undefined1 *)(gen_frame + 0x8)),(float)(float10)0);
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x78))(param_1,param_4,&(*(undefined1 *)(gen_frame + 0x7)));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf50 */
byte F_00d1dce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd1dce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  undefined4 * puVar2;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,((undefined1 *)(gen_frame + 0x28)));
  if ((char)uVar1 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  puVar2 = (undefined4 *)F_00c34320(((undefined1 *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x4)),param_1);
  (*(undefined4 *)(gen_frame + 0x18)) = puVar2[1];
  (*(undefined4 *)(gen_frame + 0x14)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0x1c)) = puVar2[2];
  (*(undefined4 *)(gen_frame + 0x20)) = puVar2[3];
  F_00d1c520(this,param_2,&(*(undefined4 *)(gen_frame + 0x14)),(float)(float10)0);
  ((code *)*(gen_code32 *)(*(int *)this + 0x78))(this,param_3,&(*(undefined1 *)(gen_frame + 0x27)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf48 */
uint F_00d1dd80(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd1dd80u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float fVar1;
  float fVar2;
  byte bVar3;
  float10 fVar4;
  uint uVar5;
  uint extraout_EAX = 0;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  
  uVar5 = param_5;
  fVar2 = *(float *)&REFG(undefined, 0x11335a8);
  fVar1 = REFG(float, 0x1097250);
  bVar3 = *(byte *)(param_5 + 0xc);
  if ((bVar3 & 8) != 0) {
    fVar7 = (float10)0;
    *param_6 = (float)fVar7;
    param_6[1] = (float)fVar7;
    param_6[2] = (float)fVar7;
    param_6[3] = GEN_FLT_TO(param_6[3], REFG(float, 0x1097250));
    param_6[4] = (float)fVar7;
    param_6[5] = (float)fVar7;
    param_6[6] = (float)fVar7;
    param_6[7] = (float)fVar7;
    return (uint)param_6;
  }
  bVar6 = GEN_ISNAN((float10)REFG(float, 0x1097250)) || GEN_ISNAN((float10)*(float *)(param_5 + 4));
  if (bVar6 == (bVar6 || (float10)REFG(float, 0x1097250) == (float10)*(float *)(param_5 + 4))) {
    if ((bVar3 & 1) == 0) {
      if ((bVar3 & 2) == 0) {
        fVar1 = (float)((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1094620) -
                       (float10)*(double *)&REFG(undefined, 0x1094620));
        fVar2 = *(float *)param_5;
        fVar7 = (float10)1;
        fVar4 = (float10)0;
        fVar8 = (float10)(float)((float10)param_3 * (float10)*(double *)&REFG(undefined, 0x10944c0) + fVar7);
        param_5 = (uint)gen_fl2bits(fVar1);
        if (!(fVar4 <= fVar8) != (GEN_ISNAN(fVar8) || GEN_ISNAN(fVar4))) {
          param_5 = (uint)gen_fl2bits((float)((float10)fVar1 + (float10)*(double *)&REFG(undefined, 0x1080228)));
          fVar8 = (float10)((float)GEN_TOF(-fVar8));
        }
        param_2 = ((float)GEN_TOF((fVar7 - (float10)((float)GEN_TOF(((fVar7 - (float10)fVar2) * fVar8))))));
        fVar7 = (float10)param_2;
        if (fVar7 <= fVar4 && ((!GEN_ISNAN(fVar4) && !GEN_ISNAN(fVar7)) && fVar4 != fVar7)) {
          param_2 = (float)fVar4;
        }
        fVar8 = ((float10)GEN_TOD(gen_bits2f(param_5)));
        fVar7 = (float10)REFG(double, 0x10920b8);
        if (!(fVar8 <= fVar7) == (GEN_ISNAN(fVar7) || GEN_ISNAN(fVar8))) {
          if (fVar8 <= fVar4) {
            fVar8 = (float10)(float)(fVar8 + fVar7);
          }
        }
        else {
          fVar8 = (float10)(float)(fVar8 - fVar7);
        }
        F_00d1c830(param_1,param_6,(float)fVar8,param_2,param_4,bVar3 >> 4 & 1);
        if ((*(byte *)(uVar5 + 0xc) & 4) != 0) {
          fVar7 = (float10)*(double *)&REFG(undefined, 0x1133878);
          param_6[4] = (float)((float10)param_6[4] + (float10)*param_6 * fVar7);
          param_6[5] = (float)(fVar7 * (float10)param_6[1] + (float10)param_6[5]);
        }
        return extraout_EAX;
      }
      *param_6 = *(float *)&REFG(undefined, 0x11335a8);
      param_6[1] = fVar2;
      fVar7 = (float10)0;
      param_6[2] = (float)fVar7;
    }
    else {
      fVar7 = (float10)*(float *)&REFG(undefined, 0x11335a8);
      *param_6 = *(float *)&REFG(undefined, 0x11335a8);
      param_6[1] = fVar2;
      param_6[2] = (float)(float10)0;
    }
    param_6[3] = *(float *)&REFG(undefined, 0x11335a0);
    param_6[4] = (float)fVar7;
    param_6[5] = (float)fVar7;
    param_6[6] = (float)fVar7;
    param_6[7] = (float)fVar7;
    return (uint)param_6;
  }
  fVar7 = (float10)0;
  *param_6 = (float)fVar7;
  param_6[1] = (float)fVar7;
  param_6[3] = (float)fVar7;
  param_6[4] = (float)fVar7;
  param_6[5] = (float)fVar7;
  param_6[6] = (float)fVar7;
  param_6[7] = (float)fVar7;
  param_6[2] = fVar1;
  return (uint)param_6;
}

/* ref: FUN_00d1df30 */
unsigned int F_00d1df30(unsigned int gen_a0)
{
  GEN_ENTER(0xd1df30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  *(undefined1 *)((int)this + 0x308) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f0));
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2ec) + iVar2 * 4)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x10));
  }
  if (*(char *)((int)this + 0x308) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f0));
  }
  return 0;
}

/* ref: FUN_00d1df80 */
byte F_00d1df80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1df80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  short sVar1;
  uint uVar2;
  int * piVar3;
  
  sVar1 = *param_1;
  if (sVar1 == 5) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 8))
                      (this,(uint)*(byte *)(param_1 + 8),*(undefined4 *)(param_1 + 2));
    piVar3 = (int *)F_00d1d1f0(this,uVar2);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x58))(piVar3,param_1 + 8);
    }
    return 1;
  }
  if (sVar1 != 6) {
    if (sVar1 != 8) {
      return 0;
    }
    F_00d1ce10(this,param_1);
    return 1;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,*(undefined4 *)(param_1 + 2));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf54 */
uint F_00d1e000(unsigned int gen_a0)
{
  GEN_ENTER(0xd1e000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  undefined4 uVar1;
  undefined1 LVar2;
  uint uVar3;
  undefined * pLVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined * pLVar7;
  undefined * pLVar8;
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0xe4))))(*(int * PTR32 *)(this + 4));
  if ((char)uVar3 != '\0') {
    (*(undefined1 *)(gen_frame + 0xd)) = this[0x150];
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this + 499;
    (*(undefined1 *)(gen_frame + 0xc)) = this[0xc];
    (*(char * PTR32 *)(gen_frame + 0x8)) = ((char *)REFP(0x12fffdc)) + 0x2c;
    iVar6 = 0;
    pLVar7 = ((undefined1 *)(gen_frame + 0x109));
    pLVar8 = this + 0x1d5;
    puVar5 = ((undefined4 *)(gen_frame + 0x90));
    pLVar4 = this + 0x274;
    do {
      uVar1 = *(undefined4 *)(pLVar4 + -0x78);
      ((undefined1 *)(gen_frame + 0xe))[(int)(iVar6 * 2)] = (*(undefined * PTR32 *)(gen_frame + 0x4))[-1];
      ((undefined1 *)(gen_frame + 0xe))[(int)(iVar6 * 2 + 1)] = *(*(undefined * PTR32 *)(gen_frame + 0x4));
      LVar2 = pLVar8[-1];
      puVar5[-0x1e] = uVar1;
      *puVar5 = *(undefined4 *)pLVar4;
      pLVar7[-1] = LVar2;
      LVar2 = *(undefined1 *)pLVar8;
      puVar5[-0x1d] = *(undefined4 *)(pLVar4 + -0x74);
      puVar5[1] = *(undefined4 *)(pLVar4 + 4);
      *(undefined1 *)pLVar7 = LVar2;
      LVar2 = pLVar8[1];
      puVar5[-0x1c] = *(undefined4 *)(pLVar4 + -0x70);
      puVar5[2] = *(undefined4 *)(pLVar4 + 8);
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x4)) + 2;
      uVar1 = *(undefined4 *)(pLVar4 + -0x6c);
      pLVar7[1] = LVar2;
      LVar2 = pLVar8[2];
      puVar5[-0x1b] = uVar1;
      puVar5[3] = *(undefined4 *)(pLVar4 + 0xc);
      pLVar7[2] = LVar2;
      LVar2 = pLVar8[3];
      puVar5[-0x1a] = *(undefined4 *)(pLVar4 + -0x68);
      puVar5[4] = *(undefined4 *)(pLVar4 + 0x10);
      pLVar7[3] = LVar2;
      LVar2 = pLVar8[4];
      puVar5[-0x19] = *(undefined4 *)(pLVar4 + -100);
      puVar5[5] = *(undefined4 *)(pLVar4 + 0x14);
      pLVar7[4] = LVar2;
      iVar6 = iVar6 + 1;
      pLVar7 = pLVar7 + 6;
      pLVar4 = pLVar4 + 0x18;
      puVar5 = puVar5 + 6;
      pLVar8 = pLVar8 + 6;
    } while (iVar6 < 5);
    (*(undefined4 *)(gen_frame + 0x12c)) = 0;
    (*(undefined4 *)(gen_frame + 0x130)) = 0;
    (*(undefined4 *)(gen_frame + 0x134)) = 0;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0xf4))))(*(int * PTR32 *)(this + 4));
    if (uVar3 == 0) {
      F_00d1e710(&(*(char * PTR32 *)(gen_frame + 0x8)),&(*(char * PTR32 *)(gen_frame + 0x8)));
    }
    uVar3 = F_00d00af0(*(undefined * PTR32 *)(this + 4),&(*(char * PTR32 *)(gen_frame + 0x8)),0x130);
  }
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
  return uVar3;
}

/* ref: FUN_00d1e180 */
uint F_00d1e180(unsigned int gen_a0)
{
  GEN_ENTER(0xd1e180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x1133884));
  F_00d1d330(this);
  if (*(int *)((int)this + 0x2ec) != 0) {
    F_00406810(*(int *)((int)this + 0x2ec));
    *(undefined4 *)((int)this + 0x2ec) = 0;
  }
  F_00d2bc40((int)this + 0x30c);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f0));
  F_00cccb40((int)this + 0x30);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x1133784));
  return extraout_EAX;
}

/* ref: FUN_00d1e1e0 */
uint F_00d1e1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd1e1e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return extraout_EAX;
}

/* ref: FUN_00d1e280 */
uint F_00d1e280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1e280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  code * pcVar1;
  float10 fVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  int * piVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x1133884));
  F_00cccb10((int)this + 0x30,(float)(float10)0);
  *(float *)((int)this + 0x58) = (float)(float10)0;
  *(float *)((int)this + 0x5c) = (float)(float10)0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f0));
  *(undefined1 *)((int)this + 0x308) = 1;
  F_00d2bb90((undefined *)((int)this + 0x30c));
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x30) + 4)));
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  (*pcVar1)((int)this + 0x30,REFG(float, 0x1097250));
  fVar2 = (float10)0;
  *(float *)((int)this + 0x54) = (float)fVar2;
  *(float *)((int)this + 0x20) = (float)fVar2;
  *(undefined2 *)((int)this + 0x6c) = 1;
  *(float *)((int)this + 0x24) = (float)fVar2;
  *(float *)((int)this + 0x28) = (float)fVar2;
  *(float *)((int)this + 0x2c) = (float)fVar2;
  *(float *)((int)this + 0x70) = (float)fVar2;
  *(float *)((int)this + 0x74) = (float)fVar2;
  *(float *)((int)this + 0x78) = (float)fVar2;
  *(float *)((int)this + 0x7c) = (float)fVar2;
  *(float *)((int)this + 0x80) = (float)fVar2;
  *(float *)((int)this + 0x84) = (float)fVar2;
  *(float *)((int)this + 0x88) = (float)fVar2;
  *(float *)((int)this + 0x8c) = (float)fVar2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(int *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c),param_1 * 4,"CDev.Engine.Sd.SoundLayout",0,0,0x10);
  *(uint *)((int)this + 0x2ec) = uVar3;
  if (uVar3 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xd1e1e0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x1133688),"","Listener\\ListenerManager.cpp",0x69,
                    "SQEX::CDev::Engine::Sd::Layout::ListenerManager::ListenerManager");
  }
  else {
    iVar4 = 0;
    if (0 < *(int *)((int)this + 0x18)) {
      do {
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2ec) + iVar4 * 4))) = 0;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)((int)this + 0x18));
    }
  }
  iVar4 = 0;
  do {
    F_00d1c1d0(this,iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  F_00d1ba90(this,0);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)&REFG(undefined, 0x11335ac);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)&REFG(undefined, 0x11335b0);
  puVar5 = (undefined4 *)F_004ec420(((undefined1 *)(gen_frame + 0x8)));
  *(undefined4 *)((int)this + 0x90) = *puVar5;
  *(undefined4 *)((int)this + 0x94) = puVar5[1];
  *(undefined4 *)((int)this + 0x98) = puVar5[2];
  *(undefined4 *)((int)this + 0x9c) = puVar5[3];
  *(undefined4 *)((int)this + 0xa0) = puVar5[4];
  *(undefined4 *)((int)this + 0xa4) = puVar5[5];
  *(undefined4 *)((int)this + 0xa8) = puVar5[6];
  *(undefined4 *)((int)this + 0xac) = puVar5[7];
  *(undefined4 *)((int)this + 0xb0) = puVar5[8];
  *(undefined4 *)((int)this + 0xb4) = puVar5[9];
  *(undefined4 *)((int)this + 0xb8) = puVar5[10];
  *(undefined4 *)((int)this + 0xbc) = puVar5[0xb];
  *(undefined4 *)((int)this + 0xc0) = puVar5[0xc];
  *(undefined4 *)((int)this + 0xc4) = puVar5[0xd];
  *(undefined4 *)((int)this + 200) = puVar5[0xe];
  *(undefined4 *)((int)this + 0xcc) = puVar5[0xf];
  puVar5 = (undefined4 *)F_004ec420(((undefined1 *)(gen_frame + 0x8)));
  *(undefined4 *)((int)this + 0xd0) = *puVar5;
  *(undefined4 *)((int)this + 0xd4) = puVar5[1];
  *(undefined4 *)((int)this + 0xd8) = puVar5[2];
  *(undefined4 *)((int)this + 0xdc) = puVar5[3];
  *(undefined4 *)((int)this + 0xe0) = puVar5[4];
  *(undefined4 *)((int)this + 0xe4) = puVar5[5];
  *(undefined4 *)((int)this + 0xe8) = puVar5[6];
  *(undefined4 *)((int)this + 0xec) = puVar5[7];
  *(undefined4 *)((int)this + 0xf0) = puVar5[8];
  *(undefined4 *)((int)this + 0xf4) = puVar5[9];
  *(undefined4 *)((int)this + 0xf8) = puVar5[10];
  *(undefined4 *)((int)this + 0xfc) = puVar5[0xb];
  *(undefined4 *)((int)this + 0x100) = puVar5[0xc];
  *(undefined4 *)((int)this + 0x104) = puVar5[0xd];
  *(undefined4 *)((int)this + 0x108) = puVar5[0xe];
  *(undefined4 *)((int)this + 0x10c) = puVar5[0xf];
  uVar3 = F_00d1cf10(this,2,0xffffffff);
  piVar6 = (int *)F_00d1d160(this,uVar3);
  if (piVar6 != (int *)0x0) {
    F_004ec420(((undefined1 *)(gen_frame + 0x8)));
    ((code *)*(gen_code32 *)(*piVar6 + 0x14))(piVar6,((undefined1 *)(gen_frame + 0x8)));
    ((code *)*(gen_code32 *)(*piVar6 + 0x20))(piVar6,0);
    ((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6,1);
  }
  *(float *)((int)this + 0x3a0) = (float)(float10)0;
  *(undefined1 *)((int)this + 0x39c) = 0;
  *(float *)((int)this + 0x3b0) = (float)(float10)0;
  *(undefined1 *)((int)this + 0x3a4) = 0;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::IListenerManager::vf0 */
uint F_00d1e5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1e5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x1133784));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00d1e650 */
uint F_00d1e650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1e650u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  F_004eb600(param_2,param_1);
  return param_1;
}

/* ref: FUN_00d1e670 */
unsigned int F_00d1e670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1e670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined2 *)this;
  param_1[1] = *(undefined2 *)((int)this + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((int)this + 0x30);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)((int)this + 0x34);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)this + 0x38);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)((int)this + 0x3c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((int)this + 0x40);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)((int)this + 0x44);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((int)this + 0x48);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)((int)this + 0x4c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)((int)this + 0x54);
  return 0;
}

/* ref: FUN_00d1e710 */
uint F_00d1e710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1e710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  ushort * puVar3;
  uint * puVar4;
  int iVar5;
  ushort * puVar6;
  uint * puVar7;
  int local_14;
  int local_10;
  undefined1 * local_c;
  
  *param_1 = *(ushort *)((int)(uintptr_t)this) << 8 | *(ushort *)((int)(uintptr_t)this) >> 8;
  param_1[1] = *(ushort *)((int)this + 2) << 8 | *(ushort *)((int)this + 2) >> 8;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)this + 4);
  *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)((int)this + 5);
  local_c = (undefined1 *)((int)this + 7);
  puVar7 = (uint *)((int)this + 0x88);
  puVar2 = (uint *)(param_1 + 8);
  puVar6 = param_1 + 0x80;
  puVar3 = param_1 + 3;
  iVar5 = (int)this - (int)param_1;
  local_14 = 5;
  do {
    *(undefined1 *)puVar3 = *(undefined1 *)((int)puVar3 + iVar5);
    *(undefined1 *)((int)puVar3 + 1) = *local_c;
    local_10 = 6;
    puVar4 = puVar2;
    do {
      uVar1 = *(uint *)(iVar5 + (int)puVar4);
      *puVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar1 = *puVar7;
      puVar2 = puVar4 + 1;
      puVar4[0x1e] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
      ;
      *(undefined1 *)puVar6 = *(undefined1 *)(iVar5 + (int)puVar6);
      puVar7 = puVar7 + 1;
      puVar6 = (ushort *)((int)puVar6 + 1);
      local_10 = local_10 + -1;
      puVar4 = puVar2;
    } while (local_10 != 0);
    local_c = local_c + 2;
    puVar3 = puVar3 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)((int)this + 0x120);
  param_1[0x8f] = 0;
  puVar3 = param_1;
  puVar3[0x92] = 0;
  puVar3[0x93] = 0;
  puVar3[0x94] = 0;
  puVar3[0x95] = 0;
  puVar3[0x96] = 0;
  puVar3[0x97] = 0;
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf21 */
byte F_00d1e820(unsigned int gen_a0)
{
  GEN_ENTER(0xd1e820u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x6c);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf28 */
uint F_00d1e830(unsigned int gen_a0)
{
  GEN_ENTER(0xd1e830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x150);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf52 */
uint F_00d1e840(unsigned int gen_a0)
{
  GEN_ENTER(0xd1e840u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30c;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf0 */
uint F_00d1e850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1e850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x1133884));
  F_00d1d330(this);
  if (*(int *)(this + 0x2ec) != 0) {
    F_00406810(*(int *)(this + 0x2ec));
    *(undefined4 *)(this + 0x2ec) = 0;
  }
  F_00d2bc40(this + 0x30c);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  F_00cccb40(this + 0x30);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x1133784));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf1 */
uint F_00d1e8c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd1e8c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
  *(undefined4 *)(this + 300) = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(this + 0x130) = *(undefined4 *)(iVar6 + 0x24);
  *(undefined4 *)(this + 0x134) = *(undefined4 *)(iVar6 + 0x28);
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(iVar6 + 0x2c);
  iVar6 = *(int *)(this + 0x128);
  *(undefined4 *)(this + 0x13c) = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(this + 0x140) = *(undefined4 *)(iVar6 + 0x24);
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(iVar6 + 0x28);
  *(undefined4 *)(this + 0x148) = *(undefined4 *)(iVar6 + 0x2c);
  iVar6 = 0x30;
  do {
    iVar5 = *(int *)(this + 0x128);
    uVar4 = *(undefined4 *)(iVar5 + 8 + iVar6);
    (*(undefined4 *)((char *)&auVar7 + 4)) = uVar4;
    (*(undefined4 *)((char *)&auVar7 + 0)) = *(undefined4 *)(iVar5 + iVar6);
    (*(undefined4 *)((char *)&auVar7 + 8)) = uVar4;
    (*(undefined4 *)((char *)&auVar7 + 12)) = *(undefined4 *)(iVar5 + 0xc + iVar6);
    (*(undefined8 *)((char *)&auVar8 + 8)) = (*(undefined8 *)((char *)&auVar7 + 8));
    (*(undefined4 *)((char *)&auVar8 + 4)) = *(undefined4 *)(iVar5 + 4 + iVar6);
    (*(undefined4 *)((char *)&auVar8 + 0)) = *(undefined4 *)(iVar5 + iVar6);
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
    uVar4 = *(undefined4 *)(iVar5 + 8 + iVar6);
    puVar2 = (undefined4 *)(iVar5 + 0xc + iVar6);
    puVar1 = (undefined4 *)(iVar5 + iVar6);
    puVar3 = (undefined4 *)(iVar5 + 4 + iVar6);
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

/* ref: FUN_00d1eaa0 */
uint F_00d1eaa0(unsigned int gen_a0)
{
  GEN_ENTER(0xd1eaa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133acc));
  F_00cccb40((int)this + 0x14c);
  uVar1 = F_00d23680(this);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf2 */
uint F_00d1eac0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xd1eac0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  F_00d211a0(param_1,param_2,param_3,param_4);
  F_00cccbd0(param_1 + 0x14c,param_4);
  F_00cccd90(param_1 + 0x14c,param_3,param_2);
  return REFG(undefined4, 0x11299e4);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf4 */
uint F_00d1eb10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1eb10u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cccd90(param_1 + 0x14c,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf9 */
uint F_00d1eb30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1eb30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
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
  
  F_00d213b0(this,param_1,param_2);
  iVar11 = 0;
  do {
    iVar9 = *(int *)(this + 0x128);
    fVar4 = *(float *)(iVar9 + 0x28 + iVar11);
    fVar5 = *(float *)(iVar9 + 0x2c + iVar11);
    pfVar1 = (float *)(iVar9 + 0x20 + iVar11);
    pfVar2 = (float *)(iVar9 + 0x24 + iVar11);
    fVar6 = param_1[3];
    pfVar3 = (float *)(iVar9 + 0x20 + iVar11);
    iVar11 = iVar11 + 0x10;
    fVar7 = param_1[1];
    fVar8 = param_1[2];
    *pfVar3 = *pfVar1 + *param_1;
    pfVar3[1] = *pfVar2 + fVar7;
    pfVar3[2] = fVar4 + fVar8;
    pfVar3[3] = fVar5 + fVar6;
    *((float *)GEN_TOP((*(int *)(this + 0x128) + 0x1c + iVar11))) = (float)(float10)1;
  } while (iVar11 < 0x40);
  uVar10 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  return uVar10;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf14 */
byte F_00d1ec10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1ec10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this,0x406);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))));
  if ((char)uVar1 == '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x14c) + 8))))(this + 0x14c,param_1);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf15 */
byte F_00d1ec50(void)
{
  GEN_ENTER(0xd1ec50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf21 */
byte F_00d1ec60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1ec60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
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

/* ref: FUN_00d1ecf0 */
byte F_00d1ecf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1ecf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  float * pfVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float fVar16;
  
  uVar6 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10);
  (*(uint *)(gen_frame + 0xc)) = uVar6;
  fVar1 = param_1[2];
  fVar2 = *param_1;
  iVar4 = *(int *)((int)this + 0x128);
  fVar3 = param_2[2];
  fVar16 = *param_2;
  ((byte *)(gen_frame + 0x4))[0] = 0;
  ((byte *)(gen_frame + 0x4))[1] = 1;
  ((byte *)(gen_frame + 0x4))[2] = 1;
  ((byte *)(gen_frame + 0x4))[3] = 2;
  ((byte *)(gen_frame + 0x4))[4] = 2;
  ((byte *)(gen_frame + 0x4))[5] = 3;
  ((byte *)(gen_frame + 0x4))[6] = 3;
  ((byte *)(gen_frame + 0x4))[7] = 0;
  iVar9 = 0;
  fVar16 = fVar16 - fVar2;
  fVar10 = (float10)(fVar3 - fVar1);
  while( true ) {
    iVar7 = (((byte *)(gen_frame + 0x4))[(int)(iVar9 * 2)] + 2) * 0x10;
    fVar3 = *(float *)(iVar7 + iVar4);
    fVar5 = *(float *)(iVar7 + iVar4 + 8);
    pfVar8 = ((float *)GEN_TOP(((((byte *)(gen_frame + 0x4))[(int)(iVar9 * 2 + 1)] + 2) * 0x10 + iVar4)));
    fVar11 = (float10)(pfVar8[2] - fVar5);
    fVar12 = (float10)(*pfVar8 - fVar3);
    fVar13 = (float10)(float)(fVar11 * (float10)fVar16 - fVar12 * fVar10);
    fVar14 = (float10)(fVar3 - fVar2);
    fVar15 = (float10)(fVar5 - fVar1);
    fVar11 = (float10)((float)GEN_TOF(((fVar14 * fVar11 - fVar15 * fVar12) / fVar13)));
    if (((((float10)0 <= fVar11) && (fVar11 <= (float10)1)) &&
        (fVar11 = (float10)((float)GEN_TOF(((fVar14 * fVar10 - (float10)fVar16 * fVar15) / fVar13))),
        (float10)0 <= fVar11)) && (!((float10)1 <= fVar11))) break;
    iVar9 = iVar9 + 1;
    if (3 < iVar9) {
      F_00c47745(uVar6 ^ (uint)(uint)(gen_frame + 0x10));
      return 0;
    }
  }
  F_00c47745(uVar6 ^ (uint)(uint)(gen_frame + 0x10));
  return 1;
}

/* ref: FUN_00d1eee0 */
uint F_00d1eee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1eee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
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
  uint uVar11;
  float * pfVar12;
  float * pfVar13;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  
  uVar11 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(uint *)(gen_frame + 0x5c)) = uVar11;
  iVar14 = *(int *)((int)this + 0x128);
  fVar9 = (float10)0;
  fVar15 = (float10)((float)GEN_TOF(((float10)param_1[1] - (float10)*(float *)(iVar14 + 0x24))));
  if (!(fVar9 <= fVar15) || ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar9)) || fVar15 == fVar9)) {
    if ((!(fVar9 <= fVar15) != (GEN_ISNAN(fVar15) || GEN_ISNAN(fVar9))) && ((*(byte *)(iVar14 + 4) & 0x10) == 0)
       ) {
      fVar16 = (float10)*(float *)(iVar14 + 100);
      fVar15 = -fVar15;
      if (fVar16 <= fVar15 && ((!GEN_ISNAN(fVar15) && !GEN_ISNAN(fVar16)) && fVar15 != fVar16)) {
        F_00c47745(uVar11 ^ (uint)(uint)(gen_frame + 0x60));
        return 0xfffffffe;
      }
    }
  }
  else if (((*(byte *)(iVar14 + 4) & 8) == 0) &&
          (!(fVar15 <= (float10)*(float *)(iVar14 + 0x60)) !=
           (GEN_ISNAN((float10)*(float *)(iVar14 + 0x60)) || GEN_ISNAN(fVar15)))) {
    F_00c47745(uVar11 ^ (uint)(uint)(gen_frame + 0x60));
    return 0xffffffff;
  }
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  pfVar13 = (float *)(iVar14 + 0x20);
  iVar14 = 4;
  pfVar12 = ((float *)(gen_frame + 0x18)) + 1;
  do {
    fVar5 = *pfVar13;
    fVar6 = pfVar13[1];
    fVar7 = pfVar13[2];
    fVar8 = pfVar13[3];
    pfVar13 = pfVar13 + 4;
    iVar14 = iVar14 + -1;
    (*(float *)(gen_frame + 0x0)) = fVar1 - fVar5;
    (*(float *)(gen_frame + 0x4)) = fVar2 - fVar6;
    (*(float *)(gen_frame + 0x8)) = fVar3 - fVar7;
    (*(float *)(gen_frame + 0xc)) = fVar4 - fVar8;
    pfVar12[-1] = fVar1 - fVar5;
    pfVar12[1] = fVar3 - fVar7;
    pfVar12[2] = fVar4 - fVar8;
    *pfVar12 = (float)fVar9;
    pfVar12 = pfVar12 + 4;
  } while (iVar14 != 0);
  F_01052f50(((float *)(gen_frame + 0x18)),&(*(float *)(gen_frame + 0x0)));
  bVar10 = F_01053270(((float *)(gen_frame + 0x18)),&(*(float *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return (uint)(bVar10 != 0);
}

/* ref: FUN_00d1f050 */
float F_00d1f050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1f050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  bool bVar8;
  float * pfVar9;
  float * pfVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  fVar17 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  pfVar9 = ((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x20)));
  iVar11 = 4;
  pfVar10 = ((float *)(gen_frame + 0x28)) + 1;
  do {
    fVar14 = *pfVar9;
    fVar6 = pfVar9[1];
    pfVar1 = pfVar9 + 2;
    pfVar2 = pfVar9 + 3;
    pfVar9 = pfVar9 + 4;
    iVar11 = iVar11 + -1;
    fVar14 = fVar14 - fVar17;
    fVar15 = *pfVar1 - fVar4;
    fVar16 = *pfVar2 - fVar5;
    (*(float *)(gen_frame + 0x10)) = fVar14;
    (*(float *)(gen_frame + 0x14)) = fVar6 - fVar3;
    (*(float *)(gen_frame + 0x18)) = fVar15;
    (*(float *)(gen_frame + 0x1c)) = fVar16;
    (*(float *)(gen_frame + 0x6c)) = fVar14;
    pfVar10[-1] = fVar14;
    (*(float *)(gen_frame + 0x70)) = fVar6 - fVar3;
    (*(float *)(gen_frame + 0x74)) = fVar15;
    pfVar10[1] = fVar15;
    (*(float *)(gen_frame + 0x78)) = fVar16;
    pfVar10[2] = fVar16;
    *pfVar10 = (float)(float10)0;
    pfVar10 = pfVar10 + 4;
  } while (iVar11 != 0);
  (*(float *)(gen_frame + 0x8)) = (float)(float10)0;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x78)) + 0)) = 1;
  (*(float *)(gen_frame + 0x74)) = 3.7616967e-37;
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x78)) + 1)) = 0x302;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x78)) + 3)) = 2;
  (*(float *)(gen_frame + 0x78)) = 9.624935e-38;
  bVar8 = false;
  iVar11 = 0;
  do {
    fVar17 = F_010536a0(((float *)(gen_frame + 0x28)) + (uint)*(byte *)((int)&(*(float *)(gen_frame + 0x74)) + iVar11 * 2) * 4,
                          ((float *)(gen_frame + 0x28)) + (uint)*(byte *)((int)&(*(float *)(gen_frame + 0x74)) + iVar11 * 2 + 1) * 4,&(*(float *)(gen_frame + 0x10)))
    ;
    fVar12 = (float10)fVar17;
    if (bVar8) {
      fVar13 = (float10)(*(float *)(gen_frame + 0x8));
      if (fVar12 <= fVar13 && ((!GEN_ISNAN(fVar13) && !GEN_ISNAN(fVar12)) && fVar13 != fVar12)) {
        (*(float *)(gen_frame + 0x8)) = fVar17;
      }
    }
    else {
      bVar8 = true;
      (*(float *)(gen_frame + 0x8)) = fVar17;
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 4);
  bVar7 = *((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 4)));
  if ((bVar7 & 8) == 0) {
    fVar12 = (float10)((float)GEN_TOF((((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x60))) +
                              (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x24)))) -
                             (float10)param_1[1])));
    if (!((float10)0 <= fVar12) != (GEN_ISNAN(fVar12) || GEN_ISNAN((float10)0))) {
      fVar12 = (float10)((float)GEN_TOF(-fVar12));
    }
    fVar13 = (float10)(*(float *)(gen_frame + 0x8));
    if (fVar12 <= fVar13 && ((!GEN_ISNAN(fVar13) && !GEN_ISNAN(fVar12)) && fVar13 != fVar12)) {
      (*(float *)(gen_frame + 0x8)) = (float)fVar12;
    }
  }
  if ((bVar7 & 0x10) == 0) {
    fVar12 = (float10)((float)GEN_TOF((((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x24))) -
                              (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 100)))) -
                             (float10)param_1[1])));
    if (!((float10)0 <= fVar12) != (GEN_ISNAN(fVar12) || GEN_ISNAN((float10)0))) {
      fVar12 = (float10)((float)GEN_TOF(-fVar12));
    }
    fVar13 = (float10)(*(float *)(gen_frame + 0x8));
    if (!(fVar12 <= fVar13) || ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) || fVar13 == fVar12))
    goto LAB_00d1f216;
    (*(float *)(gen_frame + 0x8)) = (float)fVar12;
  }
  fVar13 = (float10)(*(float *)(gen_frame + 0x8));
LAB_00d1f216: ;
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return (float)fVar13;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf18 */
uint F_00d1f230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1f230u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x80) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  puVar3 = param_2;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x80;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf19 */
byte F_00d1f270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd1f270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf20 */
unsigned int F_00d1f280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1f280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf24 */
uint F_00d1f290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xd1f290u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float fVar1;
  uint uVar2;
  float10 fVar3;
  bool bVar4;
  float10 fVar5;
  float10 extraout_ST0;
  float local_8;
  
  fVar3 = (float10)0;
  local_8 = (float)fVar3;
  fVar5 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x74)));
  bVar4 = GEN_ISNAN(fVar3) || GEN_ISNAN(fVar5);
  if (bVar4 == (bVar4 || fVar3 == fVar5)) {
    if (param_5 == 0.0) {
      fVar5 = (float10)param_4;
      if ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar3)) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar3)) || fVar5 == fVar3)) {
        local_8 = ((float)GEN_TOF((fVar5 / (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x74))))));
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
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x14c) + 0x10))))(param_1 + 0x14c);
  uVar2 = *(uint *)(param_1 + 0x128);
  fVar1 = ((float)GEN_TOF(((float10)1 -
                 (float10)(float)(extraout_ST0 * (float10)local_8) *
                 (float10)*(float *)(uVar2 + 0x68))));
  *param_2 = fVar1;
  if ((*(byte *)(uVar2 + 0x70) & 0x10) == 0) {
    *param_3 = fVar1;
    return uVar2;
  }
  *param_3 = ((float)GEN_TOF(((float10)1 -
                    (float10)(float)(extraout_ST0 * (float10)local_8) *
                    (float10)*(float *)(uVar2 + 0x6c))));
  return (uint)param_3;
}

/* ref: FUN_00d1f360 */
uint F_00d1f360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1f360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  uint uVar2;
  float10 fVar3;
  
  if (param_1 == 0) {
    uVar1 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x128) + 0x7a)));
    fVar3 = (float10)1;
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x128) + 0x78)));
    fVar3 = (float10)0;
  }
  uVar2 = F_00cccd90((int)this + 0x14c,(float)fVar3,(uint)uVar1 * 1000 >> 4);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf25 */
uint F_00d1f3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd1f3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf27 */
unsigned int F_00d1f420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1f420u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf29 */
uint F_00d1f440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1f440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HWND param_1 = (HWND)gen_a1;
  HDC param_2 = (HDC)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  float fVar2;
  undefined * pBVar3;
  HGDIOBJ pvVar4;
  undefined * pHVar5;
  int * piVar6;
  uint uVar7;
  float * pfVar8;
  char * pcVar9;
  int iVar10;
  int x;
  int iVar11;
  int iVar12;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  pvVar4 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x24)) = pvVar4;
  pvVar4 = gen_imp_SelectObject(param_2,pvVar4);
  (*(HGDIOBJ *)(gen_frame + 0x28)) = pvVar4;
  pHVar5 = gen_imp_CreatePen(0,2,0x8000);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pHVar5;
  pvVar4 = gen_imp_SelectObject(param_2,pHVar5);
  (*(HGDIOBJ *)(gen_frame + 0x1c)) = pvVar4;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x98)));
  iVar12 = (*(tagRECT *)(gen_frame + 0x98)).right / 2;
  iVar11 = (*(tagRECT *)(gen_frame + 0x98)).bottom / 2;
  piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x1c) + 0xc))) + 0x98))))
                            (*((int * PTR32 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x1c) + 0xc))))));
  (*(int * PTR32 *)(gen_frame + 0x38)) = piVar6;
  uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x5c))(piVar6,((undefined1 *)(gen_frame + 0x48)));
  if ((char)uVar7 != '\0') {
    (*(byte *)(gen_frame + 0x47)) = *((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x128) + 4))) >> 2 & 1;
    (*(float * PTR32 *)(gen_frame + 0x40)) = &(*(float *)(gen_frame + 0xac));
    (*(int *)(gen_frame + 0x34)) = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x128) + 0x20;
    (*(int *)(gen_frame + 0x3c)) = 4;
    do {
      pfVar8 = (float *)F_00c34320(((undefined1 *)(gen_frame + 0x48)),((undefined1 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x34)));
      (*(float * PTR32 *)(gen_frame + 0x40))[-1] = *pfVar8;
      *(*(float * PTR32 *)(gen_frame + 0x40)) = pfVar8[1];
      fVar2 = pfVar8[3];
      (*(float * PTR32 *)(gen_frame + 0x40))[1] = pfVar8[2];
      (*(float * PTR32 *)(gen_frame + 0x40))[2] = fVar2;
      if ((*(byte *)(gen_frame + 0x47)) == 0) {
        *(*(float * PTR32 *)(gen_frame + 0x40)) = (float)(float10)0;
      }
      (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 0x10;
      iVar10 = (*(int *)(gen_frame + 0x3c)) + -1;
      (*(int *)(gen_frame + 0x3c)) = iVar10;
      (*(float * PTR32 *)(gen_frame + 0x40)) = (*(float * PTR32 *)(gen_frame + 0x40)) + 4;
    } while (iVar10 != 0);
    iVar10 = iVar11 - (int)((double)(*(float *)(gen_frame + 0xb0)) * *(double *)&REFG(double, 0x1132488));
    (*(int *)(gen_frame + 0x3c)) = iVar10;
    x = iVar12 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xa8)));
    (*(float * PTR32 *)(gen_frame + 0x40)) = (float *)x;
    gen_imp_MoveToEx(param_2,x,iVar10,(LPPOINT)0x0);
    gen_imp_LineTo(param_2,iVar12 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xb8))),
           iVar11 - (int)((double)(*(float *)(gen_frame + 0xc0)) * *(double *)&REFG(double, 0x1132488)));
    gen_imp_LineTo(param_2,iVar12 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xc8))),
           iVar11 - (int)((double)(*(float *)(gen_frame + 0xd0)) * *(double *)&REFG(double, 0x1132488)));
    gen_imp_LineTo(param_2,iVar12 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xd8))),
           iVar11 - (int)((double)(*(float *)(gen_frame + 0xe0)) * *(double *)&REFG(double, 0x1132488)));
    iVar11 = (*(int *)(gen_frame + 0x3c));
    gen_imp_LineTo(param_2,(*(float * PTR32 *)(gen_frame + 0x40)),(*(int *)(gen_frame + 0x3c)));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x38)) + 0x30))((*(int * PTR32 *)(gen_frame + 0x38)),((undefined1 *)(gen_frame + 0x88)));
    pBVar3 = (*(undefined * PTR32 *)(gen_frame + 0x30));
    piVar6 = ((int *)(uintptr_t)gen_fl2bits((float)(F_00d1f050((*(undefined * PTR32 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x88))))));
    (*(int * PTR32 *)(gen_frame + 0x38)) = piVar6;
    ((code *)*(gen_code32 *)(*(int *)pBVar3 + 0x60))(pBVar3,&(*(float *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x18)),piVar6,0);
    F_00c472af(((char *)(gen_frame + 0xe8)),0x20,&REFG(undefined, 0x1133978),(int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x20))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x20))) >> 0x20));
    pcVar9 = ((char *)(gen_frame + 0xe8));
    do {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    gen_imp_GetTextExtentPoint32A(param_2,((char *)(gen_frame + 0xe8)),(int)pcVar9 - (int)(((char *)(gen_frame + 0xe8)) + 1),&(*(undefined8 *)(gen_frame + 0x10)));
    gen_imp_TextOutA(param_2,(int)(*(float * PTR32 *)(gen_frame + 0x40)),iVar11,((char *)(gen_frame + 0xe8)),(int)pcVar9 - (int)(((char *)(gen_frame + 0xe8)) + 1));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x1c)));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x28)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x2c)));
    uVar7 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x24)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar7;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf30 */
byte F_00d1f750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1f750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined * _File;
  byte bVar5;
  int iVar6;
  
  _File = param_1;
  bVar5 = F_00d21f00((undefined *)this,param_1);
  if (bVar5 == 0) {
    return 0;
  }
  iVar6 = 0;
  param_1 = (undefined *)0x0;
  do {
    iVar1 = *(int *)(this + 0x128);
    dVar2 = (double)*(float *)(iVar6 + 0x28 + iVar1);
    dVar3 = (double)*(float *)(iVar6 + 0x24 + iVar1);
    dVar4 = (double)*(float *)(iVar6 + 0x20 + iVar1);
    F_00c49386(_File,"Position[%d] = %f %f %f\n",param_1,(int)(ulonglong)gen_d2bits(dVar4),
             (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
             (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
             (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    param_1 = (undefined *)((int)param_1 + (1) * 32);
    iVar6 = iVar6 + 0x10;
  } while (iVar6 < 0x40);
  param_1 = (undefined *)0x0;
  iVar6 = 0x60;
  do {
    F_00c49386(_File,"Height[%d] = %f\n",param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))) >> 0x20
                  ));
    param_1 = (undefined *)((int)param_1 + (1) * 32);
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x68);
  F_00c49386(_File,"ObstacleFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x68))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x68))))));
  F_00c49386(_File,"HicutFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x6c))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x6c))))));
  F_00c49386(_File,"BlockadeFlag = %d\n",*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x70))) & 0xf);
  F_00c49386(_File,"fUseHicutFac = %d\n",*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x70))) >> 4 & 1);
  F_00c49386(_File,"FadeRange = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x74))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x74))))));
  F_00c49386(_File,"[EndOfSoundObject]\n\n");
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf31 */
byte F_00d1f890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1f890u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = "Position";
  pbVar5 = (byte *)param_2;
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d1f8c1: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d1f8c6;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d1f8c1;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d1f8c6: ;
  if (iVar3 == 0) {
    uVar4 = F_00d00d00(0,0);
    if (uVar4 != 0) {
      uVar4 = F_00c4c74c(uVar4);
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 2) * 0x10))) = (float)dVar7;
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24 + uVar4 * 0x10))) = (float)dVar7;
          pcVar2 = (char *)F_00d00d00(0,0);
          if (pcVar2 != (char *)0x0) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 0x10))) = (float)dVar7;
            return 1;
          }
        }
      }
    }
  }
  else {
    pcVar2 = "Height";
    pbVar5 = (byte *)param_2;
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d1f9a0: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d1f9a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d1f9a0;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d1f9a5: ;
    if (iVar3 == 0) {
      uVar4 = F_00d00d00(0,0);
      if (uVar4 != 0) {
        uVar4 = F_00c4c74c(uVar4);
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x60 + uVar4 * 4))) = (float)dVar7;
          return 1;
        }
      }
    }
    else {
      pcVar2 = "ObstacleFac";
      pbVar5 = (byte *)param_2;
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00d1fa20: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d1fa25;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00d1fa20;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d1fa25: ;
      if (iVar3 == 0) {
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x68))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = "HicutFac";
        pbVar5 = (byte *)param_2;
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d1fa82: ;
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d1fa87;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d1fa82;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d1fa87: ;
        if (iVar3 == 0) {
          pcVar2 = (char *)F_00d00d00(0,0);
          if (pcVar2 != (char *)0x0) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x6c))) = (float)dVar7;
            return 1;
          }
        }
        else {
          pcVar2 = "fUseHicutFac";
          pbVar5 = (byte *)param_2;
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d1fae4: ;
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d1fae9;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d1fae4;
            pcVar2 = pcVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d1fae9: ;
          if (iVar3 != 0) {
            pcVar2 = "BlockadeFlag";
            pbVar5 = (byte *)param_2;
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d1fb18: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d1fb1d;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d1fb18;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d1fb1d: ;
            if (iVar3 == 0) {
              uVar4 = F_00d00d00(0,0);
              if (uVar4 == 0) {
                return 0;
              }
              uVar4 = F_00c4c74c(uVar4);
              pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x70)));
              *pbVar5 = *pbVar5 ^ (*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x70))) ^ (byte)uVar4) & 0xf;
              return 1;
            }
            pcVar2 = "fUseHicutFac";
            pbVar5 = (byte *)param_2;
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d1fb78: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d1fb7d;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d1fb78;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d1fb7d: ;
            if (iVar3 != 0) {
              pcVar2 = "FadeRange";
              pbVar5 = (byte *)param_2;
              do {
                bVar1 = *pcVar2;
                bVar6 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_00d1fbe2: ;
                  iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                  goto LAB_00d1fbe7;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar2[1];
                bVar6 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_00d1fbe2;
                pcVar2 = pcVar2 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00d1fbe7: ;
              if (iVar3 != 0) {
                bVar1 = F_00d22040(param_1,param_2);
                return bVar1;
              }
              pcVar2 = (char *)F_00d00d00(0,0);
              if (pcVar2 == (char *)0x0) {
                return 0;
              }
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x74))) = (float)dVar7;
              return 1;
            }
          }
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x70)));
            *pbVar5 = *pbVar5 ^ ((char)uVar4 << 4 ^ *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x70)))) &
                                0x10;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00d1fc30 */
uint F_00d1fc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd1fc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  undefined1 uVar1;
  ushort uVar2;
  float * pfVar3;
  float * pfVar4;
  undefined2 uVar6;
  float fVar5;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  fVar17 = (float10)0;
  fVar16 = (float10)1;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  iVar8 = *(int *)((int)this + 0x128);
  (*(float * PTR32 *)(gen_frame + 0x34)) = param_1;
  (*(byte *)(gen_frame + 0x3f)) = 0;
  ((byte *)(gen_frame + 0x84))[0] = 0;
  ((byte *)(gen_frame + 0x84))[1] = 1;
  ((byte *)(gen_frame + 0x84))[2] = 1;
  ((byte *)(gen_frame + 0x84))[3] = 2;
  ((byte *)(gen_frame + 0x84))[4] = 2;
  ((byte *)(gen_frame + 0x84))[5] = 3;
  ((byte *)(gen_frame + 0x84))[6] = 3;
  ((byte *)(gen_frame + 0x84))[7] = 0;
  iVar7 = 0;
  do {
    pfVar3 = ((float *)GEN_TOP(((((byte *)(gen_frame + 0x84))[(int)(iVar7 * 2)] + 2) * 0x10 + iVar8)));
    pfVar4 = ((float *)GEN_TOP(((((byte *)(gen_frame + 0x84))[(int)(iVar7 * 2 + 1)] + 2) * 0x10 + iVar8)));
    fVar18 = *pfVar4 - *pfVar3;
    fVar19 = pfVar4[2] - pfVar3[2];
    (*(float *)(gen_frame + 0x20)) = fVar18;
    (*(float *)(gen_frame + 0x24)) = pfVar4[1] - pfVar3[1];
    (*(float *)(gen_frame + 0x28)) = fVar19;
    (*(float *)(gen_frame + 0x2c)) = pfVar4[3] - pfVar3[3];
    fVar11 = (float10)fVar19;
    fVar12 = (float10)fVar18;
    fVar18 = (float)(fVar11 * (float10)*param_2 - fVar12 * (float10)param_2[2]);
    (*(float *)(gen_frame + 0x38)) = fVar18;
    fVar13 = (float10)fVar18;
    bVar9 = GEN_ISNAN(fVar17) || GEN_ISNAN(fVar13);
    bVar10 = bVar9 || fVar17 == fVar13;
    uVar6 = (undefined2)((uint)gen_fl2bits(pfVar4[3]) >> 0x10);
    fVar18 = gen_bits2f(CONCAT22(uVar6,(ushort)!(fVar13 <= fVar17) << 8 | (ushort)bVar9 << 10 |
                                       (ushort)bVar10 << 0xe));
    pfVar4 = (*(float * PTR32 *)(gen_frame + 0x34));
    if (bVar9 == bVar10) {
      fVar18 = *pfVar3 - *(*(float * PTR32 *)(gen_frame + 0x34));
      fVar19 = pfVar3[2] - (*(float * PTR32 *)(gen_frame + 0x34))[2];
      (*(float *)(gen_frame + 0x20)) = fVar18;
      (*(float *)(gen_frame + 0x24)) = pfVar3[1] - (*(float * PTR32 *)(gen_frame + 0x34))[1];
      (*(float *)(gen_frame + 0x28)) = fVar19;
      (*(float *)(gen_frame + 0x2c)) = pfVar3[3] - (*(float * PTR32 *)(gen_frame + 0x34))[3];
      fVar14 = (float10)fVar18;
      fVar15 = (float10)fVar19;
      fVar19 = ((float)GEN_TOF(((fVar14 * fVar11 - fVar15 * fVar12) / fVar13)));
      (*(float *)(gen_frame + 0x38)) = fVar19;
      fVar11 = (float10)fVar19;
      bVar9 = GEN_ISNAN(fVar11) || GEN_ISNAN(fVar17);
      fVar18 = gen_bits2f(CONCAT22(uVar6,(ushort)!(fVar17 <= fVar11) << 8 | (ushort)bVar9 << 10 |
                                         (ushort)(bVar9 || fVar11 == fVar17) << 0xe));
      if ((!(fVar17 <= fVar11) == bVar9) &&
         (uVar2 = (ushort)((GEN_ISNAN(fVar11) || GEN_ISNAN(fVar16)) || fVar11 == fVar16),
         fVar18 = gen_bits2f(CONCAT22(uVar6,(ushort)!(fVar16 <= fVar11) << 8 |
                                            (ushort)(GEN_ISNAN(fVar11) || GEN_ISNAN(fVar16)) << 10 |
                                            uVar2 << 0xe)), !(fVar16 <= fVar11) != 0 || uVar2 != 0))
      {
        fVar11 = (float10)((float)GEN_TOF((((float10)param_2[2] * fVar14 - (float10)*param_2 * fVar15) /
                                 fVar13)));
        bVar9 = GEN_ISNAN(fVar11) || GEN_ISNAN(fVar17);
        fVar18 = gen_bits2f(CONCAT22(uVar6,(ushort)!(fVar17 <= fVar11) << 8 | (ushort)bVar9 << 10 |
                                           (ushort)(bVar9 || fVar11 == fVar17) << 0xe));
        if ((!(fVar17 <= fVar11) == bVar9) &&
           (uVar2 = (ushort)((GEN_ISNAN(fVar11) || GEN_ISNAN(fVar16)) || fVar11 == fVar16),
           fVar18 = gen_bits2f(CONCAT22(uVar6,(ushort)!(fVar16 <= fVar11) << 8 |
                                              (ushort)(GEN_ISNAN(fVar11) || GEN_ISNAN(fVar16)) << 10 |
                                              uVar2 << 0xe)), !(fVar16 <= fVar11) != 0 || uVar2 != 0
           )) {
          fVar5 = gen_bits2f((uint)(*(byte *)(gen_frame + 0x3f)));
          (*(float *)(gen_frame + 0x20)) = *param_2 * fVar19;
          (*(float *)(gen_frame + 0x24)) = param_2[1] * fVar19;
          (*(float *)(gen_frame + 0x28)) = param_2[2] * fVar19;
          (*(float *)(gen_frame + 0x2c)) = param_2[3] * fVar19;
          (*(float *)(gen_frame + 0x38)) = fVar5;
          (*(byte *)(gen_frame + 0x3f)) = (*(byte *)(gen_frame + 0x3f)) + 1;
          fVar18 = *param_2 * fVar19 + *(*(float * PTR32 *)(gen_frame + 0x34));
          fVar21 = param_2[1] * fVar19 + (*(float * PTR32 *)(gen_frame + 0x34))[1];
          (*(float *)(gen_frame + 0x20)) = fVar18;
          (*(float *)(gen_frame + 0x24)) = fVar21;
          (*(float *)(gen_frame + 0x28)) = param_2[2] * fVar19 + (*(float * PTR32 *)(gen_frame + 0x34))[2];
          (*(float *)(gen_frame + 0x2c)) = param_2[3] * fVar19 + (*(float * PTR32 *)(gen_frame + 0x34))[3];
          (*(float *)(gen_frame + 0x10)) = fVar18;
          ((float *)(gen_frame + 0x40))[(int)((int)gen_fl2bits(fVar5) * 4)] = fVar18;
          fVar18 = (*(float *)(gen_frame + 0x28));
          (*(float *)(gen_frame + 0x14)) = fVar21;
          ((float *)(gen_frame + 0x40))[(int)((int)gen_fl2bits(fVar5) * 4 + 1)] = fVar21;
          fVar19 = (*(float *)(gen_frame + 0x2c));
          (*(float *)(gen_frame + 0x18)) = fVar18;
          ((float *)(gen_frame + 0x40))[(int)((int)gen_fl2bits(fVar5) * 4 + 2)] = fVar18;
          (*(float *)(gen_frame + 0x1c)) = fVar19;
          ((float *)(gen_frame + 0x40))[(int)((int)gen_fl2bits(fVar5) * 4 + 3)] = fVar19;
          pfVar4 = (*(float * PTR32 *)(gen_frame + 0x34));
          ((float *)(gen_frame + 0x40))[(int)((int)gen_fl2bits(fVar5) * 4 + 3)] = (float)fVar16;
          fVar18 = (*(float *)(gen_frame + 0x38));
          ((undefined1 *)(gen_frame + 0x8))[(int)((int)gen_fl2bits((*(float *)(gen_frame + 0x38))))] = (char)iVar7;
        }
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  fVar18 = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(fVar18) >> 8),(*(byte *)(gen_frame + 0x3f))));
  if ((*(byte *)(gen_frame + 0x3f)) != 0) {
    fVar19 = gen_bits2f((uint)(*(byte *)(gen_frame + 0x3f)));
    (*(float * PTR32 *)(gen_frame + 0x34)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar17)));
    iVar8 = 0;
    (*(float *)(gen_frame + 0x38)) = fVar19;
    fVar18 = fVar19;
    if ((*(byte *)(gen_frame + 0x3f)) != 0) {
      do {
        fVar5 = ((float *)(gen_frame + 0x40))[(int)(iVar8 * 4)] - *pfVar4;
        fVar21 = ((float *)(gen_frame + 0x40))[(int)(iVar8 * 4 + 1)] - pfVar4[1];
        fVar20 = ((float *)(gen_frame + 0x40))[(int)(iVar8 * 4 + 2)] - pfVar4[2];
        (*(float *)(gen_frame + 0x20)) = fVar5;
        (*(float *)(gen_frame + 0x24)) = fVar21;
        (*(float *)(gen_frame + 0x28)) = fVar20;
        (*(float *)(gen_frame + 0x2c)) = ((float *)(gen_frame + 0x40))[(int)(iVar8 * 4 + 3)] - pfVar4[3];
        (*(float *)(gen_frame + 0x10)) = fVar5;
        (*(float *)(gen_frame + 0x14)) = fVar21;
        (*(float *)(gen_frame + 0x18)) = fVar20;
        (*(float *)(gen_frame + 0x1c)) = ((float *)(gen_frame + 0x40))[(int)(iVar8 * 4 + 3)] - pfVar4[3];
        pfVar3 = ((float *)GEN_TOP(SQRT((fVar20 * fVar20 + fVar5 * fVar5) + fVar21 * fVar21)));
        if (iVar8 == 0) {
          (*(float * PTR32 *)(gen_frame + 0x34)) = pfVar3;
          *param_3 = ((float *)(gen_frame + 0x40))[0];
          param_3[1] = ((float *)(gen_frame + 0x40))[1];
          param_3[2] = ((float *)(gen_frame + 0x40))[2];
          fVar18 = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(((float *)(gen_frame + 0x40))[2]) >> 8),((undefined1 *)(gen_frame + 0x8))[0]));
          param_3[3] = ((float *)(gen_frame + 0x40))[3];
          *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x178) = ((undefined1 *)(gen_frame + 0x8))[0];
        }
        else {
          fVar16 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x34)))));
          fVar17 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar3)));
          bVar9 = GEN_ISNAN(fVar17) || GEN_ISNAN(fVar16);
          fVar18 = gen_bits2f(CONCAT22((short)((uint)gen_fl2bits(fVar18) >> 0x10),
                                       (ushort)!(fVar16 <= fVar17) << 8 | (ushort)bVar9 << 10 |
                                       (ushort)(bVar9 || fVar17 == fVar16) << 0xe));
          if (!(fVar16 <= fVar17) != bVar9) {
            (*(float * PTR32 *)(gen_frame + 0x34)) = pfVar3;
            *param_3 = ((float *)(gen_frame + 0x40))[(int)(iVar8 * 4)];
            param_3[1] = ((float *)(gen_frame + 0x40))[(int)(iVar8 * 4 + 1)];
            fVar18 = ((float *)(gen_frame + 0x40))[(int)(iVar8 * 4 + 2)];
            fVar5 = ((float *)(gen_frame + 0x40))[(int)(iVar8 * 4 + 3)];
            param_3[2] = fVar18;
            uVar1 = ((undefined1 *)(gen_frame + 0x8))[(int)(iVar8)];
            fVar18 = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(fVar18) >> 8),uVar1));
            param_3[3] = fVar5;
            *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x178) = uVar1;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)gen_fl2bits(fVar19));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return (uint)gen_fl2bits(fVar18);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf22 */
uint F_00d20060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd20060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  *param_4 = 0;
  fVar13 = param_2[3];
  fVar12 = param_1[2];
  fVar8 = param_1[3];
  fVar10 = param_1[1];
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  (*(float *)(gen_frame + 0x10)) = *param_1 + *param_2;
  (*(float *)(gen_frame + 0x14)) = fVar10 + fVar6;
  (*(float *)(gen_frame + 0x18)) = fVar12 + fVar7;
  (*(float *)(gen_frame + 0x1c)) = fVar8 + fVar13;
  (*(float *)(gen_frame + 0x0)) = *param_1 + *param_2;
  (*(float *)(gen_frame + 0x4)) = fVar10 + fVar6;
  (*(float *)(gen_frame + 0x8)) = fVar12 + fVar7;
  (*(float *)(gen_frame + 0xc)) = fVar8 + fVar13;
  uVar3 = F_00d1eee0(this,param_1);
  *(uint *)(this + 0x170) = uVar3;
  uVar3 = F_00d1eee0(this,&(*(float *)(gen_frame + 0x0)));
  iVar1 = *(int *)(this + 0x170);
  *(uint *)(this + 0x174) = uVar3;
  if ((iVar1 < 0) || ((int)uVar3 < 0)) {
    if (iVar1 == 1) {
      iVar1 = *(int *)(this + 0x128);
      if (uVar3 == 0xffffffff) {
        fVar13 = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x60) + (float10)*(float *)(iVar1 + 0x24))));
        (*(float *)(gen_frame + 0x2c)) = fVar13;
        fVar5 = (float10)fVar13;
      }
      else {
        fVar13 = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x24) - (float10)*(float *)(iVar1 + 100))));
        (*(float *)(gen_frame + 0x2c)) = fVar13;
        fVar5 = (float10)fVar13;
      }
    }
    else {
      if (uVar3 != 1) {
        return uVar3;
      }
      iVar2 = *(int *)(this + 0x128);
      if (iVar1 == -1) {
        fVar13 = ((float)GEN_TOF(((float10)*(float *)(iVar2 + 0x60) + (float10)*(float *)(iVar2 + 0x24))));
        (*(float *)(gen_frame + 0x2c)) = fVar13;
        fVar5 = (float10)fVar13;
      }
      else {
        fVar13 = ((float)GEN_TOF(((float10)*(float *)(iVar2 + 0x24) - (float10)*(float *)(iVar2 + 100))));
        (*(float *)(gen_frame + 0x2c)) = fVar13;
        fVar5 = (float10)fVar13;
      }
    }
    fVar13 = param_1[1];
    *param_4 = 1;
    (*(float *)(gen_frame + 0x2c)) = (float)(fVar5 - (float10)fVar13);
    fVar5 = (float10)(float)(fVar5 - (float10)fVar13);
    bVar4 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar5);
    if (bVar4 == (bVar4 || (float10)0 == fVar5)) {
      fVar13 = param_1[3];
      fVar12 = (float)(fVar5 / (float10)param_2[1]);
      (*(float *)(gen_frame + 0x2c)) = fVar12;
      fVar6 = *param_2 * fVar12;
      fVar8 = param_2[1] * fVar12;
      fVar10 = param_2[2] * fVar12;
      fVar12 = param_2[3] * fVar12;
      (*(float *)(gen_frame + 0x0)) = fVar6;
      (*(float *)(gen_frame + 0x4)) = fVar8;
      (*(float *)(gen_frame + 0x8)) = fVar10;
      (*(float *)(gen_frame + 0xc)) = fVar12;
      (*(float *)(gen_frame + 0x10)) = fVar6;
      (*(float *)(gen_frame + 0x14)) = fVar8;
      (*(float *)(gen_frame + 0x18)) = fVar10;
      (*(float *)(gen_frame + 0x1c)) = fVar12;
      fVar7 = *param_1 + fVar6;
      fVar9 = param_1[1] + fVar8;
      fVar11 = param_1[2] + fVar10;
      fVar13 = fVar13 + fVar12;
      (*(float *)(gen_frame + 0x0)) = fVar7;
      (*(float *)(gen_frame + 0x4)) = fVar9;
      (*(float *)(gen_frame + 0x8)) = fVar11;
      (*(float *)(gen_frame + 0xc)) = fVar13;
      (*(float *)(gen_frame + 0x10)) = fVar7;
      fVar8 = fVar8 * fVar8;
      fVar10 = fVar10 * fVar10;
      (*(float *)(gen_frame + 0x14)) = fVar9;
      (*(float *)(gen_frame + 0x18)) = fVar11;
      *param_3 = fVar7;
      (*(float *)(gen_frame + 0x1c)) = fVar13;
      param_3[1] = fVar9;
      param_3[2] = fVar11;
      (*(float *)(gen_frame + 0x0)) = SQRT((fVar10 + fVar6 * fVar6) + fVar8);
      (*(float *)(gen_frame + 0x4)) = (fVar10 + fVar8) + fVar8;
      (*(float *)(gen_frame + 0x8)) = (fVar10 + fVar10) + fVar8;
      (*(float *)(gen_frame + 0xc)) = (fVar10 + fVar12 * fVar12) + fVar8;
      param_3[3] = fVar13;
      return (uint)param_3;
    }
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
    return (uint)param_3;
  }
  if (iVar1 != 0) {
    if (uVar3 != 0) {
      return uVar3;
    }
    if (iVar1 != 0) goto LAB_00d2013d;
  }
  if (uVar3 == 0) {
    uVar3 = F_00d1fc30(this,param_1,param_2,param_3);
    return uVar3;
  }
LAB_00d2013d: ;
  uVar3 = F_00d1fc30(this,param_1,param_2,param_3);
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf26 */
uint F_00d20300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd20300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = (undefined4 *)F_00d22da0(this,param_1,0x80);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))));
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x20);
  }
  F_00d20d00(*(undefined4 *)(this + 0x128),(uint)puVar1);
  return (uint)(puVar1 + 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf28 */
uint F_00d20360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd20360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar2 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*(int *)(uVar2 + 0xc) + 0x2f8))) != 0) {
    F_00d22b20(this,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x68;
    uVar3 = F_00427d90();
    iVar1 = *(int *)(this + 0x128);
    (*(ulonglong *)(gen_frame + 0x8)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(iVar1 + 0x20);
    (*(undefined4 *)(gen_frame + 0x3c)) = *(undefined4 *)(iVar1 + 0x24);
    (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(iVar1 + 0x28);
    (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(iVar1 + 0x30);
    (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(iVar1 + 0x34);
    (*(undefined4 *)(gen_frame + 0x4c)) = *(undefined4 *)(iVar1 + 0x38);
    (*(undefined4 *)(gen_frame + 0x50)) = *(undefined4 *)(iVar1 + 0x40);
    (*(undefined4 *)(gen_frame + 0x54)) = *(undefined4 *)(iVar1 + 0x44);
    (*(undefined4 *)(gen_frame + 0x58)) = *(undefined4 *)(iVar1 + 0x48);
    (*(undefined4 *)(gen_frame + 0x5c)) = *(undefined4 *)(iVar1 + 0x50);
    (*(undefined4 *)(gen_frame + 0x60)) = *(undefined4 *)(iVar1 + 0x54);
    (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)(iVar1 + 0x58);
    F_00d20ba0(&(*(undefined2 *)(gen_frame + 0x0)),&(*(undefined2 *)(gen_frame + 0x0)));
    uVar2 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))),&(*(undefined2 *)(gen_frame + 0x0)),0x68);
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar2;
}

/* ref: FUN_00d20430 */
uint F_00d20430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd20430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int * this_00;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  F_00d22580(this,param_1,param_2,param_3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133acc));
  F_00cccb10((int)this + 0x14c,(float)(float10)1);
  *(uint *)((int)this + 0xb0) =
       *(uint *)((int)this + 0xb0) ^ ((param_4 & 0xff) << 4 ^ *(uint *)((int)this + 0xb0)) & 0x10;
  if ((char)param_4 == '\0') {
    *(undefined4 * PTR32 *)((int)this + 0x128) = param_1;
  }
  else {
    *(undefined4 * PTR32 *)((int)this + 0x128) = (undefined4 *)((int)this + 0x180);
    puVar3 = param_1;
    puVar4 = (undefined4 *)((int)this + 0x180);
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  F_00d1e8c0(this);
  F_00d20fe0(this,(uint)(~(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 4))) >> 5) & 1));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  F_00d20360(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return (uint)this;
}

/* ref: FUN_00d20560 */
uint F_00d20560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd20560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  F_00d22720(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133acc));
  F_00cccb10((int)this + 0x14c,(float)(float10)1);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  *(undefined * PTR32 *)((int)this + 0x128) = (undefined *)((int)this + 0x180);
  F_00d20c50((undefined *)((int)this + 0x180));
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  F_00d20360(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf23 */
byte F_00d20630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd20630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float * pfVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  float * pfVar5;
  float * pfVar6;
  int iVar7;
  int iVar8;
  undefined4 * puVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  (*(float * PTR32 *)(gen_frame + 0x2c)) = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = param_2;
  (*(float * PTR32 *)(gen_frame + 0x28)) = param_4;
  if (((*(int *)(this + 0x170) == 0) ||
      ((*(int *)(this + 0x174) == 0 && (*(int *)(this + 0x170) == 0)))) &&
     (*(int *)(this + 0x174) == 0)) {
    iVar2 = *(int *)(this + 0x128);
    (*(byte *)(gen_frame + 0x5b)) = *(byte *)(iVar2 + 0x70);
    if ((*(byte *)(iVar2 + 0x70) & 0xf) != 0xf) {
      uVar4 = (uint)(byte)this[0x178];
      ((byte *)(gen_frame + 0x64))[0] = 0;
      ((byte *)(gen_frame + 0x64))[1] = 1;
      ((byte *)(gen_frame + 0x64))[2] = 2;
      ((byte *)(gen_frame + 0x64))[3] = 3;
      ((byte *)(gen_frame + 0x64))[4] = 0;
      (*(uint *)(gen_frame + 0x1c)) = uVar4;
      (*(uint *)(gen_frame + 0x60)) = uVar4;
      pfVar5 = (float *)F_00d03460(param_4,&(*(float *)(gen_frame + 0x0)),(((byte *)(gen_frame + 0x64))[(int)(uVar4 + 1)] + 2) * 0x10 + iVar2);
      (*(uint *)(gen_frame + 0x20)) = 0xffffffff;
      fVar12 = pfVar5[1] * pfVar5[1];
      fVar13 = pfVar5[2] * pfVar5[2];
      fVar14 = SQRT((fVar13 + *pfVar5 * *pfVar5) + fVar12);
      (*(float *)(gen_frame + 0x30)) = fVar14;
      (*(float *)(gen_frame + 0x34)) = (fVar13 + fVar12) + fVar12;
      (*(float *)(gen_frame + 0x38)) = (fVar13 + fVar13) + fVar12;
      (*(float *)(gen_frame + 0x3c)) = (fVar13 + pfVar5[3] * pfVar5[3]) + fVar12;
      (*(float *)(gen_frame + 0x5c)) = 0.0;
      (*(float *)(gen_frame + 0x50)) = fVar14;
      (*(uint *)(gen_frame + 0x18)) = (*(byte *)(gen_frame + 0x5b)) & 0xf;
      puVar9 = param_2;
      do {
        uVar4 = (*(uint *)(gen_frame + 0x60)) + 1;
        (*(uint *)(gen_frame + 0x60)) = uVar4;
        if (3 < (int)uVar4) {
          (*(uint *)(gen_frame + 0x60)) = 0;
        }
        if (((*(uint *)(gen_frame + 0x18)) & 1 << ((byte)(*(uint *)(gen_frame + 0x60)) & 0x1f)) != 0) break;
        iVar8 = (((byte *)(gen_frame + 0x64))[(int)((*(uint *)(gen_frame + 0x60)))] + 2) * 0x10 + iVar2;
        bVar3 = F_00d1ecf0((*(undefined * PTR32 *)(gen_frame + 0x14)),iVar8,(*(float * PTR32 *)(gen_frame + 0x2c)));
        if (bVar3 == 0) {
          pfVar5 = (float *)F_00d03460((*(float * PTR32 *)(gen_frame + 0x2c)),&(*(float *)(gen_frame + 0x0)),iVar8);
          fVar12 = pfVar5[1] * pfVar5[1];
          fVar13 = pfVar5[2] * pfVar5[2];
          fVar14 = SQRT((fVar13 + *pfVar5 * *pfVar5) + fVar12);
          (*(float *)(gen_frame + 0x30)) = fVar14;
          (*(float *)(gen_frame + 0x34)) = (fVar13 + fVar12) + fVar12;
          (*(float *)(gen_frame + 0x38)) = (fVar13 + fVar13) + fVar12;
          (*(float *)(gen_frame + 0x3c)) = (fVar13 + pfVar5[3] * pfVar5[3]) + fVar12;
          (*(uint *)(gen_frame + 0x20)) = (uint)((byte *)(gen_frame + 0x64))[(int)((*(uint *)(gen_frame + 0x1c)) + 1)];
          (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar14 + (float10)(*(float *)(gen_frame + 0x50)));
          puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x54));
          break;
        }
        pfVar5 = (float *)F_00d03460((((byte *)(gen_frame + 0x64))[(int)((*(uint *)(gen_frame + 0x60)) + 1)] + 2) * 0x10 + iVar2,&(*(float *)(gen_frame + 0x0)),iVar8);
        iVar8 = (int)gen_fl2bits((*(float *)(gen_frame + 0x5c))) + 1;
        (*(float *)(gen_frame + 0x5c)) = gen_bits2f(iVar8);
        fVar12 = pfVar5[1] * pfVar5[1];
        fVar13 = pfVar5[2] * pfVar5[2];
        fVar14 = SQRT((fVar13 + *pfVar5 * *pfVar5) + fVar12);
        (*(float *)(gen_frame + 0x30)) = fVar14;
        (*(float *)(gen_frame + 0x34)) = (fVar13 + fVar12) + fVar12;
        (*(float *)(gen_frame + 0x38)) = (fVar13 + fVar13) + fVar12;
        (*(float *)(gen_frame + 0x3c)) = (fVar13 + pfVar5[3] * pfVar5[3]) + fVar12;
        (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar14 + (float10)(*(float *)(gen_frame + 0x50)));
        puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x54));
      } while (iVar8 < 4);
      iVar8 = (((byte *)(gen_frame + 0x64))[(int)((*(uint *)(gen_frame + 0x1c)))] + 2) * 0x10;
      pfVar5 = (*(float * PTR32 *)(gen_frame + 0x28)) + 3;
      (*(uint *)(gen_frame + 0x24)) = 0xffffffff;
      pfVar6 = (*(float * PTR32 *)(gen_frame + 0x28)) + 1;
      pfVar1 = (*(float * PTR32 *)(gen_frame + 0x28)) + 2;
      fVar12 = *(*(float * PTR32 *)(gen_frame + 0x28));
      (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)0x0;
      fVar12 = fVar12 - *(float *)(iVar8 + iVar2);
      fVar13 = *pfVar6 - *(float *)(iVar8 + 4 + iVar2);
      fVar14 = *pfVar1 - *(float *)(iVar8 + 8 + iVar2);
      fVar15 = *pfVar5 - *(float *)(iVar8 + 0xc + iVar2);
      (*(float *)(gen_frame + 0x30)) = fVar12;
      (*(float *)(gen_frame + 0x34)) = fVar13;
      (*(float *)(gen_frame + 0x38)) = fVar14;
      (*(float *)(gen_frame + 0x3c)) = fVar15;
      (*(float *)(gen_frame + 0x40)) = fVar12;
      (*(float *)(gen_frame + 0x44)) = fVar13;
      (*(float *)(gen_frame + 0x48)) = fVar14;
      (*(float *)(gen_frame + 0x4c)) = fVar15;
      fVar13 = fVar13 * fVar13;
      fVar14 = fVar14 * fVar14;
      fVar12 = SQRT((fVar14 + fVar12 * fVar12) + fVar13);
      (*(float *)(gen_frame + 0x30)) = fVar12;
      (*(float *)(gen_frame + 0x34)) = (fVar14 + fVar13) + fVar13;
      (*(float *)(gen_frame + 0x38)) = (fVar14 + fVar14) + fVar13;
      (*(float *)(gen_frame + 0x3c)) = (fVar14 + fVar15 * fVar15) + fVar13;
      (*(float *)(gen_frame + 0x5c)) = fVar12;
      uVar4 = (*(uint *)(gen_frame + 0x1c));
      do {
        (*(uint *)(gen_frame + 0x60)) = uVar4 - 1;
        if ((int)(uVar4 - 1) < 0) {
          (*(uint *)(gen_frame + 0x60)) = 3;
        }
        if (((*(uint *)(gen_frame + 0x18)) & 1 << ((byte)(*(uint *)(gen_frame + 0x60)) & 0x1f)) != 0) break;
        pfVar5 = ((float *)GEN_TOP(((((byte *)(gen_frame + 0x64))[(int)((*(uint *)(gen_frame + 0x60)) + 1)] + 2) * 0x10 + iVar2)));
        bVar3 = F_00d1ecf0((*(undefined * PTR32 *)(gen_frame + 0x14)),pfVar5,(*(float * PTR32 *)(gen_frame + 0x2c)));
        puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x54));
        if (bVar3 == 0) {
          fVar14 = *(*(float * PTR32 *)(gen_frame + 0x2c)) - *pfVar5;
          fVar12 = (*(float * PTR32 *)(gen_frame + 0x2c))[1] - pfVar5[1];
          fVar13 = (*(float * PTR32 *)(gen_frame + 0x2c))[2] - pfVar5[2];
          fVar15 = (*(float * PTR32 *)(gen_frame + 0x2c))[3] - pfVar5[3];
          (*(float *)(gen_frame + 0x30)) = fVar14;
          (*(float *)(gen_frame + 0x34)) = fVar12;
          (*(float *)(gen_frame + 0x38)) = fVar13;
          (*(float *)(gen_frame + 0x3c)) = fVar15;
          (*(uint *)(gen_frame + 0x24)) = (uint)((byte *)(gen_frame + 0x64))[(int)((*(uint *)(gen_frame + 0x1c)))];
          (*(float *)(gen_frame + 0x40)) = fVar14;
          (*(float *)(gen_frame + 0x44)) = fVar12;
          (*(float *)(gen_frame + 0x48)) = fVar13;
          (*(float *)(gen_frame + 0x4c)) = fVar15;
          fVar12 = fVar12 * fVar12;
          fVar13 = fVar13 * fVar13;
          fVar14 = SQRT((fVar13 + fVar14 * fVar14) + fVar12);
          (*(float *)(gen_frame + 0x0)) = fVar14;
          (*(float *)(gen_frame + 0x4)) = (fVar13 + fVar12) + fVar12;
          (*(float *)(gen_frame + 0x8)) = (fVar13 + fVar13) + fVar12;
          (*(float *)(gen_frame + 0xc)) = (fVar13 + fVar15 * fVar15) + fVar12;
          (*(float *)(gen_frame + 0x5c)) = (float)((float10)fVar14 + (float10)(*(float *)(gen_frame + 0x5c)));
          break;
        }
        iVar8 = (((byte *)(gen_frame + 0x64))[(int)((*(uint *)(gen_frame + 0x60)))] + 2) * 0x10;
        pfVar6 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x28)) + 1);
        (*(float * PTR32 *)(gen_frame + 0x28)) = pfVar6;
        fVar12 = *(float *)(iVar8 + iVar2) - *pfVar5;
        fVar13 = *(float *)(iVar8 + 4 + iVar2) - pfVar5[1];
        fVar14 = *(float *)(iVar8 + 8 + iVar2) - pfVar5[2];
        fVar15 = *(float *)(iVar8 + 0xc + iVar2) - pfVar5[3];
        (*(float *)(gen_frame + 0x30)) = fVar12;
        (*(float *)(gen_frame + 0x34)) = fVar13;
        (*(float *)(gen_frame + 0x38)) = fVar14;
        (*(float *)(gen_frame + 0x3c)) = fVar15;
        (*(float *)(gen_frame + 0x40)) = fVar12;
        (*(float *)(gen_frame + 0x44)) = fVar13;
        (*(float *)(gen_frame + 0x48)) = fVar14;
        (*(float *)(gen_frame + 0x4c)) = fVar15;
        fVar13 = fVar13 * fVar13;
        fVar14 = fVar14 * fVar14;
        fVar12 = SQRT((fVar14 + fVar12 * fVar12) + fVar13);
        (*(float *)(gen_frame + 0x0)) = fVar12;
        (*(float *)(gen_frame + 0x4)) = (fVar14 + fVar13) + fVar13;
        (*(float *)(gen_frame + 0x8)) = (fVar14 + fVar14) + fVar13;
        (*(float *)(gen_frame + 0xc)) = (fVar14 + fVar15 * fVar15) + fVar13;
        (*(float *)(gen_frame + 0x5c)) = (float)((float10)fVar12 + (float10)(*(float *)(gen_frame + 0x5c)));
        uVar4 = (*(uint *)(gen_frame + 0x60));
      } while ((int)pfVar6 < 4);
      if ((*(uint *)(gen_frame + 0x20)) != 0xffffffff) {
        if ((*(uint *)(gen_frame + 0x24)) == 0xffffffff) {
LAB_00d20af4: ;
          uVar4 = (*(uint *)(gen_frame + 0x20));
        }
        else {
          fVar10 = (float10)(*(float *)(gen_frame + 0x50));
          fVar11 = (float10)(*(float *)(gen_frame + 0x5c));
          uVar4 = (*(uint *)(gen_frame + 0x24));
          if (fVar10 <= fVar11 && ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && fVar11 != fVar10))
          goto LAB_00d20af4;
        }
        iVar8 = (uVar4 + 2) * 0x10;
        iVar7 = iVar8 + iVar2;
        *puVar9 = *(undefined4 *)(iVar8 + iVar2);
        puVar9[1] = *(undefined4 *)(iVar7 + 4);
        puVar9[2] = *(undefined4 *)(iVar7 + 8);
        puVar9[3] = *(undefined4 *)(iVar7 + 0xc);
        bVar3 = 1;
        goto LAB_00d20b2d;
      }
      if ((*(uint *)(gen_frame + 0x24)) != 0xffffffff) {
        iVar8 = ((*(uint *)(gen_frame + 0x24)) + 2) * 0x10;
        iVar7 = iVar8 + iVar2;
        *puVar9 = *(undefined4 *)(iVar8 + iVar2);
        puVar9[1] = *(undefined4 *)(iVar7 + 4);
        puVar9[2] = *(undefined4 *)(iVar7 + 8);
        puVar9[3] = *(undefined4 *)(iVar7 + 0xc);
        bVar3 = 1;
        goto LAB_00d20b2d;
      }
    }
  }
  bVar3 = 0;
LAB_00d20b2d: ;
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return bVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf3 */
uint F_00d20b50(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd20b50u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,(undefined4)gen_fl2bits(param_2),local_c);
  return uVar1;
}

/* ref: FUN_00d20ba0 */
unsigned int F_00d20ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd20ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined2 *)this;
  param_1[1] = *(undefined2 *)((int)this + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x28);
  param_1[0x18] = *(undefined2 *)((int)this + 0x30);
  param_1[0x19] = *(undefined2 *)((int)this + 0x32);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)((int)this + 0x34);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)this + 0x38);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)((int)this + 0x3c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((int)this + 0x40);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)((int)this + 0x44);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((int)this + 0x48);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)((int)this + 0x4c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)((int)this + 0x54);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((int)this + 0x58);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)((int)this + 0x5c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((int)this + 0x60);
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)((int)this + 100);
  return 0;
}

/* ref: FUN_00d20c50 */
unsigned int F_00d20c50(unsigned int gen_a0)
{
  GEN_ENTER(0xd20c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  fVar1 = (float10)1;
  *(undefined2 *)((int)this + 3) = 0x400;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 5) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 6) = 0;
  *(float *)((int)this + 0x10) = (float)fVar1;
  *(float *)((int)this + 0x14) = (float)fVar1;
  *(float *)((int)this + 0x18) = (float)fVar1;
  *(float *)((int)this + 0x1c) = (float)fVar1;
  *(undefined2 *)((int)this + 0xe) = 0;
  fVar2 = (float10)0;
  *(undefined1 *)((int)this + 0xd) = 0;
  *(undefined1 *)((int)this + 2) = 9;
  *(undefined2 *)this = 0x80;
  *(float *)((int)this + 0x20) = (float)fVar2;
  *(float *)((int)this + 0x24) = (float)fVar2;
  *(float *)((int)this + 0x28) = (float)fVar2;
  *(float *)((int)this + 0x2c) = (float)fVar2;
  *(float *)((int)this + 0x2c) = (float)fVar1;
  *(float *)((int)this + 0x30) = (float)fVar2;
  *(float *)((int)this + 0x34) = (float)fVar2;
  *(float *)((int)this + 0x38) = (float)fVar2;
  *(float *)((int)this + 0x3c) = (float)fVar2;
  *(float *)((int)this + 0x3c) = (float)fVar1;
  *(float *)((int)this + 0x40) = (float)fVar2;
  *(float *)((int)this + 0x44) = (float)fVar2;
  *(float *)((int)this + 0x48) = (float)fVar2;
  *(float *)((int)this + 0x4c) = (float)fVar2;
  *(float *)((int)this + 0x4c) = (float)fVar1;
  *(float *)((int)this + 0x50) = (float)fVar2;
  *(float *)((int)this + 0x54) = (float)fVar2;
  *(float *)((int)this + 0x58) = (float)fVar2;
  *(float *)((int)this + 0x5c) = (float)fVar2;
  *(float *)((int)this + 0x5c) = (float)fVar1;
  *(undefined4 *)((int)this + 0x70) = 0;
  uVar3 = REFG(float, 0x1094880);
  *(undefined2 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x60) = uVar3;
  *(undefined2 *)((int)this + 0x7a) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(float *)((int)this + 100) = (float)fVar2;
  *(float *)((int)this + 0x74) = (float)fVar2;
  *(float *)((int)this + 0x68) = (float)fVar1;
  *(float *)((int)this + 0x6c) = (float)fVar1;
  return 0;
}

/* ref: FUN_00d20d00 */
uint F_00d20d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd20d00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint * puVar4;
  uint * puVar5;
  int local_8;
  
  uVar2 = param_2;
  F_00d0c080(param_1,param_2);
  puVar5 = (uint *)(param_1 + 0x28);
  local_8 = 4;
  puVar4 = (uint *)(param_2 + 0x20);
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar4)));
    *puVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar5[-1];
    puVar4[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar5;
    puVar4[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar5[1];
    puVar4[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar5 = puVar5 + 4;
    local_8 = local_8 + -1;
    puVar4 = puVar4 + 4;
  } while (local_8 != 0);
  uVar1 = *(uint *)(param_1 + 0x60);
  *(uint *)(param_2 + 0x60) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 100);
  *(uint *)(param_2 + 100) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x68);
  *(uint *)(param_2 + 0x68) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x6c);
  *(uint *)(param_2 + 0x6c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(byte *)(param_2 + 0x70) =
       *(byte *)(param_2 + 0x70) ^ (*(byte *)(param_2 + 0x70) ^ *(byte *)(param_1 + 0x70)) & 0xf;
  *(byte *)(param_2 + 0x70) =
       (*(byte *)(param_1 + 0x70) ^ *(byte *)(param_2 + 0x70)) & 0x10 ^ *(byte *)(param_2 + 0x70);
  uVar1 = *(uint *)(param_1 + 0x74);
  *(byte *)(param_2 + 0x70) = *(byte *)(param_2 + 0x70) & 0x1f;
  *(uint *)(param_2 + 0x74) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(undefined2 *)(param_2 + 0x71) = 0;
  *(undefined1 *)(param_2 + 0x73) = 0;
  *(ushort *)(param_2 + 0x78) = *(ushort *)(param_1 + 0x78) << 8 | *(ushort *)(param_1 + 0x78) >> 8;
  uVar3 = *(ushort *)(param_1 + 0x7a) << 8 | *(ushort *)(param_1 + 0x7a) >> 8;
  param_2 = (uint)uVar3;
  *(ushort *)(uVar2 + 0x7a) = uVar3;
  *(undefined4 *)(uVar2 + 0x7c) = 0;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf0 */
uint F_00d20e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd20e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133acc));
  F_00cccb40(this + 0x14c);
  F_00d23680(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00d20e90 */
uint F_00d20e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd20e90u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[3];
  fVar2 = param_2[1] * param_2[1];
  fVar3 = param_2[2] * param_2[2];
  *param_1 = SQRT((fVar3 + *param_2 * *param_2) + fVar2);
  param_1[1] = (fVar3 + fVar2) + fVar2;
  param_1[2] = (fVar3 + fVar3) + fVar2;
  param_1[3] = (fVar3 + fVar1 * fVar1) + fVar2;
  return (uint)param_1;
}

/* ref: FUN_00d20fd0 */
uint F_00d20fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xd20fd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*((byte *)GEN_TOP((*(int *)(in_ecx + 0x18) + 2)));
}

/* ref: FUN_00d20fe0 */
uint F_00d20fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd20fe0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (param_2 & 0xff ^ *(uint *)(in_ecx + 0xe4)) & 1;
  *(uint *)(in_ecx + 0xe4) = *(uint *)(in_ecx + 0xe4) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00d21000 */
byte F_00d21000(unsigned int gen_a0)
{
  GEN_ENTER(0xd21000u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xe4) & 1;
}

/* ref: FUN_00d21010 */
uint F_00d21010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd21010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *(uint *)((int)this + 0xe4) =
       *(uint *)((int)this + 0xe4) ^ ((param_1 & 0xff) * 2 ^ *(uint *)((int)this + 0xe4)) & 2;
  this_00 = (undefined *)((int)this + 8);
  bVar1 = F_00cbc040(this_00);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    if ((char)param_1 != '\0') {
      uVar2 = F_00cbc120(this_00,param_2);
      return uVar2;
    }
    uVar2 = F_00cbc1a0(this_00,param_2);
  }
  return uVar2;
}

/* ref: FUN_00d21060 */
uint F_00d21060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd21060u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined * this;
  int iVar1;
  float10 fVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined4 local_c;
  
  iVar1 = *(int *)param_3;
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1097260);
  *(uint *)(param_1 + 0xe4) =
       *(uint *)(param_1 + 0xe4) ^ ((param_2 & 0xff) * 2 ^ *(uint *)(param_1 + 0xe4)) & 2;
  this = (undefined *)(param_1 + 8);
  local_c = (undefined4)
            (longlong)TRUNC((double)(float)((float10)iVar1 / fVar2) * *(double *)&REFG(undefined, 0x10912a8));
  bVar3 = F_00cbc040(this);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (bVar3 != 0) {
    if ((char)param_2 != '\0') {
      uVar4 = F_00cbc120(this,local_c);
      return uVar4;
    }
    uVar4 = F_00cbc1a0(this,local_c);
  }
  return uVar4;
}

/* ref: FUN_00d210f0 */
byte F_00d210f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd210f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xe4) >> 1 & 1;
}

/* ref: FUN_00d21100 */
byte F_00d21100(unsigned int gen_a0)
{
  GEN_ENTER(0xd21100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00cbbff0((undefined *)((int)this + 8));
  if (uVar2 == 0) {
    return ~(*(byte *)((int)this + 0xb0) >> 2) & 1;
  }
  bVar1 = F_00cbc290((undefined *)((int)this + 8));
  return bVar1 != 0;
}

/* ref: FUN_00d21130 */
byte F_00d21130(unsigned int gen_a0)
{
  GEN_ENTER(0xd21130u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xb0) & 1;
}

/* ref: FUN_00d21150 */
uint F_00d21150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd21150u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x30) = param_2;
  return param_2;
}

/* ref: FUN_00d21160 */
uint F_00d21160(unsigned int gen_a0)
{
  GEN_ENTER(0xd21160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: FUN_00d21170 */
uint F_00d21170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd21170u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x18);
  if (uVar1 != 0) {
    *(undefined1 *)(uVar1 + 5) = (undefined1)param_2;
  }
  return uVar1;
}

/* ref: FUN_00d21190 */
byte F_00d21190(unsigned int gen_a0)
{
  GEN_ENTER(0xd21190u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x18) == 0) {
    return 0;
  }
  return *((byte *)GEN_TOP((*(int *)(in_ecx + 0x18) + 5)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf2 */
uint F_00d211a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xd211a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  byte bVar1;
  
  bVar1 = F_00cbc040((undefined *)(param_1 + 8));
  if (bVar1 != 0) {
    return REFG(undefined4, 0x1129a00);
  }
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) | 0x100;
  *(float *)(param_1 + 0xbc) = param_3;
  *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) | 1;
  *(float *)(param_1 + 0xd0) = param_4;
  *(undefined4 *)(param_1 + 0xd4) = param_2;
  return REFG(undefined4, 0x11299e4);
}

/* ref: FUN_00d21200 */
uint F_00d21200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd21200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cbc040((undefined *)((int)this + 8));
  if (bVar1 != 0) {
    return REFG(undefined4, 0x1129a00);
  }
  *(uint *)((int)this + 0xe4) = *(uint *)((int)this + 0xe4) | 1;
  *(undefined4 *)((int)this + 0xd8) = param_1;
  return REFG(undefined4, 0x11299e4);
}

/* ref: FUN_00d21240 */
uint F_00d21240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd21240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cbc040((undefined *)((int)this + 8));
  if (bVar1 != 0) {
    return REFG(undefined4, 0x1129a00);
  }
  *(undefined4 *)((int)this + 0xdc) = param_1;
  return REFG(undefined4, 0x11299e4);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf4 */
uint F_00d21270(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd21270u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *(float *)(param_1 + 0xbc) = param_2;
  bVar1 = F_00cbc040((undefined *)(param_1 + 8));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00cbc390(param_1 + 8,*(float *)(param_1 + 0xbc),param_3);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf3 */
uint F_00d212b0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd212b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,(undefined4)gen_fl2bits(param_2),local_c);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf6 */
uint F_00d21300(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd21300u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *(float *)(param_1 + 0xc0) = param_2;
  bVar1 = F_00cbc040((undefined *)(param_1 + 8));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00cbc680(param_1 + 8,*(float *)(param_1 + 0xc0),param_3);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf5 */
uint F_00d21340(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd21340u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1,(undefined4)gen_fl2bits(param_2),local_c);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf7 */
unsigned int F_00d21390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd21390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(uint *)(in_ecx + 0xe4) = *(uint *)(in_ecx + 0xe4) | 8;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf8 */
unsigned int F_00d213a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd213a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf9 */
uint F_00d213b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd213b0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = ((param_3 & 0xff) * 8 ^ *(uint *)(in_ecx + 0xe4)) & 8;
  *(uint *)(in_ecx + 0xe4) = *(uint *)(in_ecx + 0xe4) ^ uVar1;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf10 */
unsigned int F_00d213d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd213d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf12 */
unsigned int F_00d213e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd213e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf13 */
unsigned int F_00d213f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd213f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00d21400 */
uint F_00d21400(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd21400u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *(float *)(param_1 + 0xc4) = param_2;
  bVar1 = F_00cbc040((undefined *)(param_1 + 8));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00cbc710(param_1 + 8,
                         ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x8c) *
                                (float10)*(float *)(param_1 + 0xc4)))));
  }
  return uVar2;
}

/* ref: FUN_00d21440 */
uint F_00d21440(unsigned int gen_a0)
{
  GEN_ENTER(0xd21440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cbc7e0((undefined *)((int)this + 8));
  return uVar1;
}

/* ref: FUN_00d21450 */
uint F_00d21450(unsigned int gen_a0)
{
  GEN_ENTER(0xd21450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cbc850((undefined *)((int)this + 8));
  return uVar1;
}

/* ref: FUN_00d21460 */
uint F_00d21460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd21460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cbc040((undefined *)((int)this + 8));
  if (bVar1 == 0) {
    *param_1 = 0;
    return (uint)param_1;
  }
  F_00cbcab0((undefined *)((int)this + 8),param_1);
  return (uint)param_1;
}

/* ref: FUN_00d214a0 */
uint F_00d214a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd214a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x400;
  bVar1 = F_00cbc040((undefined *)((int)this + 8));
  if (bVar1 != 0) {
    uVar2 = F_00cbcbc0((undefined *)((int)this + 8));
    return uVar2;
  }
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00d214d0 */
ushort F_00d214d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd214d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x18) != 0) {
    return *((ushort *)GEN_TOP((*(int *)(in_ecx + 0x18) + 0xe)));
  }
  return 0;
}

/* ref: FUN_00d214e0 */
uint F_00d214e0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd214e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *(float *)(param_1 + 200) = param_2;
  *(undefined4 *)(param_1 + 0xcc) = param_3;
  bVar1 = F_00cbc040((undefined *)(param_1 + 8));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00cbcd10(param_1 + 8,*(float *)(param_1 + 200),param_3);
  }
  return uVar2;
}

/* ref: FUN_00d21520 */
float F_00d21520(unsigned int gen_a0)
{
  GEN_ENTER(0xd21520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  float fVar2;
  
  bVar1 = F_00cbc040((undefined *)((int)this + 8));
  if (bVar1 == 0) {
    return *(float *)&REFG(undefined, 0x1097254);
  }
  fVar2 = F_00cbcd90((undefined *)((int)this + 8));
  return fVar2;
}

/* ref: FUN_00d21540 */
uint F_00d21540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd21540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *(undefined1 *)((int)this + 0xe0) = (undefined1)param_1;
  bVar1 = F_00cbc040((undefined *)((int)this + 8));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00cbce00((undefined *)((int)this + 8),(uint)*(byte *)((int)this + 0xe0));
  }
  return uVar2;
}

/* ref: FUN_00d21580 */
float F_00d21580(unsigned int gen_a0)
{
  GEN_ENTER(0xd21580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  float10 fVar4;
  float fVar5;
  
  bVar1 = F_00cbc040((undefined *)((int)this + 8));
  if (bVar1 != 0) {
    fVar5 = F_00cbd050((undefined *)((int)this + 8));
    return fVar5;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x90))(piVar2)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xfc))(piVar2,*(undefined4 *)((int)this + 0x24));
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2,((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)((int)this + 0x24));
    fVar4 = F_00cbec50(((undefined1 *)(gen_frame + 0xc)),*(uint *)((int)this + 0x28));
    (*(float *)(gen_frame + 0x18)) = (float)fVar4;
    F_00cbe3b0(((undefined1 *)(gen_frame + 0xc)));
    return (*(float *)(gen_frame + 0x18));
  }
  return *(float *)&REFG(undefined, 0x1097254);
}

/* ref: FUN_00d21610 */
float F_00d21610(unsigned int gen_a0)
{
  GEN_ENTER(0xd21610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  float fVar2;
  
  bVar1 = F_00cbc040((undefined *)((int)this + 8));
  if (bVar1 == 0) {
    return *(float *)&REFG(undefined, 0x1097254);
  }
  fVar2 = F_00cbd0c0((undefined *)((int)this + 8));
  return fVar2;
}

/* ref: FUN_00d21630 */
float F_00d21630(unsigned int gen_a0)
{
  GEN_ENTER(0xd21630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  float fVar2;
  
  bVar1 = F_00cbc040((undefined *)((int)this + 8));
  if (bVar1 == 0) {
    return *(float *)&REFG(undefined, 0x1097254);
  }
  fVar2 = F_00cbd130((undefined *)((int)this + 8));
  return fVar2;
}

/* ref: FUN_00d21650 */
double F_00d21650(unsigned int gen_a0)
{
  GEN_ENTER(0xd21650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00cbc040((undefined *)((int)this + 8));
  if (bVar1 == 0) {
    return (double)*(float *)&REFG(undefined, 0x1097254);
  }
  return (double)*(float *)((int)this + 0x8c);
}

/* ref: FUN_00d21680 */
uint F_00d21680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd21680u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xf8) = param_2;
  return param_2;
}

/* ref: FUN_00d21690 */
uint F_00d21690(unsigned int gen_a0)
{
  GEN_ENTER(0xd21690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xf8);
}

/* ref: FUN_00d216a0 */
uint F_00d216a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd216a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cbd1a0((undefined *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00d216b0 */
uint F_00d216b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd216b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cbd210((undefined *)((int)this + 8));
  return uVar1;
}

/* ref: FUN_00d216c0 */
uint F_00d216c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd216c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  F_00cbe360(((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)((int)this + 0x24));
  uVar2 = F_00cbe810(((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)((int)this + 0x28));
  if (uVar2 != 0) {
    bVar1 = *(byte *)(uVar2 + 0xe);
    F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
    return (uint)bVar1;
  }
  F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
  return 0;
}

/* ref: FUN_00d21710 */
byte F_00d21710(unsigned int gen_a0)
{
  GEN_ENTER(0xd21710u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xb0) >> 5 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf21 */
byte F_00d21720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd21720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf22 */
unsigned int F_00d21730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd21730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf23 */
byte F_00d21740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd21740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_00d21750 */
uint F_00d21750(unsigned int gen_a0)
{
  GEN_ENTER(0xd21750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  iVar1 = *(int *)((int)this + 0x18);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x90))(piVar2)));
  ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2,((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)(iVar1 + 8));
  uVar3 = F_00cbe720(((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)(iVar1 + 6));
  F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf14 */
byte F_00d217a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd217a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int iVar2;
  
  *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) & 0xfffffffe;
  if (((*(uint *)(this + 0xe4) & 1) != 0) && ((*(uint *)(this + 0xe4) & 2) == 0)) {
    if (this[0x2d] != (undefined1)0x0) {
      F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),(uint)(byte)this[0x2d]);
      bVar1 = F_00cbb1b0(((undefined1 *)(gen_frame + 0xc)));
      if (bVar1 != 0) {
        *(uint *)(this + 0xe4) = *(uint *)(this + 0xe4) | 2;
        F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
        return 0;
      }
      F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
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
byte F_00d21830(unsigned int gen_a0)
{
  GEN_ENTER(0xd21830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) | 1;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x98))))
                            (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1);
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
    F_00cbe8e0(((undefined1 *)(gen_frame + 0x0)));
    *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) | 0x200;
    F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
  }
  uVar3 = F_00cbbff0(this + 8);
  return uVar3 != 0;
}

/* ref: FUN_00d218e0 */
uint F_00d218e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd218e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x1c) + 0x10)));
}

/* ref: FUN_00d218f0 */
byte F_00d218f0(float gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd218f0u, gen_trace_f(gen_a0), gen_a1, gen_a2, gen_a3);
  float param_1 = (float)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*(float *)&REFG(undefined, 0x1097254);
  fVar2 = (float10)(float)((float10)param_1 - (float10)*param_2);
  if (!(fVar1 <= fVar2) || ((GEN_ISNAN(fVar2) || GEN_ISNAN(fVar1)) || fVar2 == fVar1)) {
    if (((*(byte *)(param_3 + 4) & 0x10) == 0) &&
       (fVar1 = (float10)param_4[1],
       fVar2 <= fVar1 && ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(fVar2)) && fVar1 != fVar2))) {
      *param_2 = (float)((float10)*param_2 - (float10)param_4[1]);
      return 0;
    }
  }
  else if (((*(byte *)(param_3 + 4) & 8) == 0) &&
          (!(fVar2 <= (float10)*param_4) != (GEN_ISNAN((float10)*param_4) || GEN_ISNAN(fVar2)))) {
    *param_2 = (float)((float10)*param_2 + (float10)*param_4);
    return 0;
  }
  *param_2 = param_1;
  return 1;
}

/* ref: FUN_00d21970 */
uint F_00d21970(unsigned int gen_a0)
{
  GEN_ENTER(0xd21970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x54);
  *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x58);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)((int)this + 0x5c);
  *(int *)((int)this + 0xac) = *(int *)((int)this + 0xac) + 1;
  if (0x10 < *(int *)((int)this + 0xac)) {
    *(undefined4 *)((int)this + 0xac) = 0x10;
  }
  return *(uint *)((int)this + 0x58);
}

/* ref: FUN_00d219b0 */
unsigned int F_00d219b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd219b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1090708);
  *(undefined4 *)(in_ecx + 0xac) = 0;
  *(undefined4 *)(in_ecx + 0x84) = uVar1;
  *(undefined4 *)(in_ecx + 0x88) = uVar1;
  return 0;
}

/* ref: FUN_00d219d0 */
uint F_00d219d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd219d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
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
  
  bVar5 = GEN_ISNAN((float10)REFG(float, 0x1090708)) || GEN_ISNAN((float10)*(float *)(param_1 + 0x84));
  uVar4 = (undefined2)((uint)in_EAX >> 0x10);
  if (bVar5 != (bVar5 || (float10)REFG(float, 0x1090708) == (float10)*(float *)(param_1 + 0x84))) {
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)param_2;
    *(float *)(param_1 + 0x88) = *param_3;
    return param_2;
  }
  fVar6 = (float10)*(float *)&REFG(undefined, 0x1097254);
  fVar7 = (float10)((float)GEN_TOF(((float10)*(float *)param_2 - (float10)*(float *)(param_1 + 0x84))));
  fVar8 = (float10)(float)((float10)(int)param_4 * (float10)REFG(double, 0x1091858));
  if (!(fVar6 <= fVar7) == (GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6))) {
    if (!(fVar7 <= fVar8) != (GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7))) {
      fVar1 = ((float)GEN_TOF((fVar8 + (float10)*(float *)(param_1 + 0x84))));
      *(float *)(param_1 + 0x84) = fVar1;
      *(float *)param_2 = fVar1;
      goto LAB_00d21a83;
    }
  }
  else {
    fVar9 = -fVar8;
    if (fVar7 <= fVar9 && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar7)) && fVar9 != fVar7)) {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x84) - fVar8)));
      *(float *)(param_1 + 0x84) = fVar1;
      *(float *)param_2 = fVar1;
      goto LAB_00d21a83;
    }
  }
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)param_2;
LAB_00d21a83: ;
  fVar7 = (float10)((float)GEN_TOF(((float10)*param_3 - (float10)*(float *)(param_1 + 0x88))));
  if (!(fVar6 <= fVar7) == (GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6))) {
    bVar5 = GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7);
    uVar3 = CONCAT22(uVar4,(ushort)!(fVar7 <= fVar8) << 8 | (ushort)bVar5 << 10 |
                           (ushort)(bVar5 || fVar8 == fVar7) << 0xe);
    if (!(fVar7 <= fVar8) != bVar5) {
      fVar1 = ((float)GEN_TOF((fVar8 + (float10)*(float *)(param_1 + 0x88))));
      *(float *)(param_1 + 0x88) = fVar1;
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
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x88) - fVar8)));
      *(float *)(param_1 + 0x88) = fVar1;
      *param_3 = fVar1;
      return uVar3;
    }
  }
  *(float *)(param_1 + 0x88) = *param_3;
  return uVar3;
}

/* ref: FUN_00d21b00 */
unsigned int F_00d21b00(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xd21b00u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)*(float *)&REFG(undefined, 0x1097254);
  if ((*((byte *)GEN_TOP((*(int *)(in_ecx + 0x18) + 0xc))) & 0x80) == 0) {
    fVar3 = (float10)param_3 * (float10)param_5;
    fVar2 = (float10)param_2;
  }
  else {
    fVar2 = (float10)(float)((float10)param_2 - (float10)param_4);
    if ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar1)) && fVar2 < fVar1 != (fVar2 == fVar1)) {
      *(float *)(in_ecx + 0x94) = (float)(float10)1;
      return 0;
    }
    fVar3 = (float10)param_5 * ((float10)param_3 - (float10)param_4);
  }
  param_3 = (float)fVar3;
  fVar3 = (float10)param_3;
  if (((GEN_ISNAN(fVar1) || GEN_ISNAN(fVar3)) == ((GEN_ISNAN(fVar1) || GEN_ISNAN(fVar3)) || fVar1 == fVar3)) &&
     (!(fVar2 <= fVar3) == (GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)))) {
    *(float *)(in_ecx + 0x94) = (float)((float10)1 - fVar2 / fVar3);
    return 0;
  }
  *(float *)(in_ecx + 0x94) = *(float *)&REFG(undefined, 0x1097254);
  return 0;
}

/* ref: FUN_00d21ba0 */
unsigned int F_00d21ba0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xd21ba0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
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
      fVar3 = (float10)(float)(fVar3 - fVar5) / (fVar4 - fVar5);
    }
  }
  else {
    fVar3 = (float10)1;
  }
  *(float *)(param_1 + 0x98) = (float)fVar3;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x98))(piVar1);
  if (*(char *)(uVar2 + 0x39c) != '\0') {
    *(float *)(param_1 + 0x98) =
         ((float)GEN_TOF(((float10)*(float *)(uVar2 + 0x3a0) * (float10)*(float *)(param_1 + 0x98))));
    return 0;
  }
  *(float *)(param_1 + 0x98) =
       ((float)GEN_TOF(((float10)*(float *)(param_1 + 0xb4) * (float10)*(float *)(param_1 + 0x98))));
  return 0;
}

/* ref: FUN_00d21c40 */
unsigned int F_00d21c40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd21c40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  if ((*((byte *)GEN_TOP((*(int *)(param_1 + 0x18) + 0xc))) & 0x40) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x14)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,&(*(float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x18)));
    fVar2 = (float10)param_2;
    fVar3 = (float10)(*(float *)(gen_frame + 0x14));
    if (!(fVar2 <= fVar3) != (GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2))) {
      *(float *)(param_1 + 0x9c) = (*(float *)(gen_frame + 0x18));
      return 0;
    }
    fVar4 = (float10)(*(float *)(gen_frame + 0x10));
    if (fVar2 <= fVar4 && ((!GEN_ISNAN(fVar4) && !GEN_ISNAN(fVar2)) && fVar4 != fVar2)) {
      *(float *)(param_1 + 0x9c) = (float)(float10)1;
      return 0;
    }
    *(float *)(param_1 + 0x9c) =
         ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)1 -
                                                  (float10)((float)GEN_TOF(((float10)(float)(fVar2 - fVar4) /
                                                                  (fVar3 - fVar4))))))) *
                                 (float10)(*(float *)(gen_frame + 0xc))))) + (float10)(*(float *)(gen_frame + 0x18)))));
  }
  return 0;
}

/* ref: FUN_00d21d00 */
byte F_00d21d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd21d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)((int)this + 0x18);
  if ((*(byte *)(iVar1 + 0xc) & 4) != 0) {
    *param_2 = (float)(float10)1;
    return (byte)iVar1;
  }
  bVar2 = F_00d007c0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc))),param_1,param_2);
  return bVar2;
}

/* ref: FUN_00d21d30 */
byte F_00d21d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd21d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x18);
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x90))(piVar2)));
  if (*(short *)(iVar1 + 6) == -1) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x6c))(piVar2,*(undefined4 *)(iVar1 + 8),param_1,param_2);
    if ((char)uVar3 == '\0') {
      return 0;
    }
  }
  else {
    *param_1 = *(undefined4 *)(iVar1 + 8);
    *param_2 = (uint)*(ushort *)(iVar1 + 6);
  }
  return 1;
}

/* ref: FUN_00d21d90 */
float10 F_00d21d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd21d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  int * piVar2;
  code * pcVar3;
  byte bVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x34))(piVar2);
  if (((uVar5 == 0) || ((*((byte *)GEN_TOP((*(int *)(param_1 + 0x18) + 0xc))) & 8) != 0)) ||
     ((bVar4 = F_00cbc040((undefined *)(param_1 + 8)), bVar4 != 0 &&
      (bVar4 = F_00cbce70((undefined *)(param_1 + 8)), bVar4 != 1)))) {
    return (float10)*(float *)&REFG(undefined, 0x1097254);
  }
  fVar6 = F_00c4d1fa((float10)*(float *)param_2);
  fVar6 = (float10)(float)((float10)(float)fVar6 + (float10)*(double *)&REFG(undefined, 0x1094620));
  if ((float10)*(double *)&REFG(undefined, 0x1080228) <= fVar6) {
    fVar6 = (float10)(float)(fVar6 - (float10)REFG(double, 0x10920b8));
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
    fVar6 = F_00c4d1fa((float10)*(float *)(param_2 + 8));
    fVar7 = (float10)(float)((float10)1 - (float10)(float)fVar6 / (float10)*(double *)&REFG(undefined, 0x1094620))
    ;
    fVar6 = (float10)1;
    fVar7 = (float10)(float)(fVar7 + fVar7);
    param_2 = (uint)gen_fl2bits(fVar1);
    if (!(fVar6 <= fVar7) != ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6)) || fVar7 == fVar6)) {
      param_2 = (uint)gen_fl2bits((float)(fVar7 * (float10)fVar1));
    }
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x44);
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
byte F_00d21f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd21f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x18);
  F_00c49386(param_1,";-------- SoundObject %d ---------\n",*(undefined4 *)(this + 0x20));
  F_00c49386(param_1,"ObjectID = %d\n",*(undefined4 *)(this + 0x20));
  F_00c49386(param_1,"Type = %d\n",(uint)*(byte *)(iVar1 + 2));
  F_00c49386(param_1,"Version = %d\n",(uint)*(byte *)(iVar1 + 3));
  F_00c49386(param_1,"PointExpansion = %d\n",*(byte *)(iVar1 + 4) >> 1 & 1);
  F_00c49386(param_1,"3DFlag = %d\n",*(byte *)(iVar1 + 4) >> 2 & 1);
  F_00c49386(param_1,"TopInfinity = %d\n",*(byte *)(iVar1 + 4) >> 3 & 1);
  F_00c49386(param_1,"BottomInfinity = %d\n",*(byte *)(iVar1 + 4) >> 4 & 1);
  F_00c49386(param_1,"UsefixedDirection = %d\n",(uint)(*(byte *)(iVar1 + 4) >> 7));
  F_00c49386(param_1,"IsFirstFixedDirection = %d\n",*(byte *)(iVar1 + 0xc) >> 1 & 1);
  F_00c49386(param_1,"UseDistanceFilters = %d\n",*(byte *)(iVar1 + 0xc) >> 6 & 1);
  F_00c49386(param_1,"GroupNo = %d\n",(uint)*(byte *)(iVar1 + 5));
  F_00c49386(param_1,"BankID = %d\n",*(undefined4 *)(iVar1 + 8));
  F_00c49386(param_1,"LocalID = %d\n",(uint)*(ushort *)(iVar1 + 6));
  F_00c49386(param_1,"ABGroupNo = %d\n",(uint)*(ushort *)(iVar1 + 0xe));
  F_00c49386(param_1,"\n");
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf31 */
byte F_00d22040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd22040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
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
      *(char *)(iVar2 + 2) = (char)uVar5;
      return 1;
    }
  }
  else {
    pcVar6 = "Version";
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
        *(char *)(iVar2 + 3) = (char)uVar5;
        return 1;
      }
    }
    else {
      pcVar6 = "PointExpansion";
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
          *(byte *)(iVar2 + 4) =
               *(byte *)(iVar2 + 4) ^ ((char)uVar5 * '\x02' ^ *(byte *)(iVar2 + 4)) & 2;
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
            *(byte *)(iVar2 + 4) =
                 *(byte *)(iVar2 + 4) ^ ((char)uVar5 * '\x04' ^ *(byte *)(iVar2 + 4)) & 4;
            return 1;
          }
        }
        else {
          pcVar6 = "TopInfinity";
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
              *(byte *)(iVar2 + 4) =
                   *(byte *)(iVar2 + 4) ^ ((char)uVar5 << 3 ^ *(byte *)(iVar2 + 4)) & 8;
              return 1;
            }
          }
          else {
            pcVar6 = "BottomInfinity";
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
                *(byte *)(iVar2 + 4) =
                     *(byte *)(iVar2 + 4) ^ ((char)uVar5 << 4 ^ *(byte *)(iVar2 + 4)) & 0x10;
                return 1;
              }
            }
            else {
              pcVar6 = "UsefixedDirection";
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
                  *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) & 0x7f | (char)uVar5 << 7;
                  return 1;
                }
              }
              else {
                pcVar6 = "IsFirstFixedDirection";
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
                    *(byte *)(iVar2 + 0xc) =
                         *(byte *)(iVar2 + 0xc) ^
                         ((char)uVar5 * '\x02' ^ *(byte *)(iVar2 + 0xc)) & 2;
                    return 1;
                  }
                }
                else {
                  pcVar6 = "UseDistanceFilters";
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
                      *(byte *)(iVar2 + 0xc) =
                           *(byte *)(iVar2 + 0xc) ^
                           ((char)uVar5 << 6 ^ *(byte *)(iVar2 + 0xc)) & 0x40;
                      return 1;
                    }
                  }
                  else {
                    pcVar6 = "GroupNo";
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
                        *(char *)(iVar2 + 5) = (char)uVar5;
                        return 1;
                      }
                    }
                    else {
                      pcVar6 = "BankID";
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
                          *(uint *)(iVar2 + 8) = uVar5;
                          uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x128))))
                                            (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))),uVar5);
                          *(uint *)(iVar2 + 8) = uVar5;
                          return 1;
                        }
                      }
                      else {
                        pcVar6 = "LocalID";
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
                            *(short *)(iVar2 + 6) = (short)uVar5;
                            return 1;
                          }
                        }
                        else {
                          pcVar6 = "ABGroupNo";
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
                            pcVar6 = "FirstInactive";
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
                              *(byte *)(iVar2 + 4) =
                                   *(byte *)(iVar2 + 4) ^
                                   ((char)uVar5 << 5 ^ *(byte *)(iVar2 + 4)) & 0x20;
                            }
                            return 1;
                          }
                          uVar5 = F_00d00d00(0,0);
                          if (uVar5 != 0) {
                            uVar5 = F_00c4c74c(uVar5);
                            *(short *)(iVar2 + 0xe) = (short)uVar5;
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
uint F_00d22580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd22580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133dc4));
  F_00cbbd70((int)this + 8);
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x108));
  *(undefined1 *)((int)this + 0x120) = 1;
  *(undefined4 *)((int)this + 0x30) = 0;
  uVar4 = F_00cbbd70(((undefined1 *)(gen_frame + 0xc)));
  F_00cbbdc0((undefined *)((int)this + 8),uVar4);
  F_00cbbdb0(((undefined1 *)(gen_frame + 0xc)));
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2d) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(uint *)((int)this + 0xe4) = *(uint *)((int)this + 0xe4) & 0xfffffffd | 1;
  *(byte *)((int)this + 0x2c) = *(byte *)((int)this + 0x2c) & 0xfc;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1097254);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)&REFG(undefined, 0x1097254);
  *(undefined4 *)((int)this + 0x54) = uVar3;
  *(undefined4 *)((int)this + 0x58) = uVar3;
  *(undefined4 *)((int)this + 0x5c) = uVar3;
  *(undefined4 *)((int)this + 0x60) = uVar3;
  *(undefined4 *)((int)this + 100) = uVar3;
  *(undefined4 *)((int)this + 0x68) = uVar3;
  *(undefined4 *)((int)this + 0x6c) = uVar3;
  *(undefined4 *)((int)this + 0x70) = uVar3;
  *(undefined4 *)((int)this + 0x74) = uVar3;
  *(undefined4 *)((int)this + 0x78) = uVar3;
  *(undefined4 *)((int)this + 0x7c) = uVar3;
  *(uint *)((int)this + 0xe4) = *(uint *)((int)this + 0xe4) & 0xfffffff3;
  *(undefined4 *)((int)this + 0x80) = uVar3;
  uVar2 = REFG(float, 0x1090708);
  *(undefined4 *)((int)this + 0x84) = REFG(float, 0x1090708);
  *(undefined4 *)((int)this + 0x88) = uVar2;
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xfffff820 | 0x20;
  fVar1 = (float10)1;
  *(undefined1 *)((int)this + 0x34) = 0;
  *(float *)((int)this + 0x8c) = (float)fVar1;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(float *)((int)this + 0x9c) = (float)fVar1;
  *(undefined4 *)((int)this + 0x90) = uVar3;
  *(undefined4 *)((int)this + 0x94) = uVar3;
  *(undefined4 *)((int)this + 0x98) = uVar3;
  *(undefined4 *)((int)this + 0xa0) = uVar3;
  *(undefined4 *)((int)this + 0xa4) = uVar3;
  *(undefined4 *)((int)this + 0xa8) = uVar3;
  *(undefined4 *)((int)this + 0xb4) = uVar3;
  *(float *)((int)this + 0xbc) = (float)fVar1;
  *(float *)((int)this + 0xc0) = (float)fVar1;
  *(float *)((int)this + 0xc4) = (float)fVar1;
  *(undefined4 *)((int)this + 200) = uVar3;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = uVar3;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined1 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  return (uint)this;
}

/* ref: FUN_00d22720 */
uint F_00d22720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd22720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133dc4));
  F_00cbbd70((int)this + 8);
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = param_2;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x108));
  *(undefined1 *)((int)this + 0x120) = 1;
  *(undefined4 *)((int)this + 0x30) = 0;
  uVar4 = F_00cbbd70(((undefined1 *)(gen_frame + 0xc)));
  F_00cbbdc0((undefined *)((int)this + 8),uVar4);
  F_00cbbdb0(((undefined1 *)(gen_frame + 0xc)));
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2d) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(uint *)((int)this + 0xe4) = *(uint *)((int)this + 0xe4) & 0xfffffffd | 1;
  *(byte *)((int)this + 0x2c) = *(byte *)((int)this + 0x2c) & 0xfc;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1097254);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)&REFG(undefined, 0x1097254);
  *(undefined4 *)((int)this + 0x54) = uVar3;
  *(undefined4 *)((int)this + 0x58) = uVar3;
  *(undefined4 *)((int)this + 0x5c) = uVar3;
  *(undefined4 *)((int)this + 0x60) = uVar3;
  *(undefined4 *)((int)this + 100) = uVar3;
  *(undefined4 *)((int)this + 0x68) = uVar3;
  *(undefined4 *)((int)this + 0x6c) = uVar3;
  *(undefined4 *)((int)this + 0x70) = uVar3;
  *(undefined4 *)((int)this + 0x74) = uVar3;
  *(undefined4 *)((int)this + 0x78) = uVar3;
  *(undefined4 *)((int)this + 0x7c) = uVar3;
  *(uint *)((int)this + 0xe4) = *(uint *)((int)this + 0xe4) & 0xfffffff3;
  *(undefined4 *)((int)this + 0x80) = uVar3;
  uVar2 = REFG(float, 0x1090708);
  *(undefined4 *)((int)this + 0x84) = REFG(float, 0x1090708);
  *(undefined4 *)((int)this + 0x88) = uVar2;
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xfffff820 | 0x20;
  fVar1 = (float10)1;
  *(undefined1 *)((int)this + 0x34) = 0;
  *(float *)((int)this + 0x8c) = (float)fVar1;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(float *)((int)this + 0x9c) = (float)fVar1;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0x90) = uVar3;
  *(undefined4 *)((int)this + 0x94) = uVar3;
  *(undefined4 *)((int)this + 0x98) = uVar3;
  *(undefined4 *)((int)this + 0xa0) = uVar3;
  *(undefined4 *)((int)this + 0xa4) = uVar3;
  *(undefined4 *)((int)this + 0xa8) = uVar3;
  *(undefined4 *)((int)this + 0xb4) = uVar3;
  *(float *)((int)this + 0xbc) = (float)fVar1;
  *(float *)((int)this + 0xc0) = (float)fVar1;
  *(float *)((int)this + 0xc4) = (float)fVar1;
  *(undefined4 *)((int)this + 200) = uVar3;
  *(undefined4 *)((int)this + 0xd0) = uVar3;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined1 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  return (uint)this;
}

/* ref: FUN_00d228c0 */
byte F_00d228c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd228c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * puVar1;
  int iVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xffffffbf;
  piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  iVar2 = *(int *)((int)this + 0x18);
  puVar1 = (uint *)((int)this + 0x28);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x90))(piVar4)));
  if (*(short *)(iVar2 + 6) == -1) {
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x6c))(piVar4,*(undefined4 *)(iVar2 + 8),(int)this + 0x24,puVar1)
    ;
    if ((char)uVar5 == '\0') {
      return 0;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(iVar2 + 8);
    *puVar1 = (uint)*(ushort *)(iVar2 + 6);
  }
  F_00d2dd80(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)((int)this + 0x24));
  bVar3 = F_00cbeb10(((undefined1 *)(gen_frame + 0xc)));
  *(uint *)((int)this + 0xb0) =
       *(uint *)((int)this + 0xb0) ^ ((uint)bVar3 << 7 ^ *(uint *)((int)this + 0xb0)) & 0x80;
  bVar3 = F_00cbe940(((undefined1 *)(gen_frame + 0xc)));
  if (bVar3 != 0) {
    bVar3 = F_00cbe760(((undefined1 *)(gen_frame + 0xc)),*puVar1);
    *(uint *)((int)this + 0xb0) =
         *(uint *)((int)this + 0xb0) ^ ((uint)bVar3 << 5 ^ *(uint *)((int)this + 0xb0)) & 0x20;
    uVar5 = F_00cbe6e0(((undefined1 *)(gen_frame + 0xc)),*puVar1);
    if (uVar5 != 0xffffffff) {
      *(char *)((int)this + 0x2d) = (char)uVar5;
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
      if ((iVar2 != 0) && (bVar3 = F_00d009a0(iVar2), bVar3 != 0)) {
        F_00cbec10(((undefined1 *)(gen_frame + 0xc)),*puVar1,&(*(undefined4 *)(gen_frame + 0x18)));
        *(undefined4 *)((int)this + 0x30) = (*(undefined4 *)(gen_frame + 0x18));
      }
      F_00cbe880(((undefined1 *)(gen_frame + 0xc)));
      uVar5 = F_00cbe7a0(((undefined1 *)(gen_frame + 0xc)),*puVar1);
      *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(uVar5 + 0x78);
      *(undefined1 *)((int)this + 0x2c) = *(undefined1 *)(uVar5 + 0x6c);
      F_00cbe8b0(((undefined1 *)(gen_frame + 0xc)));
      *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x40;
      F_00cbe3b0(((undefined1 *)(gen_frame + 0xc)));
      return 1;
    }
  }
  F_00cbe3b0(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf11 */
uint F_00d22a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd22a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1097254);
  *param_1 = *(undefined4 *)&REFG(undefined, 0x1097254);
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = (undefined4)gen_fl2bits((float)(float10)1);
  return (uint)param_1;
}

/* ref: FUN_00d22a30 */
byte F_00d22a30(unsigned int gen_a0)
{
  GEN_ENTER(0xd22a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if ((*(byte *)((int)this + 0xb0) & 0x40) == 0) {
    bVar1 = F_00d228c0(this);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return *(byte *)((int)this + 0xb0) >> 5 & 1;
}

/* ref: FUN_00d22a60 */
uint F_00d22a60(unsigned int gen_a0)
{
  GEN_ENTER(0xd22a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if ((*(byte *)((int)this + 0xb0) & 0x40) == 0) {
    bVar1 = F_00d228c0(this);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (uint)*(byte *)((int)this + 0x2d);
}

/* ref: FUN_00d22a80 */
uint F_00d22a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd22a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint extraout_EAX = 0;
  int * piVar2;
  
  *(undefined1 *)((int)this + 0x120) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x108));
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0xe8);
  do {
    if (*piVar2 == 0) {
      *(undefined4 *)((int)this + uVar1 * 4 + 0xe8) = param_1;
      break;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar1 < 4);
  if (*(char *)((int)this + 0x120) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x108));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00d22ad0 */
uint F_00d22ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd22ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint extraout_EAX = 0;
  int * piVar2;
  
  *(undefined1 *)((int)this + 0x120) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x108));
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0xe8);
  do {
    if (*piVar2 == param_1) {
      *(undefined4 *)((int)this + uVar1 * 4 + 0xe8) = 0;
      break;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar1 < 4);
  if (*(char *)((int)this + 0x120) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x108));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00d22b20 */
uint F_00d22b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd22b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  ushort uVar3;
  int * piVar4;
  uint uVar5;
  
  piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  iVar1 = *(int *)((int)this + 0x18);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x90))(piVar4)));
  ((code *)*(gen_code32 *)(*piVar4 + 0x48))(piVar4,((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)(iVar1 + 8));
  if ((*(byte *)((int)this + 0xb0) & 0x40) == 0) {
    bVar2 = F_00d228c0(this);
    if (bVar2 == 0) {
      uVar3 = 0;
      goto LAB_00d22b6b;
    }
  }
  uVar3 = (ushort)*(byte *)((int)this + 0x2d);
LAB_00d22b6b: ;
  *(ushort *)(param_1 + 0x32) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(param_1 + 0x2c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x10)));
  *(ushort *)(param_1 + 0x30) = (ushort)*((byte *)GEN_TOP((*(int *)((int)this + 0x18) + 2)));
  *(byte *)(param_1 + 0x34) = *(byte *)((int)this + 0xb0) & 1;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)this + 0x54);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((int)this + 0x58);
  if (*(ushort *)(iVar1 + 6) != 0xffff) {
    uVar5 = F_00cbe720(((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)(iVar1 + 6));
    *(uint *)(param_1 + 0x24) = uVar5;
    F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
    return uVar5;
  }
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar1 + 8);
  F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
  return 0xffff;
}

/* ref: FUN_00d22bf0 */
uint F_00d22bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd22bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar1 = *(uint *)((int)this + 0x1c);
  if (*((int *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0x2f8))) != 0) {
    F_00d22b20(this,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x38;
    (*(ulonglong *)(gen_frame + 0x8)) = F_00427d90();
    F_00d0bf70(&(*(undefined2 *)(gen_frame + 0x0)),&(*(undefined2 *)(gen_frame + 0x0)));
    uVar1 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc))),&(*(undefined2 *)(gen_frame + 0x0)),0x38);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: FUN_00d22c70 */
uint F_00d22c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd22c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this,((undefined4 *)(gen_frame + 0x10)));
    ((undefined4 *)(gen_frame + 0x10))[0] = 0x380404;
    (*(ulonglong *)(gen_frame + 0x18)) = F_00427d90();
    F_00d0bf70(((undefined4 *)(gen_frame + 0x10)),((undefined4 *)(gen_frame + 0x10)));
    F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc))),((undefined4 *)(gen_frame + 0x10)),0x38);
  }
  if ((*(uint *)((int)this + 0xb0) & 0x200) != 0) {
    F_00d2dd80(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)((int)this + 0x24));
    F_00cbe910(((undefined1 *)(gen_frame + 0x4)));
    *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xfffffdff;
    F_00cbe3b0(((undefined1 *)(gen_frame + 0x4)));
  }
  this_00 = (undefined *)((int)this + 8);
  bVar1 = F_00cbc040(this_00);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    F_00cbdbf0(this_00,param_1);
    uVar2 = F_00cbbd70(((undefined1 *)(gen_frame + 0x0)));
    uVar2 = F_00cbbdc0(this_00,uVar2);
    F_00cbbdb0(((undefined1 *)(gen_frame + 0x0)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar2;
}

/* ref: FUN_00d22d50 */
uint F_00d22d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd22d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00d22c70(param_1,local_c);
  return uVar1;
}

/* ref: FUN_00d22da0 */
uint F_00d22da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd22da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  param_1[1] = (short)param_2 + 0x10;
  *param_1 = 3;
  *(undefined4 *)(param_1 + 2) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x10)));
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 0x20);
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xf4))(piVar1);
  if (uVar2 == 0) {
    F_00d241f0(param_1,param_1);
  }
  return (uint)(param_1 + 8);
}

/* ref: FUN_00d22df0 */
float10 F_00d22df0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xd22df0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
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
      pfVar1 = (float *)F_00d034e0(param_2,&(*(float *)(gen_frame + 0x0)));
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
      pfVar1 = (float *)F_00d034e0(param_2,&(*(float *)(gen_frame + 0x0)));
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
float10 F_00d22f40(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd22f40u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float fStack_3c;
  float fStack_2c;
  
  if (1 < *(int *)(param_1 + 0xac)) {
    fVar2 = (float10)param_2;
    fVar3 = (float10)*(float *)&REFG(undefined, 0x1097254);
    if ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) == ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
      fStack_2c = *(float *)(param_1 + 0x44);
      fStack_3c = *(float *)(param_1 + 0x54);
      if (param_3 == 0) {
        fStack_2c = *(float *)&REFG(undefined, 0x1097254);
        fStack_3c = *(float *)&REFG(undefined, 0x1097254);
      }
      fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF((((float10)((float)GEN_TOF(((((float10)GEN_TOD(SQRT((*(float *)(param_1 + 0x48)
                                                                         * *(float *)(param_1 + 0x48
                                                                                     ) +
                                                                        *(float *)(param_1 + 0x40) *
                                                                        *(float *)(param_1 + 0x40))
                                                                        + fStack_2c * fStack_2c))) -
                                                         ((float10)GEN_TOD(SQRT((*(float *)(param_1 + 0x58) *
                                                                        *(float *)(param_1 + 0x58) +
                                                                       *(float *)(param_1 + 0x50) *
                                                                       *(float *)(param_1 + 0x50)) +
                                                                       fStack_3c * fStack_3c)))) /
                                                        (float10)*(double *)&REFG(undefined, 0x10947f0)))) +
                                       (float10)*(double *)&REFG(undefined, 0x1133e48)) /
                                      (float10)*(double *)&REFG(undefined, 0x1133e48)))) * fVar2 +
                     ((float10)1 - fVar2))));
      fVar2 = (float10)fVar1;
      if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
        return (float10)fVar1;
      }
      return (float10)*(float *)&REFG(undefined, 0x1097254);
    }
  }
  return (float10)1;
}

/* ref: FUN_00d23090 */
uint F_00d23090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd23090u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
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
  F_004eb4e0(param_1,uVar3);
  fVar6 = (float10)*(float *)&REFG(undefined, 0x1097254);
  bVar5 = GEN_ISNAN(fVar6) || GEN_ISNAN((float10)*param_2);
  if (((bVar5 == (bVar5 || fVar6 == (float10)*param_2)) ||
      (bVar5 = GEN_ISNAN(fVar6) || GEN_ISNAN((float10)param_2[1]),
      bVar5 == (bVar5 || fVar6 == (float10)param_2[1]))) ||
     (bVar5 = GEN_ISNAN((float10)param_2[2]) || GEN_ISNAN(fVar6),
     bVar5 == (bVar5 || (float10)param_2[2] == fVar6))) {
    pfVar4 = (float *)F_00d034e0(&(*(float *)(gen_frame + 0x80)),&(*(float *)(gen_frame + 0x60)));
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
    pfVar4 = (float *)F_00d034e0(&(*(float *)(gen_frame + 0x90)),&(*(float *)(gen_frame + 0x70)));
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
float10 F_00d23370(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd23370u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  float fVar1;
  float fVar2;
  int * piVar3;
  uint uVar4;
  float * pfVar5;
  float10 fVar6;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x98))(piVar3)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,((undefined1 *)(gen_frame + 0x68)));
  if ((char)uVar4 == '\0') {
    fVar6 = (float10)*(float *)&REFG(undefined, 0x1097254);
    F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
    return fVar6;
  }
  fVar6 = ((float10)GEN_TOD(fcos((float10)param_2)));
  (*(float *)(gen_frame + 0x64)) = (float)fVar6;
  (*(float *)(gen_frame + 0x44)) = (float)((float10)(float)fVar6 * (float10)*(double *)&REFG(undefined, 0x1088120));
  (*(float *)(gen_frame + 0x48)) = *(float *)&REFG(undefined, 0x1097254);
  fVar6 = ((float10)GEN_TOD(fsin((float10)param_2)));
  (*(float *)(gen_frame + 0x64)) = (float)fVar6;
  (*(float *)(gen_frame + 0x4c)) = (float)((float10)(float)fVar6 * (float10)*(double *)&REFG(undefined, 0x1088120));
  fVar6 = (float10)1;
  (*(float *)(gen_frame + 0x50)) = (float)fVar6;
  (*(float *)(gen_frame + 0x54)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x58)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x5c)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x9c)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x60)) = (float)fVar6;
  (*(float *)(gen_frame + 0x60)) = (float)fVar6;
  (*(float *)(gen_frame + 0x98)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0xa0)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0xa4)) = (float)fVar6;
  F_004eb600(((undefined1 *)(gen_frame + 0x68)),((undefined1 *)(gen_frame + 0x4)));
  F_004eb4e0(((undefined1 *)(gen_frame + 0x68)),((undefined1 *)(gen_frame + 0x4)));
  pfVar5 = (float *)F_00c34320(((undefined1 *)(gen_frame + 0x68)),&(*(float *)(gen_frame + 0x54)),&(*(float *)(gen_frame + 0x44)));
  fVar1 = *pfVar5;
  fVar2 = pfVar5[1];
  (*(float *)(gen_frame + 0x44)) = fVar1;
  (*(float *)(gen_frame + 0x4c)) = pfVar5[2];
  (*(float *)(gen_frame + 0x48)) = fVar2;
  (*(float *)(gen_frame + 0x50)) = pfVar5[3];
  fVar6 = F_00c4d1fa((float10)fVar1);
  fVar1 = (float)fVar6;
  (*(float *)(gen_frame + 0x64)) = fVar1;
  fVar6 = (float10)fVar1;
  if (!((float10)*(float *)&REFG(undefined, 0x1097254) <= fVar6) !=
      (GEN_ISNAN(fVar6) || GEN_ISNAN((float10)*(float *)&REFG(undefined, 0x1097254)))) {
    (*(float *)(gen_frame + 0x64)) = (float)(fVar6 + (float10)REFG(double, 0x10920b8));
    fVar6 = (float10)(float)(fVar6 + (float10)REFG(double, 0x10920b8));
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return fVar6;
}

/* ref: FUN_00d234c0 */
float10 F_00d234c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd234c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  int * piVar3;
  uint uVar4;
  float * pfVar5;
  float10 fVar6;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x98))(piVar3)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,((undefined1 *)(gen_frame + 0x28)));
  if ((char)uVar4 == '\0') {
    fVar6 = (float10)*(float *)&REFG(undefined, 0x1097254);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return fVar6;
  }
  fVar6 = ((float10)GEN_TOD(fcos((float10)param_2)));
  (*(float *)(gen_frame + 0x24)) = (float)fVar6;
  (*(float *)(gen_frame + 0x4)) = (float)((float10)(float)fVar6 * (float10)*(double *)&REFG(undefined, 0x1088120));
  (*(float *)(gen_frame + 0x8)) = *(float *)&REFG(undefined, 0x1097254);
  fVar6 = ((float10)GEN_TOD(fsin((float10)param_2)));
  (*(float *)(gen_frame + 0x24)) = (float)fVar6;
  (*(float *)(gen_frame + 0xc)) = (float)((float10)(float)fVar6 * (float10)*(double *)&REFG(undefined, 0x1088120));
  fVar6 = (float10)1;
  (*(float *)(gen_frame + 0x10)) = (float)fVar6;
  (*(float *)(gen_frame + 0x14)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x18)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x1c)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x5c)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x20)) = (float)fVar6;
  (*(float *)(gen_frame + 0x20)) = (float)fVar6;
  (*(float *)(gen_frame + 0x60)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x58)) = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x64)) = (float)fVar6;
  pfVar5 = (float *)F_00c34320(((undefined1 *)(gen_frame + 0x28)),&(*(float *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x4)));
  fVar1 = *pfVar5;
  fVar2 = pfVar5[1];
  (*(float *)(gen_frame + 0x4)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = fVar2;
  (*(float *)(gen_frame + 0xc)) = pfVar5[2];
  (*(float *)(gen_frame + 0x10)) = pfVar5[3];
  fVar6 = F_00c4d1fa((float10)fVar1);
  fVar1 = (float)fVar6;
  (*(float *)(gen_frame + 0x24)) = fVar1;
  fVar6 = (float10)fVar1;
  if (!((float10)*(float *)&REFG(undefined, 0x1097254) <= fVar6) !=
      (GEN_ISNAN(fVar6) || GEN_ISNAN((float10)*(float *)&REFG(undefined, 0x1097254)))) {
    (*(float *)(gen_frame + 0x24)) = (float)(fVar6 + (float10)REFG(double, 0x10920b8));
    fVar6 = (float10)(float)(fVar6 + (float10)REFG(double, 0x10920b8));
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return fVar6;
}

/* ref: FUN_00d235f0 */
uint F_00d235f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd235f0u, gen_a0, gen_a1, 0u, 0u);
  float * in_eax = (float *)(uintptr_t)gen_a0;
  float * in_ecx = (float *)(uintptr_t)gen_a1;
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
uint F_00d23680(unsigned int gen_a0)
{
  GEN_ENTER(0xd23680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  byte bVar2;
  uint extraout_EAX = 0;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133dc4));
  *(undefined1 *)((int)this + 0x120) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x108));
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)((int)this + 0xe8);
  (*(int *)(gen_frame + 0x8)) = 4;
  do {
    piVar1 = (int *)*(*(int * PTR32 *)(gen_frame + 0xc));
    if (piVar1 != (int *)0x0) {
      bVar2 = F_00cbc040((undefined *)((int)this + 8));
      if (bVar2 == 0) {
        ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,*(undefined4 *)((int)this + 0x20));
      }
      else {
        F_00cbbe30((undefined *)((int)this + 8),piVar1);
        F_00cbca50((undefined *)((int)this + 8),*(undefined4 *)((int)this + 0x20));
      }
    }
    (*(int * PTR32 *)(gen_frame + 0xc)) = (*(int * PTR32 *)(gen_frame + 0xc)) + 1;
    (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + -1;
  } while ((*(int *)(gen_frame + 0x8)) != 0);
  if (*(char *)((int)this + 0x34) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 0x38);
  }
  else {
    (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)
               (longlong)
               TRUNC((double)((float)GEN_TOF(((float10)*(int *)((int)this + 0x3c) /
                                    (float10)*(double *)&REFG(undefined, 0x1097260)))) * *(double *)&REFG(undefined, 0x10912a8));
    uVar3 = (*(undefined4 *)(gen_frame + 0x4));
  }
  F_00d22c70(this,uVar3);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this,((undefined4 *)(gen_frame + 0x10)));
    ((undefined4 *)(gen_frame + 0x10))[0] = 0x380402;
    (*(ulonglong *)(gen_frame + 0x18)) = F_00427d90();
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc))),((undefined4 *)(gen_frame + 0x10)),0x38);
  }
  if (*(char *)((int)this + 0x120) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x108));
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x108));
  F_00cbbdb0((int)this + 8);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return extraout_EAX;
}

/* ref: FUN_00d237c0 */
byte F_00d237c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0xd237c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
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
  this = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = param_4;
  (*(float * PTR32 *)(gen_frame + 0x30)) = param_3;
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*this + 0x98))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,((undefined1 *)(gen_frame + 0x58)));
  if ((char)uVar4 != '\0') {
    fVar11 = *(*(float * PTR32 *)(gen_frame + 0x2c));
    (*(float *)(gen_frame + 0x3c)) = (float)(float10)1;
    fVar12 = (*(float * PTR32 *)(gen_frame + 0x2c))[1];
    (*(float *)(gen_frame + 0xac)) = fVar11;
    (*(float *)(gen_frame + 0xb0)) = fVar12;
    (*(float *)(gen_frame + 0xb4)) = (*(float * PTR32 *)(gen_frame + 0x2c))[2];
    (*(float *)(gen_frame + 0xb8)) = (*(float * PTR32 *)(gen_frame + 0x2c))[3];
    if (((*((byte *)GEN_TOP((*(int *)(param_1 + 0x18) + 0xc))) & 4) == 0) &&
       (bVar2 = F_00d01b90(this,&(*(float *)(gen_frame + 0xac)),&(*(float *)(gen_frame + 0x3c)),(*(undefined4 * PTR32 *)(gen_frame + 0x28)),&(*(float *)(gen_frame + 0x9c)),&(*(float *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x24)),
                             &(*(float *)(gen_frame + 0x38))), fVar11 = *(float *)&REFG(undefined, 0x1097254), bVar2 == 1)) {
      fVar7 = (float10)*(float *)&REFG(undefined, 0x1097254);
      *(float *)(param_1 + 0x94) = *(float *)&REFG(undefined, 0x1097254);
      fVar8 = (float10)param_5;
      fVar9 = (float10)(*(float *)(gen_frame + 0x38));
      fVar10 = (float10)param_6;
      if ((((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar8)) == ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar8)) || fVar7 == fVar8)) ||
          ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar10)) == ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar10)) || fVar7 == fVar10))) &&
         ((bVar6 = GEN_ISNAN(fVar7) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x3c))),
          bVar6 == (bVar6 || fVar7 == (float10)(*(float *)(gen_frame + 0x3c))) ||
          (bVar6 = GEN_ISNAN(fVar7) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x34))),
          bVar6 == (bVar6 || fVar7 == (float10)(*(float *)(gen_frame + 0x34))))))) {
        if (!(fVar8 <= fVar9) || ((GEN_ISNAN(fVar9) || GEN_ISNAN(fVar8)) || fVar9 == fVar8)) {
          if (!(fVar10 <= fVar9) == (GEN_ISNAN(fVar9) || GEN_ISNAN(fVar10))) {
            (*(float *)(gen_frame + 0x54)) = (float)(fVar9 - fVar10);
            fVar11 = ((float)GEN_TOF(((float10)(float)(fVar9 - fVar10) / (fVar8 - fVar10))));
            (*(float *)(gen_frame + 0x54)) = fVar11;
            fVar11 = (float)((float10)1 - (float10)fVar11);
            (*(float *)(gen_frame + 0x54)) = fVar11;
            fVar8 = (float10)fVar11 * (float10)param_7;
          }
          else {
            (*(float *)(gen_frame + 0x54)) = (float)(fVar9 / fVar10);
            fVar11 = ((float)GEN_TOF(((float10)1 - (float10)(float)(fVar9 / fVar10))));
            (*(float *)(gen_frame + 0x54)) = fVar11;
            fVar8 = (float10)param_7 + (float10)fVar11 * ((float10)1 - (float10)param_7);
          }
          (*(float *)(gen_frame + 0x54)) = (float)fVar8;
        }
        else {
          (*(float *)(gen_frame + 0x54)) = fVar11;
        }
        (*(float *)(gen_frame + 0x3c)) = (float)((float10)(*(float *)(gen_frame + 0x54)) * (float10)(*(float *)(gen_frame + 0x3c)));
        (*(float *)(gen_frame + 0x34)) = (float)((float10)*(*(float * PTR32 *)(gen_frame + 0x30)) * (float10)(*(float *)(gen_frame + 0x34)));
      }
      if (!((float10)(*(float *)(gen_frame + 0x34)) <= (float10)(*(float *)(gen_frame + 0x3c))) ==
          (GEN_ISNAN((float10)(*(float *)(gen_frame + 0x3c))) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x34))))) {
        *(*(float * PTR32 *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x3c));
      }
      else {
        (*(float *)(gen_frame + 0xac)) = (*(float *)(gen_frame + 0x9c));
        (*(float *)(gen_frame + 0xb0)) = (*(float *)(gen_frame + 0xa0));
        *(*(float * PTR32 *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x34));
        (*(float *)(gen_frame + 0xb8)) = (*(float *)(gen_frame + 0xa8));
        (*(float *)(gen_frame + 0xb4)) = (*(float *)(gen_frame + 0xa4));
        *(*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (*(undefined4 *)(gen_frame + 0x24));
        F_00c34320(((undefined1 *)(gen_frame + 0x58)),&(*(float *)(gen_frame + 0x40)),(*(float * PTR32 *)(gen_frame + 0x2c)));
        fVar11 = (*(float *)(gen_frame + 0x44)) * (*(float *)(gen_frame + 0x44));
        fVar12 = (*(float *)(gen_frame + 0x48)) * (*(float *)(gen_frame + 0x48));
        fVar14 = SQRT((fVar12 + (*(float *)(gen_frame + 0x40)) * (*(float *)(gen_frame + 0x40))) + fVar11);
        (*(float *)(gen_frame + 0x40)) = fVar14;
        (*(float *)(gen_frame + 0x44)) = (fVar12 + fVar11) + fVar11;
        (*(float *)(gen_frame + 0x48)) = (fVar12 + fVar12) + fVar11;
        (*(float *)(gen_frame + 0x4c)) = (fVar12 + (*(float *)(gen_frame + 0x4c)) * (*(float *)(gen_frame + 0x4c))) + fVar11;
        (*(float *)(gen_frame + 0x38)) = fVar14;
        fVar9 = (float10)fVar14;
        fVar7 = (float10)*(float *)&REFG(undefined, 0x1097254);
      }
      bVar6 = GEN_ISNAN(fVar7) || GEN_ISNAN((float10)param_5);
      if ((bVar6 == (bVar6 || fVar7 == (float10)param_5)) ||
         (bVar6 = GEN_ISNAN((float10)param_6) || GEN_ISNAN(fVar7), bVar6 == (bVar6 || (float10)param_6 == fVar7)
         )) {
        F_00d21b00(param_1,(float)fVar9,param_5,param_6,param_8);
        bVar6 = GEN_ISNAN((float10)*(float *)&REFG(undefined, 0x1097254)) || GEN_ISNAN((float10)*(float *)(param_1 + 0xb4));
        if (bVar6 == (bVar6 || (float10)*(float *)&REFG(undefined, 0x1097254) ==
                               (float10)*(float *)(param_1 + 0xb4))) {
          F_00d21ba0(((undefined4)(uint)(param_1)),(*(float *)(gen_frame + 0x38)),param_6,param_5);
        }
        F_00d21c40(param_1,(*(float *)(gen_frame + 0x38)));
      }
      uVar4 = ((code *)*(gen_code32 *)(*this + 0x24))(this);
      if ((char)uVar4 != '\0') {
        (*(float *)(gen_frame + 0xb8)) = (float)(float10)1;
        F_00c34320(((undefined1 *)(gen_frame + 0x58)),&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0xac)));
        uVar4 = F_00d03460(param_1 + 0x70,((undefined1 *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0xac)));
        pfVar5 = (float *)F_00d235f0(((undefined1 *)(gen_frame + 0x0)),uVar4);
        dVar1 = (double)*pfVar5;
        if (REFG(double, 0x1094800) <= dVar1 && ((!GEN_ISNAN(dVar1) && !GEN_ISNAN(REFG(double, 0x1094800))) && dVar1 != REFG(double, 0x1094800)))
        {
          *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) | 4;
        }
        *(float *)(param_1 + 0x70) = (*(float *)(gen_frame + 0xac));
        *(float *)(param_1 + 0x74) = (*(float *)(gen_frame + 0xb0));
        *(float *)(param_1 + 0x78) = (*(float *)(gen_frame + 0xb4));
        *(float *)(param_1 + 0x7c) = (*(float *)(gen_frame + 0xb8));
        *(float *)(param_1 + 0x60) = (*(float *)(gen_frame + 0x40));
        *(float *)(param_1 + 100) = (*(float *)(gen_frame + 0x44));
        *(float *)(param_1 + 0x68) = (*(float *)(gen_frame + 0x48));
        *(float *)(param_1 + 0x6c) = (*(float *)(gen_frame + 0x4c));
      }
      bVar2 = 1;
      goto LAB_00d23ccb;
    }
    F_00c34320(((undefined1 *)(gen_frame + 0x58)),&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0xac)));
    fVar8 = (float10)*(float *)&REFG(undefined, 0x1097254);
    bVar6 = GEN_ISNAN(fVar8) || GEN_ISNAN((float10)param_5);
    fVar11 = (*(float *)(gen_frame + 0x44)) * (*(float *)(gen_frame + 0x44));
    fVar12 = (*(float *)(gen_frame + 0x48)) * (*(float *)(gen_frame + 0x48));
    fVar14 = SQRT((fVar12 + (*(float *)(gen_frame + 0x40)) * (*(float *)(gen_frame + 0x40))) + fVar11);
    (*(float *)(gen_frame + 0x40)) = fVar14;
    (*(float *)(gen_frame + 0x44)) = (fVar12 + fVar11) + fVar11;
    (*(float *)(gen_frame + 0x48)) = (fVar12 + fVar12) + fVar11;
    (*(float *)(gen_frame + 0x4c)) = (fVar12 + (*(float *)(gen_frame + 0x4c)) * (*(float *)(gen_frame + 0x4c))) + fVar11;
    if ((bVar6 == (bVar6 || fVar8 == (float10)param_5)) ||
       (bVar6 = GEN_ISNAN((float10)param_6) || GEN_ISNAN(fVar8), bVar6 == (bVar6 || (float10)param_6 == fVar8)))
    {
      F_00d21b00(param_1,fVar14,param_5,param_6,param_8);
      bVar6 = GEN_ISNAN((float10)*(float *)&REFG(undefined, 0x1097254)) || GEN_ISNAN((float10)*(float *)(param_1 + 0xb4));
      if (bVar6 == (bVar6 || (float10)*(float *)&REFG(undefined, 0x1097254) == (float10)*(float *)(param_1 + 0xb4)
                   )) {
        F_00d21ba0(((undefined4)(uint)(param_1)),(*(float *)(gen_frame + 0x40)),param_6,param_5);
      }
      F_00d21c40(param_1,(*(float *)(gen_frame + 0x40)));
    }
    uVar4 = ((code *)*(gen_code32 *)(*this + 0x24))(this);
    if ((char)uVar4 != '\0') {
      fVar11 = *(float *)(param_1 + 0x70) - (*(float *)(gen_frame + 0xac));
      fVar12 = *(float *)(param_1 + 0x74) - (*(float *)(gen_frame + 0xb0));
      fVar14 = *(float *)(param_1 + 0x78) - (*(float *)(gen_frame + 0xb4));
      fVar13 = *(float *)(param_1 + 0x7c) - (*(float *)(gen_frame + 0xb8));
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
      fVar11 = SQRT(((fVar12 + fVar11 * fVar11) + fVar14) + fVar13);
      (*(float *)(gen_frame + 0x40)) = fVar11;
      (*(float *)(gen_frame + 0x44)) = ((fVar12 + fVar12) + fVar14) + fVar13;
      (*(float *)(gen_frame + 0x48)) = ((fVar12 + fVar14) + fVar14) + fVar13;
      (*(float *)(gen_frame + 0x4c)) = ((fVar12 + fVar13) + fVar14) + fVar13;
      dVar1 = (double)fVar11;
      if (REFG(double, 0x1094800) <= dVar1 && ((!GEN_ISNAN(dVar1) && !GEN_ISNAN(REFG(double, 0x1094800))) && dVar1 != REFG(double, 0x1094800))) {
        *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) | 4;
      }
      *(float *)(param_1 + 0x70) = (*(float *)(gen_frame + 0xac));
      *(float *)(param_1 + 0x74) = (*(float *)(gen_frame + 0xb0));
      *(float *)(param_1 + 0x78) = (*(float *)(gen_frame + 0xb4));
      *(float *)(param_1 + 0x7c) = (*(float *)(gen_frame + 0xb8));
      *(float *)(param_1 + 0x8c) = (float)(float10)1;
    }
  }
  bVar2 = 0;
LAB_00d23ccb: ;
  F_00c47745((*(uint *)(gen_frame + 0xbc)) ^ (uint)(uint)(gen_frame + 0xc0));
  return bVar2;
}

/* ref: FUN_00d23d50 */
byte F_00d23d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd23d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined * pvVar5;
  int * piVar6;
  byte bVar7;
  int * piVar8;
  uint uVar9;
  float * pfVar10;
  int iVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  (*(uint *)(gen_frame + 0xdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe0);
  (*(float * PTR32 *)(gen_frame + 0x68)) = param_2;
  piVar6 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  (*(float * PTR32 *)(gen_frame + 0x6c)) = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0x90)) = this;
  piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x98))(piVar6)));
  uVar9 = ((code *)*(gen_code32 *)(*piVar8 + 0x30))(piVar8,&(*(float *)(gen_frame + 0xac)));
  if ((char)uVar9 != '\0') {
    bVar7 = F_00d00970(&(*(float *)(gen_frame + 0xac)),param_1);
    if (bVar7 != 0) {
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
      pfVar10 = (float *)F_00d034e0(&(*(float *)(gen_frame + 0x98)),&(*(float *)(gen_frame + 0x50)));
      fVar1 = pfVar10[1];
      (*(float *)(gen_frame + 0x98)) = *pfVar10;
      (*(float *)(gen_frame + 0x9c)) = fVar1;
      (*(float *)(gen_frame + 0xa0)) = pfVar10[2];
      (*(float *)(gen_frame + 0xa4)) = pfVar10[3];
      F_00d23090(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x98)));
      (*(int *)(gen_frame + 0x8c)) = 0;
      do {
        pvVar5 = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(int *)(gen_frame + 0x8c)) * (float10)*(double *)&REFG(undefined, 0x109cb10)))));
        (*(undefined * PTR32 *)(gen_frame + 0x90)) = pvVar5;
        fVar12 = ((float10)GEN_TOD(fsin((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar5))))));
        (*(float *)(gen_frame + 0xa8)) = (float)fVar12;
        fVar12 = (float10)(float)fVar12;
        (*(float *)(gen_frame + 0xbc)) = (float)(fVar12 + fVar12);
        (*(float *)(gen_frame + 0xc4)) = *(float *)&REFG(undefined, 0x1097254);
        fVar12 = ((float10)GEN_TOD(fcos((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar5))))));
        (*(float *)(gen_frame + 0xa8)) = (float)fVar12;
        fVar12 = (float10)(float)fVar12;
        (*(float *)(gen_frame + 0xc0)) = (float)(fVar12 + fVar12);
        (*(float *)(gen_frame + 0xc8)) = (float)(float10)1;
        pfVar10 = (float *)F_00c34320(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0xbc)));
        fVar13 = *pfVar10;
        (*(float *)(gen_frame + 0xbc)) = fVar13;
        fVar14 = pfVar10[1];
        (*(float *)(gen_frame + 0xc0)) = fVar14;
        fVar15 = pfVar10[2];
        (*(float *)(gen_frame + 0xc4)) = fVar15;
        fVar16 = pfVar10[3];
        (*(float *)(gen_frame + 0xc8)) = fVar16;
        fVar1 = param_1[2];
        fVar2 = param_1[3];
        fVar17 = fVar13 + (*(float *)(gen_frame + 0xac));
        fVar18 = fVar14 + (*(float *)(gen_frame + 0xb0));
        fVar19 = fVar15 + (*(float *)(gen_frame + 0xb4));
        fVar20 = fVar16 + (*(float *)(gen_frame + 0xb8));
        fVar3 = *param_1;
        (*(float *)(gen_frame + 0x50)) = fVar17;
        (*(float *)(gen_frame + 0x54)) = fVar18;
        (*(float *)(gen_frame + 0x58)) = fVar19;
        (*(float *)(gen_frame + 0x5c)) = fVar20;
        fVar4 = param_1[1];
        (*(float *)(gen_frame + 0x98)) = fVar17;
        (*(float *)(gen_frame + 0x9c)) = fVar18;
        (*(float *)(gen_frame + 0xcc)) = fVar17;
        (*(float *)(gen_frame + 0xa0)) = fVar19;
        (*(float *)(gen_frame + 0xa4)) = fVar20;
        fVar13 = fVar13 + fVar3;
        fVar14 = fVar14 + fVar4;
        fVar15 = fVar15 + fVar1;
        fVar16 = fVar16 + fVar2;
        (*(float *)(gen_frame + 0x50)) = fVar13;
        (*(float *)(gen_frame + 0x54)) = fVar14;
        (*(float *)(gen_frame + 0x58)) = fVar15;
        (*(float *)(gen_frame + 0x5c)) = fVar16;
        (*(float *)(gen_frame + 0x70)) = fVar13;
        (*(float *)(gen_frame + 0xd4)) = fVar19;
        (*(float *)(gen_frame + 0x74)) = fVar14;
        (*(float *)(gen_frame + 0xd0)) = fVar18;
        (*(float *)(gen_frame + 0xd8)) = fVar20;
        (*(float *)(gen_frame + 0x78)) = fVar15;
        (*(float *)(gen_frame + 0xbc)) = fVar13;
        (*(float *)(gen_frame + 0x7c)) = fVar16;
        (*(float *)(gen_frame + 0xc0)) = fVar14;
        (*(float *)(gen_frame + 0xc4)) = fVar15;
        (*(float *)(gen_frame + 0xc8)) = fVar16;
        F_00d030f0(piVar6,(undefined4)gen_fl2bits(fVar13),(undefined4)gen_fl2bits(fVar14),
                     (undefined4)gen_fl2bits(fVar15),fVar16,(undefined4)gen_fl2bits(fVar17),
                     (undefined4)gen_fl2bits(fVar18),(undefined4)gen_fl2bits(fVar19),fVar20);
        bVar7 = F_00d00970(&(*(float *)(gen_frame + 0xbc)),&(*(float *)(gen_frame + 0xcc)));
        fVar1 = *(float *)&REFG(undefined, 0x1097254);
        if (bVar7 == 0) {
          (*(int *)(gen_frame + 0x94)) = (*(int *)(gen_frame + 0x94)) + 1;
        }
        iVar11 = (*(int *)(gen_frame + 0x8c)) + 1;
        (*(int *)(gen_frame + 0x8c)) = iVar11;
      } while (iVar11 < 8);
      if ((*(int *)(gen_frame + 0x94)) == 0) {
        *(*(float * PTR32 *)(gen_frame + 0x68)) = *(float *)&REFG(undefined, 0x1097254);
        *(*(float * PTR32 *)(gen_frame + 0x6c)) = fVar1;
        bVar7 = 1;
        goto LAB_00d24054;
      }
      (*(float *)(gen_frame + 0xa8)) = (float)((float10)(*(int *)(gen_frame + 0x94)) * (float10)*(double *)&REFG(double, 0x10948e0));
      fVar12 = (float10)(float)((float10)(*(int *)(gen_frame + 0x94)) * (float10)*(double *)&REFG(double, 0x10948e0));
      *(*(float * PTR32 *)(gen_frame + 0x68)) = (float)(fVar12 * (float10)*(*(float * PTR32 *)(gen_frame + 0x68)));
      *(*(float * PTR32 *)(gen_frame + 0x6c)) = (float)(fVar12 * (float10)*(*(float * PTR32 *)(gen_frame + 0x6c)));
    }
  }
  bVar7 = 0;
LAB_00d24054: ;
  F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0));
  return bVar7;
}

/* ref: FUN_00d24070 */
byte F_00d24070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0xd24070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x1c) + 0xc)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
  if (uVar3 == 1) {
    bVar2 = F_00d237c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar3 = (uint)bVar2;
  }
  else {
    if (uVar3 == 2) {
      bVar2 = F_00d23d50(param_1,param_2,param_3,param_4);
      return bVar2;
    }
    uVar3 = uVar3 - 3;
    if (uVar3 == 0) {
      F_00d237c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      bVar2 = F_00d23d50(param_1,param_2,param_3,param_4);
      return bVar2;
    }
  }
  return (byte)uVar3;
}

/* ref: FUN_00d24130 */
uint F_00d24130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd24130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return (uint)this;
}

/* ref: FUN_00d24160 */
uint F_00d24160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd24160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x10) = *param_1;
  *(undefined4 *)((int)this + 0x14) = param_1[1];
  *(undefined4 *)((int)this + 0x18) = param_1[2];
  *(undefined4 *)((int)this + 0x1c) = param_1[3];
  return (uint)this;
}

/* ref: FUN_00d24190 */
uint F_00d24190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd24190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x20) = *param_1;
  *(undefined4 *)((int)this + 0x24) = param_1[1];
  *(undefined4 *)((int)this + 0x28) = param_1[2];
  *(undefined4 *)((int)this + 0x2c) = param_1[3];
  return (uint)this;
}

/* ref: FUN_00d241f0 */
uint F_00d241f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd241f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *param_1 = *(ushort *)((int)(uintptr_t)this) << 8 | *(ushort *)((int)(uintptr_t)this) >> 8;
  param_1[1] = *(ushort *)((int)this + 2) << 8 | *(ushort *)((int)this + 2) >> 8;
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(param_1 + 2) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)((int)this + 8);
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(uint *)(param_1 + 4) = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf25 */
unsigned int F_00d24260(void)
{
  GEN_ENTER(0xd24260u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf26 */
uint F_00d24270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd24270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf27 */
unsigned int F_00d24280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd24280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf0 */
uint F_00d24290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd24290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00d23680(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf9 */
unsigned int F_00d242d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd242d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
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
  
  F_00d213b0(this,param_1,param_2);
  iVar10 = 0;
  do {
    iVar9 = *(int *)(this + 0x128);
    fVar4 = *(float *)(iVar9 + 0x28 + iVar10);
    fVar5 = *(float *)(iVar9 + 0x2c + iVar10);
    pfVar1 = (float *)(iVar9 + 0x20 + iVar10);
    pfVar2 = (float *)(iVar9 + 0x24 + iVar10);
    fVar6 = param_1[3];
    pfVar3 = (float *)(iVar9 + 0x20 + iVar10);
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
byte F_00d243a0(void)
{
  GEN_ENTER(0xd243a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf18 */
uint F_00d24540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd24540u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x74) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  puVar3 = param_2;
  for (iVar1 = 0x1d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x74;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf19 */
byte F_00d24570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd24570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x128);
  *param_1 = *(undefined4 *)(iVar1 + 0x40);
  *param_2 = *(undefined4 *)(iVar1 + 0x44);
  *param_3 = (float)(float10)0;
  *param_4 = (float)(float10)0;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf20 */
uint F_00d245a0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd245a0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x128);
  *(float *)(uVar1 + 0x40) = param_2;
  *((float *)GEN_TOP((*(int *)(in_ecx + 0x128) + 0x44))) = param_3;
  return uVar1;
}

/* ref: FUN_00d245c0 */
byte F_00d245c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd245c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
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
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x98))(piVar4)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,((undefined1 *)(gen_frame + 0x8)));
  if ((char)uVar5 != '\0') {
    iVar1 = *(int *)((int)this + 0x128);
    bVar3 = *(byte *)(iVar1 + 4);
    fVar12 = *(float *)(iVar1 + 0x24);
    (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)(iVar1 + 0x20);
    (*(float *)(gen_frame + 0x6c)) = fVar12;
    (*(undefined4 *)(gen_frame + 0x70)) = *(undefined4 *)(iVar1 + 0x28);
    (*(undefined4 *)(gen_frame + 0x74)) = *(undefined4 *)(iVar1 + 0x2c);
    (*(undefined4 *)(gen_frame + 0x78)) = *(undefined4 *)(iVar1 + 0x30);
    (*(float *)(gen_frame + 0x7c)) = *(float *)(iVar1 + 0x34);
    (*(undefined4 *)(gen_frame + 0x80)) = *(undefined4 *)(iVar1 + 0x38);
    (*(undefined4 *)(gen_frame + 0x84)) = *(undefined4 *)(iVar1 + 0x3c);
    if ((bVar3 & 4) == 0) {
      pcVar2 = *(gen_code32 *)(*piVar4 + 0x30);
      (*(float *)(gen_frame + 0x4)) = fVar12;
      (*pcVar2)(piVar4,((undefined1 *)(gen_frame + 0x48)));
      bVar3 = F_00d218f0((*(float *)(gen_frame + 0x4c)),&(*(float *)(gen_frame + 0x4)),*(int *)((int)this + 0x128),
                           *(int *)((int)this + 0x128) + 0x48);
      if (bVar3 != 1) goto LAB_00d24740;
      (*(float *)(gen_frame + 0x6c)) = (*(float *)(gen_frame + 0x4));
      (*(float *)(gen_frame + 0x7c)) = (*(float *)(gen_frame + 0x4));
    }
    puVar7 = &(*(undefined4 *)(gen_frame + 0x68));
    puVar8 = (undefined4 *)((int)this + 300);
    (*(float *)(gen_frame + 0x4)) = 2.8026e-45;
    do {
      puVar6 = (undefined4 *)F_00c34320(((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x48)),puVar7);
      *puVar8 = *puVar6;
      puVar8[1] = puVar6[1];
      puVar8[2] = puVar6[2];
      puVar8[3] = puVar6[3];
      puVar7 = puVar7 + 4;
      puVar8 = puVar8 + 4;
      fVar12 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x4))) + -1);
      (*(float *)(gen_frame + 0x4)) = fVar12;
    } while (fVar12 != 0.0);
    fVar12 = F_010536a0((int)this + 300,(int)this + 0x13c,&(*(undefined4 *)(gen_frame + 0x58)));
    (*(float *)(gen_frame + 0x4)) = fVar12;
    fVar10 = (float10)fVar12;
    *(undefined4 *)((int)this + 0x50) = (*(undefined4 *)(gen_frame + 0x58));
    *(undefined4 *)((int)this + 0x54) = (*(undefined4 *)(gen_frame + 0x5c));
    *(undefined4 *)((int)this + 0x58) = (*(undefined4 *)(gen_frame + 0x60));
    *(undefined4 *)((int)this + 0x5c) = (*(undefined4 *)(gen_frame + 0x64));
    *(undefined4 *)((int)this + 0x60) = (*(undefined4 *)(gen_frame + 0x58));
    *(undefined4 *)((int)this + 100) = (*(undefined4 *)(gen_frame + 0x5c));
    *(undefined4 *)((int)this + 0x68) = (*(undefined4 *)(gen_frame + 0x60));
    *(undefined4 *)((int)this + 0x6c) = (*(undefined4 *)(gen_frame + 0x64));
    iVar1 = *(int *)((int)this + 0x128);
    fVar11 = (float10)*(float *)(iVar1 + 0x44);
    if (!(fVar10 <= fVar11) == ((GEN_ISNAN(fVar11) || GEN_ISNAN(fVar10)) || fVar11 == fVar10)) {
      fVar11 = (float10)*(float *)(iVar1 + 0x40);
      if (!(fVar10 <= fVar11) || ((GEN_ISNAN(fVar11) || GEN_ISNAN(fVar10)) || fVar11 == fVar10)) {
        fVar12 = ((float)GEN_TOF((fVar10 - (float10)*(float *)(iVar1 + 0x40))));
        (*(float *)(gen_frame + 0x4)) = fVar12;
        *param_1 = fVar12;
        fVar12 = ((float)GEN_TOF(((float10)fVar12 /
                        ((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x44))) -
                        (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x40)))))));
        (*(float *)(gen_frame + 0x4)) = fVar12;
        fVar12 = (float)((float10)1 - (float10)fVar12);
        (*(float *)(gen_frame + 0x4)) = fVar12;
        *param_1 = fVar12;
        *param_1 = ((float)GEN_TOF(((float10)fVar12 * (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x50)))
                          )));
      }
      else {
        fVar12 = ((float)GEN_TOF((fVar10 / (float10)*(float *)(iVar1 + 0x40))));
        (*(float *)(gen_frame + 0x4)) = fVar12;
        fVar12 = (float)((float10)1 - (float10)fVar12);
        (*(float *)(gen_frame + 0x4)) = fVar12;
        *param_1 = fVar12;
        *param_1 = ((float)GEN_TOF(((float10)fVar12 *
                           ((float10)1 - (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x50)))) +
                          (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x50))))));
      }
      *(float *)((int)this + 0x80) = *param_1;
      bVar9 = GEN_ISNAN((float10)0) || GEN_ISNAN((float10)*param_1);
      if (bVar9 == (bVar9 || (float10)0 == (float10)*param_1)) {
        F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
        return 1;
      }
    }
    else {
      *(float *)((int)this + 0x80) = (float)(float10)0;
    }
  }
LAB_00d24740: ;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf25 */
uint F_00d24820(unsigned int gen_a0)
{
  GEN_ENTER(0xd24820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x84);
  }
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf27 */
byte F_00d248a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd248a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
  for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  bVar1 = F_00d228c0(this);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf28 */
unsigned int F_00d248d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd248d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf29 */
uint F_00d248e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd248e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HWND param_1 = (HWND)gen_a1;
  HDC param_2 = (HDC)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int iVar1;
  char cVar2;
  int iVar3;
  HGDIOBJ pvVar4;
  undefined * pHVar5;
  undefined * h;
  char * pcVar6;
  uint uVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  pvVar4 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x10)) = pvVar4;
  pvVar4 = gen_imp_SelectObject(param_2,pvVar4);
  (*(HGDIOBJ *)(gen_frame + 0x14)) = pvVar4;
  pHVar5 = gen_imp_CreatePen(0,2,0x9090);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = pHVar5;
  pvVar4 = gen_imp_SelectObject(param_2,pHVar5);
  (*(HGDIOBJ *)(gen_frame + 0x1c)) = pvVar4;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x68)));
  iVar8 = (*(tagRECT *)(gen_frame + 0x68)).right / 2;
  (*(int *)(gen_frame + 0x28)) = (*(tagRECT *)(gen_frame + 0x68)).bottom / 2;
  gen_imp_MoveToEx(param_2,iVar8 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 300)),
           (*(tagRECT *)(gen_frame + 0x68)).bottom / 2 - (int)((double)*(float *)(this + 0x134) * *(double *)&REFG(double, 0x1132488)),
           (LPPOINT)0x0);
  gen_imp_LineTo(param_2,iVar8 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x13c)),
         (*(int *)(gen_frame + 0x28)) - (int)((double)*(float *)(this + 0x144) * *(double *)&REFG(double, 0x1132488)));
  iVar8 = iVar8 + (int)((double)*(float *)(this + 0x50) * *(double *)&REFG(undefined, 0x10947f0));
  iVar1 = (*(int *)(gen_frame + 0x28)) + (int)((double)*(float *)(this + 0x58) * *(double *)&REFG(undefined, 0x10947f0));
  (*(int *)(gen_frame + 0x28)) = iVar1;
  iVar3 = (int)(*(double *)&REFG(undefined, 0x10947f0) * (double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44))));
  gen_imp_Ellipse(param_2,iVar8 - iVar3,iVar1 - iVar3,iVar3 + iVar8,iVar3 + iVar1);
  iVar1 = (int)((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))) * *(double *)&REFG(undefined, 0x10947f0));
  gen_imp_Ellipse(param_2,iVar8 - iVar1,(*(int *)(gen_frame + 0x28)) - iVar1,iVar1 + iVar8,iVar1 + (*(int *)(gen_frame + 0x28)));
  if (((byte)this[0xb0] & 1) != 0) {
    (*(HGDIOBJ *)(gen_frame + 0x20)) = (HGDIOBJ)((*(tagRECT *)(gen_frame + 0x68)).right / 2);
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(((*(tagRECT *)(gen_frame + 0x68)).bottom / 2)));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x1c)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x18)));
    pHVar5 = gen_imp_CreatePen(0,1,0x900000);
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = pHVar5;
    pvVar4 = gen_imp_SelectObject(param_2,pHVar5);
    (*(HGDIOBJ *)(gen_frame + 0x1c)) = pvVar4;
    gen_imp_MoveToEx(param_2,(int)(*(HGDIOBJ *)(gen_frame + 0x20)) -
                     (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x60)),
             (int)(*(undefined * PTR32 *)(gen_frame + 0x24)) - ((int)((double)*(float *)(this + 0x68) * *(double *)&REFG(double, 0x1132488))) * 4,
             (LPPOINT)0x0);
    gen_imp_LineTo(param_2,(int)(*(HGDIOBJ *)(gen_frame + 0x20)),(int)(*(undefined * PTR32 *)(gen_frame + 0x24)));
  }
  F_00c48350(((undefined *)(gen_frame + 0x2c)),0,0x3c);
  F_00c49908(((CHAR *)(((char *)((undefined *)(gen_frame + 0x2c)) + 28))),0x20,&REFG(undefined, 0x1133e60));
  (*(LONG *)((char *)((undefined *)(gen_frame + 0x2c)))) = 0xd;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x2c)) + 23))) = 0x80;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x2c)) + 27))) = '\x01';
  h = gen_imp_CreateFontIndirectA(((undefined *)(gen_frame + 0x2c)));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = h;
  pvVar4 = gen_imp_SelectObject(param_2,h);
  (*(HGDIOBJ *)(gen_frame + 0x20)) = pvVar4;
  if (((byte)this[0xb0] & 1) == 0) {
    F_00c472af(((char *)(gen_frame + 0x78)),0x20,&REFG(undefined, 0x1133e7c),&REFG(undefined, 0x1133e74));
  }
  else {
    F_00c472af(((char *)(gen_frame + 0x78)),0x20,&REFG(undefined, 0x1133e6c),
               (int)(ulonglong)
                    gen_d2bits((double)*(float *)(this + 0x80) * *(double *)&REFG(undefined, 0x1088118)),
               (int)((ulonglong)
                     gen_d2bits((double)*(float *)(this + 0x80) * *(double *)&REFG(undefined, 0x1088118)) >> 0x20)
              );
  }
  pcVar6 = ((char *)(gen_frame + 0x78));
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  gen_imp_GetTextExtentPoint32A(param_2,((char *)(gen_frame + 0x78)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x78)) + 1),&(*(undefined8 *)(gen_frame + 0x8)));
  gen_imp_TextOutA(param_2,iVar8 - (*(LONG *)((char *)&((*(undefined8 *)(gen_frame + 0x8))))) / 2,(*(int *)(gen_frame + 0x28)) - (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4))) / 2,((char *)(gen_frame + 0x78)),
           (int)pcVar6 - (int)(((char *)(gen_frame + 0x78)) + 1));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x20)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x1c)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x14)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x24)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x18)));
  uVar7 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar7;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf30 */
byte F_00d24c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd24c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined * _File;
  byte bVar5;
  int iVar6;
  
  _File = param_1;
  bVar5 = F_00d21f00((undefined *)this,param_1);
  if (bVar5 == 0) {
    return 0;
  }
  iVar6 = 0;
  param_1 = (undefined *)0x0;
  do {
    iVar1 = *(int *)(this + 0x128);
    dVar2 = (double)*(float *)(iVar6 + 0x28 + iVar1);
    dVar3 = (double)*(float *)(iVar6 + 0x24 + iVar1);
    dVar4 = (double)*(float *)(iVar6 + 0x20 + iVar1);
    F_00c49386(_File,"Position[%d] = %f %f %f\n",param_1,(int)(ulonglong)gen_d2bits(dVar4),
             (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
             (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
             (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    param_1 = (undefined *)((int)param_1 + (1) * 32);
    iVar6 = iVar6 + 0x10;
  } while (iVar6 < 0x20);
  F_00c49386(_File,"MaxRange = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))))));
  F_00c49386(_File,"MinRange = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44))))));
  param_1 = (undefined *)0x0;
  iVar6 = 0x48;
  do {
    F_00c49386(_File,"Height[%d] = %f\n",param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))) >> 0x20
                  ));
    param_1 = (undefined *)((int)param_1 + (1) * 32);
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x50);
  F_00c49386(_File,"RangeVolume = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x50))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x50))))));
  F_00c49386(_File,"Volume = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x54))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x54))))));
  F_00c49386(_File,"CalcType = %d\n",(uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x60))));
  F_00c49386(_File,"FuncNo = %d\n",*((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x5c))));
  F_00c49386(_File,"LowerLimit = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x58))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x58))))));
  F_00c49386(_File,"[EndOfSoundObject]\n\n");
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf31 */
byte F_00d24d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd24d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  byte * pbVar6;
  bool bVar7;
  double dVar8;
  
  pcVar2 = "Position";
  pbVar6 = (byte *)param_2;
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
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar8 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 2) * 0x10))) = (float)dVar8;
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar8 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24 + uVar4 * 0x10))) = (float)dVar8;
          pcVar2 = (char *)F_00d00d00(0,0);
          if (pcVar2 != (char *)0x0) {
            dVar8 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 0x10))) = (float)dVar8;
            return 1;
          }
        }
      }
    }
  }
  else {
    pcVar2 = "MaxRange";
    pbVar6 = (byte *)param_2;
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
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar8 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x40))) = (float)dVar8;
        return 1;
      }
    }
    else {
      pcVar2 = "MinRange";
      pbVar6 = (byte *)param_2;
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
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar8 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x44))) = (float)dVar8;
          return 1;
        }
      }
      else {
        pcVar2 = "Height";
        pbVar6 = (byte *)param_2;
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
            pcVar2 = (char *)F_00d00d00(0,0);
            if (pcVar2 != (char *)0x0) {
              dVar8 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x48 + uVar4 * 4))) = (float)dVar8;
              return 1;
            }
          }
        }
        else {
          pcVar2 = "RangeVolume";
          pbVar6 = (byte *)param_2;
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
            pcVar2 = (char *)F_00d00d00(0,0);
            if (pcVar2 != (char *)0x0) {
              dVar8 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x50))) = (float)dVar8;
              return 1;
            }
          }
          else {
            pcVar2 = "Volume";
            pbVar6 = (byte *)param_2;
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
              pcVar2 = (char *)F_00d00d00(0,0);
              if (pcVar2 != (char *)0x0) {
                dVar8 = F_00c4acaa(pcVar2);
                *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x54))) = (float)dVar8;
                return 1;
              }
            }
            else {
              pcVar2 = "CalcType";
              pbVar6 = (byte *)param_2;
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
                pbVar6 = (byte *)param_2;
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
                  pcVar2 = "LowerLimit";
                  pbVar6 = (byte *)param_2;
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
                    bVar1 = F_00d22040(param_1,param_2);
                    return bVar1;
                  }
                  pcVar2 = (char *)F_00d00d00(0,0);
                  if (pcVar2 != (char *)0x0) {
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
uint F_00d25180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd25180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int * this_00;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  F_00d22580(this,param_1,param_2,param_3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133fe4));
  *(uint *)((int)this + 0xb0) =
       *(uint *)((int)this + 0xb0) ^ ((param_4 & 0xff) << 4 ^ *(uint *)((int)this + 0xb0)) & 0x10;
  if ((char)param_4 == '\0') {
    *(undefined4 * PTR32 *)((int)this + 0x128) = param_1;
  }
  else {
    *(undefined4 * PTR32 *)((int)this + 0x128) = (undefined4 *)((int)this + 0x150);
    puVar3 = param_1;
    puVar4 = (undefined4 *)((int)this + 0x150);
    for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  F_00d228c0(this);
  F_00d20fe0(this,(uint)(~(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 4))) >> 5) & 1));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x84);
  }
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return (uint)this;
}

/* ref: FUN_00d25290 */
uint F_00d25290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd25290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  F_00d22720(this,param_1,param_2);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133fe4));
  *(undefined * PTR32 *)((int)this + 0x128) = (undefined *)((int)this + 0x150);
  F_00d25490((undefined *)((int)this + 0x150));
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x84);
  }
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf14 */
byte F_00d25340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd25340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  byte bVar3;
  uint in_ecx;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  ((code *)*(gen_code32 *)(*(int *)this + 0x70))(0x406);
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  in_ecx = ((code *)*(gen_code32 *)(*piVar1 + 0x98))(piVar1);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(float10)0)));
  F_00d21970(this);
  bVar3 = F_00d245c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  if (bVar3 == 0) {
    if (((byte)this[0xb0] & 1) != 0) {
      if (*((char *)GEN_TOP((*(int *)(this + 0x128) + 0x60))) == '\0') {
        ((code *)*(gen_code32 *)(*piVar1 + 0x78))
                  (piVar1,*(undefined4 *)(this + 0x20),
                   *((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x5c))),
                   (undefined4)gen_fl2bits((float)(float10)0));
      }
      *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) & 0xfffffffe;
    }
    return 0;
  }
  *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) | 1;
  iVar2 = *(int *)(this + 0x128);
  if (*(char *)(iVar2 + 0x60) == '\0') {
    ((code *)*(gen_code32 *)(*piVar1 + 0x78))
              (piVar1,*(undefined4 *)(this + 0x20),*(undefined4 *)(iVar2 + 0x5c),
               *(undefined4 *)(this + 0x80));
  }
  else if (*(char *)(iVar2 + 0x60) == '\x01') {
    F_00d1b810(in_ecx,*(float *)(this + 0x80),*(float *)(iVar2 + 0x58));
    return 1;
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf26 */
uint F_00d25430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd25430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = (undefined4 *)F_00d22da0(this,param_1,0x74);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))));
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x1d; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x1d);
  }
  F_00d25530(*(undefined4 *)(this + 0x128),(uint)puVar1);
  return (uint)(puVar1 + 0x1d);
}

/* ref: FUN_00d25490 */
unsigned int F_00d25490(unsigned int gen_a0)
{
  GEN_ENTER(0xd25490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  fVar1 = (float10)1;
  *(undefined2 *)((int)this + 3) = 0x400;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 5) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 6) = 0;
  *(float *)((int)this + 0x10) = (float)fVar1;
  *(float *)((int)this + 0x14) = (float)fVar1;
  *(float *)((int)this + 0x18) = (float)fVar1;
  *(float *)((int)this + 0x1c) = (float)fVar1;
  *(undefined2 *)((int)this + 0xe) = 0;
  fVar2 = (float10)0;
  *(undefined1 *)((int)this + 0xd) = 0;
  *(undefined1 *)((int)this + 2) = 0xd;
  *(undefined2 *)this = 0x74;
  *(float *)((int)this + 0x20) = (float)fVar2;
  *(float *)((int)this + 0x24) = (float)fVar2;
  *(float *)((int)this + 0x28) = (float)fVar2;
  *(float *)((int)this + 0x2c) = (float)fVar2;
  *(float *)((int)this + 0x2c) = (float)fVar1;
  *(float *)((int)this + 0x30) = (float)fVar2;
  *(float *)((int)this + 0x34) = (float)fVar2;
  *(float *)((int)this + 0x38) = (float)fVar2;
  *(float *)((int)this + 0x3c) = (float)fVar2;
  *(float *)((int)this + 0x3c) = (float)fVar1;
  *(undefined4 *)((int)this + 0x5c) = 0;
  uVar3 = REFG(float, 0x1094880);
  *(undefined1 *)((int)this + 0x60) = 1;
  *(undefined4 *)((int)this + 0x40) = uVar3;
  *(undefined4 *)((int)this + 0x44) = REFG(float, 0x10a0d00);
  *(undefined4 *)((int)this + 0x48) = uVar3;
  *(float *)((int)this + 0x4c) = (float)fVar2;
  *(float *)((int)this + 0x58) = (float)fVar2;
  *(float *)((int)this + 0x50) = (float)fVar1;
  *(float *)((int)this + 0x54) = (float)fVar1;
  *(undefined2 *)((int)this + 0x61) = 0;
  *(undefined1 *)((int)this + 99) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  return 0;
}

/* ref: FUN_00d25530 */
uint F_00d25530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd25530u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  int local_8;
  
  F_00d0c080(param_1,param_2);
  puVar3 = (uint *)(param_1 + 0x28);
  local_8 = 2;
  puVar2 = (uint *)(param_2 + 0x20);
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
    local_8 = local_8 + -1;
    puVar2 = puVar2 + 4;
  } while (local_8 != 0);
  uVar1 = *(uint *)(param_1 + 0x40);
  *(uint *)(param_2 + 0x40) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x44);
  *(uint *)(param_2 + 0x44) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x48);
  *(uint *)(param_2 + 0x48) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x4c);
  *(uint *)(param_2 + 0x4c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x50);
  *(uint *)(param_2 + 0x50) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x54);
  *(uint *)(param_2 + 0x54) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x58);
  *(uint *)(param_2 + 0x58) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(undefined1 *)(param_2 + 0x60) = *(undefined1 *)(param_1 + 0x60);
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined2 *)(param_2 + 0x61) = 0;
  *(undefined1 *)(param_2 + 99) = 0;
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined4 *)(param_2 + 0x68) = 0;
  *(undefined4 *)(param_2 + 0x6c) = 0;
  *(undefined4 *)(param_2 + 0x70) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineExtController::vf0 */
uint F_00d25670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd25670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133fe4));
  F_00d23680(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf1 */
uint F_00d256a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd256a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
  *(undefined4 *)(this + 300) = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(this + 0x130) = *(undefined4 *)(iVar6 + 0x24);
  *(undefined4 *)(this + 0x134) = *(undefined4 *)(iVar6 + 0x28);
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(iVar6 + 0x2c);
  iVar6 = *(int *)(this + 0x128);
  *(undefined4 *)(this + 0x13c) = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(this + 0x140) = *(undefined4 *)(iVar6 + 0x24);
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(iVar6 + 0x28);
  *(undefined4 *)(this + 0x148) = *(undefined4 *)(iVar6 + 0x2c);
  iVar6 = 0x30;
  do {
    iVar5 = *(int *)(this + 0x128);
    uVar4 = *(undefined4 *)(iVar5 + 8 + iVar6);
    (*(undefined4 *)((char *)&auVar7 + 4)) = uVar4;
    (*(undefined4 *)((char *)&auVar7 + 0)) = *(undefined4 *)(iVar5 + iVar6);
    (*(undefined4 *)((char *)&auVar7 + 8)) = uVar4;
    (*(undefined4 *)((char *)&auVar7 + 12)) = *(undefined4 *)(iVar5 + 0xc + iVar6);
    (*(undefined8 *)((char *)&auVar8 + 8)) = (*(undefined8 *)((char *)&auVar7 + 8));
    (*(undefined4 *)((char *)&auVar8 + 4)) = *(undefined4 *)(iVar5 + 4 + iVar6);
    (*(undefined4 *)((char *)&auVar8 + 0)) = *(undefined4 *)(iVar5 + iVar6);
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
    uVar4 = *(undefined4 *)(iVar5 + 8 + iVar6);
    puVar2 = (undefined4 *)(iVar5 + 0xc + iVar6);
    puVar1 = (undefined4 *)(iVar5 + iVar6);
    puVar3 = (undefined4 *)(iVar5 + 4 + iVar6);
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
uint F_00d25890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd25890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
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
  
  F_00d213b0(this,param_1,param_2);
  iVar11 = 0;
  do {
    iVar9 = *(int *)(this + 0x128);
    fVar4 = *(float *)(iVar9 + 0x28 + iVar11);
    fVar5 = *(float *)(iVar9 + 0x2c + iVar11);
    pfVar1 = (float *)(iVar9 + 0x20 + iVar11);
    pfVar2 = (float *)(iVar9 + 0x24 + iVar11);
    fVar6 = param_1[3];
    pfVar3 = (float *)(iVar9 + 0x20 + iVar11);
    iVar11 = iVar11 + 0x10;
    fVar7 = param_1[1];
    fVar8 = param_1[2];
    *pfVar3 = *pfVar1 + *param_1;
    pfVar3[1] = *pfVar2 + fVar7;
    pfVar3[2] = fVar4 + fVar8;
    pfVar3[3] = fVar5 + fVar6;
    *((float *)GEN_TOP((*(int *)(this + 0x128) + 0x1c + iVar11))) = (float)(float10)1;
  } while (iVar11 < 0x40);
  uVar10 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  return uVar10;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf15 */
byte F_00d25970(void)
{
  GEN_ENTER(0xd25970u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d25980 */
byte F_00d25980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd25980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  if (((((float10)*param_1 <= (float10)*(float *)((int)this + 0x13c)) &&
       ((float10)*(float *)((int)this + 300) <= (float10)*param_1)) &&
      ((float10)param_1[1] <= (float10)*(float *)((int)this + 0x140))) &&
     ((((float10)*(float *)((int)this + 0x130) <= (float10)param_1[1] &&
       ((float10)param_1[2] <= (float10)*(float *)((int)this + 0x144))) &&
      ((float10)*(float *)((int)this + 0x134) <= (float10)param_1[2])))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00d25a00 */
uint F_00d25a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd25a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
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
  uint uVar11;
  float * pfVar12;
  float * pfVar13;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  
  uVar11 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(uint *)(gen_frame + 0x5c)) = uVar11;
  iVar14 = *(int *)((int)this + 0x128);
  fVar9 = (float10)0;
  fVar15 = (float10)((float)GEN_TOF(((float10)param_1[1] - (float10)*(float *)(iVar14 + 0x24))));
  if (!(fVar9 <= fVar15) || ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar9)) || fVar15 == fVar9)) {
    if ((!(fVar9 <= fVar15) != (GEN_ISNAN(fVar15) || GEN_ISNAN(fVar9))) && ((*(byte *)(iVar14 + 4) & 0x10) == 0)
       ) {
      fVar16 = (float10)*(float *)(iVar14 + 100);
      fVar15 = -fVar15;
      if (fVar16 <= fVar15 && ((!GEN_ISNAN(fVar15) && !GEN_ISNAN(fVar16)) && fVar15 != fVar16)) {
        F_00c47745(uVar11 ^ (uint)(uint)(gen_frame + 0x60));
        return 0xfffffffe;
      }
    }
  }
  else if (((*(byte *)(iVar14 + 4) & 8) == 0) &&
          (!(fVar15 <= (float10)*(float *)(iVar14 + 0x60)) !=
           (GEN_ISNAN((float10)*(float *)(iVar14 + 0x60)) || GEN_ISNAN(fVar15)))) {
    F_00c47745(uVar11 ^ (uint)(uint)(gen_frame + 0x60));
    return 0xffffffff;
  }
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  pfVar13 = (float *)(iVar14 + 0x20);
  iVar14 = 4;
  pfVar12 = ((float *)(gen_frame + 0x18)) + 1;
  do {
    fVar5 = *pfVar13;
    fVar6 = pfVar13[1];
    fVar7 = pfVar13[2];
    fVar8 = pfVar13[3];
    pfVar13 = pfVar13 + 4;
    iVar14 = iVar14 + -1;
    (*(float *)(gen_frame + 0x0)) = fVar1 - fVar5;
    (*(float *)(gen_frame + 0x4)) = fVar2 - fVar6;
    (*(float *)(gen_frame + 0x8)) = fVar3 - fVar7;
    (*(float *)(gen_frame + 0xc)) = fVar4 - fVar8;
    pfVar12[-1] = fVar1 - fVar5;
    pfVar12[1] = fVar3 - fVar7;
    pfVar12[2] = fVar4 - fVar8;
    *pfVar12 = (float)fVar9;
    pfVar12 = pfVar12 + 4;
  } while (iVar14 != 0);
  F_01052f50(((float *)(gen_frame + 0x18)),&(*(float *)(gen_frame + 0x0)));
  bVar10 = F_01053270(((float *)(gen_frame + 0x18)),&(*(float *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return (uint)(bVar10 != 0);
}

/* ref: FUN_00d25b70 */
float F_00d25b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd25b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
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
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  fVar16 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  pfVar8 = ((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x20)));
  iVar10 = 4;
  pfVar9 = ((float *)(gen_frame + 0x28)) + 1;
  do {
    fVar13 = *pfVar8;
    fVar6 = pfVar8[1];
    pfVar1 = pfVar8 + 2;
    pfVar2 = pfVar8 + 3;
    pfVar8 = pfVar8 + 4;
    iVar10 = iVar10 + -1;
    fVar13 = fVar13 - fVar16;
    fVar14 = *pfVar1 - fVar4;
    fVar15 = *pfVar2 - fVar5;
    (*(float *)(gen_frame + 0x10)) = fVar13;
    (*(float *)(gen_frame + 0x14)) = fVar6 - fVar3;
    (*(float *)(gen_frame + 0x18)) = fVar14;
    (*(float *)(gen_frame + 0x1c)) = fVar15;
    (*(float *)(gen_frame + 0x6c)) = fVar13;
    pfVar9[-1] = fVar13;
    (*(float *)(gen_frame + 0x70)) = fVar6 - fVar3;
    (*(float *)(gen_frame + 0x74)) = fVar14;
    pfVar9[1] = fVar14;
    (*(float *)(gen_frame + 0x78)) = fVar15;
    pfVar9[2] = fVar15;
    *pfVar9 = (float)(float10)0;
    pfVar9 = pfVar9 + 4;
  } while (iVar10 != 0);
  (*(float *)(gen_frame + 0xc)) = (float)(float10)0;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x78)) + 0)) = 1;
  bVar7 = false;
  (*(float *)(gen_frame + 0x74)) = 3.7616967e-37;
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x78)) + 1)) = 0x302;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x78)) + 3)) = 2;
  (*(float *)(gen_frame + 0x78)) = 9.624935e-38;
  iVar10 = 0;
  do {
    fVar16 = F_010536a0(((float *)(gen_frame + 0x28)) + (uint)*(byte *)((int)&(*(float *)(gen_frame + 0x74)) + iVar10 * 2) * 4,
                          ((float *)(gen_frame + 0x28)) + (uint)*(byte *)((int)&(*(float *)(gen_frame + 0x74)) + iVar10 * 2 + 1) * 4,&(*(float *)(gen_frame + 0x10)))
    ;
    fVar11 = (float10)fVar16;
    if (bVar7) {
      fVar12 = (float10)(*(float *)(gen_frame + 0xc));
      if (fVar11 <= fVar12 && ((!GEN_ISNAN(fVar12) && !GEN_ISNAN(fVar11)) && fVar12 != fVar11)) {
        (*(float *)(gen_frame + 0xc)) = fVar16;
      }
    }
    else {
      bVar7 = true;
      (*(float *)(gen_frame + 0xc)) = fVar16;
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 4);
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return (*(float *)(gen_frame + 0xc));
}

/* ref: FUN_00d25cb0 */
byte F_00d25cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd25cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float * pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  fVar2 = *(float *)((int)this + 0x128);
  fVar9 = 0.0;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  ((byte *)(gen_frame + 0x44))[0] = 0;
  ((byte *)(gen_frame + 0x44))[1] = 1;
  ((byte *)(gen_frame + 0x44))[2] = 1;
  ((byte *)(gen_frame + 0x44))[3] = 2;
  ((byte *)(gen_frame + 0x44))[4] = 2;
  ((byte *)(gen_frame + 0x44))[5] = 3;
  ((byte *)(gen_frame + 0x44))[6] = 3;
  ((byte *)(gen_frame + 0x44))[7] = 0;
  iVar7 = 0;
  (*(float *)(gen_frame + 0x14)) = fVar2;
  do {
    pfVar6 = ((float *)GEN_TOP(((((byte *)(gen_frame + 0x44))[(int)(iVar7 * 2)] + 2) * 0x10 + (int)gen_fl2bits((*(float *)(gen_frame + 0x14))))));
    fVar3 = *pfVar6;
    fVar4 = pfVar6[2];
    pfVar6 = ((float *)GEN_TOP(((((byte *)(gen_frame + 0x44))[(int)(iVar7 * 2 + 1)] + 2) * 0x10 + (int)gen_fl2bits((*(float *)(gen_frame + 0x14))))));
    fVar13 = (float10)(pfVar6[2] - fVar4);
    fVar14 = (float10)(*pfVar6 - fVar3);
    fVar2 = (float)(fVar13 - fVar14 * (float10)0);
    (*(float *)(gen_frame + 0x10)) = fVar2;
    fVar15 = (float10)fVar2;
    bVar12 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar15);
    if (bVar12 == (bVar12 || (float10)0 == fVar15)) {
      fVar16 = (float10)(fVar3 - *param_1);
      fVar17 = (float10)(fVar4 - param_1[2]);
      fVar2 = ((float)GEN_TOF(((fVar16 * (float10)0 - fVar17) / fVar15)));
      (*(float *)(gen_frame + 0x10)) = fVar2;
      fVar18 = (float10)fVar2;
      if ((!((float10)0 <= fVar18) == (GEN_ISNAN(fVar18) || GEN_ISNAN((float10)0))) &&
         (!(fVar18 <= (float10)1) == (GEN_ISNAN((float10)1) || GEN_ISNAN(fVar18)))) {
        ((byte *)(gen_frame + 0x8))[(int)((int)gen_fl2bits(fVar9))] = (byte)iVar7;
        ((float *)(gen_frame + 0x24))[(int)((int)gen_fl2bits(fVar9))] = fVar2;
        ((float *)(gen_frame + 0x34))[(int)((int)gen_fl2bits(fVar9))] = ((float)GEN_TOF(((fVar13 * fVar16 - fVar17 * fVar14) / fVar15)));
        fVar9 = gen_bits2f((uint)(byte)((char)(uint)gen_fl2bits(fVar9) + 1));
      }
    }
    fVar13 = (float10)0;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  if ((char)(uint)gen_fl2bits(fVar9) != '\0') {
    (*(float *)(gen_frame + 0x20)) = (float)fVar13;
    iVar7 = -1;
    iVar8 = 0;
    (*(float *)(gen_frame + 0x18)) = fVar9;
    if (3 < (uint)gen_fl2bits(fVar9)) {
      iVar10 = 2;
      do {
        if ((!((float10)((float *)(gen_frame + 0x34))[(int)(iVar8)] <= fVar13) ==
             (GEN_ISNAN(fVar13) || GEN_ISNAN((float10)((float *)(gen_frame + 0x34))[(int)(iVar8)]))) &&
           ((iVar7 == -1 ||
            (!((float10)((float *)(gen_frame + 0x34))[(int)(iVar8)] <= (float10)(*(float *)(gen_frame + 0x20))) !=
             (GEN_ISNAN((float10)(*(float *)(gen_frame + 0x20))) || GEN_ISNAN((float10)((float *)(gen_frame + 0x34))[(int)(iVar8)])))))) {
          (*(float *)(gen_frame + 0x20)) = ((float *)(gen_frame + 0x34))[(int)(iVar8)];
          iVar7 = iVar8;
        }
        if ((!((float10)((float *)(gen_frame + 0x34))[(int)(iVar8 + 1)] <= fVar13) ==
             (GEN_ISNAN(fVar13) || GEN_ISNAN((float10)((float *)(gen_frame + 0x34))[(int)(iVar8 + 1)]))) &&
           ((iVar7 == -1 ||
            (!((float10)((float *)(gen_frame + 0x34))[(int)(iVar8 + 1)] <= (float10)(*(float *)(gen_frame + 0x20))) !=
             (GEN_ISNAN((float10)(*(float *)(gen_frame + 0x20))) || GEN_ISNAN((float10)((float *)(gen_frame + 0x34))[(int)(iVar8 + 1)])))))) {
          iVar7 = iVar10 + -1;
          (*(float *)(gen_frame + 0x20)) = ((float *)(gen_frame + 0x34))[(int)(iVar8 + 1)];
        }
        if ((!((float10)((float *)(gen_frame + 0x34))[(int)(iVar8 + 2)] <= fVar13) ==
             (GEN_ISNAN(fVar13) || GEN_ISNAN((float10)((float *)(gen_frame + 0x34))[(int)(iVar8 + 2)]))) &&
           ((iVar7 == -1 ||
            (!((float10)((float *)(gen_frame + 0x34))[(int)(iVar8 + 2)] <= (float10)(*(float *)(gen_frame + 0x20))) !=
             (GEN_ISNAN((float10)(*(float *)(gen_frame + 0x20))) || GEN_ISNAN((float10)((float *)(gen_frame + 0x34))[(int)(iVar8 + 2)])))))) {
          (*(float *)(gen_frame + 0x20)) = ((float *)(gen_frame + 0x34))[(int)(iVar8 + 2)];
          iVar7 = iVar10;
        }
        if ((!((float10)((float *)(gen_frame + 0x34))[(int)(iVar8 + 3)] <= fVar13) ==
             (GEN_ISNAN(fVar13) || GEN_ISNAN((float10)((float *)(gen_frame + 0x34))[(int)(iVar8 + 3)]))) &&
           ((iVar7 == -1 ||
            (!((float10)((float *)(gen_frame + 0x34))[(int)(iVar8 + 3)] <= (float10)(*(float *)(gen_frame + 0x20))) !=
             (GEN_ISNAN((float10)(*(float *)(gen_frame + 0x20))) || GEN_ISNAN((float10)((float *)(gen_frame + 0x34))[(int)(iVar8 + 3)])))))) {
          iVar7 = iVar10 + 1;
          (*(float *)(gen_frame + 0x20)) = ((float *)(gen_frame + 0x34))[(int)(iVar8 + 3)];
        }
        iVar8 = iVar8 + 4;
        iVar10 = iVar10 + 4;
      } while (iVar8 < (int)gen_fl2bits(fVar9) + -3);
    }
    for (; iVar8 < (int)gen_fl2bits(fVar9); iVar8 = iVar8 + 1) {
      if ((!((float10)((float *)(gen_frame + 0x34))[(int)(iVar8)] <= fVar13) ==
           (GEN_ISNAN(fVar13) || GEN_ISNAN((float10)((float *)(gen_frame + 0x34))[(int)(iVar8)]))) &&
         ((iVar7 == -1 ||
          (!((float10)((float *)(gen_frame + 0x34))[(int)(iVar8)] <= (float10)(*(float *)(gen_frame + 0x20))) !=
           (GEN_ISNAN((float10)(*(float *)(gen_frame + 0x20))) || GEN_ISNAN((float10)((float *)(gen_frame + 0x34))[(int)(iVar8)])))))) {
        (*(float *)(gen_frame + 0x20)) = ((float *)(gen_frame + 0x34))[(int)(iVar8)];
        iVar7 = iVar8;
      }
    }
    if (iVar7 != -1) {
      (*(float *)(gen_frame + 0x1c)) = (float)fVar13;
      iVar8 = -1;
      iVar10 = 0;
      if (3 < (uint)gen_fl2bits(fVar9)) {
        iVar11 = 2;
        do {
          fVar14 = (float10)((float *)(gen_frame + 0x34))[(int)(iVar10)];
          if (!(fVar14 <= fVar13) || ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar14)) || fVar13 == fVar14)) {
            if (iVar8 != -1) {
              fVar14 = (float10)((float *)(gen_frame + 0x34))[(int)(iVar10)];
              fVar15 = (float10)(*(float *)(gen_frame + 0x1c));
              if (!(fVar14 <= fVar15) || ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar14)) || fVar15 == fVar14))
              goto LAB_00d25fb0;
            }
            (*(float *)(gen_frame + 0x1c)) = ((float *)(gen_frame + 0x34))[(int)(iVar10)];
            iVar8 = iVar10;
          }
LAB_00d25fb0: ;
          fVar14 = (float10)((float *)(gen_frame + 0x34))[(int)(iVar10 + 1)];
          if (!(fVar14 <= fVar13) || ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar14)) || fVar13 == fVar14)) {
            if (iVar8 != -1) {
              fVar14 = (float10)((float *)(gen_frame + 0x34))[(int)(iVar10 + 1)];
              fVar15 = (float10)(*(float *)(gen_frame + 0x1c));
              if (!(fVar14 <= fVar15) || ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar14)) || fVar15 == fVar14))
              goto LAB_00d25fda;
            }
            iVar8 = iVar11 + -1;
            (*(float *)(gen_frame + 0x1c)) = ((float *)(gen_frame + 0x34))[(int)(iVar10 + 1)];
          }
LAB_00d25fda: ;
          fVar14 = (float10)((float *)(gen_frame + 0x34))[(int)(iVar10 + 2)];
          if (!(fVar14 <= fVar13) || ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar14)) || fVar13 == fVar14)) {
            if (iVar8 != -1) {
              fVar14 = (float10)((float *)(gen_frame + 0x34))[(int)(iVar10 + 2)];
              fVar15 = (float10)(*(float *)(gen_frame + 0x1c));
              if (!(fVar14 <= fVar15) || ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar14)) || fVar15 == fVar14))
              goto LAB_00d26003;
            }
            (*(float *)(gen_frame + 0x1c)) = ((float *)(gen_frame + 0x34))[(int)(iVar10 + 2)];
            iVar8 = iVar11;
          }
LAB_00d26003: ;
          fVar14 = (float10)((float *)(gen_frame + 0x34))[(int)(iVar10 + 3)];
          if (!(fVar14 <= fVar13) || ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar14)) || fVar13 == fVar14)) {
            if (iVar8 != -1) {
              fVar14 = (float10)((float *)(gen_frame + 0x34))[(int)(iVar10 + 3)];
              fVar15 = (float10)(*(float *)(gen_frame + 0x1c));
              if (!(fVar14 <= fVar15) || ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar14)) || fVar15 == fVar14))
              goto LAB_00d2602d;
            }
            iVar8 = iVar11 + 1;
            (*(float *)(gen_frame + 0x1c)) = ((float *)(gen_frame + 0x34))[(int)(iVar10 + 3)];
          }
LAB_00d2602d: ;
          iVar10 = iVar10 + 4;
          iVar11 = iVar11 + 4;
        } while (iVar10 < (int)gen_fl2bits(fVar9) + -3);
      }
      for (; iVar10 < (int)gen_fl2bits(fVar9); iVar10 = iVar10 + 1) {
        fVar14 = (float10)((float *)(gen_frame + 0x34))[(int)(iVar10)];
        if (!(fVar14 <= fVar13) || ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar14)) || fVar13 == fVar14)) {
          if (iVar8 != -1) {
            fVar14 = (float10)((float *)(gen_frame + 0x34))[(int)(iVar10)];
            fVar15 = (float10)(*(float *)(gen_frame + 0x1c));
            if (!(fVar14 <= fVar15) || ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar14)) || fVar15 == fVar14))
            goto LAB_00d26071;
          }
          (*(float *)(gen_frame + 0x1c)) = ((float *)(gen_frame + 0x34))[(int)(iVar10)];
          iVar8 = iVar10;
        }
LAB_00d26071: ;
      }
      if (iVar8 != -1) {
        (*(float *)(gen_frame + 0x18)) = ((float *)(gen_frame + 0x24))[(int)(iVar7)];
        fVar14 = (float10)((float *)(gen_frame + 0x24))[(int)(iVar7)];
        if (!(fVar13 <= fVar14) == ((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar13)) || fVar14 == fVar13)) {
          fVar15 = (float10)1;
          if ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar14)) || fVar15 < fVar14 == (fVar15 == fVar14)) {
            pfVar6 = ((float *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x128) + 0x68 +
                              (uint)((byte *)(gen_frame + 0x44))[(int)((uint)((byte *)(gen_frame + 0x8))[(int)((int)(iVar7))] * 2)] * 4)));
            fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x128) + 0x68 +
                                               (uint)((byte *)(gen_frame + 0x44))[(int)((uint)((byte *)(gen_frame + 0x8))[(int)((int)(iVar7))] * 2 + 1)] * 4)))
                           - (float10)*pfVar6)));
            (*(float *)(gen_frame + 0x10)) = fVar2;
            fVar14 = fVar14 * (float10)fVar2 + (float10)*pfVar6;
          }
          else {
            fVar14 = (float10)*((float *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x68 +
                                        (uint)((byte *)(gen_frame + 0x44))[(int)((uint)((byte *)(gen_frame + 0x8))[(int)((int)(iVar7))] * 2 + 1)] * 4)));
          }
        }
        else {
          fVar14 = (float10)*((float *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x68 +
                                      (uint)((byte *)(gen_frame + 0x44))[(int)((uint)((byte *)(gen_frame + 0x8))[(int)((int)(iVar7))] * 2)] * 4)));
        }
        (*(float *)(gen_frame + 0x10)) = (float)fVar14;
        (*(float *)(gen_frame + 0x18)) = ((float *)(gen_frame + 0x24))[(int)(iVar8)];
        fVar15 = (float10)((float *)(gen_frame + 0x24))[(int)(iVar8)];
        if (!(fVar13 <= fVar15) == ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar13)) || fVar15 == fVar13)) {
          fVar16 = (float10)1;
          if ((GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15)) || fVar16 < fVar15 == (fVar16 == fVar15)) {
            pfVar6 = ((float *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x128) + 0x68 +
                              (uint)((byte *)(gen_frame + 0x44))[(int)((uint)((byte *)(gen_frame + 0x8))[(int)((int)(iVar8))] * 2)] * 4)));
            pvVar1 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x128) + 0x68 +
                                                        (uint)((byte *)(gen_frame + 0x44))[(int)((uint)((byte *)(gen_frame + 0x8))[(int)((int)(iVar8))] * 2 +
                                                                       1)] * 4))) - (float10)*pfVar6))))));
            (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar1;
            fVar15 = fVar15 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar1))) + (float10)*pfVar6;
          }
          else {
            fVar15 = (float10)*((float *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x68 +
                                        (uint)((byte *)(gen_frame + 0x44))[(int)((uint)((byte *)(gen_frame + 0x8))[(int)((int)(iVar8))] * 2 + 1)] * 4)));
          }
        }
        else {
          fVar15 = (float10)*((float *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x68 +
                                      (uint)((byte *)(gen_frame + 0x44))[(int)((uint)((byte *)(gen_frame + 0x8))[(int)((int)(iVar8))] * 2)] * 4)));
        }
        fVar2 = (float)fVar15;
        (*(float *)(gen_frame + 0x14)) = fVar2;
        fVar9 = (float)((float10)(*(float *)(gen_frame + 0x1c)) - (float10)(*(float *)(gen_frame + 0x20)));
        (*(float *)(gen_frame + 0x18)) = fVar9;
        fVar15 = (float10)fVar9;
        if ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar13)) == ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar13)) || fVar15 == fVar13)) {
          fVar9 = (float)((float10)(float)fVar14 - (float10)fVar2);
          (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar9)));
          pvVar1 = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(float *)(gen_frame + 0x1c)) / fVar15))));
          (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar1;
          *param_2 = (float)((float10)fVar9 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar1))) + (float10)fVar2);
        }
        else {
          *param_2 = fVar2;
        }
        bVar5 = 1;
        goto LAB_00d261ba;
      }
    }
  }
  bVar5 = 0;
LAB_00d261ba: ;
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return bVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf18 */
uint F_00d261d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd261d0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x90) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  puVar3 = param_2;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x90;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf19 */
byte F_00d26210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd26210u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf20 */
unsigned int F_00d26220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd26220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf25 */
uint F_00d26230(unsigned int gen_a0)
{
  GEN_ENTER(0xd26230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0xa0);
  }
  F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf27 */
unsigned int F_00d262b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd262b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf28 */
unsigned int F_00d262d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd262d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf29 */
uint F_00d262e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd262e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HWND param_1 = (HWND)gen_a1;
  HDC param_2 = (HDC)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  float fVar2;
  undefined * pBVar3;
  HGDIOBJ pvVar4;
  undefined * pHVar5;
  int * piVar6;
  uint uVar7;
  float * pfVar8;
  char * pcVar9;
  int iVar10;
  int x;
  int iVar11;
  int iVar12;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  pvVar4 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x24)) = pvVar4;
  pvVar4 = gen_imp_SelectObject(param_2,pvVar4);
  (*(HGDIOBJ *)(gen_frame + 0x28)) = pvVar4;
  pHVar5 = gen_imp_CreatePen(0,2,0x800000);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pHVar5;
  pvVar4 = gen_imp_SelectObject(param_2,pHVar5);
  (*(HGDIOBJ *)(gen_frame + 0x1c)) = pvVar4;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x98)));
  iVar12 = (*(tagRECT *)(gen_frame + 0x98)).right / 2;
  iVar11 = (*(tagRECT *)(gen_frame + 0x98)).bottom / 2;
  piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x1c) + 0xc))) + 0x98))))
                            (*((int * PTR32 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x1c) + 0xc))))));
  (*(int * PTR32 *)(gen_frame + 0x38)) = piVar6;
  uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x5c))(piVar6,((undefined1 *)(gen_frame + 0x48)));
  if ((char)uVar7 != '\0') {
    (*(byte *)(gen_frame + 0x47)) = *((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x128) + 4))) >> 2 & 1;
    (*(float * PTR32 *)(gen_frame + 0x40)) = &(*(float *)(gen_frame + 0xac));
    (*(int *)(gen_frame + 0x34)) = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x128) + 0x20;
    (*(int *)(gen_frame + 0x3c)) = 4;
    do {
      pfVar8 = (float *)F_00c34320(((undefined1 *)(gen_frame + 0x48)),((undefined1 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x34)));
      (*(float * PTR32 *)(gen_frame + 0x40))[-1] = *pfVar8;
      *(*(float * PTR32 *)(gen_frame + 0x40)) = pfVar8[1];
      fVar2 = pfVar8[3];
      (*(float * PTR32 *)(gen_frame + 0x40))[1] = pfVar8[2];
      (*(float * PTR32 *)(gen_frame + 0x40))[2] = fVar2;
      if ((*(byte *)(gen_frame + 0x47)) == 0) {
        *(*(float * PTR32 *)(gen_frame + 0x40)) = (float)(float10)0;
      }
      (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 0x10;
      iVar10 = (*(int *)(gen_frame + 0x3c)) + -1;
      (*(int *)(gen_frame + 0x3c)) = iVar10;
      (*(float * PTR32 *)(gen_frame + 0x40)) = (*(float * PTR32 *)(gen_frame + 0x40)) + 4;
    } while (iVar10 != 0);
    iVar10 = iVar11 - (int)((double)(*(float *)(gen_frame + 0xb0)) * *(double *)&REFG(double, 0x1132488));
    (*(int *)(gen_frame + 0x3c)) = iVar10;
    x = iVar12 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xa8)));
    (*(float * PTR32 *)(gen_frame + 0x40)) = (float *)x;
    gen_imp_MoveToEx(param_2,x,iVar10,(LPPOINT)0x0);
    gen_imp_LineTo(param_2,iVar12 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xb8))),
           iVar11 - (int)((double)(*(float *)(gen_frame + 0xc0)) * *(double *)&REFG(double, 0x1132488)));
    gen_imp_LineTo(param_2,iVar12 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xc8))),
           iVar11 - (int)((double)(*(float *)(gen_frame + 0xd0)) * *(double *)&REFG(double, 0x1132488)));
    gen_imp_LineTo(param_2,iVar12 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xd8))),
           iVar11 - (int)((double)(*(float *)(gen_frame + 0xe0)) * *(double *)&REFG(double, 0x1132488)));
    iVar11 = (*(int *)(gen_frame + 0x3c));
    gen_imp_LineTo(param_2,(*(float * PTR32 *)(gen_frame + 0x40)),(*(int *)(gen_frame + 0x3c)));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x38)) + 0x30))((*(int * PTR32 *)(gen_frame + 0x38)),((undefined1 *)(gen_frame + 0x88)));
    pBVar3 = (*(undefined * PTR32 *)(gen_frame + 0x30));
    piVar6 = ((int *)(uintptr_t)gen_fl2bits((float)(F_00d25b70((*(undefined * PTR32 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x88))))));
    (*(int * PTR32 *)(gen_frame + 0x38)) = piVar6;
    ((code *)*(gen_code32 *)(*(int *)pBVar3 + 0x60))(pBVar3,&(*(float *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x18)),piVar6,0);
    F_00c472af(((char *)(gen_frame + 0xe8)),0x20,&REFG(undefined, 0x1134078),(int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x20))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x20))) >> 0x20));
    pcVar9 = ((char *)(gen_frame + 0xe8));
    do {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    gen_imp_GetTextExtentPoint32A(param_2,((char *)(gen_frame + 0xe8)),(int)pcVar9 - (int)(((char *)(gen_frame + 0xe8)) + 1),&(*(undefined8 *)(gen_frame + 0x10)));
    gen_imp_TextOutA(param_2,(int)(*(float * PTR32 *)(gen_frame + 0x40)),iVar11,((char *)(gen_frame + 0xe8)),(int)pcVar9 - (int)(((char *)(gen_frame + 0xe8)) + 1));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x1c)));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x28)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x2c)));
    uVar7 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x24)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar7;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf30 */
byte F_00d265f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd265f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined * _File;
  byte bVar5;
  int iVar6;
  
  _File = param_1;
  bVar5 = F_00d21f00((undefined *)this,param_1);
  if (bVar5 == 0) {
    return 0;
  }
  iVar6 = 0;
  param_1 = (undefined *)0x0;
  do {
    iVar1 = *(int *)(this + 0x128);
    dVar2 = (double)*(float *)(iVar6 + 0x28 + iVar1);
    dVar3 = (double)*(float *)(iVar6 + 0x24 + iVar1);
    dVar4 = (double)*(float *)(iVar6 + 0x20 + iVar1);
    F_00c49386(_File,"Position[%d] = %f %f %f\n",param_1,(int)(ulonglong)gen_d2bits(dVar4),
             (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
             (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
             (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    param_1 = (undefined *)((int)param_1 + (1) * 32);
    iVar6 = iVar6 + 0x10;
  } while (iVar6 < 0x40);
  param_1 = (undefined *)0x0;
  iVar6 = 0x60;
  do {
    F_00c49386(_File,"Height[%d] = %f\n",param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))) >> 0x20
                  ));
    param_1 = (undefined *)((int)param_1 + (1) * 32);
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x68);
  param_1 = (undefined *)0x0;
  iVar6 = 0x68;
  do {
    F_00c49386(_File,"Value[%d] = %f\n",param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))) >> 0x20
                  ));
    param_1 = (undefined *)((int)param_1 + (1) * 32);
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x78);
  F_00c49386(_File,"CalcType = %d\n",(uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x7c))));
  F_00c49386(_File,"FuncNo = %d\n",*((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x78))));
  F_00c49386(_File,"[EndOfSoundObject]\n\n");
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf31 */
byte F_00d26710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd26710u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  byte * pbVar6;
  bool bVar7;
  double dVar8;
  
  pcVar2 = "Position";
  pbVar6 = (byte *)param_2;
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
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar8 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 2) * 0x10))) = (float)dVar8;
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar8 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24 + uVar4 * 0x10))) = (float)dVar8;
          pcVar2 = (char *)F_00d00d00(0,0);
          if (pcVar2 != (char *)0x0) {
            dVar8 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 0x10))) = (float)dVar8;
            return 1;
          }
        }
      }
    }
  }
  else {
    pcVar2 = "Height";
    pbVar6 = (byte *)param_2;
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
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar8 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x60 + uVar4 * 4))) = (float)dVar8;
          return 1;
        }
      }
    }
    else {
      pcVar2 = "Value";
      pbVar6 = (byte *)param_2;
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
          pcVar2 = (char *)F_00d00d00(0,0);
          if (pcVar2 != (char *)0x0) {
            dVar8 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x68 + uVar4 * 4))) = (float)dVar8;
            return 1;
          }
        }
      }
      else {
        pcVar2 = "CalcType";
        pbVar6 = (byte *)param_2;
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
          pbVar6 = (byte *)param_2;
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
            bVar1 = F_00d22040(param_1,param_2);
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
uint F_00d269c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd269c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int * this_00;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  F_00d22580(this,param_1,param_2,param_3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x113416c));
  *(uint *)((int)this + 0xb0) =
       *(uint *)((int)this + 0xb0) ^ ((param_4 & 0xff) << 4 ^ *(uint *)((int)this + 0xb0)) & 0x10;
  if ((char)param_4 == '\0') {
    *(undefined4 * PTR32 *)((int)this + 0x128) = param_1;
  }
  else {
    *(undefined4 * PTR32 *)((int)this + 0x128) = (undefined4 *)((int)this + 0x150);
    puVar3 = param_1;
    puVar4 = (undefined4 *)((int)this + 0x150);
    for (iVar2 = 0x24; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  F_00d256a0(this);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0xa0);
  }
  F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0));
  return (uint)this;
}

/* ref: FUN_00d26ab0 */
uint F_00d26ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd26ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  F_00d22720(this,param_1,param_2);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x113416c));
  *(undefined * PTR32 *)((int)this + 0x128) = (undefined *)((int)this + 0x150);
  F_00d26ec0((undefined *)((int)this + 0x150));
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0xa0);
  }
  F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0));
  return (uint)this;
}

/* ref: FUN_00d26b60 */
byte F_00d26b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd26b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_00d25980(this,param_2);
  if (bVar1 != 0) {
    uVar2 = F_00d25a00(((undefined *)(uint)(this)),param_2);
    if (uVar2 != 0) {
      if (*((char *)GEN_TOP((*(int *)((int)this + 0x128) + 0x7c))) == '\0') {
        bVar1 = F_00d25cb0(this,param_2,param_1);
        return bVar1 != 0;
      }
      *param_1 = (float)(float10)0;
    }
  }
  return 0;
}

/* ref: FUN_00d26bb0 */
uint F_00d26bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd26bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
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
  float local_14;
  
  iVar1 = *(int *)((int)this + 0x128);
  iVar4 = 0;
  iVar2 = 1;
  pfVar3 = (float *)(iVar1 + 0x30);
  fVar7 = *param_2 - *(float *)(iVar1 + 0x20);
  fVar8 = param_2[1] - *(float *)(iVar1 + 0x24);
  fVar9 = param_2[2] - *(float *)(iVar1 + 0x28);
  fVar10 = param_2[3] - *(float *)(iVar1 + 0x2c);
  local_14 = SQRT(((fVar8 * fVar8 + fVar7 * fVar7) + fVar9 * fVar9) + fVar10 * fVar10);
  do {
    fVar7 = *param_2 - *pfVar3;
    fVar8 = param_2[1] - pfVar3[1];
    fVar9 = param_2[2] - pfVar3[2];
    fVar10 = param_2[3] - pfVar3[3];
    fVar7 = SQRT(((fVar8 * fVar8 + fVar7 * fVar7) + fVar9 * fVar9) + fVar10 * fVar10);
    fVar5 = (float10)fVar7;
    fVar6 = (float10)local_14;
    if (fVar5 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar5)) && fVar6 != fVar5)) {
      iVar4 = iVar2;
      local_14 = fVar7;
    }
    iVar2 = iVar2 + 1;
    pfVar3 = pfVar3 + 4;
  } while (iVar2 < 4);
  *param_1 = *(undefined4 *)(iVar1 + 0x68 + iVar4 * 4);
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf26 */
uint F_00d26d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd26d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = (undefined4 *)F_00d22da0(this,param_1,0x90);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))));
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x24; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x24);
  }
  F_00d26f90(*(undefined4 *)(this + 0x128),(uint)puVar1);
  return (uint)(puVar1 + 0x24);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf14 */
byte F_00d26da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd26da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this,0x406);
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x98))(piVar1)));
  ((code *)*(gen_code32 *)(*piVar4 + 0x30))(piVar4,((undefined1 *)(gen_frame + 0x8)));
  bVar3 = F_00d25980(this,((undefined1 *)(gen_frame + 0x8)));
  if (bVar3 != 0) {
    uVar5 = F_00d25a00(this,((undefined1 *)(gen_frame + 0x8)));
    if (uVar5 != 0) {
      if (*((char *)GEN_TOP((*(int *)(this + 0x128) + 0x7c))) == '\0') {
        bVar3 = F_00d25cb0(this,((undefined1 *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
        if (bVar3 != 0) {
          *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) | 1;
          if (*((char *)GEN_TOP((*(int *)(this + 0x128) + 0x7c))) == '\0') {
            ((code *)*(gen_code32 *)(*piVar1 + 0x78))
                      (piVar1,*(undefined4 *)(this + 0x20),
                       *((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x78))),
                       (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x4))));
          }
          F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
          return 1;
        }
      }
      else {
        (*(float *)(gen_frame + 0x4)) = (float)(float10)0;
      }
    }
  }
  if (((byte)this[0xb0] & 1) != 0) {
    iVar2 = *(int *)(this + 0x128);
    if (*(char *)(iVar2 + 0x7c) == '\0') {
      F_00d26bb0(this,&(*(float *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x8)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x78))
                (piVar1,*(undefined4 *)(this + 0x20),*(undefined4 *)(iVar2 + 0x78),
                 (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x4))));
    }
    *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) & 0xfffffffe;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_00d26ec0 */
unsigned int F_00d26ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xd26ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  fVar1 = (float10)1;
  *(undefined2 *)((int)this + 3) = 0x400;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 5) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 6) = 0;
  *(float *)((int)this + 0x10) = (float)fVar1;
  *(float *)((int)this + 0x14) = (float)fVar1;
  *(float *)((int)this + 0x18) = (float)fVar1;
  *(float *)((int)this + 0x1c) = (float)fVar1;
  *(undefined2 *)((int)this + 0xe) = 0;
  fVar2 = (float10)0;
  *(undefined1 *)((int)this + 0xd) = 0;
  *(undefined1 *)((int)this + 2) = 0xc;
  *(undefined2 *)this = 0x90;
  *(float *)((int)this + 0x20) = (float)fVar2;
  *(float *)((int)this + 0x24) = (float)fVar2;
  *(float *)((int)this + 0x28) = (float)fVar2;
  *(float *)((int)this + 0x2c) = (float)fVar2;
  *(float *)((int)this + 0x2c) = (float)fVar1;
  *(float *)((int)this + 0x68) = (float)fVar2;
  *(float *)((int)this + 0x30) = (float)fVar2;
  *(float *)((int)this + 0x34) = (float)fVar2;
  *(float *)((int)this + 0x38) = (float)fVar2;
  *(float *)((int)this + 0x3c) = (float)fVar2;
  *(float *)((int)this + 0x3c) = (float)fVar1;
  *(float *)((int)this + 0x6c) = (float)fVar2;
  *(float *)((int)this + 0x40) = (float)fVar2;
  *(float *)((int)this + 0x44) = (float)fVar2;
  *(float *)((int)this + 0x48) = (float)fVar2;
  *(float *)((int)this + 0x4c) = (float)fVar2;
  *(float *)((int)this + 0x4c) = (float)fVar1;
  *(float *)((int)this + 0x70) = (float)fVar2;
  *(float *)((int)this + 0x50) = (float)fVar2;
  *(float *)((int)this + 0x54) = (float)fVar2;
  *(float *)((int)this + 0x58) = (float)fVar2;
  *(float *)((int)this + 0x5c) = (float)fVar2;
  *(float *)((int)this + 0x5c) = (float)fVar1;
  *(float *)((int)this + 0x74) = (float)fVar2;
  *(undefined1 *)((int)this + 0x7c) = 0;
  uVar3 = REFG(float, 0x1094880);
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x60) = uVar3;
  *(float *)((int)this + 100) = (float)fVar2;
  *(undefined2 *)((int)this + 0x7d) = 0;
  *(undefined1 *)((int)this + 0x7f) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  return 0;
}

/* ref: FUN_00d26f90 */
uint F_00d26f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd26f90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  uint * puVar4;
  int local_8;
  
  F_00d0c080(param_1,param_2);
  puVar3 = (uint *)(param_1 + 0x28);
  puVar2 = (uint *)(param_2 + 0x20);
  local_8 = 4;
  puVar4 = (uint *)(param_2 + 0x68);
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
    local_8 = local_8 + -1;
    puVar4 = puVar4 + 1;
  } while (local_8 != 0);
  uVar1 = *(uint *)(param_1 + 0x60);
  *(uint *)(param_2 + 0x60) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 100);
  *(uint *)(param_2 + 100) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(undefined1 *)(param_2 + 0x7c) = *(undefined1 *)(param_1 + 0x7c);
  *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined2 *)(param_2 + 0x7d) = 0;
  *(undefined1 *)(param_2 + 0x7f) = 0;
  *(undefined4 *)(param_2 + 0x80) = 0;
  *(undefined4 *)(param_2 + 0x84) = 0;
  *(undefined4 *)(param_2 + 0x88) = 0;
  *(undefined4 *)(param_2 + 0x8c) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxExtController::vf0 */
uint F_00d270a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd270a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x113416c));
  F_00d23680(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf9 */
unsigned int F_00d270e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd270e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int local_14;
  
  F_00d213b0(this,param_1,param_2);
  iVar4 = *(int *)(this + 0x128);
  local_14 = 0;
  if (*(char *)(iVar4 + 0x4e) != '\0') {
    iVar5 = 0;
    do {
      fVar1 = param_1[3];
      local_14 = local_14 + 1;
      fVar2 = param_1[1];
      fVar3 = param_1[2];
      *(float *)(iVar5 + 0x60 + iVar4) = *(float *)(iVar5 + 0x60 + iVar4) + *param_1;
      *(float *)(iVar5 + 100 + iVar4) = *(float *)(iVar5 + 100 + iVar4) + fVar2;
      *(float *)(iVar5 + 0x68 + iVar4) = *(float *)(iVar5 + 0x68 + iVar4) + fVar3;
      *(float *)(iVar5 + 0x6c + iVar4) = *(float *)(iVar5 + 0x6c + iVar4) + fVar1;
      *((float *)GEN_TOP((iVar5 + 0x6c + *(int *)(this + 0x128)))) = (float)(float10)1;
      iVar4 = *(int *)(this + 0x128);
      iVar5 = iVar5 + 0x10;
    } while (local_14 < (int)(uint)*(byte *)(iVar4 + 0x4e));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf12 */
uint F_00d271d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd271d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x80);
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf13 */
uint F_00d271f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd271f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  
  fVar1 = F_00d22f40(this,GEN_TOF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40)))),
                       *((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) >> 2 & 1);
  *param_1 = ((float)GEN_TOF((fVar1 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x38))))));
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf18 */
uint F_00d27230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd27230u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x260) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  puVar3 = param_2;
  for (iVar1 = 0x98; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x260;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf19 */
byte F_00d27270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd27270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x128);
  *param_1 = *(undefined4 *)(iVar1 + 0x20);
  *param_2 = *(undefined4 *)(iVar1 + 0x24);
  *param_3 = *(undefined4 *)(iVar1 + 0x44);
  *param_4 = *(undefined4 *)(iVar1 + 0x40);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf20 */
uint F_00d272a0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd272a0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x128);
  *(float *)(uVar1 + 0x20) = param_2;
  *((float *)GEN_TOP((*(int *)(in_ecx + 0x128) + 0x24))) = param_3;
  return uVar1;
}

/* ref: FUN_00d272c0 */
uint F_00d272c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd272c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  undefined2 extraout_var = 0;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  fVar6 = F_010536a0(param_1,param_2,((byte *)(gen_frame + 0x8)));
  fVar4 = (float10)fVar6;
  if ((float10)*param_4 <= (float10)*(float *)&REFG(undefined, 0x1097254)) {
    *param_4 = fVar6;
    *(undefined4 *)param_3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0));
    (*(undefined1 *)((char *)&uVar2 + 0)) = ((byte *)(gen_frame + 0x8))[0xc];
    (*(undefined1 *)((char *)&uVar2 + 1)) = ((byte *)(gen_frame + 0x8))[0xd];
    (*(undefined1 *)((char *)&uVar2 + 2)) = ((byte *)(gen_frame + 0x8))[0xe];
    (*(undefined1 *)((char *)&uVar2 + 3)) = ((byte *)(gen_frame + 0x8))[0xf];
    *(undefined4 *)(param_3 + 4) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4));
    *(undefined4 *)(param_3 + 8) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8));
    *(undefined4 *)(param_3 + 0xc) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12));
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar2;
  }
  fVar5 = (float10)*param_4;
  uVar1 = (ushort)((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4)) || fVar5 == fVar4);
  if (fVar4 <= fVar5 && uVar1 == 0) {
    *param_4 = fVar6;
    (*(undefined1 *)((char *)&uVar3 + 0)) = ((byte *)(gen_frame + 0x8))[8];
    (*(undefined1 *)((char *)&uVar3 + 1)) = ((byte *)(gen_frame + 0x8))[9];
    (*(undefined1 *)((char *)&uVar3 + 2)) = ((byte *)(gen_frame + 0x8))[10];
    (*(undefined1 *)((char *)&uVar3 + 3)) = ((byte *)(gen_frame + 0x8))[0xb];
    *(undefined4 *)param_3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0));
    *(undefined4 *)(param_3 + 4) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4));
    *(undefined4 *)(param_3 + 8) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8));
    *(undefined4 *)(param_3 + 0xc) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12));
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return CONCAT22(extraout_var,
                  (ushort)!(fVar4 <= fVar5) << 8 | (ushort)(GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4)) << 10 |
                  uVar1 << 0xe);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf25 */
uint F_00d27380(unsigned int gen_a0)
{
  GEN_ENTER(0xd27380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x290];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x27c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x280);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x270);
  }
  F_00c47745((*(uint *)(gen_frame + 0x27c)) ^ (uint)(uint)(gen_frame + 0x280));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf27 */
byte F_00d27400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd27400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
  for (iVar2 = 0x98; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  bVar1 = F_00d228c0(this);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf30 */
byte F_00d27430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd27430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined * _File;
  byte bVar5;
  int iVar6;
  
  _File = param_1;
  bVar5 = F_00d21f00((undefined *)this,param_1);
  if (bVar5 != 0) {
    iVar6 = 0;
    param_1 = (undefined *)0x0;
    if (*((char *)GEN_TOP((*(int *)(this + 0x128) + 0x4e))) != '\0') {
      do {
        iVar1 = *(int *)(this + 0x128);
        dVar2 = (double)*(float *)(iVar6 + 0x68 + iVar1);
        dVar3 = (double)*(float *)(iVar6 + 100 + iVar1);
        dVar4 = (double)*(float *)(iVar6 + 0x60 + iVar1);
        F_00c49386(_File,"Position[%d] = %f %f %f\n",param_1,(int)(ulonglong)gen_d2bits(dVar4),
                 (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
                 (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
                 (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
        param_1 = (undefined *)((int)param_1 + (1) * 32);
        iVar6 = iVar6 + 0x10;
      } while ((int)param_1 < (int)(uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x4e))));
    }
    F_00c49386(_File,"MaxRange = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x20))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x20))))));
    F_00c49386(_File,"MinRange = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x24))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x24))))));
    param_1 = (undefined *)0x0;
    iVar6 = 0x28;
    do {
      F_00c49386(_File,"Height[%d] = %f\n",param_1,
               (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar6 + *(int *)(this + 0x128))))),
               (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar6 + *(int *)(this + 0x128))))) >>
                    0x20));
      param_1 = (undefined *)((int)param_1 + (1) * 32);
      iVar6 = iVar6 + 4;
    } while (iVar6 < 0x30);
    F_00c49386(_File,"RangeVolume = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x30))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x30))))));
    F_00c49386(_File,"Volume = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x34))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x34))))));
    F_00c49386(_File,"Pitch = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x38))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x38))))));
    F_00c49386(_File,"ReverbFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x3c))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x3c))))));
    F_00c49386(_File,"DopplerFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))))));
    F_00c49386(_File,"IsReverbObject = %d\n",*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x4d))) & 1);
    F_00c49386(_File,"VertexCount = %d\n",(uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x4e))));
    F_00c49386(_File,"[EndOfSoundObject]\n\n");
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf31 */
byte F_00d275f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd275f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = "Position";
  pbVar5 = (byte *)param_2;
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
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 6) * 0x10))) = (float)dVar7;
          pcVar2 = (char *)F_00d00d00(0,0);
          if (pcVar2 != (char *)0x0) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 100 + uVar4 * 0x10))) = (float)dVar7;
            pcVar2 = (char *)F_00d00d00(0,0);
            if (pcVar2 != (char *)0x0) {
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
    pcVar2 = "MaxRange";
    pbVar5 = (byte *)param_2;
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
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x20))) = (float)dVar7;
        return 1;
      }
    }
    else {
      pcVar2 = "MinRange";
      pbVar5 = (byte *)param_2;
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
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = "Height";
        pbVar5 = (byte *)param_2;
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
            pcVar2 = (char *)F_00d00d00(0,0);
            if (pcVar2 != (char *)0x0) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 4))) = (float)dVar7;
              return 1;
            }
          }
        }
        else {
          pcVar2 = "RangeVolume";
          pbVar5 = (byte *)param_2;
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
            pcVar2 = (char *)F_00d00d00(0,0);
            if (pcVar2 != (char *)0x0) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x30))) = (float)dVar7;
              return 1;
            }
          }
          else {
            pcVar2 = "Volume";
            pbVar5 = (byte *)param_2;
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
              pcVar2 = (char *)F_00d00d00(0,0);
              if (pcVar2 != (char *)0x0) {
                dVar7 = F_00c4acaa(pcVar2);
                *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x34))) = (float)dVar7;
                return 1;
              }
            }
            else {
              pcVar2 = "Pitch";
              pbVar5 = (byte *)param_2;
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
                pcVar2 = (char *)F_00d00d00(0,0);
                if (pcVar2 != (char *)0x0) {
                  dVar7 = F_00c4acaa(pcVar2);
                  *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x38))) = (float)dVar7;
                  return 1;
                }
              }
              else {
                pcVar2 = "ReverbFac";
                pbVar5 = (byte *)param_2;
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
                  pcVar2 = (char *)F_00d00d00(0,0);
                  if (pcVar2 != (char *)0x0) {
                    dVar7 = F_00c4acaa(pcVar2);
                    *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x3c))) = (float)dVar7;
                    return 1;
                  }
                }
                else {
                  pcVar2 = "DopplerFac";
                  pbVar5 = (byte *)param_2;
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
                    pcVar2 = (char *)F_00d00d00(0,0);
                    if (pcVar2 != (char *)0x0) {
                      dVar7 = F_00c4acaa(pcVar2);
                      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x40))) = (float)dVar7;
                      return 1;
                    }
                  }
                  else {
                    pcVar2 = "SubSoundType";
                    pbVar5 = (byte *)param_2;
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
                      pcVar2 = "IsReverbObject";
                      pbVar5 = (byte *)param_2;
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
                        pcVar2 = "VertexCount";
                        pbVar5 = (byte *)param_2;
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
                          bVar1 = F_00d22040(param_1,param_2);
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
float F_00d27b40(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd27b40u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x280];
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
  bVar1 = *(byte *)(param_1 + 0x4e);
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
      pfVar2 = (float *)F_00c34320((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x34))),&(*(float *)(gen_frame + 0x0)),
                                     (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x3c))));
      (*(float *)(gen_frame + 0x3c)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 0x10);
      *pfVar4 = *pfVar2;
      pfVar4[1] = pfVar2[1];
      pfVar4[2] = pfVar2[2];
      pfVar4[3] = pfVar2[3];
      pfVar4 = pfVar4 + 4;
      fVar13 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x38))) + -1);
      (*(float *)(gen_frame + 0x38)) = fVar13;
    } while (fVar13 != 0.0);
    pfVar4 = ((float *)GEN_TOP(CONCAT13((*(undefined1 *)(gen_frame + 0x267)),CONCAT12((*(undefined1 *)(gen_frame + 0x266)),(*(undefined2 *)(gen_frame + 0x264))))));
  }
  if (((*(byte *)(param_1 + 4) & 4) == 0) && ((*(float *)(gen_frame + 0x3c)) = 0.0, *(char *)(param_1 + 0x4e) != '\0')) {
    pfVar2 = ((float *)(gen_frame + 0x60)) + 1;
    do {
      (*(float *)(gen_frame + 0x38)) = *pfVar2;
      F_00d218f0(pfVar4[1],&(*(float *)(gen_frame + 0x38)),param_1,param_1 + 0x28);
      bVar1 = *(byte *)(param_1 + 0x4e);
      *pfVar2 = (*(float *)(gen_frame + 0x38));
      iVar3 = (int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 1;
      pfVar2 = pfVar2 + 4;
      (*(float *)(gen_frame + 0x3c)) = gen_bits2f(iVar3);
      pfVar4 = ((float *)GEN_TOP(CONCAT13((*(undefined1 *)(gen_frame + 0x267)),CONCAT12((*(undefined1 *)(gen_frame + 0x266)),(*(undefined2 *)(gen_frame + 0x264))))));
    } while (iVar3 < (int)(uint)bVar1);
  }
  uVar6 = (uint)*(byte *)(param_1 + 0x4e);
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
          fVar13 = F_010536a0(((float *)(gen_frame + 0x60)) + ((uint)*(byte *)(&(*(undefined2 *)(gen_frame + 0x264)) + iVar7) + iVar3) * 4,
                                ((float *)(gen_frame + 0x60)) +
                                ((uint)*(byte *)((int)&(*(undefined2 *)(gen_frame + 0x264)) + iVar7 * 2 + 1) + iVar3) * 4,
                                ((undefined1 *)(gen_frame + 0x40)));
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
    } while (iVar3 < (int)(*(byte *)((*(int *)(gen_frame + 0x20)) + 0x4e) - 2));
  }
  fVar13 = *(float *)&REFG(undefined, 0x1097254);
  fVar8 = (float10)(*(float *)(gen_frame + 0x3c));
  fVar9 = (float10)*(float *)((*(int *)(gen_frame + 0x20)) + 0x24);
  if (!(fVar8 <= fVar9) == ((GEN_ISNAN(fVar9) || GEN_ISNAN(fVar8)) || fVar9 == fVar8)) {
    F_00c47745((*(uint *)(gen_frame + 0x26c)) ^ (uint)(uint)(gen_frame + 0x270));
    return fVar13;
  }
  fVar13 = ((float)GEN_TOF((fVar8 - (float10)*(float *)((*(int *)(gen_frame + 0x20)) + 0x24))));
  (*(float *)(gen_frame + 0x34)) = fVar13;
  F_00c47745((*(uint *)(gen_frame + 0x26c)) ^ (uint)(uint)(gen_frame + 0x270));
  return fVar13;
}

/* ref: FUN_00d27f60 */
byte F_00d27f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd27f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x320];
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
  
  (*(uint *)(gen_frame + 0x30c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x310);
  piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  (*(float * PTR32 *)(gen_frame + 0x28)) = param_1;
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x98))(piVar4)));
  (*(int * PTR32 *)(gen_frame + 0x24)) = piVar4;
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,((undefined1 *)(gen_frame + 0x40)));
  if ((char)uVar5 != '\0') {
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x24)) + 0x30))((*(int * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0xc0)));
    iVar7 = *(int *)((int)this + 0x128);
    cVar1 = *(char *)(iVar7 + 0x4e);
    pfVar10 = param_1;
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)(iVar7 + 0x60);
      puVar6 = ((undefined4 *)(gen_frame + 0x100));
      for (iVar9 = (uint)*(byte *)(iVar7 + 0x4e) * 4; pfVar10 = (*(float * PTR32 *)(gen_frame + 0x28)), this = (*(undefined * PTR32 *)(gen_frame + 0x3c)),
          iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar6 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    if (((*(byte *)(iVar7 + 4) & 4) == 0) && ((*(undefined4 * PTR32 *)(gen_frame + 0x38)) = (undefined4 *)0x0, cVar1 != '\0')) {
      puVar8 = ((undefined4 *)(gen_frame + 0x100)) + 1;
      do {
        iVar7 = *(int *)((int)this + 0x128);
        (*(undefined4 *)(gen_frame + 0xc)) = *puVar8;
        F_00d218f0((*(float *)(gen_frame + 0xc4)),&(*(undefined4 *)(gen_frame + 0xc)),iVar7,iVar7 + 0x28);
        iVar7 = *(int *)((int)this + 0x128);
        *puVar8 = (*(undefined4 *)(gen_frame + 0xc));
        iVar9 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x38)) + 1;
        puVar8 = puVar8 + 4;
        (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = (undefined4 *)iVar9;
        pfVar10 = (*(float * PTR32 *)(gen_frame + 0x28));
      } while (iVar9 < (int)(uint)*(byte *)(iVar7 + 0x4e));
    }
    (*(int *)(gen_frame + 0x34)) = 0;
    if (*((char *)GEN_TOP((*(int *)((int)this + 0x128) + 0x4e))) != '\0') {
      (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = ((undefined4 *)(gen_frame + 0x100));
      puVar8 = (undefined4 *)((int)this + 300);
      do {
        puVar6 = (undefined4 *)F_00c34320(((undefined1 *)(gen_frame + 0x40)),&(*(undefined * PTR32 *)(gen_frame + 0xd0)),(*(undefined4 * PTR32 *)(gen_frame + 0x38)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = (*(undefined4 * PTR32 *)(gen_frame + 0x38)) + 4;
        *puVar8 = *puVar6;
        puVar8[1] = puVar6[1];
        puVar8[2] = puVar6[2];
        puVar8[3] = puVar6[3];
        iVar7 = (*(int *)(gen_frame + 0x34)) + 1;
        puVar8 = puVar8 + 4;
        (*(int *)(gen_frame + 0x34)) = iVar7;
        pfVar10 = (*(float * PTR32 *)(gen_frame + 0x28));
      } while (iVar7 < (int)(uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x4e))));
    }
    bVar3 = *((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x4e)));
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = *(undefined * PTR32 *)&REFG(undefined, 0x1097254);
    ((byte *)(gen_frame + 0x304))[0] = 0;
    ((byte *)(gen_frame + 0x304))[1] = 1;
    ((byte *)(gen_frame + 0x304))[2] = 1;
    ((byte *)(gen_frame + 0x304))[3] = 2;
    ((byte *)(gen_frame + 0x304))[4] = 2;
    ((byte *)(gen_frame + 0x304))[5] = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = (undefined4 *)0x0;
    (*(int *)(gen_frame + 0x34)) = 0;
    if (0 < (int)(bVar3 - 2)) {
      do {
        pfVar10 = (float *)((int)this + (*(int *)(gen_frame + 0x34)) * 0x10 + 300);
        F_01052f50(pfVar10,&(*(float *)(gen_frame + 0xe0)));
        bVar3 = F_010530d0(pfVar10,&(*(float *)(gen_frame + 0xe0)));
        if (bVar3 == 0) {
          iVar7 = 0;
          do {
            pvVar18 = ((undefined *)(uintptr_t)gen_fl2bits((float)(F_010536a0((int)this +
                                           ((uint)((byte *)(gen_frame + 0x304))[(int)(iVar7 * 2)] + (*(int *)(gen_frame + 0x34))) * 0x10 + 300,
                                           (int)this +
                                           ((uint)((byte *)(gen_frame + 0x304))[(int)(iVar7 * 2 + 1)] + (*(int *)(gen_frame + 0x34))) * 0x10 + 300,
                                           &(*(undefined4 *)(gen_frame + 0xf0))))));
            (*(undefined * PTR32 *)(gen_frame + 0x3c)) = pvVar18;
            fVar12 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar18)));
            if (iVar7 + (*(int *)(gen_frame + 0x34)) == 0) {
              (*(undefined * PTR32 *)(gen_frame + 0x30)) = pvVar18;
              *(undefined4 *)((int)this + 0x60) = (*(undefined4 *)(gen_frame + 0xf0));
              *(undefined4 *)((int)this + 100) = (*(undefined4 *)(gen_frame + 0xf4));
              *(undefined4 *)((int)this + 0x68) = (*(undefined4 *)(gen_frame + 0xf8));
              *(undefined4 *)((int)this + 0x6c) = (*(undefined4 *)(gen_frame + 0xfc));
              (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = (undefined4 *)0x0;
            }
            else {
              fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x30)))));
              if (fVar12 <= fVar13 && ((!GEN_ISNAN(fVar13) && !GEN_ISNAN(fVar12)) && fVar13 != fVar12)) {
                (*(undefined * PTR32 *)(gen_frame + 0x30)) = pvVar18;
                *(undefined4 *)((int)this + 0x60) = (*(undefined4 *)(gen_frame + 0xf0));
                *(undefined4 *)((int)this + 100) = (*(undefined4 *)(gen_frame + 0xf4));
                *(undefined4 *)((int)this + 0x68) = (*(undefined4 *)(gen_frame + 0xf8));
                *(undefined4 *)((int)this + 0x6c) = (*(undefined4 *)(gen_frame + 0xfc));
                (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = (undefined4 *)0x0;
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 3);
        }
        else {
          (*(float *)(gen_frame + 0x10)) = 0.0 - *pfVar10;
          (*(float *)(gen_frame + 0x14)) = 0.0 - pfVar10[1];
          (*(float *)(gen_frame + 0x18)) = 0.0 - pfVar10[2];
          (*(float *)(gen_frame + 0x1c)) = 0.0 - pfVar10[3];
          fVar14 = (0.0 - pfVar10[1]) * (*(float *)(gen_frame + 0xe4));
          fVar15 = (0.0 - pfVar10[2]) * (*(float *)(gen_frame + 0xe8));
          fVar16 = (0.0 - pfVar10[3]) * (*(float *)(gen_frame + 0xec));
          pvVar17 = ((undefined *)GEN_TOP((((fVar14 + (0.0 - *pfVar10) * (*(float *)(gen_frame + 0xe0))) + fVar15) + fVar16)));
          (*(undefined * PTR32 *)(gen_frame + 0xd0)) = pvVar17;
          (*(float *)(gen_frame + 0xd4)) = ((fVar14 + fVar14) + fVar15) + fVar16;
          (*(float *)(gen_frame + 0xd8)) = ((fVar14 + fVar15) + fVar15) + fVar16;
          (*(float *)(gen_frame + 0xdc)) = ((fVar14 + fVar16) + fVar15) + fVar16;
          (*(undefined * PTR32 *)(gen_frame + 0x3c)) = pvVar17;
          pvVar18 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar17)))))))));
          (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pvVar18;
          fVar12 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar18)));
          if ((*(int *)(gen_frame + 0x34)) == 0) {
            (*(undefined * PTR32 *)(gen_frame + 0x30)) = pvVar18;
            fVar14 = gen_bits2f((uint)pvVar17 ^ REFG(uint, 0x10920d0));
            (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = (undefined4 *)0x1;
            (*(float *)(gen_frame + 0x10)) = fVar14 * (*(float *)(gen_frame + 0xe0));
            (*(float *)(gen_frame + 0x14)) = fVar14 * (*(float *)(gen_frame + 0xe4));
            (*(float *)(gen_frame + 0x18)) = fVar14 * (*(float *)(gen_frame + 0xe8));
            (*(float *)(gen_frame + 0x1c)) = fVar14 * (*(float *)(gen_frame + 0xec));
            *(float *)((int)this + 0x60) = fVar14 * (*(float *)(gen_frame + 0xe0));
            *(float *)((int)this + 100) = fVar14 * (*(float *)(gen_frame + 0xe4));
            *(float *)((int)this + 0x68) = fVar14 * (*(float *)(gen_frame + 0xe8));
            *(float *)((int)this + 0x6c) = fVar14 * (*(float *)(gen_frame + 0xec));
            *(float *)((int)this + 0x6c) = (float)(float10)1;
          }
          else {
            fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x30)))));
            if (!(fVar12 <= fVar13) || ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) || fVar13 == fVar12)) {
              *(float *)((int)this + 0x6c) = (float)(float10)1;
            }
            else {
              (*(undefined * PTR32 *)(gen_frame + 0x30)) = pvVar18;
              fVar14 = gen_bits2f((uint)pvVar17 ^ REFG(uint, 0x10920d0));
              (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = (undefined4 *)0x1;
              (*(float *)(gen_frame + 0x10)) = fVar14 * (*(float *)(gen_frame + 0xe0));
              (*(float *)(gen_frame + 0x14)) = fVar14 * (*(float *)(gen_frame + 0xe4));
              (*(float *)(gen_frame + 0x18)) = fVar14 * (*(float *)(gen_frame + 0xe8));
              (*(float *)(gen_frame + 0x1c)) = fVar14 * (*(float *)(gen_frame + 0xec));
              *(float *)((int)this + 0x60) = fVar14 * (*(float *)(gen_frame + 0xe0));
              *(float *)((int)this + 100) = fVar14 * (*(float *)(gen_frame + 0xe4));
              *(float *)((int)this + 0x68) = fVar14 * (*(float *)(gen_frame + 0xe8));
              *(float *)((int)this + 0x6c) = fVar14 * (*(float *)(gen_frame + 0xec));
              *(float *)((int)this + 0x6c) = (float)(float10)1;
            }
          }
        }
        iVar7 = (*(int *)(gen_frame + 0x34)) + 1;
        (*(int *)(gen_frame + 0x34)) = iVar7;
      } while (iVar7 < (int)(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x4e))) - 2));
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x38)) != (undefined4 *)0x0) {
        *(float *)((int)this + 0x94) = (float)(float10)1;
      }
      fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*(undefined * PTR32 *)&REFG(undefined, 0x1097254))));
      fVar12 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x30)))));
      pfVar10 = (*(float * PTR32 *)(gen_frame + 0x28));
      if (fVar12 <= fVar13 && ((!GEN_ISNAN(fVar13) && !GEN_ISNAN(fVar12)) && fVar13 != fVar12))
      goto LAB_00d2850f;
    }
    iVar7 = *(int *)((int)this + 0x128);
    fVar12 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x30)))));
    fVar13 = (float10)*(float *)(iVar7 + 0x24);
    if (!(fVar12 <= fVar13) == ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) || fVar13 == fVar12)) {
      fVar13 = (float10)*(float *)(iVar7 + 0x20);
      if (!(fVar12 <= fVar13) || ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) || fVar13 == fVar12)) {
        fVar14 = ((float)GEN_TOF((fVar12 - (float10)*(float *)(iVar7 + 0x20))));
        (*(undefined * PTR32 *)(gen_frame + 0x3c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
        *pfVar10 = fVar14;
        fVar14 = ((float)GEN_TOF(((float10)fVar14 /
                        ((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x24))) -
                        (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x20)))))));
        (*(undefined * PTR32 *)(gen_frame + 0x3c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
        pvVar18 = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - (float10)fVar14))));
        (*(undefined * PTR32 *)(gen_frame + 0x3c)) = pvVar18;
        *pfVar10 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar18)));
        fVar12 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar18))) * (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x30)));
      }
      else {
        fVar14 = ((float)GEN_TOF((fVar12 / (float10)*(float *)(iVar7 + 0x20))));
        (*(undefined * PTR32 *)(gen_frame + 0x3c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
        pvVar18 = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - (float10)fVar14))));
        (*(undefined * PTR32 *)(gen_frame + 0x3c)) = pvVar18;
        *pfVar10 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar18)));
        fVar12 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar18))) *
                 ((float10)1 - (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x30)))) +
                 (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x30)));
      }
      *pfVar10 = (float)fVar12;
      *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)this + 0x60);
      *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 100);
      *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)this + 0x68);
      *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)this + 0x6c);
      if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x4d))) & 1) != 0) {
        bVar3 = 1;
        goto LAB_00d2874d;
      }
      cVar1 = *((char *)GEN_TOP((*(int *)((int)this + 0x128) + 0x4c)));
      if (cVar1 == '\0') {
        puVar8 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x24)) + 0x68))((*(int * PTR32 *)(gen_frame + 0x24)),&(*(undefined * PTR32 *)(gen_frame + 0xd0)),(int)this + 0x60)));
        (*(undefined4 *)(gen_frame + 0xf0)) = *puVar8;
        (*(undefined4 *)(gen_frame + 0xf4)) = puVar8[1];
        (*(undefined4 *)(gen_frame + 0xf8)) = puVar8[2];
        iVar7 = *(int *)((int)this + 0x128);
        (*(undefined4 *)(gen_frame + 0xfc)) = puVar8[3];
        F_00d24070(this,&(*(undefined4 *)(gen_frame + 0xf0)),pfVar10,(int)this + 0x8c,*(float *)(iVar7 + 0x24),
                     *(float *)(iVar7 + 0x20),*(float *)(iVar7 + 0x30),*(float *)(iVar7 + 0x44));
        if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0xc))) & 0x20) != 0) {
          *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((int)this + 300);
          *(undefined4 *)((int)this + 100) = *(undefined4 *)((int)this + 0x130);
          *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0x134);
          *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x138);
        }
      }
      else if (cVar1 == '\x01' || cVar1 == '\x02') {
        F_00d21d00(this,pfVar10,(int)this + 0x8c);
      }
      F_00d219d0(this,(uint)pfVar10,(int)this + 0x8c,param_2);
      pcVar2 = *(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x24)) + 100);
      *pfVar10 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x34))) * (float10)*pfVar10
                        )));
      uVar5 = (*pcVar2)((*(int * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x80)));
      if ((char)uVar5 == '\x01') {
        puVar8 = (undefined4 *)F_00c34320(((undefined1 *)(gen_frame + 0x80)),&(*(undefined * PTR32 *)(gen_frame + 0xd0)),(int)this + 0x70);
        (*(undefined4 *)(gen_frame + 0xf0)) = *puVar8;
        (*(undefined4 *)(gen_frame + 0xf4)) = puVar8[1];
        (*(undefined4 *)(gen_frame + 0xf8)) = puVar8[2];
        (*(undefined4 *)(gen_frame + 0xfc)) = puVar8[3];
        puVar8 = &(*(undefined4 *)(gen_frame + 0xf0));
      }
      else {
        puVar8 = (undefined4 *)((int)this + 0x60);
      }
      fVar12 = F_00d21d90(this,(uint)puVar8,pfVar10,(int)this + 0x8c);
      *(float *)((int)this + 0x90) = (float)fVar12;
      *(float *)((int)this + 0x80) = *pfVar10;
      bVar11 = GEN_ISNAN((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*(undefined * PTR32 *)&REFG(undefined, 0x1097254))))) || GEN_ISNAN((float10)*pfVar10);
      if (bVar11 == (bVar11 || (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*(undefined * PTR32 *)&REFG(undefined, 0x1097254)))) == (float10)*pfVar10)) {
        bVar3 = 1;
        goto LAB_00d2874d;
      }
    }
  }
LAB_00d2850f: ;
  bVar3 = 0;
LAB_00d2874d: ;
  F_00c47745((*(uint *)(gen_frame + 0x30c)) ^ (uint)(uint)(gen_frame + 0x310));
  return bVar3;
}

/* ref: FUN_00d28770 */
uint F_00d28770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd28770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int * piVar8;
  float * pfVar9;
  undefined4 * puVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  
  fVar1 = *(float *)&REFG(undefined, 0x1097254);
  uVar7 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x88)) = uVar7;
  fVar12 = (float10)*(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x44)) = *(float *)&REFG(undefined, 0x1097254);
  *param_3 = *(float *)&REFG(undefined, 0x1097254);
  param_3[1] = fVar1;
  param_3[3] = 0.0;
  param_3[2] = fVar1;
  *param_1 = fVar1;
  iVar3 = *(int *)((int)this + 0x128);
  (*(float * PTR32 *)(gen_frame + 0x2c)) = param_1;
  cVar2 = *(char *)(iVar3 + 0x4c);
  if (cVar2 == '\0') {
    uVar7 = 0;
    if ((*(byte *)((int)this + 0xb0) & 8) != 0) {
LAB_00d28978: ;
      *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 2;
      *(float *)((int)this + 0x80) = (float)(float10)1;
      F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
      return uVar7;
    }
    if ((*(byte *)(iVar3 + 4) & 0x80) == 0) {
      param_3[2] = *(float *)((int)this + 0x98);
      (*(float *)(gen_frame + 0x40)) = *(float *)((int)this + 0x60);
      (*(float *)(gen_frame + 0x44)) = *(float *)((int)this + 0x68);
      fVar13 = (float10)*(float *)((int)this + 0x60);
      bVar11 = GEN_ISNAN(fVar12) || GEN_ISNAN(fVar13);
      fVar14 = (float10)*(float *)((int)this + 0x68);
      if ((bVar11 == (bVar11 || fVar12 == fVar13)) ||
         ((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar12)) == ((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar12)) || fVar14 == fVar12))) {
        fVar12 = F_00c4d1fa(GEN_TOD(-fVar14));
        fVar1 = (float)fVar12;
        (*(float *)(gen_frame + 0x40)) = fVar1;
        (*(float *)(gen_frame + 0x44)) = fVar1;
        *(float *)((int)this + 0xa4) = fVar1;
      }
      else {
        (*(float *)(gen_frame + 0x44)) = *(float *)((int)this + 0xa4);
      }
      fVar12 = (float10)*(float *)((int)this + 0x94);
LAB_00d28a1e: ;
      *param_3 = (float)fVar12;
    }
    else {
      *(float *)((int)this + 0x94) = fVar1;
      if ((*(byte *)(iVar3 + 0xc) & 2) == 0) {
        (*(float *)(gen_frame + 0x44)) = *(float *)(iVar3 + 0x48);
      }
      else {
LAB_00d288cd: ;
        fVar12 = F_00d234c0(this,*(float *)((int)this + 0xa0));
        (*(float *)(gen_frame + 0x44)) = (float)fVar12;
      }
    }
  }
  else {
    if (cVar2 == '\x01') {
      *(float *)((int)this + 0x60) = fVar1;
      *(float *)((int)this + 100) = fVar1;
      *(float *)((int)this + 0x68) = fVar1;
      *(float *)((int)this + 0x6c) = (float)(float10)1;
      F_00c47745(uVar7 ^ (uint)(uint)(gen_frame + 0x8c));
      return 0;
    }
    if (cVar2 == '\x02') {
      piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x98))(piVar8)));
      fVar12 = ((float10)GEN_TOD(fcos((float10)*(float *)((int)this + 0xa0))));
      (*(float *)(gen_frame + 0x44)) = (float)fVar12;
      (*(float *)(gen_frame + 0x1c)) = (float)((float10)(float)fVar12 * (float10)*(double *)&REFG(undefined, 0x1088120));
      (*(float *)(gen_frame + 0x20)) = *(float *)&REFG(undefined, 0x1097254);
      fVar12 = ((float10)GEN_TOD(fsin((float10)*(float *)((int)this + 0xa0))));
      (*(float *)(gen_frame + 0x44)) = (float)fVar12;
      (*(float *)(gen_frame + 0x24)) = (float)((float10)(float)fVar12 * (float10)*(double *)&REFG(undefined, 0x1088120));
      (*(float *)(gen_frame + 0x28)) = (float)(float10)1;
      pfVar9 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x5c))(piVar8,((undefined1 *)(gen_frame + 0x48)))));
      if ((char)pfVar9 == '\0') goto LAB_00d28a30;
      (*(float *)(gen_frame + 0x30)) = *(float *)&REFG(undefined, 0x1097254);
      (*(float *)(gen_frame + 0x34)) = *(float *)&REFG(undefined, 0x1097254);
      (*(float *)(gen_frame + 0x38)) = *(float *)&REFG(undefined, 0x1097254);
      (*(float *)(gen_frame + 0x7c)) = *(float *)&REFG(undefined, 0x1097254);
      fVar1 = (float)(float10)1;
      (*(float *)(gen_frame + 0x3c)) = fVar1;
      (*(float *)(gen_frame + 0x80)) = *(float *)&REFG(undefined, 0x1097254);
      fVar1 = (float)(float10)1;
      (*(float *)(gen_frame + 0x3c)) = fVar1;
      (*(float *)(gen_frame + 0x78)) = *(float *)&REFG(undefined, 0x1097254);
      (*(float *)(gen_frame + 0x84)) = fVar1;
      puVar10 = (undefined4 *)F_00c34320(((undefined1 *)(gen_frame + 0x48)),((undefined1 *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x1c)));
      uVar4 = *puVar10;
      uVar5 = puVar10[1];
      uVar6 = puVar10[2];
      uVar7 = puVar10[3];
      *(undefined4 *)((int)this + 0x50) = uVar4;
      *(undefined4 *)((int)this + 0x54) = uVar5;
      *(undefined4 *)((int)this + 0x58) = uVar6;
      *(uint *)((int)this + 0x5c) = uVar7;
      *(undefined4 *)((int)this + 0x60) = uVar4;
      *(undefined4 *)((int)this + 100) = uVar5;
      *(undefined4 *)((int)this + 0x68) = uVar6;
      *(uint *)((int)this + 0x6c) = uVar7;
      fVar1 = *(float *)&REFG(undefined, 0x1097254);
      fVar12 = (float10)*(float *)&REFG(undefined, 0x1097254);
      *(float *)((int)this + 0x94) = *(float *)&REFG(undefined, 0x1097254);
      if ((*(byte *)((int)this + 0xb0) & 8) != 0) goto LAB_00d28978;
      iVar3 = *(int *)((int)this + 0x128);
      if ((*(byte *)(iVar3 + 4) & 0x80) == 0) {
        (*(float *)(gen_frame + 0x44)) = *(float *)((int)this + 0x60);
        (*(float *)(gen_frame + 0x40)) = *(float *)((int)this + 0x68);
        fVar13 = (float10)*(float *)((int)this + 0x60);
        bVar11 = GEN_ISNAN(fVar12) || GEN_ISNAN(fVar13);
        fVar14 = (float10)*(float *)((int)this + 0x68);
        if ((bVar11 == (bVar11 || fVar12 == fVar13)) ||
           ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar14)) == ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar14)) || fVar12 == fVar14))) {
          fVar12 = F_00c4d1fa(GEN_TOD(-fVar14));
          (*(float *)(gen_frame + 0x40)) = (float)fVar12;
          (*(float *)(gen_frame + 0x44)) = (float)fVar12;
          fVar12 = (float10)*(float *)&REFG(undefined, 0x1097254);
        }
        else {
          (*(float *)(gen_frame + 0x44)) = *(float *)((int)this + 0xa4);
        }
        goto LAB_00d28a1e;
      }
      *(float *)((int)this + 0x94) = fVar1;
      if ((*(byte *)(iVar3 + 0xc) & 2) != 0) goto LAB_00d288cd;
      (*(float *)(gen_frame + 0x44)) = *(float *)(iVar3 + 0x48);
    }
  }
  *(*(float * PTR32 *)(gen_frame + 0x2c)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x44)) + (float10)(*(float *)(gen_frame + 0x44))) / (float10)*(double *)&REFG(undefined, 0x1080228))));
  pfVar9 = (*(float * PTR32 *)(gen_frame + 0x2c));
LAB_00d28a30: ;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)pfVar9;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf26 */
uint F_00d28a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd28a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = (undefined4 *)F_00d22da0(this,param_1,0x260);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))));
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x98; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x98);
  }
  F_00d29b40(*(undefined4 *)(this + 0x128),(uint)puVar1);
  return (uint)(puVar1 + 0x98);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf28 */
uint F_00d28ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd28ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1d0];
  int iVar1;
  undefined * pPVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x1c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1cc);
  uVar3 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*(int *)(uVar3 + 0xc) + 0x2f8))) != 0) {
    F_00d22b20(this,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x1c8;
    uVar6 = F_00427d90();
    iVar1 = *(int *)(this + 0x128);
    (*(ulonglong *)(gen_frame + 0x8)) = uVar6;
    (*(undefined4 *)(gen_frame + 0x1bc)) = *(undefined4 *)(iVar1 + 0x24);
    iVar5 = 0;
    (*(undefined4 *)(gen_frame + 0x1b8)) = *(undefined4 *)(iVar1 + 0x20);
    (*(byte *)(gen_frame + 0x1c0)) = *(byte *)(iVar1 + 0x4e);
    if (*(byte *)(iVar1 + 0x4e) != 0) {
      pPVar2 = this + 0x130;
      puVar4 = ((undefined4 *)(gen_frame + 0x3c));
      do {
        iVar5 = iVar5 + 1;
        puVar4[-1] = *(undefined4 *)(pPVar2 + -4);
        *puVar4 = *(undefined4 *)pPVar2;
        puVar4[1] = *(undefined4 *)(pPVar2 + 4);
        pPVar2 = pPVar2 + 0x10;
        puVar4 = puVar4 + 3;
      } while (iVar5 < (int)(uint)(*(byte *)(gen_frame + 0x1c0)));
    }
    F_00d299e0(&(*(undefined2 *)(gen_frame + 0x0)),&(*(undefined2 *)(gen_frame + 0x0)));
    uVar3 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))),&(*(undefined2 *)(gen_frame + 0x0)),0x1c8);
  }
  F_00c47745((*(uint *)(gen_frame + 0x1c8)) ^ (uint)(uint)(gen_frame + 0x1cc));
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf29 */
uint F_00d28ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd28ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HWND param_1 = (HWND)gen_a1;
  HDC param_2 = (HDC)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
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
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = (undefined *)param_1;
  F_00c48350(((undefined *)(gen_frame + 0x6c)),0,0x3c);
  F_00c49908(((CHAR *)(((char *)((undefined *)(gen_frame + 0x6c)) + 28))),0x20,&REFG(undefined, 0x1134208));
  (*(LONG *)((char *)((undefined *)(gen_frame + 0x6c)))) = 0xd;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x6c)) + 23))) = 0x80;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x6c)) + 27))) = '\x01';
  pHVar3 = gen_imp_CreateFontIndirectA(((undefined *)(gen_frame + 0x6c)));
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = pHVar3;
  pvVar4 = gen_imp_SelectObject(param_2,pHVar3);
  (*(HGDIOBJ *)(gen_frame + 0x48)) = pvVar4;
  pvVar4 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x4c)) = pvVar4;
  pvVar4 = gen_imp_SelectObject(param_2,pvVar4);
  (*(HGDIOBJ *)(gen_frame + 0x50)) = pvVar4;
  if (((byte)this[0xb0] & 1) == 0) {
    iVar10 = 1;
    color = 0x900000;
  }
  else {
    color = 0x80;
    iVar10 = 2;
  }
  pHVar5 = gen_imp_CreatePen(0,iVar10,color);
  (*(undefined * PTR32 *)(gen_frame + 0x58)) = pHVar5;
  pvVar4 = gen_imp_SelectObject(param_2,pHVar5);
  (*(HGDIOBJ *)(gen_frame + 0x54)) = pvVar4;
  gen_imp_GetClientRect((HWND)(*(undefined * PTR32 *)(gen_frame + 0x68)),&(*(tagRECT *)(gen_frame + 0xb8)));
  iVar10 = (*(tagRECT *)(gen_frame + 0xb8)).right / 2;
  (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x5c))) + 4))) = (*(tagRECT *)(gen_frame + 0xb8)).bottom / 2;
  gen_imp_MoveToEx(param_2,iVar10 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 300)),
           (*(tagRECT *)(gen_frame + 0xb8)).bottom / 2 - (int)((double)*(float *)(this + 0x134) * *(double *)&REFG(double, 0x1132488)),
           (LPPOINT)0x0);
  gen_imp_LineTo(param_2,iVar10 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x13c)),
         (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x5c))) + 4))) - (int)((double)*(float *)(this + 0x144) * *(double *)&REFG(double, 0x1132488)));
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = ((undefined *)GEN_TOP(((*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x4e))) + 1) / 2)));
  gen_imp_MoveToEx(param_2,iVar10 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 300)),
           (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x5c))) + 4))) - (int)((double)*(float *)(this + 0x134) * *(double *)&REFG(double, 0x1132488)),
           (LPPOINT)0x0);
  if (1 < (int)(*(undefined * PTR32 *)(gen_frame + 0x64))) {
    pPVar6 = (*(undefined * PTR32 *)(gen_frame + 0x64)) + -1;
    (*(undefined * PTR32 *)(gen_frame + 0x64)) = this + 0x14c;
    (*(undefined * PTR32 *)(gen_frame + 0x68)) = pPVar6;
    do {
      gen_imp_LineTo(param_2,iVar10 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x64))),
             (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x5c))) + 4))) - (int)((double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x64)) + 8) * *(double *)&REFG(double, 0x1132488)));
      (*(undefined * PTR32 *)(gen_frame + 0x64)) = (*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x20;
      pPVar6 = (*(undefined * PTR32 *)(gen_frame + 0x68)) + -1;
      (*(undefined * PTR32 *)(gen_frame + 0x68)) = pPVar6;
    } while (pPVar6 != (undefined *)0x0);
  }
  pPVar6 = this + (uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x4e))) * 0x10;
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = pPVar6;
  gen_imp_MoveToEx(param_2,iVar10 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(pPVar6 + 0x11c)),
           (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x5c))) + 4))) - (int)((double)*(float *)(pPVar6 + 0x124) * *(double *)&REFG(double, 0x1132488)),
           (LPPOINT)0x0);
  pPVar6 = this + (uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x4e))) * 0x10;
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = pPVar6;
  gen_imp_LineTo(param_2,iVar10 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(pPVar6 + 0x10c)),
         (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x5c))) + 4))) - (int)((double)*(float *)(pPVar6 + 0x114) * *(double *)&REFG(double, 0x1132488)));
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = (undefined *)(uint)(*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x4e))) >> 1);
  gen_imp_MoveToEx(param_2,iVar10 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x13c)),
           (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x5c))) + 4))) - (int)((double)*(float *)(this + 0x144) * *(double *)&REFG(double, 0x1132488)),
           (LPPOINT)0x0);
  if (1 < (int)(*(undefined * PTR32 *)(gen_frame + 0x64))) {
    pPVar6 = (*(undefined * PTR32 *)(gen_frame + 0x64)) + -1;
    (*(undefined * PTR32 *)(gen_frame + 0x64)) = this + 0x15c;
    (*(undefined * PTR32 *)(gen_frame + 0x68)) = pPVar6;
    do {
      gen_imp_LineTo(param_2,iVar10 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x64))),
             (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x5c))) + 4))) - (int)((double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x64)) + 8) * *(double *)&REFG(double, 0x1132488)));
      (*(undefined * PTR32 *)(gen_frame + 0x64)) = (*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x20;
      pPVar6 = (*(undefined * PTR32 *)(gen_frame + 0x68)) + -1;
      (*(undefined * PTR32 *)(gen_frame + 0x68)) = pPVar6;
    } while (pPVar6 != (undefined *)0x0);
  }
  if (((byte)this[0xb0] & 1) != 0) {
    iVar10 = iVar10 - (int)((double)*(float *)(this + 0x50) * *(double *)&REFG(double, 0x1132488));
    pPVar6 = ((undefined *)GEN_TOP(((*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x5c))) + 4))) - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x58)))));
    (*(undefined * PTR32 *)(gen_frame + 0x64)) = pPVar6;
    iVar2 = (int)((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x24))) * *(double *)&REFG(undefined, 0x10947f0));
    gen_imp_Ellipse(param_2,iVar10 - iVar2,(int)pPVar6 - iVar2,iVar2 + iVar10,(int)(pPVar6 + iVar2));
    iVar2 = (int)((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x20))) * *(double *)&REFG(undefined, 0x10947f0));
    gen_imp_Ellipse(param_2,iVar10 - iVar2,(int)(*(undefined * PTR32 *)(gen_frame + 0x64)) - iVar2,iVar2 + iVar10,(int)((*(undefined * PTR32 *)(gen_frame + 0x64)) + iVar2));
    F_00c472af(((char *)(gen_frame + 0xc8)),0x20,&REFG(undefined, 0x1134214),
               (int)(ulonglong)
                    gen_d2bits((double)*(float *)(this + 0x80) * *(double *)&REFG(undefined, 0x1088118)),
               (int)((ulonglong)
                     gen_d2bits((double)*(float *)(this + 0x80) * *(double *)&REFG(undefined, 0x1088118)) >> 0x20)
              );
    piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x98))))
                              (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))))));
    (*(undefined * PTR32 *)(gen_frame + 0x68)) = (undefined *)piVar7;
    F_004ec420(((undefined1 *)(gen_frame + 0x4)));
    ((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x30))((*(undefined * PTR32 *)(gen_frame + 0x68)),((undefined1 *)(gen_frame + 0xa8)));
    fVar11 = F_00d27b40(*(undefined4 *)(this + 0x128),GEN_TOF(((undefined1 *)(gen_frame + 0x4))),((undefined1 *)(gen_frame + 0xa8)));
    (*(undefined * PTR32 *)(gen_frame + 0x68)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar11)));
    F_00c472af(((char *)(gen_frame + 0xc8)),0x20,"dis=%4.1f",GEN_LO32((undefined8)gen_d2bits((double)fVar11)),GEN_HI32((undefined8)gen_d2bits((double)fVar11)));
    pcVar8 = ((char *)(gen_frame + 0xc8));
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    (*(undefined * PTR32 *)(gen_frame + 0x68)) = ((undefined *)GEN_TOP((pcVar8 - (int)(((char *)(gen_frame + 0xc8)) + 1))));
    gen_imp_GetTextExtentPoint32A(param_2,((char *)(gen_frame + 0xc8)),(int)(pcVar8 - (int)(((char *)(gen_frame + 0xc8)) + 1)),&(*(undefined8 *)(gen_frame + 0x5c)));
    gen_imp_TextOutA(param_2,iVar10 - (*(LONG *)((char *)&((*(undefined8 *)(gen_frame + 0x5c))))) / 2,(int)(*(undefined * PTR32 *)(gen_frame + 0x64)) - (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x5c))) + 4))) / 2,((char *)(gen_frame + 0xc8)),(int)(*(undefined * PTR32 *)(gen_frame + 0x68))
            );
    if (((byte)this[0xb0] & 1) != 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x68)) = ((undefined *)GEN_TOP(((*(tagRECT *)(gen_frame + 0xb8)).bottom / 2)));
      gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x54)));
      gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x58)));
      pHVar5 = gen_imp_CreatePen(0,1,0x900000);
      (*(undefined * PTR32 *)(gen_frame + 0x58)) = pHVar5;
      pvVar4 = gen_imp_SelectObject(param_2,pHVar5);
      (*(HGDIOBJ *)(gen_frame + 0x54)) = pvVar4;
      gen_imp_MoveToEx(param_2,(*(tagRECT *)(gen_frame + 0xb8)).right / 2 -
                       (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x60)),
               (int)(*(undefined * PTR32 *)(gen_frame + 0x68)) - (int)((double)*(float *)(this + 0x68) * *(double *)&REFG(double, 0x1132488)),
               (LPPOINT)0x0);
      gen_imp_LineTo(param_2,(*(tagRECT *)(gen_frame + 0xb8)).right / 2,(int)(*(undefined * PTR32 *)(gen_frame + 0x68)));
    }
  }
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x48)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x54)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x50)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x44)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x58)));
  uVar9 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x4c)));
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar9;
}

/* ref: FUN_00d291a0 */
uint F_00d291a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd291a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x290];
  byte * pbVar1;
  int * this_00;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x27c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x280);
  F_00d22580(this,param_1,param_2,param_3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11343dc));
  *(uint *)((int)this + 0xb0) =
       *(uint *)((int)this + 0xb0) ^ ((param_4 & 0xff) << 4 ^ *(uint *)((int)this + 0xb0)) & 0x10;
  if ((char)param_4 == '\0') {
    *(undefined4 * PTR32 *)((int)this + 0x128) = param_1;
  }
  else {
    *(undefined4 * PTR32 *)((int)this + 0x128) = (undefined4 *)((int)this + 0x330);
    puVar4 = param_1;
    puVar5 = (undefined4 *)((int)this + 0x330);
    for (iVar3 = 0x98; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x128);
  if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x4d))) & 1) == 0) {
    F_00d228c0(this);
  }
  *((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x44))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x44))) *
              (float10)*(double *)&REFG(undefined, 0x109cac8))));
  pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0xc)));
  *pbVar1 = *pbVar1 | 0x80;
  *(undefined4 *)((int)this + 0xa0) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x128) + 0x48)));
  F_00d20fe0(this,(uint)(~(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 4))) >> 5) & 1));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar2 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x270);
  }
  F_00d28ab0(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x27c)) ^ (uint)(uint)(gen_frame + 0x280));
  return (uint)this;
}

/* ref: FUN_00d292e0 */
uint F_00d292e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd292e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x290];
  byte * pbVar1;
  int iVar2;
  int * this_00;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x27c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x280);
  F_00d22720(this,param_1,param_2);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11343dc));
  *(undefined * PTR32 *)((int)this + 0x128) = (undefined *)((int)this + 0x330);
  F_00d29aa0((undefined *)((int)this + 0x330));
  iVar2 = *(int *)((int)this + 0x128);
  *(int *)((int)this + 0x18) = iVar2;
  *(float *)(iVar2 + 0x44) =
       ((float)GEN_TOF(((float10)*(float *)(iVar2 + 0x44) * (float10)*(double *)&REFG(undefined, 0x109cac8))));
  pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0xc)));
  *pbVar1 = *pbVar1 | 0x80;
  *(undefined4 *)((int)this + 0xa0) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x128) + 0x48)));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x270);
  }
  F_00d28ab0(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x27c)) ^ (uint)(uint)(gen_frame + 0x280));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf14 */
byte F_00d293d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd293d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
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
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  ((code *)*(gen_code32 *)(*(int *)param_1 + 0x70))(0x406);
  if (((byte)param_1[0xb0] & 4) != 0) {
    return 0;
  }
  bVar3 = F_00d217a0(param_1,param_2);
  if (bVar3 != 0) {
    if (((*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 4))) & 0x80) == 0) &&
       (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc))) + 0x10))))
                          (*((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)))), (char)uVar4 == '\0')) {
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
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)&REFG(undefined, 0x1097254);
    *(float *)(param_1 + 0x8c) = (float)(float10)1;
    F_00d21970(param_1);
    bVar3 = F_00d27f60(param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_2);
    if (bVar3 == 0) {
      F_00d219b0(param_1);
      F_00d22c70(param_1,0);
      return 1;
    }
    if ((*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x4d))) & 1) == 0) {
      this = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
      iVar2 = *(int *)(param_1 + 0x128);
      uVar4 = ((code *)*(gen_code32 *)(*this + 0x18))(this);
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 0x10 + (uVar4 & 0xff) * 4))) *
                       (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))))))))));
      uVar1 = *(ushort *)(iVar2 + 0xe);
      if (uVar1 != 0) {
        fVar9 = F_00d005d0(this,(uint)uVar1);
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar9 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))))))));
      }
      iVar2 = *(int *)(param_1 + 0x128);
      *(undefined * PTR32 *)(param_1 + 0x80) = (*(undefined * PTR32 *)(gen_frame + 0x8));
      if ((*(byte *)(iVar2 + 0xc) & 8) != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)(iVar2 + 0x34);
        *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar2 + 0x34);
      }
      *(undefined * PTR32 *)(param_1 + 0x80) = (*(undefined * PTR32 *)(gen_frame + 0x8));
      if ((((byte)param_1[0xb0] & 0x40) != 0) || (bVar3 = F_00d228c0(param_1), bVar3 != 0)) {
        bVar3 = F_00d00ed0(this,param_1,(uint)(byte)param_1[0x2d],*(undefined4 *)(param_1 + 0x30),
                             ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8))))));
        return bVar3;
      }
    }
    else {
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc))) + 0x98))))
                        (*((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc))));
      F_00d1b9f0(uVar4,GEN_TOF(*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x34)))),((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8))))));
    }
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf15 */
byte F_00d295c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd295c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
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
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  (*(char *)(gen_frame + 0x27)) = '\0';
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar8;
  bVar5 = F_00d21830((undefined *)this);
  if (bVar5 == 0) {
    piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x90))(piVar8)));
    uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0xfc))(piVar6,*(undefined4 *)(this + 0x24));
    if ((char)uVar7 == '\0') goto LAB_00d299bf;
    F_00d2dd80(&(*(undefined4 *)(gen_frame + 0x3c)),*(undefined4 *)(this + 0x24));
    if (((byte)this[0xb0] & 0x80) == 0) {
      bVar5 = F_00cbe970(&(*(undefined4 *)(gen_frame + 0x3c)));
    }
    else {
      bVar5 = F_00cbe940(&(*(undefined4 *)(gen_frame + 0x3c)));
    }
    if (bVar5 != 0) {
      uVar2 = *(undefined4 *)(this + 0x28);
      iVar3 = *piVar6;
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x1097254);
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x1097254);
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)&REFG(undefined, 0x1097254);
      (*(float *)(gen_frame + 0x14)) = (float)(float10)1;
      uVar7 = ((code *)*(gen_code32 *)(iVar3 + 0x3c))
                        (piVar6,((undefined1 *)(gen_frame + 0x28)),*(undefined4 *)(this + 0x24),uVar2,&(*(undefined4 *)(gen_frame + 0x8)),0,0,1);
      F_00cbbdc0(this + 8,uVar7);
      F_00cbbdb0(((undefined1 *)(gen_frame + 0x28)));
      bVar5 = F_00cbc040(this + 8);
      if (bVar5 != 0) {
        iVar3 = *(int *)(this + 0x128);
        (*(char *)(gen_frame + 0x27)) = '\x01';
        if (((*(byte *)(iVar3 + 4) & 0x80) != 0) && ((*(byte *)(iVar3 + 0xc) & 2) != 0)) {
          fVar10 = F_00d23370(this,*(float *)(iVar3 + 0x48));
          *(float *)(this + 0xa0) = (float)fVar10;
        }
        F_00d22bf0(this,0x403);
        F_00cbe3b0(&(*(undefined4 *)(gen_frame + 0x3c)));
        goto LAB_00d296ea;
      }
    }
    F_00cbe3b0(&(*(undefined4 *)(gen_frame + 0x3c)));
  }
  else {
LAB_00d296ea: ;
    bVar5 = F_00cbc040(this + 8);
    if (bVar5 == 0) {
LAB_00d299bf: ;
      *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) | 4;
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return 0;
    }
    uVar7 = F_00d00230(piVar8);
    if (uVar7 == 1) {
      fVar10 = F_00d22df0(((undefined1 *)(gen_frame + 0x28)),this + 0x60,*(float *)(this + 0x80),*(float *)(this + 0x94));
      (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar10)));
      F_00cbc920(this + 8,(float)fVar10);
      F_00cbc4e0(this + 8,((undefined1 *)(gen_frame + 0x28)));
    }
    else {
      (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)&REFG(undefined, 0x1097254);
      (*(undefined4 *)(gen_frame + 0x3c)) = *(undefined4 *)&REFG(undefined, 0x1097254);
      (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)&REFG(undefined, 0x1097254);
      (*(undefined4 *)(gen_frame + 0x44)) = 0;
      F_00d28770(this,&(*(float *)(gen_frame + 0x20)),&(*(int * PTR32 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x38)));
      F_00cbc9e0(this + 8,(*(float *)(gen_frame + 0x20)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x18))))),&(*(undefined4 *)(gen_frame + 0x38)));
      uVar7 = F_00d2e5a0();
      if ((uVar7 == 3) || (uVar7 == 5)) {
        fVar10 = F_00d2edb0(*(float *)(this + 0x80),0,2);
      }
      else {
        fVar10 = (float10)*(float *)(this + 0x80);
      }
      PVar1 = this[0x2c];
      (*(float *)(gen_frame + 0x20)) = (float)fVar10;
      if (((byte)PVar1 & 2) != 0) {
        piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x98))(piVar8)));
        fVar9 = gen_bits2f(((code *)*(gen_code32 *)(*piVar8 + 0xd0))(piVar8));
        iVar3 = *piVar8;
        (*(float *)(gen_frame + 0x1c)) = fVar9;
        extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(iVar3 + 0x50))(piVar8);
        fVar10 = F_00d2bc80((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c))),(float)extraout_ST0);
        (*(float *)(gen_frame + 0x20)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x20)));
        piVar8 = (*(int * PTR32 *)(gen_frame + 0x18));
      }
      F_00cbc920(this + 8,(*(float *)(gen_frame + 0x20)));
    }
    if (((byte)this[0xb0] & 2) == 0) {
      fVar10 = F_00d22f40(this,GEN_TOF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40)))),
                            *((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) >> 2 & 1);
      fVar9 = ((float)GEN_TOF((fVar10 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x38))))));
      (*(float *)(gen_frame + 0x1c)) = fVar9;
      F_00cbc980(this + 8,fVar9);
    }
    PVar1 = this[0x2c];
    (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xc4) * (float10)*(float *)(this + 0x8c))));
    if (((byte)PVar1 & 2) != 0) {
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x98))(piVar8)));
      fVar9 = gen_bits2f(((code *)*(gen_code32 *)(*piVar8 + 0xd0))(piVar8));
      (*(float *)(gen_frame + 0x1c)) = fVar9;
      extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*piVar8 + 0x50))(piVar8);
      fVar10 = F_00d2bc60((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c))),(float)extraout_ST0_00);
      (*(float *)(gen_frame + 0x20)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x20)));
    }
    F_00cbc710(this + 8,(*(float *)(gen_frame + 0x20)));
    if ((*(char *)(gen_frame + 0x27)) != '\0') {
      dVar4 = *(double *)&REFG(undefined, 0x1097260) * 0.0;
      fVar9 = *(float *)(this + 0xbc);
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f((int)dVar4);
      F_00cbddc0(this + 8,fVar9,(uint)&(*(float *)(gen_frame + 0x1c)));
      fVar9 = *(float *)(this + 0xc0);
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f((int)dVar4);
      F_00cbdeb0(this + 8,fVar9,(uint)&(*(float *)(gen_frame + 0x1c)));
      F_00cbc980(this + 8,GEN_TOF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x38)))));
      F_00cbcd10(this + 8,*(float *)(this + 200),*(undefined4 *)(this + 0xcc));
      F_00cbce00(this + 8,(uint)(byte)this[0xe0]);
      if ((*(uint *)(this + 0xb0) & 0x400) != 0) {
        F_00cbcbc0(this + 8);
      }
      if ((*(uint *)(this + 0xb0) & 0x100) == 0) {
        F_00cbd990(this + 8,*(undefined4 *)(this + 0xdc),*(undefined4 *)(this + 0xb8));
      }
      else {
        F_00cbdfe0(this + 8,*(undefined4 *)(this + 0xd4),*(float *)(this + 0xbc),
                     *(float *)(this + 0xd0),*(undefined4 *)(this + 0xdc),
                     *(undefined4 *)(this + 0xb8));
      }
      *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) & 0xfffffeff;
      *(undefined4 *)(this + 0xdc) = 0;
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: FUN_00d299e0 */
unsigned int F_00d299e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd299e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  *param_1 = *(undefined2 *)this;
  param_1[1] = *(undefined2 *)((int)this + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x28);
  param_1[0x18] = *(undefined2 *)((int)this + 0x30);
  param_1[0x19] = *(undefined2 *)((int)this + 0x32);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)((int)this + 0x34);
  iVar2 = 0x20;
  puVar1 = (undefined4 *)(param_1 + 0x1c);
  puVar3 = (undefined4 *)((int)this + 0x40);
  do {
    *puVar1 = *((undefined4 *)GEN_TOP((((int)this - (int)param_1) + (int)puVar1)));
    iVar2 = iVar2 + -1;
    puVar1[1] = puVar3[-1];
    puVar1[2] = *puVar3;
    puVar1 = puVar1 + 3;
    puVar3 = puVar3 + 3;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)((int)this + 0x1b8);
  *(undefined4 *)(param_1 + 0xde) = *(undefined4 *)((int)this + 0x1bc);
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)((int)this + 0x1c0);
  return 0;
}

/* ref: FUN_00d29aa0 */
unsigned int F_00d29aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xd29aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  fVar1 = (float10)1;
  *(undefined4 *)((int)this + 4) = 4;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(float *)((int)this + 0x10) = (float)fVar1;
  *(float *)((int)this + 0x14) = (float)fVar1;
  *(float *)((int)this + 0x18) = (float)fVar1;
  *(float *)((int)this + 0x1c) = (float)fVar1;
  *(undefined2 *)((int)this + 0xe) = 0;
  *(undefined1 *)((int)this + 0xd) = 0;
  *(undefined4 *)this = 0xb0260;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1097254);
  iVar6 = 0x20;
  puVar5 = (undefined4 *)((int)this + 0x68);
  do {
    puVar5[-2] = uVar3;
    iVar6 = iVar6 + -1;
    puVar5[-1] = uVar3;
    *puVar5 = uVar3;
    puVar5[1] = uVar3;
    puVar5[1] = (undefined4)gen_fl2bits((float)fVar1);
    uVar2 = REFG(float, 0x1094880);
    puVar5 = puVar5 + 4;
  } while (iVar6 != 0);
  *(byte *)((int)this + 0x4d) = *(byte *)((int)this + 0x4d) & 0xfe;
  *(undefined4 *)((int)this + 0x20) = uVar2;
  *(undefined1 *)((int)this + 0x4c) = 0;
  uVar4 = REFG(float, 0x10a0d00);
  *(undefined2 *)((int)this + 0x4e) = 0;
  *(undefined4 *)((int)this + 0x24) = uVar4;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  *(undefined4 *)((int)this + 0x40) = uVar3;
  *(undefined4 *)((int)this + 0x48) = uVar3;
  *(float *)((int)this + 0x30) = (float)fVar1;
  *(float *)((int)this + 0x34) = (float)fVar1;
  *(float *)((int)this + 0x38) = (float)fVar1;
  *(float *)((int)this + 0x3c) = (float)fVar1;
  *(float *)((int)this + 0x44) = (float)fVar1;
  *(undefined4 *)((int)this + 0x50) = uVar3;
  return 0;
}

/* ref: FUN_00d29b40 */
uint F_00d29b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd29b40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  int local_8;
  
  F_00d0c080(param_1,param_2);
  puVar3 = (uint *)(param_1 + 0x68);
  local_8 = 0x20;
  puVar2 = (uint *)(param_2 + 0x60);
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
    local_8 = local_8 + -1;
    puVar2 = puVar2 + 4;
  } while (local_8 != 0);
  uVar1 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_2 + 0x20) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x24);
  *(uint *)(param_2 + 0x24) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_2 + 0x28) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_2 + 0x2c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x30);
  *(uint *)(param_2 + 0x30) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x34);
  *(uint *)(param_2 + 0x34) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x38);
  *(uint *)(param_2 + 0x38) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x3c);
  *(uint *)(param_2 + 0x3c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x40);
  *(uint *)(param_2 + 0x40) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x44);
  *(uint *)(param_2 + 0x44) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x48);
  *(uint *)(param_2 + 0x48) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(undefined1 *)(param_2 + 0x4c) = *(undefined1 *)(param_1 + 0x4c);
  *(byte *)(param_2 + 0x4d) =
       *(byte *)(param_2 + 0x4d) ^ (*(byte *)(param_1 + 0x4d) ^ *(byte *)(param_2 + 0x4d)) & 1;
  *(undefined1 *)(param_2 + 0x4e) = *(undefined1 *)(param_1 + 0x4e);
  *(undefined1 *)(param_2 + 0x4f) = 0;
  uVar1 = *(uint *)(param_1 + 0x50);
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(uint *)(param_2 + 0x50) = uVar1;
  *(undefined4 *)(param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf0 */
uint F_00d29ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd29ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11343dc));
  F_00d23680(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf1 */
uint F_00d29d10(unsigned int gen_a0)
{
  GEN_ENTER(0xd29d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
  *(undefined4 *)(this + 300) = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(this + 0x130) = *(undefined4 *)(iVar6 + 0x24);
  *(undefined4 *)(this + 0x134) = *(undefined4 *)(iVar6 + 0x28);
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(iVar6 + 0x2c);
  iVar6 = *(int *)(this + 0x128);
  *(undefined4 *)(this + 0x13c) = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(this + 0x140) = *(undefined4 *)(iVar6 + 0x24);
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(iVar6 + 0x28);
  *(undefined4 *)(this + 0x148) = *(undefined4 *)(iVar6 + 0x2c);
  iVar6 = 0x30;
  do {
    iVar5 = *(int *)(this + 0x128);
    uVar4 = *(undefined4 *)(iVar5 + 8 + iVar6);
    (*(undefined4 *)((char *)&auVar7 + 4)) = uVar4;
    (*(undefined4 *)((char *)&auVar7 + 0)) = *(undefined4 *)(iVar5 + iVar6);
    (*(undefined4 *)((char *)&auVar7 + 8)) = uVar4;
    (*(undefined4 *)((char *)&auVar7 + 12)) = *(undefined4 *)(iVar5 + 0xc + iVar6);
    (*(undefined8 *)((char *)&auVar8 + 8)) = (*(undefined8 *)((char *)&auVar7 + 8));
    (*(undefined4 *)((char *)&auVar8 + 4)) = *(undefined4 *)(iVar5 + 4 + iVar6);
    (*(undefined4 *)((char *)&auVar8 + 0)) = *(undefined4 *)(iVar5 + iVar6);
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
    uVar4 = *(undefined4 *)(iVar5 + 8 + iVar6);
    puVar2 = (undefined4 *)(iVar5 + 0xc + iVar6);
    puVar1 = (undefined4 *)(iVar5 + iVar6);
    puVar3 = (undefined4 *)(iVar5 + 4 + iVar6);
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
uint F_00d29f50(unsigned int gen_a0)
{
  GEN_ENTER(0xd29f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11345ec));
  F_00cccb40((int)this + 0x14c);
  uVar1 = F_00d23680(this);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf2 */
uint F_00d29f70(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xd29f70u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  F_00d211a0(param_1,param_2,param_3,param_4);
  F_00cccbd0(param_1 + 0x14c,param_4);
  F_00cccd90(param_1 + 0x14c,param_3,param_2);
  return REFG(undefined4, 0x11299e4);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf4 */
uint F_00d29fc0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd29fc0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cccd90(param_1 + 0x14c,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf9 */
unsigned int F_00d29fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd29fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
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
  
  F_00d213b0(this,param_1,param_2);
  iVar10 = 0;
  do {
    iVar9 = *(int *)(this + 0x128);
    fVar4 = *(float *)(iVar9 + 0x28 + iVar10);
    fVar5 = *(float *)(iVar9 + 0x2c + iVar10);
    pfVar1 = (float *)(iVar9 + 0x20 + iVar10);
    pfVar2 = (float *)(iVar9 + 0x24 + iVar10);
    fVar6 = param_1[3];
    pfVar3 = (float *)(iVar9 + 0x20 + iVar10);
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
byte F_00d2a0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2a0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this,0x406);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))));
  if ((char)uVar1 == '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x14c) + 8))))(this + 0x14c,param_1);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf15 */
byte F_00d2a100(void)
{
  GEN_ENTER(0xd2a100u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf21 */
byte F_00d2a110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2a110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
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
uint F_00d2a1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2a1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float * pfVar9;
  uint uVar10;
  float * pfVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  
  (*(uint *)(gen_frame + 0x12c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x130);
  iVar8 = *(int *)((int)this + 0x128);
  (*(int *)(gen_frame + 0xc)) = 0;
  if (*(char *)(iVar8 + 0x131) != '\0') {
    fVar15 = *param_1;
    fVar1 = param_1[1];
    fVar2 = param_1[2];
    fVar3 = param_1[3];
    pfVar9 = (float *)(iVar8 + 0x20);
    pfVar11 = ((float *)(gen_frame + 0x28));
    do {
      fVar4 = *pfVar9;
      fVar5 = pfVar9[1];
      fVar6 = pfVar9[2];
      fVar7 = pfVar9[3];
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
      pfVar9 = pfVar9 + 4;
      (*(float *)(gen_frame + 0x10)) = fVar4 - fVar15;
      (*(float *)(gen_frame + 0x14)) = fVar5 - fVar1;
      (*(float *)(gen_frame + 0x18)) = fVar6 - fVar2;
      (*(float *)(gen_frame + 0x1c)) = fVar7 - fVar3;
      *pfVar11 = fVar4 - fVar15;
      pfVar11[1] = fVar5 - fVar1;
      pfVar11[2] = fVar6 - fVar2;
      pfVar11[3] = fVar7 - fVar3;
      pfVar11 = pfVar11 + 4;
    } while ((*(int *)(gen_frame + 0xc)) < (int)(uint)*(byte *)(iVar8 + 0x131));
  }
  iVar12 = 0;
  if (*(byte *)(iVar8 + 0x131) != 1 && -1 < (int)(*(byte *)(iVar8 + 0x131) - 1)) {
    pfVar9 = ((float *)(gen_frame + 0x28));
    do {
      fVar15 = F_010536a0(pfVar9,pfVar9 + 4,&(*(float *)(gen_frame + 0x10)));
      fVar13 = (float10)fVar15;
      fVar14 = (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x134)));
      if (fVar13 <= fVar14 && ((!GEN_ISNAN(fVar14) && !GEN_ISNAN(fVar13)) && fVar14 != fVar13)) {
        uVar10 = 1;
        goto LAB_00d2a30d;
      }
      iVar12 = iVar12 + 1;
      pfVar9 = pfVar9 + 4;
    } while (iVar12 < (int)(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x131))) - 1));
  }
  uVar10 = 0;
LAB_00d2a30d: ;
  F_00c47745((*(uint *)(gen_frame + 0x12c)) ^ (uint)(uint)(gen_frame + 0x130));
  return uVar10;
}

/* ref: FUN_00d2a330 */
uint F_00d2a330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd2a330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float * pfVar8;
  float * pfVar9;
  int iVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  
  (*(uint *)(gen_frame + 0x12c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x130);
  iVar7 = *(int *)((int)this + 0x128);
  (*(float *)(gen_frame + 0x14)) = 0.0;
  if (*(char *)(iVar7 + 0x131) != '\0') {
    fVar15 = *param_1;
    fVar1 = param_1[1];
    fVar2 = param_1[2];
    fVar3 = param_1[3];
    pfVar8 = (float *)(iVar7 + 0x20);
    pfVar9 = ((float *)(gen_frame + 0x28));
    do {
      fVar4 = *pfVar8;
      fVar5 = pfVar8[1];
      fVar14 = pfVar8[2];
      fVar6 = pfVar8[3];
      (*(float *)(gen_frame + 0x14)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 1);
      pfVar8 = pfVar8 + 4;
      (*(float *)(gen_frame + 0x18)) = fVar4 - fVar15;
      *pfVar9 = fVar4 - fVar15;
      (*(float *)(gen_frame + 0x1c)) = fVar5 - fVar1;
      pfVar9[1] = fVar5 - fVar1;
      (*(float *)(gen_frame + 0x20)) = fVar14 - fVar2;
      pfVar9[2] = fVar14 - fVar2;
      (*(float *)(gen_frame + 0x24)) = fVar6 - fVar3;
      pfVar9[3] = fVar6 - fVar3;
      pfVar9 = pfVar9 + 4;
    } while ((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) < (int)(uint)*(byte *)(iVar7 + 0x131));
  }
  (*(float *)(gen_frame + 0x14)) = (float)(float10)0;
  iVar10 = 0;
  (*(float *)(gen_frame + 0x8)) = (float)(float10)0;
  if (*(byte *)(iVar7 + 0x131) != 1 && -1 < (int)(*(byte *)(iVar7 + 0x131) - 1)) {
    do {
      fVar15 = F_010536a0(((float *)(gen_frame + 0x28)) + iVar10 * 4,((undefined1 *)(gen_frame + 0x38)) + iVar10 * 0x10,&(*(float *)(gen_frame + 0x18)));
      fVar12 = (float10)fVar15;
      iVar7 = *(int *)((int)this + 0x128);
      fVar13 = (float10)*(float *)(iVar7 + 0x134);
      if (!(fVar12 <= fVar13) || ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) || fVar13 == fVar12)) {
        bVar11 = GEN_ISNAN((float10)*(float *)(iVar7 + 0x134)) || GEN_ISNAN(fVar12);
        if (bVar11 == (bVar11 || (float10)*(float *)(iVar7 + 0x134) == fVar12)) {
          fVar12 = fVar12 - (float10)*(float *)(iVar7 + 0x134);
        }
        else {
          fVar12 = (float10)0;
        }
      }
      else {
        fVar12 = (float10)*(float *)(iVar7 + 0x134) - fVar12;
      }
      fVar1 = (float)fVar12;
      fVar12 = (float10)fVar1;
      if (iVar10 == 0) {
        *param_3 = (*(float *)(gen_frame + 0x18));
        param_3[1] = (*(float *)(gen_frame + 0x1c));
        param_3[2] = (*(float *)(gen_frame + 0x20));
        param_3[3] = (*(float *)(gen_frame + 0x24));
        (*(float *)(gen_frame + 0x8)) = fVar15;
        (*(float *)(gen_frame + 0x14)) = fVar1;
      }
      else {
        fVar13 = (float10)(*(float *)(gen_frame + 0x14));
        if (fVar12 <= fVar13 && ((!GEN_ISNAN(fVar13) && !GEN_ISNAN(fVar12)) && fVar13 != fVar12)) {
          *param_3 = (*(float *)(gen_frame + 0x18));
          param_3[1] = (*(float *)(gen_frame + 0x1c));
          param_3[2] = (*(float *)(gen_frame + 0x20));
          param_3[3] = (*(float *)(gen_frame + 0x24));
          (*(float *)(gen_frame + 0x8)) = fVar15;
          (*(float *)(gen_frame + 0x14)) = fVar1;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x131))) - 1));
    fVar12 = (float10)(*(float *)(gen_frame + 0x8));
    bVar11 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar12);
    if (bVar11 == (bVar11 || (float10)0 == fVar12)) {
      fVar15 = *param_3;
      fVar1 = param_3[1];
      fVar2 = param_3[2];
      fVar3 = param_3[3];
      fVar4 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x134))) / fVar12)));
      (*(float *)(gen_frame + 0x18)) = fVar15 * fVar4;
      *param_3 = fVar15 * fVar4;
      (*(float *)(gen_frame + 0x1c)) = fVar1 * fVar4;
      param_3[1] = fVar1 * fVar4;
      (*(float *)(gen_frame + 0x20)) = fVar2 * fVar4;
      param_3[2] = fVar2 * fVar4;
      (*(float *)(gen_frame + 0x24)) = fVar3 * fVar4;
      param_3[3] = fVar3 * fVar4;
    }
  }
  fVar15 = param_3[2];
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar5 = *param_1;
  fVar14 = param_3[3] + param_1[3];
  (*(float *)(gen_frame + 0x18)) = fVar1 + fVar5;
  *param_3 = fVar1 + fVar5;
  (*(float *)(gen_frame + 0x1c)) = fVar2 + fVar3;
  param_3[1] = fVar2 + fVar3;
  (*(float *)(gen_frame + 0x20)) = fVar15 + fVar4;
  (*(float *)(gen_frame + 0x24)) = fVar14;
  param_3[2] = fVar15 + fVar4;
  param_3[3] = fVar14;
  F_00c47745((*(uint *)(gen_frame + 0x12c)) ^ (uint)(uint)(gen_frame + 0x130));
  return (uint)gen_fl2bits(fVar14);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf22 */
uint F_00d2a6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd2a6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  
  *param_4 = 0;
  fVar1 = param_2[3];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_1[1];
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  (*(float *)(gen_frame + 0x10)) = *param_1 + *param_2;
  (*(float *)(gen_frame + 0x14)) = fVar4 + fVar5;
  (*(float *)(gen_frame + 0x18)) = fVar2 + fVar6;
  (*(float *)(gen_frame + 0x1c)) = fVar3 + fVar1;
  (*(float *)(gen_frame + 0x0)) = *param_1 + *param_2;
  (*(float *)(gen_frame + 0x4)) = fVar4 + fVar5;
  (*(float *)(gen_frame + 0x8)) = fVar2 + fVar6;
  (*(float *)(gen_frame + 0xc)) = fVar3 + fVar1;
  uVar7 = F_00d2a1a0(this,param_1);
  *(uint *)(this + 0x170) = uVar7;
  uVar7 = F_00d2a1a0(this,&(*(float *)(gen_frame + 0x0)));
  *(uint *)(this + 0x174) = uVar7;
  if (*(int *)(this + 0x170) != 0) {
    if (uVar7 != 0) {
      return uVar7;
    }
    if (*(int *)(this + 0x170) != 0) goto LAB_00d2a7b7;
  }
  if (uVar7 == 0) {
    return 0;
  }
LAB_00d2a7b7: ;
  uVar7 = F_00d2a330(this,param_1,param_2,param_3);
  return uVar7;
}

/* ref: FUN_00d2a7e0 */
float F_00d2a7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2a7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
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
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  iVar8 = *(int *)((int)this + 0x128);
  (*(float *)(gen_frame + 0xc)) = 0.0;
  if (*(char *)(iVar8 + 0x131) != '\0') {
    fVar15 = *param_1;
    fVar1 = param_1[1];
    fVar2 = param_1[2];
    fVar3 = param_1[3];
    pfVar10 = (float *)(iVar8 + 0x20);
    pfVar11 = ((float *)(gen_frame + 0x28));
    do {
      fVar4 = *pfVar10;
      fVar5 = pfVar10[1];
      fVar6 = pfVar10[2];
      fVar7 = pfVar10[3];
      (*(float *)(gen_frame + 0xc)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 1);
      pfVar10 = pfVar10 + 4;
      (*(float *)(gen_frame + 0x10)) = fVar4 - fVar15;
      (*(float *)(gen_frame + 0x14)) = fVar5 - fVar1;
      (*(float *)(gen_frame + 0x18)) = fVar6 - fVar2;
      (*(float *)(gen_frame + 0x1c)) = fVar7 - fVar3;
      *pfVar11 = fVar4 - fVar15;
      pfVar11[1] = fVar5 - fVar1;
      pfVar11[2] = fVar6 - fVar2;
      pfVar11[3] = fVar7 - fVar3;
      pfVar11 = pfVar11 + 4;
    } while ((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) < (int)(uint)*(byte *)(iVar8 + 0x131));
  }
  iVar12 = 0;
  (*(float *)(gen_frame + 0xc)) = (float)(float10)0;
  bVar9 = false;
  if (*(byte *)(iVar8 + 0x131) != 1 && -1 < (int)(*(byte *)(iVar8 + 0x131) - 1)) {
    pfVar10 = ((float *)(gen_frame + 0x28));
    do {
      fVar15 = F_010536a0(pfVar10,pfVar10 + 4,&(*(float *)(gen_frame + 0x10)));
      fVar13 = (float10)fVar15;
      if (bVar9) {
        fVar14 = (float10)(*(float *)(gen_frame + 0xc));
        if (fVar13 <= fVar14 && ((!GEN_ISNAN(fVar14) && !GEN_ISNAN(fVar13)) && fVar14 != fVar13)) {
          (*(float *)(gen_frame + 0xc)) = fVar15;
        }
      }
      else {
        bVar9 = true;
        (*(float *)(gen_frame + 0xc)) = fVar15;
      }
      iVar12 = iVar12 + 1;
      pfVar10 = pfVar10 + 4;
    } while (iVar12 < (int)(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x131))) - 1));
  }
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return (*(float *)(gen_frame + 0xc));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf18 */
uint F_00d2a940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2a940u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x140) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  puVar3 = param_2;
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x140;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf19 */
byte F_00d2a980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd2a980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf20 */
unsigned int F_00d2a990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2a990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf23 */
byte F_00d2a9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd2a9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf24 */
uint F_00d2a9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xd2a9b0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float fVar1;
  uint uVar2;
  float10 fVar3;
  bool bVar4;
  float10 fVar5;
  float10 extraout_ST0;
  float local_8;
  
  fVar3 = (float10)0;
  local_8 = (float)fVar3;
  fVar5 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x138)));
  bVar4 = GEN_ISNAN(fVar3) || GEN_ISNAN(fVar5);
  if (bVar4 == (bVar4 || fVar3 == fVar5)) {
    if (param_5 == 0.0) {
      fVar5 = (float10)param_4;
      if ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar3)) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar3)) || fVar5 == fVar3)) {
        local_8 = ((float)GEN_TOF((fVar5 / (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x138))))));
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
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x14c) + 0x10))))(param_1 + 0x14c);
  uVar2 = *(uint *)(param_1 + 0x128);
  fVar1 = ((float)GEN_TOF(((float10)1 -
                 (float10)(float)(extraout_ST0 * (float10)local_8) *
                 (float10)*(float *)(uVar2 + 0x128))));
  *param_2 = fVar1;
  if ((*(byte *)(uVar2 + 0x130) & 0x10) == 0) {
    *param_3 = fVar1;
    return uVar2;
  }
  *param_3 = ((float)GEN_TOF(((float10)1 -
                    (float10)(float)(extraout_ST0 * (float10)local_8) *
                    (float10)*(float *)(uVar2 + 300))));
  return (uint)param_3;
}

/* ref: FUN_00d2aa90 */
uint F_00d2aa90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2aa90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  uint uVar2;
  float10 fVar3;
  
  if (param_1 == 0) {
    uVar1 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x128) + 0x13e)));
    fVar3 = (float10)1;
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x128) + 0x13c)));
    fVar3 = (float10)0;
  }
  uVar2 = F_00cccd90((int)this + 0x14c,(float)fVar3,(uint)uVar1 * 1000 >> 4);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf25 */
uint F_00d2aad0(unsigned int gen_a0)
{
  GEN_ENTER(0xd2aad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x15c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x160);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x150);
  }
  F_00c47745((*(uint *)(gen_frame + 0x15c)) ^ (uint)(uint)(gen_frame + 0x160));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf27 */
unsigned int F_00d2ab50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2ab50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf29 */
uint F_00d2ab70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2ab70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HWND param_1 = (HWND)gen_a1;
  HDC param_2 = (HDC)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1e0];
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined * pPVar6;
  HGDIOBJ pvVar7;
  undefined * h;
  int * piVar8;
  uint uVar9;
  float * pfVar10;
  char * pcVar11;
  int iVar12;
  float * pfVar13;
  HDC hdc;
  int iVar14;
  
  (*(uint *)(gen_frame + 0x1d8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1dc);
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  (*(HDC *)(gen_frame + 0x40)) = param_2;
  pvVar7 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x2c)) = pvVar7;
  pvVar7 = gen_imp_SelectObject(param_2,pvVar7);
  (*(HGDIOBJ *)(gen_frame + 0x20)) = pvVar7;
  h = gen_imp_CreatePen(0,2,0x8000);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = h;
  pvVar7 = gen_imp_SelectObject(param_2,h);
  (*(HGDIOBJ *)(gen_frame + 0x34)) = pvVar7;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0xa8)));
  (*(int *)(gen_frame + 0x38)) = (*(tagRECT *)(gen_frame + 0xa8)).bottom / 2;
  (*(int *)(gen_frame + 0x28)) = (*(tagRECT *)(gen_frame + 0xa8)).right / 2;
  piVar8 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x98))))
                            (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))))));
  (*(int * PTR32 *)(gen_frame + 0x44)) = piVar8;
  uVar9 = ((code *)*(gen_code32 *)(*piVar8 + 0x5c))(piVar8,((undefined1 *)(gen_frame + 0x58)));
  if ((char)uVar9 != '\0') {
    iVar2 = *(int *)(this + 0x128);
    if (*(byte *)(iVar2 + 0x131) != 0) {
      (*(byte *)(gen_frame + 0x53)) = *(byte *)(iVar2 + 4) >> 2 & 1;
      pfVar13 = ((float *)(gen_frame + 0xb8)) + 1;
      (*(float * PTR32 *)(gen_frame + 0x54)) = (float *)(iVar2 + 0x20);
      (*(uint *)(gen_frame + 0x4c)) = (uint)*(byte *)(iVar2 + 0x131);
      do {
        pfVar10 = (float *)F_00c34320(((undefined1 *)(gen_frame + 0x58)),((undefined1 *)(gen_frame + 0x0)),(*(float * PTR32 *)(gen_frame + 0x54)));
        fVar3 = pfVar10[1];
        pfVar13[-1] = *pfVar10;
        fVar4 = pfVar10[2];
        fVar5 = pfVar10[3];
        *pfVar13 = fVar3;
        pfVar13[1] = fVar4;
        pfVar13[2] = fVar5;
        if ((*(byte *)(gen_frame + 0x53)) == 0) {
          *pfVar13 = (float)(float10)0;
        }
        (*(float * PTR32 *)(gen_frame + 0x54)) = (*(float * PTR32 *)(gen_frame + 0x54)) + 4;
        pfVar13 = pfVar13 + 4;
        uVar9 = (*(uint *)(gen_frame + 0x4c)) - 1;
        (*(uint *)(gen_frame + 0x4c)) = uVar9;
      } while (uVar9 != 0);
    }
    iVar14 = (*(tagRECT *)(gen_frame + 0xa8)).right / 2 - (int)((double)((float *)(gen_frame + 0xb8))[0] * *(double *)&REFG(double, 0x1132488));
    (*(int *)(gen_frame + 0x1c)) = iVar14;
    iVar12 = (*(int *)(gen_frame + 0x38)) - (int)(*(double *)&REFG(double, 0x1132488) * (double)((float *)(gen_frame + 0xb8))[2]);
    (*(uint *)(gen_frame + 0x4c)) = iVar12;
    iVar2 = (int)((double)*((float *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x128) + 0x134))) * *(double *)&REFG(undefined, 0x10947f0)
                 );
    gen_imp_MoveToEx(param_2,iVar14,iVar12,(LPPOINT)0x0);
    gen_imp_Ellipse(param_2,iVar14 - iVar2,(*(uint *)(gen_frame + 0x4c)) - iVar2,iVar2 + iVar14,iVar2 + (*(uint *)(gen_frame + 0x4c)));
    (*(int *)(gen_frame + 0x3c)) = 1;
    hdc = param_2;
    if (1 < *((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x128) + 0x131)))) {
      (*(float * PTR32 *)(gen_frame + 0x54)) = ((float *)(gen_frame + 0xb8)) + 6;
      do {
        iVar14 = (*(int *)(gen_frame + 0x28)) - (int)((double)(*(float * PTR32 *)(gen_frame + 0x54))[-2] * *(double *)&REFG(double, 0x1132488));
        iVar12 = (*(int *)(gen_frame + 0x38)) - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(*(float * PTR32 *)(gen_frame + 0x54)));
        gen_imp_LineTo((*(HDC *)(gen_frame + 0x40)),iVar14,iVar12);
        gen_imp_Ellipse((*(HDC *)(gen_frame + 0x40)),iVar14 - iVar2,iVar12 - iVar2,iVar2 + iVar14,iVar2 + iVar12);
        (*(float * PTR32 *)(gen_frame + 0x54)) = (*(float * PTR32 *)(gen_frame + 0x54)) + 4;
        iVar12 = (*(int *)(gen_frame + 0x3c)) + 1;
        (*(int *)(gen_frame + 0x3c)) = iVar12;
        hdc = (*(HDC *)(gen_frame + 0x40));
        iVar14 = (*(int *)(gen_frame + 0x1c));
      } while (iVar12 < (int)(uint)*((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x128) + 0x131))));
    }
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x44)) + 0x30))((*(int * PTR32 *)(gen_frame + 0x44)),((undefined1 *)(gen_frame + 0x98)));
    pPVar6 = (*(undefined * PTR32 *)(gen_frame + 0x48));
    piVar8 = ((int *)(uintptr_t)gen_fl2bits((float)(F_00d2a7e0((*(undefined * PTR32 *)(gen_frame + 0x48)),((undefined1 *)(gen_frame + 0x98))))));
    (*(int * PTR32 *)(gen_frame + 0x44)) = piVar8;
    ((code *)*(gen_code32 *)(*(int *)pPVar6 + 0x60))(pPVar6,&(*(float *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x18)),piVar8,0);
    F_00c472af(((char *)(gen_frame + 0x1b8)),0x20,&REFG(undefined, 0x1134470),(int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x30))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x30))) >> 0x20));
    pcVar11 = ((char *)(gen_frame + 0x1b8));
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    gen_imp_GetTextExtentPoint32A(hdc,((char *)(gen_frame + 0x1b8)),(int)pcVar11 - (int)(((char *)(gen_frame + 0x1b8)) + 1),&(*(undefined8 *)(gen_frame + 0x10)));
    gen_imp_TextOutA(hdc,iVar14,(*(uint *)(gen_frame + 0x4c)),((char *)(gen_frame + 0x1b8)),(int)pcVar11 - (int)(((char *)(gen_frame + 0x1b8)) + 1));
    gen_imp_SelectObject(hdc,(*(HGDIOBJ *)(gen_frame + 0x34)));
    gen_imp_SelectObject(hdc,(*(HGDIOBJ *)(gen_frame + 0x20)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x24)));
    uVar9 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x2c)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x1d8)) ^ (uint)(uint)(gen_frame + 0x1dc));
  return uVar9;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf30 */
byte F_00d2af10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2af10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined * _File;
  byte bVar5;
  int iVar6;
  
  _File = param_1;
  bVar5 = F_00d21f00((undefined *)this,param_1);
  if (bVar5 == 0) {
    return 0;
  }
  iVar6 = 0;
  param_1 = (undefined *)0x0;
  do {
    iVar1 = *(int *)(this + 0x128);
    dVar2 = (double)*(float *)(iVar6 + 0x28 + iVar1);
    dVar3 = (double)*(float *)(iVar6 + 0x24 + iVar1);
    dVar4 = (double)*(float *)(iVar6 + 0x20 + iVar1);
    F_00c49386(_File,"Position[%d] = %f %f %f\n",param_1,(int)(ulonglong)gen_d2bits(dVar4),
             (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
             (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
             (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    param_1 = (undefined *)((int)param_1 + (1) * 32);
    iVar6 = iVar6 + 0x10;
  } while (iVar6 < 0x100);
  param_1 = (undefined *)0x0;
  iVar6 = 0x120;
  do {
    F_00c49386(_File,"Height[%d] = %f\n",param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))) >> 0x20
                  ));
    param_1 = (undefined *)((int)param_1 + (1) * 32);
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x128);
  F_00c49386(_File,"ObstacleFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x128))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x128))))));
  F_00c49386(_File,"HicutFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 300))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 300))))));
  F_00c49386(_File,"BlockadeFlag = %d\n",*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x130))) & 0xf);
  F_00c49386(_File,"fUseHicutFac = %d\n",*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x130))) >> 4 & 1);
  F_00c49386(_File,"FadeRange = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x138))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x138))))));
  F_00c49386(_File,"VetexCount = %d\n",(uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x131))));
  F_00c49386(_File,"Width = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x134))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x134))))));
  F_00c49386(_File,"[EndOfSoundObject]\n\n");
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf31 */
byte F_00d2b090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2b090u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = "Position";
  pbVar5 = (byte *)param_2;
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
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 2) * 0x10))) = (float)dVar7;
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24 + uVar4 * 0x10))) = (float)dVar7;
          pcVar2 = (char *)F_00d00d00(0,0);
          if (pcVar2 != (char *)0x0) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 0x10))) = (float)dVar7;
            return 1;
          }
        }
      }
    }
  }
  else {
    pcVar2 = "Height";
    pbVar5 = (byte *)param_2;
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
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x120 + uVar4 * 4))) = (float)dVar7;
          return 1;
        }
      }
    }
    else {
      pcVar2 = "ObstacleFac";
      pbVar5 = (byte *)param_2;
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
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x128))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = "HicutFac";
        pbVar5 = (byte *)param_2;
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
          pcVar2 = (char *)F_00d00d00(0,0);
          if (pcVar2 != (char *)0x0) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 300))) = (float)dVar7;
            return 1;
          }
        }
        else {
          pcVar2 = "BlockadeFlag";
          pbVar5 = (byte *)param_2;
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
            pcVar2 = "fUseHicutFac";
            pbVar5 = (byte *)param_2;
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
              pcVar2 = "FadeRange";
              pbVar5 = (byte *)param_2;
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
                pcVar2 = (char *)F_00d00d00(0,0);
                if (pcVar2 != (char *)0x0) {
                  dVar7 = F_00c4acaa(pcVar2);
                  *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x138))) = (float)dVar7;
                  return 1;
                }
              }
              else {
                pcVar2 = "VertexCount";
                pbVar5 = (byte *)param_2;
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
                  pcVar2 = "Width";
                  pbVar5 = (byte *)param_2;
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
                    bVar1 = F_00d22040(param_1,param_2);
                    return bVar1;
                  }
                  pcVar2 = (char *)F_00d00d00(0,0);
                  if (pcVar2 != (char *)0x0) {
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
uint F_00d2b4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2b4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = (undefined4 *)F_00d22da0(this,param_1,0x140);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))));
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x50; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x50);
  }
  F_00d2b9a0(*(undefined4 *)(this + 0x128),(uint)puVar1);
  return (uint)(puVar1 + 0x50);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf28 */
uint F_00d2b530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2b530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar3 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*(int *)(uVar3 + 0xc) + 0x2f8))) != 0) {
    F_00d22b20(this,&(*(undefined2 *)(gen_frame + 0x8)));
    (*(undefined2 *)(gen_frame + 0x8)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0xa)) = 0x100;
    uVar6 = F_00427d90();
    (*(ulonglong *)(gen_frame + 0x10)) = uVar6;
    bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x131)));
    iVar5 = 0;
    (*(byte *)(gen_frame + 0x100)) = bVar1;
    if (bVar1 != 0) {
      puVar2 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x24)));
      puVar4 = ((undefined4 *)(gen_frame + 0x44));
      do {
        iVar5 = iVar5 + 1;
        puVar4[-1] = puVar2[-1];
        *puVar4 = *puVar2;
        puVar4[1] = puVar2[1];
        puVar2 = puVar2 + 4;
        puVar4 = puVar4 + 3;
      } while (iVar5 < (int)(uint)(*(byte *)(gen_frame + 0x100)));
    }
    F_00d2b860(&(*(undefined2 *)(gen_frame + 0x8)),&(*(undefined2 *)(gen_frame + 0x8)));
    uVar3 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))),&(*(undefined2 *)(gen_frame + 0x8)),0x100);
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar3;
}

/* ref: FUN_00d2b610 */
uint F_00d2b610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd2b610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  int * this_00;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x15c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x160);
  F_00d22580(this,param_1,param_2,param_3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11345ec));
  F_00cccb10((int)this + 0x14c,(float)(float10)1);
  *(uint *)((int)this + 0xb0) =
       *(uint *)((int)this + 0xb0) ^ ((param_4 & 0xff) << 4 ^ *(uint *)((int)this + 0xb0)) & 0x10;
  if ((char)param_4 == '\0') {
    *(undefined4 * PTR32 *)((int)this + 0x128) = param_1;
  }
  else {
    *(undefined4 * PTR32 *)((int)this + 0x128) = (undefined4 *)((int)this + 0x180);
    puVar3 = param_1;
    puVar4 = (undefined4 *)((int)this + 0x180);
    for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  F_00d29d10(this);
  F_00d20fe0(this,(uint)(~(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 4))) >> 5) & 1));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x150);
  }
  F_00d2b530(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x15c)) ^ (uint)(uint)(gen_frame + 0x160));
  return (uint)this;
}

/* ref: FUN_00d2b740 */
uint F_00d2b740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2b740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x15c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x160);
  F_00d22720(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11345ec));
  F_00cccb10((int)this + 0x14c,(float)(float10)1);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  *(undefined * PTR32 *)((int)this + 0x128) = (undefined *)((int)this + 0x180);
  F_00d2b900((undefined *)((int)this + 0x180));
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x150);
  }
  F_00d2b530(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x15c)) ^ (uint)(uint)(gen_frame + 0x160));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf3 */
uint F_00d2b810(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2b810u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,(undefined4)gen_fl2bits(param_2),local_c);
  return uVar1;
}

/* ref: FUN_00d2b860 */
unsigned int F_00d2b860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2b860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *param_1 = *(undefined2 *)this;
  param_1[1] = *(undefined2 *)((int)this + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x28);
  param_1[0x18] = *(undefined2 *)((int)this + 0x30);
  param_1[0x19] = *(undefined2 *)((int)this + 0x32);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)((int)this + 0x34);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)((int)this + 0xf8);
  iVar1 = 0x10;
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  puVar3 = (undefined4 *)((int)this + 0x40);
  do {
    *puVar2 = *((undefined4 *)GEN_TOP((((int)this - (int)param_1) + (int)puVar2)));
    iVar1 = iVar1 + -1;
    puVar2[1] = puVar3[-1];
    puVar2[2] = *puVar3;
    puVar2 = puVar2 + 3;
    puVar3 = puVar3 + 3;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00d2b900 */
unsigned int F_00d2b900(unsigned int gen_a0)
{
  GEN_ENTER(0xd2b900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  float * pfVar4;
  int iVar5;
  
  fVar1 = (float10)1;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined2 *)((int)this + 3) = 0x400;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 5) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(float *)((int)this + 0x10) = (float)fVar1;
  *(float *)((int)this + 0x14) = (float)fVar1;
  *(float *)((int)this + 0x18) = (float)fVar1;
  *(float *)((int)this + 0x1c) = (float)fVar1;
  *(undefined2 *)((int)this + 0xe) = 0;
  fVar2 = (float10)0;
  *(undefined2 *)this = 0x140;
  *(undefined1 *)((int)this + 0xd) = 0;
  *(undefined1 *)((int)this + 2) = 10;
  iVar5 = 0x10;
  pfVar4 = (float *)((int)this + 0x28);
  do {
    pfVar4[-2] = (float)fVar2;
    iVar5 = iVar5 + -1;
    pfVar4[-1] = (float)fVar2;
    *pfVar4 = (float)fVar2;
    pfVar4[1] = (float)fVar2;
    pfVar4[1] = (float)fVar1;
    uVar3 = REFG(float, 0x1094880);
    pfVar4 = pfVar4 + 4;
  } while (iVar5 != 0);
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x120) = uVar3;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(float *)((int)this + 0x124) = (float)fVar2;
  *(float *)((int)this + 0x128) = (float)fVar1;
  *(float *)((int)this + 300) = (float)fVar1;
  *(float *)((int)this + 0x134) = (float)fVar2;
  *(float *)((int)this + 0x138) = (float)fVar2;
  return 0;
}

/* ref: FUN_00d2b9a0 */
ushort F_00d2b9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2b9a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  ushort uVar2;
  uint * puVar3;
  uint * puVar4;
  int local_8;
  
  F_00d0c080(param_1,param_2);
  puVar4 = (uint *)(param_1 + 0x28);
  local_8 = 0x10;
  puVar3 = (uint *)(param_2 + 0x20);
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
    local_8 = local_8 + -1;
    puVar3 = puVar3 + 4;
  } while (local_8 != 0);
  uVar1 = *(uint *)(param_1 + 0x120);
  *(uint *)(param_2 + 0x120) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x124);
  *(uint *)(param_2 + 0x124) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x128);
  *(uint *)(param_2 + 0x128) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 300);
  *(uint *)(param_2 + 300) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(undefined1 *)(param_2 + 0x131) = *(undefined1 *)(param_1 + 0x131);
  *(byte *)(param_2 + 0x130) =
       *(byte *)(param_2 + 0x130) ^ (*(byte *)(param_2 + 0x130) ^ *(byte *)(param_1 + 0x130)) & 0xf;
  *(byte *)(param_2 + 0x130) =
       (*(byte *)(param_1 + 0x130) ^ *(byte *)(param_2 + 0x130)) & 0x10 ^ *(byte *)(param_2 + 0x130)
  ;
  uVar1 = *(uint *)(param_1 + 0x134);
  *(uint *)(param_2 + 0x134) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x138);
  *(byte *)(param_2 + 0x130) = *(byte *)(param_2 + 0x130) & 0x1f;
  *(uint *)(param_2 + 0x138) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(undefined2 *)(param_2 + 0x132) = 0;
  *(ushort *)(param_2 + 0x13c) =
       *(ushort *)(param_1 + 0x13c) << 8 | *(ushort *)(param_1 + 0x13c) >> 8;
  uVar2 = *(ushort *)(param_1 + 0x13e) << 8 | *(ushort *)(param_1 + 0x13e) >> 8;
  *(ushort *)(param_2 + 0x13e) = uVar2;
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf0 */
uint F_00d2bb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2bb50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11345ec));
  F_00cccb40(this + 0x14c);
  F_00d23680(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00d2bb90 */
uint F_00d2bb90(unsigned int gen_a0)
{
  GEN_ENTER(0xd2bb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float10 fVar1;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  F_010538c0(this);
  F_010538c0((int)this + 0x48);
  (*(float *)(gen_frame + 0x28)) = (float)(float10)0;
  fVar1 = (float10)1;
  (*(float *)(gen_frame + 0x2c)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x10abe50);
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)&REFG(undefined, 0x113467c);
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10ac1a8);
  (*(undefined4 *)(gen_frame + 0x3c)) = REFG(float, 0x10ac1a8);
  (*(float *)(gen_frame + 0x40)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x44)) = REFG(float, 0x1088068);
  (*(float *)(gen_frame + 0x8)) = (float)(float10)0;
  (*(float *)(gen_frame + 0xc)) = (float)fVar1;
  (*(float *)(gen_frame + 0x14)) = (float)fVar1;
  (*(float *)(gen_frame + 0x1c)) = (float)fVar1;
  (*(float *)(gen_frame + 0x20)) = (float)fVar1;
  (*(float *)(gen_frame + 0x24)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x10abe50);
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x10ac1a8);
  F_010538e0(this,&(*(float *)(gen_frame + 0x28)),4,1);
  F_010538e0((undefined *)((int)this + 0x48),&(*(float *)(gen_frame + 0x8)),4,1);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return (uint)this;
}

/* ref: FUN_00d2bc40 */
unsigned int F_00d2bc40(unsigned int gen_a0)
{
  GEN_ENTER(0xd2bc40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  F_010538d0(in_ecx + 0x48);
  F_010538d0(in_ecx);
  return 0;
}

/* ref: FUN_00d2bc60 */
float10 F_00d2bc60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd2bc60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = F_01053e40(param_1,param_2);
  return fVar1;
}

/* ref: FUN_00d2bc80 */
float10 F_00d2bc80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd2bc80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = F_01053e40(param_1 + 0x48,param_2);
  return fVar1;
}

/* ref: FUN_00d2bca0 */
unsigned int F_00d2bca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2bca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_010538e0(this,param_1,param_2,1);
  return 0;
}

/* ref: FUN_00d2bcc0 */
unsigned int F_00d2bcc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2bcc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_010538e0((undefined *)((int)this + 0x48),param_1,param_2,1);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf5 */
byte F_00d2bcf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2bcf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00d2c710((undefined *)this,param_1);
  ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf6 */
byte F_00d2bd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2bd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00d2c730((undefined *)this,param_1);
  ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf8 */
byte F_00d2bd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2bd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)(this + 0x70) = param_1;
  ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf14 */
byte F_00d2bd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2bd50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if (1 < param_2) {
    return 0;
  }
  piVar1 = (int *)F_00d1d1f0(*(undefined * PTR32 *)(this + 0xc),param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  if ((uVar2 == 3) &&
     (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1,*(undefined4 *)(this + 8)), (char)uVar2 == '\x01'
     )) {
    return 0;
  }
  *(undefined4 *)(this + param_2 * 4 + 0xa0) = param_1;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf18 */
byte F_00d2bdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2bdc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined * pLVar4;
  int iVar5;
  
  iVar5 = 0;
  pLVar4 = this + 0xa0;
  while ((iVar1 = *(int *)pLVar4, iVar1 == 0 ||
         ((iVar1 != param_1 &&
          (((piVar2 = (int *)F_00d1d1f0(*(undefined * PTR32 *)(this + 0xc),iVar1), piVar2 == (int *)0x0 ||
            (uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2), uVar3 != 3)) ||
           (uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2,param_1), (char)uVar3 != '\x01'))))))) {
    iVar5 = iVar5 + 1;
    pLVar4 = pLVar4 + 4;
    if (1 < iVar5) {
      return 0;
    }
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf15 */
uint F_00d2be30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2be30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (1 < param_2) {
    return 0;
  }
  return *(uint *)(in_ecx + 0xa0 + param_2 * 4);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf16 */
byte F_00d2be50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd2be50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xa8) = param_2;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf17 */
byte F_00d2be70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2be70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0xa8);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf20 */
uint F_00d2be90(unsigned int gen_a0)
{
  GEN_ENTER(0xd2be90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  this_00 = (int *)F_00d1b7a0(*(undefined4 *)(this + 0xc));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x40);
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf22 */
uint F_00d2bf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2bf00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00d2c890((undefined *)this,param_1);
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
uint F_00d2bf90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2bf90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float10 fVar1;
  int * this_00;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  F_00d2c8e0(this,param_1,param_2);
  fVar1 = (float10)0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x1134694));
  *(undefined1 *)((int)this + 4) = 3;
  *(float *)((int)this + 0x80) = (float)fVar1;
  *(float *)((int)this + 0x84) = (float)fVar1;
  *(float *)((int)this + 0x88) = (float)fVar1;
  *(float *)((int)this + 0x8c) = (float)fVar1;
  *(float *)((int)this + 0x90) = (float)fVar1;
  *(float *)((int)this + 0x94) = (float)fVar1;
  *(float *)((int)this + 0x98) = (float)fVar1;
  *(float *)((int)this + 0x9c) = (float)fVar1;
  *(byte *)((int)this + 0xac) = *(byte *)((int)this + 0xac) | 1;
  *(float *)((int)this + 0xa8) = (float)fVar1;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  this_00 = (int *)F_00d1b7a0(*(undefined4 *)((int)this + 0xc));
  uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar2 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x40);
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf19 */
byte F_00d2c070(unsigned int gen_a0)
{
  GEN_ENTER(0xd2c070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
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
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  bVar5 = F_00d2c820(this);
  if (bVar5 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = this + 0xa0;
    pLVar8 = this + 0x80;
    (*(int *)(gen_frame + 0x8)) = 0;
    do {
      fVar9 = (float10)0;
      uVar2 = *(undefined4 *)pLVar8;
      *(float *)((int)((float *)(gen_frame + 0x2c)) + (*(int *)(gen_frame + 0x8))) = (float)fVar9;
      uVar3 = *(undefined4 *)(pLVar8 + 4);
      *(float *)((int)((float *)(gen_frame + 0x2c)) + (*(int *)(gen_frame + 0x8)) + 4) = (float)fVar9;
      *(float *)((int)((float *)(gen_frame + 0x2c)) + (*(int *)(gen_frame + 0x8)) + 8) = (float)fVar9;
      *(undefined4 *)((int)((float *)(gen_frame + 0x4c)) + (*(int *)(gen_frame + 0x8))) = uVar2;
      *(float *)((int)((float *)(gen_frame + 0x2c)) + (*(int *)(gen_frame + 0x8)) + 0xc) = (float)fVar9;
      uVar2 = *(undefined4 *)(pLVar8 + 8);
      *(undefined4 *)((int)((float *)(gen_frame + 0x4c)) + (*(int *)(gen_frame + 0x8)) + 4) = uVar3;
      *(float *)((int)((float *)(gen_frame + 0x2c)) + (*(int *)(gen_frame + 0x8))) = (float)(float10)1;
      uVar3 = *(undefined4 *)(pLVar8 + 0xc);
      *(undefined4 *)((int)((float *)(gen_frame + 0x4c)) + (*(int *)(gen_frame + 0x8)) + 8) = uVar2;
      iVar4 = *(int *)(*(undefined * PTR32 *)(gen_frame + 0xc));
      *(undefined4 *)((int)((float *)(gen_frame + 0x4c)) + (*(int *)(gen_frame + 0x8)) + 0xc) = uVar3;
      if ((iVar4 != 0) &&
         (piVar6 = (int *)F_00d1d1f0(*(undefined * PTR32 *)(this + 0xc),iVar4), piVar6 != (int *)0x0)) {
        uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 4))(piVar6);
        if (uVar7 == 3) {
          ((code *)*(gen_code32 *)(*piVar6 + 0x4c))(piVar6);
        }
        uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x10))(piVar6,&(*(float *)(gen_frame + 0x10)));
        if ((char)uVar7 == '\x01') {
          F_00c34180((undefined4 *)((int)((float *)(gen_frame + 0x4c)) + (*(int *)(gen_frame + 0x8))),&(*(float *)(gen_frame + 0x10)));
        }
      }
      (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)(gen_frame + 0xc)) + 4;
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x10;
      pLVar8 = pLVar8 + 0x10;
    } while ((*(int *)(gen_frame + 0x8)) < 0x20);
    fVar10 = ((float *)(gen_frame + 0x4c))[4] - ((float *)(gen_frame + 0x4c))[0];
    fVar11 = ((float *)(gen_frame + 0x4c))[5] - ((float *)(gen_frame + 0x4c))[1];
    fVar12 = ((float *)(gen_frame + 0x4c))[6] - ((float *)(gen_frame + 0x4c))[2];
    fVar13 = (*(float *)(gen_frame + 0x68)) - ((float *)(gen_frame + 0x4c))[3];
    (*(float *)(gen_frame + 0x10)) = fVar10;
    (*(float *)(gen_frame + 0x14)) = fVar11;
    (*(float *)(gen_frame + 0x18)) = fVar12;
    (*(float *)(gen_frame + 0x1c)) = fVar13;
    ((float *)(gen_frame + 0x4c))[4] = fVar10;
    ((float *)(gen_frame + 0x4c))[5] = fVar11;
    ((float *)(gen_frame + 0x4c))[6] = fVar12;
    (*(float *)(gen_frame + 0x68)) = fVar13;
    fVar1 = *(float *)(this + 0xa8);
    fVar10 = fVar10 * fVar1;
    fVar11 = fVar11 * fVar1;
    fVar12 = fVar12 * fVar1;
    fVar13 = fVar13 * fVar1;
    (*(float *)(gen_frame + 0x10)) = fVar10;
    (*(float *)(gen_frame + 0x14)) = fVar11;
    (*(float *)(gen_frame + 0x18)) = fVar12;
    (*(float *)(gen_frame + 0x1c)) = fVar13;
    ((float *)(gen_frame + 0x4c))[4] = fVar10;
    ((float *)(gen_frame + 0x4c))[5] = fVar11;
    ((float *)(gen_frame + 0x4c))[6] = fVar12;
    (*(float *)(gen_frame + 0x68)) = fVar13;
    fVar10 = fVar10 + ((float *)(gen_frame + 0x4c))[0];
    fVar11 = fVar11 + ((float *)(gen_frame + 0x4c))[1];
    fVar12 = fVar12 + ((float *)(gen_frame + 0x4c))[2];
    fVar13 = fVar13 + ((float *)(gen_frame + 0x4c))[3];
    (*(float *)(gen_frame + 0x10)) = fVar10;
    (*(float *)(gen_frame + 0x14)) = fVar11;
    (*(float *)(gen_frame + 0x18)) = fVar12;
    (*(float *)(gen_frame + 0x1c)) = fVar13;
    ((float *)(gen_frame + 0x4c))[4] = fVar10;
    *(float *)(this + 0x10) = fVar10;
    ((float *)(gen_frame + 0x4c))[5] = fVar11;
    *(float *)(this + 0x14) = fVar11;
    ((float *)(gen_frame + 0x4c))[6] = fVar12;
    *(float *)(this + 0x18) = fVar12;
    (*(float *)(gen_frame + 0x68)) = fVar13;
    *(float *)(this + 0x1c) = fVar13;
    F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf21 */
uint F_00d2c280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)F_00d2ca20(this,param_1,0x30);
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
  piVar2 = (int *)F_00d1b7a0(*(undefined4 *)(this + 0xc));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xf4))(piVar2);
  if (uVar3 == 0) {
    F_00d2c340(puVar1,(uint)puVar1);
  }
  return (uint)(puVar1 + 0xc);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf1 */
uint F_00d2c330(void)
{
  GEN_ENTER(0xd2c330u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: FUN_00d2c340 */
byte F_00d2c340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c340u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  uint * puVar4;
  int local_8;
  
  puVar3 = (uint *)(param_1 + 0xc);
  puVar4 = (uint *)(param_2 + 0x20);
  puVar2 = (uint *)(param_2 + 4);
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
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(undefined1 *)(param_2 + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined2 *)(param_2 + 0x2d) = 0;
  *(undefined1 *)(param_2 + 0x2f) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf0 */
uint F_00d2c3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x1134694));
  F_00d2c6d0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf5 */
byte F_00d2c430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00d2c710((undefined *)this,param_1);
  ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf6 */
byte F_00d2c450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00d2c730((undefined *)this,param_1);
  ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf8 */
byte F_00d2c470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)(this + 0x70) = param_1;
  ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf20 */
uint F_00d2c4a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd2c4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  this_00 = (int *)F_00d1b7a0(*(undefined4 *)(this + 0xc));
  uVar1 = 0;
  if (this_00 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
    if ((char)uVar1 != '\0') {
      ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,((undefined1 *)(gen_frame + 0x0)));
      uVar1 = F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x40);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf21 */
uint F_00d2c520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d2ca20(this,param_1,0x30);
  uVar1 = F_00d2c9a0((undefined *)this,uVar1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf22 */
uint F_00d2c540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d2c890((undefined *)this,param_1);
  return uVar1;
}

/* ref: FUN_00d2c550 */
uint F_00d2c550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2c550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  F_00d2c8e0(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x1134704));
  *(undefined1 *)((int)this + 4) = 2;
  this_00 = (int *)F_00d1b7a0(*(undefined4 *)((int)this + 0xc));
  if (this_00 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
    if ((char)uVar1 != '\0') {
      ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,((undefined1 *)(gen_frame + 0x0)));
      F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x40);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf1 */
uint F_00d2c5e0(void)
{
  GEN_ENTER(0xd2c5e0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf0 */
uint F_00d2c5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x1134704));
  F_00d2c6d0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00d2c6d0 */
unsigned int F_00d2c6d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd2c6d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[18])REFP(0x1134784));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf2 */
byte F_00d2c6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c6e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x7c) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x7c) = *(byte *)(in_ecx + 0x7c) ^ bVar1;
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf3 */
byte F_00d2c700(unsigned int gen_a0)
{
  GEN_ENTER(0xd2c700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x7c) & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf5 */
byte F_00d2c710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  this[0x7c] = (undefined1)((byte)this[0x7c] | 2);
  F_004eb4e0(this + 0x30,param_1);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf6 */
byte F_00d2c730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004eb4e0(this + 0x30,param_1);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf7 */
byte F_00d2c750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_004eb4e0(param_1,this + 0x30);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf8 */
byte F_00d2c770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 0x70) = param_2;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf9 */
uint F_00d2c780(unsigned int gen_a0)
{
  GEN_ENTER(0xd2c780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x70);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf10 */
uint F_00d2c790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c790u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x74) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf11 */
uint F_00d2c7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd2c7a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x74);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf12 */
unsigned int F_00d2c7b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd2c7b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x78) = param_2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf13 */
unsigned int F_00d2c7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd2c7c0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf14 */
byte F_00d2c7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2c7d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf15 */
uint F_00d2c7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf16 */
byte F_00d2c7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf17 */
byte F_00d2c800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf18 */
byte F_00d2c810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf19 */
byte F_00d2c820(unsigned int gen_a0)
{
  GEN_ENTER(0xd2c820u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x7c) & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf20 */
uint F_00d2c830(unsigned int gen_a0)
{
  GEN_ENTER(0xd2c830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,((undefined1 *)(gen_frame + 0x0)));
  this_00 = (undefined *)F_00d1b7a0(*(undefined4 *)(this + 0xc));
  uVar1 = F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x40);
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf22 */
uint F_00d2c890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  this[0x7c] = (undefined1)((byte)this[0x7c] ^ (*(byte *)(param_1 + 1) ^ (byte)this[0x7c]) & 1);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  return param_1 + 0x30;
}

/* ref: FUN_00d2c8e0 */
uint F_00d2c8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2c8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x11347d4));
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(byte *)((int)this + 0x7c) = *(byte *)((int)this + 0x7c) | 1;
  *(undefined1 *)((int)this + 4) = 1;
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1097254);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)&REFG(undefined, 0x1097254);
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar1;
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  *(undefined4 *)((int)this + 0x20) = uVar1;
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar1;
  *(undefined4 *)((int)this + 0x2c) = uVar1;
  uVar2 = F_004ec420(((undefined1 *)(gen_frame + 0xc)));
  F_004eb4e0((undefined *)((int)this + 0x30),uVar2);
  *(byte *)((int)this + 0x7c) = *(byte *)((int)this + 0x7c) | 2;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)&REFG(undefined, 0x1097254);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf4 */
byte F_00d2c960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  
  F_004eb600(this + 0x30,((byte *)(gen_frame + 0xc)));
  *(undefined4 *)param_1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 48));
  *(undefined4 *)(param_1 + 4) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 52));
  *(undefined4 *)(param_1 + 8) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 56));
  *(undefined4 *)(param_1 + 0xc) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 60));
  *(undefined4 *)(param_1 + 0xc) = REFG(float, 0x1097250);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf21 */
uint F_00d2c9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
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
  piVar1 = (int *)F_00d1b7a0(*(undefined4 *)(this + 0xc));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xf4))(piVar1);
  if (uVar2 == 0) {
    F_00d2cb60(param_1,(uint)param_1);
  }
  return (uint)(param_1 + 0x30);
}

/* ref: FUN_00d2ca20 */
uint F_00d2ca20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2ca20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort * puVar1;
  int * piVar2;
  uint uVar3;
  
  *param_1 = 5;
  param_1[1] = (short)param_2 + 0x10;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)((int)this + 8);
  piVar2 = (int *)F_00d1b7a0(*(undefined4 *)((int)this + 0xc));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xf4))(piVar2);
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
uint F_00d2cac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2cac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x1134784));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00d2cb00 */
uint F_00d2cb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2cb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  uint uVar1;
  ushort * puVar2;
  
  *param_1 = *(ushort *)((int)(uintptr_t)this) << 8 | *(ushort *)((int)(uintptr_t)this) >> 8;
  param_1[1] = *(ushort *)((int)this + 2) << 8 | *(ushort *)((int)this + 2) >> 8;
  uVar1 = *(uint *)((int)this + 4);
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
uint F_00d2cb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2cb60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_2 + 0x10) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x14);
  *(uint *)(param_2 + 0x14) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x18);
  *(uint *)(param_2 + 0x18) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x1c);
  *(uint *)(param_2 + 0x1c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_2 + 0x20) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x24);
  *(uint *)(param_2 + 0x24) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_2 + 0x28) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_2 + 0x2c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)(param_2 + 4) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 1);
  *(undefined2 *)(param_2 + 2) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf1 */
uint F_00d2cc40(void)
{
  GEN_ENTER(0xd2cc40u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf0 */
uint F_00d2cc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2cc50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x1134784));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00d2cc80 */
unsigned int F_00d2cc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2cc80u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00d2cca0 */
byte F_00d2cca0(void)
{
  GEN_ENTER(0xd2cca0u, 0u, 0u, 0u, 0u);
  return REFG(undefined1, 0x15d9349);
}

/* ref: FUN_00d2ccc0 */
uint F_00d2ccc0(unsigned int gen_a0)
{
  GEN_ENTER(0xd2ccc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d938c) = param_1;
  return param_1;
}

/* ref: FUN_00d2ccd0 */
uint F_00d2ccd0(void)
{
  GEN_ENTER(0xd2ccd0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d934c);
}

/* ref: FUN_00d2cce0 */
uint F_00d2cce0(void)
{
  GEN_ENTER(0xd2cce0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d9350);
}

/* ref: FUN_00d2ccf0 */
uint F_00d2ccf0(void)
{
  GEN_ENTER(0xd2ccf0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d9358);
}

/* ref: FUN_00d2cd00 */
uint F_00d2cd00(void)
{
  GEN_ENTER(0xd2cd00u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d9354);
}

/* ref: FUN_00d2cd10 */
byte F_00d2cd10(unsigned int gen_a0)
{
  GEN_ENTER(0xd2cd10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  REFG(undefined1, 0x15d934a) = (byte)param_1;
  return (byte)param_1;
}

/* ref: FUN_00d2cd50 */
unsigned int F_00d2cd50(unsigned int gen_a0)
{
  GEN_ENTER(0xd2cd50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xd0))))(REFG(int * PTR32, 0x15d934c),param_1);
  }
  return 0;
}

/* ref: FUN_00d2cd90 */
unsigned int F_00d2cd90(unsigned int gen_a0)
{
  GEN_ENTER(0xd2cd90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    if (((char)param_1 != '\0') &&
       (uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x124))))(REFG(int * PTR32, 0x15d934c)), (int)uVar1 < 8)) {
      return 0;
    }
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xd8))))(REFG(int * PTR32, 0x15d934c),param_1);
  }
  if (REFG(int * PTR32, 0x15d9350) != (int *)0x0) {
    if ((char)param_1 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x38))))(REFG(int * PTR32, 0x15d9350),2);
      return 0;
    }
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x38))))(REFG(int * PTR32, 0x15d9350),1);
  }
  return 0;
}

/* ref: FUN_00d2cdf0 */
byte F_00d2cdf0(void)
{
  GEN_ENTER(0xd2cdf0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xdc))))(REFG(int * PTR32, 0x15d934c));
    return (byte)uVar1;
  }
  return 0;
}

/* ref: FUN_00d2ce10 */
unsigned int F_00d2ce10(unsigned int gen_a0)
{
  GEN_ENTER(0xd2ce10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xe0))))(REFG(int * PTR32, 0x15d934c),param_1);
  }
  return 0;
}

/* ref: FUN_00d2cea0 */
unsigned int F_00d2cea0(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2cea0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (REFG(int * PTR32, 0x15d9358) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9358) + 0xbc))))(REFG(int * PTR32, 0x15d9358),(undefined4)gen_fl2bits(param_1),param_2);
  }
  return 0;
}

/* ref: FUN_00d2ced0 */
unsigned int F_00d2ced0(float gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2ced0u, gen_trace_f(gen_a0), gen_a1, gen_a2, 0u);
  float param_1 = (float)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (REFG(int * PTR32, 0x15d9358) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9358) + 0xc4))))
              (REFG(int * PTR32, 0x15d9358),(undefined4)gen_fl2bits(param_1),param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00d2cf00 */
unsigned int F_00d2cf00(float gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd2cf00u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  if (REFG(int * PTR32, 0x15d9358) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9358) + 0xc0))))(REFG(int * PTR32, 0x15d9358));
  }
  return 0;
}

/* ref: FUN_00d2cf40 */
uint F_00d2cf40(unsigned int gen_a0)
{
  GEN_ENTER(0xd2cf40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d935c) = param_1;
  return param_1;
}

/* ref: FUN_00d2cf50 */
uint F_00d2cf50(unsigned int gen_a0)
{
  GEN_ENTER(0xd2cf50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d9360) = param_1;
  return param_1;
}

/* ref: FUN_00d2cf60 */
uint F_00d2cf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2cf60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if (REFG(undefined * PTR32, 0x15d935c) != (code *)0x0) {
    uVar1 = ((code *)REFG(gen_code32, 0x15d935c))(param_1,param_2);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00d2cf80 */
uint F_00d2cf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd2cf80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  if (REFG(undefined * PTR32, 0x15d9360) != (code *)0x0) {
    uVar1 = ((code *)REFG(gen_code32, 0x15d9360))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00d2cff0 */
double F_00d2cff0(void)
{
  GEN_ENTER(0xd2cff0u, 0u, 0u, 0u, 0u);
  return (double)*(float *)&REFG(undefined, 0x1134834);
}

/* ref: FUN_00d2d020 */
uint F_00d2d020(void)
{
  GEN_ENTER(0xd2d020u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x50050];
  char cVar1;
  undefined * pFVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x50048)) = 0xd2d02d;
  (*(uint *)(gen_frame + 0x50048)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  F_00c48350(((char *)(gen_frame + 0x1000c)),0,0x3fffc);
  if (REFG(int * PTR32, 0x15d934c) == (int *)0x0) {
    F_00c4720f(((char *)(gen_frame + 0x1000c)),"Error:LostSoundDriver");
  }
  else {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x128))))(REFG(int * PTR32, 0x15d934c),((char *)(gen_frame + 0x1000c)));
  }
  iVar5 = 0;
  F_00c4720f(((char *)(gen_frame + 0x50008)),"c:\\CdevSoundDebugLog%d.txt",0);
  pFVar2 = F_00c495d8(((char *)(gen_frame + 0x50008)),"r");
  while (pFVar2 != (undefined *)0x0) {
    F_00c49312(pFVar2);
    iVar5 = iVar5 + 1;
    F_00c4720f(((char *)(gen_frame + 0x50008)),"c:\\CdevSoundDebugLog%d.txt",iVar5);
    pFVar2 = F_00c495d8(((char *)(gen_frame + 0x50008)),"r");
  }
  pFVar2 = F_00c495d8(((char *)(gen_frame + 0x50008)),"wb");
  pcVar3 = ((char *)(gen_frame + 0x1000c));
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_00c4922b(((char *)(gen_frame + 0x1000c)),1,(int)pcVar3 - (int)(((char *)(gen_frame + 0x1000c)) + 1),pFVar2);
  uVar4 = F_00c49312(pFVar2);
  F_00c47745((*(uint *)(gen_frame + 0x50048)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar4;
}

/* ref: FUN_00d2d180 */
uint F_00d2d180(unsigned int gen_a0)
{
  GEN_ENTER(0xd2d180u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
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
  if ((REFG(int * PTR32, 0x15d9358) != (int *)0x0) && (REFG(int * PTR32, 0x15d9350) != (int *)0x0)) {
    *(ulonglong *)&REFG(undefined, 0x15d9368) = uVar3;
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9358) + 4))))(REFG(int * PTR32, 0x15d9358),iVar2);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x84))))(REFG(int * PTR32, 0x15d9350),iVar2);
    F_00d1ba20(REFG(int * PTR32, 0x15d9358));
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x88))))(REFG(int * PTR32, 0x15d9350));
    uVar3 = *(ulonglong *)&REFG(undefined, 0x15d9368);
    if (REFG(int * PTR32, 0x15d9354) != (int *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9354) + 0x18))))(REFG(int * PTR32, 0x15d9354),iVar1);
      uVar3 = *(ulonglong *)&REFG(undefined, 0x15d9368);
    }
  }
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    *(ulonglong *)&REFG(undefined, 0x15d9368) = uVar3;
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x24))))(REFG(int * PTR32, 0x15d934c),iVar2);
    uVar3 = *(ulonglong *)&REFG(undefined, 0x15d9368);
  }
  *(ulonglong *)&REFG(undefined, 0x15d9368) = uVar3;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00d2d250 */
unsigned int F_00d2d250(void)
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
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    *(ulonglong *)&REFG(undefined, 0x15d9370) = uVar1;
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x28))))(REFG(int * PTR32, 0x15d934c));
    uVar1 = *(ulonglong *)&REFG(undefined, 0x15d9370);
  }
  *(ulonglong *)&REFG(undefined, 0x15d9370) = uVar1;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2d340 */
uint F_00d2d340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2d340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x10))))(REFG(int * PTR32, 0x15d934c),param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

