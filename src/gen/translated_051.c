#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::Graphics::Scene::CharacterBase::vf73 */
uint F_006b8440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
unsigned int F_006b8450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b8450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_006b8460 */
unsigned int F_006b8460(unsigned int gen_a0)
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
  F_00b826a0((undefined *)((int)this + 0x700));
  F_006b8120((undefined *)((int)this + 0x6d0),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x6d4),
               *(undefined4 * PTR32 *)((int)this + 0x6d4));
  F_00429760(*(undefined4 *)((int)this + 0x6d4),0x48,0xcb);
  F_006b8120((undefined *)((int)this + 0x6c0),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x6c4),
               *(undefined4 * PTR32 *)((int)this + 0x6c4));
  F_00429760(*(undefined4 *)((int)this + 0x6c4),0x48,0xcb);
  this_00 = (undefined *)((int)this + 0x6c0);
  iVar3 = 4;
  do {
    this_00 = (undefined *)((int)this_00 + -0x88);
    F_009fa170(this_00);
    iVar3 = iVar3 + -1;
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
  F_004a05c0((undefined *)((int)this + 0x90));
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
uint F_006b8610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006b8460(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Human::vf80 */
uint F_006b8640(void)
{
  GEN_ENTER(0x6b8640u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: Client::Graphics::Scene::Human::vf74 */
ushort F_006b8650(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x778);
}

/* ref: Client::Graphics::Scene::Human::vf0 */
uint F_006b8670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b345c));
  F_006b8460(this);
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Demihuman::vf80 */
uint F_006b86a0(void)
{
  GEN_ENTER(0x6b86a0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf74 */
ushort F_006b86b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b86b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x748);
}

/* ref: Client::Graphics::Scene::Demihuman::vf0 */
uint F_006b86d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b86d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b35cc));
  F_006b8460(this);
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Weapon::vf55 */
unsigned int F_006b8700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::Weapon::vf80 */
uint F_006b8710(void)
{
  GEN_ENTER(0x6b8710u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::Weapon::vf74 */
ushort F_006b8720(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x730);
}

/* ref: Client::Graphics::Scene::Weapon::vf0 */
uint F_006b8740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b373c));
  F_006b8460(this);
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Monster::vf55 */
unsigned int F_006b8770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::Monster::vf80 */
uint F_006b8780(void)
{
  GEN_ENTER(0x6b8780u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::Monster::vf74 */
ushort F_006b8790(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x730);
}

/* ref: Client::Graphics::Scene::Monster::vf0 */
uint F_006b87b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b87b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b38ac));
  F_006b8460(this);
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: FUN_006b87f0 */
uint F_006b87f0(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar3 = F_00498e80(pvVar2,*param_1);
  }
  *(uint *)this = uVar3;
  pvVar2 = (undefined *)F_00406b90(0x20,0,0);
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00b8a620(pvVar2,*param_1);
  }
  *(uint *)((int)this + 4) = uVar3;
  pvVar2 = (undefined *)F_00406b90(0x18,0,0);
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00b12aa0(pvVar2,*param_1);
  }
  piVar1 = *(int * PTR32 *)this;
  *(uint *)((int)this + 8) = uVar3;
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_1[1]);
    if ((char)uVar3 != '\0') {
      *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 1;
    }
    uVar3 = F_00406b90(0x120,0,0);
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = F_00b8a1b0(uVar3);
    }
    *(uint *)((int)this + 0x14) = uVar3;
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if ((char)uVar3 != '\0') {
      *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 2;
    }
  }
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if ((char)uVar3 != '\0') {
      *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 4;
    }
  }
  return uVar3;
}

/* ref: FUN_006b88f0 */
unsigned int F_006b88f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b88f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)this;
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)this = 0;
  }
  return 0;
}

/* ref: FUN_006b8950 */
byte F_006b8950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8950u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)((*(int *)&gen_args[0]) + 0xc) & (*(uint *)&gen_args[1])) != 0;
}

/* ref: FUN_006b8990 */
uint F_006b8990(void)
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
unsigned int F_006b89d0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined4 * puVar6;
  int iVar7;
  undefined4 * puVar8;
  
  if (*param_1 != 0) {
    if (param_1[5] != 0) {
      F_00b89e70(param_1[5],param_2);
      bVar5 = F_00b8a090(param_1[5],&(*(float *)(gen_frame + 0x8)));
      if (bVar5 == 0) {
        if (*(byte *)(param_1 + 4) < 5) {
          ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x2c))((int *)*param_1,0,0);
          *(char *)(param_1 + 4) = (char)param_1[4] + '\x01';
        }
      }
      else {
        fVar2 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xc)))));
        (*(float *)(gen_frame + 0x18)) = fVar2;
        (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x18)) + 2)) = ((undefined2)0x27f);
        (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
        (*(longlong *)(gen_frame + 0x10)) = (longlong)TRUNC((float10)fVar2);
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = (undefined4)(longlong)TRUNC((float10)fVar2);
        uVar3 = (undefined4)(*(longlong *)(gen_frame + 0x10));
        (*(float *)(gen_frame + 0x18)) = gen_bits2f(CONCAT22(((undefined2)0x27f),(short)(uint)gen_fl2bits(fVar2)));
        (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x8)))));
        (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
        lVar1 = (longlong)TRUNC((float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x8))))));
        (*(longlong *)(gen_frame + 0x10)) = lVar1;
        lVar1 = (*(longlong *)(gen_frame + 0x10));
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = (undefined4)lVar1;
        uVar4 = (undefined4)(*(longlong *)(gen_frame + 0x10));
        (*(longlong *)(gen_frame + 0x10)) = lVar1;
        ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x2c))((int *)*param_1,uVar4,uVar3);
        *(undefined1 *)(param_1 + 4) = 0;
      }
    }
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 8))((undefined4)gen_fl2bits(param_2));
    puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_1 + 0x14))((int *)*param_1)));
    puVar8 = param_3;
    for (iVar7 = 0x65; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  if ((int *)param_1[1] != (int *)0x0) {
    ((code *)*(gen_code32 *)(*(int *)param_1[1] + 8))((undefined4)gen_fl2bits(param_2));
    puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)param_1[1] + 0x10))((int *)param_1[1])));
    puVar8 = param_4;
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    ((code *)*(gen_code32 *)(*(int *)param_1[1] + 0x14))((int *)param_1[1]);
  }
  if ((int *)param_1[2] != (int *)0x0) {
    ((code *)*(gen_code32 *)(*(int *)param_1[2] + 8))((undefined4)gen_fl2bits(param_2));
    puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)param_1[2] + 0x10))((int *)param_1[2])));
    puVar8 = param_5;
    for (iVar7 = 0x125; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    ((code *)*(gen_code32 *)(*(int *)param_1[2] + 0x14))((int *)param_1[2],0);
  }
  return 0;
}

/* ref: FUN_006b8b20 */
unsigned int F_006b8b20(void)
{
  GEN_ENTER(0x6b8b20u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  
  pvVar1 = REFG(void * PTR32, 0x1488338);
  if (REFG(void * PTR32, 0x1488338) != (undefined *)0x0) {
    F_006b88f0(REFG(void * PTR32, 0x1488338));
    F_00406ad0(pvVar1);
    REFG(void * PTR32, 0x1488338) = (undefined *)0x0;
  }
  return 0;
}

/* ref: FUN_006b8b50 */
uint F_006b8b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006b88f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b8bc0 */
unsigned int F_006b8bc0(float gen_a0)
{
  GEN_ENTER(0x6b8bc0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_006b8be0 */
unsigned int F_006b8be0(float gen_a0)
{
  GEN_ENTER(0x6b8be0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_006b8c00 */
uint F_006b8c00(void)
{
  GEN_ENTER(0x6b8c00u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x1488344);
}

/* ref: FUN_006b8c30 */
byte F_006b8c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,param_1,param_2,param_3,param_4);
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
unsigned int F_006b8cd0(void)
{
  GEN_ENTER(0x6b8cd0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_006b8cf0 */
unsigned int F_006b8cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8cf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_006b8d00 */
uint F_006b8d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8d00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00b070f0();
  uVar1 = F_00b093a0(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_006b8d20 */
uint F_006b8d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8d20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00b070f0();
  uVar1 = F_00b0a050(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_006b8d40 */
uint F_006b8d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
  uVar1 = F_00b085e0(this,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_006b8d70 */
uint F_006b8d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00b070f0();
  uVar1 = F_00b093e0(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_006b8d90 */
uint F_006b8d90(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8d90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00b070f0();
  uVar1 = F_00b08630(this,param_1);
  return uVar1;
}

/* ref: FUN_006b8db0 */
uint F_006b8db0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8db0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b8dce0(param_1);
  return uVar1;
}

/* ref: FUN_006b8dd0 */
uint F_006b8dd0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8dd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b8dd00(param_1);
  return uVar1;
}

/* ref: FUN_006b8df0 */
uint F_006b8df0(unsigned int gen_a0, unsigned int gen_a1)
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
unsigned int F_006b8e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)((int)this + 0x1e8);
  if (this_00 == (undefined *)*param_1) {
    uVar1 = F_00a022b0(this_00);
    if (uVar1 == 0) {
      F_00a019e0(this_00,0);
    }
    else {
      F_00a02120(*(undefined * PTR32 *)((int)this + 0x1e4),this_00);
      F_00a02040(*(undefined * PTR32 *)((int)this + 0x1e4),this_00);
    }
    *(undefined4 *)((int)this + 0x208) = 0;
    *param_1 = 0;
  }
  return 0;
}

/* ref: FUN_006b8e80 */
byte F_006b8e80(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_006b8ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x720) != 0) {
    uVar1 = F_00a4a810(&REFG(undefined, 0x14a7360),*(int *)((int)this + 0x720));
    *(undefined4 *)((int)this + 0x720) = 0;
  }
  return uVar1;
}

/* ref: FUN_006b8f20 */
uint F_006b8f20(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar2 = F_00b0a830(this,param_1,param_2);
  }
  return uVar2;
}

/* ref: FUN_006b8f50 */
uint F_006b8f50(unsigned int gen_a0)
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
    uVar2 = F_00a9f870(uVar1,fVar3);
  }
  return uVar2;
}

/* ref: FUN_006b8f80 */
byte F_006b8f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  
  uVar2 = F_00a5f380(param_2,((int *)(gen_frame + 0xc)));
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      piVar1 = (int *)((int *)(gen_frame + 0xc))[(int)(uVar4)];
      if (piVar1 != (int *)0x0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
        if ((char)uVar3 != '\0') {
          uVar3 = ((code *)*(gen_code32 *)(*(int *)((int *)(gen_frame + 0xc))[(int)(uVar4)] + 0x224))
                            ((int *)((int *)(gen_frame + 0xc))[(int)(uVar4)],param_1,param_2,param_3);
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
unsigned int F_006b8ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8ff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x24) = 1;
  return 0;
}

/* ref: Client::Game::Event::ModuleBase::vf2 */
unsigned int F_006b9000(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9000u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x24) = 0;
  return 0;
}

