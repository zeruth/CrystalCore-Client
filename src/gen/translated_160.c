#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00cd17c0 */
unsigned int F_00cd17c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd17c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x112c1c4));
  F_00cccb40(in_ecx + 0x25);
  F_00cccb40(in_ecx + 0x1c);
  F_00cccb40(in_ecx + 0x13);
  F_00cccb40(in_ecx + 10);
  F_00cccb40(in_ecx + 1);
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf0 */
uint F_00cd1800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112c1c4));
  F_00cccb40(this + 0x94);
  F_00cccb40(this + 0x70);
  F_00cccb40(this + 0x4c);
  F_00cccb40(this + 0x28);
  F_00cccb40(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cd1860 */
uint F_00cd1860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  F_00ce8330(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112c20c));
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c),0xa4,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (this_00 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00ce8520(this_00);
  }
  *(uint *)((int)this + 0xbc) = uVar1;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x10))))(uVar1 + 0x20,(int)this + 0xc0,0x14);
  return (uint)this;
}

/* ref: FUN_00cd1900 */
uint F_00cd1900(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xbc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112c20c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0xbc) = 0;
    *(undefined4 *)((int)this + 0xd4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112c1c4));
  F_00cccb40((int)this + 0x94);
  F_00cccb40((int)this + 0x70);
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::CompressorXA2::vf5 */
uint F_00cd1970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd1970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  float10 fVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  puVar1 = param_1;
  if (-1 < param_2) {
    *(undefined4 * PTR32 *)(this + 0xd4) = param_1;
    *(int *)(this + 0xd8) = param_2;
    ((code *)*(gen_code32 *)*param_1)(param_1,((byte *)(gen_frame + 0xc)));
    fVar2 = (float10)(int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
    if ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) < 0) {
      fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *(float *)(this + 0xb8) = (float)fVar2;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x24))(this)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)puVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::CompressorXA2::vf1 */
unsigned int F_00cd19e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd19e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  if (*(int *)(this + 0xd4) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0xd4);
    if ((char)param_1 != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)(this + 0xd8),0);
      return 0;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(this + 0xd8),0);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::CompressorXA2::vf2 */
byte F_00cd1a20(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)(this + 0xd4);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (iVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xd4) + 0x14))))
              (*(int * PTR32 *)(this + 0xd4),*(undefined4 *)(this + 0xd8),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::CompressorXA2::vf9 */
uint F_00cd1a60(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,*(undefined4 *)(this + 0xd8),this + 0xc0,0x14,0);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::CompressorXA2::vf6 */
uint F_00cd1af0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1af0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xbc);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::CompressorXA2::vf0 */
uint F_00cd1b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cd1900(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cd1b30 */
unsigned int F_00cd1b30(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1b30u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[11])REFP(0x112c27c));
  F_00cccb40(in_ecx + 1);
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StringendoEffectBase::vf0 */
uint F_00cd1b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x112c27c));
  F_00cccb40(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cd1b80 */
uint F_00cd1b80(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  F_00ce8a80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x112c2ac));
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c),0x20084,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (this_00 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00ce8aa0(this_00);
  }
  *(uint *)((int)this + 0x28) = uVar1;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x10))))(uVar1 + 0x20,(int)this + 0x2c,4);
  return (uint)this;
}

/* ref: FUN_00cd1c10 */
uint F_00cd1c10(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x28);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x112c2ac));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x112c27c));
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StringendoEffectXA2::vf5 */
uint F_00cd1c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd1c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  puVar1 = param_1;
  if (-1 < param_2) {
    *(undefined4 * PTR32 *)(this + 0x30) = param_1;
    *(int *)(this + 0x34) = param_2;
    ((code *)*(gen_code32 *)*param_1)(param_1,((undefined1 *)(gen_frame + 0xc)));
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x24))(this)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)puVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StringendoEffectXA2::vf1 */
unsigned int F_00cd1ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  if (*(int *)(this + 0x30) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x30);
    if ((char)param_1 != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)(this + 0x34),0);
      return 0;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(this + 0x34),0);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StringendoEffectXA2::vf2 */
byte F_00cd1cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)(this + 0x30);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (iVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x30) + 0x14))))
              (*(int * PTR32 *)(this + 0x30),*(undefined4 *)(this + 0x34),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StringendoEffectXA2::vf9 */
uint F_00cd1d10(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0x10))))(this + 4);
  piVar1 = *(int * PTR32 *)(this + 0x30);
  *(float *)(this + 0x2c) = (float)((float10)1 / extraout_ST0);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,*(undefined4 *)(this + 0x34),this + 0x2c,4,0);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StringendoEffectXA2::vf6 */
uint F_00cd1d50(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1d50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x28);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StringendoEffectXA2::vf0 */
uint F_00cd1d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x28);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x112c2ac));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x30) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x112c27c));
  F_00cccb40(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cd1dc0 */
unsigned int F_00cd1dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1dc0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cd1df0 */
unsigned int F_00cd1df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  byte bVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  puVar1 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x10) = *param_1;
    *(undefined4 *)((int)this + 0x14) = param_1[1];
    *(undefined4 *)((int)this + 0x18) = param_1[2];
    *(undefined4 *)((int)this + 0x1c) = param_1[3];
    bVar2 = F_00ce9330(param_1);
    if (bVar2 != 0) {
      puVar3 = (undefined4 *)F_00ce9590(param_1,3);
      *(undefined4 *)((int)this + 0x1c8) = *puVar3;
      *(undefined4 *)((int)this + 0x1cc) = puVar3[1];
      *(undefined4 *)((int)this + 0x1d0) = puVar3[2];
      *(undefined4 *)((int)this + 0x1d4) = puVar3[3];
      puVar3 = (undefined4 *)F_00ce95c0(param_1,3);
      param_1 = (undefined4 *)0x0;
      if (*(char *)((int)this + 0x1cc) != '\0') {
        puVar5 = (undefined4 *)((int)this + 0x1d8);
        do {
          param_1 = (undefined4 *)((int)param_1 + 1);
          *puVar5 = *puVar3;
          puVar5[1] = puVar3[1];
          puVar5[2] = puVar3[2];
          puVar5[3] = puVar3[3];
          puVar3 = puVar3 + 4;
          puVar5 = puVar5 + 4;
        } while ((int)param_1 < (int)(uint)*(byte *)((int)this + 0x1cc));
      }
      uVar4 = F_00ce93d0((undefined *)((int)this + 0x1c8));
      F_00c46aa0((int)this + 0x228,puVar1 + (*(byte *)((int)this + 0x1cc) + 2) * 4,uVar4);
      return 0;
    }
    *(undefined1 *)((int)this + 0x1cc) = 1;
    *(float *)((int)this + 0x1dc) = (float)(float10)1;
    *(undefined4 *)((int)this + 0x1c8) = 0;
    *(undefined1 *)((int)this + 0x1d8) = 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf107 */
byte F_00cd1f00(void)
{
  GEN_ENTER(0xcd1f00u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00cd1f10 */
unsigned int F_00cd1f10(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  
  iVar5 = 0;
  (*(char *)(gen_frame + 0x8b)) = '\0';
  if (0 < *(int *)((int)this + 700)) {
    puVar2 = (undefined4 *)((int)this + 0x2c0);
    do {
      bVar1 = F_00cd65b0(*puVar2);
      if (bVar1 != 0) {
        F_00cd8a90((undefined *)*puVar2);
        *puVar2 = 0;
        (*(char *)(gen_frame + 0x8b)) = '\x01';
      }
      iVar5 = iVar5 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar5 < *(int *)((int)this + 700));
    if ((*(char *)(gen_frame + 0x8b)) != '\0') {
      iVar5 = 0;
      if (0 < *(int *)((int)this + 700)) {
        iVar4 = *(int *)((int)this + 700);
        piVar3 = (int *)((int)this + 0x2c0);
        do {
          if (*piVar3 != 0) {
            ((int *)(gen_frame + 0x8))[(int)(iVar5)] = *piVar3;
            iVar5 = iVar5 + 1;
          }
          piVar3 = piVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (0 < iVar5) {
        piVar3 = ((int *)(gen_frame + 0x8));
        piVar6 = (int *)((int)this + 0x2c0);
        for (iVar4 = iVar5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar6 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar6 = piVar6 + 1;
        }
      }
      if (iVar5 < *(int *)((int)this + 700)) {
        puVar2 = (undefined4 *)((int)this + iVar5 * 4 + 0x2c0);
        iVar4 = iVar5;
        do {
          *puVar2 = 0;
          iVar4 = iVar4 + 1;
          puVar2 = puVar2 + 1;
        } while (iVar4 < *(int *)((int)this + 700));
      }
      *(int *)((int)this + 700) = iVar5;
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf10 */
unsigned int F_00cd1fe0(void)
{
  GEN_ENTER(0xcd1fe0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf104 */
uint F_00cd1ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int iVar1;
  undefined * pRVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 700)) {
    pRVar2 = this + 0x2c0;
    do {
      in_EAX = F_00cd8390(*(undefined * PTR32 *)pRVar2);
      iVar1 = iVar1 + 1;
      pRVar2 = pRVar2 + 4;
    } while (iVar1 < *(int *)(this + 700));
  }
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf3 */
byte F_00cd2020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd2020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
      uVar1 = F_00cd9930(*(undefined4 *)pRVar3,param_1,1);
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
uint F_00cd2080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd2080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
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
uint F_00cd20c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd20c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
  return uVar1;
}

/* ref: FUN_00cd20e0 */
byte F_00cd20e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd20e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = *(byte *)this;
  *(byte *)this = '\x01' << ((byte)param_1 & 0x1f) | bVar1;
  return bVar1 == 0;
}

/* ref: FUN_00cd2110 */
byte F_00cd2110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd2110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)this;
  bVar2 = ~('\x01' << ((byte)param_1 & 0x1f)) & bVar1;
  *(byte *)this = bVar2;
  if ((bVar1 != 0) && (bVar2 == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cd2150 */
byte F_00cd2150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd2150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return ((byte)(1 << ((byte)param_1 & 0x1f)) & *(byte *)this) != 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf6 */
uint F_00cd2170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd2170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0,param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf5 */
uint F_00cd2190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd2190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 RVar1;
  
  RVar1 = this[0x130];
  this[0x130] = (undefined1)('\x01' << ((byte)param_1 & 0x1f) | (byte)RVar1);
  if (RVar1 == (undefined1)0x0) {
    *(uint *)(this + 300) = *(uint *)(this + 300) & 2 | param_2 * 4 | 1;
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf8 */
uint F_00cd21e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd21e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,0,param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf7 */
uint F_00cd2200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd2200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 RVar1;
  undefined1 RVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  
  RVar1 = this[0x130];
  RVar2 = (undefined1)(~('\x01' << ((byte)param_1 & 0x1f)) & (byte)RVar1);
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),RVar2);
  this[0x130] = RVar2;
  if ((RVar1 != (undefined1)0x0) && (RVar2 == (undefined1)0x0)) {
    uVar3 = *(uint *)(this + 300) & 2 | param_2 * 4;
    *(uint *)(this + 300) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00cd2330 */
float F_00cd2330(unsigned int gen_a0)
{
  GEN_ENTER(0xcd2330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x370) + 0x10))))((int)this + 0x370);
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x10))))((int)this + 0x20);
  fVar1 = *(float *)((int)this + 0x100);
  fVar2 = *(float *)((int)this + 0x104);
  extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x138) + 0x10))))((int)this + 0x138);
  extraout_ST0_02 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xb0) + 0x10))))((int)this + 0xb0);
  return ((float)GEN_TOF((extraout_ST0_02 *
                (float10)((double)GEN_TOD((extraout_ST0_01 *
                                 (float10)((double)GEN_TOD((((extraout_ST0_00 * (float10)(double)extraout_ST0
                                                    ) * (float10)fVar1) * (float10)fVar2)))))))));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf15 */
uint F_00cd23a0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd23a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  uVar1 = *(uint *)(param_1 + 0xf8) >> 3;
  if (((uVar1 & 1) == 0) && (iVar2 = 0, 0 < *(int *)(param_1 + 700))) {
    puVar3 = (undefined4 *)(param_1 + 0x2c0);
    do {
      uVar1 = F_00cd6630(*puVar3,param_2,param_3,param_4);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 700));
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf17 */
unsigned int F_00cd23f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd23f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  undefined * pRVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x168))(this);
  if ((((char)uVar1 == '\0') && (this[0x340] == (undefined1)0x0)) &&
     (iVar2 = 0, 0 < *(int *)(this + 700))) {
    pRVar3 = this + 0x2c0;
    do {
      F_00cd66f0(*(undefined * PTR32 *)pRVar3,param_1);
      iVar2 = iVar2 + 1;
      pRVar3 = pRVar3 + 4;
    } while (iVar2 < *(int *)(this + 700));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf18 */
unsigned int F_00cd2440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd2440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)param_1;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x168))(this);
  if (((char)uVar2 == '\0') &&
     (uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x164))(this), (char)uVar2 == '\0')) {
    *(undefined4 *)(this + 0xd4) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0xd8) = *(undefined4 *)((int)param_1 + 4);
    *(undefined4 *)(this + 0xdc) = *(undefined4 *)((int)param_1 + 8);
    iVar3 = 0;
    *(undefined4 *)(this + 0xe0) = *(undefined4 *)((int)param_1 + 0xc);
    if (0 < *(int *)(this + 700)) {
      param_1 = this + 0x2c0;
      do {
        F_00cd7670(*(undefined * PTR32 *)param_1,puVar1);
        param_1 = param_1 + 4;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(this + 700));
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf20 */
unsigned int F_00cd2540(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd2540u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = 0;
  *(float *)(param_1 + 0xf4) = param_2;
  if (0 < *(int *)(param_1 + 700)) {
    puVar2 = (undefined4 *)(param_1 + 0x2c0);
    do {
      F_00cd6740(*puVar2,param_2);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 700));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf22 */
uint F_00cd2620(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd2620u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint in_ecx;
  byte bVar2;
  
  in_ecx = ((code *)*(gen_code32 *)(*param_1 + 0xc4))(param_1);
  bVar2 = 0;
  bVar1 = (byte)in_ecx;
  (*(uint *)(gen_frame + 0x7)) = (*(uint *)(gen_frame + 0x7)) & 0xffffff00;
  if (bVar1 != 0) {
    do {
      in_ecx = ((code *)*(gen_code32 *)(*param_1 + 0xcc))(param_1,(*(uint *)(gen_frame + 0x7)));
      if (in_ecx != 0) {
        F_00cd6890(in_ecx,param_2);
      }
      bVar2 = bVar2 + 1;
      (*(uint *)(gen_frame + 0x7)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x7)), 1, 3),bVar2);
    } while (bVar2 < bVar1);
  }
  return in_ecx;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf23 */
unsigned int F_00cd2680(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd2680u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  F_00cccc10(in_ecx + 0x20,param_2);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf24 */
unsigned int F_00cd26a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd26a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  F_00cccc10(in_ecx + 0x44,param_2);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf37 */
unsigned int F_00cd27d0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd27d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x168))(param_1);
  if (((char)uVar1 == '\0') && (iVar2 = 0, 0 < param_1[0xaf])) {
    piVar3 = param_1 + 0xb0;
    do {
      F_00cd7720(*piVar3,param_2,param_3,param_4);
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < param_1[0xaf]);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf66 */
float F_00cd2830(unsigned int gen_a0)
{
  GEN_ENTER(0xcd2830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pRVar1;
  int iVar2;
  float fVar3;
  float local_8;
  
  local_8 = (float)(float10)0;
  iVar2 = 0;
  if (0 < *(int *)(this + 700)) {
    pRVar1 = this + 0x2c0;
    do {
      fVar3 = F_00cd76f0(*(undefined * PTR32 *)pRVar1);
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
float F_00cd2890(unsigned int gen_a0)
{
  GEN_ENTER(0xcd2890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  
  if (0 < *(int *)(this + 700)) {
    fVar1 = F_00cd83d0(*(undefined * PTR32 *)(this + 0x2c0));
    return fVar1;
  }
  return (float)(float10)0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf77 */
byte F_00cd28b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd28b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (byte)(*(uint *)(in_ecx + 0xf8) >> 2) & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf78 */
byte F_00cd28c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd28c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 700) == 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf79 */
byte F_00cd28d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd28d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined * this_00;
  bool bVar2;
  
  bVar2 = true;
  if (((byte)this[300] & 1) == 0) {
    this_00 = (undefined *)F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),(uint)(byte)this[0x11]);
    bVar1 = F_00cbb1b0(this_00);
    F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
    bVar2 = bVar1 != 0;
  }
  return bVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf73 */
byte F_00cd2910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd2910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte * pbVar4;
  undefined * pRVar5;
  int iVar6;
  uint uVar7;
  undefined * pRVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
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
  (*(int *)(gen_frame + 0x8)) = 0;
  if (0 < *(int *)(this + 700)) {
    pRVar8 = this + 0x2c0;
    do {
      bVar1 = F_00cd65b0(*(undefined4 *)pRVar8);
      if (bVar1 != 0) {
LAB_00cd2ac7: ;
        F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
        return 0;
      }
      bVar1 = F_00cd7de0(*(undefined * PTR32 *)pRVar8,&(*(uint *)(gen_frame + 0x30)),1);
      uVar7 = (*(uint *)(gen_frame + 0x30));
      iVar2 = (*(int *)(gen_frame + 0x40));
      while ((*(uint *)(gen_frame + 0x30)) = uVar7, (*(int *)(gen_frame + 0x40)) = iVar2, bVar1 != 0) {
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x34)) + param_2;
        (*(uint *)(gen_frame + 0x34)) = (*(uint *)(gen_frame + 0xc));
        iVar6 = 0;
        (*(byte *)(gen_frame + 0x17)) = 1;
        if (0 < *(int *)(this + 700)) {
          pRVar5 = this + 0x2c0;
          do {
            if (iVar6 != (*(int *)(gen_frame + 0x8))) {
              bVar1 = F_00cd7de0(*(undefined * PTR32 *)pRVar5,((byte *)(gen_frame + 0x18)),1);
              while (bVar1 != 0) {
                uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 4)) + param_2;
                (*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 4)) = uVar3;
                if (((iVar2 == (*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 16))) && (uVar7 <= uVar3)) &&
                   ((uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 0)) <= (*(uint *)(gen_frame + 0xc)))) {
                  (*(byte *)(gen_frame + 0x17)) = (*(byte *)(gen_frame + 0x17)) + 1;
                  if (uVar7 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 0))) {
                    uVar7 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 0));
                  }
                  if (uVar3 < (*(uint *)(gen_frame + 0xc))) {
                    (*(uint *)(gen_frame + 0xc)) = uVar3;
                  }
                  break;
                }
                bVar1 = F_00cd7de0(*(undefined * PTR32 *)pRVar5,((byte *)(gen_frame + 0x18)),0);
              }
            }
            iVar6 = iVar6 + 1;
            pRVar5 = pRVar5 + 4;
          } while (iVar6 < *(int *)(this + 700));
        }
        if ((*(int *)(gen_frame + 0x40)) == 0xc) {
          if (*param_1 < (*(byte *)(gen_frame + 0x17))) {
            *param_1 = (*(byte *)(gen_frame + 0x17));
          }
        }
        else if ((*(int *)(gen_frame + 0x40)) == 6) {
          if (param_1[1] < (*(byte *)(gen_frame + 0x17))) {
            param_1[1] = (*(byte *)(gen_frame + 0x17));
          }
        }
        else {
          if (((*(int *)(gen_frame + 0x40)) != 1) && ((*(int *)(gen_frame + 0x40)) != 0)) goto LAB_00cd2ac7;
          if (param_1[2] < (*(byte *)(gen_frame + 0x17))) {
            param_1[2] = (*(byte *)(gen_frame + 0x17));
          }
        }
        if (-1 < (*(int *)(gen_frame + 0x44))) {
          iVar2 = 0;
          if (param_1[3] != 0) {
            pbVar4 = param_1 + 4;
            do {
              if (*(short *)pbVar4 == (*(int *)(gen_frame + 0x44))) goto LAB_00cd2a7b;
              iVar2 = iVar2 + 1;
              pbVar4 = pbVar4 + 2;
            } while (iVar2 < (int)(uint)param_1[3]);
          }
          *(short *)(param_1 + (uint)param_1[3] * 2 + 4) = (short)(*(int *)(gen_frame + 0x44));
          param_1[3] = param_1[3] + 1;
        }
LAB_00cd2a7b: ;
        bVar1 = F_00cd7de0(*(undefined * PTR32 *)pRVar8,&(*(uint *)(gen_frame + 0x30)),0);
        uVar7 = (*(uint *)(gen_frame + 0x30));
        iVar2 = (*(int *)(gen_frame + 0x40));
      }
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
      pRVar8 = pRVar8 + 4;
    } while ((*(int *)(gen_frame + 0x8)) < *(int *)(this + 700));
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf87 */
byte F_00cd2ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd2ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_00d2ccd0();
  ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,((undefined1 *)(gen_frame + 0xc)),(uint)(byte)this[0x11]);
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xd4))(piVar2);
  if (((char)uVar3 != '\0') && (((byte)this[0x14] & 2) != 0)) {
LAB_00cd2b36: ;
    F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
    return 1;
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xcc))(piVar2);
  if ((char)uVar3 != '\0') {
    bVar1 = F_00cbb420(((undefined1 *)(gen_frame + 0xc)));
    if (bVar1 != 0) goto LAB_00cd2b36;
  }
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf88 */
byte F_00cd2b60(unsigned int gen_a0)
{
  GEN_ENTER(0xcd2b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  undefined * pRVar3;
  
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798));
  }
  if ((REFG(char, 0x15d7798) != '\0') && (iVar2 = 0, this[0x1cc] != (undefined1)0x0)) {
    pRVar3 = this + 0x1d8;
    do {
      if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
        F_00ccaf80(&REFG(char, 0x15d7798));
      }
      bVar1 = F_00cca610(&REFG(char, 0x15d7798),(uint)(byte)*pRVar3);
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
uint F_00cd2bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd2bf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x178) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf30 */
uint F_00cd2c00(unsigned int gen_a0)
{
  GEN_ENTER(0xcd2c00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x178);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf57 */
uint F_00cd2c10(unsigned int gen_a0)
{
  GEN_ENTER(0xcd2c10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((int *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x10))) * 1000 + (uint)*(ushort *)(in_ecx + 0x1c);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf97 */
uint F_00cd2c30(unsigned int gen_a0)
{
  GEN_ENTER(0xcd2c30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x1c)));
}

/* ref: FUN_00cd2c40 */
uint F_00cd2c40(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd2c40u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  float10 fVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar1 = (float10)0;
  fVar3 = (float10)param_2;
  if (!(fVar1 <= fVar3) != (GEN_ISNAN(fVar3) || GEN_ISNAN(fVar1))) {
    fVar3 = (float10)(float)fVar1;
  }
  if (param_3 == 0) {
    F_00cccbd0(param_1 + 0x8c,(float)fVar3);
    return 0;
  }
  uVar2 = F_00cccd90(param_1 + 0x8c,(float)fVar3,param_3);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf33 */
uint F_00cd2fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd2fd0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x20))))(*(int * PTR32 *)(param_1 + 0xc));
  if (uVar2 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*(ushort *)(param_1 + 0x1c);
  }
  uVar5 = 3;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0xc))))(*(int * PTR32 *)(param_1 + 0xc),uVar2);
  uVar2 = F_00ce9640(uVar2,uVar5);
  if (uVar2 == 0) {
    *(undefined1 *)(param_1 + 0x36d) = (undefined1)param_2;
    return 0;
  }
  if (param_2 < *(byte *)(uVar2 + 2)) {
    uVar3 = (uint)*(byte *)(param_1 + 0x36d);
    if ((uVar3 != param_2) || ((char)param_3 != '\0')) {
      if (param_2 < uVar3) {
        iVar4 = *(int *)(uVar2 + 0x1c + uVar3 * 0x10);
      }
      else {
        iVar4 = *(int *)(uVar2 + 0x18 + uVar3 * 0x10);
      }
      if ((char)param_3 != '\0') {
        iVar4 = 0;
      }
      fVar1 = *(float *)(uVar2 + 0x14 + param_2 * 0x10);
      if (iVar4 != 0) {
        uVar2 = F_00cccd90(param_1 + 0x370,fVar1,iVar4);
        *(undefined1 *)(param_1 + 0x36d) = (undefined1)param_2;
        return uVar2;
      }
      F_00cccbd0(param_1 + 0x370,fVar1);
      *(undefined1 *)(param_1 + 0x36d) = (undefined1)param_2;
    }
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf75 */
byte F_00cd30a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd30a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  bVar1 = F_00ce9390(this + 0x10);
  if (bVar1 == 0) {
    return 0;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x20))))(*(int * PTR32 *)(this + 0xc));
  if (uVar2 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*(ushort *)(this + 0x1c);
  }
  uVar4 = 3;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0xc))))(*(int * PTR32 *)(this + 0xc),uVar2);
  puVar3 = (undefined4 *)F_00ce96e0(uVar2,uVar4);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  param_1[3] = puVar3[3];
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf34 */
float F_00cd3110(unsigned int gen_a0)
{
  GEN_ENTER(0xcd3110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pRVar2;
  float10 in_ST0 = 0;
  float fVar3;
  
  if ((this[0x340] != (undefined1)0x0) && (iVar1 = 0, 0 < *(int *)(this + 700))) {
    pRVar2 = this + 0x2c0;
    do {
      fVar3 = F_00cd8d60(*(undefined * PTR32 *)pRVar2,iVar1,0);
      in_ST0 = (float10)fVar3;
      iVar1 = iVar1 + 1;
      pRVar2 = pRVar2 + 4;
    } while (iVar1 < *(int *)(this + 700));
  }
  return (float)in_ST0;
}

/* ref: FUN_00cd3150 */
uint F_00cd3150(unsigned int gen_a0)
{
  GEN_ENTER(0xcd3150u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  bVar2 = GEN_ISNAN((float10)*(float *)(in_ecx + 0x28)) || GEN_ISNAN((float10)*(float *)(in_ecx + 0x24));
  if (bVar2 == (bVar2 || (float10)*(float *)(in_ecx + 0x28) == (float10)*(float *)(in_ecx + 0x24)))
  {
    F_00cccc70(in_ecx + 0x20);
  }
  bVar2 = GEN_ISNAN((float10)*(float *)(in_ecx + 0x4c)) || GEN_ISNAN((float10)*(float *)(in_ecx + 0x48));
  if (bVar2 == (bVar2 || (float10)*(float *)(in_ecx + 0x4c) == (float10)*(float *)(in_ecx + 0x48)))
  {
    F_00cccc70(in_ecx + 0x44);
  }
  bVar2 = GEN_ISNAN((float10)*(float *)(in_ecx + 0x70)) || GEN_ISNAN((float10)*(float *)(in_ecx + 0x6c));
  if (bVar2 == (bVar2 || (float10)*(float *)(in_ecx + 0x70) == (float10)*(float *)(in_ecx + 0x6c)))
  {
    F_00cccc70(in_ecx + 0x68);
  }
  fVar4 = (float10)*(float *)(in_ecx + 0x90);
  fVar5 = (float10)*(float *)(in_ecx + 0x94);
  bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
  bVar3 = bVar2 || fVar5 == fVar4;
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   (ushort)!(fVar4 <= fVar5) << 8 | (ushort)bVar2 << 10 | (ushort)bVar3 << 0xe);
  if (bVar2 == bVar3) {
    F_00cccc70(in_ecx + 0x8c);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00cd31c0 */
unsigned int F_00cd31c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd31c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x18))))((int)this + 0x20);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x44) + 0x18))))((int)this + 0x44);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x68) + 0x18))))((int)this + 0x68);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x8c) + 0x18))))((int)this + 0x8c);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf38 */
uint F_00cd3200(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd3200u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  F_00cccbd0(param_1 + 0xb0,param_2);
  fVar4 = (float10)param_2;
  fVar5 = (float10)param_3;
  bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
  bVar3 = bVar2 || fVar5 == fVar4;
  if (bVar2 == bVar3) {
    uVar1 = F_00cccd90(param_1 + 0xb0,param_3,param_4);
    return uVar1;
  }
  return CONCAT22((short)((uint)in_EAX >> 0x10),
                  (ushort)!(fVar4 <= fVar5) << 8 | (ushort)bVar2 << 10 | (ushort)bVar3 << 0xe);
}

/* ref: FUN_00cd3250 */
uint F_00cd3250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd3250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_esi = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00d2ccf0();
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xcc))(piVar1);
  return uVar2;
}

/* ref: FUN_00cd3290 */
byte F_00cd3290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xcd3290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x40];
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
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(int * PTR32 *)(gen_frame + 0x20)) = this;
  (*(byte *)(gen_frame + 0x27)) = 0;
  if ((*(int *)((int)this + 0x134) != 0) && (iVar7 = 0, *(char *)(param_1 + 3) != '\0')) {
    do {
      uVar6 = (uint)*(byte *)(param_1 + iVar7);
      bVar3 = 0;
      switch((unsigned int)(uintptr_t)(uVar6 & 0xf)) {
      case 0: ;
        bVar3 = 1;
        break;
      case 1: ;
        (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(int * PTR32 *)(gen_frame + 0x20))[0x59] / (float10)*(double *)&REFG(undefined, 0x1097260));
        bVar3 = F_00ce9ad0(uVar6,(int)((double)(float)((float10)(*(int * PTR32 *)(gen_frame + 0x20))[0x59] /
                                                        (float10)*(double *)&REFG(undefined, 0x1097260)) *
                                        *(double *)&REFG(undefined, 0x10912a8)),
                             *(undefined4 *)(param_1 + 4 + iVar7 * 4));
        break;
      case 2: ;
        fVar10 = *(float *)(param_1 + 4 + iVar7 * 4);
        extraout_ST0 = ((gen_fcode *)*(gen_code32 *)((*(int * PTR32 *)(gen_frame + 0x20))[8] + 0x10))((*(int * PTR32 *)(gen_frame + 0x20)) + 8);
        fVar8 = extraout_ST0;
        goto LAB_00cd3339;
      case 3: ;
        piVar4 = (int *)F_00d2ccf0();
        ((code *)*(gen_code32 *)(*piVar4 + 0xcc))
                  (piVar4,*param_6,param_6[1],param_6[2],param_6[3],&(*(float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x4)));
        puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x20)) + 0x19c))((*(int * PTR32 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x28)))));
        piVar4 = (int *)F_00d2ccf0();
        ((code *)*(gen_code32 *)(*piVar4 + 0xcc))
                  (piVar4,*puVar5,puVar5[1],puVar5[2],puVar5[3],&(*(float *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x8)));
        (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0xc)) - (float10)(*(float *)(gen_frame + 0x14)));
        (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)(*(float *)(gen_frame + 0x8)));
        fVar8 = (float10)*(float *)(param_1 + 4 + iVar7 * 4);
        fVar10 = (float)(fVar8 * fVar8);
        (*(float *)(gen_frame + 0x18)) = fVar10;
        fVar8 = (float10)(float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)(*(float *)(gen_frame + 0x8)));
        fVar9 = (float10)(float)((float10)(*(float *)(gen_frame + 0xc)) - (float10)(*(float *)(gen_frame + 0x14)));
        fVar1 = (float)(fVar9 * fVar9 + fVar8 * fVar8);
        (*(float *)(gen_frame + 0x18)) = fVar1;
        fVar8 = (float10)fVar1;
LAB_00cd3339: ;
        bVar3 = F_00ce9bb0((uint)*(byte *)(param_1 + iVar7),(float)fVar8,fVar10);
        break;
      case 4: ;
        bVar3 = F_00ce9ad0(uVar6,param_2,*(undefined4 *)(param_1 + 4 + iVar7 * 4));
        break;
      case 5: ;
        bVar3 = F_00ce9ad0(uVar6,(uint)*(byte *)((int)(*(int * PTR32 *)(gen_frame + 0x20)) + 0x12) - param_3,
                             *(undefined4 *)(param_1 + 4 + iVar7 * 4));
        break;
      case 6: ;
        if (param_4 != 0 || param_5 != 0) {
          bVar3 = F_00ce9ad0(uVar6,(*(int * PTR32 *)(gen_frame + 0x20))[0x60],param_4);
        }
        break;
      default: ;
        bVar3 = 0;
      }
      if (iVar7 == 0) {
        (*(byte *)(gen_frame + 0x27)) = bVar3;
      }
      else {
        cVar2 = *(char *)(param_1 + 1 + iVar7);
        if (cVar2 == '\0') {
          (*(byte *)(gen_frame + 0x27)) = (*(byte *)(gen_frame + 0x27)) & bVar3;
        }
        else if (cVar2 == '\x01') {
          (*(byte *)(gen_frame + 0x27)) = (*(byte *)(gen_frame + 0x27)) | bVar3;
        }
        else {
          (*(byte *)(gen_frame + 0x27)) = bVar3;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)*(byte *)(param_1 + 3));
    if ((*(byte *)(gen_frame + 0x27)) != 0) {
      (*(int * PTR32 *)(gen_frame + 0x20))[0x4d] = (*(int * PTR32 *)(gen_frame + 0x20))[0x4d] + 1;
    }
  }
  bVar3 = (*(byte *)(gen_frame + 0x27));
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return bVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf86 */
uint F_00cd34d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcd34d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x154))(this);
  if ((char)uVar1 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x150))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf62 */
uint F_00cd34f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd34f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(ushort *)(in_ecx + 0x1c);
}

