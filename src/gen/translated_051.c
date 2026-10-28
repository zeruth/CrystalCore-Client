#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Client::Graphics::Scene::DrawObject::vf49 */
GEN_NOFRAME uint F_006b3dd0(void)
{
  GEN_ENTER(0x6b3dd0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b3de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_006b3e10 */
GEN_FRAME uint GEN_THISCALL F_006b3e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = (undefined4 *)F_006b2020(&(*(undefined * PTR32 *)(gen_frame + 0x8)),this);
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_006b3e30 */
GEN_FRAME uint GEN_THISCALL F_006b3e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_FWD,this);
    }
  }
  else {
    this = (undefined *)((int)this - 4);
    if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_006b3e80 */
GEN_FRAME uint GEN_THISCALL F_006b3e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Terrain::vf2 */
GEN_NOFRAME uint F_006b3eb0(void)
{
  GEN_ENTER(0x6b3eb0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::Terrain::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b3ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::BGManager::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b3f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x70) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::BGObject::vf2 */
GEN_NOFRAME uint F_006b3f40(void)
{
  GEN_ENTER(0x6b3f40u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Client::Graphics::Scene::BGObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b3f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Light::vf2 */
GEN_NOFRAME uint F_006b3f90(void)
{
  GEN_ENTER(0x6b3f90u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: Client::Graphics::Scene::Light::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b3fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf2 */
GEN_NOFRAME uint F_006b3fd0(void)
{
  GEN_ENTER(0x6b3fd0u, 0u, 0u, 0u, 0u);
  return 8;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf6 */
GEN_NOFRAME unsigned int F_006b3fe0(void)
{
  GEN_ENTER(0x6b3fe0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b3ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf4 */
GEN_NOFRAME unsigned int F_006b4000(void)
{
  GEN_ENTER(0x6b4000u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b4010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf2 */
GEN_NOFRAME uint F_006b4040(void)
{
  GEN_ENTER(0x6b4040u, 0u, 0u, 0u, 0u);
  return 7;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b4050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4050u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 0x96) = 1;
  return;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b4060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::EnvScene::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b4090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pEVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2b34));
  pEVar1 = this + 0x580;
  iVar2 = 7;
  do {
    pEVar1 = pEVar1 - 0xa0;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pEVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  } while (-1 < iVar2);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b40e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b40e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b40e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[52])REFP(0x10b314c));
  in_ecx[0x1c] = (*(undefined * PTR32 (*)[10])REFP(0x10b3120));
  in_ecx[0x78] = (*(undefined * PTR32 (*)[3])REFP(0x10b2ad0));
  F_009837b0(in_ecx + 0x1c GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  return;
}

/* ref: Client::Graphics::Scene::VfxObject::vf2 */
GEN_NOFRAME uint F_006b4110(void)
{
  GEN_ENTER(0x6b4110u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: FUN_006b4120 */
GEN_NOFRAME uint GEN_THISCALL F_006b4120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006b4140((undefined *)((int)this - 0x70) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_006b4130 */
GEN_NOFRAME uint GEN_THISCALL F_006b4130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006b4140((undefined *)((int)this - 0x1e0) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::VfxObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b4140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[52])REFP(0x10b314c));
  *(undefined * PTR32 * PTR32 *)(this + 0x70) = (*(undefined * PTR32 (*)[10])REFP(0x10b3120));
  *(undefined * PTR32 * PTR32 *)(this + 0x1e0) = (*(undefined * PTR32 (*)[3])REFP(0x10b2ad0));
  F_009837b0(this + 0x70 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::ResidentResourceManager::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b41a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b41a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x10b2afc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2a8c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b41d0 */
GEN_FRAME uint GEN_THISCALL F_006b41d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b41d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_006b23a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),1);
  return uVar1;
}

/* ref: FUN_006b41f0 */
GEN_FRAME uint GEN_THISCALL F_006b41f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b41f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_006b4200 */
GEN_FRAME uint GEN_THISCALL F_006b4200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4200u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_006b4210 */
GEN_FRAME uint GEN_THISCALL F_006b4210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4210u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_006b4230 */
GEN_NOFRAME uint GEN_THISCALL F_006b4230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b4230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006b1d30(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_006b4240 */
GEN_NOFRAME uint GEN_THISCALL F_006b4240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  undefined4 uVar1;
  float10 fVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x19c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1a0);
  fVar2 = (float10)0;
  (*(float *)(gen_frame + 0x180)) = (float)fVar2;
  (*(float *)(gen_frame + 0x184)) = (float)fVar2;
  (*(float *)(gen_frame + 0x188)) = (float)fVar2;
  uVar1 = *(undefined4 *)((int)this + 0x34);
  (*(undefined4 *)(gen_frame + 0x150)) = *(undefined4 *)((int)this + 0x30);
  (*(undefined4 *)(gen_frame + 0x4c)) = param_2;
  (*(undefined4 *)(gen_frame + 0x154)) = 0;
  (*(undefined4 *)(gen_frame + 0x158)) = 0;
  (*(undefined4 *)(gen_frame + 0x160)) = 0;
  (*(undefined4 *)(gen_frame + 0x168)) = 0;
  (*(undefined4 *)(gen_frame + 0x170)) = 0;
  (*(undefined4 *)(gen_frame + 0x174)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x44)) = param_1;
  (*(undefined4 *)(gen_frame + 0x164)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x178)) = *(undefined4 *)((int)this + 0x38);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x150)) GEN_EDX_FWD,(int)this + 0x20);
  (*(float *)(gen_frame + 0x180)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x10) + (float10)(*(float *)(gen_frame + 0x180)))));
  (*(float *)(gen_frame + 0x184)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x14) + (float10)(*(float *)(gen_frame + 0x184)))));
  (*(float *)(gen_frame + 0x188)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x18) + (float10)(*(float *)(gen_frame + 0x188)))));
  puVar3 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x150)));
  puVar5 = ((undefined4 *)(gen_frame + 0x110));
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 - 1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar4 = F_006558a0((*(undefined * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x4c)));
  puVar5 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0xd0)),uVar4,(uint)((undefined4 *)(gen_frame + 0x110)));
  puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x44));
  puVar7 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 - 1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  *puVar3 = (*(undefined4 *)(gen_frame + 0x30));
  puVar3[1] = (*(undefined4 *)(gen_frame + 0x34));
  puVar3[2] = (*(undefined4 *)(gen_frame + 0x38));
  F_00c47745((*(uint *)(gen_frame + 0x19c)) ^ (uint)(uint)(gen_frame + 0x1a0) GEN_EDX_ARG);
  return (uint)puVar3;
}

/* ref: FUN_006b43b0 */
GEN_FRAME uint GEN_THISCALL F_006b43b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b43b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_006b43c0 */
GEN_FRAME uint GEN_THISCALL F_006b43c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b43c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_006b43d0 */
GEN_FRAME byte GEN_THISCALL F_006b43d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b43d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006b4400 */
GEN_FRAME uint GEN_THISCALL F_006b4400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4400u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_006b4410 */
GEN_FRAME uint GEN_THISCALL F_006b4410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4410u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_006b4430 */
GEN_FRAME uint GEN_THISCALL F_006b4430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_006b4440 */
GEN_FRAME uint GEN_THISCALL F_006b4440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4440u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_006b4450 */
GEN_FRAME byte GEN_THISCALL F_006b4450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006b4470 */
GEN_FRAME byte GEN_THISCALL F_006b4470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006b44b0 */
GEN_FRAME uint GEN_STDCALL F_006b44b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b44b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_006b44d0 */
GEN_NOFRAME uint GEN_THISCALL F_006b44d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b44d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_006b4510 */
GEN_FRAME undefined4 * GEN_THISCALL F_006b4510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x45) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x45) == '\0');
  }
  return puVar2;
}

/* ref: FUN_006b4540 */
GEN_FRAME undefined4 * GEN_THISCALL F_006b4540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x45) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x45) == '\0');
  }
  return puVar2;
}

/* ref: FUN_006b4600 */
GEN_FRAME uint GEN_THISCALL F_006b4600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') | *(uint *)((int)this + 0x10) & 0xfffffffe;
  *(uint *)((int)this + 0x10) = uVar1;
  return uVar1;
}

/* ref: FUN_006b4620 */
GEN_FRAME uint GEN_THISCALL F_006b4620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') << 6 | *(uint *)((int)this + 0x10) & 0xffffffbf;
  *(uint *)((int)this + 0x10) = uVar1;
  return uVar1;
}

/* ref: FUN_006b4640 */
GEN_FRAME uint GEN_THISCALL F_006b4640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x50) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x50) |
       (uint)((char)param_2 != '\0') << ((byte)param_1 & 0x1f);
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 2;
  return (uint)this;
}

/* ref: FUN_006b4680 */
GEN_FRAME uint GEN_THISCALL F_006b4680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4680u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(uint *)(in_ecx + 0x50) = -(uint)((char)param_2 != '\0');
  *(uint *)(in_ecx + 0x10) = *(uint *)(in_ecx + 0x10) | 2;
  return -(uint)((char)param_2 != '\0');
}

/* ref: FUN_006b46a0 */
GEN_FRAME uint GEN_THISCALL F_006b46a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b46a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  
  uVar1 = F_0065bce0(this GEN_EDX_FWD,param_1);
  uVar2 = (uint)uVar1;
  if (uVar1 != 0xffff) {
    uVar2 = (uint)((char)param_2 != '\0') << ((byte)uVar1 & 0x1f);
    *(uint *)((int)this + 0x50) = ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this + 0x50) | uVar2
    ;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 2;
  }
  return uVar2;
}

/* ref: FUN_006b46f0 */
GEN_FRAME uint GEN_THISCALL F_006b46f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b46f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x60) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x60) |
       (uint)((char)param_2 != '\0') << ((byte)param_1 & 0x1f);
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 4;
  return (uint)this;
}

/* ref: FUN_006b4730 */
GEN_FRAME uint GEN_THISCALL F_006b4730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4730u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(uint *)(in_ecx + 0x60) = -(uint)((char)param_2 != '\0');
  *(uint *)(in_ecx + 0x10) = *(uint *)(in_ecx + 0x10) | 4;
  return -(uint)((char)param_2 != '\0');
}

/* ref: FUN_006b4750 */
GEN_FRAME uint GEN_THISCALL F_006b4750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  
  uVar1 = F_0065bd80(this GEN_EDX_FWD,param_1);
  uVar2 = (uint)uVar1;
  if (uVar1 != 0xffff) {
    uVar2 = (uint)((char)param_2 != '\0') << ((byte)uVar1 & 0x1f);
    *(uint *)((int)this + 0x60) = ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this + 0x60) | uVar2
    ;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 4;
  }
  return uVar2;
}

/* ref: FUN_006b47a0 */
GEN_FRAME uint GEN_THISCALL F_006b47a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b47a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b47b0 */
GEN_FRAME uint GEN_THISCALL F_006b47b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b47b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_006b0160(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_006b47d0 */
GEN_FRAME unsigned int GEN_THISCALL F_006b47d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b47d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_006b47d0(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,0xd8);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}

/* ref: FUN_006b4810 */
GEN_FRAME byte GEN_THISCALL F_006b4810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4810u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * PTR32 * ppiVar1;
  uint * puVar2;
  uint * puVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  int * piVar7;
  int * piVar8;
  
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x2;
  ppiVar1 = &(*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) < 3) {
    ppiVar1 = &(*(int * PTR32 *)(gen_frame + 0x18));
  }
  piVar8 = *ppiVar1;
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = piVar8;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  (*(int * PTR32 *)&gen_args[1]) = piVar8;
  if (piVar8 == (int *)0x0) {
    puVar2 = (uint *)F_00406a50(4);
  }
  else {
    piVar7 = *(int * PTR32 *)(REFG(int, 0x1371270) + 4);
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar7;
    (*(int *)(gen_frame + 0x14)) = *piVar7;
    uVar5 = -(uint)((int)(ZEXT48(piVar8) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar8) * 0x14);
    puVar2 = ((uint *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG,-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0x10)))
    ;
    piVar8 = (*(int * PTR32 *)&gen_args[1]);
  }
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = (uint)piVar8;
    puVar2 = puVar3;
    piVar7 = piVar8;
    while (piVar7 = (int *)((int)piVar7 - 1), -1 < (int)piVar7) {
      *puVar2 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10b2ac8));
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2 = puVar2 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = puVar3;
  if (piVar8 != (int *)0x0) {
    iVar6 = 0;
    piVar7 = piVar8;
    do {
      iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + iVar6;
      iVar6 = iVar6 + 0x14;
      piVar7 = (int *)((int)piVar7 - 1);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 0x10;
      *(undefined * PTR32 *)(iVar4 + 0xc) = (*(undefined * PTR32 *)&gen_args[0]);
      *(undefined4 *)(iVar4 + 0x10) = 0;
    } while (piVar7 != (int *)0x0);
  }
  this_00 = (undefined *)F_00406b90(0x78,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0xc)) = (code *)0x0;
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x6b0830));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x6b2b60));
    uVar5 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x4)),0,(int)piVar8 - 1);
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  return 1;
}

/* ref: FUN_006b4970 */
GEN_FRAME uint GEN_THISCALL F_006b4970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b4970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  piVar5 = (int *)((int)this + 0x28);
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  iVar4 = *(int *)((int)this + 0xc);
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *(int *)((int)this + 8);
      *(undefined4 *)(uVar3 + 0x10 + iVar2) = 0;
      *(undefined4 *)(uVar3 + 0xc + iVar2) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,3);
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar3;
}

/* ref: FUN_006b4a20 */
GEN_FRAME uint F_006b4a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b4a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int * piVar1;
  
  piVar1 = param_2;
  if (param_2 != param_3) {
    do {
      if (*piVar1 == *param_4) break;
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_3);
  }
  *param_1 = piVar1;
  return (uint)param_1;
}