/* ref: Client::Game::Event::ModuleBase::vf3 */
byte F_006b9010(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9010u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x24);
}

/* ref: Client::Game::Event::ModuleBase::vf4 */
unsigned int F_006b9020(void)
{
  GEN_ENTER(0x6b9020u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::ModuleBase::vf5 */
unsigned int F_006b9030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b9030u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  
  piVar1 = (int *)(in_ecx + 0x28);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined1 *)(in_ecx + 0x24) = 1;
  }
  return 0;
}

/* ref: FUN_006b9070 */
uint F_006b9070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
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
uint F_006b90d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
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
byte F_006b9110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
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
uint F_006b9150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
uint F_006b9180(unsigned int gen_a0)
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
byte F_006b91f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b91f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x20) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006b9210 */
uint F_006b9210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9210u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x28) = param_2;
  return param_2;
}

/* ref: FUN_006b92d0 */
byte F_006b92d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x6b92d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
  
  uVar5 = param_1;
  if (((char)param_2 != '\0') && (param_1 < 1000000)) {
    uVar5 = param_1 + 1000000;
  }
  if (*(char *)((int)this + 6) == '\0') {
    uVar4 = *(uint *)((int)this + 8);
    if ((*(byte *)((int)this + 0x14) & 1) != 0) {
      uVar4 = uVar4 + 1000000;
    }
  }
  else {
    pvVar3 = (undefined *)F_00a3a860(this);
    uVar4 = F_0046e5e0(pvVar3);
  }
  if ((((uVar4 == uVar5) && (*(char *)((int)this + 0x48) == (char)param_3)) &&
      (*(char *)((int)this + 0x49) == (char)param_4)) &&
     (*(char *)((int)this + 0x40) == (char)param_7)) {
    uVar5 = 0;
    while( true ) {
      if ((*(char *)((int)this + 6) == '\0') || (uVar4 = F_00a3a860(this), uVar4 == 0)) {
        uVar2 = *((ushort *)GEN_TOP(((int)this + (uVar5 & 0xff) * 2 + 0x20)));
      }
      else {
        uVar4 = uVar5;
        pvVar3 = (undefined *)F_00a3a860(this);
        uVar2 = F_0071d2c0(pvVar3,uVar4);
      }
      if (uVar2 != *(ushort *)(param_5 + uVar5 * 2)) break;
      if ((*(char *)((int)this + 6) == '\0') || (uVar4 = F_00a3a860(this), uVar4 == 0)) {
        bVar1 = *((byte *)GEN_TOP(((uVar5 & 0xff) + 0x2a + (int)this)));
      }
      else {
        uVar4 = uVar5;
        pvVar3 = (undefined *)F_00a3a860(this);
        bVar1 = F_0071d300(pvVar3,uVar4);
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
byte F_006b93e0(unsigned int gen_a0, unsigned int gen_a1)
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
      cVar1 = cVar1 + -0x10;
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

/* ref: FUN_006b9610 */
unsigned int F_006b9610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b9610u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if ((char)param_3 != '\0') {
    *(undefined1 *)(in_ecx + 0xd4) = 1;
  }
  return 0;
}

/* ref: FUN_006b9670 */
uint F_006b9670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9670u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00aa02d0(param_1,param_2,0);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  uVar1 = F_00aa01d0(param_1,param_2,0);
  return CONCAT31((int3)(uVar1 >> 8),1);
}

/* ref: FUN_006b96b0 */
uint F_006b96b0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
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
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
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
  (*(undefined4 *)(gen_frame + 0xb4)) = REFG(float, 0x1087f04);
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
  (*(undefined4 *)(gen_frame + 0xf4)) = REFG(float, 0x1087f04);
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
    piVar3 = (int *)F_00a5f8a0(param_1);
    ((code *)*(gen_code32 *)(*piVar3 + 0x40))(piVar3,((undefined1 *)(gen_frame + 0x60)),1);
    (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x90)) + (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x94)) + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x98)) + (float10)(*(float *)(gen_frame + 0x48)));
    (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x90)) + (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x94)) + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x98)) + (float10)(*(float *)(gen_frame + 0x48)));
    F_00aa3410(param_1,0xffffffff);
    uVar4 = F_00aa52e0(param_1,&(*(float *)(gen_frame + 0x10)),0xffffffff,0);
    F_00c47745((*(uint *)(gen_frame + 0x12c)) ^ (uint)(uint)(gen_frame + 0x130));
    return uVar4;
  }
  fVar6 = F_00aae7a0(&(*(float *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x5c)) = fVar6;
  uVar4 = F_00aa0000(param_1,0x30f,&(*(float *)(gen_frame + 0x5c)),0,0,0);
  F_00c47745((*(uint *)(gen_frame + 0x12c)) ^ (uint)(uint)(gen_frame + 0x130));
  return uVar4;
}

/* ref: FUN_006b99d0 */
uint F_006b99d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b99d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00aa0560(param_1,param_2);
  return uVar1;
}

/* ref: FUN_006b99f0 */
uint F_006b99f0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x6b99f0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = F_00aa5250(param_1,param_2,param_3,param_4,0xffffffff,0);
  return uVar1;
}

/* ref: FUN_006b9a20 */
uint F_006b9a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9a20u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,2,0);
    return uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,2,0);
  return uVar1;
}

/* ref: FUN_006b9a50 */
uint F_006b9a50(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9a50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab6c00(param_1,0,0,0,0,0);
  return uVar1;
}

/* ref: FUN_006b9a70 */
byte F_006b9a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_006b93e0((undefined *)((int)this + 0x70),param_1);
  return bVar1;
}

/* ref: FUN_006b9a80 */
unsigned int F_006b9a80(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9a80u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00ab05d0(param_1,param_2);
  return 0;
}

/* ref: FUN_006b9b00 */
uint F_006b9b00(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x6b9b00u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = F_00aa0980(param_1,(float)((float10)1 - (float10)param_2),0);
  *(uint *)(param_1 + 0x2ec8) = (uint)gen_fl2bits(param_3) ^ REFG(uint, 0x10920d0);
  return uVar1;
}

/* ref: FUN_006b9b40 */
uint F_006b9b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00aa6f20(param_1,param_2,1);
  return uVar1;
}

/* ref: FUN_006b9b60 */
uint F_006b9b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b9b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    uVar1 = F_00aa05d0(param_1,0);
    return uVar1;
  }
  uVar1 = F_00aa0600(param_1,0);
  return uVar1;
}

/* ref: FUN_006b9bb0 */
uint F_006b9bb0(unsigned int gen_a0)
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
float F_006b9c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b9c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
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
    F_00c47745(uVar2 ^ (uint)(uint)(gen_out + 0x30));
    return (float)(float10)0;
  }
  if ((4 < param_3 - 1U) || ((param_2 != 0 && (param_2 != 1)))) {
    F_00c47745(uVar2 ^ (uint)(uint)(gen_out + 0x30));
    return (float)(float10)0;
  }
  if ((param_4 == 0) || (param_4 == 1)) {
    pfVar3 = (float *)F_00ab37b0(*((undefined4 *)GEN_TOP(((gen_out + 0x0) + param_1 * 4 + param_2 * 0x14))))
    ;
    if (pfVar3 != (float *)0x0) {
      if (param_4 == 0) {
        if (param_3 == 1) {
          fVar1 = *pfVar3;
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
          return fVar1;
        }
        if (param_3 == 2) {
          fVar1 = pfVar3[2];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
          return fVar1;
        }
        if (param_3 == 3) {
          fVar1 = pfVar3[4];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
          return fVar1;
        }
        if (param_3 == 4) {
          fVar1 = pfVar3[6];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
          return fVar1;
        }
        if (param_3 == 5) {
          fVar1 = pfVar3[8];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
          return fVar1;
        }
      }
      else if (param_4 == 1) {
        if (param_3 == 1) {
          fVar1 = pfVar3[1];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
          return fVar1;
        }
        if (param_3 == 2) {
          fVar1 = pfVar3[3];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
          return fVar1;
        }
        if (param_3 == 3) {
          fVar1 = pfVar3[5];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
          return fVar1;
        }
        if (param_3 == 4) {
          fVar1 = pfVar3[7];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
          return fVar1;
        }
        if (param_3 == 5) {
          fVar1 = pfVar3[9];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
          return fVar1;
        }
      }
    }
  }
  F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
  return (float)(float10)0;
}

/* ref: FUN_006b9e30 */
uint F_006b9e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9e30u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a7d830(param_1 & 0xff,param_2);
  return uVar1;
}