/* ref: FUN_00cd3540 */
byte F_00cd3540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd3540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(byte *)((int)this + 0x368) < 8) {
    *((undefined4 *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0x368) * 4 + 0x348))) = param_1;
    *(char *)((int)this + 0x368) = *(char *)((int)this + 0x368) + '\x01';
    return 1;
  }
  return 0;
}

/* ref: FUN_00cd3570 */
byte F_00cd3570(unsigned int gen_a0)
{
  GEN_ENTER(0xcd3570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte bVar2;
  
  bVar2 = 0;
  if (*(char *)((int)this + 0x368) != '\0') {
    do {
      bVar1 = F_00cc2c00(*(undefined4 *)((int)this + (uint)bVar2 * 4 + 0x348));
      if (bVar1 != 0) {
        return 0;
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 < *(byte *)((int)this + 0x368));
  }
  return 1;
}

/* ref: FUN_00cd3600 */
byte F_00cd3600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd3600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar2 = *(int *)((int)this + iVar3 * 8);
    if (iVar2 < 0) {
      pcVar1 = (char *)((int)this + iVar3 * 8 + 4);
      *pcVar1 = *pcVar1 + (char)param_2;
      *(int *)((int)this + iVar3 * 8) = param_1;
      *(char *)((int)this + 0x80) = *(char *)((int)this + 0x80) + '\x01';
      return 1;
    }
    if (iVar2 == param_1) break;
    iVar3 = iVar3 + 1;
    if (0xf < iVar3) {
      return 0;
    }
  }
  pcVar1 = (char *)((int)this + iVar3 * 8 + 4);
  *pcVar1 = *pcVar1 + (char)param_2;
  return 1;
}

/* ref: FUN_00cd3660 */
byte F_00cd3660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd3660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar2 = 0;
  if (*(byte *)(param_1 + 0x20) != 0) {
    piVar4 = param_1;
    do {
      uVar3 = 0;
      if (*(byte *)((int)this + 0x80) == 0) {
        return 0;
      }
      piVar1 = this;
      while (*piVar1 != *piVar4) {
        uVar3 = uVar3 + 1;
        piVar1 = piVar1 + 2;
        if (*(byte *)((int)this + 0x80) <= uVar3) {
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
unsigned int F_00cd36d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd36d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char * pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (*(char *)(param_1 + 0x80) != '\0') {
    do {
      cVar2 = *(char *)(param_1 + 4 + uVar6 * 8);
      iVar3 = *(int *)(param_1 + uVar6 * 8);
      iVar5 = 0;
      do {
        iVar4 = *(int *)((int)this + iVar5 * 8);
        if (iVar4 < 0) {
          pcVar1 = (char *)((int)this + iVar5 * 8 + 4);
          *pcVar1 = *pcVar1 + cVar2;
          *(int *)((int)this + iVar5 * 8) = iVar3;
          *(char *)((int)this + 0x80) = *(char *)((int)this + 0x80) + '\x01';
          break;
        }
        if (iVar4 == iVar3) {
          pcVar1 = (char *)((int)this + iVar5 * 8 + 4);
          *pcVar1 = *pcVar1 + cVar2;
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x10);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)(param_1 + 0x80));
  }
  return 0;
}

/* ref: FUN_00cd3730 */
byte F_00cd3730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd3730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (*(byte *)((int)this + 0x80) != 0) {
    do {
      if ((param_1 == *(int *)((int)this + uVar1 * 8)) &&
         (*(char *)((int)this + uVar1 * 8 + 4) != '\0')) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(byte *)((int)this + 0x80));
  }
  return 0;
}

/* ref: FUN_00cd3770 */
byte F_00cd3770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd3770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(byte *)(param_1 + 0x80) != 0) {
    do {
      uVar1 = 0;
      if (*(byte *)((int)this + 0x80) != 0) {
        do {
          if ((*(int *)(param_1 + uVar2 * 8) == *(int *)((int)this + uVar1 * 8)) &&
             (*(char *)((int)this + uVar1 * 8 + 4) != '\0')) {
            return 1;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < *(byte *)((int)this + 0x80));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(param_1 + 0x80));
  }
  return 0;
}

/* ref: FUN_00cd37e0 */
uint F_00cd37e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd37e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  bVar3 = 0;
  uVar4 = 0;
  (*(uint *)(gen_frame + 0x8)) = (uint)this & 0xffffff00;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this);
  if ((char)uVar2 != '\0') {
    uVar4 = 0;
    do {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xcc))(this,(*(uint *)(gen_frame + 0x8)));
      if ((uVar2 != 0) && (piVar1 = *(int * PTR32 *)(uVar2 + 4), piVar1 != (int *)0x0)) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        if ((char)uVar2 == '\0') {
          uVar4 = uVar4 + 1;
        }
      }
      bVar3 = bVar3 + 1;
      (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),bVar3);
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this);
    } while (bVar3 < (byte)uVar2);
  }
  return uVar4;
}

/* ref: FUN_00cd38f0 */
uint F_00cd38f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcd38f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  ushort uVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  byte bVar5;
  int iVar6;
  undefined * this_00;
  ushort * puVar7;
  uint uVar8;
  int * piVar9;
  ulonglong uVar10;
  float fVar11;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  *(undefined4 *)((int)this + 8) = param_1;
  (*(int *)(gen_frame + 0x20)) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112c6ec));
  *(int *)((int)this + 0xc) = param_2;
  F_00cccb10((int)this + 0x20,(float)(float10)1);
  F_00cccb10((int)this + 0x44,(float)(float10)1);
  F_00cccb10((int)this + 0x68,(float)(float10)0);
  F_00cccb10((int)this + 0x8c,(float)(float10)0);
  F_00cccb10((int)this + 0xb0,(float)(float10)1);
  fVar4 = (float10)0;
  *(float *)((int)this + 0xd4) = (float)fVar4;
  *(float *)((int)this + 0xd8) = (float)fVar4;
  *(float *)((int)this + 0xdc) = (float)fVar4;
  fVar3 = (float10)1;
  *(float *)((int)this + 0xe0) = (float)fVar3;
  *(float *)((int)this + 0xf0) = (float)fVar3;
  *(float *)((int)this + 0xe4) = (float)fVar4;
  *(float *)((int)this + 0xe8) = (float)fVar4;
  *(float *)((int)this + 0xec) = (float)fVar4;
  *(undefined4 *)((int)this + 0xf4) = GEN_FLT_TO(*(undefined4 *)((int)this + 0xf4), REFG(float, 0x1090708));
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(float *)((int)this + 0x100) = (float)fVar3;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(float *)((int)this + 0x104) = (float)fVar3;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(float *)((int)this + 0x108) = (float)fVar3;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined1 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined1 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  F_00cccb10((int)this + 0x138,(float)fVar3);
  *(float *)((int)this + 0x15c) = (float)(float10)0;
  *(undefined4 *)((int)this + 0x160) = 0xffffffff;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x194));
  *(undefined1 *)((int)this + 0x1ac) = 1;
  *(byte *)((int)this + 0x36c) = *(byte *)((int)this + 0x36c) & 0xfe;
  *(undefined1 *)((int)this + 0x2b8) = (undefined1)param_7;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0xffffffff;
  *(undefined1 *)((int)this + 0x1c4) = (undefined1)param_8;
  *(undefined1 *)((int)this + 0x1c5) = 0;
  *(undefined1 *)((int)this + 0x2b9) = 0;
  *(undefined4 *)((int)this + 700) = 0;
  *(undefined1 *)((int)this + 0x340) = 0;
  *(undefined4 *)((int)this + 0x344) = 0xffffffff;
  *(undefined2 *)((int)this + 0x36a) = 0;
  *(undefined1 *)((int)this + 0x36d) = 0;
  F_00cccb10((int)this + 0x370,(float)(float10)1);
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
  *(float *)((int)this + 0x1b0) = (*(float *)(gen_frame + 0x1c));
  F_00ce1250(*(undefined * PTR32 *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  F_00c48350((undefined *)((int)this + 0x228),0,0x90);
  if ((*(int *)(gen_frame + 0x20)) == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  else {
    F_00cd1df0(this,(*(int *)(gen_frame + 0x20)));
  }
  *(undefined4 *)((int)this + 0x348) = 0xffffffff;
  *(undefined4 *)((int)this + 0x34c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x350) = 0xffffffff;
  *(undefined4 *)((int)this + 0x354) = 0xffffffff;
  *(undefined4 *)((int)this + 0x358) = 0xffffffff;
  *(undefined4 *)((int)this + 0x35c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x360) = 0xffffffff;
  *(undefined4 *)((int)this + 0x364) = 0xffffffff;
  *(undefined1 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  F_00c48350((undefined *)((int)this + 0x2c0),0,0x80);
  iVar6 = 0;
  *(undefined4 *)((int)this + 700) = 0;
  if (0 < param_5) {
    piVar9 = (int *)((int)this + 0x2c0);
    do {
      iVar2 = *(int *)(param_4 + iVar6 * 4);
      if (iVar2 == 0) break;
      *piVar9 = iVar2;
      *(int *)((int)this + 700) = *(int *)((int)this + 700) + 1;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < param_5);
  }
  if ((char)param_6 != '\0') {
    if (1 < *(uint *)(param_2 + 0xc)) {
      *(undefined4 *)((int)this + 0x100) = *(undefined4 *)((int)this + 0x18);
      this_00 = (undefined *)F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),(uint)*(byte *)((int)this + 0x11));
      fVar11 = F_00cbb330(this_00);
      (*(float *)(gen_frame + 0x1c)) = fVar11;
      F_00cccc10((int)this + 0x20,fVar11);
      F_00cbaf10(((undefined1 *)(gen_frame + 0x0)));
      *(undefined1 *)((int)this + 0x128) = 1;
      F_00cd2250(this,(float)(float10)1,0);
    }
    puVar7 = (ushort *)F_00ce9920((*(int *)(gen_frame + 0x20)),0,3);
    if (*(int *)((int)this + 700) == 1) {
      *(uint *)((int)this + 0x344) = (uint)*puVar7;
    }
    (*(int *)(gen_frame + 0x20)) = 0;
    if (0 < *(int *)((int)this + 700)) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)((int)this + 0x2c0);
      do {
        F_00cd8640((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18)),this,(*(int *)(gen_frame + 0x20)));
        uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x10))))
                          (*(int * PTR32 *)((int)this + 0xc),(uint)*puVar7);
        if (uVar8 != 0) {
          F_00cd78c0((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18)),uVar8,(uint)*puVar7);
        }
        if ((puVar7[1] & 0x4000) == 0) {
          uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x14))))
                            (*(int * PTR32 *)((int)this + 0xc),(uint)puVar7[1]);
          (*(uint *)(gen_frame + 0x10)) = uVar8;
          if (uVar8 != 0) {
            piVar9 = (int *)F_00d2ccd0();
            (*(int * PTR32 *)(gen_frame + 0x14)) = piVar9;
            ((code *)*(gen_code32 *)(*piVar9 + 0x4c))(piVar9,((undefined1 *)(gen_frame + 0x0)),(uint)*(byte *)((int)this + 0x11));
            uVar8 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0xd4))((*(int * PTR32 *)(gen_frame + 0x14)));
            if (((char)uVar8 == '\0') || ((*(byte *)((int)this + 0x14) & 2) == 0)) {
              uVar8 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0xcc))((*(int * PTR32 *)(gen_frame + 0x14)));
              if ((char)uVar8 != '\0') {
                bVar5 = F_00cbb420(((undefined1 *)(gen_frame + 0x0)));
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
            F_00cbaf10(((undefined1 *)(gen_frame + 0x0)));
            F_00cd7980((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x10)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c))),param_7);
          }
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 1;
        iVar6 = (*(int *)(gen_frame + 0x20)) + 1;
        puVar7 = puVar7 + 2;
        (*(int *)(gen_frame + 0x20)) = iVar6;
      } while (iVar6 < *(int *)((int)this + 700));
    }
  }
  iVar6 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10)));
  uVar1 = *(ushort *)((int)this + 0x1c);
  (*(undefined1 *)(gen_frame + 0x24)) = *(undefined1 *)((int)this + 0x13);
  uVar10 = F_00427d90();
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(uint *)(gen_frame + 0x34)) = (uint)*(byte *)((int)this + 0x11);
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
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_00cd3df0 */
uint F_00cd3df0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd3df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
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
  
  uVar1 = *(ushort *)((int)this + 0x1c);
  bVar4 = *(byte *)((int)this + 0x11);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112c6ec));
  iVar9 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10)));
  (*(ulonglong *)(gen_frame + 0x1c)) = F_00427d90();
  uVar2 = *(undefined4 *)((int)this + 8);
  (*(int *)(gen_frame + 0x14)) = iVar9 * 1000 + (uint)uVar1;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x10002;
  (*(undefined4 *)(gen_frame + 0x10)) = uVar2;
  (*(uint *)(gen_frame + 0x18)) = (uint)bVar4;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  F_00d2cf60(&(*(undefined4 *)(gen_frame + 0xc)),0x20);
  if (*(int *)((int)this + 0x124) != 0) {
    pvVar5 = (undefined *)F_00d2dd30(((undefined1 *)(gen_frame + 0x2c)),*(int *)((int)this + 0x124));
    F_00cbd280(pvVar5);
    F_00cbbdb0(((undefined1 *)(gen_frame + 0x2c)));
  }
  F_00ce1280(*(undefined * PTR32 *)((int)this + 0xc));
  *(undefined1 *)((int)this + 0x1ac) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x194));
  piVar8 = (int *)((int)this + 0x168);
  iVar9 = 4;
  do {
    if (*piVar8 != 0) {
      piVar3 = (int *)*piVar8;
      if (*(int *)((int)this + 0x10c) == 0) {
        ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,*(undefined4 *)((int)this + 8));
      }
      else {
        ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,*(int *)((int)this + 0x10c));
      }
    }
    piVar8 = piVar8 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  bVar4 = F_00ce9350((int)this + 0x10);
  if ((bVar4 != 0) && (*(char *)((int)this + 0x2b9) != '\0')) {
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x20))))(*(int * PTR32 *)((int)this + 0xc));
    if (uVar6 == 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)*(ushort *)((int)this + 0x1c);
    }
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0xc))))(*(int * PTR32 *)((int)this + 0xc));
    uVar6 = F_00ce95f0(uVar7,uVar6);
    pvVar5 = (undefined *)F_00cbf660((uint)*(byte *)(uVar6 + 1));
    if (pvVar5 != (undefined *)0x0) {
      F_00cc9590(pvVar5,*(undefined4 *)(uVar6 + 4));
    }
  }
  iVar9 = 0;
  if (*(char *)((int)this + 0x1bb) != '\0') {
    psVar10 = (short *)((int)this + 0x1bc);
    do {
      piVar8 = (int *)F_00d2ccd0();
      uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x90))(piVar8,(int)*psVar10);
      if (uVar6 != 0) {
        *(short *)(uVar6 + 0x20) = *(short *)(uVar6 + 0x20) + -1;
      }
      iVar9 = iVar9 + 1;
      psVar10 = psVar10 + 1;
    } while (iVar9 < (int)(uint)*(byte *)((int)this + 0x1bb));
  }
  if (*(char *)((int)this + 0x1ac) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x194));
  }
  F_00cccb40((int)this + 0x370);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x194));
  F_00cccb40((int)this + 0x138);
  F_00cccb40((int)this + 0xb0);
  F_00cccb40((int)this + 0x8c);
  F_00cccb40((int)this + 0x68);
  F_00cccb40((int)this + 0x44);
  F_00cccb40((int)this + 0x20);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[104])REFP(0x112c544));
  return extraout_EAX;
}

/* ref: FUN_00cd3fd0 */
uint F_00cd3fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd3fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar3 = F_00427d90();
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)((int)this + 8);
  (*(uint *)(gen_frame + 0x10)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x10004;
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  (*(ulonglong *)(gen_frame + 0x18)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = param_1;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  uVar1 = F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x8)),0x30);
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0xf8) = 8;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: FUN_00cd4080 */
uint F_00cd4080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd4080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar3 = F_00427d90();
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)((int)this + 8);
  (*(uint *)(gen_frame + 0x10)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x10005;
  (*(ulonglong *)(gen_frame + 0x18)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = param_1;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  uVar1 = F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x8)),0x30);
  *(uint *)((int)this + 0xf8) = *(uint *)((int)this + 0xf8) | 0x10;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: FUN_00cd4120 */
uint F_00cd4120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd4120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar3 = F_00427d90();
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)((int)this + 8);
  (*(uint *)(gen_frame + 0x10)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x10006;
  (*(ulonglong *)(gen_frame + 0x18)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = param_1;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x8)),0x30);
  *(uint *)((int)this + 0xf8) = *(uint *)((int)this + 0xf8) & 0xffffffef;
  uVar3 = F_00427d90();
  *(ulonglong *)((int)this + 0x118) = uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf72 */
uint F_00cd41d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd41d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined * pRVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 700)) {
    pRVar2 = this + 0x2c0;
    do {
      if (*(int *)(*(int *)pRVar2 + 0x1b4) == param_1) {
        return *((uint *)GEN_TOP((*(int *)(this + iVar1 * 4 + 0x2c0) + 0x1c)));
      }
      iVar1 = iVar1 + 1;
      pRVar2 = pRVar2 + 4;
    } while (iVar1 < *(int *)(this + 700));
  }
  return 0xffffffff;
}

/* ref: FUN_00cd4220 */
byte F_00cd4220(unsigned int gen_a0)
{
  GEN_ENTER(0xcd4220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this);
  bVar3 = 0;
  (*(uint *)(gen_frame + 0x7)) = (*(uint *)(gen_frame + 0x7)) & 0xffffff00;
  if ((byte)uVar1 != 0) {
    do {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 200))(this,(*(uint *)(gen_frame + 0x7)));
      if ((uVar2 == 0) || (*(int *)(uVar2 + 0x24) == 0)) {
        return 0;
      }
      bVar3 = bVar3 + 1;
      (*(uint *)(gen_frame + 0x7)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x7)), 1, 3),bVar3);
    } while (bVar3 < (byte)uVar1);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf27 */
unsigned int F_00cd4280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd4280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
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
unsigned int F_00cd42d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd42d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
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
uint F_00cd4320(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd4320u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
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
    F_00cccbd0(in_ecx,param_2);
  }
  else {
    F_00cccd90(in_ecx,param_2,param_3);
  }
  iVar1 = *param_1;
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*in_ecx + 0x10))(in_ecx);
  uVar3 = ((code *)*(gen_code32 *)(iVar1 + 0x1b0))(param_1,(undefined4)gen_fl2bits((float)extraout_ST0));
  return uVar3;
}

/* ref: FUN_00cd4390 */
byte F_00cd4390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd4390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  *(undefined4 *)((int)this + 0x134) = 0;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    if ((*(byte *)((int)this + 0x14) & 0x80) != 0) {
      if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
        F_00ccaf80(&REFG(char, 0x15d7798));
      }
      if (REFG(char, 0x15d7798) != '\0') {
        F_00ccb2c0(((undefined1 *)(gen_frame + 0xc)));
        if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
          F_00ccaf80(&REFG(char, 0x15d7798));
        }
        uVar1 = F_00cca3f0(&REFG(char, 0x15d7798),((undefined1 *)(gen_frame + 0xc)),(uint)*(ushort *)((int)this + 0x16));
        if ((uVar1 != 0) || ((*(short *)(gen_frame + 0x10)) != *(short *)(param_1 + 4))) goto LAB_00cd442b;
        goto LAB_00cd4473;
      }
    }
    uVar1 = F_00ce9a60(*(undefined4 *)((int)this + 0xc),(int)this + 0x10);
    if ((uVar1 == 0) || (*(short *)(param_1 + 4) != *(short *)(uVar1 + 2))) {
      F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
      return 0;
    }
  }
LAB_00cd4473: ;
  if ((*(byte *)(param_1 + 6) & 2) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
    if (uVar1 < *(uint *)(param_1 + 8)) goto LAB_00cd442b;
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
    if (*(uint *)(param_1 + 0xc) < uVar1) goto LAB_00cd442b;
  }
  if ((*(byte *)(param_1 + 6) & 0x10) != 0) {
    if (((param_2 == 0 && param_3 == 0) || (*(int *)((int)this + 0x180) != param_2)) ||
       (*(int *)((int)this + 0x184) != param_3)) {
LAB_00cd442b: ;
      F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
      return 0;
    }
  }
  *(int *)((int)this + 0x134) = *(int *)((int)this + 0x134) + 1;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return 1;
}

/* ref: FUN_00cd44f0 */
byte F_00cd44f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd44f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    if ((*((byte *)GEN_TOP((*(int *)((int)this + 0xc) + 0x48))) & 8) == 0) {
      bVar1 = F_00cd4220(this);
      if (bVar1 == 0) {
        return 0;
      }
      ((code *)*(gen_code32 *)(*(int *)this + 0x124))(this,(int)this + 0x1b8,0);
      return 1;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x1b8) = *param_1;
    *(undefined4 *)((int)this + 0x1bc) = param_1[1];
    *(undefined4 *)((int)this + 0x1c0) = param_1[2];
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf106 */
byte F_00cd4560(unsigned int gen_a0)
{
  GEN_ENTER(0xcd4560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  undefined * pRVar5;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x1ac))(this);
  if ((char)uVar2 == '\0') {
    return 0;
  }
  if ((*((byte *)GEN_TOP((*(int *)(this + 0xc) + 0x48))) & 8) == 0) {
    bVar1 = F_00cd4220(this);
    if (bVar1 == 0) {
      return 0;
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x124))(this,this + 0x1b8,0);
  }
  iVar4 = 0;
  if (this[0x1bb] != (undefined1)0x0) {
    pRVar5 = this + 0x1bc;
    do {
      piVar3 = (int *)F_00d2ccd0();
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x90))(piVar3,(int)*(short *)pRVar5);
      if (uVar2 != 0) {
        *(short *)(uVar2 + 0x20) = *(short *)(uVar2 + 0x20) + 1;
      }
      iVar4 = iVar4 + 1;
      pRVar5 = pRVar5 + 2;
    } while (iVar4 < (int)(uint)(byte)this[0x1bb]);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf4 */
uint F_00cd45f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd45f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
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
      ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,(undefined4)gen_fl2bits((float)fVar1),param_1);
      uVar2 = F_00cd3fd0(this,param_1);
      return uVar2;
    }
  }
  uVar2 = F_00cd3fd0(this,0);
  iVar4 = 0;
  if (0 < *(int *)(this + 700)) {
    pRVar3 = this + 0x2c0;
    do {
      uVar2 = F_00cd87f0(*(undefined * PTR32 *)pRVar3,0);
      iVar4 = iVar4 + 1;
      pRVar3 = pRVar3 + 4;
    } while (iVar4 < *(int *)(this + 700));
  }
  return uVar2;
}

/* ref: FUN_00cd4680 */
uint F_00cd4680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcd4680u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00cd4720 */
uint F_00cd4720(unsigned int gen_a0)
{
  GEN_ENTER(0xcd4720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined * this_00;
  uint uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  if ((*(uint *)((int)this + 0xf8) >> 3 & 1) != 0) {
    return 5;
  }
  uVar6 = F_00427d90();
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
  (*(uint *)(gen_frame + 0x44)) = uVar3;
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
  uVar7 = *(undefined4 *)((int)this + 8);
  (*(uint *)(gen_frame + 0xc)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x10003;
  (*(undefined4 *)(gen_frame + 0x8)) = uVar7;
  (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x44));
  (*(ulonglong *)(gen_frame + 0x14)) = uVar6;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x4)),0x20);
  iVar1 = *(int *)((int)this + 0xf8);
  if (iVar1 == 0) {
    piVar4 = *(int * PTR32 *)((int)this + 0xc);
    if ((*(byte *)(piVar4 + 0x12) & 8) != 0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x88))(piVar4);
      if ((char)uVar3 == '\0') goto LAB_00cd4897;
    }
    piVar4 = (int *)F_00d2ccd0();
    iVar1 = *piVar4;
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
    ((code *)*(gen_code32 *)(iVar1 + 0x4c))(piVar4,((undefined1 *)(gen_frame + 0x34)),uVar3);
    uVar3 = F_00cbaf80(((undefined1 *)(gen_frame + 0x34)));
    if ((int)uVar3 < 1) {
      F_00cc1d20(&(*(undefined1 *)(gen_frame + 0x4b)),"0 < busCtrl.GetMaxInputs()","","RootSound.cpp",0x321,
                   "SQEX::CDev::Engine::Sd::Driver::RootSound::StartCore");
    }
    uVar3 = F_00cbaf80(((undefined1 *)(gen_frame + 0x34)));
    uVar5 = F_00cbafb0(((undefined1 *)(gen_frame + 0x34)));
    if ((int)uVar3 < (int)uVar5) {
      uVar3 = F_00cbb480(((undefined1 *)(gen_frame + 0x34)),1);
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0xd0))(this);
      if (uVar3 != uVar5) {
        uVar7 = 0;
        this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x40))(piVar4,((undefined1 *)(gen_frame + 0x24)),uVar3)));
        F_00cbdbf0(this_00,uVar7);
        F_00cbbdb0(((undefined1 *)(gen_frame + 0x24)));
      }
      *(undefined4 *)((int)this + 0xf8) = 1;
      F_00cbaf10(((undefined1 *)(gen_frame + 0x34)));
      return 1;
    }
    F_00cbaf10(((undefined1 *)(gen_frame + 0x34)));
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
  if ((bVar2 != 0) && (*(char *)((int)this + 0x2b9) == '\0')) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x20))))(*(int * PTR32 *)((int)this + 0xc));
    if (uVar3 == 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)*(ushort *)((int)this + 0x1c);
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0xc))))(*(int * PTR32 *)((int)this + 0xc));
    uVar3 = F_00ce95f0(uVar5,uVar3);
    uVar5 = F_00cbf660((uint)*(byte *)(uVar3 + 1));
    if (uVar5 != 0) {
      *(undefined1 *)((int)this + 0x2b9) = 1;
      F_00cc94b0(uVar5,*(float *)(uVar3 + 8),*(undefined4 *)(uVar3 + 4));
    }
  }
  *(uint *)((int)this + 0xf8) = *(uint *)((int)this + 0xf8) | 4;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf81 */
byte F_00cd4920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd4920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
    ((code *)REFG(gen_code32, 0x15d861c))("(usingExtBanksCount <= sizeof(maxUseVoiceInfo_.useRefBanks)/sizeof(maxUseVoiceInfo_.useRefBanks[0])) && \"External Bank Reference overflow!\""
                    ,"","RootSound.cpp",0x610,
                    "SQEX::CDev::Engine::Sd::Driver::RootSound::IsBelongedToBank");
  }
  uVar5 = 0;
  if (uVar3 != 0) {
    pRVar4 = this + 0x1bc;
    while( true ) {
      piVar1 = (int *)F_00d2ccd0();
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x90))(piVar1,(int)*(short *)pRVar4);
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
uint F_00cd49f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd49f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x240];
  int * piVar1;
  code * pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x238)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x23c);
  uVar4 = F_00cc6440(((int *)(gen_frame + 0x44)),0x10);
  (*(uint *)(gen_frame + 0x88)) = uVar4;
  if (uVar4 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c));
    return 0;
  }
  if (((int *)(gen_frame + 0x44))[0] == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd4680));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x112c4cc),"","RootSound.cpp",0x81e, "SQEX::CDev::Engine::Sd::Driver::RootSound::RequestStopSoundsForVoiceResWait");
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      if ((undefined *)((int *)(gen_frame + 0x44))[(int)(uVar5)] != this) {
        piVar1 = (int *)((int *)(gen_frame + 0x44))[(int)(uVar5)];
        uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xc0))(this);
        (*(byte *)(gen_frame + 0x93)) = (byte)uVar4;
        uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0xc0))(piVar1);
        uVar4 = (*(uint *)(gen_frame + 0x88));
        if ((*(byte *)(gen_frame + 0x93)) < (byte)uVar5) {
          F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c));
          return 2;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  iVar6 = 0;
  ((undefined1 *)(gen_frame + 0x124))[0x7c] = 0;
  do {
    *(undefined4 *)(((undefined1 *)(gen_frame + 0x124)) + iVar6 * 8 + -4) = 0xffffffff;
    ((undefined1 *)(gen_frame + 0x124))[(int)(iVar6 * 8)] = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x10);
  (*(undefined4 *)(gen_frame + 0x1a2)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x1a6)) = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0x1aa)) = 0;
  ((undefined1 *)(gen_frame + 0x1b0))[0x7c] = 0;
  iVar6 = 0;
  do {
    *(undefined4 *)(((undefined1 *)(gen_frame + 0x1b0)) + iVar6 * 8 + -4) = 0xffffffff;
    ((undefined1 *)(gen_frame + 0x1b0))[(int)(iVar6 * 8)] = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x10);
  (*(undefined1 *)(gen_frame + 0x236)) = 0;
  (*(undefined4 *)(gen_frame + 0x22e)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x232)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x8c)) = 0;
  F_00c48350(((int *)(gen_frame + 0x4)),0,0x40);
  (*(uint *)(gen_frame + 0x84)) = 0;
  if (uVar4 != 0) {
    do {
      piVar1 = (int *)((int *)(gen_frame + 0x44))[(int)((*(uint *)(gen_frame + 0x84)))];
      if ((((piVar1 != this) && ((*(byte *)(piVar1 + 0xdb) & 1) == 0)) && ((*(byte *)(piVar1 + 0x3e) & 3) == 0)) && ((REFG(char, 0x134ced0) == '\0' || (uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x150))(piVar1), (char)uVar4 == '\0')))) {
        ((undefined1 *)(gen_frame + 0x98))[0x7c] = 0;
        iVar6 = 0;
        do {
          *(undefined4 *)(((undefined1 *)(gen_frame + 0x98)) + iVar6 * 8 + -4) = 0xffffffff;
          ((undefined1 *)(gen_frame + 0x98))[(int)(iVar6 * 8)] = 0;
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x10);
        (*(undefined1 *)(gen_frame + 0x11e)) = 0;
        (*(undefined4 *)(gen_frame + 0x116)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x11a)) = 0xffffffff;
        bVar3 = F_00cd3770(&(*(undefined4 *)(gen_frame + 0x94)),&(*(undefined4 *)(gen_frame + 0x120)));
        if (bVar3 != 0) {
          F_00cd36d0(&(*(undefined4 *)(gen_frame + 0x1ac)),((undefined4)(uint)(&(*(undefined4 *)(gen_frame + 0x94)))));
          ((int *)(gen_frame + 0x4))[(int)((*(uint *)(gen_frame + 0x8c)))] = (int)piVar1;
          (*(uint *)(gen_frame + 0x8c)) = (*(uint *)(gen_frame + 0x8c)) + 1;
          bVar3 = F_00cd3660(&(*(undefined4 *)(gen_frame + 0x1ac)),&(*(undefined4 *)(gen_frame + 0x120)));
          if (bVar3 != 0) {
            uVar4 = 0;
            if ((*(uint *)(gen_frame + 0x8c)) != 0) {
              do {
                piVar1 = (int *)((int *)(gen_frame + 0x4))[(int)(uVar4)];
                pcVar2 = *(gen_code32 *)(*piVar1 + 0xd0);
                *(byte *)(piVar1 + 0xdb) = *(byte *)(piVar1 + 0xdb) | 1;
                uVar7 = 0;
                uVar5 = (*pcVar2)(piVar1);
                F_00cc2ec0(uVar5,uVar7);
                uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0xd0))(piVar1);
                if (*(byte *)((int)this + 0x368) < 8) {
                  *((uint *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0x368) * 4 + 0x348))) = uVar5;
                  *(char *)((int)this + 0x368) = *(char *)((int)this + 0x368) + '\x01';
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 < (*(uint *)(gen_frame + 0x8c)));
            }
            F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c));
            return 1;
          }
        }
      }
      uVar4 = (*(uint *)(gen_frame + 0x84)) + 1;
      (*(uint *)(gen_frame + 0x84)) = uVar4;
    } while (uVar4 < (*(uint *)(gen_frame + 0x88)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c));
  return 0;
}

/* ref: FUN_00cd4d10 */
byte F_00cd4d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd4d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  
  *(short *)((int)this + 0x36a) = *(short *)((int)this + 0x36a) + (short)param_1;
  if (1000 < *(ushort *)((int)this + 0x36a)) {
    pcVar1 = *(gen_code32 *)(*(int *)this + 0xd0);
    uVar5 = 0;
    *(undefined4 *)((int)this + 0xf8) = 4;
    uVar3 = (*pcVar1)(this);
    F_00cc2ec0(uVar3,uVar5);
    *(undefined2 *)((int)this + 0x36a) = 0;
  }
  bVar4 = 0;
  if (*(char *)((int)this + 0x368) != '\0') {
    do {
      bVar2 = F_00cc2c00(*(undefined4 *)((int)this + (uint)bVar4 * 4 + 0x348));
      if (bVar2 != 0) {
        return 0;
      }
      bVar4 = bVar4 + 1;
    } while (bVar4 < *(byte *)((int)this + 0x368));
  }
  pcVar1 = *(gen_code32 *)(*(int *)this + 4);
  *(undefined4 *)((int)this + 0xf8) = 4;
  (*pcVar1)(this);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf1 */
