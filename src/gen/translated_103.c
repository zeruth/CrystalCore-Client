#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Palette::vf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0b60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e0b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[2] = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x10dd760));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::LaserParticle::vf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e0b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)(this + 0x28) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)(this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)(this + 0x1c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10dd534));
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Runtime::LineParticle::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0bb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 4)));
}

/* ref: Apricot::Engine::Data::Runtime::LineParticle::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0bc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::LineParticle::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0bd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x20;
}

/* ref: Apricot::Engine::Data::Runtime::LineParticle::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0be0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x8c;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0bf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc))) >> 8 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0c00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc))) >> 9 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0c10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc))) >> 0xb & 3;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0c20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)((*((uint *)GEN_TOP((in_ecx + 0xc))) & 0x6000) != 0);
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0c30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc))) >> 0xf & 1;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0c40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x10;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0c50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x28;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0c60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x60;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0c70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0xcc;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0c80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x138;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf11 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0c90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x140;
}

/* ref: Apricot::Engine::Data::Runtime::LightModelParticle::vf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0ca0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e0ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10dd5e8));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::PolygonParticle::vf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0cb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e0cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[4] = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  in_ecx[2] = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  in_ecx[1] = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10dd528));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0cd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 4))) & 0xf;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0ce0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)(*((byte *)GEN_TOP((in_ecx + 4))) >> 4);
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0cf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 5)));
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0d00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 6)));
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0d10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 7)));
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0d20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 8))) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0d30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 8))) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0d40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 8))) >> 2 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0d50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 8))) >> 3 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0d60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 8))) >> 4 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf11 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0d70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0xc;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf12 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0d80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x24;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf13 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0d90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x3c;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf14 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0da0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x54;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf15 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0db0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x6c;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf16 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0dc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x84;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0dd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0xb4;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf18 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0de0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x9c;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf19 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0df0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0xbc;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0e00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x128;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf21 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0e10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x194;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf22 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0e20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x200;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf23 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0e30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x26c;
}

/* ref: Apricot::Engine::Data::Runtime::PolyLineParticle::vf24 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0e40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x2d8;
}

/* ref: Apricot::Engine::Data::Runtime::PowderParticle::vf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0e50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e0e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x10dd500));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::WindmillParticle::vf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0e60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e0e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10dd514));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::QuadParticle::vf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0e70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e0e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10dd520));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::DecalParticle::vf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0e80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e0e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10dd5f4));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::DecalRingParticle::vf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0e90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e0e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[4] = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  in_ecx[2] = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  in_ecx[1] = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x10dd600));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0eb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((in_ecx + 4)));
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0ec0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((in_ecx + 5)));
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0ed0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((in_ecx + 6)));
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf4 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009e0ee0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 8)));
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0ef0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0xc;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0f00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x24;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0f10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x3c;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0f20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x54;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0f30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x6c;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0f40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x84;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf11 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0f50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x9c;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf12 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0f60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0xb4;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf13 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0f70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0xcc;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf14 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0f80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0f80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0xe4;
}

/* ref: Apricot::Engine::Data::Runtime::DiscParticle::vf15 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e0f90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e0f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x150;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e0fa0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e0fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *param_1 = (*(undefined * PTR32 (*)[31])REFP(0x10dde84));
  puVar2 = ((undefined4 *)GEN_TOP(param_1[0x78]));
  while (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(puVar2[0x7a]));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD,1);
    puVar2 = puVar1;
  }
  if ((param_2 & 1) != 0) {
    uVar3 = (uint)((int)param_1 - REFG(int, 0x14a09f4)) >> 10;
    *((uint *)GEN_TOP((uVar3 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar3;
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::ParametricInstance::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e1030(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  F_0097ee40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    uVar1 = (uint)((int)param_1 - REFG(int, 0x14a09f4)) >> 10;
    *((uint *)GEN_TOP((uVar1 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::ParticleInstance::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e1080(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    uVar1 = (uint)((int)param_1 - REFG(int, 0x14a09f4)) >> 10;
    *((uint *)GEN_TOP((uVar1 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::BinderInstance::vf8 */
GEN_OWN GEN_NOFRAME uint F_009e10d0(void)
{
  GEN_ENTER(0x9e10d0u, 0u, 0u, 0u, 0u);
  return 9;
}

/* ref: Apricot::Engine::Instance::CameraBinderInstance::vf5 */
GEN_OWN GEN_NOFRAME uint F_009e10e0(void)
{
  GEN_ENTER(0x9e10e0u, 0u, 0u, 0u, 0u);
  return 0x132f428;
}

/* ref: Apricot::Engine::Instance::CameraBinderInstance::vf6 */
GEN_OWN GEN_NOFRAME uint F_009e10f0(void)
{
  GEN_ENTER(0x9e10f0u, 0u, 0u, 0u, 0u);
  return 0x132f3f8;
}

/* ref: Apricot::Engine::Instance::CameraBinderInstance::vf7 */
GEN_OWN GEN_NOFRAME uint F_009e1100(void)
{
  GEN_ENTER(0x9e1100u, 0u, 0u, 0u, 0u);
  return 0x14a0a2c;
}

/* ref: Apricot::Engine::Instance::LinearBinderInstance::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1110(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x270;
}

/* ref: Apricot::Engine::Instance::LinearBinderInstance::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1120(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x2a0;
}

/* ref: Apricot::Engine::Instance::LinearBinderInstance::vf7 */
GEN_OWN GEN_NOFRAME uint F_009e1130(void)
{
  GEN_ENTER(0x9e1130u, 0u, 0u, 0u, 0u);
  return 0x14a0a2c;
}

/* ref: Apricot::Engine::Instance::PointBinderInstance::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1140(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x240;
}

/* ref: Apricot::Engine::Instance::PointBinderInstance::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x270;
}

/* ref: Apricot::Engine::Instance::PointBinderInstance::vf7 */
GEN_OWN GEN_NOFRAME uint F_009e1160(void)
{
  GEN_ENTER(0x9e1160u, 0u, 0u, 0u, 0u);
  return 0x14a0a2c;
}

/* ref: Apricot::Engine::Instance::SplineBinderInstance::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1170(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x270;
}

/* ref: Apricot::Engine::Instance::SplineBinderInstance::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1180(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x2a0;
}

/* ref: Apricot::Engine::Instance::SplineBinderInstance::vf7 */
GEN_OWN GEN_NOFRAME uint F_009e1190(void)
{
  GEN_ENTER(0x9e1190u, 0u, 0u, 0u, 0u);
  return 0x14a0a2c;
}

