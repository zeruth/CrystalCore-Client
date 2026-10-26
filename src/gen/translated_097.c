#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_0097e810 */
uint F_0097e810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x97e810u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f068))[*(uint *)((int)this + 0x1d0) >> 0x1a & 1])))();
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f070))
                    [*(uint *)((int)this + 0x1d0) >> 0x1b & 1])))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0097e840 */
unsigned int F_0097e840(void)
{
  GEN_ENTER(0x97e840u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097e850 */
unsigned int F_0097e850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97e850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)*(float *)((int)this + 0x1c4);
  if (fVar1 <= (float10)*param_1) {
    do {
      *param_1 = ((float)GEN_TOF(((float10)*param_1 - (fVar1 - (float10)*(float *)((int)this + 0x1c0)))));
      ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this);
      fVar1 = (float10)*(float *)((int)this + 0x1c4);
    } while ((!GEN_ISNAN((float10)*param_1) && !GEN_ISNAN(fVar1)) && !((float10)*param_1 < fVar1));
  }
  return 0;
}

/* ref: FUN_0097e8a0 */
unsigned int F_0097e8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x97e8a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_0097e8b0 */
uint F_0097e8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97e8b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  if (*param_2 == 0) {
    *(undefined4 *)((int)this + 0x1e0) = *param_3;
  }
  else {
    *(undefined4 *)(*param_2 + 0x1e8) = *param_3;
  }
  if (*(int *)((int)this + 0x1e4) == *param_1) {
    *(int *)((int)this + 0x1e4) = *param_2;
  }
  uVar2 = *(uint *)((int)this + 0x1d0);
  *(uint *)((int)this + 0x1d0) = (((uVar2 >> 9) - 1) * 0x200 ^ uVar2) & 0x3fe00 ^ uVar2;
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  return uVar2;
}

/* ref: switchD_0097e83e::caseD_0 */
unsigned int F_0097e920(void)
{
  GEN_ENTER(0x97e920u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf11 */
unsigned int F_0097e930(unsigned int gen_a0)
{
  GEN_ENTER(0x97e930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f048))[*(uint *)(this + 0x1d0) >> 0x16 & 1])))();
  for (piVar1 = *(int * PTR32 *)(this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf12 */
unsigned int F_0097e970(unsigned int gen_a0)
{
  GEN_ENTER(0x97e970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f050))[*(uint *)(this + 0x1d0) >> 0x17 & 1])))();
  for (piVar1 = *(int * PTR32 *)(this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1);
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf13 */
unsigned int F_0097e9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x97e9b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  for (piVar1 = *(int * PTR32 *)(this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1);
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf15 */
uint F_0097e9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x97e9e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x88;
}

/* ref: FUN_0097e9f0 */
unsigned int F_0097e9f0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97e9f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 0x58) = param_2;
  *(float *)(in_ecx + 0x5c) = param_3;
  *(float *)(in_ecx + 0x60) = param_4;
  return 0;
}

/* ref: FUN_0097ea20 */
unsigned int F_0097ea20(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97ea20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 100) = param_2;
  *(float *)(in_ecx + 0x68) = param_3;
  *(float *)(in_ecx + 0x6c) = param_4;
  return 0;
}

/* ref: FUN_0097ea50 */
unsigned int F_0097ea50(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97ea50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 0x70) = param_2;
  *(float *)(in_ecx + 0x74) = param_3;
  *(float *)(in_ecx + 0x78) = param_4;
  return 0;
}

/* ref: FUN_0097eab0 */
float10 F_0097eab0(unsigned int gen_a0)
{
  GEN_ENTER(0x97eab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(uint *)(in_ecx + 0x1d0) & 0x80000) == 0) {
    return (float10)1;
  }
  if ((float10)*(float *)(in_ecx + 0x1c8) < (float10)*(float *)(in_ecx + 0x1cc)) {
    return (float10)0;
  }
  return (float10)((float)GEN_TOF(((float10)1 -
                         (float10)*(float *)(in_ecx + 0x1cc) / (float10)*(float *)(in_ecx + 0x1c8))));
}

/* ref: FUN_0097eb00 */
uint F_0097eb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97eb00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int in_ecx_00;
  uint in_EAX = 0;
  
  *(uint *)(in_ecx + 0x1d0) = *(uint *)(in_ecx + 0x1d0) | 0x8080000;
  in_ecx_00 = *(int *)(in_ecx + 0x1e0);
  *(float *)(in_ecx + 0x1c8) = (float)param_2;
  *(undefined4 *)(in_ecx + 0x1cc) = 0;
  for (; in_ecx_00 != 0; in_ecx_00 = *(int *)(in_ecx_00 + 0x1e8)) {
    in_EAX = F_0097eb00(in_ecx_00,param_2);
  }
  return in_EAX;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf14 */
unsigned int F_0097eb60(unsigned int gen_a0)
{
  GEN_ENTER(0x97eb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) & 0xefefffff;
  for (piVar1 = *(int * PTR32 *)(this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1);
  }
  return 0;
}

/* ref: FUN_0097eb90 */
unsigned int F_0097eb90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x97eb90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x1bc) * (float10)param_2)));
  *(float *)(in_ecx + 0x1a8) = fVar1;
  *(float *)(in_ecx + 0x1ac) = fVar1;
  return 0;
}

/* ref: FUN_0097ebf0 */
uint F_0097ebf0(unsigned int gen_a0)
{
  GEN_ENTER(0x97ebf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x1d0);
  if ((uVar1 & 0x40000) == 0) {
    uVar1 = uVar1 & 0xf81fffff | 0x40000;
    *(uint *)(in_ecx + 0x1d0) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_0097ec70 */
byte F_0097ec70(unsigned int gen_a0)
{
  GEN_ENTER(0x97ec70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (((*(uint *)(in_ecx + 0x1d0) & 0x40000) != 0) && (*(int *)(in_ecx + 0x1e0) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0097ed20 */
uint F_0097ed20(unsigned int gen_a0)
{
  GEN_ENTER(0x97ed20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)((int)this + 0x1a8);
  uVar2 = *(undefined4 *)((int)this + 0x1ac);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1fc) + 0x18))))(*(int * PTR32 *)((int)this + 0x1fc))));
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,uVar1,uVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1fc) + 0x1c))))(*(int * PTR32 *)((int)this + 0x1fc))));
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,uVar1,uVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1fc) + 0x20))))(*(int * PTR32 *)((int)this + 0x1fc))));
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,uVar1,uVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1fc) + 0x14))))(*(int * PTR32 *)((int)this + 0x1fc))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,uVar1,uVar2);
  return uVar4;
}

/* ref: FUN_0097ee40 */
unsigned int F_0097ee40(unsigned int gen_a0)
{
  GEN_ENTER(0x97ee40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  iVar2 = *(int *)((int)this + 0x1f0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[31])REFP(0x10ddf04));
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + 0x200);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((*(uint *)(iVar2 + 0x1d0) & 0x40000) == 0)) {
      *(uint *)(iVar2 + 0x1d0) = *(uint *)(iVar2 + 0x1d0) & 0xf81fffff | 0x40000;
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[31])REFP(0x10dde84));
  puVar4 = *(undefined4 * PTR32 *)((int)this + 0x1e0);
  while (puVar4 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)puVar4[0x7a];
    ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
    puVar4 = puVar3;
  }
  return 0;
}

/* ref: FUN_0097eed0 */
unsigned int F_0097eed0(void)
{
  GEN_ENTER(0x97eed0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097eee0 */
unsigned int F_0097eee0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97eee0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 0x150) = param_2;
  *(float *)(in_ecx + 0x154) = param_3;
  *(float *)(in_ecx + 0x158) = param_4;
  return 0;
}

/* ref: switchD_009be164::caseD_0 */
unsigned int F_0097ef50(void)
{
  GEN_ENTER(0x97ef50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097ef70 */
uint F_0097ef70(unsigned int gen_a0)
{
  GEN_ENTER(0x97ef70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)((int)this + 0x1a8);
  uVar2 = *(undefined4 *)((int)this + 0x1ac);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0x18))))(*(int * PTR32 *)((int)this + 0x29c))));
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,uVar1,uVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0x1c))))(*(int * PTR32 *)((int)this + 0x29c))));
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,uVar1,uVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0x20))))(*(int * PTR32 *)((int)this + 0x29c))));
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,uVar1,uVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0x14))))(*(int * PTR32 *)((int)this + 0x29c))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,uVar1,uVar2);
  return uVar4;
}

/* ref: Apricot::Engine::Instance::ParticleInstance::vf27 */
uint F_0097f090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x97f090u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0a4))[*(uint *)(this + 0x2ac) >> 9 & 1])))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::ParticleInstance::vf32 */
unsigned int F_0097f0b0(void)
{
  GEN_ENTER(0x97f0b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: switchD_0097f0a3::caseD_1 */
uint F_0097f0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x97f0c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  short * psVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(in_ecx + 0x1d4);
  psVar1 = (short *)(uVar2 + 0x3a8);
  *psVar1 = *psVar1 + 1;
  return uVar2;
}

/* ref: switchD_009be164::caseD_3 */
uint F_0097f0d0(unsigned int gen_a0)
{
  GEN_ENTER(0x97f0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * psVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)((int)this + 0x1d4);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0x68))))(*(int * PTR32 *)((int)this + 0x29c));
  psVar1 = (short *)(iVar2 + 0x380 + uVar3 * 2);
  *psVar1 = *psVar1 + 1;
  return uVar3;
}

/* ref: FUN_0097f0f0 */
unsigned int F_0097f0f0(unsigned int gen_a0)
{
  GEN_ENTER(0x97f0f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint * puVar5;
  uint local_8;
  
  REFG(undefined4, 0x14a0a10) = REFG(undefined4, 0x14a0a10) + 1;
  lVar3 = (longlong)(*(double *)&REFG(undefined, 0x10912a8) * 0.0) + 0x7fffffffffff;
  uVar4 = REFG(undefined4, 0x14a0a10) & 0xffff;
  iVar2 = *(int *)((int)this + 0x1d4);
  uVar1 = *(ushort *)(iVar2 + 0x3aa);
  *(ushort *)(iVar2 + 0x3aa) = uVar1 + 1;
  if (*(int *)(iVar2 + 0x31c) != 0) {
    puVar5 = ((uint *)GEN_TOP(((uint)uVar1 * 0x10 + *(int *)(iVar2 + 0x31c))));
    *puVar5 = (uint)(lVar3 * 0x10000) | uVar4;
    puVar5[1] = (uint)((ulonglong)lVar3 >> 0x10);
    puVar5[2] = (uint)this;
    puVar5[3] = local_8;
  }
  return 0;
}

/* ref: FUN_0097f170 */
unsigned int F_0097f170(void)
{
  GEN_ENTER(0x97f170u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097f180 */
unsigned int F_0097f180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97f180u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_0097f200 */
unsigned int F_0097f200(unsigned int gen_a0)
{
  GEN_ENTER(0x97f200u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_0097f210 */
unsigned int F_0097f210(unsigned int gen_a0)
{
  GEN_ENTER(0x97f210u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_0097f220 */
unsigned int F_0097f220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97f220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0d4))[*(uint *)((int)this + 0x2ac) >> 0xe & 1])))
            ((undefined4 *)((int)this + 0x98));
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)this + 0x98);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)this + 0x9c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((int)this + 0xa0);
  return 0;
}

/* ref: FUN_0097f260 */
unsigned int F_0097f260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97f260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0dc))[*(uint *)((int)this + 0x2ac) >> 0xe & 1])))
            ((undefined4 *)((int)this + 0xa4));
  *(undefined4 *)((int)this + 100) = *(undefined4 *)((int)this + 0xa4);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0xa8);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0xac);
  return 0;
}

/* ref: FUN_0097f2a0 */
unsigned int F_0097f2a0(void)
{
  GEN_ENTER(0x97f2a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097f2b0 */
unsigned int F_0097f2b0(void)
{
  GEN_ENTER(0x97f2b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097f2c0 */
uint F_0097f2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x97f2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0ec))[*(uint *)((int)this + 0x2ac) >> 0xe & 1])))(this,(int)this + 0x88);
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0b4))[*(uint *)((int)this + 0x2ac) >> 10 & 1])))(this);
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0bc))[*(uint *)((int)this + 0x2ac) >> 0xb & 1])))(this);
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0cc))[*(uint *)((int)this + 0x2ac) >> 0xd & 1])))(this);
  ((code *)*(gen_code32 *)((int)this + 0x2b0))(this);
  ((code *)*(gen_code32 *)((int)this + 0x2b4))(this);
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x2b8))(this);
  return uVar1;
}

/* ref: FUN_0097f3c0 */
uint F_0097f3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x97f3c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097f2c0(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0097f3f0 */
uint F_0097f3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97f3f0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_3 == 0) {
    return param_2;
  }
  if (param_3 != 1) {
    if (param_3 != 2) {
      return in_ecx + 0x15c;
    }
    return param_2 + 0x18;
  }
  return param_2 + 0xc;
}

/* ref: FUN_0097f430 */
unsigned int F_0097f430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97f430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_0097f440 */
uint F_0097f440(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97f440u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x29c) + 0xdc))))(*(int * PTR32 *)(param_1 + 0x29c))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1dc) + 0x14))))(*(int * PTR32 *)(param_1 + 0x1dc),uVar2);
  *(uint *)(param_1 + 0x264) = uVar2;
  *(uint *)(param_1 + 0x2a4) = uVar2;
  return uVar2;
}

/* ref: FUN_0097f4a0 */
unsigned int F_0097f4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97f4a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_0097f590 */
uint F_0097f590(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97f590u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(param_1 + 0x2c8))(param_2);
  ((code *)*(gen_code32 *)(param_1 + 0x2cc))(param_1,param_2);
  ((code *)*(gen_code32 *)(param_1 + 0x2d0))(param_1,param_2);
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x2d4))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_0097f610 */
unsigned int F_0097f610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97f610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_0097f620 */
uint F_0097f620(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97f620u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x29c) + 0xdc))))(*(int * PTR32 *)(param_1 + 0x29c))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1dc) + 0x14))))(*(int * PTR32 *)(param_1 + 0x1dc),uVar2);
  *(uint *)(param_1 + 0x264) = uVar2;
  *(uint *)(param_1 + 0x2a4) = uVar2;
  return uVar2;
}

/* ref: FUN_0097f680 */
unsigned int F_0097f680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97f680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_0097f7d0 */
uint F_0097f7d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97f7d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(param_1 + 0x2d8))(param_2);
  ((code *)*(gen_code32 *)(param_1 + 0x2dc))(param_1,param_2);
  ((code *)*(gen_code32 *)(param_1 + 0x2e0))(param_1,param_2);
  ((code *)*(gen_code32 *)(param_1 + 0x2e4))(param_1,param_2);
  ((code *)*(gen_code32 *)(param_1 + 0x2e8))(param_1,param_2);
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x2ec))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_0097f880 */
unsigned int F_0097f880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97f880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  iVar4 = (int)this + 0x240;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined2 *)((int)this + 0x254) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0x8c))))(*(int * PTR32 *)((int)this + 0x29c));
  iVar3 = 0;
  if ((int)uVar1 < 1) {
    *(char *)((int)this + 0x254) = (char)uVar1;
    *(undefined1 *)((int)this + 0x255) = 0;
    return 0;
  }
  do {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0xd8))))
                              (*(int * PTR32 *)((int)this + 0x29c),iVar3)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,iVar4);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 5;
  } while (iVar3 < (int)uVar1);
  *(char *)((int)this + 0x254) = (char)uVar1;
  *(undefined1 *)((int)this + 0x255) = 0;
  return 0;
}

/* ref: FUN_0097f930 */
unsigned int F_0097f930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97f930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  iVar4 = (int)this + 0x240;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined2 *)((int)this + 0x254) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0x8c))))(*(int * PTR32 *)((int)this + 0x29c));
  iVar3 = 0;
  if ((int)uVar1 < 1) {
    *(char *)((int)this + 0x254) = (char)uVar1;
    *(undefined1 *)((int)this + 0x255) = 1;
    return 0;
  }
  do {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0xd8))))
                              (*(int * PTR32 *)((int)this + 0x29c),iVar3)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,iVar4);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 5;
  } while (iVar3 < (int)uVar1);
  *(char *)((int)this + 0x254) = (char)uVar1;
  *(undefined1 *)((int)this + 0x255) = 1;
  return 0;
}

/* ref: Apricot::Engine::Instance::ParticleInstance::vf13 */
unsigned int F_0097f9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x97f9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  for (piVar1 = *(int * PTR32 *)(this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1);
  }
  return 0;
}

/* ref: FUN_0097fa40 */
uint F_0097fa40(unsigned int gen_a0)
{
  GEN_ENTER(0x97fa40u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 1;
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  if (1 < (int)(uVar1 + 1)) {
    uVar4 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
    uVar4 = uVar4 + 1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1);
  if (0 < (int)uVar1) {
    iVar3 = 0;
    do {
      uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,iVar3);
      uVar2 = (int)*(short *)(uVar2 + 6) + 1;
      if ((int)uVar4 < (int)uVar2) {
        uVar4 = uVar2;
      }
      uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,iVar3);
      if ((int)uVar4 < (int)*(short *)(uVar2 + 8)) {
        uVar4 = (int)*(short *)(uVar2 + 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar1);
  }
  return uVar4;
}

/* ref: FUN_0097fac0 */
unsigned int F_0097fac0(void)
{
  GEN_ENTER(0x97fac0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::SchedulerInstance::vf11 */
unsigned int F_0097fad0(unsigned int gen_a0)
{
  GEN_ENTER(0x97fad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  ((code *)*(gen_code32 *)(this + 0x1ec))();
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f048))[*(uint *)(this + 0x1d0) >> 0x16 & 1])))(this);
  for (piVar1 = *(int * PTR32 *)(this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::SchedulerInstance::vf14 */
unsigned int F_0097fb20(unsigned int gen_a0)
{
  GEN_ENTER(0x97fb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) & 0xefefffff;
  piVar1 = *(int * PTR32 *)(this + 0x1e0);
  this[0x1f8] = (undefined1)0x1;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1);
  }
  return 0;
}

/* ref: FUN_0097fb60 */
unsigned int F_0097fb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97fb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  for (piVar1 = *(int * PTR32 *)((int)this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1);
    if (uVar4 == 3) {
      if (piVar1[0x7d] == param_1) {
        iVar2 = piVar1[0x78];
        piVar1[0x74] = piVar1[0x74] | 0x8080000;
        piVar1[0x72] = (int)gen_fl2bits((float)param_2);
        piVar1[0x73] = 0;
        while (iVar2 != 0) {
          uVar4 = F_0097eb00(iVar2,param_2);
          iVar2 = *(int *)(uVar4 + 0x1e8);
        }
      }
    }
    else {
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1);
      if (uVar4 == 9) {
        for (piVar3 = (int *)piVar1[0x78]; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[0x7a]) {
          uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x20))(piVar3);
          if ((uVar4 == 3) && (piVar3[0x7d] == param_1)) {
            iVar2 = piVar3[0x78];
            piVar3[0x74] = piVar3[0x74] | 0x8080000;
            piVar3[0x72] = (int)gen_fl2bits((float)param_2);
            piVar3[0x73] = 0;
            while (iVar2 != 0) {
              uVar4 = F_0097eb00(iVar2,param_2);
              iVar2 = *(int *)(uVar4 + 0x1e8);
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_0097fcb0 */
unsigned int F_0097fcb0(void)
{
  GEN_ENTER(0x97fcb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::TimelineInstance::vf11 */
unsigned int F_0097fcc0(unsigned int gen_a0)
{
  GEN_ENTER(0x97fcc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  ((code *)*(gen_code32 *)(this + 0x1ec))();
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f048))[*(uint *)(this + 0x1d0) >> 0x16 & 1])))(this);
  for (piVar1 = *(int * PTR32 *)(this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceGeneratorInstance::vf25 */
unsigned int F_0097fd40(void)
{
  GEN_ENTER(0x97fd40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceGeneratorInstance::vf27 */
unsigned int F_0097fd50(unsigned int gen_a0)
{
  GEN_ENTER(0x97fd50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  code * pcVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  float10 fVar6;
  int local_8;
  
  fVar6 = (float10)*(float *)(this + 0x1a8);
  if (this[0x200] == (undefined1)0x0) {
    if (fVar6 < (float10)*(int *)(this + 0x1fc)) {
      return 0;
    }
    piVar4 = *(int * PTR32 *)(this + 0x1d8);
    uVar1 = ((code *)*(gen_code32 *)(*piVar4 + 0x20))(piVar4);
    if (uVar1 == 6) {
      piVar5 = (int *)0x0;
      piVar3 = piVar4;
    }
    else {
      piVar3 = (int *)piVar4[0x76];
      piVar5 = piVar4;
    }
    local_8 = *(int *)(this + 0x1f8);
    if (*(int *)(this + 0x1ec) == 0) {
      if (0 < local_8) {
        do {
          ((code *)*(gen_code32 *)(*piVar3 + 0x84))(piVar3,*(undefined4 *)(this + 0x1f0),piVar5);
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
    }
    else if ((*(int *)(this + 0x1ec) == 1) && (0 < local_8)) {
      do {
        ((code *)*(gen_code32 *)(*piVar3 + 0x88))(piVar3,*(undefined4 *)(this + 0x1f0),piVar5);
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    if ((*(uint *)(this + 0x1d0) & 0x40000) != 0) {
      return 0;
    }
    *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) & 0xf81fffff | 0x40000;
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    return 0;
  }
  if ((!GEN_ISNAN(((float10)GEN_TOD((*(int *)(this + 0x1fc) * *(int *)(this + 500))))) && !GEN_ISNAN(fVar6)) &&
      !(((float10)GEN_TOD((*(int *)(this + 0x1fc) * *(int *)(this + 500)))) <= fVar6)) {
    return 0;
  }
  piVar4 = *(int * PTR32 *)(this + 0x1d8);
  uVar1 = ((code *)*(gen_code32 *)(*piVar4 + 0x20))(piVar4);
  if (uVar1 == 6) {
    piVar3 = piVar4;
    piVar4 = (int *)0x0;
  }
  else {
    piVar3 = (int *)piVar4[0x76];
  }
  if (*(int *)(this + 0x1ec) == 0) {
    pcVar2 = *(gen_code32 *)(*piVar3 + 0x84);
  }
  else {
    if (*(int *)(this + 0x1ec) != 1) goto LAB_0097fdd4;
    pcVar2 = *(gen_code32 *)(*piVar3 + 0x88);
  }
  (*pcVar2)(piVar3,*(undefined4 *)(this + 0x1f0),piVar4);
LAB_0097fdd4: ;
  *(int *)(this + 500) = *(int *)(this + 500) + 1;
  if ((*(int *)(this + 500) == *(int *)(this + 0x1f8)) && ((*(uint *)(this + 0x1d0) & 0x40000) == 0)
     ) {
    *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) & 0xf81fffff | 0x40000;
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    return 0;
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::CameraBinderInstance::vf13 */
unsigned int F_0097fee0(void)
{
  GEN_ENTER(0x97fee0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::LinearBinderInstance::vf13 */
unsigned int F_0097fef0(void)
{
  GEN_ENTER(0x97fef0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::PointBinderInstance::vf13 */
unsigned int F_0097ff00(void)
{
  GEN_ENTER(0x97ff00u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::SplineBinderInstance::vf13 */
unsigned int F_0097ff10(void)
{
  GEN_ENTER(0x97ff10u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_009801b0 */
unsigned int F_009801b0(float gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9801b0u, 0u, gen_a1, gen_a2, gen_a3);
  float param_1 = (float)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar2 = (float10)param_1;
  fVar3 = (float10)(float)(fVar2 * fVar2);
  fVar4 = (float10)(float)(fVar3 * fVar2);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar6 = fVar4 * fVar5;
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  *param_2 = ((float)GEN_TOF(((fVar6 - fVar3 * fVar1) + (float10)REFG(double, 0x1088130))));
  *param_3 = (float)(fVar3 * fVar1 - fVar6);
  *param_4 = ((float)GEN_TOF(((fVar4 - fVar3 * fVar5) + fVar2)));
  *param_5 = (float)(fVar4 - fVar3);
  return 0;
}

/* ref: FUN_00980210 */
float10 F_00980210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x980210u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)*(float *)(param_1 + 4 + param_2 * 8);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0xc + param_2 * 8) - fVar2)));
  if (-1 < (int)(param_2 - 1)) {
    fVar3 = (float10)*(float *)(param_1 + 8 + param_2 * 8);
    return (float10)((float)GEN_TOF((((float10)fVar1 +
                            (fVar2 - (float10)*(float *)(param_1 + -4 + param_2 * 8))) *
                           (float10)((float)GEN_TOF(((fVar3 - (float10)*(float *)(param_1 + param_2 * 8)) /
                                           (fVar3 - (float10)*(float *)(param_1 + -8 + param_2 * 8))
                                           ))))));
  }
  return (float10)fVar1;
}

/* ref: FUN_00980280 */
float10 F_00980280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x980280u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)*(float *)(param_1 + 0xc + param_2 * 8);
  iVar1 = param_2 + 2;
  fVar2 = ((float)GEN_TOF((fVar3 - (float10)*(float *)(param_1 + 4 + param_2 * 8))));
  if (iVar1 <= *(int *)(param_1 + 0x20) + -1) {
    fVar4 = (float10)*(float *)(param_1 + param_2 * 8);
    return (float10)((float)GEN_TOF((((float10)fVar2 + ((float10)*(float *)(param_1 + 4 + iVar1 * 8) - fVar3)
                            ) * (float10)((float)GEN_TOF((((float10)*(float *)(param_1 + 8 + param_2 * 8) -
                                                 fVar4) / ((float10)*(float *)(param_1 + iVar1 * 8)
                                                          - fVar4)))))));
  }
  return (float10)fVar2;
}

/* ref: FUN_009802f0 */
float10 F_009802f0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9802f0u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float local_c;
  
  pfVar2 = (float *)(param_1 + 8 + param_3 * 8);
  fVar5 = (float10)*(float *)(param_1 + param_3 * 8);
  iVar1 = param_3 + 2;
  fVar3 = ((float)GEN_TOF((((float10)param_2 - fVar5) / ((float10)*pfVar2 - fVar5))));
  local_c = ((float)GEN_TOF(((float10)pfVar2[1] - (float10)*(float *)(param_1 + 4 + param_3 * 8))));
  if (iVar1 <= *(int *)(param_1 + 0x20) + -1) {
    fVar5 = (float10)*(float *)(param_1 + param_3 * 8);
    local_c = ((float)GEN_TOF((((float10)local_c +
                      ((float10)*(float *)(param_1 + 4 + iVar1 * 8) - (float10)pfVar2[1])) *
                     (float10)((float)GEN_TOF((((float10)*pfVar2 - fVar5) /
                                     ((float10)*(float *)(param_1 + iVar1 * 8) - fVar5)))))));
  }
  fVar6 = (float10)fVar3;
  fVar7 = (float10)(float)(fVar6 * fVar6);
  fVar4 = (float)(fVar7 * fVar6);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  fVar8 = F_00980210(param_1,param_3);
  fVar6 = (float10)(float)(fVar6 * fVar6);
  fVar5 = (float10)(double)(fVar7 * fVar5);
  return (float10)((float)GEN_TOF(((float10)(float)((float10)fVar4 - fVar6) * (float10)local_c +
                         (((float10)((float)GEN_TOF((fVar5 - (float10)(fVar4 + fVar4)))) * (float10)pfVar2[1] +
                          (float10)((float)GEN_TOF((((float10)(fVar4 + fVar4) - fVar5) +
                                          (float10)REFG(double, 0x1088130)))) *
                          (float10)*(float *)(((int)(uint)(param_1)) + 4 + param_3 * 8)) +
                         (float10)((float)GEN_TOF(((float10)fVar3 + ((float10)fVar4 - (fVar6 + fVar6))))) *
                         fVar8))));
}

/* ref: FUN_00980400 */
uint F_00980400(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x980400u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x20) + -1;
  if (-1 < iVar3) {
    do {
      uVar1 = (iVar3 - iVar2 >> 1) + iVar2;
      if ((float10)param_2 < (float10)*(float *)(param_1 + uVar1 * 8)) {
        iVar3 = uVar1 - 1;
      }
      else {
        if (!((float10)*(float *)(param_1 + 8 + uVar1 * 8) < (float10)param_2)) {
          return uVar1;
        }
        iVar2 = uVar1 + 1;
      }
    } while (iVar2 <= iVar3);
  }
  return 0;
}

/* ref: FUN_00980450 */
uint F_00980450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x980450u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_00980460 */
uint F_00980460(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x980460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 4 + param_2 * 8) = param_3;
  return param_2;
}

/* ref: FUN_00980480 */
uint F_00980480(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x980480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + param_2 * 8) = param_3;
  return param_2;
}

/* ref: FUN_009804a0 */
float10 F_009804a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9804a0u, gen_a0, 0u, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  float10 fVar2;
  
  if ((float10)param_2 <= (float10)*param_1) {
    return (float10)param_1[1];
  }
  if (((float10)GEN_TOD(param_1[(int)gen_fl2bits(param_1[8]) * 2 + -2])) <= (float10)param_2) {
    return ((float10)GEN_TOD((param_1 + (int)gen_fl2bits(param_1[8]) * 2 + -2)[1]));
  }
  uVar1 = F_00980400(param_1,param_2);
  fVar2 = F_009802f0(((undefined4)(uint)(param_1)),param_2,uVar1);
  return fVar2;
}

/* ref: FUN_009804f0 */
uint F_009804f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9804f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de010));
  *(int * PTR32 *)((int)this + 4) = param_1;
  if (param_1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x34))(param_1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,(int)this + 8);
  }
  return (uint)this;
}

/* ref: FUN_00980540 */
uint F_00980540(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x980540u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x34))))(*(int * PTR32 *)(param_1 + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  return uVar2;
}

/* ref: Apricot::Engine::Instance::LineParticleInstance::vf26 */
uint F_009805e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9805e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)(this + 0x1a8);
  uVar2 = *(undefined4 *)(this + 0x1ac);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xa8))))(*(int * PTR32 *)(this + 0x29c))));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
  ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,uVar1,uVar2,this + 0x32d);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xa8))))(*(int * PTR32 *)(this + 0x29c))));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3)));
  ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,uVar1,uVar2,this + 0x332);
  uVar4 = F_0097ef70(this);
  return uVar4;
}

/* ref: Apricot::Engine::Instance::LineParticleInstance::vf29 */
uint F_00980690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x980690u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xa4))))(*(int * PTR32 *)(this + 0x29c));
  if (((char)uVar1 != '\0') && (*(int *)(this + 0x298) == 0)) {
    return uVar1;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x84))(this);
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0f4))[(char)this[0x337]])))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_009806e0 */
uint F_009806e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9806e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * in_EAX = 0;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  if (*(int *)((int)this + 0x298) != 0) {
    in_EAX = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0xf4))))(*(int * PTR32 *)((int)this + 0x29c))));
    iVar3 = (int)*(short *)(in_EAX + 0x2e);
    if (0 < iVar3) {
      puVar1 = param_1;
      do {
        in_EAX = puVar1 + 0x14;
        iVar3 = iVar3 + -1;
        puVar4 = ((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
        for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar1 = in_EAX;
      } while (iVar3 != 0);
    }
  }
  return (uint)in_EAX;
}