uint F_00cd4f90(unsigned int gen_a0)
{
  GEN_ENTER(0xcd4f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined * this_00;
  undefined * pRVar2;
  int iVar3;
  float10 extraout_ST0;
  
  F_00cd4720(this);
  if (((byte)this[0xf8] & 1) != 0) {
    return 1;
  }
  if ((*(uint *)(this + 0xf8) >> 1 & 1) != 0) {
    return 2;
  }
  this_00 = (undefined *)F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),(uint)(byte)this[0x11]);
  bVar1 = F_00cbb1b0(this_00);
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  if (bVar1 != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0);
    F_00cd3150(this);
    iVar3 = 0;
    if (0 < *(int *)(this + 700)) {
      pRVar2 = this + 0x2c0;
      do {
        F_00cd6460(*(undefined * PTR32 *)pRVar2);
        iVar3 = iVar3 + 1;
        pRVar2 = pRVar2 + 4;
      } while (iVar3 < *(int *)(this + 700));
    }
  }
  if (-1 < *(int *)(this + 0x160)) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,(undefined4)gen_fl2bits((float)(float10)0),0);
    ((code *)*(gen_code32 *)(*(int *)this + 0x38))
              (this,*(undefined4 *)(this + 0x15c),*(undefined4 *)(this + 0x160));
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x1a0))(this);
  iVar3 = *(int *)this;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 0x10))))(this + 0x8c);
  ((code *)*(gen_code32 *)(iVar3 + 0x1b0))(this,(undefined4)gen_fl2bits((float)extraout_ST0));
  ((code *)*(gen_code32 *)(*(int *)this + 0x84))(this,(uint)(byte)this[0x36d],1);
  if ((this[0x340] != (undefined1)0x0) && (iVar3 = 0, 0 < *(int *)(this + 700))) {
    pRVar2 = this + 0x2c0;
    do {
      F_00cd8d60(*(undefined * PTR32 *)pRVar2,iVar3,1);
      iVar3 = iVar3 + 1;
      pRVar2 = pRVar2 + 4;
    } while (iVar3 < *(int *)(this + 700));
  }
  return 0;
}

/* ref: FUN_00cd58a0 */
uint F_00cd58a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd58a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  longlong uStack_18;
  
  uStack_18 = CONCAT44(param_2,param_1);
  *(int *)this = (int)((ulonglong)(uStack_18 * 300000) / 1000000);
  return (uint)this;
}

/* ref: FUN_00cd58e0 */
uint F_00cd58e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd58e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(int *)this = *(int *)this + *param_1;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ISound::vf0 */
uint F_00cd5910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[104])REFP(0x112c544));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cd5950 */
byte F_00cd5950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5950u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x22) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00cd5a20 */
uint F_00cd5a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5a20u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (uint)((*(uint *)((*(int *)&gen_args[0]) + 0xf8) & (*(uint *)&gen_args[1])) != 0);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf41 */
uint F_00cd5a40(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5a40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 0x11);
}

/* ref: FUN_00cd5aa0 */
byte F_00cd5aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5aa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x36c) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x36c) = *(byte *)(in_ecx + 0x36c) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00cd5ad0 */
uint F_00cd5ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcd5ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined1 *)((int)this + 0x20) = (undefined1)param_7;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x21) = 0;
  *(undefined2 *)((int)this + 0x22) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: FUN_00cd5b20 */
uint F_00cd5b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, float gen_a8)
{
  GEN_ENTER(0xcd5b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
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
uint F_00cd5ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf11 */
unsigned int F_00cd5bd0(void)
{
  GEN_ENTER(0xcd5bd0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf83 */
byte F_00cd5be0(void)
{
  GEN_ENTER(0xcd5be0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf82 */
byte F_00cd5bf0(void)
{
  GEN_ENTER(0xcd5bf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf68 */
float F_00cd5c00(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  
  fVar1 = F_00cccde0(this + 0x20);
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf49 */
byte F_00cd5c10(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5c10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 700);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf53 */
uint F_00cd5c20(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5c20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x344);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf54 */
uint F_00cd5c30(void)
{
  GEN_ENTER(0xcd5c30u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf55 */
uint F_00cd5c40(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5c40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xf8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf74 */
byte F_00cd5c50(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5c50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x1c4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf42 */
byte F_00cd5c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5c60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(byte *)(in_ecx + 0x1d8 + (uint)(byte)param_2 * 0x10);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf43 */
float10 F_00cd5c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5c80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (float10)*(float *)(in_ecx + 0x1dc + (uint)(byte)param_2 * 0x10);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf44 */
byte F_00cd5ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5ca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x1cc);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf64 */
float10 F_00cd5cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5cb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0xf4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf45 */
uint F_00cd5cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5cc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 0x228);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf46 */
uint F_00cd5cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5cd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x228;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf47 */
uint F_00cd5ce0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 700) == 1) {
    uVar1 = F_00cd7c60(*(undefined * PTR32 *)(this + 0x2c0));
    return uVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf48 */
byte F_00cd5d00(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5d00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x12);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf52 */
uint F_00cd5d10(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5d10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf80 */
byte F_00cd5d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5d20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 8) == param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf56 */
uint F_00cd5d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5d40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x164);
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf31 */
uint F_00cd5d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5d60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10c) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf84 */
byte F_00cd5d70(void)
{
  GEN_ENTER(0xcd5d70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf85 */
uint F_00cd5d80(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5d80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14) & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf58 */
uint F_00cd5d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcd5d90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 0x10))))
                    (this + 0x8c,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf105 */
unsigned int F_00cd5db0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5db0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x340) = 1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf59 */
uint F_00cd5dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5dc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 0x13);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf89 */
uint F_00cd5dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5dd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (((*(byte *)(in_ecx + 0x14) & 4) != 0) && (*(char *)(in_ecx + 0x128) == '\0')) {
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf90 */
uint F_00cd5df0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5df0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14) >> 3 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf91 */
uint F_00cd5e00(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5e00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14) >> 6 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf92 */
uint F_00cd5e10(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5e10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14) >> 5 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf93 */
uint F_00cd5e20(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5e20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14) >> 9 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf13 */
byte F_00cd5e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5e30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x128) = (byte)param_2;
  return (byte)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf94 */
unsigned int F_00cd5e40(void)
{
  GEN_ENTER(0xcd5e40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf60 */
uint F_00cd5e50(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 700) != 1) {
    return 0;
  }
  if (*((int *)GEN_TOP((*(int *)(this + 0x2c0) + 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x2c0) + 4)));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1);
    return (int)(char)uVar2;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf61 */
uint F_00cd5e90(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5e90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x14)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf63 */
uint F_00cd5ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *param_1 = *(undefined4 *)(this + 0xd4);
  param_1[1] = *(undefined4 *)(this + 0xd8);
  uVar1 = *(undefined4 *)(this + 0xe0);
  param_1[2] = *(undefined4 *)(this + 0xdc);
  param_1[3] = uVar1;
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf95 */
float F_00cd5ed0(void)
{
  GEN_ENTER(0xcd5ed0u, 0u, 0u, 0u, 0u);
  return REFG(float, 0x1090708);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf65 */
byte F_00cd5ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5ee0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2b8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf16 */
uint F_00cd5ef0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd5ef0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cccd90(param_1 + 0x138,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf69 */
uint F_00cd5f10(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5f10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x120);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf35 */
uint F_00cd5f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5f20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x124) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf36 */
uint F_00cd5f30(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5f30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x124);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf96 */
uint F_00cd5f40(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5f40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf71 */
uint F_00cd5f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcd5f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 700) != 1) {
    return 0xffffffff;
  }
  if (*((int *)GEN_TOP((*(int *)(this + 0x2c0) + 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x2c0) + 4)));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xbc))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf39 */
uint F_00cd5f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd5f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 0x180) = param_1;
  *(undefined4 *)(this + 0x184) = param_2;
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf70 */
uint F_00cd5fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return *(uint *)(this + 0x180);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf100 */
uint F_00cd5fb0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5fb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 0x1e);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf101 */
byte F_00cd5fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf40 */
uint F_00cd5fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5fd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xfc) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf76 */
byte F_00cd5fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd5fe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x1c5);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf102 */
uint F_00cd5ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd5ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 0xe4) = *param_1;
  *(undefined4 *)(this + 0xe8) = param_1[1];
  *(undefined4 *)(this + 0xec) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)(this + 0xf0) = uVar1;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf103 */
uint F_00cd6020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *param_1 = *(undefined4 *)(this + 0xe4);
  param_1[1] = *(undefined4 *)(this + 0xe8);
  uVar1 = *(undefined4 *)(this + 0xf0);
  param_1[2] = *(undefined4 *)(this + 0xec);
  param_1[3] = uVar1;
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf98 */
uint F_00cd6050(unsigned int gen_a0)
{
  GEN_ENTER(0xcd6050u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1b0);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf99 */
uint F_00cd6060(unsigned int gen_a0)
{
  GEN_ENTER(0xcd6060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1b4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf0 */
uint F_00cd6070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cd3df0(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf51 */
uint F_00cd60a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd60a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (*(int *)(this + 700) <= (int)(param_1 & 0xff)) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd4680));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("trackIndex < trackCount_",&REFG(undefined1, 0x107fc63),
                    "d:\\ffxiv\\trunk\\prog\\externals\\cdev_sd\\sd\\cdev\\engine\\sd\\driver\\RootSound.h"
                    ,0x105,"SQEX::CDev::Engine::Sd::Driver::RootSound::GetTrack");
  }
  return *((uint *)GEN_TOP((this + (param_1 & 0xff) * 4 + 0x2c0)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf50 */
uint F_00cd6100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (*(int *)(this + 700) <= (int)(param_1 & 0xff)) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd4680));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("trackIndex < trackCount_",&REFG(undefined1, 0x107fc63),
                    "d:\\ffxiv\\trunk\\prog\\externals\\cdev_sd\\sd\\cdev\\engine\\sd\\driver\\RootSound.h"
                    ,0x10a,"SQEX::CDev::Engine::Sd::Driver::RootSound::GetTrack");
  }
  return *((uint *)GEN_TOP((this + (param_1 & 0xff) * 4 + 0x2c0)));
}

/* ref: FUN_00cd6160 */
unsigned int F_00cd6160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6160u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cd6180 */
unsigned int F_00cd6180(unsigned int gen_a0)
{
  GEN_ENTER(0xcd6180u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int in_ecx_00;
  int iVar1;
  
  F_00cccb40(in_ecx + 0x228);
  in_ecx_00 = in_ecx + 0x1a4;
  iVar1 = 3;
  do {
    in_ecx_00 = in_ecx_00 + -0x24;
    F_00cccb40(in_ecx_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00cccb40(in_ecx + 0xf0);
  F_00cccb40(in_ecx + 0xcc);
  F_00cccb40(in_ecx + 0xa8);
  F_00cccb40(in_ecx + 0x84);
  F_00cccb40(in_ecx + 0x60);
  F_00cbbdb0(in_ecx + 0xc);
  return 0;
}

/* ref: FUN_00cd61f0 */
uint F_00cd61f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd61f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)((int)this + 4) = 0;
  *(uint *)((int)this + 0x24c) =
       *(uint *)((int)this + 0x24c) ^ ((param_3 & 0xff) << 6 ^ *(uint *)((int)this + 0x24c)) & 0x40;
  *(uint *)((int)this + 0x1b4) = param_1;
  return param_1;
}

/* ref: FUN_00cd6220 */
uint F_00cd6220(unsigned int gen_a0)
{
  GEN_ENTER(0xcd6220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  uint uVar2;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x60) + 4))))
            ((int)this + 0x60,(undefined4)gen_fl2bits((float)(float10)1));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xf0) + 4))))
            ((int)this + 0xf0,(undefined4)gen_fl2bits((float)(float10)1));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x84) + 4))))
            ((int)this + 0x84,(undefined4)gen_fl2bits((float)(float10)1));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))))
            ((int)this + 0xa8,(undefined4)gen_fl2bits((float)(float10)0));
  F_00cccc10((int)this + 0xa8,(float)(float10)0);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xcc) + 4))))
                    ((int)this + 0xcc,(undefined4)gen_fl2bits((float)(float10)0));
  F_00cccc10((int)this + 0xcc,(float)(float10)0);
  fVar1 = (float10)0;
  *(float *)((int)this + 0x1a4) = (float)fVar1;
  *(float *)((int)this + 0x1a8) = (float)fVar1;
  *(float *)((int)this + 0x1ac) = (float)fVar1;
  return uVar2;
}

/* ref: FUN_00cd62d0 */
uint F_00cd62d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd62d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  int * piVar2;
  float10 fVar3;
  uint uVar4;
  float10 fVar5;
  
  F_00cccbd0((int)this + 0x60,(float)(float10)1);
  F_00cccbd0((int)this + 0xf0,(float)(float10)1);
  F_00cccbd0((int)this + 0x84,(float)(float10)1);
  F_00cccbd0((int)this + 0xa8,(float)(float10)0);
  F_00cccbd0((int)this + 0xcc,(float)(float10)0);
  fVar5 = (float10)1;
  *(float *)((int)this + 0x1c4) = (float)fVar5;
  *(float *)((int)this + 0x1c8) = (float)fVar5;
  *(float *)((int)this + 0x1d4) = (float)fVar5;
  *(float *)((int)this + 0x1d8) = (float)fVar5;
  *(float *)((int)this + 0x1d0) = (float)fVar5;
  fVar3 = (float10)0;
  *(float *)((int)this + 0x1cc) = (float)fVar3;
  *(float *)((int)this + 0x1f0) = (float)fVar3;
  *(float *)((int)this + 500) = (float)fVar3;
  *(float *)((int)this + 0x1e8) = (float)fVar5;
  *(float *)((int)this + 0x1ec) = (float)fVar5;
  *(float *)((int)this + 0x1f8) = (float)fVar3;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(float *)((int)this + 0x1fc) = (float)fVar3;
  *(float *)((int)this + 0x200) = (float)fVar3;
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x228) + 4)));
  *(float *)((int)this + 0x220) = (float)fVar5;
  *(float *)((int)this + 0x224) = (float)fVar5;
  (*pcVar1)((undefined4)gen_fl2bits((float)fVar5));
  fVar5 = (float10)1;
  *(uint *)((int)this + 0x214) = *(uint *)((int)this + 0x214) & 0xffffffc0;
  *(float *)((int)this + 0x25c) = (float)fVar5;
  *(float *)((int)this + 0x21c) = (float)fVar5;
  *(float *)((int)this + 0x218) = (float)fVar5;
  *(uint *)((int)this + 0x24c) = *(uint *)((int)this + 0x24c) & 0xffffffd0 | 0x10;
  *(float *)((int)this + 0x210) = (float)(float10)0;
  uVar4 = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined2 *)((int)this + 0x264) = 0;
  piVar2 = *(int * PTR32 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x1b8) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x15c))(piVar2);
    fVar5 = (float10)1;
    if ((char)uVar4 != '\0') {
      *(float *)((int)this + 0x268) = (float)fVar5;
      goto LAB_00cd643e;
    }
  }
  *(float *)((int)this + 0x268) = (float)(float10)1;
  fVar5 = (float10)0;
LAB_00cd643e: ;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  *(float *)((int)this + 0x26c) = (float)fVar5;
  if (piVar2 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2);
    return uVar4;
  }
  return uVar4;
}

/* ref: FUN_00cd6460 */
uint F_00cd6460(unsigned int gen_a0)
{
  GEN_ENTER(0xcd6460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined1 *)((int)this + 0x20b) = 1;
  F_00cccc70((int)this + 0x60);
  F_00cccc70((int)this + 0xf0);
  F_00cccc70((int)this + 0x84);
  F_00cccc70((int)this + 0xa8);
  F_00cccc70((int)this + 0xcc);
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  uVar2 = F_00cbdd20((int)this + 0xc,(uint)&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_00cd64e0 */
uint F_00cd64e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd64e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x60) + 0x18)));
  *(undefined1 *)((int)this + 0x20b) = 0;
  (*pcVar1)((int)this + 0x60);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xf0) + 0x18))))((int)this + 0xf0);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x84) + 0x18))))((int)this + 0x84);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xa8) + 0x18))))((int)this + 0xa8);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xcc) + 0x18))))((int)this + 0xcc);
  piVar2 = *(int * PTR32 *)((int)this + 4);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  uVar3 = F_00cbdd70((int)this + 0xc,(uint)&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return uVar3;
}

/* ref: FUN_00cd6590 */
byte F_00cd6590(unsigned int gen_a0)
{
  GEN_ENTER(0xcd6590u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x5c) == 0) && (*(int *)(in_ecx + 8) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cd65b0 */
byte F_00cd65b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd65b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x5c) != 5) && (*(int *)(in_ecx + 0x5c) != 6)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00cd65d0 */
byte F_00cd65d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd65d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte in_AL = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x2c))))(*(int * PTR32 *)((int)this + 4));
    in_AL = (byte)uVar1;
  }
  return in_AL;
}

/* ref: FUN_00cd6630 */
uint F_00cd6630(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd6630u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  float10 extraout_ST0;
  float10 fVar6;
  
  iVar2 = (*(int *)&gen_args[3]);
  iVar1 = (*(int *)&gen_args[2]);
  if ((*(int *)&gen_args[3]) == 0) {
    F_00cccbd0((*(int *)&gen_args[0]) + 0x114 + (*(int *)&gen_args[2]) * 0x24,(*(float *)&gen_args[1]));
    if (*(int *)((*(int *)&gen_args[0]) + 4) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 4) + 200))))
                (*(int * PTR32 *)((*(int *)&gen_args[0]) + 4),(undefined4)gen_fl2bits((*(float *)&gen_args[1])),iVar1);
    }
    (*(int *)&gen_args[2]) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
    uVar3 = F_00cbde10((*(int *)&gen_args[0]) + 0xc,(*(float *)&gen_args[1]),iVar1,(uint)&(*(int *)&gen_args[2]));
  }
  else {
    iVar1 = (*(int *)&gen_args[0]) + 0x114 + (*(int *)&gen_args[2]) * 0x24;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x114 + (*(int *)&gen_args[2]) * 0x24) + 0x10))))(iVar1); uVar3 = extraout_ST0;
    fVar6 = (float10)(*(float *)&gen_args[1]);
    bVar4 = GEN_ISNAN(fVar6) || GEN_ISNAN(extraout_ST0);
    bVar5 = bVar4 || fVar6 == extraout_ST0;
    uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                     (ushort)!(extraout_ST0 <= fVar6) << 8 | (ushort)bVar4 << 10 |
                     (ushort)bVar5 << 0xe);
    if (bVar4 == bVar5) {
      uVar3 = F_00cccd90(iVar1,(*(float *)&gen_args[1]),iVar2);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00cd66f0 */
unsigned int F_00cd66f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd66f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x78))))(*(int * PTR32 *)((int)this + 4),param_1);
  }
  F_00cbc480((undefined *)((int)this + 0xc),param_1);
  return 0;
}

/* ref: FUN_00cd6720 */
uint F_00cd6720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd6720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xb4))))
                      (*(int * PTR32 *)((int)this + 4),param_1,param_2);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cd6740 */
uint F_00cd6740(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd6740u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x84))))
              (*(int * PTR32 *)(param_1 + 4),(undefined4)gen_fl2bits(param_2));
  }
  uVar1 = F_00cbc710(param_1 + 0xc,param_2);
  return uVar1;
}

/* ref: FUN_00cd6780 */
uint F_00cd6780(unsigned int gen_a0)
{
  GEN_ENTER(0xcd6780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int iVar2;
  float10 fVar3;
  byte bVar4;
  uint in_EAX = 0;
  uint uVar5;
  float fVar6;
  
  if (*(int *)((int)this + 8) != 0) {
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xec))))(*(int * PTR32 *)((int)this + 8));
    if (((in_EAX != 0xb) && (in_EAX != 6)) && (*(int *)((int)this + 4) != 0)) {
      if ((in_EAX != 8) && (in_EAX != 10)) {
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x16c))))(*(int * PTR32 *)((int)this + 8));
        if ((char)uVar5 == '\0') {
LAB_00cd67e8: ;
          fVar1 = *(float *)((int)this + 0xc4);
          iVar2 = **(int * PTR32 *)((int)this + 4);
          F_00cccde0((undefined *)((int)this + 0xcc));
          fVar6 = F_00cccde0((undefined *)((int)this + 0xa8));
          uVar5 = ((code *)*(gen_code32 *)(iVar2 + 0xb8))
                            (*(undefined4 *)((int)this + 4),
                             (undefined4)
                             gen_fl2bits(((float)GEN_TOF(((((float10)fVar6 + (float10)fVar1) +
                                                 (float10)*(float *)((int)this + 0x1f0)) +
                                                (float10)*(float *)((int)this + 0x1cc))))));
          return uVar5;
        }
        bVar4 = F_00d2cdf0();
        if (bVar4 == 0) goto LAB_00cd67e8;
      }
      fVar3 = (float10)0;
      in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xb8))))
                         (*(int * PTR32 *)((int)this + 4),(undefined4)gen_fl2bits((float)fVar3),
                          (undefined4)gen_fl2bits((float)fVar3),
                          (undefined4)gen_fl2bits((float)fVar3),(int)this + 0x1f8);
    }
  }
  return in_EAX;
}

/* ref: FUN_00cd6890 */
unsigned int F_00cd6890(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd6890u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x1e4) = param_2;
  return 0;
}

/* ref: FUN_00cd68a0 */
uint F_00cd68a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd68a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint in_EAX = 0;
  
  F_00cccc10(in_ecx + 0x84,param_2);
  return in_EAX;
}

/* ref: FUN_00cd68c0 */
uint F_00cd68c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd68c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint in_EAX = 0;
  
  F_00cccc10(in_ecx + 0xa8,param_2);
  return in_EAX;
}

/* ref: FUN_00cd68f0 */
float F_00cd68f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd68f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x228) + 0x10))))((int)this + 0x228);
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x84) + 0x10))))((int)this + 0x84);
  return ((float)GEN_TOF(((extraout_ST0_00 * (float10)(double)extraout_ST0) *
                (float10)*(float *)((int)this + 0x1ec))));
}

/* ref: FUN_00cd6960 */
uint F_00cd6960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcd6960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xac))))
                      (*(int * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cd69c0 */
float10 F_00cd69c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd69c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
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
  switch((unsigned int)(uintptr_t)(*(undefined2 *)(iVar1 + param_1))) {
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
    iVar4 = iVar4 + *(int *)(iVar2 + param_1);
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
    iVar2 = iVar2 + (uint)*(ushort *)(iVar2 + param_1) * 2;
    goto switchD_00cd69e8_caseD_7;
  case 0x3a: ;
    iVar2 = iVar1 + 6 + (uint)*(ushort *)(iVar1 + 4 + param_1) * 2;
    goto switchD_00cd69e8_caseD_7;
  case 0x3d: ;
    iVar2 = *(short *)(iVar1 + 4 + param_1) + iVar2 + *(short *)(iVar1 + 6 + param_1) * 4;
    goto switchD_00cd69e8_caseD_7;
  case 0x3f: ;
    break;
  }
  iVar3 = (int)*(short *)(iVar2 + param_1 + 4);
  iVar2 = iVar2 + *(short *)(iVar1 + 4 + param_1);
  if (0 < iVar3) {
    do {
      iVar3 = iVar3 + -1;
      iVar2 = *(short *)(iVar2 + 2 + param_1) + iVar2 + *(short *)(iVar2 + 4 + param_1) * 4;
    } while (iVar3 != 0);
  }
  goto switchD_00cd69e8_caseD_7;
switchD_00cd69e8_caseD_0: ;
  return (float10)(float)((float10)iVar4 * (float10)REFG(double, 0x1091858));
}

/* ref: FUN_00cd6af0 */
unsigned int F_00cd6af0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd6af0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(undefined1 *)(in_ecx + 0x82) = 1;
  *(float *)(in_ecx + 0x1d4) = param_2;
  return 0;
}

/* ref: FUN_00cd6b10 */
uint F_00cd6b10(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd6b10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  *(float *)((int)param_1 + 0x1d8) = param_2;
  uVar1 = F_00cda360(param_1);
  *(undefined1 *)((int)param_1 + 0xa6) = 1;
  return uVar1;
}

/* ref: FUN_00cd6b30 */
float10 F_00cd6b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6b30u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar4 = *(short *)(in_eax + 2) + in_eax;
  iVar1 = *(short *)(in_eax + 4) + -1;
  iVar8 = 0;
  iVar3 = 0;
  iVar6 = iVar1;
  if (-1 < iVar1) {
    do {
      iVar3 = (iVar6 + iVar8) / 2;
      uVar2 = *(ushort *)(iVar4 + iVar3 * 4);
      if (uVar2 == (ushort)param_2) break;
      if (uVar2 < (ushort)param_2) {
        iVar8 = iVar3 + 1;
      }
      else {
        iVar6 = iVar3 + -1;
      }
    } while (iVar8 <= iVar6);
  }
  if (((ushort)param_2 < *(ushort *)(iVar4 + iVar3 * 4)) && (0 < iVar3)) {
    iVar3 = iVar3 + -1;
  }
  else if (*(short *)(in_eax + 4) <= iVar3) {
    iVar3 = iVar1;
  }
  if (iVar3 != iVar1) {
    uVar5 = (uint)*(ushort *)(iVar4 + iVar3 * 4);
    uVar7 = (uint)*(ushort *)(iVar4 + 2 + iVar3 * 4);
    return (float10)((float)GEN_TOF((((float10)((float)GEN_TOF(((float10)(int)((param_2 & 0xffff) - uVar5) /
                                             (float10)(int)(*(ushort *)(iVar4 + 4 + iVar3 * 4) -
                                                           uVar5)))) *
                             (float10)(int)(*(ushort *)(iVar4 + 6 + iVar3 * 4) - uVar7) +
                            (float10)uVar7) / (float10)REFG(double, 0x109cab0))));
  }
  return (float10)((float)GEN_TOF(((float10)*(ushort *)(iVar4 + 2 + iVar3 * 4) / (float10)REFG(double, 0x109cab0))));
}

/* ref: FUN_00cd6e00 */
uint F_00cd6e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6e00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(uint *)(in_ecx + 0x214) ^ param_2) & 3;
  *(uint *)(in_ecx + 0x214) = *(uint *)(in_ecx + 0x214) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00cd6e20 */
uint F_00cd6e20(unsigned int gen_a0)
{
  GEN_ENTER(0xcd6e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  
  if ((*(int *)((int)this + 0x5c) != 0) || (*(int *)((int)this + 8) != 0)) {
    in_EAX = F_00cda360(this);
    *(undefined1 *)((int)this + 0xa6) = 1;
  }
  return in_EAX;
}

/* ref: FUN_00cd6e40 */
unsigned int F_00cd6e40(unsigned int gen_a0)
{
  GEN_ENTER(0xcd6e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xd4))))(*(int * PTR32 *)((int)this + 4));
    return 0;
  }
  return 0;
}

/* ref: FUN_00cd6e60 */
uint F_00cd6e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)this;
  uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4 + iVar1)));
  *param_1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + iVar1)));
  param_1[1] = uVar2;
  *(int *)this = iVar1 + 8;
  return (uint)param_1;
}

/* ref: FUN_00cd6e90 */
uint F_00cd6e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = *(int *)((int)this + 8);
  iVar3 = *(int *)this;
  uVar1 = *(undefined1 *)(iVar2 + iVar3);
  iVar5 = iVar2 + iVar3;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar2 + 4 + iVar3);
  *param_1 = uVar1;
  param_1[1] = *(undefined1 *)(iVar5 + 1);
  param_1[2] = *(undefined1 *)(iVar5 + 2);
  uVar1 = *(undefined1 *)(iVar5 + 3);
  uVar4 = *(undefined4 *)(iVar5 + 8);
  *(int *)this = iVar3 + 0xc;
  param_1[3] = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar4;
  return (uint)param_1;
}

/* ref: FUN_00cd6ee0 */
uint F_00cd6ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)((int)this + 8);
  iVar3 = *(int *)this + 8;
  *param_1 = *(undefined4 *)(iVar2 + *(int *)this);
  uVar1 = *(undefined4 *)(iVar2 + -4 + iVar3);
  *(int *)this = iVar3;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00cd6f10 */
uint F_00cd6f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)this;
  iVar3 = *(int *)((int)this + 8) + iVar2;
  *param_1 = *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + iVar2)));
  sVar1 = *(short *)(iVar3 + 2);
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
float F_00cd6f90(unsigned int gen_a0)
{
  GEN_ENTER(0xcd6f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  
  fVar1 = *((float *)GEN_TOP((*(int *)this + *(int *)((int)this + 8))));
  *(int *)this = *(int *)this + 4;
  return fVar1;
}

/* ref: FUN_00cd6fd0 */
uint F_00cd6fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd6fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = *(int *)this;
  uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 8) + iVar2)));
  *(int *)this = iVar2 + 4;
  uVar4 = *((uint *)GEN_TOP((iVar2 + 4 + *(int *)((int)this + 8))));
  *(int *)this = iVar2 + 8;
  iVar5 = *(int *)((int)this + 0xc);
  if ((iVar5 < 0) || ((*(byte *)((int)this + iVar5 * 0x10 + 0x1c) & 2) == 0)) {
    *(int *)((int)this + 0xc) = iVar5 + 1;
    *((undefined4 *)GEN_TOP(((int)this + (iVar5 + 1) * 0x10 + 0x14))) = 0;
    *((int *)GEN_TOP(((int)this + (*(int *)((int)this + 0xc) + 1) * 0x10))) = iVar2 + -2;
    if (((char)param_1 == '\0') && (uVar3 < uVar4)) {
      uVar6 = F_00a4b840();
      *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0xc) * 0x10 + 0x18))) =
           uVar6 % ((uVar4 - uVar3) + 1) + uVar3;
    }
    else {
      *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0xc) * 0x10 + 0x18))) = uVar3;
    }
    *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0xc) * 0x10 + 0x1c))) =
         (uint)(*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0xc) * 0x10 + 0x18))) == 0);
  }
  iVar2 = *(int *)((int)this + 0xc);
  puVar1 = (uint *)((int)this + iVar2 * 0x10 + 0x1c);
  *puVar1 = *puVar1 & 0xfffffffd;
  return (int)this + iVar2 * 0x10 + 0x1c;
}

/* ref: FUN_00cd70b0 */
uint F_00cd70b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd70b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  
  fVar1 = *((float *)GEN_TOP((*(int *)this + *(int *)((int)this + 8))));
  iVar2 = *(int *)((int)this + 0xc);
  *(int *)this = *(int *)this + 4;
  fVar5 = (float10)*(int *)((int)this + iVar2 * 0x10 + 0x14);
  if (*(int *)((int)this + iVar2 * 0x10 + 0x14) < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar5 = fVar5 * (float10)fVar1;
  uVar3 = (uint)fVar5;
  uVar4 = uVar3;
  if (-1 < iVar2) {
    uVar4 = uVar3 + *(int *)((int)this + 4);
    if (0 < (int)uVar4) {
      *(uint *)((int)this + 4) = uVar4;
      *param_1 = (float)((float10)(float)fVar5 - (float10)(int)uVar3);
      return uVar4;
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  return uVar4;
}

/* ref: FUN_00cd7180 */
uint F_00cd7180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd7180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  
  *param_1 = *(undefined4 *)((int)this + 0x1b4);
  param_1[1] = *(undefined4 *)((int)this + 0x5c);
  fVar4 = F_00cccde0((undefined *)((int)this + 0x60));
  param_1[2] = (undefined4)gen_fl2bits(fVar4);
  fVar4 = F_00cccde0((undefined *)((int)this + 0x84));
  param_1[3] = (undefined4)gen_fl2bits(fVar4);
  fVar4 = F_00cccde0((undefined *)((int)this + 0xa8));
  param_1[4] = (undefined4)gen_fl2bits(fVar4);
  param_1[5] = *(undefined4 *)((int)this + 8);
  param_1[6] = *(undefined4 *)((int)this + 4);
  if (*(int *)((int)this + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xd0))))(*(int * PTR32 *)((int)this + 8));
  }
  param_1[7] = uVar1;
  param_1[8] = param_1[8] ^ ((uint)(*(int *)((int)this + 8) != 0) ^ param_1[8]) & 1;
  if ((*(int *)((int)this + 0x5c) == 0) && (*(int *)((int)this + 8) == 0)) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  uVar1 = (iVar2 * 2 ^ param_1[8]) & 2U ^ param_1[8];
  param_1[8] = uVar1;
  uVar3 = ((uint)*(byte *)((int)this + 0x20b) * 4 ^ uVar1) & 4 ^ uVar1;
  param_1[8] = uVar3;
  param_1[8] = (*(uint *)((int)this + 0x24c) >> 3 ^ uVar3) & 8 ^ uVar3;
  return uVar1;
}

