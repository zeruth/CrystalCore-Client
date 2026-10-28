#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Apricot::Engine::Data::Communicator::Texture::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009d9b60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9b60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::FunctionCurve::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009d9ce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9ce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(in_ecx + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = &REFG(undefined4, 0x14a0a38);
  }
  return (uint)puVar1;
}

/* ref: Apricot::Engine::Data::Communicator::FunctionCurve::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009d9cf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9cf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(uint * PTR32 *)(in_ecx + 4) == (uint *)0x0) {
    return (REFG(undefined4, 0x14a0a38) >> 9 & 0xffff) * 8 + 0x13 & 0xfffffff0;
  }
  return (**(uint * PTR32 *)(in_ecx + 4) >> 9 & 0xffff) * 8 + 0x13 & 0xfffffff0;
}

/* ref: Apricot::Engine::Data::Communicator::ValueFunctionCurve::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009d9d60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9d60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::ValueFunctionCurve::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009d9d70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9d70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x40;
}

/* ref: Apricot::Engine::Data::Communicator::LaserParticle::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009d9e00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9e00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::LaserParticle::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009d9e10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9e10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x90;
}

/* ref: Apricot::Engine::Data::Communicator::PolygonParticle::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009d9e60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9e60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::DecalRingParticle::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009d9ed0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9ed0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::DecalRingParticle::vf2 */
GEN_NOFRAME float10 GEN_THISCALL F_009d9ee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9ee0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x90);
}

/* ref: Apricot::Engine::Data::Communicator::DecalRingParticle::vf3 */
GEN_NOFRAME float10 GEN_THISCALL F_009d9ef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9ef0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x94);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009d9f10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9f10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf2 */
GEN_NOFRAME byte GEN_THISCALL F_009d9f20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9f20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x18) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf3 */
GEN_NOFRAME byte GEN_THISCALL F_009d9f30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9f30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x19) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf4 */
GEN_NOFRAME byte GEN_THISCALL F_009d9f40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9f40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x1a) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_009d9f50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9f50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x1b);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_009d9f60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9f60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x1c);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf7 */
GEN_FRAME uint GEN_THISCALL F_009d9f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9d9f70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 4 + param_2 * 4);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_009d9f80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9f80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_009d9f90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9f90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf10 */
GEN_NOFRAME uint GEN_THISCALL F_009d9fa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9fa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_009d9fb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9fb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf2 */
GEN_FRAME uint GEN_THISCALL F_009d9fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9d9fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 4) = param_1;
  *(undefined4 *)(this + 8) = param_2;
  return param_1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009d9fe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9fe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_009d9ff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9ff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf17 */
GEN_NOFRAME uint GEN_THISCALL F_009da000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da000u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x9c);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf18 */
GEN_NOFRAME unsigned int GEN_THISCALL F_009da010(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da010u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(int *)(in_ecx + 0x9c) = *(int *)(in_ecx + 0x9c) + 1;
  return;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf19 */
GEN_NOFRAME unsigned int GEN_THISCALL F_009da020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(int *)(in_ecx + 0x9c) = *(int *)(in_ecx + 0x9c) - 1;
  return;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf33 */
GEN_NOFRAME float10 GEN_THISCALL F_009da030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da030u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x4c);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf34 */
GEN_NOFRAME float10 GEN_THISCALL F_009da040(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da040u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x50);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf35 */
GEN_NOFRAME float10 GEN_THISCALL F_009da050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da050u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x54);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf36 */
GEN_NOFRAME float10 GEN_THISCALL F_009da060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x58);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf37 */
GEN_NOFRAME float10 GEN_THISCALL F_009da070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da070u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x5c);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf38 */
GEN_NOFRAME float10 GEN_THISCALL F_009da080(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da080u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x60);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf39 */
GEN_NOFRAME float10 GEN_THISCALL F_009da090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 100);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf40 */
GEN_NOFRAME float10 GEN_THISCALL F_009da0a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da0a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x68);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf41 */
GEN_NOFRAME float10 GEN_THISCALL F_009da0b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da0b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x6c);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf42 */
GEN_NOFRAME float10 GEN_THISCALL F_009da0c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da0c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x70);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf43 */
GEN_NOFRAME float10 GEN_THISCALL F_009da0d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da0d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x74);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf44 */
GEN_NOFRAME float10 GEN_THISCALL F_009da0e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da0e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x78);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf45 */
GEN_NOFRAME float10 GEN_THISCALL F_009da0f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da0f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x7c);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf46 */
GEN_NOFRAME float10 GEN_THISCALL F_009da100(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da100u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x80);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf47 */
GEN_NOFRAME float10 GEN_THISCALL F_009da110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da110u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x84);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf48 */
GEN_NOFRAME float10 GEN_THISCALL F_009da120(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da120u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x88);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf49 */
GEN_NOFRAME float10 GEN_THISCALL F_009da130(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da130u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x8c);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf50 */
GEN_NOFRAME float10 GEN_THISCALL F_009da140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da140u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x90);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf28 */
GEN_NOFRAME uint GEN_THISCALL F_009da150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da150u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf29 */
GEN_NOFRAME float10 GEN_THISCALL F_009da160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x3c);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf30 */
GEN_NOFRAME float10 GEN_THISCALL F_009da170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da170u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x40);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf31 */
GEN_NOFRAME float10 GEN_THISCALL F_009da180(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da180u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x44);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf32 */
GEN_NOFRAME float10 GEN_THISCALL F_009da190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da190u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x48);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf51 */
GEN_NOFRAME uint GEN_THISCALL F_009da1a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da1a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf52 */
GEN_NOFRAME uint GEN_THISCALL F_009da1b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da1b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 2 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf53 */
GEN_NOFRAME uint GEN_THISCALL F_009da1c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da1c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 3 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf54 */
GEN_NOFRAME uint GEN_THISCALL F_009da1d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da1d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 4 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf55 */
GEN_NOFRAME uint GEN_THISCALL F_009da1e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da1e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 5 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf56 */
GEN_NOFRAME float10 GEN_THISCALL F_009da1f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da1f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x30);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf57 */
GEN_NOFRAME float10 GEN_THISCALL F_009da200(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da200u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x34);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf58 */
GEN_NOFRAME uint GEN_THISCALL F_009da210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 6 & 0x1f;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf59 */
GEN_NOFRAME uint GEN_THISCALL F_009da220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da220u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 0xb & 0x1ff;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf60 */
GEN_NOFRAME uint GEN_THISCALL F_009da230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da230u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 0x14 & 0xf;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf61 */
GEN_NOFRAME uint GEN_THISCALL F_009da240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da240u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x3b) & 0xf;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf62 */
GEN_NOFRAME uint GEN_THISCALL F_009da250(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da250u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 0x1c;
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009da260(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da260u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009da270(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da270u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 9);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009da280(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da280u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 10);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf4 */
GEN_NOFRAME byte GEN_THISCALL F_009da290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da290u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0xb) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf5 */
GEN_NOFRAME byte GEN_THISCALL F_009da2a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da2a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0xc) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_009da2b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da2b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(short *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_009da2c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da2c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(short *)(in_ecx + 6);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_009da2d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da2d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_009da2e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da2e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf10 */
GEN_NOFRAME uint GEN_THISCALL F_009da2f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da2f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_009da300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da300u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_009da310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da310u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Runtime::Model::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009da320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da320u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::Scheduler::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009da330(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da330u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Runtime::Scheduler::vf2 */
GEN_FRAME uint GEN_THISCALL F_009da340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9da340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 4) + param_2 * 4;
}