/* ref: FUN_006b9e60 */
uint F_006b9e60(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9e60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9e80 */
uint F_006b9e80(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9e80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9ea0 */
uint F_006b9ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9ea0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9ec0 */
uint F_006b9ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9ec0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x10))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9ee0 */
uint F_006b9ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9ee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x14))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9f00 */
uint F_006b9f00(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9f00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x18))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9f20 */
uint F_006b9f20(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9f20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9f40 */
uint F_006b9f40(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9f40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x20))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9f60 */
uint F_006b9f60(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9f60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x24))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9f80 */
uint F_006b9f80(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9f80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x28))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9fa0 */
uint F_006b9fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9fa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x2c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9fc0 */
uint F_006b9fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9fc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x30))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9fe0 */
uint F_006b9fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9fe0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x34))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba000 */
uint F_006ba000(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba000u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x38))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba020 */
uint F_006ba020(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba020u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xd4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba040 */
uint F_006ba040(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba040u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xd8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba060 */
uint F_006ba060(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba060u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xdc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba080 */
uint F_006ba080(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba080u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xe0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba0a0 */
uint F_006ba0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba0a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x3c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba0c0 */
uint F_006ba0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba0c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x40))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba0e0 */
uint F_006ba0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba0e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xd0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba100 */
uint F_006ba100(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba100u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x44))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba120 */
uint F_006ba120(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba120u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x48))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba140 */
uint F_006ba140(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba140u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x4c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba160 */
uint F_006ba160(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba160u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x50))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba180 */
uint F_006ba180(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba180u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x54))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba1a0 */
uint F_006ba1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba1a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x58))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba1c0 */
uint F_006ba1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba1c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x5c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba1e0 */
uint F_006ba1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba1e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x60))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba200 */
uint F_006ba200(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba200u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 100))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba220 */
uint F_006ba220(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba220u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x68))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba240 */
uint F_006ba240(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba240u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x6c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba260 */
uint F_006ba260(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba260u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x70))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba280 */
uint F_006ba280(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba280u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x74))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba2a0 */
uint F_006ba2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba2a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x78))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba2c0 */
uint F_006ba2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba2c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x7c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba2e0 */
uint F_006ba2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba2e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x80))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba300 */
uint F_006ba300(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba300u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x84))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba320 */
uint F_006ba320(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba320u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x88))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba340 */
uint F_006ba340(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba340u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x8c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba360 */
uint F_006ba360(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba360u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x90))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba380 */
uint F_006ba380(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba380u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x94))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba3a0 */
uint F_006ba3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba3a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x98))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba3c0 */
uint F_006ba3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba3c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x9c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba3e0 */
uint F_006ba3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba3e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xa0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba400 */
uint F_006ba400(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba400u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xa4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba420 */
uint F_006ba420(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba420u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xa8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba440 */
uint F_006ba440(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba440u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xac))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba460 */
uint F_006ba460(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba460u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xb0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba480 */
uint F_006ba480(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba480u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xb4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba4a0 */
uint F_006ba4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba4a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xb8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba4c0 */
uint F_006ba4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba4c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xbc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba4e0 */
uint F_006ba4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba4e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xc0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba500 */
uint F_006ba500(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba500u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xc4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba520 */
uint F_006ba520(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba520u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 200))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba540 */
uint F_006ba540(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba540u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xcc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba560 */
uint F_006ba560(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba560u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xe4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf3 */
uint F_006ba580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf7 */
uint F_006ba590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf8 */
uint F_006ba5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf9 */
uint F_006ba5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf10 */
uint F_006ba5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf11 */
uint F_006ba5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf12 */
uint F_006ba5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf13 */
uint F_006ba5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf15 */
uint F_006ba600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf45 */
uint F_006ba610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf17 */
uint F_006ba620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf18 */
uint F_006ba630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_006ba640 */
uint F_006ba640(unsigned int gen_a0)
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
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_006ba6b0 */
uint F_006ba6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba6b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xe8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba6d0 */
uint F_006ba6d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba6d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xec))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba6f0 */
uint F_006ba6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba6f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xf0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba710 */
uint F_006ba710(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba710u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xf4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba730 */
uint F_006ba730(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba730u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xf8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba750 */
uint F_006ba750(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba750u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xfc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba770 */
uint F_006ba770(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba770u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x100))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba790 */
uint F_006ba790(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba790u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x104))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba7b0 */
uint F_006ba7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba7b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x108))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba7d0 */
uint F_006ba7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba7d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x10c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba7f0 */
uint F_006ba7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba7f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x110))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba810 */
uint F_006ba810(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba810u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x114))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba830 */
uint F_006ba830(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x118))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba850 */
uint F_006ba850(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba850u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x11c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba870 */
uint F_006ba870(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba870u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x120))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba890 */
uint F_006ba890(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba890u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x124))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba8b0 */
uint F_006ba8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba8b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1a0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba8d0 */
uint F_006ba8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba8d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1a4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba8f0 */
uint F_006ba8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba8f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1a8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba910 */
uint F_006ba910(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba910u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x128))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba930 */
uint F_006ba930(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 300))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba950 */
uint F_006ba950(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba950u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x130))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba970 */
uint F_006ba970(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba970u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x134))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba990 */
uint F_006ba990(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba990u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x138))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba9b0 */
uint F_006ba9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba9b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x13c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba9d0 */
uint F_006ba9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba9d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x140))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba9f0 */
uint F_006ba9f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba9f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x144))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baa10 */
uint F_006baa10(unsigned int gen_a0)
{
  GEN_ENTER(0x6baa10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x148))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baa30 */
uint F_006baa30(unsigned int gen_a0)
{
  GEN_ENTER(0x6baa30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x14c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baa50 */
uint F_006baa50(unsigned int gen_a0)
{
  GEN_ENTER(0x6baa50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x150))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baa70 */
uint F_006baa70(unsigned int gen_a0)
{
  GEN_ENTER(0x6baa70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x154))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baa90 */
uint F_006baa90(unsigned int gen_a0)
{
  GEN_ENTER(0x6baa90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x158))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baab0 */
uint F_006baab0(unsigned int gen_a0)
{
  GEN_ENTER(0x6baab0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x15c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baad0 */
uint F_006baad0(unsigned int gen_a0)
{
  GEN_ENTER(0x6baad0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x160))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baaf0 */
uint F_006baaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6baaf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x164))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bab10 */
uint F_006bab10(unsigned int gen_a0)
{
  GEN_ENTER(0x6bab10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x168))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bab30 */
uint F_006bab30(unsigned int gen_a0)
{
  GEN_ENTER(0x6bab30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x16c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bab50 */
uint F_006bab50(unsigned int gen_a0)
{
  GEN_ENTER(0x6bab50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x170))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bab70 */
uint F_006bab70(unsigned int gen_a0)
{
  GEN_ENTER(0x6bab70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x174))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bab90 */
uint F_006bab90(unsigned int gen_a0)
{
  GEN_ENTER(0x6bab90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x178))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006babb0 */
uint F_006babb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6babb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x17c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006babd0 */
uint F_006babd0(unsigned int gen_a0)
{
  GEN_ENTER(0x6babd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x180))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006babf0 */
uint F_006babf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6babf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x184))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bac10 */
uint F_006bac10(unsigned int gen_a0)
{
  GEN_ENTER(0x6bac10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x188))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bac30 */
uint F_006bac30(unsigned int gen_a0)
{
  GEN_ENTER(0x6bac30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x18c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bac50 */
uint F_006bac50(unsigned int gen_a0)
{
  GEN_ENTER(0x6bac50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 400))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bac70 */
uint F_006bac70(unsigned int gen_a0)
{
  GEN_ENTER(0x6bac70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x194))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bac90 */
uint F_006bac90(unsigned int gen_a0)
{
  GEN_ENTER(0x6bac90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x198))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bacb0 */
uint F_006bacb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bacb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x19c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf84 */
uint F_006bacd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bacd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_1);
  F_00b6b910(&REFG(undefined, 0x1375b9c),2,REFG(float, 0x1094884),(float)(float10)0,1);
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf85 */
uint F_006bad20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bad20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_1);
  F_00b6b970(&REFG(undefined, 0x1375b9c),(float)(float10)0,2);
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf96 */
uint F_006bad60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bad60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf99 */
uint F_006bad70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bad70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00ab4c70();
  F_00ab6c00(uVar1,0,0,0,0,0);
  *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0xd0))) = 1;
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf100 */
uint F_006badc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6badc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ab6d30();
  F_00ab6e30();
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf106 */
uint F_006badd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6badd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_2);
  *((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 0xd3))) = 1;
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf88 */
uint F_006bae00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6bae00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float10 fVar1;
  float fVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(undefined4)gen_fl2bits(param_1));
  fVar1 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),2);
  param_1 = (float)fVar1;
  if ((float10)param_1 < (float10)0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = REFG(float, 0x1087f04);
    if (!(REFG(float, 0x1087f04) < param_1)) goto LAB_006bae46;
  }
  param_1 = fVar2;
LAB_006bae46: ;
  F_00ab05d0(param_1,1000);
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf92 */
uint F_006bae70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bae70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(char *)(REFG(int, 0x1488344) + 0x724) == '\0') {
    *(undefined1 *)(REFG(int, 0x1488344) + 0x724) = 1;
  }
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf64 */
uint F_006bae90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bae90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf65 */
uint F_006baea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6baea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf74 */
uint F_006baeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6baeb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf75 */
uint F_006baec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6baec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf77 */
uint F_006baed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6baed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf80 */
uint F_006baee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6baee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf88 */
uint F_006baef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6baef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_006baf20 */
uint F_006baf20(unsigned int gen_a0)
{
  GEN_ENTER(0x6baf20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1ac))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baf40 */