/* ref: FUN_00cd7250 */
uint F_00cd7250(unsigned int gen_a0)
{
  GEN_ENTER(0xcd7250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  int * piVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 uVar5;
  uint uVar6;
  int in_ecx;
  int local_8;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  F_00cbbd70((int)this + 0xc);
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  F_00c48350((undefined *)((int)this + 0x2c),0,0x30);
  *(undefined4 *)((int)this + 0x5c) = 0;
  F_00cccb10((int)this + 0x60,(float)(float10)1);
  F_00cccb10((int)this + 0x84,(float)(float10)1);
  F_00cccb10((int)this + 0xa8,(float)(float10)0);
  F_00cccb10((int)this + 0xcc,(float)(float10)0);
  F_00cccb10((int)this + 0xf0,(float)(float10)1);
  in_ecx = (int)this + 0x114;
  local_8 = 3;
  do {
    F_00cccb10(in_ecx,(float)(float10)0);
    in_ecx = in_ecx + 0x24;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  fVar4 = (float10)0;
  *(float *)((int)this + 0x1a4) = (float)fVar4;
  *(float *)((int)this + 0x1a8) = (float)fVar4;
  *(float *)((int)this + 0x1ac) = (float)fVar4;
  fVar3 = (float10)1;
  *(float *)((int)this + 0x1b0) = (float)fVar3;
  *(float *)((int)this + 0x1c4) = (float)fVar3;
  *(float *)((int)this + 0x1c8) = (float)fVar3;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(float *)((int)this + 0x1d0) = (float)fVar3;
  *(undefined4 *)((int)this + 0x1b8) = 0xffffffff;
  *(float *)((int)this + 0x1d4) = (float)fVar3;
  *(undefined4 *)((int)this + 0x1bc) = 0xffffffff;
  *(float *)((int)this + 0x1d8) = (float)fVar3;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(float *)((int)this + 0x1e4) = (float)fVar3;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(float *)((int)this + 0x1f8) = (float)fVar4;
  *(float *)((int)this + 0x1fc) = (float)fVar4;
  *(float *)((int)this + 0x200) = (float)fVar4;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(float *)((int)this + 0x210) = (float)fVar4;
  *(undefined1 *)((int)this + 0x20c) = 0;
  F_00cccb10((int)this + 0x228,(float)fVar4);
  fVar4 = (float10)0;
  *(float *)((int)this + 0x1cc) = (float)fVar4;
  fVar3 = (float10)1;
  *(float *)((int)this + 0x1e8) = (float)fVar3;
  *(float *)((int)this + 0x1ec) = (float)fVar3;
  *(float *)((int)this + 0x1f0) = (float)fVar4;
  *(float *)((int)this + 500) = (float)fVar4;
  *(float *)((int)this + 0x1f8) = (float)fVar4;
  *(float *)((int)this + 0x1fc) = (float)fVar4;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(float *)((int)this + 0x200) = (float)fVar4;
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x228) + 4)));
  *(float *)((int)this + 0x220) = (float)fVar3;
  *(float *)((int)this + 0x224) = (float)fVar3;
  (*pcVar1)((int)this + 0x228,(undefined4)gen_fl2bits((float)fVar3));
  *(float *)((int)this + 0x25c) = (float)(float10)1;
  *(uint *)((int)this + 0x24c) = *(uint *)((int)this + 0x24c) & 0xffffff90 | 0x10;
  piVar2 = *(int * PTR32 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  if ((piVar2 == (int *)0x0) ||
     (uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0x15c))(piVar2), uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068))), (char)uVar6 == '\0')) {
    *(float *)((int)this + 0x268) = (float)(float10)1;
    *(float *)((int)this + 0x26c) = (float)(float10)0;
  }
  else {
    *(undefined4 *)((int)this + 0x268) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x268), REFG(float, 0x1088068));
    *(undefined4 *)((int)this + 0x26c) = uVar5;
  }
  *(undefined2 *)((int)this + 0x264) = 0;
  *(float *)((int)this + 0x21c) = (float)(float10)1;
  *(float *)((int)this + 0x218) = (float)(float10)1;
  *(undefined4 *)((int)this + 0x270) = 0;
  F_00cccc10((int)this + 0xa8,(float)(float10)0);
  F_00cccc10((int)this + 0xcc,(float)(float10)0);
  *(uint *)((int)this + 0x214) = *(uint *)((int)this + 0x214) & 0xffffffc0;
  return (uint)this;
}

/* ref: FUN_00cd7670 */
unsigned int F_00cd7670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd7670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  *(undefined4 *)((int)this + 0x1a4) = *param_1;
  *(undefined4 *)((int)this + 0x1a8) = param_1[1];
  *(undefined4 *)((int)this + 0x1ac) = param_1[2];
  *(undefined4 *)((int)this + 0x1b0) = param_1[3];
  F_00cda400(this,(uint)((undefined1 *)(gen_frame + 0x8)));
  if (*(int *)((int)this + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x7c))))(*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x8)));
  }
  F_00cbc4e0((undefined *)((int)this + 0xc),((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_00cd76f0 */
float F_00cd76f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd76f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  
  if (*(uint *)((int)this + 0x24) == 0) {
    return (float)(float10)0;
  }
  fVar1 = F_00cd69c0(*(uint *)((int)this + 0x24));
  return (float)fVar1;
}

/* ref: FUN_00cd7720 */
unsigned int F_00cd7720(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd7720u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  if ((*(int *)((int)param_1 + 0x5c) != 5) && (*(int *)((int)param_1 + 0x5c) != 6)) {
    *(float *)((int)param_1 + 0x1f0) = param_2;
    *(float *)((int)param_1 + 500) = param_3;
    *(undefined4 *)((int)param_1 + 0x1f8) = *param_4;
    *(undefined4 *)((int)param_1 + 0x1fc) = param_4[1];
    *(undefined4 *)((int)param_1 + 0x200) = param_4[2];
    *(undefined4 *)((int)param_1 + 0x204) = param_4[3];
    F_00cdafb0(param_1);
    F_00cbc9e0((int)param_1 + 0xc,param_2,param_3,param_4);
  }
  return 0;
}

/* ref: FUN_00cd77a0 */
uint F_00cd77a0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd77a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if (param_3 == 0) {
    F_00cccbd0((int)param_1 + 0xa8,param_2);
    uVar1 = F_00cdafb0(param_1);
    return uVar1;
  }
  uVar1 = F_00cccd90((int)param_1 + 0xa8,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00cd77e0 */
uint F_00cd77e0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd77e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if (param_3 == 0) {
    F_00cccbd0((int)param_1 + 0xcc,param_2);
    uVar1 = F_00cdafb0(param_1);
    return uVar1;
  }
  uVar1 = F_00cccd90((int)param_1 + 0xcc,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00cd7820 */
uint F_00cd7820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcd7820u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00cd78c0 */
uint F_00cd78c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd78c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (-1 < *(int *)((int)this + 0x1c)) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("!commandAnalyzer_.IsActive()",&REFG(undefined, 0x112c98e),"Track.cpp",0xe0,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetTrackData");
  }
  if (*(int *)((int)this + 0x20) != 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("commandAnalyzer_.getInterval() == 0",&REFG(undefined, 0x112c98f),"Track.cpp",0xe1,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetTrackData");
    *(uint *)((int)this + 0x1b4) = param_2;
    *(uint *)((int)this + 0x24) = param_1;
    return param_2;
  }
  *(uint *)((int)this + 0x1b4) = param_2;
  *(uint *)((int)this + 0x24) = param_1;
  return param_1;
}

/* ref: FUN_00cd7980 */
byte F_00cd7980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd7980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x5c) == 4) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ != STATE_FINISH_WAIT",&REFG(undefined, 0x112c9ad),"Track.cpp",0xf4,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetAudioData");
  }
  if (*(int *)((int)this + 0x5c) == 5) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ != STATE_FINISHED",&REFG(undefined, 0x112c9ae),"Track.cpp",0xf5,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetAudioData");
  }
  if (*(int *)((int)this + 0x1b8) == -1) {
    *(undefined4 *)((int)this + 0x1b8) = *(undefined4 *)(param_1 + 0xc);
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,param_1,param_2,param_3);
  return (byte)uVar2;
}

/* ref: FUN_00cd7a50 */
uint F_00cd7a50(unsigned int gen_a0)
{
  GEN_ENTER(0xcd7a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x5c);
  if ((((iVar1 != 5) && (iVar1 != 0)) && (iVar1 != 6)) && (iVar1 != 999)) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ == STATE_FINISHED || state_ == STATE_RUNNABLE || state_ == STATE_ZOMBIE || state_ == STATE_RESERVED"
                    ,&REFG(undefined, 0x112cb06),"Track.cpp",0x278,
                    "SQEX::CDev::Engine::Sd::Driver::Track::RefreshVoice");
  }
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  F_00c48350((undefined *)((int)this + 0x2c),0,0x30);
  *(undefined4 *)((int)this + 0x208) = 0;
  uVar2 = F_00cd8330(this,0);
  return uVar2;
}

/* ref: FUN_00cd7ae0 */
uint F_00cd7ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd7ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xa4))))(*(int * PTR32 *)((int)this + 8));
    return uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("!\"[Sd][Track#IsMusic] already detached\"",&REFG(undefined, 0x112cb2f),"Track.cpp",0xf65,
                  "SQEX::CDev::Engine::Sd::Driver::Track::GetBusNumber");
  return 0;
}

/* ref: FUN_00cd7b40 */
byte F_00cd7b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd7b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xa8))))(*(int * PTR32 *)((int)this + 8),param_1);
    return (byte)uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("!\"[Sd][Track#GetSendBus] already detached\"",&REFG(undefined, 0x112cb67),"Track.cpp",0xf72,
                  "SQEX::CDev::Engine::Sd::Driver::Track::GetSendBus");
  return 0;
}

/* ref: FUN_00cd7ba0 */
float F_00cd7ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd7ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float10 extraout_ST0;
  
  if (*(int *)((int)this + 8) != 0) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xac))))(*(int * PTR32 *)((int)this + 8),param_1);
    return (float)extraout_ST0;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("!\"[Sd][Track#GetSendAmount] already detached\"",&REFG(undefined, 0x112cb72),"Track.cpp",0xf7e,
                  "SQEX::CDev::Engine::Sd::Driver::Track::GetSendAmount");
  return (float)(float10)0;
}

/* ref: FUN_00cd7c00 */
byte F_00cd7c00(unsigned int gen_a0)
{
  GEN_ENTER(0xcd7c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xb0))))(*(int * PTR32 *)((int)this + 8));
    return (byte)uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("!\"[Sd][Track#GetNumSendBuses] already detached\"",&REFG(undefined, 0x112cb73),"Track.cpp",
                  0xf8a,"SQEX::CDev::Engine::Sd::Driver::Track::GetNumSendBuses");
  return 0;
}

/* ref: FUN_00cd7c60 */
uint F_00cd7c60(unsigned int gen_a0)
{
  GEN_ENTER(0xcd7c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(int *)((int)this + 8) != 0) && (*(int *)((int)this + 4) != 0)) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xd0))))(*(int * PTR32 *)((int)this + 4));
    return uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("!\"[Sd][Track#GetEffect] already detached\"",&REFG(undefined, 0x112cbee),"Track.cpp",0xf96,
                  "SQEX::CDev::Engine::Sd::Driver::Track::GetEffect");
  return 0;
}

/* ref: FUN_00cd7cc0 */
uint F_00cd7cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd7cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x180))))(*(int * PTR32 *)((int)this + 8));
    return uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("!\"[Sd][Track#GetBank] already detached\"",&REFG(undefined, 0x112cbef),"Track.cpp",0x1115,
                  "SQEX::CDev::Engine::Sd::Driver::Track::GetBank");
  return 0;
}

/* ref: FUN_00cd7d20 */
byte F_00cd7d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd7d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x170))))(*(int * PTR32 *)((int)this + 8),param_1);
    return (byte)uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("!\"[Sd][Track#IsMusic] already detached\"",&REFG(undefined, 0x112cc09),"Track.cpp",0x112f,
                  "SQEX::CDev::Engine::Sd::Driver::Track::IsMusic");
  return 0;
}

/* ref: FUN_00cd7d80 */
byte F_00cd7d80(unsigned int gen_a0)
{
  GEN_ENTER(0xcd7d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x160))))(*(int * PTR32 *)((int)this + 8));
    return (byte)uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("!\"[Sd][Track#IsUsingGranular] already detached\"",&REFG(undefined, 0x112cc0a),"Track.cpp",
                  0x1138,"SQEX::CDev::Engine::Sd::Driver::Track::IsUsingGranular");
  return 0;
}

/* ref: FUN_00cd7de0 */
byte F_00cd7de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd7de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
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
    param_1[4] = *(undefined4 *)((int)this + 0x1b8);
    param_1[5] = 0xffffffff;
  }
  iVar2 = *(int *)((int)this + 0x24);
  uVar9 = (uint)*(ushort *)(param_1[2] + iVar2);
  param_1[2] = param_1[2] + 2;
  bVar3 = false;
  bVar4 = false;
  if (0x3f < uVar9) {
switchD_00cd7e46_caseD_cd7e31: ;
    return 0;
  }
switchD_00cd7e46_switchD: ;
  switch((unsigned int)(uintptr_t)((&REFG(undefined * PTR32, 0xcd8098))[(int)(uVar9)])) {
  case (undefined *)0xcd7e31: ;
    goto switchD_00cd7e46_caseD_cd7e31;
  case (undefined *)0xcd7e4d: ;
    iVar5 = param_1[2];
    param_1[2] = *(short *)(iVar5 + 2 + iVar2) + iVar5 + *(short *)(iVar5 + 4 + iVar2) * 4;
    break;
  case (undefined *)0xcd7e67: ;
    iVar8 = param_1[2];
    param_1[2] = param_1[2] + (int)*(short *)(iVar8 + 2 + iVar2);
    iVar5 = param_1[2];
    iVar8 = iVar8 + iVar2;
    iVar10 = 0;
    if (0 < *(short *)(iVar8 + 4)) {
      do {
        iVar5 = *(short *)(iVar5 + 2 + iVar2) + iVar5 + *(short *)(iVar5 + 4 + iVar2) * 4;
        param_1[2] = iVar5;
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(short *)(iVar8 + 4));
    }
    break;
  case (undefined *)0xcd7ea3: ;
    if ((bVar3) && (!bVar4)) {
      param_1[2] = param_1[2] + -2;
      goto LAB_00cd8034;
    }
    param_1[2] = param_1[2] + 8;
    if ((!bVar3) || (!bVar4)) {
      *param_1 = param_1[3];
    }
    bVar3 = true;
    break;
  case (undefined *)0xcd7eca: ;
    if ((bVar3) && (!bVar4)) {
      param_1[2] = param_1[2] + -2;
LAB_00cd8049: ;
      param_1[1] = param_1[3];
      return 1;
    }
  case (undefined *)0xcd7ed8: ;
    goto switchD_00cd7e46_caseD_cd7ed8;
  case (undefined *)0xcd7ee3: ;
    param_1[2] = param_1[2] + 8;
    break;
  case (undefined *)0xcd7ee9: ;
    param_1[2] = param_1[2] + 0xc;
    break;
  case (undefined *)0xcd7eef: ;
    param_1[3] = param_1[3] + *(int *)(param_1[2] + iVar2);
  case (undefined *)0xcd7ef8: ;
    param_1[2] = param_1[2] + 4;
    break;
  case (undefined *)0xcd7f1f: ;
    if ((bVar3) && (!bVar4)) {
LAB_00cd8034: ;
      param_1[1] = param_1[3];
      return 1;
    }
    break;
  case (undefined *)0xcd7f2f: ;
    iVar5 = param_1[2];
    sVar11 = *(short *)(iVar5 + 2 + iVar2);
    uVar1 = *(ushort *)(iVar5 + iVar2);
    param_1[2] = iVar5 + 4;
    piVar7 = (int *)F_00cd7cc0(this);
    uVar9 = (uint)uVar1;
    if (piVar7[4] != uVar9) {
      piVar7 = (int *)F_00d2ccd0();
      piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x90))(piVar7,uVar9)));
      if (piVar7 == (int *)0x0) {
        return 0;
      }
    }
    uVar6 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7,(int)sVar11);
    param_1[4] = *(undefined4 *)(uVar6 + 0xc);
    param_1[5] = uVar9;
    break;
  case (undefined *)0xcd7f8b: ;
    bVar4 = true;
    break;
  case (undefined *)0xcd7f94: ;
    if (bVar3) goto LAB_00cd8049;
    bVar4 = false;
    break;
  case (undefined *)0xcd7fa4: ;
    param_1[2] = param_1[2] + 0x10;
    break;
  case (undefined *)0xcd7fad: ;
    piVar7 = (int *)F_00cd7cc0(this);
    iVar5 = param_1[2];
    sVar11 = *(short *)(iVar5 + 2 + iVar2);
    uVar1 = *(ushort *)(iVar5 + iVar2);
    if (sVar11 < 0) {
      param_1[2] = iVar5 + (2 - sVar11) * 2;
      sVar11 = *(short *)(iVar5 + 4 + iVar2);
    }
    else {
      param_1[2] = iVar5 + 4;
    }
    if (piVar7[4] != (uint)uVar1) {
      piVar7 = (int *)F_00d2ccd0();
      piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x90))(piVar7,(uint)uVar1)));
      if (piVar7 == (int *)0x0) {
        return 0;
      }
    }
    uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7,(int)sVar11);
    param_1[4] = *(undefined4 *)(uVar9 + 0xc);
    break;
  case (undefined *)0xcd8027: ;
    param_1[2] = param_1[2] + 2;
    break;
  case (undefined *)0xcd805a: ;
    if (!bVar3) {
      return 0;
    }
    param_1[2] = param_1[2] + -2;
    param_1[1] = 0xffffffff;
    return 1;
  case (undefined *)0xcd8078: ;
    if (!bVar3) {
      return 0;
    }
    param_1[2] = param_1[2] + -2;
    param_1[1] = param_1[3];
    return 1;
  }
switchD_00cd7e46_caseD_cd7efc: ;
  uVar9 = (uint)*(ushort *)(param_1[2] + iVar2);
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
byte F_00cd81a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd81a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  
  if (*(int *)((int)this + 8) == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("pTrackData_ != 0",&REFG(undefined, 0x112d698),"Track.cpp",0x12f8,
                    "SQEX::CDev::Engine::Sd::Driver::Track::CommandAnalyzer::Activate");
  }
  *(undefined4 *)this = 0;
  uVar1 = (*(short * PTR32 *)((int)this + 8))[1];
  if ((**(short * PTR32 *)((int)this + 8) == 0x2f) && (*(undefined4 *)this = 4, 0xb < uVar1)) {
    *(undefined4 *)this = 0xffffffff;
    return 0;
  }
  return 1;
}

/* ref: FUN_00cd8220 */
byte F_00cd8220(unsigned int gen_a0)
{
  GEN_ENTER(0xcd8220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint * puVar2;
  int iVar3;
  
  piVar1 = ((int *)GEN_TOP(((int)this + *(int *)((int)this + 0xc) * 0x10 + 0x14)));
  *piVar1 = *piVar1 + 1;
  iVar3 = *(int *)((int)this + 0xc);
  if (((*(byte *)((int)this + iVar3 * 0x10 + 0x1c) & 1) == 0) &&
     (*(uint *)((int)this + iVar3 * 0x10 + 0x18) <= *(uint *)((int)this + iVar3 * 0x10 + 0x14))) {
    *(int *)((int)this + 0xc) = iVar3 + -1;
    return 0;
  }
  iVar3 = *(int *)((int)this + iVar3 * 0x10 + 0x10);
  if (iVar3 == -1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("offset != -1",&REFG(undefined1, 0x107fc63),
                    "d:\\ffxiv\\trunk\\prog\\externals\\cdev_sd\\sd\\cdev\\engine\\sd\\driver\\Track.h"
                    ,0x2a2,"SQEX::CDev::Engine::Sd::Driver::Track::CommandAnalyzer::setReadOffset");
  }
  *(int *)this = iVar3;
  puVar2 = ((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0xc) * 0x10 + 0x1c)));
  *puVar2 = *puVar2 | 2;
  return 1;
}

/* ref: FUN_00cd82b0 */
uint F_00cd82b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd82b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x5c) == 999) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ != STATE_RESERVED",&REFG(undefined, 0x112cacb),"Track.cpp",0x1c6,
                    "SQEX::CDev::Engine::Sd::Driver::Track::Initialize");
  }
  uVar1 = *(uint *)((int)this + 0x5c);
  if (((uVar1 != 5) && (uVar1 != 6)) && (uVar1 != 0)) {
    return uVar1;
  }
  F_00cd7a50(this);
  F_00cd6220(this);
  uVar1 = F_00cd62d0(this);
  return uVar1;
}

/* ref: FUN_00cd8330 */
uint F_00cd8330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd8330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  
  *(undefined1 * PTR32 *)((int)this + 0x5c) = param_1;
  if (param_1 == &REFG(undefined, 0x5)) {
    *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
    *(undefined4 *)((int)this + 0x28) = 0xffffffff;
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
    puVar1 = F_00c48350((undefined *)((int)this + 0x2c),0,0x30);
    if (*(int *)((int)this + 8) == 0) {
      puVar1 = (undefined1 *)F_00cd82b0(this);
    }
  }
  else {
    puVar1 = param_1;
    if (param_1 == &REFG(undefined, 0x6)) {
      *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
      return 6;
    }
  }
  return (uint)puVar1;
}

/* ref: FUN_00cd8390 */
uint F_00cd8390(unsigned int gen_a0)
{
  GEN_ENTER(0xcd8390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x5c);
  if (((uVar2 != 5) && (uVar2 != 4)) && (uVar2 != 6)) {
    if (uVar2 != 3) {
      bVar1 = F_00cd81a0((undefined *)((int)this + 0x1c));
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 == 0) {
        *(undefined4 *)((int)this + 0x5c) = 4;
        return uVar2;
      }
    }
    *(undefined4 *)((int)this + 0x5c) = 1;
  }
  return uVar2;
}

/* ref: FUN_00cd83d0 */
float F_00cd83d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd83d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar3;
  undefined4 uVar4;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xf0) + 0x10))))((int)this + 0xf0);
  uVar4 = 0;
  bVar1 = F_00cd7d20(this,0);
  uVar2 = (uint)bVar1;
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x60) + 0x10))))((int)this + 0x60);
  fVar3 = F_00d2edb0(((float)GEN_TOF(((extraout_ST0_00 * (float10)(double)extraout_ST0) *
                              (float10)*(float *)((int)this + 0x1e8)))),uVar2,uVar4);
  return ((float)GEN_TOF((fVar3 * (float10)*(float *)((int)this + 0x1d4))));
}

/* ref: FUN_00cd8440 */
unsigned int F_00cd8440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcd8440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x5c) != 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ == STATE_RUNNABLE",&REFG(undefined, 0x112c9af),"Track.cpp",0x13e,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetStreamAudioData");
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if ((piVar1 != (int *)0x0) &&
     (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,param_1,param_2,param_3,param_4,param_5),
     (char)uVar2 != '\0')) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x5c) = 6;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  return 0;
}

/* ref: FUN_00cd84d0 */
uint F_00cd84d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd84d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x5c);
  if ((uVar2 != 0) && (uVar2 != 3)) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    uVar2 = ((code *)REFG(gen_code32, 0x15d861c))("state_ == STATE_RUNNABLE || state_ == STATE_SEEKING",&REFG(undefined, 0x112c9ee),
                            "Track.cpp",0x147,
                            "SQEX::CDev::Engine::Sd::Driver::Track::ResetStreamData");
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if ((piVar1 != (int *)0x0) &&
     (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,param_1,param_2), (char)uVar2 != '\0')) {
    return uVar2;
  }
  *(undefined4 *)((int)this + 0x5c) = 6;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  return uVar2;
}

/* ref: FUN_00cd8550 */
unsigned int F_00cd8550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd8550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x5c) != 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ == STATE_RUNNABLE",&REFG(undefined, 0x112c9ef),"Track.cpp",0x154,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetStreamAudioDataEx");
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if ((piVar1 != (int *)0x0) &&
     (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,param_1,param_2), (char)uVar2 != '\0')) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x5c) = 6;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  return 0;
}

/* ref: FUN_00cd85d0 */
unsigned int F_00cd85d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcd85d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x5c) != 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ == STATE_RUNNABLE",&REFG(undefined, 0x112ca52),"Track.cpp",0x161,
                    "SQEX::CDev::Engine::Sd::Driver::Track::Reserve");
  }
  *(undefined4 *)((int)this + 0x5c) = 999;
  return 0;
}

/* ref: FUN_00cd8630 */
unsigned int F_00cd8630(unsigned int gen_a0)
{
  GEN_ENTER(0xcd8630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x5c) = 0;
  return 0;
}

/* ref: FUN_00cd8640 */
uint F_00cd8640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd8640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  ulonglong uVar5;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x150))(param_1);
  if ((char)uVar2 == '\0') {
    uVar5 = F_00427d90();
    (*(undefined4 *)(gen_frame + 0x28)) = (int)(uVar5 >> 0x20);
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xa4))(param_1);
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0xe4))(param_1);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x1b4);
    (*(uint *)(gen_frame + 0xc)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x14)) = (int)uVar5;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x20001;
    (*(uint *)(gen_frame + 0x10)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x28));
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x4)),0x20);
  }
  if ((*(int * PTR32 *)((int)this + 8) != (int *)0x0) &&
     ((*(int * PTR32 *)((int)this + 8) != param_1 || (*(int *)((int)this + 0x5c) != 0)))) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("pOwnerSound_ == 0 || (pOwnerSound_ == pSound && state_ == STATE_RUNNABLE)",
                    &REFG(undefined, 0x112caae),"Track.cpp",0x17b,"SQEX::CDev::Engine::Sd::Driver::Track::Attach")
    ;
  }
  if ((*(int *)((int)this + 0x5c) != 0) && (*(int *)((int)this + 0x5c) != 999)) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ == STATE_RUNNABLE || state_ == STATE_RESERVED",&REFG(undefined, 0x112caaf),"Track.cpp"
                    ,0x17c,"SQEX::CDev::Engine::Sd::Driver::Track::Attach");
  }
  *(int * PTR32 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x1bc) = param_2;
  if (*(int *)((int)this + 0x5c) == 999) {
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  piVar4 = (int *)F_00cea080();
  *(int * PTR32 *)((int)this + 4) = piVar4;
  if (piVar4 == (int *)0x0) {
    *(undefined4 *)((int)this + 0x5c) = 6;
    *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
    uVar2 = 0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4,this);
    piVar4 = *(int * PTR32 *)((int)this + 8);
    if ((piVar4 == (int *)0x0) ||
       (uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x15c))(piVar4), uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068))), (char)uVar2 == '\0'))
    {
      *(float *)((int)this + 0x268) = (float)(float10)1;
      *(float *)((int)this + 0x26c) = (float)(float10)0;
    }
    else {
      *(undefined4 *)((int)this + 0x268) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x268), REFG(float, 0x1088068));
      *(undefined4 *)((int)this + 0x26c) = uVar1;
    }
  }
  if ((*(int *)((int)this + 0x5c) != 0) || (*(int *)((int)this + 8) != 0)) {
    uVar2 = F_00cda360(this);
    *(undefined1 *)((int)this + 0xa6) = 1;
  }
  return uVar2;
}

/* ref: FUN_00cd87f0 */
uint F_00cd87f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd87f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  float10 fVar2;
  uint uVar3;
  undefined1 * puVar4;
  float10 extraout_ST0;
  
  puVar4 = *((undefined1 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c)));
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20b))) = 0;
  if (puVar4 != &REFG(undefined, 0x5)) {
    if (((puVar4 != (undefined1 *)0x0) && (puVar4 != &REFG(undefined, 0x6))) &&
       (puVar4 != (undefined1 *)0x3e7)) {
      if (puVar4 == (undefined1 *)0x3) {
        *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x208))) = 0;
        *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20a))) = 0;
        uVar3 = F_00cd8330((*(undefined * PTR32 *)&gen_args[0]),5);
        return uVar3;
      }
      if (puVar4 != (undefined1 *)0x1) {
        if ((puVar4 != (undefined1 *)0x2) && (puVar4 != &REFG(undefined, 0x4))) {
          uVar3 = F_00cc1d20((undefined *)((int)&(*(int *)&gen_args[1]) + 3),&REFG(undefined, 0x112d07c),&REFG(undefined, 0x112cb13),"Track.cpp",
                               0x387,"SQEX::CDev::Engine::Sd::Driver::Track::Stop");
          return uVar3;
        }
        if ((*(int *)&gen_args[1]) != 0) {
          extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) + 0x10))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60);
          fVar2 = (float10)0;
          if ((GEN_ISNAN(fVar2) || GEN_ISNAN(extraout_ST0)) ==
              ((GEN_ISNAN(fVar2) || GEN_ISNAN(extraout_ST0)) || fVar2 == extraout_ST0)) {
            uVar3 = F_00cccd90((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60,(float)fVar2,(*(int *)&gen_args[1]));
            *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 4;
            *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0xffffffff;
            return uVar3;
          }
        }
        piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
        if (piVar1 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1);
        }
        (*(int *)&gen_args[1]) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
        F_00cbe1a0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(uint)&(*(int *)&gen_args[1]));
        uVar3 = F_00cdb430((*(undefined * PTR32 *)&gen_args[0]));
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 4;
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0xffffffff;
        return uVar3;
      }
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1);
      }
      (*(int *)&gen_args[1]) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
      uVar3 = F_00cbe1a0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(uint)&(*(int *)&gen_args[1]));
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0xffffffff;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 4;
      return uVar3;
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 5;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0xffffffff;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0xffffffff;
    puVar4 = F_00c48350(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),0,0x30);
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) {
      puVar4 = (undefined1 *)F_00cd82b0((*(undefined * PTR32 *)&gen_args[0]));
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00cd8980 */
uint F_00cd8980(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd8980u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  float10 extraout_ST0;
  float10 fVar5;
  float fVar6;
  
  iVar1 = (*(int *)&gen_args[2]);
  if ((*(int *)&gen_args[2]) == 0) {
    F_00cccbd0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60,(*(float *)&gen_args[1]));
    fVar6 = F_00cd83d0((*(undefined * PTR32 *)&gen_args[0]));
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x4c))))
                (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),(undefined4)gen_fl2bits(fVar6));
    }
    (*(int *)&gen_args[2]) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
    uVar2 = F_00cbddc0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,fVar6,(uint)&(*(int *)&gen_args[2]));
  }
  else {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) + 0x10))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60); uVar2 = extraout_ST0;
    fVar5 = (float10)(*(float *)&gen_args[1]);
    bVar3 = GEN_ISNAN(fVar5) || GEN_ISNAN(extraout_ST0);
    bVar4 = bVar3 || fVar5 == extraout_ST0;
    uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                     (ushort)!(extraout_ST0 <= fVar5) << 8 | (ushort)bVar3 << 10 |
                     (ushort)bVar4 << 0xe);
    if (bVar3 == bVar4) {
      uVar2 = F_00cccd90((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60,(*(float *)&gen_args[1]),iVar1);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00cd8a30 */
uint F_00cd8a30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcd8a30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  float fVar3;
  
  uVar2 = F_00c51673((double)param_2);
  if (uVar2 != 0) {
    param_2 = (float)(float10)1;
  }
  F_00cccc10((int)param_1 + 0x60,param_2);
  if ((*(int *)((int)param_1 + 8) != 0) && (*(int *)((int)param_1 + 4) != 0)) {
    iVar1 = **(int * PTR32 *)((int)param_1 + 4);
    fVar3 = F_00cd83d0(param_1);
    uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x4c))
                      (*(undefined4 *)((int)param_1 + 4),(undefined4)gen_fl2bits(fVar3));
  }
  return uVar2;
}

/* ref: FUN_00cd8a90 */
uint F_00cd8a90(unsigned int gen_a0)
{
  GEN_ENTER(0xcd8a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 uVar2;
  double dVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*(int *)((int)this + 0x5c) == 999) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ != STATE_RESERVED",&REFG(undefined, 0x112cac9),"Track.cpp",0x1a1,
                    "SQEX::CDev::Engine::Sd::Driver::Track::Detach");
  }
  if (*(int *)((int)this + 8) == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("pOwnerSound_ != 0",&REFG(undefined, 0x112caca),"Track.cpp",0x1a2,
                    "SQEX::CDev::Engine::Sd::Driver::Track::Detach");
  }
  F_00cd87f0(this,0);
  if (*(int *)((int)this + 8) != 0) {
    uVar5 = F_00427d90();
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xa4))))(*(int * PTR32 *)((int)this + 8));
    piVar1 = *(int * PTR32 *)((int)this + 8);
    (*(uint *)(gen_frame + 0x28)) = uVar4;
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0xe4))(piVar1);
    uVar2 = *(undefined4 *)((int)this + 0x1b4);
    (*(uint *)(gen_frame + 0x10)) = uVar4;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0x20002;
    (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
    (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x28));
    (*(ulonglong *)(gen_frame + 0x18)) = uVar5;
    F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x8)),0x20);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  F_00c48350((undefined *)((int)this + 0x2c),0,0x30);
  F_00cd82b0(this);
  F_00cea180(*(undefined4 *)((int)this + 4));
  dVar3 = *(double *)&REFG(undefined, 0x1097260) * 0.0;
  *(undefined4 *)((int)this + 4) = 0;
  (*(uint *)(gen_frame + 0x28)) = (int)dVar3;
  uVar4 = F_00cbe1a0((int)this + 0xc,(uint)&(*(uint *)(gen_frame + 0x28)));
  return uVar4;
}

/* ref: FUN_00cd8c00 */
uint F_00cd8c00(unsigned int gen_a0)
{
  GEN_ENTER(0xcd8c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00cd87f0(this,0);
  if (*(int *)((int)this + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x8c))))(*(int * PTR32 *)((int)this + 4),0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x40))))(*(int * PTR32 *)((int)this + 4));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  F_00cbe1a0((int)this + 0xc,(uint)&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  uVar1 = F_00cd8a90(this);
  return uVar1;
}