/* ref: Apricot::Engine::Data::Runtime::Scheduler::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009da350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da350u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0xd);
}

/* ref: Apricot::Engine::Data::Runtime::Scheduler::vf4 */
GEN_FRAME uint GEN_THISCALL F_009da360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9da360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 8) + param_2 * 4;
}

/* ref: Apricot::Engine::Data::Runtime::Texture::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009da370(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da370u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009da380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da380u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8) >> 0x10 | (*(uint *)(in_ecx + 0xc) & 0xff) << 0x10;
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009da3a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (uint)((ulonglong)*(undefined8 *)(this + 8) >> 0x28);
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009da3c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da3c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8) & 0xff;
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_009da3d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da3d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf5 */
GEN_FRAME uint GEN_THISCALL F_009da3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9da3e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x2a + *(int *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf6 */
GEN_FRAME uint GEN_THISCALL F_009da3f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9da3f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xa4 + *(int *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Runtime::FunctionCurve::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009da410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da410u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::FunctionCurve::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009da420(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da420u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (**(uint * PTR32 *)(in_ecx + 4) >> 9 & 0xffff) * 8 + 0x13 & 0xfffffff0;
}

/* ref: Apricot::Engine::Data::Runtime::Value::vf1 */
GEN_NOFRAME float10 GEN_THISCALL F_009da450(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da450u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::Value::vf2 */
GEN_NOFRAME float10 GEN_THISCALL F_009da460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da460u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Runtime::ValueFunctionCurve::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009da470(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::ValueFunctionCurve::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009da480(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da480u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xc;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009da490(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da490u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_009da4a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da4a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_009da4b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da4b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 2 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_009da4c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da4c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 3 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_009da4d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da4d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 4 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf8 */
GEN_NOFRAME byte GEN_THISCALL F_009da4e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da4e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (*(ushort *)(in_ecx + 4) & 0x380) != 0;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf9 */
GEN_NOFRAME byte GEN_THISCALL F_009da500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da500u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (*(ushort *)(in_ecx + 4) & 0xc00) != 0;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf10 */
GEN_NOFRAME uint GEN_THISCALL F_009da520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da520u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 0xc & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_009da530(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da530u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)(*(ushort *)(in_ecx + 4) >> 0xe);
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_009da540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da540u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 6) & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009da550(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x10;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009da560(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009da570(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da570u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_009da580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da580u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 2 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_009da590(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da590u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 3 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_009da5a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da5a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 4 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_009da5b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da5b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 7 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_009da5c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da5c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 10 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_009da5d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da5d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 0xc & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_009da5e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da5e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)(*(ushort *)(in_ecx + 4) >> 0xe);
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf10 */
GEN_NOFRAME uint GEN_THISCALL F_009da5f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da5f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 6) & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009da600(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da600u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009da610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da610u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 1 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_009da620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da620u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 4 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_009da630(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 6 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_009da640(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da640u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 8 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_009da650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009da660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009da670(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da670u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_009da680(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da680u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4) >> 2 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_009da690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)(*(byte *)(in_ecx + 4) >> 5);
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_009da6a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da6a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009da6b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da6b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009da6c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da6c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_009da6d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da6d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 2 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_009da6e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da6e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 3 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_009da6f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da6f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 4 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_009da700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 5 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_009da710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da710u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 8 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_009da720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 10 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf10 */
GEN_NOFRAME uint GEN_THISCALL F_009da730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da730u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 0xc & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_009da740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da740u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Palette::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009da750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Palette::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_009da760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4) >> 1 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Palette::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_009da770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da770u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::LaserParticle::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009da780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::LaserParticle::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009da790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1c;
}

/* ref: Apricot::Engine::Data::Runtime::LightModelParticle::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009da7a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da7a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::PolygonParticle::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009da7b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da7b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::PowderParticle::vf1 */
GEN_NOFRAME byte GEN_THISCALL F_009da7c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da7c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 4) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::PowderParticle::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_009da7d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da7d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 5);
}

/* ref: Apricot::Engine::Data::Runtime::PowderParticle::vf3 */
GEN_NOFRAME float10 GEN_THISCALL F_009da7e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da7e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Runtime::WindmillParticle::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009da7f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da7f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::DecalParticle::vf1 */
GEN_NOFRAME float10 GEN_THISCALL F_009da800(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::DecalRingParticle::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_009da810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da810u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::DecalRingParticle::vf2 */
GEN_NOFRAME float10 GEN_THISCALL F_009da820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da820u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x1c);
}

/* ref: Apricot::Engine::Data::Runtime::DecalRingParticle::vf3 */
GEN_NOFRAME float10 GEN_THISCALL F_009da830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x20);
}

/* ref: FUN_009da840 */
GEN_FRAME uint GEN_THISCALL F_009da840(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x9da840u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = REFG(float, 0x1087f04);
  fVar2 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar3 = ((float10)GEN_TOD(fcos((float10)param_2)));
  *param_1 = (float)fVar3;
  param_1[8] = (float)fVar2;
  param_1[1] = 0.0;
  param_1[2] = ((float)GEN_TOF(-(float10)(float)fVar2));
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = fVar1;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = (float)fVar3;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = fVar1;
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf1 */
GEN_NOFRAME unsigned int F_009da8e0(void)
{
  GEN_ENTER(0x9da8e0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf2 */
GEN_NOFRAME unsigned int F_009da8f0(void)
{
  GEN_ENTER(0x9da8f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf8 */
GEN_NOFRAME uint F_009da900(void)
{
  GEN_ENTER(0x9da900u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf24 */
GEN_NOFRAME unsigned int F_009da910(void)
{
  GEN_ENTER(0x9da910u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf25 */
GEN_NOFRAME unsigned int F_009da920(void)
{
  GEN_ENTER(0x9da920u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf26 */
GEN_NOFRAME unsigned int F_009da930(void)
{
  GEN_ENTER(0x9da930u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf27 */
GEN_NOFRAME unsigned int F_009da940(void)
{
  GEN_ENTER(0x9da940u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf28 */
GEN_NOFRAME unsigned int F_009da950(void)
{
  GEN_ENTER(0x9da950u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf29 */
GEN_NOFRAME unsigned int F_009da960(void)
{
  GEN_ENTER(0x9da960u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf30 */
GEN_NOFRAME unsigned int F_009da970(void)
{
  GEN_ENTER(0x9da970u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::Engine::Instance::ParticleInstance::vf8 */
GEN_NOFRAME uint F_009da980(void)
{
  GEN_ENTER(0x9da980u, 0u, 0u, 0u, 0u);
  return 7;
}

/* ref: FUN_009da9c0 */
GEN_FRAME uint GEN_THISCALL F_009da9c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9da9c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x58) = param_2;
  return param_2;
}

/* ref: Apricot::VfxLightInterface::vf0 */
GEN_FRAME uint GEN_THISCALL F_009daa10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9daa10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10de540));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::InterfaceBase::vf0 */
GEN_FRAME uint GEN_THISCALL F_009daa50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9daa50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dab00 */
GEN_FRAME uint GEN_THISCALL F_009dab00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dab00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_009dab30 */
GEN_FRAME uint GEN_THISCALL F_009dab30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dab30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_009dab60 */
GEN_NOFRAME unsigned int GEN_THISCALL F_009dab60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9dab60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  }
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

/* ref: Apricot::ILoaderListenner::vf0 */
GEN_FRAME uint GEN_THISCALL F_009dabd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dabd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de534));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::IListenner::vf1 */
GEN_NOFRAME byte GEN_THISCALL F_009dac10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dac10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Apricot::IListenner::vf2 */
GEN_NOFRAME unsigned int F_009dac20(void)
{
  GEN_ENTER(0x9dac20u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::IListenner::vf3 */
GEN_NOFRAME unsigned int F_009dac30(void)
{
  GEN_ENTER(0x9dac30u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::IListenner::vf4 */
GEN_NOFRAME unsigned int F_009dac40(void)
{
  GEN_ENTER(0x9dac40u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::IListenner::vf5 */
GEN_NOFRAME unsigned int F_009dac50(void)
{
  GEN_ENTER(0x9dac50u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::IListenner::vf6 */
GEN_NOFRAME unsigned int F_009dac60(void)
{
  GEN_ENTER(0x9dac60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::IListenner::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_009dac70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dac70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Apricot::IListenner::vf8 */
GEN_NOFRAME uint F_009dac80(void)
{
  GEN_ENTER(0x9dac80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_009dac90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dac90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0x107fc63;
}

/* ref: Apricot::IListenner::vf10 */
GEN_NOFRAME byte F_009daca0(void)
{
  GEN_ENTER(0x9daca0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf11 */
GEN_NOFRAME unsigned int F_009dacb0(void)
{
  GEN_ENTER(0x9dacb0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::IListenner::vf12 */
GEN_NOFRAME byte GEN_THISCALL F_009dacc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dacc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Apricot::IListenner::vf13 */
GEN_NOFRAME byte GEN_THISCALL F_009dacd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dacd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Apricot::IListenner::vf24 */
GEN_NOFRAME unsigned int F_009dace0(void)
{
  GEN_ENTER(0x9dace0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::IListenner::vf25 */
GEN_NOFRAME uint F_009dacf0(void)
{
  GEN_ENTER(0x9dacf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf0 */
GEN_FRAME uint GEN_THISCALL F_009dad00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dad00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[36])REFP(0x10de564));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dad30 */
GEN_FRAME float10 F_009dad30(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x9dad30u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return (float10)((float)GEN_TOF(((float10)param_1 +
                         (float10)param_3 * ((float10)param_2 - (float10)param_1))));
}

/* ref: FUN_009dad50 */
GEN_FRAME uint F_009dad50(float gen_a0)
{
  GEN_ENTER(0x9dad50u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (int)((double)param_1 * *(double *)&REFG(undefined, 0x1088118));
}

/* ref: FUN_009dad70 */
GEN_FRAME float10 F_009dad70(unsigned int gen_a0)
{
  GEN_ENTER(0x9dad70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (float10)(float)((float10)(int)(char)param_1 * (float10)*(double *)&REFG(undefined, 0x10928e8));
}

/* ref: FUN_009dadc0 */
GEN_FRAME uint GEN_THISCALL F_009dadc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dadc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_009dae00 */
GEN_FRAME uint GEN_THISCALL F_009dae00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9dae00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(ushort *)this = (ushort)((byte)param_1 & 3) | (short)param_3 * 4;
  *(undefined2 *)((int)this + 2) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_009dae30 */
GEN_FRAME unsigned int GEN_THISCALL F_009dae30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dae30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  ushort * puVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined2 *)((int)this + 2) = 0xffff;
  *(undefined2 *)this = 1;
  piVar3 = param_1;
  if (param_2 != 0) {
    do {
      iVar1 = *piVar3;
      puVar2 = (ushort *)(piVar3 + 2);
      if (iVar1 == 0x5374546d) {
        *(ushort *)this = *puVar2 * 4 | *(ushort *)this & 3;
      }
      else if (iVar1 == 0x546c4e6f) {
        *(ushort *)((int)this + 2) = *puVar2;
      }
      else if (iVar1 == 0x62456e61) {
        *(ushort *)this = *(ushort *)this ^ (*puVar2 ^ *(ushort *)this) & 3;
      }
      uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
      piVar3 = ((int *)GEN_TOP(((int)puVar2 + (piVar3[1] + 3U & 0xfffffffc))));
    } while (uVar4 < param_2);
  }
  return 0;
}

/* ref: FUN_009daec0 */
GEN_FRAME unsigned int GEN_THISCALL F_009daec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9daec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  int iVar1;
  byte * pbVar2;
  undefined4 * puVar3;
  
  *(byte *)this = *(byte *)this ^ (*param_1 ^ *(byte *)this) & 1;
  *(byte *)this = (*param_1 ^ *(byte *)this) & 2 ^ *(byte *)this;
  *(byte *)((int)this + 1) = param_1[1];
  *(byte *)((int)this + 2) = param_1[2];
  *(byte *)((int)this + 3) = param_1[3];
  *(byte *)((int)this + 4) = param_1[4];
  *(undefined2 *)((int)this + 6) = *(undefined2 *)(param_1 + 6);
  *(undefined2 *)((int)this + 8) = *(undefined2 *)(param_1 + 8);
  pbVar2 = param_1 + 10;
  puVar3 = (undefined4 *)((int)this + 10);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *(undefined4 *)pbVar2;
    pbVar2 = pbVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_009daf30 */
GEN_FRAME unsigned int GEN_THISCALL F_009daf30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9daf30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  int iVar1;
  byte * pbVar2;
  undefined4 * puVar3;
  
  *(byte *)this = *(byte *)this ^ (*param_1 ^ *(byte *)this) & 1;
  *(byte *)this = (*param_1 ^ *(byte *)this) & 2 ^ *(byte *)this;
  *(byte *)((int)this + 1) = param_1[1];
  *(byte *)((int)this + 2) = param_1[2];
  *(byte *)((int)this + 3) = param_1[3];
  *(byte *)((int)this + 4) = param_1[4];
  *(undefined2 *)((int)this + 6) = *(undefined2 *)(param_1 + 6);
  *(undefined2 *)((int)this + 8) = *(undefined2 *)(param_1 + 8);
  pbVar2 = param_1 + 10;
  puVar3 = (undefined4 *)((int)this + 10);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *(undefined4 *)pbVar2;
    pbVar2 = pbVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_009dafa0 */
GEN_FRAME uint GEN_THISCALL F_009dafa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x9dafa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  *(undefined1 *)((int)this + 2) = (undefined1)param_4;
  *(byte *)this = ((byte)param_2 & 1) * '\x02' | *(byte *)this & 0xfc | (byte)param_1 & 1;
  *(undefined1 *)((int)this + 1) = (undefined1)param_3;
  *(undefined1 *)((int)this + 3) = (undefined1)param_5;
  *(undefined2 *)((int)this + 6) = (undefined2)param_7;
  *(undefined1 *)((int)this + 4) = (undefined1)param_6;
  *(undefined2 *)((int)this + 8) = (undefined2)param_8;
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xe) = 0;
  *(undefined4 *)((int)this + 0x12) = 0;
  *(undefined4 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x1a) = 0;
  *(undefined4 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x22) = 0;
  *(undefined4 *)((int)this + 0x26) = 0;
  F_00c49908((undefined4 *)((int)this + 10),0x20,param_9);
  return (uint)this;
}

/* ref: FUN_009db020 */
GEN_FRAME unsigned int GEN_THISCALL F_009db020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  uint uVar4;
  
  *(undefined4 *)((int)this + 1) = 0xffffffff;
  *(byte *)this = *(byte *)this & 0xfd | 1;
  *(undefined4 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xe) = 0;
  *(undefined4 *)((int)this + 0x12) = 0;
  *(undefined4 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x1a) = 0;
  *(undefined4 *)((int)this + 0x1e) = 0;
  uVar4 = 0;
  *(undefined4 *)((int)this + 0x22) = 0;
  *(undefined4 *)((int)this + 0x26) = 0;
  puVar3 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = *puVar3;
      puVar2 = puVar3 + 2;
      if (uVar1 < 0x45664e70) {
        if (uVar1 == 0x45664e6f) {
          *(char *)((int)this + 2) = (char)*puVar2;
        }
        else if (uVar1 == 0x42644e6f) {
          *(char *)((int)this + 3) = (char)*puVar2;
        }
        else if (uVar1 == 0x436c4e6f) {
          *(char *)((int)this + 4) = (char)*puVar2;
        }
        else if (uVar1 == 0x4564546d) {
          uVar1 = *puVar2;
          *(short *)((int)this + 8) = (short)uVar1;
          *(byte *)this = *(byte *)this ^ (((short)uVar1 == -1) * '\x02' ^ *(byte *)this) & 2;
        }
      }
      else if (uVar1 == 0x456d4e6f) {
        *(char *)((int)this + 1) = (char)*puVar2;
      }
      else if (uVar1 == 0x5374546d) {
        *(short *)((int)this + 6) = (short)*puVar2;
      }
      else if (uVar1 == 0x62456e61) {
        *(byte *)this = *(byte *)this ^ (*puVar2 != 0 ^ *(byte *)this) & 1;
      }
      uVar4 = uVar4 + 8 + (puVar3[1] + 3 & 0xfffffffc);
      puVar3 = ((uint *)GEN_TOP(((int)puVar2 + (puVar3[1] + 3 & 0xfffffffc))));
    } while (uVar4 < param_2);
  }
  return 0;
}

/* ref: FUN_009db150 */
GEN_FRAME uint GEN_THISCALL F_009db150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9db150u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_009db180 */
GEN_FRAME uint GEN_THISCALL F_009db180(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x9db180u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] * fVar1);
  in_ecx[2] = (float)(fVar1 * (float10)in_ecx[2]);
  in_ecx[3] = (float)(fVar1 * (float10)in_ecx[3]);
  return (uint)in_ecx;
}

/* ref: FUN_009db1b0 */
GEN_FRAME uint GEN_THISCALL F_009db1b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x9db1b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx / fVar1);
  in_ecx[1] = (float)((float10)in_ecx[1] / fVar1);
  in_ecx[2] = (float)((float10)in_ecx[2] / fVar1);
  in_ecx[3] = (float)((float10)in_ecx[3] / fVar1);
  return (uint)in_ecx;
}

/* ref: FUN_009db1e0 */
GEN_FRAME uint GEN_THISCALL F_009db1e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9db1e0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] * (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] * (float10)in_ecx[2]);
  in_ecx[3] = (float)((float10)param_2[3] * (float10)in_ecx[3]);
  return (uint)in_ecx;
}

/* ref: FUN_009db210 */
GEN_FRAME uint GEN_THISCALL F_009db210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9db210u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_2 = (float)(fVar1 * (float10)*in_ecx);
  param_2[1] = (float)((float10)in_ecx[1] * fVar1);
  param_2[2] = (float)((float10)in_ecx[2] * fVar1);
  param_2[3] = (float)(fVar1 * (float10)in_ecx[3]);
  return (uint)param_2;
}

/* ref: FUN_009db240 */
GEN_FRAME uint GEN_THISCALL F_009db240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9db240u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_2 = (float)((float10)*in_ecx / fVar1);
  param_2[1] = (float)((float10)in_ecx[1] / fVar1);
  param_2[2] = (float)((float10)in_ecx[2] / fVar1);
  param_2[3] = (float)((float10)in_ecx[3] / fVar1);
  return (uint)param_2;
}

/* ref: FUN_009db270 */
GEN_FRAME uint GEN_THISCALL F_009db270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 + (float10)*(float *)this);
  param_1[1] = ((float)GEN_TOF(((float10)param_2[1] + (float10)*(float *)((int)this + 4))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] + (float10)*(float *)((int)this + 8))));
  param_1[3] = ((float)GEN_TOF(((float10)param_2[3] + (float10)*(float *)((int)this + 0xc))));
  return (uint)param_1;
}

/* ref: FUN_009db2a0 */
GEN_FRAME uint GEN_THISCALL F_009db2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db2a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*(float *)this - (float10)*param_2);
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)((int)this + 4) - (float10)param_2[1])));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)((int)this + 8) - (float10)param_2[2])));
  param_1[3] = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xc) - (float10)param_2[3])));
  return (uint)param_1;
}

/* ref: FUN_009db2d0 */
GEN_FRAME uint GEN_THISCALL F_009db2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db2d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 * (float10)*(float *)this);
  param_1[1] = ((float)GEN_TOF(((float10)param_2[1] * (float10)*(float *)((int)this + 4))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] * (float10)*(float *)((int)this + 8))));
  param_1[3] = ((float)GEN_TOF(((float10)param_2[3] * (float10)*(float *)((int)this + 0xc))));
  return (uint)param_1;
}