uint F_006baf40(unsigned int gen_a0)
{
  GEN_ENTER(0x6baf40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1b0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baf60 */
uint F_006baf60(unsigned int gen_a0)
{
  GEN_ENTER(0x6baf60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1b4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baf80 */
uint F_006baf80(unsigned int gen_a0)
{
  GEN_ENTER(0x6baf80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1b8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bafa0 */
uint F_006bafa0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bafa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1bc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bafc0 */
uint F_006bafc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bafc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1c0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bafe0 */
uint F_006bafe0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bafe0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1c4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb000 */
uint F_006bb000(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb000u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1c8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb020 */
uint F_006bb020(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb020u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1cc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb040 */
uint F_006bb040(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb040u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1d0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb060 */
uint F_006bb060(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb060u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1d4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb080 */
uint F_006bb080(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb080u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1d8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb0a0 */
uint F_006bb0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb0a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1dc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb0c0 */
uint F_006bb0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb0c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1e0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb0e0 */
uint F_006bb0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb0e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1e4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb100 */
uint F_006bb100(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb100u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1e8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb120 */
uint F_006bb120(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb120u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1ec))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb140 */
uint F_006bb140(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb140u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1f0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb160 */
uint F_006bb160(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb160u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 500))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb180 */
uint F_006bb180(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb180u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1f8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb1a0 */
uint F_006bb1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb1a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1fc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb1c0 */
uint F_006bb1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb1c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x200))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb1e0 */
uint F_006bb1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb1e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x204))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb200 */
uint F_006bb200(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb200u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x208))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb220 */
uint F_006bb220(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb220u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x20c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb240 */
uint F_006bb240(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb240u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x210))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb260 */
uint F_006bb260(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb260u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x214))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb280 */
uint F_006bb280(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb280u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x218))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf116 */
uint F_006bb2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf119 */
uint F_006bb2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf121 */
uint F_006bb2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf126 */
uint F_006bb2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf128 */
uint F_006bb2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf129 */
uint F_006bb2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_006bb320 */
uint F_006bb320(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb320u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x21c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb340 */
uint F_006bb340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bb340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8b94));
  F_0071edf0((undefined *)((int)this + 8));
  *(undefined4 *)((int)this + 0x94) = param_2;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0x98) = param_3;
  *(undefined4 *)((int)this + 0x9c) = param_1;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined2 *)((int)this + 0xbc) = 1;
  return (uint)this;
}

/* ref: FUN_006bb3a0 */
uint F_006bb3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0x6bb3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8b94));
  F_0071edf0(param_1 + 2);
  param_1[0x25] = param_3;
  param_1[0x27] = param_2;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = *param_4;
  param_1[0x29] = param_4[1];
  param_1[0x2a] = param_4[2];
  param_1[0x2c] = (undefined4)gen_fl2bits(param_5);
  param_1[0x2d] = param_6;
  param_1[0x2e] = (undefined4)gen_fl2bits(param_7);
  *(undefined2 *)(param_1 + 0x2f) = 0;
  return (uint)param_1;
}

/* ref: FUN_006bb440 */
uint F_006bb440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __time64_t _Var1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8bb0));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(__time64_t *)((int)this + 0x10) = _Var1;
  return (uint)this;
}

/* ref: Client::Game::Event::BindCharacterByEntityIdTask::vf1 */
uint F_006bb480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bb480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  __time64_t _Var6;
  
  if (*(int *)(this + 4) == 0) {
    uVar4 = F_00a64450(&REFG(undefined, 0x14a9a18),*(undefined4 *)(this + 8));
    *(uint *)(this + 4) = uVar4;
    if (uVar4 != 0) {
      *(byte *)(uVar4 + 0x2dd3) = *(byte *)(uVar4 + 0x2dd3) | 4;
    }
  }
  piVar2 = *(int * PTR32 *)(this + 4);
  if (piVar2 == (int *)0x0) {
    _Var6 = F_00c4b7c2((__time64_t *)0x0);
    iVar5 = (int)((ulonglong)_Var6 >> 0x20);
    uVar4 = (uint)((uint)_Var6 < *(uint *)(this + 0x10));
    uVar3 = iVar5 - *(int *)(this + 0x14);
    if ((-1 < (int)(uVar3 - uVar4)) &&
       ((uVar3 != uVar4 && SBORROW4(iVar5,*(int *)(this + 0x14)) == SBORROW4(uVar3,uVar4) ||
        (0xe < (uint)_Var6 - *(uint *)(this + 0x10))))) {
      if (*(int *)(this + 4) != 0) {
        pbVar1 = ((byte *)GEN_TOP((*(int *)(this + 4) + 0x2dd3)));
        *pbVar1 = *pbVar1 & 0xfb;
        *(undefined4 *)(this + 4) = 0;
      }
      return 1;
    }
  }
  else {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x70))(piVar2);
    if (((char)uVar4 != '\0') &&
       (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x68))))(*(int * PTR32 *)(this + 4)), (char)uVar4 != '\0'
       )) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006bb520 */
uint F_006bb520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __time64_t _Var1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8bcc));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(__time64_t *)((int)this + 0x10) = _Var1;
  return (uint)this;
}

/* ref: Client::Game::Event::BindCharacterByLayoutIdTask::vf1 */
uint F_006bb560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bb560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  __time64_t _Var6;
  
  if (((*(int *)(this + 4) == 0) &&
      (piVar3 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0),*(undefined4 *)(this + 8),1), piVar3 != (int *)0x0
      )) && (uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xb8))(piVar3), (char)uVar4 != '\0')) {
    uVar4 = F_00a5f290(piVar3);
    *(uint *)(this + 4) = uVar4;
    if (uVar4 != 0) {
      *(byte *)(uVar4 + 0x2dd3) = *(byte *)(uVar4 + 0x2dd3) | 4;
    }
  }
  piVar3 = *(int * PTR32 *)(this + 4);
  if (piVar3 == (int *)0x0) {
    _Var6 = F_00c4b7c2((__time64_t *)0x0);
    iVar5 = (int)((ulonglong)_Var6 >> 0x20);
    uVar4 = (uint)((uint)_Var6 < *(uint *)(this + 0x10));
    uVar2 = iVar5 - *(int *)(this + 0x14);
    if ((-1 < (int)(uVar2 - uVar4)) &&
       ((uVar2 != uVar4 && SBORROW4(iVar5,*(int *)(this + 0x14)) == SBORROW4(uVar2,uVar4) ||
        (0xe < (uint)_Var6 - *(uint *)(this + 0x10))))) {
      if (*(int *)(this + 4) == 0) {
        return 1;
      }
      pbVar1 = ((byte *)GEN_TOP((*(int *)(this + 4) + 0x2dd3)));
      *pbVar1 = *pbVar1 & 0xfb;
      *(undefined4 *)(this + 4) = 0;
      return 1;
    }
  }
  else {
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x70))(piVar3);
    if (((char)uVar4 != '\0') &&
       (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x68))))(*(int * PTR32 *)(this + 4)), (char)uVar4 != '\0'
       )) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006bb620 */
uint F_006bb620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bb620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  *(undefined4 *)((int)this + 4) = param_1;
  *(int *)((int)this + 0x28) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8be8));
  *(undefined4 *)((int)this + 0x2c) = 0;
  F_00c46aa0((int)this + 8,param_2,param_3 * 4);
  return (uint)this;
}

/* ref: Client::Game::Event::LoadMovePositionTask::vf2 */
unsigned int F_006bb670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bb670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x174))(param_2);
  }
  return 0;
}

/* ref: FUN_006bb690 */
uint F_006bb690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6bb690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8c04));
  F_0042b630((int)this + 4);
  *(undefined4 *)((int)this + 0x58) = param_1;
  *(undefined4 *)((int)this + 100) = param_5;
  *(undefined4 *)((int)this + 0x5c) = param_3;
  *(undefined4 *)((int)this + 0x60) = param_4;
  *(undefined1 *)((int)this + 0x6f) = 0;
  *(undefined4 *)((int)this + 0x68) = param_6;
  *(undefined2 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x6e) = (undefined1)param_2;
  return (uint)this;
}

/* ref: FUN_006bb6e0 */
uint F_006bb6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8c04));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  return (uint)uVar1;
}

/* ref: FUN_006bb700 */
uint F_006bb700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[6])REFP(0x10b8c20));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: Client::Game::Event::PrepareCutSceneTask::vf1 */
uint F_006bb730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bb730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: FUN_006bb740 */
uint F_006bb740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bb740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined * puVar2;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8c3c));
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = uVar1;
  puVar2 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar2 = &REFG(undefined, 0x10b3a4a);
  }
  F_0042cc20((undefined *)((int)this + 0x10),puVar2,REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: FUN_006bb790 */
uint F_006bb790(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8c3c));
  uVar1 = F_0042c880((undefined *)((int)this + 0x10));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  return (uint)uVar1;
}

/* ref: FUN_006bb7e0 */
uint F_006bb7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  in_ecx[2] = GEN_FLT_TO(in_ecx[2], REFG(float, 0x1087f04));
  uVar1 = REFG(float, 0x1094838);
  *in_ecx = (*(undefined * PTR32 (*)[6])REFP(0x10b8c74));
  in_ecx[1] = param_2;
  in_ecx[3] = uVar1;
  *(undefined2 *)(in_ecx + 4) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_006bb830 */
uint F_006bb830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb830u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int * piVar2;
  undefined * this;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  this = REFG(void * PTR32, 0x1379694);
  if (REFG(void * PTR32, 0x1379694) == (undefined *)0x0) {
    return 1;
  }
  piVar1 = (*(int * PTR32 *)&gen_args[1]) + 0x14;
  if (*piVar1 == 0) {
    return 0;
  }
  piVar2 = (*(int * PTR32 *)&gen_args[1]) + 0x12;
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),(char)(*(int * PTR32 *)&gen_args[1])[0x11])));
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x210))(piVar3,REFG(void * PTR32, 0x1379694),*piVar1,(*(int * PTR32 *)&gen_args[1]),*piVar2);
  if (uVar5 != 0xf) {
    uVar5 = F_00a9fbf0(this);
    if ((char)uVar5 != '\0') {
      return 2;
    }
  }
  bVar4 = F_00a9fca0(this);
  if (bVar4 != 0) {
    return 3;
  }
  uVar5 = F_00a9fc60(this);
  if ((char)uVar5 != '\0') {
    return 4;
  }
  uVar5 = F_00aa02d0(this,2,0);
  if ((char)uVar5 != '\0') {
    return 5;
  }
  uVar5 = F_00aa02d0(this,0x4d,0);
  if ((char)uVar5 != '\0') {
    return 6;
  }
  uVar5 = F_00aa0f80(this);
  return -(uint)((uVar5 & 0xff) != 0) & 7;
}

/* ref: FUN_006bb910 */
uint F_006bb910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bb910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(byte *)((int)this + 0x400) = (byte)param_3;
  *(undefined4 *)((int)this + 0x404) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8c90));
  *(undefined2 *)((int)this + 0x408) = 0;
  F_00c46aa0((int)this + 4,param_2,(uint)(byte)param_3 * 4);
  return (uint)this;
}