/* ref: FUN_00cd9930 */
uint F_00cd9930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd9930u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  int iVar2;
  int * piVar3;
  ushort uVar4;
  float10 fVar5;
  ulonglong uVar6;
  byte bVar7;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 fVar11;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) == 0) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 6;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0xffffffff;
  }
  else {
    in_EAX = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c)));
    if (in_EAX != 6) {
      if (in_EAX != 0) {
        if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
          REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
        }
        ((code *)REFG(gen_code32, 0x15d861c))("state_ == STATE_RUNNABLE",&REFG(undefined, 0x112cb07),"Track.cpp",0x2a9,
                        "SQEX::CDev::Engine::Sd::Driver::Track::Seek");
      }
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 3;
      bVar7 = F_00cd81a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))));
      if (bVar7 == 0) {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 4;
        return CONCAT31(extraout_var,bVar7);
      }
      (*(uint *)(gen_frame + 0x18)) = (*(uint *)&gen_args[1]);
      fVar1 = (float)(float10)0;
      uVar8 = (*(uint *)&gen_args[1]);
      do {
        (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar1);
        (*(uint *)(gen_frame + 0x18)) = uVar8;
        if ((int)uVar8 < 1) {
LAB_00cd9cbc: ;
          extraout_ST0_02 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228))) + 0x10))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228);
          extraout_ST0_03 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) + 0x10))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84);
          piVar3 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
          fVar1 = ((float)GEN_TOF(((extraout_ST0_03 * (float10)(double)extraout_ST0_02) *
                         (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ec))))));
          if (piVar3 != (int *)0x0) {
            ((code *)*(gen_code32 *)(*piVar3 + 0x80))(piVar3,(undefined4)gen_fl2bits(fVar1));
          }
          (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
          (*(double *)(gen_frame + 0x10)) = gen_bits2d(CONCAT44((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x10)) + 0))));
          F_00cbdeb0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,fVar1,(int)&(*(double *)(gen_frame + 0x10)) + 4);
          uVar8 = F_00cdafb0((*(undefined * PTR32 *)&gen_args[0]));
          if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
            fVar5 = (float10)0;
            fVar11 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1]))));
            uVar4 = (ushort)((GEN_ISNAN(fVar11) || GEN_ISNAN(fVar5)) || fVar11 == fVar5);
            uVar8 = CONCAT22((short)(uVar8 >> 0x10),
                             (ushort)!(fVar5 <= fVar11) << 8 |
                             (ushort)(GEN_ISNAN(fVar11) || GEN_ISNAN(fVar5)) << 10 | uVar4 << 0xe);
            if (!(fVar5 <= fVar11) == 0 && uVar4 == 0) {
              *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))) = (int)gen_bits2f((*(uint *)&gen_args[1]));
              return CONCAT31((int3)((uint)(int)gen_bits2f((*(uint *)&gen_args[1])) >> 8),1);
            }
          }
          return CONCAT31((int3)(uVar8 >> 8),1);
        }
        if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) < 0) {
          uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x154))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))));
          if ((char)uVar8 == '\0') {
            *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0xffffffff;
            *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 6;
            return uVar8 & 0xffffff00;
          }
          (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)((float10)(int)(*(uint *)(gen_frame + 0x18)) + ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1]))))))
          ;
          goto LAB_00cd9cbc;
        }
        F_00cd9050((*(undefined * PTR32 *)&gen_args[0]),(float)(float10)0,gen_bits2f((unsigned int)(1)));
        uVar9 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
        if (uVar9 != 0) {
          if ((int)(uVar8 - uVar9) < 0) {
            (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) = gen_bits2f(uVar8);
            uVar9 = uVar8;
          }
          else {
            (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) = gen_bits2f(uVar9);
          }
          (*(double *)(gen_frame + 0x10)) = gen_bits2d(CONCAT44(uVar9,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x10)) + 0))));
          if (((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x208))) == '\0') &&
              (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20a))) == '\0')) ||
             (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x209))) != '\0')) {
            *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x209))) = 0;
            (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)(float10)0);
          }
          extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) + 0xc))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60); uVar8 = extraout_ST0;
          if ((((char)uVar8 != '\0') &&
              (((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) + 0x14))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60,uVar9),
              *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) == 4)) &&
             (((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) + 0x10))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60),
             bVar10 = GEN_ISNAN((float10)0) || GEN_ISNAN(extraout_ST0),
             bVar10 != (bVar10 || (float10)0 == extraout_ST0))) {
            uVar8 = F_00cc1d20((undefined *)((int)&(*(undefined4 *)&gen_args[2]) + 3),&REFG(undefined, 0x112d00c),&REFG(undefined, 0x112cb12),"Track.cpp"
                                 ,0x2d9,"SQEX::CDev::Engine::Sd::Driver::Track::Seek");
            *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 6;
            *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0xffffffff;
            return uVar8 & 0xffffff00;
          }
          uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) + 0xc))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8);
          if ((char)uVar8 != '\0') {
            ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) + 0x14))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8,uVar9);
          }
          uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) + 0xc))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc);
          if ((char)uVar8 != '\0') {
            ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) + 0x14))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc,uVar9);
          }
          iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100)));
          uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0))) + 0xc))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0);
          if ((char)uVar8 != '\0') {
            ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0))) + 0x14))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0,uVar9);
          }
          if (((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) & 4) != 0) && (iVar2 < (int)uVar9)) {
            *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) & 0xfffffffb;
            if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600))) == 0) {
              F_00cccbd0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0,GEN_TOF(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c)))));
            }
            else {
              F_00cccbd0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0,(float)(float10)1);
              F_00cccd90((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0,GEN_TOF(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c)))),
                           *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600))));
              ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0))) + 0x14))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0,uVar9 - iVar2)
              ;
            }
            *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600))) = 0;
            *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c))) = (float)(float10)1;
          }
          uVar8 = (*(uint *)(gen_frame + 0x18));
          if (0 < (int)uVar9) {
            uVar6 = (ulonglong)gen_d2bits((*(double *)(gen_frame + 0x10))) >> 0x20;
            do {
              uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) + 0xc))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84);
              if ((char)uVar8 != '\0') {
                ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) + 0x14))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84,1);
              }
              uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228))) + 0xc))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228);
              if ((char)uVar8 != '\0') {
                ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228))) + 0x14))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228,1);
              }
              extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228))) + 0x10))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228);
              (*(double *)(gen_frame + 0x10)) = (double)extraout_ST0_00;
              extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) + 0x10))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84);
              (*(int *)(gen_frame + 0xc)) = (int)uVar6;
              uVar6 = (ulonglong)((*(int *)(gen_frame + 0xc)) - 1U);
              fVar1 = ((float)GEN_TOF(((extraout_ST0_01 * (float10)(*(double *)(gen_frame + 0x10))) *
                             (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ec))))));
              (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) = fVar1;
              (*(double *)(gen_frame + 0x10)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar1),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x10)) + 0))));
              (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)((float10)fVar1 + ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1]))))));
              uVar8 = (*(uint *)(gen_frame + 0x18));
            } while ((*(int *)(gen_frame + 0xc)) - 1U != 0);
          }
        }
        uVar8 = uVar8 - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
        (*(uint *)(gen_frame + 0x18)) = uVar8;
        if ((int)uVar8 < 0) {
          *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f);
          goto LAB_00cd9cbc;
        }
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
        fVar1 = gen_bits2f((*(uint *)&gen_args[1]));
      } while( true );
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00cd9d70 */
unsigned int F_00cd9d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd9d70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  float10 fVar3;
  byte bVar4;
  uint uVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float fVar6;
  
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20b))) != '\0') {
    return 0;
  }
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20c))) != '\0') {
    return 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c)));
  if (iVar1 == 5) {
    return 0;
  }
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 == 3) {
    return 0;
  }
  if (iVar1 == 6) {
    return 0;
  }
  if (((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 4)) {
    return 0;
  }
  if (((iVar1 == 4) && (bVar4 = F_00cea270((*(undefined * PTR32 *)&gen_args[0])), bVar4 == 0)) &&
     (bVar4 = F_00cbc040(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)))), bVar4 == 0)) {
    if (-1 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)))) {
      F_00cc1d20((undefined *)((int)&(*(int *)&gen_args[1]) + 3),&REFG(undefined, 0x112d0e8),&REFG(undefined, 0x112cb2d),"Track.cpp",0x471,
                   "SQEX::CDev::Engine::Sd::Driver::Track::Update");
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0xffffffff;
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 5;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0xffffffff;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0xffffffff;
    F_00c48350(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),0,0x30);
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
      return 0;
    }
    F_00cd82b0((*(undefined * PTR32 *)&gen_args[0]));
    return 0;
  }
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x208))) != '\0') {
    if (((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))) < 1) ||
        (piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))), piVar2 == (int *)0x0)) ||
       (uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x34))(piVar2,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0)))),
       (char)uVar5 == '\x01')) {
      F_00cdb3a0((*(undefined * PTR32 *)&gen_args[0]));
    }
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x208))) = 0;
  }
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20a))) != '\0') {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))) < 1) {
      (*(float *)(gen_frame + 0x14)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
      F_00cbdf90((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(uint)&(*(float *)(gen_frame + 0x14)),0);
    }
    else {
      F_00cbd990(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),0);
    }
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20a))) = 0;
  }
  fVar6 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e4))) * (float10)(*(int *)&gen_args[1]))));
  (*(float *)(gen_frame + 0x14)) = fVar6;
  F_00cd9050((*(undefined * PTR32 *)&gen_args[0]),fVar6,gen_bits2f((unsigned int)(0)));
  (*(char *)(gen_frame + 0x1a)) = '\0';
  (*(char *)(gen_frame + 0x1b)) = '\0';
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) + 0xc))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60);
  if ((char)uVar5 != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) + 8))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60,(*(int *)&gen_args[1]));
    (*(char *)(gen_frame + 0x1b)) = '\x01';
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0))) + 0xc))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0);
  if ((char)uVar5 == '\0') {
    if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) & 4) != 0) {
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) & 0xfffffffb;
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600))) == 0) {
        F_00cccbd0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0,GEN_TOF(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c)))));
        *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c))) = (float)(float10)1;
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600))) = 0;
      }
      else {
        F_00cccd90((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0,GEN_TOF(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c)))),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600))));
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0))) + 8))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0,(*(int *)&gen_args[1]));
        *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c))) = (float)(float10)1;
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600))) = 0;
      }
      goto LAB_00cd9fbe;
    }
    if ((*(char *)(gen_frame + 0x1b)) != '\0') goto LAB_00cd9fbe;
  }
  else {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0))) + 8))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0,(*(int *)&gen_args[1]));
LAB_00cd9fbe: ;
    fVar6 = F_00cd83d0((*(undefined * PTR32 *)&gen_args[0]));
    (*(float *)((char *)&(*(double *)(gen_frame + 0xc)) + 4)) = fVar6;
    (*(double *)(gen_frame + 0xc)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar6),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0xc)) + 0))));
    if (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != (int *)0x0) {
      iVar1 = **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      fVar6 = F_00cd83d0((*(undefined * PTR32 *)&gen_args[0]));
      ((code *)*(gen_code32 *)(iVar1 + 0x4c))(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),(undefined4)gen_fl2bits(fVar6));
    }
    fVar6 = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
    (*(float *)(gen_frame + 0x14)) = fVar6;
    F_00cbddc0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(*(float *)((char *)&(*(double *)(gen_frame + 0xc)) + 4)),(uint)&(*(float *)(gen_frame + 0x14)));
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) == 4) {
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) + 0x10))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60);
      fVar3 = (float10)*(float *)&REFG(undefined, 0x1088114);
      if (!(fVar3 <= extraout_ST0) != ((GEN_ISNAN(extraout_ST0) || GEN_ISNAN(fVar3)) || extraout_ST0 == fVar3))
      {
        piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
        if (piVar2 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2);
        }
        F_00cdb430((*(undefined * PTR32 *)&gen_args[0]));
        (*(float *)((char *)&(*(double *)(gen_frame + 0xc)) + 4)) = fVar6;
        (*(double *)(gen_frame + 0xc)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar6),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0xc)) + 0))));
        F_00cbe1a0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(int)&(*(double *)(gen_frame + 0xc)) + 4);
      }
    }
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) + 0xc))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84);
  if ((char)uVar5 != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) + 8))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84,(*(int *)&gen_args[1]));
    (*(char *)(gen_frame + 0x1a)) = '\x01';
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228))) + 0xc))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228);
  if ((char)uVar5 == '\0') {
    if ((*(char *)(gen_frame + 0x1a)) == '\0') goto LAB_00cda116;
  }
  else {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228))) + 8))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228,(*(int *)&gen_args[1]));
  }
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228))) + 0x10))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228);
  (*(double *)(gen_frame + 0xc)) = (double)extraout_ST0_00;
  extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) + 0x10))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84);
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  fVar6 = ((float)GEN_TOF(((extraout_ST0_01 * (float10)(*(double *)(gen_frame + 0xc))) * (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ec))))));
  (*(float *)(gen_frame + 0x14)) = fVar6;
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x80))(piVar2,(undefined4)gen_fl2bits(fVar6));
  }
  (*(float *)((char *)&(*(double *)(gen_frame + 0xc)) + 4)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
  (*(double *)(gen_frame + 0xc)) = gen_bits2d(CONCAT44((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0xc)) + 0))));
  F_00cbdeb0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(*(float *)(gen_frame + 0x14)),(int)&(*(double *)(gen_frame + 0xc)) + 4);
LAB_00cda116: ;
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) + 0xc))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8);
  iVar1 = (*(int *)&gen_args[1]);
  if ((char)uVar5 != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) + 8))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8,(*(int *)&gen_args[1]));
    F_00cdafb0((*(undefined * PTR32 *)&gen_args[0]));
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) + 0xc))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc);
  if ((char)uVar5 != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) + 8))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc,iVar1);
    F_00cdafb0((*(undefined * PTR32 *)&gen_args[0]));
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,iVar1);
  }
  return 0;
}

/* ref: FUN_00cda190 */
uint F_00cda190(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcda190u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cda1a0 */
uint F_00cda1a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcda1a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 4) = param_2;
  return in_ecx;
}

/* ref: FUN_00cda1b0 */
uint F_00cda1b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcda1b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 8) = param_2;
  return in_ecx;
}

/* ref: FUN_00cda220 */
uint F_00cda220(unsigned int gen_a0)
{
  GEN_ENTER(0xcda220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  F_00c48350((undefined *)((int)this + 0x10),0,0x30);
  return (uint)this;
}

/* ref: FUN_00cda290 */
uint F_00cda290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcda290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cda2d0 */
uint F_00cda2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcda2d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return param_2;
}

/* ref: FUN_00cda2e0 */
uint F_00cda2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcda2e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cda310 */
unsigned int F_00cda310(unsigned int gen_a0)
{
  GEN_ENTER(0xcda310u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  F_00cccb40(in_ecx + 0x28);
  F_00cccb40(in_ecx + 4);
  return 0;
}

/* ref: FUN_00cda360 */
uint F_00cda360(unsigned int gen_a0)
{
  GEN_ENTER(0xcda360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  uint extraout_EAX = 0;
  float fVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa4))(piVar1);
    in_EAX = F_00cc2760();
    if (uVar2 == in_EAX) {
      fVar3 = F_00cc2740();
      *(float *)((int)this + 0x1e4) = fVar3;
      *(float *)((int)this + 0x1ec) =
           ((float)GEN_TOF((((((float10)*(float *)((int)this + 0x1d8) *
                     (float10)*(float *)((int)this + 0x1c8)) *
                    (float10)*(float *)((int)this + 0x220)) * (float10)*(float *)((int)this + 0x224)
                   ) * (float10)fVar3)));
      return extraout_EAX;
    }
  }
  *(float *)((int)this + 0x1ec) =
       ((float)GEN_TOF(((((float10)*(float *)((int)this + 0x1d8) * (float10)*(float *)((int)this + 0x1c8)) *
               (float10)*(float *)((int)this + 0x220)) * (float10)*(float *)((int)this + 0x224))));
  return in_EAX;
}

/* ref: FUN_00cda3e0 */
uint F_00cda3e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcda3e0u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  return *param_1;
}

/* ref: FUN_00cda3f0 */
float F_00cda3f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcda3f0u, gen_a0, 0u, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  return *param_1;
}

/* ref: FUN_00cda400 */
uint F_00cda400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcda400u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  
  fVar1 = *(float *)(param_1 + 0xc4);
  uVar2 = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x1a4);
  uVar3 = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(param_2 + 4) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(param_2 + 8) = uVar3;
  *(undefined4 *)(param_2 + 0xc) = uVar2;
  fVar6 = F_00cccde0((undefined *)(param_1 + 0xa8));
  fVar1 = ((float)GEN_TOF(((float10)*(float *)param_2 + (float10)(float)((float10)fVar6 + (float10)fVar1))));
  fVar4 = (float10)fVar1;
  *(float *)param_2 = fVar1;
  fVar5 = (float10)REFG(float, 0x1090708);
  if (fVar4 <= fVar5 && ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar4)) && fVar5 != fVar4)) {
    *(float *)param_2 = GEN_FLT_TO(*(float *)param_2, REFG(float, 0x1090708));
  }
  fVar4 = (float10)1;
  if (!((float10)*(float *)param_2 <= fVar4) == (GEN_ISNAN(fVar4) || GEN_ISNAN((float10)*(float *)param_2))) {
    return param_2;
  }
  *(float *)param_2 = (float)fVar4;
  return param_2;
}

/* ref: FUN_00cda4b0 */
uint F_00cda4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xcda4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  return (uint)this;
}

/* ref: FUN_00cda700 */
byte F_00cda700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcda700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)((int)this + 0x1c);
  if ((*(byte *)((int)this + 0x24c) & 0x20) == 0) {
    iVar3 = *((int *)GEN_TOP((iVar2 + *(int *)((int)this + 0x24))));
    *(int *)((int)this + 0x1c) = iVar2 + 4;
    *(int *)((int)this + 0x20) = *param_1 + iVar3;
  }
  else {
    fVar1 = *((float *)GEN_TOP((iVar2 + *(int *)((int)this + 0x24))));
    *(int *)((int)this + 0x1c) = iVar2 + 4;
    iVar2 = (int)fVar1;
    *param_2 = (float)((float10)fVar1 - (float10)iVar2);
    *(int *)((int)this + 0x20) = *param_1 + iVar2;
  }
  if (0 < *(int *)((int)this + 0x20)) {
    *param_1 = 0;
    return 1;
  }
  *param_1 = *(int *)((int)this + 0x20);
  return 0;
}

/* ref: FUN_00cda780 */
uint F_00cda780(unsigned int gen_a0)
{
  GEN_ENTER(0xcda780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + *(int *)((int)this + 0x24))));
  uVar2 = *(int *)((int)this + 0x1c) + 4;
  *(uint *)((int)this + 0x1c) = uVar2;
  if (*(int *)((int)this + 4) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x8c))))(*(int * PTR32 *)((int)this + 4),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00cda8f0 */
uint F_00cda8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcda8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cd6fd0((undefined *)((int)this + 0x1c),param_1);
  return uVar1;
}

/* ref: FUN_00cda900 */
uint F_00cda900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcda900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  if ((*(byte *)((int)this + 0x24c) & 0x20) != 0) {
    uVar2 = F_00cd70b0((undefined *)((int)this + 0x1c),param_1);
    return uVar2;
  }
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + *(int *)((int)this + 0x24))));
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 4;
  uVar2 = *((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x28) * 0x10 + 0x30))) * iVar1;
  if (-1 < *(int *)((int)this + 0x28)) {
    uVar2 = uVar2 + *(int *)((int)this + 0x20);
    *(uint *)((int)this + 0x20) = ((int)uVar2 < 1) - 1 & uVar2;
  }
  return uVar2;
}

/* ref: FUN_00cda950 */
float F_00cda950(unsigned int gen_a0)
{
  GEN_ENTER(0xcda950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  int iVar3;
  float10 in_ST0 = 0;
  float10 fVar4;
  float10 fVar5;
  float10 extraout_ST1 = 0;
  float fVar6;
  
  iVar3 = *(int *)((int)this + 0x1c);
  fVar1 = *((float *)GEN_TOP((iVar3 + *(int *)((int)this + 0x24))));
  *(int *)((int)this + 0x1c) = iVar3 + 4;
  fVar2 = *((float *)GEN_TOP((iVar3 + 4 + *(int *)((int)this + 0x24))));
  *(int *)((int)this + 0x1c) = iVar3 + 8;
  fVar4 = (float10)fVar2;
  fVar5 = (float10)fVar1;
  if (!(fVar4 <= fVar5) != (GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4))) {
    fVar6 = F_00a4b7d0();
    fVar5 = (float10)fVar1;
    fVar5 = (float10)fVar6 * ((float10)fVar2 - fVar5) + fVar5;
    in_ST0 = extraout_ST1;
  }
  *(float *)((int)this + 0x218) = (float)fVar5;
  *(float *)((int)this + 0x1e8) =
       ((float)GEN_TOF((((float10)*(float *)((int)this + 0x1c4) * (float10)*(float *)((int)this + 0x218)) *
              (float10)*(float *)((int)this + 0x21c))));
  return (float)in_ST0;
}

/* ref: FUN_00cda9d0 */
uint F_00cda9d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcda9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + *(int *)((int)this + 0x24))));
  uVar2 = *(int *)((int)this + 0x1c) + 4;
  *(uint *)((int)this + 0x1c) = uVar2;
  if (*(int *)((int)this + 4) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x54))))(*(int * PTR32 *)((int)this + 4),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00cdaa00 */
uint F_00cdaa00(unsigned int gen_a0)
{
  GEN_ENTER(0xcdaa00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 0x1c);
  uVar2 = *((undefined4 *)GEN_TOP((iVar1 + *(int *)((int)this + 0x24))));
  uVar4 = iVar1 + 4;
  *(uint *)((int)this + 0x1c) = uVar4;
  if (*(int *)((int)this + 4) != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((uVar4 + *(int *)((int)this + 0x24))));
    *(int *)((int)this + 0x1c) = iVar1 + 8;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x50))))(*(int * PTR32 *)((int)this + 4),uVar2,uVar3);
  }
  return uVar4;
}

/* ref: FUN_00cdab10 */
uint F_00cdab10(unsigned int gen_a0)
{
  GEN_ENTER(0xcdab10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 0x1c);
  uVar2 = *((undefined4 *)GEN_TOP((iVar1 + *(int *)((int)this + 0x24))));
  uVar4 = iVar1 + 4;
  *(uint *)((int)this + 0x1c) = uVar4;
  if (*(int *)((int)this + 4) != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((uVar4 + *(int *)((int)this + 0x24))));
    *(int *)((int)this + 0x1c) = iVar1 + 8;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 100))))(*(int * PTR32 *)((int)this + 4),uVar2,uVar3,0);
  }
  return uVar4;
}

/* ref: FUN_00cdab40 */
uint F_00cdab40(unsigned int gen_a0)
{
  GEN_ENTER(0xcdab40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 0x1c);
  uVar2 = *((undefined4 *)GEN_TOP((iVar1 + *(int *)((int)this + 0x24))));
  uVar4 = iVar1 + 4;
  *(uint *)((int)this + 0x1c) = uVar4;
  if (*(int *)((int)this + 4) != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((uVar4 + *(int *)((int)this + 0x24))));
    *(int *)((int)this + 0x1c) = iVar1 + 8;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x68))))(*(int * PTR32 *)((int)this + 4),uVar2,uVar3);
  }
  return uVar4;
}

/* ref: FUN_00cdab70 */
uint F_00cdab70(unsigned int gen_a0)
{
  GEN_ENTER(0xcdab70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar1 = *(int *)((int)this + 0x1c);
  uVar2 = *((undefined4 *)GEN_TOP((iVar1 + *(int *)((int)this + 0x24))));
  *(int *)((int)this + 0x1c) = iVar1 + 4;
  uVar3 = *((undefined4 *)GEN_TOP((iVar1 + 4 + *(int *)((int)this + 0x24))));
  *(int *)((int)this + 0x1c) = iVar1 + 8;
  uVar4 = *((undefined4 *)GEN_TOP((iVar1 + 8 + *(int *)((int)this + 0x24))));
  uVar5 = iVar1 + 0xc;
  *(uint *)((int)this + 0x1c) = uVar5;
  if (*(int *)((int)this + 4) != 0) {
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 100))))
                      (*(int * PTR32 *)((int)this + 4),uVar2,uVar3,uVar4);
  }
  return uVar5;
}

/* ref: FUN_00cdac70 */
float F_00cdac70(unsigned int gen_a0)
{
  GEN_ENTER(0xcdac70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  int iVar2;
  int * piVar3;
  float10 fVar4;
  float10 fVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float fVar6;
  
  iVar2 = *(int *)((int)this + 0x1c);
  fVar1 = *((float *)GEN_TOP((iVar2 + *(int *)((int)this + 0x24))));
  *(int *)((int)this + 0x1c) = iVar2 + 4;
  fVar6 = *((float *)GEN_TOP((iVar2 + 4 + *(int *)((int)this + 0x24))));
  (*(float *)(gen_frame + 0x8)) = fVar6;
  *(int *)((int)this + 0x1c) = iVar2 + 8;
  fVar4 = (float10)fVar6;
  fVar5 = (float10)fVar1;
  if (!(fVar4 <= fVar5) != (GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4))) {
    fVar6 = F_00a4b7d0();
    fVar5 = (float10)fVar1;
    fVar5 = (float10)fVar6 * ((float10)(*(float *)(gen_frame + 0x8)) - fVar5) + fVar5;
  }
  *(float *)((int)this + 0x220) = (float)fVar5;
  F_00cda360(this);
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x228) + 0x10))))((int)this + 0x228);
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x84) + 0x10))))((int)this + 0x84);
  piVar3 = *(int * PTR32 *)((int)this + 4);
  fVar1 = ((float)GEN_TOF(((extraout_ST0_00 * (float10)(double)extraout_ST0) *
                 (float10)*(float *)((int)this + 0x1ec))));
  if (piVar3 != (int *)0x0) {
    extraout_ST0_01 = ((gen_fcode *)*(gen_code32 *)(*piVar3 + 0x80))(piVar3,(undefined4)gen_fl2bits(fVar1));
  }
  (*(float *)(gen_frame + 0x8)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
  F_00cbdeb0((int)this + 0xc,fVar1,(uint)&(*(float *)(gen_frame + 0x8)));
  return (float)extraout_ST0_01;
}

/* ref: FUN_00cdad40 */
float F_00cdad40(unsigned int gen_a0)
{
  GEN_ENTER(0xcdad40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  int iVar2;
  int * piVar3;
  float10 fVar4;
  float10 fVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float fVar6;
  
  iVar2 = *(int *)((int)this + 0x1c);
  fVar1 = *((float *)GEN_TOP((iVar2 + *(int *)((int)this + 0x24))));
  *(int *)((int)this + 0x1c) = iVar2 + 4;
  fVar6 = *((float *)GEN_TOP((iVar2 + 4 + *(int *)((int)this + 0x24))));
  (*(float *)(gen_frame + 0x8)) = fVar6;
  *(int *)((int)this + 0x1c) = iVar2 + 8;
  fVar4 = (float10)fVar6;
  fVar5 = (float10)fVar1;
  if (!(fVar4 <= fVar5) != (GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4))) {
    fVar6 = F_00a4b7d0();
    fVar5 = (float10)fVar1;
    fVar5 = (float10)fVar6 * ((float10)(*(float *)(gen_frame + 0x8)) - fVar5) + fVar5;
  }
  *(float *)((int)this + 0x224) = (float)fVar5;
  F_00cda360(this);
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x228) + 0x10))))((int)this + 0x228);
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x84) + 0x10))))((int)this + 0x84);
  piVar3 = *(int * PTR32 *)((int)this + 4);
  fVar1 = ((float)GEN_TOF(((extraout_ST0_00 * (float10)(double)extraout_ST0) *
                 (float10)*(float *)((int)this + 0x1ec))));
  if (piVar3 != (int *)0x0) {
    extraout_ST0_01 = ((gen_fcode *)*(gen_code32 *)(*piVar3 + 0x80))(piVar3,(undefined4)gen_fl2bits(fVar1));
  }
  (*(float *)(gen_frame + 0x8)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
  F_00cbdeb0((int)this + 0xc,fVar1,(uint)&(*(float *)(gen_frame + 0x8)));
  return (float)extraout_ST0_01;
}

/* ref: FUN_00cdaec0 */
byte F_00cdaec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdaec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  int local_10;
  
  uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + *(int *)((int)this + 0x24))));
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 4;
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + *(int *)((int)this + 0x24))));
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 4;
  if (uVar2 < uVar1) {
    fVar5 = F_00a4b7d0();
    iVar3 = uVar1 - uVar2;
    fVar4 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    local_10 = (int)(longlong)TRUNC(fVar4 * (float10)fVar5);
    uVar2 = local_10 + uVar2;
  }
  iVar3 = uVar2 + *param_1;
  *(int *)((int)this + 0x20) = iVar3;
  if (0 < iVar3) {
    *param_1 = 0;
    return 1;
  }
  *param_1 = iVar3;
  return 0;
}

/* ref: FUN_00cdaf50 */
uint F_00cdaf50(unsigned int gen_a0)
{
  GEN_ENTER(0xcdaf50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *(int *)((int)this + 0x1c);
  cVar1 = *((char *)GEN_TOP((iVar2 + *(int *)((int)this + 0x24))));
  uVar5 = iVar2 + 4;
  *(uint *)((int)this + 0x1c) = uVar5;
  iVar3 = *((int *)GEN_TOP((uVar5 + *(int *)((int)this + 0x24))));
  iVar2 = iVar2 + 8;
  *(int *)((int)this + 0x1c) = iVar2;
  if (cVar1 == '\x01') {
    uVar4 = *(uint *)((int)this + 0x28);
    uVar5 = uVar4;
    if (-1 < (int)uVar4) {
      uVar5 = uVar4 * 2;
      if (*(int *)((int)this + uVar4 * 0x10 + 0x30) == 0) {
        *(int *)((int)this + 0x1c) = iVar2 + iVar3;
        return uVar4 * 2;
      }
    }
  }
  else if (((cVar1 == '\x02') &&
           (uVar4 = *(uint *)((int)this + 0x28), uVar5 = uVar4, -1 < (int)uVar4)) &&
          (uVar5 = uVar4 * 2, *(int *)((int)this + uVar4 * 0x10 + 0x30) != 0)) {
    *(int *)((int)this + 0x1c) = iVar2 + iVar3;
  }
  return uVar5;
}

/* ref: FUN_00cdafb0 */
uint F_00cdafb0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdafb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  
  uVar1 = *(uint *)((int)this + 0x5c);
  if (((uVar1 != 5) && (uVar1 != 6)) && (piVar2 = *(int * PTR32 *)((int)this + 8), piVar2 != (int *)0x0)) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x174))(piVar2);
    if ((char)uVar1 != '\0') {
      *(byte *)((int)this + 0x204) = *(byte *)((int)this + 0x204) | 4;
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x130))))(*(int * PTR32 *)((int)this + 8));
    if ((char)uVar1 != '\0') {
      *(float *)((int)this + 0x1fc) = (float)(float10)1;
    }
    *(byte *)((int)this + 0x204) = *(byte *)((int)this + 0x204) & 0xef;
    piVar2 = (int *)F_00d2cce0();
    if (piVar2 != (int *)0x0) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x34))(piVar2);
      if (uVar1 == 2) {
        piVar2 = (int *)F_00d2ccd0();
        if (piVar2 != (int *)0x0) {
          uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xec))(piVar2);
          if ((char)uVar1 != '\0') {
            uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xa4))))(*(int * PTR32 *)((int)this + 8));
            F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),uVar1);
            uVar1 = F_00cbb300(((undefined1 *)(gen_frame + 0xc)));
            if (uVar1 != 1) {
              if ((uVar1 != 2) || (piVar2 = *(int * PTR32 *)((int)this + 4), piVar2 == (int *)0x0))
              goto LAB_00cdb086;
              uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xb0))(piVar2);
              if ((char)uVar1 != '\x04') goto LAB_00cdb086;
            }
            *(byte *)((int)this + 0x204) = *(byte *)((int)this + 0x204) | 0x10;
LAB_00cdb086: ;
            F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
            uVar1 = F_00cd6780(this);
            return uVar1;
          }
        }
        *(byte *)((int)this + 0x204) = *(byte *)((int)this + 0x204) | 0x10;
      }
    }
    uVar1 = F_00cd6780(this);
  }
  return uVar1;
}

/* ref: FUN_00cdb0b0 */
float F_00cdb0b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdb0b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  
  iVar2 = *(int *)((int)this + 0x1c);
  fVar1 = *((float *)GEN_TOP((*(int *)((int)this + 0x24) + iVar2)));
  uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x24) + 4 + iVar2)));
  *(int *)((int)this + 0x1c) = iVar2 + 8;
  fVar4 = F_00cd74c0(this,fVar1,uVar3);
  return (float)fVar4;
}

/* ref: FUN_00cdb130 */
float F_00cdb130(unsigned int gen_a0)
{
  GEN_ENTER(0xcdb130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  undefined4 uVar2;
  bool bVar3;
  float10 in_ST0 = 0;
  float10 fVar4;
  
  uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + *(int *)((int)this + 0x24))));
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 4;
  *(undefined4 *)((int)this + 0x250) = uVar2;
  fVar1 = *((float *)GEN_TOP((*(int *)((int)this + 0x1c) + *(int *)((int)this + 0x24))));
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 4;
  fVar4 = (float10)fVar1;
  bVar3 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar4);
  if (bVar3 == (bVar3 || (float10)0 == fVar4)) {
    fVar4 = F_00cd74c0(this,fVar1,0);
    return (float)fVar4;
  }
  return (float)in_ST0;
}

/* ref: FUN_00cdb340 */
unsigned int F_00cdb340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdb340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 == -1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("offset != -1",&REFG(undefined1, 0x107fc63),
                    "d:\\ffxiv\\trunk\\prog\\externals\\cdev_sd\\sd\\cdev\\engine\\sd\\driver\\Track.h"
                    ,0x2a2,"SQEX::CDev::Engine::Sd::Driver::Track::CommandAnalyzer::setReadOffset");
  }
  *(int *)this = param_1;
  return 0;
}