/* ref: Apricot::Engine::Instance::PowderParticleInstance::vf29 */
uint F_00980740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x980740u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xa4))))(*(int * PTR32 *)(this + 0x29c));
  if (((char)uVar1 != '\0') && (*(int *)(this + 0x298) == 0)) {
    return uVar1;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x84))(this);
  uVar1 = ((code *)*(gen_code32 *)(this + 0x348))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00980780 */
uint F_00980780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x980780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * in_EAX = 0;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  if (*(int *)((int)this + 0x298) != 0) {
    in_EAX = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0xf4))))(*(int * PTR32 *)((int)this + 0x29c))));
    iVar3 = (int)*(short *)(in_EAX + 0x2e);
    if (0 < iVar3) {
      puVar1 = param_1;
      do {
        in_EAX = puVar1 + 0x14;
        iVar3 = iVar3 + -1;
        puVar4 = ((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
        for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar1 = in_EAX;
      } while (iVar3 != 0);
    }
  }
  return (uint)in_EAX;
}

/* ref: Apricot::Engine::Instance::WindmillParticleInstance::vf25 */
unsigned int F_009807e0(void)
{
  GEN_ENTER(0x9807e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_009808e0 */
unsigned int F_009808e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9808e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  int local_8;
  
  local_8 = *(int *)((int)this + 0x318);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10de25c));
  uVar1 = REFG(undefined4, 0x14a09e8);
  if (0 < local_8) {
    piVar3 = (int *)((int)this + 800);
    uVar2 = REFG(undefined4, 0x14a09e8);
    do {
      uVar1 = uVar2;
      if (*piVar3 != 0) {
        uVar1 = (uint)(*piVar3 - REFG(int, 0x14a09f4)) >> 10;
        *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = uVar2;
        REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
        REFG(undefined4, 0x14a09e8) = uVar1;
      }
      piVar3 = piVar3 + 1;
      local_8 = local_8 + -1;
      uVar2 = uVar1;
    } while (local_8 != 0);
  }
  if (*(int *)((int)this + 0x31c) != 0) {
    REFG(undefined4, 0x14a09e8) = (uint)(*(int *)((int)this + 0x31c) - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(REFG(undefined4, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4)) = uVar1;
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(this);
  return 0;
}

/* ref: FUN_00980980 */
unsigned int F_00980980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x980980u, gen_a0, gen_a1, gen_a2, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  short sVar1;
  short sVar2;
  short * psVar3;
  int iVar4;
  
  iVar4 = param_3 + -1;
  if (iVar4 != 0) {
    psVar3 = param_1;
    sVar2 = (short)param_2 + 1;
    do {
      *psVar3 = sVar2 + -1;
      psVar3[1] = sVar2;
      sVar1 = sVar2 + 3;
      psVar3[2] = sVar1;
      psVar3[3] = sVar1;
      psVar3[4] = sVar2 + 2;
      psVar3[5] = sVar2 + -1;
      psVar3[6] = sVar2;
      psVar3[7] = sVar2 + 1;
      psVar3[8] = sVar1;
      psVar3[9] = sVar2 + 1;
      psVar3[10] = sVar2 + 4;
      psVar3[0xb] = sVar1;
      psVar3 = psVar3 + 0xc;
      iVar4 = iVar4 + -1;
      sVar2 = sVar1;
    } while (iVar4 != 0);
  }
  return 0;
}

/* ref: FUN_009809f0 */
uint F_009809f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9809f0u, gen_a0, gen_a1, gen_a2, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  short sVar1;
  short * in_EAX = 0;
  int iVar2;
  
  iVar2 = param_3 + -1;
  if (iVar2 != 0) {
    sVar1 = (short)param_2 + 3;
    in_EAX = param_1;
    do {
      *in_EAX = sVar1 + -3;
      in_EAX[1] = sVar1 + -2;
      in_EAX[2] = sVar1;
      in_EAX[3] = sVar1;
      in_EAX[4] = sVar1 + -1;
      in_EAX[5] = sVar1 + -3;
      in_EAX = in_EAX + 6;
      sVar1 = sVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return (uint)in_EAX;
}

/* ref: Apricot::Engine::Instance::QuadParticleInstance::vf25 */
unsigned int F_00980a90(void)
{
  GEN_ENTER(0x980a90u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::DecalParticleInstance::vf13 */
unsigned int F_00980af0(unsigned int gen_a0)
{
  GEN_ENTER(0x980af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  for (piVar1 = *(int * PTR32 *)(this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1);
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::DecalRingParticleInstance::vf13 */
unsigned int F_00980b70(unsigned int gen_a0)
{
  GEN_ENTER(0x980b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  for (piVar1 = *(int * PTR32 *)(this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1);
  }
  return 0;
}

/* ref: FUN_00980bf0 */
unsigned int F_00980bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x980bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  short * psVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int local_8;
  
  cVar1 = *((char *)GEN_TOP((*(int *)((int)this + 0x304) + 0xd1)));
  iVar5 = *((char *)GEN_TOP((*(int *)((int)this + 0x304) + 0xd2))) + -1;
  local_8 = 0;
  psVar6 = param_1;
  if (0 < iVar5) {
    do {
      iVar9 = 0;
      if (0 < cVar1 + -1) {
        sVar3 = (short)local_8 * (short)cVar1;
        sVar2 = ((short)local_8 + 1) * (short)cVar1;
        do {
          sVar4 = (short)iVar9;
          *psVar6 = sVar3 + sVar4 + (short)param_2;
          sVar8 = sVar3 + sVar4 + 1 + (short)param_2;
          psVar6[1] = sVar8;
          sVar7 = sVar4 + sVar2 + (short)param_2;
          psVar6[2] = sVar7;
          psVar6[3] = sVar7;
          psVar6[4] = sVar8;
          psVar6[5] = sVar4 + 1 + sVar2 + (short)param_2;
          iVar9 = iVar9 + 1;
          psVar6 = psVar6 + 6;
        } while (iVar9 < cVar1 + -1);
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar5);
  }
  return 0;
}

/* ref: FUN_00980cd0 */
unsigned int F_00980cd0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x980cd0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return 0;
}

/* ref: FUN_00980d00 */
unsigned int F_00980d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x980d00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return 0;
}

/* ref: FUN_00980da0 */
uint F_00980da0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x980da0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  return (uint)in_ecx;
}

/* ref: FUN_00980dd0 */
unsigned int F_00980dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x980dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return 0;
}

/* ref: FUN_00980df0 */
unsigned int F_00980df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x980df0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 * (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] * (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] * (float10)param_3[2]);
  return 0;
}

/* ref: FUN_00980e20 */
unsigned int F_00980e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x980e20u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  
  fVar1 = (float10)param_4;
  *param_1 = ((float)GEN_TOF((fVar1 * ((float10)*param_3 - (float10)*(float *)param_2) +
                    (float10)*(float *)param_2)));
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) +
                      fVar1 * ((float10)param_3[1] - (float10)*(float *)(param_2 + 4)))));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) +
                      ((float10)param_3[2] - (float10)*(float *)(param_2 + 8)) * fVar1)));
  return 0;
}

/* ref: FUN_00980e80 */
unsigned int F_00980e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x980e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  *param_1 = ((float)GEN_TOF(((float10)*(float *)param_2 +
                    (float10)*param_4 * ((float10)*param_3 - (float10)*(float *)param_2))));
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) +
                      (float10)param_4[1] * ((float10)param_3[1] - (float10)*(float *)(param_2 + 4))
                      )));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) +
                      (float10)param_4[2] * ((float10)param_3[2] - (float10)*(float *)(param_2 + 8))
                      )));
  return 0;
}

/* ref: FUN_00980ee0 */
unsigned int F_00980ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x980ee0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * (float10)param_3[2] +
                 ((float10)*(float *)param_2 * (float10)*param_3 +
                 (float10)*(float *)(param_2 + 4) * (float10)param_3[1]))));
  *param_1 = fVar1;
  param_1[1] = fVar1;
  param_1[2] = fVar1;
  return 0;
}

/* ref: FUN_00980f10 */
unsigned int F_00980f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x980f10u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)param_2[1] * (float10)param_3[2] -
                    (float10)param_2[2] * (float10)param_3[1]);
  param_1[1] = (float)((float10)param_2[2] * (float10)*param_3 -
                      (float10)*param_2 * (float10)param_3[2]);
  param_1[2] = (float)((float10)param_3[1] * (float10)*param_2 -
                      (float10)*param_3 * (float10)param_2[1]);
  return 0;
}

/* ref: FUN_00980f50 */
unsigned int F_00980f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x980f50u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * (float10)*(float *)(param_2 + 8) +
                 ((float10)*(float *)param_2 * (float10)*(float *)param_2 +
                 (float10)*(float *)(param_2 + 4) * (float10)*(float *)(param_2 + 4)))));
  *param_1 = fVar1;
  param_1[1] = fVar1;
  param_1[2] = fVar1;
  return 0;
}

/* ref: FUN_00981050 */
uint F_00981050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x981050u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar7 = (float10)*(float *)param_2;
  fVar8 = (float10)*(float *)(param_2 + 4);
  fVar9 = (float10)*(float *)(param_2 + 8);
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0x10);
  fVar3 = *(float *)(param_3 + 0x1c);
  fVar4 = *(float *)(param_3 + 0xc);
  fVar5 = *(float *)param_3;
  fVar6 = *(float *)(param_3 + 0x18);
  param_1[2] = ((float)GEN_TOF(((fVar7 * (float10)*(float *)(param_3 + 8) +
                       fVar8 * (float10)*(float *)(param_3 + 0x14)) +
                      fVar9 * (float10)*(float *)(param_3 + 0x20))));
  *param_1 = ((float)GEN_TOF((((float10)fVar4 * fVar8 + (float10)fVar5 * fVar7) + (float10)fVar6 * fVar9)));
  param_1[1] = ((float)GEN_TOF(((float10)fVar3 * fVar9 + ((float10)fVar2 * fVar8 + (float10)fVar1 * fVar7))));
  return (uint)param_1;
}

/* ref: FUN_009810e0 */
unsigned int F_009810e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9810e0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar7 = (float10)*(float *)param_2;
  fVar8 = (float10)*(float *)(param_2 + 4);
  fVar9 = (float10)*(float *)(param_2 + 8);
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 0x10);
  fVar5 = *(float *)param_3;
  fVar6 = *(float *)(param_3 + 0x20);
  param_1[2] = ((float)GEN_TOF(((fVar7 * (float10)*(float *)(param_3 + 8) +
                       fVar8 * (float10)*(float *)(param_3 + 0x18)) +
                      fVar9 * (float10)*(float *)(param_3 + 0x28))));
  *param_1 = ((float)GEN_TOF((((float10)fVar4 * fVar8 + (float10)fVar5 * fVar7) + (float10)fVar6 * fVar9)));
  param_1[1] = ((float)GEN_TOF(((float10)fVar3 * fVar9 + ((float10)fVar2 * fVar8 + (float10)fVar1 * fVar7))));
  return 0;
}

/* ref: FUN_00981170 */
uint F_00981170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x981170u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar9 = (float10)*(float *)param_2;
  fVar10 = (float10)*(float *)(param_2 + 4);
  fVar11 = (float10)*(float *)(param_2 + 8);
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0x10);
  fVar3 = *(float *)(param_3 + 0x1c);
  fVar4 = *(float *)(param_3 + 0x28);
  fVar5 = *(float *)(param_3 + 0xc);
  fVar6 = *(float *)param_3;
  fVar7 = *(float *)(param_3 + 0x18);
  fVar8 = *(float *)(param_3 + 0x24);
  param_1[2] = ((float)GEN_TOF((((fVar9 * (float10)*(float *)(param_3 + 8) +
                        fVar10 * (float10)*(float *)(param_3 + 0x14)) +
                       fVar11 * (float10)*(float *)(param_3 + 0x20)) +
                      (float10)*(float *)(param_3 + 0x2c))));
  *param_1 = ((float)GEN_TOF(((((float10)fVar5 * fVar10 + (float10)fVar6 * fVar9) + (float10)fVar7 * fVar11)
                    + (float10)fVar8)));
  param_1[1] = ((float)GEN_TOF((((float10)fVar3 * fVar11 + ((float10)fVar2 * fVar10 + (float10)fVar1 * fVar9)
                       ) + (float10)fVar4)));
  return (uint)param_1;
}

/* ref: FUN_00981210 */
uint F_00981210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x981210u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar9 = (float10)*(float *)param_2;
  fVar10 = (float10)*(float *)(param_2 + 4);
  fVar11 = (float10)*(float *)(param_2 + 8);
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 0x34);
  fVar5 = *(float *)(param_3 + 0x10);
  fVar6 = *(float *)param_3;
  fVar7 = *(float *)(param_3 + 0x20);
  fVar8 = *(float *)(param_3 + 0x30);
  param_1[2] = ((float)GEN_TOF((((fVar9 * (float10)*(float *)(param_3 + 8) +
                        fVar10 * (float10)*(float *)(param_3 + 0x18)) +
                       fVar11 * (float10)*(float *)(param_3 + 0x28)) +
                      (float10)*(float *)(param_3 + 0x38))));
  *param_1 = ((float)GEN_TOF(((((float10)fVar5 * fVar10 + (float10)fVar6 * fVar9) + (float10)fVar7 * fVar11)
                    + (float10)fVar8)));
  param_1[1] = ((float)GEN_TOF((((float10)fVar3 * fVar11 + ((float10)fVar2 * fVar10 + (float10)fVar1 * fVar9)
                       ) + (float10)fVar4)));
  return (uint)param_1;
}

/* ref: FUN_00981310 */
uint F_00981310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x981310u, gen_a0, gen_a1, 0u, 0u);
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
  return (uint)in_ecx;
}

/* ref: FUN_00981370 */
unsigned int F_00981370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x981370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = *param_3;
  in_ecx[4] = param_3[1];
  in_ecx[5] = param_3[2];
  in_ecx[6] = *param_4;
  in_ecx[7] = param_4[1];
  in_ecx[8] = param_4[2];
  in_ecx[9] = *param_5;
  in_ecx[10] = param_5[1];
  in_ecx[0xb] = param_5[2];
  return 0;
}

/* ref: FUN_009813d0 */
uint F_009813d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9813d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[3];
  param_1[2] = param_2[6];
  param_1[3] = param_2[1];
  param_1[4] = param_2[4];
  param_1[5] = param_2[7];
  param_1[6] = param_2[2];
  param_1[7] = param_2[5];
  uVar1 = param_2[8];
  param_1[9] = 0;
  param_1[8] = uVar1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return (uint)param_1;
}

/* ref: FUN_00981430 */
byte F_00981430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x981430u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
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
  float fVar21;
  float fVar22;
  
  fVar10 = REFG(float, 0x1087f04);
  fVar1 = *(float *)param_2;
  fVar4 = *(float *)(param_2 + 0x1c);
  fVar5 = *(float *)(param_2 + 0x20);
  fVar11 = (float10)fVar5;
  fVar2 = *(float *)(param_2 + 0x18);
  fVar12 = (float10)*(float *)(param_2 + 0x10);
  fVar3 = *(float *)(param_2 + 0x24);
  fVar21 = *(float *)(param_2 + 0x28);
  fVar22 = *(float *)(param_2 + 0x2c);
  fVar13 = (float10)*(float *)(param_2 + 0x14);
  fVar14 = (float10)*(float *)(param_2 + 8);
  fVar15 = (float10)*(float *)(param_2 + 4);
  fVar16 = (float10)*(float *)(param_2 + 0xc);
  dVar7 = (double)((float10)fVar22 * (float10)fVar2 - (float10)fVar3 * (float10)fVar5);
  dVar8 = (double)((float10)fVar22 * (float10)fVar4 - (float10)fVar21 * (float10)fVar5);
  dVar9 = (double)((float10)fVar21 * (float10)fVar2 - (float10)fVar3 * (float10)fVar4);
  fVar17 = (float10)(float)((float10)fVar2 * fVar13 - fVar16 * fVar11);
  fVar18 = (float10)(float)(fVar12 * fVar11 - fVar13 * (float10)fVar4);
  fVar19 = (float10)(float)((float10)fVar4 * fVar16 - (float10)fVar2 * fVar12);
  fVar6 = ((float)GEN_TOF(((fVar17 * fVar15 + fVar18 * (float10)fVar1) + fVar19 * fVar14)));
  fVar20 = (float10)fVar6;
  if (((float10)*(double *)&REFG(undefined, 0x10de528) <= fVar20) && (fVar6 <= ((float)GEN_TOF((*(float (*)[1])REFP(0x10de524))[0])))) {
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = fVar10;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[8] = fVar10;
    fVar21 = gen_bits2f((uint)gen_fl2bits(fVar21) ^ REFG(uint, 0x10920d0));
    fVar22 = gen_bits2f((uint)gen_fl2bits(fVar22) ^ REFG(uint, 0x10920d0));
    param_1[9] = gen_bits2f((uint)gen_fl2bits(fVar3) ^ REFG(uint, 0x10920d0));
    param_1[10] = fVar21;
    param_1[0xb] = fVar22;
    return 0;
  }
  fVar20 = (float10)(float)((float10)1 / fVar20);
  *param_1 = (float)(fVar20 * fVar18);
  param_1[1] = ((float)GEN_TOF((fVar20 * (float10)(float)(fVar14 * (float10)fVar4 - fVar15 * fVar11))));
  param_1[2] = ((float)GEN_TOF((fVar20 * (float10)(float)(fVar13 * fVar15 - fVar12 * fVar14))));
  param_1[3] = (float)(fVar20 * fVar17);
  param_1[4] = ((float)GEN_TOF((fVar20 * (float10)(float)((float10)fVar5 * (float10)fVar1 -
                                                (float10)fVar2 * fVar14))));
  param_1[5] = ((float)GEN_TOF((fVar20 * (float10)(float)(fVar16 * fVar14 - fVar13 * (float10)fVar1))));
  param_1[6] = (float)(fVar20 * fVar19);
  param_1[7] = ((float)GEN_TOF((fVar20 * (float10)(float)((float10)fVar2 * fVar15 -
                                                (float10)fVar4 * (float10)fVar1))));
  param_1[8] = ((float)GEN_TOF((fVar20 * (float10)(float)(fVar12 * (float10)fVar1 - fVar16 * fVar15))));
  param_1[9] = ((float)GEN_TOF((fVar20 * (float10)((float)GEN_TOF(((fVar12 * (float10)dVar7 - fVar16 * (float10)dVar8)
                                                - fVar13 * (float10)dVar9))))));
  param_1[10] = ((float)GEN_TOF((fVar20 * (float10)((float)GEN_TOF((fVar14 * (float10)dVar9 +
                                                 ((float10)fVar1 * (float10)dVar8 -
                                                 fVar15 * (float10)dVar7)))))));
  param_1[0xb] = ((float)GEN_TOF((fVar20 * (float10)((float)GEN_TOF(((((float10)fVar22 * fVar16 -
                                                    (float10)fVar3 * fVar13) * fVar15 -
                                                   (float10)fVar1 *
                                                   ((float10)fVar22 * fVar12 -
                                                   (float10)fVar21 * fVar13)) -
                                                  fVar14 * ((float10)fVar21 * fVar16 -
                                                           (float10)fVar3 * fVar12)))))));
  return 1;
}

/* ref: FUN_00981700 */
unsigned int F_00981700(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x981700u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar6 = (float10)REFG(double, 0x1088108);
  fVar1 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(float)((float10)param_6 * fVar6));
  fVar2 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(float)((float10)param_6 * fVar6));
  fVar6 = (float10)REFG(double, 0x1088108);
  fVar3 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(float)((float10)param_7 * fVar6));
  fVar4 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(float)((float10)param_7 * fVar6));
  fVar6 = (float10)REFG(double, 0x1088108);
  fVar5 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(float)((float10)param_8 * fVar6));
  fVar6 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(float)((float10)param_8 * fVar6));
  fVar8 = (float10)(float)fVar1 * (float10)(float)fVar4;
  fVar7 = (float10)(float)fVar3 * (float10)(float)fVar2;
  fVar6 = (float10)(float)fVar6;
  fVar5 = (float10)(float)fVar5;
  fVar9 = (float10)(float)fVar2 * (float10)(float)fVar4;
  fVar4 = (float10)(float)fVar3 * (float10)(float)fVar1;
  fVar1 = (float10)(float)(fVar6 * fVar8 - fVar5 * fVar7);
  fVar2 = (float10)(float)(fVar6 * fVar7 + fVar5 * fVar8);
  fVar3 = (float10)(float)(fVar5 * fVar9 - fVar6 * fVar4);
  fVar4 = (float10)(float)(fVar5 * fVar4 + fVar6 * fVar9);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar6 = (float10)1;
  *param_5 = ((float)GEN_TOF((fVar6 - ((float10)(float)(fVar2 * fVar2) + (float10)(float)(fVar3 * fVar3)) *
                             fVar5)));
  param_5[1] = ((float)GEN_TOF((((float10)(float)(fVar2 * fVar1) - (float10)(float)(fVar3 * fVar4)) * fVar5)));
  param_5[2] = ((float)GEN_TOF((((float10)(float)(fVar4 * fVar2) + (float10)(float)(fVar3 * fVar1)) * fVar5)));
  param_5[3] = ((float)GEN_TOF((((float10)(float)(fVar3 * fVar4) + (float10)(float)(fVar2 * fVar1)) * fVar5)));
  param_5[4] = ((float)GEN_TOF((fVar6 - ((float10)(float)(fVar1 * fVar1) + (float10)(float)(fVar3 * fVar3)) *
                               fVar5)));
  param_5[5] = ((float)GEN_TOF((((float10)(float)(fVar3 * fVar2) - (float10)(float)(fVar4 * fVar1)) * fVar5)));
  param_5[6] = ((float)GEN_TOF((((float10)(float)(fVar3 * fVar1) - (float10)(float)(fVar4 * fVar2)) * fVar5)));
  param_5[7] = ((float)GEN_TOF((((float10)(float)(fVar4 * fVar1) + (float10)(float)(fVar3 * fVar2)) * fVar5)));
  param_5[9] = 0.0;
  param_5[10] = 0.0;
  param_5[0xb] = 0.0;
  param_5[8] = ((float)GEN_TOF((fVar6 - fVar5 * ((float10)(float)(fVar2 * fVar2) +
                                       (float10)(float)(fVar1 * fVar1)))));
  return 0;
}

/* ref: FUN_009818e0 */
float10 F_009818e0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0x9818e0u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 uVar1;
  float10 fVar2;
  float10 fVar3;
  float10 extraout_ST1;
  
  fVar2 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar3 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  uVar1 = REFG(float, 0x1087f04);
  param_5[4] = (undefined4)gen_fl2bits((float)fVar2);
  *param_5 = uVar1;
  param_5[5] = (undefined4)gen_fl2bits((float)fVar3);
  param_5[1] = 0;
  param_5[2] = 0;
  param_5[7] = (undefined4)gen_fl2bits(((float)GEN_TOF(-(float10)(float)fVar3)));
  param_5[3] = 0;
  param_5[6] = 0;
  param_5[8] = (undefined4)gen_fl2bits((float)fVar2);
  param_5[9] = 0;
  param_5[10] = 0;
  param_5[0xb] = 0;
  return extraout_ST1;
}

/* ref: FUN_00981960 */
float10 F_00981960(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0x981960u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 extraout_ST1;
  
  fVar2 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar3 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar1 = REFG(float, 0x1087f04);
  *param_5 = (float)fVar2;
  param_5[4] = fVar1;
  param_5[1] = 0.0;
  param_5[3] = 0.0;
  param_5[2] = ((float)GEN_TOF(-(float10)(float)fVar3));
  param_5[5] = 0.0;
  param_5[7] = 0.0;
  param_5[6] = (float)fVar3;
  param_5[8] = (float)fVar2;
  param_5[9] = 0.0;
  param_5[10] = 0.0;
  param_5[0xb] = 0.0;
  return extraout_ST1;
}

/* ref: FUN_009819e0 */
float10 F_009819e0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0x9819e0u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 extraout_ST1;
  
  fVar2 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar3 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar1 = REFG(float, 0x1087f04);
  *param_5 = (float)fVar2;
  param_5[2] = 0.0;
  param_5[5] = 0.0;
  param_5[1] = (float)fVar3;
  param_5[6] = 0.0;
  param_5[7] = 0.0;
  param_5[3] = ((float)GEN_TOF(-(float10)(float)fVar3));
  param_5[8] = fVar1;
  param_5[9] = 0.0;
  param_5[4] = (float)fVar2;
  param_5[10] = 0.0;
  param_5[0xb] = 0.0;
  return extraout_ST1;
}

/* ref: FUN_00981a60 */
unsigned int F_00981a60(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0x981a60u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float param_7 = (float)gen_a6;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_7);
  fVar2 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_7);
  fVar1 = (float10)(float)fVar1;
  fVar3 = (float10)(float)((float10)1 - fVar1);
  *param_5 = ((float)GEN_TOF((fVar1 + fVar3 * ((float10)*param_6 * (float10)*param_6))));
  fVar2 = (float10)(float)fVar2;
  param_5[1] = ((float)GEN_TOF((((float10)*param_6 * (float10)param_6[1]) * fVar3 +
                      fVar2 * (float10)param_6[2])));
  param_5[2] = ((float)GEN_TOF((((float10)param_6[2] * (float10)*param_6) * fVar3 -
                      fVar2 * (float10)param_6[1])));
  param_5[3] = ((float)GEN_TOF((((float10)*param_6 * (float10)param_6[1]) * fVar3 -
                      (float10)param_6[2] * fVar2)));
  param_5[4] = ((float)GEN_TOF((((float10)param_6[1] * (float10)param_6[1]) * fVar3 + fVar1)));
  param_5[5] = ((float)GEN_TOF(((float10)*param_6 * fVar2 +
                      ((float10)param_6[2] * (float10)param_6[1]) * fVar3)));
  param_5[6] = ((float)GEN_TOF((fVar2 * (float10)param_6[1] +
                      ((float10)param_6[2] * (float10)*param_6) * fVar3)));
  param_5[7] = ((float)GEN_TOF((((float10)param_6[2] * (float10)param_6[1]) * fVar3 -
                      (float10)*param_6 * fVar2)));
  param_5[8] = ((float)GEN_TOF((((float10)param_6[2] * (float10)param_6[2]) * fVar3 + fVar1)));
  param_5[9] = 0.0;
  param_5[10] = 0.0;
  param_5[0xb] = 0.0;
  return 0;
}

/* ref: FUN_00981b50 */
unsigned int F_00981b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x981b50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = 0;
  *param_1 = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2[1];
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2[2];
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return 0;
}

/* ref: FUN_00981dd0 */
unsigned int F_00981dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x981dd0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = ((float)GEN_TOF(((float10)param_3[8] * (float10)param_2[2] +
                    ((float10)param_2[1] * (float10)param_3[4] +
                    (float10)*param_2 * (float10)*param_3))));
  param_1[1] = ((float)GEN_TOF(((float10)param_2[2] * (float10)param_3[9] +
                      ((float10)param_3[1] * (float10)*param_2 +
                      (float10)param_2[1] * (float10)param_3[5]))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] * (float10)param_3[10] +
                      ((float10)param_3[2] * (float10)*param_2 +
                      (float10)param_3[6] * (float10)param_2[1]))));
  param_1[3] = ((float)GEN_TOF(((float10)param_2[5] * (float10)param_3[8] +
                      ((float10)*param_3 * (float10)param_2[3] +
                      (float10)param_2[4] * (float10)param_3[4]))));
  param_1[4] = ((float)GEN_TOF(((float10)param_2[5] * (float10)param_3[9] +
                      ((float10)param_3[1] * (float10)param_2[3] +
                      (float10)param_2[4] * (float10)param_3[5]))));
  param_1[5] = ((float)GEN_TOF(((float10)param_2[5] * (float10)param_3[10] +
                      ((float10)param_3[2] * (float10)param_2[3] +
                      (float10)param_3[6] * (float10)param_2[4]))));
  param_1[6] = ((float)GEN_TOF(((float10)param_3[8] * (float10)param_2[8] +
                      ((float10)param_2[6] * (float10)*param_3 +
                      (float10)param_2[7] * (float10)param_3[4]))));
  param_1[7] = ((float)GEN_TOF(((float10)param_3[9] * (float10)param_2[8] +
                      ((float10)param_3[1] * (float10)param_2[6] +
                      (float10)param_2[7] * (float10)param_3[5]))));
  param_1[8] = ((float)GEN_TOF(((float10)param_2[8] * (float10)param_3[10] +
                      ((float10)param_2[7] * (float10)param_3[6] +
                      (float10)param_2[6] * (float10)param_3[2]))));
  param_1[9] = ((float)GEN_TOF((((float10)param_3[8] * (float10)param_2[0xb] +
                       ((float10)param_2[10] * (float10)param_3[4] +
                       (float10)param_2[9] * (float10)*param_3)) + (float10)param_3[0xc])));
  param_1[10] = ((float)GEN_TOF((((float10)param_2[0xb] * (float10)param_3[9] +
                        ((float10)param_2[10] * (float10)param_3[5] +
                        (float10)param_2[9] * (float10)param_3[1])) + (float10)param_3[0xd])));
  param_1[0xb] = ((float)GEN_TOF((((float10)param_2[0xb] * (float10)param_3[10] +
                         ((float10)param_2[9] * (float10)param_3[2] +
                         (float10)param_3[6] * (float10)param_2[10])) + (float10)param_3[0xe])));
  return 0;
}

/* ref: FUN_00981f10 */
unsigned int F_00981f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x981f10u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
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
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  
  fVar1 = *(float *)(param_3 + 0x1c);
  fVar14 = (float10)*(float *)param_2;
  fVar15 = (float10)*(float *)(param_3 + 4);
  fVar16 = (float10)*(float *)(param_3 + 0x10);
  fVar17 = (float10)*(float *)(param_2 + 4);
  fVar18 = (float10)*(float *)(param_2 + 8);
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 8);
  fVar4 = *(float *)(param_3 + 0x20);
  fVar5 = *(float *)(param_2 + 0x10);
  fVar6 = *(float *)(param_3 + 0xc);
  fVar7 = *(float *)(param_2 + 0xc);
  fVar8 = *(float *)param_3;
  fVar9 = *(float *)(param_2 + 0x14);
  fVar10 = *(float *)(param_3 + 0x18);
  fVar11 = *(float *)(param_2 + 0x1c);
  fVar12 = *(float *)(param_2 + 0x18);
  fVar13 = *(float *)(param_2 + 0x20);
  param_1[1] = ((float)GEN_TOF((fVar18 * (float10)fVar1 + (fVar15 * fVar14 + fVar17 * fVar16))));
  param_1[2] = ((float)GEN_TOF(((float10)fVar4 * fVar18 + ((float10)fVar2 * fVar17 + (float10)fVar3 * fVar14)
                      )));
  param_1[3] = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar9 +
                      ((float10)fVar6 * (float10)fVar5 + (float10)fVar8 * (float10)fVar7))));
  param_1[4] = ((float)GEN_TOF(((float10)fVar9 * (float10)fVar1 +
                      ((float10)fVar5 * fVar16 + (float10)fVar7 * fVar15))));
  param_1[5] = ((float)GEN_TOF(((float10)fVar9 * (float10)fVar4 +
                      ((float10)fVar5 * (float10)fVar2 + (float10)fVar7 * (float10)fVar3))));
  fVar19 = (float10)fVar12;
  param_1[6] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar10 +
                      ((float10)fVar11 * (float10)fVar6 + (float10)fVar12 * (float10)fVar8))));
  fVar20 = (float10)fVar11;
  param_1[7] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar1 + (fVar19 * fVar15 + fVar20 * fVar16))));
  param_1[8] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar4 +
                      ((float10)fVar3 * fVar19 + (float10)fVar2 * fVar20))));
  *param_1 = ((float)GEN_TOF((((float10)fVar8 * fVar14 + (float10)fVar6 * fVar17) + (float10)fVar10 * fVar18)))
  ;
  return 0;
}