/* ref: FUN_009db320 */
GEN_FRAME uint GEN_THISCALL F_009db320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9db320u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 uVar1;
  
  *param_2 = *in_ecx;
  uVar1 = in_ecx[1];
  param_2[3] = (undefined4)gen_fl2bits(param_3);
  param_2[1] = uVar1;
  param_2[2] = in_ecx[2];
  return (uint)param_2;
}

/* ref: FUN_009db350 */
GEN_FRAME uint GEN_THISCALL F_009db350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9db350u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_009db370 */
GEN_FRAME uint GEN_THISCALL F_009db370(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x9db370u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] * fVar1);
  in_ecx[2] = (float)(fVar1 * (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_009db3a0 */
GEN_FRAME uint GEN_THISCALL F_009db3a0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x9db3a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx / fVar1);
  in_ecx[1] = (float)((float10)in_ecx[1] / fVar1);
  in_ecx[2] = (float)((float10)in_ecx[2] / fVar1);
  return (uint)in_ecx;
}

/* ref: FUN_009db3d0 */
GEN_FRAME uint GEN_THISCALL F_009db3d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9db3d0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] + (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] + (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_009db400 */
GEN_FRAME uint GEN_THISCALL F_009db400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9db400u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] * (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] * (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_009db430 */
GEN_FRAME uint GEN_THISCALL F_009db430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9db430u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_2 = (float)(fVar1 * (float10)*in_ecx);
  param_2[1] = (float)((float10)in_ecx[1] * fVar1);
  param_2[2] = (float)(fVar1 * (float10)in_ecx[2]);
  return (uint)param_2;
}

