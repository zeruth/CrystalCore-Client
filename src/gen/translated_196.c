#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00ea9e60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ea9e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xea9e60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return 0;
}

/* ref: FUN_00ea9e80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ea9e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xea9e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  uVar1 = (uint)(ushort)param_4 * 8 | param_3 & 7;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(uint *)((int)this + 0x10) = uVar1;
  return uVar1;
}

/* ref: FUN_00ea9ef0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea9ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xea9ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)((int)this + 4) != 0) {
    if (*(int *)((int)this + 8) == -1) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))
                        (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
    uVar2 = *(uint *)((int)this + 0x10) & 7;
    if (uVar2 == 0) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8));
      return uVar2;
    }
    if (uVar2 == 1) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x34))
                        (piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),
                         (uint)(*(byte *)((int)this + 0x10) & 7),
                         *(uint *)((int)this + 0x10) >> 3 & 0xfffffff);
      return uVar2;
    }
    if (uVar2 == 2) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))
                        (piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),
                         (uint)(*(byte *)((int)this + 0x10) & 7),
                         *(uint *)((int)this + 0x10) >> 3 & 0x3fff,
                         *(uint *)((int)this + 0x10) >> 0x11 & 0x3fff,(int)this + 0xc);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00ea9fc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ea9fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xea9fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  if (*(int *)((int)this + 8) == -1) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 4),param_1);
    return uVar2;
  }
  uVar2 = *(uint *)((int)this + 0x10) & 7;
  if (uVar2 == 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))
                      (piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 8),param_1)
    ;
    return uVar2;
  }
  if (uVar2 == 1) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))
                      (piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 8),
                       (uint)(*(byte *)((int)this + 0x10) & 7),
                       *(uint *)((int)this + 0x10) >> 3 & 0xfffffff,param_1);
    return uVar2;
  }
  iVar3 = param_1;
  if (uVar2 == 2) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x40))
                      (piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 8),
                       (uint)(*(byte *)((int)this + 0x10) & 7),
                       *(uint *)((int)this + 0x10) >> 3 & 0x3fff,
                       *(uint *)((int)this + 0x10) >> 0x11 & 0x3fff,(int)this + 0xc,param_1);
    iVar3 = uVar2 + param_1;
  }
  return iVar3 - param_1;
}

/* ref: Application::Network::WorkDefinitions::SetParameterInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaa0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaa0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
  if (((*(uint *)(this + 0x10) & 0x80000000) != 0) &&
     (puVar1 = *(undefined4 * PTR32 *)(this + 4), puVar1 != (undefined4 *)0x0)) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SetParameterInfoContainerInterface::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaa120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaa120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::RelatedBasesInterfce::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaa160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaa160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_TypeInfoInterface::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaa1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaa1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::TagBase::vf5 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eaa1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeaa1e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Application::Network::WorkDefinitions::TagBase::vf4 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eaa1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xeaa1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Application::Network::WorkDefinitions::TagBase::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaa200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaa200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eaa230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaa230(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeaa230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: Component::ServerFramework::JsonParser::TokenBase::vf1 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eaa260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeaa260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Component::ServerFramework::JsonParser::TokenBase::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eaa270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaa270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Component::ServerFramework::JsonParser::TokenBase::vf3 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eaa280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaa280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Component::ServerFramework::JsonParser::TokenBase::vf4 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eaa290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaa290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Component::ServerFramework::JsonParser::TokenBase::vf5 */