/* ref: Client::Game::Event::FinalizeSceneTask::vf2 */
uint F_006bb970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bb970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x70))(param_2,this + 4,(uint)(byte)this[0x400]);
  return uVar1;
}

/* ref: Client::Game::Event::FinalizeSceneTask::vf3 */
byte F_006bb9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bb9a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_006bb9b0 */
uint F_006bb9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6bb9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8cac));
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined2 *)((int)this + 0x3c) = 0x100;
  return (uint)this;
}

/* ref: FUN_006bb9e0 */
uint F_006bb9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6, float gen_a7)
{
  GEN_ENTER(0x6bb9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  param_1[2] = param_2;
  param_1[4] = param_4;
  param_1[3] = param_3;
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8cac));
  param_1[8] = *param_5;
  param_1[9] = param_5[1];
  param_1[10] = param_5[2];
  param_1[0xc] = (undefined4)gen_fl2bits(param_6);
  param_1[0xd] = param_7;
  param_1[0xe] = (undefined4)gen_fl2bits(param_8);
  *(undefined2 *)(param_1 + 0xf) = 0;
  return (uint)param_1;
}

/* ref: Client::Game::Event::SetPositionTask::vf2 */
unsigned int F_006bba50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bba50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x188))(param_2);
  }
  return 0;
}

/* ref: FUN_006bba70 */
uint F_006bba70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6bba70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[6])REFP(0x10b8cc8));
  in_ecx[1] = (undefined4)gen_fl2bits(param_2);
  return (uint)in_ecx;
}

/* ref: Client::Game::Event::WaitForTimeTask::vf2 */
unsigned int F_006bbaa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbaa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x150))(param_2);
  }
  return 0;
}

/* ref: Client::Game::Event::CancelEventSceneTask::vf2 */
unsigned int F_006bbae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_006bbaf0 */
uint F_006bbaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bbaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10b8d00));
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  return (uint)this;
}

/* ref: FUN_006bbb30 */
uint F_006bbb30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bbb30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10b8d20));
  return (uint)this;
}

/* ref: Client::Game::Event::WaitForTurnTask::vf2 */
unsigned int F_006bbb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbb70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 400))(param_2);
  }
  return 0;
}

/* ref: Client::Game::Event::WaitForTurnTask::vf6 */
uint F_006bbb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_00a9fc00(param_2);
  if (bVar1 == 0) {
    bVar1 = F_00aa07c0(param_2);
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006bbbd0 */
uint F_006bbbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6bbbd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10b8d40));
  *(undefined4 *)((int)this + 0x18) = param_4;
  return (uint)this;
}

/* ref: Client::Game::Event::WaitForActionTask::vf2 */
unsigned int F_006bbc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbc10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x18c))(param_2);
  }
  return 0;
}

/* ref: Client::Game::Event::WaitForActionTask::vf6 */
uint F_006bbc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbc30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00aa02d0(param_2,*(undefined4 *)(this + 0x18),0);
  if ((char)uVar2 == '\0') {
    bVar1 = F_00aa2d60(param_2,*(undefined4 *)(this + 0x18),0);
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006bbc70 */
uint F_006bbc70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bbc70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10b8d60));
  return (uint)this;
}

/* ref: Client::Game::Event::WaitForLookAtTask::vf2 */
unsigned int F_006bbcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbcb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x194))(param_2);
  }
  return 0;
}

/* ref: FUN_006bbcd0 */
byte F_006bbcd0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bbcd0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00aa1320(param_1,0xffffffff);
  if (bVar1 != 0) {
    bVar1 = F_00aa1330(param_1,0xffffffff);
    return bVar1 == 0;
  }
  bVar1 = F_00aa1340(param_1,0xffffffff);
  if (bVar1 != 0) {
    bVar1 = F_00aa1350(param_1,0xffffffff);
    return bVar1 == 0;
  }
  return 0;
}

/* ref: FUN_006bbd20 */
uint F_006bbd20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bbd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10b8d80));
  return (uint)this;
}

/* ref: Client::Game::Event::WaitForMoveTask::vf2 */
unsigned int F_006bbd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbd60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x198))(param_2);
  }
  return 0;
}

/* ref: Client::Game::Event::WaitForMoveTask::vf6 */
uint F_006bbd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a9fbf0(param_2);
  return (uint)((char)uVar1 == '\0');
}

/* ref: FUN_006bbda0 */
uint F_006bbda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bbda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10b8da0));
  return (uint)this;
}

/* ref: Client::Game::Event::WaitForCharacterTransparency::vf2 */
unsigned int F_006bbde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbde0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x19c))(param_2);
  }
  return 0;
}

/* ref: Client::Game::Event::WaitForCharacterTransparency::vf6 */
uint F_006bbe00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbe00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  bool bVar1;
  
  bVar1 = GEN_ISNAN(*(float *)(param_2 + 0x2ec8)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  if (bVar1 == (bVar1 || *(float *)(param_2 + 0x2ec8) == *(float *)&REFG(undefined, 0x1088114))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_006bbe40 */
uint F_006bbe40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x6bbe40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x10b8dc0));
  param_1[6] = (undefined4)gen_fl2bits(param_5);
  return (uint)param_1;
}

/* ref: Client::Game::Event::WaitTimeAfterCharacterTransparency::vf2 */
unsigned int F_006bbe80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbe80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Game::Event::WaitTimeAfterCharacterTransparency::vf4 */
unsigned int F_006bbe90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bbe90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 0) {
    *(undefined4 *)(in_ecx + 0x18) = 0;
  }
  return 0;
}

/* ref: Client::Game::Event::WaitForFadeTask::vf2 */
unsigned int F_006bbeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbeb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x170))(param_2);
  }
  return 0;
}

/* ref: Client::Game::Event::WaitForCameraPanTask::vf1 */
uint F_006bbed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    bVar1 = F_00b6b550(0);
    return (uint)(bVar1 == 0);
  }
  bVar1 = F_00b6b550((&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)]);
  return (uint)(bVar1 == 0);
}

/* ref: Client::Game::Event::WaitForCameraPanTask::vf2 */
unsigned int F_006bbf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbf20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x160))(param_2);
  }
  return 0;
}

/* ref: Client::Game::Event::WaitForCameraDollyTask::vf1 */
uint F_006bbf40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbf40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    bVar1 = F_00b6b580(0);
    return (uint)(bVar1 == 0);
  }
  bVar1 = F_00b6b580((&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)]);
  return (uint)(bVar1 == 0);
}

/* ref: Client::Game::Event::WaitForCameraDollyTask::vf2 */
unsigned int F_006bbf90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbf90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x164))(param_2);
  }
  return 0;
}

/* ref: Client::Game::Event::WaitForCameraZoomTask::vf1 */
uint F_006bbfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbfb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    bVar1 = F_00b6b5b0(0);
    return (uint)(bVar1 == 0);
  }
  bVar1 = F_00b6b5b0((&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)]);
  return (uint)(bVar1 == 0);
}

/* ref: Client::Game::Event::WaitForCameraZoomTask::vf2 */
unsigned int F_006bc000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bc000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x168))(param_2);
  }
  return 0;
}

/* ref: Client::Game::Event::WaitForCameraGyroTask::vf1 */
uint F_006bc020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bc020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    bVar1 = F_00b6b5d0(0);
    return (uint)(bVar1 == 0);
  }
  bVar1 = F_00b6b5d0((&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)]);
  return (uint)(bVar1 == 0);
}

/* ref: Client::Game::Event::WaitForCameraGyroTask::vf2 */
unsigned int F_006bc070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bc070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x16c))(param_2);
  }
  return 0;
}

/* ref: Client::Game::Event::IsItemObtainableTask::vf1 */
uint F_006bc090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bc090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ab24a0(*(undefined4 *)(this + 4));
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00a40d10(&REFG(undefined, 0x14a4230),*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),
                       (uint)(byte)this[0xc]);
  if (uVar1 == 0) {
    this[0xd] = (undefined1)0x1;
  }
  return 1;
}

/* ref: Client::Game::Event::IsItemObtainableTask::vf2 */
uint F_006bc0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bc0d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x1a8))(param_2,(uint)(byte)this[0xd]);
  }
  return uVar1;
}

/* ref: FUN_006bc0f0 */
uint F_006bc0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc0f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  *(undefined4 *)(in_ecx + 4) = 4;
  *(undefined1 *)(in_ecx + 0xc) = 1;
  return param_2;
}

/* ref: Client::Game::Event::LuaActor::vf1 */
unsigned int F_006bc110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bc110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_006bc120 */
uint F_006bc120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bc120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  in_ecx[1] = param_2;
  F_0042b630(in_ecx + 2);
  in_ecx[0x17] = param_3;
  return (uint)in_ecx;
}

/* ref: FUN_006bc150 */
uint F_006bc150(unsigned int gen_a0)
{
  GEN_ENTER(0x6bc150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  char * pcVar2;
  
  pcVar2 = *(char * PTR32 *)((int)this + 8);
  if (*pcVar2 != '\0') {
    uVar1 = F_0042a990((int)this + 8);
    pcVar2 = (char *)F_00a023f0(*(undefined * PTR32 *)((int)this + 0x5c),uVar1);
  }
  return (uint)pcVar2;
}

/* ref: FUN_006bc310 */
uint F_006bc310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)*((byte *)GEN_TOP((*(int *)(in_ecx + 0x60) + 0x2db8 + param_2)));
}

/* ref: FUN_006bc330 */
uint F_006bc330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc330u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00ab3fa0(((*(uint *)&gen_args[1]) & 0xff) + 1);
  if (uVar2 == 0) {
    return 0;
  }
  bVar1 = F_00a62b00((*(undefined4 *)&gen_args[0]));
  (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),bVar1);
  uVar3 = F_00a629e0(&REFG(undefined, 0x14a9728),(*(uint *)&gen_args[1]));
  return (uint)(*(byte *)(uVar2 + 0x22) <= *(byte *)(uVar3 + 0x30));
}

/* ref: FUN_006bc3c0 */
uint F_006bc3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x60);
  if ((char)param_1 != '\0') {
    return (uint)*(byte *)(iVar1 + 0x1689);
  }
  if (iVar1 != REFG(int, 0x1379694)) {
    return 0;
  }
  uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070),(uint)*(byte *)(iVar1 + 0x1688),0);
  return uVar2;
}

