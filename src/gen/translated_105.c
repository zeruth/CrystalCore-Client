#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Palette::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009ebce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ebce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Palette::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_009ebcf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ebcf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x10;
}

/* ref: FUN_009ebd00 */
GEN_NOFRAME uint GEN_THISCALL F_009ebd00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ebd00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: Apricot::Engine::Instance::ConeEmitterInstance::vf0 */
GEN_FRAME uint GEN_THISCALL F_009ebd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ebd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[35])REFP(0x10df8a4));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_FWD);
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x88))))(REFG(int * PTR32, 0x14a0ea8) GEN_EDX_ARG,*(undefined4 *)(this + 0x2a8));
  F_0097ee40(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::ConeModelEmitterInstance::vf0 */
GEN_FRAME uint GEN_THISCALL F_009ebdc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ebdc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[35])REFP(0x10df8a4));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_FWD);
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x88))))(REFG(int * PTR32, 0x14a0ea8) GEN_EDX_ARG,*(undefined4 *)(this + 0x2a8));
  F_0097ee40(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::CylinderModelEmitterInstance::vf0 */
GEN_FRAME uint GEN_THISCALL F_009ebe50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ebe50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[35])REFP(0x10df8a4));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_FWD);
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x88))))(REFG(int * PTR32, 0x14a0ea8) GEN_EDX_ARG,*(undefined4 *)(this + 0x2a8));
  F_0097ee40(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::ModelEmitterInstance::vf0 */
GEN_FRAME uint GEN_THISCALL F_009ebee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ebee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[35])REFP(0x10df8a4));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_FWD);
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x88))))(REFG(int * PTR32, 0x14a0ea8) GEN_EDX_ARG,*(undefined4 *)(this + 0x2a8));
  F_0097ee40(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::PointEmitterInstance::vf0 */
GEN_FRAME uint GEN_THISCALL F_009ebf70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ebf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[35])REFP(0x10df8a4));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_FWD);
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x88))))(REFG(int * PTR32, 0x14a0ea8) GEN_EDX_ARG,*(undefined4 *)(this + 0x2a8));
  F_0097ee40(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::SphereModelEmitterInstance::vf0 */
GEN_FRAME uint GEN_THISCALL F_009ec000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[35])REFP(0x10df8a4));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_FWD);
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x88))))(REFG(int * PTR32, 0x14a0ea8) GEN_EDX_ARG,*(undefined4 *)(this + 0x2a8));
  F_0097ee40(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::LaserParticleInstance::vf0 */
GEN_FRAME uint GEN_THISCALL F_009ec090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::WindmillParticleInstance::vf0 */
GEN_FRAME uint GEN_THISCALL F_009ec0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_009ec140 */
GEN_NOFRAME uint GEN_THISCALL F_009ec140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ec140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd2);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_009ec180 */
GEN_NOFRAME uint GEN_THISCALL F_009ec180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x18))(this);
  return uVar1;
}

/* ref: FUN_009ec190 */
GEN_NOFRAME uint GEN_THISCALL F_009ec190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009ed5b0((undefined *)((int)this - 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_009ec1a0 */
GEN_FRAME uint GEN_THISCALL F_009ec1a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ec1a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009e9d00(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xcf);
  return (uint)uVar1;
}

/* ref: FUN_009ec1e0 */
GEN_FRAME uint GEN_THISCALL F_009ec1e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec1e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_009e6340((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_009e70b0((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_009e9d00((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_009ec240 */
GEN_FRAME uint GEN_THISCALL F_009ec240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ec240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009e9dc0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xd0);
  return (uint)uVar1;
}

/* ref: FUN_009ec280 */
GEN_FRAME uint GEN_THISCALL F_009ec280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec280u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_009e6670((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_009e7120((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_009e9dc0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_009ec380 */
GEN_FRAME uint GEN_THISCALL F_009ec380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xc,0,0xca);
    F_009e7260(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,param_1)
    ;
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    iVar2 = *(int *)this;
    puVar4 = *(undefined4 * PTR32 *)this;
    if (puVar4 != (undefined4 *)0x0) {
      for (; puVar4 != puVar1; puVar4 = puVar4 + 3) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar4)(puVar4 GEN_EDX_ARG,0);
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0xc) * 0xc,0xca);
    }
    *(uint *)((int)this + 8) = param_1 * 0xc + uVar3;
    *(uint *)((int)this + 4) = uVar3 + (((int)puVar1 - iVar2) / 0xc) * 0xc;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_009ec480 */
GEN_NOFRAME uint GEN_THISCALL F_009ec480(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ec480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ec4b0 */
GEN_FRAME uint GEN_THISCALL F_009ec4b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ec4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar3 = *puVar2;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009ec4f0 */
GEN_NOFRAME uint GEN_THISCALL F_009ec4f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ec4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ec520 */
GEN_FRAME uint GEN_THISCALL F_009ec520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ec520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    puVar3 = param_3;
    while (puVar3 != puVar1) {
      puVar4 = puVar3 + 0x29;
      puVar6 = puVar2 + 0x29;
      puVar7 = puVar3;
      puVar8 = puVar2;
      for (iVar5 = 0x29; puVar2 = puVar6, puVar3 = puVar4, iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009ec580 */
GEN_NOFRAME uint GEN_THISCALL F_009ec580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ec580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ec5b0 */
GEN_FRAME uint GEN_THISCALL F_009ec5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ec5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_009e3860(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009ec5f0 */
GEN_NOFRAME uint GEN_THISCALL F_009ec5f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ec5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ec620 */
GEN_NOFRAME uint GEN_THISCALL F_009ec620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ec620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ec650 */
GEN_FRAME uint GEN_THISCALL F_009ec650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ec650u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x29))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_009dcbe0(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x29) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x29) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x29) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[10];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 10))) = (char)piVar3[10];
      *(char *)(piVar3 + 10) = (char)iVar1;
      goto LAB_009ec76a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x29) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x29) == '\0') {
      piVar4 = (int *)F_009dc950(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x29) == '\0') {
      uVar5 = F_009dc920(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_009ec76a: ;
  if ((char)piVar3[10] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[10] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[10] == '\0') {
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(piVar4 + 10) = 0;
            F_009e2880((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x29) == '\0') {
            if ((*(char *)(*piVar6 + 0x28) != '\x01') || (*(char *)(piVar6[2] + 0x28) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x28) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x28) = 1;
                *(undefined1 *)(piVar6 + 10) = 0;
                F_009e28e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 10) = (char)piVar4[10];
              *(undefined1 *)(piVar4 + 10) = 1;
              *(undefined1 *)(piVar6[2] + 0x28) = 1;
              F_009e2880((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_009ec828: ;
            *(undefined1 *)(piVar6 + 10) = 0;
          }
        }
        else {
          if ((char)piVar6[10] == '\0') {
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(piVar4 + 10) = 0;
            F_009e28e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x29) == '\0') {
            if ((*(char *)(piVar6[2] + 0x28) == '\x01') && (*(char *)(*piVar6 + 0x28) == '\x01'))
            goto LAB_009ec828;
            if (*(char *)(*piVar6 + 0x28) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x28) = 1;
              *(undefined1 *)(piVar6 + 10) = 0;
              F_009e2880((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 10) = (char)piVar4[10];
            *(undefined1 *)(piVar4 + 10) = 1;
            *(undefined1 *)(*piVar6 + 0x28) = 1;
            F_009e28e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 10) = 1;
  }
  F_00406810(piVar3);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_009ec8a0 */
GEN_FRAME unsigned int GEN_THISCALL F_009ec8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x29);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_009ec8a0(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    if (piVar3 != (int *)0x0) {
      F_00406810(piVar3);
    }
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x29);
  }
  return;
}

/* ref: FUN_009ec8f0 */
GEN_FRAME uint GEN_THISCALL F_009ec8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0xc;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_009ec380(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_009ec380(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_009ec970 */
GEN_FRAME uint GEN_THISCALL F_009ec970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || ((int)((int)(uintptr_t)param_1) * 4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))((int)((int)(uintptr_t)param_1) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    }
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_009eca20 */
GEN_FRAME uint GEN_THISCALL F_009eca20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9eca20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (*(int *)((int)this + 8) - *(int *)this) / 0xa4;
  if (uVar4 < param_1) {
    iVar3 = param_1 * 0xa4;
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || (iVar3 == 0)) {
      param_1 = 0;
    }
    else {
      param_1 = ((code *)REFG(gen_code32, 0x14a0a14))(iVar3,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    }
    F_009ea350(*(undefined4 *)this,*(undefined4 *)((int)this + 4),param_1);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    *(uint *)((int)this + 8) = iVar3 + param_1;
    *(uint *)((int)this + 4) = ((iVar2 - iVar1) / 0xa4) * 0xa4 + param_1;
    *(uint *)this = param_1;
    uVar4 = param_1;
  }
  return uVar4;
}

/* ref: FUN_009ecaf0 */
GEN_FRAME uint GEN_THISCALL F_009ecaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ecaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (*(int *)((int)this + 8) - *(int *)this) / 0x2a;
  if (uVar4 < param_1) {
    iVar3 = param_1 * 0x2a;
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || (iVar3 == 0)) {
      param_1 = 0;
    }
    else {
      param_1 = ((code *)REFG(gen_code32, 0x14a0a14))(iVar3,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    }
    F_009e7310(*(undefined4 *)this,*(undefined4 *)((int)this + 4),param_1,(int)this + 0xc,0,
                 param_1);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    *(uint *)((int)this + 8) = iVar3 + param_1;
    *(uint *)((int)this + 4) = ((iVar2 - iVar1) / 0x2a) * 0x2a + param_1;
    *(uint *)this = param_1;
    uVar4 = param_1;
  }
  return uVar4;
}