GEN_LIB GEN_NOFRAME uint F_00eaa2a0(void)
{
  GEN_ENTER(0xeaa2a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::ServerFramework::JsonParser::TokenBase::vf6 */
GEN_LIB GEN_NOFRAME unsigned int F_00eaa2b0(void)
{
  GEN_ENTER(0xeaa2b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Component::ServerFramework::JsonParser::TokenBase::vf7 */
GEN_LIB GEN_NOFRAME byte F_00eaa2c0(void)
{
  GEN_ENTER(0xeaa2c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::ServerFramework::JsonParser::IntToken::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaa310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeaa310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(uint *)(this + 8) = param_1;
  *(undefined4 *)(this + 0xc) = param_2;
  return param_1;
}

/* ref: Component::ServerFramework::JsonParser::IntToken::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eaa330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeaa330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return *(uint *)(this + 8);
}

/* ref: Component::ServerFramework::JsonParser::FloatToken::vf2 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00eaa370(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xeaa370u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *(float *)(in_ecx + 8) = param_2;
  return;
}

/* ref: Component::ServerFramework::JsonParser::FloatToken::vf6 */
GEN_LIB GEN_NOFRAME float10 GEN_THISCALL F_00eaa390(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeaa390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*(float *)(in_ecx + 8);
}

/* ref: Component::ServerFramework::JsonParser::BooleanToken::vf3 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00eaa3d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeaa3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *(byte *)(in_ecx + 8) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Component::ServerFramework::JsonParser::BooleanToken::vf7 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00eaa3e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeaa3e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *(byte *)(in_ecx + 8);
}

/* ref: Component::ServerFramework::JsonParser::TokenBase::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaa400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaa400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::ServerFramework::JsonParser::IntToken::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaa430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaa430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::ServerFramework::JsonParser::FloatToken::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaa460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaa460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::ServerFramework::JsonParser::BooleanToken::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaa490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaa490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eaa4c0 */
GEN_LIB GEN_FRAME ushort F_00eaa4c0(GEN_P(ushort * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaa4c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  return *param_1;
}

/* ref: FUN_00eaa4d0 */
GEN_LIB GEN_FRAME byte F_00eaa4d0(GEN_P(short * param_1, unsigned int gen_a0), GEN_P(short * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeaa4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_2 = (short *)(uintptr_t)gen_a1;)
  return *param_1 == *param_2;
}

/* ref: std::_Locinfo::_Getcoll */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00eaa590(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaa590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  undefined8 _Var1;
  
  _Var1 = F_01051073();
  *(undefined8 *)param_1 = _Var1;
  return (uint)param_1;
}

/* ref: FUN_00eaa5e0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00eaa5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeaa5e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return (*((ushort *)GEN_TOP((*(int *)((int)this + 0x10) + (uint)(byte)param_2 * 2))) & (ushort)param_1) != 0;
}

/* ref: FUN_00eaa610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaa610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xeaa610u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00eaa620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaa620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaa620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * p_Var1;
  undefined8 _Var2;
  
  p_Var1 = F_00c45a9d(((undefined *)(gen_frame + 0xc)));
  *(undefined8 *)((int)this + 8) = *(undefined8 *)p_Var1;
  *(undefined8 *)((int)this + 0x10) = *(undefined8 *)&(*(int *)(((char *)(p_Var1) + 8)));
  _Var2 = F_01051073();
  *(undefined *)((int)this + 0x18) = _Var2;
  return (*(uint *)((char *)&(_Var2)));
}

/* ref: FUN_00eaa670 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaa670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeaa670u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = ~(*(uint *)&gen_args[2]) & uVar1 | (*(uint *)&gen_args[1]) & (*(uint *)&gen_args[2]) & 0xffff;
  return uVar1;
}

/* ref: FUN_00eaa6a0 */
GEN_LIB GEN_FRAME uint F_00eaa6a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaa6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffff9ff | 0x800;
  return param_1;
}

/* ref: FUN_00eaa6d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaa6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaa6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_0042e170(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00eaa9e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaa9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaa9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  *(int * PTR32 *)this = param_1;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
  }
  return (uint)this;
}

/* ref: FUN_00eaaa70 */
GEN_LIB GEN_NOFRAME ulonglong GEN_THISCALL F_00eaaa70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeaaa70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (**(int * PTR32 *)((int)this + 0x24) != 0) {
    return (ulonglong)**(int * PTR32 *)((int)this + 0x34);
  }
  return 0;
}

/* ref: FUN_00eaaa90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaaa90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xeaaa90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x10912b0);
    *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[1])REFP(0x1091064));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  if ((char)param_2 != '\0') {
    F_00c463fe(((undefined *)GEN_TOP((*(int *)(*(int *)this + 4) + (int)this))));
  }
  return (uint)this;
}

/* ref: FUN_00eaaae0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaaae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaaae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  *(int * PTR32 *)this = param_1;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
  }
  return (uint)this;
}

/* ref: FUN_00eaab30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaab30(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeaab30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eaab50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaab50(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(double param_7, double gen_a6))
{
  GEN_ENTER(0xeaab50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(double param_7 = (double)gen_a6;)
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xc))
            (param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6,(int)(ulonglong)gen_d2bits(param_7),
             (int)((ulonglong)gen_d2bits(param_7) >> 0x20));
  return param_2;
}

/* ref: FUN_00eaab90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaab90(GEN_P(undefined1 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeaab90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = 0;
  *(undefined4 *)(in_ecx + 4) = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eaabc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaabc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xeaabc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6);
  return param_1;
}

/* ref: FUN_00eaabf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eaabf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaabf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined8 _Var1;
  
  _Var1 = F_01051073();
  *(undefined *)((int)this + 8) = _Var1;
  return (*(uint *)((char *)&(_Var1)));
}

/* ref: FUN_00eaad40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaad40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaad40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))))((int)this + 4)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x1a8) + 0xc))))((int)this + 0x1a8)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x1a8;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2ec) + 0xc))))((int)this + 0x2ec)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x2ec;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x430) + 0xc))))((int)this + 0x430)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x430;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x574) + 0xc))))((int)this + 0x574)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x574;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x7a8) + 0xc))))((int)this + 0x7a8)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x7a8;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x91c) + 0xc))))((int)this + 0x91c)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x91c;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xa90) + 0xc))))((int)this + 0xa90)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xa90;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc34) + 0xc))))((int)this + 0xc34)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xc34;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xec8) + 0xc))))((int)this + 0xec8)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xec8;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x106c) + 0xc))))((int)this + 0x106c)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x106c;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x1330) + 0xc))))((int)this + 0x1330)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x1330;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x14d4) + 0xc))))((int)this + 0x14d4)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x14d4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x1778) + 0xc))))((int)this + 0x1778)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x1778;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x191c) + 0xc))))((int)this + 0x191cU)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  return ~-(uint)(uVar2 != *param_1) & (int)this + 0x191cU;
}

/* ref: FUN_00eaafd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaafd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xeaafd0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))))((int)this + 4)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: FUN_00eab000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eab000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeab000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))))((int)this + 4)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xa78) + 0xc))))((int)this + 0xa78)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xa78;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xcfc) + 0xc))))((int)this + 0xcfc)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xcfc;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x1100) + 0xc))))((int)this + 0x1100)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x1100;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x13e4) + 0xc))))((int)this + 0x13e4)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x13e4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x1a58) + 0xc))))((int)this + 0x1a58)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x1a58;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x401c) + 0xc))))((int)this + 0x401c)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x401c;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x41e0) + 0xc))))((int)this + 0x41e0)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x41e0;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x43a4) + 0xc))))((int)this + 0x43a4)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x43a4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x4568) + 0xc))))((int)this + 0x4568)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x4568;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x472c) + 0xc))))((int)this + 0x472c)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x472c;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x4a70) + 0xc))))((int)this + 0x4a70)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x4a70;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x4f34) + 0xc))))((int)this + 0x4f34)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x4f34;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x5158) + 0xc))))((int)this + 0x5158)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x5158;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x537c) + 0xc))))((int)this + 0x537c)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x537c;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x55a0) + 0xc))))((int)this + 0x55a0)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x55a0;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x57c4) + 0xc))))((int)this + 0x57c4)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x57c4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x59e8) + 0xc))))((int)this + 0x59e8)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x59e8;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x5c0c) + 0xc))))((int)this + 0x5c0c)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x5c0c;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x5e30) + 0xc))))((int)this + 0x5e30)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x5e30;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x6054) + 0xc))))((int)this + 0x6054)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x6054;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x6278) + 0xc))))((int)this + 0x6278)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x6278;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x649c) + 0xc))))((int)this + 0x649c)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x649c;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x66c0) + 0xc))))((int)this + 0x66c0)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x66c0;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x69a4) + 0xc))))((int)this + 0x69a4)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x69a4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x6e08) + 0xc))))((int)this + 0x6e08)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x6e08;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x71ac) + 0xc))))((int)this + 0x71ac)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x71ac;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x7370) + 0xc))))((int)this + 0x7370)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x7370;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x7894) + 0xc))))((int)this + 0x7894)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x7894;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 33000) + 0xc))))((int)this + 33000)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 33000;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x83cc) + 0xc))))((int)this + 0x83cc)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x83cc;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x85f0) + 0xc))))((int)this + 0x85f0)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x85f0;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x88d4) + 0xc))))((int)this + 0x88d4)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x88d4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x8af8) + 0xc))))((int)this + 0x8af8)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x8af8;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x8ddc) + 0xc))))((int)this + 0x8ddc)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x8ddc;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x9000) + 0xc))))((int)this + 0x9000)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x9000;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x9224) + 0xc))))((int)this + 0x9224)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x9224;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x9478) + 0xc))))((int)this + 0x9478)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x9478;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x96fc) + 0xc))))((int)this + 0x96fc)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x96fc;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x9950) + 0xc))))((int)this + 0x9950)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x9950;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x9af4) + 0xc))))((int)this + 0x9af4)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x9af4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x9ef8) + 0xc))))((int)this + 0x9ef8)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0x9ef8;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xa3bc) + 0xc))))((int)this + 0xa3bc)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xa3bc;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xa660) + 0xc))))((int)this + 0xa660)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xa660;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xa884) + 0xc))))((int)this + 0xa884)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xa884;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xadb8) + 0xc))))((int)this + 0xadb8)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xadb8;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xb8ec) + 0xc))))((int)this + 0xb8ec)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xb8ec;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xbd90) + 0xc))))((int)this + 0xbd90)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xbd90;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xbf34) + 0xc))))((int)this + 0xbf34)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xbf34;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc168) + 0xc))))((int)this + 0xc168)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xc168;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc38c) + 0xc))))((int)this + 0xc38c)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xc38c;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc5b0) + 0xc))))((int)this + 0xc5b0)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xc5b0;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xced4) + 0xc))))((int)this + 0xced4)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xced4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xd108) + 0xc))))((int)this + 0xd108)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xd108;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xd24c) + 0xc))))((int)this + 0xd24c)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xd24c;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xd3f0) + 0xc))))((int)this + 0xd3f0)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xd3f0;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xd594) + 0xc))))((int)this + 0xd594)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xd594;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xe1e8) + 0xc))))((int)this + 0xe1e8)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xe1e8;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xe56c) + 0xc))))((int)this + 0xe56c)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xe56c;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xe920) + 0xc))))((int)this + 0xe920)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xe920;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xeac4) + 0xc))))((int)this + 0xeac4)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xeac4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xec68) + 0xc))))((int)this + 0xec68U)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  return ~-(uint)(uVar2 != *param_1) & (int)this + 0xec68U;
}

/* ref: FUN_00eaba70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaba70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xeaba70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))))((int)this + 4)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: FUN_00eabbc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eabbc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeabbc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))))((int)this + 4U)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  return ~-(uint)(uVar2 != *param_1) & (int)this + 4U;
}

/* ref: FUN_00eabbf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eabbf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xeabbf0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))))((int)this + 4)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: FUN_00eabc20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eabc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeabc20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))))((int)this + 4)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc68) + 0xc))))((int)this + 0xc68)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  if (uVar2 == *param_1) {
    return (int)this + 0xc68;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2aec) + 0xc))))((int)this + 0x2aecU)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  return ~-(uint)(uVar2 != *param_1) & (int)this + 0x2aecU;
}

/* ref: FUN_00eabcb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eabcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xeabcb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))))((int)this + 4)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: FUN_00eabd10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eabd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeabd10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eabd50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eabd50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeabd50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eabd90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eabd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeabd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eabdc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eabdc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(code * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeabdc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(code * param_1 = (code *)(uintptr_t)gen_a1;)
  if (this == (undefined *)0x0) {
    (*param_1)(0);
    return 0;
  }
  (*param_1)(*(int *)(*(int *)this + 4) + (int)this);
  return (uint)this;
}

/* ref: FUN_00eabdf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eabdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(code * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeabdf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(code * param_1 = (code *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = (*param_1)(this);
  return uVar1;
}

/* ref: FUN_00eabe00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eabe00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(code * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeabe00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(code * param_1 = (code *)(uintptr_t)gen_a1;)
  if (this == (undefined *)0x0) {
    (*param_1)(0);
    return 0;
  }
  (*param_1)(*(int *)(*(int *)this + 4) + (int)this);
  return (uint)this;
}

/* ref: FUN_00eabe40 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00eabe40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeabe40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00eabe60 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00eabe60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeabe60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00eabeb0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00eabeb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeabeb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00eabed0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00eabed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeabed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00eabf40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eabf40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeabf40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x10c) + param_2 * 0x14;
}

/* ref: FUN_00eabf90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eabf90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeabf90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0xac) + param_2 * 0x14;
}

/* ref: FUN_00eabfe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eabfe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeabfe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x19c) + param_2 * 0x14;
}

/* ref: FUN_00eac030 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac030(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0xdc) + param_2 * 0x14;
}

/* ref: FUN_00eac080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac080(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x1fc) + param_2 * 0x14;
}

/* ref: FUN_00eac0d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac0d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x22c) + param_2 * 0x14;
}

/* ref: FUN_00eac120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac120(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x1cc) + param_2 * 0x14;
}

/* ref: FUN_00eac170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac170(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x16c) + param_2 * 0x14;
}

/* ref: FUN_00eac1c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac1c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac1c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x97c) + param_2 * 0x14;
}

/* ref: FUN_00eac210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac210(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x34c) + param_2 * 0x14;
}

/* ref: FUN_00eac260 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac260(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x5bc) + param_2 * 0x14;
}

/* ref: FUN_00eac2b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac2b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x250c) + param_2 * 0x14;
}

/* ref: FUN_00eac300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac300(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x28c) + param_2 * 0x14;
}

/* ref: FUN_00eac350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac350(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x40c) + param_2 * 0x14;
}

/* ref: FUN_00eac3a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac3a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x3ac) + param_2 * 0x14;
}

/* ref: FUN_00eac3f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac3f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x2ec) + param_2 * 0x14;
}

/* ref: FUN_00eac440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac440(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x46c) + param_2 * 0x14;
}

/* ref: FUN_00eac490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac490(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x79c) + param_2 * 0x14;
}

/* ref: FUN_00eac4e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac4e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac4e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x49c) + param_2 * 0x14;
}

/* ref: FUN_00eac530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0xa9c) + param_2 * 0x14;
}

/* ref: FUN_00eac580 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac580(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x88c) + param_2 * 0x14;
}

/* ref: FUN_00eac5d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac5d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0xbbc) + param_2 * 0x14;
}

/* ref: FUN_00eac620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x31c) + param_2 * 0x14;
}

/* ref: FUN_00eac670 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac670(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x9ac) + param_2 * 0x14;
}

/* ref: FUN_00eac6c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac6c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(int *)(in_ecx + 0x196c) + param_2 * 0x14;
}

/* ref: FUN_00eac730 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eac730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeac730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x54) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00eac750 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eac750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeac750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  *(undefined4 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20((undefined4 *)((int)this + 0x58) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: basic_ios_GU_char_traits_G_std_std::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeac780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: setg_00eac7e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xeac7e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int * piVar1;
  
  **(undefined4 * PTR32 *)((int)this + 0x10) = param_1;
  **(int * PTR32 *)((int)this + 0x20) = param_2;
  piVar1 = *(int * PTR32 *)((int)this + 0x30);
  *piVar1 = param_3 - param_2 >> 1;
  return (uint)piVar1;
}

/* ref: setp */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeac820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  
  **(int * PTR32 *)((int)this + 0x14) = param_1;
  **(int * PTR32 *)((int)this + 0x24) = param_1;
  piVar1 = *(int * PTR32 *)((int)this + 0x34);
  *piVar1 = param_2 - param_1 >> 1;
  return (uint)piVar1;
}

/* ref: setg_00eac840 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xeac840u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int * piVar1;
  
  **(undefined4 * PTR32 *)((int)this + 0x14) = param_1;
  **(int * PTR32 *)((int)this + 0x24) = param_2;
  piVar1 = *(int * PTR32 *)((int)this + 0x34);
  *piVar1 = param_3 - param_2 >> 1;
  return (uint)piVar1;
}

/* ref: FUN_00eac870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xeac870u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  return param_1;
}

/* ref: FUN_00eac8a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xeac8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00eac8c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeac8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[2];
  uVar2 = *(uint *)((int)this + 8);
  if ((uVar2 + *(int *)this == uVar1 + *param_1) &&
     (((int)uVar2 >> 0x1f) + *(int *)((int)this + 4) + (uint)CARRY4(uVar2,*(uint *)this) ==
      ((int)uVar1 >> 0x1f) + param_1[1] + (uint)CARRY4(uVar1,*param_1))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00eac900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xeac900u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6);
  return param_1;
}

/* ref: FUN_00eac930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xeac930u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6);
  return param_1;
}

/* ref: FUN_00eac960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eac960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xeac960u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return param_1;
}

/* ref: FUN_00eac9a0 */
GEN_LIB GEN_FRAME byte GEN_STDCALL F_00eac9a0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeac9a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_0042c7c0(param_1 GEN_EDX_ARG,param_2);
  return bVar1;
}

/* ref: FUN_00eac9d0 */
GEN_LIB GEN_FRAME uint F_00eac9d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeac9d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x80;
}

/* ref: FUN_00eac9e0 */
GEN_LIB GEN_FRAME uint F_00eac9e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeac9e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x81;
}