/* ref: FUN_006bc400 */
uint F_006bc400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bc400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(int *)((int)this + 0x60) != REFG(int, 0x1379694)) {
    return 0;
  }
  uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070),param_1,param_2);
  return uVar1;
}

/* ref: FUN_006bc420 */
uint F_006bc420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x60) != REFG(int, 0x1379694)) {
    return 0;
  }
  uVar1 = F_00a68310(&REFG(undefined1, 0x14ab070),param_1);
  return uVar1;
}

/* ref: FUN_006bc480 */
byte F_006bc480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (*(int *)((int)this + 0x60) != REFG(int, 0x1379694)) {
    return 0;
  }
  return ((&REFG(undefined1, 0x14b4ec0))[param_1 >> 3] & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_006bc4c0 */
byte F_006bc4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00ab1ed0(param_1);
  if (((uVar2 != 0) && (bVar1 = *(byte *)(uVar2 + 0x27), bVar1 != 0)) &&
     (*(int *)((int)this + 0x60) == REFG(int, 0x1379694))) {
    return ((&REFG(undefined1, 0x14b4ec0))[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0;
  }
  return 0;
}

/* ref: FUN_006bc510 */
byte F_006bc510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (*(int *)((int)this + 0x60) != REFG(int, 0x1379694)) {
    return 0;
  }
  return ((&REFG(undefined1, 0x14b4edc))[param_1 >> 3] & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_006bc550 */
byte F_006bc550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 0x60) != REFG(int, 0x1379694)) {
    return 0;
  }
  return ((&REFG(undefined, 0x14b4f0c))[(ushort)param_1 >> 3] & (byte)(1 << ((byte)(ushort)param_1 & 7))) != 0;
}

/* ref: FUN_006bc5b0 */
uint F_006bc5b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bc5b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a3c850(&REFG(undefined, 0x14a4230),param_1);
  return uVar1;
}

/* ref: FUN_006bc5c0 */
uint F_006bc5c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bc5c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  ushort uVar2;
  
  uVar1 = F_00a3c850(&REFG(undefined, 0x14a4230),param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  uVar1 = F_00ab24a0(uVar1);
  if (uVar1 != 0) {
    uVar2 = (ushort)*(byte *)(uVar1 + 0x9e);
  }
  return CONCAT22((short)(uVar1 >> 0x10),uVar2);
}

/* ref: FUN_006bc600 */
uint F_006bc600(unsigned int gen_a0)
{
  GEN_ENTER(0x6bc600u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  ushort uVar2;
  
  uVar1 = F_00a3c850(&REFG(undefined, 0x14a4230),param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  uVar1 = F_00ab24a0(uVar1);
  if (uVar1 != 0) {
    uVar2 = (ushort)*(byte *)(uVar1 + 0x9f);
  }
  return CONCAT22((short)(uVar1 >> 0x10),uVar2);
}

/* ref: FUN_006bc640 */
uint F_006bc640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6bc640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(undefined4 *)(gen_frame + 0x0)) = 9999;
  (*(undefined2 *)(gen_frame + 0x4)) = 0;
  (*(undefined1 *)(gen_frame + 0x6)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x75300000;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2a)) = 0;
  (*(undefined2 *)(gen_frame + 0x2e)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined1 *)(gen_frame + 0x38)) = 0;
  F_00a35f30(&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined2 *)(gen_frame + 0x40)) = 0;
  (*(uint *)(gen_frame + 0x44)) = 0;
  F_00a35ee0(&(*(undefined4 *)(gen_frame + 0x0)),param_1,1);
  (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x40)) + 0)) = (undefined1)param_7;
  (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x40)) + 1)) = param_2 != 0;
  (*(undefined2 *)(gen_frame + 0x40)) = CONCAT11(param_2 != 0,(undefined1)param_7);
  uVar2 = 0;
  do {
    uVar3 = uVar2 & 0xff;
    *(undefined2 *)((int)&(*(undefined4 *)(gen_frame + 0x20)) + uVar3 * 2) = *(undefined2 *)(param_5 + uVar2 * 2);
    puVar1 = (undefined1 *)(uVar2 + param_6);
    uVar2 = uVar2 + 1;
    *(undefined1 *)((int)&(*(undefined4 *)(gen_frame + 0x2a)) + uVar3) = *puVar1;
  } while (uVar2 < 5);
  uVar2 = F_00a411a0(&REFG(undefined, 0x14a4230),&(*(undefined4 *)(gen_frame + 0x0)),param_3,param_4);
  uVar2 = uVar2 - (*(uint *)(gen_frame + 0x44));
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    break;
  case 1: ;
    uVar2 = (*(uint *)(gen_frame + 0x44));
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar2;
  case 2: ;
    if (uVar2 <= (*(uint *)(gen_frame + 0x44))) {
      uVar2 = (*(uint *)(gen_frame + 0x44));
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return uVar2;
    }
    break;
  case 3: ;
    uVar2 = uVar2 + (*(uint *)(gen_frame + 0x44));
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar2;
  default: ;
    uVar2 = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar2;
}

/* ref: FUN_006bc780 */
uint F_006bc780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bc780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a41080(&REFG(undefined, 0x14a4230),param_1,0,param_2,param_3);
  return uVar1;
}

/* ref: FUN_006bc7a0 */
uint F_006bc7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bc7a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a41080(&REFG(undefined, 0x14a4230),param_1,1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_006bc7c0 */
byte F_006bc7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  bVar1 = *((byte *)GEN_TOP((*(int *)((int)this + 0x60) + 0x1688)));
  uVar2 = F_00ab21d0(param_1);
  if (uVar2 == 0) {
    return 0;
  }
  return *(byte *)(uVar2 + 4 + (uint)bVar1);
}

/* ref: FUN_006bc7f0 */
byte F_006bc7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  ushort * puVar2;
  ushort * puVar3;
  uint uVar4;
  
  uVar1 = F_00ab3e80(param_1);
  if (uVar1 != 0) {
    uVar4 = 0;
    puVar3 = (ushort *)(uVar1 + 4);
    do {
      uVar1 = (uint)*puVar3;
      if ((uVar1 != 0) && (uVar1 < 0x70)) {
        while (puVar2 = (ushort *)F_00ab3e50(uVar1), puVar2 != (ushort *)0x0) {
          if (*(int *)puVar2 != 0) {
            if ((*(int *)((int)this + 0x60) == REFG(int, 0x1379694)) &&
               (((&REFG(undefined, 0x14b4f0c))[*puVar2 >> 3] & (byte)(1 << ((byte)*puVar2 & 7))) != 0)) {
              return 1;
            }
            break;
          }
          uVar1 = uVar1 + 1;
          if (0x6f < uVar1) break;
        }
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 < 8);
  }
  return 0;
}

/* ref: FUN_006bc890 */
uint F_006bc890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc890u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char cVar1;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(in_ecx + 0x60) + 0x2e08)));
  if (cVar1 == '\0') {
    return *(uint *)(in_ecx + 0x60) & 0xffffff00;
  }
  if (((char)param_2 != '\0') && ((char)param_2 != cVar1)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_006bc900 */
byte F_006bc900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x60) != REFG(int, 0x1379694)) {
    return 0;
  }
  bVar1 = F_00a68920(&REFG(undefined1, 0x14ab070),param_2);
  return bVar1;
}

/* ref: FUN_006bc920 */
byte F_006bc920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc920u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  byte local_5;
  
  local_5 = 1;
  puVar4 = param_1;
  if (param_2 == 0) {
    return 1;
  }
  do {
    bVar1 = false;
    uVar3 = 0;
    do {
      uVar2 = F_00a3c850(&REFG(undefined, 0x14a4230),uVar3);
      if (1000000 < uVar2) {
        uVar2 = uVar2 - 1000000;
      }
      if (*puVar4 == uVar2) {
        bVar1 = true;
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0xe);
    if ((local_5 == 0) || (local_5 = 1, !bVar1)) {
      local_5 = 0;
    }
    puVar4 = puVar4 + 1;
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      return local_5;
    }
  } while( true );
}

/* ref: FUN_006bc9f0 */
byte F_006bc9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 0x60) != REFG(int, 0x1379694)) {
    return 0;
  }
  return ((&REFG(undefined1, 0x14b4ed0))[(byte)param_1 >> 3] & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_006bca30 */
byte F_006bca30(unsigned int gen_a0)
{
  GEN_ENTER(0x6bca30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (&REFG(undefined1, 0x14ab29f))[(byte)param_1];
}

/* ref: FUN_006bca50 */
byte F_006bca50(unsigned int gen_a0)
{
  GEN_ENTER(0x6bca50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_00a68770(&REFG(undefined1, 0x14ab070),param_1);
  return bVar1;
}

/* ref: FUN_006bcaa0 */
byte F_006bcaa0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bcaa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a4ffd0();
  bVar1 = F_00b8de30(uVar2,param_1);
  return bVar1;
}

/* ref: FUN_006bcac0 */
byte F_006bcac0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bcac0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a4ffd0();
  bVar1 = F_00b8df80(uVar2,param_1);
  return bVar1;
}

/* ref: FUN_006bcb30 */
byte F_006bcb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bcb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined * this_00;
  
  bVar1 = F_00a9f620(*(undefined4 *)((int)this + 0x60));
  if (bVar1 != 0) {
    this_00 = (undefined *)F_00a5f290(*(undefined * PTR32 *)(param_1 + 4));
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00a9fd60(this_00);
      return bVar1;
    }
  }
  return 0;
}