/* ref: FUN_009db460 */
GEN_FRAME uint GEN_THISCALL F_009db460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9db460u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_2 = (float)((float10)*in_ecx / fVar1);
  param_2[1] = (float)((float10)in_ecx[1] / fVar1);
  param_2[2] = (float)((float10)in_ecx[2] / fVar1);
  return (uint)param_2;
}

/* ref: FUN_009db490 */
GEN_FRAME uint GEN_THISCALL F_009db490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 + (float10)*(float *)this);
  param_1[1] = ((float)GEN_TOF(((float10)param_2[1] + (float10)*(float *)((int)this + 4))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] + (float10)*(float *)((int)this + 8))));
  return (uint)param_1;
}

/* ref: FUN_009db4c0 */
GEN_FRAME uint GEN_THISCALL F_009db4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*(float *)this - (float10)*param_2);
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)((int)this + 4) - (float10)param_2[1])));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)((int)this + 8) - (float10)param_2[2])));
  return (uint)param_1;
}

/* ref: FUN_009db4f0 */
GEN_FRAME uint GEN_THISCALL F_009db4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 * (float10)*(float *)this);
  param_1[1] = ((float)GEN_TOF(((float10)param_2[1] * (float10)*(float *)((int)this + 4))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] * (float10)*(float *)((int)this + 8))));
  return (uint)param_1;
}