/* ref: FUN_00eac9f0 */
GEN_LIB GEN_FRAME uint F_00eac9f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeac9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eaca00 */
GEN_LIB GEN_FRAME uint F_00eaca00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaca00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00eaca10 */
GEN_LIB GEN_FRAME uint F_00eaca10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaca10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00eaca20 */
GEN_LIB GEN_FRAME uint F_00eaca20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaca20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_00eaca30 */
GEN_LIB GEN_FRAME uint F_00eaca30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaca30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x81)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x81);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00eaca60 */
GEN_LIB GEN_FRAME uint F_00eaca60(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaca60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x81);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x81);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00eaca90 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00eaca90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeaca90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00eacad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eacad0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeacad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00eacb30 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00eacb30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeacb30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00eacb60 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eacb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeacb60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x81) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x81) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x81);
      piVar4 = (int *)*piVar3;
      while (piVar5 = piVar4, cVar1 == '\0') {
        piVar4 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar4 + 0x81);
        piVar3 = piVar5;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x81);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x81);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00eacbd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eacbd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeacbd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  if ((*(byte *)((int)this + 0x40) & 1) != 0) {
    F_00406ad0(**(undefined4 * PTR32 *)((int)this + 0x10));
  }
  **(undefined4 * PTR32 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x20) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x30) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x14) = 0;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  *puVar1 = 0;
  **(undefined4 * PTR32 *)((int)this + 0x34) = 0;
  *(uint *)((int)this + 0x40) = *(uint *)((int)this + 0x40) & 0xfffffffe;
  *(undefined4 *)((int)this + 0x3c) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eacc30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eacc30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xeacc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return param_1;
}