/* ref: FUN_006bcb60 */
uint F_006bcb60(unsigned int gen_a0)
{
  GEN_ENTER(0x6bcb60u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[0x5d];
  if (uVar1 != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    if (uVar2 == 1) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_006bcb90 */
uint F_006bcb90(unsigned int gen_a0)
{
  GEN_ENTER(0x6bcb90u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
  if ((((char)uVar1 != '\0') && (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar1 == 3)) &&
     (param_1[0x5d] != 0)) {
    return param_1[0x5d];
  }
  return 0;
}

/* ref: FUN_006bcbd0 */
uint F_006bcbd0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bcbd0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
  if ((((char)uVar1 != '\0') && (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar1 == 2)) &&
     (param_1[0x5d] != 0)) {
    return param_1[0x5d];
  }
  return 0;
}

/* ref: FUN_006bcc10 */
uint F_006bcc10(unsigned int gen_a0)
{
  GEN_ENTER(0x6bcc10u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
  if ((((char)uVar1 != '\0') && (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar1 == 10)) &&
     (param_1[0x5d] != 0)) {
    return param_1[0x5d];
  }
  return 0;
}

/* ref: FUN_006bcc50 */
uint F_006bcc50(unsigned int gen_a0)
{
  GEN_ENTER(0x6bcc50u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
  if ((((char)uVar1 == '\0') && (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar1 == 7)) &&
     (param_1[0x5d] != 0)) {
    return param_1[0x5d];
  }
  return 0;
}

/* ref: FUN_006bcc90 */
uint F_006bcc90(unsigned int gen_a0)
{
  GEN_ENTER(0x6bcc90u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
  if ((((char)uVar1 == '\0') && (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar1 == 5)) &&
     (param_1[0x5d] != 0)) {
    return param_1[0x5d];
  }
  return 0;
}

/* ref: FUN_006bccd0 */
uint F_006bccd0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bccd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  *(byte *)((int)this + 0x1c) = *(byte *)((int)this + 0x1c) & 0xfd;
  bVar1 = *(byte *)((int)this + 0x1c);
  if ((bVar1 & 1) == 0) {
    *(byte *)((int)this + 0x1c) = bVar1 | 1;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
    return uVar2;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
}

/* ref: FUN_006bccf0 */
unsigned int F_006bccf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bccf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 0x1c) = *(byte *)(in_ecx + 0x1c) | 2;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf143 */
unsigned int F_006bcd00(void)
{
  GEN_ENTER(0x6bcd00u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_006bcd10 */
uint F_006bcd10(unsigned int gen_a0)
{
  GEN_ENTER(0x6bcd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 100) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x68);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 100));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 100);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 100) = 0;
    }
  }
  if (*(int *)((int)this + 0x6c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x6c));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x6c);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x6c) = 0;
    }
  }
  uVar3 = *(uint *)((int)this + 0x74);
  if (uVar3 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x78);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,uVar3);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x74);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x74) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  return uVar3;
}

/* ref: Client::Game::Event::EventHandler::vf5 */
byte F_006bcda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bcda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::Game::Event::EventHandler::vf7 */
byte F_006bcdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bcdb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: Client::Game::Event::EventHandler::vf9 */
byte F_006bcdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bcdc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::Game::Event::EventHandler::vf11 */
byte F_006bcdd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bcdd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::Game::Event::EventHandler::vf13 */
byte F_006bcde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bcde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::Game::Event::EventHandler::vf15 */
byte F_006bcdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bcdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::Game::Event::EventHandler::vf17 */
byte F_006bce00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bce00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::Game::Event::EventHandler::vf19 */
byte F_006bce10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bce10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 1;
}

/* ref: Client::Game::Event::EventHandler::vf25 */
unsigned int F_006bce20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bce20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf29 */
unsigned int F_006bce30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bce30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf30 */
unsigned int F_006bce40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6bce40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf33 */
unsigned int F_006bce50(void)
{
  GEN_ENTER(0x6bce50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf34 */
unsigned int F_006bce60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bce60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 100);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 100) = 0;
  }
  *(undefined4 *)(this + 0x68) = 0;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf35 */
unsigned int F_006bce90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bce90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x6c);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x6c) = 0;
  }
  *(undefined4 *)(this + 0x70) = 0;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf37 */
byte F_006bcec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bcec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf40 */
unsigned int F_006bced0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bced0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf41 */
unsigned int F_006bcee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bcee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf50 */
byte F_006bcef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6bcef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf51 */
unsigned int F_006bcf00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6bcf00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_006bcf10 */
uint F_006bcf10(unsigned int gen_a0)
{
  GEN_ENTER(0x6bcf10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x74);
  if (uVar3 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x78);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,uVar3);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x74);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x74) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_006bcf50 */
uint F_006bcf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6bcf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ulonglong uVar1;
  
  *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) & 0xf8;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 0x54) = (undefined2)param_2;
  *(undefined4 *)((int)this + 0x58) = param_1;
  REFG(undefined1, 0x1488342) = (byte)param_4;
  uVar1 = F_00c46aa0(&REFG(undefined4, 0x1488348),param_3,(uint)(byte)param_4 * 4);
  return (uint)uVar1;
}

/* ref: FUN_006bcfc0 */
uint F_006bcfc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bcfc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_EAX = 0;
  
  if ((*(byte *)((int)this + 0x5c) & 1) == 0) {
    in_EAX = F_00a50880(*(undefined4 *)((int)this + 8),(uint)*(ushort *)((int)this + 0x54),param_1
                          ,param_2,param_3);
    *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 1;
  }
  return in_EAX;
}

/* ref: FUN_006bd000 */
unsigned int F_006bd000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bd000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((*(byte *)((int)this + 0x5c) & 1) == 0) {
    F_00a50ad0(*(undefined4 *)((int)this + 8),(uint)*(ushort *)((int)this + 0x54),param_1,param_2)
    ;
    *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 1;
  }
  return 0;
}

/* ref: FUN_006bd030 */
unsigned int F_006bd030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6bd030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((*(byte *)((int)this + 0x5c) & 1) == 0) {
    F_00a50c40(*(undefined4 *)((int)this + 8),(uint)*(ushort *)((int)this + 0x54),param_1,param_2,
                 param_3,param_4);
    *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 1;
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf52 */
byte F_006bd070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bd070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return param_1 != -1;
}

/* ref: FUN_006bd080 */
uint F_006bd080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bd080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a51200(0x53,*(undefined4 *)((int)this + 8),param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf42 */
unsigned int F_006bd0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bd0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf134 */
uint F_006bd0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bd0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (REFG(int, 0x1379694) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x210))(this,REFG(int, 0x1379694),param_1,param_2,param_3);
    if (uVar1 == 0xf) {
      return 2;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf135 */
byte F_006bd100(unsigned int gen_a0)
{
  GEN_ENTER(0x6bd100u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x44) != '\a';
}

/* ref: Client::Game::Event::EventHandler::vf44 */
unsigned int F_006bd110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bd110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf45 */
unsigned int F_006bd120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bd120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf46 */
uint F_006bd130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6bd130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int * piVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = 0;
  if (param_4 == 2) {
    iVar2 = 0x51e;
  }
  else if (param_4 == 3) {
    iVar2 = 0x524;
  }
  else if (param_4 == 4) {
    iVar2 = 0x525;
  }
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (iVar2 != 0) {
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    piVar1 = (int *)F_0046a630(this_00,iVar2);
  }
  if ((char)param_2 == '\x0f') {
    piVar1 = (int *)F_00ab60c0(&REFG(undefined4, 0x14bcc80));
  }
  return (uint)piVar1;
}

/* ref: Client::Game::Event::EventHandler::vf47 */
uint F_006bd190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bd190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (*(uint *)(this + 0x50) == param_1) {
    *(undefined4 *)(this + 0x50) = 0;
  }
  if (*(uint *)(this + 0x58) == param_1) {
    *(undefined4 *)(this + 0x58) = 0;
  }
  return param_1;
}

/* ref: Client::Game::Event::EventHandler::vf48 */
unsigned int F_006bd1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bd1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf1 */
unsigned int F_006bd1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bd1c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
  if (((byte)this[0x1c] & 1) == 0) {
    this[0x1c] = (undefined1)((byte)this[0x1c] | 1);
    ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
    return 0;
  }
  return 0;
}

/* ref: FUN_006bd1e0 */
uint F_006bd1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bd1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (uint)((1 << ((byte)param_1 & 0x1f) & *(uint *)((int)this + 0x38)) != 0);
}

/* ref: FUN_006bd200 */
uint F_006bd200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bd200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  if ((char)param_2 != '\0') {
    *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) | uVar1;
    return (uint)this;
  }
  *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) & ~uVar1;
  return (uint)this;
}

/* ref: Client::Game::Event::EventHandler::vf131 */
byte F_006bd230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6bd230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf132 */
uint F_006bd240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6bd240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x20c))(this,param_1,param_2,param_3,param_4);
  return ((char)uVar1 != '\0') + 0x10;
}

/* ref: Client::Game::Event::EventHandler::vf133 */
uint F_006bd270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x6bd270u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x210))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf136 */
byte F_006bd280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6bd280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf111 */
byte F_006bd290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6bd290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  byte bVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x20c))(this,param_1,param_2,param_3,param_4);
  bVar2 = (char)uVar1 != '\0';
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x220))(this,param_1,param_2,param_3,param_4);
  if ((char)uVar1 != '\0') {
    bVar2 = bVar2 | 2;
  }
  return bVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf143 */
uint F_006bd2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bd2f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  char * pcVar2;
  undefined4 uVar3;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x1f0))(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x1f8))(this);
  pcVar2 = *(char * PTR32 *)(this + 0x16c);
  if (*pcVar2 != '\0') {
    uVar3 = 0;
    uVar1 = F_0042a990(this + 0x16c);
    pcVar2 = (char *)F_00a024d0(*(undefined * PTR32 *)(this + 0xf8),"OnInitialize",uVar1,uVar3);
  }
  return (uint)pcVar2;
}