/* ref: FUN_006b4a50 */
GEN_FRAME byte F_006b4a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4a50u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  
  for (piVar1 = param_1; piVar1 != param_2; piVar1 = piVar1 + 1) {
    if (*piVar1 != 0) {
      F_0050c620(*piVar1,0,0);
    }
  }
  return (byte)param_3;
}

/* ref: JobQueue_JobSystem_VWorld_Scene_Graphics_Client::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b4a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_1 & 2) != 0) {
    iVar2 = *(int *)((int)this - 4);
    uVar1 = (int)this - 4;
    puVar3 = (undefined4 *)((int)this + iVar2 * 0x14);
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      puVar3 = puVar3 - 5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10b2ac8));
    }
    if (((param_1 & 1) != 0) && (uVar1 != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,uVar1);
    }
    return uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2ac8));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_006b4b00 */
GEN_FRAME uint GEN_THISCALL F_006b4b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b4b20 */
GEN_NOFRAME uint GEN_THISCALL F_006b4b20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b4b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006b2b00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_006b4b40 */
GEN_FRAME uint GEN_THISCALL F_006b4b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4b40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_006b4b60 */
GEN_FRAME uint GEN_THISCALL F_006b4b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b4b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_006b3aa0(this GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_006b4b70 */
GEN_FRAME unsigned int F_006b4b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
    }
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_006b4ba0 */
GEN_FRAME uint F_006b4ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
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

/* ref: FUN_006b4bd0 */
GEN_FRAME uint F_006b4bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b4bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar5 = param_2 - param_1 >> 3;
  uVar2 = (int)(uVar5 - (param_2 - param_1 >> 0x1f)) >> 1;
  uVar4 = uVar2;
  if (0 < (int)uVar2) {
    uVar7 = uVar2 * 2 + 2;
    iVar6 = param_1 + uVar2 * 8;
    do {
      uVar2 = uVar2 - 1;
      (*(int *)(gen_frame + 0x18)) = iVar6 - 8;
      uVar1 = *(undefined4 *)(iVar6 - 4);
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(iVar6 - 8);
      (*(uint *)(gen_frame + 0x14)) = uVar7 - 2;
      (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
      uVar4 = uVar2;
      for (uVar7 = uVar7 - 2; (int)uVar7 < (int)uVar5; uVar7 = uVar7 * 2 + 2) {
        iVar6 = param_1 + uVar7 * 8;
        uVar3 = (*param_3)(iVar6,iVar6 - 8);
        if ((char)uVar3 != '\0') {
          uVar7 = uVar7 - 1;
        }
        *(undefined4 *)(param_1 + uVar4 * 8) = *(undefined4 *)(param_1 + uVar7 * 8);
        *(undefined4 *)(param_1 + 4 + uVar4 * 8) = *(undefined4 *)(param_1 + 4 + uVar7 * 8);
        uVar4 = uVar7;
      }
      if (uVar7 == uVar5) {
        *(undefined4 *)(param_1 + uVar4 * 8) = *(undefined4 *)(param_1 - 8 + uVar5 * 8);
        *(undefined4 *)(param_1 + 4 + uVar4 * 8) = *(undefined4 *)(param_1 - 4 + uVar5 * 8);
        uVar4 = uVar5 - 1;
      }
      uVar4 = F_006b0c20(param_1,uVar4,uVar2,&(*(undefined4 *)(gen_frame + 0xc)),param_3);
      iVar6 = (*(int *)(gen_frame + 0x18));
      uVar7 = (*(uint *)(gen_frame + 0x14));
    } while (0 < (int)uVar2);
  }
  return uVar4;
}

/* ref: FUN_006b4ca0 */
GEN_FRAME unsigned int F_006b4ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4ca0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b4cd0 */
GEN_FRAME unsigned int F_006b4cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4cd0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b4d00 */
GEN_FRAME unsigned int F_006b4d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4d00u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b4d30 */
GEN_FRAME unsigned int F_006b4d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4d30u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b4d60 */
GEN_FRAME uint F_006b4d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b4d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*param_4)(param_2,param_1);
  if ((char)uVar2 != '\0') {
    uVar2 = *param_2;
    uVar1 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar2;
    param_1[1] = uVar1;
  }
  uVar2 = (*param_4)(param_3,param_2);
  if ((char)uVar2 != '\0') {
    uVar2 = *param_3;
    uVar1 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    *param_2 = uVar2;
    param_2[1] = uVar1;
  }
  uVar2 = (*param_4)(param_2,param_1);
  if ((char)uVar2 != '\0') {
    uVar2 = *param_2;
    uVar1 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar2;
    param_1[1] = uVar1;
  }
  return uVar2;
}

/* ref: FUN_006b4de0 */
GEN_FRAME unsigned int F_006b4de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4de0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 8) {
    puVar1[-2] = *(undefined4 *)(iVar2 - 8);
    puVar1[-1] = *(undefined4 *)(iVar2 - 4);
    puVar1 = puVar1 - 2;
  }
  return 0;
}

/* ref: FUN_006b4e10 */
GEN_FRAME uint F_006b4e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b4e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 - 4);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_2 - 8);
  *(undefined4 *)(param_2 - 8) = *param_1;
  *(undefined4 *)(param_2 - 4) = param_1[1];
  uVar1 = F_006b2d20(param_1,0,(param_2 - (int)param_1) - 8 >> 3,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
  return uVar1;
}

/* ref: Client::Graphics::Scene::DrawObject::vf10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b4e60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b4e60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 100) = *(byte *)(in_ecx + 100) | 4;
  return;
}

/* ref: FUN_006b4eb0 */
GEN_FRAME byte GEN_THISCALL F_006b4eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_1 != '\0') << 4 | *(byte *)((int)this + 100) & 0xef;
  *(byte *)((int)this + 100) = bVar1;
  return bVar1;
}

/* ref: FUN_006b4ed0 */
GEN_FRAME uint GEN_THISCALL F_006b4ed0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6b4ed0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 200) >> 1;
  if ((uVar1 & 1) == 0) {
    *((float *)GEN_TOP((*(int *)(in_ecx + 0xc0) + 0xa8))) = param_2;
  }
  return uVar1;
}

/* ref: FUN_006b4f00 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b4f00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b4f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abff4));
  F_004a05c0(this GEN_EDX_FWD);
  if (this == (undefined *)0xffffffd8) {
    this = (undefined *)0x0;
  }
  iVar1 = *(int *)((int)this + 0x28);
  iVar2 = *(int *)((int)this + 0x2c);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x2c) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c7c);
  }
  *(int *)&REFG(undefined, 0x1487c7c) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x1487c80) = iVar1;
    return 0;
  }
  *(int *)(iVar2 + 0x28) = iVar1;
  return 0;
}

/* ref: FUN_006b4f40 */
GEN_FRAME uint GEN_THISCALL F_006b4f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b4f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  uVar1 = F_006b3010(this GEN_EDX_FWD,uVar2 >> 9);
  if (uVar1 == 0) {
    return 0;
  }
  return uVar1 + (uVar2 & 0x1ff) * 8;
}

/* ref: FUN_006b4fc0 */
GEN_FRAME uint GEN_THISCALL F_006b4fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b4fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if (param_1 == 0) {
    return 0;
  }
  bVar1 = F_0069b720((undefined *)((int)this + 0x90) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x78),
                       *(undefined4 *)(param_1 + 0x78),param_2,param_3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_006b5000 */
GEN_FRAME ushort GEN_THISCALL F_006b5000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = (ushort)((char)param_1 != '\0') * 4 | *(ushort *)((int)this + 0x70) & 0xfffb;
  *(ushort *)((int)this + 0x70) = uVar1;
  return uVar1;
}

/* ref: FUN_006b5040 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b5040(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b5040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x78);
  if (((iVar1 != 0) && (uVar2 = F_00a065a0(), (char)uVar2 != '\0')) &&
     ('\0' < *(char *)(iVar1 + 0xa8))) {
    return;
  }
  if (((*(byte *)((int)this + 0x70) & 1) == 0) && (*(int *)((int)this + 0xe0) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xe0) + 0x10))))(*(int * PTR32 *)((int)this + 0xe0) GEN_EDX_ARG);
    *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) | 1;
  }
  return;
}

/* ref: FUN_006b5090 */
GEN_NOFRAME uint GEN_THISCALL F_006b5090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b5090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0x40) = 0xffff0000;
  uVar2 = 0;
  do {
    bVar1 = (byte)uVar2;
    *(undefined4 *)((int)this + uVar2 * 4) = 0;
    uVar2 = uVar2 + 1;
    *(ushort *)((int)this + 0x42) =
         ~(1 << (bVar1 & 0x1f)) & *(ushort *)((int)this + 0x42) | 0 << (bVar1 & 0x1f);
  } while (uVar2 < 0x10);
  return (uint)this;
}

/* ref: FUN_006b50d0 */
GEN_FRAME uint GEN_THISCALL F_006b50d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b50d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_006937b0(this GEN_EDX_FWD,param_1 + param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_006b50f0 */
GEN_FRAME uint GEN_THISCALL F_006b50f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b50f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00693890(this GEN_EDX_FWD,param_1 + param_2);
  return uVar1;
}

/* ref: FUN_006b5110 */
GEN_FRAME uint GEN_THISCALL F_006b5110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b5110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_006937b0(this GEN_EDX_FWD,param_1 + param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_006b5130 */
GEN_FRAME uint GEN_THISCALL F_006b5130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00693890(this GEN_EDX_FWD,param_1 + param_2);
  return uVar1;
}

/* ref: FUN_006b5150 */
GEN_FRAME byte GEN_THISCALL F_006b5150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (char)param_1 != '\0' | *(byte *)((int)this + 0xe0a8) & 0xfe;
  *(byte *)((int)this + 0xe0a8) = bVar1;
  return bVar1;
}

/* ref: FUN_006b5170 */
GEN_FRAME uint GEN_THISCALL F_006b5170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') | *(uint *)((int)this + 0x18) & 0xfffffffe;
  *(uint *)((int)this + 0x18) = uVar1;
  return uVar1;
}

/* ref: FUN_006b5190 */
GEN_FRAME uint GEN_THISCALL F_006b5190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') * 4 | *(uint *)((int)this + 0x18) & 0xfffffffb;
  *(uint *)((int)this + 0x18) = uVar1;
  return uVar1;
}

/* ref: FUN_006b51b0 */
GEN_FRAME uint GEN_THISCALL F_006b51b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b51b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') * 8 | *(uint *)((int)this + 0x18) & 0xfffffff7;
  *(uint *)((int)this + 0x18) = uVar1;
  return uVar1;
}

/* ref: FUN_006b51d0 */
GEN_FRAME uint GEN_THISCALL F_006b51d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b51d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') << 4 | *(uint *)((int)this + 0x18) & 0xffffffef;
  *(uint *)((int)this + 0x18) = uVar1;
  return uVar1;
}

/* ref: FUN_006b51f0 */
GEN_FRAME uint GEN_THISCALL F_006b51f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b51f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') << 5 | *(uint *)((int)this + 0x18) & 0xffffffdf;
  *(uint *)((int)this + 0x18) = uVar1;
  return uVar1;
}

/* ref: JobSystem_VWorld_Scene_Graphics_Client_USceneUpdateJob::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b5210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a94));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_006b5260 */
GEN_FRAME uint GEN_THISCALL F_006b5260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b5270 */
GEN_FRAME uint GEN_THISCALL F_006b5270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_006b1d30(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_006b5290 */
GEN_FRAME uint GEN_THISCALL F_006b5290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x45) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_006b52f0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b52f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b52f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abff4));
  F_004a05c0(this GEN_EDX_FWD);
  if (this == (undefined *)0xffffffd8) {
    this = (undefined *)0x0;
  }
  iVar1 = *(int *)((int)this + 0x28);
  iVar2 = *(int *)((int)this + 0x2c);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x2c) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c7c);
  }
  *(int *)&REFG(undefined, 0x1487c7c) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x1487c80) = iVar1;
    return 0;
  }
  *(int *)(iVar2 + 0x28) = iVar1;
  return 0;
}