/* ref: FUN_00eacc60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eacc60(GEN_P(undefined1 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeacc60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = 0;
  *(undefined4 *)(in_ecx + 4) = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eacc90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eacc90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xeacc90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))
            (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return param_1;
}

/* ref: FUN_00eaccd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaccd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xeaccd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))
            (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return param_1;
}

/* ref: FUN_00eacd10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eacd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xeacd10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))
            (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return param_1;
}

/* ref: FUN_00eacd50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eacd50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xeacd50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))
            (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return param_1;
}

/* ref: FUN_00eacd90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eacd90(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeacd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = param_2;
  *(bool *)(in_ecx + 1) = param_2 == 0;
  return (uint)in_ecx;
}

/* ref: FUN_00eacdb0 */
GEN_LIB GEN_FRAME uint F_00eacdb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeacdb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xb5;
}

/* ref: FUN_00eacdc0 */
GEN_LIB GEN_FRAME uint F_00eacdc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeacdc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eacdd0 */
GEN_LIB GEN_FRAME uint F_00eacdd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeacdd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00eacde0 */
GEN_LIB GEN_FRAME uint F_00eacde0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeacde0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00eacdf0 */
GEN_LIB GEN_FRAME uint F_00eacdf0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeacdf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00eace00 */
GEN_LIB GEN_FRAME uint F_00eace00(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeace00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0xb5);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0xb5);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00eace30 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00eace30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeace30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00eace60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eace60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xeace60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eaceb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaceb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xeaceb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eaced0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00eaced0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaced0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (((byte)param_1 & 1) == 0) {
    uVar1 = 4;
  }
  if (((byte)param_1 & 2) == 0) {
    uVar1 = uVar1 | 2;
  }
  if (((byte)param_1 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if (((byte)param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  return uVar1;
}

/* ref: FUN_00eacf10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eacf10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeacf10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 1) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00eacf40 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00eacf40(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeacf40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00eacf60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eacf60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeacf60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 4) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00eacf90 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00eacf90(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeacf90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00eacfb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eacfb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeacfb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 2) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00eacfe0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00eacfe0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeacfe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead000 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 7) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead030 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead030(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead050 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 3) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead080 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead080(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead0a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead0a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 9) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead0d0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead0d0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead0f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead0f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 10) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead130 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 3) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead160 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead160(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead180 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 8) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead1b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead1b0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead1b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead1d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 6) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead210 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 4) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead240 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead240(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead260 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x31) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead2a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead2a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 2) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead2d0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead2d0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead2f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x10) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead320 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead320(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead340 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x1d) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead370 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead370(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead390 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0xc4) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead3c0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead3c0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead3c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead3e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead3e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0xc) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead410 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead410(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead430 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x14) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead460 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead460(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead480 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x12) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead4b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead4b0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead4b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead4d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead4d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0xe) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead500 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead500(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead520 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x16) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead550 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead550(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead570 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x27) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead5a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead5a0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead5a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead5c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead5c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x17) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead5f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead5f0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead5f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead610 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x37) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead640 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead640(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead660 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x2c) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead690 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead690(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead6b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead6b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x3d) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead6e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead6e0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead700 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0xf) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead740 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x12) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead770 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead770(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead790 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x32) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead7d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead7d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead7d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x25) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead800 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead800(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead820 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ead820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xead820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x86) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead850 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ead850(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ead8c0 */
GEN_LIB GEN_FRAME uint F_00ead8c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead8c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xb4;
}

/* ref: FUN_00ead8e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ead8e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xead8e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ead8f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ead8f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xead8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2 * 0x18;
  return (uint)in_ecx;
}

/* ref: FUN_00ead920 */
GEN_LIB GEN_FRAME uint F_00ead920(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xead920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0xb5)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0xb5);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00eadb60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eadb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeadb60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x20);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  uVar1 = *(uint *)((int)this + 0xc);
  *(undefined4 *)(uVar1 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0xc) = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar1;
}

/* ref: FUN_00eadbc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eadbc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeadbc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eadc30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eadc30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeadc30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eadca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eadca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeadca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eadd10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eadd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeadd10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eadd80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eadd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeadd80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eaddf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaddf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeaddf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eade60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eade60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeade60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x20);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  uVar1 = *(uint *)((int)this + 0xc);
  *(undefined4 *)(uVar1 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0xc) = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar1;
}

/* ref: FUN_00eadec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eadec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeadec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eadf30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eadf30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeadf30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eadfa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eadfa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeadfa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x20);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  uVar1 = *(uint *)((int)this + 0xc);
  *(undefined4 *)(uVar1 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0xc) = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar1;
}

/* ref: FUN_00eae000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eae000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeae000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eae070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeae070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x20);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  uVar1 = *(uint *)((int)this + 0xc);
  *(undefined4 *)(uVar1 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0xc) = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar1;
}

/* ref: FUN_00eae0d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eae0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeae0d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae140 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eae140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeae140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae1b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eae1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeae1b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eae220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeae220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eae290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeae290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eae300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeae300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eae370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeae370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae3e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eae3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeae3e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eae450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeae450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae4c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eae4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeae4c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eae530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeae530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae5a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eae5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeae5a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eae610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeae610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eae680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeae680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae6f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eae6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeae6f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x20);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  uVar1 = *(uint *)((int)this + 0xc);
  *(undefined4 *)(uVar1 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0xc) = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar1;
}

/* ref: FUN_00eae750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eae750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeae750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae7c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eae7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeae7c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x20);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  uVar1 = *(uint *)((int)this + 0xc);
  *(undefined4 *)(uVar1 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0xc) = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar1;
}

/* ref: FUN_00eae820 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eae820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeae820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae890 */
GEN_LIB GEN_FRAME uint F_00eae890(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeae890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*param_1 + 4) + (int)param_1;
  }
  (*(code *)*param_2)(iVar1,param_2[2],param_2[3]);
  return (uint)param_1;
}