/* ref: FUN_009820e0 */
float10 F_009820e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9820e0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 8);
  fVar20 = (float10)fVar2;
  fVar21 = (float10)*(float *)(param_3 + 4);
  fVar22 = (float10)*(float *)(param_3 + 0x10);
  fVar23 = (float10)fVar1;
  fVar24 = (float10)*(float *)(param_3 + 0x1c);
  fVar4 = *(float *)(param_3 + 0x20);
  fVar25 = (float10)*(float *)(param_3 + 8);
  fVar26 = (float10)*(float *)(param_3 + 0x14);
  fVar5 = *(float *)(param_2 + 0x10);
  fVar6 = *(float *)(param_3 + 0xc);
  fVar7 = *(float *)(param_2 + 0xc);
  fVar8 = *(float *)param_3;
  fVar9 = *(float *)(param_2 + 0x14);
  fVar10 = *(float *)(param_3 + 0x18);
  fVar11 = *(float *)(param_2 + 0x1c);
  fVar12 = *(float *)(param_2 + 0x18);
  fVar13 = *(float *)(param_2 + 0x20);
  fVar14 = *(float *)(param_2 + 0x28);
  fVar15 = *(float *)(param_2 + 0x24);
  fVar16 = *(float *)(param_2 + 0x2c);
  fVar17 = *(float *)(param_3 + 0x24);
  fVar27 = (float10)fVar15;
  fVar28 = (float10)fVar14;
  fVar29 = (float10)fVar16;
  fVar18 = *(float *)(param_3 + 0x28);
  fVar19 = *(float *)(param_3 + 0x2c);
  param_1[1] = ((float)GEN_TOF(((fVar21 * fVar20 + fVar23 * fVar22) + fVar24 * (float10)fVar3)));
  param_1[2] = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar3 + (fVar25 * fVar20 + fVar26 * fVar23))));
  param_1[3] = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar9 +
                      ((float10)fVar6 * (float10)fVar5 + (float10)fVar8 * (float10)fVar7))));
  param_1[4] = ((float)GEN_TOF(((float10)fVar9 * fVar24 + ((float10)fVar5 * fVar22 + (float10)fVar7 * fVar21)
                      )));
  param_1[5] = ((float)GEN_TOF(((float10)fVar9 * (float10)fVar4 +
                      ((float10)fVar5 * fVar26 + (float10)fVar7 * fVar25))));
  param_1[6] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar10 +
                      ((float10)fVar11 * (float10)fVar6 + (float10)fVar12 * (float10)fVar8))));
  param_1[7] = ((float)GEN_TOF(((float10)fVar13 * fVar24 +
                      ((float10)fVar11 * fVar22 + (float10)fVar12 * fVar21))));
  param_1[8] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar4 +
                      ((float10)fVar11 * fVar26 + (float10)fVar12 * fVar25))));
  param_1[9] = ((float)GEN_TOF((((float10)fVar16 * (float10)fVar10 +
                       ((float10)fVar14 * (float10)fVar6 + (float10)fVar15 * (float10)fVar8)) +
                      (float10)fVar17)));
  param_1[10] = ((float)GEN_TOF(((float10)fVar18 + ((fVar27 * fVar21 + fVar28 * fVar22) + fVar29 * fVar24))));
  *param_1 = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar3 +
                    ((float10)fVar6 * (float10)fVar1 + (float10)fVar8 * (float10)fVar2))));
  param_1[0xb] = ((float)GEN_TOF(((fVar29 * (float10)fVar4 + (fVar27 * fVar25 + fVar28 * fVar26)) +
                        (float10)fVar19)));
  return fVar26;
}

/* ref: FUN_00982330 */
unsigned int F_00982330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x982330u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 8);
  fVar20 = (float10)fVar2;
  fVar21 = (float10)*(float *)(param_3 + 4);
  fVar22 = (float10)*(float *)(param_3 + 0x14);
  fVar23 = (float10)fVar1;
  fVar24 = (float10)*(float *)(param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 0x28);
  fVar25 = (float10)*(float *)(param_3 + 8);
  fVar26 = (float10)*(float *)(param_3 + 0x18);
  fVar5 = *(float *)(param_2 + 0x10);
  fVar6 = *(float *)(param_3 + 0x10);
  fVar7 = *(float *)(param_2 + 0xc);
  fVar8 = *(float *)param_3;
  fVar9 = *(float *)(param_2 + 0x14);
  fVar10 = *(float *)(param_3 + 0x20);
  fVar11 = *(float *)(param_2 + 0x1c);
  fVar12 = *(float *)(param_2 + 0x18);
  fVar13 = *(float *)(param_2 + 0x20);
  fVar14 = *(float *)(param_2 + 0x28);
  fVar15 = *(float *)(param_2 + 0x24);
  fVar16 = *(float *)(param_2 + 0x2c);
  fVar17 = *(float *)(param_3 + 0x30);
  fVar27 = (float10)fVar15;
  fVar28 = (float10)fVar14;
  fVar29 = (float10)fVar16;
  fVar18 = *(float *)(param_3 + 0x34);
  fVar19 = *(float *)(param_3 + 0x38);
  param_1[1] = ((float)GEN_TOF(((fVar21 * fVar20 + fVar23 * fVar22) + fVar24 * (float10)fVar3)));
  param_1[2] = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar3 + (fVar25 * fVar20 + fVar26 * fVar23))));
  param_1[3] = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar9 +
                      ((float10)fVar6 * (float10)fVar5 + (float10)fVar8 * (float10)fVar7))));
  param_1[4] = ((float)GEN_TOF(((float10)fVar9 * fVar24 + ((float10)fVar5 * fVar22 + (float10)fVar7 * fVar21)
                      )));
  param_1[5] = ((float)GEN_TOF(((float10)fVar9 * (float10)fVar4 +
                      ((float10)fVar5 * fVar26 + (float10)fVar7 * fVar25))));
  param_1[6] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar10 +
                      ((float10)fVar11 * (float10)fVar6 + (float10)fVar12 * (float10)fVar8))));
  param_1[7] = ((float)GEN_TOF(((float10)fVar13 * fVar24 +
                      ((float10)fVar11 * fVar22 + (float10)fVar12 * fVar21))));
  param_1[8] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar4 +
                      ((float10)fVar11 * fVar26 + (float10)fVar12 * fVar25))));
  param_1[9] = ((float)GEN_TOF((((float10)fVar16 * (float10)fVar10 +
                       ((float10)fVar14 * (float10)fVar6 + (float10)fVar15 * (float10)fVar8)) +
                      (float10)fVar17)));
  param_1[10] = ((float)GEN_TOF(((float10)fVar18 + ((fVar27 * fVar21 + fVar28 * fVar22) + fVar29 * fVar24))));
  *param_1 = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar3 +
                    ((float10)fVar6 * (float10)fVar1 + (float10)fVar8 * (float10)fVar2))));
  param_1[0xb] = ((float)GEN_TOF(((fVar29 * (float10)fVar4 + (fVar27 * fVar25 + fVar28 * fVar26)) +
                        (float10)fVar19)));
  return 0;
}

/* ref: FUN_009825a0 */
unsigned int F_009825a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9825a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *in_ecx = *param_2;
  in_ecx[1] = uVar1;
  in_ecx[3] = 0;
  in_ecx[2] = uVar2;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  in_ecx[4] = param_2[3];
  in_ecx[7] = 0;
  in_ecx[5] = uVar1;
  in_ecx[6] = uVar2;
  uVar1 = param_2[7];
  uVar2 = param_2[8];
  in_ecx[8] = param_2[6];
  in_ecx[0xb] = 0;
  in_ecx[9] = uVar1;
  in_ecx[10] = uVar2;
  uVar1 = param_2[10];
  uVar2 = param_2[0xb];
  in_ecx[0xc] = param_2[9];
  in_ecx[0xd] = uVar1;
  uVar1 = REFG(float, 0x1087f04);
  in_ecx[0xe] = uVar2;
  in_ecx[0xf] = uVar1;
  return 0;
}

/* ref: FUN_00982640 */
unsigned int F_00982640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x982640u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009826b0 */
unsigned int F_009826b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9826b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  in_ecx[7] = param_3[3];
  in_ecx[8] = *param_4;
  in_ecx[9] = param_4[1];
  in_ecx[10] = param_4[2];
  in_ecx[0xb] = param_4[3];
  in_ecx[0xc] = *param_5;
  in_ecx[0xd] = param_5[1];
  in_ecx[0xe] = param_5[2];
  in_ecx[0xf] = param_5[3];
  return 0;
}

/* ref: FUN_00982720 */
unsigned int F_00982720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x982720u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = ((float)GEN_TOF(((float10)param_3[8] * (float10)param_2[2] +
                    ((float10)param_2[1] * (float10)param_3[4] +
                    (float10)*param_2 * (float10)*param_3))));
  param_1[1] = ((float)GEN_TOF(((float10)param_2[2] * (float10)param_3[9] +
                      ((float10)param_3[1] * (float10)*param_2 +
                      (float10)param_2[1] * (float10)param_3[5]))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] * (float10)param_3[10] +
                      ((float10)param_3[2] * (float10)*param_2 +
                      (float10)param_3[6] * (float10)param_2[1]))));
  param_1[3] = ((float)GEN_TOF(((float10)param_3[0xb] * (float10)param_2[2] +
                      ((float10)*param_2 * (float10)param_3[3] +
                      (float10)param_3[7] * (float10)param_2[1]))));
  param_1[4] = ((float)GEN_TOF(((float10)param_3[8] * (float10)param_2[5] +
                      ((float10)param_2[3] * (float10)*param_3 +
                      (float10)param_2[4] * (float10)param_3[4]))));
  param_1[5] = ((float)GEN_TOF(((float10)param_2[5] * (float10)param_3[9] +
                      ((float10)param_2[4] * (float10)param_3[5] +
                      (float10)param_2[3] * (float10)param_3[1]))));
  param_1[6] = ((float)GEN_TOF(((float10)param_2[5] * (float10)param_3[10] +
                      ((float10)param_2[3] * (float10)param_3[2] +
                      (float10)param_3[6] * (float10)param_2[4]))));
  param_1[7] = ((float)GEN_TOF(((float10)param_3[0xb] * (float10)param_2[5] +
                      ((float10)param_3[7] * (float10)param_2[4] +
                      (float10)param_2[3] * (float10)param_3[3]))));
  param_1[8] = ((float)GEN_TOF(((float10)param_3[8] * (float10)param_2[8] +
                      ((float10)param_2[6] * (float10)*param_3 +
                      (float10)param_2[7] * (float10)param_3[4]))));
  param_1[9] = ((float)GEN_TOF(((float10)param_2[8] * (float10)param_3[9] +
                      ((float10)param_2[7] * (float10)param_3[5] +
                      (float10)param_2[6] * (float10)param_3[1]))));
  param_1[10] = ((float)GEN_TOF(((float10)param_2[8] * (float10)param_3[10] +
                       ((float10)param_2[6] * (float10)param_3[2] +
                       (float10)param_3[6] * (float10)param_2[7]))));
  param_1[0xb] = ((float)GEN_TOF(((float10)param_3[0xb] * (float10)param_2[8] +
                        ((float10)param_3[7] * (float10)param_2[7] +
                        (float10)param_2[6] * (float10)param_3[3]))));
  param_1[0xc] = ((float)GEN_TOF((((float10)param_3[8] * (float10)param_2[0xb] +
                         ((float10)param_2[10] * (float10)param_3[4] +
                         (float10)param_2[9] * (float10)*param_3)) + (float10)param_3[0xc])));
  param_1[0xd] = ((float)GEN_TOF((((float10)param_2[0xb] * (float10)param_3[9] +
                         ((float10)param_2[10] * (float10)param_3[5] +
                         (float10)param_2[9] * (float10)param_3[1])) + (float10)param_3[0xd])));
  param_1[0xe] = ((float)GEN_TOF((((float10)param_2[0xb] * (float10)param_3[10] +
                         ((float10)param_2[9] * (float10)param_3[2] +
                         (float10)param_3[6] * (float10)param_2[10])) + (float10)param_3[0xe])));
  param_1[0xf] = ((float)GEN_TOF((((float10)param_3[0xb] * (float10)param_2[0xb] +
                         ((float10)param_3[7] * (float10)param_2[10] +
                         (float10)param_2[9] * (float10)param_3[3])) + (float10)param_3[0xf])));
  return 0;
}

/* ref: FUN_009828d0 */
unsigned int F_009828d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9828d0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = ((float)GEN_TOF(((float10)param_3[0xc] * (float10)param_2[3] +
                    ((float10)param_3[8] * (float10)param_2[2] +
                    ((float10)param_2[1] * (float10)param_3[4] +
                    (float10)*param_2 * (float10)*param_3)))));
  param_1[1] = ((float)GEN_TOF(((float10)param_3[0xd] * (float10)param_2[3] +
                      ((float10)param_2[2] * (float10)param_3[9] +
                      ((float10)param_3[1] * (float10)*param_2 +
                      (float10)param_3[5] * (float10)param_2[1])))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[3] * (float10)param_3[0xe] +
                      ((float10)param_2[2] * (float10)param_3[10] +
                      ((float10)param_3[2] * (float10)*param_2 +
                      (float10)param_3[6] * (float10)param_2[1])))));
  param_1[3] = ((float)GEN_TOF(((float10)param_3[0xf] * (float10)param_2[3] +
                      ((float10)param_2[2] * (float10)param_3[0xb] +
                      ((float10)param_3[3] * (float10)*param_2 +
                      (float10)param_3[7] * (float10)param_2[1])))));
  param_1[4] = ((float)GEN_TOF(((float10)param_3[0xc] * (float10)param_2[7] +
                      ((float10)param_3[8] * (float10)param_2[6] +
                      ((float10)param_2[4] * (float10)*param_3 +
                      (float10)param_2[5] * (float10)param_3[4])))));
  param_1[5] = ((float)GEN_TOF(((float10)param_3[0xd] * (float10)param_2[7] +
                      ((float10)param_2[6] * (float10)param_3[9] +
                      ((float10)param_2[4] * (float10)param_3[1] +
                      (float10)param_3[5] * (float10)param_2[5])))));
  param_1[6] = ((float)GEN_TOF(((float10)param_3[0xe] * (float10)param_2[7] +
                      ((float10)param_2[6] * (float10)param_3[10] +
                      ((float10)param_2[4] * (float10)param_3[2] +
                      (float10)param_2[5] * (float10)param_3[6])))));
  param_1[7] = ((float)GEN_TOF(((float10)param_3[0xf] * (float10)param_2[7] +
                      ((float10)param_2[6] * (float10)param_3[0xb] +
                      ((float10)param_2[4] * (float10)param_3[3] +
                      (float10)param_3[7] * (float10)param_2[5])))));
  param_1[8] = ((float)GEN_TOF(((float10)param_2[0xb] * (float10)param_3[0xc] +
                      ((float10)param_3[8] * (float10)param_2[10] +
                      ((float10)param_2[9] * (float10)param_3[4] +
                      (float10)param_2[8] * (float10)*param_3)))));
  param_1[9] = ((float)GEN_TOF(((float10)param_2[0xb] * (float10)param_3[0xd] +
                      ((float10)param_2[10] * (float10)param_3[9] +
                      ((float10)param_2[8] * (float10)param_3[1] +
                      (float10)param_3[5] * (float10)param_2[9])))));
  param_1[10] = ((float)GEN_TOF(((float10)param_2[0xb] * (float10)param_3[0xe] +
                       ((float10)param_3[10] * (float10)param_2[10] +
                       ((float10)param_3[2] * (float10)param_2[8] +
                       (float10)param_2[9] * (float10)param_3[6])))));
  param_1[0xb] = ((float)GEN_TOF(((float10)param_2[0xb] * (float10)param_3[0xf] +
                        ((float10)param_2[10] * (float10)param_3[0xb] +
                        ((float10)param_2[8] * (float10)param_3[3] +
                        (float10)param_3[7] * (float10)param_2[9])))));
  param_1[0xc] = ((float)GEN_TOF(((float10)param_3[0xc] * (float10)param_2[0xf] +
                        ((float10)param_3[8] * (float10)param_2[0xe] +
                        ((float10)param_2[0xd] * (float10)param_3[4] +
                        (float10)param_2[0xc] * (float10)*param_3)))));
  param_1[0xd] = ((float)GEN_TOF(((float10)param_3[0xd] * (float10)param_2[0xf] +
                        ((float10)param_2[0xe] * (float10)param_3[9] +
                        ((float10)param_2[0xc] * (float10)param_3[1] +
                        (float10)param_3[5] * (float10)param_2[0xd])))));
  param_1[0xe] = ((float)GEN_TOF(((float10)param_3[0xe] * (float10)param_2[0xf] +
                        ((float10)param_3[10] * (float10)param_2[0xe] +
                        ((float10)param_3[6] * (float10)param_2[0xd] +
                        (float10)param_3[2] * (float10)param_2[0xc])))));
  param_1[0xf] = ((float)GEN_TOF(((float10)param_3[0xf] * (float10)param_2[0xf] +
                        ((float10)param_2[0xe] * (float10)param_3[0xb] +
                        ((float10)param_2[0xc] * (float10)param_3[3] +
                        (float10)param_3[7] * (float10)param_2[0xd])))));
  return 0;
}

/* ref: FUN_00982b20 */
double F_00982b20(unsigned int gen_a0)
{
  GEN_ENTER(0x982b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  double dVar1;
  
  LOCK();
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  UNLOCK();
  dVar1 = F_0050c620(*(undefined4 *)((int)this + 100),0,0);
  return dVar1;
}

/* ref: FUN_00982b50 */
byte F_00982b50(unsigned int gen_a0)
{
  GEN_ENTER(0x982b50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  piVar2 = (int *)(in_ecx + 8);
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  return 1 - (iVar1 != 1);
}

/* ref: FUN_00982b60 */
uint F_00982b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x982b60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x44) = param_2;
  return param_2;
}

/* ref: FUN_00982b80 */
byte F_00982b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x982b80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 4 ^ *(byte *)(in_ecx + 0x96)) & 0x10;
  *(byte *)(in_ecx + 0x96) = *(byte *)(in_ecx + 0x96) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00982ba0 */
unsigned int F_00982ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x982ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_6;
  puVar3 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(byte *)((int)param_1 + 0x96) = *(byte *)((int)param_1 + 0x96) & 0xfd | 1;
  param_1[0x16] = (undefined4)gen_fl2bits(param_4);
  *(undefined1 *)(param_1 + 0x25) = (undefined1)param_2;
  *(undefined1 *)((int)param_1 + 0x95) = (undefined1)param_3;
  param_1[0x17] = (undefined4)gen_fl2bits(param_5);
  return 0;
}

/* ref: FUN_00982c00 */
unsigned int F_00982c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x982c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = (undefined4)gen_fl2bits(param_6);
  param_1[0xd] = (undefined4)gen_fl2bits(param_7);
  param_1[0xe] = (undefined4)gen_fl2bits(param_8);
  *(byte *)((int)param_1 + 0x96) = *(byte *)((int)param_1 + 0x96) & 0xfd | 1;
  param_1[0x16] = (undefined4)gen_fl2bits(param_4);
  *param_1 = uVar1;
  param_1[5] = uVar1;
  param_1[10] = uVar1;
  *(undefined1 *)(param_1 + 0x25) = (undefined1)param_2;
  *(undefined1 *)((int)param_1 + 0x95) = (undefined1)param_3;
  param_1[0x17] = (undefined4)gen_fl2bits(param_5);
  return 0;
}

/* ref: FUN_00982ca0 */
byte F_00982ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x982ca0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *(byte *)(param_1 + 0x96) = *(byte *)(param_1 + 0x96) & 0xfd | 1;
  *(float *)(param_1 + 0x58) = param_4;
  *(undefined1 *)(param_1 + 0x94) = (undefined1)param_2;
  *(byte *)(param_1 + 0x95) = (byte)param_3;
  *(float *)(param_1 + 0x5c) = param_5;
  return (byte)param_3;
}

/* ref: FUN_00982ce0 */
uint F_00982ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x982ce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP((*(int *)(in_ecx + 0x40) + 8)));
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  return (uint)(iVar1 == 1);
}

/* ref: FUN_00982d00 */
uint F_00982d00(float gen_a0)
{
  GEN_ENTER(0x982d00u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (int)((double)param_1 * *(double *)&REFG(undefined, 0x10912a8));
}

/* ref: FUN_00982d20 */
float10 F_00982d20(float gen_a0)
{
  GEN_ENTER(0x982d20u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF(SQRT((float10)param_1)));
}

/* ref: FUN_00982d40 */
uint F_00982d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x982d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined2 in_ax = (undefined2)gen_a0;
  undefined2 in_cx = (undefined2)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint local_c;
  
  local_c = CONCAT22(in_cx,in_ax);
  return local_c;
}

/* ref: FUN_00982d70 */
unsigned int F_00982d70(void)
{
  GEN_ENTER(0x982d70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00982d80 */
unsigned int F_00982d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x982d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined2 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int local_8;
  
  *(int *)((int)this + 0x40) = param_1;
  *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd4) = 0xffffffff;
  *(undefined2 *)((int)this + 0x8c) = 0xffff;
  *(undefined2 *)((int)this + 0x8e) = 0xffff;
  *(undefined4 *)((int)this + 0x88) = 0;
  puVar2 = (undefined4 *)((int)this + 0xd8);
  puVar1 = (undefined2 *)((int)this + 0x90);
  local_8 = 0x10;
  puVar3 = (undefined4 *)((int)this + 0x48);
  do {
    puVar1[0x10] = 0xffff;
    *puVar1 = 0xffff;
    *puVar3 = 0xffffffff;
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffff;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 2;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x44) = 0xffffffff;
  }
  else if (param_1 == 1) {
    *(undefined4 *)((int)this + 0x44) = 0;
    *(undefined4 *)((int)this + 0x48) = 0;
    *(undefined4 *)((int)this + 0x4c) = 0;
    *(undefined4 *)((int)this + 0x50) = 0;
    *(undefined4 *)((int)this + 0x54) = 0;
    *(undefined4 *)((int)this + 0x58) = 0;
    *(undefined4 *)((int)this + 0x5c) = 0;
    *(undefined4 *)((int)this + 0x60) = 0;
    *(undefined4 *)((int)this + 100) = 0;
    *(undefined4 *)((int)this + 0x68) = 0;
    *(undefined4 *)((int)this + 0x6c) = 0;
    *(undefined4 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x74) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
    *(undefined4 *)((int)this + 0x7c) = 0;
    *(undefined4 *)((int)this + 0x80) = 0;
    *(undefined4 *)((int)this + 0x84) = 0;
    return 0;
  }
  return 0;
}

/* ref: FUN_00982e70 */
ushort F_00982e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x982e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x44) = param_1;
  *(undefined2 *)((int)this + 0x8c) = (undefined2)param_2;
  *(ushort *)((int)this + 0x8e) = (ushort)param_3;
  return (ushort)param_3;
}

/* ref: FUN_00982ea0 */
uint F_00982ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x982ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x88);
  if (uVar1 < 0x10) {
    *(undefined4 *)((int)this + uVar1 * 4 + 0x48) = param_1;
    *((undefined2 *)GEN_TOP(((int)this + *(int *)((int)this + 0x88) * 2 + 0x90))) = (undefined2)param_2;
    uVar1 = *(uint *)((int)this + 0x88);
    *(undefined2 *)((int)this + uVar1 * 2 + 0xb0) = (undefined2)param_3;
    *(int *)((int)this + 0x88) = *(int *)((int)this + 0x88) + 1;
  }
  return uVar1;
}

/* ref: FUN_00982f10 */
uint F_00982f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x982f10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x48 + param_2 * 4);
}

/* ref: FUN_00982f30 */
ushort F_00982f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x982f30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(ushort *)(in_ecx + 0x90 + param_2 * 2);
}

/* ref: FUN_00982f60 */
ushort F_00982f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x982f60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(ushort *)(in_ecx + 0xb0 + param_2 * 2);
}

/* ref: FUN_00982f90 */
uint F_00982f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x982f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)((int)this + param_1 * 8 + 0xd8);
}

/* ref: FUN_00982fc0 */
uint F_00982fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x982fc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x48 + param_2 * 4);
}

/* ref: FUN_00982fd0 */
unsigned int F_00982fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x982fd0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x174);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x96) = *(byte *)(iVar1 + 0x96) & 0xfd | 1;
    *(float *)(iVar1 + 0x58) = param_4;
    *(undefined1 *)(iVar1 + 0x94) = (undefined1)param_2;
    *(undefined1 *)(iVar1 + 0x95) = (undefined1)param_3;
    *(float *)(iVar1 + 0x5c) = param_5;
  }
  return 0;
}

/* ref: FUN_00983020 */
unsigned int F_00983020(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7, float gen_a8, float gen_a9, float gen_a10, float gen_a11, float gen_a12, float gen_a13, float gen_a14)
{
  GEN_ENTER(0x983020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  float param_10 = (float)gen_a9;
  float param_11 = (float)gen_a10;
  float param_12 = (float)gen_a11;
  float param_13 = (float)gen_a12;
  float param_14 = (float)gen_a13;
  float param_15 = (float)gen_a14;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float10 fVar1;
  int iVar2;
  float * pfVar3;
  float * pfVar4;
  
  pfVar4 = *(float * PTR32 *)(in_ecx + 0x174);
  (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar4;
  if (pfVar4 != (float *)0x0) {
    fVar1 = (float10)0;
    (*(float *)(gen_frame + 0x30)) = (float)fVar1;
    (*(float *)(gen_frame + 0x34)) = (float)fVar1;
    ((float *)(gen_frame + 0x0))[0] = param_12;
    (*(float *)(gen_frame + 0x38)) = (float)fVar1;
    ((float *)(gen_frame + 0x0))[1] = 0.0;
    ((float *)(gen_frame + 0x0))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(float *)(gen_frame + 0x14)) = param_13;
    (*(float *)(gen_frame + 0x28)) = param_14;
    F_0065ed60(((float *)(gen_frame + 0x0)),param_13,in_xmm2,in_xmm3,in_xmm7,param_15);
    (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x30)) + (float10)param_9);
    (*(float * PTR32 *)(gen_frame + 0x4c))[0x16] = param_7;
    *(undefined1 *)((*(float * PTR32 *)(gen_frame + 0x4c)) + 0x25) = (undefined1)param_5;
    (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x34)) + (float10)param_10);
    (*(float * PTR32 *)(gen_frame + 0x4c))[0x17] = param_8;
    (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x38)) + (float10)param_11);
    pfVar3 = ((float *)(gen_frame + 0x0));
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar4 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar4 = pfVar4 + 1;
    }
    *(byte *)((int)(*(float * PTR32 *)(gen_frame + 0x4c)) + 0x96) = *(byte *)((int)(*(float * PTR32 *)(gen_frame + 0x4c)) + 0x96) & 0xfd | 1;
    *(undefined1 *)((int)(*(float * PTR32 *)(gen_frame + 0x4c)) + 0x95) = (undefined1)param_6;
  }
  return 0;
}

/* ref: FUN_00983120 */
uint F_00983120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983120u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x178) = param_2;
  return param_2;
}

/* ref: FUN_00983140 */
unsigned int F_00983140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983140u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 0x174) = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x44) = in_ecx + 0x170;
  }
  return 0;
}

/* ref: FUN_00983160 */
uint F_00983160(unsigned int gen_a0)
{
  GEN_ENTER(0x983160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x174);
}

/* ref: FUN_00983170 */
unsigned int F_00983170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983170u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 4) = 0;
  return 0;
}

/* ref: FUN_00983180 */
uint F_00983180(unsigned int gen_a0)
{
  GEN_ENTER(0x983180u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a09a0) + 0x88))))(REFG(undefined4, 0x14a09a0),param_1);
  return uVar1;
}

/* ref: Apricot::ApricotListenner::vf1 */
byte F_009831a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9831a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)(this + 0x1c) = param_1;
  F_004cf9e0(this + 4,0,0,0x20000,"ApricotCommunicator");
  return 1;
}

/* ref: Apricot::ApricotListenner::vf2 */
unsigned int F_009831d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9831d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004cf020(this + 4);
  return 0;
}

/* ref: Apricot::ApricotListenner::vf3 */
unsigned int F_009831e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9831e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x20));
  return 0;
}

/* ref: Apricot::ApricotListenner::vf4 */
unsigned int F_009831f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9831f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x20));
  return 0;
}

/* ref: Apricot::ApricotListenner::vf7 */
unsigned int F_00983200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cee60(param_1);
  return 0;
}

/* ref: Apricot::ApricotListenner::vf5 */
unsigned int F_00983220(unsigned int gen_a0)
{
  GEN_ENTER(0x983220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x38));
  return 0;
}

/* ref: Apricot::ApricotListenner::vf6 */
unsigned int F_00983230(unsigned int gen_a0)
{
  GEN_ENTER(0x983230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x38));
  return 0;
}

/* ref: Apricot::ApricotListenner::vf12 */
byte F_00983240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x983240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_2) {
    iVar2 = param_2;
    iVar3 = param_1;
    do {
      uVar1 = F_00ba7610(this + 0x78,iVar3,iVar2);
      if ((int)uVar1 < 1) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
        return 0;
      }
      iVar2 = iVar2 - uVar1;
      iVar3 = iVar3 + uVar1;
    } while (0 < iVar2);
  }
  return 1;
}

/* ref: Apricot::ApricotListenner::vf13 */
byte F_00983290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x983290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_2) {
    iVar2 = param_2;
    iVar3 = param_1;
    do {
      uVar1 = F_00ba7650(this + 0x78,iVar3,iVar2);
      if ((int)uVar1 < 1) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
        return 0;
      }
      iVar2 = iVar2 - uVar1;
      iVar3 = iVar3 + uVar1;
    } while (0 < iVar2);
  }
  return 1;
}

/* ref: Apricot::ApricotListenner::vf11 */
uint F_009832e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9832e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00ba74d0(this + 0x78);
  uVar1 = F_00ba74d0(this + 0x50);
  return uVar1;
}