/* ref: Apricot::Engine::Instance::BindPointPropertyInstance::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e11a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e11a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10de010));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::LineParticleInstance::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e11e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e11e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[34])REFP(0x10de01c));
  if (param_1[0xbc] != 0) {
    uVar1 = (uint)(param_1[0xbc] - REFG(int, 0x14a09f4)) >> 10;
    *((uint *)GEN_TOP((uVar1 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    uVar1 = (uint)((int)param_1 - REFG(int, 0x14a09f4)) >> 10;
    *((uint *)GEN_TOP((uVar1 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::ModelParticleInstance::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e1290(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[34])REFP(0x10de0ac));
  if (param_1[0xc0] != 0) {
    uVar1 = (uint)(param_1[0xc0] - REFG(int, 0x14a09f4)) >> 10;
    *((uint *)GEN_TOP((uVar1 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    uVar1 = (uint)((int)param_1 - REFG(int, 0x14a09f4)) >> 10;
    *((uint *)GEN_TOP((uVar1 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::LightModelParticleInstance::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e1320(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[34])REFP(0x10de13c));
  if (param_1[0xbc] != 0) {
    uVar1 = (uint)(param_1[0xbc] - REFG(int, 0x14a09f4)) >> 10;
    *((uint *)GEN_TOP((uVar1 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    uVar1 = (uint)((int)param_1 - REFG(int, 0x14a09f4)) >> 10;
    *((uint *)GEN_TOP((uVar1 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::PolygonParticleInstance::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e13a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e13a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[34])REFP(0x10de1cc));
  if (param_1[0xbd] != 0) {
    uVar1 = (uint)(param_1[0xbd] - REFG(int, 0x14a09f4)) >> 10;
    *((uint *)GEN_TOP((uVar1 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    uVar1 = (uint)((int)param_1 - REFG(int, 0x14a09f4)) >> 10;
    *((uint *)GEN_TOP((uVar1 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::PolyLineParticleInstance::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e1420(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  F_009808e0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    uVar1 = (uint)((int)param_1 - REFG(int, 0x14a09f4)) >> 10;
    *((uint *)GEN_TOP((uVar1 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::QuadParticleInstance::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e1470(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[34])REFP(0x10de2ec));
  if (param_1[0xbc] != 0) {
    uVar1 = (uint)(param_1[0xbc] - REFG(int, 0x14a09f4)) >> 10;
    *((uint *)GEN_TOP((uVar1 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    uVar1 = (uint)((int)param_1 - REFG(int, 0x14a09f4)) >> 10;
    *((uint *)GEN_TOP((uVar1 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::DecalParticleInstance::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e14f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e14f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[34])REFP(0x10de37c));
  if (param_1[0xbc] != 0) {
    uVar1 = (uint)(param_1[0xbc] - REFG(int, 0x14a09f4)) >> 10;
    *((uint *)GEN_TOP((uVar1 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    uVar1 = (uint)((int)param_1 - REFG(int, 0x14a09f4)) >> 10;
    *((uint *)GEN_TOP((uVar1 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::DecalRingParticleInstance::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e1570(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[34])REFP(0x10de40c));
  if (param_1[0xbc] != 0) {
    uVar1 = (uint)(param_1[0xbc] - REFG(int, 0x14a09f4)) >> 10;
    *((uint *)GEN_TOP((uVar1 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    uVar1 = (uint)((int)param_1 - REFG(int, 0x14a09f4)) >> 10;
    *((uint *)GEN_TOP((uVar1 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::DiscParticleInstance::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e15f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e15f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[34])REFP(0x10de49c));
  if (param_1[0xc1] != 0) {
    uVar1 = (uint)(param_1[0xc1] - REFG(int, 0x14a09f4)) >> 10;
    *((uint *)GEN_TOP((uVar1 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    uVar1 = (uint)((int)param_1 - REFG(int, 0x14a09f4)) >> 10;
    *((uint *)GEN_TOP((uVar1 * 0x400 + REFG(int, 0x14a09f4)))) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)param_1;
}

/* ref: Apricot::IVertexLayout::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e16a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e16a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009e16d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e16d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e16d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de600));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de730));
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 1;
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10dee84));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x10dee7c));
  return (uint)this;
}

/* ref: FUN_009e1740 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_009e17c0((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_009e1750 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009e1750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10dee84));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x10dee7c));
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de730));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  return;
}

/* ref: Apricot::VertexBuffer::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pVVar1;
  uint uVar2;
  
  pVVar1 = this + 0xc;
  *(int *)pVVar1 = *(int *)pVVar1 - 1;
  uVar2 = *(uint *)(this + 0xc);
  if (*(int *)pVVar1 == 0) {
    (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(this + 4))))(this + 4,1);
  }
  return uVar2;
}

/* ref: Apricot::VertexBuffer::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e17b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e17b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP((in_ecx + 0xc))) + 1;
  *((uint *)GEN_TOP((in_ecx + 0xc))) = uVar1;
  return uVar1;
}

/* ref: Apricot::VertexBuffer::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e17c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e17c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10dee84));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10dee7c));
  piVar1 = ((int *)GEN_TOP(param_1[2]));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de730));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    param_1[2] = 0;
  }
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if (((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009e1820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e1820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de610));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de738));
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 1;
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10dee9c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x10dee94));
  return (uint)this;
}

/* ref: FUN_009e1890 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_009e1910((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_009e18a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009e18a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e18a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10dee9c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x10dee94));
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de738));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  return;
}

/* ref: Apricot::IndexBuffer::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e18e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e18e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pIVar1;
  uint uVar2;
  
  pIVar1 = this + 0xc;
  *(int *)pIVar1 = *(int *)pIVar1 - 1;
  uVar2 = *(uint *)(this + 0xc);
  if (*(int *)pIVar1 == 0) {
    (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(this + 4))))(this + 4,1);
  }
  return uVar2;
}

/* ref: Apricot::IndexBuffer::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1900(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP((in_ecx + 0xc))) + 1;
  *((uint *)GEN_TOP((in_ecx + 0xc))) = uVar1;
  return uVar1;
}

/* ref: Apricot::IndexBuffer::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e1910(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10dee9c));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10dee94));
  piVar1 = ((int *)GEN_TOP(param_1[2]));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de738));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    param_1[2] = 0;
  }
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if (((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009e1970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e1970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de620));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 1;
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10deeb4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x10deeac));
  return (uint)this;
}

/* ref: FUN_009e19e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e19e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e19e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_009e1a60((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_009e19f0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009e19f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e19f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10deeb4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x10deeac));
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  return;
}

/* ref: Apricot::Texture::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pTVar1;
  uint uVar2;
  
  pTVar1 = this + 0xc;
  *(int *)pTVar1 = *(int *)pTVar1 - 1;
  uVar2 = *(uint *)(this + 0xc);
  if (*(int *)pTVar1 == 0) {
    (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(this + 4))))(this + 4,1);
  }
  return uVar2;
}

/* ref: Apricot::Texture::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1a50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP((in_ecx + 0xc))) + 1;
  *((uint *)GEN_TOP((in_ecx + 0xc))) = uVar1;
  return uVar1;
}

/* ref: Apricot::Texture::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e1a60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10deeb4));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10deeac));
  piVar1 = ((int *)GEN_TOP(param_1[2]));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    param_1[2] = 0;
  }
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if (((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009e1ac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e1ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de630));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 1;
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10deecc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x10deec4));
  return (uint)this;
}

/* ref: FUN_009e1b00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_009e1b80((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_009e1b10 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009e1b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10deecc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x10deec4));
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  return;
}

/* ref: Apricot::ScreenCopyTexture::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pSVar1;
  uint uVar2;
  
  pSVar1 = this + 0xc;
  *(int *)pSVar1 = *(int *)pSVar1 - 1;
  uVar2 = *(uint *)(this + 0xc);
  if (*(int *)pSVar1 == 0) {
    (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(this + 4))))(this + 4,1);
  }
  return uVar2;
}

/* ref: Apricot::ScreenCopyTexture::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1b70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP((in_ecx + 0xc))) + 1;
  *((uint *)GEN_TOP((in_ecx + 0xc))) = uVar1;
  return uVar1;
}

/* ref: Apricot::ScreenCopyTexture::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e1b80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10deecc));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10deec4));
  piVar1 = ((int *)GEN_TOP(param_1[2]));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    param_1[2] = 0;
  }
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if (((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009e1be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e1be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de640));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de754));
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 1;
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10deee4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x10deedc));
  return (uint)this;
}

/* ref: FUN_009e1c50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_009e1cd0((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_009e1c60 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009e1c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10deee4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x10deedc));
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de754));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  return;
}

/* ref: Apricot::VertexShader::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pVVar1;
  uint uVar2;
  
  pVVar1 = this + 0xc;
  *(int *)pVVar1 = *(int *)pVVar1 - 1;
  uVar2 = *(uint *)(this + 0xc);
  if (*(int *)pVVar1 == 0) {
    (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(this + 4))))(this + 4,1);
  }
  return uVar2;
}

/* ref: Apricot::VertexShader::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1cc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP((in_ecx + 0xc))) + 1;
  *((uint *)GEN_TOP((in_ecx + 0xc))) = uVar1;
  return uVar1;
}

/* ref: Apricot::VertexShader::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e1cd0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10deee4));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10deedc));
  piVar1 = ((int *)GEN_TOP(param_1[2]));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de754));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    param_1[2] = 0;
  }
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if (((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009e1d30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e1d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de650));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de75c));
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 1;
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10deefc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x10deef4));
  return (uint)this;
}

/* ref: FUN_009e1da0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_009e1e20((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_009e1db0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009e1db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10deefc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x10deef4));
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de75c));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  return;
}

/* ref: Apricot::PixelShader::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pPVar1;
  uint uVar2;
  
  pPVar1 = this + 0xc;
  *(int *)pPVar1 = *(int *)pPVar1 - 1;
  uVar2 = *(uint *)(this + 0xc);
  if (*(int *)pPVar1 == 0) {
    (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(this + 4))))(this + 4,1);
  }
  return uVar2;
}

/* ref: Apricot::PixelShader::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1e10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP((in_ecx + 0xc))) + 1;
  *((uint *)GEN_TOP((in_ecx + 0xc))) = uVar1;
  return uVar1;
}

/* ref: Apricot::PixelShader::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e1e20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10deefc));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10deef4));
  piVar1 = ((int *)GEN_TOP(param_1[2]));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de75c));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    param_1[2] = 0;
  }
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if (((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009e1e80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  
  F_00621cd0(this GEN_EDX_FWD,((undefined4 *)GEN_TOP(((int)this + 0xa0))));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x90))) = (*(undefined * PTR32 (*)[4])REFP(0x10de540));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10def20));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x90))) = (*(undefined * PTR32 (*)[4])REFP(0x10def0c));
  F_0061e3a0();
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = REFG(undefined4, 0x1302cf0);
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = REFG(undefined4, 0x1302cf4);
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = REFG(undefined4, 0x1302cf8);
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = REFG(undefined4, 0x1302cfc);
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = uVar1;
  return (uint)this;
}

/* ref: FUN_009e1f20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e1f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10def20));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x90))) = (*(undefined * PTR32 (*)[4])REFP(0x10def0c));
  uVar1 = F_00625b80(this GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x90))) = (*(undefined * PTR32 (*)[4])REFP(0x10de540));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return uVar1;
}

/* ref: FUN_009e1f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e1f50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = uVar2;
  return (uint)param_2;
}

/* ref: FUN_009e1f80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e1f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_009e8140((int)this - 0x90 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_009e1f90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e1f90(float gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x9e1f90u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float in_ecx = (float)gen_a0;
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x0)) = in_ecx;
  (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
  pfVar1 = &(*(float *)&gen_args[0]);
  if (!((float10)1 < (float10)(*(float *)&gen_args[0]))) {
    pfVar1 = &(*(float *)(gen_frame + 0x0));
  }
  *((float *)GEN_TOP(((int)gen_fl2bits(in_ecx) + 0x70))) = *pfVar1;
  return (uint)pfVar1;
}

/* ref: FUN_009e1fc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e1fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e1fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  *((float *)GEN_TOP(((int)this - 0x7c))) = (float)((float10)*param_1 * (float10)*param_1);
  *((float *)GEN_TOP(((int)this - 0x78))) = (float)((float10)fVar1 * (float10)fVar1);
  fVar1 = (float)((float10)fVar2 * (float10)fVar2);
  *((float *)GEN_TOP(((int)this - 0x74))) = fVar1;
  *((undefined4 *)GEN_TOP(((int)this - 0x70))) = uVar3;
  return (uint)gen_fl2bits(fVar1);
}

/* ref: FUN_009e2020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2020(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x9e2020u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x4)) = param_2;
  (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
  pfVar1 = &(*(float *)(gen_frame + 0x4));
  if (!((float10)1 < (float10)param_2)) {
    pfVar1 = &(*(float *)(gen_frame + 0x0));
  }
  *((float *)GEN_TOP((in_ecx - 0x20))) = *pfVar1;
  return (uint)pfVar1;
}

/* ref: FUN_009e2060 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e2060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e2060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10de764));
  F_004d6630(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10def5c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x10def44));
  return (uint)this;
}

/* ref: FUN_009e2090 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e2090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_009e20c0((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_009e20a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009e20a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e20a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10def5c));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x10def44));
  F_004d6680(((undefined4 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10de764));
  return;
}

/* ref: Client::Graphics::Vfx::UITargetLinkLineManager::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e20c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e20c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10def5c));
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x10def44));
  F_004d6680(param_1 + 1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10de764));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009e2100 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e2100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e2100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10de76c));
  F_004d6630(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10def7c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x10def64));
  return (uint)this;
}

/* ref: FUN_009e2130 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e2130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_009e2160((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_009e2140 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009e2140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e2140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10def7c));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x10def64));
  F_004d6680(((undefined4 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10de76c));
  return;
}

/* ref: Client::Graphics::Vfx::ChannelingLineManager::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2160(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10def7c));
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x10def64));
  F_004d6680(param_1 + 1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10de76c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009e21b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e21b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e21b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10de774));
  F_004d6630(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10def9c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x10def84));
  return (uint)this;
}

/* ref: FUN_009e21e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e21e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e21e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_009e2210((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_009e21f0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009e21f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e21f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10def9c));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x10def84));
  F_004d6680(((undefined4 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10de774));
  return;
}

/* ref: Client::Graphics::Vfx::TargetRingManager::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2210(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10def9c));
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x10def84));
  F_004d6680(param_1 + 1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10de774));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::ApricotInstanceListenner::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2260(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[10])REFP(0x10b2a9c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::ApricotCommunicatorInstanceListenner::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2290(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[10])REFP(0x10b2a9c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009e2520 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009e2520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_009e2550 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009e2550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_009e2570 */