/* ref: Client::Graphics::Scene::PostBoneDeformer::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b5330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined * pPVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abff4));
  F_004a05c0(this GEN_EDX_FWD);
  pPVar4 = this;
  if (this == (undefined *)0xffffffd8) {
    pPVar4 = (undefined *)0x0;
  }
  iVar1 = *(int *)(pPVar4 + 0x28);
  iVar2 = *(int *)(pPVar4 + 0x2c);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x2c) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c7c);
  }
  *(int *)&REFG(undefined, 0x1487c7c) = iVar3;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x28) = iVar1;
    iVar1 = REFG(int, 0x1487c80);
  }
  REFG(int, 0x1487c80) = iVar1;
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Attach::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b5390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined * pAVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abff4));
  F_004a05c0(this GEN_EDX_FWD);
  pAVar4 = this;
  if (this == (undefined *)0xffffffd8) {
    pAVar4 = (undefined *)0x0;
  }
  iVar1 = *(int *)(pAVar4 + 0x28);
  iVar2 = *(int *)(pAVar4 + 0x2c);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x2c) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c7c);
  }
  *(int *)&REFG(undefined, 0x1487c7c) = iVar3;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x28) = iVar1;
    iVar1 = REFG(int, 0x1487c80);
  }
  REFG(int, 0x1487c80) = iVar1;
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_006b53f0 */
GEN_NOFRAME uint GEN_THISCALL F_006b53f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b53f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_006b5430 */
GEN_FRAME uint GEN_THISCALL F_006b5430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) - 4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_006b54b0 */
GEN_FRAME uint GEN_THISCALL F_006b54b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b54b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x45) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x45) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_006b54f0 */
GEN_FRAME uint GEN_THISCALL F_006b54f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b54f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x45) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x45) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_006b5530 */
GEN_FRAME uint GEN_THISCALL F_006b5530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b5530u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_006b55d0 */
GEN_NOFRAME uint GEN_THISCALL F_006b55d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b55d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_006b5610 */
GEN_FRAME uint GEN_THISCALL F_006b5610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b5610u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_006b5670 */
GEN_FRAME uint GEN_THISCALL F_006b5670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_006b5690 */
GEN_FRAME uint GEN_THISCALL F_006b5690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_006b56a0 */
GEN_FRAME uint GEN_THISCALL F_006b56a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b56a0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_006b0160(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_006b57ba;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_006b0020(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_006b0000(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_006b57ba: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_006b26f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_006aff90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_006b26f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_006b5878: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_006aff90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_006b5878;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_006b26f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_006aff90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,0xd8);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_006b5900 */
GEN_NOFRAME uint GEN_THISCALL F_006b5900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b5900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_006b47d0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x18,0xd8);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_006b5970 */
GEN_NOFRAME uint GEN_THISCALL F_006b5970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b5970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006b2b00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_006b5980 */
GEN_FRAME uint F_006b5980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5980u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_006b5990 */
GEN_FRAME byte F_006b5990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5990u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = param_1;
  piVar2 = param_1;
  while (piVar4 != param_2) {
    if (piVar4[0x10] != 0) {
      F_0050c620(piVar4[0x10],0,0);
      piVar4[0x10] = 0;
      piVar4 = piVar2;
    }
    if (*(char *)((int)piVar4 + 0x45) == '\0') {
      piVar2 = (int *)piVar4[2];
      if (*(char *)((int)piVar2 + 0x45) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x45);
        piVar4 = piVar2;
        piVar3 = (int *)*piVar2;
        while (piVar2 = piVar4, cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x45);
          piVar4 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar4[1] + 0x45);
        piVar2 = (int *)piVar4[1];
        piVar3 = piVar4;
        while ((piVar4 = piVar2, piVar2 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar4[2]))) {
          cVar1 = *(char *)(piVar4[1] + 0x45);
          piVar2 = (int *)piVar4[1];
          piVar3 = piVar4;
        }
      }
    }
  }
  return (byte)param_3;
}

/* ref: FUN_006b5a20 */
GEN_FRAME unsigned int F_006b5a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5a20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_006b5a50 */
GEN_FRAME uint F_006b5a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5a50u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_2;
  if (8 < (int)(param_2 - param_1 & 0xfffffff8)) {
    uVar1 = F_006b4bd0(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_006b5a80 */
GEN_FRAME unsigned int F_006b5a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5a80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b5ab0 */
GEN_FRAME unsigned int F_006b5ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5ab0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b5ae0 */
GEN_FRAME unsigned int F_006b5ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5ae0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b5b10 */
GEN_FRAME unsigned int F_006b5b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5b10u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b5b40 */
GEN_FRAME uint F_006b5b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b5b40u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_3 - param_1 >> 3;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 8 + param_1;
    F_006b4d60(param_1,iVar1,iVar2 * 0x10 + param_1,param_4);
    F_006b4d60(param_2 + iVar2 * -8,param_2,iVar2 * 8 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -8;
    F_006b4d60(param_3 + iVar2 * -0x10,iVar3,param_3,param_4);
    uVar4 = F_006b4d60(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_006b4d60(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_006b5be0 */
GEN_FRAME unsigned int F_006b5be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b5be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  char cVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if ((param_1 != param_2) && (puVar6 = param_1 + 2, puVar6 != param_2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = param_1;
    do {
      uVar1 = puVar6[1];
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar6;
      (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
      uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),param_1);
      puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
      puVar2 = puVar6;
      if ((char)uVar5 == '\0') {
        uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
        cVar4 = (char)uVar5;
        while (cVar4 != '\0') {
          *puVar2 = *puVar3;
          puVar2[1] = puVar3[1];
          uVar5 = (*param_3)(&(*(undefined4 *)(gen_frame + 0x0)),puVar3 - 2);
          puVar2 = puVar3;
          puVar3 = puVar3 - 2;
          cVar4 = (char)uVar5;
        }
        *puVar2 = (*(undefined4 *)(gen_frame + 0x0));
        puVar2[1] = (*(undefined4 *)(gen_frame + 0x4));
      }
      else {
        for (; param_1 != puVar2; puVar2 = puVar2 - 2) {
          *puVar2 = puVar2[-2];
          puVar2[1] = puVar2[-1];
        }
        *param_1 = (*(undefined4 *)(gen_frame + 0x0));
        param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 2;
      puVar6 = puVar6 + 2;
    } while (puVar6 != param_2);
  }
  return 0;
}

/* ref: FUN_006b5cb0 */
GEN_FRAME uint F_006b5cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 - 4);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_2 - 8);
  *(undefined4 *)(param_2 - 8) = *param_1;
  *(undefined4 *)(param_2 - 4) = param_1[1];
  uVar1 = F_006b2d20(param_1,0,(param_2 - (int)param_1) - 8 >> 3,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
  return uVar1;
}

/* ref: FUN_006b5d00 */
GEN_NOFRAME uint GEN_THISCALL F_006b5d00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b5d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006b5090(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_006b5d10 */
GEN_NOFRAME uint GEN_THISCALL F_006b5d10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b5d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006b5090(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_006b5d20 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b5d20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b5d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 4) != 0) {
    F_006b2f70(((undefined *)GEN_TOP((*(int *)((int)this + 4) + 0x90))) GEN_EDX_FWD);
  }
  *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffff3;
  return;
}

/* ref: FUN_006b5d40 */
GEN_FRAME uint GEN_THISCALL F_006b5d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5d40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_006b5d60 */
GEN_FRAME uint GEN_THISCALL F_006b5d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b5d60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_006b5d70 */
GEN_NOFRAME uint GEN_THISCALL F_006b5d70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b5d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (0xf < *(uint *)((int)this + 0x28)) {
    F_00429760(*(undefined4 *)((int)this + 0x14),*(uint *)((int)this + 0x28) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x28) = 0xf;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  return 0;
}

/* ref: FUN_006b5da0 */
GEN_FRAME uint GEN_THISCALL F_006b5da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x45) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x45) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_006b5e10 */
GEN_FRAME uint GEN_THISCALL F_006b5e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x45) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x45) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_006b5e80 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b5e80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b5e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return;
}

/* ref: FUN_006b5eb0 */
GEN_NOFRAME uint GEN_THISCALL F_006b5eb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b5eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_006b5ef0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b5ef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b5ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return;
}

/* ref: FUN_006b5f20 */
GEN_FRAME uint GEN_THISCALL F_006b5f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b5f20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_006b5900(this GEN_EDX_FWD);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x15);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_006b56a0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_006b5fd0 */
GEN_FRAME byte F_006b5fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_006b5990(param_1,param_2,param_3);
  return bVar1;
}

/* ref: FUN_006b5ff0 */
GEN_FRAME unsigned int GEN_STDCALL F_006b5ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b5ff0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_006b6030 */
GEN_FRAME uint GEN_THISCALL F_006b6030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b6030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(uint *)((int)this + 0x10);
  if ((uVar5 < param_1) || ((uint)param_2[4] < param_3)) {
                    
    F_00c457e7("invalid string position");
  }
  uVar1 = param_2[4] - param_3;
  uVar6 = param_4;
  if (uVar1 < param_4) {
    uVar6 = uVar1;
  }
  if (uVar6 < -uVar5 - 1) {
    if (uVar6 != 0) {
      uVar1 = uVar5 + uVar6;
      if (uVar1 == 0xffffffff) {
                    
        F_00c4579a("string too long");
      }
      if (*(uint *)((int)this + 0x14) < uVar1) {
        F_004e3ed0(this GEN_EDX_ARG,uVar1,uVar5);
        if (uVar1 == 0) {
          return (uint)this;
        }
      }
      else if (uVar1 == 0) {
        *(undefined4 *)((int)this + 0x10) = 0;
        if (*(uint *)((int)this + 0x14) < 0x10) {
          *(undefined1 *)this = 0;
          return (uint)this;
        }
        **(undefined1 * PTR32 *)this = 0;
        return (uint)this;
      }
      pvVar2 = this;
      pvVar3 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
        pvVar2 = *(undefined * PTR32 *)this;
        pvVar3 = *(undefined * PTR32 *)this;
      }
      F_00c46e20((int)pvVar2 + uVar6 + param_1,(int)pvVar3 + param_1,
                 *(int *)((int)this + 0x10) - param_1);
      if (this == param_2) {
        uVar5 = param_3 + uVar6;
        if (param_3 <= param_1) {
          uVar5 = param_3;
        }
        if (*(uint *)((int)this + 0x14) < 0x10) {
          F_00c46e20((int)this + param_1,(int)this + uVar5,uVar6);
        }
        else {
          F_00c46e20(*(int *)this + param_1,*(int *)this + uVar5,uVar6);
        }
      }
      else {
        puVar4 = param_2;
        if (0xf < (uint)param_2[5]) {
          puVar4 = (undefined4 *)*param_2;
        }
        pvVar3 = this;
        if (0xf < *(uint *)((int)this + 0x14)) {
          pvVar3 = *(undefined * PTR32 *)this;
        }
        F_00c46aa0((int)pvVar3 + param_1,(int)puVar4 + param_3,uVar6);
      }
      *(uint *)((int)this + 0x10) = uVar1;
      if (0xf < *(uint *)((int)this + 0x14)) {
        *(undefined1 *)(*(int *)this + uVar1) = 0;
        return (uint)this;
      }
      *(undefined1 *)((int)this + uVar1) = 0;
    }
    return (uint)this;
  }
                    
  F_00c4579a("string too long");
}

/* ref: FUN_006b61b0 */
GEN_FRAME unsigned int F_006b61b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b61b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b61e0 */
GEN_FRAME unsigned int F_006b61e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b61e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b6210 */
GEN_FRAME unsigned int F_006b6210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b6210u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b6240 */
GEN_FRAME unsigned int F_006b6240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b6240u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b6270 */
GEN_FRAME uint F_006b6270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b6270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  undefined4 * local_c;
  undefined4 * local_8;
  
  puVar9 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 3) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                     1) * 2;
  F_006b5b40(param_2,puVar9,param_3 - 2,param_4);
  puVar1 = puVar9;
  while (puVar6 = puVar1, param_2 < puVar6) {
    puVar1 = puVar6 - 2;
    uVar5 = (*param_4)(puVar1,puVar6);
    if (((char)uVar5 != '\0') || (uVar5 = (*param_4)(puVar6,puVar1), (char)uVar5 != '\0')) break;
  }
  do {
    puVar9 = puVar9 + 2;
    puVar1 = puVar9;
    puVar7 = puVar9;
    local_c = puVar6;
    puVar10 = puVar6;
    if (param_3 <= puVar9) break;
    uVar5 = (*param_4)(puVar9,puVar6);
    if (((char)uVar5 != '\0') || (uVar5 = (*param_4)(puVar6,puVar9), (char)uVar5 != '\0')) break;
  } while( true );
joined_r0x006b6305: ;
  puVar11 = puVar6;
  puVar4 = local_c;
  local_8 = puVar7;
  if (param_3 <= puVar1) {
joined_r0x006b634f: ;
    while (puVar7 = puVar6, param_2 < puVar6) {
      puVar8 = puVar11 - 2;
      uVar5 = (*param_4)(puVar8,puVar10);
      puVar7 = puVar10;
      puVar9 = local_8;
      if ((char)uVar5 == '\0') {
        uVar5 = (*param_4)(puVar10,puVar8);
        puVar7 = puVar4;
        if ((char)uVar5 != '\0') break;
        uVar2 = puVar10[-2];
        uVar3 = puVar10[-1];
        puVar7 = puVar10 - 2;
        *puVar7 = *puVar8;
        puVar10[-1] = puVar11[-1];
        *puVar8 = uVar2;
        puVar11[-1] = uVar3;
      }
      puVar6 = puVar4 - 2;
      puVar11 = puVar8;
      puVar10 = puVar7;
      puVar4 = puVar6;
    }
    if (puVar7 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar10;
        param_1[1] = puVar9;
        return (uint)param_1;
      }
      if (puVar9 != puVar1) {
        uVar2 = puVar10[1];
        uVar3 = *puVar10;
        *puVar10 = *puVar9;
        puVar10[1] = puVar9[1];
        *puVar9 = uVar3;
        puVar9[1] = uVar2;
      }
      uVar2 = *puVar10;
      uVar3 = puVar10[1];
      *puVar10 = *puVar1;
      puVar10[1] = puVar1[1];
      puVar9 = puVar9 + 2;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar6 = puVar7;
      puVar1 = puVar1 + 2;
      puVar7 = puVar9;
      local_c = puVar4;
      puVar10 = puVar10 + 2;
    }
    else {
      puVar6 = puVar7 - 2;
      local_c = puVar6;
      if (puVar1 == param_3) {
        puVar11 = puVar10 - 2;
        if (puVar6 != puVar11) {
          uVar2 = puVar7[-1];
          uVar3 = *puVar6;
          *puVar6 = *puVar11;
          puVar7[-1] = puVar10[-1];
          *puVar11 = uVar3;
          puVar10[-1] = uVar2;
        }
        uVar2 = puVar10[-1];
        uVar3 = *puVar11;
        puVar7 = puVar9 - 2;
        *puVar11 = *puVar7;
        puVar10[-1] = puVar9[-1];
        *puVar7 = uVar3;
        puVar9[-1] = uVar2;
        puVar9 = puVar7;
        puVar10 = puVar11;
      }
      else {
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        *puVar1 = *puVar6;
        puVar1[1] = puVar7[-1];
        *puVar6 = uVar3;
        puVar7[-1] = uVar2;
        puVar1 = puVar1 + 2;
        puVar7 = local_8;
      }
    }
    goto joined_r0x006b6305;
  }
  uVar5 = (*param_4)(puVar10,puVar1);
  if ((char)uVar5 == '\0') {
    uVar5 = (*param_4)(puVar1,puVar10);
    puVar6 = local_c;
    puVar11 = local_c;
    local_8 = puVar9;
    if ((char)uVar5 != '\0') goto joined_r0x006b634f;
    uVar2 = puVar9[1];
    uVar3 = *puVar9;
    *puVar9 = *puVar1;
    puVar9[1] = puVar1[1];
    puVar9 = puVar9 + 2;
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
  }
  puVar6 = local_c;
  puVar1 = puVar1 + 2;
  puVar7 = puVar9;
  goto joined_r0x006b6305;
}