/* ref: Apricot::ApricotListenner::vf10 */
byte F_00983300(unsigned int gen_a0)
{
  GEN_ENTER(0x983300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
  this_00 = this + 0x50;
  uVar1 = F_00baba80(this_00);
  if (uVar1 == 0) {
    uVar1 = F_00baba80(this + 0x78);
    if (uVar1 == 0) {
      uVar1 = F_00ba8460(this_00,0xd431);
      if (uVar1 == 0) {
        uVar1 = F_00babc10(this_00,this + 0x78);
        return 0 < (int)uVar1;
      }
    }
  }
  return 0;
}

/* ref: Apricot::ApricotListenner::vf29 */
unsigned int F_00983350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*param_1)(param_1,1);
  }
  return 0;
}

/* ref: Apricot::ApricotListenner::vf22 */
unsigned int F_00983370(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x983370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;
  undefined4 uVar1;
  
  *(char *)(in_ecx + 0xa0) = (char)param_2;
  if ((char)param_2 != '\0') {
    if (param_6 < 0.0) {
      param_6 = 0.0;
    }
    if ((float10)param_7 <= (float10)param_6) {
      param_7 = (float)((float10)param_6 + (float10)*(double *)&REFG(undefined, 0x10928e8));
    }
    *(float *)(in_ecx + 0xa4) = param_3;
    *(float *)(in_ecx + 0xa8) = param_4;
    *(float *)(in_ecx + 0xac) = param_5;
    *(undefined4 *)(in_ecx + 0xb0) = *param_8;
    uVar1 = param_8[1];
    *(float *)(in_ecx + 0xc0) = param_6;
    *(float *)(in_ecx + 0xc4) = param_6;
    *(undefined4 *)(in_ecx + 0xb4) = uVar1;
    *(float *)(in_ecx + 200) = param_7;
    *(float *)(in_ecx + 0xcc) = param_7;
  }
  return 0;
}

/* ref: Apricot::ApricotListenner::vf23 */
unsigned int F_00983420(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x983420u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  undefined * this;
  uint uVar2;
  int iVar3;
  float * pfVar4;
  float * pfVar5;
  float10 fVar6;
  
  this = REFG(undefined4, 0x1379694);
  if (REFG(undefined4, 0x1379694) != (undefined *)0x0) {
    (*(float *)(gen_frame + 0x4c)) = *(float *)((int)REFG(undefined4, 0x1379694) + 0xb0);
    fVar6 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,
                         (float10)*(float *)((int)REFG(undefined4, 0x1379694) + 0xb0));
    (*(float *)(gen_frame + 0x48)) = (float)fVar6;
    fVar6 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(*(float *)(gen_frame + 0x4c)));
    fVar1 = (float)fVar6;
    (*(float *)(gen_frame + 0x4c)) = fVar1;
    ((float *)(gen_frame + 0x0))[0] = fVar1;
    (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x48));
    ((float *)(gen_frame + 0x0))[2] = ((float)GEN_TOF(-(float10)(*(float *)(gen_frame + 0x48))));
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
    (*(undefined4 *)(gen_frame + 0x3c)) = REFG(float, 0x1087f04);
    uVar2 = F_00a5feb0(this);
    F_0065f330(((float *)(gen_frame + 0x0)),uVar2);
    pfVar4 = ((float *)(gen_frame + 0x0));
    pfVar5 = param_5;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
  }
  return 0;
}

/* ref: Apricot::ApricotListenner::vf24 */
unsigned int F_00983510(void)
{
  GEN_ENTER(0x983510u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::ApricotListenner::vf25 */
uint F_00983520(void)
{
  GEN_ENTER(0x983520u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::ApricotListenner::vf26 */
unsigned int F_00983530(unsigned int gen_a0)
{
  GEN_ENTER(0x983530u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0xd0) = 0;
  *(undefined4 *)(in_ecx + 0xd4) = 0;
  *(undefined4 *)(in_ecx + 0xd8) = 0;
  *(undefined4 *)(in_ecx + 0xdc) = 0;
  *(undefined4 *)(in_ecx + 0xe0) = 0;
  *(undefined4 *)(in_ecx + 0xe4) = 0;
  *(undefined4 *)(in_ecx + 0xe8) = 0;
  return 0;
}

/* ref: Apricot::ApricotListenner::vf27 */
unsigned int F_00983570(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x983570u, gen_a0, 0u, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  if ((float10)*(float *)(in_ecx + 0xd0) < fVar1) {
    *(float *)(in_ecx + 0xd0) = param_2;
    *(float *)(in_ecx + 0xd4) = (float)((float10)*param_3 * fVar1);
    *(float *)(in_ecx + 0xd8) = (float)((float10)param_3[1] * fVar1);
    *(float *)(in_ecx + 0xdc) = (float)((float10)param_3[2] * fVar1);
    *(float *)(in_ecx + 0xe0) = (float)((float10)*param_4 * fVar1);
    *(float *)(in_ecx + 0xe4) = (float)((float10)param_4[1] * fVar1);
    *(float *)(in_ecx + 0xe8) = (float)(fVar1 * (float10)param_4[2]);
    return 0;
  }
  return 0;
}

/* ref: Apricot::ApricotListenner::vf32 */
uint F_009835e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9835e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Apricot::ApricotListenner::vf33 */
uint F_009835f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9835f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  uint uVar1;
  
  if (*(int *)(REFG(int, 0x137104c) + 0x25f8) != 0) {
    uVar1 = F_004e95a0(*(int *)(REFG(int, 0x137104c) + 0x25f8),param_1,(float)(float10)1,0,*param_3,
                         param_3[1],param_3[2],(float)(float10)1,0,param_2,0);
    return uVar1;
  }
  return 0;
}

/* ref: Apricot::ApricotListenner::vf34 */
uint F_00983650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x137104c);
  if ((*(int *)(REFG(undefined4, 0x137104c) + 0x25f8) != 0) && (param_1 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*param_1 + 0x50))(param_1,500);
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x78))(param_1,500);
  }
  return uVar1;
}

/* ref: Apricot::ApricotListenner::vf35 */
unsigned int F_00983690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x983690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 0x44))(param_1);
  }
  return 0;
}

/* ref: Apricot::ApricotDeviceListenner::vf1 */
uint F_009836d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9836d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pAVar1;
  uint uVar2;
  
  pAVar1 = this + 8;
  *(int *)pAVar1 = *(int *)pAVar1 + -1;
  uVar2 = *(uint *)(this + 8);
  if (*(int *)pAVar1 == 0) {
    (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  }
  return uVar2;
}

/* ref: Apricot::ApricotDeviceListenner::vf2 */
uint F_009836f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9836f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(int *)(in_ecx + 8) + 1;
  *(uint *)(in_ecx + 8) = uVar1;
  return uVar1;
}

/* ref: Apricot::ApricotDeviceListenner::vf17 */
unsigned int F_00983700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x983700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  *(uint *)(this + param_1 * 4 + 0x240) =
       *(uint *)(this + param_1 * 4 + 0x240) ^
       ((uint)(&REFG(undefined * PTR32, 0x10de6ec))[param_2] ^ *(uint *)(this + param_1 * 4 + 0x240)) & 3;
  *(uint *)(this + param_1 * 4 + 0x240) =
       ((uint)(&REFG(undefined * PTR32, 0x10de6ec))[param_3] & 3 | 8) * 4 |
       *(uint *)(this + param_1 * 4 + 0x240) & 0xffffffe3;
  return 0;
}

/* ref: Apricot::ApricotDeviceListenner::vf31 */
unsigned int F_00983750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x983750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  return 0;
}

/* ref: Apricot::ApricotDeviceListenner::vf32 */
unsigned int F_00983760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Apricot::ApricotDeviceListenner::vf33 */
unsigned int F_00983770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Apricot::ApricotDeviceListenner::vf34 */
byte F_00983780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x26e) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00983790 */
unsigned int F_00983790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983790u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x10de6fc));
  puVar2 = param_2;
  puVar3 = in_ecx + 4;
  for (iVar1 = 0x58; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_009837b0 */
unsigned int F_009837b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9837b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x10b2a9c));
  return 0;
}

/* ref: FUN_009837c0 */
byte F_009837c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9837c0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = param_2;
  puVar3 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x50)),in_ecx + 0x10,param_3);
  puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x4c));
  puVar5 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  *puVar2 = ((undefined4 *)(gen_frame + 0x0))[0];
  puVar2[1] = ((undefined4 *)(gen_frame + 0x0))[1];
  puVar2[2] = ((undefined4 *)(gen_frame + 0x0))[2];
  puVar2[4] = (*(undefined4 *)(gen_frame + 0x10));
  puVar2[3] = 0;
  puVar2[5] = (*(undefined4 *)(gen_frame + 0x14));
  puVar2[7] = 0;
  puVar2[0xb] = 0;
  puVar2[6] = (*(undefined4 *)(gen_frame + 0x18));
  puVar2[0xc] = (*(undefined4 *)(gen_frame + 0x30));
  puVar2[8] = (*(undefined4 *)(gen_frame + 0x20));
  puVar2[0xd] = (*(undefined4 *)(gen_frame + 0x34));
  puVar2[9] = (*(undefined4 *)(gen_frame + 0x24));
  puVar2[0xe] = (*(undefined4 *)(gen_frame + 0x38));
  uVar1 = REFG(float, 0x1087f04);
  puVar2[10] = (*(undefined4 *)(gen_frame + 0x28));
  puVar2[0xf] = uVar1;
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return 1;
}

/* ref: FUN_00983930 */
byte F_00983930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x983930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  bVar1 = F_00a5fcc0(param_3,param_2);
  if (bVar1 == 0) {
    bVar1 = 0;
  }
  else {
    uVar2 = F_00a608f0(param_3,in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,((undefined1 *)(gen_frame + 0x0)),param_2);
    bVar1 = F_009837c0(this,param_1,uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return bVar1;
}

/* ref: FUN_009839b0 */
byte F_009839b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9839b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar2 = ((code *)*(gen_code32 *)(*param_3 + 0x50))(param_3,param_2);
  if ((char)uVar2 == '\0') {
    bVar1 = 0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*param_3 + 0x40))(param_3,((undefined1 *)(gen_frame + 0x0)),param_2);
    bVar1 = F_009837c0(this,param_1,uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return bVar1;
}

/* ref: FUN_00983a30 */
byte F_00983a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x983a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  bool bVar2;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar1 = ((code *)*(gen_code32 *)(*param_3 + 0x50))(param_3,param_2);
  bVar2 = (char)uVar1 != '\0';
  if (bVar2) {
    ((code *)*(gen_code32 *)(*param_3 + 0x40))(param_3,((undefined1 *)(gen_frame + 0x0)),param_2);
    *param_1 = (*(undefined4 *)(gen_frame + 0x30));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x34));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x38));
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return bVar2;
}

/* ref: Apricot::ApricotInstanceListenner::vf3 */
uint F_00983ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x983ac0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x98);
}

/* ref: Apricot::ApricotInstanceListenner::vf4 */
uint F_00983ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return param_1;
}

/* ref: FUN_00983ae0 */
unsigned int F_00983ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983ae0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = (undefined4 *)(in_ecx + 0x10);
  for (iVar1 = 0x58; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: Apricot::ApricotCommunicatorInstanceListenner::vf2 */
byte F_00983b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (REFG(int, 0x1379694) != 0) {
    *param_1 = *(undefined4 *)(REFG(int, 0x1379694) + 0xb8);
    return 1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
  return 1;
}

/* ref: Apricot::ApricotCommunicatorInstanceListenner::vf3 */
uint F_00983b50(void)
{
  GEN_ENTER(0x983b50u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_005369a0(&REFG(undefined4, 0x1375b90));
  if ((uVar1 == 0) && (REFG(int, 0x1379694) == 0)) {
    return 8;
  }
  return 1;
}

/* ref: Apricot::ApricotCommunicatorInstanceListenner::vf4 */
uint F_00983b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return param_1;
}

/* ref: Apricot::ApricotCommunicatorInstanceListenner::vf6 */
byte F_00983b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x983b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_005369a0(&REFG(undefined4, 0x1375b90));
  if ((uVar1 == 0) && (uVar1 = REFG(undefined4, 0x1379694), REFG(undefined4, 0x1379694) == 0)) {
    *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1087f04));
    return 1;
  }
  *param_2 = *(undefined4 *)(uVar1 + 0xb8);
  return 1;
}

/* ref: Apricot::ApricotCommunicatorInstanceListenner::vf7 */
uint F_00983bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x983bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  int * piVar2;
  undefined3 extraout_var = 0;
  uint uVar4;
  int * piVar5;
  float10 fVar6;
  float * pfVar3;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  piVar2 = (int *)F_005369a0(&REFG(undefined4, 0x1375b90));
  piVar5 = REFG(undefined4, 0x1379694);
  if (param_5 != -1) {
    piVar5 = piVar2;
  }
  if (piVar5 != (int *)0x0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0xb8))(piVar5)));
    if ((char)piVar2 != '\0') {
      if (param_4 == 0) {
        piVar5 = piVar5 + 0x5b0;
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)(param_4 + -1);
        if (piVar2 != (int *)0x0) goto LAB_00983d1d;
        piVar5 = piVar5 + 0x798;
      }
      if (piVar5 != (int *)0x0) {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x50))(piVar5,3)));
        if ((char)piVar2 != '\0') {
          ((code *)*(gen_code32 *)(*piVar5 + 0x40))(piVar5,((undefined1 *)(gen_frame + 0x0)),3);
          *param_1 = (*(float *)(gen_frame + 0x30));
          param_1[1] = (*(float *)(gen_frame + 0x34));
          param_1[2] = (*(float *)(gen_frame + 0x38));
          piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x50))(piVar5,5)));
          if ((char)piVar2 != '\0') {
            ((code *)*(gen_code32 *)(*piVar5 + 0x40))(piVar5,((undefined1 *)(gen_frame + 0x0)),5);
            *param_3 = (*(float *)(gen_frame + 0x30));
            param_3[1] = (*(float *)(gen_frame + 0x34));
            param_3[2] = (*(float *)(gen_frame + 0x38));
            bVar1 = F_00983a30(param_2,4,piVar5);
            pfVar3 = ((float *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
            if (bVar1 == 0) {
              fVar6 = (float10)REFG(double, 0x1088108);
              *param_2 = ((float)GEN_TOF((((float10)*param_1 + (float10)*param_3) * fVar6)));
              param_2[1] = ((float)GEN_TOF((((float10)param_1[1] + (float10)param_3[1]) * fVar6)));
              param_2[2] = ((float)GEN_TOF((((float10)param_1[2] + (float10)param_3[2]) * fVar6)));
              pfVar3 = param_1;
            }
            uVar4 = CONCAT31((int3)((uint)((int)(uintptr_t)pfVar3) >> 8),1);
            goto LAB_00983d1f;
          }
        }
      }
    }
  }
LAB_00983d1d: ;
  uVar4 = (uint)piVar2 & 0xffffff00;
LAB_00983d1f: ;
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar4;
}

/* ref: FUN_00983d50 */
unsigned int F_00983d50(float gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x983d50u, 0u, gen_a1, gen_a2, gen_a3);
  float param_1 = (float)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar2 = (float10)param_1;
  fVar3 = (float10)(float)(fVar2 * fVar2);
  fVar4 = (float10)(float)(fVar3 * fVar2);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar6 = fVar4 * fVar5;
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  *param_2 = ((float)GEN_TOF(((fVar6 - fVar3 * fVar1) + (float10)REFG(double, 0x1088130))));
  *param_3 = (float)(fVar3 * fVar1 - fVar6);
  *param_4 = ((float)GEN_TOF(((fVar4 - fVar3 * fVar5) + fVar2)));
  *param_5 = (float)(fVar4 - fVar3);
  return 0;
}

/* ref: FUN_00983f30 */
unsigned int F_00983f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x983f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
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
  pfVar4 = (float *)(iVar3 + (int)this);
  fVar9 = (float10)1;
  pfVar6 = ((float *)GEN_TOP(((param_2 * 3 + 3) * 0x10 + (int)this)));
  fVar7 = (float10)*(float *)(iVar3 + 0x24 + (int)this);
  fVar1 = ((float)GEN_TOF(((fVar9 - (float10)pfVar4[10]) * ((fVar7 + fVar9) * (fVar9 - (float10)pfVar4[8])))));
  fVar2 = (float)((float10)pfVar4[4] - (float10)pfVar6[4]);
  local_2c = (float)((float10)pfVar4[5] - (float10)pfVar6[5]);
  local_28 = (float)((float10)pfVar4[6] - (float10)pfVar6[6]);
  if (param_2 + 2 <= *(int *)((int)this + 0x24) + -1) {
    pfVar5 = ((float *)GEN_TOP(((param_2 * 3 + 9) * 0x10 + (int)this)));
    fVar8 = (float10)fVar1;
    fVar9 = (float10)((float)GEN_TOF((((float10)pfVar4[10] + fVar9) *
                            ((fVar9 - fVar7) * (fVar9 - (float10)pfVar4[8])))));
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
  return 0;
}

/* ref: FUN_00984260 */
unsigned int F_00984260(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x984260u, gen_a0, gen_a1, 0u, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float * pfVar1;
  float * pfVar2;
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
  iVar7 = *(int *)((int)param_1 + 0x24) + -1;
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
  (*(float *)(gen_frame + 0x4c)) = *(float *)(iVar6 + (int)param_1);
  fVar11 = (float10)*(float *)(iVar6 + (int)param_1);
  pfVar9 = ((float *)GEN_TOP(((iVar8 * 3 + 6) * 0x10 + (int)param_1)));
  (*(float * PTR32 *)(gen_frame + 0x44)) = pfVar9;
  (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF(((fVar10 - fVar11) / ((float10)*pfVar9 - fVar11))));
  F_00983f30(param_1,&(*(float *)(gen_frame + 0x0)),iVar8);
  F_00983db0((*(undefined * PTR32 *)(gen_frame + 0x48)),&(*(float *)(gen_frame + 0x10)),iVar8);
  fVar12 = (float10)(*(float *)(gen_frame + 0x4c));
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(fVar12 * fVar12))));
  fVar13 = (float10)(float)(fVar12 * fVar12);
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(fVar13 * fVar12))));
  fVar14 = (float10)(float)(fVar13 * fVar12);
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(fVar14 - fVar13))));
  fVar15 = (float10)(*(float *)(gen_frame + 0x0));
  fVar16 = (float10)(float)(fVar14 - fVar13);
  fVar10 = (float10)(*(float *)(gen_frame + 0x4));
  fVar11 = (float10)(*(float *)(gen_frame + 0x8));
  fVar3 = ((float)GEN_TOF(((fVar14 - fVar13 * (float10)*(double *)&REFG(undefined, 0x1092098)) + fVar12)));
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar3)));
  fVar17 = (float10)(*(float *)(gen_frame + 0x10));
  fVar18 = (float10)fVar3;
  (*(float *)(gen_frame + 0x0)) = (float)(fVar18 * fVar17);
  fVar19 = (float10)(*(float *)(gen_frame + 0x14));
  (*(float *)(gen_frame + 0x4)) = (float)(fVar19 * fVar18);
  fVar12 = (float10)(*(float *)(gen_frame + 0x18));
  (*(float *)(gen_frame + 0x8)) = (float)(fVar18 * fVar12);
  fVar14 = fVar14 * (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar3 = (float)(fVar13 * (float10)*(double *)&REFG(undefined, 0x10944e0) - fVar14);
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar3)));
  pfVar9 = (*(float * PTR32 *)(gen_frame + 0x44)) + 4;
  fVar20 = (float10)fVar3;
  (*(float *)(gen_frame + 0x20)) = (float)(fVar20 * (float10)*pfVar9);
  pfVar1 = (*(float * PTR32 *)(gen_frame + 0x44)) + 5;
  (*(float *)(gen_frame + 0x24)) = (float)((float10)*pfVar1 * fVar20);
  pfVar2 = (*(float * PTR32 *)(gen_frame + 0x44)) + 6;
  (*(float *)(gen_frame + 0x28)) = (float)(fVar20 * (float10)*pfVar2);
  fVar3 = ((float)GEN_TOF(((fVar14 - fVar13 * (float10)*(double *)&REFG(undefined, 0x10944e0)) + (float10)REFG(double, 0x1088130))));
  (*(float * PTR32 *)(gen_frame + 0x44)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar3)));
  fVar13 = (float10)fVar3;
  fVar3 = ((float)GEN_TOF((fVar13 * (float10)*(float *)((int)param_1 + iVar6 + 0x10))));
  (*(float *)(gen_frame + 0x30)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + iVar6 + 0x14) * fVar13)));
  (*(float *)(gen_frame + 0x34)) = fVar4;
  fVar5 = ((float)GEN_TOF((fVar13 * (float10)*(float *)((int)param_1 + iVar6 + 0x18))));
  (*(float *)(gen_frame + 0x38)) = fVar5;
  fVar3 = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)(fVar20 * (float10)*pfVar9))));
  (*(float *)(gen_frame + 0x10)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)fVar4 + (float10)(float)((float10)*pfVar1 * fVar20))));
  (*(float *)(gen_frame + 0x14)) = fVar4;
  fVar5 = ((float)GEN_TOF(((float10)fVar5 + (float10)(float)(fVar20 * (float10)*pfVar2))));
  (*(float *)(gen_frame + 0x18)) = fVar5;
  fVar3 = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)(fVar18 * fVar17))));
  (*(float *)(gen_frame + 0x20)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)fVar4 + (float10)(float)(fVar19 * fVar18))));
  (*(float *)(gen_frame + 0x24)) = fVar4;
  fVar5 = ((float)GEN_TOF(((float10)fVar5 + (float10)(float)(fVar18 * fVar12))));
  (*(float *)(gen_frame + 0x28)) = fVar5;
  fVar3 = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)(fVar16 * fVar15))));
  (*(float *)(gen_frame + 0x0)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)fVar4 + (float10)(float)(fVar16 * fVar10))));
  (*(float *)(gen_frame + 0x4)) = fVar4;
  fVar5 = ((float)GEN_TOF(((float10)fVar5 + (float10)(float)(fVar16 * fVar11))));
  (*(float *)(gen_frame + 0x8)) = fVar5;
  *param_2 = fVar3;
  param_2[1] = fVar4;
  param_2[2] = fVar5;
  *param_4 = iVar8;
  return 0;
}

/* ref: FUN_00984440 */
unsigned int F_00984440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x984440u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x1fc) = *(uint *)(in_ecx + 0x1fc) | 1;
    return 0;
  }
  *(uint *)(in_ecx + 0x1fc) = *(uint *)(in_ecx + 0x1fc) & 0xfffffffe;
  return 0;
}

/* ref: FUN_00984460 */
unsigned int F_00984460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x984460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x200) = *(uint *)(in_ecx + 0x200) | 1;
    return 0;
  }
  *(uint *)(in_ecx + 0x200) = *(uint *)(in_ecx + 0x200) & 0xfffffffe;
  return 0;
}

/* ref: FUN_00984480 */
unsigned int F_00984480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x984480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x1fc) = *(uint *)(in_ecx + 0x1fc) | 2;
    return 0;
  }
  *(uint *)(in_ecx + 0x1fc) = *(uint *)(in_ecx + 0x1fc) & 0xfffffffd;
  return 0;
}

/* ref: FUN_009844a0 */
unsigned int F_009844a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9844a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x200) = *(uint *)(in_ecx + 0x200) | 2;
    return 0;
  }
  *(uint *)(in_ecx + 0x200) = *(uint *)(in_ecx + 0x200) & 0xfffffffd;
  return 0;
}

/* ref: FUN_009844c0 */
unsigned int F_009844c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9844c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a7;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = REFG(float, 0x1087f04);
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 8) = param_4;
  *(undefined4 *)((int)this + 0xc) = param_5;
  *(undefined4 *)((int)this + 0x10) = param_6;
  uVar1 = *param_7;
  *(undefined4 *)((int)this + 0x2c) = uVar2;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  return 0;
}

/* ref: FUN_00984530 */
unsigned int F_00984530(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x984530u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar3 = (float10)param_2;
  *(float *)(in_ecx + 0x18) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x18) +
              (((float10)*(double *)&REFG(undefined, 0x1094560) * fVar3) / (float10)*(double *)&REFG(undefined, 0x1094568)) /
              (float10)*(float *)(in_ecx + 0x2c))));
  fVar2 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  *(float *)(in_ecx + 0x1c) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x1c) +
              ((fVar3 * fVar2) / (float10)*(double *)&REFG(undefined, 0x1088120)) /
              (float10)*(float *)(in_ecx + 0x2c))));
  *(float *)(in_ecx + 0x20) =
       ((float)GEN_TOF(((fVar3 * fVar2) / (float10)*(double *)&REFG(undefined, 0x10de740) +
              (float10)*(float *)(in_ecx + 0x20))));
  fVar1 = ((float)GEN_TOF((fVar3 / (float10)*(double *)&REFG(undefined, 0x10943d8) + (float10)*(float *)(in_ecx + 0x24))));
  *(float *)(in_ecx + 0x24) = fVar1;
  if ((float10)1 < (float10)fVar1) {
    *(undefined4 *)(in_ecx + 0x24) = REFG(float, 0x1087f04);
  }
  return 0;
}

/* ref: FUN_009845c0 */
uint F_009845c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9845c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0xb8))(param_2);
  if ((char)uVar2 == '\0') {
    if (param_3 == 0x3d) goto LAB_00984615;
    bVar1 = F_00a5fcc0(param_2,param_3);
    if (bVar1 == 0) goto LAB_00984684;
    F_00a608f0(param_2,in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,((undefined1 *)(gen_frame + 0x0)),param_3);
  }
  else if (param_3 == 0x3d) {
LAB_00984615: ;
    F_00a60ca0(param_2,((undefined1 *)(gen_frame + 0x0)),param_4,0);
  }
  else {
    bVar1 = F_00a5fcc0(param_2,param_3);
    if (bVar1 == 0) {
LAB_00984684: ;
      puVar3 = (undefined4 *)F_00a5feb0(param_2);
      *param_1 = *puVar3;
      param_1[1] = puVar3[1];
      param_1[2] = puVar3[2];
      goto LAB_0098469b;
    }
    F_00a608f0(param_2,in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,((undefined1 *)(gen_frame + 0x0)),param_3);
  }
  *param_1 = (*(undefined4 *)(gen_frame + 0x30));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x34));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x38));
LAB_0098469b: ;
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return (uint)param_1;
}

/* ref: FUN_009846c0 */
unsigned int F_009846c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9846c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
  
  uVar3 = REFG(float, 0x1087f04);
  piVar4 = (int *)((int)this + 0x94);
  iVar5 = 0x20;
  fVar6 = (float10)((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) *
                          (float10)*(double *)&REFG(undefined, 0x10943d8))));
  fVar7 = (float10)*(double *)&REFG(undefined, 0x1094560);
  fVar8 = (float10)*(double *)&REFG(undefined, 0x1094568);
  fVar9 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  fVar10 = (float10)*(double *)&REFG(undefined, 0x1088120);
  fVar11 = (float10)*(double *)&REFG(undefined, 0x10de740);
  do {
    iVar2 = piVar4[-1];
    if (iVar2 != 0) {
      *(float *)(iVar2 + 0x18) =
           ((float)GEN_TOF((((fVar6 * fVar7) / fVar8) / (float10)*(float *)(iVar2 + 0x2c) +
                  (float10)*(float *)(iVar2 + 0x18))));
      *(float *)(iVar2 + 0x1c) =
           ((float)GEN_TOF((((fVar6 * fVar9) / fVar10) / (float10)*(float *)(iVar2 + 0x2c) +
                  (float10)*(float *)(iVar2 + 0x1c))));
      *(float *)(iVar2 + 0x20) =
           ((float)GEN_TOF(((float10)(double)(fVar6 * fVar9) / fVar11 + (float10)*(float *)(iVar2 + 0x20))));
      fVar1 = ((float)GEN_TOF((fVar6 / (float10)*(double *)&REFG(undefined, 0x10943d8) + (float10)*(float *)(iVar2 + 0x24))))
      ;
      *(float *)(iVar2 + 0x24) = fVar1;
      if ((float10)1 < (float10)fVar1) {
        *(undefined4 *)(iVar2 + 0x24) = uVar3;
      }
    }
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      *(float *)(iVar2 + 0x18) =
           ((float)GEN_TOF((((fVar6 * fVar7) / fVar8) / (float10)*(float *)(iVar2 + 0x2c) +
                  (float10)*(float *)(iVar2 + 0x18))));
      *(float *)(iVar2 + 0x1c) =
           ((float)GEN_TOF((((fVar6 * fVar9) / fVar10) / (float10)*(float *)(iVar2 + 0x2c) +
                  (float10)*(float *)(iVar2 + 0x1c))));
      *(float *)(iVar2 + 0x20) =
           ((float)GEN_TOF(((float10)(double)(fVar6 * fVar9) / fVar11 + (float10)*(float *)(iVar2 + 0x20))));
      fVar1 = ((float)GEN_TOF((fVar6 / (float10)*(double *)&REFG(undefined, 0x10943d8) + (float10)*(float *)(iVar2 + 0x24))))
      ;
      *(float *)(iVar2 + 0x24) = fVar1;
      if ((float10)1 < (float10)fVar1) {
        *(undefined4 *)(iVar2 + 0x24) = uVar3;
      }
    }
    iVar2 = piVar4[1];
    if (iVar2 != 0) {
      *(float *)(iVar2 + 0x18) =
           ((float)GEN_TOF((((fVar6 * fVar7) / fVar8) / (float10)*(float *)(iVar2 + 0x2c) +
                  (float10)*(float *)(iVar2 + 0x18))));
      *(float *)(iVar2 + 0x1c) =
           ((float)GEN_TOF((((fVar6 * fVar9) / fVar10) / (float10)*(float *)(iVar2 + 0x2c) +
                  (float10)*(float *)(iVar2 + 0x1c))));
      *(float *)(iVar2 + 0x20) =
           ((float)GEN_TOF(((float10)(double)(fVar6 * fVar9) / fVar11 + (float10)*(float *)(iVar2 + 0x20))));
      fVar1 = ((float)GEN_TOF((fVar6 / (float10)*(double *)&REFG(undefined, 0x10943d8) + (float10)*(float *)(iVar2 + 0x24))))
      ;
      *(float *)(iVar2 + 0x24) = fVar1;
      if ((float10)1 < (float10)fVar1) {
        *(undefined4 *)(iVar2 + 0x24) = uVar3;
      }
    }
    iVar2 = piVar4[2];
    if (iVar2 != 0) {
      *(float *)(iVar2 + 0x18) =
           ((float)GEN_TOF((((fVar6 * fVar7) / fVar8) / (float10)*(float *)(iVar2 + 0x2c) +
                  (float10)*(float *)(iVar2 + 0x18))));
      *(float *)(iVar2 + 0x1c) =
           ((float)GEN_TOF((((fVar6 * fVar9) / fVar10) / (float10)*(float *)(iVar2 + 0x2c) +
                  (float10)*(float *)(iVar2 + 0x1c))));
      *(float *)(iVar2 + 0x20) =
           ((float)GEN_TOF(((float10)(double)(fVar6 * fVar9) / fVar11 + (float10)*(float *)(iVar2 + 0x20))));
      fVar1 = ((float)GEN_TOF((fVar6 / (float10)*(double *)&REFG(undefined, 0x10943d8) + (float10)*(float *)(iVar2 + 0x24))))
      ;
      *(float *)(iVar2 + 0x24) = fVar1;
      if ((float10)1 < (float10)fVar1) {
        *(undefined4 *)(iVar2 + 0x24) = uVar3;
      }
    }
    piVar4 = piVar4 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return 0;
}