/* ref: FUN_009db520 */
GEN_FRAME uint GEN_THISCALL F_009db520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*(float *)((int)(uintptr_t)this) / (float10)*param_2);
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)((int)this + 4) / (float10)param_2[1])));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)((int)this + 8) / (float10)param_2[2])));
  return (uint)param_1;
}

/* ref: FUN_009db550 */
GEN_FRAME unsigned int GEN_THISCALL F_009db550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9db550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[4];
  in_ecx[4] = param_2[5];
  in_ecx[5] = param_2[6];
  in_ecx[6] = param_2[8];
  in_ecx[7] = param_2[9];
  in_ecx[8] = param_2[10];
  in_ecx[9] = param_2[0xc];
  in_ecx[10] = param_2[0xd];
  in_ecx[0xb] = param_2[0xe];
  return 0;
}

/* ref: FUN_009db5b0 */
GEN_FRAME unsigned int GEN_THISCALL F_009db5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9db5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  return 0;
}

/* ref: FUN_009db630 */
GEN_FRAME unsigned int GEN_THISCALL F_009db630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9db630u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  in_ecx[0xe] = param_2[0xe];
  in_ecx[0xf] = param_2[0xf];
  return 0;
}

/* ref: FUN_009db6a0 */
GEN_FRAME unsigned int GEN_THISCALL F_009db6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9db6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  in_ecx[0xe] = param_2[0xe];
  in_ecx[0xf] = param_2[0xf];
  return 0;
}

/* ref: FUN_009db720 */
GEN_FRAME uint GEN_THISCALL F_009db720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_009db740 */
GEN_FRAME uint GEN_THISCALL F_009db740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9db740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((*(int *)this == *param_1) && (*(int *)((int)this + 4) == param_1[1])) {
    return 0;
  }
  return 1;
}

/* ref: FUN_009db770 */
GEN_FRAME uint GEN_THISCALL F_009db770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9db770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_009db790 */
GEN_FRAME uint GEN_THISCALL F_009db790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9db790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_009db7b0 */
GEN_FRAME uint GEN_THISCALL F_009db7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x9db7b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  undefined4 param_10 = (undefined4)gen_a10;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = param_7;
  *(undefined4 *)((int)this + 0x1c) = param_8;
  *(undefined4 *)((int)this + 0x20) = param_9;
  *(undefined4 *)((int)this + 0x24) = param_10;
  return (uint)this;
}

/* ref: FUN_009db810 */
GEN_FRAME uint GEN_THISCALL F_009db810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9db810u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0xc + param_2 * 4);
}

/* ref: FUN_009db820 */
GEN_FRAME uint F_009db820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db820u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    piVar1 = (int *)F_00404230();
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,param_1,param_2);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_009db850 */
GEN_FRAME uint F_009db850(unsigned int gen_a0)
{
  GEN_ENTER(0x9db850u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_009db890 */
GEN_FRAME uint F_009db890(unsigned int gen_a0)
{
  GEN_ENTER(0x9db890u, gen_a0, 0u, 0u, 0u);
  uint uVar1;
  
  if ((REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) && ((*(int *)&gen_a0) != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))((*(int *)&gen_a0),4,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009db8c0 */
GEN_FRAME unsigned int F_009db8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9db8c0u, gen_a0, 0u, 0u, 0u);
  if ((REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0) && ((*(int *)&gen_a0) != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))((*(int *)&gen_a0));
  }
  return;
}

/* ref: Apricot::ApricotMemoryObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_009db8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9db8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::IVertexBuffer::vf0 */
GEN_FRAME uint GEN_THISCALL F_009db930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9db930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::IIndexBuffer::vf0 */
GEN_FRAME uint GEN_THISCALL F_009db970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9db970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::ITexture::vf0 */
GEN_FRAME uint GEN_THISCALL F_009db9b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9db9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::IScreenCopyTexture::vf0 */
GEN_FRAME uint GEN_THISCALL F_009db9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9db9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::IVertexShader::vf0 */
GEN_FRAME uint GEN_THISCALL F_009dba30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dba30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::IPixelShader::vf0 */
GEN_FRAME uint GEN_THISCALL F_009dba70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dba70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dbaa0 */
GEN_FRAME byte F_009dbaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbaa0u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  byte * pbVar3;
  byte * pbVar4;
  
  uVar1 = 0x10;
  pbVar3 = param_2;
  pbVar4 = param_1;
  do {
    if (*(int *)pbVar4 != *(int *)pbVar3) {
      iVar2 = (uint)*pbVar4 - (uint)*pbVar3;
      if (((iVar2 == 0) && (iVar2 = (uint)pbVar4[1] - (uint)pbVar3[1], iVar2 == 0)) &&
         (iVar2 = (uint)pbVar4[2] - (uint)pbVar3[2], iVar2 == 0)) {
        iVar2 = (uint)pbVar4[3] - (uint)pbVar3[3];
      }
      return (int)(iVar2 >> 0x1f | 1U) < 0;
    }
    uVar1 = uVar1 - 4;
    pbVar3 = pbVar3 + 4;
    pbVar4 = pbVar4 + 4;
  } while (3 < uVar1);
  return 0;
}

/* ref: FUN_009dbb30 */
GEN_FRAME uint GEN_THISCALL F_009dbb30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbb30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dbb90 */
GEN_FRAME float10 GEN_STDCALL F_009dbb90(float gen_a0, float gen_a1)
{
  GEN_ENTER(0x9dbb90u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c4f2dd();
  return (float10)((float)GEN_TOF((((float10)param_2 - (float10)param_1) *
                          (float10)(float)((float10)(int)uVar1 / (float10)*(double *)&REFG(undefined, 0x10920e0))
                         + (float10)param_1)));
}

/* ref: FUN_009dbbd0 */
GEN_FRAME uint GEN_THISCALL F_009dbbd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((*(int *)this == *param_1) && (*(int *)((int)this + 4) == param_1[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dbcd0 */
GEN_FRAME uint GEN_THISCALL F_009dbcd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbcd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = param_2[1];
  *(undefined4 *)(in_ecx + 0x18) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_009dbcf0 */
GEN_FRAME uint GEN_THISCALL F_009dbcf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbcf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x20) = *param_2;
  *(undefined4 *)(in_ecx + 0x24) = param_2[1];
  *(undefined4 *)(in_ecx + 0x28) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_009dbd50 */
GEN_FRAME uint GEN_THISCALL F_009dbd50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbd50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dbda0 */
GEN_FRAME uint GEN_THISCALL F_009dbda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dbdc0 */
GEN_FRAME uint GEN_THISCALL F_009dbdc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbdc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dbde0 */
GEN_FRAME uint GEN_THISCALL F_009dbde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de728));
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  if (param_1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  }
  return (uint)this;
}