/* ref: FUN_006b6490 */
GEN_FRAME unsigned int F_006b6490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b6490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_006b5be0(param_1,param_2,param_3,0);
  return;
}

/* ref: FUN_006b64b0 */
GEN_FRAME unsigned int F_006b64b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b64b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = param_2 - (int)param_1;
  if (8 < (int)(uVar2 & 0xfffffff8)) {
    puVar3 = (undefined4 *)(param_2 - 8);
    do {
      uVar1 = puVar3[1];
      (*(undefined4 *)(gen_frame + 0x4)) = *puVar3;
      *puVar3 = *param_1;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      puVar3[1] = param_1[1];
      F_006b2d20(param_1,0,(int)(uVar2 - 8) >> 3,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
      puVar3 = puVar3 - 2;
      uVar2 = (int)puVar3 + (8 - (int)param_1);
    } while (8 < (int)(uVar2 & 0xfffffff8));
  }
  return 0;
}

/* ref: FUN_006b6520 */
GEN_NOFRAME uint GEN_THISCALL F_006b6520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b6520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (0xf < *(uint *)((int)this + 0x2c)) {
    F_00429760(*(undefined4 *)((int)this + 0x18),*(uint *)((int)this + 0x2c) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  return 0;
}

/* ref: FUN_006b65b0 */
GEN_FRAME uint GEN_THISCALL F_006b65b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b65b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_004e54d0(this GEN_EDX_FWD,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_006b65f0 */
GEN_FRAME uint GEN_THISCALL F_006b65f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b65f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_006b5f20(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_006b6610 */
GEN_NOFRAME uint GEN_THISCALL F_006b6610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b6610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_006b6650 */
GEN_FRAME uint GEN_THISCALL F_006b6650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b6650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,0xd8);
    F_006b5ff0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0xd8);
    }
    uVar4 = uVar3 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar3;
    *(uint *)((int)this + 8) = param_1 * 8 + uVar3;
    *(uint *)((int)this + 4) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_006b66f0 */
GEN_FRAME uint GEN_STDCALL F_006b66f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b66f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = param_3;
  if (param_1 != param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return (uint)puVar1;
}

/* ref: FUN_006b6720 */
GEN_FRAME unsigned int GEN_STDCALL F_006b6720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b6720u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b6750 */
GEN_FRAME unsigned int GEN_STDCALL F_006b6750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b6750u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b6780 */
GEN_FRAME unsigned int GEN_STDCALL F_006b6780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b6780u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006b67b0 */
GEN_FRAME uint GEN_THISCALL F_006b67b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b67b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006b6030(this GEN_EDX_FWD,param_1,param_2,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_006b67d0 */
GEN_FRAME unsigned int F_006b67d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b67d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_006b64b0(param_1,param_2,param_3);
  return;
}

/* ref: FUN_006b67e0 */
GEN_NOFRAME uint GEN_THISCALL F_006b67e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b67e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (0xf < *(uint *)((int)this + 0x2c)) {
    F_00429760(*(undefined4 *)((int)this + 0x18),*(uint *)((int)this + 0x2c) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  return 0;
}

/* ref: FUN_006b6810 */
GEN_FRAME uint GEN_THISCALL F_006b6810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b6810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  F_004e54d0(param_1 GEN_EDX_FWD,this,param_2,param_3);
  return (uint)param_1;
}

/* ref: FUN_006b6840 */
GEN_FRAME uint GEN_THISCALL F_006b6840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b6840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (this != param_1) {
    iVar2 = *param_1;
    uVar6 = param_1[1] - iVar2 >> 2;
    iVar3 = *(int *)this;
    if (uVar6 == 0) {
      if (iVar3 != *(int *)((int)this + 4)) {
        F_00c46e20(iVar3,*(int *)((int)this + 4),0);
        *(int *)((int)this + 4) = iVar3;
        return (uint)this;
      }
    }
    else {
      uVar7 = *(int *)((int)this + 4) - iVar3 >> 2;
      if (uVar6 <= uVar7) {
        F_00c46e20(iVar3,iVar2,(param_1[1] - iVar2 >> 2) * 4);
        *(int *)((int)this + 4) = *(int *)this + (param_1[1] - *param_1 >> 2) * 4;
        return (uint)this;
      }
      uVar5 = *(int *)((int)this + 8) - iVar3 >> 2;
      if (uVar6 <= uVar5) {
        iVar1 = iVar2 + uVar7 * 4;
        F_00c46e20(iVar3,iVar2,(iVar1 - iVar2 >> 2) * 4);
        uVar6 = F_006b66f0(iVar1,param_1[1],*(undefined4 *)((int)this + 4));
        *(uint *)((int)this + 4) = uVar6;
        return (uint)this;
      }
      if (iVar3 != 0) {
        F_0051c130(iVar3,uVar5);
      }
      bVar4 = F_00520b70(this GEN_EDX_ARG,param_1[1] - *param_1 >> 2);
      if (bVar4 != 0) {
        uVar6 = F_006b66f0(*param_1,param_1[1],*(undefined4 *)this);
        *(uint *)((int)this + 4) = uVar6;
      }
    }
  }
  return (uint)this;
}

/* ref: FUN_006b6960 */
GEN_FRAME uint GEN_THISCALL F_006b6960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b6960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006b5f20(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_006b69a0 */
GEN_NOFRAME uint GEN_THISCALL F_006b69a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b69a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_006b69e0 */
GEN_FRAME uint GEN_THISCALL F_006b69e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b69e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_006b6650(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_006b6650(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_006b6a50 */
GEN_FRAME uint GEN_THISCALL F_006b6a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b6a50u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xd4);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd4);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_006b6b00 */
GEN_FRAME uint GEN_THISCALL F_006b6b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b6b00u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xd8);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd8);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_006b6bb0 */
GEN_FRAME uint GEN_THISCALL F_006b6bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b6bb0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xd8);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd8);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_006b6c60 */
GEN_FRAME uint GEN_THISCALL F_006b6c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b6c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    if (0xf < *(uint *)((int)this + 0x14)) {
      F_00429760(*(undefined4 *)this,*(uint *)((int)this + 0x14) + 1,0x32);
    }
    *(undefined4 *)((int)this + 0x14) = 0xf;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined1 *)this = 0;
    if ((uint)param_1[5] < 0x10) {
      F_00c46e20(this,param_1,param_1[4] + 1);
    }
    else {
      *(undefined4 *)this = *param_1;
      *param_1 = 0;
    }
    *(undefined4 *)((int)this + 0x10) = param_1[4];
    *(undefined4 *)((int)this + 0x14) = param_1[5];
    param_1[5] = 0xf;
    param_1[4] = 0;
    *(undefined1 *)param_1 = 0;
  }
  return (uint)this;
}

/* ref: FUN_006b6cf0 */
GEN_FRAME unsigned int F_006b6cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b6cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
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
LAB_006b6d82: ;
      if (1 < iVar1) {
        F_006b5be0(iVar2,iVar4,param_4,0);
      }
      return;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(iVar4 - iVar2 & 0xfffffff8U)) {
          F_006b4bd0(iVar2,iVar4,param_4,0,0);
        }
        F_006b64b0(iVar2,iVar4,param_4);
        return;
      }
      goto LAB_006b6d82;
    }
    F_006b6270(&(*(int *)(gen_frame + 0x4)),iVar2,iVar4,param_4);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x4)) - iVar2 & 0xfffffff8U) < (int)(iVar4 - (*(int *)(gen_frame + 0x8)) & 0xfffffff8U)) {
      F_006b6cf0(iVar2,(*(int *)(gen_frame + 0x4)),iVar3,param_4);
      iVar2 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_006b6cf0((*(int *)(gen_frame + 0x8)),iVar4,iVar3,param_4);
      iVar4 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_006b6de0 */
GEN_NOFRAME uint GEN_THISCALL F_006b6de0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b6de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b32d4));
  iVar1 = *(int *)((int)this + 0xac);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0xb4) - iVar1 >> 2) * 4,0xcb);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a7c));
  return uVar2;
}

/* ref: Client::Graphics::Scene::CharacterUtility::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b6e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b6e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006b6de0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b6e70 */
GEN_NOFRAME uint GEN_THISCALL F_006b6e70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b6e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (0xf < *(uint *)((int)this + 0x2c)) {
    F_00429760(*(undefined4 *)((int)this + 0x18),*(uint *)((int)this + 0x2c) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  return 0;
}

/* ref: FUN_006b6ea0 */
GEN_FRAME uint GEN_THISCALL F_006b6ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b6ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_006b6840(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_006b6ec0 */
GEN_FRAME uint GEN_THISCALL F_006b6ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b6ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x28) = 0xf;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x14) GEN_EDX_FWD,param_1 + 5,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_006b6f10 */
GEN_FRAME uint GEN_THISCALL F_006b6f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6b6f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined4 *)this = *param_3;
  *(undefined4 *)((int)this + 4) = *param_4;
  *(undefined4 *)((int)this + 8) = param_5;
  *(undefined4 *)((int)this + 0xc) = param_6;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x28) = 0xf;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x14) GEN_EDX_FWD,param_1,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_006b6f60 */
GEN_FRAME uint GEN_THISCALL F_006b6f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6b6f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  byte * pbVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined4 *)((int)this + 4) = *param_3;
  *(undefined4 *)((int)this + 8) = *param_4;
  *(undefined4 *)((int)this + 0xc) = param_5;
  *(undefined4 *)((int)this + 0x10) = param_6;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x18) GEN_EDX_FWD,param_1,0,0xffffffff);
  uVar2 = 0x811c9dc5;
  pbVar1 = (byte *)((int)this + 5);
  iVar3 = 8;
  do {
    uVar2 = (uint)pbVar1[4] ^
            ((((((uint)pbVar1[-1] ^ uVar2 * 0x1000193) * 0x1000193 ^ (uint)*pbVar1) * 0x1000193 ^
              (uint)pbVar1[1]) * 0x1000193 ^ (uint)pbVar1[2]) * 0x1000193 ^ (uint)pbVar1[3]) *
            0x1000193;
    pbVar1 = pbVar1 + 6;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *(uint *)this = uVar2;
  return (uint)this;
}

/* ref: FUN_006b7020 */
GEN_FRAME uint GEN_THISCALL F_006b7020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b7020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006b5f20(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_006b70a0 */
GEN_FRAME uint GEN_THISCALL F_006b70a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b70a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar4 = (undefined4 *)F_006b69e0(this GEN_EDX_FWD,1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = *(int *)this;
      *puVar1 = *(undefined4 *)(iVar2 + iVar5 * 8);
      uVar3 = *(uint *)(iVar2 + 4 + iVar5 * 8);
      puVar1[1] = uVar3;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_006b69e0(this GEN_EDX_ARG,1);
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return (uint)puVar4;
}

/* ref: FUN_006b7120 */
GEN_FRAME uint GEN_THISCALL F_006b7120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7120u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_006b6a50(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_006b6a50(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_006b7190 */
GEN_FRAME uint GEN_THISCALL F_006b7190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7190u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_006b6b00(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_006b6b00(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_006b7200 */
GEN_FRAME uint GEN_THISCALL F_006b7200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7200u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_006b6bb0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_006b6bb0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_006b7270 */
GEN_FRAME unsigned int F_006b7270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b7270u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_006b6cf0(param_1,param_2,param_2 - param_1 >> 3,param_3);
  return;
}

/* ref: FUN_006b72a0 */
GEN_FRAME uint GEN_THISCALL F_006b72a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b72a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_006b6c60(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_006b72d0 */
GEN_FRAME uint GEN_THISCALL F_006b72d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b72d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (0xf < *(uint *)((int)this + 0x2c)) {
    F_00429760(*(undefined4 *)((int)this + 0x18),*(uint *)((int)this + 0x2c) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b7320 */
GEN_FRAME uint GEN_THISCALL F_006b7320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x18) GEN_EDX_FWD,param_1 + 6,0,0xffffffff);
  return (uint)this;
}

/* ref: Client::Graphics::Scene::GrassManager::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b7380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006a9c90(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b73b0 */
GEN_FRAME uint GEN_THISCALL F_006b73b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b73b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005296e0(this GEN_EDX_FWD,1);
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
      F_005296e0(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_006b7460 */
GEN_FRAME uint GEN_THISCALL F_006b7460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_006b7120(this GEN_EDX_FWD,1);
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
      F_006b7120(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_006b74d0 */
GEN_FRAME uint GEN_THISCALL F_006b74d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b74d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_006b7120(this GEN_EDX_FWD,1);
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
      F_006b7120(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_006b7540 */
GEN_FRAME uint GEN_THISCALL F_006b7540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_006b7190(this GEN_EDX_FWD,1);
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
      F_006b7190(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_006b75b0 */
GEN_FRAME uint GEN_THISCALL F_006b75b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b75b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_006b7200(this GEN_EDX_FWD,1);
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
      F_006b7200(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_006b7620 */
GEN_FRAME unsigned int GEN_THISCALL F_006b7620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (this != param_1) {
    iVar1 = *(int *)this;
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xcb);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

/* ref: FUN_006b7680 */
GEN_FRAME uint F_006b7680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b7680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_006b6030(param_3 GEN_EDX_ARG,0,param_2,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  F_006b6c60(param_1 GEN_EDX_ARG,uVar1);
  return (uint)param_1;
}

/* ref: FUN_006b76c0 */
GEN_FRAME uint GEN_THISCALL F_006b76c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b76c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x18) GEN_EDX_FWD,param_1 + 6,0,0xffffffff);
  *(undefined4 *)((int)this + 0x34) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b7720 */
GEN_FRAME uint GEN_THISCALL F_006b7720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x18) GEN_EDX_FWD,param_1 + 6,0,0xffffffff);
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  return (uint)this;
}

/* ref: FUN_006b7780 */
GEN_FRAME uint GEN_STDCALL F_006b7780(unsigned int gen_a0)
{
  GEN_ENTER(0x6b7780u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (0xf < *(uint *)(param_1 + 0x2c)) {
    F_00429760(*(undefined4 *)(param_1 + 0x18),*(uint *)(param_1 + 0x2c) + 1,0x32);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0xf;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return 0;
}

/* ref: FUN_006b77c0 */
GEN_FRAME uint GEN_THISCALL F_006b77c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b77c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (this != param_1) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_006b7800 */
GEN_FRAME uint GEN_THISCALL F_006b7800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (this != param_1) {
    iVar1 = *(int *)this;
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xcb);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_006b7860 */
GEN_FRAME uint GEN_THISCALL F_006b7860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b7860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x18) GEN_EDX_FWD,param_1 + 6,0,0xffffffff);
  *(undefined4 *)((int)this + 0x34) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b78c0 */
GEN_FRAME uint GEN_THISCALL F_006b78c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b78c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x18) GEN_EDX_FWD,param_1 + 6,0,0xffffffff);
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  return (uint)this;
}

/* ref: FUN_006b7920 */
GEN_FRAME uint F_006b7920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  if (0xf < *(uint *)(param_2 + 0x2c)) {
    F_00429760(*(undefined4 *)(param_2 + 0x18),*(uint *)(param_2 + 0x2c) + 1,0x32);
  }
  *(undefined4 *)(param_2 + 0x2c) = 0xf;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined1 *)(param_2 + 0x18) = 0;
  return 0;
}