/* ref: FUN_00984890 */
uint F_00984890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x984890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a7;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 * puVar4;
  int * piVar5;
  
  iVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != param_5) {
    piVar5 = (int *)((int)this + 0x90);
    while (*piVar5 != 0) {
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 1;
      if (0x7f < iVar3) {
        return (uint)param_1;
      }
    }
    piVar5 = (int *)((int)this + 0x294);
    *piVar5 = *piVar5 + 1;
    if (*piVar5 == 0) {
      *(undefined4 *)((int)this + 0x294) = 1;
    }
    *(int *)((int)this + 0x290) = *(int *)((int)this + 0x290) + 1;
    *param_1 = *(undefined4 *)((int)this + 0x294);
    param_1[1] = iVar3;
    puVar4 = (undefined4 *)F_00406b90(0x30,0,0);
    uVar2 = REFG(float, 0x1087f04);
    if (puVar4 != (undefined4 *)0x0) {
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
      *(undefined4 * PTR32 *)((int)this + iVar3 * 4 + 0x90) = puVar4;
      return (uint)param_1;
    }
    *(undefined4 *)((int)this + param_1[1] * 4 + 0x90) = 0;
  }
  return (uint)param_1;
}

/* ref: FUN_009849c0 */
uint F_009849c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9849c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0xc) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_009849d0 */
unsigned int F_009849d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9849d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x10) = param_2;
  return 0;
}

/* ref: FUN_00984a00 */
uint F_00984a00(unsigned int gen_a0)
{
  GEN_ENTER(0x984a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 4));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00984a30 */
byte F_00984a30(unsigned int gen_a0)
{
  GEN_ENTER(0x984a30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 8) != 0;
}

/* ref: FUN_00984a50 */
unsigned int F_00984a50(unsigned int gen_a0)
{
  GEN_ENTER(0x984a50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&REFG(undefined4, 0x14a06d8))[iVar1] == 0) {
      (&REFG(undefined4, 0x14a06d8))[iVar1] = param_1;
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return 0;
}

/* ref: FUN_00984a80 */
unsigned int F_00984a80(unsigned int gen_a0)
{
  GEN_ENTER(0x984a80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
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
uint F_00984ab0(void)
{
  GEN_ENTER(0x984ab0u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  
  if (REFG(int, 0x14a06d0) != 0) {
    F_0050c620(REFG(int, 0x14a06d0),0,0);
    REFG(int, 0x14a06d0) = 0;
  }
  if (REFG(undefined4, 0x14a06c4) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a06c4) + 0xc))))(REFG(undefined4, 0x14a06c4));
    REFG(undefined4, 0x14a06c4) = (int *)0x0;
  }
  if (REFG(undefined4, 0x14a06bc) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a06bc) + 0xc))))(REFG(undefined4, 0x14a06bc));
    REFG(undefined4, 0x14a06bc) = (int *)0x0;
  }
  if (REFG(undefined4, 0x14a06c0) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a06c0) + 0xc))))(REFG(undefined4, 0x14a06c0));
    REFG(undefined4, 0x14a06c0) = (int *)0x0;
  }
  pvVar1 = F_00c48350(&REFG(undefined4, 0x14a06d8),0,0x40);
  return (uint)pvVar1;
}

/* ref: FUN_00984b30 */
unsigned int F_00984b30(unsigned int gen_a0)
{
  GEN_ENTER(0x984b30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((char)param_1 != '\0') {
    REFG(undefined4, 0x14a06b8) = REFG(undefined4, 0x14a06b8) | 1;
    return 0;
  }
  REFG(undefined4, 0x14a06b8) = REFG(undefined4, 0x14a06b8) & 0xfffffffe;
  return 0;
}

/* ref: FUN_00984b50 */
byte F_00984b50(unsigned int gen_a0)
{
  GEN_ENTER(0x984b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c48350((undefined *)((int)this + 0x10),0,0x60);
  *(undefined4 *)((int)this + 0x18) = 0xe0000000;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x38) = 0xe0000000;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x58) = 0xe0000000;
  *(undefined4 *)((int)this + 0x5c) = 0;
  F_00c48350((undefined *)((int)this + 0x70),0,0x40);
  *(undefined4 *)((int)this + 0x78) = 0xe0000000;
  *(undefined4 *)((int)this + 0x88) = 0xe0000000;
  *(undefined4 *)((int)this + 0x98) = 0xe0000000;
  *(undefined4 *)((int)this + 0xa8) = 0xe0000000;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined1 *)((int)this + 0xb0) = 0;
  return 1;
}

/* ref: FUN_00984c30 */
unsigned int F_00984c30(unsigned int gen_a0)
{
  GEN_ENTER(0x984c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)((int)this + 0x78);
  F_00981430((int)this + 0x48,(uint)puVar1);
  F_00982720((int)this + 0xe8,puVar1,(int)this + 0xa8);
  *(undefined4 *)this = *puVar1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 0x84);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 0x7c);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0x88);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x94);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x80);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x8c);
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x98);
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)((int)this + 0x6c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x70);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x74);
  return 0;
}

/* ref: FUN_00984cd0 */
uint F_00984cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x984cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  short * psVar2;
  ushort uVar3;
  int iVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  uint local_c;
  int local_8;
  
  local_c = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3a000)));
  if (local_c != 0) {
    local_8 = 0x39000;
    do {
      iVar4 = *(int *)((int)this + 0x158);
      uVar3 = *(ushort *)(local_8 + iVar4);
      iVar7 = (uint)uVar3 * 0x68;
      iVar1 = iVar7 + 0x1000 + iVar4;
      if (*(int *)(iVar7 + 0x103c + iVar4) != 4) {
        piVar5 = *(int * PTR32 *)(iVar1 + 0x30);
        ((code *)*(gen_code32 *)(*piVar5 + 0x30))(piVar5);
        piVar5 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 0x30) + 0x1dc)));
        uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0xe8))(piVar5);
        *((ushort *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3b004 +
         ((uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x158) + 0x46004 + uVar6 * 2))) + uVar6 * 0x800) * 2)))
             = uVar3;
        psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 0x158) + 0x46004 + uVar6 * 2)));
        *psVar2 = *psVar2 + 1;
      }
      local_8 = local_8 + 2;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x150) + 0x54))))(*(int * PTR32 *)((int)this + 0x150));
  return uVar6;
}

/* ref: FUN_00984d90 */
unsigned int F_00984d90(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0x984d90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1164);
  if (iVar3 < 0x80) {
    puVar1 = (undefined4 *)(iVar3 * 0x20 + 0x164 + param_1);
    *(int *)(param_1 + 0x1164) = iVar3 + 1;
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
  return 0;
}

/* ref: FUN_00984e00 */
uint F_00984e00(unsigned int gen_a0)
{
  GEN_ENTER(0x984e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  undefined * this_00;
  int iVar3;
  uint uVar4;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x150);
  ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  piVar2 = *(int * PTR32 *)((int)this + 0x158);
  iVar3 = 0;
  while (*piVar2 != 0) {
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
    if (0x3ff < iVar3) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      return 0;
    }
  }
  if (REFG(char, 0x14a06d6) == '\0') {
    this_00 = (undefined *)(REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8));
    REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + 0xa0;
    if (this_00 != (undefined *)0x0) {
      uVar4 = F_0097acd0(this_00,iVar3);
      goto LAB_00984e5b;
    }
  }
  else {
    REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + 0xa0;
  }
  uVar4 = 0;
LAB_00984e5b: ;
  *((uint *)GEN_TOP((*(int *)((int)this + 0x158) + iVar3 * 4))) = uVar4;
  ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  return uVar4;
}

/* ref: FUN_00984ea0 */
unsigned int F_00984ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x984ea0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1);
    ((code *)*(gen_code32 *)*param_1)(param_1,1);
    if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (uVar1 != 0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
    }
  }
  return 0;
}

/* ref: FUN_00984ee0 */
uint F_00984ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x984ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if ((param_2 < 0x800) && (param_1 != 0)) {
    uVar3 = param_2 * 0x68;
    iVar1 = *(int *)((int)this + 0x158) + 0x1000 + uVar3;
    if ((*((int *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1040 + uVar3))) == param_1) &&
       (*(int *)(iVar1 + 0x3c) != 3)) {
      uVar3 = *(uint *)(iVar1 + 0x30);
      if ((uVar3 != 0) && (piVar2 = *(int * PTR32 *)(uVar3 + 0x270), piVar2 != (int *)0x0)) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,iVar1);
      }
      *(undefined4 *)(iVar1 + 0x3c) = 3;
    }
  }
  return uVar3;
}

/* ref: FUN_00984f40 */
ushort F_00984f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x984f40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if ((((param_2 < 0x800) && (param_1 != 0)) &&
      (uVar3 = *(int *)((int)this + 0x158) + 0x1000 + param_2 * 0x68,
      *((int *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1040 + param_2 * 0x68))) == param_1)) &&
     ((iVar1 = *(int *)(uVar3 + 0x30), iVar1 != 0 && (uVar3 = *(int *)(uVar3 + 0x3c) - 1, uVar3 < 2)
      ))) {
    uVar2 = (ushort)(~(byte)((ushort)*(undefined2 *)(iVar1 + 0x3ac) >> 10) & 1) << 10 |
            *(ushort *)(iVar1 + 0x3ac) & 0xfbff;
    uVar3 = (uint)uVar2;
    *(ushort *)(iVar1 + 0x3ac) = uVar2;
  }
  return (ushort)uVar3;
}

/* ref: FUN_00984fc0 */
byte F_00984fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x984fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  int iVar2;
  byte bVar3;
  
  if ((((param_2 < 0x800) && (param_1 != 0)) &&
      (iVar1 = *(int *)((int)this + 0x158) + 0x1000 + param_2 * 0x68,
      *((int *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1040 + param_2 * 0x68))) == param_1)) &&
     (iVar2 = *(int *)(iVar1 + 0x3c), iVar2 != 3)) {
    if (iVar2 == 4) {
      return 1;
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 != 0) {
      bVar3 = F_0097ec70(iVar1);
      return bVar3 == 0;
    }
  }
  return 0;
}

/* ref: FUN_00985020 */
unsigned int F_00985020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x985020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte * pbVar1;
  int iVar2;
  
  if (((param_2 < 0x800) && (param_1 != 0)) &&
     (iVar2 = *(int *)((int)this + 0x158) + 0x1000 + param_2 * 0x68,
     *((int *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1040 + param_2 * 0x68))) == param_1)) {
    pbVar1 = (byte *)(iVar2 + 0x62);
    *pbVar1 = *pbVar1 ^ (*(byte *)(iVar2 + 0x62) ^ (byte)param_3) & 1;
  }
  return 0;
}

/* ref: FUN_00985060 */
unsigned int F_00985060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x985060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte * pbVar1;
  int iVar2;
  
  if (((param_2 < 0x800) && (param_1 != 0)) &&
     (iVar2 = *(int *)((int)this + 0x158) + 0x1000 + param_2 * 0x68,
     *((int *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1040 + param_2 * 0x68))) == param_1)) {
    pbVar1 = (byte *)(iVar2 + 0x62);
    *pbVar1 = *pbVar1 ^ ((char)param_3 * '\x02' ^ *(byte *)(iVar2 + 0x62)) & 2;
  }
  return 0;
}

/* ref: FUN_009850a0 */
unsigned int F_009850a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9850a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  
  if ((((param_2 < 0x800) && (param_1 != 0)) &&
      (iVar1 = *(int *)((int)this + 0x158) + 0x1000 + param_2 * 0x68,
      *((int *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1040 + param_2 * 0x68))) == param_1)) &&
     (*(int *)(iVar1 + 0x30) != 0)) {
    *(byte *)(iVar1 + 0x5e) = (byte)param_4;
    *(ushort *)(iVar1 + 0x60) = *(ushort *)(iVar1 + 0x60) | 1 << ((byte)param_4 & 0x1f);
  }
  return 0;
}

/* ref: FUN_009850f0 */
unsigned int F_009850f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x9850f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  int iVar1;
  
  if ((((param_3 < 0x800) && (param_2 != 0)) &&
      (*((int *)GEN_TOP((*(int *)(param_1 + 0x158) + 0x1040 + param_3 * 0x68))) == param_2)) &&
     ((iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x158) + param_3 * 0x68 + 0x1030))), iVar1 != 0 &&
      (((*(uint *)(iVar1 + 0x1d0) & 0x40000) == 0 || (*(int *)(iVar1 + 0x1e0) != 0)))))) {
    *((float *)GEN_TOP((*(int *)(iVar1 + 0x1ec) + 0x94))) = param_4;
  }
  return 0;
}

/* ref: FUN_00985150 */
unsigned int F_00985150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x985150u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  int iVar1;
  
  if ((((param_3 < 0x800) && (param_2 != 0)) &&
      (*((int *)GEN_TOP((*(int *)(param_1 + 0x158) + 0x1040 + param_3 * 0x68))) == param_2)) &&
     ((iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x158) + param_3 * 0x68 + 0x1030))), iVar1 != 0 &&
      (((*(uint *)(iVar1 + 0x1d0) & 0x40000) == 0 || (*(int *)(iVar1 + 0x1e0) != 0)))))) {
    *(float *)(iVar1 + 0x318) = param_4;
  }
  return 0;
}

/* ref: FUN_009851b0 */
uint F_009851b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9851b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = param_2;
  if (((param_2 < (undefined4 *)0x800) && (param_1 != 0)) &&
     (puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1000 + (int)((int)(uintptr_t)param_2) * 0x68))),
     *((int *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1040 + (int)((int)(uintptr_t)param_2) * 0x68))) == param_1)) {
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
    piVar1 = (int *)puVar2[0xc];
    puVar2[0xb] = param_3[0xe];
    if ((piVar1 != (int *)0x0) && (((piVar1[0x74] & 0x40000U) == 0 || (piVar1[0x78] != 0)))) {
      puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,puVar2)));
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00985340 */
unsigned int F_00985340(unsigned int gen_a0)
{
  GEN_ENTER(0x985340u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = (uint)(param_1 - REFG(int, 0x14a09f4)) >> 10;
  *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
  REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
  REFG(undefined4, 0x14a09e8) = uVar1;
  return 0;
}

/* ref: FUN_00985370 */
float10 F_00985370(float gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x985370u, 0u, 0u, 0u, gen_a3);
  float in_xmm2 = (float)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm7 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float10 fVar2;
  undefined4 uVar3;
  float in_xmm1;
  double dVar4;
  
  fVar1 = *(float *)(param_4 + 0x14);
  (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(param_4 + 4);
  (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(param_4 + 8);
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  in_xmm1 = REFG(float, 0x1087f04);
  fVar2 = F_00c4ca20(REFG(float, 0x1087f04),in_xmm2,in_xmm3,in_xmm7,(float10)fVar1);
  (*(float *)(gen_frame + 0x68)) = (float)fVar2;
  fVar2 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar1);
  uVar3 = 0;
  (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x68));
  (*(float *)(gen_frame + 0xc)) = (float)fVar2;
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(-(float10)(float)fVar2));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x68));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  dVar4 = F_00981ba0(param_5,&(*(float *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x38)));
  fVar2 = (float10)REFG(double, 0x1088108);
  *(float *)(param_5 + 0x24) = ((float)GEN_TOF(((float10)*(float *)(param_4 + 0xc) + fVar2)));
  fVar1 = *(float *)(param_4 + 0x10);
  *(undefined4 *)(param_5 + 0x2c) = uVar3;
  *(float *)(param_5 + 0x28) = (float)(fVar2 + (float10)fVar1);
  return (float10)dVar4;
}

/* ref: FUN_00985470 */
uint F_00985470(unsigned int gen_a0)
{
  GEN_ENTER(0x985470u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  REFG(int, 0x14a09fc) = param_1;
  *(undefined4 *)&REFG(undefined, 0x14a0a00) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0a04) = 0;
  if ((REFG(undefined4, 0x14a0a14) == (code *)0x0) || (param_1 == 0)) {
    REFG(undefined4, 0x14a0a08) = 0;
  }
  else {
    REFG(undefined4, 0x14a0a08) = ((code *)REFG(gen_code32, 0x14a0a14))(param_1,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
  }
  if ((REFG(undefined4, 0x14a0a14) == (code *)0x0) || (REFG(int, 0x14a09fc) == 0)) {
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
uint F_00985510(unsigned int gen_a0)
{
  GEN_ENTER(0x985510u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  iVar1 = (&REFG(undefined4, 0x14a0a08))[REFG(int, 0x14a09f8)];
  uVar2 = *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
  uVar3 = (param_1 + 0xfU & 0xfffffff0) + uVar2;
  bVar4 = REFG(undefined4, 0x14a09fc) < uVar3;
  *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar3;
  return ~-(uint)bVar4 & iVar1 + uVar2;
}

/* ref: FUN_00985560 */
uint F_00985560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x985560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  uint * puVar7;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  iVar5 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0xa0) = REFG(float, 0x132f458);
  *(undefined4 *)((int)this + 0xa4) = REFG(float, 0x132f45c);
  *(undefined4 *)((int)this + 0xa8) = REFG(float, 0x132f460);
  *(undefined4 *)((int)this + 0xac) = REFG(float, 0x132f464);
  *(undefined4 *)((int)this + 0xb0) = REFG(float, 0x132f468);
  *(undefined4 *)((int)this + 0xb4) = REFG(float, 0x132f46c);
  *(undefined4 *)((int)this + 0xb8) = REFG(float, 0x132f470);
  puVar7 = (uint *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0xbc) = REFG(float, 0x132f474);
  *(undefined4 *)((int)this + 0xc0) = REFG(float, 0x132f478);
  *(undefined4 *)((int)this + 0xc4) = REFG(float, 0x132f47c);
  *(undefined4 *)((int)this + 200) = REFG(float, 0x132f480);
  *(undefined4 *)((int)this + 0xcc) = REFG(float, 0x132f484);
  *(undefined4 *)((int)this + 0xd0) = REFG(float, 0x132f488);
  *(undefined4 *)((int)this + 0xd4) = REFG(float, 0x132f48c);
  *(undefined4 *)((int)this + 0xd8) = REFG(float, 0x132f490);
  *(undefined4 *)((int)this + 0xdc) = REFG(float, 0x132f494);
  *(undefined1 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0x88) = param_3;
  *(undefined4 *)((int)this + 0x78) = param_2;
  *(int * PTR32 *)this = param_1;
  ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  do {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x1c))))(*(int * PTR32 *)this,iVar5);
    *puVar7 = uVar3;
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar5 < 2);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this,param_2,1);
  *(uint *)((int)this + 0x68) = uVar3;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x14))))(*(int * PTR32 *)this,param_3,1);
  uVar2 = REFG(float, 0x109cab8);
  uVar1 = REFG(float, 0x1088068);
  *(uint *)((int)this + 0x6c) = uVar3;
  ((undefined4 *)(gen_frame + 0xc))[0] = uVar2;
  ((undefined4 *)(gen_frame + 0xc))[1] = uVar2;
  ((undefined4 *)(gen_frame + 0xc))[2] = uVar2;
  ((undefined4 *)(gen_frame + 0xc))[3] = uVar2;
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x20)) = uVar2;
  ((undefined4 *)(gen_frame + 0x24))[0] = uVar2;
  ((undefined4 *)(gen_frame + 0x24))[1] = uVar1;
  ((undefined4 *)(gen_frame + 0x24))[2] = uVar1;
  ((undefined4 *)(gen_frame + 0x24))[3] = uVar2;
  ((undefined4 *)(gen_frame + 0x24))[4] = uVar2;
  ((undefined4 *)(gen_frame + 0x24))[5] = uVar1;
  ((undefined4 *)(gen_frame + 0x24))[6] = uVar1;
  ((undefined4 *)(gen_frame + 0x24))[7] = uVar2;
  ((undefined4 *)(gen_frame + 0x24))[8] = uVar2;
  ((undefined4 *)(gen_frame + 0x24))[9] = uVar1;
  ((undefined4 *)(gen_frame + 0x24))[10] = uVar1;
  ((undefined4 *)(gen_frame + 0x24))[0xb] = uVar2;
  ((undefined4 *)(gen_frame + 0x24))[0xc] = uVar1;
  ((undefined4 *)(gen_frame + 0x24))[0xd] = uVar1;
  ((undefined4 *)(gen_frame + 0x24))[0xe] = uVar1;
  ((undefined4 *)(gen_frame + 0x24))[0xf] = uVar1;
  ((undefined4 *)(gen_frame + 0x24))[0x10] = uVar2;
  ((undefined4 *)(gen_frame + 0x24))[0x11] = uVar1;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this,0x60,0);
  *(uint *)((int)this + 4) = uVar3;
  puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x70))))(*(int * PTR32 *)this,uVar3,0,0x60,0)));
  puVar6 = ((undefined4 *)(gen_frame + 0xc));
  for (iVar5 = 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar4 = puVar4 + 1;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x78))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 4));
  ((undefined4 *)(gen_frame + 0x24))[0] = 0x10000;
  ((undefined4 *)(gen_frame + 0x24))[1] = 0x20002;
  ((undefined4 *)(gen_frame + 0x24))[2] = 3;
  ((undefined4 *)(gen_frame + 0x24))[3] = 0x60007;
  ((undefined4 *)(gen_frame + 0x24))[4] = 0x50005;
  ((undefined4 *)(gen_frame + 0x24))[5] = 0x70004;
  ((undefined4 *)(gen_frame + 0x24))[6] = 0x10005;
  ((undefined4 *)(gen_frame + 0x24))[7] = 0;
  ((undefined4 *)(gen_frame + 0x24))[8] = 0x50004;
  ((undefined4 *)(gen_frame + 0x24))[9] = 0x60002;
  ((undefined4 *)(gen_frame + 0x24))[10] = 0x70007;
  ((undefined4 *)(gen_frame + 0x24))[0xb] = 0x20003;
  ((undefined4 *)(gen_frame + 0x24))[0xc] = 0x20006;
  ((undefined4 *)(gen_frame + 0x24))[0x10] = 0;
  ((undefined4 *)(gen_frame + 0x24))[0xd] = 0x10001;
  ((undefined4 *)(gen_frame + 0x24))[0xe] = 0x60005;
  ((undefined4 *)(gen_frame + 0x24))[0xf] = 0x40007;
  ((undefined4 *)(gen_frame + 0x24))[0x11] = 0x70003;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x14))))(*(int * PTR32 *)this,0x48,0);
  *(uint *)((int)this + 8) = uVar3;
  puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x6c))))(*(int * PTR32 *)this,uVar3,0,0x48,0)));
  puVar6 = ((undefined4 *)(gen_frame + 0x24));
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x74))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 8));
  return uVar3;
}

/* ref: FUN_00985860 */
uint F_00985860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x985860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  code * pcVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  switch((unsigned int)(uintptr_t)(*param_2 & 7)) {
  case 0: ;
  case 1: ;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 10;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0xc))))(*(int * PTR32 *)this,param_1,param_2,&(*(undefined4 *)(gen_frame + 0x8)),1);
    break;
  case 2: ;
    (*(undefined4 *)(gen_frame + 0x6c)) = 10;
    (*(undefined4 *)(gen_frame + 0x7c)) = 10;
    (*(undefined4 *)(gen_frame + 0x8c)) = 10;
    (*(undefined4 *)(gen_frame + 0x80)) = 5;
    (*(undefined4 *)(gen_frame + 0x90)) = 5;
    (*(undefined4 *)(gen_frame + 0xa0)) = 5;
    (*(undefined4 *)(gen_frame + 0xb0)) = 5;
    (*(undefined4 *)(gen_frame + 0x9c)) = 3;
    (*(undefined4 *)(gen_frame + 0xb4)) = 3;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined4 *)(gen_frame + 0x84)) = 0;
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    (*(undefined4 *)(gen_frame + 0x98)) = 0;
    (*(undefined4 *)(gen_frame + 0xa8)) = 0;
    (*(undefined4 *)(gen_frame + 0x94)) = 1;
    (*(undefined4 *)(gen_frame + 0xa4)) = 2;
    (*(undefined4 *)(gen_frame + 0xac)) = 4;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0xc))))(*(int * PTR32 *)this,param_1,param_2,&(*(undefined4 *)(gen_frame + 0x68)),5);
    break;
  case 3: ;
    piVar2 = *(int * PTR32 *)this;
    (*(undefined4 *)(gen_frame + 0x7c)) = 4;
    (*(undefined4 *)(gen_frame + 0x8c)) = 4;
    (*(undefined4 *)(gen_frame + 0x80)) = 5;
    (*(undefined4 *)(gen_frame + 0x90)) = 5;
    (*(undefined4 *)(gen_frame + 0x94)) = 1;
    (*(undefined4 *)(gen_frame + 0xa0)) = 5;
    (*(undefined4 *)(gen_frame + 0xac)) = 1;
    (*(undefined4 *)(gen_frame + 0xb0)) = 5;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    (*(undefined4 *)(gen_frame + 0x6c)) = 0xb;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined4 *)(gen_frame + 0x84)) = 0;
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    (*(undefined4 *)(gen_frame + 0x98)) = 0;
    (*(undefined4 *)(gen_frame + 0x9c)) = 4;
    (*(undefined4 *)(gen_frame + 0xa4)) = 2;
    (*(undefined4 *)(gen_frame + 0xa8)) = 0;
    (*(undefined4 *)(gen_frame + 0xb4)) = 3;
    uVar4 = 5;
    pcVar1 = *(gen_code32 *)(*piVar2 + 0xc);
    puVar3 = &(*(undefined4 *)(gen_frame + 0x68));
    goto LAB_00985ae4;
  case 4: ;
    (*(undefined4 *)(gen_frame + 0xa0)) = 5;
    (*(undefined4 *)(gen_frame + 0xb0)) = 5;
    (*(undefined4 *)(gen_frame + 0x6c)) = 1;
    (*(undefined4 *)(gen_frame + 0x7c)) = 1;
    (*(undefined4 *)(gen_frame + 0x8c)) = 1;
    (*(undefined4 *)(gen_frame + 0x90)) = 1;
    (*(undefined4 *)(gen_frame + 0xb4)) = 1;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined4 *)(gen_frame + 0x84)) = 0;
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    (*(undefined4 *)(gen_frame + 0x94)) = 0;
    (*(undefined4 *)(gen_frame + 0x98)) = 0;
    (*(undefined4 *)(gen_frame + 0xa4)) = 0;
    (*(undefined4 *)(gen_frame + 0xa8)) = 0;
    (*(undefined4 *)(gen_frame + 0x5c)) = 7;
    (*(undefined4 *)(gen_frame + 0x70)) = 2;
    (*(undefined4 *)(gen_frame + 0x80)) = 4;
    (*(undefined4 *)(gen_frame + 0x9c)) = 7;
    (*(undefined4 *)(gen_frame + 0xac)) = 7;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0xc))))(*(int * PTR32 *)this,param_1,param_2,&(*(undefined4 *)(gen_frame + 0x58)),6);
    break;
  case 5: ;
    piVar2 = *(int * PTR32 *)this;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 5;
    (*(undefined4 *)(gen_frame + 0x6c)) = 7;
    (*(undefined4 *)(gen_frame + 0x70)) = 5;
    (*(undefined4 *)(gen_frame + 0x7c)) = 7;
    (*(undefined4 *)(gen_frame + 0x80)) = 5;
    (*(undefined4 *)(gen_frame + 0x90)) = 5;
    (*(undefined4 *)(gen_frame + 0xa0)) = 5;
    (*(undefined4 *)(gen_frame + 0x1c)) = 7;
    (*(undefined4 *)(gen_frame + 0x2c)) = 1;
    (*(undefined4 *)(gen_frame + 0x30)) = 2;
    (*(undefined4 *)(gen_frame + 0x3c)) = 1;
    (*(undefined4 *)(gen_frame + 0x40)) = 4;
    (*(undefined4 *)(gen_frame + 0x4c)) = 1;
    (*(undefined4 *)(gen_frame + 0x50)) = 1;
    (*(undefined4 *)(gen_frame + 0x5c)) = 7;
    (*(undefined4 *)(gen_frame + 0x74)) = 1;
    (*(undefined4 *)(gen_frame + 0x78)) = 1;
    (*(undefined4 *)(gen_frame + 0x84)) = 2;
    (*(undefined4 *)(gen_frame + 0x88)) = 1;
    (*(undefined4 *)(gen_frame + 0x8c)) = 1;
    (*(undefined4 *)(gen_frame + 0x94)) = 3;
    (*(undefined4 *)(gen_frame + 0x98)) = 1;
    (*(undefined4 *)(gen_frame + 0x9c)) = 1;
    (*(undefined4 *)(gen_frame + 0xa4)) = 4;
    (*(undefined4 *)(gen_frame + 0xa8)) = 1;
    (*(undefined4 *)(gen_frame + 0xac)) = 1;
    (*(undefined4 *)(gen_frame + 0xb0)) = 1;
    (*(undefined4 *)(gen_frame + 0xb4)) = 1;
    pcVar1 = *(gen_code32 *)(*piVar2 + 0xc);
    uVar4 = 10;
    puVar3 = &(*(undefined4 *)(gen_frame + 0x18));
LAB_00985ae4: ;
    (*(undefined4 *)(gen_frame + 0xac)) = 1;
    (*(undefined4 *)(gen_frame + 0xa0)) = 5;
    (*(undefined4 *)(gen_frame + 0x90)) = 5;
    (*(undefined4 *)(gen_frame + 0x80)) = 5;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    (*pcVar1)(piVar2,param_1,param_2,puVar3,uVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return (uint)param_1;
}

/* ref: FUN_00985b20 */
unsigned int F_00985b20(unsigned int gen_a0)
{
  GEN_ENTER(0x985b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  if (*(int *)((int)this + 0x74) != 0) {
    *(undefined4 *)((int)this + 0x74) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x78))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x68));
  }
  if (*(int *)((int)this + 0x84) != 0) {
    *(undefined4 *)((int)this + 0x84) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x74))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x6c));
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf6 */
uint F_00985b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x985b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if ((-1 < param_1) && (param_1 < *(int *)(this + 8) - *(int *)(this + 4) >> 2)) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 4) + param_1 * 4)));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    return uVar2;
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf8 */
uint F_00985ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x985ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x18) - *(int *)(this + 0x14) >> 2)) {
    return *((uint *)GEN_TOP((*(int *)(this + 0x14) + param_1 * 4)));
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf7 */
uint F_00985bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x985bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 8) - *(int *)(this + 4) >> 2)) {
    return *((uint *)GEN_TOP((*(int *)(this + 4) + param_1 * 4)));
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf9 */
uint F_00985c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x985c00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x24) + param_2 * 4)));
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf10 */
uint F_00985c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x985c10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x34) + param_2 * 4)));
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf11 */
uint F_00985c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x985c20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x44) + param_2 * 4)));
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf12 */
uint F_00985c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x985c30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x54) + param_2 * 4)));
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf13 */
uint F_00985c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x985c40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 100) + param_2 * 4)));
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf14 */
uint F_00985c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x985c50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x74) + param_2 * 4)));
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf20 */
uint F_00985c60(unsigned int gen_a0)
{
  GEN_ENTER(0x985c60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 8) - *(int *)(in_ecx + 4) >> 2;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf21 */
uint F_00985c70(unsigned int gen_a0)
{
  GEN_ENTER(0x985c70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x18) - *(int *)(in_ecx + 0x14) >> 2;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf22 */
uint F_00985c80(unsigned int gen_a0)
{
  GEN_ENTER(0x985c80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x28) - *(int *)(in_ecx + 0x24) >> 2;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf23 */
uint F_00985c90(unsigned int gen_a0)
{
  GEN_ENTER(0x985c90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x38) - *(int *)(in_ecx + 0x34) >> 2;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf24 */
uint F_00985ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x985ca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x48) - *(int *)(in_ecx + 0x44) >> 2;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf25 */
uint F_00985cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x985cb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x58) - *(int *)(in_ecx + 0x54) >> 2;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf26 */
uint F_00985cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x985cc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x68) - *(int *)(in_ecx + 100) >> 2;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf27 */
uint F_00985cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x985cd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x78) - *(int *)(in_ecx + 0x74) >> 2;
}