GEN_OWN GEN_FRAME uint F_009e2570(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9e2570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_009e2700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2700(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e2700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009e2710 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009e2710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_009e2730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2730(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e2730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009e2740 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009e2740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_009e2760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2760(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e2760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009e2770 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009e2770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_009e2790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2790(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e2790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009e27a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009e27a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e27a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_009e27c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e27c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e27c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009e27d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009e27d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e27d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_009e27f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e27f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e27f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009e2800 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009e2800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_009e2820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2820(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e2820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009e2830 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009e2830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_009e2850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2850(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e2850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009e2860 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009e2860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_009e2880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x29))) == '\0') {
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

/* ref: FUN_009e28e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e28e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e28e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x29))) == '\0') {
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

/* ref: FUN_009e2940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2940(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e2940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009e2950 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e2950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e2950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_009dcbe0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_009e2960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2960(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e2960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009e2970 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009e2970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e2970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x11))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x11))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x11)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x11)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x11)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x11)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_009e29c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e29c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e29c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009e29d0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009e29d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e29d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x11))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x11))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x11)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x11)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x11)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x11)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_009e2a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x29)));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  while (cVar1 == '\0') {
    bVar3 = F_009dbaa0(puVar5 + 3,param_1);
    if (bVar3 == 0) {
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0x29)));
  }
  return (uint)puVar2;
}

/* ref: FUN_009e2ab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_009e2ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2ae0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009e2af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2af0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_009e2b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_009e2b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xa4;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_009e2bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x2a;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_009e2c50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009e2c50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009e2c70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_009e2cb0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009e2cb0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009e2cd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_009e2d10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009e2d10(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009e2d40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_009e2d80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009e2d80(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009e2da0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_009e2de0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009e2de0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009e2e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_009e2e40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009e2e40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009e2e60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_009e2ea0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009e2ea0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009e2ec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_009e2f00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009e2f00(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009e2f20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_009e2f60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  return (uint)this;
}

/* ref: FUN_009e2fa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e2fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e2fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_009e3000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e3000(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009e3010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e3010(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009e3020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e3020(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009e3030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e3030(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009e3040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e3040(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009e3050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e3050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e3050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x11))) == '\0') {
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

/* ref: FUN_009e30b0 */
GEN_OWN GEN_FRAME uint F_009e30b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9e30b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_009e30d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e30d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e30d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x11))) == '\0') {
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

/* ref: FUN_009e3130 */
GEN_OWN GEN_FRAME uint F_009e3130(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9e3130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_009e3160 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009e3160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e3160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_009e3180 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009e3180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e3180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_009e31a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009e31a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e31a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_009e31c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009e31c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e31c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_009e31e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e31e0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e31e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2 * 0xc;
  return (uint)in_ecx;
}

/* ref: FUN_009e3200 */
GEN_OWN GEN_FRAME uint F_009e3200(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_009e3220 */
GEN_OWN GEN_FRAME uint F_009e3220(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_009e3240 */
GEN_OWN GEN_FRAME uint F_009e3240(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_009e3260 */
GEN_OWN GEN_FRAME uint F_009e3260(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_009e3280 */
GEN_OWN GEN_FRAME unsigned int F_009e3280(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x29; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_009e32a0 */
GEN_OWN GEN_FRAME unsigned int F_009e32a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e32a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x29; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_009e32c0 */
GEN_OWN GEN_FRAME unsigned int F_009e32c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e32c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_009daf30(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_009e32e0 */
GEN_OWN GEN_FRAME unsigned int F_009e32e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e32e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_009daf30(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_009e3300 */
GEN_OWN GEN_FRAME uint F_009e3300(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_009e3320 */
GEN_OWN GEN_FRAME uint F_009e3320(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_009e3340 */
GEN_OWN GEN_FRAME uint F_009e3340(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_009e3360 */
GEN_OWN GEN_FRAME uint F_009e3360(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_009e3380 */
GEN_OWN GEN_FRAME uint F_009e3380(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_009e33a0 */
GEN_OWN GEN_FRAME uint F_009e33a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e33a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_009e33c0 */
GEN_OWN GEN_FRAME uint F_009e33c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e33c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_009e33e0 */
GEN_OWN GEN_FRAME uint F_009e33e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e33e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_009e3400 */
GEN_OWN GEN_FRAME uint F_009e3400(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_009e3430 */
GEN_OWN GEN_FRAME uint F_009e3430(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_009e3460 */
GEN_OWN GEN_FRAME uint F_009e3460(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_009e3490 */
GEN_OWN GEN_FRAME uint F_009e3490(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_009e34c0 */
GEN_OWN GEN_FRAME uint F_009e34c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e34c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_009e34f0 */
GEN_OWN GEN_FRAME uint F_009e34f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e34f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_009e3520 */
GEN_OWN GEN_FRAME uint F_009e3520(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_009e3550 */
GEN_OWN GEN_FRAME uint F_009e3550(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_009e3580 */
GEN_OWN GEN_FRAME uint F_009e3580(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_009e35d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e35d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9e35d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_009e3600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e3600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_009e36c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009e36c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e36c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
  }
  return (uint)param_1;
}

/* ref: FUN_009e36f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e36f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e36f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_009de220(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_009e3700 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e3700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e3700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_009de280(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_009e3740 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e3740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e3740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_009de310(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_009e3750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e3750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_009e3770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e3770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_009e3790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e3790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_009e37b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e37b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9e37b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_2[2];
  return (uint)this;
}

/* ref: FUN_009e37f0 */
GEN_OWN GEN_FRAME unsigned int F_009e37f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e37f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_009e3820 */
GEN_OWN GEN_FRAME unsigned int F_009e3820(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (puVar1 != param_2) {
    puVar5 = puVar1 + 0x29;
    puVar3 = puVar2 + 0x29;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 0x29; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_009e3860 */
GEN_OWN GEN_FRAME uint F_009e3860(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(byte * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x9e3860u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_3 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  byte * pbVar1;
  int iVar2;
  byte * pbVar3;
  byte * pbVar4;
  byte * pbVar5;
  
  if (param_1 != param_2) {
    pbVar1 = param_3;
    pbVar3 = param_1 + 2;
    do {
      *pbVar1 = *pbVar1 ^ (*pbVar1 ^ pbVar3[-2]) & 1;
      *pbVar1 = (pbVar3[-2] ^ *pbVar1) & 2 ^ *pbVar1;
      pbVar1[1] = pbVar3[-1];
      pbVar1[2] = *pbVar3;
      pbVar1[3] = pbVar3[1];
      pbVar1[4] = pbVar3[2];
      *(undefined2 *)(pbVar1 + 6) = *(undefined2 *)(pbVar3 + 4);
      *(undefined2 *)(pbVar1 + 8) = *(undefined2 *)(pbVar3 + 6);
      pbVar4 = pbVar3 + 8;
      pbVar5 = pbVar1 + 10;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 - 1) {
        *(undefined4 *)pbVar5 = *(undefined4 *)pbVar4;
        pbVar4 = pbVar4 + 4;
        pbVar5 = pbVar5 + 4;
      }
      pbVar4 = pbVar3 + 0x28;
      pbVar1 = pbVar1 + 0x2a;
      pbVar3 = pbVar3 + 0x2a;
    } while (pbVar4 != param_2);
    return (uint)pbVar1;
  }
  return (uint)param_3;
}

/* ref: FUN_009e38e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e38e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9e38e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_009e3900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e3900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_009e3920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e3920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_009e3940 */
GEN_OWN GEN_FRAME uint F_009e3940(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_009e3960 */
GEN_OWN GEN_FRAME uint F_009e3960(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_009e3980 */
GEN_OWN GEN_FRAME uint F_009e3980(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e3980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_2)))(param_2 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_009e39e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009e39e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e39e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_009e3a00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e3a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3a00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_009e3a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e3a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3a20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_009e3a40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e3a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3a40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_009e3a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e3a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e3a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  return (uint)this;
}

/* ref: FUN_009e3b20 */
GEN_OWN GEN_FRAME uint F_009e3b20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3b20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_009e3b40 */
GEN_OWN GEN_FRAME unsigned int F_009e3b40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3b40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x29; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_009e3b60 */
GEN_OWN GEN_FRAME unsigned int F_009e3b60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3b60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_009daf30(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_009e3b80 */
GEN_OWN GEN_FRAME unsigned int F_009e3b80(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3b80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_009e3bb0 */
GEN_OWN GEN_FRAME unsigned int F_009e3bb0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3bb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_009e3be0 */
GEN_OWN GEN_FRAME unsigned int F_009e3be0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3be0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_009e3c10 */
GEN_OWN GEN_FRAME unsigned int F_009e3c10(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_009e3c40 */
GEN_OWN GEN_FRAME unsigned int F_009e3c40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3c40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_009e3c70 */
GEN_OWN GEN_FRAME unsigned int F_009e3c70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3c70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_009e3ca0 */
GEN_OWN GEN_FRAME unsigned int F_009e3ca0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3ca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_009e3cd0 */
GEN_OWN GEN_FRAME unsigned int F_009e3cd0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e3cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_009e3d00 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_009e3d00(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e3d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  return 0;
}

/* ref: FUN_009e3d30 */
GEN_OWN GEN_FRAME uint F_009e3d30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e3d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_009e3d60 */
GEN_OWN GEN_FRAME uint F_009e3d60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x9e3d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  int iVar1;
  float fVar2;
  int iVar3;
  
  iVar1 = param_2;
  while( true ) {
    iVar3 = iVar1 * 2 + 2;
    if (param_3 <= iVar3) break;
    if ((float10)*((float *)GEN_TOP((param_1 + iVar3 * 8))) < (float10)*((float *)GEN_TOP((param_1 - 8 + iVar3 * 8)))) {
      iVar3 = iVar1 * 2 + 1;
    }
    *((undefined4 *)GEN_TOP((param_1 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 + iVar3 * 8)));
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 + 4 + iVar3 * 8)));
    iVar1 = iVar3;
  }
  if (iVar3 == param_3) {
    *((undefined4 *)GEN_TOP((param_1 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 - 8 + param_3 * 8)));
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 - 4 + param_3 * 8)));
    iVar1 = param_3 - 1;
  }
  while ((param_2 < iVar1 &&
         (iVar3 = (iVar1 - 1) / 2, (float10)*((float *)GEN_TOP((param_1 + iVar3 * 8))) < (float10)*param_4)))
  {
    *((undefined4 *)GEN_TOP((param_1 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 + iVar3 * 8)));
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 + 4 + iVar3 * 8)));
    iVar1 = iVar3;
  }
  *((float *)GEN_TOP((param_1 + iVar1 * 8))) = *param_4;
  fVar2 = param_4[1];
  *((float *)GEN_TOP((param_1 + 4 + iVar1 * 8))) = fVar2;
  return (uint)gen_fl2bits(fVar2);
}

/* ref: FUN_009e3e10 */
GEN_OWN GEN_FRAME uint F_009e3e10(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e3e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_009e3e40 */
GEN_OWN GEN_FRAME uint F_009e3e40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x9e3e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  int iVar1;
  float fVar2;
  int iVar3;
  
  iVar1 = param_2;
  while( true ) {
    iVar3 = iVar1 * 2 + 2;
    if (param_3 <= iVar3) break;
    if ((float10)*((float *)GEN_TOP((param_1 + iVar3 * 8))) < (float10)*((float *)GEN_TOP((param_1 - 8 + iVar3 * 8)))) {
      iVar3 = iVar1 * 2 + 1;
    }
    *((undefined4 *)GEN_TOP((param_1 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 + iVar3 * 8)));
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 + 4 + iVar3 * 8)));
    iVar1 = iVar3;
  }
  if (iVar3 == param_3) {
    *((undefined4 *)GEN_TOP((param_1 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 - 8 + param_3 * 8)));
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 - 4 + param_3 * 8)));
    iVar1 = param_3 - 1;
  }
  while ((param_2 < iVar1 &&
         (iVar3 = (iVar1 - 1) / 2, (float10)*((float *)GEN_TOP((param_1 + iVar3 * 8))) < (float10)*param_4)))
  {
    *((undefined4 *)GEN_TOP((param_1 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 + iVar3 * 8)));
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 + 4 + iVar3 * 8)));
    iVar1 = iVar3;
  }
  *((float *)GEN_TOP((param_1 + iVar1 * 8))) = *param_4;
  fVar2 = param_4[1];
  *((float *)GEN_TOP((param_1 + 4 + iVar1 * 8))) = fVar2;
  return (uint)gen_fl2bits(fVar2);
}

/* ref: FUN_009e3ef0 */
GEN_OWN GEN_FRAME unsigned int F_009e3ef0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e3ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = param_1[3];
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar1;
  return 0;
}

/* ref: FUN_009e3f40 */
GEN_OWN GEN_FRAME uint F_009e3f40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x9e3f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = param_2;
  while( true ) {
    iVar7 = iVar6 * 2 + 2;
    if (param_3 <= iVar7) break;
    uVar3 = *((uint *)GEN_TOP((iVar7 * 0x10 + 4 + param_1)));
    puVar1 = ((uint *)GEN_TOP((iVar7 * 0x10 + param_1)));
    if ((uVar3 <= puVar1[-3]) && ((uVar3 < puVar1[-3] || (*puVar1 < puVar1[-4])))) {
      iVar7 = iVar6 * 2 + 1;
    }
    iVar2 = iVar7 * 0x10 + param_1;
    puVar4 = ((undefined4 *)GEN_TOP((iVar6 * 0x10 + param_1)));
    *puVar4 = *((undefined4 *)GEN_TOP((iVar7 * 0x10 + param_1)));
    puVar4[1] = *((undefined4 *)GEN_TOP((iVar2 + 4)));
    puVar4[2] = *((undefined4 *)GEN_TOP((iVar2 + 8)));
    puVar4[3] = *((undefined4 *)GEN_TOP((iVar2 + 0xc)));
    iVar6 = iVar7;
  }
  if (iVar7 == param_3) {
    puVar4 = ((undefined4 *)GEN_TOP((param_1 - 0x10 + param_3 * 0x10)));
    puVar5 = ((undefined4 *)GEN_TOP((iVar6 * 0x10 + param_1)));
    *puVar5 = *puVar4;
    puVar5[1] = puVar4[1];
    puVar5[2] = puVar4[2];
    puVar5[3] = puVar4[3];
    iVar6 = param_3 - 1;
  }
  uVar3 = F_009deea0(param_1,iVar6,param_2,param_4,param_5,param_6,param_7,param_8);
  return uVar3;
}

/* ref: FUN_009e4010 */
GEN_OWN GEN_FRAME uint F_009e4010(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e4010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_009e4040 */
GEN_OWN GEN_FRAME unsigned int F_009e4040(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e4040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 8) {
    puVar1[-2] = *((undefined4 *)GEN_TOP((iVar2 - 8)));
    puVar1[-1] = *((undefined4 *)GEN_TOP((iVar2 - 4)));
    puVar1 = puVar1 - 2;
  }
  return 0;
}

/* ref: FUN_009e4070 */
GEN_OWN GEN_FRAME unsigned int F_009e4070(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e4070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 8) {
    puVar1[-2] = *((undefined4 *)GEN_TOP((iVar2 - 8)));
    puVar1[-1] = *((undefined4 *)GEN_TOP((iVar2 - 4)));
    puVar1 = puVar1 - 2;
  }
  return 0;
}

/* ref: FUN_009e40a0 */
GEN_OWN GEN_FRAME unsigned int F_009e40a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9e40a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 0x10) {
    puVar1[-4] = *((undefined4 *)GEN_TOP((iVar2 - 0x10)));
    puVar1[-3] = *((undefined4 *)GEN_TOP((iVar2 - 0xc)));
    puVar1[-2] = *((undefined4 *)GEN_TOP((iVar2 - 8)));
    puVar1[-1] = *((undefined4 *)GEN_TOP((iVar2 - 4)));
    puVar1 = puVar1 - 4;
  }
  return 0;
}