/* ref: FUN_00cdb3a0 */
unsigned int F_00cdb3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdb3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar4 = F_00427d90();
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xa4))))(*(int * PTR32 *)((int)this + 8));
    (*(uint *)(gen_frame + 0x28)) = uVar3;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xe4))))(*(int * PTR32 *)((int)this + 8));
    uVar1 = *(undefined4 *)((int)this + 0x1b4);
    (*(uint *)(gen_frame + 0x10)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0x20003;
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x28));
    (*(ulonglong *)(gen_frame + 0x18)) = uVar4;
    F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x8)),0x20);
  }
  piVar2 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)((int)this + 0x5c) = 2;
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x30))(piVar2);
  }
  *(uint *)((int)this + 0x214) = *(uint *)((int)this + 0x214) | 0x20;
  return 0;
}

/* ref: FUN_00cdb430 */
uint F_00cdb430(unsigned int gen_a0)
{
  GEN_ENTER(0xcdb430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined1 * in_ecx;
  uint * puVar4;
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  in_ecx = ((undefined1 *)(gen_frame + 0x4));
  iVar3 = 3;
  do {
    F_00cea700(in_ecx);
    in_ecx = in_ecx + 0x54;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1,((undefined1 *)(gen_frame + 0x4)));
  }
  F_00cea180(*(undefined4 *)((int)this + 4));
  piVar1 = (int *)F_00cea080();
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)((int)this + 0x5c) = 6;
    *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
    uVar2 = 0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,this);
    if (*(int *)((int)this + 4) != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x74))(piVar1,((undefined1 *)(gen_frame + 0x4)));
    }
  }
  *(int * PTR32 *)((int)this + 4) = piVar1;
  iVar3 = 3;
  puVar4 = &(*(uint *)(gen_frame + 0x158));
  do {
    F_00cccb40(puVar4 + -0xc);
    F_00cccb40(puVar4 + -0x15);
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + -0x15;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
  return uVar2;
}

/* ref: FUN_00cdb500 */
byte F_00cdb500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdb500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((char)param_1 != '\0') {
    *(undefined1 *)((int)this + 0x208) = 1;
    *(undefined2 *)((int)this + 0x209) = 1;
    return 0;
  }
  F_00cdb3a0(this);
  return 1;
}

/* ref: FUN_00cdb540 */
uint F_00cdb540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdb540u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  int * piVar2;
  uint in_EAX = 0;
  uint uVar3;
  ulonglong uVar4;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    uVar4 = F_00427d90();
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0xa4))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))));
    (*(uint *)(gen_frame + 0x28)) = uVar3;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0xe4))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))));
    uVar1 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b4)));
    (*(uint *)(gen_frame + 0x10)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0x20004;
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x28));
    (*(ulonglong *)(gen_frame + 0x18)) = uVar4;
    in_EAX = F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x8)),0x20);
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if ((short)(*(int *)&gen_args[1]) == 0x24) {
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2);
    }
    (*(int *)&gen_args[1]) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
    F_00cbe1a0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(uint)&(*(int *)&gen_args[1]));
    uVar3 = F_00cdb430((*(undefined * PTR32 *)&gen_args[0]));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x214))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x214))) & 0xffffffdf;
    return uVar3;
  }
  if (piVar2 != (int *)0x0) {
    in_EAX = ((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2);
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) | 8;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x214))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x214))) & 0xffffffdf;
  return in_EAX;
}

/* ref: FUN_00cdb9c0 */
float F_00cdb9c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdb9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  float10 extraout_ST0;
  float fVar3;
  float fVar4;
  
  fVar4 = *((float *)GEN_TOP((*(int *)((int)this + 0x24) + *(int *)((int)this + 0x1c))));
  iVar2 = *(int *)((int)this + 0x1c) + 8;
  fVar3 = *((float *)GEN_TOP((*(int *)((int)this + 0x24) + -4 + iVar2)));
  *(int *)((int)this + 0x1c) = iVar2;
  (*(float *)(gen_frame + 0x4)) = fVar3;
  fVar3 = F_00a4b7d0();
  fVar4 = ((float)GEN_TOF(((float10)fVar3 * ((float10)fVar4 - (float10)(*(float *)(gen_frame + 0x4))) + (float10)(*(float *)(gen_frame + 0x4)))));
  (*(float *)(gen_frame + 0x8)) = fVar4;
  *(float *)((int)this + 0x1c4) = fVar4;
  *(float *)((int)this + 0x1e8) =
       ((float)GEN_TOF((((float10)fVar4 * (float10)*(float *)((int)this + 0x218)) *
              (float10)*(float *)((int)this + 0x21c))));
  fVar4 = F_00cd83d0(this);
  piVar1 = *(int * PTR32 *)((int)this + 4);
  (*(float *)(gen_frame + 0x8)) = fVar4;
  if (piVar1 != (int *)0x0) {
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,(undefined4)gen_fl2bits(fVar4));
  }
  (*(float *)(gen_frame + 0x4)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
  F_00cbddc0((int)this + 0xc,(*(float *)(gen_frame + 0x8)),(uint)&(*(float *)(gen_frame + 0x4)));
  return (float)extraout_ST0;
}

/* ref: FUN_00cdba60 */
byte F_00cdba60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdba60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  uint3 uVar8;
  int iVar7;
  float fVar9;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  piVar3 = (int *)F_00cd7cc0(this);
  uVar1 = param_1[1];
  if ((short)uVar1 < 0) {
    uVar4 = F_00a4b840();
    uVar1 = *((ushort *)GEN_TOP((*(int *)(param_1 + 2) +
             ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) % (int)(short)param_1[1]) *
             2)));
  }
  if (((piVar3 == (int *)0x0) || (piVar3[4] != (uint)*param_1)) ||
     ((*(byte *)(piVar3 + 0x12) & 8) != 0)) {
    piVar6 = (int *)F_00d2ccd0();
    piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x90))(piVar6,(uint)*param_1)));
    if ((piVar6 == (int *)0x0) || ((*(byte *)(piVar6 + 0x12) & 8) != 0)) goto LAB_00cdbc30;
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0x14))(piVar6,(int)(short)uVar1);
    uVar8 = (uint3)((uint)((int)(uintptr_t)piVar3) >> 8);
    if (*(int *)((int)this + 8) == 0) {
      iVar7 = (uint)uVar8 << 8;
    }
    else {
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x15c))))(*(int * PTR32 *)((int)this + 8));
      iVar7 = CONCAT31(uVar8,(char)uVar5);
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x104))))(*(int * PTR32 *)((int)this + 8));
    bVar2 = F_00cd7980(this,uVar4,iVar7,uVar5 & 0xff);
    if (bVar2 == 0) goto LAB_00cdbb18;
    if (*(int *)((int)this + 4) != 0) {
      iVar7 = **(int * PTR32 *)((int)this + 4);
      goto LAB_00cdbbbb;
    }
  }
  else {
    if (((char)param_2 == '\0') &&
       ((*(int *)((int)this + 8) == 0 ||
        (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x15c))))(*(int * PTR32 *)((int)this + 8)),
        (char)uVar4 == '\0')))) {
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) & 0xffffff00;
    }
    else {
      (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),1);
    }
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x104))))(*(int * PTR32 *)((int)this + 8));
    uVar4 = uVar4 & 0xff;
    uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3,(int)(short)uVar1);
    bVar2 = F_00cd7980(this,uVar5,(*(uint *)(gen_frame + 0x4)),uVar4);
    if (bVar2 == 0) {
LAB_00cdbb18: ;
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return 0;
    }
    if (*(int *)((int)this + 4) != 0) {
      iVar7 = **(int * PTR32 *)((int)this + 4);
LAB_00cdbbbb: ;
      fVar9 = F_00cd83d0(this);
      ((code *)*(gen_code32 *)(iVar7 + 0x4c))(*(undefined4 *)((int)this + 4),(undefined4)gen_fl2bits(fVar9));
      iVar7 = **(int * PTR32 *)((int)this + 4);
      fVar9 = F_00cd68f0(this);
      ((code *)*(gen_code32 *)(iVar7 + 0x80))(*(undefined4 *)((int)this + 4),(undefined4)gen_fl2bits(fVar9));
      iVar7 = **(int * PTR32 *)((int)this + 4);
      uVar4 = F_00cda400(this,(uint)((undefined1 *)(gen_frame + 0x8)));
      ((code *)*(gen_code32 *)(iVar7 + 0x7c))(*(undefined4 *)((int)this + 4),uVar4);
    }
  }
  F_00cd6780(this);
  fVar9 = F_00cccde0((undefined *)((int)this + 0xcc));
  F_00cccbd0((int)this + 0xcc,fVar9);
  F_00cdafb0(this);
LAB_00cdbc30: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 1;
}

/* ref: FUN_00cdbc50 */
float F_00cdbc50(unsigned int gen_a0)
{
  GEN_ENTER(0xcdbc50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  float10 extraout_ST0;
  float fVar2;
  
  fVar2 = *((float *)GEN_TOP((*(int *)((int)this + 0x1c) + *(int *)((int)this + 0x24))));
  (*(float *)(gen_frame + 0x8)) = fVar2;
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 4;
  *(float *)((int)this + 0x21c) = fVar2;
  *(float *)((int)this + 0x1e8) =
       ((float)GEN_TOF((((float10)*(float *)((int)this + 0x218) * (float10)*(float *)((int)this + 0x1c4)) *
              (float10)fVar2)));
  fVar2 = F_00cd83d0(this);
  piVar1 = *(int * PTR32 *)((int)this + 4);
  (*(float *)(gen_frame + 0x8)) = fVar2;
  if (piVar1 != (int *)0x0) {
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,(undefined4)gen_fl2bits(fVar2));
  }
  (*(int *)(gen_frame + 0x4)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  F_00cbddc0((int)this + 0xc,(*(float *)(gen_frame + 0x8)),(uint)&(*(int *)(gen_frame + 0x4)));
  return (float)extraout_ST0;
}

/* ref: FUN_00cdbcd0 */
byte F_00cdbcd0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdbcd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  
  if (*(int *)((int)this + 0x5c) == 5) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ != STATE_FINISHED",&REFG(undefined1, 0x107fc63),"Track.cpp",0x8f9,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetMidiVoice");
  }
  iVar1 = *(int *)((int)this + 0x5c);
  if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) && (iVar1 != 3)) {
    return 0;
  }
  if (*(int *)((int)this + 8) == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("pOwnerSound_ != 0",&REFG(undefined1, 0x107fc63),"Track.cpp",0x8ff,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetMidiVoice");
  }
  bVar2 = F_00cdba60(this,(int)this + 0x270,1);
  return bVar2;
}

/* ref: FUN_00cdbd90 */
byte F_00cdbd90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcdbd90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int in_ecx;
  int * piVar1;
  double dVar2;
  byte bVar3;
  float fVar4;
  
  if (((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) & 1) != 0) && ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) & 2) == 0))
  {
    F_00cdbc50((*(undefined * PTR32 *)&gen_args[0]));
    fVar4 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))))));
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 4;
    F_00cd74c0((*(undefined * PTR32 *)&gen_args[0]),fVar4,*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x250))));
    return 0;
  }
  if ((*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0)) == '\0') {
    F_00cdb540((*(undefined * PTR32 *)&gen_args[0]),0x24);
  }
  else {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x208))) = 0;
    dVar2 = *(double *)&REFG(undefined, 0x1097260) * 0.0;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20a))) = 0;
    (*(float *)(gen_frame + 0x8)) = gen_bits2f((int)dVar2);
    F_00cbe1a0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(uint)&(*(float *)(gen_frame + 0x8)));
  }
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) & 0x10) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228))) + 4))))
              ((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228,(undefined4)gen_fl2bits((float)(float10)1));
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) & 0xfffffffb | 0x10;
  bVar3 = F_00cdbcd0((*(undefined * PTR32 *)&gen_args[0]));
  if (bVar3 == 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + -2;
    return 0;
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) & 0xfffffffd;
  F_00cdbc50((*(undefined * PTR32 *)&gen_args[0]));
  fVar4 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))))));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 4;
  (*(float *)(gen_frame + 0x8)) = fVar4;
  F_00cd74c0((*(undefined * PTR32 *)&gen_args[0]),fVar4,*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x250))));
  in_ecx = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254))) == 0) {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600))) == 0) {
      F_00cccbd0(in_ecx,GEN_TOF(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c)))));
      fVar4 = F_00cd83d0((*(undefined * PTR32 *)&gen_args[0]));
      (*(float *)(gen_frame + 0x8)) = fVar4;
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,(undefined4)gen_fl2bits(fVar4));
      }
      (*(int *)(gen_frame + 0x4)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
      F_00cbddc0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(*(float *)(gen_frame + 0x8)),(uint)&(*(int *)(gen_frame + 0x4)));
    }
    else {
      F_00cccbd0(in_ecx,(float)(float10)1);
      F_00cccd90((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0,GEN_TOF(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c)))),
                   *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600))));
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600))) = 0;
    }
    *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c))) = (float)(float10)1;
  }
  else {
    F_00cccbd0(in_ecx,(float)(float10)0);
    F_00cccd90((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0,(float)(float10)1,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254))));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) | 4;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254))) = 0;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x260))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x8c))(piVar1,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x260))));
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x260))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x88))
              (piVar1,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x268))),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26c))));
  }
  if ((*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0)) != '\0') {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x208))) = 1;
    *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x209))) = 1;
    return 0;
  }
  F_00cdb3a0((*(undefined * PTR32 *)&gen_args[0]));
  return 1;
}

/* ref: FUN_00cdbfe0 */
byte F_00cdbfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdbfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int in_ecx;
  uint uVar1;
  int * piVar2;
  double dVar3;
  byte bVar4;
  float fVar5;
  
  uVar1 = *(uint *)((int)this + 0x24c);
  if (((uVar1 & 1) != 0) && ((uVar1 & 2) == 0)) {
    return 0;
  }
  *(uint *)((int)this + 0x24c) = uVar1 & 0xfffffffd;
  if ((char)param_1 == '\0') {
    F_00cdb540(this,0x24);
  }
  else {
    *(undefined1 *)((int)this + 0x208) = 0;
    dVar3 = *(double *)&REFG(undefined, 0x1097260) * 0.0;
    *(undefined1 *)((int)this + 0x20a) = 0;
    (*(float *)(gen_frame + 0x8)) = gen_bits2f((int)dVar3);
    F_00cbe1a0((int)this + 0xc,(uint)&(*(float *)(gen_frame + 0x8)));
  }
  if ((*(byte *)((int)this + 0x24c) & 0x10) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x228) + 4))))
              ((int)this + 0x228,(undefined4)gen_fl2bits((float)(float10)1));
  }
  *(uint *)((int)this + 0x24c) = *(uint *)((int)this + 0x24c) & 0xfffffffb | 0x10;
  bVar4 = F_00cdbcd0(this);
  if (bVar4 == 0) {
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + -2;
    return 0;
  }
  in_ecx = (int)this + 0xf0;
  if (*(int *)((int)this + 0x254) == 0) {
    if (*(int *)((int)this + 600) == 0) {
      F_00cccbd0(in_ecx,*(float *)((int)this + 0x25c));
      fVar5 = F_00cd83d0(this);
      (*(float *)(gen_frame + 0x8)) = fVar5;
      piVar2 = *(int * PTR32 *)((int)this + 4);
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,(undefined4)gen_fl2bits(fVar5));
      }
      (*(int *)(gen_frame + 0x4)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
      F_00cbddc0((int)this + 0xc,(*(float *)(gen_frame + 0x8)),(uint)&(*(int *)(gen_frame + 0x4)));
    }
    else {
      F_00cccbd0(in_ecx,(float)(float10)1);
      F_00cccd90((int)this + 0xf0,*(float *)((int)this + 0x25c),*(undefined4 *)((int)this + 600));
      *(undefined4 *)((int)this + 600) = 0;
    }
    *(float *)((int)this + 0x25c) = (float)(float10)1;
  }
  else {
    F_00cccbd0(in_ecx,(float)(float10)0);
    F_00cccd90((int)this + 0xf0,(float)(float10)1,*(undefined4 *)((int)this + 0x254));
    *(uint *)((int)this + 0x24c) = *(uint *)((int)this + 0x24c) | 4;
    *(undefined4 *)((int)this + 0x254) = 0;
  }
  if ((*(int *)((int)this + 0x260) != 0) &&
     (piVar2 = *(int * PTR32 *)((int)this + 4), piVar2 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x8c))(piVar2,*(int *)((int)this + 0x260));
  }
  piVar2 = *(int * PTR32 *)((int)this + 4);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x88))
              (piVar2,*(undefined4 *)((int)this + 0x268),*(undefined4 *)((int)this + 0x26c));
  }
  if ((char)param_1 != '\0') {
    *(undefined1 *)((int)this + 0x208) = 1;
    *(undefined2 *)((int)this + 0x209) = 1;
    return 0;
  }
  F_00cdb3a0(this);
  return 1;
}

/* ref: FUN_00cdc1e0 */
uint F_00cdc1e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdc1e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int * piVar4;
  uint uVar5;
  float fVar6;
  
  iVar2 = *(int *)((int)this + 0x1c);
  fVar1 = *((float *)GEN_TOP((*(int *)((int)this + 0x24) + iVar2)));
  uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + iVar2 + 4)));
  *(int *)((int)this + 0x1c) = iVar2 + 8;
  F_00cccbd0((int)this + 0x60,*(float *)((int)this + 0x1d0));
  fVar6 = F_00cd83d0(this);
  (*(float *)(gen_frame + 0x8)) = fVar6;
  piVar4 = *(int * PTR32 *)((int)this + 4);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0x4c))(piVar4,(undefined4)gen_fl2bits(fVar6));
  }
  (*(int *)(gen_frame + 0x4)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  F_00cbddc0((int)this + 0xc,(*(float *)(gen_frame + 0x8)),(uint)&(*(int *)(gen_frame + 0x4)));
  uVar5 = F_00cd8980(this,fVar1,uVar3);
  *(float *)((int)this + 0x1d0) = fVar1;
  return uVar5;
}

/* ref: FUN_00cdc280 */
byte F_00cdc280(unsigned int gen_a0)
{
  GEN_ENTER(0xcdc280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x5c) == 5) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("state_ != STATE_FINISHED",&REFG(undefined1, 0x107fc63),"Track.cpp",0xae4,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetExternalAudio");
  }
  iVar2 = *(int *)((int)this + 0x5c);
  if ((((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 2)) && (iVar2 != 3)) {
    return 0;
  }
  if (*(int *)((int)this + 8) == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("pOwnerSound_ != 0",&REFG(undefined1, 0x107fc63),"Track.cpp",0xaf2,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetExternalAudio");
  }
  iVar2 = *(int *)((int)this + 0x1c);
  iVar4 = *(int *)((int)this + 0x24) + iVar2;
  (*(undefined2 *)(gen_frame + 0x4)) = *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x24) + iVar2)));
  sVar1 = *(short *)(iVar4 + 2);
  (*(short *)(gen_frame + 0x6)) = sVar1;
  if (-1 < sVar1) {
    *(int *)((int)this + 0x1c) = iVar2 + 4;
    bVar3 = F_00cdba60(this,&(*(undefined2 *)(gen_frame + 0x4)),0);
    return bVar3;
  }
  (*(int *)(gen_frame + 0x8)) = iVar4 + 4;
  *(int *)((int)this + 0x1c) = iVar2 + (2 - sVar1) * 2;
  bVar3 = F_00cdba60(this,&(*(undefined2 *)(gen_frame + 0x4)),0);
  return bVar3;
}

/* ref: FUN_00cdc550 */
uint F_00cdc550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcdc550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  F_00cd38f0(this,param_1,param_2,param_3,param_4,param_5,1,param_6,param_7);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112d8dc));
  return (uint)this;
}

/* ref: FUN_00cdc590 */
unsigned int F_00cdc590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdc590u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cdc5c0 */
uint F_00cdc5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcdc5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: SQEX::CDev::Engine::Sd::Driver::AtomosgearSound::vf0 */
uint F_00cdc660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdc660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112d8dc));
  F_00cd3df0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cdc690 */
uint F_00cdc690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcdc690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  F_00cdd250(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112dadc));
  return (uint)this;
}

/* ref: FUN_00cdc6d0 */
unsigned int F_00cdc6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdc6d0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OrderSound::vf107 */
byte F_00cdc700(unsigned int gen_a0)
{
  GEN_ENTER(0xcdc700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined * pOVar8;
  int iVar9;
  undefined * pOVar10;
  undefined4 local_30;
  short local_28;
  short sStack_26;
  int local_1c;
  uint local_18;
  undefined * local_14;
  uint local_c;
  int local_8;
  
  piVar1 = *(int * PTR32 *)(this + 0xc);
  uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1);
  if (uVar4 < 2) {
    local_18 = 0;
  }
  else {
    local_18 = (uint)*(ushort *)(this + 0x1c);
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1,local_18);
  if (this[0x13] == (undefined1)0x5) {
    uVar4 = (int)(uVar4 + 1) % (int)(uint)(byte)this[0x10];
    uVar5 = (uint)*(ushort *)(this + uVar4 * 8 + 0x398);
    *(uint *)(this + 0x344) = uVar5;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc),uVar5);
    F_00cd78c0(*(undefined * PTR32 *)(this + 0x2c0),uVar6,uVar5);
    if ((*(ushort *)(this + uVar4 * 8 + 0x39a) & 0x4000) == 0) {
      piVar2 = *(int * PTR32 *)(this + 0xc);
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,(uint)(byte)this[0x2b8]);
      uVar5 = uVar5 & 0xff;
      uVar6 = (uint)*(ushort *)(this + uVar4 * 8 + 0x39a);
      uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
      F_00cd7980(*(undefined * PTR32 *)(this + 0x2c0),uVar7,uVar6,uVar5);
    }
  }
  else {
    local_c = uVar4;
    if ((int)uVar4 < 0) {
      local_30 = 0xffff0000;
    }
    else {
      local_30 = *(undefined4 *)(this + uVar4 * 8 + 0x39c);
    }
    while ((-1 < (int)uVar4 || ((int)(local_c + 1) < (int)(uint)(byte)this[0x10]))) {
      local_c = (int)(local_c + 1) % (int)(uint)(byte)this[0x10];
      uVar5 = *(uint *)(this + local_c * 8 + 0x398);
      local_28 = (short)*(undefined4 *)(this + local_c * 8 + 0x39c);
      sStack_26 = (short)((uint)*(undefined4 *)(this + local_c * 8 + 0x39c) >> 0x10);
      if ((uVar4 == local_c) || (((short)((uint)local_30 >> 0x10) != sStack_26 && (local_28 == 0))))
      goto LAB_00cdc85f;
    }
    uVar5 = *(uint *)(this + 0x398);
    local_c = 0;
    sStack_26 = (short)((uint)*(undefined4 *)(this + 0x39c) >> 0x10);
LAB_00cdc85f: ;
    *(uint *)(this + 0x344) = uVar5 & 0xffff;
    local_8 = 0;
    if ((int)local_c < (int)(uint)(byte)this[0x10]) {
      pOVar10 = this + 0x2c0;
      pOVar8 = this + local_c * 8 + 0x398;
      local_14 = (undefined *)local_c;
      do {
        if (sStack_26 != *(short *)(pOVar8 + 6)) break;
        uVar4 = *(uint *)pOVar8;
        uVar5 = uVar4 >> 0x10;
        uVar6 = uVar4 & 0xffff;
        sStack_26 = (short)(*(uint *)(pOVar8 + 4) >> 0x10);
        uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc),uVar6);
        F_00cd78c0(*(undefined * PTR32 *)pOVar10,uVar7,uVar6);
        if ((uVar4 & 0x40000000) == 0) {
          piVar2 = *(int * PTR32 *)(this + 0xc);
          uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,(uint)(byte)this[0x2b8]);
          uVar4 = uVar4 & 0xff;
          uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
          F_00cd7980(*(undefined * PTR32 *)pOVar10,uVar6,uVar5,uVar4);
        }
        local_8 = local_8 + 1;
        local_14 = (undefined *)((int)local_14 + 1);
        pOVar10 = pOVar10 + 4;
        pOVar8 = pOVar8 + 8;
      } while ((int)local_14 < (int)(uint)(byte)this[0x10]);
    }
    sVar3 = -1;
    local_1c = 0;
    if (this[0x10] != (undefined1)0x0) {
      pOVar10 = this + 0x39e;
      do {
        uVar4 = *(uint *)(pOVar10 + -6);
        local_28 = (short)*(undefined4 *)(pOVar10 + -2);
        sStack_26 = (short)((uint)*(undefined4 *)(pOVar10 + -2) >> 0x10);
        if (((sStack_26 != sVar3) && (sVar3 = sStack_26, local_28 != 0)) &&
           (local_1c < (int)(uint)(byte)this[0x10])) {
          pOVar8 = this + local_8 * 4 + 0x2c0;
          iVar9 = local_1c;
          local_14 = pOVar10;
          do {
            if (sStack_26 != *(short *)local_14) break;
            uVar5 = uVar4 & 0xffff;
            uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc),uVar5);
            F_00cd78c0(*(undefined * PTR32 *)pOVar8,uVar6,uVar5);
            if ((uVar4 & 0x40000000) == 0) {
              piVar2 = *(int * PTR32 *)(this + 0xc);
              uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,(uint)(byte)this[0x2b8]);
              uVar6 = uVar6 & 0xff;
              uVar5 = uVar4 >> 0x10;
              uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
              F_00cd7980(*(undefined * PTR32 *)pOVar8,uVar7,uVar5,uVar6);
            }
            local_8 = local_8 + 1;
            local_14 = local_14 + 8;
            iVar9 = iVar9 + 1;
            pOVar8 = pOVar8 + 4;
          } while (iVar9 < (int)(uint)(byte)this[0x10]);
        }
        local_1c = local_1c + 1;
        pOVar10 = pOVar10 + 8;
      } while (local_1c < (int)(uint)(byte)this[0x10]);
    }
    if (local_8 < *(int *)(this + 700)) {
      pOVar10 = this + local_8 * 4 + 0x2c0;
      iVar9 = local_8;
      do {
        F_00cd8a90(*(undefined * PTR32 *)pOVar10);
        *(undefined4 *)pOVar10 = 0;
        iVar9 = iVar9 + 1;
        pOVar10 = pOVar10 + 4;
      } while (iVar9 < *(int *)(this + 700));
    }
    *(int *)(this + 700) = local_8;
    uVar4 = local_c;
  }
  ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,local_18,uVar4);
  return 1;
}

/* ref: FUN_00cdca80 */
uint F_00cdca80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcdca80u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: SQEX::CDev::Engine::Sd::Driver::RandomSound::vf53 */
uint F_00cdcb20(unsigned int gen_a0)
{
  GEN_ENTER(0xcdcb20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x344);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OrderSound::vf0 */
uint F_00cdcb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdcb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112dadc));
  F_00cdd3c0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cdcb60 */
ushort F_00cdcb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdcb60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = F_00a4b890(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00cdcb70 */
uint F_00cdcb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcdcb70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  F_00cdd250(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112dcdc));
  puVar3 = (undefined4 *)F_00ce9850(param_3,3);
  uVar1 = *puVar3;
  *(undefined4 *)((int)this + 0x420) = uVar1;
  uVar2 = puVar3[1];
  *(undefined4 *)((int)this + 0x428) = uVar1;
  *(undefined4 *)((int)this + 0x424) = uVar2;
  *(undefined1 *)((int)this + 0x42c) = 0;
  return (uint)this;
}

/* ref: FUN_00cdcbe0 */
unsigned int F_00cdcbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdcbe0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cdcc10 */
byte F_00cdcc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdcc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint * puVar10;
  int iVar11;
  uint uVar12;
  undefined4 * puVar13;
  undefined4 uVar14;
  ushort uStack_16;
  uint local_c;
  int local_8;
  
  iVar11 = 0;
  uVar3 = F_00a4b890(0,100);
  *(undefined4 *)((int)this + 0x344) = 0xffffffff;
  uVar4 = F_00d2e4f0();
  if ((char)param_1 == '\0') {
    local_8 = *(int *)((int)this + 700) + -1;
  }
  else {
    local_8 = 0;
  }
  if (-1 < (int)uVar4) {
    if ((int)uVar4 < (int)(uint)*(byte *)((int)this + 0x10)) {
      uVar4 = *(uint *)((int)this + uVar4 * 8 + 0x398);
      uVar5 = uVar4 & 0xffff;
      uVar7 = uVar4 >> 0x10;
      *(uint *)((int)this + 0x344) = uVar5;
      uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x10))))(*(int * PTR32 *)((int)this + 0xc),uVar5);
      F_00cd78c0(*(undefined * PTR32 *)((int)this + 0x2c0),uVar8,uVar5);
      if ((uVar4 & 0x40000000) == 0) {
        piVar2 = *(int * PTR32 *)((int)this + 0xc);
        uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,(uint)*(byte *)((int)this + 0x2b8));
        uVar4 = uVar4 & 0xff;
        uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
        F_00cd7980(*(undefined * PTR32 *)((int)this + 0x2c0),uVar5,uVar7,uVar4);
      }
    }
    return 1;
  }
  if (*(char *)((int)this + 0x10) != '\0') {
    puVar10 = (uint *)((int)this + 0x398);
    do {
      local_c = 0;
      if (0 < iVar11) {
        local_c = puVar10[-1];
      }
      uVar4 = puVar10[1];
      uStack_16 = (ushort)(*puVar10 >> 0x10);
      if (uVar4 == REFG(undefined4, 0x112dea0)) break;
      if ((uVar4 != local_c) &&
         (((uint)(int)(short)uVar3 <= uVar4 || (*(char *)((int)this + 0x418) != '\0')))) {
        piVar2 = *(int * PTR32 *)((int)this + 0xc);
        *(uint *)((int)this + 0x344) = *puVar10 & 0xffff;
        uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x20))(piVar2);
        if (uVar4 < 2) {
          local_c = 0;
        }
        else {
          local_c = (uint)*(ushort *)((int)this + 0x1c);
        }
        uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x58))(piVar2,local_c);
        if (*(uint *)((int)this + 0x344) == uVar4) {
          do {
            iVar11 = (iVar11 + 1) % (int)(uint)*(byte *)((int)this + 0x10);
            iVar9 = 0;
            if (0 < iVar11) {
              iVar9 = *(int *)((int)this + iVar11 * 8 + 0x394);
            }
            uVar4 = *(uint *)((int)this + iVar11 * 8 + 0x398);
            uStack_16 = (ushort)(uVar4 >> 0x10);
          } while (*(int *)((int)this + iVar11 * 8 + 0x39c) == iVar9);
          *(uint *)((int)this + 0x344) = uVar4 & 0xffff;
        }
        uVar14 = *(undefined4 *)((int)this + 0x344);
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x10))))(*(int * PTR32 *)((int)this + 0xc),uVar14)
        ;
        F_00cd78c0(*(undefined * PTR32 *)((int)this + local_8 * 4 + 0x2c0),uVar4,uVar14);
        if ((uStack_16 & 0x4000) == 0) {
          piVar1 = *(int * PTR32 *)((int)this + 0xc);
          uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,(uint)*(byte *)((int)this + 0x2b8));
          uVar4 = uVar4 & 0xff;
          uVar7 = (uint)uStack_16;
          uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
          F_00cd7980(*(undefined * PTR32 *)((int)this + local_8 * 4 + 0x2c0),uVar5,uVar7,uVar4);
        }
        local_8 = local_8 + 1;
        ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,local_c,*(undefined4 *)((int)this + 0x344));
        *(undefined1 *)((int)this + 0x42c) = 0;
        break;
      }
      iVar11 = iVar11 + 1;
      puVar10 = puVar10 + 2;
    } while (iVar11 < (int)(uint)*(byte *)((int)this + 0x10));
  }
  if ((char)param_1 != '\0') {
    local_c = 0;
    if (*(char *)((int)this + 0x10) != '\0') {
      param_1 = (undefined4 *)((int)this + local_8 * 4 + 0x2c0);
      puVar10 = (uint *)((int)this + 0x398);
      uVar4 = 0;
      do {
        uVar7 = *puVar10;
        uVar5 = puVar10[1];
        uVar8 = uVar7 >> 0x10;
        if (uVar4 == uVar5) {
          uVar12 = uVar7 & 0xffff;
          uVar4 = uVar12;
          uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x10))))
                            (*(int * PTR32 *)((int)this + 0xc),uVar12);
          F_00cd78c0((undefined *)*param_1,uVar6,uVar4);
          if ((uVar7 & 0x40000000) == 0) {
            piVar2 = *(int * PTR32 *)((int)this + 0xc);
            uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,(uint)*(byte *)((int)this + 0x2b8));
            uVar4 = uVar4 & 0xff;
            uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
            F_00cd7980((undefined *)*param_1,uVar7,uVar8,uVar4);
          }
          local_8 = local_8 + 1;
          param_1 = param_1 + 1;
          *(undefined1 *)((int)this + 0x42c) = 0;
          if (*(int *)((int)this + 0x344) < 0) {
            *(uint *)((int)this + 0x344) = uVar12;
          }
        }
        local_c = local_c + 1;
        puVar10 = puVar10 + 2;
        uVar4 = uVar5;
      } while ((int)local_c < (int)(uint)*(byte *)((int)this + 0x10));
    }
  }
  if (local_8 < *(int *)((int)this + 700)) {
    puVar13 = (undefined4 *)((int)this + local_8 * 4 + 0x2c0);
    iVar11 = local_8;
    do {
      F_00cd8a90((undefined *)*puVar13);
      *puVar13 = 0;
      iVar11 = iVar11 + 1;
      puVar13 = puVar13 + 1;
    } while (iVar11 < *(int *)((int)this + 700));
  }
  *(int *)((int)this + 700) = local_8;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CycleSound::vf78 */