/* ref: FUN_00eae8c0 */
GEN_LIB GEN_FRAME uint F_00eae8c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeae8c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eae8d0 */
GEN_LIB GEN_FRAME uint F_00eae8d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeae8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eae8e0 */
GEN_LIB GEN_FRAME uint F_00eae8e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeae8e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eae8f0 */
GEN_LIB GEN_FRAME uint F_00eae8f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeae8f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eae900 */
GEN_LIB GEN_FRAME uint F_00eae900(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeae900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eae910 */
GEN_LIB GEN_FRAME uint F_00eae910(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeae910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eae920 */
GEN_LIB GEN_FRAME uint F_00eae920(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeae920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eae930 */
GEN_LIB GEN_FRAME uint F_00eae930(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeae930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eae940 */
GEN_LIB GEN_FRAME uint F_00eae940(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeae940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eae950 */
GEN_LIB GEN_FRAME uint F_00eae950(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeae950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00eae9b0 */
GEN_LIB GEN_FRAME uint F_00eae9b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeae9b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x1642c86) && (uVar1 = F_004069f0(param_1 * 0xb8), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00eaea10 */
GEN_LIB GEN_FRAME uint F_00eaea10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaea10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x1e1e1e2) && (uVar1 = F_004069f0(param_1 * 0x88), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00eaea60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaea60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaea60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ushort uVar1;
  
  uVar1 = *(ushort *)((int)this + 0x40);
  *(undefined2 *)((int)this + 0x40) = (undefined2)param_1;
  return (uint)uVar1;
}

/* ref: FUN_00eaea80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaea80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xeaea80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00eaeaa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaeaa0(GEN_P(undefined2 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeaeaa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eaeac0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eaeac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeaeac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0xb5) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0xb5) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0xb5) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0xb5) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0xb5);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0xb5);
    }
    if (*(char *)(*(int *)this + 0xb5) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00eaeb50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eaeb50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeaeb50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x81) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x81) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x81) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x81) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x81);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x81);
    }
    if (*(char *)(*(int *)this + 0x81) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00eaebd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eaebd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaebd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined8 _Var1;
  
  _Var1 = F_01051073();
  *(undefined *)((int)this + 8) = _Var1;
  return (*(uint *)((char *)&(_Var1)));
}

/* ref: FUN_00eaebf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eaebf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaebf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined8 _Var1;
  
  _Var1 = F_01051073();
  *(undefined *)((int)this + 8) = _Var1;
  return (*(uint *)((char *)&(_Var1)));
}

/* ref: FUN_00eaec30 */
GEN_LIB GEN_FRAME byte F_00eaec30(void)
{
  GEN_ENTER(0xeaec30u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00eaec40 */
GEN_LIB GEN_FRAME uint F_00eaec40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaec40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eaec50 */
GEN_LIB GEN_FRAME uint F_00eaec50(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaec50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eaec60 */
GEN_LIB GEN_FRAME uint F_00eaec60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaec60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eaec70 */
GEN_LIB GEN_FRAME byte F_00eaec70(void)
{
  GEN_ENTER(0xeaec70u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00eaec80 */
GEN_LIB GEN_FRAME uint F_00eaec80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xeaec80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_00ea7d20(this GEN_EDX_ARG,iVar1);
    iVar1 = iVar1 + 0x18;
    this = (undefined *)((int)this + 0x18);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00eaecd0 */
GEN_LIB GEN_FRAME uint F_00eaecd0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaecd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eaece0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00eaece0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeaece0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = 0;
    param_1[4] = 0;
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    uVar1 = F_00ea7d20(param_1 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00eaed10 */
GEN_LIB GEN_FRAME uint F_00eaed10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaed10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eaed20 */
GEN_LIB GEN_FRAME uint F_00eaed20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xeaed20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_00ea7d20(this GEN_EDX_ARG,iVar1);
    iVar1 = iVar1 + 0x18;
    this = (undefined *)((int)this + 0x18);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00eaed70 */
GEN_LIB GEN_FRAME uint F_00eaed70(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaed70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eaed80 */
GEN_LIB GEN_FRAME uint F_00eaed80(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaed80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eaed90 */
GEN_LIB GEN_FRAME uint F_00eaed90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaed90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eaeda0 */
GEN_LIB GEN_FRAME uint F_00eaeda0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaeda0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eaedb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaedb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeaedb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00eaedd0 */
GEN_LIB GEN_FRAME uint F_00eaedd0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaedd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eaede0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaede0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeaede0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00eaee00 */
GEN_LIB GEN_FRAME uint F_00eaee00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaee00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eaee10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaee10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaee10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  F_00ea7d20((undefined4 *)((int)this + 0x58) GEN_EDX_ARG,param_1 + 0x58);
  return (uint)this;
}

/* ref: FUN_00eaee50 */
GEN_LIB GEN_FRAME uint F_00eaee50(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaee50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00eaee60 */
GEN_LIB GEN_FRAME uint F_00eaee60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaee60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eaee70 */
GEN_LIB GEN_FRAME uint F_00eaee70(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaee70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eaee80 */
GEN_LIB GEN_FRAME uint F_00eaee80(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaee80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00eaee90 */
GEN_LIB GEN_FRAME uint F_00eaee90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaee90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Component::ServerFramework::JsonObject::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaeeb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaeeb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eaeee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaeee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaeee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  F_0042c880(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eaef10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaef10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeaef10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * p_Var1;
  undefined8 _Var2;
  
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x115cab8));
  p_Var1 = F_00c45a9d(((undefined *)(gen_frame + 0xc)));
  *(undefined8 *)((int)this + 8) = *(undefined8 *)p_Var1;
  *(undefined8 *)((int)this + 0x10) = *(undefined8 *)&(*(int *)(((char *)(p_Var1) + 8)));
  _Var2 = F_01051073();
  *(undefined *)((int)this + 0x18) = _Var2;
  return (uint)this;
}

/* ref: FUN_00eaef60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaef60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xeaef60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00eaef70 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eaef70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeaef70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x115cab8));
  if (*(int *)((int)this + 0x14) != 0) {
    F_00c4c68f(*(undefined * PTR32 *)((int)this + 0x10));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  return;
}

/* ref: ctype_G_std::vf2 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00eaefa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeaefa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ushort uVar1;
  
  uVar1 = F_01051094((wchar_t)param_2,(undefined *)((int)this + 8));
  return ((ushort)param_1 & uVar1) != 0;
}

/* ref: ctype_G_std::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaefd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(wchar_t * param_1, unsigned int gen_a1), GEN_P(wchar_t * param_2, unsigned int gen_a2), GEN_P(short * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xeaefd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;)
  GEN_PIN(wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a2;)
  GEN_PIN(short * param_3 = (short *)(uintptr_t)gen_a3;)
  wchar_t * pwVar1;
  
  pwVar1 = F_010510b8(param_1,param_2,param_3,(undefined *)((int)this + 8));
  return (uint)pwVar1;
}

/* ref: ctype_G_std::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaeff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2), GEN_P(ushort * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xeaeff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  GEN_PIN(ushort * param_3 = (ushort *)(uintptr_t)gen_a3;)
  uint uVar1;
  ushort * puVar2;
  
  puVar2 = param_2;
  while ((puVar2 != param_3 &&
         (uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_FWD,param_1,(uint)*puVar2), (char)uVar1 == '\0'))
        ) {
    puVar2 = puVar2 + 1;
  }
  return (uint)puVar2;
}

/* ref: ctype_G_std::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2), GEN_P(ushort * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xeaf030u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  GEN_PIN(ushort * param_3 = (ushort *)(uintptr_t)gen_a3;)
  uint uVar1;
  ushort * puVar2;
  
  puVar2 = param_2;
  while ((puVar2 != param_3 &&
         (uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_FWD,param_1,(uint)*puVar2), (char)uVar1 != '\0'))
        ) {
    puVar2 = puVar2 + 1;
  }
  return (uint)puVar2;
}

/* ref: ctype_G_std::vf6 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00eaf070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaf070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  wchar_t wVar1;
  
  wVar1 = F_010510d9((wchar_t)param_1,(undefined *)((int)this + 8));
  return wVar1;
}

/* ref: ctype_G_std::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(wchar_t * param_1, unsigned int gen_a1), GEN_P(wchar_t * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeaf090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;)
  GEN_PIN(wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a2;)
  wchar_t wVar1;
  wchar_t * pwVar2;
  
  pwVar2 = param_1;
  if (param_1 != param_2) {
    do {
      wVar1 = F_010510d9(*pwVar2,(undefined *)((int)this + 8));
      *pwVar2 = wVar1;
      pwVar2 = pwVar2 + 1;
    } while (pwVar2 != param_2);
  }
  return (uint)pwVar2;
}

/* ref: ctype_G_std::vf8 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00eaf0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaf0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  wchar_t wVar1;
  
  wVar1 = F_0105113f((wchar_t)param_1,(undefined *)((int)this + 8));
  return wVar1;
}

/* ref: ctype_G_std::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(wchar_t * param_1, unsigned int gen_a1), GEN_P(wchar_t * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeaf0f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;)
  GEN_PIN(wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a2;)
  wchar_t wVar1;
  wchar_t * pwVar2;
  
  pwVar2 = param_1;
  if (param_1 != param_2) {
    do {
      wVar1 = F_0105113f(*pwVar2,(undefined *)((int)this + 8));
      *pwVar2 = wVar1;
      pwVar2 = pwVar2 + 1;
    } while (pwVar2 != param_2);
  }
  return (uint)pwVar2;
}

/* ref: FUN_00eaf130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaf130u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  (*(int *)(gen_frame + 0x4)) = 0;
  iVar1 = F_010512d7(((wchar_t *)(gen_frame + 0x8)),(char *)&(*(undefined4 *)&gen_args[1]),1,&(*(int *)(gen_frame + 0x4)),((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))));
  uVar2 = 0xffff;
  if (-1 < iVar1) {
    uVar2 = (uint)(ushort)((wchar_t *)(gen_frame + 0x8))[0];
  }
  return uVar2;
}

/* ref: ctype_G_std::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaf170u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  (*(int *)(gen_frame + 0x4)) = 0;
  iVar1 = F_010512d7(((wchar_t *)(gen_frame + 0x8)),(char *)&(*(undefined4 *)&gen_args[1]),1,&(*(int *)(gen_frame + 0x4)),((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))));
  uVar2 = 0xffff;
  if (-1 < iVar1) {
    uVar2 = (uint)(ushort)((wchar_t *)(gen_frame + 0x8))[0];
  }
  return uVar2;
}

/* ref: ctype_G_std::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeaf1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined1 * puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 * puVar4;
  undefined2 * puVar5;
  
  puVar1 = (*(undefined1 * PTR32 *)&gen_args[2]);
  puVar4 = (*(undefined1 * PTR32 *)&gen_args[1]);
  if ((*(undefined1 * PTR32 *)&gen_args[1]) != (*(undefined1 * PTR32 *)&gen_args[2])) {
    puVar5 = (*(undefined2 * PTR32 *)&gen_args[3]);
    do {
      (*(undefined1 * PTR32 *)&gen_args[1]) = ((undefined1 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined1 * PTR32 *)&gen_args[1]), 1, 3),*puVar4)));
      (*(undefined2 * PTR32 *)&gen_args[3]) = (undefined2 *)0x0;
      iVar3 = F_010512d7((wchar_t *)&(*(undefined1 * PTR32 *)&gen_args[2]),(char *)&(*(undefined1 * PTR32 *)&gen_args[1]),1,(int *)&(*(undefined2 * PTR32 *)&gen_args[3]),
                        ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))));
      uVar2 = 0xffff;
      if (-1 < iVar3) {
        uVar2 = (*((undefined2 *)GEN_TOP(((char *)&(*(undefined1 * PTR32 *)&gen_args[2]) + 0))));
      }
      *puVar5 = uVar2;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (puVar4 != puVar1);
  }
  return (uint)puVar4;
}

/* ref: FUN_00eaf220 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00eaf220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeaf220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(int *)(gen_frame + 0xc)) = 0;
  iVar2 = F_01050fec((char *)((byte *)(gen_frame + 0x10)),(wchar_t)param_1,&(*(int *)(gen_frame + 0xc)),(undefined *)((int)this + 0x18));
  bVar1 = (byte)param_2;
  if (iVar2 == 1) {
    bVar1 = ((byte *)(gen_frame + 0x10))[0];
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return bVar1;
}

/* ref: ctype_G_std::vf12 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00eaf270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeaf270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(int *)(gen_frame + 0xc)) = 0;
  iVar2 = F_01050fec((char *)((byte *)(gen_frame + 0x10)),(wchar_t)param_1,&(*(int *)(gen_frame + 0xc)),(undefined *)((int)this + 0x18));
  bVar1 = (byte)param_2;
  if (iVar2 == 1) {
    bVar1 = ((byte *)(gen_frame + 0x10))[0];
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return bVar1;
}

/* ref: ctype_G_std::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(wchar_t * param_1, unsigned int gen_a1), GEN_P(wchar_t * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(char * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xeaf2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;)
  GEN_PIN(wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(char * param_4 = (char *)(uintptr_t)gen_a4;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  wchar_t wVar1;
  char cVar2;
  int iVar3;
  wchar_t * pwVar4;
  char * pcVar5;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  pwVar4 = param_1;
  if (param_1 != param_2) {
    pcVar5 = param_4;
    do {
      wVar1 = *pwVar4;
      (*(int *)(gen_frame + 0xc)) = 0;
      iVar3 = F_01050fec(((char *)(gen_frame + 0x10)),wVar1,&(*(int *)(gen_frame + 0xc)),(undefined *)((int)this + 0x18));
      cVar2 = (char)param_3;
      if (iVar3 == 1) {
        cVar2 = ((char *)(gen_frame + 0x10))[0];
      }
      *pcVar5 = cVar2;
      pwVar4 = pwVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (pwVar4 != param_2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return (uint)pwVar4;
}

/* ref: ctype_G_std::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaf330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x115cab8));
  if (*(int *)((int)this + 0x14) != 0) {
    F_00c4c68f(*(undefined * PTR32 *)((int)this + 0x10));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eaf3b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeaf3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  puVar1 = *(uint * PTR32 *)((int)this + 0x38);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[15])REFP(0x115caf4));
  if (puVar1 != (uint *)0x0) {
    uVar3 = *puVar1;
    if (uVar3 != 0) {
      F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,0);
      iVar2 = *(int *)(uVar3 + 4);
      if ((iVar2 != 0) && (iVar2 != -1)) {
        *(int *)(uVar3 + 4) = iVar2 - 1;
      }
      iVar2 = *(int *)(uVar3 + 4);
      F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      puVar4 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar3)));
      if (puVar4 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar4)(puVar4 GEN_EDX_ARG,1);
      }
    }
    this = (*(undefined * PTR32 *)(gen_frame + 0x8));
    F_00406ad0(puVar1);
  }
  uVar3 = F_00c465bd((undefined *)((int)this + 4) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00eaf430 */
GEN_LIB GEN_FRAME ushort F_00eaf430(GEN_P(ushort * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeaf430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  return *param_1;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf1 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eaf440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeaf440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c465d4((undefined *)((int)this + 4) GEN_EDX_FWD);
  return;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eaf450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeaf450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c465dd((undefined *)((int)this + 4) GEN_EDX_FWD);
  return uVar1;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eaf460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaf460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0xffff;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf4 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eaf470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaf470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0xffff;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf5 */
GEN_LIB GEN_NOFRAME uint F_00eaf480(void)
{
  GEN_ENTER(0xeaf480u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf6 */
GEN_LIB GEN_NOFRAME uint F_00eaf490(void)
{
  GEN_ENTER(0xeaf490u, 0u, 0u, 0u, 0u);
  return 0xffff;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf12 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eaf4a0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xeaf4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  return in_ecx;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf13 */
GEN_LIB GEN_NOFRAME uint F_00eaf4b0(void)
{
  GEN_ENTER(0xeaf4b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf14 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eaf4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaf4c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00eaf4d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaf4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  **(int * PTR32 *)((int)this + 0x30) = **(int * PTR32 *)((int)this + 0x30) - param_1;
  **(int * PTR32 *)((int)this + 0x20) = **(int * PTR32 *)((int)this + 0x20) + param_1 * 2;
  return param_1 * 2;
}

/* ref: FUN_00eaf500 */
GEN_LIB GEN_NOFRAME ulonglong GEN_THISCALL F_00eaf500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeaf500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (**(int * PTR32 *)((int)this + 0x20) != 0) {
    return (ulonglong)**(int * PTR32 *)((int)this + 0x30);
  }
  return 0;
}

/* ref: FUN_00eaf520 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaf520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  **(int * PTR32 *)((int)this + 0x34) = **(int * PTR32 *)((int)this + 0x34) - param_1;
  **(int * PTR32 *)((int)this + 0x24) = **(int * PTR32 *)((int)this + 0x24) + param_1 * 2;
  return param_1 * 2;
}

/* ref: FUN_00eaf540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaf540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  undefined2 * puVar2;
  uint uVar3;
  
  if ((**(int * PTR32 *)((int)this + 0x24) != 0) && (piVar1 = *(int * PTR32 *)((int)this + 0x34), 0 < *piVar1)) {
    *piVar1 = *piVar1 - 1;
    puVar2 = ((undefined2 *)GEN_TOP(**(int * PTR32 *)((int)this + 0x24)));
    **(int * PTR32 *)((int)this + 0x24) = (int)(puVar2 + 1);
    *puVar2 = (short)param_1;
    return param_1 & 0xffff;
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_1);
  return uVar3 & 0xffff;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eaf580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeaf580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ushort * puVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD);
  if ((short)uVar2 == -1) {
    return 0xffff;
  }
  **(int * PTR32 *)((int)this + 0x30) = **(int * PTR32 *)((int)this + 0x30) - 1;
  puVar1 = ((ushort *)GEN_TOP(**(int * PTR32 *)((int)this + 0x20)));
  **(int * PTR32 *)((int)this + 0x20) = (int)(puVar1 + 1);
  return (uint)*puVar1;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xeaf5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong local_10;
  
  local_10 = 0;
  if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
    while( true ) {
      do {
        uVar3 = F_00eaf500(this GEN_EDX_FWD);
        if (((longlong)uVar3 < 0) || (uVar3 == 0)) {
          uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_ARG);
          if ((short)uVar1 == -1) {
            return (uint)local_10;
          }
          *param_1 = (short)uVar1;
          local_10 = (ulonglong)((uint)local_10 + 1);
          bVar2 = param_2 != 0;
          param_2 = param_2 - 1;
          param_3 = param_3 - 1 + (uint)bVar2;
          param_1 = param_1 + 1;
        }
        else {
          if ((longlong)CONCAT44(param_3,param_2) < (longlong)uVar3) {
            uVar3 = CONCAT44(param_3,param_2);
          }
          uVar1 = (uint)uVar3;
          F_00c46aa0(param_1,**(undefined4 * PTR32 *)((int)this + 0x20),uVar1 * 2);
          local_10 = uVar3 + local_10;
          bVar2 = param_2 < uVar1;
          param_2 = param_2 - uVar1;
          param_3 = (param_3 - (int)(uVar3 >> 0x20)) - (uint)bVar2;
          **(int * PTR32 *)((int)this + 0x30) = **(int * PTR32 *)((int)this + 0x30) - uVar1;
          **(int * PTR32 *)((int)this + 0x20) = **(int * PTR32 *)((int)this + 0x20) + uVar1 * 2;
          param_1 = param_1 + uVar1;
        }
      } while (0 < param_3);
      if (param_3 < 0) break;
      if (param_2 == 0) {
        return (uint)local_10;
      }
    }
    return (uint)local_10;
  }
  return 0;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xeaf6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong local_10;
  
  local_10 = 0;
  if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
    while( true ) {
      do {
        uVar3 = F_00eaaa70(this GEN_EDX_FWD);
        if (((longlong)uVar3 < 0) || (uVar3 == 0)) {
          uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,(uint)*param_1);
          if ((short)uVar1 == -1) {
            return (uint)local_10;
          }
          param_1 = param_1 + 1;
          local_10 = (ulonglong)((uint)local_10 + 1);
          bVar2 = param_2 != 0;
          param_2 = param_2 - 1;
          param_3 = param_3 - 1 + (uint)bVar2;
        }
        else {
          if ((longlong)CONCAT44(param_3,param_2) < (longlong)uVar3) {
            uVar3 = CONCAT44(param_3,param_2);
          }
          uVar1 = (uint)uVar3;
          F_00c46aa0(**(undefined4 * PTR32 *)((int)this + 0x24),param_1,uVar1 * 2);
          param_1 = param_1 + uVar1;
          local_10 = uVar3 + local_10;
          bVar2 = param_2 < uVar1;
          param_2 = param_2 - uVar1;
          param_3 = (param_3 - (int)(uVar3 >> 0x20)) - (uint)bVar2;
          **(int * PTR32 *)((int)this + 0x34) = **(int * PTR32 *)((int)this + 0x34) - uVar1;
          **(int * PTR32 *)((int)this + 0x24) = **(int * PTR32 *)((int)this + 0x24) + uVar1 * 2;
        }
      } while (0 < param_3);
      if (param_3 < 0) break;
      if (param_2 == 0) {
        return (uint)local_10;
      }
    }
    return (uint)local_10;
  }
  return 0;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xeaf790u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  undefined4 uVar1;
  
  uVar1 = REFG(undefined4, 0x1118764);
  *param_1 = REFG(undefined4, 0x1118760);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (uint)param_1;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xeaf7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  undefined4 uVar1;
  
  uVar1 = REFG(undefined4, 0x1118764);
  *param_1 = REFG(undefined4, 0x1118760);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (uint)param_1;
}

/* ref: FUN_00eaf810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaf810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  
  piVar1 = (int *)((int)this - 8);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*(int *)(*piVar1 + 4) - 8 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1159a60));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(piVar1);
  }
  return (uint)piVar1;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaf850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  F_00eaf3b0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eaf880 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaf880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  
  piVar1 = (int *)((int)this - 0x18);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*(int *)(*piVar1 + 4) - 0x18 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1159a68));
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this - 8) + 4))) - 8 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this - 0x18) + 4))) - 0x18 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(piVar1);
  }
  return (uint)piVar1;
}

/* ref: FUN_00eaf8e0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00eaf8e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xeaf8e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  uVar1 = param_2;
  if (*(int *)(in_ecx + 0x38) == 0) {
    uVar1 = param_2 | 4;
  }
  *(uint *)(in_ecx + 0xc) = uVar1 & 0x17;
  uVar1 = *(uint *)(in_ecx + 0x10) & uVar1 & 0x17;
  if ((uVar1 != 0) && ((char)param_3 == '\0')) {
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 2) == 0) {
        uVar1 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::eofbit set";
      }
      else {
        uVar1 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::failbit set";
      }
    }
    else {
      uVar1 = F_00c46280();
      (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::badbit set";
    }
    (*(undefined4 *)(gen_frame + 0x14)) = 1;
    (*(uint *)(gen_frame + 0x18)) = uVar1;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00eaf990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf990(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeaf990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eaf9a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf9a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeaf9a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  return *in_ecx - *param_2;
}

/* ref: collate<>_00eaf9b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaf9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeaf9b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined8 _Var1;
  
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[9])REFP(0x115cb34));
  _Var1 = F_01051073();
  *(undefined *)((int)this + 8) = _Var1;
  return (uint)this;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eafa30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeafa30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eafa60 */
GEN_LIB GEN_FRAME unsigned int F_00eafa60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xeafa60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  undefined2 * puVar1;
  char * pcVar2;
  uint uVar3;
  
  *param_2 = 0x25;
  puVar1 = (undefined2 *)(param_2 + 1);
  if ((param_4 & 0x20) != 0) {
    *(undefined1 *)puVar1 = 0x2b;
    puVar1 = (undefined2 *)(param_2 + 2);
  }
  if ((param_4 & 0x10) != 0) {
    *(undefined1 *)puVar1 = 0x23;
    puVar1 = (undefined2 *)((int)puVar1 + 1);
  }
  *puVar1 = 0x2a2e;
  pcVar2 = (char *)(puVar1 + 1);
  if ((char)param_3 != '\0') {
    *pcVar2 = (char)param_3;
    pcVar2 = (char *)((int)puVar1 + 3);
  }
  uVar3 = param_4 & 0x3000;
  if (uVar3 == 0x2000) {
    *pcVar2 = 'f';
    pcVar2[1] = '\0';
    return 0;
  }
  if (uVar3 == 0x3000) {
    *pcVar2 = 'a';
    pcVar2[1] = '\0';
    return 0;
  }
  *pcVar2 = (uVar3 != 0x1000) * '\x02' + 'e';
  pcVar2[1] = '\0';
  return 0;
}

/* ref: FUN_00eafae0 */
GEN_LIB GEN_FRAME uint F_00eafae0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xeafae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  undefined1 * puVar1;
  char * pcVar2;
  byte * pbVar3;
  
  puVar1 = param_2;
  *param_2 = 0x25;
  pcVar2 = param_2 + 1;
  if ((param_4 & 0x20) != 0) {
    *pcVar2 = '+';
    pcVar2 = param_2 + 2;
  }
  if ((param_4 & 8) != 0) {
    *pcVar2 = '#';
    pcVar2 = pcVar2 + 1;
  }
  if (*param_3 == 'L') {
    pcVar2[0] = 'I';
    pcVar2[1] = '6';
    pcVar2[2] = '4';
    pbVar3 = (byte *)(pcVar2 + 3);
  }
  else {
    *pcVar2 = *param_3;
    pbVar3 = (byte *)(pcVar2 + 1);
  }
  if ((param_4 & 0xe00) == 0x400) {
    *pbVar3 = 0x6f;
    pbVar3[1] = 0;
    return (uint)puVar1;
  }
  if ((param_4 & 0xe00) != 0x800) {
    *pbVar3 = param_3[1];
    pbVar3[1] = 0;
    return (uint)puVar1;
  }
  *pbVar3 = ~((char)param_4 * '\b') & 0x20U | 0x58;
  pbVar3[1] = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eafb70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eafb70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeafb70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (0xf < *(uint *)((int)this + 0x14)) {
    return param_1 + *(int *)this;
  }
  return (int)this + param_1;
}

/* ref: FUN_00eafbd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eafbd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeafbd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00406b30(*(undefined4 *)((int)this + 8));
  F_00406b30(*(undefined4 *)((int)this + 0x10));
  uVar1 = F_00406b30(*(undefined4 *)((int)this + 0x14));
  return (uint)uVar1;
}

/* ref: FUN_00eafc00 */
GEN_LIB GEN_FRAME byte F_00eafc00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeafc00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return (byte)param_1;
}

/* ref: FUN_00eafc10 */
GEN_LIB GEN_FRAME uint F_00eafc10(GEN_P(char * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeafc10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  char * pcVar4;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (1 - (int)(param_1 + 1));
  uVar3 = F_00406a50(pcVar2);
  if (pcVar2 != (char *)0x0) {
    pcVar4 = param_1;
    do {
      pcVar4[uVar3 - (int)param_1] = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar2 = pcVar2 - 1;
    } while (pcVar2 != (char *)0x0);
  }
  return uVar3;
}

/* ref: FUN_00eafc50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eafc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeafc50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  int * piVar2;
  byte * pbVar3;
  uint uVar4;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    if ((*(int *)piVar1[9] == 0) || (piVar2 = (int *)piVar1[0xd], *piVar2 < 1)) {
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD,(uint)(byte)param_1);
    }
    else {
      *piVar2 = *piVar2 - 1;
      pbVar3 = *(byte * PTR32 *)piVar1[9];
      *(byte * PTR32 *)piVar1[9] = pbVar3 + 1;
      *pbVar3 = (byte)param_1;
      uVar4 = (uint)(byte)param_1;
    }
    if (uVar4 != 0xffffffff) {
      return (uint)this;
    }
  }
  *(undefined1 *)this = 1;
  return (uint)this;
}

/* ref: FUN_00eafca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eafca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeafca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char cVar1;
  undefined * plVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  undefined1 * puVar6;
  char * pcVar7;
  undefined8 _Var8;
  
  plVar2 = F_00c527f9();
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  pcVar7 = "";
  if ((char)param_2 == '\0') {
    pcVar7 = (*(char * PTR32 *)(((char *)(plVar2) + 8)));
  }
  F_01051073();
  pcVar3 = pcVar7;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + (1 - (int)(pcVar7 + 1));
  uVar4 = F_00406a50(pcVar3);
  if (pcVar3 != (char *)0x0) {
    iVar5 = uVar4 - (int)pcVar7;
    do {
      pcVar7[iVar5] = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar3 = pcVar3 - 1;
    } while (pcVar3 != (char *)0x0);
  }
  *(uint *)((int)this + 8) = uVar4;
  F_01051073();
  iVar5 = 6;
  pcVar7 = "false";
  uVar4 = F_00406a50(6);
  do {
    pcVar7[uVar4 + 0xfeec40e0] = *pcVar7;
    pcVar7 = pcVar7 + 1;
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  *(uint *)((int)this + 0x10) = uVar4;
  F_01051073();
  iVar5 = 5;
  puVar6 = &REFG(undefined1, 0x113bf28);
  uVar4 = F_00406a50(5);
  do {
    puVar6[uVar4 + 0xfeec40d8] = *puVar6;
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  *(uint *)((int)this + 0x14) = uVar4;
  F_01051073();
  *(char *)((int)this + 0xc) = *(*(char * PTR32 *)((char *)(plVar2)));
  _Var8 = F_01051073();
  uVar4 = CONCAT31(GEN_PIECE(&(*(uint *)((char *)&(_Var8))), 1, 3),*(*(char * PTR32 *)(((char *)(plVar2) + 4))));
  *(char *)((int)this + 0xd) = *(*(char * PTR32 *)(((char *)(plVar2) + 4)));
  if ((char)param_2 != '\0') {
    F_01051073();
    *(undefined1 *)((int)this + 0xc) = 0x2e;
    _Var8 = F_01051073();
    uVar4 = (*(uint *)((char *)&(_Var8)));
    *(undefined1 *)((int)this + 0xd) = 0x2c;
  }
  return uVar4;
}

/* ref: FUN_00eafda0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eafda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeafda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eafdd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeafdd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eafe00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeafe00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eafe30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeafe30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eafe60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeafe60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eafe90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeafe90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eafec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeafec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eafef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeafef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaff20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaff20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaff50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaff50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaff80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaff80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaffb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaffb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eaffe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeaffe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb00a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb00a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb00d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb00d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb01c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb01c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb01f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb01f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb02b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb02b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb02e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb02e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb03a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb03a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb03d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb03d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb04c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb04c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb04f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb04f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb05b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb05b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb05e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb05e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb06a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb06a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb06d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb06d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb07c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb07c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb07f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb07f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb08b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb08b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb08e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb08e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb09a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb09a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb09d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb09d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb0b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb0b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