/* ref: FUN_009ecbd0 */
GEN_FRAME uint GEN_THISCALL F_009ecbd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ecbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || ((int)((int)(uintptr_t)param_1) * 4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))((int)((int)(uintptr_t)param_1) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    }
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_009ecc80 */
GEN_FRAME uint GEN_THISCALL F_009ecc80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ecc80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || ((int)((int)(uintptr_t)param_1) * 4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))((int)((int)(uintptr_t)param_1) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    }
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_009ecd30 */
GEN_FRAME uint GEN_THISCALL F_009ecd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ecd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || ((int)((int)(uintptr_t)param_1) * 4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))((int)((int)(uintptr_t)param_1) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    }
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_009ecde0 */
GEN_FRAME uint GEN_THISCALL F_009ecde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ecde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || ((int)((int)(uintptr_t)param_1) * 4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))((int)((int)(uintptr_t)param_1) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    }
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_009ece90 */
GEN_FRAME uint GEN_THISCALL F_009ece90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ece90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || ((int)((int)(uintptr_t)param_1) * 4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))((int)((int)(uintptr_t)param_1) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    }
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_009ecf40 */
GEN_FRAME uint GEN_THISCALL F_009ecf40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ecf40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || ((int)((int)(uintptr_t)param_1) * 4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))((int)((int)(uintptr_t)param_1) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    }
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_009ed000 */
GEN_FRAME uint GEN_THISCALL F_009ed000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || ((int)((int)(uintptr_t)param_1) * 4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))((int)((int)(uintptr_t)param_1) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    }
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_009ed0b0 */
GEN_FRAME uint GEN_THISCALL F_009ed0b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || ((int)((int)(uintptr_t)param_1) * 4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))((int)((int)(uintptr_t)param_1) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    }
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_009ed160 */
GEN_FRAME uint GEN_THISCALL F_009ed160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ed160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_009e8fa0(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_009ed190 */
GEN_FRAME unsigned int GEN_STDCALL F_009ed190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ed190u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009ed1c0 */
GEN_FRAME uint GEN_THISCALL F_009ed1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ed1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  cVar1 = *(char *)((int)puVar5 + 0x29);
  bVar4 = 1;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  uVar3 = (*(undefined4 *)(gen_frame + 0x8));
  while (cVar1 == '\0') {
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      bVar4 = F_009dbaa0((*(int *)&gen_args[2]) + 0xc,puVar5 + 3);
    }
    else {
      bVar4 = F_009dbaa0(puVar5 + 3,(*(int *)&gen_args[2]) + 0xc);
      bVar4 = bVar4 == 0;
    }
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)uVar3 >> 8)));
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar4);
    if (bVar4 == 0) {
      puVar6 = (undefined4 *)puVar5[2];
    }
    else {
      puVar6 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    uVar3 = (*(undefined4 *)(gen_frame + 0x8));
    cVar1 = *(char *)((int)puVar6 + 0x29);
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar4 != 0) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar5 = (undefined4 *)F_009ea540((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_009de310(&(*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[3]);
  bVar4 = F_009dbaa0((*(undefined4 * PTR32 *)&gen_args[3]) + 3,(*(int *)&gen_args[2]) + 0xc);
  if (bVar4 == 0) {
    if ((*(int *)&gen_args[2]) != 0) {
      F_00406810((*(int *)&gen_args[2]));
    }
    *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  puVar5 = (undefined4 *)F_009ea540((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),uVar3,puVar2,(*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_009ed2d0 */
GEN_FRAME unsigned int F_009ed2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ed2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_009eb490(param_1,param_2,param_3,param_4);
  return;
}

/* ref: FUN_009ed2f0 */
GEN_FRAME unsigned int F_009ed2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ed2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_009eb500(param_1,param_2,param_3,param_4);
  return;
}

/* ref: FUN_009ed310 */
GEN_FRAME uint F_009ed310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9ed310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_009eb570(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf0 */
GEN_FRAME uint GEN_THISCALL F_009ed350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009c0300(this GEN_EDX_FWD);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color1::vf0 */
GEN_FRAME uint GEN_THISCALL F_009ed380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009c0690(this GEN_EDX_FWD);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) &&
     (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color2::vf0 */
GEN_FRAME uint GEN_THISCALL F_009ed3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10dfd9c));
  if ((*(int *)(this + 0x20) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(int *)(this + 0x20));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10dd6b8));
  if (((param_1 & 1) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Normal::vf0 */
GEN_FRAME uint GEN_THISCALL F_009ed410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009c0770(this GEN_EDX_FWD);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) &&
     (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Reflection::vf0 */
GEN_FRAME uint GEN_THISCALL F_009ed440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009c07d0(this GEN_EDX_FWD);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) &&
     (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Distortion::vf0 */
GEN_FRAME uint GEN_THISCALL F_009ed470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009c0840(this GEN_EDX_FWD);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) &&
     (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Palette::vf0 */
GEN_FRAME uint GEN_THISCALL F_009ed4a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009c08a0(this GEN_EDX_FWD);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) &&
     (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::PowderParticleInstance::vf0 */
GEN_FRAME uint GEN_THISCALL F_009ed4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_009ed520 */
GEN_NOFRAME uint GEN_THISCALL F_009ed520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009ef2a0((undefined *)((int)this - 0x170) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_009ed530 */
GEN_FRAME uint GEN_THISCALL F_009ed530(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ed530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009e9d00(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xcf);
  return (uint)uVar1;
}

/* ref: FUN_009ed570 */
GEN_FRAME uint GEN_THISCALL F_009ed570(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ed570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009e9dc0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xd0);
  return (uint)uVar1;
}

/* ref: Apricot::ApricotListenner::vf0 */
GEN_FRAME uint GEN_THISCALL F_009ed5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009c84a0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009ed660 */
GEN_NOFRAME uint GEN_THISCALL F_009ed660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ed660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ed690 */
GEN_NOFRAME uint GEN_THISCALL F_009ed690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ed690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ed6f0 */
GEN_NOFRAME uint GEN_THISCALL F_009ed6f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ed6f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ed720 */
GEN_FRAME unsigned int GEN_THISCALL F_009ed720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ed720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)this != *(int *)((int)this + 4)) {
    *(int *)((int)this + 4) = *(int *)this;
  }
  return;
}

/* ref: FUN_009ed770 */
GEN_NOFRAME uint GEN_THISCALL F_009ed770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ed770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ed7a0 */
GEN_FRAME uint GEN_THISCALL F_009ed7a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ed7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)this != uVar1) {
    uVar1 = F_009e3860(uVar1,uVar1,*(uint *)this,this);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_009ed7d0 */
GEN_NOFRAME uint GEN_THISCALL F_009ed7d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ed7d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ed830 */
GEN_FRAME uint GEN_THISCALL F_009ed830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar2 = *(uint *)((int)this + 4);
  if ((param_1 < uVar2) && (uVar3 = *(uint *)this, uVar3 <= param_1)) {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_009ec8f0(this GEN_EDX_FWD,1);
    }
    iVar1 = *(int *)this + ((int)(param_1 - uVar3) / 0xc) * 0xc;
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar5 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
      puVar4[1] = *(undefined4 *)(iVar1 + 4);
      puVar4[2] = *(undefined4 *)(iVar1 + 8);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
      return (uint)puVar4;
    }
  }
  else {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_009ec8f0(this GEN_EDX_ARG,1);
    }
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
      puVar5[1] = *(undefined4 *)(param_1 + 4);
      puVar5[2] = *(undefined4 *)(param_1 + 8);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
  return (uint)puVar5;
}