/* ref: FUN_00985ce0 */
uint F_00985ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x985ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10dda64));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00985d00 */
uint F_00985d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x985d00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10dda70));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00985d20 */
uint F_00985d20(unsigned int gen_a0)
{
  GEN_ENTER(0x985d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  pcVar1 = REFG(undefined4, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de77c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda98))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x4c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x4c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x14) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0x14))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd268));
  return (uint)pcVar1;
}

/* ref: FUN_00985d90 */
uint F_00985d90(unsigned int gen_a0)
{
  GEN_ENTER(0x985d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  pcVar1 = REFG(undefined4, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de788));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda98))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x4c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x4c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x14) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0x14))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd250));
  return (uint)pcVar1;
}

/* ref: FUN_00985e00 */
uint F_00985e00(unsigned int gen_a0)
{
  GEN_ENTER(0x985e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  pcVar1 = REFG(undefined4, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de794));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda98))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x4c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x4c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x14) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0x14))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd244));
  return (uint)pcVar1;
}

/* ref: FUN_00985e70 */
uint F_00985e70(unsigned int gen_a0)
{
  GEN_ENTER(0x985e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  pcVar1 = REFG(undefined4, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda98))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x4c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x4c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x14) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0x14))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd25c));
  return (uint)pcVar1;
}

/* ref: FUN_00985ee0 */
uint F_00985ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x985ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  pcVar1 = REFG(undefined4, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10de7ac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xec) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xec));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xb4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xb4));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x7c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x7c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x44) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x44));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xc) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0xc))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10dd8c8));
  return (uint)pcVar1;
}

/* ref: FUN_00985fa0 */
uint F_00985fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x985fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  pcVar1 = REFG(undefined4, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10de7d0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x338) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x378) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x37c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x37c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x378) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x340) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x344) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x344));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x340) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x338) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2b0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2f0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x2f4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x2f4));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2f0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2b8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 700) != 0)) {
    (*pcVar1)(*(int *)((int)this + 700));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2b8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2b0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x228) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x268) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x26c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x26c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x268) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x230) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x234) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x234));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x230) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x228) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x1e4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x1e4));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x1ac) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x1ac));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x118) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x158) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x15c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x15c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x158) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x120) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x124) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x124));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x120) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x118) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xd4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xd4));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x9c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x9c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda98))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x4c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x4c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x14) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0x14))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10dd374));
  return (uint)pcVar1;
}

/* ref: FUN_00986240 */
uint F_00986240(unsigned int gen_a0)
{
  GEN_ENTER(0x986240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  pcVar1 = REFG(undefined4, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10de7f8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x300) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x304) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x304));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x300) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x2cc) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x2cc));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x238) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x278) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x27c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x27c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x278) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x240) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x244) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x244));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x240) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x238) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 500) != 0)) {
    (*pcVar1)(*(int *)((int)this + 500));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x1bc) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x1bc));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x128) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x168) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x16c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x16c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x168) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x134) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x134));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x128) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xe4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xe4));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xac) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xac));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x5c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x5c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x24) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0x24))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10dd39c));
  return (uint)pcVar1;
}

/* ref: FUN_00986480 */
uint F_00986480(unsigned int gen_a0)
{
  GEN_ENTER(0x986480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  pcVar1 = REFG(undefined4, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10de828));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x300) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x304) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x304));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x300) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x2cc) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x2cc));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x238) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x278) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x27c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x27c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x278) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x240) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x244) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x244));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x240) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x238) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 500) != 0)) {
    (*pcVar1)(*(int *)((int)this + 500));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x1bc) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x1bc));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x128) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x168) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x16c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x16c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x168) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x134) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x134));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x128) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xe4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xe4));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xac) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xac));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x5c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x5c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x24) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0x24))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10dd3f8));
  return (uint)pcVar1;
}

/* ref: FUN_009866c0 */
uint F_009866c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9866c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  pcVar1 = REFG(undefined4, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10de858));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a8) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x1ec) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x1ec));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x1b4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x1b4));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a8) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x120) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x160) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x164) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x164));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x160) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x128) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 300) != 0)) {
    (*pcVar1)(*(int *)((int)this + 300));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x128) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x120) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xdc) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xdc));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xa4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xa4));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x54) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x54));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x1c) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0x1c))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10dd428));
  return (uint)pcVar1;
}

/* ref: FUN_00986850 */
uint F_00986850(unsigned int gen_a0)
{
  GEN_ENTER(0x986850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  pcVar1 = REFG(undefined4, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10de884));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x238) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x278) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x27c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x27c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x278) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x240) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x244) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x244));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x240) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x238) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 500) != 0)) {
    (*pcVar1)(*(int *)((int)this + 500));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x1bc) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x1bc));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x128) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x168) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x16c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x16c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x168) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x134) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x134));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x128) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xe4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xe4));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xac) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xac));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x5c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x5c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x24) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0x24))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10dd3cc));
  return (uint)pcVar1;
}

/* ref: FUN_00986a30 */
uint F_00986a30(unsigned int gen_a0)
{
  GEN_ENTER(0x986a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  pcVar1 = REFG(undefined4, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de8b0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xb4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xb4));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x7c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x7c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x44) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x44));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xc) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0xc))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10dd658));
  return (uint)pcVar1;
}

/* ref: FUN_00986ad0 */
uint F_00986ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x986ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  pcVar1 = REFG(undefined4, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10de8c0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x120) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x124) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x124));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x120) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xec) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xec));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xb4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xb4));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x7c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x7c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x44) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x44));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xc) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0xc))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  return (uint)pcVar1;
}

/* ref: FUN_00986bc0 */
uint F_00986bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x986bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10de8d8));
  uVar1 = F_00986ad0((undefined *)((int)this + 0x40));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10dd2b0));
  return uVar1;
}

/* ref: FUN_00986c10 */
uint F_00986c10(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x986c10u, gen_a0, gen_a1, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint * puVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = *(uint * PTR32 *)(param_1 + 4);
  uVar3 = REFG(undefined4, 0x14a0a38);
  if (puVar1 != (uint *)0x0) {
    uVar3 = *puVar1;
  }
  uVar4 = REFG(undefined4, 0x14a0a38);
  if (puVar1 != (uint *)0x0) {
    uVar4 = *puVar1;
  }
  fVar2 = gen_bits2f(param_2);
  if ((uVar4 >> 2 & 3) == 2) {
    fVar2 = param_3;
  }
  if (!((float10)fVar2 <= (float10)((ushort)puVar1[2] & 0x3fff))) {
    if (!(((float10)GEN_TOD(((ushort)puVar1[(uVar3 >> 9 & 0xffff) * 2] & 0x3fff))) <= (float10)fVar2)) {
      uVar3 = F_0097a0b0(param_1,fVar2);
      uVar4 = (uint)(*((ushort *)GEN_TOP((*(int *)(param_1 + 4) + 0x10 + uVar3 * 8))) >> 0xe);
      fVar2 = ((code *)*(gen_code32 *)(param_1 + 0x10 + uVar4 * 8))
                        (*(int *)(param_1 + 0x14 + uVar4 * 8) + param_1,
                         (undefined4)gen_fl2bits(fVar2),uVar3);
      return (uint)gen_fl2bits(fVar2);
    }
    fVar2 = ((code *)*(gen_code32 *)(param_1 + 0x30))
                      (*(int *)(param_1 + 0x34) + param_1,(undefined4)gen_fl2bits(fVar2));
    return (uint)gen_fl2bits(fVar2);
  }
  fVar2 = ((code *)*(gen_code32 *)(param_1 + 0x28))
                    (*(int *)(param_1 + 0x2c) + param_1,(undefined4)gen_fl2bits(fVar2));
  return (uint)gen_fl2bits(fVar2);
}

/* ref: FUN_00986dc0 */
uint F_00986dc0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x986dc0u, gen_a0, 0u, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  int * piVar1;
  float10 fVar2;
  
  piVar1 = ((int *)GEN_TOP((*(int *)(param_1 + 4) + param_3 * 0x14)));
  fVar2 = (float10)((float)GEN_TOF(((float10)(float)((float10)param_2 - (float10)*piVar1) /
                          ((float10)GEN_TOD((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x14 + param_3 * 0x14))) -
                                   *piVar1))))));
  *param_4 = ((float)GEN_TOF((fVar2 * (((float10)GEN_TOD(gen_bits2f(piVar1[6]))) - ((float10)GEN_TOD(gen_bits2f(piVar1[1])))) +
                    ((float10)GEN_TOD(gen_bits2f(piVar1[1]))))));
  param_4[1] = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(piVar1[2]))) +
                      fVar2 * (((float10)GEN_TOD(gen_bits2f(piVar1[7]))) - ((float10)GEN_TOD(gen_bits2f(piVar1[2])))))));
  param_4[2] = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(piVar1[3]))) +
                      (((float10)GEN_TOD(gen_bits2f(piVar1[8]))) - ((float10)GEN_TOD(gen_bits2f(piVar1[3])))) * fVar2)));
  return (uint)piVar1;
}

/* ref: FUN_00986e50 */
uint F_00986e50(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x986e50u, gen_a0, 0u, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *(int *)(in_ecx + 4) + param_3 * 0x14;
  puVar2 = (undefined4 *)(iVar1 + 0x18);
  if (!((float10)*((int *)GEN_TOP((*(int *)(in_ecx + 4) + 0x14 + param_3 * 0x14))) <= (float10)param_2)) {
    puVar2 = (undefined4 *)(iVar1 + 4);
  }
  *param_4 = *puVar2;
  param_4[1] = puVar2[1];
  param_4[2] = puVar2[2];
  return (uint)puVar2;
}

/* ref: FUN_00986e90 */
uint F_00986e90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x986e90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x14 + -1;
  iVar3 = 0;
  if (-1 < iVar4) {
    do {
      uVar2 = (iVar4 - iVar3) / 2 + iVar3;
      piVar1 = ((int *)GEN_TOP((*(int *)(param_1 + 4) + uVar2 * 0x14)));
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
uint F_00986f10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x986f10u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  iVar3 = REFG(float, 0x1087f04);
  piVar2 = *(int * PTR32 *)(param_1 + 4);
  if (piVar2 == *(int * PTR32 *)(param_1 + 8)) {
    param_3[2] = GEN_FLT_TO(param_3[2], REFG(float, 0x1087f04));
    param_3[1] = iVar3;
    *param_3 = iVar3;
    return (uint)param_3;
  }
  iVar3 = ((int)*(int * PTR32 *)(param_1 + 8) - (int)piVar2) / 0x14;
  if (iVar3 != 1) {
    piVar1 = piVar2 + iVar3 * 5 + -5;
    fVar5 = (float10)param_2;
    fVar6 = (float10)*piVar2;
    if (fVar5 <= fVar6) {
      if (*(int *)(param_1 + 0x18) == 0) {
        *param_3 = piVar2[1];
        param_3[1] = piVar2[2];
        param_3[2] = piVar2[3];
        return (uint)param_3;
      }
      if ((*(int *)(param_1 + 0x18) == 1) && (fVar6 = (float10)*piVar2, fVar5 < fVar6)) {
        param_2 = ((float)GEN_TOF((((float10)GEN_TOD(((int)(fVar6 - fVar5) / (int)((float10)*piVar1 - fVar6) + 1))) *
                          (float10)(float)((float10)*piVar1 - fVar6) + fVar5)));
        fVar5 = (float10)param_2;
      }
    }
    else if ((float10)*piVar1 <= fVar5) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        *param_3 = piVar1[1];
        param_3[1] = piVar1[2];
        param_3[2] = piVar1[3];
        return (uint)param_3;
      }
      if ((*(int *)(param_1 + 0x1c) == 1) && (fVar7 = (float10)*piVar1, fVar7 < fVar5)) {
        fVar6 = fVar7 - fVar6;
        param_2 = ((float)GEN_TOF((fVar5 - ((float10)GEN_TOD(((int)(fVar5 - fVar7) / (int)fVar6 + 1))) *
                                  (float10)(float)fVar6)));
        fVar5 = (float10)param_2;
      }
    }
    uVar4 = F_00986e90(param_1,(float)fVar5);
    iVar3 = piVar2[uVar4 * 5 + 9];
    if (-1 < iVar3) {
      if (iVar3 < 2) {
        uVar4 = F_00986dc0(param_1,param_2,uVar4,param_3);
      }
      else if (iVar3 == 2) {
        uVar4 = F_00986e50(param_1,param_2,uVar4,param_3);
        return uVar4;
      }
    }
    return uVar4;
  }
  *param_3 = piVar2[1];
  param_3[1] = *((int *)GEN_TOP((*(int *)(param_1 + 4) + 8)));
  param_3[2] = *((int *)GEN_TOP((*(int *)(param_1 + 4) + 0xc)));
  return (uint)param_3;
}

/* ref: FUN_00987100 */
unsigned int F_00987100(unsigned int gen_a0)
{
  GEN_ENTER(0x987100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(gen_code32 *)((int)this + 0x18) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x20) = ((code *)REFP(0x979ff0));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(gen_code32 *)((int)this + 0x28) = ((code *)REFP(0x97a060));
  *(gen_code32 *)((int)this + 0x50) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x58) = ((code *)REFP(0x979ff0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(gen_code32 *)((int)this + 0x60) = ((code *)REFP(0x97a060));
  *(undefined4 *)((int)this + 100) = 0;
  return 0;
}

/* ref: FUN_00987260 */
uint F_00987260(unsigned int gen_a0)
{
  GEN_ENTER(0x987260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = REFG(undefined4, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10de928));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e8) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x228) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x22c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x22c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x228) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 500) != 0)) {
    (*pcVar1)(*(int *)((int)this + 500));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e8) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  F_00986a30((undefined *)((int)this + 0xf8));
  uVar2 = F_00986a30((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd668));
  return uVar2;
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color2::vf1 */
uint F_00987390(unsigned int gen_a0)
{
  GEN_ENTER(0x987390u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 5) != '\0') {
    return (*(char *)(in_ecx + 7) == '\0') - 3;
  }
  if (*(char * PTR32 *)(in_ecx + 0x20) == *(char * PTR32 *)(in_ecx + 0x24)) {
    return 0xffffffff;
  }
  return (int)**(char * PTR32 *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Normal::vf1 */
uint F_009873c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9873c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char * PTR32 *)(in_ecx + 0x50) == *(char * PTR32 *)(in_ecx + 0x54)) {
    return 0xffffffff;
  }
  return (int)**(char * PTR32 *)(in_ecx + 0x50);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Reflection::vf1 */
uint F_009873d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9873d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 5) != '\0') {
    return 0xfffffffc;
  }
  if (*(char * PTR32 *)(in_ecx + 0x10) == *(char * PTR32 *)(in_ecx + 0x14)) {
    return 0xffffffff;
  }
  return (int)**(char * PTR32 *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Distortion::vf1 */
uint F_009873f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9873f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char * PTR32 *)(in_ecx + 0x58) == *(char * PTR32 *)(in_ecx + 0x5c)) {
    return 0xffffffff;
  }
  return (int)**(char * PTR32 *)(in_ecx + 0x58);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Palette::vf1 */
uint F_00987400(unsigned int gen_a0)
{
  GEN_ENTER(0x987400u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char * PTR32 *)(in_ecx + 0x48) == *(char * PTR32 *)(in_ecx + 0x4c)) {
    return 0xffffffff;
  }
  return (int)**(char * PTR32 *)(in_ecx + 0x48);
}

/* ref: FUN_00987410 */
uint F_00987410(unsigned int gen_a0)
{
  GEN_ENTER(0x987410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ddab4));
  F_00987100((undefined *)((int)this + 8));
  F_00987100((undefined *)((int)this + 0x90));
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf12 */
uint F_00987430(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x987430u, gen_a0, 0u, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  if (iVar2 == 1) {
    *param_3 = **(undefined4 * PTR32 *)(param_1 + 4);
    *param_4 = **(undefined4 * PTR32 *)(param_1 + 4);
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
  *param_3 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + uVar1 * 4)));
  *param_4 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 4 + uVar1 * 4)));
  return uVar1;
}

/* ref: FUN_00987500 */
uint F_00987500(unsigned int gen_a0)
{
  GEN_ENTER(0x987500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ddac4));
  F_00987100((undefined *)((int)this + 8));
  return (uint)this;
}

/* ref: FUN_00987560 */
uint F_00987560(unsigned int gen_a0)
{
  GEN_ENTER(0x987560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10ddad0));
  F_00987100((undefined *)((int)this + 8));
  return (uint)this;
}

/* ref: FUN_00987580 */
unsigned int F_00987580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x987580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  uint * puVar7;
  
  uVar4 = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  puVar7 = param_2;
  if (param_3 != 0) {
    do {
      uVar2 = *puVar7;
      puVar6 = puVar7 + 2;
      cVar3 = (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 3));
      if (uVar2 < 0x5472436f) {
        if (uVar2 == 0x5472436e) {
          cVar3 = (char)*puVar6;
          *(char *)((int)this + 0xd) = cVar3;
          if ('\0' < cVar3) {
            if (REFG(char, 0x14a06d6) == '\0') {
              iVar5 = REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8);
              REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + cVar3 * 4;
              *(int *)((int)this + 8) = iVar5;
            }
            else {
              REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + cVar3 * 4;
              *(undefined4 *)((int)this + 8) = 0;
            }
          }
        }
        else if (uVar2 == 0x4974436e) {
          cVar3 = (char)*puVar6;
          *(char *)((int)this + 0xc) = cVar3;
          if ('\0' < cVar3) {
            if (REFG(char, 0x14a06d6) == '\0') {
              iVar5 = REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8);
              REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + cVar3 * 4;
              *(int *)((int)this + 4) = iVar5;
            }
            else {
              REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + cVar3 * 4;
              *(undefined4 *)((int)this + 4) = 0;
            }
          }
        }
        else if (uVar2 == 0x4974656d) {
          iVar5 = *(int *)((int)this + 4);
          (*(int *)(gen_frame + 0x8)) = CONCAT13((*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 3)) + '\x01',(undefined3)(*(int *)(gen_frame + 0x8)));
          goto LAB_0098768d;
        }
      }
      else if (uVar2 == 0x54726772) {
        cVar3 = (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 2));
        iVar5 = *(int *)((int)this + 8);
        (*(int *)(gen_frame + 0x8)) = (uint)CONCAT11((*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 3)),(*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 2)) + '\x01') << 0x10;
LAB_0098768d: ;
        F_009dae30((undefined *)(iVar5 + cVar3 * 4),puVar6,puVar7[1]);
      }
      puVar1 = puVar7 + 1;
      puVar7 = ((uint *)GEN_TOP(((int)puVar6 + (*puVar1 + 3 & 0xfffffffc))));
      uVar4 = uVar4 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar4 < param_3);
  }
  return 0;
}

/* ref: FUN_009876d0 */
unsigned int F_009876d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9876d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
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
          F_009db020(((undefined *)GEN_TOP((iVar3 * 0x2a + *(int *)((int)this + 0x14)))),puVar5,puVar6[1]);
        }
        else if (uVar2 == 0x426e4e6f) {
          *(char *)((int)this + 0x10) = (char)*puVar5;
        }
        else if (uVar2 == 0x436c6970) {
          iVar3 = (int)local_5;
          local_5 = local_5 + '\x01';
          F_00c46aa0(iVar3 * 0xa4 + *(int *)((int)this + 0x18),puVar5,puVar6[1]);
        }
        else if ((uVar2 == 0x4370436e) && ('\0' < (char)*puVar5)) {
          uVar2 = F_0097ab00((char)*puVar5 * 0xa4);
          *(uint *)((int)this + 0x18) = uVar2;
        }
      }
      else if (uVar2 == 0x4c704564) {
        uVar2 = *puVar5;
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 8);
        *(int *)((int)this + 0xc) =
             (int)(int3)CONCAT21((short)uVar2,*(undefined1 *)((int)this + 0xc));
      }
      else if (uVar2 == 0x4c705374) {
        uVar2 = *puVar5;
        *(uint *)((int)this + 8) =
             *(uint *)((int)this + 8) ^
             ((int)(short)uVar2 << 0x10 ^ *(uint *)((int)this + 8)) & 0xffff0000;
        *(uint *)((int)this + 0xc) =
             *(uint *)((int)this + 0xc) ^
             ((uint)(int)(short)uVar2 >> 0x10 ^ *(uint *)((int)this + 0xc)) & 0xff;
      }
      else if ((uVar2 == 0x5449436e) &&
              (uVar2 = *puVar5, *(char *)((int)this + 8) = (char)uVar2, (char)uVar2 != '\0')) {
        uVar2 = (uint)*(byte *)((int)this + 8) * 0x2a + 3 & 0xfffffffc;
        if (REFG(char, 0x14a06d6) == '\0') {
          iVar3 = REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8);
          REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + uVar2;
          *(int *)((int)this + 0x14) = iVar3;
        }
        else {
          REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + uVar2;
          *(undefined4 *)((int)this + 0x14) = 0;
        }
      }
      puVar1 = puVar6 + 1;
      puVar6 = ((uint *)GEN_TOP(((int)puVar5 + (*puVar1 + 3 & 0xfffffffc))));
      uVar4 = uVar4 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar4 < param_3);
  }
  return 0;
}

/* ref: FUN_00987880 */
uint F_00987880(unsigned int gen_a0)
{
  GEN_ENTER(0x987880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de980));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xc) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x14) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_009878d0 */
unsigned int F_009878d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9878d0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  return 0;
}

/* ref: FUN_00987990 */
uint F_00987990(unsigned int gen_a0)
{
  GEN_ENTER(0x987990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de98c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xc) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x14) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_009879e0 */
unsigned int F_009879e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9879e0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  return 0;
}

/* ref: FUN_00987aa0 */
uint F_00987aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x987aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de998));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xc) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x14) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_00987af0 */
unsigned int F_00987af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x987af0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  return 0;
}

/* ref: FUN_00987bb0 */
uint F_00987bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x987bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de9a4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xc) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x14) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_00987c00 */
unsigned int F_00987c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x987c00u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  return 0;
}

/* ref: FUN_00987cc0 */
uint F_00987cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x987cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1094834);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10de9b0));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 8) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x10) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x18) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x20) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x28) = &REFG(undefined, 0x14a0a44);
  *(undefined4 *)((int)this + 0x2c) = uVar1;
  *(undefined4 *)((int)this + 0x30) = REFG(float, 0x10abe54);
  return (uint)this;
}

/* ref: FUN_00987d30 */
unsigned int F_00987d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x987d30u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  return 0;
}

/* ref: FUN_00987e10 */
uint F_00987e10(unsigned int gen_a0)
{
  GEN_ENTER(0x987e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10de9d4));
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x10) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x18) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x28) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x30) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x40) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x44) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x48) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x4c) = *(uint *)((int)this + 0x4c) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x58) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x60) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 100) = *(uint *)((int)this + 100) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x70) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x74) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x78) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x7c) = *(uint *)((int)this + 0x7c) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x80) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x88) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x90) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x94) = *(uint *)((int)this + 0x94) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xa0) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xa8) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0xac) = *(uint *)((int)this + 0xac) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_00987ee0 */
unsigned int F_00987ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x987ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x80) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x74) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x44) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10dd374));
  return 0;
}

/* ref: FUN_00987f50 */
unsigned int F_00987f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x987f50u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  return 0;
}

/* ref: FUN_00988080 */
uint F_00988080(unsigned int gen_a0)
{
  GEN_ENTER(0x988080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10de9fc));
  *(undefined4 *)((int)this + 4) = 0x3030000;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x10) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x18) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x28) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x30) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x40) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x44) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x48) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x4c) = *(uint *)((int)this + 0x4c) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x58) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x60) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 100) = *(uint *)((int)this + 100) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x70) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x74) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x78) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x7c) = *(uint *)((int)this + 0x7c) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x80) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x88) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x90) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x94) = *(uint *)((int)this + 0x94) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_00988180 */
unsigned int F_00988180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x988180u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  return 0;
}

/* ref: FUN_00988290 */
uint F_00988290(unsigned int gen_a0)
{
  GEN_ENTER(0x988290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10dea2c));
  *(undefined4 *)((int)this + 4) = 0x3030000;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x10) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x18) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x28) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x30) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x40) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x44) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x48) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x4c) = *(uint *)((int)this + 0x4c) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x58) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x60) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 100) = *(uint *)((int)this + 100) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x70) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x74) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x78) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x7c) = *(uint *)((int)this + 0x7c) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x80) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x88) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x90) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x94) = *(uint *)((int)this + 0x94) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_00988390 */
unsigned int F_00988390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x988390u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  return 0;
}

/* ref: FUN_00988490 */
uint F_00988490(unsigned int gen_a0)
{
  GEN_ENTER(0x988490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10dea5c));
  *(undefined2 *)((int)this + 4) = 0xff;
  *(undefined1 *)((int)this + 6) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x10) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x18) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x28) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x30) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x40) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x44) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x48) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x4c) = *(uint *)((int)this + 0x4c) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x58) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x60) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 100) = *(uint *)((int)this + 100) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_00988550 */
unsigned int F_00988550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x988550u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  return 0;
}

/* ref: FUN_00988640 */
uint F_00988640(unsigned int gen_a0)
{
  GEN_ENTER(0x988640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10dea80));
  *(undefined4 *)((int)this + 4) = 0x3030000;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x10) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x18) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x28) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x30) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x40) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x44) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x48) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x4c) = *(uint *)((int)this + 0x4c) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x58) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x60) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 100) = *(uint *)((int)this + 100) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x70) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x74) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x78) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x7c) = *(uint *)((int)this + 0x7c) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_00988710 */
unsigned int F_00988710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x988710u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  return 0;
}

/* ref: FUN_00988860 */
unsigned int F_00988860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x988860u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  return 0;
}

/* ref: FUN_00988990 */
unsigned int F_00988990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x988990u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_00988a10(unsigned int gen_a0)
{
  GEN_ENTER(0x988a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 0x2a) = *(byte *)((int)this + 0x2a) & 0xf8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10dead4));
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined2 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x26) = 0xffff;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x34) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x38) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x40) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x44) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x48) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x50) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x58) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x60) = &REFG(undefined, 0x14a0a44);
  return (uint)this;
}

/* ref: FUN_00988ab0 */
unsigned int F_00988ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x988ab0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  return 0;
}

/* ref: FUN_00988b80 */
uint F_00988b80(unsigned int gen_a0)
{
  GEN_ENTER(0x988b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10deb10));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[4])REFP(0x10ddcd4));
  *(undefined * PTR32 *)((int)this + 0xc) = &REFG(undefined, 0x14a0a50);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x14) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x1c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x24) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x2c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x34) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x3c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x44) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x4c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x54) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x5c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 100) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xffffc009;
  return (uint)this;
}

/* ref: FUN_00988c40 */
unsigned int F_00988c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x988c40u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_00988d10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x988d10u, gen_a0, 0u, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 8) + 4))))((undefined4)gen_fl2bits(param_2),param_4);
  return uVar1;
}

/* ref: FUN_00988d30 */
unsigned int F_00988d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x988d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  *param_4 = GEN_FLT_TO(*param_4, REFG(float, 0x132f3a8));
  param_4[1] = GEN_FLT_TO(param_4[1], REFG(float, 0x132f3ac));
  param_4[2] = GEN_FLT_TO(param_4[2], REFG(float, 0x132f3b0));
  param_4[3] = GEN_FLT_TO(param_4[3], REFG(float, 0x132f3b4));
  return 0;
}

/* ref: FUN_00988d70 */
uint F_00988d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x988d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
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
  puVar4 = (uint *)0x0;
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
              puVar4 = (uint *)(REFG(int, 0x14a09e0) + uVar5);
              iVar6 = uVar5 + (local_c * 8 + 0x13 & 0xfffffff0);
              REFG(int, 0x14a09d8) = iVar6;
            }
            else {
              REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + (local_c * 8 + 0x13 & 0xfffffff0);
              puVar4 = (uint *)0x0;
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
                 *(ushort *)((int)puVar7 + 2) << 0xe | (ushort)puVar4[uVar5 * 2 + 2] & 0x3fff;
            *(char *)((int)puVar4 + uVar5 * 8 + 10) =
                 (char)(int)(((double)GEN_TOD(gen_bits2f(puVar7[1]))) * dVar1);
            *(char *)((int)puVar4 + uVar5 * 8 + 0xb) =
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
    if (puVar4 != (uint *)0x0) {
      *puVar4 = (((local_c & 0xffff) << 5 | local_10 & 7) * 4 | local_14 & 3) * 4 |
                *puVar4 & 0xfe000180 | local_18 & 3;
      *(uint * PTR32 *)((int)this + 4) = puVar4;
    }
  }
  puVar4 = *(uint * PTR32 *)((int)this + 4);
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
uint F_00988fa0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x988fa0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  
  fVar5 = F_00c4ed10((uint)(ulonglong)gen_d2bits((double)param_2),
                       (int)((ulonglong)gen_d2bits((double)param_2) >> 0x20));
  uVar4 = 0;
  uVar3 = (**(uint * PTR32 *)(param_1 + 4) >> 9 & 0xffff) - 1;
  do {
    iVar1 = (int)(uVar3 + uVar4) >> 1;
    uVar2 = (int)(((ushort)(*(uint * PTR32 *)(param_1 + 4))[iVar1 * 2 + 2] & 0x3fff) - (int)fVar5) >> 0x1f;
    uVar4 = uVar4 ^ (iVar1 + 1U ^ uVar4) & uVar2;
    uVar3 = (uVar3 ^ iVar1 - 1U) & uVar2 ^ iVar1 - 1U;
  } while ((int)uVar4 <= (int)uVar3);
  return (int)~(uVar4 - 1) >> 0x1f & uVar4 - 1;
}

/* ref: FUN_00989020 */
uint F_00989020(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x989020u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  
  puVar2 = *(uint * PTR32 *)(param_1 + 4);
  fVar5 = (float10)((ushort)puVar2[2] & 0x3fff);
  fVar6 = ((float10)GEN_TOD(((ushort)puVar2[(*puVar2 >> 9 & 0xffff) * 2] & 0x3fff))) - fVar5;
  fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(((int)(fVar5 - (float10)param_2) / (int)fVar6 + 1))) *
                  (float10)(float)fVar6 + (float10)param_2)));
  uVar3 = F_00988fa0(param_1,fVar1);
  uVar4 = (uint)(*((ushort *)GEN_TOP((*(int *)(param_1 + 4) + 0x10 + uVar3 * 8))) >> 0xe);
  uVar3 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c30) + uVar4 * 8))
                    (*(int *)(&REFG(undefined, 0x14a0c34) + uVar4 * 8) + param_1,(undefined4)gen_fl2bits(fVar1),
                     uVar3);
  return uVar3;
}