/* ref: FUN_006bd340 */
uint F_006bd340(unsigned int gen_a0)
{
  GEN_ENTER(0x6bd340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (**(char * PTR32 *)((int)this + 0x16c) != '\0') {
    uVar1 = F_0042a990((int)this + 0x16c);
    uVar1 = F_00a023f0(*(undefined * PTR32 *)((int)this + 0xf8),uVar1);
    if ((int)uVar1 < 1) {
      uVar1 = F_0042a990((int)this + 0x118);
      F_00a01bf0(*(undefined * PTR32 *)((int)this + 0xf8),uVar1);
      F_0042aca0((int)this + 0x118);
    }
    uVar1 = F_0042aca0((int)this + 0x16c);
    return uVar1;
  }
  return (uint)*(char * PTR32 *)((int)this + 0x16c);
}

/* ref: Client::Game::Event::LuaEventHandler::vf29 */
uint F_006bd3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bd3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  if ((REFG(int * PTR32, 0x1379694) != (int *)0x0) &&
     ((iVar1 = REFG(int * PTR32, 0x1379694)[0x5d], iVar1 == 0 ||
      (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 4))))(REFG(int * PTR32, 0x1379694)), uVar2 != 1)))) {
    iVar1 = 0;
  }
  uVar2 = F_0042a990(iVar1 + 8);
  uVar3 = F_0042a990(this + 0x16c);
  uVar2 = F_00a02a50(*(undefined * PTR32 *)(this + 0xf8),"OnNotice",uVar3,uVar2,param_1 & 0xff,param_2,
                       param_3 & 0xff,0);
  return uVar2;
}

/* ref: Client::Game::Event::LuaEventHandler::vf144 */
unsigned int F_006bd410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bd410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_006bd420 */
uint F_006bd420(unsigned int gen_a0)
{
  GEN_ENTER(0x6bd420u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined * this;
  undefined4 uVar2;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
  if (REFG(char, 0x14a7387) != '\0') {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar1 != (int *)0x0) {
      uVar2 = 0x1b7;
      this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      F_0046a630(this,uVar2);
    }
    uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32));
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = uVar2 & 0xffffff00;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: Client::Game::Event::AetheryteEventHandler::vf128 */
uint F_006bd490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6bd490u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  return (-(uint)(*((char *)GEN_TOP((*(int *)(in_ecx + 0x2d4) + 0x35))) != '\0') & 0x17) + 0xec0e;
}

/* ref: Client::Game::Event::AetheryteEventHandler::vf110 */
uint F_006bd4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bd4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0(param_1,this + 0x1d8);
  return uVar1;
}

/* ref: FUN_006bd4d0 */
uint F_006bd4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bd4d0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ab2690(param_1 & 0xff);
  if (uVar1 != 0) {
    uVar1 = F_00ab9240(0x18fb2,(uint)*(ushort *)(uVar1 + 0x24),param_2);
    return uVar1;
  }
  uVar1 = F_0042aca0(param_2);
  return uVar1;
}

/* ref: FUN_006bd510 */
uint F_006bd510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bd510u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ab2690(param_1 & 0xff);
  if (uVar1 != 0) {
    uVar1 = F_00ab9240(0x18fb3,(uint)*(ushort *)(uVar1 + 0x26),param_2);
    return uVar1;
  }
  uVar1 = F_0042aca0(param_2);
  return uVar1;
}

/* ref: Client::Game::Event::ArrayEventHandler::vf114 */
unsigned int F_006bd5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bd5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pAVar1;
  int iVar2;
  
  pAVar1 = this + 0xf8;
  iVar2 = 0x10;
  do {
    if (*(int *)pAVar1 != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar1 + 0x1c8))))(*(int * PTR32 *)pAVar1);
    }
    pAVar1 = pAVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: Client::Game::Event::ArrayEventHandler::vf43 */
unsigned int F_006bd600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bd600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * pAVar2;
  int iVar3;
  
  pAVar2 = this + 0xf8;
  iVar3 = 0x10;
  do {
    if (*(int *)pAVar2 != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar2 + 8))))(*(int * PTR32 *)pAVar2);
      if ((char)uVar1 != '\0') {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar2 + 0xac))))(*(int * PTR32 *)pAVar2,param_1);
      }
    }
    pAVar2 = pAVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}

/* ref: Client::Game::Event::ArrayEventHandler::vf44 */
unsigned int F_006bd640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bd640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * pAVar2;
  int iVar3;
  
  pAVar2 = this + 0xf8;
  iVar3 = 0x10;
  do {
    if (*(int *)pAVar2 != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar2 + 8))))(*(int * PTR32 *)pAVar2);
      if ((char)uVar1 != '\0') {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar2 + 0xb0))))(*(int * PTR32 *)pAVar2,param_1);
      }
    }
    pAVar2 = pAVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}

/* ref: Client::Game::Event::ArrayEventHandler::vf45 */
unsigned int F_006bd680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bd680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * pAVar2;
  int iVar3;
  
  pAVar2 = this + 0xf8;
  iVar3 = 0x10;
  do {
    if (*(int *)pAVar2 != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar2 + 8))))(*(int * PTR32 *)pAVar2);
      if ((char)uVar1 != '\0') {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar2 + 0xb4))))(*(int * PTR32 *)pAVar2,param_1);
      }
    }
    pAVar2 = pAVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}

/* ref: Client::Game::Event::ArrayEventHandler::vf115 */
ushort F_006bd6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bd6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  undefined * pAVar3;
  uint uVar4;
  
  uVar4 = 0;
  pAVar3 = this + 0xf8;
  iVar2 = 0x10;
  do {
    if (*(int *)pAVar3 != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 8))))(*(int * PTR32 *)pAVar3);
      if ((char)uVar1 != '\0') {
        uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0x1cc))))(*(int * PTR32 *)pAVar3,param_1);
        if ((ushort)uVar4 < (ushort)uVar1) {
          uVar4 = uVar1 & 0xffff;
        }
      }
    }
    pAVar3 = pAVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return (ushort)uVar4;
}

/* ref: FUN_006bd710 */
byte F_006bd710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bd710u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    return 1;
  case 1: ;
    if (param_2 == 0) {
      return 2;
    }
    if (param_2 == 1) {
      return 3;
    }
    if (param_2 == 2) {
      return 4;
    }
    break;
  case 2: ;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      return 5;
    case 1: ;
      return 6;
    case 2: ;
      return 7;
    case 3: ;
      return 8;
    case 4: ;
      return 9;
    case 5: ;
      return 10;
    case 6: ;
      return 0xb;
    case 7: ;
      return 0xc;
    }
    break;
  case 3: ;
    if (param_2 == 0) {
      return 0xd;
    }
    if (param_2 == 1) {
      return 0xe;
    }
    if (param_2 == 2) {
      return 0xf;
    }
    break;
  case 4: ;
    return 0x10;
  case 5: ;
    return 0x11;
  case 6: ;
    return 0x12;
  }
  return 0;
}

/* ref: FUN_006bd810 */
byte F_006bd810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6bd810u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  uint param_7 = (uint)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte * pbVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (((byte)param_3 != 0) && ((byte)param_5 != 0)) {
    uVar1 = 0;
    pbVar5 = (byte *)(param_6 + 1);
    (*(int *)(gen_frame + 0x4)) = 4;
    do {
      bVar3 = pbVar5[-1];
      if ((bVar3 < (byte)param_5) && (*((int *)GEN_TOP((*(int *)(param_4 + (uint)bVar3 * 4) + 4))) != 0)) {
        ((byte *)(gen_frame + 0x8))[(int)(uVar1)] = bVar3;
        uVar1 = (uint)(byte)((char)uVar1 + 1);
      }
      bVar3 = *pbVar5;
      if ((bVar3 < (byte)param_5) && (*((int *)GEN_TOP((*(int *)(param_4 + (uint)bVar3 * 4) + 4))) != 0)) {
        ((byte *)(gen_frame + 0x8))[(int)(uVar1)] = bVar3;
        uVar1 = (uint)(byte)((char)uVar1 + 1);
      }
      bVar3 = pbVar5[1];
      if ((bVar3 < (byte)param_5) && (*((int *)GEN_TOP((*(int *)(param_4 + (uint)bVar3 * 4) + 4))) != 0)) {
        ((byte *)(gen_frame + 0x8))[(int)(uVar1)] = bVar3;
        uVar1 = (uint)(byte)((char)uVar1 + 1);
      }
      bVar3 = pbVar5[2];
      if ((bVar3 < (byte)param_5) && (*((int *)GEN_TOP((*(int *)(param_4 + (uint)bVar3 * 4) + 4))) != 0)) {
        ((byte *)(gen_frame + 0x8))[(int)(uVar1)] = bVar3;
        uVar1 = (uint)(byte)((char)uVar1 + 1);
      }
      pbVar5 = pbVar5 + 4;
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
    } while ((*(int *)(gen_frame + 0x4)) != 0);
    bVar3 = (byte)param_3;
    if ((byte)uVar1 < (byte)param_3) {
      bVar3 = (byte)uVar1;
    }
    uVar2 = 0;
    if (bVar3 != 0) {
      uVar6 = param_7 & 0xff;
      do {
        uVar4 = uVar6 % uVar1;
        uVar2 = uVar2 + 1;
        uVar6 = uVar6 + 1;
        *(byte *)(param_1 + -1 + uVar2) = ((byte *)(gen_frame + 0x8))[(int)(uVar4)];
      } while (uVar2 < bVar3);
    }
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return bVar3;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_006bd930 */
byte F_006bd930(unsigned int gen_a0)
{
  GEN_ENTER(0x6bd930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  short * psVar1;
  
  psVar1 = &REFG(undefined2, 0x10b6134);
  do {
    if ((short)param_1 == *psVar1) {
      return 1;
    }
    psVar1 = psVar1 + 1;
  } while ((int)psVar1 < 0x10b613a);
  return 0;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf112 */
uint F_006bd990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bd990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_1[0x20];
  iVar2 = param_1[0x1e];
  iVar3 = *(int *)this;
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0xa8))(param_1);
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,iVar1,iVar2,uVar4);
  uVar4 = ((code *)*(gen_code32 *)(iVar3 + 0x200))(this,uVar4);
  if (uVar4 != 0) {
    uVar4 = uVar4 + (**(int * PTR32 *)(this + 0x26c) - (*(int * PTR32 *)(this + 0x26c))[1]);
  }
  return uVar4;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf110 */
uint F_006bd9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bd9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0(param_1,this + 0x1d4);
  return uVar1;
}

/* ref: FUN_006bda10 */
byte F_006bda10(unsigned int gen_a0)
{
  GEN_ENTER(0x6bda10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint in_ecx;
  undefined4 uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0x18;
  in_ecx = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar1 = (int *)F_00763050(in_ecx,uVar2);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return 0;
}