/* ref: CVector_VShaderSceneKey_Kernel_Graphics_Client_Kernel::vf0 */
GEN_FRAME uint GEN_THISCALL F_009ed8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10e046c));
  F_009e9f10((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009ed900 */
GEN_FRAME uint GEN_THISCALL F_009ed900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  bVar1 = F_009e6740(this GEN_EDX_FWD,(param_1[1] - *param_1) / 0x14);
  if (bVar1 != 0) {
    uVar2 = F_009e8fa0(*param_1,param_1[1],*(undefined4 *)this,(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar2;
  }
  return (uint)this;
}

/* ref: FUN_009ed960 */
GEN_FRAME uint GEN_THISCALL F_009ed960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009ec970(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ec970(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009ed9d0 */
GEN_FRAME uint GEN_THISCALL F_009ed9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0xa4;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xa4;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_009eca20(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_009eca20(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_009eda60 */
GEN_FRAME uint GEN_THISCALL F_009eda60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9eda60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x2a;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x2a;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_009ecaf0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_009ecaf0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_009edaf0 */
GEN_FRAME uint GEN_THISCALL F_009edaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9edaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009ecbd0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ecbd0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009edb60 */
GEN_FRAME uint GEN_THISCALL F_009edb60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9edb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009ecc80(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ecc80(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009edbd0 */
GEN_FRAME uint GEN_THISCALL F_009edbd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9edbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009ecd30(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ecd30(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009edc40 */
GEN_NOFRAME uint GEN_THISCALL F_009edc40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9edc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x29);
  while (cVar1 == '\0') {
    F_009ec8a0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = (int *)*piVar2;
    if (piVar2 != (int *)0x0) {
      F_00406810(piVar2);
    }
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x29);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_009edca0 */
GEN_FRAME uint GEN_THISCALL F_009edca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9edca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009ecde0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ecde0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009edd10 */
GEN_FRAME uint GEN_THISCALL F_009edd10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9edd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009ece90(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ece90(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009edd80 */
GEN_FRAME uint GEN_THISCALL F_009edd80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9edd80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009ecf40(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ecf40(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009eddf0 */
GEN_FRAME uint GEN_THISCALL F_009eddf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9eddf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009ed000(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ed000(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009ede60 */
GEN_FRAME uint GEN_THISCALL F_009ede60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ede60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009ed0b0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ed0b0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009eded0 */
GEN_FRAME uint GEN_THISCALL F_009eded0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9eded0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xd2);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd2);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_009edf80 */
GEN_FRAME uint GEN_THISCALL F_009edf80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9edf80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_009e8c10(this GEN_EDX_FWD,param_2);
  F_009ed1c0(this GEN_EDX_ARG,param_1,uVar1,uVar2);
  return param_1;
}

/* ref: FUN_009edfb0 */
GEN_FRAME unsigned int F_009edfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9edfb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  iVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_009ee050: ;
      if (1 < iVar1) {
        F_009e90e0(iVar2,iVar4,param_4,param_5,0);
      }
      return;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(iVar4 - iVar2 & 0xfffffff8U)) {
          F_009e7560(iVar2,iVar4,param_4,param_5,0,0);
        }
        F_009eb490(iVar2,iVar4,param_4,param_5);
        return;
      }
      goto LAB_009ee050;
    }
    F_009ea7d0(&(*(int *)(gen_frame + 0x4)),iVar2,iVar4,param_4,param_5);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x4)) - iVar2 & 0xfffffff8U) < (int)(iVar4 - (*(int *)(gen_frame + 0x8)) & 0xfffffff8U)) {
      F_009edfb0(iVar2,(*(int *)(gen_frame + 0x4)),iVar3,param_4,param_5);
      iVar2 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_009edfb0((*(int *)(gen_frame + 0x8)),iVar4,iVar3,param_4,param_5);
      iVar4 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_009ee0b0 */
GEN_FRAME unsigned int F_009ee0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9ee0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  iVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_009ee150: ;
      if (1 < iVar1) {
        F_009e9230(iVar2,iVar4,param_4,param_5,0);
      }
      return;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(iVar4 - iVar2 & 0xfffffff8U)) {
          F_009e7690(iVar2,iVar4,param_4,param_5,0,0);
        }
        F_009eb500(iVar2,iVar4,param_4,param_5);
        return;
      }
      goto LAB_009ee150;
    }
    F_009eac60(&(*(int *)(gen_frame + 0x4)),iVar2,iVar4,param_4,param_5);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x4)) - iVar2 & 0xfffffff8U) < (int)(iVar4 - (*(int *)(gen_frame + 0x8)) & 0xfffffff8U)) {
      F_009ee0b0(iVar2,(*(int *)(gen_frame + 0x4)),iVar3,param_4,param_5);
      iVar2 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_009ee0b0((*(int *)(gen_frame + 0x8)),iVar4,iVar3,param_4,param_5);
      iVar4 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_009ee1b0 */
GEN_FRAME uint F_009ee1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9ee1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2 - param_1;
  iVar3 = param_1;
  iVar5 = param_2;
  iVar4 = param_3;
  do {
    uVar2 = iVar1 >> 4;
    if ((int)uVar2 < 0x21) {
LAB_009ee28a: ;
      if (1 < (int)uVar2) {
        uVar2 = F_009e93e0(iVar3,iVar5);
      }
      return uVar2;
    }
    if (iVar4 < 1) {
      if (0x20 < (int)uVar2) {
        if (0x10 < (int)(iVar5 - iVar3 & 0xfffffff0U)) {
          F_009e77e0(iVar3,iVar5,param_4,param_5,param_6,param_7);
        }
        uVar2 = F_009eb570(iVar3,iVar5,param_4,param_5,param_6,param_7);
        return uVar2;
      }
      goto LAB_009ee28a;
    }
    F_009eb0f0(&(*(int *)(gen_frame + 0x4)),iVar3,iVar5,param_4,param_5,param_6,param_7);
    iVar4 = iVar4 / 2 + (iVar4 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x4)) - iVar3 & 0xfffffff0U) < (int)(iVar5 - (*(int *)(gen_frame + 0x8)) & 0xfffffff0U)) {
      F_009ee1b0(iVar3,(*(int *)(gen_frame + 0x4)),iVar4,param_4,param_5,param_6,param_7);
      iVar3 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_009ee1b0((*(int *)(gen_frame + 0x8)),iVar5,iVar4,param_4,param_5,param_6,param_7);
      iVar5 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = iVar5 - iVar3;
  } while( true );
}

/* ref: FUN_009ee330 */
GEN_NOFRAME uint GEN_THISCALL F_009ee330(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ee330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ee360 */
GEN_NOFRAME uint GEN_THISCALL F_009ee360(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ee360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::Scheduler::vf3 */
GEN_NOFRAME uint F_009ee390(void)
{
  GEN_ENTER(0x9ee390u, 0u, 0u, 0u, 0u);
  return 0xc;
}

/* ref: Apricot::Engine::Data::Communicator::Scheduler::vf4 */
GEN_FRAME uint GEN_THISCALL F_009ee3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee3a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x14 + param_2 * 4;
}

/* ref: FUN_009ee3b0 */
GEN_FRAME uint GEN_THISCALL F_009ee3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee3b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: Apricot::Engine::Data::Communicator::Scheduler::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009ee3c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ee3c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 8) - *(int *)(in_ecx + 4) >> 2;
}

/* ref: Apricot::Engine::Data::Communicator::Scheduler::vf2 */
GEN_FRAME uint GEN_THISCALL F_009ee3d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee3d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 4) + param_2 * 4;
}

/* ref: FUN_009ee3e0 */
GEN_NOFRAME uint GEN_THISCALL F_009ee3e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ee3e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ee410 */
GEN_NOFRAME uint GEN_THISCALL F_009ee410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ee410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009ee440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ee440u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24);
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009ee450(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ee450u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x28);
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_009ee460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ee460u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x2c);
}

/* ref: FUN_009ee470 */
GEN_FRAME uint GEN_THISCALL F_009ee470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee470u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xa4 + *in_ecx;
}

/* ref: FUN_009ee490 */
GEN_FRAME uint GEN_THISCALL F_009ee490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee490u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x2a + *in_ecx;
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009ee4a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ee4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (*(int *)(this + 0x18) - *(int *)(this + 0x14)) / 0x2a;
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf5 */
GEN_FRAME uint GEN_THISCALL F_009ee4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee4c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x2a + *(int *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf6 */
GEN_FRAME uint GEN_THISCALL F_009ee4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee4d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xa4 + *(int *)(in_ecx + 4);
}

/* ref: FUN_009ee4f0 */
GEN_NOFRAME uint GEN_THISCALL F_009ee4f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ee4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ee560 */
GEN_FRAME uint GEN_THISCALL F_009ee560(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ee560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009e9d00(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xcf);
  return (uint)uVar1;
}

/* ref: FUN_009ee5e0 */
GEN_FRAME uint GEN_THISCALL F_009ee5e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ee5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009e9dc0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xd0);
  return (uint)uVar1;
}