uint F_00cdcf70(unsigned int gen_a0)
{
  GEN_ENTER(0xcdcf70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00cd28c0(in_ecx);
  if ((bVar1 != 0) && ((*(uint *)(in_ecx + 0xf8) >> 3 & 1) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CycleSound::vf104 */
unsigned int F_00cdcfa0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdcfa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x344) < 0) {
    this[0x42c] = (undefined1)0x1;
    return 0;
  }
  F_00cd1ff0((undefined *)this);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CycleSound::vf9 */
byte F_00cdcfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdcfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  undefined * pRVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  int local_14;
  int iStack_10;
  int local_c;
  undefined * local_8;
  
  bVar1 = F_00cd50e0(param_1,param_2);
  if (bVar1 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0xf8) >> 3 & 1) != 0) {
    return bVar1;
  }
  local_c = *(int *)(param_1 + 700);
  if (0 < local_c) {
    local_8 = param_1 + 0x2c0;
    iStack_10 = local_c;
    do {
      iVar4 = 0;
      if (param_1[0x10] != (undefined1)0x0) {
        pRVar2 = param_1 + 0x398;
        uVar3 = 0;
        do {
          if ((uVar3 == *(uint *)(pRVar2 + 4)) &&
             ((*(uint *)pRVar2 & 0xffff) == *(uint *)(*(int *)local_8 + 0x1b4))) {
            local_c = local_c + -1;
            break;
          }
          uVar3 = *(uint *)(pRVar2 + 4);
          iVar4 = iVar4 + 1;
          pRVar2 = pRVar2 + 8;
        } while (iVar4 < (int)(uint)(byte)param_1[0x10]);
      }
      local_8 = local_8 + 4;
      iStack_10 = iStack_10 + -1;
    } while (iStack_10 != 0);
  }
  if (((int)(uint)*(ushort *)(param_1 + 0x424) <= local_c) && (param_1[0x42c] == (undefined1)0x0))
  goto LAB_00cdd148;
  if (0 < (int)(*(int *)(param_1 + 0x428) - param_2)) {
    *(uint *)(param_1 + 0x428) = *(int *)(param_1 + 0x428) - param_2;
    goto LAB_00cdd148;
  }
  pRVar2 = param_1 + *(int *)(param_1 + 700) * 4 + 0x2c0;
  bVar1 = F_00cc2aa0(1,pRVar2,0);
  if (bVar1 == 0) {
    *(undefined4 *)(param_1 + 0x344) = 0xffffffff;
LAB_00cdd0f4: ;
    param_1[0x42c] = (undefined1)0x1;
  }
  else {
    F_00cd8640(*(undefined * PTR32 *)pRVar2,param_1,0);
    *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + 1;
    param_1[0x42] = (undefined1)0x1;
    fVar5 = F_00cd2330(param_1);
    F_00cd8a30(*(undefined4 *)pRVar2,fVar5);
    F_00cdcc10(param_1,0);
    if (*(int *)(param_1 + 0x344) < 0) goto LAB_00cdd0f4;
    F_00cd8390(*(undefined * PTR32 *)pRVar2);
  }
  fVar5 = F_00a4b7d0();
  local_14 = (int)(longlong)
                  TRUNC((float10)((float)GEN_TOF(((float10)*(ushort *)(param_1 + 0x426) * (float10)fVar5))));
  *(int *)(param_1 + 0x428) = local_14 + *(int *)(param_1 + 0x420);
LAB_00cdd148: ;
  uVar3 = ((code *)*(gen_code32 *)(*(int *)param_1 + 0x138))(param_1);
  return (char)uVar3 == '\0';
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CycleSound::vf107 */
byte F_00cdd170(unsigned int gen_a0)
{
  GEN_ENTER(0xcdd170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00cdcc10(this,1);
  return bVar1;
}

/* ref: FUN_00cdd180 */
uint F_00cdd180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcdd180u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: SQEX::CDev::Engine::Sd::Driver::CycleSound::vf0 */
uint F_00cdd220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdd220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112dcdc));
  F_00cdd3c0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cdd250 */
uint F_00cdd250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcdd250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 * puVar2;
  undefined * this_00;
  undefined4 * puVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  float fVar7;
  
  F_00cd38f0(this,param_1,param_2,param_3,param_4,param_5,0,param_6,param_7);
  iVar6 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112dee4));
  *(undefined1 *)((int)this + 0x418) = 0;
  if (0 < *(int *)((int)this + 700)) {
    puVar3 = (undefined4 *)((int)this + 0x2c0);
    do {
      F_00cd8640((undefined *)*puVar3,this,iVar6);
      iVar6 = iVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar6 < *(int *)((int)this + 700));
  }
  uVar1 = F_00ce9920(param_3,0,3);
  cVar4 = *(char *)((int)this + 0x10);
  puVar3 = (undefined4 *)(uVar1 + 0x10);
  puVar2 = (undefined4 *)((int)this + 0x39c);
  iVar6 = 4;
  do {
    if (cVar4 == '\0') {
      *puVar2 = 0xffffffff;
      cVar5 = cVar4;
LAB_00cdd324: ;
      puVar2[2] = 0xffffffff;
LAB_00cdd32b: ;
      puVar2[4] = 0xffffffff;
LAB_00cdd332: ;
      puVar2[6] = 0xffffffff;
      cVar4 = cVar5;
    }
    else {
      puVar2[-1] = puVar3[-4];
      *puVar2 = puVar3[-3];
      cVar5 = '\0';
      if (cVar4 == '\x01') goto LAB_00cdd324;
      puVar2[1] = puVar3[-2];
      puVar2[2] = puVar3[-1];
      cVar5 = '\0';
      if (cVar4 == '\x02') goto LAB_00cdd32b;
      puVar2[3] = *puVar3;
      puVar2[4] = puVar3[1];
      cVar5 = '\0';
      if (cVar4 == '\x03') goto LAB_00cdd332;
      puVar2[5] = puVar3[2];
      puVar2[6] = puVar3[3];
      cVar4 = cVar4 + -4;
    }
    puVar2 = puVar2 + 8;
    puVar3 = puVar3 + 8;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      if (1 < *(uint *)(param_2 + 0xc)) {
        *(undefined4 *)((int)this + 0x100) = *(undefined4 *)((int)this + 0x18);
        this_00 = (undefined *)F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),(uint)*(byte *)((int)this + 0x11));
        fVar7 = F_00cbb330(this_00);
        F_00cd2680(this,fVar7);
        F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
        *(undefined1 *)((int)this + 0x128) = 1;
        F_00cd2250(this,(float)(float10)1,0);
      }
      return (uint)this;
    }
  } while( true );
}

/* ref: FUN_00cdd3a0 */
unsigned int F_00cdd3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdd3a0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cdd3c0 */
uint F_00cdd3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdd3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112dee4));
  uVar1 = F_00cd3df0(this);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RandomSound::vf107 */
byte F_00cdd3d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdd3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short sVar9;
  undefined * pRVar10;
  int iVar11;
  int iVar12;
  undefined * pRVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  undefined4 uVar17;
  ushort uStack_2a;
  short sStack_26;
  short local_20;
  short sStack_1e;
  int local_18;
  uint local_14;
  undefined * local_c;
  uint local_8;
  
  local_14 = 0;
  uVar3 = F_00a4b890(0,100);
  *(undefined4 *)(this + 0x344) = 0xffffffff;
  uVar5 = F_00d2e4f0();
  if ((int)uVar5 < 0) {
    if (this[0x13] != (undefined1)0x2) {
      uVar5 = 0;
      local_8 = 0;
      sStack_26 = -1;
      if (this[0x10] == (undefined1)0x0) {
LAB_00cdd73d: ;
        sVar9 = 0;
        sVar4 = -1;
        local_14 = 0;
        if (this[0x10] != (undefined1)0x0) {
          pRVar10 = this + 0x39e;
          do {
            uVar5 = *(uint *)(pRVar10 + -6);
            local_20 = (short)*(undefined4 *)(pRVar10 + -2);
            sStack_1e = (short)((uint)*(undefined4 *)(pRVar10 + -2) >> 0x10);
            if (((sStack_1e != sVar4) &&
                (bVar16 = sVar9 == local_20, sVar4 = sStack_1e, sVar9 = local_20, bVar16)) &&
               (local_18 = local_14, (int)local_14 < (int)(uint)(byte)this[0x10])) {
              pRVar13 = this + local_8 * 4 + 0x2c0;
              local_c = pRVar10;
              do {
                if (sStack_1e != *(short *)local_c) break;
                uVar15 = uVar5 & 0xffff;
                uVar6 = uVar15;
                uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc),uVar15);
                F_00cd78c0(*(undefined * PTR32 *)pRVar13,uVar7,uVar6);
                if ((uVar5 & 0x40000000) == 0) {
                  piVar1 = *(int * PTR32 *)(this + 0xc);
                  uVar7 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,(uint)(byte)this[0x2b8]);
                  uVar7 = uVar7 & 0xff;
                  uVar6 = uVar5 >> 0x10;
                  uVar8 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
                  F_00cd7980(*(undefined * PTR32 *)pRVar13,uVar8,uVar6,uVar7);
                }
                local_8 = local_8 + 1;
                pRVar13 = pRVar13 + 4;
                if (*(int *)(this + 0x344) < 0) {
                  *(uint *)(this + 0x344) = uVar15;
                }
                local_c = local_c + 8;
                local_18 = local_18 + 1;
              } while (local_18 < (int)(uint)(byte)this[0x10]);
            }
            local_14 = local_14 + 1;
            pRVar10 = pRVar10 + 8;
          } while ((int)local_14 < (int)(uint)(byte)this[0x10]);
        }
        if ((int)local_8 < *(int *)(this + 700)) {
          pRVar10 = this + local_8 * 4 + 0x2c0;
          uVar5 = local_8;
          do {
            F_00cd8a90(*(undefined * PTR32 *)pRVar10);
            *(undefined4 *)pRVar10 = 0;
            uVar5 = uVar5 + 1;
            pRVar10 = pRVar10 + 4;
          } while ((int)uVar5 < *(int *)(this + 700));
        }
        *(uint *)(this + 700) = local_8;
        return 1;
      }
      pRVar10 = this + 0x398;
LAB_00cdd580: ;
      local_20 = (short)*(uint *)(pRVar10 + 4);
      sStack_1e = (short)(*(uint *)(pRVar10 + 4) >> 0x10);
      if (sStack_1e != sStack_26) {
        uVar6 = (uint)local_20;
        if ((uVar6 != (int)(short)uVar5 && -1 < (int)(uVar6 - (int)(short)uVar5)) &&
           (((uint)(int)(short)uVar3 <= uVar6 || (this[0x418] != (undefined1)0x0)))) {
          piVar1 = *(int * PTR32 *)(this + 0xc);
          *(uint *)(this + 0x344) = *(uint *)pRVar10 & 0xffff;
          uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1);
          if (uVar5 < 2) {
            local_c = (undefined *)0x0;
          }
          else {
            local_c = (undefined *)(uint)*(ushort *)(this + 0x1c);
          }
          uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1,local_c);
          if (*(uint *)(this + 0x344) == uVar5) {
            iVar14 = 0;
            local_14 = 0;
            iVar11 = 0;
            if (this[0x10] != (undefined1)0x0) {
              do {
                if (*(ushort *)(this + iVar11 * 8 + 0x398) != uVar5) {
                  if (iVar11 == 0) {
                    iVar12 = (int)*(short *)(this + 0x39c);
                  }
                  else {
                    iVar12 = (int)*(short *)(this + iVar11 * 8 + 0x39c) -
                             (int)*(short *)(this + iVar11 * 8 + 0x394);
                  }
                  if (iVar14 < iVar12) {
                    iVar14 = iVar12;
                    local_14 = iVar11;
                  }
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 < (int)(uint)(byte)this[0x10]);
            }
            sStack_1e = (short)((uint)*(undefined4 *)(this + local_14 * 8 + 0x39c) >> 0x10);
            *(uint *)(this + 0x344) = *(uint *)(this + local_14 * 8 + 0x398) & 0xffff;
          }
          if ((int)local_14 < (int)(uint)(byte)this[0x10]) {
            pRVar10 = this + 0x2c0;
            pRVar13 = this + local_14 * 8 + 0x398;
            do {
              if (sStack_1e != *(short *)(pRVar13 + 6)) break;
              uVar5 = *(uint *)pRVar13;
              uVar6 = uVar5 >> 0x10;
              uVar7 = uVar5 & 0xffff;
              sStack_1e = (short)(*(uint *)(pRVar13 + 4) >> 0x10);
              uVar15 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc),uVar7);
              F_00cd78c0(*(undefined * PTR32 *)pRVar10,uVar15,uVar7);
              if ((uVar5 & 0x40000000) == 0) {
                piVar2 = *(int * PTR32 *)(this + 0xc);
                uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,(uint)(byte)this[0x2b8]);
                uVar5 = uVar5 & 0xff;
                uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
                F_00cd7980(*(undefined * PTR32 *)pRVar10,uVar7,uVar6,uVar5);
              }
              local_8 = local_8 + 1;
              local_14 = local_14 + 1;
              pRVar10 = pRVar10 + 4;
              pRVar13 = pRVar13 + 8;
            } while ((int)local_14 < (int)(uint)(byte)this[0x10]);
          }
          ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,local_c,*(undefined4 *)(this + 0x344));
          goto LAB_00cdd73d;
        }
        uVar5 = *(uint *)(pRVar10 + 4);
        sStack_26 = (short)(uVar5 >> 0x10);
      }
      local_14 = local_14 + 1;
      pRVar10 = pRVar10 + 8;
      if ((int)(uint)(byte)this[0x10] <= (int)local_14) goto LAB_00cdd73d;
      goto LAB_00cdd580;
    }
    if (this[0x10] != (undefined1)0x0) {
      pRVar10 = this + 0x398;
      iVar14 = 0;
      while( true ) {
        local_14 = 0;
        if (0 < iVar14) {
          local_14 = *(uint *)(pRVar10 + -4);
        }
        uVar5 = *(uint *)(pRVar10 + 4);
        uStack_2a = (ushort)(*(uint *)((int)(uintptr_t)pRVar10) >> 0x10);
        if (uVar5 == 0xffffffff) break;
        if ((uVar5 != local_14) &&
           (((uint)(int)(short)uVar3 <= uVar5 || (this[0x418] != (undefined1)0x0)))) {
          piVar1 = *(int * PTR32 *)(this + 0xc);
          *(uint *)(this + 0x344) = *(uint *)pRVar10 & 0xffff;
          uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1);
          if (uVar5 < 2) {
            local_8 = 0;
          }
          else {
            local_8 = (uint)*(ushort *)(this + 0x1c);
          }
          uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1,local_8);
          if (*(uint *)(this + 0x344) == uVar5) {
            do {
              iVar14 = (iVar14 + 1) % (int)(uint)(byte)this[0x10];
              iVar11 = 0;
              if (0 < iVar14) {
                iVar11 = *(int *)(this + iVar14 * 8 + 0x394);
              }
              uStack_2a = (ushort)(*(uint *)(this + iVar14 * 8 + 0x398) >> 0x10);
            } while (*(int *)(this + iVar14 * 8 + 0x39c) == iVar11);
            *(uint *)(this + 0x344) = *(uint *)(this + iVar14 * 8 + 0x398) & 0xffff;
          }
          uVar17 = *(undefined4 *)(this + 0x344);
          uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc),uVar17);
          F_00cd78c0(*(undefined * PTR32 *)(this + 0x2c0),uVar5,uVar17);
          if ((uStack_2a & 0x4000) == 0) {
            piVar2 = *(int * PTR32 *)(this + 0xc);
            uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,(uint)(byte)this[0x2b8]);
            uVar5 = uVar5 & 0xff;
            uVar6 = (uint)uStack_2a;
            uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
            F_00cd7980(*(undefined * PTR32 *)(this + 0x2c0),uVar7,uVar6,uVar5);
          }
          ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,local_8,*(undefined4 *)(this + 0x344));
          return 1;
        }
        iVar14 = iVar14 + 1;
        pRVar10 = pRVar10 + 8;
        if ((int)(uint)(byte)this[0x10] <= iVar14) {
          return 1;
        }
      }
    }
  }
  else if ((int)uVar5 < (int)(uint)(byte)this[0x10]) {
    uVar5 = *(uint *)(this + uVar5 * 8 + 0x398);
    uVar7 = uVar5 & 0xffff;
    uVar6 = uVar5 >> 0x10;
    *(uint *)(this + 0x344) = uVar7;
    uVar15 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc),uVar7);
    F_00cd78c0(*(undefined * PTR32 *)(this + 0x2c0),uVar15,uVar7);
    if ((uVar5 & 0x40000000) == 0) {
      piVar1 = *(int * PTR32 *)(this + 0xc);
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,(uint)(byte)this[0x2b8]);
      uVar5 = uVar5 & 0xff;
      uVar7 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
      F_00cd7980(*(undefined * PTR32 *)(this + 0x2c0),uVar7,uVar6,uVar5);
    }
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RandomSound::vf104 */
uint F_00cdd930(unsigned int gen_a0)
{
  GEN_ENTER(0xcdd930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x344) < 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
    return uVar1;
  }
  uVar1 = F_00cd1ff0((undefined *)this);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RandomSound::vf54 */
uint F_00cdd950(unsigned int gen_a0)
{
  GEN_ENTER(0xcdd950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pRVar2;
  
  uVar1 = 0;
  if ((byte)this[0x10] != 0) {
    pRVar2 = this + 0x398;
    do {
      if ((*(uint *)pRVar2 & 0xffff) == *(uint *)(this + 0x344)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      pRVar2 = pRVar2 + 8;
    } while ((int)uVar1 < (int)(uint)(byte)this[0x10]);
  }
  return 0xffffffff;
}

/* ref: FUN_00cdd9a0 */
uint F_00cdd9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcdd9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: SQEX::CDev::Engine::Sd::Driver::RandomSound::vf0 */
uint F_00cdda40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdda40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112dee4));
  F_00cd3df0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cdda70 */
uint F_00cdda70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcdda70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float10 fVar1;
  undefined4 * puVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x14)), 1, 3),(undefined1)param_6);
  (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),(undefined1)param_7);
  F_00cd38f0(this,param_1,param_2,param_3,param_4,param_5,1,(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0xc)));
  iVar3 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e0e4));
  if (0 < *(int *)((int)this + 700)) {
    puVar2 = (undefined4 *)((int)this + 0x2c0);
    do {
      fVar1 = (float10)0;
      ((float *)(gen_frame + 0x18))[0] = (float)fVar1;
      ((float *)(gen_frame + 0x18))[1] = (float)fVar1;
      ((float *)(gen_frame + 0x18))[2] = (float)fVar1;
      ((float *)(gen_frame + 0x18))[3] = (float)fVar1;
      (*(float *)(gen_frame + 0x28)) = (float)fVar1;
      (*(float *)(gen_frame + 0x2c)) = (float)fVar1;
      (*(float *)(gen_frame + 0x30)) = (float)fVar1;
      (*(float *)(gen_frame + 0x34)) = (float)fVar1;
      if (iVar3 < 2) {
        ((float *)(gen_frame + 0x18))[(int)(iVar3)] = (float)(float10)1;
      }
      else {
        ((float *)(gen_frame + 0x18))[(int)(iVar3 + 2)] = (float)(float10)1;
      }
      F_00cd66f0((undefined *)*puVar2,((float *)(gen_frame + 0x18)));
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < *(int *)((int)this + 700));
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)this;
}

/* ref: FUN_00cddb30 */
unsigned int F_00cddb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcddb30u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Surround4chSound::vf17 */
unsigned int F_00cddb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcddb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Surround4chSound::vf21 */
unsigned int F_00cddb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcddb70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00cddb80 */
uint F_00cddb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcddb80u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: SQEX::CDev::Engine::Sd::Driver::Surround4chSound::vf0 */
uint F_00cddc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcddc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e0e4));
  F_00cd3df0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cddc50 */
unsigned int F_00cddc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcddc50u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cddc70 */
uint F_00cddc70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcddc70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  F_00cd38f0(this,param_1,param_2,param_3,param_4,param_5,1,param_6,param_7);
  iVar2 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e344));
  *(undefined4 *)((int)this + 0x398) = 0;
  uVar1 = F_00ce9920(param_3,0,3);
  param_7 = (uint *)((int)this + 0x39c);
  do {
    iVar3 = *(int *)((int)this + 700) - iVar2;
    F_00cd8980(*(undefined4 *)((int)this + iVar3 * 4 + 700),(float)(float10)1,0);
    *param_7 = (uint)*((ushort *)GEN_TOP(((uVar1 - 2) + iVar3 * 4)));
    iVar2 = iVar2 + 1;
    param_7 = param_7 + 1;
  } while (iVar2 < 2);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::EngineSound::vf1 */
uint F_00cddd20(unsigned int gen_a0)
{
  GEN_ENTER(0xcddd20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x80))(this,(undefined4)gen_fl2bits((float)(float10)0),0);
  uVar1 = F_00cd4f90((undefined *)this);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::EngineSound::vf32 */
uint F_00cddd40(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcddd40u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  float10 extraout_ST0;
  
  F_00cd2c40(param_1,param_2,param_3);
  iVar1 = *param_1;
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(param_1[0x23] + 0x10))(param_1 + 0x23);
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x1b0))(param_1,(undefined4)gen_fl2bits((float)extraout_ST0));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::EngineSound::vf108 */
uint F_00cddd80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcddd80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 in_ecx;
  float10 fVar1;
  float10 fVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  iVar6 = *(int *)(param_1 + 700) + -3;
  uVar3 = (uint)((float10)param_2 * (float10)iVar6);
  if (iVar6 <= (int)uVar3) {
    uVar3 = *(int *)(param_1 + 700) - 4;
  }
  fVar1 = (float10)1;
  uVar7 = 0;
  fVar8 = (float10)((float)GEN_TOF((fVar1 / ((float10)GEN_TOD((*(int *)(param_1 + 700) + -3))))));
  fVar9 = (float10)((float)GEN_TOF((((float10)param_2 - fVar8 * (float10)(int)uVar3) / fVar8)));
  fVar10 = (float10)*(double *)&REFG(undefined, 0x112e508);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x112e500);
  fVar8 = (float10)*(double *)&REFG(undefined, 0x112e4f8);
  uVar4 = uVar3;
  if (0 < *(int *)(param_1 + 700) + -2) {
    puVar5 = (undefined4 *)(param_1 + 0x2c0);
    do {
      in_ecx = *puVar5;
      if (uVar7 == uVar3) {
        F_00cd6af0(in_ecx,(float)(fVar1 - fVar9 * fVar9));
        F_00cd6b10(*puVar5,(float)(fVar10 * fVar9 + fVar1));
      }
      else if (uVar7 == uVar3 + 1) {
        F_00cd6af0(in_ecx,((float)GEN_TOF((fVar1 - (fVar1 - fVar9) * (fVar1 - fVar9)))));
        F_00cd6b10(*puVar5,(float)(fVar9 * fVar2 + fVar8));
      }
      else {
        F_00cd6af0(in_ecx,(float)(float10)0);
      }
      uVar7 = uVar7 + 1;
      uVar4 = *(int *)(param_1 + 700) - 2;
      puVar5 = puVar5 + 1;
    } while ((int)uVar7 < (int)uVar4);
  }
  return uVar4;
}

/* ref: FUN_00cddea0 */
uint F_00cddea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcddea0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: SQEX::CDev::Engine::Sd::Driver::EngineSound::vf9 */
byte F_00cddf40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcddf40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  code * pcVar1;
  undefined * this_00;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  int local_8;
  
  if (((*(uint *)(this + 0xf8) >> 3 & 1) == 0) &&
     (*(int *)(this + 0x398) = *(int *)(this + 0x398) - param_1, *(int *)(this + 0x398) < 1)) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 0x10)));
    *(undefined4 *)(this + 0x398) = 0;
    (*pcVar1)(this + 0x8c);
    local_8 = 0;
    do {
      this_00 = *((undefined * PTR32 *)GEN_TOP((this + (*(int *)(this + 700) - local_8) * 4 + 700)));
      iVar6 = (*(int *)(this + 700) - local_8) + -1;
      bVar2 = F_00cd65b0(this_00);
      if (bVar2 != 0) {
        F_00cd7a50(this_00);
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc),iVar6);
        if (uVar4 == 0) {
          if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
            REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcddea0));
          }
          ((code *)REFG(gen_code32, 0x15d861c))("pTrackData != 0","","EngineSound.cpp",0x95,
                          "SQEX::CDev::Engine::Sd::Driver::EngineSound::UpdateVSYNC");
        }
        F_00cd78c0(this_00,uVar4,iVar6);
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x14))))
                          (*(int * PTR32 *)(this + 0xc),*(undefined4 *)(this + local_8 * 4 + 0x39c));
        if (uVar4 != 0) {
          uVar5 = (uint)(byte)this[0x2b8];
          extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0x15c))(this);
          F_00cd7980(this_00,uVar4,uVar3 & 0xff,uVar5);
        }
        F_00cd8390(this_00); uVar3 = extraout_ST0;
        F_00cd6af0(this_00,(float)((float10)REFG(double, 0x1088108) +
                                    (float10)(float)extraout_ST0 * (float10)REFG(double, 0x1088108)));
        *(int *)(this + 0x398) =
             (short)(int)(((float10)1 - (float10)(float)extraout_ST0) *
                         (float10)*(double *)&REFG(undefined, 0x10e8718)) + 0x32;
        break;
      }
      local_8 = local_8 + 1;
    } while (local_8 < 2);
  }
  F_00cd50e0((undefined *)this,param_1);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 0xc))))(this + 0x8c);
  if ((char)uVar4 != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 8))))(this + 0x8c,param_1);
    iVar6 = *(int *)this;
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 0x10))))(this + 0x8c);
    ((code *)*(gen_code32 *)(iVar6 + 0x1b0))(this,(undefined4)gen_fl2bits((float)extraout_ST0_00));
  }
  bVar2 = F_00cd28c0(this);
  return bVar2 == 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::EngineSound::vf0 */
uint F_00cde120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcde120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e344));
  F_00cd3df0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cde150 */
uint F_00cde150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcde150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  F_00cd38f0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e55c));
  if ((char)param_6 != '\0') {
    F_00cd77a0(*(undefined4 *)((int)this + 0x2c0),REFG(float, 0x1090708),0);
    F_00cd77a0(*(undefined4 *)((int)this + 0x2c4),(float)(float10)1,0);
  }
  return (uint)this;
}

/* ref: FUN_00cde1c0 */
unsigned int F_00cde1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcde1c0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cde200 */
uint F_00cde200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcde200u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: SQEX::CDev::Engine::Sd::Driver::StereoSound::vf0 */
uint F_00cde2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcde2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e55c));
  F_00cd3df0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cde2d0 */
unsigned int F_00cde2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcde2d0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cde2f0 */
uint F_00cde2f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcde2f0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  return in_ecx;
}

/* ref: FUN_00cde300 */
uint F_00cde300(unsigned int gen_a0)
{
  GEN_ENTER(0xcde300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = *(int * PTR32 *)((int)this + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e83c));
  pvVar1 = (undefined *)F_00ce1c70(piVar2);
  if (pvVar1 == this) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x90))(piVar2);
    F_00ce1e80(piVar2,this);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  uVar3 = F_00cd3df0(this);
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf1 */
uint F_00cde350(unsigned int gen_a0)
{
  GEN_ENTER(0xcde350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (this[0x398] != (undefined1)0x0) {
    if (this[0x13] == (undefined1)0xb) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x1a4))(this);
      ((code *)*(gen_code32 *)(*(int *)this + 0x80))(this,(undefined4)gen_fl2bits((float)(float10)0),0);
    }
    uVar1 = F_00cd4f90((undefined *)this);
    return uVar1;
  }
  F_00cd4720(this);
  return 8;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf4 */
uint F_00cde3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcde3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cd45f0((undefined *)this,param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf32 */
uint F_00cde3b0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcde3b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  float10 extraout_ST0;
  
  if (*(char *)((int)param_1 + 0x13) == '\v') {
    F_00cd2c40(param_1,param_2,param_3);
    iVar1 = *param_1;
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(param_1[0x23] + 0x10))(param_1 + 0x23);
    uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x1b0))(param_1,(undefined4)gen_fl2bits((float)extraout_ST0));
    return uVar2;
  }
  uVar2 = F_00cd4320(param_1,param_2,param_3);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf17 */
unsigned int F_00cde410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcde410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (this[0x13] != (undefined1)0xb) {
    F_00cd23f0((undefined *)this,param_1);
    return 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf108 */
float10 F_00cde430(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcde430u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  bool bVar5;
  float10 in_ST0 = 0;
  float10 fVar6;
  float10 extraout_ST0 = 0;
  float10 extraout_ST0_00 = 0;
  float10 extraout_ST0_01 = 0;
  float10 extraout_ST0_02 = 0;
  float10 extraout_ST0_03 = 0;
  float10 fVar7;
  float10 fVar8;
  float10 extraout_ST0_04 = 0;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  float * pfVar12;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  if (*(char *)(param_1 + 0x13) != '\v') {
    fVar6 = F_00cd2c90(param_1,param_2);
    F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
    return fVar6;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 700)) {
    puVar4 = (undefined4 *)(param_1 + 0x2c0);
    do {
      fVar6 = (float10)param_2;
      if ((*(uint *)(param_1 + 0x14) & 0x5000) == 0) {
        if ((*((int *)GEN_TOP((*(int *)(param_1 + 0x2c0) + 4))) == 0) ||
           (piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x2c0) + 4))),
           uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1), in_ST0 = extraout_ST0_02,
           (char)uVar2 != '\x04')) {
          if ((*((int *)GEN_TOP((*(int *)(param_1 + 0x2c0) + 4))) == 0) ||
             (piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x2c0) + 4))),
             uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1), in_ST0 = extraout_ST0_03,
             (char)uVar2 != '\x06')) goto LAB_00cde722;
          fVar6 = (float10)REFG(float, 0x1088068);
          fVar7 = (float10)param_2;
          if (!(fVar6 <= fVar7) == ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6)) || fVar7 == fVar6)) {
            fVar10 = (float10)0;
          }
          else {
            fVar10 = (float10)1 - fVar7 * (float10)*(double *)&REFG(undefined, 0x1092098);
          }
          fVar9 = (float10)*(double *)&REFG(undefined, 0x1092098);
          if ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6)) || fVar7 < fVar6 == (fVar7 == fVar6)) {
            fVar8 = (float10)1 - (fVar7 - (float10)REFG(double, 0x1088108)) * fVar9;
          }
          else {
            fVar8 = fVar7 * fVar9;
          }
          if ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6)) || fVar7 < fVar6 == (fVar7 == fVar6)) {
            fVar9 = (fVar7 - (float10)REFG(double, 0x1088108)) * fVar9;
          }
          else {
            fVar9 = (float10)0;
          }
          pfVar12 = &(*(float *)(gen_frame + 0x8));
          (*(float *)(gen_frame + 0x8)) = (float)fVar10;
          uVar11 = 6;
          fVar6 = (float10)0;
          (*(float *)(gen_frame + 0xc)) = (float)fVar6;
          (*(float *)(gen_frame + 0x10)) = (float)fVar8;
          (*(float *)(gen_frame + 0x14)) = (float)fVar6;
          (*(float *)(gen_frame + 0x18)) = (float)fVar9;
          (*(float *)(gen_frame + 0x34)) = (float)fVar9;
          (*(float *)(gen_frame + 0x1c)) = (float)fVar6;
          (*(float *)(gen_frame + 0x20)) = (float)fVar6;
          (*(float *)(gen_frame + 0x28)) = (float)fVar6;
          (*(float *)(gen_frame + 0x30)) = (float)fVar6;
          (*(float *)(gen_frame + 0x38)) = (float)fVar6;
          (*(float *)(gen_frame + 0x3c)) = (float)fVar6;
          (*(float *)(gen_frame + 0x40)) = (float)fVar6;
          (*(float *)(gen_frame + 0x44)) = (float)fVar6;
          (*(float *)(gen_frame + 0x48)) = (float)fVar6;
          (*(float *)(gen_frame + 0x4c)) = (float)fVar6;
          (*(float *)(gen_frame + 0x50)) = (float)fVar6;
          (*(float *)(gen_frame + 0x54)) = (float)fVar6;
          (*(float *)(gen_frame + 0x58)) = (float)fVar6;
          (*(float *)(gen_frame + 0x5c)) = (float)fVar6;
          (*(float *)(gen_frame + 0x60)) = (float)fVar6;
          (*(float *)(gen_frame + 0x64)) = (float)fVar6;
          (*(float *)(gen_frame + 0x68)) = (float)fVar6;
          (*(float *)(gen_frame + 0x6c)) = (float)fVar6;
          (*(float *)(gen_frame + 0x70)) = (float)fVar6;
          (*(float *)(gen_frame + 0x74)) = (float)fVar6;
          (*(float *)(gen_frame + 0x78)) = (float)fVar6;
          (*(float *)(gen_frame + 0x7c)) = (float)fVar6;
          (*(float *)(gen_frame + 0x80)) = (float)fVar6;
          (*(float *)(gen_frame + 0x84)) = (float)fVar6;
          (*(float *)(gen_frame + 0x88)) = (float)fVar6;
          (*(float *)(gen_frame + 0x8c)) = (float)fVar6;
          (*(float *)(gen_frame + 0x90)) = (float)fVar6;
          (*(float *)(gen_frame + 0x94)) = (float)fVar6;
          (*(float *)(gen_frame + 0x98)) = (float)fVar6;
          (*(float *)(gen_frame + 0x9c)) = (float)fVar6;
          (*(float *)(gen_frame + 0xa0)) = (float)fVar6;
          (*(float *)(gen_frame + 0xa4)) = (float)fVar6;
          (*(float *)(gen_frame + 0xa8)) = (float)fVar6;
          (*(float *)(gen_frame + 0xac)) = (float)fVar6;
          (*(float *)(gen_frame + 0xb0)) = (float)fVar6;
          (*(float *)(gen_frame + 0xb4)) = (float)fVar6;
          (*(float *)(gen_frame + 0xb8)) = (float)fVar6;
          (*(float *)(gen_frame + 0xbc)) = (float)fVar6;
          (*(float *)(gen_frame + 0xc0)) = (float)fVar6;
          (*(float *)(gen_frame + 0xc4)) = (float)fVar6;
          (*(float *)(gen_frame + 0x24)) = (float)fVar10;
          (*(float *)(gen_frame + 0x2c)) = (float)fVar8;
        }
        else {
          pfVar12 = &(*(float *)(gen_frame + 0x48));
          uVar11 = 4;
          (*(float *)(gen_frame + 0x48)) = (float)((float10)1 - (float10)param_2);
          fVar6 = (float10)0;
          (*(float *)(gen_frame + 0x4c)) = (float)fVar6;
          (*(float *)(gen_frame + 0x54)) = (float)fVar6;
          (*(float *)(gen_frame + 0x58)) = (float)fVar6;
          (*(float *)(gen_frame + 0x60)) = (float)fVar6;
          (*(float *)(gen_frame + 0x68)) = (float)fVar6;
          (*(float *)(gen_frame + 0x6c)) = (float)fVar6;
          (*(float *)(gen_frame + 0x70)) = (float)fVar6;
          (*(float *)(gen_frame + 0x74)) = (float)fVar6;
          (*(float *)(gen_frame + 0x78)) = (float)fVar6;
          (*(float *)(gen_frame + 0x7c)) = (float)fVar6;
          (*(float *)(gen_frame + 0x80)) = (float)fVar6;
          (*(float *)(gen_frame + 0x84)) = (float)fVar6;
          (*(float *)(gen_frame + 0x88)) = (float)fVar6;
          (*(float *)(gen_frame + 0x8c)) = (float)fVar6;
          (*(float *)(gen_frame + 0x90)) = (float)fVar6;
          (*(float *)(gen_frame + 0x94)) = (float)fVar6;
          (*(float *)(gen_frame + 0x98)) = (float)fVar6;
          (*(float *)(gen_frame + 0x9c)) = (float)fVar6;
          (*(float *)(gen_frame + 0xa0)) = (float)fVar6;
          (*(float *)(gen_frame + 0xa4)) = (float)fVar6;
          (*(float *)(gen_frame + 0xa8)) = (float)fVar6;
          (*(float *)(gen_frame + 0xac)) = (float)fVar6;
          (*(float *)(gen_frame + 0xb0)) = (float)fVar6;
          (*(float *)(gen_frame + 0xb4)) = (float)fVar6;
          (*(float *)(gen_frame + 0xb8)) = (float)fVar6;
          (*(float *)(gen_frame + 0xbc)) = (float)fVar6;
          (*(float *)(gen_frame + 0xc0)) = (float)fVar6;
          (*(float *)(gen_frame + 0xc4)) = (float)fVar6;
          (*(float *)(gen_frame + 0x50)) = param_2;
          (*(float *)(gen_frame + 0x64)) = param_2;
          (*(float *)(gen_frame + 0x5c)) = (float)((float10)1 - (float10)param_2);
        }
        (*(float *)(gen_frame + 0x48)) = (*(float *)(gen_frame + 0x5c));
        (*(float *)(gen_frame + 0x50)) = (*(float *)(gen_frame + 0x64));
        F_00cd6720((undefined *)*puVar4,uVar11,pfVar12);
        in_ST0 = extraout_ST0_04;
      }
      else {
        bVar5 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar6);
        if (bVar5 == (bVar5 || (float10)0 == fVar6)) {
          bVar5 = GEN_ISNAN((float10)1) || GEN_ISNAN(fVar6);
          if (bVar5 == (bVar5 || (float10)1 == fVar6)) {
            bVar5 = GEN_ISNAN((float10)REFG(float, 0x10928e4)) || GEN_ISNAN(fVar6);
            if (bVar5 != (bVar5 || (float10)REFG(float, 0x10928e4) == fVar6)) {
              F_00cd6e00(*puVar4,2);

            }
          }
          else {
            F_00cd6e00(*puVar4,1);

          }
        }
        else {
          F_00cd6e00(*puVar4,0);

        }
      }