/* ref: FUN_009e40e0 */
GEN_OWN GEN_FRAME uint F_009e40e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x9e40e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  uVar1 = F_009e3d60(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_009e4120 */
GEN_OWN GEN_FRAME uint F_009e4120(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x9e4120u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  uVar1 = F_009e3e40(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_009e4160 */
GEN_OWN GEN_FRAME uint F_009e4160(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x9e4160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  uint uVar1;
  
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  param_3[3] = param_1[3];
  uVar1 = F_009e3f40(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 4,param_4,param_5,param_6,param_7,param_8
                      );
  return uVar1;
}

/* ref: FUN_009e41c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e41c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e41c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  float fVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  uint in_EAX = 0;
  float10 fVar6;
  
  dVar5 = *(double *)&REFG(undefined, 0x1088118);
  fVar6 = (float10)*((float *)GEN_TOP(param_2));
  fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 8))) *
                                       (float10)*((float *)GEN_TOP((param_2 + 8))) +
                                      (fVar6 * fVar6 +
                                      (float10)*((float *)GEN_TOP((param_2 + 4))) *
                                      (float10)*((float *)GEN_TOP((param_2 + 4)))))))))));
  fVar6 = (float10)fVar1;
  if ((float10)0 < fVar6) {
    fVar2 = *((float *)GEN_TOP((param_2 + 8)));
    dVar4 = GEN_X87((double)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 4))) / fVar6))) * *(double *)&REFG(undefined, 0x1088118));
    *((char *)GEN_TOP((param_1 + 0x49))) =
         (char)(int)((double)(float)((float10)*((float *)GEN_TOP(param_2)) / fVar6) * *(double *)&REFG(undefined, 0x1088118))
    ;
    *((char *)GEN_TOP((param_1 + 0x4a))) = (char)(int)dVar4;
    uVar3 = (uint)(dVar5 * (double)(float)((float10)fVar2 / fVar6));
    *((float *)GEN_TOP((param_1 + 0x2c))) = fVar1;
    *((char *)GEN_TOP((param_1 + 0x4b))) = (char)uVar3;
    return uVar3;
  }
  *((undefined2 *)GEN_TOP((param_1 + 0x49))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x4b))) = 0;
  return in_EAX & 0xffffff00;
}

/* ref: FUN_009e4280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e4280(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e4280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  float fVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  uint in_EAX = 0;
  float10 fVar6;
  
  dVar5 = *(double *)&REFG(undefined, 0x1088118);
  fVar6 = (float10)*((float *)GEN_TOP(param_2));
  fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 8))) *
                                       (float10)*((float *)GEN_TOP((param_2 + 8))) +
                                      (fVar6 * fVar6 +
                                      (float10)*((float *)GEN_TOP((param_2 + 4))) *
                                      (float10)*((float *)GEN_TOP((param_2 + 4)))))))))));
  fVar6 = (float10)fVar1;
  if ((float10)0 < fVar6) {
    fVar2 = *((float *)GEN_TOP((param_2 + 8)));
    dVar4 = GEN_X87((double)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 4))) / fVar6))) * *(double *)&REFG(undefined, 0x1088118));
    *((char *)GEN_TOP((param_1 + 0x4c))) =
         (char)(int)((double)(float)((float10)*((float *)GEN_TOP(param_2)) / fVar6) * *(double *)&REFG(undefined, 0x1088118))
    ;
    *((char *)GEN_TOP((param_1 + 0x4d))) = (char)(int)dVar4;
    uVar3 = (uint)(dVar5 * (double)(float)((float10)fVar2 / fVar6));
    *((float *)GEN_TOP((param_1 + 0x30))) = fVar1;
    *((char *)GEN_TOP((param_1 + 0x4e))) = (char)uVar3;
    return uVar3;
  }
  *((undefined2 *)GEN_TOP((param_1 + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x30))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x4e))) = 0;
  return in_EAX & 0xffffff00;
}

/* ref: FUN_009e4340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e4340(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e4340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  float fVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  uint in_EAX = 0;
  float10 fVar6;
  
  dVar5 = *(double *)&REFG(undefined, 0x1088118);
  fVar6 = (float10)*((float *)GEN_TOP(param_2));
  fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 8))) *
                                       (float10)*((float *)GEN_TOP((param_2 + 8))) +
                                      (fVar6 * fVar6 +
                                      (float10)*((float *)GEN_TOP((param_2 + 4))) *
                                      (float10)*((float *)GEN_TOP((param_2 + 4)))))))))));
  fVar6 = (float10)fVar1;
  if ((float10)0 < fVar6) {
    fVar2 = *((float *)GEN_TOP((param_2 + 8)));
    dVar4 = GEN_X87((double)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 4))) / fVar6))) * *(double *)&REFG(undefined, 0x1088118));
    *((char *)GEN_TOP((param_1 + 0x46))) =
         (char)(int)((double)(float)((float10)*((float *)GEN_TOP(param_2)) / fVar6) * *(double *)&REFG(undefined, 0x1088118))
    ;
    *((char *)GEN_TOP((param_1 + 0x47))) = (char)(int)dVar4;
    uVar3 = (uint)(dVar5 * (double)(float)((float10)fVar2 / fVar6));
    *((float *)GEN_TOP((param_1 + 0x28))) = fVar1;
    *((char *)GEN_TOP((param_1 + 0x48))) = (char)uVar3;
    return uVar3;
  }
  *((undefined2 *)GEN_TOP((param_1 + 0x46))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x28))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x48))) = 0;
  return in_EAX & 0xffffff00;
}

/* ref: FUN_009e4400 */
GEN_OWN GEN_FRAME unsigned int F_009e4400(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e4400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  float fVar1;
  
  (*(float *)(gen_frame + 0x18)) = (float)(float10)1;
  (*(float *)(gen_frame + 0x1c)) = (float)(float10)0;
  (*(float *)(gen_frame + 0x20)) = (float)(float10)0;
  (*(float *)(gen_frame + 0xc)) = 0.0;
  (*(float *)(gen_frame + 0x14)) = 0.0;
  (*(float *)(gen_frame + 0x10)) = (float)(float10)1;
  (*(float *)(gen_frame + 0x0)) = 0.0;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  F_00981050(&(*(float *)(gen_frame + 0x18)),(uint)&(*(float *)(gen_frame + 0x18)),param_1);
  F_00981050(&(*(float *)(gen_frame + 0xc)),(uint)&(*(float *)(gen_frame + 0xc)),param_1);
  F_00981050(&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x0)),param_1);
  fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x20)) * (float10)(*(float *)(gen_frame + 0x20)) +
                 ((float10)(*(float *)(gen_frame + 0x1c)) * (float10)(*(float *)(gen_frame + 0x1c)) + (float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x18))))));
  (*(float *)(gen_frame + 0x24)) = fVar1;
  fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar1))));
  (*(float *)(gen_frame + 0x24)) = fVar1;
  *((float *)GEN_TOP(param_2)) = fVar1;
  *((float *)GEN_TOP((param_2 + 4))) =
       ((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x14)) +
                                   ((float10)(*(float *)(gen_frame + 0xc)) * (float10)(*(float *)(gen_frame + 0xc)) +
                                   (float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x10))))))))));
  *((float *)GEN_TOP((param_2 + 8))) =
       ((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x8)) +
                                   ((float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0)) +
                                   (float10)(*(float *)(gen_frame + 0x4)) * (float10)(*(float *)(gen_frame + 0x4))))))))));
  return 0;
}