/* ref: FUN_009ee630 */
GEN_FRAME uint GEN_THISCALL F_009ee630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  bVar1 = F_009e6740(this GEN_EDX_FWD,(param_1[1] - *param_1) / 0x14);
  if (bVar1 != 0) {
    uVar2 = F_009e8fa0(*param_1,param_1[1],*(undefined4 *)this,(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar2;
  }
  return (uint)this;
}

/* ref: FUN_009ee6a0 */
GEN_FRAME uint GEN_THISCALL F_009ee6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009ed960(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009ed960(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_009ee720 */
GEN_FRAME unsigned int GEN_THISCALL F_009ee720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009ed9d0(this GEN_EDX_FWD,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP(((((int)param_1 - (int)puVar2) / 0xa4) * 0xa4 + *(int *)this)));
  }
  else {
    puVar2 = param_1;
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009ed9d0(this GEN_EDX_ARG,1);
    }
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar1 = 0x29; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xa4;
  return;
}

/* ref: FUN_009ee7a0 */
GEN_FRAME unsigned int GEN_THISCALL F_009ee7a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_009eda60(this GEN_EDX_FWD,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_009daf30(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x2a) * 0x2a + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x2a;
      return;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_009eda60(this GEN_EDX_ARG,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_009daf30(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x2a;
  return;
}

/* ref: FUN_009ee830 */
GEN_FRAME uint GEN_THISCALL F_009ee830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edaf0(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edaf0(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_009ee8a0 */
GEN_FRAME uint GEN_THISCALL F_009ee8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edb60(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edb60(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_009ee910 */
GEN_FRAME uint GEN_THISCALL F_009ee910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edbd0(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edbd0(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_009ee980 */
GEN_FRAME uint GEN_THISCALL F_009ee980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edca0(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edca0(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_009ee9f0 */
GEN_FRAME uint GEN_THISCALL F_009ee9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edd10(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edd10(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_009eea60 */
GEN_FRAME uint GEN_THISCALL F_009eea60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9eea60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edd80(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edd80(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_009eead0 */
GEN_FRAME uint GEN_THISCALL F_009eead0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9eead0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009eddf0(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009eddf0(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_009eeb40 */
GEN_FRAME uint GEN_THISCALL F_009eeb40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9eeb40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009ede60(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009ede60(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_009eebb0 */
GEN_FRAME uint GEN_THISCALL F_009eebb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9eebb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_009edc40(this GEN_EDX_FWD);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x29) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x29) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x29);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x29);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x29);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x29);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_009ec650(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_009eec50 */
GEN_FRAME uint GEN_THISCALL F_009eec50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9eec50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009eded0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009eded0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009eecc0 */
GEN_FRAME unsigned int F_009eecc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9eecc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_009edfb0(param_1,param_2,param_2 - param_1 >> 3,param_3,param_4);
  return;
}

/* ref: FUN_009eecf0 */
GEN_FRAME unsigned int F_009eecf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9eecf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_009ee0b0(param_1,param_2,param_2 - param_1 >> 3,param_3,param_4);
  return;
}

/* ref: FUN_009eed20 */
GEN_FRAME uint F_009eed20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9eed20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_009ee1b0(param_1,param_2,param_2 - param_1 >> 4,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::Scheduler::vf0 */
GEN_FRAME uint GEN_THISCALL F_009eed60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9eed60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e0474));
  if ((*(int *)(this + 4) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(int *)(this + 4));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd320));
  if (((param_1 & 1) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf0 */
GEN_FRAME uint GEN_THISCALL F_009eedc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9eedc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10e048c));
  if ((*(int *)(this + 0x14) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(int *)(this + 0x14));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  if ((*(int *)(this + 4) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(int *)(this + 4));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10dd338));
  if (((param_1 & 1) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::ColorFunctionCurve::vf1 */
GEN_NOFRAME uint F_009eee30(void)
{
  GEN_ENTER(0x9eee30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::RgbFunctionCurve::vf0 */
GEN_FRAME uint GEN_THISCALL F_009eee40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9eee40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e04ac));
  if ((*(int *)(this + 4) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(int *)(this + 4));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  if (((param_1 & 1) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::LineParticle::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009eeea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eeea0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::LineParticle::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009eeeb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eeeb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::LineParticle::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009eeec0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eeec0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x90;
}

/* ref: Apricot::Engine::Data::Communicator::LineParticle::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_009eeed0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eeed0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x328;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009eeee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eeee0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009eeef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eeef0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009eef00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eef00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf4 */
GEN_NOFRAME byte GEN_THISCALL F_009eef10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eef10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf5 */
GEN_NOFRAME byte GEN_THISCALL F_009eef20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eef20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x21);
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_009eef30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eef30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x28;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_009eef40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eef40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xb0;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_009eef50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eef50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x210;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_009eef60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eef60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x4a8;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf10 */
GEN_NOFRAME uint GEN_THISCALL F_009eef70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eef70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x740;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_009eef80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eef80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x778;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009eef90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eef90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009eefa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eefa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009eefb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eefb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_009eefc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eefc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_009eefd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eefd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf6 */
GEN_NOFRAME byte GEN_THISCALL F_009eefe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eefe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf7 */
GEN_NOFRAME byte GEN_THISCALL F_009eeff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eeff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x19);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf8 */
GEN_NOFRAME byte GEN_THISCALL F_009ef000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef000u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x1a);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf9 */
GEN_NOFRAME byte GEN_THISCALL F_009ef010(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef010u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x1b);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_009ef020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x1c);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_009ef030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef030u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_009ef040(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef040u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xa8;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_009ef050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef050u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x130;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf14 */
GEN_NOFRAME uint GEN_THISCALL F_009ef060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1b8;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf15 */
GEN_NOFRAME uint GEN_THISCALL F_009ef070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef070u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x240;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf16 */
GEN_NOFRAME uint GEN_THISCALL F_009ef080(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef080u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2c8;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf17 */
GEN_NOFRAME uint GEN_THISCALL F_009ef090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x3d8;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf18 */
GEN_NOFRAME uint GEN_THISCALL F_009ef0a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef0a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x350;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf19 */
GEN_NOFRAME uint GEN_THISCALL F_009ef0b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef0b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x410;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf20 */
GEN_NOFRAME uint GEN_THISCALL F_009ef0c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef0c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x6a8;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf21 */
GEN_NOFRAME uint GEN_THISCALL F_009ef0d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef0d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x940;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf22 */
GEN_NOFRAME uint GEN_THISCALL F_009ef0e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef0e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xbd8;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf23 */
GEN_NOFRAME uint GEN_THISCALL F_009ef0f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef0f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xe70;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf24 */
GEN_NOFRAME uint GEN_THISCALL F_009ef100(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef100u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1108;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009ef110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef110u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009ef120(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef120u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009ef130(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef130u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf4 */
GEN_NOFRAME float10 GEN_THISCALL F_009ef140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef140u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_009ef150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef150u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x18;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_009ef160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xa0;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_009ef170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef170u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x128;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_009ef180(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef180u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1b0;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_009ef190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef190u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x238;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf10 */
GEN_NOFRAME uint GEN_THISCALL F_009ef1a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef1a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2c0;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_009ef1b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef1b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x348;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_009ef1c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef1c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x3d0;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_009ef1d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef1d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x458;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf14 */
GEN_NOFRAME uint GEN_THISCALL F_009ef1e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef1e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x4e0;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf15 */
GEN_NOFRAME uint GEN_THISCALL F_009ef1f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef1f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x778;
}

/* ref: FUN_009ef200 */
GEN_NOFRAME unsigned int GEN_THISCALL F_009ef200(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  pvVar1 = *(undefined * PTR32 *)this;
  if (pvVar1 != (undefined *)0x0) {
    F_009cfa70(pvVar1 GEN_EDX_FWD);
    F_00406ad0(pvVar1);
    *(undefined4 *)this = 0;
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 4);
  if (pvVar1 != (undefined *)0x0) {
    F_009cfa70(pvVar1 GEN_EDX_ARG);
    F_00406ad0(pvVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 8) = 0xe0000000;
  *(undefined4 *)((int)this + 0x14) = 0;
  return;
}

/* ref: FUN_009ef260 */
GEN_NOFRAME unsigned int GEN_THISCALL F_009ef260(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    F_009cfa70(this_00 GEN_EDX_FWD);
    F_00406ad0(this_00);
    *(undefined4 *)this = 0;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0xe0000000;
  return;
}

/* ref: Client::Graphics::Vfx::VfxData::vf0 */
GEN_FRAME uint GEN_THISCALL F_009ef2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ef2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009cfb10(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009ef2d0 */
GEN_FRAME uint GEN_THISCALL F_009ef2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ef2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009eec50(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009eec50(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_009ef340 */
GEN_FRAME uint GEN_THISCALL F_009ef340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_009eebb0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf1 */
GEN_NOFRAME unsigned int F_009ef360(void)
{
  GEN_ENTER(0x9ef360u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009ef370(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef370u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009ef380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef380u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_009ef390(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef390u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_009ef3a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef3a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_009ef3b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef3b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x25;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_009ef3c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef3c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x128);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_009ef3d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef3d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_009ef3e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef3e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf10 */
GEN_NOFRAME uint GEN_THISCALL F_009ef3f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef3f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_009ef400(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef400u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_009ef410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef410u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x14c;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_009ef420(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef420u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x160;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf14 */
GEN_NOFRAME uint GEN_THISCALL F_009ef430(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef430u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1e8;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf15 */
GEN_NOFRAME uint GEN_THISCALL F_009ef440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef440u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x270;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf16 */
GEN_NOFRAME uint GEN_THISCALL F_009ef450(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef450u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2f8;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf17 */
GEN_NOFRAME uint GEN_THISCALL F_009ef460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef460u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x380;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf18 */
GEN_NOFRAME uint GEN_THISCALL F_009ef470(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x618;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf19 */
GEN_NOFRAME uint GEN_THISCALL F_009ef480(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef480u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x778;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf20 */
GEN_NOFRAME uint GEN_THISCALL F_009ef490(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef490u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x8d8;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf21 */
GEN_NOFRAME uint GEN_THISCALL F_009ef4a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef4a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xa38;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf22 */
GEN_NOFRAME uint GEN_THISCALL F_009ef4b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef4b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xac0;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf23 */
GEN_NOFRAME uint GEN_THISCALL F_009ef4c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef4c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xb48;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf24 */
GEN_NOFRAME uint GEN_THISCALL F_009ef4d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef4d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xbd0;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf25 */
GEN_NOFRAME uint GEN_THISCALL F_009ef4e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef4e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xc58;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf26 */
GEN_NOFRAME uint GEN_THISCALL F_009ef4f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef4f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xce0;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf27 */
GEN_NOFRAME uint GEN_THISCALL F_009ef500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef500u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xd68;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf28 */
GEN_NOFRAME uint GEN_THISCALL F_009ef510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef510u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xd70;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf29 */
GEN_NOFRAME uint GEN_THISCALL F_009ef520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef520u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1130;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf30 */
GEN_NOFRAME uint GEN_THISCALL F_009ef530(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef530u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1478;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf31 */
GEN_NOFRAME uint GEN_THISCALL F_009ef540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef540u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1738;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf32 */
GEN_NOFRAME uint GEN_THISCALL F_009ef550(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1a80;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf35 */
GEN_NOFRAME byte GEN_THISCALL F_009ef560(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x24);
}

/* ref: FUN_009ef590 */
GEN_FRAME uint GEN_THISCALL F_009ef590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ef590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this + param_1 * 0x44;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf33 */
GEN_NOFRAME uint GEN_THISCALL F_009ef5b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (*(int *)(this + 0x130) - *(int *)(this + 300)) / 0x44;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf34 */
GEN_NOFRAME uint GEN_THISCALL F_009ef5d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (*(int *)(this + 0x140) - *(int *)(this + 0x13c)) / 0x44;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf36 */
GEN_FRAME uint GEN_THISCALL F_009ef5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ef5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)(this + 300) + param_1 * 0x44;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf37 */
GEN_FRAME uint GEN_THISCALL F_009ef610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ef610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)(this + 0x13c) + param_1 * 0x44;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf63 */
GEN_NOFRAME uint GEN_THISCALL F_009ef630(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_009ef640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ef640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009ef650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x68;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009ef660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x78;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_009ef670(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef670u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x100;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_009ef680(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef680u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x188;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_009ef690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x420;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_009ef6a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef6a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x580;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_009ef6b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef6b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x6e0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_009ef6c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef6c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x840;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf10 */
GEN_NOFRAME uint GEN_THISCALL F_009ef6d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef6d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x8c8;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_009ef6e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef6e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x950;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_009ef6f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef6f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_009ef700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf14 */
GEN_NOFRAME uint GEN_THISCALL F_009ef710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef710u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf15 */
GEN_NOFRAME uint GEN_THISCALL F_009ef720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf16 */
GEN_NOFRAME uint GEN_THISCALL F_009ef730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef730u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf17 */
GEN_NOFRAME uint GEN_THISCALL F_009ef740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef740u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf18 */
GEN_NOFRAME float10 GEN_THISCALL F_009ef750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x3c);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf19 */
GEN_NOFRAME float10 GEN_THISCALL F_009ef760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x40);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf20 */
GEN_NOFRAME float10 GEN_THISCALL F_009ef770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef770u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x44);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf21 */
GEN_NOFRAME float10 GEN_THISCALL F_009ef780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x48);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf22 */
GEN_NOFRAME byte GEN_THISCALL F_009ef790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x36);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf23 */
GEN_NOFRAME byte GEN_THISCALL F_009ef7a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef7a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x37);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf24 */
GEN_NOFRAME uint GEN_THISCALL F_009ef7b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef7b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 100);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf25 */
GEN_NOFRAME float10 GEN_THISCALL F_009ef7c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef7c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x2c);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf26 */
GEN_NOFRAME uint GEN_THISCALL F_009ef7d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef7d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x28);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf27 */
GEN_NOFRAME byte GEN_THISCALL F_009ef7e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef7e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x30);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf28 */
GEN_NOFRAME byte GEN_THISCALL F_009ef7f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef7f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x31);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf29 */
GEN_NOFRAME byte GEN_THISCALL F_009ef800(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x32);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf30 */
GEN_NOFRAME byte GEN_THISCALL F_009ef810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef810u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x33);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf31 */
GEN_NOFRAME byte GEN_THISCALL F_009ef820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef820u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x34);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf32 */
GEN_NOFRAME uint GEN_THISCALL F_009ef830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf33 */
GEN_NOFRAME uint GEN_THISCALL F_009ef840(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef840u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x4c);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf34 */
GEN_NOFRAME uint GEN_THISCALL F_009ef850(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef850u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x50);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf35 */
GEN_NOFRAME uint GEN_THISCALL F_009ef860(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef860u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x54);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_009ef870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef870u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_009ef880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef880u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x58);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf38 */
GEN_NOFRAME uint GEN_THISCALL F_009ef890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef890u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf39 */
GEN_NOFRAME uint GEN_THISCALL F_009ef8a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef8a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x5c);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf40 */
GEN_NOFRAME uint GEN_THISCALL F_009ef8b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef8b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x60);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_009ef8c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef8c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x35);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf42 */
GEN_NOFRAME uint GEN_THISCALL F_009ef8d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef8d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x9d8;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf43 */
GEN_NOFRAME uint GEN_THISCALL F_009ef8e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef8e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xf98;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_009ef8f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef8f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xfa8;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf45 */
GEN_NOFRAME uint GEN_THISCALL F_009ef900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xfb0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf46 */
GEN_NOFRAME uint GEN_THISCALL F_009ef910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef910u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xfb8;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf47 */
GEN_NOFRAME uint GEN_THISCALL F_009ef920(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef920u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1048;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf48 */
GEN_NOFRAME uint GEN_THISCALL F_009ef930(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef930u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1160;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf49 */
GEN_NOFRAME uint GEN_THISCALL F_009ef940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef940u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2500;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf50 */
GEN_NOFRAME uint GEN_THISCALL F_009ef950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2cb0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf51 */
GEN_NOFRAME uint GEN_THISCALL F_009ef960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef960u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2cb8;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf52 */
GEN_NOFRAME uint GEN_THISCALL F_009ef970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef970u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2cc0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf53 */
GEN_NOFRAME uint GEN_THISCALL F_009ef980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef980u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2d58;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf54 */
GEN_FRAME uint GEN_THISCALL F_009ef990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ef990u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x270 + 0x3768 + in_ecx;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf55 */
GEN_NOFRAME uint GEN_THISCALL F_009ef9b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef9b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x4128;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf56 */
GEN_NOFRAME uint GEN_THISCALL F_009ef9c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef9c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x41e0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf57 */
GEN_NOFRAME uint GEN_THISCALL F_009ef9d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef9d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x4210;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf58 */
GEN_NOFRAME uint GEN_THISCALL F_009ef9e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef9e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x4270;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf59 */
GEN_NOFRAME uint GEN_THISCALL F_009ef9f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ef9f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x42c8;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf60 */
GEN_NOFRAME uint GEN_THISCALL F_009efa00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efa00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x4330;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf61 */
GEN_NOFRAME uint GEN_THISCALL F_009efa10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efa10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x438c;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf62 */
GEN_NOFRAME uint GEN_THISCALL F_009efa20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efa20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x445c;
}

/* ref: Apricot::Engine::Data::Communicator::DirectionalLightEffector::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009efa30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efa30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::DirectionalLightEffector::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009efa40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efa40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2a0;
}

/* ref: Apricot::Engine::Data::Communicator::DirectionalLightEffector::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009efa50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efa50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x538;
}

/* ref: Apricot::Engine::Data::Communicator::DirectionalLightEffector::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_009efa60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efa60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x5c0;
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009efa70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efa70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009efa80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efa80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2a0;
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009efa90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efa90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2d8;
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_009efaa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efaa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x438;
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_009efab0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x598);
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf6 */
GEN_NOFRAME byte GEN_THISCALL F_009efac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efac0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x59c);
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf7 */
GEN_NOFRAME byte GEN_THISCALL F_009efad0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efad0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x59d);
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf8 */
GEN_NOFRAME byte GEN_THISCALL F_009efae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efae0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x59e);
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf9 */
GEN_NOFRAME byte GEN_THISCALL F_009efaf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efaf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x59f);
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf10 */
GEN_NOFRAME float10 GEN_THISCALL F_009efb00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efb00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x5a0);
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf11 */
GEN_NOFRAME float10 GEN_THISCALL F_009efb10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efb10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x5a4);
}

/* ref: Apricot::Engine::Data::Communicator::ColorFunctionCurve::vf0 */
GEN_FRAME uint GEN_THISCALL F_009efb20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9efb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009d2ce0(this GEN_EDX_FWD);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0)
     ) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::LineParticle::vf0 */
GEN_FRAME uint GEN_THISCALL F_009efb50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9efb50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009d2f70(this GEN_EDX_FWD);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf0 */
GEN_FRAME uint GEN_THISCALL F_009efb80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9efb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009d2ff0(this GEN_EDX_FWD);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf0 */
GEN_FRAME uint GEN_THISCALL F_009efbb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9efbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009d30f0(this GEN_EDX_FWD);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0))
  {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf0 */
GEN_FRAME uint GEN_THISCALL F_009efbe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9efbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009d33f0(this GEN_EDX_FWD);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: FUN_009efc10 */
GEN_FRAME uint GEN_THISCALL F_009efc10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efc10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_009eebb0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 4));
  }
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009efc40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efc40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009efc50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efc50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009efc60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efc60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf4 */
GEN_NOFRAME byte GEN_THISCALL F_009efc70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efc70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf5 */
GEN_NOFRAME byte GEN_THISCALL F_009efc80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efc80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x11);
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_009efc90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efc90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_009efca0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_009efcb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efcb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_009efcc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efcc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x5c8;
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf10 */
GEN_NOFRAME uint GEN_THISCALL F_009efcd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efcd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xce8;
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_009efce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xe10;
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_009efcf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efcf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1380;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf0 */
GEN_FRAME uint GEN_THISCALL F_009efd00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9efd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009d5500(this GEN_EDX_FWD);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf0 */
GEN_FRAME uint GEN_THISCALL F_009efd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9efd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009d59a0(this GEN_EDX_FWD);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::DirectionalLightEffector::vf0 */
GEN_FRAME uint GEN_THISCALL F_009efd60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9efd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009d5ce0(this GEN_EDX_FWD);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) &&
     (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf0 */
GEN_FRAME uint GEN_THISCALL F_009efd90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9efd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009d5d80(this GEN_EDX_FWD);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0)
     ) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: FUN_009efdc0 */