LAB_00cde722: ;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 700));
  }
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return in_ST0;
}

/* ref: FUN_00cde750 */
unsigned int F_00cde750(unsigned int gen_a0)
{
  GEN_ENTER(0xcde750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x3a4) = 1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf101 */
byte F_00cde760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcde760u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int in_ecx_00;
  uint uVar1;
  
  in_ecx_00 = *(int *)(in_ecx + 0xc);
  if (in_ecx_00 == 0) {
    return 0;
  }
  uVar1 = F_00ce1bf0(in_ecx_00);
  *param_2 = uVar1;
  param_2[1] = *(uint *)(in_ecx_00 + 0x9c);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf9 */
byte F_00cde790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcde790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int * this_00;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  ushort * puVar5;
  undefined * pvVar6;
  int iVar7;
  char * pcVar8;
  undefined * pSVar9;
  bool bVar10;
  float10 extraout_ST0;
  undefined8 uVar11;
  float fVar12;
  uint * puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  ((uint *)(gen_frame + 0x88))[4] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  this_00 = *(int * PTR32 *)(this + 0xc);
  uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0xa0))(this_00);
  if ((char)uVar2 == '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
  }
  if (((((*(uint *)(this + 0xf8) >> 3 & 1) == 0) && (this[0x398] == (undefined1)0x0)) &&
      (bVar1 = F_00ce1ec0(this_00,this), bVar1 != 0)) &&
     (((*(byte *)(this_00 + 0x35) & 2) != 0 && ((*(byte *)(this_00 + 0x12) & 2) != 0)))) {
    uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0xc))(this_00,0);
    F_00cd1df0(this,uVar2);
    uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0x18))(this_00,0);
    if (uVar2 != 0) {
      bVar10 = GEN_ISNAN((float10)0) || GEN_ISNAN((float10)*(float *)(uVar2 + 0x54));
      this[0x1c5] = (undefined1)
                    (bVar10 == (bVar10 || (float10)0 == (float10)*(float *)(uVar2 + 0x54)));
    }
    if (this[0x3a5] == (undefined1)0x0) {
      puVar3 = (undefined4 *)F_00ce9a60(*(undefined4 *)(this + 0xc),this + 0x10);
      F_00ccb2c0(((char *)(gen_frame + 0xc)));
      if (puVar3 != (undefined4 *)0x0) {
        pcVar8 = ((char *)(gen_frame + 0xc));
        for (iVar7 = 0x1f; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)pcVar8 = *puVar3;
          puVar3 = puVar3 + 1;
          pcVar8 = pcVar8 + 4;
        }
      }
      uVar2 = (*(uint *)(gen_frame + 0x10));
      bVar1 = (byte)((*(uint *)(gen_frame + 0x10)) >> 0x10);
      if (((*(uint *)(gen_frame + 0x10)) >> 0x10 & 4) == 0) {
        if (((*(uint *)(gen_frame + 0x10)) & 0x80000) != 0) {
          (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = bVar1 | 2;
          iVar7 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) * 1000;
          (*(int *)(gen_frame + 0x14)) = iVar7;
          iVar7 = iVar7 + 999;
          goto LAB_00cde8de;
        }
      }
      else {
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = bVar1 | 2;
        iVar7 = (uint)*(ushort *)(this + 0x1c) + *((int *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) * 1000;
        (*(int *)(gen_frame + 0x14)) = iVar7;
LAB_00cde8de: ;
        (*(uint *)(gen_frame + 0x10)) = uVar2 | 0x20000;
        (*(int *)(gen_frame + 0x18)) = iVar7;
      }
      (*(uint *)(gen_frame + 0x0)) = 0;
      (*(char *)(gen_frame + 0xb)) = '\0';
      if (((*(undefined2 *)((char *)((char *)(gen_frame + 0xc)) + 2)) != 0) && (((char *)(gen_frame + 0xc))[0] != '\0')) {
        pSVar9 = this;
        uVar11 = ((gen_lcode *)*(gen_code32 *)(*(int *)this + 0x118))(this,&(*(char *)(gen_frame + 0xb)));
        puVar13 = ((uint *)(gen_frame + 0x88));
        uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x19c))(this);
        (*(uint *)(gen_frame + 0x0)) = F_00cc1e50(((char *)(gen_frame + 0xc)),this + 0x10,uVar2,puVar13,(int)uVar11,
                                (int)((ulonglong)uVar11 >> 0x20),pSVar9);
        if (((*(uint *)(gen_frame + 0x0)) != 0) && (uVar2 = F_00cc65d0(((char *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x0))), uVar2 != 0)) {
          iVar7 = 0;
          do {
            if (*(char *)(iVar7 + uVar2) == '\a') {
              ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
              goto LAB_00cdec8b;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 1);
        }
      }
      bVar1 = F_00cbf6a0(this + 0x10);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
        goto LAB_00cdec8b;
      }
      piVar4 = (int *)F_00cbf660((uint)(byte)this[0x11]);
      if (piVar4 != (int *)0x0) {
        uVar2 = F_00d2ccd0();
        uVar15 = *(undefined4 *)(uVar2 + 4);
        iVar7 = *piVar4;
        uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xd0))(this);
        uVar2 = F_00cbbd50(((uint *)(gen_frame + 0x88)),uVar2,uVar15);
        ((code *)*(gen_code32 *)(iVar7 + 8))(piVar4,uVar2);
        F_00cbbdb0(((uint *)(gen_frame + 0x88)));
      }
      F_00ce9cd0(((char *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x0)),this);
    }
    uVar14 = 3;
    this[0x3a5] = (undefined1)0x0;
    uVar15 = 0;
    uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0xc))(this_00,0);
    puVar5 = (ushort *)F_00ce9920(uVar2,uVar15,uVar14);
    *(uint *)(this + 0x344) = (uint)*puVar5;
    if ((1 < (uint)this_00[3]) &&
       (bVar10 = GEN_ISNAN((float10)1) || GEN_ISNAN((float10)*(float *)(this + 0x18)),
       bVar10 == (bVar10 || (float10)1 == (float10)*(float *)(this + 0x18)))) {
      iVar7 = *(int *)this;
      *(undefined4 *)(this + 0x100) = *(undefined4 *)(this + 0x18);
      pvVar6 = (undefined *)F_00d2ddd0(((uint *)(gen_frame + 0x88)),(uint)(byte)this[0x11]);
      fVar12 = F_00cbb330(pvVar6);
      ((code *)*(gen_code32 *)(iVar7 + 0x5c))(this,(undefined4)gen_fl2bits(fVar12));
      F_00cbaf10(((uint *)(gen_frame + 0x88)));
      this[0x128] = (undefined1)0x1;
    }
    uVar15 = 0;
    uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0x10))(this_00,0);
    F_00cd78c0(*(undefined * PTR32 *)(this + 0x2c0),uVar2,uVar15);
    F_00cd6e20(*(undefined * PTR32 *)(this + 0x2c0));
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this);
    F_00cd8550(*(undefined * PTR32 *)(this + 0x2c0),0,uVar2 & 0xff);
    iVar7 = 1;
    if (1 < *(int *)(this + 700)) {
      pSVar9 = this + 0x2c4;
      do {
        F_00cd87f0(*(undefined * PTR32 *)pSVar9,0);
        iVar7 = iVar7 + 1;
        pSVar9 = pSVar9 + 4;
      } while (iVar7 < *(int *)(this + 700));
    }
    this[0x398] = (undefined1)0x1;
    if ((*(uint *)(this + 0xf8) >> 2 & 1) != 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
    }
  }
  if ((this[0x13] == (undefined1)0xb) &&
     (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 0xc))))(this + 0x8c), (char)uVar2 != '\0')) {
    iVar7 = *(int *)this;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 0x10))))(this + 0x8c);
    ((code *)*(gen_code32 *)(iVar7 + 0x1b0))(this,(undefined4)gen_fl2bits((float)extraout_ST0));
  }
  if (((this[0x3a4] != (undefined1)0x0) && (this[0x398] == (undefined1)0x1)) &&
     ((*(uint *)(this + 0xf8) >> 3 & 1) == 0)) {
    iVar7 = 0;
    if (this[0x3a5] == (undefined1)0x0) {
      ((uint *)(gen_frame + 0x88))[0] = 0;
      ((uint *)(gen_frame + 0x88))[1] = 0;
      ((uint *)(gen_frame + 0x88))[2] = 0;
      ((uint *)(gen_frame + 0x88))[3] = 0;
      bVar1 = F_00cc2aa0(4,((uint *)(gen_frame + 0x88)),0);
      if ((bVar1 == 1) && (0 < *(int *)(this + 700))) {
        pSVar9 = this + 0x2c0;
        do {
          pvVar6 = *(undefined * PTR32 *)pSVar9;
          if (pvVar6 != (undefined *)0x0) {
            *(undefined * PTR32 *)(pSVar9 + 0xdc) = pvVar6;
            F_00cd87f0(pvVar6,0);
          }
          pvVar6 = (undefined *)((uint *)(gen_frame + 0x88))[(int)(iVar7)];
          *(undefined * PTR32 *)pSVar9 = pvVar6;
          F_00cd8640(pvVar6,this,iVar7);
          iVar7 = iVar7 + 1;
          pSVar9 = pSVar9 + 4;
        } while (iVar7 < *(int *)(this + 700));
      }
      this[0x3a5] = (undefined1)0x1;
    }
    else if (this[0x3a5] == (undefined1)0x1) {
      (*(char *)(gen_frame + 0xb)) = '\x01';
      (*(int *)(gen_frame + 0x4)) = 0;
      if (0 < *(int *)(this + 700)) {
        pSVar9 = this + 0x39c;
        do {
          if (*(int *)pSVar9 != 0) {
            bVar1 = F_00cd65b0(*(int *)pSVar9);
            if (bVar1 == 0) {
              if (*(int *)pSVar9 != 0) {
                (*(char *)(gen_frame + 0xb)) = '\0';
              }
            }
            else {
              F_00cd8a90(*(undefined * PTR32 *)pSVar9);
              *(int *)pSVar9 = 0;
            }
          }
          (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
          pSVar9 = pSVar9 + 4;
        } while ((*(int *)(gen_frame + 0x4)) < *(int *)(this + 700));
        if ((*(char *)(gen_frame + 0xb)) == '\0') goto LAB_00cdec8b;
      }
      *(undefined2 *)(this + 0x3a4) = 0x200;
      this[0x398] = (undefined1)0x0;
      ((code *)*(gen_code32 *)(*this_00 + 0x90))(this_00);
    }
  }
LAB_00cdec8b: ;
  bVar1 = F_00cd50e0((undefined *)this,param_1);
  F_00c47745(((uint *)(gen_frame + 0x88))[4] ^ (uint)(uint)(gen_frame + 0x9c));
  return bVar1;
}

/* ref: FUN_00cdecb0 */
uint F_00cdecb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcdecb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00cded50 */
uint F_00cded50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcded50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  F_00cd38f0(this,param_1,param_2,0,param_3,param_4,0,param_5,param_7);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e83c));
  *(undefined1 *)((int)this + 0x398) = 0;
  *(undefined2 *)((int)this + 0x3a4) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  if (uVar1 != 3) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcdecb0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("pBank->GetType() == BT_STREAM_BANK_EX","","StreamSoundEx.cpp",0x34,
                    "SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::StreamSoundEx");
  }
  if (param_3 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcdecb0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("tracks != 0","","StreamSoundEx.cpp",0x35,
                    "SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::StreamSoundEx");
  }
  iVar3 = 0;
  if (0 < *(int *)((int)this + 700)) {
    puVar2 = (undefined4 *)((int)this + 0x2c0);
    do {
      F_00cd8640((undefined *)*puVar2,this,iVar3);
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < *(int *)((int)this + 700));
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf84 */
byte F_00cdee80(void)
{
  GEN_ENTER(0xcdee80u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf0 */
uint F_00cdee90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdee90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pSVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(this + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e83c));
  pSVar1 = (undefined *)F_00ce1c70(piVar2);
  if (pSVar1 == this) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x90))(piVar2);
    F_00ce1e80(piVar2,this);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  F_00cd3df0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cdef00 */
uint F_00cdef00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdef00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),uVar1,"CDev.Engine.Sd.SoundDriver",0,0,0x10)
  ;
  uVar3 = F_00c46aa0(uVar2,param_1,uVar1);
  *(uint *)((int)this + 4) = uVar2;
  return (uint)uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf43 */
uint F_00cdef70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdef70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf22 */
uint F_00cdef80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdef80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  F_00ce11f0(this);
  uVar1 = *((uint *)GEN_TOP((*(int *)(this + 0xb0) + (param_1 & 0xffff) * 4)));
  F_00ce1230(this);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf23 */
uint F_00cdefb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdefb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_00ce11f0(this);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0xb0) + (param_1 & 0xffff) * 4))) = param_2;
  uVar1 = F_00ce1230(this);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf8 */
uint F_00cdefe0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdefe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x50) - *(int *)(in_ecx + 0x4c) >> 2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf3 */
uint F_00cdeff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdeff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x50) - *(int *)(this + 0x4c) >> 2;
  if ((int)uVar1 <= (int)param_1) {
    return 0;
  }
  if (uVar1 <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *((uint *)GEN_TOP((*(int *)(this + 0x4c) + param_1 * 4)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf4 */
uint F_00cdf020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)(this + 100) - *(int *)(this + 0x60) >> 2;
  if ((int)uVar1 <= (int)param_1) {
    return 0;
  }
  if (uVar1 <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *((uint *)GEN_TOP((*(int *)(this + 0x60) + param_1 * 4)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf5 */
uint F_00cdf050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1;
  if ((param_1 & 0x8000) == 0) {
    if ((param_1 & 0x4000) != 0) {
      uVar2 = 0;
    }
  }
  else {
    piVar1 = (int *)F_00d2ccd0();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x8c))(piVar1)));
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,param_1 & 0xffff7fff);
      return uVar2;
    }
  }
  uVar3 = *(int *)(this + 0x78) - *(int *)(this + 0x74) >> 2;
  if ((int)uVar3 <= (int)uVar2) {
    return 0;
  }
  if (uVar3 <= uVar2) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *((uint *)GEN_TOP((*(int *)(this + 0x74) + uVar2 * 4)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf6 */
uint F_00cdf0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x8c) - *(int *)(this + 0x88) >> 2;
  if ((int)uVar1 <= (int)param_1) {
    return 0;
  }
  if (uVar1 <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *((uint *)GEN_TOP((*(int *)(this + 0x88) + param_1 * 4)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf10 */
uint F_00cdf110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  F_00ce11f0(this);
  puVar1 = *(uint * PTR32 *)(this + 0x4c);
  if (puVar1 != *(uint * PTR32 *)(this + 0x50)) {
    while ((uint)*(ushort *)(*puVar1 + 0xc) != param_1 % 1000) {
      puVar1 = puVar1 + 1;
      if (puVar1 == *(uint * PTR32 *)(this + 0x50)) {
        F_00ce1230(this);
        return 0;
      }
    }
    uVar2 = *puVar1;
  }
  F_00ce1230(this);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf9 */
uint F_00cdf180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  F_00ce11f0(this);
  piVar2 = *(int * PTR32 *)(this + 0x4c);
  uVar1 = 0;
  if (piVar2 != *(int * PTR32 *)(this + 0x50)) {
    while (uVar3 = uVar1, (uint)*(ushort *)(*piVar2 + 0xc) != param_1 % 1000) {
      piVar2 = piVar2 + 1;
      uVar1 = uVar3 + 1;
      if (piVar2 == *(int * PTR32 *)(this + 0x50)) {
        F_00ce1230(this);
        return 0xffffffff;
      }
    }
  }
  F_00ce1230(this);
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf11 */
uint F_00cdf1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0;
  F_00ce11f0(this);
  piVar1 = *(int * PTR32 *)(this + 0x4c);
  if (piVar1 != *(int * PTR32 *)(this + 0x50)) {
    while ((uint)*(ushort *)(*piVar1 + 0xc) != param_1 % 1000) {
      piVar1 = piVar1 + 1;
      iVar3 = iVar3 + 1;
      if (piVar1 == *(int * PTR32 *)(this + 0x50)) {
        F_00ce1230(this);
        return 0;
      }
    }
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,iVar3);
  }
  F_00ce1230(this);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf18 */
unsigned int F_00cdf270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  if ((uint)(*(int *)(this + 0x50) - *(int *)(this + 0x4c) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x4c) + param_1 * 4)));
  if (iVar1 != 0) {
    F_00406810(iVar1);
    if ((uint)(*(int *)(this + 0x50) - *(int *)(this + 0x4c) >> 2) <= param_1) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x4c) + param_1 * 4))) = 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf19 */
unsigned int F_00cdf2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  if ((uint)(*(int *)(this + 100) - *(int *)(this + 0x60) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x60) + param_1 * 4)));
  if (iVar1 != 0) {
    F_00406810(iVar1);
    if ((uint)(*(int *)(this + 100) - *(int *)(this + 0x60) >> 2) <= param_1) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x60) + param_1 * 4))) = 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf20 */
unsigned int F_00cdf330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  if ((uint)(*(int *)(this + 0x78) - *(int *)(this + 0x74) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x74) + param_1 * 4)));
  if (iVar1 != 0) {
    F_00406810(iVar1);
    if ((uint)(*(int *)(this + 0x78) - *(int *)(this + 0x74) >> 2) <= param_1) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x74) + param_1 * 4))) = 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf21 */
unsigned int F_00cdf390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  if ((uint)(*(int *)(this + 0x8c) - *(int *)(this + 0x88) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x88) + param_1 * 4)));
  if (iVar1 != 0) {
    F_00406810(iVar1);
    if ((uint)(*(int *)(this + 0x8c) - *(int *)(this + 0x88) >> 2) <= param_1) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x88) + param_1 * 4))) = 0;
  }
  return 0;
}

/* ref: FUN_00cdf400 */
uint F_00cdf400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdf400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  undefined * _Dst;
  
  F_00ce0f90(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112eacc));
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),uVar1,"CDev.Engine.Sd.SoundDriver",0,0,0x10)
  ;
  F_00c46aa0(uVar2,param_1,uVar1);
  *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) | 4;
  *(uint *)((int)this + 4) = uVar2;
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  _Dst = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                           (REFG(int * PTR32, 0x15d778c),4000,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  *(undefined * PTR32 *)((int)this + 0xb0) = _Dst;
  F_00c48350(_Dst,0,4000);
  return (uint)this;
}

/* ref: FUN_00cdf510 */
uint F_00cdf510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdf510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * _Dst;
  
  F_00ce0ff0(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112eacc));
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  _Dst = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                           (REFG(int * PTR32, 0x15d778c),4000,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  *(undefined * PTR32 *)((int)this + 0xb0) = _Dst;
  F_00c48350(_Dst,0,4000);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf13 */
unsigned int F_00cdf5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcdf5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00ce02d0(this + 0x4c,param_1,param_2,param_3);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf14 */
unsigned int F_00cdf5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcdf5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00ce02d0(this + 0x60,param_1,param_2,param_3);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf16 */
unsigned int F_00cdf610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcdf610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00ce02d0(this + 0x88,param_1,param_2,param_3);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf15 */
unsigned int F_00cdf630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcdf630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00ce02d0(this + 0x74,param_1,param_2,param_3);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf44 */
unsigned int F_00cdf650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcdf650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00ce02d0(this + 0x9c,param_1,param_2,param_3);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf2 */
uint F_00cdf670(unsigned int gen_a0)
{
  GEN_ENTER(0xcdf670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  
  iVar1 = *(int *)(this + 4);
  uVar3 = (uint)*(ushort *)(iVar1 + 0xe);
  uVar2 = F_00ce1300(this);
  F_00ce0470(this,this + 0x4c,(uint)*(ushort *)(iVar1 + uVar3),uVar2 + uVar3 + *(int *)(this + 4))
  ;
  F_00ce0470(this,this + 0x60,(uint)*(ushort *)(iVar1 + 2 + uVar3),
               *(int *)(iVar1 + 8 + uVar3) + *(int *)(this + 4));
  F_00ce0470(this,this + 0x74,(uint)*(ushort *)(iVar1 + 4 + uVar3),
               *(int *)(iVar1 + 0xc + uVar3) + *(int *)(this + 4));
  if (1 < *(uint *)(this + 0xc)) {
    F_00ce0470(this,this + 0x88,(uint)*(ushort *)(iVar1 + uVar3),
                 *(int *)(iVar1 + 0x10 + uVar3) + *(int *)(this + 4));
  }
  *(uint *)(this + 0x10) = (uint)*(ushort *)(iVar1 + 6 + uVar3);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(iVar1 + 0x10);
  uVar2 = F_00cc8520(this);
  local_8 = 0;
  if (*(short *)(iVar1 + uVar3) != 0) {
    do {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,local_8);
      *(undefined1 *)(uVar2 + 0xf) = 0xff;
      uVar2 = local_8 + 1;
      local_8 = uVar2;
    } while ((int)uVar2 < (int)(uint)*(ushort *)(iVar1 + uVar3));
  }
  return uVar2;
}

/* ref: FUN_00cdf740 */
uint F_00cdf740(unsigned int gen_a0)
{
  GEN_ENTER(0xcdf740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  int * piVar3;
  
  if (*(int *)((int)this + 4) == 0) {
    ((int *)(gen_frame + 0x8))[0] = (int)this + 0x4c;
    ((int *)(gen_frame + 0x8))[1] = (int)this + 0x60;
    ((int *)(gen_frame + 0x8))[2] = (int)this + 0x88;
    ((int *)(gen_frame + 0x8))[3] = (int)this + 0x9c;
    (*(int *)(gen_frame + 0x18)) = 0;
    do {
      piVar2 = (int *)((int *)(gen_frame + 0x8))[(int)((*(int *)(gen_frame + 0x18)))];
      piVar3 = (int *)*piVar2;
      iVar1 = (*(int *)(gen_frame + 0x18));
      if (piVar3 != (int *)piVar2[1]) {
        do {
          if (*piVar3 != 0) {
            F_00406810(*piVar3);
          }
          piVar3 = piVar3 + 1;
          iVar1 = (*(int *)(gen_frame + 0x18));
        } while (piVar3 != (int *)piVar2[1]);
      }
      (*(int *)(gen_frame + 0x18)) = iVar1 + 1;
    } while (iVar1 + 1 < 4);
    piVar2 = *(int * PTR32 *)((int)this + 0x74);
    if (piVar2 != *(int * PTR32 *)((int)this + 0x78)) {
      do {
        if (*piVar2 != 0) {
          F_00406810(*piVar2);
        }
        piVar2 = piVar2 + 1;
      } while (piVar2 != *(int * PTR32 *)((int)this + 0x78));
    }
  }
  else {
    F_00406810(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  piVar2 = (int *)((int)this + 0x4c);
  if (&(*(int *)(gen_frame + 0x4)) != piVar2) {
    iVar1 = *piVar2;
    *piVar2 = 0;
    *(undefined4 *)((int)this + 0x50) = 0;
    *(undefined4 *)((int)this + 0x54) = 0;
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
  }
  piVar2 = (int *)((int)this + 0x60);
  if (&(*(int *)(gen_frame + 0x4)) != piVar2) {
    iVar1 = *piVar2;
    *piVar2 = 0;
    *(undefined4 *)((int)this + 100) = 0;
    *(undefined4 *)((int)this + 0x68) = 0;
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
  }
  piVar2 = (int *)((int)this + 0x74);
  if (&(*(int *)(gen_frame + 0x4)) != piVar2) {
    iVar1 = *piVar2;
    *piVar2 = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
    *(undefined4 *)((int)this + 0x7c) = 0;
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
  }
  piVar2 = (int *)((int)this + 0x88);
  if (&(*(int *)(gen_frame + 0x4)) != piVar2) {
    iVar1 = *piVar2;
    *piVar2 = 0;
    *(undefined4 *)((int)this + 0x8c) = 0;
    *(undefined4 *)((int)this + 0x90) = 0;
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
  }
  piVar3 = (int *)((int)this + 0x9c);
  piVar2 = &(*(int *)(gen_frame + 0x4));
  if (piVar2 != piVar3) {
    iVar1 = *piVar3;
    *piVar3 = 0;
    *(undefined4 *)((int)this + 0xa0) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    piVar2 = (int *)0x0;
    if (iVar1 != 0) {
      piVar2 = (int *)F_00406810(iVar1);
    }
  }
  return (uint)piVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf12 */
uint F_00cdf890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  code * pcVar2;
  uint uVar3;
  
  F_00cc8590(this);
  F_00cdf740(this);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),uVar1,"CDev.Engine.Sd.SoundDriver",0,0,0x10)
  ;
  F_00c46aa0(uVar3,param_1,uVar1);
  pcVar2 = *(gen_code32 *)(*(int *)this + 8);
  *(uint *)(this + 4) = uVar3;
  uVar3 = (*pcVar2)(this);
  return uVar3;
}

/* ref: FUN_00cdf910 */
uint F_00cdf910(unsigned int gen_a0)
{
  GEN_ENTER(0xcdf910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112eacc));
  F_00cdf740(this);
  if (*(int *)((int)this + 0xb0) != 0) {
    F_00406810(*(int *)((int)this + 0xb0));
  }
  if (*(int *)((int)this + 0x9c) != 0) {
    F_00406810(*(int *)((int)this + 0x9c));
  }
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  if (*(int *)((int)this + 0x88) != 0) {
    F_00406810(*(int *)((int)this + 0x88));
  }
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  if (*(int *)((int)this + 0x74) != 0) {
    F_00406810(*(int *)((int)this + 0x74));
  }
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  if (*(int *)((int)this + 0x60) != 0) {
    F_00406810(*(int *)((int)this + 0x60));
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  uVar1 = 0;
  if (*(int *)((int)this + 0x4c) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 0x4c));
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  F_00ce10b0(this);
  return uVar1;
}

/* ref: FUN_00cdfa20 */
uint F_00cdfa20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfa20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00cdfa40 */
uint F_00cdfa40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdfa40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cdfa70 */
uint F_00cdfa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfa70u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cdfad0 */
uint F_00cdfad0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdfad0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c),param_1 * 4,"CDev.Engine.Sd.Allocator",0,0,0x10);
  return uVar1;
}

/* ref: FUN_00cdfb40 */
uint F_00cdfb40(unsigned int gen_a0)
{
  GEN_ENTER(0xcdfb40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cdfb60 */
uint F_00cdfb60(unsigned int gen_a0)
{
  GEN_ENTER(0xcdfb60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cdfb90 */
uint F_00cdfb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfb90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00cdfbc0 */
uint F_00cdfbc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdfbc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cdfc10 */
uint F_00cdfc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdfc10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cdfc20 */
byte F_00cdfc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00cdfc70 */
uint F_00cdfc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfc70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00cdfc90 */
uint F_00cdfc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
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

/* ref: FUN_00cdfcc0 */
uint F_00cdfcc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfcc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00cdfcf0 */
uint F_00cdfcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdfcf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00cdfd10 */
uint F_00cdfd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(int *)this + param_1 * 4;
}

/* ref: FUN_00cdfd40 */
uint F_00cdfd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfd40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(int *)this + param_1 * 4;
}

/* ref: FUN_00cdfd80 */
uint F_00cdfd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfd80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00cdfd90 */
uint F_00cdfd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfd90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00cdfda0 */
byte F_00cdfda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cdfde0 */
uint F_00cdfde0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdfde0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cdfdf0 */
uint F_00cdfdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcdfdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00cdfe50 */
uint F_00cdfe50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfe50u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1[1] - *param_1 >> 2;
  if ((int)uVar1 <= (int)param_2) {
    return 0;
  }
  if (uVar1 <= param_2) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(uint *)(*param_1 + param_2 * 4);
}

/* ref: FUN_00cdfe80 */
unsigned int F_00cdfe80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfe80u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  
  if ((uint)(param_1[1] - *param_1 >> 2) <= param_2) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  iVar1 = *(int *)(*param_1 + param_2 * 4);
  if (iVar1 != 0) {
    F_00406810(iVar1);
    if ((uint)(param_1[1] - *param_1 >> 2) <= param_2) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    *(undefined4 *)(*param_1 + param_2 * 4) = 0;
  }
  return 0;
}

/* ref: FUN_00cdfef0 */
uint F_00cdfef0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdfef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00cdff20 */
unsigned int F_00cdff20(unsigned int gen_a0)
{
  GEN_ENTER(0xcdff20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00cdff50 */
unsigned int F_00cdff50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdff50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00cdff80 */
uint F_00cdff80(unsigned int gen_a0)
{
  GEN_ENTER(0xcdff80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00cdffb0 */
unsigned int F_00cdffb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdffb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00cdffe0 */
uint F_00cdffe0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdffe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00ce0020 */
unsigned int F_00ce0020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce0020u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf27 */
unsigned int F_00ce0050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce0050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf28 */
uint F_00ce0060(unsigned int gen_a0)
{
  GEN_ENTER(0xce0060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf32 */
uint F_00ce0070(void)
{
  GEN_ENTER(0xce0070u, 0u, 0u, 0u, 0u);
  return 0;
}