/* ref: FUN_009dbe10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_009dbe10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9dbe10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de728));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return;
}

/* ref: FUN_009dbe40 */
GEN_FRAME uint GEN_THISCALL F_009dbe40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbe40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de730));
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  if (param_1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  }
  return (uint)this;
}

/* ref: FUN_009dbe70 */
GEN_NOFRAME unsigned int GEN_THISCALL F_009dbe70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9dbe70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de730));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return;
}

/* ref: FUN_009dbea0 */
GEN_FRAME uint GEN_THISCALL F_009dbea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de738));
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  if (param_1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  }
  return (uint)this;
}

/* ref: FUN_009dbed0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_009dbed0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9dbed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de738));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return;
}

/* ref: FUN_009dbf00 */
GEN_FRAME uint GEN_THISCALL F_009dbf00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbf00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  if (param_1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  }
  return (uint)this;
}

/* ref: FUN_009dbf30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_009dbf30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9dbf30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return;
}

/* ref: FUN_009dbf60 */
GEN_FRAME uint GEN_THISCALL F_009dbf60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de754));
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  if (param_1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  }
  return (uint)this;
}

/* ref: FUN_009dbf90 */
GEN_NOFRAME unsigned int GEN_THISCALL F_009dbf90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9dbf90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de754));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return;
}

/* ref: FUN_009dbfc0 */
GEN_FRAME uint GEN_THISCALL F_009dbfc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de75c));
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  if (param_1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  }
  return (uint)this;
}

/* ref: FUN_009dbff0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_009dbff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9dbff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de75c));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return;
}

/* ref: FUN_009dc090 */
GEN_FRAME uint GEN_THISCALL F_009dc090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: InterfaceHolder_VInputLayout_Kernel_Graphics_Client_Apricot::vf0 */
GEN_FRAME uint GEN_THISCALL F_009dc0b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de728));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: InterfaceHolder_VVertexBuffer_Kernel_Graphics_Client_Apricot::vf0 */
GEN_FRAME uint GEN_THISCALL F_009dc100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de730));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: InterfaceHolder_VIndexBuffer_Kernel_Graphics_Client_Apricot::vf0 */
GEN_FRAME uint GEN_THISCALL F_009dc150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de738));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: InterfaceHolder_VTexture_Kernel_Graphics_Client_Apricot::vf0 */
GEN_FRAME uint GEN_THISCALL F_009dc1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: InterfaceHolder_VVertexShader_Kernel_Graphics_Client_Apricot::vf0 */
GEN_FRAME uint GEN_THISCALL F_009dc1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de754));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: InterfaceHolder_VPixelShader_Kernel_Graphics_Client_Apricot::vf0 */
GEN_FRAME uint GEN_THISCALL F_009dc240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de75c));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Singleton_VUITargetLinkLineManager_Vfx_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_009dc290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10de764));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Singleton_VChannelingLineManager_Vfx_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_009dc2c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10de76c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Singleton_VTargetRingManager_Vfx_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_009dc2f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10de774));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dc390 */
GEN_FRAME uint GEN_THISCALL F_009dc390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc390u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc430 */
GEN_FRAME uint GEN_THISCALL F_009dc430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc430u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x14;
}

/* ref: FUN_009dc4c0 */
GEN_FRAME uint GEN_THISCALL F_009dc4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc4c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc4f0 */
GEN_FRAME uint GEN_THISCALL F_009dc4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc4f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_009dc510 */
GEN_FRAME uint GEN_THISCALL F_009dc510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc510u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc530 */
GEN_FRAME uint GEN_THISCALL F_009dc530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc530u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc550 */
GEN_FRAME uint GEN_THISCALL F_009dc550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc550u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc570 */
GEN_FRAME uint GEN_THISCALL F_009dc570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc570u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc590 */
GEN_FRAME uint GEN_THISCALL F_009dc590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc590u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc5d0 */
GEN_FRAME uint GEN_THISCALL F_009dc5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc5d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc5f0 */
GEN_FRAME uint GEN_THISCALL F_009dc5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc5f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc610 */
GEN_FRAME uint GEN_THISCALL F_009dc610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc610u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc640 */
GEN_FRAME uint GEN_STDCALL F_009dc640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc640u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_009dc680 */
GEN_FRAME uint GEN_THISCALL F_009dc680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc680u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_009dc6a0 */
GEN_FRAME byte GEN_STDCALL F_009dc6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_009dbaa0(param_1,param_2);
  return bVar1;
}

/* ref: FUN_009dc6c0 */
GEN_FRAME uint GEN_THISCALL F_009dc6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc6c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc720 */
GEN_FRAME uint F_009dc720(unsigned int gen_a0)
{
  GEN_ENTER(0x9dc720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_009dc760 */
GEN_FRAME uint F_009dc760(unsigned int gen_a0)
{
  GEN_ENTER(0x9dc760u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_009dc790 */
GEN_FRAME uint GEN_THISCALL F_009dc790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc790u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc7c0 */
GEN_FRAME uint GEN_THISCALL F_009dc7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc7c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc7f0 */
GEN_FRAME uint GEN_THISCALL F_009dc7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc7f0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc820 */
GEN_FRAME uint GEN_THISCALL F_009dc820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc820u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc850 */
GEN_FRAME uint GEN_THISCALL F_009dc850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc850u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc880 */
GEN_FRAME uint GEN_THISCALL F_009dc880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc880u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc8b0 */
GEN_FRAME uint GEN_THISCALL F_009dc8b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc8b0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc8d0 */
GEN_FRAME uint F_009dc8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dc8d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x28;
}

/* ref: FUN_009dc8e0 */
GEN_FRAME uint F_009dc8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dc8e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x29;
}

/* ref: FUN_009dc8f0 */
GEN_FRAME uint F_009dc8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dc8f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009dc900 */
GEN_FRAME uint F_009dc900(unsigned int gen_a0)
{
  GEN_ENTER(0x9dc900u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_009dc910 */
GEN_FRAME uint F_009dc910(unsigned int gen_a0)
{
  GEN_ENTER(0x9dc910u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_009dc920 */
GEN_FRAME uint F_009dc920(unsigned int gen_a0)
{
  GEN_ENTER(0x9dc920u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x29)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x29);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_009dc950 */
GEN_FRAME uint F_009dc950(unsigned int gen_a0)
{
  GEN_ENTER(0x9dc950u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x29);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x29);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_009dc970 */
GEN_FRAME uint GEN_STDCALL F_009dc970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc970u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (param_1 * 0x2c != 0) {
    piVar1 = (int *)F_00404230();
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,param_1 * 0x2c,4);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_009dc9a0 */
GEN_FRAME uint GEN_THISCALL F_009dc9a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc9a0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc9d0 */
GEN_FRAME uint GEN_THISCALL F_009dc9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc9d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dca00 */
GEN_FRAME uint GEN_THISCALL F_009dca00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dca00u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dca30 */
GEN_FRAME byte GEN_THISCALL F_009dca30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dca30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009dca50 */
GEN_FRAME byte GEN_THISCALL F_009dca50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dca50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_009dca70 */
GEN_FRAME uint GEN_THISCALL F_009dca70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dca70u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dcba0 */
GEN_FRAME uint F_009dcba0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dcba0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_009dcbd0 */
GEN_FRAME uint GEN_THISCALL F_009dcbd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dcbd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dcbe0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_009dcbe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9dcbe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x29) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x29) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x29);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x29);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x29);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x29);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_009dcc30 */
GEN_FRAME byte GEN_THISCALL F_009dcc30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dcc30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009dcc50 */
GEN_FRAME byte GEN_THISCALL F_009dcc50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dcc50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009dcc90 */
GEN_FRAME uint GEN_THISCALL F_009dcc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dcc90u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dccd0 */
GEN_FRAME uint GEN_STDCALL F_009dccd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dccd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0xca);
  return uVar1;
}