GEN_FRAME uint GEN_THISCALL F_009efdc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efdc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_009eebb0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 4));
  }
  return uVar1;
}

/* ref: FUN_009efdf0 */
GEN_FRAME uint GEN_THISCALL F_009efdf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efdf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_009eebb0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 4));
  }
  return uVar1;
}

/* ref: FUN_009efe20 */
GEN_NOFRAME uint GEN_THISCALL F_009efe20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9efe20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 8) = 0;
  piVar1 = (int *)F_00404230();
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,0x2c,4);
  *(uint *)((int)this + 4) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x28))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x29))) = 1;
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf0 */
GEN_FRAME uint GEN_THISCALL F_009efe60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9efe60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10e07f4));
  F_00995890(this + 0x1380 GEN_EDX_FWD);
  F_00995690(this + 0xe10 GEN_EDX_ARG);
  F_00985ee0(this + 0xce8 GEN_EDX_ARG);
  F_009d5ce0(this + 0x5c8 GEN_EDX_ARG);
  F_009d5d80(this + 0x20 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10dd92c));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::TimelineInstance::vf8 */
GEN_NOFRAME uint F_009efed0(void)
{
  GEN_ENTER(0x9efed0u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: Apricot::Engine::Instance::TimelineInstance::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_009efee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x9efee0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d8) + 0x10))))
                    (*(int * PTR32 *)(this + 0x1d8) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::TimelineInstance::vf0 */
GEN_FRAME uint GEN_THISCALL F_009efef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9efef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[31])REFP(0x10dde84));
  puVar2 = *(undefined4 * PTR32 *)(this + 0x1e0);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[0x7a];
    ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_FWD,1);
    puVar2 = puVar1;
  }
  if ((param_1 & 1) != 0) {
    uVar3 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar3 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar3;
  }
  return (uint)this;
}