/* ref: FUN_006b7960 */
GEN_FRAME uint GEN_THISCALL F_006b7960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (this != param_1) {
    uVar1 = *(undefined4 *)this;
    *(undefined4 *)this = *param_1;
    *param_1 = uVar1;
    uVar1 = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 4) = param_1[1];
    param_1[1] = uVar1;
    uVar1 = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 8) = param_1[2];
    param_1[2] = uVar1;
  }
  return (uint)param_1;
}

/* ref: FUN_006b79a0 */
GEN_FRAME uint GEN_THISCALL F_006b79a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b79a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    if (0xf < (uint)param_4[0xe]) {
      F_00429760(param_4[9],param_4[0xe] + 1,0x32);
    }
    param_4[0xe] = 0xf;
    param_4[0xd] = 0;
    *(undefined1 *)(param_4 + 9) = 0;
    F_00429760(param_4,0x48,0xcb);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x44);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x44) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x44) == '\0') {
        *(undefined1 *)(piVar5 + 0x11) = 1;
        *(undefined1 *)(iVar2 + 0x44) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x44))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x45) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
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
        *(undefined1 *)(piVar4[1] + 0x44) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x44))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x45) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_006b7bc3: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x44) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x45))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x44) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x44))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x45) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_006b7bc3;
      }
      *(undefined1 *)(piVar5 + 0x11) = 1;
      *(undefined1 *)(iVar2 + 0x44) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x44))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x44);
  } while( true );
}

/* ref: FUN_006b7bf0 */
GEN_FRAME unsigned int GEN_STDCALL F_006b7bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_006b78c0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_006b7c10 */
GEN_FRAME uint GEN_THISCALL F_006b7c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b7c10u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x45))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_006b1d30(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x45) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x45) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x45) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[0x11];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x11))) = (char)piVar3[0x11];
      *(char *)(piVar3 + 0x11) = (char)iVar1;
      goto LAB_006b7d2a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x45) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x45) == '\0') {
      piVar4 = (int *)F_006b1cf0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x45) == '\0') {
      uVar5 = F_006b1cd0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_006b7d2a: ;
  if ((char)piVar3[0x11] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x11] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[0x11] == '\0') {
            *(undefined1 *)(piVar6 + 0x11) = 1;
            *(undefined1 *)(piVar4 + 0x11) = 0;
            F_006b5290((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x45) == '\0') {
            if ((*(char *)(*piVar6 + 0x44) != '\x01') || (*(char *)(piVar6[2] + 0x44) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x44) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x44) = 1;
                *(undefined1 *)(piVar6 + 0x11) = 0;
                F_006b3a00((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 0x11) = (char)piVar4[0x11];
              *(undefined1 *)(piVar4 + 0x11) = 1;
              *(undefined1 *)(piVar6[2] + 0x44) = 1;
              F_006b5290((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_006b7de8: ;
            *(undefined1 *)(piVar6 + 0x11) = 0;
          }
        }
        else {
          if ((char)piVar6[0x11] == '\0') {
            *(undefined1 *)(piVar6 + 0x11) = 1;
            *(undefined1 *)(piVar4 + 0x11) = 0;
            F_006b3a00((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x45) == '\0') {
            if ((*(char *)(piVar6[2] + 0x44) == '\x01') && (*(char *)(*piVar6 + 0x44) == '\x01'))
            goto LAB_006b7de8;
            if (*(char *)(*piVar6 + 0x44) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x44) = 1;
              *(undefined1 *)(piVar6 + 0x11) = 0;
              F_006b5290((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 0x11) = (char)piVar4[0x11];
            *(undefined1 *)(piVar4 + 0x11) = 1;
            *(undefined1 *)(*piVar6 + 0x44) = 1;
            F_006b3a00((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x11) = 1;
  }
  if (0xf < (uint)piVar3[0xe]) {
    F_00429760(piVar3[9],piVar3[0xe] + 1,0x32);
  }
  piVar3[0xe] = 0xf;
  piVar3[0xd] = 0;
  *(undefined1 *)(piVar3 + 9) = 0;
  F_00429760(piVar3,0x48,0xcb);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_006b7ea0 */
GEN_FRAME unsigned int GEN_THISCALL F_006b7ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x45);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_006b7ea0(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    if (0xf < (uint)piVar3[0xe]) {
      F_00429760(piVar3[9],piVar3[0xe] + 1,0x32);
    }
    piVar3[0xe] = 0xf;
    piVar3[0xd] = 0;
    *(undefined1 *)(piVar3 + 9) = 0;
    F_00429760(piVar3,0x48,0xcb);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x45);
  }
  return;
}

/* ref: FUN_006b7f10 */
GEN_FRAME uint GEN_THISCALL F_006b7f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b7f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  bool bVar5;
  
  iVar2 = (*(int *)&gen_args[2]);
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar5 = true;
  (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),1);
  if (*(char *)((int)puVar4[1] + 0x45) == '\0') {
    puVar3 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar3;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar5 = *(uint *)(iVar2 + 0xc) < (uint)puVar4[3];
      }
      else {
        bVar5 = *(uint *)(iVar2 + 0xc) <= (uint)puVar4[3];
      }
      (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),bVar5);
      if (bVar5 == false) {
        puVar3 = (undefined4 *)puVar4[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar4;
      }
    } while (*(char *)((int)puVar3 + 0x45) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar4;
  if (bVar5 != false) {
    if (puVar4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar4 = (undefined4 *)F_006b79a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar4,iVar2);
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar4;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_006b2b00(&(*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  }
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)(iVar2 + 0xc)) {
    puVar4 = (undefined4 *)F_006b79a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),(*(int *)&gen_args[2]),puVar4,iVar2);
    uVar1 = *puVar4;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    *(*(undefined4 * PTR32 *)&gen_args[1]) = uVar1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if (0xf < *(uint *)(iVar2 + 0x38)) {
    F_00429760(*(undefined4 *)(iVar2 + 0x24),*(uint *)(iVar2 + 0x38) + 1,0x32);
  }
  *(undefined4 *)(iVar2 + 0x38) = 0xf;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined1 *)(iVar2 + 0x24) = 0;
  F_00429760(iVar2,0x48,0xcb);
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 * PTR32 *)&gen_args[3]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_006b8010 */
GEN_FRAME unsigned int F_006b8010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b8010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_006b78c0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_006b8030 */
GEN_FRAME unsigned int F_006b8030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b8030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_006b78c0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_006b8050 */
GEN_NOFRAME uint GEN_THISCALL F_006b8050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b8050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_006b7ea0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_006b8080 */
GEN_FRAME uint GEN_THISCALL F_006b8080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x48,0,0xcb);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x11) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_006b78c0(puVar1 + 3 GEN_EDX_ARG,param_1);
  }
  return (uint)puVar1;
}

/* ref: FUN_006b80d0 */
GEN_FRAME uint GEN_THISCALL F_006b80d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b80d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x48,0,0xcb);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x11) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_006b78c0(puVar1 + 3 GEN_EDX_ARG,param_1);
  }
  return (uint)puVar1;
}

/* ref: FUN_006b8120 */
GEN_FRAME uint GEN_THISCALL F_006b8120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b8120u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_006b7ea0(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x45) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x45) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x45);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x45);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x45);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x45);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_006b7c10(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_006b81e0 */
GEN_FRAME uint GEN_THISCALL F_006b81e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b81e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x48,0,0xcb);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x11) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_006b78c0(puVar1 + 3 GEN_EDX_ARG,param_2);
  }
  F_006b7f10(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_006b8240 */
GEN_FRAME uint GEN_THISCALL F_006b8240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b8240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x48,0,0xcb);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x11) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_006b78c0(puVar1 + 3 GEN_EDX_ARG,param_2);
  }
  F_006b7f10(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_006b82a0 */
GEN_FRAME uint GEN_THISCALL F_006b82a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b82a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_006b8120(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_006b82c0 */
GEN_FRAME uint GEN_THISCALL F_006b82c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b82c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006b8120(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x48,0xcb);
  return (uint)uVar1;
}

/* ref: FUN_006b8340 */
GEN_FRAME uint GEN_THISCALL F_006b8340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b8340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006b8120(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x48,0xcb);
  return (uint)uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf3 */
GEN_NOFRAME byte F_006b8380(void)
{
  GEN_ENTER(0x6b8380u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf52 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b8390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf53 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b83a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b83a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf54 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b83b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b83b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf56 */
GEN_NOFRAME unsigned int F_006b83c0(void)
{
  GEN_ENTER(0x6b83c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf55 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b83d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b83d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf57 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b83e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b83e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf58 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b83f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b83f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf59 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b8400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf60 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b8410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf61 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b8420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf62 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b8430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b8430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf73 */
GEN_NOFRAME uint GEN_THISCALL F_006b8440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b8440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf86 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b8450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b8450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return;
}

/* ref: FUN_006b8460 */
GEN_FRAME unsigned int GEN_THISCALL F_006b8460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b8460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int iVar3;
  undefined * this_00;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b32ec));
  F_00b89b90();
  F_00b826a0((undefined *)((int)this + 0x700) GEN_EDX_ARG);
  F_006b8120((undefined *)((int)this + 0x6d0) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x6d4),
               *(undefined4 * PTR32 *)((int)this + 0x6d4));
  F_00429760(*(undefined4 *)((int)this + 0x6d4),0x48,0xcb);
  F_006b8120((undefined *)((int)this + 0x6c0) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x6c4),
               *(undefined4 * PTR32 *)((int)this + 0x6c4));
  F_00429760(*(undefined4 *)((int)this + 0x6c4),0x48,0xcb);
  this_00 = (undefined *)((int)this + 0x6c0);
  iVar3 = 4;
  do {
    this_00 = (undefined *)((int)this_00 - 0x88);
    F_009fa170(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  iVar3 = *(int *)((int)this + 0x3fc);
  if (iVar3 != 0) {
    F_00429760(iVar3,(*(int *)((int)this + 0x404) - iVar3 >> 2) * 4,0xcb);
  }
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined4 *)((int)this + 0x404) = 0;
  iVar3 = *(int *)((int)this + 0x3ec);
  if (iVar3 != 0) {
    F_00429760(iVar3,(*(int *)((int)this + 0x3f4) - iVar3 >> 2) * 4,0xcb);
  }
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  iVar3 = *(int *)((int)this + 0x3dc);
  if (iVar3 != 0) {
    F_00429760(iVar3,(*(int *)((int)this + 0x3e4) - iVar3 >> 2) * 4,0xcb);
  }
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) = (*(undefined * PTR32 (*)[5])REFP(0x10abff4));
  F_004a05c0((undefined *)((int)this + 0x90) GEN_EDX_ARG);
  if (this == (undefined *)0xffffff48) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)this + 0x90;
  }
  iVar1 = *(int *)(iVar3 + 0x28);
  iVar3 = *(int *)(iVar3 + 0x2c);
  iVar2 = iVar3;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x2c) = iVar3;
    iVar2 = *(int *)&REFG(undefined, 0x1487c7c);
  }
  *(int *)&REFG(undefined, 0x1487c7c) = iVar2;
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0x28) = iVar1;
    iVar1 = REFG(int, 0x1487c80);
  }
  REFG(int, 0x1487c80) = iVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[10])REFP(0x10b2a9c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b8610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006b8460(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Human::vf80 */
GEN_NOFRAME uint F_006b8640(void)
{
  GEN_ENTER(0x6b8640u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: Client::Graphics::Scene::Human::vf74 */
GEN_NOFRAME ushort GEN_THISCALL F_006b8650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b8650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x778);
}

/* ref: Client::Graphics::Scene::Human::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b8670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b345c));
  F_006b8460(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Demihuman::vf80 */
GEN_NOFRAME uint F_006b86a0(void)
{
  GEN_ENTER(0x6b86a0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf74 */
GEN_NOFRAME ushort GEN_THISCALL F_006b86b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b86b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x748);
}

/* ref: Client::Graphics::Scene::Demihuman::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b86d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b86d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b35cc));
  F_006b8460(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Weapon::vf55 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b8700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Scene::Weapon::vf80 */
GEN_NOFRAME uint F_006b8710(void)
{
  GEN_ENTER(0x6b8710u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::Weapon::vf74 */
GEN_NOFRAME ushort GEN_THISCALL F_006b8720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b8720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x730);
}

/* ref: Client::Graphics::Scene::Weapon::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b8740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b373c));
  F_006b8460(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Monster::vf55 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b8770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Scene::Monster::vf80 */
GEN_NOFRAME uint F_006b8780(void)
{
  GEN_ENTER(0x6b8780u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::Monster::vf74 */
GEN_NOFRAME ushort GEN_THISCALL F_006b8790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b8790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x730);
}

/* ref: Client::Graphics::Scene::Monster::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b87b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b87b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b38ac));
  F_006b8460(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_006b87f0 */
GEN_FRAME uint GEN_THISCALL F_006b87f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b87f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  
  pvVar2 = (undefined *)F_00406b90(0x360,0,0);
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00498e80(pvVar2 GEN_EDX_ARG,*param_1);
  }
  *(uint *)this = uVar3;
  pvVar2 = (undefined *)F_00406b90(0x20,0,0);
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00b8a620(pvVar2 GEN_EDX_ARG,*param_1);
  }
  *(uint *)((int)this + 4) = uVar3;
  pvVar2 = (undefined *)F_00406b90(0x18,0,0);
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00b12aa0(pvVar2 GEN_EDX_ARG,*param_1);
  }
  piVar1 = *(int * PTR32 *)this;
  *(uint *)((int)this + 8) = uVar3;
  if (piVar1 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,param_1[1]);
    if ((char)uVar3 != '\0') {
      *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 1;
    }
    uVar3 = F_00406b90(0x120,0,0);
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = F_00b8a1b0(uVar3 GEN_EDX_ARG);
    }
    *(uint *)((int)this + 0x14) = uVar3;
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
    if ((char)uVar3 != '\0') {
      *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 2;
    }
  }
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
    if ((char)uVar3 != '\0') {
      *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 4;
    }
  }
  return uVar3;
}