/* ref: FUN_009e4500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e4500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9e4500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  float10 fVar1;
  int iVar2;
  float * pfVar3;
  float local_8;
  
  local_8 = 0.0;
  *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
  if (1 < param_2) {
    iVar2 = param_2 - 1;
    pfVar3 = ((float *)GEN_TOP((param_1 + 8)));
    do {
      iVar2 = iVar2 - 1;
      local_8 = ((float)GEN_TOF(((float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)pfVar3[4] -
                                                                              (float10)*pfVar3) *
                                                              (float10)(float)((float10)pfVar3[4] -
                                                                              (float10)*pfVar3) +
                                                             ((float10)(float)((float10)pfVar3[3] -
                                                                              (float10)pfVar3[-1]) *
                                                              (float10)(float)((float10)pfVar3[3] -
                                                                              (float10)pfVar3[-1]) +
                                                             (float10)(float)((float10)pfVar3[2] -
                                                                             (float10)pfVar3[-2]) *
                                                             (float10)(float)((float10)pfVar3[2] -
                                                                             (float10)pfVar3[-2])))))))))
                       + (float10)local_8)));
      pfVar3[5] = local_8;
      pfVar3 = pfVar3 + 4;
    } while (iVar2 != 0);
  }
  *(int *)this = param_1;
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10b3238);
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  *((float *)GEN_TOP(((int)this + 8))) = (float)((float10)local_8 * fVar1);
  return (uint)this;
}

/* ref: FUN_009e45a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e45a0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x9e45a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  float * pfVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  
  fVar4 = (float10)param_3;
  iVar2 = *param_1 + 0x1c + param_2 * 0x10;
  uVar3 = param_2;
  if ((float10)*((float *)GEN_TOP((*param_1 + 0x1c + param_2 * 0x10))) < fVar4) {
    do {
      pfVar1 = ((float *)GEN_TOP((iVar2 + 0x10)));
      iVar2 = iVar2 + 0x10;
      uVar3 = uVar3 + 1;
    } while ((!GEN_ISNAN(fVar4) && !GEN_ISNAN((float10)*pfVar1)) && !(fVar4 <= (float10)*pfVar1));
  }
  F_009df9e0(param_1 GEN_EDX_FWD,param_3,uVar3,param_4);
  return uVar3;
}

/* ref: Apricot::Engine::Data::Communicator::Binder::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e45f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e45f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: Apricot::Engine::Data::Communicator::Binder::vf2 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_009e4600(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 8)));
}

/* ref: Apricot::Engine::Data::Communicator::Binder::vf3 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_009e4610(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 9)));
}

/* ref: Apricot::Engine::Data::Communicator::Binder::vf4 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_009e4620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 10)));
}

/* ref: Apricot::Engine::Data::Communicator::Binder::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4630(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: Apricot::Engine::Data::Communicator::Binder::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4640(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: Apricot::Engine::Data::Communicator::Binder::vf7 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e4650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e4650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x1a0 + 0x18 + in_ecx;
}

/* ref: Apricot::Engine::Data::Communicator::Binder::vf8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4670(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x698;
}

/* ref: Apricot::Engine::Data::Communicator::Binder::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4680(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x728;
}

/* ref: Apricot::Engine::Data::Communicator::Binder::vf10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4690(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x7b8;
}

/* ref: Apricot::Engine::Data::Communicator::Binder::vf11 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e46a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e46a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x848;
}

/* ref: Apricot::Engine::Data::Communicator::CameraBinder::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e46b0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e46b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00985d20(param_1 GEN_EDX_FWD);
  if ((((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Data::Communicator::LinearBinder::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e46e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e46e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00985d90(param_1 GEN_EDX_FWD);
  if ((((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Data::Communicator::PointBinder::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e4710(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e4710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00985e00(param_1 GEN_EDX_FWD);
  if ((((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Data::Communicator::SplineBinder::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e4740(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e4740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00985e70(param_1 GEN_EDX_FWD);
  if ((((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Data::Communicator::RadialBlurEffector::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e4770(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e4770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00985ee0(param_1 GEN_EDX_FWD);
  if ((((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Data::Communicator::BlackHoleEffector::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e47a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e47a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::BlackHoleEffector::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e47b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e47b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x90;
}

/* ref: Apricot::Engine::Data::Communicator::BlackHoleEffector::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e47c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e47c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x118;
}

/* ref: Apricot::Engine::Data::Communicator::BlackHoleEffector::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e47d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e47d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x1a0;
}

/* ref: Apricot::Engine::Data::Communicator::BlackHoleEffector::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e47e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e47e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x228;
}

/* ref: Apricot::Engine::Data::Communicator::BlackHoleEffector::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e47f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e47f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x2b0;
}

/* ref: Apricot::Engine::Data::Communicator::BlackHoleEffector::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4800(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x410;
}

/* ref: Apricot::Engine::Data::Communicator::CameraQuakeEffector::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4810(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::CameraQuakeEffector::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4820(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x90;
}

/* ref: Apricot::Engine::Data::Communicator::CameraQuakeEffector::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4830(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x118;
}

/* ref: Apricot::Engine::Data::Communicator::CameraQuakeEffector::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4840(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x1a0;
}

/* ref: Apricot::Engine::Data::Communicator::CameraQuakeEffector::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4850(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x300;
}

/* ref: Apricot::Engine::Data::Communicator::ConeEmitter::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e4860(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e4860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00985fa0(param_1 GEN_EDX_FWD);
  if ((((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Data::Communicator::ConeModelEmitter::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e4890(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e4890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00986240(param_1 GEN_EDX_FWD);
  if ((((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Data::Communicator::CylinderModelEmitter::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e48c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e48c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00986480(param_1 GEN_EDX_FWD);
  if ((((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Data::Communicator::ModelEmitter::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e48f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e48f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_009866c0(param_1 GEN_EDX_FWD);
  if ((((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Data::Communicator::SphereModelEmitter::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e4920(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e4920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00986850(param_1 GEN_EDX_FWD);
  if ((((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Data::Communicator::Axis2Parameter::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e4950(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e4950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00986a30(param_1 GEN_EDX_FWD);
  if ((((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Data::Communicator::Axis3Parameter::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e4980(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e4980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00986ad0(param_1 GEN_EDX_FWD);
  if ((((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Data::Communicator::BindPointProperty::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e49b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e49b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[14])REFP(0x10de8d8));
  F_00986ad0(param_1 + 0x10 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[14])REFP(0x10dd2b0));
  if (((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Data::Communicator::TextureUvSet::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e49f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9e49f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00987260(param_1 GEN_EDX_FWD);
  if ((((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4a20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0x18)));
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4a30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0x19)));
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4a40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0x1a)));
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4a50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0x1b)));
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4a60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x28)));
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4a70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x24)));
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4a80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4a90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4aa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x14)));
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf11 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4ab0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0x1f)));
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf12 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4ac0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x2c;
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf13 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4ad0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x3c;
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf14 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4ae0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x54;
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf15 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4af0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x6c;
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf16 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4b00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x84;
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4b10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x9c;
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf18 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4b20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x108;
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf19 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4b30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x140;
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4b40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x178;
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf21 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4b50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x1b0;
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf22 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4b60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x1c8;
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf23 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4b70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x1e0;
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf24 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4b80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x1f8;
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4b90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x210;
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf26 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4ba0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x228;
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf27 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4bb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x240)));
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4bc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x240)));
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf29 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4bd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x240)));
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4be0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x240)));
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf31 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4bf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x240)));
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf32 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4c00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x240)));
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4c10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0x1c)));
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf34 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4c20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0x1d)));
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf35 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_009e4c30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((char *)GEN_TOP((in_ecx + 0x1e))) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf36 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e4c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e4c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(int *)(this + 4) + param_1 * 0x44;
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf37 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009e4c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9e4c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(int *)(this + 8) + param_1 * 0x44;
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4c80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x2c;
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4c90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x3c;
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4ca0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x54;
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4cb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x6c;
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4cc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0xd8;
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4cd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x110;
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4ce0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x148;
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4cf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x180;
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4d00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x198;
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf11 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4d10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x1b0;
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf12 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4d20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0x1c)));
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf13 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4d30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0x1d)));
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf14 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4d40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0x1e)));
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf15 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4d50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0x1f)));
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf16 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4d60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0x20)));
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4d70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0x21)));
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf18 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009e4d80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 4)));
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf19 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009e4d90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 8)));
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf20 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009e4da0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf21 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009e4db0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf22 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4dc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x29))) >> 6 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf23 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4dd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)(*((byte *)GEN_TOP((in_ecx + 0x29))) >> 7);
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf24 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4de0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0x27)));
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf25 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009e4df0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x14)));
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf26 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4e00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0x23)));
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf27 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4e10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x29))) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4e20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x29))) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf29 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4e30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x29))) >> 2 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4e40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x29))) >> 3 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf31 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4e50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x29))) >> 4 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf32 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4e60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)(char)(*((char *)GEN_TOP((in_ecx + 0x28))) << 4) >> 4;
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4e70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((short *)GEN_TOP((in_ecx + 0x18)));
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf34 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4e80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((short *)GEN_TOP((in_ecx + 0x1a)));
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf35 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009e4e90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9e4e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0x22)));
}