/* ref: FUN_009eff60 */
GEN_NOFRAME uint GEN_THISCALL F_009eff60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9eff60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 8) = 0;
  piVar1 = (int *)F_00404230();
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,0x2c,4);
  *(uint *)((int)this + 4) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x28))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x29))) = 1;
  return (uint)this;
}

/* ref: Apricot::ApricotDeviceListenner::vf0 */
GEN_FRAME uint GEN_THISCALL F_009effa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9effa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009d6f50(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::SchedulerInstance::vf8 */
GEN_NOFRAME uint F_009effd0(void)
{
  GEN_ENTER(0x9effd0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Apricot::Engine::Instance::SchedulerInstance::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_009effe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x9effe0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d4) + 0x10))))
                    (*(int * PTR32 *)(this + 0x1d4) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::SchedulerInstance::vf0 */
GEN_FRAME uint GEN_THISCALL F_009f0000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[31])REFP(0x10dde84));
  puVar2 = *(undefined4 * PTR32 *)(this + 0x1e0);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[0x7a];
    ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_FWD,1);
    puVar2 = puVar1;
  }
  if ((param_1 & 1) != 0) {
    uVar3 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar3 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar3;
  }
  return (uint)this;
}

/* ref: FUN_009f0070 */
GEN_NOFRAME uint GEN_THISCALL F_009f0070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9f0070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e0ba4));
  if (*(int *)((int)this + 4) != 0) {
    F_0050c620(*(int *)((int)this + 4),0,0);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406ad0(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar1 = F_005095f0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_009f00b0 */
GEN_NOFRAME byte GEN_THISCALL F_009f00b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9f00b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 4) == 0;
}

/* ref: FUN_009f00c0 */
GEN_FRAME byte GEN_THISCALL F_009f00c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f00c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 8) = 0;
  }
  else {
    (*(undefined2 *)(gen_frame + 0x10)) = 0x3f;
    (*(undefined2 *)(gen_frame + 0x14)) = 1;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    uVar1 = F_00bb85a0(param_1,&(*(undefined4 *)(gen_frame + 0xc)),param_2);
    *(uint *)((int)this + 8) = uVar1;
    if (uVar1 != 0) {
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::System::Text::VulgarManager::vf3 */
GEN_FRAME uint GEN_THISCALL F_009f0140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  iVar1 = param_1[7];
  uVar2 = F_00406bb0(iVar1,0,0);
  *(uint *)(this + 0xc) = uVar2;
  iVar3 = iVar1;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x5c))(param_1 GEN_EDX_ARG);
  F_00c46aa0(*(undefined4 *)(this + 0xc),uVar2,iVar3);
  iVar3 = *(int *)(this + 0xc);
  if (iVar3 == 0) {
    *(undefined4 *)(this + 8) = 0;
  }
  else {
    (*(undefined2 *)(gen_frame + 0x10)) = 0x3f;
    (*(undefined2 *)(gen_frame + 0x14)) = 1;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    uVar2 = F_00bb85a0(iVar3,&(*(undefined4 *)(gen_frame + 0xc)),iVar1);
    *(uint *)(this + 8) = uVar2;
    if (uVar2 != 0) goto LAB_009f01cd;
  }
  if (*(int *)(this + 0xc) != 0) {
    F_00406ad0(*(int *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
LAB_009f01cd: ;
  uVar2 = F_0050c620(*(undefined4 *)(this + 4),0,0);
  *(undefined4 *)(this + 4) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_009f0200 */
GEN_FRAME unsigned int GEN_THISCALL F_009f0200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_0042b790(param_1 GEN_EDX_FWD);
    uVar2 = F_0042a990(param_1 GEN_EDX_ARG);
    F_00bb8410(*(undefined4 *)((int)this + 8),uVar2,uVar1);
  }
  return;
}

/* ref: FUN_009f0240 */
GEN_FRAME byte GEN_THISCALL F_009f0240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_0042b790(param_1 GEN_EDX_FWD);
    uVar2 = F_0042a990(param_1 GEN_EDX_ARG);
    uVar1 = F_00bb80b0(*(undefined4 *)((int)this + 8),uVar2,uVar1);
    if (uVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_009f0290 */
GEN_FRAME uint GEN_THISCALL F_009f0290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_0042b790(param_1 GEN_EDX_FWD);
    uVar2 = F_0042a990(param_1 GEN_EDX_ARG);
    uVar1 = F_00bb8130(*(undefined4 *)((int)this + 8),uVar2,uVar1);
    if (uVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_009f02e0 */
GEN_FRAME uint GEN_THISCALL F_009f02e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f02e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_0042b790(param_1 GEN_EDX_FWD);
    uVar2 = F_0042a990(param_1 GEN_EDX_ARG);
    uVar1 = F_00bb81b0(*(undefined4 *)((int)this + 8),uVar2,uVar1);
    if (uVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_009f0330 */
GEN_FRAME uint GEN_THISCALL F_009f0330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_0042b790(param_1 GEN_EDX_FWD);
    uVar2 = F_0042a990(param_1 GEN_EDX_ARG);
    uVar1 = F_00bb8030(*(undefined4 *)((int)this + 8),uVar2,uVar1);
    if (uVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_009f0380 */
GEN_FRAME uint GEN_THISCALL F_009f0380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_0042b790(param_1 GEN_EDX_FWD);
    uVar2 = F_0042a990(param_1 GEN_EDX_ARG);
    uVar1 = F_00bb84f0(*(undefined4 *)((int)this + 8),uVar2,uVar1);
    if (uVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_009f03d0 */
GEN_FRAME uint GEN_THISCALL F_009f03d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9f03d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined4 * puVar2;
  char * pcVar3;
  undefined * PTR32 * ppvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  F_00509590(this GEN_EDX_FWD);
  uVar6 = 0;
  uVar5 = 0;
  ppvVar4 = &(*(undefined * PTR32 *)(gen_frame + 0xc));
  pcVar3 = "common/VulgarWordsFilter.dic";
  puVar2 = &(*(undefined4 *)(gen_frame + 0x38));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e0ba4));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5;
  (*(undefined4 *)(gen_frame + 0x29)) = 0x101;
  (*(undefined2 *)(gen_frame + 0x2d)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(undefined1 *)(gen_frame + 0x20)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x24)) = 5000;
  (*(undefined1 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x646963;
  uVar1 = F_004ff310(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,0,0);
  uVar1 = F_00513d20(uVar1,puVar2,pcVar3,ppvVar4,uVar5,uVar6);
  *(uint *)((int)this + 4) = uVar1;
  return (uint)this;
}

/* ref: Client::System::Text::VulgarManager::vf0 */
GEN_FRAME uint GEN_THISCALL F_009f0450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e0ba4));
  if (*(int *)(this + 4) != 0) {
    F_0050c620(*(int *)(this + 4),0,0);
  }
  if (*(int *)(this + 0xc) != 0) {
    F_00406ad0(*(int *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  F_005095f0(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009f0500 */
GEN_NOFRAME unsigned int F_009f0500(void)
{
  GEN_ENTER(0x9f0500u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_009f0510 */
GEN_FRAME uint F_009f0510(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0510u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x14a2420))[(int)(param_1)];
}

/* ref: FUN_009f0520 */
GEN_NOFRAME uint F_009f0520(void)
{
  GEN_ENTER(0x9f0520u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x14a242c);
}

/* ref: FUN_009f0530 */
GEN_NOFRAME uint F_009f0530(void)
{
  GEN_ENTER(0x9f0530u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x14a2430);
}

/* ref: FUN_009f0540 */
GEN_FRAME unsigned int F_009f0540(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0540u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  
  if ((char)param_1 != '\0') {
    piVar1 = (int *)F_00d9b8f0();
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x34))
              (piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1bc))));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1 GEN_EDX_ARG);
    *(ushort *)&REFG(undefined, 0x14a2428) = 0x101;
    return;
  }
  if (REFG(char, 0x14a2429) != '\0') {
    piVar1 = (int *)F_00d9b8f0();
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x34))
              (piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1bc))));
    *(ushort *)&REFG(undefined, 0x14a2428) = *(ushort *)&REFG(undefined, 0x14a2428) & 0xff;
  }
  return;
}

/* ref: Client::Graphics::Animation::AnimationController::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009f05e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9f05e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * pAVar3;
  
  pAVar3 = this + 0xc;
  iVar2 = 4;
  do {
    if (*(int *)pAVar3 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0x18))))(*(int * PTR32 *)pAVar3 GEN_EDX_FWD,this);
    }
    pAVar3 = pAVar3 + 4;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  uVar1 = F_004f4050((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_009f0610 */
GEN_FRAME uint GEN_THISCALL F_009f0610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x20) = param_1;
  uVar1 = F_00513f60(param_1,0,0);
  return uVar1;
}

/* ref: FUN_009f0650 */
GEN_NOFRAME uint GEN_THISCALL F_009f0650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9f0650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_0050c620(*(int *)this,0,0);
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_009f0670 */
GEN_FRAME uint GEN_THISCALL F_009f0670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)this != 0) {
    F_0050c620(*(int *)this,0,0);
    *(undefined4 *)this = 0;
  }
  *(int *)this = param_1;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00513f60(param_1,0,0);
  }
  return uVar1;
}

/* ref: FUN_009f06b0 */
GEN_FRAME uint GEN_THISCALL F_009f06b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f06b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(param_1 + 0xb4 + param_3 * 4);
  uVar2 = param_3;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2));
  }
  return uVar2;
}

/* ref: FUN_009f06f0 */
GEN_FRAME uint GEN_THISCALL F_009f06f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f06f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0xe8) != 0) {
    F_0050c620(*(int *)((int)this + 0xe8),0,0);
    *(undefined4 *)((int)this + 0xe8) = 0;
  }
  *(int *)((int)this + 0xe8) = param_1;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00513f60(param_1,0,0);
  }
  return uVar1;
}

/* ref: FUN_009f0740 */
GEN_NOFRAME uint GEN_THISCALL F_009f0740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9f0740u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xe8);
}