/* ref: FUN_006b88f0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b88f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b88f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)this;
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)this = 0;
  }
  return;
}

/* ref: FUN_006b8950 */
GEN_FRAME byte GEN_THISCALL F_006b8950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8950u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)((*(int *)&gen_args[0]) + 0xc) & (*(uint *)&gen_args[1])) != 0;
}

/* ref: FUN_006b8990 */
GEN_NOFRAME uint F_006b8990(void)
{
  GEN_ENTER(0x6b8990u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00406b90(0x18,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    puVar1[5] = 0;
    REFG(undefined4 * PTR32, 0x1488338) = puVar1;
    return (uint)puVar1;
  }
  REFG(undefined4 * PTR32, 0x1488338) = (undefined4 *)0x0;
  return 0;
}

/* ref: FUN_006b89d0 */
GEN_FRAME unsigned int GEN_THISCALL F_006b89d0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b89d0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  longlong lVar1;
  float fVar2;
  int * piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 * puVar7;
  int iVar8;
  undefined4 * puVar9;
  
  if (*param_1 != 0) {
    if (param_1[5] != 0) {
      F_00b89e70(param_1[5] GEN_EDX_FWD,param_2);
      bVar6 = F_00b8a090(param_1[5] GEN_EDX_ARG,&(*(float *)(gen_frame + 0x8)));
      if (bVar6 == 0) {
        if (*(byte *)(param_1 + 4) < 5) {
          ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_1 + 0x2c))((int *)*param_1 GEN_EDX_ARG,0,0);
          *(char *)(param_1 + 4) = (char)param_1[4] + '\x01';
        }
      }
      else {
        fVar2 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xc)))));
        (*(float *)(gen_frame + 0x18)) = fVar2;
        (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x18)) + 2)) = gen_x87_cw;
        (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = gen_bits2f(gen_x87_cw | 0xc00);
        (*(longlong *)(gen_frame + 0x10)) = (longlong)TRUNC((float10)fVar2);
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = (undefined4)(longlong)TRUNC((float10)fVar2);
        uVar4 = (undefined4)(*(longlong *)(gen_frame + 0x10));
        (*(float *)(gen_frame + 0x18)) = gen_bits2f(CONCAT22(gen_x87_cw,(short)(uint)gen_fl2bits(fVar2)));
        (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x8)))));
        (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = gen_bits2f(gen_x87_cw | 0xc00);
        lVar1 = (longlong)TRUNC((float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x8))))));
        (*(longlong *)(gen_frame + 0x10)) = lVar1;
        lVar1 = (*(longlong *)(gen_frame + 0x10));
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = (undefined4)lVar1;
        uVar5 = (undefined4)(*(longlong *)(gen_frame + 0x10));
        (*(longlong *)(gen_frame + 0x10)) = lVar1;
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_1 + 0x2c))((int *)*param_1 GEN_EDX_ARG,uVar5,uVar4);
        *(undefined1 *)(param_1 + 4) = 0;
      }
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_1 + 8))((int *)*param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
    puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_1 + 0x14))((int *)*param_1 GEN_EDX_ARG)));
    puVar9 = param_3;
    for (iVar8 = 0x65; iVar8 != 0; iVar8 = iVar8 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  piVar3 = (int *)param_1[1];
  if (piVar3 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
    puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1[1] + 0x10))((int *)param_1[1] GEN_EDX_ARG)));
    puVar9 = param_4;
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1[1] + 0x14))((int *)param_1[1] GEN_EDX_ARG);
  }
  piVar3 = (int *)param_1[2];
  if (piVar3 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
    puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1[2] + 0x10))((int *)param_1[2] GEN_EDX_ARG)));
    puVar9 = param_5;
    for (iVar8 = 0x125; iVar8 != 0; iVar8 = iVar8 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1[2] + 0x14))((int *)param_1[2] GEN_EDX_ARG,0);
  }
  return;
}

/* ref: FUN_006b8b20 */
GEN_NOFRAME unsigned int F_006b8b20(void)
{
  GEN_ENTER(0x6b8b20u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  
  pvVar1 = REFG(void * PTR32, 0x1488338);
  if (REFG(void * PTR32, 0x1488338) != (undefined *)0x0) {
    F_006b88f0(REFG(void * PTR32, 0x1488338) GEN_EDX_ARG);
    F_00406ad0(pvVar1);
    REFG(void * PTR32, 0x1488338) = (undefined *)0x0;
  }
  return;
}

/* ref: FUN_006b8b50 */
GEN_FRAME uint GEN_THISCALL F_006b8b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006b88f0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b8bc0 */
GEN_FRAME float10 F_006b8bc0(float gen_a0)
{
  GEN_ENTER(0x6b8bc0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_006b8be0 */
GEN_FRAME float10 F_006b8be0(float gen_a0)
{
  GEN_ENTER(0x6b8be0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080220)) /
                         (float10)*(double *)&REFG(undefined, 0x1080228))));
}

/* ref: FUN_006b8c00 */
GEN_NOFRAME uint F_006b8c00(void)
{
  GEN_ENTER(0x6b8c00u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x1488344);
}

/* ref: FUN_006b8c30 */
GEN_FRAME byte GEN_THISCALL F_006b8c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b8c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if ((param_2 & 0xffff) == 8) {
    if ((char)param_4 == '\x05') {
      F_00a50eb0(*param_3,(uint)*(ushort *)(param_3 + 1),(uint)(param_3[2] != 0),
                   (uint)*(byte *)(param_3 + 3),param_3[4]);
    }
  }
  else {
    if ((param_2 & 0xffff) != 9) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
      return (char)uVar1 != '\0';
    }
    if ((char)param_4 == '\x05') {
      F_00a510e0(*param_3,(uint)*(ushort *)(param_3 + 1),(uint)(param_3[2] != 0),
                   (uint)*(byte *)(param_3 + 3),param_3[4]);
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_006b8cd0 */
GEN_NOFRAME unsigned int F_006b8cd0(void)
{
  GEN_ENTER(0x6b8cd0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_006b8cf0 */
GEN_NOFRAME unsigned int GEN_STDCALL F_006b8cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8cf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return;
}

/* ref: FUN_006b8d00 */
GEN_FRAME uint GEN_STDCALL F_006b8d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8d00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00b070f0();
  uVar1 = F_00b093a0(this GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_006b8d20 */
GEN_FRAME uint GEN_STDCALL F_006b8d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8d20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00b070f0();
  uVar1 = F_00b0a050(this GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_006b8d40 */
GEN_FRAME uint GEN_STDCALL F_006b8d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b8d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00b070f0();
  uVar1 = F_00b085e0(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_006b8d70 */
GEN_FRAME uint GEN_STDCALL F_006b8d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00b070f0();
  uVar1 = F_00b093e0(this GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_006b8d90 */
GEN_FRAME uint GEN_STDCALL F_006b8d90(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8d90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00b070f0();
  uVar1 = F_00b08630(this GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006b8db0 */
GEN_FRAME uint GEN_STDCALL F_006b8db0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8db0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b8dce0(param_1);
  return uVar1;
}

/* ref: FUN_006b8dd0 */
GEN_FRAME uint GEN_STDCALL F_006b8dd0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8dd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b8dd00(param_1);
  return uVar1;
}

/* ref: FUN_006b8df0 */
GEN_FRAME uint GEN_THISCALL F_006b8df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)((int)this + 0x208) == 0) {
    *(undefined4 *)((int)this + 0x208) = *(undefined4 *)(param_1 + 8);
    return (int)this + 0x1e8;
  }
  return 0;
}

/* ref: FUN_006b8e20 */
GEN_FRAME unsigned int GEN_THISCALL F_006b8e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)((int)this + 0x1e8);
  if (this_00 == (undefined *)*param_1) {
    uVar1 = F_00a022b0(this_00 GEN_EDX_FWD);
    if (uVar1 == 0) {
      F_00a019e0(this_00 GEN_EDX_ARG,0);
    }
    else {
      F_00a02120(*(undefined * PTR32 *)((int)this + 0x1e4) GEN_EDX_ARG,this_00);
      F_00a02040(*(undefined * PTR32 *)((int)this + 0x1e4) GEN_EDX_ARG,this_00);
    }
    *(undefined4 *)((int)this + 0x208) = 0;
    *param_1 = 0;
  }
  return;
}

/* ref: FUN_006b8e80 */
GEN_FRAME byte GEN_THISCALL F_006b8e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8e80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(int *)(in_ecx + 0x720) == 0) {
    *(undefined4 *)(in_ecx + 0x720) = param_2;
    return 1;
  }
  return 0;
}

/* ref: FUN_006b8ef0 */
GEN_NOFRAME uint GEN_THISCALL F_006b8ef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b8ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x720) != 0) {
    uVar1 = F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_FWD,*(int *)((int)this + 0x720));
    *(undefined4 *)((int)this + 0x720) = 0;
  }
  return uVar1;
}

/* ref: FUN_006b8f20 */
GEN_FRAME uint GEN_STDCALL F_006b8f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8f20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined * this;
  uint uVar2;
  
  bVar1 = F_00b070e0();
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    this = (undefined *)F_00b070f0();
    uVar2 = F_00b0a830(this GEN_EDX_ARG,param_1,param_2);
  }
  return uVar2;
}

/* ref: FUN_006b8f50 */
GEN_FRAME uint GEN_STDCALL F_006b8f50(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8f50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  uVar1 = REFG(undefined4, 0x1379694);
  uVar2 = param_1;
  if (REFG(undefined4, 0x1379694) != param_1) {
    fVar3 = F_00a5ffa0(REFG(undefined4, 0x1379694),param_1);
    uVar2 = F_00a9f870(uVar1 GEN_EDX_ARG,fVar3);
  }
  return uVar2;
}

/* ref: FUN_006b8f80 */
GEN_FRAME byte GEN_STDCALL F_006b8f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b8f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = F_00a5f380(param_2 GEN_EDX_ARG,((int *)(gen_frame + 0xc)));
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      piVar1 = (int *)((int *)(gen_frame + 0xc))[(int)(uVar4)];
      if (piVar1 != (int *)0x0) {
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
        if ((char)uVar3 != '\0') {
          uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)((int *)(gen_frame + 0xc))[(int)(uVar4)] + 0x224))
                            ((int *)((int *)(gen_frame + 0xc))[(int)(uVar4)] GEN_EDX_ARG,param_1,param_2,param_3);
          if ((char)uVar3 != '\0') {
            return 1;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return 0;
}

/* ref: Client::Game::Event::ModuleBase::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b8ff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b8ff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x24) = 1;
  return;
}

/* ref: Client::Game::Event::ModuleBase::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b9000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b9000u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x24) = 0;
  return;
}

/* ref: Client::Game::Event::ModuleBase::vf3 */
GEN_NOFRAME byte GEN_THISCALL F_006b9010(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b9010u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x24);
}

/* ref: Client::Game::Event::ModuleBase::vf4 */
GEN_NOFRAME unsigned int F_006b9020(void)
{
  GEN_ENTER(0x6b9020u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Event::ModuleBase::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b9030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b9030u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  
  piVar1 = (int *)(in_ecx + 0x28);
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    *(undefined1 *)(in_ecx + 0x24) = 1;
  }
  return;
}

/* ref: FUN_006b9070 */
GEN_FRAME uint GEN_THISCALL F_006b9070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x6b9070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x1c) = param_5;
  *(undefined1 *)((int)this + 0x18) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x24) = param_7;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b8a5c));
  *(undefined1 *)((int)this + 0x20) = (undefined1)param_6;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  return (uint)this;
}