/* ref: FUN_009890e0 */
double F_009890e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9890e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  
  puVar2 = *(uint * PTR32 *)(param_1 + 4);
  fVar5 = (float10)((ushort)puVar2[2] & 0x3fff);
  fVar6 = ((float10)GEN_TOD(((ushort)puVar2[(*puVar2 >> 9 & 0xffff) * 2] & 0x3fff))) - fVar5;
  fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(((int)(fVar5 - (float10)param_2) / (int)fVar6 + 1))) *
                  (float10)(float)fVar6 + (float10)param_2)));
  uVar3 = F_00988fa0(param_1,fVar1);
  uVar4 = (uint)(*((ushort *)GEN_TOP((*(int *)(param_1 + 4) + 0x10 + uVar3 * 8))) >> 0xe);
  dVar7 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c30) + uVar4 * 8))
                    (*(int *)(&REFG(undefined, 0x14a0c34) + uVar4 * 8) + param_1,(undefined4)gen_fl2bits(fVar1),
                     uVar3);
  return dVar7;
}

/* ref: FUN_009891b0 */
uint F_009891b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9891b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  
  puVar2 = *(uint * PTR32 *)(param_1 + 4);
  fVar5 = ((float10)GEN_TOD(((ushort)puVar2[(*puVar2 >> 9 & 0xffff) * 2] & 0x3fff)));
  fVar6 = fVar5 - (float10)((ushort)puVar2[2] & 0x3fff);
  fVar1 = ((float)GEN_TOF(((float10)param_2 -
                 ((float10)GEN_TOD(((int)((float10)param_2 - fVar5) / (int)fVar6 + 1))) * (float10)(float)fVar6
                 )));
  uVar3 = F_00988fa0(param_1,fVar1);
  uVar4 = (uint)(*((ushort *)GEN_TOP((*(int *)(param_1 + 4) + 0x10 + uVar3 * 8))) >> 0xe);
  uVar3 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c30) + uVar4 * 8))
                    (*(int *)(&REFG(undefined, 0x14a0c34) + uVar4 * 8) + param_1,(undefined4)gen_fl2bits(fVar1),
                     uVar3);
  return uVar3;
}

/* ref: FUN_00989260 */
double F_00989260(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x989260u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  
  puVar2 = *(uint * PTR32 *)(param_1 + 4);
  fVar5 = ((float10)GEN_TOD(((ushort)puVar2[(*puVar2 >> 9 & 0xffff) * 2] & 0x3fff)));
  fVar6 = fVar5 - (float10)((ushort)puVar2[2] & 0x3fff);
  fVar1 = ((float)GEN_TOF(((float10)param_2 -
                 ((float10)GEN_TOD(((int)((float10)param_2 - fVar5) / (int)fVar6 + 1))) * (float10)(float)fVar6
                 )));
  uVar3 = F_00988fa0(param_1,fVar1);
  uVar4 = (uint)(*((ushort *)GEN_TOP((*(int *)(param_1 + 4) + 0x10 + uVar3 * 8))) >> 0xe);
  dVar7 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c30) + uVar4 * 8))
                    (*(int *)(&REFG(undefined, 0x14a0c34) + uVar4 * 8) + param_1,(undefined4)gen_fl2bits(fVar1),
                     uVar3);
  return dVar7;
}

/* ref: FUN_00989330 */
uint F_00989330(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x989330u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00988fa0(param_1,param_2);
  iVar1 = (uint)(*((ushort *)GEN_TOP((*(int *)(param_1 + 4) + 0x10 + uVar2 * 8))) >> 0xe) * 8;
  uVar2 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c30) + iVar1))
                    (*(int *)(&REFG(undefined, 0x14a0c34) + iVar1) + param_1,(undefined4)gen_fl2bits(param_2),
                     uVar2);
  return uVar2;
}

/* ref: FUN_00989370 */
uint F_00989370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x989370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
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
  puVar8 = (uint *)0x0;
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
              puVar8 = (uint *)(REFG(int, 0x14a09e0) + uVar5);
              REFG(int, 0x14a09d8) = uVar5 + iVar1;
            }
            else {
              REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + iVar1;
              puVar8 = (uint *)0x0;
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
          uVar2 = (int)*(short *)((int)puVar7 + uVar5 * 0x10 + 10) << 0x1c |
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
    if (puVar8 != (uint *)0x0) {
      *puVar8 = ((uVar2 & 0xffff) << 7 | local_c & 3) * 4 | *puVar8 & 0xfe0001f0 | local_10 & 3;
      *(uint * PTR32 *)((int)this + 4) = puVar8;
    }
  }
  puVar7 = *(uint * PTR32 *)((int)this + 4);
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
uint F_00989540(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x989540u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = *(uint * PTR32 *)(param_1 + 4);
  if ((float10)param_2 <= (float10)(puVar1[1] & 0xfffffff)) {
    uVar3 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0cc0) + (*puVar1 & 3) * 8))
                      (*(int *)(&REFG(undefined, 0x14a0cc4) + (*puVar1 & 3) * 8) + param_1,
                       (undefined4)gen_fl2bits(param_2),param_3);
    return uVar3;
  }
  if (!(((float10)GEN_TOD((puVar1[(*puVar1 >> 9 & 0xffff) * 4 + -3] & 0xfffffff))) <= (float10)param_2)) {
    uVar3 = F_0097cb20(param_1,param_2);
    iVar2 = (*((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x14 + uVar3 * 0x10))) >> 0x1c) * 8;
    uVar3 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c90) + iVar2))
                      (*(int *)(&REFG(undefined, 0x14a0c94) + iVar2) + param_1,(undefined4)gen_fl2bits(param_2),
                       uVar3,param_3);
    return uVar3;
  }
  iVar2 = (**(uint * PTR32 *)(param_1 + 4) >> 2 & 3) * 8;
  uVar3 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0cd8) + iVar2))
                    (*(int *)(&REFG(undefined, 0x14a0cdc) + iVar2) + param_1,(undefined4)gen_fl2bits(param_2),
                     param_3);
  return uVar3;
}

/* ref: FUN_009896f0 */
unsigned int F_009896f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9896f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + 0x10;
  uVar2 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    do {
      puVar1 = (undefined *)*puVar4;
      puVar3 = puVar4 + 2;
      if (&REFG(undefined, 0x536372) < puVar1) {
        if (puVar1 == (undefined *)0x526f7452) {
LAB_00989747: ;
          F_0097c440(puVar3,puVar4[1]);
        }
      }
      else {
        if (puVar1 != &REFG(undefined, 0x536372)) {
          if (puVar1 == (undefined *)0x526f74) goto LAB_00989747;
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
unsigned int F_00989770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x989770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
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
          *(ushort *)((int)this + 6) =
               *(ushort *)((int)this + 6) ^
               ((char)(byte)puVar8[1] * 8 ^ *(ushort *)((int)this + 6)) & 0x7f8;
          uVar5 = puVar8[1] + 3 & 0xfffffffc;
          if (REFG(char, 0x14a06d6) == '\0') {
            iVar2 = REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8);
            REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + uVar5;
          }
          else {
            REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + uVar5;
            iVar2 = 0;
          }
          *(int *)((int)this + 8) = iVar2;
          *(uint *)((int)this + 0xc) = (*(ushort *)((int)this + 6) >> 3 & 0xff) << 0x10;
          if ((*(ushort *)((int)this + 6) & 0x7f8) != 0) {
            F_00c46aa0(iVar2,puVar7,puVar8[1]);
          }
        }
        else if (uVar5 < 0x54425655) {
          if (uVar5 == 0x54425654) {
            *(ushort *)((int)this + 4) =
                 (short)(char)(byte)*puVar7 << 0xe | *(ushort *)((int)this + 4) & 0x3fff;
          }
          else if (uVar5 == 0x544654) {
            *(ushort *)((int)this + 6) =
                 (short)(char)((byte)*puVar7 & 7) | *(ushort *)((int)this + 6) & 0xfff8;
          }
          else if (uVar5 == 0x54784e) {
            F_00988d70((undefined *)((int)this + 0x14),param_1,puVar7,param_3);
          }
          else if (uVar5 == 0x54425554) {
            *(ushort *)((int)this + 4) =
                 (short)(char)((byte)*puVar7 & 3) << 0xc | *(ushort *)((int)this + 4) & 0xcfff;
          }
        }
        else {
          if (uVar5 == 0x54434154) {
            uVar6 = (short)(char)((byte)*puVar7 & 3) << 10;
            uVar3 = 0xf3ff;
            goto LAB_009899fb;
          }
          if (uVar5 == 0x54434354) {
            *(ushort *)((int)this + 4) =
                 (short)(char)((byte)*puVar7 & 7) << 7 | *(ushort *)((int)this + 4) & 0xfc7f;
          }
        }
      }
      else if (uVar5 < 0x62456e62) {
        if (uVar5 == 0x62456e61) {
          *(ushort *)((int)this + 4) =
               (short)(char)((byte)*puVar7 & 1) | *(ushort *)((int)this + 4) & 0xfffe;
        }
        else if (uVar5 == 0x54784e52) {
          F_00988d70((undefined *)((int)this + 0x1c),param_1,puVar7,param_3);
        }
        else if (uVar5 == 0x5576534e) {
          *(ushort *)((int)this + 4) =
               (short)(char)((byte)*puVar7 & 7) << 4 | *(ushort *)((int)this + 4) & 0xff8f;
        }
        else if (uVar5 == 0x62433241) {
          *(ushort *)((int)this + 4) =
               (char)((byte)*puVar7 & 1) * 4 | *(ushort *)((int)this + 4) & 0xfffb;
        }
      }
      else if (uVar5 == 0x62504643) {
        uVar6 = (char)((byte)*puVar7 & 1) * 8;
        uVar3 = 0xfff7;
LAB_009899fb: ;
        *(ushort *)((int)this + 4) = uVar6 | *(ushort *)((int)this + 4) & uVar3;
      }
      else if (uVar5 == 0x62555343) {
        *(ushort *)((int)this + 4) =
             (char)((byte)*puVar7 & 1) * 2 | *(ushort *)((int)this + 4) & 0xfffd;
      }
      puVar1 = puVar8 + 1;
      puVar8 = ((uint *)GEN_TOP(((int)puVar7 + (*puVar1 + 3 & 0xfffffffc))));
      uVar4 = uVar4 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar4 < param_3);
  }
  return 0;
}

/* ref: FUN_00989a30 */
unsigned int F_00989a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x989a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
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
          *(ushort *)((int)this + 4) =
               (short)(char)((byte)*puVar3 & 3) << 6 | *(ushort *)((int)this + 4) & 0xff3f;
        }
        else if (uVar1 == 0x544654) {
          *(ushort *)((int)this + 4) =
               (short)(char)((byte)*puVar3 & 7) << 8 | *(ushort *)((int)this + 4) & 0xf8ff;
        }
        else if (uVar1 == 0x4e506f77) {
          F_00988d70((undefined *)((int)this + 8),param_1,puVar3,puVar4[1]);
        }
        else if (uVar1 == 0x54425554) {
          *(ushort *)((int)this + 4) =
               (short)(char)((byte)*puVar3 & 3) << 4 | *(ushort *)((int)this + 4) & 0xffcf;
        }
      }
      else if (uVar1 == 0x54784e6f) {
        *(byte *)((int)this + 6) = (byte)*puVar3;
      }
      else if (uVar1 == 0x5576534e) {
        *(ushort *)((int)this + 4) =
             (char)((byte)*puVar3 & 7) * 2 | *(ushort *)((int)this + 4) & 0xfff1;
      }
      else if (uVar1 == 0x62456e61) {
        *(ushort *)((int)this + 4) =
             (short)(char)((byte)*puVar3 & 1) | *(ushort *)((int)this + 4) & 0xfffe;
      }
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_3);
  }
  return 0;
}

/* ref: FUN_00989b80 */
unsigned int F_00989b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x989b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
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
          *(byte *)((int)this + 5) = (byte)*puVar4;
        }
        else if (uVar1 == 0x544654) {
          *(byte *)((int)this + 4) = *(byte *)((int)this + 4) & 0x1f | (byte)*puVar4 << 5;
        }
        else if (uVar1 == 0x52617465) {
          F_00988d70((undefined *)((int)this + 8),param_1,puVar4,puVar5[1]);
        }
        else if (uVar1 == 0x54434354) {
          bVar2 = ((byte)*puVar4 * '\x04' ^ *(byte *)((int)this + 4)) & 0x1c;
          goto LAB_00989c20;
        }
      }
      else if (uVar1 == 0x62456e61) {
        bVar2 = (*(byte *)((int)this + 4) ^ (byte)*puVar4) & 1;
LAB_00989c20: ;
        *(byte *)((int)this + 4) = *(byte *)((int)this + 4) ^ bVar2;
      }
      else if (uVar1 == 0x62555343) {
        *(byte *)((int)this + 4) =
             *(byte *)((int)this + 4) ^ ((byte)*puVar4 * '\x02' ^ *(byte *)((int)this + 4)) & 2;
      }
      uVar3 = uVar3 + 8 + (puVar5[1] + 3 & 0xfffffffc);
      puVar5 = ((uint *)GEN_TOP(((int)puVar4 + (puVar5[1] + 3 & 0xfffffffc))));
    } while (uVar3 < param_3);
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xc))))((undefined4)gen_fl2bits((float)(float10)0));
  if ((char)uVar3 == '\0') {
    *(undefined1 *)((int)this + 5) = 0xff;
  }
  return 0;
}

/* ref: FUN_00989c60 */
unsigned int F_00989c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x989c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
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
          F_00988d70((undefined *)((int)this + 8),param_1,puVar6,puVar7[1]);
        }
        else if (uVar2 < 0x625432) {
          if (uVar2 == 0x625431) {
            *(ushort *)((int)this + 4) =
                 (char)((byte)*puVar6 & 1) * 2 | *(ushort *)((int)this + 4) & 0xfffd;
          }
          else if (uVar2 == 0x544654) {
            *(ushort *)((int)this + 4) =
                 (short)(char)((byte)*puVar6 & 7) << 0xc | *(ushort *)((int)this + 4) & 0x8fff;
          }
        }
        else if (uVar2 == 0x625432) {
          *(ushort *)((int)this + 4) =
               (char)((byte)*puVar6 & 1) * 4 | *(ushort *)((int)this + 4) & 0xfffb;
        }
        else if (uVar2 == 0x625433) {
          *(ushort *)((int)this + 4) =
               (char)((byte)*puVar6 & 1) * 8 | *(ushort *)((int)this + 4) & 0xfff7;
        }
        else if (uVar2 == 0x625434) {
          uVar3 = (short)(char)((byte)*puVar6 & 1) << 4;
          uVar5 = 0xffef;
          goto LAB_00989e14;
        }
      }
      else if (uVar2 < 0x54784e70) {
        if (uVar2 == 0x54784e6f) {
          *(byte *)((int)this + 6) = (byte)*puVar6;
        }
        else {
          if (uVar2 == 0x54425554) {
            uVar3 = (short)(char)((byte)*puVar6 & 3) << 8;
            uVar5 = 0xfcff;
            goto LAB_00989e14;
          }
          if (uVar2 == 0x54425654) {
            *(ushort *)((int)this + 4) =
                 (short)(char)((byte)*puVar6 & 3) << 10 | *(ushort *)((int)this + 4) & 0xf3ff;
          }
        }
      }
      else if (uVar2 == 0x5576534e) {
        uVar3 = (short)(char)((byte)*puVar6 & 7) << 5;
        uVar5 = 0xff1f;
LAB_00989e14: ;
        *(ushort *)((int)this + 4) = uVar3 | *(ushort *)((int)this + 4) & uVar5;
      }
      else if (uVar2 == 0x62456e61) {
        *(ushort *)((int)this + 4) =
             (short)(char)((byte)*puVar6 & 1) | *(ushort *)((int)this + 4) & 0xfffe;
      }
      puVar1 = puVar7 + 1;
      puVar7 = ((uint *)GEN_TOP(((int)puVar6 + (*puVar1 + 3 & 0xfffffffc))));
      uVar4 = uVar4 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar4 < param_3);
  }
  return 0;
}

/* ref: FUN_00989e50 */
unsigned int F_00989e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x989e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
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
          *(byte *)((int)this + 5) = (byte)*puVar4;
        }
        else {
          if (uVar1 == 0x544654) {
            bVar3 = ((byte)*puVar4 * '\x02' ^ *(byte *)((int)this + 4)) & 0xe;
            goto LAB_00989ebe;
          }
          if (uVar1 == 0x504f6666) {
            F_00988d70((undefined *)((int)this + 8),param_1,puVar4,puVar5[1]);
          }
        }
      }
      else if (uVar1 == 0x62456e61) {
        bVar3 = ((byte)*puVar4 ^ *(byte *)((int)this + 4)) & 1;
LAB_00989ebe: ;
        *(byte *)((int)this + 4) = *(byte *)((int)this + 4) ^ bVar3;
      }
      uVar2 = uVar2 + 8 + (puVar5[1] + 3 & 0xfffffffc);
      puVar5 = ((uint *)GEN_TOP(((int)puVar4 + (puVar5[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_3);
  }
  return 0;
}

/* ref: FUN_00989ee0 */
unsigned int F_00989ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x989ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
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
      puVar7 = (uint *)0x0;
      uVar2 = *param_2;
      puVar8 = param_2 + 2;
      if (uVar2 < 0x4c656e53) {
        if (uVar2 == 0x4c656e52) {
          this_00 = (undefined *)((int)this + 0x28);
          goto LAB_0098a16c;
        }
        if (uVar2 != 0x4c656e) {
          if (uVar2 != 0x576474) goto LAB_0098a182;
          uVar2 = param_2[1];
          this_00 = (undefined *)((int)this + 8);
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
                    puVar7 = (uint *)(REFG(int, 0x14a09e0) + uVar9);
                    iVar10 = uVar9 + (local_c * 8 + 0x13 & 0xfffffff0);
                    REFG(int, 0x14a09d8) = iVar10;
                  }
                  else {
                    REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) +
                                   (local_c * 8 + 0x13 & 0xfffffff0);
                    puVar7 = (uint *)0x0;
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
                       *(ushort *)((int)puVar11 + 2) << 0xe | (ushort)puVar7[uVar9 * 2 + 2] & 0x3fff
                  ;
                  *(char *)((int)puVar7 + uVar9 * 8 + 10) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar11[1]))) * dVar1);
                  *(char *)((int)puVar7 + uVar9 * 8 + 0xb) =
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
          if (puVar7 != (uint *)0x0) {
            *puVar7 = (((local_c & 0xffff) << 5 | local_1c & 7) * 4 | local_20 & 3) * 4 |
                      *puVar7 & 0xfe000180 | local_24 & 3;
            *(uint * PTR32 *)((int)this + 0x24) = puVar7;
          }
        }
        puVar7 = *(uint * PTR32 *)((int)this + 0x24);
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
        this_00 = (undefined *)((int)this + 0x10);
LAB_0098a16c: ;
        uVar2 = param_2[1];
LAB_0098a175: ;
        F_00988d70(this_00,param_1,puVar8,uVar2);
        dVar1 = *(double *)&REFG(undefined, 0x1094560);
      }
LAB_0098a182: ;
      puVar7 = param_2 + 1;
      param_2 = ((uint *)GEN_TOP(((int)puVar8 + (*puVar7 + 3 & 0xfffffffc))));
      uVar5 = uVar5 + 8 + (*puVar7 + 3 & 0xfffffffc);
    } while (uVar5 < param_3);
  }
  return 0;
}

/* ref: FUN_0098a1b0 */
uint F_0098a1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x98a1b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10deb40));
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x10) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x18) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffffff8;
  F_00988b80((undefined *)((int)this + 0x20));
  F_00988b80((undefined *)((int)this + 0x8c));
  return (uint)this;
}

/* ref: FUN_0098a200 */
unsigned int F_0098a200(unsigned int gen_a0)
{
  GEN_ENTER(0x98a200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xec) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xdc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xcc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xac) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x94) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x80) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd4e8));
  return 0;
}

/* ref: FUN_0098a2a0 */
unsigned int F_0098a2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98a2a0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  return 0;
}

/* ref: FUN_0098a310 */
uint F_0098a310(unsigned int gen_a0)
{
  GEN_ENTER(0x98a310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10deb58));
  *(undefined1 *)((int)this + 0xc) = 0;
  *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) & 0xffff00ff;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x18) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x20) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x34) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x3c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x44) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x4c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x54) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x5c) = &REFG(undefined, 0x14a0a44);
  F_00988b80((undefined *)((int)this + 0x60));
  F_00988b80((undefined *)((int)this + 0xcc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x138) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x13c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x140) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x144) = &REFG(undefined, 0x14a0a44);
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_0098a3b0 */
unsigned int F_0098a3b0(unsigned int gen_a0)
{
  GEN_ENTER(0x98a3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x140) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x138) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 300) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x124) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x114) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x104) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xfc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xec) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xdc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd4) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xcc) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x80) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10dd5ac));
  return 0;
}

/* ref: FUN_0098a490 */
unsigned int F_0098a490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98a490u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  return 0;
}

/* ref: FUN_0098a520 */
unsigned int F_0098a520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x98a520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
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
      puVar8 = (uint *)0x0;
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
                    puVar8 = (uint *)(REFG(int, 0x14a09e0) + uVar10);
                    iVar11 = uVar10 + (local_c * 8 + 0x13 & 0xfffffff0);
                    REFG(int, 0x14a09d8) = iVar11;
                  }
                  else {
                    REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) +
                                   (local_c * 8 + 0x13 & 0xfffffff0);
                    puVar8 = (uint *)0x0;
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
                       *(ushort *)((int)puVar12 + 2) << 0xe |
                       (ushort)puVar8[uVar10 * 2 + 2] & 0x3fff;
                  *(char *)((int)puVar8 + uVar10 * 8 + 10) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[1]))) * dVar2);
                  *(char *)((int)puVar8 + uVar10 * 8 + 0xb) =
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
          if (puVar8 != (uint *)0x0) {
            *puVar8 = (((local_c & 0xffff) << 5 | local_18 & 7) * 4 | local_1c & 3) * 4 |
                      *puVar8 & 0xfe000180 | local_20 & 3;
            *(uint * PTR32 *)((int)this + 0xc) = puVar8;
          }
        }
        puVar8 = *(uint * PTR32 *)((int)this + 0xc);
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
        F_00988d70((undefined *)((int)this + 0x10),param_1,puVar4,param_2[1]);
        dVar2 = *(double *)&REFG(undefined, 0x1094560);
      }
      piVar1 = param_2 + 1;
      param_2 = ((int *)GEN_TOP(((int)puVar4 + (*piVar1 + 3U & 0xfffffffc))));
      uVar9 = uVar9 + 8 + (*piVar1 + 3U & 0xfffffffc);
    } while (uVar9 < param_3);
  }
  return 0;
}

/* ref: FUN_0098a7c0 */
uint F_0098a7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x98a7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 8) = *(byte *)((int)this + 8) & 0xe0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10deb94));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x14) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x1c) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x2c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x34) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x44) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x4c) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x50) = *(uint *)((int)this + 0x50) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x5c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 100) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x74) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x7c) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x80) = *(uint *)((int)this + 0x80) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x8c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x94) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x98) = *(uint *)((int)this + 0x98) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xa4) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xac) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xb8) = &REFG(undefined, 0x14a0a44);
  F_00988b80((undefined *)((int)this + 0xbc));
  F_00988b80((undefined *)((int)this + 0x128));
  F_00988b80((undefined *)((int)this + 0x194));
  F_00988b80((undefined *)((int)this + 0x200));
  F_00988b80((undefined *)((int)this + 0x26c));
  F_00988b80((undefined *)((int)this + 0x2d8));
  return (uint)this;
}

/* ref: FUN_0098a8f0 */
unsigned int F_0098a8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x98a8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x338) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x330) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x328) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 800) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x318) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x308) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x300) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2f8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2f0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2e8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2e0) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2d8) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2cc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 700) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2b4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2ac) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2a4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x29c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x294) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x284) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x27c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x274) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x26c) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x260) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 600) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x250) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x248) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x240) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x238) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x230) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x228) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x220) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x218) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x210) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x208) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x200) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 500) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1ec) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1dc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1cc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1bc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1ac) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x19c) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x194) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x188) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x178) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x168) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x160) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x158) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x150) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x148) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x140) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x138) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x128) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x114) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x104) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xfc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xec) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xdc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xcc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc4) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbc) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9c) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228))
  ;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10dd544));
  return 0;
}

/* ref: FUN_0098ab40 */
unsigned int F_0098ab40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98ab40u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  return 0;
}

/* ref: FUN_0098ac60 */
unsigned int F_0098ac60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x98ac60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
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
      puVar7 = (uint *)0x0;
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
                      puVar7 = (uint *)(REFG(int, 0x14a09e0) + uVar9);
                      iVar10 = uVar9 + (local_c * 8 + 0x13 & 0xfffffff0);
                      REFG(int, 0x14a09d8) = iVar10;
                    }
                    else {
                      REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) +
                                     (local_c * 8 + 0x13 & 0xfffffff0);
                      puVar7 = (uint *)0x0;
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
                         *(ushort *)((int)puVar11 + 2) << 0xe |
                         (ushort)puVar7[uVar9 * 2 + 2] & 0x3fff;
                    *(char *)((int)puVar7 + uVar9 * 8 + 10) =
                         (char)(int)(((double)GEN_TOD(gen_bits2f(puVar11[1]))) * dVar1);
                    *(char *)((int)puVar7 + uVar9 * 8 + 0xb) =
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
            if (puVar7 != (uint *)0x0) {
              *puVar7 = (((local_c & 0xffff) << 5 | local_1c & 7) * 4 | local_20 & 3) * 4 |
                        *puVar7 & 0xfe000180 | local_24 & 3;
              *(uint * PTR32 *)((int)this + 0xc) = puVar7;
            }
          }
          puVar7 = *(uint * PTR32 *)((int)this + 0xc);
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
          *(uint *)((int)this + 0x20) = *puVar8;
        }
        else if (uVar2 == 0x5353) {
          *(uint *)((int)this + 0x1c) = *puVar8;
        }
      }
      else if (uVar2 == 0x57494452) {
        F_00988d70((undefined *)((int)this + 0x10),param_1,puVar8,param_2[1]);
        dVar1 = *(double *)&REFG(undefined, 0x1094560);
      }
      puVar7 = param_2 + 1;
      param_2 = ((uint *)GEN_TOP(((int)puVar8 + (*puVar7 + 3 & 0xfffffffc))));
      uVar5 = uVar5 + 8 + (*puVar7 + 3 & 0xfffffffc);
    } while (uVar5 < param_3);
  }
  return 0;
}

/* ref: FUN_0098af30 */
uint F_0098af30(unsigned int gen_a0)
{
  GEN_ENTER(0x98af30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10debfc));
  *(undefined2 *)((int)this + 4) = 0x201;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 6) = 2;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x14) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x1c) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x2c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x34) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x44) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x4c) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x50) = *(uint *)((int)this + 0x50) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x5c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 100) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x74) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x7c) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x80) = *(uint *)((int)this + 0x80) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x8c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x94) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x98) = *(uint *)((int)this + 0x98) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xa4) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xac) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xbc) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc0) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xc4) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 200) = *(uint *)((int)this + 200) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xcc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xd4) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xdc) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xe0) & 0xfffffff8;
  F_00988b80((undefined *)((int)this + 0xe4));
  F_00988b80((undefined *)((int)this + 0x150));
  return (uint)this;
}

/* ref: FUN_0098b070 */
unsigned int F_0098b070(unsigned int gen_a0)
{
  GEN_ENTER(0x98b070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x198) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 400) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x188) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x178) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x168) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x160) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x158) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x150) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x144) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x13c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x134) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 300) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x124) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x114) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x104) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xfc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xec) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe4) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xcc) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb4) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9c) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228))
  ;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10dd614));
  return 0;
}