/* ref: FUN_009f0750 */
GEN_FRAME uint GEN_THISCALL F_009f0750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0xec) != 0) {
    F_0050c620(*(int *)((int)this + 0xec),0,0);
    *(undefined4 *)((int)this + 0xec) = 0;
  }
  *(int *)((int)this + 0xec) = param_1;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00513f60(param_1,0,0);
  }
  return uVar1;
}

/* ref: FUN_009f07a0 */
GEN_FRAME uint GEN_THISCALL F_009f07a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f07a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(uint *)((int)this + 4) =
       *(uint *)((int)this + 4) ^ (param_1 * 4 ^ *(uint *)((int)this + 4)) & 0x3c;
  return param_1;
}

/* ref: FUN_009f07d0 */
GEN_FRAME uint GEN_THISCALL F_009f07d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f07d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 1;
  *(uint *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  return param_1;
}

/* ref: FUN_009f0800 */
GEN_FRAME uint GEN_THISCALL F_009f0800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0800u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xcc) = param_2;
  return param_2;
}

/* ref: FUN_009f0890 */
GEN_NOFRAME uint GEN_THISCALL F_009f0890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9f0890u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_009f08b0 */
GEN_FRAME uint GEN_THISCALL F_009f08b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9f08b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x18) = param_3;
  *(uint *)((int)this + 0x10) = param_1;
  return param_1;
}

/* ref: FUN_009f08d0 */
GEN_NOFRAME uint GEN_THISCALL F_009f08d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9f08d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if ((code *)*(gen_code32 *)((int)this + 0x18) != (code *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)((int)this + 0x18))();
  }
  return uVar1;
}

/* ref: FUN_009f08e0 */
GEN_FRAME uint GEN_THISCALL F_009f08e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f08e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_009f0900 */
GEN_FRAME uint GEN_THISCALL F_009f0900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  *(undefined1 *)(in_ecx + 0x20 + param_2 * 0x30) = 0;
  return param_2 * 6;
}

/* ref: FUN_009f0920 */
GEN_FRAME byte GEN_THISCALL F_009f0920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(in_ecx + 0x20 + param_2 * 0x30);
}

/* ref: FUN_009f0940 */
GEN_FRAME uint F_009f0940(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0940u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (((*(short *)(param_1 + 4) != -1) && (*(short *)(param_1 + 6) != -1)) &&
     (*(short *)(param_1 + 8) != -1)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009f0980 */
GEN_NOFRAME uint GEN_THISCALL F_009f0980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9f0980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (*(int *)((int)this + 8) != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + uVar2 * 4))) != 0) {
        puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + uVar2 * 4)));
        if (puVar1 != (undefined4 *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
        }
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + uVar2 * 4))) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)this + 8));
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    uVar3 = F_00406b30(*(int *)((int)this + 0xc));
    uVar2 = (uint)uVar3;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_009f09e0 */
GEN_FRAME uint GEN_THISCALL F_009f09e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f09e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined1 *)((int)this + 1) = (undefined1)param_2;
  return (uint)this;
}

/* ref: FUN_009f0a00 */
GEN_FRAME byte GEN_THISCALL F_009f0a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  return *(short *)this == *param_1;
}

/* ref: FUN_009f0a50 */
GEN_FRAME float GEN_THISCALL F_009f0a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  return *((float *)GEN_TOP(((int)this + ((uint)param_1[1] + (uint)*param_1 * 4) * 4 + 0xc)));
}

/* ref: FUN_009f0a70 */
GEN_NOFRAME uint GEN_THISCALL F_009f0a70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9f0a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x58) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x58),0,0);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  return uVar1;
}

/* ref: FUN_009f0a90 */
GEN_NOFRAME uint GEN_THISCALL F_009f0a90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9f0a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x5c),0,0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return uVar1;
}

/* ref: FUN_009f0ab0 */
GEN_FRAME uint GEN_THISCALL F_009f0ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x5c) != (undefined *)0x0) {
    uVar1 = F_00503790(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_FWD,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009f0ad0 */
GEN_NOFRAME uint GEN_THISCALL F_009f0ad0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9f0ad0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 5;
  in_ecx[1] = 0;
  *(undefined2 *)(in_ecx + 2) = 0x100;
  return (uint)in_ecx;
}

/* ref: FUN_009f0af0 */
GEN_FRAME uint F_009f0af0(float gen_a0)
{
  GEN_ENTER(0x9f0af0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a06680(param_1,1);
  return uVar1;
}

/* ref: FUN_009f0b10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_009f0b10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9f0b10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 8) = 0;
  return;
}

/* ref: FUN_009f0b80 */
GEN_NOFRAME uint F_009f0b80(void)
{
  GEN_ENTER(0x9f0b80u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (0 < *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x15e3734) + 0x10)))) {
    F_00dedd90(REFG(void * PTR32, 0x15e3734) GEN_EDX_ARG);
  }
  F_00dcde20();
  F_00dc8d30();
  uVar1 = F_00dc79e0();
  return uVar1;
}

/* ref: FUN_009f0ba0 */
GEN_FRAME uint GEN_THISCALL F_009f0ba0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x9f0ba0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  bool bVar3;
  float10 fVar4;
  
  iVar1 = *(int *)(in_ecx + 0x1c);
  if ((*(int *)(iVar1 + 0x78) == 0) || (*(int *)(iVar1 + 0x78) == 1)) {
    *(float *)(iVar1 + 0x74) = ((float)GEN_TOF(((float10)1 - (float10)*(float *)(iVar1 + 0x74))));
  }
  if (REFG(float, 0x10905c4) < param_2) {
    fVar4 = (float10)1 / (float10)param_2;
  }
  else {
    fVar4 = (float10)REFG(double, 0x10e1668);
  }
  *(float *)(iVar1 + 0x70) = (float)fVar4;
  bVar3 = GEN_ISNAN(*(float *)(iVar1 + 0x74)) || GEN_ISNAN(REFG(float, 0x1087f04));
  uVar2 = 3;
  if (bVar3 == (bVar3 || *(float *)(iVar1 + 0x74) == REFG(float, 0x1087f04))) {
    uVar2 = 2;
  }
  *(uint *)(iVar1 + 0x78) = uVar2;
  return uVar2;
}

/* ref: FUN_009f0c00 */
GEN_FRAME unsigned int GEN_THISCALL F_009f0c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float fVar1;
  int iVar2;
  ushort local_c;
  
  if (*(char *)((int)this + 0x2a) != '\0') {
    iVar2 = *(int *)((int)this + 0x1c);
    local_c = (ushort)(int)TRUNC((float10)*(float *)(iVar2 + 8) * (float10)*(double *)&REFG(undefined, 0x1088070))
    ;
    if (*(ushort *)((int)this + 0x28) <= local_c) {
      fVar1 = ((float)GEN_TOF(((float10)*(ushort *)((int)this + 0x28) / (float10)*(double *)&REFG(undefined, 0x1088070))));
      *(float *)(iVar2 + 0x7c) = fVar1;
      if ((float10)*(float *)(iVar2 + 8) < (float10)fVar1) {
        *(float *)(iVar2 + 8) = fVar1;
      }
      *(undefined1 *)((int)this + 0x2a) = 0;
      return;
    }
  }
  return;
}

/* ref: FUN_009f0d30 */
GEN_FRAME uint GEN_THISCALL F_009f0d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((**(int * PTR32 *)((int)this + 0xbc) + 0x18))) + param_1 * 8))) & 0xfffffffe;
}

/* ref: FUN_009f0d50 */
GEN_FRAME uint F_009f0d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0d50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(*((ushort *)GEN_TOP((*(int *)(param_2 + 0x24) + 0xc))) <
               *((ushort *)GEN_TOP((*(int *)(param_1 + 0x24) + 0xc))));
}

/* ref: FUN_009f0d70 */
GEN_FRAME ushort GEN_THISCALL F_009f0d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return *((ushort *)GEN_TOP((*((int *)GEN_TOP((**(int * PTR32 *)((int)this + 0xbc) + 0xc))) + (short)param_1 * 2)));
}

/* ref: FUN_009f0d90 */
GEN_FRAME uint GEN_THISCALL F_009f0d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f0d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (*(int *)((int)this + 4) != 0) {
    iVar5 = 0;
    do {
      if (param_2 == 0) {
        iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4)));
        if (*(int *)(iVar1 + 0x34 + iVar5) != 0) {
          uVar3 = *(uint *)(iVar1 + 0x40 + iVar5);
LAB_009f0ddc: ;
          if (uVar3 != 0) {
            return uVar3;
          }
        }
      }
      else if (param_2 == 1) {
        iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4)));
        iVar2 = *(int *)(iVar1 + 0x34 + iVar5);
        if (iVar2 != 0) {
          uVar3 = iVar2 * 0x60 - 0x60 + *(int *)(iVar1 + 0x40 + iVar5);
          goto LAB_009f0ddc;
        }
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x50;
    } while (uVar4 < *(uint *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_009f0e00 */
GEN_NOFRAME uint GEN_THISCALL F_009f0e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f0e00u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  iVar3 = *(int *)(in_ecx + 8);
  uVar1 = *(undefined4 *)(iVar3 + 0x14);
  uVar2 = *(undefined4 *)(iVar3 + 0x18);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(iVar3 + 0x10);
  (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  uVar1 = param_3[2];
  uVar2 = param_3[1];
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar3 + 0x20);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(iVar3 + 0x24);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(iVar3 + 0x28);
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(iVar3 + 0x2c);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)&REFG(undefined, 0x10e1590);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)&REFG(undefined, 0x10e1594);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x10e1598);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x10e159c);
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)&REFG(undefined, 0x10e15a0);
  (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)&REFG(undefined, 0x10e15a4);
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)&REFG(undefined, 0x10e15a8);
  (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)&REFG(undefined, 0x10e15ac);
  (*(undefined4 *)(gen_frame + 0x30)) = *param_3;
  (*(undefined4 *)(gen_frame + 0x34)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  F_00d94dc0(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x30)));
  *param_2 = (*(undefined4 *)(gen_frame + 0x30));
  param_2[1] = (*(undefined4 *)(gen_frame + 0x34));
  param_2[2] = (*(undefined4 *)(gen_frame + 0x38));
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
  return (uint)param_2;
}