/* ref: FUN_006b90d0 */
GEN_FRAME uint GEN_THISCALL F_006b90d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x6b90d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint param_7 = (uint)gen_a7;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined1 *)((int)this + 0x18) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x1c) = param_5;
  *(undefined1 *)((int)this + 0x20) = (undefined1)param_6;
  *(uint *)((int)this + 0x24) = param_7;
  return param_7;
}

/* ref: FUN_006b9110 */
GEN_FRAME byte GEN_THISCALL F_006b9110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b9110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  if ((((*(int *)((int)this + 8) == param_1) && (*(int *)((int)this + 0x10) == param_2)) &&
      (*(int *)((int)this + 0x14) == param_3)) &&
     ((*(char *)((int)this + 0x18) == (char)param_4 && (*(int *)((int)this + 0x1c) == param_5)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006b9150 */
GEN_FRAME uint GEN_THISCALL F_006b9150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b9150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (((*(int *)((int)this + 8) == param_1) && (*(char *)((int)this + 0x18) == (char)param_2)) &&
     (*(int *)((int)this + 0x1c) == param_3)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006b9180 */
GEN_NOFRAME uint GEN_THISCALL F_006b9180(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b9180u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0xe0000000;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  *(undefined1 *)(in_ecx + 0x18) = 0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  *(undefined1 *)(in_ecx + 0x20) = 0;
  *(undefined4 *)(in_ecx + 0x24) = 0;
  *(undefined4 *)(in_ecx + 0x28) = 0;
  *(undefined1 *)(in_ecx + 0x2c) = 0;
  return 0;
}

/* ref: FUN_006b91f0 */
GEN_FRAME byte GEN_THISCALL F_006b91f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b91f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x20) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006b9210 */
GEN_FRAME uint GEN_THISCALL F_006b9210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9210u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x28) = param_2;
  return param_2;
}

/* ref: FUN_006b92d0 */
GEN_FRAME byte GEN_THISCALL F_006b92d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x6b92d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  byte bVar1;
  ushort uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (*(uint *)&gen_a1);
  if (((char)param_2 != '\0') && ((*(uint *)&gen_a1) < 1000000)) {
    uVar5 = (*(uint *)&gen_a1) + 1000000;
  }
  if (*(char *)((int)this + 6) == '\0') {
    uVar4 = *(uint *)((int)this + 8);
    if ((*(byte *)((int)this + 0x14) & 1) != 0) {
      uVar4 = uVar4 + 1000000;
    }
  }
  else {
    pvVar3 = (undefined *)F_00a3a860(this GEN_EDX_FWD);
    uVar4 = F_0046e5e0(pvVar3 GEN_EDX_ARG);
  }
  if ((((uVar4 == uVar5) && (*(char *)((int)this + 0x48) == (char)param_3)) &&
      (*(char *)((int)this + 0x49) == (char)param_4)) &&
     (*(char *)((int)this + 0x40) == (char)param_7)) {
    uVar5 = 0;
    while( true ) {
      if ((*(char *)((int)this + 6) == '\0') || (uVar4 = F_00a3a860(this GEN_EDX_ARG), uVar4 == 0)) {
        uVar2 = *((ushort *)GEN_TOP(((int)this + (uVar5 & 0xff) * 2 + 0x20)));
      }
      else {
        uVar4 = uVar5;
        pvVar3 = (undefined *)F_00a3a860(this GEN_EDX_ARG);
        uVar2 = F_0071d2c0(pvVar3 GEN_EDX_ARG,uVar4);
      }
      if (uVar2 != *(ushort *)(param_5 + uVar5 * 2)) break;
      if ((*(char *)((int)this + 6) == '\0') || (uVar4 = F_00a3a860(this GEN_EDX_ARG), uVar4 == 0)) {
        bVar1 = *((byte *)GEN_TOP(((uVar5 & 0xff) + 0x2a + (int)this)));
      }
      else {
        uVar4 = uVar5;
        pvVar3 = (undefined *)F_00a3a860(this GEN_EDX_ARG);
        bVar1 = F_0071d300(pvVar3 GEN_EDX_ARG,uVar4);
      }
      if (bVar1 != *(byte *)(uVar5 + param_6)) {
        return 0;
      }
      uVar5 = uVar5 + 1;
      if (4 < uVar5) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_006b93e0 */
GEN_FRAME byte GEN_THISCALL F_006b93e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b93e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = (char)iVar2 + '\x01' + *(char *)((int)this + 0x40);
    if ('\x0f' < cVar1) {
      cVar1 = cVar1 - 0x10;
    }
    if (*(int *)((int)this + cVar1 * 4) == 0) break;
    iVar2 = iVar2 + 1;
    if (0xf < iVar2) {
      return 0;
    }
  }
  *(undefined4 *)((int)this + cVar1 * 4) = param_1;
  if (cVar1 < '\0') {
    return 0;
  }
  if (*(char *)((int)this + 0x40) < '\0') {
    *(char *)((int)this + 0x40) = cVar1;
  }
  return 1;
}

/* ref: FUN_006b9490 */
GEN_FRAME uint GEN_THISCALL F_006b9490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b9490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined8 uVar5;
  
  *(undefined4 *)((int)this + 0x14) = param_1;
  uVar5 = ((gen_lcode *)*(gen_code32 *)*param_2)(param_2);
  *(undefined8 *)this = uVar5;
  *(uint *)((int)this + 8) = (uint)*(ushort *)(param_2 + 0x22);
  puVar4 = (undefined4 *)F_00a5feb0(param_2 GEN_EDX_FWD);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  *(undefined4 *)((int)this + 0x58) = *puVar4;
  *(undefined4 *)((int)this + 0x5c) = uVar1;
  *(undefined4 *)((int)this + 0x60) = uVar2;
  *(undefined4 *)((int)this + 100) = param_2[0x2c];
  *(undefined4 *)((int)this + 0x68) = param_2[0x145];
  *(byte *)((int)this + 0x7d) = *(byte *)((int)param_2 + 0x2dd2) >> 2 & 1;
  *(undefined4 *)((int)this + 0x18) = param_2[0x5ac];
  *(undefined4 *)((int)this + 0x1c) = param_2[0x5ad];
  *(undefined4 *)((int)this + 0x20) = param_2[0x794];
  *(undefined4 *)((int)this + 0x24) = param_2[0x795];
  *(undefined4 *)((int)this + 0x28) = param_2[0x97c];
  *(undefined4 *)((int)this + 0x2c) = param_2[0x97d];
  *(undefined4 *)((int)this + 0x30) = param_2[0xb64];
  *(undefined4 *)((int)this + 0x34) = param_2[0xb65];
  *(undefined4 *)((int)this + 0x38) = param_2[0xb66];
  *(undefined4 *)((int)this + 0x3c) = param_2[0xb67];
  *(undefined4 *)((int)this + 0x40) = param_2[0xb68];
  *(undefined4 *)((int)this + 0x44) = param_2[0xb69];
  *(undefined4 *)((int)this + 0x48) = param_2[0xb6a];
  *(undefined4 *)((int)this + 0x4c) = param_2[0xb6b];
  uVar3 = param_2[0xb6c];
  *(uint *)((int)this + 0x50) = uVar3;
  *(undefined4 *)((int)this + 0x54) = param_2[0xb6d];
  return uVar3;
}

/* ref: FUN_006b95a0 */
GEN_FRAME uint GEN_THISCALL F_006b95a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b95a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  undefined8 uVar4;
  
  *(undefined4 *)((int)this + 0x14) = param_1;
  uVar4 = ((gen_lcode *)*(gen_code32 *)*param_2)(param_2);
  *(undefined8 *)this = uVar4;
  *(uint *)((int)this + 8) = (uint)*(ushort *)(param_2 + 0x22);
  puVar3 = (undefined4 *)F_00a5feb0(param_2 GEN_EDX_FWD);
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  *(undefined4 *)((int)this + 0x58) = *puVar3;
  *(undefined4 *)((int)this + 0x5c) = uVar1;
  *(undefined4 *)((int)this + 0x60) = uVar2;
  *(undefined4 *)((int)this + 100) = param_2[0x2c];
  *(uint *)((int)this + 0x6c) = (uint)*(ushort *)((int)param_2 + 0x18a);
  return (uint)puVar3;
}

/* ref: FUN_006b9610 */
GEN_FRAME unsigned int GEN_THISCALL F_006b9610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b9610u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if ((char)param_3 != '\0') {
    *(undefined1 *)(in_ecx + 0xd4) = 1;
  }
  return;
}

/* ref: FUN_006b9670 */
GEN_FRAME uint GEN_STDCALL F_006b9670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9670u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00aa02d0(param_1 GEN_EDX_ARG,param_2,0);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  uVar1 = F_00aa01d0(param_1 GEN_EDX_ARG,param_2,0);
  return CONCAT31((int3)(uVar1 >> 8),1);
}

/* ref: FUN_006b96b0 */
GEN_NOFRAME uint GEN_STDCALL F_006b96b0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b96b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  float fVar1;
  float * pfVar2;
  int * piVar3;
  uint uVar4;
  float10 fVar5;
  float fVar6;
  
  (*(uint *)(gen_frame + 0x12c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x130);
  fVar6 = *(float *)((int)param_1 + 0xb0);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(float *)(gen_frame + 0x54)) = fVar6;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  fVar5 = ((float10)GEN_TOD(fsin((float10)fVar6)));
  fVar1 = (float)fVar5;
  (*(float *)(gen_frame + 0x58)) = fVar1;
  (*(float *)(gen_frame + 0x5c)) = fVar1;
  fVar5 = ((float10)GEN_TOD(fcos((float10)fVar6)));
  fVar6 = (float)fVar5;
  (*(float *)(gen_frame + 0x58)) = fVar6;
  ((float *)(gen_frame + 0xa0))[0] = fVar6;
  ((float *)(gen_frame + 0xa0))[2] = ((float)GEN_TOF(-(float10)fVar1));
  ((float *)(gen_frame + 0xa0))[1] = 0.0;
  (*(float *)(gen_frame + 0xc0)) = fVar1;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0;
  (*(undefined4 *)(gen_frame + 0xb4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(float *)(gen_frame + 0xc8)) = fVar6;
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc4)) = 0;
  (*(undefined4 *)(gen_frame + 0xd0)) = 0;
  (*(undefined4 *)(gen_frame + 0xd4)) = 0;
  (*(undefined4 *)(gen_frame + 0xd8)) = 0;
  pfVar2 = (float *)F_004ee670(&(*(float *)(gen_frame + 0x10)),(uint)&(*(undefined4 *)(gen_frame + 0x0)),(uint)((float *)(gen_frame + 0xa0)));
  (*(float *)(gen_frame + 0x30)) = *pfVar2;
  (*(float *)(gen_frame + 0x34)) = pfVar2[1];
  (*(float *)(gen_frame + 0x38)) = pfVar2[2];
  fVar5 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar6 = (float)fVar5;
  (*(float *)(gen_frame + 0x5c)) = fVar6;
  (*(float *)(gen_frame + 0x58)) = fVar6;
  fVar5 = ((float10)GEN_TOD(fcos((float10)param_2)));
  fVar1 = (float)fVar5;
  (*(float *)(gen_frame + 0x5c)) = fVar1;
  ((float *)(gen_frame + 0xe0))[0] = fVar1;
  ((float *)(gen_frame + 0xe0))[1] = 0.0;
  (*(undefined4 *)(gen_frame + 0xf0)) = 0;
  (*(undefined4 *)(gen_frame + 0xf4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0xf8)) = 0;
  ((float *)(gen_frame + 0xe0))[2] = ((float)GEN_TOF(-(float10)fVar6));
  (*(undefined4 *)(gen_frame + 0x104)) = 0;
  (*(undefined4 *)(gen_frame + 0x110)) = 0;
  (*(float *)(gen_frame + 0x100)) = fVar6;
  (*(undefined4 *)(gen_frame + 0x114)) = 0;
  (*(undefined4 *)(gen_frame + 0x118)) = 0;
  (*(float *)(gen_frame + 0x108)) = fVar1;
  pfVar2 = (float *)F_004ee670(&(*(float *)(gen_frame + 0x10)),(uint)&(*(float *)(gen_frame + 0x30)),(uint)((float *)(gen_frame + 0xe0)));
  fVar6 = *pfVar2;
  (*(float *)(gen_frame + 0x40)) = fVar6;
  (*(float *)(gen_frame + 0x44)) = pfVar2[1];
  (*(float *)(gen_frame + 0x48)) = pfVar2[2];
  fVar6 = ((float)GEN_TOF(((float10)pfVar2[2] * (float10)(*(float *)(gen_frame + 0x38)) +
                 ((float10)fVar6 * (float10)(*(float *)(gen_frame + 0x30)) + (float10)pfVar2[1] * (float10)(*(float *)(gen_frame + 0x34))))));
  (*(float *)(gen_frame + 0x5c)) = fVar6;
  if (((float10)REFG(float, 0x1088068) < (float10)fVar6) && ((char)param_3 != '\0')) {
    piVar3 = (int *)F_00a5f8a0(param_1 GEN_EDX_ARG);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x40))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)),1);
    (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x90)) + (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x94)) + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x98)) + (float10)(*(float *)(gen_frame + 0x48)));
    (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x90)) + (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x94)) + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x98)) + (float10)(*(float *)(gen_frame + 0x48)));
    F_00aa3410(param_1 GEN_EDX_ARG,0xffffffff);
    uVar4 = F_00aa52e0(param_1 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x10)),0xffffffff,0);
    F_00c47745((*(uint *)(gen_frame + 0x12c)) ^ (uint)(uint)(gen_frame + 0x130) GEN_EDX_ARG);
    return uVar4;
  }
  fVar6 = F_00aae7a0(&(*(float *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x5c)) = fVar6;
  uVar4 = F_00aa0000(param_1 GEN_EDX_ARG,0x30f,&(*(float *)(gen_frame + 0x5c)),0,0,0);
  F_00c47745((*(uint *)(gen_frame + 0x12c)) ^ (uint)(uint)(gen_frame + 0x130) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_006b99d0 */
GEN_FRAME uint GEN_STDCALL F_006b99d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b99d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00aa0560(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_006b99f0 */
GEN_FRAME uint GEN_STDCALL F_006b99f0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x6b99f0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = F_00aa5250(param_1 GEN_EDX_ARG,param_2,param_3,param_4,0xffffffff,0);
  return uVar1;
}

/* ref: FUN_006b9a20 */
GEN_FRAME uint GEN_STDCALL F_006b9a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9a20u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x24))(param_1 GEN_EDX_ARG,2,0);
    return uVar1;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x28))(param_1 GEN_EDX_ARG,2,0);
  return uVar1;
}