/* ref: FUN_0098b1a0 */
unsigned int F_0098b1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98b1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  uVar2 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    do {
      puVar1 = (undefined *)*puVar4;
      puVar3 = puVar4 + 2;
      if (puVar1 < (undefined *)0x484550) {
        if (puVar1 != (undefined *)0x48454f) {
          if (puVar1 <= &REFG(undefined, 0x434549)) {
            if (puVar1 == &REFG(undefined, 0x434549)) {
LAB_0098b22a: ;
              F_00988c40(puVar3,puVar4[1]);
            }
            else if (puVar1 < (undefined *)0x5743) {
              if ((puVar1 == (undefined *)0x5742) ||
                 ((puVar1 == (undefined *)0x5242 || (puVar1 == (undefined *)0x5245))))
              goto LAB_0098b28a;
            }
            else if ((puVar1 == (undefined *)0x5745) || (puVar1 == (undefined *)0x416e67))
            goto LAB_0098b28a;
            goto LAB_0098b297;
          }
          if (puVar1 < (undefined *)0x484250) {
            if (puVar1 != (undefined *)0x48424f) {
              if (puVar1 == &REFG(undefined, 0x43454f)) goto LAB_0098b22a;
              if (puVar1 != (undefined *)0x484249) goto LAB_0098b297;
            }
          }
          else if (puVar1 != (undefined *)0x484549) goto LAB_0098b297;
        }
LAB_0098b28a: ;
        F_0097c440(puVar3,puVar4[1]);
      }
      else {
        if (puVar1 < (undefined *)0x416e6753) {
          if (puVar1 != (undefined *)0x416e6752) {
            if (puVar1 < (undefined *)0x574253) {
              if (((puVar1 == (undefined *)0x574252) || (puVar1 == (undefined *)0x524252)) ||
                 (puVar1 == (undefined *)0x524552)) goto LAB_0098b28a;
            }
            else if (puVar1 == (undefined *)0x574552) goto LAB_0098b28a;
            goto LAB_0098b297;
          }
          goto LAB_0098b28a;
        }
        if (puVar1 < (undefined *)0x48454953) {
          if (((puVar1 == (undefined *)0x48454952) || (puVar1 == (undefined *)0x48424952)) ||
             (puVar1 == (undefined *)0x48424f52)) goto LAB_0098b28a;
        }
        else if (puVar1 == (undefined *)0x48454f52) goto LAB_0098b28a;
      }
LAB_0098b297: ;
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((undefined4 *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_0098b2c0 */
unsigned int F_0098b2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x98b2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0x204) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de010));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f8) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de010));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[31])REFP(0x10dde84));
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1e0);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[0x7a];
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    puVar2 = puVar1;
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::BinderInstance::vf25 */
unsigned int F_0098b300(unsigned int gen_a0)
{
  GEN_ENTER(0x98b300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pBVar1;
  float fVar2;
  code * pcVar3;
  float10 fVar4;
  
  fVar2 = *(float *)(this + 0x1ec);
  if ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar2 <= *(float *)&REFG(undefined, 0x1088114))) {
    fVar4 = (float10)((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)(this + 0x1b0))));
    *(float *)(this + 0x1ec) = ((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)(this + 0x1b0))));
    if (fVar4 <= (float10)0) {
      pcVar3 = *(gen_code32 *)(*(int *)this + 0x7c);
      fVar2 = ((float)GEN_TOF((-fVar4 * (float10)*(float *)(this + 0x1bc))));
      *(float *)(this + 0x1a8) = fVar2;
      *(float *)(this + 0x1ac) = fVar2;
      (*pcVar3)();
    }
  }
  pBVar1 = this + 0x1b8;
  if ((!GEN_ISNAN(*(float *)pBVar1) && (!(0.0 < *(float *)pBVar1) && *(float *)pBVar1 != 0.0)) &&
     ((*(uint *)(this + 0x1d0) & 0x7fe00) == 0)) {
    *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) & 0xf81fffff | 0x40000;
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::BinderInstance::vf27 */
unsigned int F_0098b3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x98b3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pBVar1;
  float fVar2;
  code * pcVar3;
  float10 fVar4;
  
  fVar2 = *(float *)(this + 0x1ec);
  if ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar2 <= *(float *)&REFG(undefined, 0x1088114))) {
    fVar4 = (float10)((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)(this + 0x1b0))));
    *(float *)(this + 0x1ec) = ((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)(this + 0x1b0))));
    if (fVar4 <= (float10)0) {
      pcVar3 = *(gen_code32 *)(*(int *)this + 0x7c);
      fVar2 = ((float)GEN_TOF((-fVar4 * (float10)*(float *)(this + 0x1bc))));
      *(float *)(this + 0x1a8) = fVar2;
      *(float *)(this + 0x1ac) = fVar2;
      (*pcVar3)();
    }
  }
  pBVar1 = this + 0x1b8;
  if ((!GEN_ISNAN(*(float *)pBVar1) && (!(0.0 < *(float *)pBVar1) && *(float *)pBVar1 != 0.0)) &&
     ((*(uint *)(this + 0x1d0) & 0x7fe00) == 0)) {
    *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) & 0xf81fffff | 0x40000;
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::DocumentInstance::vf12 */
unsigned int F_0098b440(unsigned int gen_a0)
{
  GEN_ENTER(0x98b440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
    iVar1 = (&REFG(undefined4, 0x14a0a08))[REFG(int, 0x14a09f8)];
    uVar6 = *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
    uVar7 = uVar6 + *(short *)(pDVar4 + -2) * 0x10;
    bVar8 = REFG(undefined4, 0x14a09fc) < uVar7;
    *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar7;
    *(uint *)(pDVar5 + -4) = ~-(uint)bVar8 & iVar1 + uVar6;
    iVar1 = (&REFG(undefined4, 0x14a0a08))[REFG(int, 0x14a09f8)];
    iVar2 = *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
    uVar6 = *(short *)((int)(uintptr_t)pDVar4) * 0x10 + iVar2;
    *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar6;
    *(uint *)pDVar5 = ~-(uint)(REFG(undefined4, 0x14a09fc) < uVar6) & iVar1 + iVar2;
    iVar1 = (&REFG(undefined4, 0x14a0a08))[REFG(int, 0x14a09f8)];
    iVar2 = *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
    uVar6 = *(short *)(pDVar4 + 2) * 0x10 + iVar2;
    *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar6;
    *(uint *)(pDVar5 + 4) = ~-(uint)(REFG(undefined4, 0x14a09fc) < uVar6) & iVar1 + iVar2;
    iVar1 = (&REFG(undefined4, 0x14a0a08))[REFG(int, 0x14a09f8)];
    iVar2 = *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
    uVar6 = *(short *)(pDVar4 + 4) * 0x10 + iVar2;
    bVar8 = REFG(undefined4, 0x14a09fc) < uVar6;
    *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar6;
    *(uint *)(pDVar5 + 8) = ~-(uint)bVar8 & iVar1 + iVar2;
    pDVar4 = pDVar4 + 8;
    pDVar5 = pDVar5 + 0x10;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar1 = (&REFG(undefined4, 0x14a0a08))[REFG(int, 0x14a09f8)];
  iVar2 = *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
  uVar6 = (uint)*(ushort *)(this + 0x3a8) * 0x10 + iVar2;
  *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar6;
  *(uint *)(this + 0x31c) = ~-(uint)(REFG(undefined4, 0x14a09fc) < uVar6) & iVar1 + iVar2;
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f050))[*(uint *)(this + 0x1d0) >> 0x17 & 1])))(this);
  for (piVar3 = *(int * PTR32 *)(this + 0x1e0); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x30))(piVar3);
  }
  return 0;
}

/* ref: FUN_0098b5e0 */
unsigned int F_0098b5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x98b5e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
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
    iVar1 = *(int *)(in_ecx + 0x1ec);
    fVar7 = (float10)1;
    fVar4 = (float10)(float)((float10)(int)param_4 / fVar3);
    fVar5 = (float10)((float)GEN_TOF((fVar4 * ((float10)*(float *)(iVar1 + 0x18) - fVar7) + fVar7))) *
            (float10)REFG(float, 0x132f3f8);
    fVar6 = (float10)((float)GEN_TOF((((float10)*(float *)(iVar1 + 0x1c) - fVar7) * fVar4 + fVar7))) *
            (float10)REFG(float, 0x132f3fc);
    fVar7 = fVar7 + ((float10)*(float *)(iVar1 + 0x20) - fVar7) * fVar4;
  }
  else {
    if (param_3 != 1) goto LAB_0098b6d9;
    iVar1 = *(int *)(in_ecx + 0x1ec);
    fVar7 = (float10)1;
    fVar4 = (float10)(float)((float10)(int)param_4 / fVar3);
    fVar5 = (float10)((float)GEN_TOF((fVar4 * ((float10)*(float *)(iVar1 + 0x24) - fVar7) + fVar7))) *
            (float10)REFG(float, 0x132f3f8);
    fVar6 = (float10)((float)GEN_TOF((((float10)*(float *)(iVar1 + 0x28) - fVar7) * fVar4 + fVar7))) *
            (float10)REFG(float, 0x132f3fc);
    fVar7 = fVar7 + ((float10)*(float *)(iVar1 + 0x2c) - fVar7) * fVar4;
  }
  local_c = (float)fVar6;
  local_10 = (float)fVar5;
  local_8 = (float)((float10)(float)fVar7 * (float10)REFG(float, 0x132f400));
LAB_0098b6d9: ;
  if (param_5 == 0) {
    pfVar2 = *(float * PTR32 *)(in_ecx + 0x1ec);
    fVar3 = (float10)(float)((float10)param_6 / fVar3);
    local_10 = (float)((float10)local_10 + fVar3 * (float10)*pfVar2);
    local_c = (float)((float10)pfVar2[1] * fVar3 + (float10)local_c);
    local_8 = (float)(fVar3 * (float10)pfVar2[2] + (float10)local_8);
  }
  else if (param_5 == 1) {
    iVar1 = *(int *)(in_ecx + 0x1ec);
    fVar3 = (float10)(float)((float10)param_6 / fVar3);
    local_10 = ((float)GEN_TOF(((float10)local_10 + fVar3 * (float10)*(float *)(iVar1 + 0xc))));
    local_c = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x10) * fVar3 + (float10)local_c)));
    local_8 = ((float)GEN_TOF((fVar3 * (float10)*(float *)(iVar1 + 0x14) + (float10)local_8)));
  }
  *param_2 = (float)((float10)*param_2 * (float10)local_10);
  param_2[1] = (float)((float10)param_2[1] * (float10)local_c);
  param_2[2] = (float)((float10)local_8 * (float10)param_2[2]);
  return 0;
}

/* ref: FUN_0098b900 */
uint F_0098b900(unsigned int gen_a0)
{
  GEN_ENTER(0x98b900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)((int)this + 0x1a8);
  uVar2 = *(undefined4 *)((int)this + 0x1ac);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f8) + 0x48))))(*(int * PTR32 *)((int)this + 0x1f8))));
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,uVar1,uVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f8) + 0x4c))))(*(int * PTR32 *)((int)this + 0x1f8))));
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,uVar1,uVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f8) + 0x50))))(*(int * PTR32 *)((int)this + 0x1f8))));
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,uVar1,uVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f8) + 0x44))))(*(int * PTR32 *)((int)this + 0x1f8))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,uVar1,uVar2);
  return uVar4;
}

/* ref: FUN_0098ba20 */
double F_0098ba20(unsigned int gen_a0)
{
  GEN_ENTER(0x98ba20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float10 fVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  fVar2 = F_009820e0((int)this + 4,(int)this + 4,uVar1);
  return (double)fVar2;
}

/* ref: FUN_0098bab0 */
unsigned int F_0098bab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x98bab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  *(float *)(in_ecx + 0x34) = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x34) + (float10)*param_4)));
  *(float *)(in_ecx + 0x38) = ((float)GEN_TOF(((float10)param_4[1] + (float10)*(float *)(in_ecx + 0x38))));
  *(float *)(in_ecx + 0x3c) = ((float)GEN_TOF(((float10)param_4[2] + (float10)*(float *)(in_ecx + 0x3c))));
  return 0;
}

/* ref: FUN_0098bb60 */
uint F_0098bb60(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x98bb60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x2b4))((undefined4)gen_fl2bits(param_2));
  return uVar1;
}

/* ref: FUN_0098bbc0 */
unsigned int F_0098bbc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98bbc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x1f0);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x98) * (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x9c) * (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xa0) * (float10)param_2[2])));
  return 0;
}

/* ref: FUN_0098bc00 */
unsigned int F_0098bc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98bc00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x1f0);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xa4) + (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xa8) + (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xac) + (float10)param_2[2])));
  return 0;
}

/* ref: FUN_0098bc40 */
unsigned int F_0098bc40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98bc40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x1f0);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xb0) + (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xb4) + (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xb8) + (float10)param_2[2])));
  return 0;
}

/* ref: FUN_0098bc80 */
unsigned int F_0098bc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98bc80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x1f0);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x88) * (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x8c) * (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x90) * (float10)param_2[2])));
  param_2[3] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x94) * (float10)param_2[3])));
  return 0;
}

/* ref: FUN_0098bcc0 */
unsigned int F_0098bcc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98bcc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ((code *)*(gen_code32 *)((int)this + 700))((undefined4 *)((int)this + 0x98));
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)this + 0x98);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)this + 0x9c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((int)this + 0xa0);
  return 0;
}

/* ref: FUN_0098bcf0 */
unsigned int F_0098bcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98bcf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined4 *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  ((code *)*(gen_code32 *)((int)this + 700))(&(*(undefined4 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)this + 0x58) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)((int)this + 0x5c) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)((int)this + 0x60) = (*(undefined4 *)(gen_frame + 0x8));
  return 0;
}

/* ref: FUN_0098bd50 */
unsigned int F_0098bd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98bd50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ((code *)*(gen_code32 *)((int)this + 0x2c0))((undefined4 *)((int)this + 0xa4));
  *(undefined4 *)((int)this + 100) = *(undefined4 *)((int)this + 0xa4);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0xa8);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0xac);
  return 0;
}

/* ref: FUN_0098bd80 */
unsigned int F_0098bd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98bd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  ((code *)*(gen_code32 *)((int)this + 0x2c0))(&(*(undefined4 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)this + 100) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)((int)this + 0x68) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)((int)this + 0x6c) = (*(undefined4 *)(gen_frame + 0x8));
  return 0;
}

/* ref: FUN_0098bdd0 */
unsigned int F_0098bdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98bdd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0x34);
  (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0x38);
  (*(float *)(gen_frame + 0x8)) = *(float *)((int)this + 0x3c);
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xb0) + (float10)*(float *)((int)this + 0x34))));
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xb4) + (float10)*(float *)((int)this + 0x38))));
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xb8) + (float10)*(float *)((int)this + 0x3c))));
  ((code *)*(gen_code32 *)((int)this + 0x2c4))(&(*(float *)(gen_frame + 0x0)));
  *(float *)((int)this + 0x70) = (*(float *)(gen_frame + 0x0));
  *(float *)((int)this + 0x74) = (*(float *)(gen_frame + 0x4));
  *(float *)((int)this + 0x78) = (*(float *)(gen_frame + 0x8));
  return 0;
}

/* ref: FUN_0098be40 */
unsigned int F_0098be40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98be40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this + 0x34);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + 0x38);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x3c);
  ((code *)*(gen_code32 *)((int)this + 0x2c4))(&(*(undefined4 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)this + 0x70) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)((int)this + 0x74) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)((int)this + 0x78) = (*(undefined4 *)(gen_frame + 0x8));
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf3 */
unsigned int F_0098c230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98c230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 4) = *param_2;
  *(undefined4 *)(in_ecx + 8) = param_2[1];
  *(undefined4 *)(in_ecx + 0xc) = param_2[2];
  *(undefined4 *)(in_ecx + 0x10) = param_2[3];
  *(undefined4 *)(in_ecx + 0x14) = param_2[4];
  *(undefined4 *)(in_ecx + 0x18) = param_2[5];
  *(undefined4 *)(in_ecx + 0x1c) = param_2[6];
  *(undefined4 *)(in_ecx + 0x20) = param_2[7];
  *(undefined4 *)(in_ecx + 0x24) = param_2[8];
  *(undefined4 *)(in_ecx + 0x28) = param_2[9];
  *(undefined4 *)(in_ecx + 0x2c) = param_2[10];
  *(undefined4 *)(in_ecx + 0x30) = param_2[0xb];
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf5 */
uint F_0098c290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x98c290u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d8) + 0x14))))
                    (*(int * PTR32 *)(this + 0x1d8),param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf6 */
uint F_0098c2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x98c2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d8) + 0x18))))
                    (*(int * PTR32 *)(this + 0x1d8),param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf7 */
uint F_0098c2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x98c2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d8) + 0x1c))))
                    (*(int * PTR32 *)(this + 0x1d8),param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf9 */
unsigned int F_0098c2c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x98c2c0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  float fVar2;
  int * piVar3;
  uint uVar4;
  
  param_1[0x6d] =
       (int)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_1[0x6d]))) +
                               ((float10)GEN_TOD(gen_bits2f(param_1[0x6f]))) * (float10)param_2));
  if ((~(byte)((uint)param_1[0x74] >> 0x12) & 1) != 0) {
    piVar1 = ((int *)(uintptr_t)gen_fl2bits((float)((float)(((float10)GEN_TOD(gen_bits2f(param_1[0x6f]))) * (float10)param_2))));
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar1;
    param_1[0x6c] = (int)piVar1;
    (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar1))) + ((float10)GEN_TOD(gen_bits2f(param_1[0x6a])))))));
    fVar2 = gen_bits2f(param_1[0x6b]);
    (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f078))[(uint)param_1[0x74] >> 0x1c & 1])))(param_1,&(*(int * PTR32 *)(gen_frame + 0x8)));
    (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f080))[(uint)param_1[0x74] >> 0x1d & 1])))(param_1,&(*(int * PTR32 *)(gen_frame + 0x8)));
    if ((~(byte)((uint)param_1[0x74] >> 0x12) & 1) != 0) {
      ((code *)*(gen_code32 *)(*param_1 + 100))(param_1);
    }
    param_1[0x6a] = (int)(*(int * PTR32 *)(gen_frame + 0x8));
    param_1[0x6b] = (int)gen_fl2bits((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar1))) + (float10)fVar2));
  }
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  piVar1 = (int *)param_1[0x78];
  while (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,(undefined4)gen_fl2bits(param_2));
    piVar3 = (int *)piVar1[0x7a];
    if (((piVar1[0x74] & 0x40000U) == 0) || (piVar1[0x78] != 0)) {
      (*(int * PTR32 *)(gen_frame + 0x8)) = piVar1;
      piVar1 = piVar3;
    }
    else {
      if ((*(int * PTR32 *)(gen_frame + 0x8)) == (int *)0x0) {
        param_1[0x78] = (int)piVar3;
      }
      else {
        (*(int * PTR32 *)(gen_frame + 0x8))[0x7a] = (int)piVar3;
      }
      if ((int *)param_1[0x79] == piVar1) {
        param_1[0x79] = (int)(*(int * PTR32 *)(gen_frame + 0x8));
      }
      uVar4 = param_1[0x74];
      param_1[0x74] = (((uVar4 >> 9) - 1) * 0x200 ^ uVar4) & 0x3fe00 ^ uVar4;
      ((code *)*(gen_code32 *)*piVar1)(piVar1,1);
      piVar1 = piVar3;
    }
  }
  return 0;
}

/* ref: FUN_0098c430 */
unsigned int F_0098c430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98c430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  
  fVar1 = *(float *)((int)this + 0x1b8);
  if ((*(float *)&REFG(undefined, 0x1088114) <= fVar1) && ((float10)fVar1 < (float10)*param_1)) {
    *param_1 = fVar1;
    if ((*(uint *)((int)this + 0x1d0) & 0x40000) == 0) {
      *(uint *)((int)this + 0x1d0) = *(uint *)((int)this + 0x1d0) & 0xf81fffff | 0x40000;
      ((code *)*(gen_code32 *)(*(int *)this + 8))();
    }
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf10 */
unsigned int F_0098c490(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x98c490u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  int * local_8;
  
  *(float *)(param_1 + 0x1b4) =
       ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x1b4) +
              (float10)param_2 * (float10)*(float *)(param_1 + 0x1bc))));
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f040))[*(uint *)(param_1 + 0x1d0) >> 0x15 & 1])))
            ((undefined4)gen_fl2bits(param_2));
  local_8 = (int *)0x0;
  piVar1 = *(int * PTR32 *)(param_1 + 0x1e0);
  piVar4 = local_8;
  while (piVar3 = piVar1, piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[0x7a];
    if (((piVar3[0x74] & 0x40000U) == 0) || (piVar3[0x78] != 0)) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(undefined4)gen_fl2bits(param_2));
      piVar4 = piVar3;
    }
    else {
      if (piVar4 == (int *)0x0) {
        *(int * PTR32 *)(param_1 + 0x1e0) = piVar1;
      }
      else {
        piVar4[0x7a] = (int)piVar1;
      }
      if (*(int * PTR32 *)(param_1 + 0x1e4) == piVar3) {
        *(int * PTR32 *)(param_1 + 0x1e4) = piVar4;
      }
      uVar2 = *(uint *)(param_1 + 0x1d0);
      *(uint *)(param_1 + 0x1d0) = (((uVar2 >> 9) - 1) * 0x200 ^ uVar2) & 0x3fe00 ^ uVar2;
      ((code *)*(gen_code32 *)*piVar3)(piVar3,1);
    }
  }
  return 0;
}

/* ref: switchD_0097e83e::caseD_1 */
unsigned int F_0098c580(unsigned int gen_a0)
{
  GEN_ENTER(0x98c580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float10 fVar2;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x1b0) + (float10)*(float *)((int)this + 0x1cc))));
  fVar2 = (float10)fVar1;
  *(float *)((int)this + 0x1cc) = fVar1;
  if ((float10)*(float *)((int)this + 0x1c8) < fVar2) {
    if ((*(uint *)((int)this + 0x1d0) & 0x40000) == 0) {
      *(uint *)((int)this + 0x1d0) = *(uint *)((int)this + 0x1d0) & 0xf81fffff | 0x40000;
      ((code *)*(gen_code32 *)(*(int *)this + 8))();
    }
    *(undefined4 *)((int)this + 0x94) = 0;
    return 0;
  }
  *(float *)((int)this + 0x94) =
       ((float)GEN_TOF((((float10)1 - fVar2 / (float10)*(float *)((int)this + 0x1c8)) *
              (float10)*(float *)((int)this + 0x94))));
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf16 */
uint F_0098c600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98c600u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x58);
  param_2[1] = *(undefined4 *)(in_ecx + 0x5c);
  param_2[2] = *(undefined4 *)(in_ecx + 0x60);
  return (uint)param_2;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf17 */
uint F_0098c620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98c620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined * pIVar1;
  undefined * pIVar2;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this,param_1);
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
unsigned int F_0098c6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98c6b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x150) + (float10)*(float *)(in_ecx + 100))));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x154) + (float10)*(float *)(in_ecx + 0x68))));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x158) + (float10)*(float *)(in_ecx + 0x6c))));
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf19 */
uint F_0098c6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98c6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined * pIVar1;
  undefined * pIVar2;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1);
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
uint F_0098c7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98c7a0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  int * piVar2;
  int * piVar3;
  
  ((code *)*(gen_code32 *)(*param_1 + 0x48))(param_1,param_2);
  piVar3 = param_1 + 1;
  if (param_1[0x69] != 0) {
    while ((*(byte *)(piVar3 + 0x65) & 4) != 0) {
      piVar2 = (int *)piVar3[0x68];
      if (piVar3[0x60] == 3) {
        *(float *)(param_2 + 8) =
             ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(piVar3[0x4e]))) + (float10)*(float *)(param_2 + 8))));
        return param_2;
      }
      fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(piVar2[0x1a]))) + (float10)*(float *)(param_2 + 8))));
      *(float *)(param_2 + 8) = fVar1;
      *(float *)(param_2 + 8) = (float)((float10)fVar1 + ((float10)GEN_TOD(gen_bits2f(piVar2[0x55]))));
      piVar3 = piVar2;
      if (piVar2[0x68] == 0) {
        return param_2;
      }
    }
  }
  return param_2;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf21 */
uint F_0098c820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98c820u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x70);
  param_2[1] = *(undefined4 *)(in_ecx + 0x74);
  param_2[2] = *(undefined4 *)(in_ecx + 0x78);
  return (uint)param_2;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf22 */
uint F_0098c840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98c840u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_2 = *(undefined4 *)(in_ecx + 0x28);
  param_2[1] = *(undefined4 *)(in_ecx + 0x2c);
  param_2[2] = *(undefined4 *)(in_ecx + 0x30);
  return (uint)param_2;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf23 */
uint F_0098c860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98c860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((byte)this[0x198] & 8) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d8) + 0x58))))
              (*(int * PTR32 *)(this + 0x1d8),param_1,(int)*(short *)(this + 0x1a0));
    return (uint)param_1;
  }
  *param_1 = *(undefined4 *)(this + 0x11c);
  param_1[1] = *(undefined4 *)(this + 0x120);
  param_1[2] = *(undefined4 *)(this + 0x124);
  return (uint)param_1;
}

/* ref: FUN_0098c8b0 */
unsigned int F_0098c8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x98c8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  if ((*(uint *)((int)this + 0x1d0) & 0x40000) == 0) {
    *(uint *)((int)this + 0x1d0) = *(uint *)((int)this + 0x1d0) & 0xf81fffff | 0x40000;
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  }
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x1e0); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1e8)) {
    F_0098c8b0(this_00);
  }
  return 0;
}

/* ref: FUN_0098c900 */
float10 F_0098c900(unsigned int gen_a0)
{
  GEN_ENTER(0x98c900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float10 fVar1;
  
  fVar1 = F_009820e0(in_ecx + 4,in_ecx + 4,in_ecx + 0xec);
  return fVar1;
}

/* ref: FUN_0098c920 */
unsigned int F_0098c920(unsigned int gen_a0)
{
  GEN_ENTER(0x98c920u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x168) = *(undefined4 *)(in_ecx + 0x28);
  *(undefined4 *)(in_ecx + 0x16c) = *(undefined4 *)(in_ecx + 0x2c);
  *(undefined4 *)(in_ecx + 0x170) = *(undefined4 *)(in_ecx + 0x30);
  return 0;
}

/* ref: switchD_009be164::caseD_1 */
unsigned int F_0098c940(unsigned int gen_a0)
{
  GEN_ENTER(0x98c940u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(float *)(in_ecx + 0x88) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x140) * (float10)*(float *)(in_ecx + 0x88))));
  *(float *)(in_ecx + 0x8c) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x144) * (float10)*(float *)(in_ecx + 0x8c))));
  *(float *)(in_ecx + 0x90) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x148) * (float10)*(float *)(in_ecx + 0x90))));
  *(float *)(in_ecx + 0x94) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x14c) * (float10)*(float *)(in_ecx + 0x94))));
  return 0;
}

/* ref: switchD_009be164::caseD_2 */
unsigned int F_0098c990(unsigned int gen_a0)
{
  GEN_ENTER(0x98c990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * pfVar1;
  
  pfVar1 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1d8) + 0x3c))))
                              (*(int * PTR32 *)((int)this + 0x1d8))));
  *(float *)((int)this + 0x88) = ((float)GEN_TOF(((float10)*pfVar1 * (float10)*(float *)((int)this + 0x88))));
  *(float *)((int)this + 0x8c) = ((float)GEN_TOF(((float10)pfVar1[1] * (float10)*(float *)((int)this + 0x8c))))
  ;
  *(float *)((int)this + 0x90) = ((float)GEN_TOF(((float10)pfVar1[2] * (float10)*(float *)((int)this + 0x90))))
  ;
  *(float *)((int)this + 0x94) = ((float)GEN_TOF(((float10)pfVar1[3] * (float10)*(float *)((int)this + 0x94))))
  ;
  return 0;
}

/* ref: Apricot::Engine::Instance::ParticleInstance::vf25 */
uint F_0098c9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x98c9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097ef70(this);
  F_0097f2c0(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x84))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::ParticleInstance::vf28 */
uint F_0098ca10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x98ca10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0ac))[*(uint *)(this + 0x2ac) >> 9 & 1])))();
  F_0097f2c0(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0098ca40 */
unsigned int F_0098ca40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98ca40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x19f))) {
  case 3: ;
  case 7: ;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
    param_1[3] = *puVar1;
    param_1[4] = puVar1[1];
    param_1[5] = puVar1[2];
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x18))(this)));
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
    return 0;
  case 4: ;
  case 5: ;
  case 6: ;
  case 8: ;
  case 9: ;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x18))(this)));
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
  }
  return 0;
}

/* ref: FUN_0098cad0 */
unsigned int F_0098cad0(unsigned int gen_a0)
{
  GEN_ENTER(0x98cad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0098b5e0(*(undefined4 *)((int)this + 0x1d4),(int)this + 0x88,*(byte *)((int)this + 0x1fa) & 3,
               (uint)*(byte *)((int)this + 0x1f8),*(byte *)((int)this + 0x1fa) >> 2 & 3,
               (uint)*(byte *)((int)this + 0x1f9));
  return 0;
}

/* ref: FUN_0098cb10 */
unsigned int F_0098cb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x98cb10u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  *(float *)(in_ecx + 0x34) = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x34) + (float10)*param_4)));
  *(float *)(in_ecx + 0x38) = ((float)GEN_TOF(((float10)param_4[1] + (float10)*(float *)(in_ecx + 0x38))));
  *(float *)(in_ecx + 0x3c) = ((float)GEN_TOF(((float10)param_4[2] + (float10)*(float *)(in_ecx + 0x3c))));
  return 0;
}

/* ref: FUN_0098cbc0 */
uint F_0098cbc0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x98cbc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0c4))[*(uint *)(param_1 + 0x2ac) >> 0xc & 1])))
                    ((undefined4)gen_fl2bits(param_2));
  return uVar1;
}

/* ref: FUN_0098cc30 */
unsigned int F_0098cc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98cc30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x1f0);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x98) * (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x9c) * (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xa0) * (float10)param_2[2])));
  return 0;
}

/* ref: FUN_0098cc70 */
unsigned int F_0098cc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98cc70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x1f0);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xa4) + (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xa8) + (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xac) + (float10)param_2[2])));
  return 0;
}

/* ref: FUN_0098ccb0 */
unsigned int F_0098ccb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98ccb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x1f0);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xb0) + (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xb4) + (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xb8) + (float10)param_2[2])));
  return 0;
}

/* ref: FUN_0098ccf0 */
unsigned int F_0098ccf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98ccf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x1f0);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x88) * (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x8c) * (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x90) * (float10)param_2[2])));
  param_2[3] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x94) * (float10)param_2[3])));
  return 0;
}

/* ref: FUN_0098cd30 */
unsigned int F_0098cd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98cd30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined4 *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0d4))[*(uint *)((int)this + 0x2ac) >> 0xe & 1])))(this,&(*(undefined4 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)this + 0x58) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)((int)this + 0x5c) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)((int)this + 0x60) = (*(undefined4 *)(gen_frame + 0x8));
  return 0;
}

/* ref: FUN_0098cd90 */
unsigned int F_0098cd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98cd90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0dc))[*(uint *)((int)this + 0x2ac) >> 0xe & 1])))(this,&(*(undefined4 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)this + 100) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)((int)this + 0x68) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)((int)this + 0x6c) = (*(undefined4 *)(gen_frame + 0x8));
  return 0;
}

/* ref: FUN_0098cdf0 */
unsigned int F_0098cdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98cdf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0x34);
  (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0x38);
  (*(float *)(gen_frame + 0x8)) = *(float *)((int)this + 0x3c);
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xb0) + (float10)*(float *)((int)this + 0x34))));
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xb4) + (float10)*(float *)((int)this + 0x38))));
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xb8) + (float10)*(float *)((int)this + 0x3c))));
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0e4))[*(uint *)((int)this + 0x2ac) >> 0xe & 1])))(this,&(*(float *)(gen_frame + 0x0)));
  *(float *)((int)this + 0x70) = (*(float *)(gen_frame + 0x0));
  *(float *)((int)this + 0x74) = (*(float *)(gen_frame + 0x4));
  *(float *)((int)this + 0x78) = (*(float *)(gen_frame + 0x8));
  return 0;
}

/* ref: FUN_0098ce70 */
unsigned int F_0098ce70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98ce70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this + 0x34);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + 0x38);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x3c);
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0e4))[*(uint *)((int)this + 0x2ac) >> 0xe & 1])))(this,&(*(undefined4 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)this + 0x70) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)((int)this + 0x74) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)((int)this + 0x78) = (*(undefined4 *)(gen_frame + 0x8));
  return 0;
}

/* ref: FUN_0098cee0 */
unsigned int F_0098cee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98cee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  float in_xmm1;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x1a8);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 0x1ac);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0x8c))))(*(int * PTR32 *)((int)this + 0x29c));
  iVar4 = 0;
  (*(uint *)(gen_frame + 0x1c)) = uVar1;
  if (0 < (int)uVar1) {
    iVar3 = param_1 + 0x18;
    do {
      (*(undefined4 *)(gen_frame + 0x4)) = 1;
      (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      in_xmm1 = REFG(float, 0x1087f04);
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x29c) + 0xd8))))
                                (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x29c),iVar4)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)));
      F_00979150(in_xmm1,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(uint)&(*(undefined4 *)(gen_frame + 0x4)),iVar3 + -0x18,
                   iVar3 + -0x14,iVar3 + -0x10,iVar3 + -0xc,iVar3 + -8,iVar3 + -4,iVar3,iVar3 + 4);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar4 < (int)(*(uint *)(gen_frame + 0x1c)));
  }
  return 0;
}

/* ref: FUN_0098d200 */
unsigned int F_0098d200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98d200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0098cee0(this,param_1);
  return 0;
}

/* ref: FUN_0098d210 */
double F_0098d210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98d210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = F_0098cfd0(this,param_1);
  return (double)fVar1;
}