/* ref: FUN_009f0f50 */
GEN_FRAME uint GEN_THISCALL F_009f0f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  byte * pbVar4;
  uint uVar5;
  undefined4 * puVar6;
  bool bVar7;
  
  uVar5 = 0;
  if (*(uint *)this != 0) {
    puVar6 = *(undefined4 * PTR32 *)((int)this + 0xc);
    do {
      pbVar4 = (byte *)*puVar6;
      pbVar3 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_009f0f86: ;
          iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_009f0f8b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_009f0f86;
        pbVar3 = pbVar3 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_009f0f8b: ;
      if (iVar2 == 0) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 < *(uint *)this);
  }
  return 0xffffffff;
}

/* ref: FUN_009f1010 */
GEN_FRAME unsigned int GEN_THISCALL F_009f1010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f1010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 < 0) {
    uVar5 = 0;
    if (*(int *)this != 0) {
      uVar2 = *(uint *)((int)this + 4);
      do {
        uVar4 = 0;
        if (uVar2 != 0) {
          iVar3 = 0;
          do {
            puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + uVar5 * 4))) + 0x20 + iVar3)));
            *puVar1 = *param_1;
            uVar4 = uVar4 + 1;
            iVar3 = iVar3 + 0x50;
            puVar1[1] = param_1[1];
            puVar1[2] = param_1[2];
            uVar2 = *(uint *)((int)this + 4);
          } while (uVar4 < uVar2);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)this);
    }
  }
  else {
    uVar5 = 0;
    if (*(int *)((int)this + 4) != 0) {
      iVar3 = 0;
      do {
        puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) + 0x20 + iVar3)));
        *puVar1 = *param_1;
        uVar5 = uVar5 + 1;
        iVar3 = iVar3 + 0x50;
        puVar1[1] = param_1[1];
        puVar1[2] = param_1[2];
      } while (uVar5 < *(uint *)((int)this + 4));
      return;
    }
  }
  return;
}

/* ref: FUN_009f10b0 */
GEN_FRAME uint GEN_THISCALL F_009f10b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f10b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint in_EAX = 0;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_8;
  
  local_8 = 0;
  if ((int)param_3 < 0) {
    if (*param_1 != 0) {
      do {
        iVar4 = 0;
        param_3 = 0;
        if (param_1[1] != 0) {
          do {
            iVar1 = *(int *)(param_1[3] + local_8 * 4) + iVar4;
            uVar2 = 0;
            *(float *)(iVar1 + 0x38) = param_2;
            if (*(int *)(iVar1 + 0x34) != 0) {
              iVar3 = 0;
              do {
                *((float *)GEN_TOP((iVar3 + 0x50 + *(int *)(iVar1 + 0x40)))) = param_2;
                uVar2 = uVar2 + 1;
                iVar3 = iVar3 + 0x60;
              } while (uVar2 < *(uint *)(iVar1 + 0x34));
            }
            in_EAX = param_3 + 1;
            iVar4 = iVar4 + 0x50;
            param_3 = in_EAX;
          } while (in_EAX < param_1[1]);
        }
        local_8 = local_8 + 1;
      } while (local_8 < *param_1);
    }
  }
  else if (param_1[1] != 0) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(param_1[3] + param_3 * 4) + iVar4;
      uVar2 = 0;
      *(float *)(iVar1 + 0x38) = param_2;
      if (*(int *)(iVar1 + 0x34) != 0) {
        iVar3 = 0;
        do {
          *((float *)GEN_TOP((iVar3 + 0x50 + *(int *)(iVar1 + 0x40)))) = param_2;
          uVar2 = uVar2 + 1;
          iVar3 = iVar3 + 0x60;
        } while (uVar2 < *(uint *)(iVar1 + 0x34));
      }
      local_8 = local_8 + 1;
      iVar4 = iVar4 + 0x50;
    } while (local_8 < param_1[1]);
    return local_8;
  }
  return in_EAX;
}

/* ref: FUN_009f1180 */
GEN_FRAME uint GEN_THISCALL F_009f1180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f1180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_c;
  int local_8;
  
  cVar1 = (char)param_1;
  uVar2 = 0;
  if ((int)param_2 < 0) {
    local_c = 0;
    if (*(int *)this != 0) {
      do {
        uVar2 = 0;
        param_2 = 0;
        if (*(int *)((int)this + 4) != 0) {
          param_1 = 0;
          do {
            iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + local_c * 4))) + param_1;
            if (cVar1 == '\0') {
              *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) & 0xfffffffe;
            }
            else {
              *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) | 1;
            }
            uVar2 = 0;
            if (*(int *)(iVar3 + 0x34) != 0) {
              iVar4 = 0;
              do {
                *((char *)GEN_TOP((iVar4 + 0x58 + *(int *)(iVar3 + 0x40)))) = cVar1;
                uVar2 = uVar2 + 1;
                iVar4 = iVar4 + 0x60;
              } while (uVar2 < *(uint *)(iVar3 + 0x34));
            }
            param_1 = param_1 + 0x50;
            uVar2 = param_2 + 1;
            param_2 = uVar2;
          } while (uVar2 < *(uint *)((int)this + 4));
        }
        local_c = local_c + 1;
      } while (local_c < *(uint *)this);
    }
  }
  else {
    local_c = 0;
    if (*(int *)((int)this + 4) != 0) {
      local_8 = 0;
      do {
        iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) + local_8;
        if ((char)param_1 == '\0') {
          *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) & 0xfffffffe;
        }
        else {
          *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) | 1;
        }
        uVar2 = 0;
        if (*(int *)(iVar3 + 0x34) != 0) {
          iVar4 = 0;
          do {
            *((char *)GEN_TOP((iVar4 + 0x58 + *(int *)(iVar3 + 0x40)))) = (char)param_1;
            uVar2 = uVar2 + 1;
            iVar4 = iVar4 + 0x60;
          } while (uVar2 < *(uint *)(iVar3 + 0x34));
        }
        local_8 = local_8 + 0x50;
        local_c = local_c + 1;
      } while (local_c < *(uint *)((int)this + 4));
      return local_c;
    }
  }
  return uVar2;
}

/* ref: FUN_009f1270 */
GEN_NOFRAME uint GEN_THISCALL F_009f1270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f1270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  int * piVar5;
  float10 fVar6;
  
  fVar2 = (*(float *)((char *)&REFG(float, 0x1375ad0) + 4));
  *param_1 = (float)REFG(float, 0x1375ad0);
  fVar3 = (float)REFG(float, 0x1375ad8);
  param_1[1] = fVar2;
  fVar2 = (*(float *)((char *)&REFG(float, 0x1375ad8) + 4));
  param_1[2] = fVar3;
  param_1[3] = fVar2;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(int *)(gen_frame + 0x28)) = 0;
  if (*(int *)((int)this + 4) != 0) {
    piVar5 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4)));
    (*(int *)(gen_frame + 0x2c)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x20)) = piVar5;
    (*(int *)(gen_frame + 0x24)) = *(int *)((int)this + 4);
    piVar5 = (int *)(*piVar5 + 0x34);
    do {
      pfVar4 = (float *)F_009fb8a0((undefined *)(*(*(int * PTR32 *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0x2c))) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
      (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 0x50;
      *param_1 = (float)((float10)*param_1 + (float10)*pfVar4);
      param_1[1] = (float)((float10)pfVar4[1] + (float10)param_1[1]);
      param_1[2] = (float)((float10)pfVar4[2] + (float10)param_1[2]);
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + *piVar5;
      iVar1 = (*(int *)(gen_frame + 0x24)) - 1;
      (*(int *)(gen_frame + 0x24)) = iVar1;
      param_1[3] = (float)((float10)pfVar4[3] + (float10)param_1[3]);
      this = (*(undefined * PTR32 *)(gen_frame + 0x1c));
      piVar5 = piVar5 + 0x14;
    } while (iVar1 != 0);
  }
  if ((*((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) + 0x3c))) >> 1 & 1) != 0) {
    fVar6 = (float10)(*(int *)(gen_frame + 0x28));
    if ((*(int *)(gen_frame + 0x28)) < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)fVar6)));
    fVar6 = (float10)(float)fVar6;
    *param_1 = (float)((float10)*param_1 / fVar6);
    param_1[1] = (float)((float10)param_1[1] / fVar6);
    param_1[2] = (float)((float10)param_1[2] / fVar6);
    param_1[3] = (float)((float10)param_1[3] / fVar6);
  }
  return (uint)param_1;
}

/* ref: FUN_009f1380 */
GEN_FRAME uint GEN_THISCALL F_009f1380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f1380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4)));
}

/* ref: FUN_009f1390 */
GEN_NOFRAME unsigned int GEN_THISCALL F_009f1390(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9f1390u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[4] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return;
}

/* ref: FUN_009f13a0 */
GEN_FRAME unsigned int GEN_THISCALL F_009f13a0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x9f13a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc) = param_2;
  return;
}

/* ref: FUN_009f13c0 */
GEN_NOFRAME float10 GEN_THISCALL F_009f13c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9f13c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0xc);
}

/* ref: FUN_009f13d0 */
GEN_FRAME uint GEN_THISCALL F_009f13d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9f13d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0 < (int)param_2) {
    *(uint *)(in_ecx + 8) = param_2;
  }
  return param_2;
}

/* ref: FUN_009f1410 */
GEN_NOFRAME uint GEN_THISCALL F_009f1410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9f1410u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x6c);
}