/* ref: FUN_009dcd00 */
GEN_FRAME uint GEN_STDCALL F_009dcd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dcd00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0xca);
  return (uint)uVar1;
}

/* ref: FUN_009dcd60 */
GEN_FRAME uint GEN_STDCALL F_009dcd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dcd60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd2);
  return (uint)uVar1;
}

/* ref: FUN_009dcd90 */
GEN_FRAME uint F_009dcd90(unsigned int gen_a0)
{
  GEN_ENTER(0x9dcd90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x11;
}

/* ref: FUN_009dcda0 */
GEN_FRAME uint F_009dcda0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dcda0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009dcdb0 */
GEN_FRAME uint F_009dcdb0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dcdb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_009dcdc0 */
GEN_FRAME uint F_009dcdc0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dcdc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_009dcdd0 */
GEN_FRAME uint F_009dcdd0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dcdd0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x11);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x11);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_009dce10 */
GEN_FRAME uint GEN_STDCALL F_009dce10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dce10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0xcf);
  return (uint)uVar1;
}

/* ref: FUN_009dce40 */
GEN_FRAME uint F_009dce40(unsigned int gen_a0)
{
  GEN_ENTER(0x9dce40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x11;
}

/* ref: FUN_009dce50 */
GEN_FRAME uint F_009dce50(unsigned int gen_a0)
{
  GEN_ENTER(0x9dce50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009dce60 */
GEN_FRAME uint F_009dce60(unsigned int gen_a0)
{
  GEN_ENTER(0x9dce60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_009dce70 */
GEN_FRAME uint F_009dce70(unsigned int gen_a0)
{
  GEN_ENTER(0x9dce70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_009dce80 */
GEN_FRAME uint F_009dce80(unsigned int gen_a0)
{
  GEN_ENTER(0x9dce80u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x11);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x11);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_009dcec0 */
GEN_FRAME uint GEN_STDCALL F_009dcec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dcec0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0xd0);
  return (uint)uVar1;
}

/* ref: FUN_009dcf20 */
GEN_FRAME unsigned int GEN_STDCALL F_009dcf20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dcf20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0) && ((*(int *)&gen_a0) != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))((*(int *)&gen_a0));
  }
  return;
}

/* ref: FUN_009dcf80 */
GEN_FRAME unsigned int GEN_STDCALL F_009dcf80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dcf80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0) && ((*(int *)&gen_a0) != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))((*(int *)&gen_a0));
  }
  return;
}

/* ref: FUN_009dcff0 */
GEN_FRAME unsigned int GEN_STDCALL F_009dcff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dcff0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0) && ((*(int *)&gen_a0) != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))((*(int *)&gen_a0));
  }
  return;
}

/* ref: FUN_009dd060 */
GEN_FRAME unsigned int GEN_STDCALL F_009dd060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd060u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0) && ((*(int *)&gen_a0) != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))((*(int *)&gen_a0));
  }
  return;
}

/* ref: FUN_009dd0a0 */
GEN_FRAME unsigned int GEN_STDCALL F_009dd0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0) && ((*(int *)&gen_a0) != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))((*(int *)&gen_a0));
  }
  return;
}

/* ref: FUN_009dd0e0 */
GEN_FRAME unsigned int GEN_STDCALL F_009dd0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0) && ((*(int *)&gen_a0) != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))((*(int *)&gen_a0));
  }
  return;
}

/* ref: FUN_009dd120 */
GEN_FRAME unsigned int GEN_STDCALL F_009dd120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd120u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0) && ((*(int *)&gen_a0) != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))((*(int *)&gen_a0));
  }
  return;
}

/* ref: FUN_009dd140 */
GEN_FRAME uint F_009dd140(unsigned int gen_a0)
{
  GEN_ENTER(0x9dd140u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009dd1b0 */
GEN_FRAME unsigned int GEN_STDCALL F_009dd1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0) && ((*(int *)&gen_a0) != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))((*(int *)&gen_a0));
  }
  return;
}

/* ref: FUN_009dd1e0 */
GEN_NOFRAME uint GEN_THISCALL F_009dd1e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x9dd1e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = (int *)F_00404230();
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,0x2c,4)));
  *puVar2 = *(undefined4 *)((int)this + 4);
  puVar2[1] = *(undefined4 *)((int)this + 4);
  puVar2[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar2 + 10) = 0;
  return (uint)puVar2;
}

/* ref: FUN_009dd250 */
GEN_FRAME unsigned int GEN_STDCALL F_009dd250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0) && ((*(int *)&gen_a0) != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))((*(int *)&gen_a0));
  }
  return;
}

/* ref: FUN_009dd2d0 */
GEN_FRAME unsigned int GEN_STDCALL F_009dd2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0) && ((*(int *)&gen_a0) != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))((*(int *)&gen_a0));
  }
  return;
}

/* ref: FUN_009dd340 */
GEN_FRAME unsigned int GEN_STDCALL F_009dd340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0) && ((*(int *)&gen_a0) != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))((*(int *)&gen_a0));
  }
  return;
}

/* ref: FUN_009dd3b0 */
GEN_FRAME unsigned int GEN_STDCALL F_009dd3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0) && ((*(int *)&gen_a0) != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))((*(int *)&gen_a0));
  }
  return;
}

/* ref: FUN_009dd420 */
GEN_FRAME unsigned int GEN_STDCALL F_009dd420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd420u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0) && ((*(int *)&gen_a0) != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))((*(int *)&gen_a0));
  }
  return;
}

/* ref: FUN_009dd490 */
GEN_FRAME unsigned int GEN_STDCALL F_009dd490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd490u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0) && ((*(int *)&gen_a0) != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))((*(int *)&gen_a0));
  }
  return;
}

/* ref: FUN_009dd500 */
GEN_FRAME unsigned int GEN_STDCALL F_009dd500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd500u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0) && ((*(int *)&gen_a0) != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))((*(int *)&gen_a0));
  }
  return;
}