/* ref: FUN_006b9a50 */
GEN_FRAME uint GEN_STDCALL F_006b9a50(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9a50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab6c00(param_1,0,0,0,0,0);
  return uVar1;
}

/* ref: FUN_006b9a70 */
GEN_FRAME byte GEN_THISCALL F_006b9a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_006b93e0((undefined *)((int)this + 0x70) GEN_EDX_FWD,param_1);
  return bVar1;
}

/* ref: FUN_006b9a80 */
GEN_FRAME unsigned int GEN_STDCALL F_006b9a80(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9a80u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00ab05d0(param_1,param_2);
  return;
}

/* ref: FUN_006b9b00 */
GEN_FRAME uint GEN_STDCALL F_006b9b00(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x6b9b00u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = F_00aa0980(param_1 GEN_EDX_ARG,(float)((float10)1 - (float10)param_2),0);
  *(uint *)(param_1 + 0x2ec8) = (uint)gen_fl2bits(param_3) ^ REFG(uint, 0x10920d0);
  return uVar1;
}

/* ref: FUN_006b9b40 */
GEN_FRAME uint GEN_STDCALL F_006b9b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00aa6f20(param_1 GEN_EDX_ARG,param_2,1);
  return uVar1;
}

/* ref: FUN_006b9b60 */
GEN_FRAME uint GEN_STDCALL F_006b9b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b9b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    uVar1 = F_00aa05d0(param_1 GEN_EDX_ARG,0);
    return uVar1;
  }
  uVar1 = F_00aa0600(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_006b9bb0 */
GEN_FRAME uint GEN_STDCALL F_006b9bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9bb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = 0x1d;
  if ((short)param_1 == 1) {
    return 0x34;
  }
  if (((short)param_1 == 2) || ((short)param_1 == 1000)) {
    uVar1 = 0x35;
  }
  else {
    if ((short)param_1 == 3) {
      return 0x36;
    }
    if ((short)param_1 == 4) {
      return 0x37;
    }
  }
  return uVar1;
}

/* ref: FUN_006b9c10 */
GEN_FRAME float GEN_STDCALL F_006b9c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b9c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined1 gen_out[0x34];
  float fVar1;
  uint uVar2;
  float * pfVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x30);
  local_8 = uVar2;
  local_30 = 0;
  local_2c = 2;
  local_28 = 4;
  local_24 = 6;
  local_20 = 8;
  local_1c = 1;
  local_18 = 3;
  local_14 = 5;
  local_10 = 7;
  local_c = 9;
  if (4 < param_1 - 1U) {
    F_00c47745(uVar2 ^ (uint)(uint)(gen_out + 0x30) GEN_EDX_ARG);
    return (float)(float10)0;
  }
  if ((4 < param_3 - 1U) || (((*(int *)&gen_a1) != 0 && ((*(int *)&gen_a1) != 1)))) {
    F_00c47745(uVar2 ^ (uint)(uint)(gen_out + 0x30) GEN_EDX_ARG);
    return (float)(float10)0;
  }
  if ((param_4 == 0) || (param_4 == 1)) {
    pfVar3 = (float *)F_00ab37b0(*((undefined4 *)GEN_TOP(((gen_out + 0x0) + param_1 * 4 + (*(int *)&gen_a1) * 0x14))))
    ;
    if (pfVar3 != (float *)0x0) {
      if (param_4 == 0) {
        if (param_3 == 1) {
          fVar1 = *pfVar3;
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30) GEN_EDX_ARG);
          return fVar1;
        }
        if (param_3 == 2) {
          fVar1 = pfVar3[2];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30) GEN_EDX_ARG);
          return fVar1;
        }
        if (param_3 == 3) {
          fVar1 = pfVar3[4];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30) GEN_EDX_ARG);
          return fVar1;
        }
        if (param_3 == 4) {
          fVar1 = pfVar3[6];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30) GEN_EDX_ARG);
          return fVar1;
        }
        if (param_3 == 5) {
          fVar1 = pfVar3[8];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30) GEN_EDX_ARG);
          return fVar1;
        }
      }
      else if (param_4 == 1) {
        if (param_3 == 1) {
          fVar1 = pfVar3[1];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30) GEN_EDX_ARG);
          return fVar1;
        }
        if (param_3 == 2) {
          fVar1 = pfVar3[3];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30) GEN_EDX_ARG);
          return fVar1;
        }
        if (param_3 == 3) {
          fVar1 = pfVar3[5];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30) GEN_EDX_ARG);
          return fVar1;
        }
        if (param_3 == 4) {
          fVar1 = pfVar3[7];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30) GEN_EDX_ARG);
          return fVar1;
        }
        if (param_3 == 5) {
          fVar1 = pfVar3[9];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30) GEN_EDX_ARG);
          return fVar1;
        }
      }
    }
  }
  F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30) GEN_EDX_ARG);
  return (float)(float10)0;
}

/* ref: FUN_006b9e30 */
GEN_FRAME uint GEN_STDCALL F_006b9e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9e30u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a7d830(param_1 & 0xff,param_2);
  return uVar1;
}

/* ref: FUN_006b9e60 */
GEN_FRAME uint F_006b9e60(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9e60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006b9e80 */
GEN_FRAME uint F_006b9e80(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9e80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006b9ea0 */
GEN_FRAME uint F_006b9ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9ea0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006b9ec0 */
GEN_FRAME uint F_006b9ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9ec0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x10))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006b9ee0 */
GEN_FRAME uint F_006b9ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9ee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x14))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006b9f00 */
GEN_FRAME uint F_006b9f00(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9f00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x18))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006b9f20 */
GEN_FRAME uint F_006b9f20(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9f20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006b9f40 */
GEN_FRAME uint F_006b9f40(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9f40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x20))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006b9f60 */
GEN_FRAME uint F_006b9f60(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9f60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x24))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006b9f80 */
GEN_FRAME uint F_006b9f80(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9f80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x28))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006b9fa0 */
GEN_FRAME uint F_006b9fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9fa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x2c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006b9fc0 */
GEN_FRAME uint F_006b9fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9fc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x30))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006b9fe0 */
GEN_FRAME uint F_006b9fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9fe0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x34))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba000 */
GEN_FRAME uint F_006ba000(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba000u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x38))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba020 */
GEN_FRAME uint F_006ba020(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba020u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xd4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba040 */
GEN_FRAME uint F_006ba040(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba040u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xd8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba060 */
GEN_FRAME uint F_006ba060(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba060u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xdc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba080 */
GEN_FRAME uint F_006ba080(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba080u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xe0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba0a0 */
GEN_FRAME uint F_006ba0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba0a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x3c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba0c0 */
GEN_FRAME uint F_006ba0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba0c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x40))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba0e0 */
GEN_FRAME uint F_006ba0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba0e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xd0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba100 */
GEN_FRAME uint F_006ba100(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba100u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x44))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba120 */
GEN_FRAME uint F_006ba120(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba120u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x48))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba140 */
GEN_FRAME uint F_006ba140(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba140u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x4c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba160 */
GEN_FRAME uint F_006ba160(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba160u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x50))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba180 */
GEN_FRAME uint F_006ba180(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba180u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x54))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba1a0 */
GEN_FRAME uint F_006ba1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba1a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x58))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba1c0 */
GEN_FRAME uint F_006ba1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba1c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x5c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba1e0 */
GEN_FRAME uint F_006ba1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba1e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x60))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba200 */
GEN_FRAME uint F_006ba200(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba200u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 100))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba220 */
GEN_FRAME uint F_006ba220(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba220u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x68))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba240 */
GEN_FRAME uint F_006ba240(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba240u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x6c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba260 */
GEN_FRAME uint F_006ba260(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba260u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x70))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba280 */
GEN_FRAME uint F_006ba280(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba280u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x74))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba2a0 */
GEN_FRAME uint F_006ba2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba2a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x78))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba2c0 */
GEN_FRAME uint F_006ba2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba2c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x7c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba2e0 */
GEN_FRAME uint F_006ba2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba2e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x80))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba300 */
GEN_FRAME uint F_006ba300(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba300u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x84))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba320 */
GEN_FRAME uint F_006ba320(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba320u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x88))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba340 */
GEN_FRAME uint F_006ba340(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba340u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x8c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba360 */
GEN_FRAME uint F_006ba360(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba360u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x90))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba380 */
GEN_FRAME uint F_006ba380(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba380u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x94))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba3a0 */
GEN_FRAME uint F_006ba3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba3a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x98))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba3c0 */
GEN_FRAME uint F_006ba3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba3c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x9c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba3e0 */
GEN_FRAME uint F_006ba3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba3e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xa0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba400 */
GEN_FRAME uint F_006ba400(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba400u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xa4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba420 */
GEN_FRAME uint F_006ba420(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba420u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xa8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba440 */
GEN_FRAME uint F_006ba440(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba440u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xac))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba460 */
GEN_FRAME uint F_006ba460(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba460u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xb0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba480 */
GEN_FRAME uint F_006ba480(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba480u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xb4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba4a0 */
GEN_FRAME uint F_006ba4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba4a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xb8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba4c0 */
GEN_FRAME uint F_006ba4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba4c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xbc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba4e0 */
GEN_FRAME uint F_006ba4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba4e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xc0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba500 */
GEN_FRAME uint F_006ba500(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba500u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xc4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba520 */
GEN_FRAME uint F_006ba520(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba520u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 200))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba540 */
GEN_FRAME uint F_006ba540(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba540u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xcc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba560 */
GEN_FRAME uint F_006ba560(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba560u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xe4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_006ba580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_006ba590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_006ba5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_006ba5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf10 */
GEN_NOFRAME uint GEN_THISCALL F_006ba5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_006ba5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_006ba5e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_006ba5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf15 */
GEN_NOFRAME uint GEN_THISCALL F_006ba600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf45 */
GEN_NOFRAME uint GEN_THISCALL F_006ba610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf17 */
GEN_NOFRAME uint GEN_THISCALL F_006ba620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf18 */
GEN_NOFRAME uint GEN_THISCALL F_006ba630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_006ba640 */
GEN_FRAME uint F_006ba640(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba640u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  
  ((uint *)(gen_frame + 0xc))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((param_1 < 0) || (iVar2 = param_1, 2 < param_1)) {
    iVar2 = 0;
  }
  ((uint *)(gen_frame + 0xc))[0] = 0x3c;
  ((uint *)(gen_frame + 0xc))[1] = 0x1e;
  ((uint *)(gen_frame + 0xc))[2] = 0x5a;
  uVar1 = ((uint *)(gen_frame + 0xc))[(int)(iVar2)];
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_006ba6b0 */
GEN_FRAME uint F_006ba6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba6b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xe8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba6d0 */
GEN_FRAME uint F_006ba6d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba6d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xec))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba6f0 */
GEN_FRAME uint F_006ba6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba6f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xf0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba710 */
GEN_FRAME uint F_006ba710(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba710u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xf4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba730 */
GEN_FRAME uint F_006ba730(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba730u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xf8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba750 */
GEN_FRAME uint F_006ba750(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba750u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xfc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba770 */
GEN_FRAME uint F_006ba770(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba770u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x100))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba790 */
GEN_FRAME uint F_006ba790(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba790u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x104))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba7b0 */
GEN_FRAME uint F_006ba7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba7b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x108))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba7d0 */
GEN_FRAME uint F_006ba7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba7d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x10c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba7f0 */
GEN_FRAME uint F_006ba7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba7f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x110))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba810 */
GEN_FRAME uint F_006ba810(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba810u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x114))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba830 */
GEN_FRAME uint F_006ba830(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x118))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba850 */
GEN_FRAME uint F_006ba850(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba850u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x11c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba870 */
GEN_FRAME uint F_006ba870(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba870u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x120))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba890 */
GEN_FRAME uint F_006ba890(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba890u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x124))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba8b0 */
GEN_FRAME uint F_006ba8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba8b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1a0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba8d0 */
GEN_FRAME uint F_006ba8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba8d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1a4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba8f0 */
GEN_FRAME uint F_006ba8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba8f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1a8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba910 */
GEN_FRAME uint F_006ba910(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba910u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x128))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba930 */
GEN_FRAME uint F_006ba930(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 300))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba950 */
GEN_FRAME uint F_006ba950(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba950u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x130))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba970 */
GEN_FRAME uint F_006ba970(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba970u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x134))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006ba990 */
GEN_FRAME uint F_006ba990(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba990u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x138))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) GEN_EDX_ARG,param_1);
  return uVar1;
}