/* ref: FUN_009dd520 */
GEN_FRAME uint GEN_THISCALL F_009dd520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dd520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dd540 */
GEN_FRAME uint GEN_THISCALL F_009dd540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dd540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dd560 */
GEN_FRAME uint GEN_THISCALL F_009dd560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dd560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dd580 */
GEN_FRAME uint GEN_THISCALL F_009dd580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dd580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dd5a0 */
GEN_FRAME uint GEN_THISCALL F_009dd5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dd5a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dd5c0 */
GEN_FRAME uint GEN_THISCALL F_009dd5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dd5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dd5e0 */
GEN_FRAME uint GEN_THISCALL F_009dd5e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dd5e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dd600 */
GEN_FRAME uint GEN_THISCALL F_009dd600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dd600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dd620 */
GEN_FRAME uint GEN_THISCALL F_009dd620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  return (uint)this;
}

/* ref: FUN_009dd660 */
GEN_FRAME uint GEN_THISCALL F_009dd660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dd660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dd670 */
GEN_FRAME uint GEN_THISCALL F_009dd670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dd670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dd6c0 */
GEN_FRAME uint GEN_STDCALL F_009dd6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd6c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd2);
  return uVar1;
}

/* ref: FUN_009dd720 */
GEN_FRAME uint GEN_THISCALL F_009dd720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x11))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_009dd780 */
GEN_FRAME uint F_009dd780(unsigned int gen_a0)
{
  GEN_ENTER(0x9dd780u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_009dd790 */
GEN_FRAME uint F_009dd790(unsigned int gen_a0)
{
  GEN_ENTER(0x9dd790u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x11)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x11);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_009dd7b0 */
GEN_FRAME uint GEN_STDCALL F_009dd7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd7b0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_009dd7d0 */
GEN_FRAME uint GEN_STDCALL F_009dd7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd7d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,0xcf);
  return uVar1;
}

/* ref: FUN_009dd820 */
GEN_FRAME uint GEN_THISCALL F_009dd820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x11))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_009dd880 */
GEN_FRAME uint F_009dd880(unsigned int gen_a0)
{
  GEN_ENTER(0x9dd880u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_009dd890 */
GEN_FRAME uint F_009dd890(unsigned int gen_a0)
{
  GEN_ENTER(0x9dd890u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x11)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x11);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_009dd8b0 */
GEN_FRAME uint GEN_STDCALL F_009dd8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd8b0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_009dd8d0 */
GEN_FRAME uint GEN_STDCALL F_009dd8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd8d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,0xd0);
  return uVar1;
}

/* ref: FUN_009dd910 */
GEN_FRAME uint GEN_STDCALL F_009dd910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd910u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) && ((*(int *)&gen_a0) * 0x14 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))((*(int *)&gen_a0) * 0x14,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009dd960 */
GEN_FRAME uint GEN_STDCALL F_009dd960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd960u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) && ((*(int *)&gen_a0) * 4 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))((*(int *)&gen_a0) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009dd9c0 */
GEN_FRAME uint GEN_STDCALL F_009dd9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) && ((*(int *)&gen_a0) * 0xa4 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))((*(int *)&gen_a0) * 0xa4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009dda20 */
GEN_FRAME uint GEN_STDCALL F_009dda20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dda20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) && ((*(int *)&gen_a0) * 0x2a != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))((*(int *)&gen_a0) * 0x2a,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009ddaa0 */
GEN_FRAME uint GEN_STDCALL F_009ddaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ddaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) && ((*(int *)&gen_a0) * 4 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))((*(int *)&gen_a0) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009ddaf0 */
GEN_FRAME uint GEN_STDCALL F_009ddaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ddaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) && ((*(int *)&gen_a0) * 4 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))((*(int *)&gen_a0) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009ddb40 */
GEN_FRAME uint GEN_STDCALL F_009ddb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ddb40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) && ((*(int *)&gen_a0) * 4 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))((*(int *)&gen_a0) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009ddb90 */
GEN_FRAME uint GEN_STDCALL F_009ddb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ddb90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) && ((*(int *)&gen_a0) * 4 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))((*(int *)&gen_a0) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009ddbe0 */
GEN_FRAME uint GEN_STDCALL F_009ddbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ddbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) && ((*(int *)&gen_a0) * 4 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))((*(int *)&gen_a0) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009ddc30 */
GEN_FRAME uint GEN_STDCALL F_009ddc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ddc30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) && ((*(int *)&gen_a0) * 4 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))((*(int *)&gen_a0) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009ddc80 */
GEN_FRAME uint GEN_STDCALL F_009ddc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ddc80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) && ((*(int *)&gen_a0) * 4 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))((*(int *)&gen_a0) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009ddcd0 */
GEN_FRAME uint GEN_STDCALL F_009ddcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ddcd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) && ((*(int *)&gen_a0) * 4 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))((*(int *)&gen_a0) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009ddd50 */
GEN_FRAME uint GEN_THISCALL F_009ddd50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ddd50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009ddd60 */
GEN_FRAME uint GEN_THISCALL F_009ddd60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ddd60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009ddd70 */
GEN_FRAME uint GEN_THISCALL F_009ddd70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ddd70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009ddd80 */
GEN_FRAME uint GEN_THISCALL F_009ddd80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ddd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009ddd90 */
GEN_FRAME uint GEN_THISCALL F_009ddd90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ddd90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009ddda0 */
GEN_FRAME uint GEN_THISCALL F_009ddda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ddda0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dddc0 */
GEN_FRAME uint F_009dddc0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dddc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009ddde0 */
GEN_FRAME uint F_009ddde0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ddde0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009dde40 */
GEN_FRAME uint GEN_THISCALL F_009dde40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9dde40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0xc;
  return (uint)in_ecx;
}

/* ref: FUN_009dde60 */
GEN_FRAME uint F_009dde60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dde60u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  return (*param_3 ^ *param_2) & *param_1 >> 0x1f ^ *param_2;
}

/* ref: FUN_009dde80 */
GEN_FRAME float10 F_009dde80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dde80u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  return ((float10)GEN_TOD(gen_bits2f((*param_3 ^ *(uint *)param_2) & *param_1 >> 0x1f ^ *(uint *)param_2)));
}

/* ref: FUN_009ddeb0 */
GEN_FRAME uint F_009ddeb0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ddeb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009ddec0 */
GEN_FRAME uint F_009ddec0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ddec0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009dded0 */
GEN_FRAME uint F_009dded0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dded0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009ddee0 */
GEN_FRAME uint F_009ddee0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ddee0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009ddef0 */
GEN_FRAME uint F_009ddef0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ddef0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009ddf00 */
GEN_FRAME uint F_009ddf00(unsigned int gen_a0)
{
  GEN_ENTER(0x9ddf00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009ddf10 */
GEN_FRAME uint F_009ddf10(unsigned int gen_a0)
{
  GEN_ENTER(0x9ddf10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009ddf20 */
GEN_FRAME uint F_009ddf20(unsigned int gen_a0)
{
  GEN_ENTER(0x9ddf20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009ddf30 */
GEN_FRAME uint F_009ddf30(unsigned int gen_a0)
{
  GEN_ENTER(0x9ddf30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009ddf40 */
GEN_FRAME uint F_009ddf40(unsigned int gen_a0)
{
  GEN_ENTER(0x9ddf40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

