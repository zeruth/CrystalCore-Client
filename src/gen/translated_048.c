#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::Graphics::Scene::BGManager::vf2 */
uint F_0068b080(void)
{
  GEN_ENTER(0x68b080u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b090 */
uint F_0068b090(unsigned int gen_a0)
{
  GEN_ENTER(0x68b090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x70) + 4))))((int)this + 0x70);
  uVar3 = *(uint *)((int)this + 0x224);
  if (uVar3 != 0) {
    uVar5 = 0;
    if (*(int *)((int)this + 0x220) != 0) {
      iVar4 = 0;
      do {
        piVar1 = ((int *)GEN_TOP((iVar4 + *(int *)((int)this + 0x224))));
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0xa0;
      } while (uVar5 < *(uint *)((int)this + 0x220));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x224);
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[-4] == 0) {
        uVar6 = F_00406b30(puVar2 + -4);
        uVar3 = (uint)uVar6;
      }
      else {
        uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,3);
      }
      *(undefined4 *)((int)this + 0x224) = 0;
    }
  }
  if (*(int *)((int)this + 0x22c) != 0) {
    uVar5 = 0;
    if (*(int *)((int)this + 0x228) != 0) {
      iVar4 = 0;
      do {
        piVar1 = ((int *)GEN_TOP((iVar4 + *(int *)((int)this + 0x22c))));
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x80;
      } while (uVar5 < *(uint *)((int)this + 0x228));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x22c);
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[-4] != 0) {
        uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,3);
        *(undefined4 *)((int)this + 0x22c) = 0;
        return uVar3;
      }
      uVar6 = F_00406b30(puVar2 + -4);
      uVar3 = (uint)uVar6;
      *(undefined4 *)((int)this + 0x22c) = 0;
    }
  }
  return uVar3;
}

/* ref: Client::Graphics::Scene::BGObject::vf26 */
byte F_0068b1a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68b1a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte local_8;
  
  local_8 = (byte)(int)TRUNC((double)param_2 * *(double *)&REFG(undefined, 0x1088100));
  *(byte *)(in_ecx + 0x8a) = local_8;
  return local_8;
}

/* ref: Client::Graphics::Scene::BGObject::vf27 */
uint F_0068b1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x68b1e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 0x8a);
}

/* ref: FUN_0068b210 */
byte F_0068b210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68b210u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  uint uVar1;
  float * pfVar2;
  float10 fVar3;
  
  fVar3 = (float10)REFG(double, 0x1088108);
  uVar1 = 0;
  pfVar2 = (float *)(param_1 + 4);
  do {
    if ((~param_2 & 1 << ((byte)uVar1 & 0x1f)) == 0) {
      if (!((float10)((float)GEN_TOF(((float10)pfVar2[1] *
                             (float10)((float)GEN_TOF(((float10)(float)((float10)param_3[6] +
                                                              (float10)param_3[2]) * fVar3))) +
                            ((float10)*pfVar2 *
                             (float10)((float)GEN_TOF(((float10)(float)((float10)param_3[5] +
                                                              (float10)param_3[1]) * fVar3))) +
                            (float10)pfVar2[-1] *
                            (float10)((float)GEN_TOF(((float10)(float)((float10)param_3[4] +
                                                             (float10)*param_3) * fVar3))))))) -
            (float10)pfVar2[2] <=
           (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(ABS((float10)pfVar2[1]))) *
                            (float10)((float)GEN_TOF(((float10)(float)((float10)param_3[6] -
                                                             (float10)param_3[2]) * fVar3))) +
                           ((float10)((float)GEN_TOF(ABS((float10)*pfVar2))) *
                            (float10)((float)GEN_TOF(((float10)(float)((float10)param_3[5] -
                                                             (float10)param_3[1]) * fVar3))) +
                           (float10)((float)GEN_TOF(ABS((float10)pfVar2[-1]))) *
                           (float10)((float)GEN_TOF(((float10)(float)((float10)param_3[4] - (float10)*param_3
                                                            ) * fVar3))))))))) {
        return 0;
      }
    }
    uVar1 = uVar1 + 1;
    pfVar2 = pfVar2 + 4;
  } while (uVar1 < 6);
  return 1;
}

/* ref: FUN_0068b380 */
unsigned int F_0068b380(void)
{
  GEN_ENTER(0x68b380u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b390 */
unsigned int F_0068b390(void)
{
  GEN_ENTER(0x68b390u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b3a0 */
unsigned int F_0068b3a0(void)
{
  GEN_ENTER(0x68b3a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b3b0 */
unsigned int F_0068b3b0(void)
{
  GEN_ENTER(0x68b3b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b3c0 */
uint F_0068b3c0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x68b3c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm0 = (float)gen_a1;
  float in_xmm1 = (float)gen_a2;
  float in_xmm2 = (float)gen_a3;
  float in_xmm3 = (float)gen_a4;
  float in_xmm5 = (float)gen_a5;
  float in_xmm7 = (float)gen_a6;
  uint param_8 = (uint)gen_a7;
  uint uVar1;
  
  uVar1 = F_00625bc0(*(undefined4 *)(in_ecx + 0x70),in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,
                       in_xmm7,param_8);
  return uVar1;
}

/* ref: FUN_0068b3d0 */
unsigned int F_0068b3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x78);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x78) = param_1;
  return 0;
}

/* ref: FUN_0068b400 */
uint F_0068b400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint in_EAX = 0;
  
  if (param_1 != (int *)0x0) {
    in_EAX = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x7c);
  if (piVar1 != (int *)0x0) {
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x7c) = param_1;
  return in_EAX;
}

/* ref: FUN_0068b430 */
unsigned int F_0068b430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x78);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x78) = param_1;
  return 0;
}

/* ref: FUN_0068b460 */
unsigned int F_0068b460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x7c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x7c) = param_1;
  return 0;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf6 */
unsigned int F_0068b490(void)
{
  GEN_ENTER(0x68b490u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b4a0 */
byte F_0068b4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = *(uint *)((int)this + 0x58c);
  if (uVar1 < *(uint *)((int)this + 0x14)) {
    uVar2 = 0;
    if (uVar1 != 0) {
      piVar3 = *(int * PTR32 *)((int)this + 0x588);
      do {
        if (*piVar3 == param_1) {
          return 1;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar2 < uVar1);
    }
    *((int *)GEN_TOP((*(int *)((int)this + 0x588) + uVar1 * 4))) = param_1;
    *(int *)((int)this + 0x58c) = *(int *)((int)this + 0x58c) + 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_0068b500 */
byte F_0068b500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar3 = *(uint *)((int)this + 0x58c);
  uVar5 = 0;
  uVar4 = uVar3;
  if (uVar3 != 0) {
    piVar6 = *(int * PTR32 *)((int)this + 0x588);
    do {
      uVar4 = uVar5;
      if (*piVar6 == param_1) break;
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 1;
      uVar4 = uVar3;
    } while (uVar5 < uVar3);
  }
  if (uVar4 < uVar3) {
    *(uint *)((int)this + 0x58c) = uVar3 - 1;
    if (uVar4 < uVar3 - 1) {
      do {
        iVar2 = uVar4 * 4;
        iVar1 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x588) + iVar1))) =
             *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x588) + 4 + iVar2)));
      } while (uVar4 < *(uint *)((int)this + 0x58c));
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x588) + *(int *)((int)this + 0x58c) * 4))) = 0;
    return 1;
  }
  return 0;
}

/* ref: FUN_0068b590 */
byte F_0068b590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (param_1 != 0) {
    bVar1 = F_0068b500(this,param_1);
    if (bVar1 != 0) {
      bVar1 = F_0068b4a0(this,param_1);
      return bVar1 != 0;
    }
  }
  return 0;
}

/* ref: FUN_0068b5d0 */
uint F_0068b5d0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x68b5d0u, gen_a0, 0u, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  *(undefined1 *)(param_1 + 0x1e5) = (undefined1)param_5;
  *(float *)(param_1 + 0x1e8) = param_2;
  *(undefined1 *)(param_1 + 0x1e6) = (undefined1)param_6;
  *(float *)(param_1 + 0x1ec) = param_3;
  F_00983ae0(param_1 + 0x70,param_4);
  return param_4;
}

/* ref: Client::Graphics::Scene::VfxObject::vf50 */
unsigned int F_0068b610(unsigned int gen_a0)
{
  GEN_ENTER(0x68b610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)(this + 0x234) != (undefined *)0x0) {
    F_009bc2a0(*(undefined * PTR32 *)(this + 0x234));
    return 0;
  }
  return 0;
}

/* ref: FUN_0068b620 */
unsigned int F_0068b620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68b620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  if (param_2 < 0x18) {
    *param_3 = 0;
    return 0;
  }
  *param_3 = *param_3 & 0x3000000;
  return 0;
}

/* ref: FUN_0068b640 */
uint F_0068b640(unsigned int gen_a0)
{
  GEN_ENTER(0x68b640u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  *(byte *)(param_1 + 0x1e4) = *(byte *)(param_1 + 0x1e4) & 0xef;
  return param_1;
}

/* ref: FUN_0068b650 */
unsigned int F_0068b650(void)
{
  GEN_ENTER(0x68b650u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::VfxObject::vf16 */
unsigned int F_0068b660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68b660u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = (undefined4 *)(in_ecx + 0x290);
  if (param_3 != 0x2d) {
    puVar2 = (undefined4 *)(in_ecx + 0x250);
  }
  puVar3 = param_2;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::VfxObject::vf17 */
uint F_0068b690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this,((undefined1 *)(gen_frame + 0x0)),param_1);
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar1 + 0x30;
}

/* ref: Client::Graphics::Scene::VfxObject::vf20 */
byte F_0068b6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_0068b6f0 */
uint F_0068b6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68b6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x234) != (undefined *)0x0) {
    uVar1 = F_009bc350(*(undefined * PTR32 *)((int)this + 0x234),param_1,param_2);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_0068b710 */
uint F_0068b710(unsigned int gen_a0)
{
  GEN_ENTER(0x68b710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x234) != (undefined *)0x0) {
    uVar1 = F_009bc2e0(*(undefined * PTR32 *)((int)this + 0x234));
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_0068b730 */
uint F_0068b730(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68b730u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint in_EAX = 0;
  
  *(byte *)(param_1 + 0x1e4) = *(byte *)(param_1 + 0x1e4) | 8;
  *(float *)(param_1 + 0x1f0) = param_2;
  *(undefined4 *)(param_1 + 500) = 0;
  if ((*(undefined * PTR32 *)(param_1 + 0x234) != (undefined *)0x0) && (param_2 <= 0.0)) {
    in_EAX = F_009bc2a0(*(undefined * PTR32 *)(param_1 + 0x234));
  }
  return in_EAX;
}

/* ref: FUN_0068b780 */
unsigned int F_0068b780(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x68b780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *(float *)(in_ecx + 0x1f8) = param_2;
  *(float *)(in_ecx + 0x1fc) = param_3;
  *(float *)(in_ecx + 0x200) = param_4;
  *(float *)(in_ecx + 0x204) = param_5;
  return 0;
}

/* ref: FUN_0068b7c0 */
unsigned int F_0068b7c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68b7c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x204) = param_2;
  return 0;
}

/* ref: FUN_0068b7e0 */
unsigned int F_0068b7e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68b7e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x228) = param_2;
  return 0;
}

/* ref: FUN_0068b800 */
uint F_0068b800(unsigned int gen_a0)
{
  GEN_ENTER(0x68b800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  float fVar2;
  uint in_EAX = 0;
  float fVar3;
  
  if ((*(byte *)((int)this + 0x1e4) & 1) != 0) {
    in_EAX = F_009bc070(*(undefined * PTR32 *)((int)this + 0x234),&(*(char *)(gen_frame + 0x1b)),&(*(undefined4 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0xc)),
                          &(*(float *)(gen_frame + 0x8)));
    fVar2 = REFG(float, 0x1087f04);
    fVar3 = *(float *)((int)this + 0x21c);
    if ((*(char *)(gen_frame + 0x1b)) == '\0') {
      if ((fVar3 <= 0.0) && (*(float *)((int)this + 0x218) <= 0.0)) {
        *(undefined4 *)((int)this + 0x208) = 0;
        fVar3 = fVar2;
      }
      else {
        *(undefined4 *)((int)this + 0x208) = *(undefined4 *)((int)this + 0x218);
      }
      *(float *)((int)this + 0x20c) = fVar3;
      fVar3 = *(float *)((int)this + 0x220);
      if ((fVar3 <= 0.0) && (*(float *)((int)this + 0x224) <= 0.0)) {
        fVar3 = *(float *)((int)this + 0x228);
        (*(float *)(gen_frame + 0x8)) = fVar3;
        fVar1 = (float10)*(double *)&REFG(undefined, 0x1094818);
        *(float *)((int)this + 0x214) = fVar3;
        *(float *)((int)this + 0x210) = (float)((float10)fVar3 * fVar1);
        return in_EAX;
      }
    }
    else {
      if ((fVar3 <= 0.0) && (*(float *)((int)this + 0x218) <= 0.0)) {
        *(undefined4 *)((int)this + 0x20c) = (*(undefined4 *)(gen_frame + 0x14));
        *(undefined4 *)((int)this + 0x208) = (*(undefined4 *)(gen_frame + 0x10));
      }
      else {
        *(float *)((int)this + 0x20c) = fVar3;
        *(undefined4 *)((int)this + 0x208) = *(undefined4 *)((int)this + 0x218);
      }
      fVar3 = *(float *)((int)this + 0x220);
      if ((fVar3 <= 0.0) && (*(float *)((int)this + 0x224) <= 0.0)) {
        *(undefined4 *)((int)this + 0x210) = (*(undefined4 *)(gen_frame + 0xc));
        *(float *)((int)this + 0x214) = (*(float *)(gen_frame + 0x8));
        return in_EAX;
      }
    }
    *(float *)((int)this + 0x210) = fVar3;
    *(undefined4 *)((int)this + 0x214) = *(undefined4 *)((int)this + 0x224);
  }
  return in_EAX;
}

/* ref: FUN_0068b950 */
unsigned int F_0068b950(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68b950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x22c) = param_2;
  return 0;
}

/* ref: FUN_0068b970 */
unsigned int F_0068b970(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68b970u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x230) = param_2;
  return 0;
}

/* ref: FUN_0068b9a0 */
uint F_0068b9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x68b9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 4) != 0) {
    F_0050c620(*(int *)((int)this + 4),0,0);
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar2 = 0;
  if (*(short *)this != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 4))) != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 4)));
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 4))) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)this);
  }
  if (*(int *)((int)this + 8) == 0) {
    *(undefined2 *)this = 0;
    return 0;
  }
  F_00406b30(*(int *)((int)this + 8));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)this = 0;
  return 0;
}

/* ref: FUN_0068ba30 */
uint F_0068ba30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68ba30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0xe094 + param_2 * 4);
}

/* ref: FUN_0068ba50 */
uint F_0068ba50(unsigned int gen_a0)
{
  GEN_ENTER(0x68ba50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 0xe09d);
}

/* ref: FUN_0068ba60 */
uint F_0068ba60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68ba60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xe0a0) + 4 + param_2 * 0xc)));
}

/* ref: FUN_0068ba80 */
uint F_0068ba80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68ba80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xe0a0) + 8 + param_1 * 0xc))) + param_2 * 4)));
}

/* ref: FUN_0068bad0 */
uint F_0068bad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bad0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x20) = *param_2;
  *(undefined4 *)(in_ecx + 0x24) = param_2[1];
  *(undefined4 *)(in_ecx + 0x28) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0068bb00 */
uint F_0068bb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bb00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((float10)*(float *)(param_1 + 4) < (float10)*(float *)(param_2 + 4)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0068bb20 */
unsigned int F_0068bb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68bb20u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)(param_3 * 0xe0c0 + 0x30 + in_ecx);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  return 0;
}

/* ref: FUN_0068bb50 */
uint F_0068bb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bb50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xe0c0 + 0x30 + in_ecx;
}

/* ref: FUN_0068bb70 */
uint F_0068bb70(unsigned int gen_a0)
{
  GEN_ENTER(0x68bb70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 8) * 0xe0c0 + 0x10 + in_ecx;
}

/* ref: FUN_0068bb80 */
uint F_0068bb80(unsigned int gen_a0)
{
  GEN_ENTER(0x68bb80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: FUN_0068bb90 */
uint F_0068bb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bb90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xe0c0 + 0x10 + in_ecx;
}

/* ref: FUN_0068bbb0 */
uint F_0068bbb0(float gen_a0)
{
  GEN_ENTER(0x68bbb0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint uVar1;
  
  if ((double)param_1 < *(double *)&REFG(undefined, 0x10ac2d0)) {
    return 0;
  }
  uVar1 = 1;
  if (!((double)param_1 < *(double *)&REFG(undefined, 0x10b2a60))) {
    uVar1 = 2;
  }
  return uVar1;
}

/* ref: FUN_0068bc00 */
uint F_0068bc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bc00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0xe0f0) = *param_2;
  *(undefined4 *)(in_ecx + 0xe0f4) = param_2[1];
  *(undefined4 *)(in_ecx + 0xe0f8) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::Graphics::Scene::Attach::vf4 */
unsigned int F_0068bc40(unsigned int gen_a0)
{
  GEN_ENTER(0x68bc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x38) != 0) {
    F_0065be20((undefined *)this);
    return 0;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::ResidentResourceManager::vf1 */
uint F_0068bc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x68bc50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 4))))
                    (this + 4,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Graphics::Scene::ResidentResourceManager::ResourceList::vf1 */
unsigned int F_0068bc70(void)
{
  GEN_ENTER(0x68bc70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068bd00 */
unsigned int F_0068bd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((iVar1 != 0) && (*(uint *)(iVar1 + 0x20) == param_1)) {
    *(uint *)(iVar1 + 0x20) =
         -(uint)(*(uint *)(param_1 + 0x1c) != param_1) & *(uint *)(param_1 + 0x1c);
  }
  *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x18))) = *(undefined4 *)(param_1 + 0x18);
  *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x18) + 0x1c))) = *(undefined4 *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x18) = param_1;
  *(uint *)(param_1 + 0x1c) = param_1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)((int)this + 0x20) == 0) {
    *(uint *)((int)this + 0x20) = param_1;
    *(uint *)(param_1 + 0x1c) = param_1;
    *(uint *)(param_1 + 0x18) = param_1;
    *(undefined * PTR32 *)(param_1 + 0x14) = this;
    return 0;
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x20) + 0x18))) + 0x1c))) = param_1;
  *(undefined4 *)(param_1 + 0x18) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x18)));
  *((uint *)GEN_TOP((*(int *)((int)this + 0x20) + 0x18))) = param_1;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)this + 0x20);
  *(undefined * PTR32 *)(param_1 + 0x14) = this;
  return 0;
}

/* ref: Client::Graphics::Scene::World::vf4 */
unsigned int F_0068bd80(unsigned int gen_a0)
{
  GEN_ENTER(0x68bd80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = *(int * PTR32 *)(this + 0x28);
  while (piVar2 != (int *)0x0) {
    if ((*(byte *)(piVar2 + 9) & 1) == 0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
      piVar2 = (int *)piVar2[10];
    }
    else {
      piVar1 = (int *)piVar2[10];
      uVar3 = piVar2[9] & 0xfffffffc;
      piVar2[9] = piVar2[9] & 3;
      piVar2[10] = 0;
      if (uVar3 != 0) {
        *(int * PTR32 *)(uVar3 + 0x28) = piVar1;
      }
      piVar2 = piVar1;
      if (piVar1 != (int *)0x0) {
        piVar1[9] = piVar1[9] & 3U | uVar3;
      }
    }
  }
  return 0;
}

/* ref: Client::Graphics::Scene::World::vf5 */
unsigned int F_0068bdd0(unsigned int gen_a0)
{
  GEN_ENTER(0x68bdd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  for (piVar1 = *(int * PTR32 *)(this + 0x28); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[10]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  }
  return 0;
}

/* ref: FUN_0068bdf0 */
uint F_0068bdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68bdf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined4 * puVar1;
  float * pfVar2;
  int iVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  (*(float * PTR32 *)(gen_frame + 0x18)) = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_2;
  puVar1 = (undefined4 *)F_004f11a0(((undefined1 *)(gen_frame + 0x40)),(int)this + 0x80,*(int *)((int)this + 0xc0) + 0x50);
  puVar4 = ((undefined4 *)(gen_frame + 0x80));
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  F_004f2ec0(((undefined4 *)(gen_frame + 0x80)));
  puVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x20)) = *(*(undefined4 * PTR32 *)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[1];
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  F_004ee790(&(*(float *)(gen_frame + 0x0)),(uint)&(*(undefined4 *)(gen_frame + 0x20)),(uint)((undefined4 *)(gen_frame + 0x80)));
  (*(undefined4 *)(gen_frame + 0x20)) = *puVar1;
  (*(undefined4 *)(gen_frame + 0x24)) = puVar1[1];
  (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1087f04);
  F_004ee790(&(*(float *)(gen_frame + 0x30)),(uint)&(*(undefined4 *)(gen_frame + 0x20)),(uint)((undefined4 *)(gen_frame + 0x80)));
  (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x4)));
  (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x8)));
  F_004bd580(&(*(float *)(gen_frame + 0x30)));
  pfVar2 = (*(float * PTR32 *)(gen_frame + 0x18));
  *(*(float * PTR32 *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x0));
  (*(float * PTR32 *)(gen_frame + 0x18))[1] = (*(float *)(gen_frame + 0x4));
  (*(float * PTR32 *)(gen_frame + 0x18))[2] = (*(float *)(gen_frame + 0x8));
  (*(float * PTR32 *)(gen_frame + 0x18))[4] = (*(float *)(gen_frame + 0x30));
  (*(float * PTR32 *)(gen_frame + 0x18))[5] = (*(float *)(gen_frame + 0x34));
  (*(float * PTR32 *)(gen_frame + 0x18))[6] = (*(float *)(gen_frame + 0x38));
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return (uint)pfVar2;
}

/* ref: FUN_0068bf80 */
unsigned int F_0068bf80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bf80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  (*(float *)(gen_frame + 0x1c)) = *(float *)((int)this + 0x78);
  (*(float *)(gen_frame + 0x18)) = *(float *)((int)this + 0x74);
  fVar1 = (float10)*(float *)((int)this + 0x78);
  fVar2 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 100) -
                          (float10)*(float *)((int)this + 0x34))));
  fVar3 = (float10)*(float *)((int)this + 0x74);
  fVar4 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x68) -
                          (float10)*(float *)((int)this + 0x38))));
  (*(float *)(gen_frame + 0x0)) = (float)(fVar2 * fVar1 - fVar4 * fVar3);
  (*(float *)(gen_frame + 0x18)) = *(float *)((int)this + 0x70);
  fVar5 = (float10)*(float *)((int)this + 0x70);
  fVar6 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x60) -
                          (float10)*(float *)((int)this + 0x30))));
  (*(float *)(gen_frame + 0x4)) = (float)(fVar5 * fVar4 - fVar6 * fVar1);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar3 * fVar6 - fVar2 * fVar5);
  F_0046f390(&(*(float *)(gen_frame + 0x0)));
  param_1[1] = (*(float *)(gen_frame + 0x4));
  *param_1 = (*(float *)(gen_frame + 0x0));
  param_1[2] = (*(float *)(gen_frame + 0x8));
  return 0;
}

/* ref: FUN_0068c030 */
uint F_0068c030(unsigned int gen_a0)
{
  GEN_ENTER(0x68c030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a74));
  F_004d6630((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2b20));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10b2b08));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  return (uint)this;
}

/* ref: FUN_0068c0b0 */
unsigned int F_0068c0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x68c0b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x58) != 0) {
    *(undefined4 *)((int)this + 0x3c) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 4))))(*(int * PTR32 *)((int)this + 0x58));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x58);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  if (*(int *)((int)this + 0x5c) != 0) {
    *(undefined4 *)((int)this + 0x40) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x5c) + 4))))(*(int * PTR32 *)((int)this + 0x5c));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x5c);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  if (*(int *)((int)this + 0x60) != 0) {
    *(undefined4 *)((int)this + 0x44) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x60) + 4))))(*(int * PTR32 *)((int)this + 0x60));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x60);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  if (*(int *)((int)this + 100) != 0) {
    *(undefined4 *)((int)this + 0x48) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 100) + 4))))(*(int * PTR32 *)((int)this + 100));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 100);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  if (*(int *)((int)this + 0x68) != 0) {
    *(undefined4 *)((int)this + 0x4c) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x68) + 4))))(*(int * PTR32 *)((int)this + 0x68));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x68);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  if (*(int *)((int)this + 0x6c) != 0) {
    *(undefined4 *)((int)this + 0x50) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x6c) + 4))))(*(int * PTR32 *)((int)this + 0x6c));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x6c);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  if (*(int *)((int)this + 0x70) != 0) {
    *(undefined4 *)((int)this + 0x54) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x70) + 4))))(*(int * PTR32 *)((int)this + 0x70));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x70);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  return 0;
}

/* ref: FUN_0068c1a0 */
uint F_0068c1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x68c1a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  int in_ecx;
  float * pfVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  float * pfVar5;
  undefined4 * puVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float in_XMM1_Da = 0;
  float fVar10;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM5_Da = 0;
  float in_XMM6_Da = 0;
  float in_XMM7_Da = 0;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  uVar3 = *(uint *)((int)this + 0x30);
  if (*(int *)((int)this + uVar3 * 4 + 0x34) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + uVar3 * 4 + 0x34) + 0x10))))
              (*(undefined4 *)((int)this + uVar3 * 4 + 0x34));
    in_ecx = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x30) * 4 + 0x34))) + 0xc0)));
    pfVar1 = (float *)F_004f45d0(((undefined4 *)(gen_frame + 0x40)),in_ecx + 0x10);
    pfVar5 = ((float *)(gen_frame + 0xc0));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = *pfVar1;
      pfVar1 = pfVar1 + 1;
      pfVar5 = pfVar5 + 1;
    }
    fVar7 = (float10)*(float *)((int)this + 0x18);
    fVar8 = (float10)*(float *)((int)this + 0x14);
    fVar9 = (float10)*(float *)((int)this + 0x10);
    (*(float *)(gen_frame + 0xf0)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf0)) +
                      (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar9 * (float10)((float *)(gen_frame + 0xc0))[0
                                                  ]) + (float10)(float)(fVar8 * (float10)(*(float *)(gen_frame + 0xd0))))))
                                      + (float10)(float)(fVar7 * (float10)(*(float *)(gen_frame + 0xe0)))))))));
    (*(float *)(gen_frame + 0xf4)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf4)) +
                      (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)((float *)(gen_frame + 0xc0))[1] *
                                                                        fVar9) +
                                                       (float10)(float)((float10)(*(float *)(gen_frame + 0xd4)) * fVar8))))
                                      + (float10)(float)((float10)(*(float *)(gen_frame + 0xe4)) * fVar7)))))));
    (*(float *)(gen_frame + 0xf8)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf8)) +
                      (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar9 * (float10)((float *)(gen_frame + 0xc0))[2
                                                  ]) + (float10)(float)(fVar8 * (float10)(*(float *)(gen_frame + 0xd8))))))
                                      + (float10)(float)(fVar7 * (float10)(*(float *)(gen_frame + 0xe8)))))))));
    fVar10 = *(float *)((int)this + 0x28);
    fVar7 = F_00c4cde0(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)fVar10);
    fVar8 = F_00c4ca20(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)fVar10);
    (*(float *)(gen_frame + 0x80)) = (float)fVar8;
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    (*(float *)(gen_frame + 0x84)) = (float)fVar7;
    (*(undefined4 *)(gen_frame + 0x98)) = 0;
    (*(undefined4 *)(gen_frame + 0xa0)) = 0;
    (*(float *)(gen_frame + 0x90)) = ((float)GEN_TOF(-(float10)(float)fVar7));
    (*(undefined4 *)(gen_frame + 0xa4)) = 0;
    (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x94)) = (float)fVar8;
    (*(undefined4 *)(gen_frame + 0xb0)) = 0;
    (*(undefined4 *)(gen_frame + 0xb4)) = 0;
    (*(undefined4 *)(gen_frame + 0xb8)) = 0;
    fVar10 = REFG(float, 0x1087f04);
    F_0065ec40(&(*(float *)(gen_frame + 0x80)),REFG(float, 0x1087f04),in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,
                 *(float *)((int)this + 0x20));
    F_0065ed60(&(*(float *)(gen_frame + 0x80)),fVar10,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,*(float *)((int)this + 0x24));
    pfVar1 = (float *)F_004ef350(((undefined4 *)(gen_frame + 0x40)),(uint)&(*(float *)(gen_frame + 0x80)),(uint)((float *)(gen_frame + 0xc0)));
    pfVar5 = ((float *)(gen_frame + 0xc0));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = *pfVar1;
      pfVar1 = pfVar1 + 1;
      pfVar5 = pfVar5 + 1;
    }
    puVar2 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x0)),((float *)(gen_frame + 0xc0)));
    puVar6 = ((undefined4 *)(gen_frame + 0x40));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar3 = F_00621fc0(in_ecx,in_XMM3_Da,in_XMM5_Da,in_XMM6_Da,((undefined4 *)(gen_frame + 0x40)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return uVar3;
}

/* ref: Client::Graphics::Scene::DrawObject::vf17 */
uint F_0068c480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68c480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return in_ecx + 0x30;
}

/* ref: Client::Graphics::Scene::DrawObject::vf18 */
uint F_0068c490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68c490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::DrawObject::vf21 */
unsigned int F_0068c4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68c4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302df0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302df4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302df8));
  param_1[4] = REFG(undefined4, 0x1302e00);
  param_1[5] = REFG(undefined4, 0x1302e04);
  param_1[6] = REFG(undefined4, 0x1302e08);
  param_1[7] = REFG(undefined4, 0x1302e0c);
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x1302e10));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x1302e14));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x1302e18));
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf22 */
unsigned int F_0068c540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68c540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302df0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302df4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302df8));
  param_1[4] = REFG(undefined4, 0x1302e00);
  param_1[5] = REFG(undefined4, 0x1302e04);
  param_1[6] = REFG(undefined4, 0x1302e08);
  param_1[7] = REFG(undefined4, 0x1302e0c);
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x1302e10));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x1302e14));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x1302e18));
  return 0;
}

/* ref: FUN_0068c5c0 */
byte F_0068c5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68c5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b14060(REFG(undefined4, 0x1370c1c),param_1);
  *(uint *)((int)this + 0x60) = uVar1;
  if (uVar1 == 0) {
    return 0;
  }
  *(undefined * PTR32 *)(uVar1 + 4) = this;
  return 1;
}

/* ref: FUN_0068c5f0 */
unsigned int F_0068c5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x68c5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x60) != 0) {
    F_00b14100(REFG(undefined4, 0x1370c1c),*(int *)((int)this + 0x60));
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  return 0;
}

/* ref: FUN_0068c610 */
uint F_0068c610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68c610u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x140];
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
  float fVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  uVar21 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x130);
  (*(uint *)(gen_frame + 0x12c)) = uVar21;
  fVar1 = param_2[0x10];
  fVar2 = param_2[0x11];
  fVar3 = param_2[0x12];
  fVar4 = param_2[0x13];
  fVar5 = param_2[0xc];
  fVar6 = param_2[0xd];
  fVar7 = param_2[0xe];
  fVar8 = param_2[0xf];
  ((float *)(gen_frame + 0xa0))[0] = fVar1 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[1] = fVar2 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[2] = fVar3 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[3] = fVar4 * 0.0;
  ((float *)(gen_frame + 0xa0))[4] = fVar1 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[5] = fVar2 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[6] = fVar3 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[7] = fVar4 * 0.0;
  ((float *)(gen_frame + 0xa0))[8] = fVar1 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[9] = fVar2 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[10] = fVar3 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[0xb] = fVar4 * 0.0;
  ((float *)(gen_frame + 0xa0))[0xc] = fVar1 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0xd] = fVar2 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0xe] = fVar3 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[0xf] = fVar4 * 0.0;
  ((float *)(gen_frame + 0xa0))[0x10] = fVar1 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[0x11] = fVar2 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[0x12] = fVar3 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0x13] = fVar4 * 0.0;
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar11 = param_2[2];
  fVar12 = param_2[3];
  fVar13 = param_2[4];
  fVar14 = param_2[5];
  fVar15 = param_2[6];
  fVar16 = param_2[7];
  ((float *)(gen_frame + 0xa0))[0x14] = fVar1 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0x15] = fVar2 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[0x16] = fVar3 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0x17] = fVar4 * 0.0;
  fVar17 = param_2[8];
  fVar18 = param_2[9];
  fVar19 = param_2[10];
  fVar20 = param_2[0xb];
  ((float *)(gen_frame + 0xa0))[0x18] = fVar1 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[0x19] = fVar2 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0x1a] = fVar3 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0x1b] = fVar4 * 0.0;
  ((float *)(gen_frame + 0xa0))[0x1c] = fVar1;
  ((float *)(gen_frame + 0xa0))[0x1d] = fVar2;
  ((float *)(gen_frame + 0xa0))[0x1e] = fVar3;
  ((float *)(gen_frame + 0xa0))[0x1f] = fVar4;
  uVar22 = 0;
  do {
    fVar1 = *(float *)((int)((float *)(gen_frame + 0xa0)) + uVar22 + 8);
    fVar2 = *(float *)((int)((float *)(gen_frame + 0xa0)) + uVar22 + 4);
    fVar3 = *(float *)((int)((float *)(gen_frame + 0xa0)) + uVar22);
    *(float *)(((undefined1 *)(gen_frame + 0x20)) + uVar22) = ((fVar1 * fVar17 + fVar5) + fVar2 * fVar13) + fVar3 * fVar9;
    *(float *)(((undefined1 *)(gen_frame + 0x20)) + uVar22 + 4) =
         ((fVar1 * fVar18 + fVar6) + fVar2 * fVar14) + fVar3 * fVar10;
    *(float *)(((undefined1 *)(gen_frame + 0x20)) + uVar22 + 8) =
         ((fVar1 * fVar19 + fVar7) + fVar2 * fVar15) + fVar3 * fVar11;
    *(float *)(((undefined1 *)(gen_frame + 0x20)) + uVar22 + 0xc) =
         ((fVar1 * fVar20 + fVar8) + fVar2 * fVar16) + fVar3 * fVar12;
    uVar22 = uVar22 + 0x10;
  } while (uVar22 < 0x80);
  gen_maxps(&(auVar23), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0x20))), ((undefined1 *)(gen_frame + 0x30)));
  gen_maxps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x40)));
  gen_maxps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x50)));
  gen_minps(&(auVar24), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0x20))), ((undefined1 *)(gen_frame + 0x30)));
  gen_maxps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x60)));
  gen_minps(&(auVar24), &(auVar24), ((undefined1 *)(gen_frame + 0x40)));
  gen_maxps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x70)));
  gen_minps(&(auVar24), &(auVar24), ((undefined1 *)(gen_frame + 0x50)));
  gen_maxps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x80)));
  gen_minps(&(auVar24), &(auVar24), ((undefined1 *)(gen_frame + 0x60)));
  gen_maxps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x90)));
  gen_minps(&(auVar24), &(auVar24), ((undefined1 *)(gen_frame + 0x70)));
  gen_minps(&(auVar24), &(auVar24), ((undefined1 *)(gen_frame + 0x80)));
  gen_minps(&(auVar24), &(auVar24), ((undefined1 *)(gen_frame + 0x90)));
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)((char *)&auVar24 + 0));
  *param_1 = (*(undefined4 *)(gen_frame + 0x10));
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)((char *)&auVar24 + 4));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x14));
  (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)((char *)&auVar24 + 8));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x18));
  (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)((char *)&auVar23 + 0));
  param_1[4] = (*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)((char *)&auVar23 + 4));
  param_1[5] = (*(undefined4 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)((char *)&auVar23 + 8));
  param_1[6] = (*(undefined4 *)(gen_frame + 0x8));
  F_00c47745(uVar21 ^ (uint)(uint)(gen_frame + 0x130));
  return uVar22;
}

/* ref: FUN_0068c8e0 */
uint F_0068c8e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68c8e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float * pfVar1;
  uint uVar2;
  
  pfVar1 = (float *)F_004d9920(*(undefined * PTR32 *)(param_1 + 0xa8),0,0x10,2);
  uVar2 = 0;
  if (pfVar1 != (float *)0x0) {
    *pfVar1 = (float)((float10)param_2 + (float10)REFG(double, 0x1088130));
    uVar2 = *(uint *)(param_1 + 0xa8);
    *(undefined4 *)(uVar2 + 0x24) = 0;
  }
  *(float *)(param_1 + 0xe0) = param_2;
  return uVar2;
}

/* ref: FUN_0068c930 */
uint F_0068c930(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68c930u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_004d9920(*(undefined * PTR32 *)(param_1 + 0xa8),0,0x10,2);
  uVar2 = 0;
  if (uVar1 != 0) {
    *(float *)(uVar1 + 4) = (float)((float10)param_2 + (float10)REFG(double, 0x1088130));
    uVar2 = *(uint *)(param_1 + 0xa8);
    *(undefined4 *)(uVar2 + 0x24) = 0;
  }
  *(float *)(param_1 + 0xe4) = param_2;
  return uVar2;
}

/* ref: FUN_0068c980 */
ushort F_0068c980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68c980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  
  uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_2,param_3);
  *param_1 = uVar1;
  return uVar1;
}

/* ref: FUN_0068c9a0 */
ushort F_0068c9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68c9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  
  uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 0xc),param_2,param_3);
  *param_1 = uVar1;
  return uVar1;
}

/* ref: FUN_0068c9c0 */
ushort F_0068c9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68c9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if ((ushort)param_1 == 0x65) {
    return 0x65;
  }
  uVar2 = (uint)(ushort)param_1;
  if (4 < param_2) {
    uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 0xc),param_3 & 0xffff,uVar2);
    if (param_2 == 5) {
      bVar4 = (uVar1 & 2) == 0;
LAB_0068cb36: ;
      if (!bVar4) {
        return (ushort)param_1;
      }
    }
    else {
      if (param_2 == 6) {
        bVar4 = (uVar1 & 8) == 0;
        goto LAB_0068cb36;
      }
      if (param_2 == 7) {
        bVar4 = (uVar1 & 0x20) == 0;
        goto LAB_0068cb36;
      }
      if (param_2 == 8) {
        bVar4 = (uVar1 & 0x80) == 0;
        goto LAB_0068cb36;
      }
      if ((param_2 == 9) && ((uVar1 & 0x200) != 0)) {
        return (ushort)param_1;
      }
    }
    if ((uVar2 / 100 & 1) != 0) {
      return 0x65;
    }
    if ((ushort)param_1 == 0xc9) {
      return 0x65;
    }
    uVar3 = 0xc9;
    if ((ushort)param_1 == 0x4b1) {
      uVar3 = 0x44d;
    }
    uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 0xc),param_3 & 0xffff,uVar3);
    if (param_2 == 5) goto LAB_0068ca60;
    if (param_2 == 6) goto LAB_0068cac8;
    if (param_2 == 7) goto LAB_0068cae4;
    if (param_2 != 8) {
      bVar4 = param_2 == 9;
      goto LAB_0068cba9;
    }
    goto LAB_0068cb00;
  }
  uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_3 & 0xffff,uVar2);
  if (param_2 == 0) {
    bVar4 = (uVar1 & 2) == 0;
LAB_0068ca08: ;
    if (!bVar4) {
      return (ushort)param_1;
    }
  }
  else {
    if (param_2 == 1) {
      bVar4 = (uVar1 & 8) == 0;
      goto LAB_0068ca08;
    }
    if (param_2 == 2) {
      bVar4 = (uVar1 & 0x20) == 0;
      goto LAB_0068ca08;
    }
    if (param_2 == 3) {
      bVar4 = (uVar1 & 0x80) == 0;
      goto LAB_0068ca08;
    }
    if ((param_2 == 4) && ((uVar1 & 0x200) != 0)) {
      return (ushort)param_1;
    }
  }
  if ((uVar2 / 100 & 1) != 0) {
    return 0x65;
  }
  if ((ushort)param_1 == 0xc9) {
    return 0x65;
  }
  uVar3 = 0xc9;
  if ((ushort)param_1 == 0x4b1) {
    uVar3 = 0x44d;
  }
  uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_3 & 0xffff,uVar3);
  if (param_2 == 0) {
LAB_0068ca60: ;
    if ((uVar1 & 2) != 0) {
      return (ushort)uVar3;
    }
    return 0x65;
  }
  if (param_2 == 1) {
LAB_0068cac8: ;
    if ((uVar1 & 8) != 0) {
      return (ushort)uVar3;
    }
    return 0x65;
  }
  if (param_2 == 2) {
LAB_0068cae4: ;
    if ((uVar1 & 0x20) != 0) {
      return (ushort)uVar3;
    }
    return 0x65;
  }
  if (param_2 != 3) {
    bVar4 = param_2 == 4;
LAB_0068cba9: ;
    if (!bVar4) {
      return 0x65;
    }
    if ((uVar1 & 0x200) != 0) {
      return (ushort)uVar3;
    }
    return 0x65;
  }
LAB_0068cb00: ;
  if ((uVar1 & 0x80) != 0) {
    return (ushort)uVar3;
  }
  return 0x65;
}

/* ref: FUN_0068cc20 */
ushort F_0068cc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68cc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  ushort local_8;
  
  local_8 = 0x65;
  if (4 < param_2) {
    return 0x65;
  }
  uVar2 = (uint)(ushort)param_1;
  uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_3 & 0xffff,uVar2);
  if (param_2 == 0) {
    bVar3 = (uVar1 & 2) == 0;
  }
  else if (param_2 == 1) {
    bVar3 = (uVar1 & 8) == 0;
  }
  else if (param_2 == 2) {
    bVar3 = (uVar1 & 0x20) == 0;
  }
  else {
    if (param_2 != 3) {
      if ((param_2 == 4) && ((uVar1 & 0x200) != 0)) {
        return (ushort)param_1;
      }
      goto LAB_0068cc5d;
    }
    bVar3 = (uVar1 & 0x80) == 0;
  }
  if (!bVar3) {
    return (ushort)param_1;
  }
LAB_0068cc5d: ;
  if ((ushort)param_1 != 0xc9) {
    param_1 = 0x68;
    if (uVar2 == 0x388) {
      param_1 = 0x385;
    }
    else if ((uVar2 == 0x450) || (uVar2 == 0x4b4)) {
      param_1 = 0x44d;
    }
    uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_3 & 0xffff,param_1);
    if (param_2 == 0) {
      bVar3 = (uVar1 & 2) == 0;
    }
    else if (param_2 == 1) {
      bVar3 = (uVar1 & 8) == 0;
    }
    else if (param_2 == 2) {
      bVar3 = (uVar1 & 0x20) == 0;
    }
    else if (param_2 == 3) {
      bVar3 = (uVar1 & 0x80) == 0;
    }
    else {
      if (param_2 != 4) {
        return 0x65;
      }
      bVar3 = (uVar1 & 0x200) == 0;
    }
    if (!bVar3) {
      local_8 = (ushort)param_1;
    }
  }
  return local_8;
}

/* ref: FUN_0068cd40 */
ushort F_0068cd40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68cd40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  bool bVar2;
  ushort local_8;
  
  local_8 = 0x65;
  if (4 < param_2) {
    return 0x65;
  }
  uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_3 & 0xffff,(uint)(ushort)param_1);
  if (param_2 == 0) {
    bVar2 = (uVar1 & 2) == 0;
  }
  else if (param_2 == 1) {
    bVar2 = (uVar1 & 8) == 0;
  }
  else if (param_2 == 2) {
    bVar2 = (uVar1 & 0x20) == 0;
  }
  else {
    if (param_2 != 3) {
      if ((param_2 == 4) && ((uVar1 & 0x200) != 0)) {
        return (ushort)param_1;
      }
      goto LAB_0068cd7d;
    }
    bVar2 = (uVar1 & 0x80) == 0;
  }
  if (!bVar2) {
    return (ushort)param_1;
  }
LAB_0068cd7d: ;
  if ((((ushort)param_1 / 100 & 1) == 0) && ((ushort)param_1 != 0xc9)) {
    uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_3 & 0xffff,0xc9);
    if (param_2 == 0) {
      bVar2 = (uVar1 & 2) == 0;
    }
    else if (param_2 == 1) {
      bVar2 = (uVar1 & 8) == 0;
    }
    else if (param_2 == 2) {
      bVar2 = (uVar1 & 0x20) == 0;
    }
    else if (param_2 == 3) {
      bVar2 = (uVar1 & 0x80) == 0;
    }
    else {
      if (param_2 != 4) {
        return 0x65;
      }
      bVar2 = (uVar1 & 0x200) == 0;
    }
    if (!bVar2) {
      local_8 = 0xc9;
    }
  }
  return local_8;
}

/* ref: FUN_0068ce50 */
uint F_0068ce50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68ce50u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_2;
  uVar4 = 0;
  iVar1 = *param_1;
  if (uVar3 != 0) {
    do {
      iVar2 = *(int *)(iVar1 + uVar4 * 4);
      if (iVar2 != 0) {
        F_0050c620(iVar2,0,0);
        *(undefined4 *)(iVar1 + uVar4 * 4) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (*param_1 != 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*param_1);
    *param_1 = 0;
    *param_2 = 0;
    return uVar3;
  }
  *param_2 = 0;
  return (uint)param_2;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf12 */
unsigned int F_0068ced0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68ced0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(in_ecx + 0x30);
  fVar2 = *(float *)(in_ecx + 0x150);
  fVar3 = *(float *)(in_ecx + 0x34);
  fVar4 = *(float *)(in_ecx + 0x154);
  fVar5 = *(float *)(in_ecx + 0x38);
  fVar6 = *(float *)(in_ecx + 0x158);
  fVar7 = *(float *)(in_ecx + 0x144);
  fVar8 = *(float *)(in_ecx + 0x148);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x140) + (float10)fVar1)));
  param_2[1] = (float)((float10)fVar3 + (float10)fVar7);
  param_2[2] = (float)((float10)fVar5 + (float10)fVar8);
  param_2[4] = (float)((float10)fVar1 + (float10)fVar2);
  param_2[5] = (float)((float10)fVar3 + (float10)fVar4);
  param_2[6] = (float)((float10)fVar5 + (float10)fVar6);
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf15 */
uint F_0068cf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68cf90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  
  uVar3 = F_005ff5c0(param_1,this + 0x120);
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  iVar1 = *(int *)(this + 0x7c);
  uVar2 = *(uint *)(this + 0x74);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(iVar1 + uVar4 * 4);
      if ((this_00 != (undefined *)0x0) && (uVar3 = F_00655030(this_00,param_1), (char)uVar3 != '\0'))
      {
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return uVar3 & 0xffffff00;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf14 */
uint F_0068cff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68cff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  
  uVar3 = F_005ff5c0(param_1,this + 0x120);
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  iVar1 = *(int *)(this + 0x7c);
  uVar2 = *(uint *)(this + 0x74);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(iVar1 + uVar4 * 4);
      if ((this_00 != (undefined *)0x0) &&
         (uVar3 = F_00655230(this_00,param_1,param_2), (char)uVar3 != '\0')) {
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return uVar3 & 0xffffff00;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf21 */
uint F_0068d050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68d050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) {
    uVar1 = F_0064d240(*(undefined * PTR32 *)(this + 0x78),param_1,param_2);
    return uVar1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302df0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302df4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302df8));
  param_1[4] = REFG(undefined4, 0x1302e00);
  param_1[5] = REFG(undefined4, 0x1302e04);
  param_1[6] = REFG(undefined4, 0x1302e08);
  param_1[7] = REFG(undefined4, 0x1302e0c);
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x1302e10));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x1302e14));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x1302e18));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf22 */
uint F_0068d0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68d0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) {
    uVar1 = F_0064cf40(*(undefined * PTR32 *)(this + 0x78),param_1,param_2);
    return uVar1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302df0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302df4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302df8));
  param_1[4] = REFG(undefined4, 0x1302e00);
  param_1[5] = REFG(undefined4, 0x1302e04);
  param_1[6] = REFG(undefined4, 0x1302e08);
  param_1[7] = REFG(undefined4, 0x1302e0c);
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x1302e10));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x1302e14));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x1302e18));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf17 */
uint F_0068d170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68d170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x78) == (undefined *)0x0) {
    return (uint)(this + 0x30);
  }
  uVar1 = F_00655980(*(undefined * PTR32 *)(this + 0x78),param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf19 */
uint F_0068d190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68d190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  float fVar1;
  float fVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  float * pfVar5;
  int iVar6;
  float * pfVar7;
  float * pfVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  (*(float * PTR32 *)(gen_frame + 0xc)) = param_1;
  if (*(int *)(this + 0x78) == 0) {
    pfVar7 = (float *)&REFG(float, 0x1302d00);
  }
  else {
    if (param_2 != 0x3d) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this,param_1,param_2);
      pfVar5 = (*(float * PTR32 *)(gen_frame + 0xc));
      goto LAB_0068d70f;
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x1d);
    if ((char)uVar3 == '\0') {
      if (*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) {
        uVar3 = F_00623160(*(undefined * PTR32 *)(this + 0x78),"n_hara");
        if ((short)uVar3 != -1) {
          uVar3 = F_0054e1a0(this,((undefined1 *)(gen_frame + 0x80)),uVar3 & 0xffff);
          goto LAB_0068d292;
        }
      }
      (*(float *)(gen_frame + 0x20)) = *param_3;
      (*(float *)(gen_frame + 0x24)) = param_3[1];
      (*(float *)(gen_frame + 0x28)) = param_3[2];
      (*(float *)(gen_frame + 0x30)) = *(float *)(this + 0x120);
      (*(float *)(gen_frame + 0x34)) = *(float *)(this + 0x124);
      fVar12 = *(float *)(this + 0x128);
    }
    else {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this,((undefined1 *)(gen_frame + 0x80)),0x1d);
LAB_0068d292: ;
      (*(float *)(gen_frame + 0x20)) = *param_3;
      (*(float *)(gen_frame + 0x24)) = param_3[1];
      (*(float *)(gen_frame + 0x28)) = param_3[2];
      (*(float *)(gen_frame + 0x30)) = *(float *)(uVar3 + 0x30);
      (*(float *)(gen_frame + 0x34)) = *(float *)(uVar3 + 0x34);
      fVar12 = *(float *)(uVar3 + 0x38);
    }
    iVar6 = *(int *)(this + 0x7c);
    (*(float *)(gen_frame + 0x38)) = fVar12;
    uVar3 = 0;
    (*(float *)(gen_frame + 0x48)) = gen_bits2f(*(uint *)(this + 0x74));
    (*(float *)(gen_frame + 0x4c)) = REFG(float, 0x1090998);
    (*(char *)(gen_frame + 0x7f)) = '\0';
    if (*(uint *)(this + 0x74) == 0) {
LAB_0068d375: ;
      (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x30));
      (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x34));
      (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x38));
    }
    else {
      do {
        this_00 = *(undefined * PTR32 *)(iVar6 + uVar3 * 4);
        if (this_00 != (undefined *)0x0) {
          uVar4 = F_00655450(this_00,&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x8)));
          if ((char)uVar4 != '\0') {
            pfVar7 = &(*(float *)(gen_frame + 0x4c));
            if (!((float10)(*(float *)(gen_frame + 0x4c)) < (float10)(*(float *)(gen_frame + 0x8)))) {
              pfVar7 = &(*(float *)(gen_frame + 0x8));
            }
            (*(float *)(gen_frame + 0x4c)) = *pfVar7;
            (*(char *)(gen_frame + 0x7f)) = '\x01';
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)gen_fl2bits((*(float *)(gen_frame + 0x48))));
      if ((*(char *)(gen_frame + 0x7f)) == '\0') goto LAB_0068d375;
      fVar12 = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x20)));
      (*(float *)(gen_frame + 0x50)) = fVar12;
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x24)));
      (*(float *)(gen_frame + 0x54)) = fVar2;
      fVar1 = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x28)));
      (*(float *)(gen_frame + 0x58)) = fVar1;
      fVar9 = (float10)(*(float *)(gen_frame + 0x4c));
      fVar12 = (float)(fVar9 * (float10)fVar12);
      (*(float *)(gen_frame + 0x60)) = fVar12;
      fVar2 = (float)((float10)fVar2 * fVar9);
      (*(float *)(gen_frame + 0x64)) = fVar2;
      fVar1 = (float)(fVar9 * (float10)fVar1);
      (*(float *)(gen_frame + 0x68)) = fVar1;
      fVar12 = (float)((float10)fVar12 + (float10)(*(float *)(gen_frame + 0x20)));
      (*(float *)(gen_frame + 0x50)) = fVar12;
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x24)) + (float10)fVar2);
      (*(float *)(gen_frame + 0x54)) = fVar2;
      fVar1 = (float)((float10)(*(float *)(gen_frame + 0x28)) + (float10)fVar1);
      (*(float *)(gen_frame + 0x58)) = fVar1;
      (*(float *)(gen_frame + 0x60)) = fVar12;
      (*(float *)(gen_frame + 0x64)) = fVar2;
      (*(float *)(gen_frame + 0x68)) = fVar1;
    }
    (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x60)) - (float10)(*(float *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x64)) - (float10)(*(float *)(gen_frame + 0x34)));
    (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x68)) - (float10)(*(float *)(gen_frame + 0x38)));
    (*(float *)(gen_frame + 0x50)) = (float)((float10)(*(float *)(gen_frame + 0x60)) - (float10)(*(float *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x64)) - (float10)(*(float *)(gen_frame + 0x34)));
    (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x68)) - (float10)(*(float *)(gen_frame + 0x38)));
    if ((char)param_4 != '\0') {
      (*(float *)(gen_frame + 0x54)) = 0.0;
    }
    F_0046f390(&(*(float *)(gen_frame + 0x50)));
    fVar9 = (float10)(*(float *)(gen_frame + 0x50));
    fVar10 = (float10)(*(float *)(gen_frame + 0x54));
    fVar11 = (float10)(*(float *)(gen_frame + 0x58));
    fVar12 = ((float)GEN_TOF(((fVar10 * fVar10 + fVar9 * fVar9) + fVar11 * fVar11)));
    (*(float *)(gen_frame + 0x48)) = fVar12;
    if ((float10)fVar12 < (float10)REFG(float, 0x10905c4)) {
      (*(float *)(gen_frame + 0xc0)) = REFG(float, 0x1302c60);
      fVar9 = (float10)0;
      (*(float *)(gen_frame + 0xf0)) = (float)fVar9;
      (*(float *)(gen_frame + 0xc4)) = 0.0;
      (*(float *)(gen_frame + 0xf4)) = (float)fVar9;
      (*(float *)(gen_frame + 0xc8)) = 0.0;
      (*(float *)(gen_frame + 0xf8)) = (float)fVar9;
      (*(float *)(gen_frame + 0xd0)) = 0.0;
      (*(float *)(gen_frame + 0xd8)) = 0.0;
      (*(float *)(gen_frame + 0xe0)) = 0.0;
      (*(float *)(gen_frame + 0xe4)) = 0.0;
      (*(float *)(gen_frame + 0xd4)) = REFG(float, 0x1302c64);
      (*(float *)(gen_frame + 0xe8)) = REFG(float, 0x1302c68);
      F_004efe70(&(*(float *)(gen_frame + 0xc0)),(uint)(this + 0x40));
      (*(float *)(gen_frame + 0xf0)) = (float)((float10)(*(float *)(gen_frame + 0xf0)) + (float10)(*(float *)(gen_frame + 0x60)));
      (*(float *)(gen_frame + 0xf4)) = (float)((float10)(*(float *)(gen_frame + 0xf4)) + (float10)(*(float *)(gen_frame + 0x64)));
      (*(float *)(gen_frame + 0xf8)) = (float)((float10)(*(float *)(gen_frame + 0xf8)) + (float10)(*(float *)(gen_frame + 0x68)));
    }
    else {
      (*(float *)(gen_frame + 0xf0)) = (*(float *)(gen_frame + 0x60));
      (*(float *)(gen_frame + 0xf4)) = (*(float *)(gen_frame + 0x64));
      (*(float *)(gen_frame + 0xf8)) = (*(float *)(gen_frame + 0x68));
      (*(float *)(gen_frame + 0x60)) = (float)((float10)REFG(float, 0x1302c84) * fVar11 - (float10)REFG(float, 0x1302c88) * fVar10);
      (*(float *)(gen_frame + 0x64)) = (float)(fVar9 * (float10)REFG(float, 0x1302c88) - (float10)REFG(float, 0x1302c80) * fVar11);
      (*(float *)(gen_frame + 0x68)) = (float)((float10)REFG(float, 0x1302c80) * fVar10 - fVar9 * (float10)REFG(float, 0x1302c84));
      F_0046f390(&(*(float *)(gen_frame + 0x60)));
      (*(float *)(gen_frame + 0xc0)) = (*(float *)(gen_frame + 0x60));
      (*(float *)(gen_frame + 0xc4)) = (*(float *)(gen_frame + 0x64));
      (*(float *)(gen_frame + 0xc8)) = (*(float *)(gen_frame + 0x68));
      fVar12 = (float)((float10)(*(float *)(gen_frame + 0x54)) * (float10)(*(float *)(gen_frame + 0x68)) - (float10)(*(float *)(gen_frame + 0x58)) * (float10)(*(float *)(gen_frame + 0x64))
                      );
      (*(float *)(gen_frame + 0x10)) = fVar12;
      (*(float *)(gen_frame + 0xd0)) = fVar12;
      (*(float *)(gen_frame + 0xe0)) = (*(float *)(gen_frame + 0x50));
      (*(float *)(gen_frame + 0xe4)) = (*(float *)(gen_frame + 0x54));
      (*(float *)(gen_frame + 0xe8)) = (*(float *)(gen_frame + 0x58));
      fVar12 = (float)((float10)(*(float *)(gen_frame + 0x60)) * (float10)(*(float *)(gen_frame + 0x58)) - (float10)(*(float *)(gen_frame + 0x50)) * (float10)(*(float *)(gen_frame + 0x68))
                      );
      (*(float *)(gen_frame + 0x14)) = fVar12;
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x64)) * (float10)(*(float *)(gen_frame + 0x50)) - (float10)(*(float *)(gen_frame + 0x54)) * (float10)(*(float *)(gen_frame + 0x60)))
      ;
      (*(float *)(gen_frame + 0x18)) = fVar2;
      (*(float *)(gen_frame + 0xd4)) = fVar12;
      (*(float *)(gen_frame + 0xd8)) = fVar2;
    }
    pfVar7 = &(*(float *)(gen_frame + 0xc0));
  }
  pfVar8 = (*(float * PTR32 *)(gen_frame + 0xc));
  for (iVar6 = 0x10; pfVar5 = (*(float * PTR32 *)(gen_frame + 0xc)), iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar8 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar8 = pfVar8 + 1;
  }
LAB_0068d70f: ;
  (*(float * PTR32 *)(gen_frame + 0xc)) = pfVar5;
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return (uint)pfVar5;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf6 */
uint F_0068d730(unsigned int gen_a0)
{
  GEN_ENTER(0x68d730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b81ed0(*(undefined * PTR32 *)(this + 0x60),this + 0x120);
  return uVar1;
}

/* ref: FUN_0068d740 */
uint F_0068d740(unsigned int gen_a0)
{
  GEN_ENTER(0x68d740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x710) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x710),0,0);
    *(undefined4 *)((int)this + 0x710) = 0;
  }
  *(uint *)((int)this + 0x6f8) = *(uint *)((int)this + 0x6f8) & 0xfffeffff;
  *(undefined1 *)((int)this + 0x6ec) = 1;
  return uVar1;
}

/* ref: FUN_0068d780 */
unsigned int F_0068d780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68d780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x714);
  if ((iVar1 != 0) && (*(int *)(iVar1 + param_1 * 4) != 0)) {
    F_0050c620(*(undefined4 *)(iVar1 + param_1 * 4),0,0);
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x714) + param_1 * 4))) = 0;
  }
  *(uint *)((int)this + 0x6f8) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x6f8) | 0 << ((byte)param_1 & 0x1f);
  *(undefined1 *)((int)this + 0x6ec) = 1;
  return 0;
}

/* ref: FUN_0068d7f0 */
uint F_0068d7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x68d7f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar1 = *(uint *)((int)this + 0x71c) >> 4;
  if ((uVar1 & 1) != 0) {
    if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
      F_0061eec0(*(undefined * PTR32 *)((int)this + 0x78),1);
    }
    F_009f54d0((undefined *)((int)this + 0x4a0),*(undefined4 *)((int)this + 0x414),1,0);
    if (*(int *)((int)this + 0x414) != 0) {
      F_0050c620(*(int *)((int)this + 0x414),0,0);
      *(undefined4 *)((int)this + 0x414) = 0;
    }
    F_00c48350(((undefined1 *)(gen_frame + 0x8)),0,0x100);
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x118))(this,((undefined1 *)(gen_frame + 0x8)),0x100,1,"resident/face");
    if (uVar1 != 0) {
      F_004ff310(((undefined1 *)(gen_frame + 0x4)),4,0);
      *(undefined4 *)((int)this + 0x40c) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x0)) = 0x706170;
      *(undefined4 *)((int)this + 0x410) = 0;
      uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)),0,0,0);
      *(uint *)((int)this + 0x414) = uVar1;
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
      return uVar1;
    }
    *(undefined4 *)((int)this + 0x410) = 0xffffffff;
    uVar1 = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar1;
}

/* ref: FUN_0068d920 */
byte F_0068d920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68d920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (byte)(*(uint *)(in_ecx + 0x2c4) >> ((byte)param_2 & 0x1f)) & 1;
}

/* ref: FUN_0068d980 */
unsigned int F_0068d980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68d980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x78) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_006233a0(*(int *)((int)this + 0x78));
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
        F_0064d630(*(undefined * PTR32 *)((int)this + 0x78),param_1,uVar2);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}

/* ref: FUN_0068d9c0 */
byte F_0068d9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68d9c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int in_ecx_00;
  byte bVar1;
  
  if ((*(int *)(in_ecx + 0x78) != 0) &&
     (in_ecx_00 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x78) + 0x54))), in_ecx_00 != 0)) {
    bVar1 = F_009f0920(in_ecx_00,param_2);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_0068d9e0 */
uint F_0068d9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68d9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((*(int *)((int)this + 0x78) != 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x78) + 0x54))), this_00 != (undefined *)0x0)) {
    uVar1 = F_009f4320(this_00,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0068da00 */
uint F_0068da00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68da00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int in_ecx_00;
  uint uVar1;
  
  if ((*(int *)(in_ecx + 0x78) != 0) &&
     (in_ecx_00 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x78) + 0x54))), in_ecx_00 != 0)) {
    uVar1 = F_009f0900(in_ecx_00,param_2);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0068da20 */
float10 F_0068da20(unsigned int gen_a0)
{
  GEN_ENTER(0x68da20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int in_ecx_00;
  float10 fVar1;
  
  if (*(int *)(in_ecx + 0x78) == 0) {
    return (float10)0;
  }
  in_ecx_00 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x78) + 0x54)));
  if (in_ecx_00 != 0) {
    fVar1 = F_009f13c0(in_ecx_00);
    return (float10)(float)fVar1;
  }
  return (float10)0.0;
}

/* ref: FUN_0068da60 */
uint F_0068da60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68da60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint in_ecx_00;
  
  in_ecx_00 = 0;
  if ((*(int *)(in_ecx + 0x78) != 0) &&
     (in_ecx_00 = *((uint *)GEN_TOP((*(int *)(in_ecx + 0x78) + 0x54))), in_ecx_00 != 0)) {
    F_009f13a0(in_ecx_00,param_2);
  }
  return in_ecx_00;
}

/* ref: FUN_0068da90 */
byte F_0068da90(unsigned int gen_a0)
{
  GEN_ENTER(0x68da90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  
  if ((REFG(int, 0x14c4e78) != 0) && (iVar1 = *(int *)(REFG(int, 0x14c4e78) + 0x18), iVar1 != 0)) {
    if ((*(int *)(iVar1 + 0x2e00) == 0) || (*((undefined * PTR32 *)GEN_TOP((*(int *)(iVar1 + 0x2e00) + 0xec))) != this)) {
      bVar2 = 0;
    }
    else {
      bVar2 = 1;
    }
    return *(undefined * PTR32 *)(iVar1 + 0xec) == this | bVar2 |
           (((undefined *)(iVar1 + 0x2600) == this || (undefined *)(iVar1 + 0x1e60) == this) ||
           (undefined *)(iVar1 + 0x16c0) == this);
  }
  return *(short *)((int)this + 0x72) == 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf8 */
unsigned int F_0068db00(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x68db00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar2 = *(uint *)(param_1 + 0x74);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = *(int *)(iVar1 + uVar4 * 4);
      if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x18), iVar3 != 0)) {
        F_004ffee0(iVar3,param_2,param_3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf9 */
unsigned int F_0068db40(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x68db40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar2 = *(uint *)(param_1 + 0x74);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = *(int *)(iVar1 + uVar4 * 4);
      if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x18), iVar3 != 0)) {
        F_004fff30(iVar3,param_2,param_3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return 0;
}

/* ref: FUN_0068db80 */
unsigned int F_0068db80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68db80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(uint *)((int)this + 0x74) = param_1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),param_1 * 4,0x10);
  *(uint *)((int)this + 0x7c) = uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),param_1 * 4,0x10);
  *(uint *)((int)this + 0x80) = uVar1;
  uVar1 = 0;
  if (param_1 != 0) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x7c) + uVar1 * 4))) = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x80) + uVar1 * 4))) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_1);
  }
  return 0;
}

/* ref: FUN_0068dc00 */
uint F_0068dc00(unsigned int gen_a0)
{
  GEN_ENTER(0x68dc00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x7c) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)((int)this + 0x7c));
    *(undefined4 *)((int)this + 0x7c) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x80) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)((int)this + 0x80));
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  *(undefined4 *)((int)this + 0x74) = 0;
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf81 */
uint F_0068dc50(unsigned int gen_a0)
{
  GEN_ENTER(0x68dc50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  if (*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) {
    (*(float *)(gen_frame + 0x20)) = *(float *)(this + 0x50);
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(this + 0x30);
    (*(float *)(gen_frame + 0x24)) = *(float *)(this + 0x54);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(this + 0x34);
    (*(float *)(gen_frame + 0x28)) = *(float *)(this + 0x58);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(this + 0x38);
    (*(float *)(gen_frame + 0x5c)) = *(float *)(this + 0x294);
    (*(float *)(gen_frame + 0x58)) = *(float *)(this + 0x290);
    fVar4 = (float10)*(float *)(this + 0x294);
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(this + 0x40);
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 0x44);
    (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(this + 0x48);
    fVar1 = ((float)GEN_TOF((fVar4 * (float10)*(float *)(this + 0x50))));
    (*(float *)(gen_frame + 0x40)) = fVar1;
    (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(this + 0x4c);
    fVar2 = ((float)GEN_TOF(((float10)*(float *)(this + 0x54) * fVar4)));
    (*(float *)(gen_frame + 0x44)) = fVar2;
    fVar3 = ((float)GEN_TOF((fVar4 * (float10)*(float *)(this + 0x58))));
    (*(float *)(gen_frame + 0x48)) = fVar3;
    fVar4 = (float10)*(float *)(this + 0x290);
    fVar1 = (float)(fVar4 * (float10)fVar1);
    (*(float *)(gen_frame + 0x30)) = fVar1;
    fVar2 = (float)((float10)fVar2 * fVar4);
    (*(float *)(gen_frame + 0x34)) = fVar2;
    fVar3 = (float)(fVar4 * (float10)fVar3);
    (*(float *)(gen_frame + 0x38)) = fVar3;
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    this = (undefined *)F_00623060(*(undefined * PTR32 *)(this + 0x78),&(*(undefined4 *)(gen_frame + 0x0)));
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf82 */
float F_0068dd30(unsigned int gen_a0)
{
  GEN_ENTER(0x68dd30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar4 = 0;
  (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1090998);
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1090998);
  ((float *)(gen_frame + 0x18))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x18))[0], REFG(float, 0x1090998));
  (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1097b10);
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1097b10);
  ((float *)(gen_frame + 0x8))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x8))[0], REFG(float, 0x1097b10));
  fVar8 = REFG(float, 0x1090998);
  fVar9 = REFG(float, 0x1097b10);
  fVar10 = REFG(float, 0x1097b10);
  fVar11 = REFG(float, 0x1097b10);
  fVar12 = REFG(float, 0x1090998);
  fVar13 = REFG(float, 0x1090998);
  if (*(int *)(this + 0x74) != 0) {
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x7c) + uVar4 * 4)));
      if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x18), iVar1 != 0)) {
        pfVar2 = *(float * PTR32 *)(iVar1 + 0xf0);
        pfVar3 = &(*(float *)(gen_frame + 0x10));
        if (!((float10)(*(float *)(gen_frame + 0x10)) < (float10)*pfVar2)) {
          pfVar3 = pfVar2;
        }
        fVar13 = *pfVar3;
        pfVar3 = pfVar2 + 1;
        (*(float *)(gen_frame + 0x10)) = fVar13;
        if ((float10)(*(float *)(gen_frame + 0x14)) < (float10)pfVar2[1]) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar12 = *pfVar3;
        pfVar3 = pfVar2 + 2;
        (*(float *)(gen_frame + 0x14)) = fVar12;
        if ((float10)((float *)(gen_frame + 0x18))[0] < (float10)pfVar2[2]) {
          pfVar3 = ((float *)(gen_frame + 0x18));
        }
        fVar8 = *pfVar3;
        ((float *)(gen_frame + 0x18))[0] = fVar8;
        pfVar3 = &(*(float *)(gen_frame + 0x0));
        if (!((float10)pfVar2[4] < (float10)(*(float *)(gen_frame + 0x0)))) {
          pfVar3 = pfVar2 + 4;
        }
        fVar11 = *pfVar3;
        pfVar3 = pfVar2 + 5;
        (*(float *)(gen_frame + 0x0)) = fVar11;
        if ((float10)pfVar2[5] < (float10)(*(float *)(gen_frame + 0x4))) {
          pfVar3 = &(*(float *)(gen_frame + 0x4));
        }
        fVar10 = *pfVar3;
        pfVar3 = pfVar2 + 6;
        (*(float *)(gen_frame + 0x4)) = fVar10;
        if ((float10)pfVar2[6] < (float10)((float *)(gen_frame + 0x8))[0]) {
          pfVar3 = ((float *)(gen_frame + 0x8));
        }
        fVar9 = *pfVar3;
        ((float *)(gen_frame + 0x8))[0] = fVar9;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(this + 0x74));
  }
  *(float *)(this + 0x140) = fVar13;
  *(float *)(this + 0x144) = fVar12;
  *(float *)(this + 0x148) = fVar8;
  *(float *)(this + 0x150) = fVar11;
  *(float *)(this + 0x154) = fVar10;
  *(float *)(this + 0x158) = fVar9;
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x150) - (float10)*(float *)(this + 0x140))));
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x154) - (float10)*(float *)(this + 0x144))));
  ((float *)(gen_frame + 0x8))[0] = ((float)GEN_TOF(((float10)*(float *)(this + 0x158) - (float10)*(float *)(this + 0x148))));
  fVar5 = (float10)REFG(double, 0x1088108);
  fVar13 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(this + 0x150) -
                                   (float10)*(float *)(this + 0x140)))) * fVar5)));
  (*(float *)(gen_frame + 0x10)) = fVar13;
  fVar12 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(this + 0x154) -
                                   (float10)*(float *)(this + 0x144)))) * fVar5)));
  (*(float *)(gen_frame + 0x14)) = fVar12;
  fVar8 = ((float)GEN_TOF((fVar5 * (float10)((float)GEN_TOF(((float10)*(float *)(this + 0x158) -
                                          (float10)*(float *)(this + 0x148)))))));
  ((float *)(gen_frame + 0x18))[0] = fVar8;
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10a0c88);
  fVar13 = (float)((float10)fVar13 * fVar5);
  (*(float *)(gen_frame + 0x0)) = fVar13;
  fVar12 = (float)((float10)fVar12 * fVar5);
  (*(float *)(gen_frame + 0x4)) = fVar12;
  fVar8 = (float)(fVar5 * (float10)fVar8);
  ((float *)(gen_frame + 0x8))[0] = fVar8;
  fVar5 = (float10)fVar12;
  fVar6 = (float10)fVar13;
  fVar7 = (float10)fVar8;
  fVar13 = ((float)GEN_TOF(((fVar5 * fVar5 + fVar6 * fVar6) + fVar7 * fVar7)));
  (*(float *)(gen_frame + 0x2c)) = fVar13;
  if ((float10)fVar13 < (float10)1) {
    F_0046f0e0(&(*(float *)(gen_frame + 0x0)),(float)(float10)1);
  }
  fVar5 = (float10)F_006aec30(this + 0x140,&(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x150) - (float10)*(float *)(this + 0x140))));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x154) - (float10)*(float *)(this + 0x144))));
  ((float *)(gen_frame + 0x18))[0] = ((float)GEN_TOF(((float10)*(float *)(this + 0x158) - (float10)*(float *)(this + 0x148))));
  fVar6 = (float10)REFG(double, 0x1088108);
  fVar13 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(this + 0x150) -
                                   (float10)*(float *)(this + 0x140)))) * fVar6)));
  (*(float *)(gen_frame + 0x10)) = fVar13;
  fVar12 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(this + 0x154) -
                                   (float10)*(float *)(this + 0x144)))) * fVar6)));
  (*(float *)(gen_frame + 0x14)) = fVar12;
  fVar8 = ((float)GEN_TOF((fVar6 * (float10)((float)GEN_TOF(((float10)*(float *)(this + 0x158) -
                                          (float10)*(float *)(this + 0x148)))))));
  ((float *)(gen_frame + 0x18))[0] = fVar8;
  fVar11 = ((float)GEN_TOF((((float10)fVar12 * (float10)fVar12 + (float10)fVar13 * (float10)fVar13) +
                  (float10)fVar8 * (float10)fVar8)));
  (*(float *)(gen_frame + 0x2c)) = fVar11;
  fVar11 = ((float)GEN_TOF(SQRT((float10)fVar11)));
  (*(float *)(gen_frame + 0x2c)) = fVar11;
  *(float *)(this + 0x13c) = fVar11;
  *(float *)(this + 0x130) = ((float)GEN_TOF(((float10)fVar13 + (float10)*(float *)(this + 0x140))));
  *(float *)(this + 0x134) = ((float)GEN_TOF(((float10)*(float *)(this + 0x144) + (float10)fVar12)));
  *(float *)(this + 0x138) = ((float)GEN_TOF(((float10)*(float *)(this + 0x148) + (float10)fVar8)));
  return (float)fVar5;
}

/* ref: FUN_0068e000 */
uint F_0068e000(unsigned int gen_a0)
{
  GEN_ENTER(0x68e000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint3 extraout_var = 0;
  
  bVar1 = F_006aea80((undefined4 *)((int)this + 0x120),(undefined4 *)((int)this + 0x130));
  if (bVar1 == 0) {
    *(undefined4 *)((int)this + 0x120) = *(undefined4 *)((int)this + 0x130);
    *(undefined4 *)((int)this + 0x124) = *(undefined4 *)((int)this + 0x134);
    *(undefined4 *)((int)this + 0x128) = *(undefined4 *)((int)this + 0x138);
    *(undefined4 *)((int)this + 300) = *(undefined4 *)((int)this + 0x13c);
    return CONCAT31(extraout_var,1);
  }
  return (uint)extraout_var << 8;
}

/* ref: FUN_0068e040 */
byte F_0068e040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68e040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  
  iVar1 = *(int *)((int)this + 0x7c);
  uVar2 = *(uint *)((int)this + 0x74);
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = *(int *)(iVar1 + uVar5 * 4);
      if (iVar3 != 0) {
        bVar4 = F_004ffb50(*(undefined * PTR32 *)(iVar3 + 0x18),param_1);
        if (bVar4 != 0) {
          return 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return 0;
}

/* ref: FUN_0068e090 */
uint F_0068e090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68e090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) != 0) {
    F_009bc2a0((undefined *)*puVar1);
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4)));
    if (*((int *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) != 0) {
      this_00 = (undefined *)*puVar1;
      if (this_00 != (undefined *)0x0) {
        F_009cfa70(this_00);
        puVar1 = (undefined4 *)F_00406ad0(this_00);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) = 0;
    }
  }
  return (uint)puVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf35 */
unsigned int F_0068e0f0(unsigned int gen_a0)
{
  GEN_ENTER(0x68e0f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x710) != 0) {
    F_0050c620(*(int *)(this + 0x710),0,0);
    *(undefined4 *)(this + 0x710) = 0;
  }
  *(uint *)(this + 0x6f8) = *(uint *)(this + 0x6f8) & 0xfffeffff;
  uVar3 = 0;
  this[0x6ec] = (undefined1)0x1;
  if (*(int *)(this + 0x6fc) != 0) {
    do {
      iVar1 = *(int *)(this + 0x714);
      if ((iVar1 != 0) && (*(int *)(iVar1 + uVar3 * 4) != 0)) {
        F_0050c620(*(undefined4 *)(iVar1 + uVar3 * 4),0,0);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x714) + uVar3 * 4))) = 0;
      }
      bVar2 = (byte)uVar3;
      uVar3 = uVar3 + 1;
      *(uint *)(this + 0x6f8) =
           ~(1 << (bVar2 & 0x1f)) & *(uint *)(this + 0x6f8) | 0 << (bVar2 & 0x1f);
      this[0x6ec] = (undefined1)0x1;
    } while (uVar3 < *(uint *)(this + 0x6fc));
  }
  if (*(int *)(this + 0x714) != 0) {
    F_00406b30(*(int *)(this + 0x714));
    *(undefined4 *)(this + 0x714) = 0;
  }
  *(undefined4 *)(this + 0x6f8) = 0;
  *(undefined4 *)(this + 0x6fc) = 0;
  this[0x6ec] = (undefined1)0x0;
  F_00b824b0(this + 0x700);
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf72 */
byte F_0068e1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x68e1e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (byte)(*(uint *)(in_ecx + 0x71c) >> 6) & 1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf31 */
unsigned int F_0068e1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68e1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  undefined4 uVar6;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)(this + 0x2d8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  uVar2 = *(uint *)(this + 0x74);
  iVar3 = *(int *)(this + 0x7c);
  *(int * PTR32 *)(this + 0x2d8) = param_1;
  if (param_1 == (int *)0x0) {
    uVar6 = *(undefined4 *)(this + 0x160);
  }
  else {
    uVar6 = 0;
  }
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      iVar4 = *(int *)(iVar3 + uVar5 * 4);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x70) = uVar6;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  uVar2 = *(uint *)(this + 0x74);
  iVar3 = *(int *)(this + 0x80);
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(iVar3 + uVar5 * 4);
      if (this_00 != (undefined *)0x0) {
        F_009bc1e0(this_00,(uint)(param_1 != (int *)0x0));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Human::vf55 */
unsigned int F_0068e290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68e290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  if (param_1 < 10) {
    *(undefined4 *)(this + param_1 * 4 + 0x750) =
         *((undefined4 *)GEN_TOP((param_1 * 0xc + *(int *)(this + 0x818))));
    iVar1 = param_1 * 0xc + *(int *)(this + 0x818);
    *((undefined4 *)GEN_TOP((this + (param_1 * 3 + 0x3c0) * 2))) = *(undefined4 *)(iVar1 + 4);
    *((undefined2 *)GEN_TOP((this + (param_1 * 3 + 0x3c0) * 2 + 4))) = *(undefined2 *)(iVar1 + 8);
  }
  if (((param_1 == 0xd) || (param_1 == 0xe)) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x7c) + param_1 * 4))), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x14) = 0x3000000;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Human::vf75 */
uint F_0068e300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68e300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  uint uVar2;
  char * _Format;
  
  if (param_3 < 5) {
    if (*(int *)(this + 0x818) == 0) {
      uVar2 = (uint)*(ushort *)(this + param_3 * 4 + 0x750);
      _Format = "chara/equipment/e%04d/e%04d.imc";
    }
    else {
      uVar2 = (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x818) + param_3 * 0xc)));
      _Format = "chara/equipment/e%04d/e%04d.imc";
    }
  }
  else {
    if (9 < param_3) {
      return 0;
    }
    if (*(int *)(this + 0x818) == 0) {
      uVar1 = *(ushort *)(this + param_3 * 4 + 0x750);
    }
    else {
      uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 0x818) + param_3 * 0xc)));
    }
    uVar2 = (uint)uVar1;
    _Format = "chara/accessory/a%04d/a%04d.imc";
  }
  F_00c472af(param_1,param_2,_Format,uVar2,uVar2);
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Human::vf76 */
uint F_0068e390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68e390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  uint param_3 = (uint)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  char * pcVar6;
  uint uVar7;
  int iVar8;
  char * pcVar9;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  iVar8 = param_4;
  if (param_3 < 5) {
    if (*(char *)(param_4 + 8) == 'b') {
      uVar4 = F_00689ac0((uint)*(ushort *)(this + 0x778));
      uVar5 = (uint)uVar4;
      pcVar9 = "chara/human/c%04d/obj/body/b0001/material/mt_c%04d%s";
      goto LAB_0068e620;
    }
    iVar2 = *(int *)(this + 0x818);
    iVar3 = param_3 * 0xc;
    if (*(char *)(iVar2 + 4 + iVar3) == '\0') {
LAB_0068e3fc: ;
      F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
      return 0;
    }
    uVar7 = (uint)*(byte *)(iVar3 + 4 + iVar2);
    uVar5 = (uint)*(ushort *)(iVar3 + iVar2);
    if (*(char *)(iVar2 + 3 + iVar3) != '\0') {
      F_00c472af(param_1,param_2,"chara/equipment/e%04d/material/v%04d/staining/%s",uVar5,uVar7,
                 param_4);
      pcVar9 = param_1;
      do {
        pcVar6 = pcVar9;
        pcVar9 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      pcVar6[-5] = '\0';
      bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x818) + 3 + iVar3)));
      pcVar9 = "_s%04d.mtrl";
LAB_0068e461: ;
      F_00c472af(((char *)(gen_frame + 0x8)),0x10,pcVar9,(uint)bVar1);
      F_00c473c8(param_1,param_2,((char *)(gen_frame + 0x8)));
      goto LAB_0068e62d;
    }
    pcVar9 = "chara/equipment/e%04d/material/v%04d/%s";
  }
  else if (param_3 < 10) {
    iVar2 = *(int *)(this + 0x818);
    iVar3 = param_3 * 0xc;
    if (*(char *)(iVar2 + 4 + iVar3) == '\0') goto LAB_0068e3fc;
    uVar7 = (uint)*(byte *)(iVar3 + 4 + iVar2);
    uVar5 = (uint)*(ushort *)(iVar3 + iVar2);
    if (*(char *)(iVar2 + 3 + iVar3) != '\0') {
      F_00c472af(param_1,param_2,"chara/accessory/a%04d/material/v%04d/staining/%s",uVar5,uVar7,
                 param_4);
      pcVar9 = param_1;
      do {
        pcVar6 = pcVar9;
        pcVar9 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      pcVar6[-5] = '\0';
      bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x818) + 3 + iVar3)));
      pcVar9 = "_s%04d.mtrl";
      goto LAB_0068e461;
    }
    pcVar9 = "chara/accessory/a%04d/material/v%04d/%s";
  }
  else if (param_3 == 10) {
    uVar5 = (uint)*(ushort *)(this + 0x778);
    pcVar9 = "chara/human/c%04d/obj/hair/h%04d/material/v0001/%s";
    uVar7 = (uint)*(ushort *)(this + 0x77a);
  }
  else if (param_3 == 0xb) {
    uVar5 = (uint)*(ushort *)(this + 0x778);
    pcVar9 = "chara/human/c%04d/obj/face/f%04d/material/%s";
    uVar7 = (uint)*(ushort *)(this + 0x77c);
  }
  else if (param_3 == 0xc) {
    uVar5 = (uint)*(ushort *)(this + 0x778);
    pcVar9 = "chara/human/c%04d/obj/tail/t%04d/material/%s";
    uVar7 = (uint)*(ushort *)(this + 0x77e);
  }
  else if (param_3 == 0xd) {
    uVar4 = F_00689ac0((uint)*(ushort *)(this + 0x778));
    iVar8 = param_4 + 8;
    uVar5 = (uint)uVar4;
    uVar7 = uVar5;
    if (*(char *)(param_4 + 8) == 'f') {
      if ((uVar5 != 0x12d) && (uVar5 != 0x191)) {
        pcVar9 = "chara/human/c%04d/obj/face/f0001/material/mt_c%04d%s";
        goto LAB_0068e620;
      }
      iVar8 = param_4 + 0xd;
      pcVar9 = "chara/human/c%04d/obj/face/f0101/material/mt_c%04df0101%s";
    }
    else {
      pcVar9 = "chara/human/c%04d/obj/body/b0001/material/mt_c%04d%s";
    }
  }
  else if (param_3 == 0xe) {
    uVar4 = F_00689ac0((uint)*(ushort *)(this + 0x778));
    uVar5 = (uint)uVar4;
    iVar8 = param_4 + 8;
    pcVar9 = "chara/human/c%04d/obj/body/b0001/material/mt_c%04d%s";
    uVar7 = uVar5;
  }
  else {
    if (param_3 != 0xf) goto LAB_0068e62d;
    uVar4 = F_00689ac0((uint)*(ushort *)(this + 0x778));
    uVar5 = (uint)uVar4;
    pcVar9 = "chara/human/c%04d/obj/body/b0001/material/mt_c%04d%s";
LAB_0068e620: ;
    iVar8 = param_4 + 8;
    uVar7 = uVar5;
  }
  F_00c472af(param_1,param_2,pcVar9,uVar5,uVar7,iVar8);
LAB_0068e62d: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Human::vf77 */
uint F_0068e650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68e650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined1 HVar1;
  
  if (param_3 < 5) {
    if (*(int *)(this + 0x818) == 0) {
      HVar1 = this[param_3 * 6 + 0x781];
    }
    else {
      HVar1 = *((undefined *)GEN_TOP((*(int *)(this + 0x818) + 5 + param_3 * 0xc)));
    }
    if (HVar1 != (undefined1)0x0) {
      F_00c472af(param_1,param_2,"chara/common/texture/decal_equip/-decal_%03d.tex",
                 (uint)(byte)HVar1);
      return param_1;
    }
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Human::vf78 */
uint F_0068e6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68e6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined4 * puVar1;
  undefined1 HVar2;
  ushort uVar3;
  
  if (4 < (*(uint *)&gen_args[3])) {
    return 0;
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x818))) == 0) {
    uVar3 = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[3]) * 4 + 0x750)));
    HVar2 = (*(undefined * PTR32 *)&gen_args[0])[(*(uint *)&gen_args[3]) * 6 + 0x784];
  }
  else {
    uVar3 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x818))) + (*(uint *)&gen_args[3]) * 0xc)));
    HVar2 = *((undefined *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x818))) + 8 + (*(uint *)&gen_args[3]) * 0xc)));
  }
  if (HVar2 == (undefined1)0x0) {
    return 0;
  }
  if ((byte)HVar2 < 100) {
    puVar1 = (undefined4 *)F_004ff310(&(*(uint *)&gen_args[3]),4,0);
    *(*(undefined4 * PTR32 *)&gen_args[4]) = *puVar1;
    F_00c472af((*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),"chara/equipment/e%04d/vfx/eff/ve%04d.avfx",(uint)uVar3,
               (uint)(byte)HVar2);
    return (*(uint *)&gen_args[1]);
  }
  puVar1 = (undefined4 *)F_004ff310(&(*(uint *)&gen_args[3]),8,0);
  *(*(undefined4 * PTR32 *)&gen_args[4]) = *puVar1;
  F_00c472af((*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),"vfx/equipment/eff/ve%04d.avfx",(uint)(byte)HVar2);
  return (*(uint *)&gen_args[1]);
}

/* ref: Client::Graphics::Scene::Human::vf88 */
uint F_0068e770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68e770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 0x7fc) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_0068e790 */
uint F_0068e790(unsigned int gen_a0)
{
  GEN_ENTER(0x68e790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x22) = 0;
  *(undefined4 *)((int)this + 0x26) = 0;
  *(undefined4 *)((int)this + 0x2a) = 0;
  *(undefined4 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x36) = 0;
  *(undefined4 *)((int)this + 0x3a) = 0;
  *(undefined4 *)((int)this + 0x3e) = 0;
  *(undefined2 *)((int)this + 0x42) = 0;
  *(undefined1 *)((int)this + 0x44) = 1;
  *(undefined4 *)this = 0x1010101;
  *(undefined4 *)((int)this + 4) = 0x1010101;
  *(undefined4 *)((int)this + 8) = 0x1010101;
  *(undefined4 *)((int)this + 0xc) = 0x1010101;
  *(undefined4 *)((int)this + 0x10) = 0x1010101;
  *(undefined4 *)((int)this + 0x14) = 0x1010101;
  *(undefined2 *)((int)this + 0x18) = 0x101;
  *(undefined2 *)((int)this + 0x1c) = 0x172;
  *(undefined2 *)((int)this + 0x20) = 0x172;
  *(undefined2 *)((int)this + 0x24) = 0x172;
  *(undefined2 *)((int)this + 0x28) = 0x172;
  *(undefined2 *)((int)this + 0x2c) = 0x172;
  *(undefined2 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined2 *)((int)this + 0x38) = 0;
  *(undefined2 *)((int)this + 0x3c) = 0;
  *(undefined2 *)((int)this + 0x40) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Demihuman::vf55 */
uint F_0068e810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68e810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined * pDVar3;
  
  pDVar3 = param_1;
  if (param_1 < (undefined *)&REFG(undefined, 0x5)) {
    iVar2 = (int)((int)(uintptr_t)param_1) * 0xc;
    *(undefined4 *)(this + (int)((int)(uintptr_t)param_1) * 4 + 0x734) =
         *((undefined4 *)GEN_TOP((iVar2 + *(int *)(this + 0x790))));
    iVar1 = *(int *)(this + 0x790);
    pDVar3 = this + ((int)((int)(uintptr_t)param_1) * 3 + 0x3a5) * 2;
    *(undefined4 *)pDVar3 = *(undefined4 *)(iVar1 + 4 + iVar2);
    *(undefined2 *)(pDVar3 + 4) = *(undefined2 *)(iVar1 + 8 + iVar2);
  }
  return (uint)pDVar3;
}

/* ref: Client::Graphics::Scene::Demihuman::vf67 */
uint F_0068e860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68e860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  ushort uVar1;
  
  if (*(int *)(this + 0x790) == 0) {
    uVar1 = *(ushort *)(this + param_3 * 4 + 0x734);
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 0x790) + param_3 * 0xc)));
  }
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/obj/equipment/e%04d/model/d%04de%04d_%s.mdl",
             (uint)*(ushort *)(this + 0x748),(uint)uVar1,(uint)*(ushort *)(this + 0x748),(uint)uVar1
             ,(&REFG(undefined * PTR32, 0x1322de0))[param_3]);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf75 */
uint F_0068e8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68e8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  ushort uVar1;
  
  if (*(int *)(this + 0x790) == 0) {
    uVar1 = *(ushort *)(this + param_3 * 4 + 0x734);
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 0x790) + param_3 * 0xc)));
  }
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/obj/equipment/e%04d/e%04d.imc",
             (uint)*(ushort *)(this + 0x748),(uint)uVar1,(uint)uVar1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf76 */
uint F_0068e910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68e910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ushort * puVar1;
  byte bVar2;
  
  puVar1 = ((ushort *)GEN_TOP((*(int *)(this + 0x790) + param_3 * 0xc)));
  bVar2 = (byte)puVar1[2];
  if (bVar2 == 0) {
    return 0;
  }
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/obj/equipment/e%04d/material/v%04d/%s",
             (uint)*(ushort *)(this + 0x748),(uint)*puVar1,(uint)bVar2,param_4);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf77 */
uint F_0068e960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68e960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined1 DVar1;
  
  if (*(int *)(this + 0x790) == 0) {
    DVar1 = this[param_3 * 6 + 0x74b];
  }
  else {
    DVar1 = *((undefined *)GEN_TOP((*(int *)(this + 0x790) + 5 + param_3 * 0xc)));
  }
  if (DVar1 == (undefined1)0x0) {
    return 0;
  }
  F_00c472af(param_1,param_2,"chara/common/texture/decal_equip/-decal_%03d.tex",(uint)(byte)DVar1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf78 */
uint F_0068e9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68e9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined4 * puVar1;
  undefined1 DVar2;
  ushort uVar3;
  
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x790))) == 0) {
    uVar3 = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[3]) * 4 + 0x734)));
    DVar2 = (*(undefined * PTR32 *)&gen_args[0])[(*(int *)&gen_args[3]) * 6 + 0x74e];
  }
  else {
    uVar3 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x790))) + (*(int *)&gen_args[3]) * 0xc)));
    DVar2 = *((undefined *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x790))) + 8 + (*(int *)&gen_args[3]) * 0xc)));
  }
  if ((DVar2 != (undefined1)0x0) && ((byte)DVar2 < 100)) {
    puVar1 = (undefined4 *)F_004ff310(&(*(int *)&gen_args[3]),4,0);
    *(*(undefined4 * PTR32 *)&gen_args[4]) = *puVar1;
    F_00c472af((*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),"chara/demihuman/d%04d/obj/equipment/e%04d/vfx/eff/ve%04d.avfx",
               (uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x748))),(uint)uVar3,(uint)(byte)DVar2);
    return (*(uint *)&gen_args[1]);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Demihuman::vf88 */
uint F_0068ea40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68ea40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 0x784) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_0068ea60 */
uint F_0068ea60(unsigned int gen_a0)
{
  GEN_ENTER(0x68ea60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x78c);
  if ((uVar1 != 0) && (*(int *)((int)this + 0x788) != 0)) {
    if ((uVar1 & 1) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x788) + 0xc))))(*(int * PTR32 *)((int)this + 0x788),this);
      *(uint *)((int)this + 0x78c) = *(uint *)((int)this + 0x78c) & 0xfffffffe;
      return uVar1;
    }
    uVar1 = uVar1 >> 1;
    if ((uVar1 & 1) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x788) + 8))))(*(int * PTR32 *)((int)this + 0x788),this);
      *(uint *)((int)this + 0x78c) = *(uint *)((int)this + 0x78c) & 0xfffffffd;
    }
  }
  return uVar1;
}

/* ref: FUN_0068eab0 */
unsigned int F_0068eab0(unsigned int gen_a0)
{
  GEN_ENTER(0x68eab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)this = 0;
  *(undefined4 *)((int)this + 2) = 0x100;
  *(undefined4 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xe) = 0;
  *(undefined4 *)((int)this + 0x12) = 0;
  *(undefined2 *)((int)this + 0x16) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 8) = 1;
  return 0;
}

/* ref: FUN_0068eaf0 */
byte F_0068eaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68eaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (char)param_1 != '\0' | *(byte *)((int)this + 2) & 0xfe;
  *(byte *)((int)this + 2) = bVar1;
  return bVar1;
}

/* ref: Client::Graphics::Scene::Weapon::vf88 */
uint F_0068eb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68eb20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 0x748) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_0068eb40 */
uint F_0068eb40(unsigned int gen_a0)
{
  GEN_ENTER(0x68eb40u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0x1001c;
  *(undefined2 *)(in_ecx + 1) = 0;
  *(undefined2 *)((int)in_ecx + 6) = 0x100;
  return (uint)in_ecx;
}

/* ref: FUN_0068eb60 */
byte F_0068eb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68eb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (char)param_1 != '\0' | *(byte *)((int)this + 6) & 0xfe;
  *(byte *)((int)this + 6) = bVar1;
  return bVar1;
}

/* ref: FUN_0068eb90 */
uint F_0068eb90(unsigned int gen_a0)
{
  GEN_ENTER(0x68eb90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab2a20(param_1);
  if (puVar1 == (uint *)0x0) {
    return 0x10b0ddc;
  }
  return (*puVar1 & 0xffffff) + (int)puVar1;
}

/* ref: FUN_0068ebc0 */
uint F_0068ebc0(unsigned int gen_a0)
{
  GEN_ENTER(0x68ebc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab2ae0(param_1);
  if (puVar1 == (uint *)0x0) {
    return 0x10b0de8;
  }
  return (*puVar1 & 0xffffff) + (int)puVar1;
}

/* ref: Client::Graphics::Scene::Terrain::vf12 */
unsigned int F_0068ebf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68ebf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  int * piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1090998);
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1090998);
  ((float *)(gen_frame + 0x18))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x18))[0], REFG(float, 0x1090998));
  (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1097b10);
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1097b10);
  ((float *)(gen_frame + 0x8))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x8))[0], REFG(float, 0x1097b10));
  fVar5 = REFG(float, 0x1090998);
  fVar6 = REFG(float, 0x1097b10);
  fVar7 = REFG(float, 0x1097b10);
  fVar8 = REFG(float, 0x1097b10);
  fVar9 = REFG(float, 0x1090998);
  fVar10 = REFG(float, 0x1090998);
  if (*(int *)(this + 0x78) != 0) {
    piVar4 = *(int * PTR32 *)(this + 0x74);
    (*(int *)(gen_frame + 0x2c)) = *(int *)(this + 0x78);
    do {
      pfVar2 = *(float * PTR32 *)(*piVar4 + 0xf0);
      pfVar3 = &(*(float *)(gen_frame + 0x10));
      if (!((float10)(*(float *)(gen_frame + 0x10)) < (float10)*pfVar2)) {
        pfVar3 = pfVar2;
      }
      fVar10 = *pfVar3;
      pfVar3 = pfVar2 + 1;
      (*(float *)(gen_frame + 0x10)) = fVar10;
      if ((float10)(*(float *)(gen_frame + 0x14)) < (float10)pfVar2[1]) {
        pfVar3 = &(*(float *)(gen_frame + 0x14));
      }
      fVar9 = *pfVar3;
      pfVar3 = pfVar2 + 2;
      (*(float *)(gen_frame + 0x14)) = fVar9;
      if ((float10)((float *)(gen_frame + 0x18))[0] < (float10)pfVar2[2]) {
        pfVar3 = ((float *)(gen_frame + 0x18));
      }
      fVar5 = *pfVar3;
      ((float *)(gen_frame + 0x18))[0] = fVar5;
      pfVar3 = &(*(float *)(gen_frame + 0x0));
      if (!((float10)pfVar2[4] < (float10)(*(float *)(gen_frame + 0x0)))) {
        pfVar3 = pfVar2 + 4;
      }
      fVar8 = *pfVar3;
      pfVar3 = pfVar2 + 5;
      (*(float *)(gen_frame + 0x0)) = fVar8;
      if ((float10)pfVar2[5] < (float10)(*(float *)(gen_frame + 0x4))) {
        pfVar3 = &(*(float *)(gen_frame + 0x4));
      }
      fVar7 = *pfVar3;
      (*(float *)(gen_frame + 0x4)) = fVar7;
      pfVar3 = ((float *)(gen_frame + 0x8));
      if (!((float10)pfVar2[6] < (float10)((float *)(gen_frame + 0x8))[0])) {
        pfVar3 = pfVar2 + 6;
      }
      fVar6 = *pfVar3;
      piVar4 = piVar4 + 1;
      iVar1 = (*(int *)(gen_frame + 0x2c)) + -1;
      (*(int *)(gen_frame + 0x2c)) = iVar1;
      ((float *)(gen_frame + 0x8))[0] = fVar6;
    } while (iVar1 != 0);
  }
  *param_1 = fVar10;
  param_1[1] = fVar9;
  param_1[2] = fVar5;
  param_1[4] = fVar8;
  param_1[5] = fVar7;
  param_1[6] = fVar6;
  return 0;
}

/* ref: FUN_0068ed40 */
byte F_0068ed40(unsigned int gen_a0)
{
  GEN_ENTER(0x68ed40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x12050];
  gen_size32 _Size;
  int iVar1;
  ushort * puVar2;
  uint uVar3;
  int iVar4;
  short * psVar5;
  undefined * pvVar6;
  int * piVar7;
  uint uVar8;
  
  (*(uint *)(gen_frame + 0x1203c)) = 0x68ed60;
  iVar1 = *(int *)((int)this + 0x78);
  (*(undefined * PTR32 *)(gen_frame + 0x12028)) = REFG(undefined4, 0x1370c1c);
  if (iVar1 != 0) {
    uVar3 = F_005003e0(*(undefined * PTR32 *)((int)this + 0x70));
    (*(uint *)(gen_frame + 0x12030)) = uVar3;
    (*(uint *)(gen_frame + 0x1203c)) = 0;
    uVar3 = F_00500500(*(undefined * PTR32 *)((int)this + 0x70));
    if (iVar1 != 0) {
      piVar7 = *(int * PTR32 *)((int)this + 0x74);
      iVar4 = uVar3 - (int)piVar7;
      (*(int * PTR32 *)(gen_frame + 0x12038)) = piVar7;
      (*(int *)(gen_frame + 0x1202c)) = iVar4;
      (*(int *)(gen_frame + 0x12034)) = iVar1;
      do {
        iVar1 = *piVar7;
        uVar8 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar1 + 0xa8) + 4))) + 0x1e + *(int *)(iVar1 + 0xa8)
                               )));
        uVar3 = 0;
        if (uVar8 != 0) {
          psVar5 = ((short *)GEN_TOP((*(int *)(iVar1 + 0xb8) + 0x1a)));
          do {
            if (*psVar5 != 0) {
              ((int *)(gen_frame + 0x11000))[(int)((*(uint *)(gen_frame + 0x1203c)))] = iVar1;
              ((int *)(gen_frame + 0x10000))[(int)((*(uint *)(gen_frame + 0x1203c)))] = iVar4 + (int)piVar7;
              (*(uint *)(gen_frame + 0x1203c)) = (*(uint *)(gen_frame + 0x1203c)) + 1;
              break;
            }
            uVar3 = uVar3 + 1;
            psVar5 = psVar5 + 0x1e;
          } while (uVar3 < uVar8);
        }
        piVar7 = piVar7 + 1;
        (*(int * PTR32 *)(gen_frame + 0x12038)) = piVar7;
        iVar1 = (*(int *)(gen_frame + 0x12034)) + -1;
        (*(int *)(gen_frame + 0x12034)) = iVar1;
      } while (iVar1 != 0);
    }
    *(uint *)((int)this + 0x84) = (*(uint *)(gen_frame + 0x1203c));
    if ((*(uint *)(gen_frame + 0x1203c)) != 0) {
      _Size = (*(uint *)(gen_frame + 0x1203c)) * 4;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                 (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),_Size,0x10)));
      *(undefined * PTR32 *)((int)this + 0x90) = pvVar6;
      if (pvVar6 != (undefined *)0x0) {
        F_00c48350(pvVar6,0,_Size);
        pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                   (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),_Size,0x10)));
        *(undefined * PTR32 *)((int)this + 0x9c) = pvVar6;
        if (pvVar6 != (undefined *)0x0) {
          F_00c48350(pvVar6,0,_Size);
          uVar3 = 0;
          if ((*(uint *)(gen_frame + 0x1203c)) != 0) {
            do {
              uVar8 = F_00637b80(((int *)(gen_frame + 0x11000))[(int)(uVar3)]);
              *((uint *)GEN_TOP((*(int *)((int)this + 0x90) + uVar3 * 4))) = uVar8;
              piVar7 = ((int *)GEN_TOP((*(int *)((int)this + 0x90) + uVar3 * 4)));
              if (*piVar7 == 0) goto LAB_0068ee30;
              puVar2 = (ushort *)((int *)(gen_frame + 0x10000))[(int)(uVar3)];
              *(undefined2 *)(*piVar7 + 8) = (undefined2)(*(uint *)(gen_frame + 0x12030));
              F_00625340(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + uVar3 * 4))),(uint)*puVar2,
                           (uint)puVar2[1]);
              uVar3 = uVar3 + 1;
            } while (uVar3 < (*(uint *)(gen_frame + 0x1203c)));
          }
          uVar3 = 0;
          if ((*(uint *)(gen_frame + 0x1203c)) == 0) {
            return 1;
          }
          while( true ) {
            uVar8 = F_00b14060((*(undefined * PTR32 *)(gen_frame + 0x12028)),9);
            *((uint *)GEN_TOP((*(int *)((int)this + 0x9c) + uVar3 * 4))) = uVar8;
            if (*((int *)GEN_TOP((*(int *)((int)this + 0x9c) + uVar3 * 4))) == 0) break;
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x9c) + uVar3 * 4))) + 4))) =
                 *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x90) + uVar3 * 4)));
            F_006253e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + uVar3 * 4))),((undefined1 *)(gen_frame + 0x12000)));
            F_00b81ef0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x9c) + uVar3 * 4))),((undefined1 *)(gen_frame + 0x12000)));
            uVar3 = uVar3 + 1;
            if ((*(uint *)(gen_frame + 0x1203c)) <= uVar3) {
              return 1;
            }
          }
        }
      }
LAB_0068ee30: ;
      *(undefined1 *)((int)this + 0x65) = 4;
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_0068ef60 */
unsigned int F_0068ef60(unsigned int gen_a0)
{
  GEN_ENTER(0x68ef60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_10;
  int local_c;
  uint local_8;
  
  iVar7 = 0;
  iVar6 = 0;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x70) + 0x10))))((int)this + 0x70);
  uVar2 = 0;
  local_8 = 0;
  if (1 < *(int *)((int)this + 0x220)) {
    pcVar3 = ((char *)GEN_TOP((*(int *)((int)this + 0x224) + 0x105)));
    iVar5 = (*(int *)((int)this + 0x220) - 2U >> 1) + 1;
    uVar2 = iVar5 * 2;
    do {
      iVar7 = iVar7 + (uint)(pcVar3[-0xa0] == '\x03');
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 0x140;
      iVar6 = iVar6 + (uint)(cVar1 == '\x03');
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (uVar2 < *(uint *)((int)this + 0x220)) {
    local_8 = (uint)(*((char *)GEN_TOP((*(int *)((int)this + 0x224) + 0x65 + uVar2 * 0xa0))) == '\x03');
  }
  uVar2 = 0;
  local_10 = 0;
  local_c = 0;
  if (1 < *(int *)((int)this + 0x228)) {
    pcVar3 = ((char *)GEN_TOP((*(int *)((int)this + 0x22c) + 0xe5)));
    iVar5 = (*(int *)((int)this + 0x228) - 2U >> 1) + 1;
    uVar2 = iVar5 * 2;
    do {
      local_10 = local_10 + (uint)(pcVar3[-0x80] == '\x03');
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 0x100;
      local_c = local_c + (uint)(cVar1 == '\x03');
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar4 = 0;
  if (uVar2 < *(uint *)((int)this + 0x228)) {
    uVar4 = (uint)(*((char *)GEN_TOP((*(int *)((int)this + 0x22c) + 0x65 + uVar2 * 0x80))) == '\x03');
  }
  if (((*(int *)((int)this + 0x220) == local_8 + iVar7 + iVar6) &&
      (*(uint *)((int)this + 0x228) == local_c + local_10 + uVar4)) &&
     (*(char *)((int)this + 0xd5) == '\x03')) {
    *(undefined1 *)((int)this + 0x60) = 2;
  }
  return 0;
}

/* ref: FUN_0068f090 */
unsigned int F_0068f090(unsigned int gen_a0)
{
  GEN_ENTER(0x68f090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x70) + 0x28))))((int)this + 0x70);
  uVar2 = 0;
  if (*(int *)((int)this + 0x220) != 0) {
    iVar1 = 0;
    do {
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x224) + iVar1))) + 0x18))))
                (*(int *)((int)this + 0x224) + iVar1);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xa0;
    } while (uVar2 < *(uint *)((int)this + 0x220));
  }
  *(undefined1 *)((int)this + 0x60) = 3;
  return 0;
}

/* ref: Client::Graphics::Scene::BGObject::vf11 */
uint F_0068f100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f100u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = param_2;
  fVar4 = *(float *)(param_1 + 0x50);
  fVar5 = *(float *)(param_1 + 0x54);
  iVar6 = *((int *)GEN_TOP((*(int *)(param_1 + 0x70) + 0xa8)));
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  iVar7 = *(int *)(iVar6 + 4);
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  fVar3 = *(float *)(iVar7 + 8 + iVar6);
  *(float *)(param_2 + 0xc) = fVar3;
  param_2 = (uint)gen_fl2bits(fVar4);
  if ((float10)fVar4 < (float10)fVar5) {
    param_2 = (uint)gen_fl2bits(fVar5);
  }
  if (((float10)GEN_TOD(gen_bits2f(param_2))) < (float10)*(float *)(param_1 + 0x58)) {
    param_2 = (uint)gen_fl2bits(*(float *)(param_1 + 0x58));
  }
  *(undefined4 *)uVar8 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(uVar8 + 4) = uVar1;
  *(undefined4 *)(uVar8 + 8) = uVar2;
  *(float *)(uVar8 + 0xc) = (float)((float10)fVar3 * ((float10)GEN_TOD(gen_bits2f(param_2))));
  return uVar8;
}

/* ref: Client::Graphics::Scene::BGObject::vf12 */
uint F_0068f1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this,((undefined1 *)(gen_frame + 0x0)));
  F_0068c610(param_1,((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return param_1;
}

/* ref: FUN_0068f210 */
uint F_0068f210(unsigned int gen_a0)
{
  GEN_ENTER(0x68f210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0xa8)));
  uVar1 = *((ushort *)GEN_TOP((*(int *)(iVar2 + 4) + 0x20 + iVar2)));
  uVar3 = (uint)uVar1;
  if (uVar1 != 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),uVar3 << 6,0x40);
    *(uint *)((int)this + 0x7c) = uVar3;
  }
  return uVar3;
}

/* ref: Client::Graphics::Scene::BGObject::vf16 */
uint F_0068f250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68f250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x70) + 0xa8)));
  uVar1 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar2 + 4) + 0x20 + iVar2)));
  uVar4 = 0;
  if (uVar1 != 0) {
    piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x70) + 0xb4)));
    do {
      if (param_2 == *piVar3) {
        puVar5 = ((undefined4 *)GEN_TOP((uVar4 * 0x40 + *(int *)(this + 0x7c))));
        puVar6 = param_1;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        return (uint)param_1;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 8;
    } while (uVar4 < uVar1);
  }
  puVar5 = &REFG(float, 0x1302d00);
  puVar6 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::BGObject::vf17 */
uint F_0068f2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x70) + 0xa8)));
  uVar3 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar1 + 4) + 0x20 + iVar1)));
  uVar2 = 0;
  if (uVar3 != 0) {
    piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x70) + 0xb4)));
    do {
      if (param_1 == *piVar4) {
        return uVar2 * 0x40 + 0x30 + *(int *)(this + 0x7c);
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 8;
    } while (uVar2 < uVar3);
  }
  return (uint)(this + 0x30);
}

/* ref: Client::Graphics::Scene::BGObject::vf20 */
byte F_0068f300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  if (*(int *)(this + 0x7c) == 0) {
    return 0;
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x70) + 0xa8)));
  uVar3 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar1 + 4) + 0x20 + iVar1)));
  uVar2 = 0;
  if (uVar3 != 0) {
    piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x70) + 0xb4)));
    do {
      if (param_1 == *piVar4) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 8;
    } while (uVar2 < uVar3);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::BGObject::vf8 */
unsigned int F_0068f350(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x68f350u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  if (*(char *)(param_1 + 0x65) == '\x03') {
    F_004ffee0(*(undefined4 *)(param_1 + 0x70),param_2,param_3);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::BGObject::vf9 */
unsigned int F_0068f370(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x68f370u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  if (*(char *)(param_1 + 0x65) == '\x03') {
    F_004fff30(*(undefined4 *)(param_1 + 0x70),param_2,param_3);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::BGObject::vf15 */
byte F_0068f390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  
  if (this[0x65] != (undefined1)0x3) {
    return 0;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,((undefined1 *)(gen_frame + 0x0)));
  bVar1 = F_006601a0(param_1,(uint)((undefined1 *)(gen_frame + 0x0)));
  return bVar1;
}

/* ref: Client::Graphics::Scene::BGObject::vf14 */
byte F_0068f3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68f3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  
  if (this[0x65] != (undefined1)0x3) {
    return 0;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,((undefined1 *)(gen_frame + 0x0)));
  bVar1 = F_006602f0(param_1,(uint)((undefined1 *)(gen_frame + 0x0)),param_2);
  return bVar1;
}

/* ref: FUN_0068f430 */
uint F_0068f430(unsigned int gen_a0)
{
  GEN_ENTER(0x68f430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  short local_c;
  
  uVar1 = (uint)TRUNC((double)*(float *)(REFG(int, 0x137104c) + 0x1198) * *(double *)&REFG(undefined, 0x10b2b28));
  local_c = (short)uVar1;
  *(short *)((int)this + 0x82) = *(short *)((int)this + 0x82) + local_c;
  *(short *)((int)this + 0x84) = *(short *)((int)this + 0x84) + local_c;
  return uVar1 & 0xffff;
}

/* ref: FUN_0068f480 */
uint F_0068f480(unsigned int gen_a0)
{
  GEN_ENTER(0x68f480u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0068f4a0 */
uint F_0068f4a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68f4a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined * this;
  uint uVar2;
  
  cVar1 = *(char *)(param_1 + 0x67);
  this = *(undefined * PTR32 *)(param_1 + 0x70);
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),*(char *)(param_1 + 0x66));
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),cVar1);
  if (*(char *)(param_1 + 0x66) == -1) {
    F_00502250(this,param_2);
  }
  else {
    F_00502310(this,(*(undefined4 *)(gen_frame + 0x8)));
  }
  if (cVar1 != -1) {
    uVar2 = F_00504650(this,(*(undefined4 *)(gen_frame + 0x4)));
    return uVar2;
  }
  uVar2 = F_00504540(this,param_2);
  return uVar2;
}

/* ref: FUN_0068f510 */
byte F_0068f510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68f510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x746578;
  uVar1 = F_00513d20(param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_2,0,0,0);
  if (uVar1 == 0) {
    *(undefined1 *)((int)this + 0x65) = 4;
    return 0;
  }
  *(uint *)((int)this + 0x74) = uVar1;
  *(undefined1 *)((int)this + 0x65) = 2;
  return 1;
}

/* ref: FUN_0068f560 */
byte F_0068f560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68f560u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  
  F_004ff310(&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  (*(undefined4 *)&gen_args[2]) = 0x746578;
  uVar1 = F_00513d20(&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),0,0,0);
  if (uVar1 == 0) {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x65))) = 4;
    return 0;
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) = uVar1;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x65))) = 2;
  return 1;
}

/* ref: Client::Graphics::Scene::Light::vf11 */
unsigned int F_0068f5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar1 = *(int *)(this + 0x70);
  iVar2 = *(int *)(iVar1 + 0xc);
  puVar3 = *(undefined4 * PTR32 *)(iVar1 + 0x10);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  if (iVar2 != 5) {
    param_1[3] = *(undefined4 *)(iVar1 + 0x7c);
    return 0;
  }
  param_1[3] = (undefined4)
               gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(puVar3[8]))) * (float10)REFG(double, 0x1088108) +
                                  (float10)*(float *)(iVar1 + 0x7c)))));
  return 0;
}

/* ref: Client::Graphics::Scene::Light::vf6 */
uint F_0068f610(unsigned int gen_a0)
{
  GEN_ENTER(0x68f610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 0x60);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = F_00b81ef0(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_0068f650 */
uint F_0068f650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x68f650u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x70) + 0x14))))
                    (param_3,(undefined4)gen_fl2bits(param_4),0xff,0,0);
  return uVar1;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf11 */
unsigned int F_0068f6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f6b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = REFG(float, 0x1322864);
  *param_2 = *(undefined4 *)(in_ecx + 0x30);
  uVar1 = *(undefined4 *)(in_ecx + 0x34);
  param_2[3] = uVar2;
  param_2[1] = uVar1;
  param_2[2] = *(undefined4 *)(in_ecx + 0x38);
  return 0;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf12 */
unsigned int F_0068f6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f6e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar5 = (float10)REFG(float, 0x1302c60);
  fVar6 = (float10)REFG(float, 0x1322864);
  fVar7 = (float10)REFG(float, 0x1302c64);
  fVar4 = (float10)REFG(float, 0x1302c68);
  fVar1 = *(float *)(in_ecx + 0x30);
  fVar2 = *(float *)(in_ecx + 0x34);
  fVar3 = *(float *)(in_ecx + 0x38);
  *param_2 = ((float)GEN_TOF(((float10)fVar1 - (float10)(float)(fVar6 * fVar5))));
  param_2[1] = ((float)GEN_TOF(((float10)fVar2 - (float10)(float)(fVar7 * fVar6))));
  param_2[2] = ((float)GEN_TOF(((float10)fVar3 - (float10)(float)(fVar6 * fVar4))));
  param_2[4] = ((float)GEN_TOF(((float10)(float)(fVar6 * fVar5) + (float10)fVar1)));
  param_2[5] = ((float)GEN_TOF(((float10)(float)(fVar7 * fVar6) + (float10)fVar2)));
  param_2[6] = ((float)GEN_TOF(((float10)(float)(fVar6 * fVar4) + (float10)fVar3)));
  return 0;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf13 */
uint F_0068f7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float * pfVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  float10 fVar5;
  
  fVar5 = (float10)REFG(float, 0x1322864);
  (*(undefined * PTR32 *)(gen_frame + 0x6c)) = this;
  (*(float *)(gen_frame + 0x50)) = (float)(fVar5 * (float10)REFG(float, 0x1302c60));
  puVar3 = &REFG(float, 0x1302d00);
  puVar4 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  (*(float *)(gen_frame + 0x54)) = (float)((float10)REFG(float, 0x1302c64) * fVar5);
  (*(float *)(gen_frame + 0x58)) = (float)(fVar5 * (float10)REFG(float, 0x1302c68));
  (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x50));
  (*(float *)(gen_frame + 0x44)) = (float)((float10)REFG(float, 0x1302c64) * fVar5);
  (*(float *)(gen_frame + 0x48)) = (float)(fVar5 * (float10)REFG(float, 0x1302c68));
  F_0065f020(((undefined4 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x6c)) + 0x30) + (float10)(*(float *)(gen_frame + 0x30)))));
  (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x6c)) + 0x34) + (float10)(*(float *)(gen_frame + 0x34)))));
  (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x6c)) + 0x38) + (float10)(*(float *)(gen_frame + 0x38)))));
  pfVar1 = (float *)F_005fe770(((undefined4 *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x40)));
  *(float *)(param_1 + 0x40) = (float)((float10)*pfVar1 * (float10)REFG(float, 0x1302c60));
  *(float *)(param_1 + 0x44) = (float)((float10)pfVar1[1] * (float10)REFG(float, 0x1302c64));
  *(float *)(param_1 + 0x48) = (float)((float10)pfVar1[2] * (float10)REFG(float, 0x1302c68));
  F_005fe2e0(param_1,(uint)((undefined4 *)(gen_frame + 0x0)));
  F_005fe2e0(param_1 + 0x10,(uint)((undefined1 *)(gen_frame + 0x10)));
  F_005fe2e0(param_1 + 0x20,(uint)((undefined1 *)(gen_frame + 0x20)));
  *(float *)(param_1 + 0x30) = (*(float *)(gen_frame + 0x30));
  *(float *)(param_1 + 0x34) = (*(float *)(gen_frame + 0x34));
  *(float *)(param_1 + 0x38) = (*(float *)(gen_frame + 0x38));
  return param_1;
}

/* ref: FUN_0068f8f0 */
unsigned int F_0068f8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x68f8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float * pfVar2;
  float * pfVar3;
  
  pfVar3 = (float *)((int)this + 0x54);
  if ((float10)*(float *)((int)this + 0x54) < (float10)*(float *)((int)this + 0x50)) {
    pfVar3 = (float *)((int)this + 0x50);
  }
  pfVar2 = (float *)((int)this + 0x58);
  if ((float10)*(float *)((int)this + 0x58) < (float10)*pfVar3) {
    pfVar2 = pfVar3;
  }
  fVar1 = (float)((float10)*pfVar2 + (float10)*pfVar2);
  if ((float10)fVar1 < (float10)*(float *)((int)this + 0x84)) {
    *(undefined4 *)((int)this + 0x84) = *(undefined4 *)((int)this + 0x84);
    return 0;
  }
  *(float *)((int)this + 0x84) = fVar1;
  return 0;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf11 */
unsigned int F_0068f950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 EVar1;
  undefined * pEVar2;
  undefined * pEVar3;
  float fVar4;
  
  fVar4 = 0.0;
  EVar1 = this[0x94];
  pEVar2 = this + 0x50;
  if (EVar1 == (undefined1)0x1) {
    pEVar3 = this + 0x54;
    if ((float10)*(float *)(this + 0x54) < (float10)*(float *)pEVar2) {
      pEVar3 = pEVar2;
    }
    pEVar2 = this + 0x58;
    if ((float10)*(float *)(this + 0x58) < (float10)*(float *)pEVar3) {
      pEVar2 = pEVar3;
    }
    fVar4 = *(float *)pEVar2;
  }
  else if (EVar1 == (undefined1)0x2) {
    fVar4 = ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((((float10)*(float *)(this + 0x54) *
                                          (float10)*(float *)(this + 0x54) +
                                         (float10)*(float *)((int)(uintptr_t)pEVar2) * (float10)*(float *)pEVar2) +
                                        (float10)*(float *)(this + 0x58) *
                                        (float10)*(float *)(this + 0x58)))))));
  }
  else if (EVar1 == (undefined1)0x3) {
    if (!((float10)*(float *)(this + 0x58) < (float10)*(float *)pEVar2)) {
      pEVar2 = this + 0x58;
    }
    fVar4 = ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)(uintptr_t)pEVar2) * (float10)*(float *)pEVar2 +
                                        (float10)*(float *)(this + 0x54) *
                                        (float10)*(float *)(this + 0x54)))))));
  }
  *param_1 = *(undefined4 *)(this + 0x30);
  param_1[3] = (undefined4)gen_fl2bits(fVar4);
  param_1[1] = *(undefined4 *)(this + 0x34);
  param_1[2] = *(undefined4 *)(this + 0x38);
  return 0;
}

/* ref: FUN_0068fa50 */
unsigned int F_0068fa50(unsigned int gen_a0)
{
  GEN_ENTER(0x68fa50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (*(int *)((int)this + 0x580) != 0) {
    F_00406810(*(int *)((int)this + 0x580));
    *(undefined4 *)((int)this + 0x580) = 0;
  }
  *(undefined4 *)((int)this + 0x584) = 0;
  piVar2 = (int *)((int)this + 0x4e0);
  iVar1 = 8;
  do {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
    piVar2 = piVar2 + -0x28;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ((undefined4 *)(gen_frame + 0x0))[0] = 0;
  ((undefined4 *)(gen_frame + 0x0))[2] = 0;
  ((undefined4 *)(gen_frame + 0x0))[3] = 0;
  ((undefined4 *)(gen_frame + 0x0))[4] = 0;
  ((undefined4 *)(gen_frame + 0x0))[5] = 0;
  ((undefined4 *)(gen_frame + 0x0))[6] = 0;
  puVar3 = ((undefined4 *)(gen_frame + 0x0));
  puVar4 = (undefined4 *)((int)this + 0x10);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return 0;
}

/* ref: FUN_0068fad0 */
byte F_0068fad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68fad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  uint local_8;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar4 = *(uint *)((int)this + 0x584);
  uVar3 = 0;
  uVar6 = uVar4;
  if (uVar4 != 0) {
    piVar5 = *(int * PTR32 *)((int)this + 0x580);
    do {
      uVar6 = uVar3;
      if (*piVar5 == param_1) break;
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 1;
      uVar6 = uVar4;
    } while (uVar3 < uVar4);
  }
  if (uVar4 <= uVar6) {
    return 0;
  }
  *(uint *)((int)this + 0x584) = uVar4 - 1;
  uVar3 = uVar6;
  if (uVar6 < uVar4 - 1) {
    do {
      uVar4 = uVar3 + 1;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x580) + uVar3 * 4))) =
           *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x580) + 4 + uVar3 * 4)));
      uVar3 = uVar4;
    } while (uVar4 < *(uint *)((int)this + 0x584));
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x580) + *(int *)((int)this + 0x584) * 4))) = 0;
  local_8 = 0;
  if (*(int *)((int)this + 0x28) != 0) {
    uVar4 = uVar6 >> 5;
    uVar6 = -1 << ((byte)uVar6 & 0x1f);
    do {
      iVar2 = *(int *)((int)this + 0x10);
      piVar5 = ((int *)GEN_TOP((*(int *)((int)this + 0x590) + local_8 * 4)));
      puVar1 = (uint *)(*piVar5 + uVar4 * 4);
      uVar3 = *puVar1;
      *puVar1 = ~uVar6 & uVar3 | uVar3 >> 1 & uVar6;
      uVar3 = uVar4;
      while (uVar3 = uVar3 + 1, uVar3 <= iVar2 - 1U >> 5) {
        puVar1 = (uint *)(*piVar5 + uVar3 * 4 + -4);
        *puVar1 = *puVar1 | *(int *)(*piVar5 + uVar3 * 4) << 0x1f;
        puVar1 = (uint *)(*piVar5 + uVar3 * 4);
        *puVar1 = *puVar1 >> 1;
      }
      iVar2 = *(int *)((int)this + 0x10);
      piVar5 = ((int *)GEN_TOP((*(int *)((int)this + 0x594) + local_8 * 4)));
      puVar1 = (uint *)(*piVar5 + uVar4 * 4);
      uVar3 = *puVar1;
      *puVar1 = ~uVar6 & uVar3 | uVar3 >> 1 & uVar6;
      uVar3 = uVar4;
      while (uVar3 = uVar3 + 1, uVar3 <= iVar2 - 1U >> 5) {
        puVar1 = (uint *)(*piVar5 + uVar3 * 4 + -4);
        *puVar1 = *puVar1 | *(int *)(*piVar5 + uVar3 * 4) << 0x1f;
        puVar1 = (uint *)(*piVar5 + uVar3 * 4);
        *puVar1 = *puVar1 >> 1;
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)((int)this + 0x28));
  }
  return 1;
}

/* ref: FUN_0068fc50 */
unsigned int F_0068fc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68fc50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_c;
  int local_8;
  
  uVar2 = *(int *)((int)this + 0x584) + 0x1fU >> 5;
  local_c = 0;
  if (uVar2 != 0) {
    local_8 = 0;
    do {
      uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0x59c) + local_c * 4)));
      if (uVar1 != 0) {
        uVar3 = 0;
        uVar4 = 1;
        do {
          if ((uVar1 & uVar4) != 0) {
            ((code *)*(gen_code32 *)(*param_1 + 4))
                      (param_1,local_8 + uVar3,
                       *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x580) + (local_8 + uVar3) * 4))));
          }
          uVar3 = uVar3 + 1;
          uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
        } while (uVar3 < 0x20);
      }
      local_8 = local_8 + 0x20;
      local_c = local_c + 1;
    } while (local_c < uVar2);
  }
  return 0;
}

/* ref: FUN_0068fce0 */
byte F_0068fce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68fce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  byte bVar1;
  undefined * this_00;
  uint in_ecx;
  
  if ((*param_1 == 'b') && (param_1[1] == 'g')) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  *(byte *)((int)this + 0x1e4) =
       *(byte *)((int)this + 0x1e4) ^ (*(byte *)((int)this + 0x1e4) ^ bVar1) & 1;
  this_00 = (undefined *)F_00990ad0(param_1);
  in_ecx = F_009cfa30(this_00,(int)this + 0x70);
  *(uint *)((int)this + 0x234) = in_ecx;
  F_00982b60(in_ecx,(int)this + 0x1e0);
  F_00982b20(this_00);
  *(undefined1 *)((int)this + 0x65) = 2;
  return 1;
}

/* ref: FUN_0068fd50 */
uint F_0068fd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68fd50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0068b800((undefined *)((int)this + -0x1e0));
  return uVar1;
}

/* ref: FUN_0068fd60 */
unsigned int F_0068fd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68fd60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + -0x17b) = 0;
  if (*(int *)(in_ecx + 0x54) != 0) {
    F_00982b60(*(int *)(in_ecx + 0x54),0);
    *(undefined4 *)(in_ecx + 0x54) = 0;
  }
  return 0;
}

/* ref: FUN_0068fd90 */
uint F_0068fd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x68fd90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  code * pcVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  bVar2 = F_00990c00(*(undefined4 *)((int)this + 0x234));
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) {
    uVar3 = F_00982ce0(*(undefined4 *)((int)this + 0x234));
    if ((char)uVar3 != '\0') {
      pcVar1 = *(gen_code32 *)(*(int *)this + 0x28);
      *(undefined1 *)((int)this + 0x65) = 3;
      uVar3 = (*pcVar1)(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar3;
    }
  }
  else {
    *(undefined1 *)((int)this + 0x65) = 4;
  }
  return uVar3;
}

/* ref: Client::Graphics::Scene::VfxObject::vf6 */
uint F_0068fdd0(unsigned int gen_a0)
{
  GEN_ENTER(0x68fdd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 0x60);
  if (((byte)this[0x1e4] & 1) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00b81ef0(this_00,uVar1);
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x10abc60);
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x10abc60);
  (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x10abc60);
  (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x10abc38);
  (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x10abc38);
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10abc38);
  uVar1 = F_00b81ef0(this_00,&(*(undefined4 *)(gen_frame + 0x20)));
  return uVar1;
}

/* ref: Client::Graphics::Scene::VfxObject::vf15 */
uint F_0068fe60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68fe60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(char *)(in_ecx + 0x65) != '\x03') {
    return in_EAX & 0xffffff00;
  }
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(in_ecx + 0x30);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(in_ecx + 0x38);
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x23c) + (float10)*(float *)(in_ecx + 0x34))));
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(in_ecx + 0x238);
  uVar1 = F_005ff5c0(param_2,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: Client::Graphics::Scene::VfxObject::vf14 */
byte F_0068fee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68fee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  if (this[0x65] != (undefined1)0x3) {
    return 0;
  }
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(this + 0x30);
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x23c) + (float10)*(float *)(this + 0x34))));
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(this + 0x38);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(this + 0x238);
  bVar1 = F_006aeff0(param_1,&(*(undefined4 *)(gen_frame + 0x0)),param_2);
  return bVar1;
}

/* ref: Client::Graphics::Scene::VfxObject::vf18 */
uint F_0068ff60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68ff60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this,((undefined1 *)(gen_frame + 0x0)),param_2);
  fVar1 = *(float *)(uVar5 + 0x34);
  fVar2 = *(float *)(this + 0x34);
  fVar3 = *(float *)(uVar5 + 0x38);
  fVar4 = *(float *)(this + 0x38);
  *param_1 = ((float)GEN_TOF(((float10)*(float *)(uVar5 + 0x30) - (float10)*(float *)(this + 0x30))));
  param_1[1] = (float)((float10)fVar1 - (float10)fVar2);
  param_1[2] = (float)((float10)fVar3 - (float10)fVar4);
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return (uint)param_1;
}

/* ref: FUN_0068ffe0 */
uint F_0068ffe0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x68ffe0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  uint uVar1;
  
  *(float *)((int)param_1 + 0x218) = param_3;
  *(float *)((int)param_1 + 0x21c) = param_2;
  *(float *)((int)param_1 + 0x220) = param_4;
  *(float *)((int)param_1 + 0x224) = param_5;
  uVar1 = F_0068b800(param_1);
  return uVar1;
}

/* ref: FUN_00690020 */
uint F_00690020(unsigned int gen_a0)
{
  GEN_ENTER(0x690020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (*(int *)(in_ecx + 0x234) != 0) {
    bVar1 = F_00990c00(*(int *)(in_ecx + 0x234));
    if (bVar1 == 0) {
      uVar2 = F_00982ce0(*(undefined4 *)(in_ecx + 0x234));
      if ((char)uVar2 != '\0') {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0x234) + 0x40))) + 100)));
      }
    }
  }
  return 0;
}

/* ref: FUN_00690057 */
unsigned int F_00690057(void)
{
  GEN_ENTER(0x690057u, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_0069006c */
unsigned int F_0069006c(void)
{
  GEN_ENTER(0x69006cu, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_00690078 */
uint F_00690078(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x690078u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int in_ebp = (int)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  undefined * pvVar8;
  
  iVar2 = *(int *)(in_ecx + 0xe090);
  *(int *)(in_ebp + -4) = in_ecx;
  if (iVar2 != 0) {
    F_0050c620(iVar2,0,0);
    *(undefined4 *)(in_ecx + 0xe090) = 0;
  }
  iVar2 = *(int *)(in_ecx + 0xe0a0);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
    iVar5 = iVar2 + -4;
    iVar6 = iVar3 + -1;
    *(int *)(in_ebp + -8) = iVar5;
    pvVar8 = (undefined *)(iVar2 + iVar3 * 0xc);
    if (-1 < iVar6) {
      do {
        pvVar8 = (undefined *)((int)pvVar8 + -0xc);
        F_0068b9a0(pvVar8);
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
      iVar5 = *(int *)(in_ebp + -8);
    }
    F_00406b30(iVar5);
    in_ecx = *(int *)(in_ebp + -4);
    *(undefined4 *)(in_ecx + 0xe0a0) = 0;
  }
  *(undefined1 *)(in_ecx + 0xe09d) = 0;
  piVar7 = (int *)(in_ecx + 0xe094);
  *(undefined4 *)(in_ebp + -4) = 2;
  do {
    if (*piVar7 != 0) {
      F_0050c620(*piVar7,0,0);
      *piVar7 = 0;
    }
    piVar7 = piVar7 + 1;
    piVar1 = (int *)(in_ebp + -4);
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  pvVar8 = (undefined *)(in_ecx + 0x50);
  *(undefined4 *)(in_ebp + -4) = 0x10;
  do {
    F_0064ad80(pvVar8);
    pvVar8 = (undefined *)((int)pvVar8 + 0x34);
    piVar7 = (int *)(in_ebp + -4);
    *piVar7 = *piVar7 + -1;
  } while (*piVar7 != 0);
  pvVar8 = (undefined *)(in_ecx + 0x390);
  *(undefined4 *)(in_ebp + -4) = 0x40;
  do {
    F_0064ad80(pvVar8);
    pvVar8 = (undefined *)((int)pvVar8 + 0x34);
    piVar7 = (int *)(in_ebp + -4);
    *piVar7 = *piVar7 + -1;
  } while (*piVar7 != 0);
  pvVar8 = (undefined *)(in_ecx + 0x1090);
  *(undefined4 *)(in_ebp + -4) = 0x400;
  do {
    F_0064ad80(pvVar8);
    pvVar8 = (undefined *)((int)pvVar8 + 0x34);
    piVar7 = (int *)(in_ebp + -4);
    *piVar7 = *piVar7 + -1;
    uVar4 = REFG(float, 0x1090998);
  } while (*piVar7 != 0);
  *(undefined4 *)(in_ecx + 0x10) = REFG(float, 0x1090998);
  *(undefined4 *)(in_ecx + 0x14) = uVar4;
  *(undefined4 *)(in_ecx + 0x18) = uVar4;
  *(undefined1 *)(in_ecx + 0xe0a8) = 0;
  *(undefined4 *)(in_ecx + 0xe0a4) = 0;
  return 0;
}

/* ref: FUN_006901b0 */
uint F_006901b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6901b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xe094 + param_2 * 4) + 0xfc)));
}

/* ref: FUN_006901d0 */
float10 F_006901d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6901d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(in_ecx + 4))) {
  case 0: ;
  case 1: ;
    if (param_2 == 0) {
      return (float10)REFG(float, 0x10b2b38);
    }
    if (param_2 == 1) {
LAB_00690226: ;
      return (float10)*(float *)&REFG(undefined, 0x10b2b40);
    }
    if (param_2 == 2) goto LAB_0069023e;
    break;
  case 2: ;
    if (param_2 == 0) goto LAB_00690226;
    if (param_2 == 1) {
      return (float10)*(float *)&REFG(undefined, 0x10b2b44);
    }
    if (param_2 == 2) {
      return (float10)*(float *)&REFG(undefined, 0x10b2b48);
    }
    break;
  case 3: ;
    if (param_2 == 0) {
      return (float10)*(float *)&REFG(undefined, 0x10b2b4c);
    }
    if (param_2 == 1) {
LAB_0069023e: ;
      return (float10)*(float *)&REFG(undefined, 0x10b2b3c);
    }
    if (param_2 == 2) {
      return (float10)*(float *)&REFG(undefined, 0x10b2b50);
    }
  }
  return (float10)0;
}

/* ref: FUN_00690270 */
uint F_00690270(unsigned int gen_a0)
{
  GEN_ENTER(0x690270u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00690070();
  *(undefined1 *)(in_ecx + 0x1c190) = 0;
  return uVar1;
}

/* ref: FUN_00690290 */
uint F_00690290(unsigned int gen_a0)
{
  GEN_ENTER(0x690290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  bool bVar1;
  uint uVar2;
  short * psVar3;
  uint uVar4;
  
  *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) & 0xfffffff7;
  *(undefined4 *)((int)this + 0x5c) = 0;
  this_00 = *(undefined * PTR32 *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  bVar1 = false;
  psVar3 = (short *)((int)this + 0x40);
  uVar4 = 0;
  do {
    uVar2 = F_00623160(this_00,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x1322e24) + uVar4))));
    *psVar3 = (short)uVar2;
    if ((short)uVar2 != -1) {
      bVar1 = true;
    }
    uVar4 = uVar4 + 4;
    psVar3 = psVar3 + 1;
  } while (uVar4 < 0xc);
  if (bVar1) {
    *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) | 8;
  }
  return uVar2;
}

/* ref: FUN_00690310 */
byte F_00690310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x690310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    bVar1 = F_0061f450(this,0);
    if (bVar1 != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),param_1 << 6,0x10);
      *(uint *)((int)this + 0x4c) = uVar2;
      if (uVar2 != 0) goto LAB_0069034f;
    }
    return 0;
  }
LAB_0069034f: ;
  *(int *)((int)this + 0x3c) = param_1;
  *(undefined4 *)((int)this + 0x38) = 0;
  return 1;
}

/* ref: FUN_00690370 */
unsigned int F_00690370(unsigned int gen_a0)
{
  GEN_ENTER(0x690370u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b2b58));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0xffffffff;
  in_ecx[6] = 0;
  in_ecx[10] = uVar1;
  in_ecx[0xb] = uVar1;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[0xc] = 0;
  return 0;
}

/* ref: FUN_006903c0 */
uint F_006903c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6903c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)((int)this + 8);
  uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 200))(piVar4);
  if (uVar3 == 4) {
    piVar4 = (int *)piVar4[5];
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 200))(piVar4);
  iVar1 = REFG(int, 0x137129c);
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x128))(piVar4);
      bVar2 = F_00b51e00(*(undefined * PTR32 *)(iVar1 + 0x10),(uVar3 & 0xffff) + 10000);
      if (bVar2 != 0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x128))(piVar4);
        F_00c472af(param_1,param_2,"chara/xls/attachOffset/d%04d.atch",uVar3 & 0xffff);
        return param_1;
      }
    }
    else if (uVar3 == 3) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x128))(piVar4);
      bVar2 = F_00b51e00(*(undefined * PTR32 *)(iVar1 + 0x10),uVar3 & 0xffff);
      if (bVar2 != 0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x128))(piVar4);
        F_00c472af(param_1,param_2,"chara/xls/attachOffset/m%04d.atch",uVar3 & 0xffff);
        return param_1;
      }
    }
    return 0;
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x128))(piVar4);
  F_00c472af(param_1,param_2,"chara/xls/attachOffset/c%04d.atch",uVar3 & 0xffff);
  return param_1;
}

/* ref: FUN_006904e0 */
byte F_006904e0(void)
{
  GEN_ENTER(0x6904e0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00690510 */
unsigned int F_00690510(unsigned int gen_a0)
{
  GEN_ENTER(0x690510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x34) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x38) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x40) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x44) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x48) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x4c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x50) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 0x54) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x58) = REFG(float, 0x1302e18);
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 3;
  *(undefined * PTR32 *)((int)this + 0x18) = this;
  *(undefined * PTR32 *)((int)this + 0x1c) = this;
  return 0;
}

/* ref: Client::Graphics::Scene::Object::vf1 */
uint F_006905b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6905b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(this + 0x14);
  if ((iVar1 != 0) && (*(undefined * PTR32 *)(iVar1 + 0x20) == this)) {
    *(uint *)(iVar1 + 0x20) =
         -(uint)(*(undefined * PTR32 *)(this + 0x1c) != this) & (uint)*(undefined * PTR32 *)(this + 0x1c);
  }
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + 0x18))) = *(undefined4 *)(this + 0x18);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0x1c))) = *(undefined4 *)(this + 0x1c);
  iVar1 = *(int *)(this + 0x28);
  uVar2 = *(uint *)(this + 0x24) & 3;
  uVar3 = *(uint *)(this + 0x24) & 0xfffffffc;
  *(undefined * PTR32 *)(this + 0x18) = this;
  *(undefined * PTR32 *)(this + 0x1c) = this;
  *(undefined4 *)(this + 0x14) = 0;
  *(uint *)(this + 0x24) = uVar2;
  *(undefined4 *)(this + 0x28) = 0;
  if (uVar3 != 0) {
    *(int *)(uVar3 + 0x28) = iVar1;
  }
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0x24) & 3 | uVar3;
    *(uint *)(iVar1 + 0x24) = uVar2;
  }
  *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
  return uVar2;
}

/* ref: FUN_00690620 */
unsigned int F_00690620(unsigned int gen_a0)
{
  GEN_ENTER(0x690620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x1371294);
  if ((*(byte *)((int)this + 0x24) & 1) != 0) {
    iVar1 = *(int *)(REFG(undefined4, 0x1371294) + 0x28);
    *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 3 | REFG(undefined4, 0x1371294);
    *(int *)((int)this + 0x28) = iVar1;
    *(undefined * PTR32 *)(uVar2 + 0x28) = this;
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) & 3 | (uint)this;
    }
    *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffe;
  }
  return 0;
}

/* ref: FUN_00690660 */
uint F_00690660(unsigned int gen_a0)
{
  GEN_ENTER(0x690660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a6c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2b9c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[1])REFP(0x10b2b94));
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a94));
  *(undefined4 *)((int)this + 0x8c) = 0;
  return (uint)this;
}

/* ref: FUN_006906c0 */
uint F_006906c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6906c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2bb8));
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(uint *)((int)this + 200) = *(uint *)((int)this + 200) | 3;
  return (uint)this;
}

/* ref: FUN_006906f0 */
byte F_006906f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6906f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 3;
  uVar1 = F_00638150();
  *(uint *)((int)this + 0xc0) = uVar1;
  return uVar1 != 0;
}

/* ref: Client::Graphics::Scene::Camera::vf1 */
uint F_00690710(unsigned int gen_a0)
{
  GEN_ENTER(0x690710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0xc0);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0xc0) = 0;
  }
  uVar2 = F_006905b0((undefined *)this);
  return uVar2;
}

/* ref: FUN_00690d40 */
uint F_00690d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x690d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  
  (*(float *)(gen_frame + 0x0)) = (float)param_2;
  (*(float *)(gen_frame + 0x4)) = (float)param_3;
  fVar5 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x90);
  if (*(int *)(REFG(int, 0x1370b90) + 0x90) < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  iVar3 = *(int *)(REFG(int, 0x1370b90) + 0x94);
  (*(int *)(gen_frame + 0x2c)) = iVar3;
  fVar6 = (float10)iVar3;
  if (iVar3 < 0) {
    fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar1 = (float)((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1092098));
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = (float)((float10)*(double *)&REFG(undefined, 0x1092098) * (float10)param_3);
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar1 = (float)((float10)fVar1 / (float10)(float)fVar5);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = (float)((float10)fVar2 / (float10)(float)fVar6);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar1 = (float)((float10)fVar1 - (float10)1);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar2 - (float10)1) * (float10)REFG(double, 0x1094890))));
  (*(float *)(gen_frame + 0x14)) = fVar1;
  (*(float *)(gen_frame + 0x4)) = fVar1;
  uVar4 = F_0068bdf0(this,param_1,&(*(float *)(gen_frame + 0x0)));
  return uVar4;
}

/* ref: FUN_00690e20 */
uint F_00690e20(unsigned int gen_a0)
{
  GEN_ENTER(0x690e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((*(byte *)((int)this + 200) & 1) == 0) {
    (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1302c80);
    (*(float *)(gen_frame + 0x24)) = gen_bits2f(REFG(float, 0x1302c84));
    (*(float *)(gen_frame + 0x28)) = gen_bits2f(REFG(float, 0x1302c88));
    uVar4 = F_004f41e0(&(*(float *)(gen_frame + 0x20)),(int)this + 0x40);
    *(float *)((int)this + 0x70) = (*(float *)(gen_frame + 0x20));
    *(float *)((int)this + 0x74) = (*(float *)(gen_frame + 0x24));
    *(float *)((int)this + 0x78) = (*(float *)(gen_frame + 0x28));
    return uVar4;
  }
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x60) - (float10)*(float *)((int)this + 0x30))));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 100) - (float10)*(float *)((int)this + 0x34))));
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x68) - (float10)*(float *)((int)this + 0x38))));
  (*(float *)(gen_frame + 0x8)) = fVar3;
  (*(float *)(gen_frame + 0x20)) = fVar1;
  (*(float *)(gen_frame + 0x24)) = fVar2;
  (*(float *)(gen_frame + 0x28)) = fVar3;
  F_0046f390(&(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x3c)) = *(float *)((int)this + 0x78);
  (*(float *)(gen_frame + 0x38)) = *(float *)((int)this + 0x74);
  fVar5 = (float10)*(float *)((int)this + 0x78);
  fVar6 = (float10)*(float *)((int)this + 0x74);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x24)) * fVar5 - (float10)(*(float *)(gen_frame + 0x28)) * fVar6);
  (*(float *)(gen_frame + 0x38)) = *(float *)((int)this + 0x70);
  fVar7 = (float10)*(float *)((int)this + 0x70);
  (*(float *)(gen_frame + 0x14)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)(gen_frame + 0x20)) * fVar5);
  (*(float *)(gen_frame + 0x18)) = (float)(fVar6 * (float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x24)) * fVar7);
  F_0046f390(&(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x0)) = (float)((float10)(*(float *)(gen_frame + 0x28)) * (float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x24)) * (float10)(*(float *)(gen_frame + 0x18)));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x20)) * (float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x28)));
  (*(float *)(gen_frame + 0x8)) = (float)((float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x20)) * (float10)(*(float *)(gen_frame + 0x14)));
  uVar4 = F_0046f390(&(*(float *)(gen_frame + 0x0)));
  *(float *)((int)this + 0x70) = (*(float *)(gen_frame + 0x0));
  *(float *)((int)this + 0x74) = (*(float *)(gen_frame + 0x4));
  *(float *)((int)this + 0x78) = (*(float *)(gen_frame + 0x8));
  return uVar4;
}

/* ref: FUN_00690f90 */
uint F_00690f90(unsigned int gen_a0)
{
  GEN_ENTER(0x690f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float * pfVar5;
  float10 fVar6;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  if ((*(byte *)((int)this + 200) & 1) == 0) {
    uVar4 = F_00666e10((undefined *)((int)this + 0x80),(int)this + 0x30,(int)this + 0x40,
                         (int)this + 0x50);
    return uVar4;
  }
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x60) - (float10)*(float *)((int)this + 0x30))));
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 100) - (float10)*(float *)((int)this + 0x34))));
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x68) - (float10)*(float *)((int)this + 0x38))));
  (*(float *)(gen_frame + 0x18)) = fVar3;
  (*(float *)(gen_frame + 0x20)) = fVar1;
  (*(float *)(gen_frame + 0x24)) = fVar2;
  (*(float *)(gen_frame + 0x28)) = fVar3;
  fVar1 = ((float)GEN_TOF((((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2) +
                 (float10)fVar3 * (float10)fVar3)));
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  if ((float10)fVar1 < (float10)REFG(float, 0x1094778)) {
    (*(float *)(gen_frame + 0x20)) = 0.0;
    (*(float *)(gen_frame + 0x24)) = 0.0;
    (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1087f04);
  }
  F_005fe2e0(&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x3c)) = *(float *)((int)this + 0xc4);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xc4) * (float10)REFG(double, 0x1088108))));
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  fVar6 = F_00c4cde0(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)fVar1);
  fVar1 = (float)fVar6;
  (*(float *)(gen_frame + 0x38)) = fVar1;
  fVar6 = (float10)fVar1;
  (*(float *)(gen_frame + 0x10)) = (float)(fVar6 * (float10)(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x4)) * fVar6);
  (*(float *)(gen_frame + 0x18)) = (float)(fVar6 * (float10)(*(float *)(gen_frame + 0x8)));
  fVar6 = F_00c4ca20(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)(*(float *)(gen_frame + 0x3c)));
  (*(float *)(gen_frame + 0x38)) = (float)fVar6;
  (*(float *)(gen_frame + 0x1c)) = (float)fVar6;
  pfVar5 = (float *)F_004f4130(&(*(float *)(gen_frame + 0x20)),(int)this + 0x70,&(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x0)) = *pfVar5;
  (*(float *)(gen_frame + 0x4)) = pfVar5[1];
  (*(float *)(gen_frame + 0x8)) = pfVar5[2];
  uVar4 = F_004f4430((undefined *)((int)this + 0x80),(float *)((int)this + 0x30),(int)this + 0x60,
                       &(*(float *)(gen_frame + 0x0)));
  return uVar4;
}

/* ref: FUN_00691130 */
uint F_00691130(unsigned int gen_a0)
{
  GEN_ENTER(0x691130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2bb8));
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(uint *)((int)this + 200) = *(uint *)((int)this + 200) | 3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2bd4));
  return (uint)this;
}

/* ref: Client::Graphics::Scene::CameraMaya::vf1 */
uint F_00691170(unsigned int gen_a0)
{
  GEN_ENTER(0x691170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0xc0);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0xc0) = 0;
  }
  uVar2 = F_006905b0((undefined *)this);
  return uVar2;
}

/* ref: FUN_006911a0 */
uint F_006911a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6911a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float * pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float * pfVar5;
  undefined * this_00;
  float fVar6;
  
  if (*(int *)((int)this + 0xd4) == 0) {
    *(float *)((int)this + 0x60) = *param_1;
    *(float *)((int)this + 100) = param_1[1];
    *(float *)((int)this + 0x68) = param_1[2];
    pfVar5 = param_1;
  }
  else {
    pfVar5 = ((float *)GEN_TOP((*(int *)((int)this + 0xd4) + -1)));
    if (pfVar5 < &REFG(undefined, 0x6)) {
      pfVar5 = (float *)((int)this + 0x60);
      pfVar1 = (float *)((int)this + 0x30);
      (*(float *)(gen_frame + 0x10)) = (float)((float10)*param_1 - (float10)*pfVar5);
      fVar6 = ((float)GEN_TOF(((float10)param_1[1] - (float10)*(float *)((int)this + 100))));
      (*(float *)(gen_frame + 0x14)) = fVar6;
      fVar2 = ((float)GEN_TOF(((float10)param_1[2] - (float10)*(float *)((int)this + 0x68))));
      (*(float *)(gen_frame + 0x18)) = fVar2;
      fVar3 = ((float)GEN_TOF(((float10)*pfVar1 + (float10)(float)((float10)*param_1 - (float10)*pfVar5))));
      (*(float *)(gen_frame + 0x0)) = fVar3;
      fVar6 = ((float)GEN_TOF(((float10)fVar6 + (float10)*(float *)((int)this + 0x34))));
      (*(float *)(gen_frame + 0x4)) = fVar6;
      fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x38) + (float10)fVar2)));
      (*(float *)(gen_frame + 0x8)) = fVar2;
      *pfVar1 = fVar3;
      *(float *)((int)this + 0x34) = fVar6;
      *(float *)((int)this + 0x38) = fVar2;
      *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 2;
      *pfVar5 = *param_1;
      *(float *)((int)this + 100) = param_1[1];
      *(float *)((int)this + 0x68) = param_1[2];
      iVar4 = *(int *)((int)this + 0xc0);
      if (*(char *)(iVar4 + 0xb8) != '\0') {
        this_00 = (undefined *)F_0046f4a0(&(*(float *)(gen_frame + 0x0)),pfVar1,pfVar5);
        fVar6 = F_004bd280(this_00);
        (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1094884);
        fVar6 = (float)((float10)fVar6 + (float10)fVar6);
        (*(float *)(gen_frame + 0x2c)) = fVar6;
        pfVar5 = &(*(float *)(gen_frame + 0x2c));
        if (!(REFG(double, 0x1094800) < (double)fVar6)) {
          pfVar5 = &(*(float *)(gen_frame + 0x28));
        }
        *(float *)(iVar4 + 0xb4) = *pfVar5;
        return (uint)pfVar5;
      }
    }
  }
  return (uint)pfVar5;
}

/* ref: FUN_006912b0 */
uint F_006912b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6912b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 0xb;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  return (uint)this;
}

/* ref: Client::Graphics::Scene::DrawObject::vf1 */
uint F_006912f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6912f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(undefined4, 0x1370c1c),*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  uVar1 = F_006905b0((undefined *)this);
  return uVar1;
}

/* ref: FUN_00691320 */
uint F_00691320(float gen_a0)
{
  GEN_ENTER(0x691320u, 0u, 0u, 0u, 0u);
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar1 = &(*(float *)&gen_args[0]);
  if (!((*(float *)&gen_args[0]) < REFG(float, 0x1087f04))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  return (uint)pfVar1;
}

/* ref: FUN_00691360 */
byte F_00691360(unsigned int gen_a0)
{
  GEN_ENTER(0x691360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  *(uint *)((int)this + 0xf0) = *(uint *)((int)this + 0xf0) | 2;
  iVar2 = REFG(int, 0x1370b90);
  uVar3 = F_004dcd60(0x10,4,0);
  *(uint *)((int)this + 0x98) = uVar3;
  if (uVar3 != 0) {
    uVar3 = F_004dcd60(0x10,4,0);
    *(uint *)((int)this + 0x9c) = uVar3;
    if (uVar3 != 0) {
      uVar3 = F_004dcd60(0x70,4,0);
      *(uint *)((int)this + 0xa0) = uVar3;
      if (uVar3 != 0) {
        uVar3 = F_004dcd60(0x10,4,7);
        *(uint *)((int)this + 0xa4) = uVar3;
        if (uVar3 != 0) {
          uVar3 = F_004dcd60(0x10,4,0);
          *(uint *)((int)this + 0xa8) = uVar3;
          if ((uVar3 != 0) &&
             (puVar4 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x98),0,0x10,2),
             puVar4 != (undefined4 *)0x0)) {
            *puVar4 = REFG(undefined4, 0x1302e44);
            puVar4[1] = REFG(undefined4, 0x1302e48);
            puVar4[2] = REFG(undefined4, 0x1302e4c);
            puVar4[3] = REFG(undefined4, 0x1302e50);
            *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x98) + 0x24))) = 0;
            puVar4 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x9c),0,0x10,2);
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = REFG(undefined4, 0x1302e54);
              puVar4[1] = REFG(undefined4, 0x1302e58);
              puVar4[2] = REFG(undefined4, 0x1302e5c);
              puVar4[3] = REFG(undefined4, 0x1302e60);
              *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x9c) + 0x24))) = 0;
              puVar4 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xa0),0,0x70,2);
              uVar1 = REFG(float, 0x1087f04);
              if (puVar4 == (undefined4 *)0x0) {
                return 0;
              }
              *puVar4 = REFG(undefined4, 0x1302e54);
              puVar4[1] = REFG(undefined4, 0x1302e58);
              puVar4[2] = REFG(undefined4, 0x1302e5c);
              puVar4[3] = REFG(undefined4, 0x1302e60);
              puVar4[4] = uVar1;
              puVar4[5] = uVar1;
              puVar4[6] = uVar1;
              puVar4[7] = 0;
              puVar4[8] = REFG(undefined4, 0x1302e54);
              puVar4[9] = REFG(undefined4, 0x1302e58);
              puVar4[10] = REFG(undefined4, 0x1302e5c);
              puVar4[0xb] = REFG(undefined4, 0x1302e60);
              puVar4[0xc] = REFG(undefined4, 0x1302e54);
              puVar4[0xd] = REFG(undefined4, 0x1302e58);
              puVar4[0xe] = REFG(undefined4, 0x1302e5c);
              puVar4[0xf] = REFG(undefined4, 0x1302e60);
              puVar4[0x10] = REFG(undefined4, 0x1302e54);
              puVar4[0x11] = REFG(undefined4, 0x1302e58);
              puVar4[0x12] = REFG(undefined4, 0x1302e5c);
              puVar4[0x13] = REFG(undefined4, 0x1302e60);
              puVar4[0x14] = REFG(undefined4, 0x1302e54);
              puVar4[0x15] = REFG(undefined4, 0x1302e58);
              puVar4[0x16] = REFG(undefined4, 0x1302e5c);
              puVar4[0x17] = REFG(undefined4, 0x1302e60);
              puVar4[0x18] = uVar1;
              puVar4[0x19] = uVar1;
              puVar4[0x1a] = uVar1;
              puVar4[0x1b] = 0;
              *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x24))) = 0;
              puVar4 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xa4),0,0x10,2);
              if (puVar4 == (undefined4 *)0x0) {
                return 0;
              }
              *puVar4 = REFG(undefined4, 0x1302e54);
              puVar4[1] = REFG(undefined4, 0x1302e58);
              puVar4[2] = REFG(undefined4, 0x1302e5c);
              puVar4[3] = REFG(undefined4, 0x1302e60);
              *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0x24))) = 0;
              puVar4 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xa8),0,0x10,2);
              *puVar4 = 0;
              puVar4[1] = 0;
              puVar4[2] = 0;
              puVar4[3] = 0;
              *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa8) + 0x24))) = 0;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x1c),"g_CustomizeParameter");
              *(uint *)((int)this + 0xbc) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x1c),"g_DecalColor");
              *(uint *)((int)this + 0xc0) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x20),"g_SamplerDecal");
              *(uint *)((int)this + 0xc4) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x20),"g_SamplerTileDiffuse");
              *(uint *)((int)this + 200) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x20),"g_SamplerTileNormal");
              *(uint *)((int)this + 0xcc) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x20),"g_SamplerOcclusion");
              *(uint *)((int)this + 0xd0) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x1c),"g_InstanceParameter");
              *(uint *)((int)this + 0xd4) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x1c),"g_MaterialParameterDynamic");
              *(uint *)((int)this + 0xd8) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x1c),"g_SceneParameter");
              *(uint *)((int)this + 0xdc) = uVar3;
              return 1;
            }
          }
        }
      }
    }
  }
  ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  return 0;
}

/* ref: FUN_006916f0 */
uint F_006916f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6916f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = (int)this + 0x78;
  if (*(int *)((int)this + 0x78) != 0) {
    uVar1 = F_0068ce50(uVar1,(int)this + 0x7c);
  }
  return uVar1;
}

/* ref: FUN_00691710 */
uint F_00691710(unsigned int gen_a0)
{
  GEN_ENTER(0x691710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = (int)this + 0x80;
  if (*(int *)((int)this + 0x80) != 0) {
    uVar1 = F_0068ce50(uVar1,(int)this + 0x84);
  }
  return uVar1;
}

/* ref: FUN_00691730 */
uint F_00691730(unsigned int gen_a0)
{
  GEN_ENTER(0x691730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = (int)this + 0x88;
  if (*(int *)((int)this + 0x88) != 0) {
    uVar1 = F_0068ce50(uVar1,(int)this + 0x8c);
  }
  return uVar1;
}

/* ref: FUN_00691770 */
uint F_00691770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x691770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 0xa8 +
           *(int *)((int)this + 0xbc) * 4))) = param_1;
  return param_1;
}

/* ref: FUN_00691870 */
unsigned int F_00691870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x691870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *((undefined4 *)GEN_TOP((iVar1 + 0xa8 + *(int *)((int)this + 0xd4) * 4))) = param_1;
  *((undefined4 *)GEN_TOP((iVar1 + 0xa8 + *(int *)((int)this + 0xdc) * 4))) = *(undefined4 *)((int)this + 0xa8)
  ;
  return 0;
}

/* ref: FUN_006918c0 */
unsigned int F_006918c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6918c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  if (param_1 == 0) {
    *((undefined4 *)GEN_TOP((iVar1 + 0xa8 + *(int *)((int)this + 0xd8) * 4))) =
         *(undefined4 *)((int)this + 0xa4);
    return 0;
  }
  *((int *)GEN_TOP((iVar1 + 0xa8 + *(int *)((int)this + 0xd8) * 4))) = param_1;
  return 0;
}

/* ref: FUN_00691910 */
unsigned int F_00691910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x691910u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float * pfVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if (param_3 == 0) {
    *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x10b2cd0));
    fVar1 = REFG(float, 0x10944e8);
    param_2[1] = GEN_FLT_TO(param_2[1], REFG(float, 0x10944e8));
    param_2[2] = fVar1;
    param_2[3] = GEN_FLT_TO(param_2[3], REFG(float, 0x10b2ccc));
    return 0;
  }
  if ((REFG(undefined4, 0x1488300) & 1) == 0) {
    *(float *)&REFG(undefined, 0x14882f0) = REFG(float, 0x10b2ccc);
    REFG(undefined4, 0x1488300) = REFG(undefined4, 0x1488300) | 1;
    *(float *)&REFG(undefined, 0x14882f4) = REFG(float, 0x109483c);
    *(float *)&REFG(undefined, 0x14882f8) = REFG(float, 0x109483c);
    *(float *)&REFG(undefined, 0x14882fc) = REFG(float, 0x10b2cc8);
  }
  if ((REFG(undefined4, 0x1488300) & 2) == 0) {
    *(float *)&REFG(undefined, 0x14882e0) = REFG(float, 0x10b2cc4);
    *(float *)&REFG(undefined, 0x14882e4) = REFG(float, 0x10a0da0);
    REFG(undefined4, 0x1488300) = REFG(undefined4, 0x1488300) | 2;
    *(float *)&REFG(undefined, 0x14882e8) = REFG(float, 0x10b2cc0);
    *(float *)&REFG(undefined, 0x14882ec) = REFG(float, 0x10b2cbc);
  }
  fVar4 = F_004a3ed0(param_3 + 0x70);
  fVar1 = (float)fVar4;
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  if (*(char *)(REFG(int, 0x1371290) + 0x82c) == '\0') {
    pfVar3 = &(*(float *)(gen_frame + 0x1c));
    fVar4 = (float10)1;
    fVar2 = ((float)GEN_TOF((fVar4 - (float10)*(float *)(param_3 + 0x7c))));
    (*(float *)(gen_frame + 0x18)) = fVar2;
    fVar5 = (float10)fVar2;
    fVar2 = (float)(fVar4 - fVar5 * fVar5);
    (*(float *)(gen_frame + 0x18)) = fVar2;
    fVar5 = (float10)fVar2;
    fVar1 = ((float)GEN_TOF(((float10)fVar1 *
                   ((float10)*(float *)(REFG(int, 0x1371290) + 0x668) * fVar5 + (fVar4 - fVar5)))));
    (*(float *)(gen_frame + 0x18)) = fVar1;
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    fVar1 = ((float)GEN_TOF((((float10)*(float *)&REFG(undefined, 0x1322f74) * (fVar4 - fVar5) +
                    (float10)*(float *)&REFG(undefined, 0x1322f78) * fVar5) * (float10)fVar1)));
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    if (!((float10)fVar1 < (float10)1)) {
      pfVar3 = &(*(float *)(gen_frame + 0x18));
    }
    if (!((float10)REFG(float, 0x1322f6c) < (float10)*pfVar3)) {
      pfVar3 = &REFG(float, 0x1322f6c);
    }
    (*(float *)(gen_frame + 0x1c)) = *pfVar3;
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0xec) * (float10)*pfVar3)));
    (*(float *)(gen_frame + 0x18)) = fVar1;
    fVar4 = (float10)fVar1;
    fVar7 = fVar4 * (float10)*(float *)&REFG(undefined, 0x14882f0);
    fVar5 = (float10)*(float *)&REFG(undefined, 0x14882f4) * fVar4;
    fVar6 = (float10)*(float *)&REFG(undefined, 0x14882f8) * fVar4;
    fVar4 = fVar4 * (float10)*(float *)&REFG(undefined, 0x14882fc);
  }
  else {
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    pfVar3 = &(*(float *)(gen_frame + 0x1c));
    (*(float *)(gen_frame + 0x1c)) = (float)((float10)*(float *)&REFG(undefined, 0x1322f70) * (float10)fVar1);
    if (!((float10)(float)((float10)*(float *)&REFG(undefined, 0x1322f70) * (float10)fVar1) < (float10)1)) {
      pfVar3 = &(*(float *)(gen_frame + 0x18));
    }
    if (!((float10)REFG(float, 0x1322f68) < (float10)*pfVar3)) {
      pfVar3 = &REFG(float, 0x1322f68);
    }
    (*(float *)(gen_frame + 0x1c)) = *pfVar3;
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0xec) * (float10)*pfVar3)));
    (*(float *)(gen_frame + 0x18)) = fVar1;
    fVar4 = (float10)fVar1;
    fVar7 = fVar4 * (float10)*(float *)&REFG(undefined, 0x14882e0);
    fVar5 = (float10)*(float *)&REFG(undefined, 0x14882e4) * fVar4;
    fVar6 = (float10)*(float *)&REFG(undefined, 0x14882e8) * fVar4;
    fVar4 = fVar4 * (float10)*(float *)&REFG(undefined, 0x14882ec);
  }
  (*(float *)(gen_frame + 0x8)) = (float)fVar6;
  (*(float *)(gen_frame + 0x4)) = (float)fVar5;
  (*(float *)(gen_frame + 0x0)) = (float)fVar7;
  *param_2 = (*(float *)(gen_frame + 0x0));
  param_2[1] = (*(float *)(gen_frame + 0x4));
  param_2[2] = (*(float *)(gen_frame + 0x8));
  param_2[3] = (float)fVar4;
  return 0;
}

/* ref: FUN_00691b90 */
ushort F_00691b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x691b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) % 10;
  if (uVar2 == 1) {
    uVar1 = F_0068c9c0(this,param_1,param_2,param_3);
    return uVar1;
  }
  if (uVar2 != 4) {
    uVar1 = F_0068cd40(this,param_1,param_2,param_3);
    return uVar1;
  }
  uVar1 = F_0068cc20(this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00691be0 */
unsigned int F_00691be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x691be0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 != 0) {
    do {
      piVar3 = ((int *)GEN_TOP((*(int *)(param_1 + uVar4 * 4) + 0x88)));
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3;
      UNLOCK();
      if (iVar1 == 2) {
        piVar3 = ((int *)GEN_TOP((*(int *)(param_1 + uVar4 * 4) + 0x8c)));
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3;
        UNLOCK();
        if (iVar1 < 8) {
          pvVar2 = *(undefined * PTR32 *)(param_1 + uVar4 * 4);
          if (*(int *)((int)pvVar2 + 8) == 0x6d646c) {
            F_00502310(pvVar2,0);
          }
          pvVar2 = *(undefined * PTR32 *)(param_1 + uVar4 * 4);
          if (*(int *)((int)pvVar2 + 8) == 0x6d74726c) {
            F_00502b90(pvVar2,0);
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2);
  }
  return 0;
}

/* ref: FUN_00691c50 */
byte F_00691c50(unsigned int gen_a0)
{
  GEN_ENTER(0x691c50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x88);
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2;
    UNLOCK();
    if (iVar1 == 2) {
      piVar2 = (int *)(param_1 + 0x8c);
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2;
      UNLOCK();
      return iVar1 < 8;
    }
  }
  return 0;
}

/* ref: FUN_00691c90 */
byte F_00691c90(unsigned int gen_a0)
{
  GEN_ENTER(0x691c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  piVar6 = *(int * PTR32 *)((int)this + 0xac);
  piVar3 = *(int * PTR32 *)((int)this + 0xb0);
  do {
    if (piVar6 == piVar3) {
      return 1;
    }
    iVar4 = *piVar6;
    piVar1 = (int *)(iVar4 + 0x8c);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1;
    UNLOCK();
    if (iVar2 != 9) {
      piVar5 = (int *)(iVar4 + 0x88);
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5;
      UNLOCK();
      if (iVar2 != 2) {
        return 0;
      }
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1;
      UNLOCK();
      if (7 < iVar2) {
        return 0;
      }
    }
    piVar6 = piVar6 + 1;
  } while( true );
}

/* ref: FUN_00691d30 */
byte F_00691d30(unsigned int gen_a0)
{
  GEN_ENTER(0x691d30u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar3 = (int *)*param_1;
  piVar2 = (int *)param_1[1];
  while( true ) {
    if (piVar3 == piVar2) {
      return 1;
    }
    piVar4 = (int *)(*piVar3 + 0x88);
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (iVar1 != 2) break;
    piVar3 = piVar3 + 1;
  }
  return 0;
}

/* ref: FUN_00691d70 */
uint F_00691d70(unsigned int gen_a0)
{
  GEN_ENTER(0x691d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (*(int *)((int)this + 0x710) != 0) {
    F_0050c620(*(int *)((int)this + 0x710),0,0);
    *(undefined4 *)((int)this + 0x710) = 0;
  }
  *(uint *)((int)this + 0x6f8) = *(uint *)((int)this + 0x6f8) & 0xfffeffff;
  *(undefined1 *)((int)this + 0x6ec) = 1;
  F_004ff310(((undefined1 *)(gen_frame + 0x4)),4,0);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x736b6c62;
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"chara/common/animation/skl_material.sklb",0,0,0);
  *(uint *)((int)this + 0x710) = uVar1;
  *(uint *)((int)this + 0x6f8) = *(uint *)((int)this + 0x6f8) | 0x10000;
  *(undefined1 *)((int)this + 0x6ec) = 0;
  return uVar1;
}

/* ref: FUN_00691e00 */
uint F_00691e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x691e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  F_0068d780(this,param_1);
  F_004ff310(((undefined1 *)(gen_frame + 0x10)),4,0);
  (*(undefined4 *)(gen_frame + 0xc)) = 0x706170;
  ((code *)*(gen_code32 *)(*(int *)this + 0x124))(this,((undefined1 *)(gen_frame + 0x14)),0x104,param_1,param_2);
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)),0,0,0);
  *((uint *)GEN_TOP((*(int *)((int)this + 0x714) + param_1 * 4))) = uVar1;
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  *(uint *)((int)this + 0x6f8) = ~uVar1 & *(uint *)((int)this + 0x6f8) | uVar1;
  *(undefined1 *)((int)this + 0x6ec) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return uVar1;
}

/* ref: FUN_00691ec0 */
byte F_00691ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x691ec0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  if ((((*(int *)(in_ecx + 0x2c0) != 0) || (*(int *)(in_ecx + 0x40c) != 0)) ||
      (*(int *)(in_ecx + 0x6f8) != 0)) ||
     ((bVar1 = 1, (*(byte *)(in_ecx + 0x2c4) & 1) == 0 || (*(int *)(in_ecx + 0x410) == 0)))) {
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: FUN_00691f00 */
uint F_00691f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x691f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  
  pvVar3 = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x60);
  uVar1 = F_00500af0(pvVar3,param_1);
  uVar1 = F_00500ae0(pvVar3,uVar1 & 0xffff);
  if ((*(uint *)(uVar1 + 8) >> 4 & 1) != 0) {
    uVar1 = F_00b82240((undefined *)((int)this + 0x700),param_1);
    return uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
  if (uVar1 != 0) {
    pvVar3 = (undefined *)((int)this + 0x418);
    uVar4 = 0;
    do {
      uVar2 = F_009f5550(pvVar3,param_1);
      if (uVar2 != 0) {
        return uVar2;
      }
      uVar4 = uVar4 + 1;
      pvVar3 = (undefined *)((int)pvVar3 + 0x88);
    } while (uVar4 < uVar1);
  }
  return 0;
}

/* ref: FUN_00691f90 */
uint F_00691f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x691f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + (param_1[1] + 0x5c + *(int *)(*param_1 + 0x74) * 4) * 4)));
  if (iVar1 == 0) {
    iVar3 = *(int *)(REFG(int, 0x137129c) + 0xd8);
    iVar1 = *(int *)(REFG(int, 0x137129c) + 0xa4);
  }
  else {
    iVar3 = *(int *)(REFG(int, 0x137129c) + 0xd8);
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 0xa8 +
          iVar3 * 4))) = iVar1;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xf0))(this,param_1);
  return uVar2;
}

/* ref: FUN_00692000 */
uint F_00692000(unsigned int gen_a0)
{
  GEN_ENTER(0x692000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  float * pfVar4;
  int iVar5;
  float10 fVar6;
  
  uVar2 = 0;
  uVar3 = *(uint *)((int)this + 0x74);
  (*(int * PTR32 *)(gen_frame + 0x34)) = this;
  (*(uint *)(gen_frame + 0x1c)) = uVar3;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  (*(uint *)(gen_frame + 0x30)) = 0;
  if (uVar3 != 0) {
    (*(int *)(gen_frame + 0x38)) = 0x5c;
    do {
      iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x38)) + -0x5c + *(int *)((int)this + 0x7c))));
      (*(int *)(gen_frame + 0x28)) = iVar5;
      if (iVar5 != 0) {
        uVar2 = 0;
        (*(uint *)(gen_frame + 0x20)) = *(uint *)(iVar5 + 0x4c);
        if (*(uint *)(iVar5 + 0x4c) != 0) {
          do {
            iVar5 = *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x28)) + 0x48) + uVar2 * 4)));
            if (iVar5 != 0) {
              iVar5 = *(int *)(iVar5 + 8);
              if (*(char *)(iVar5 + 0xbd) != '\0') {
                (*(uint *)(gen_frame + 0x2c)) = **(uint * PTR32 *)(iVar5 + 0xb4) & 3;
              }
              iVar5 = (*(int *)(gen_frame + 0x38)) + uVar2;
              if (*(int *)((int)this + iVar5 * 4) == 0) {
                uVar3 = F_004dcd60(0x10,2,7);
                *(uint *)((int)this + iVar5 * 4) = uVar3;
              }
              this_00 = *(undefined * PTR32 *)((int)this + iVar5 * 4);
              pfVar4 = (float *)F_004d9920(this_00,0,0x10,2);
              if (pfVar4 != (float *)0x0) {
                ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 0xac))((*(int * PTR32 *)(gen_frame + 0x34)),&(*(float *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x30)),&(*(uint *)(gen_frame + 0x2c)));
                pfVar4[3] = (*(float *)(gen_frame + 0x18));
                fVar1 = (float)((float10)(*(float *)(gen_frame + 0xc)) * (float10)(*(float *)(gen_frame + 0xc)));
                (*(float *)(gen_frame + 0x24)) = fVar1;
                fVar6 = (float10)(*(float *)(gen_frame + 0x18));
                *pfVar4 = (float)(fVar6 * (float10)fVar1);
                fVar1 = (float)((float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x10)));
                (*(float *)(gen_frame + 0x24)) = fVar1;
                pfVar4[1] = (float)((float10)fVar1 * fVar6);
                fVar1 = (float)((float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x14)));
                (*(float *)(gen_frame + 0x24)) = fVar1;
                pfVar4[2] = (float)(fVar6 * (float10)fVar1);
                *(undefined4 *)((int)this_00 + 0x24) = 0;
              }
            }
            uVar2 = uVar2 + 1;
            this = (*(int * PTR32 *)(gen_frame + 0x34));
            uVar3 = (*(uint *)(gen_frame + 0x1c));
          } while (uVar2 < (*(uint *)(gen_frame + 0x20)));
        }
      }
      (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 4;
      uVar2 = (*(uint *)(gen_frame + 0x30)) + 1;
      (*(uint *)(gen_frame + 0x30)) = uVar2;
    } while (uVar2 < uVar3);
  }
  return uVar2;
}

/* ref: FUN_00692150 */
uint F_00692150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x692150u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  int param_6 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  uint uVar2;
  float * pfVar3;
  uint uVar4;
  uint uVar5;
  int in_ecx;
  uint uVar6;
  
  if ((short)param_2 == -1) {
    in_ecx = 0;
  }
  else {
    in_ecx = REFG(int, 0x137127c) + 0x10640 + (param_2 & 0xffff) * 0x18;
  }
  F_00621900(in_ecx,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x18)));
  ((byte *)(gen_frame + 0x0))[8] = *(byte *)(in_ecx + 4);
  ((byte *)(gen_frame + 0x0))[0xc] = *(byte *)(in_ecx + 3);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = *(undefined * PTR32 *)(param_1 + 0x168);
  pfVar3 = (float *)F_004d9920(*(undefined * PTR32 *)(param_1 + 0x168),0,0x30,2);
  if (pfVar3 != (float *)0x0) {
    *pfVar3 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x280) * (float10)*(float *)(param_1 + 0x280))));
    pfVar3[1] = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x284) * (float10)*(float *)(param_1 + 0x284))))
    ;
    pfVar3[2] = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x288) * (float10)*(float *)(param_1 + 0x288))))
    ;
    fVar1 = *(float *)(param_1 + 0x28c);
    pfVar3[3] = fVar1;
    pfVar3[3] = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x10)) * (float10)param_5) * (float10)fVar1)));
    pfVar3[4] = *(float *)(param_1 + 0x2a0);
    pfVar3[5] = *(float *)(param_1 + 0x2a4);
    pfVar3[6] = *(float *)(param_1 + 0x2a8);
    pfVar3[7] = *(float *)(param_1 + 0x2ac);
    pfVar3[8] = *(float *)(param_1 + 0x2b0);
    pfVar3[9] = *(float *)(param_1 + 0x2b4);
    pfVar3[10] = *(float *)(param_1 + 0x2b8);
    pfVar3[0xb] = *(float *)(param_1 + 700);
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x168) + 0x24))) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x74);
  uVar5 = *(uint *)(param_1 + 0x7c);
  uVar6 = 0;
  (*(uint *)(gen_frame + 0x14)) = uVar5;
  if (uVar2 != 0) {
    do {
      if (*(int *)(uVar5 + uVar6 * 4) != 0) {
        uVar4 = (uVar2 - uVar6) + param_6 & 0x3fffffff | 0x40000000;
        ((byte *)(gen_frame + 0x0))[4] = (char)uVar4;
        ((byte *)(gen_frame + 0x0))[5] = (char)(uVar4 >> 8);
        ((byte *)(gen_frame + 0x0))[6] = (char)(uVar4 >> 0x10);
        ((byte *)(gen_frame + 0x0))[7] = (char)(uVar4 >> 0x18);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + uVar6 * 4) + 0x14))))
                  (param_3,(undefined4)gen_fl2bits(param_4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)),param_1 + 0x30,((byte *)(gen_frame + 0x0)));
        uVar5 = (*(uint *)(gen_frame + 0x14));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
  if ((*(float *)(gen_frame + 0x18)) != 0.0) {
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = *(undefined * PTR32 *)(param_1 + 0x16c);
    pfVar3 = (float *)F_004d9920(*(undefined * PTR32 *)(param_1 + 0x16c),0,0x30,2);
    uVar6 = 0;
    uVar5 = 0;
    if (pfVar3 != (float *)0x0) {
      *pfVar3 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x280) * (float10)*(float *)(param_1 + 0x280))))
      ;
      pfVar3[1] = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x284) *
                         (float10)*(float *)(param_1 + 0x284))));
      pfVar3[2] = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x288) *
                         (float10)*(float *)(param_1 + 0x288))));
      fVar1 = *(float *)(param_1 + 0x28c);
      pfVar3[3] = fVar1;
      pfVar3[3] = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x18)) * (float10)param_5) * (float10)fVar1)));
      pfVar3[4] = *(float *)(param_1 + 0x2a0);
      pfVar3[5] = *(float *)(param_1 + 0x2a4);
      pfVar3[6] = *(float *)(param_1 + 0x2a8);
      pfVar3[7] = *(float *)(param_1 + 0x2ac);
      pfVar3[8] = *(float *)(param_1 + 0x2b0);
      pfVar3[9] = *(float *)(param_1 + 0x2b4);
      pfVar3[10] = *(float *)(param_1 + 0x2b8);
      pfVar3[0xb] = *(float *)(param_1 + 700);
      uVar5 = *(uint *)(param_1 + 0x16c);
      *(undefined4 *)(uVar5 + 0x24) = 0;
    }
    if (uVar2 != 0) {
      do {
        uVar5 = (*(uint *)(gen_frame + 0x14));
        if (*(int *)((*(uint *)(gen_frame + 0x14)) + uVar6 * 4) != 0) {
          uVar5 = (uVar2 - uVar6) + param_6 & 0x3fffffff | 0x40000000;
          ((byte *)(gen_frame + 0x0))[4] = (char)uVar5;
          ((byte *)(gen_frame + 0x0))[5] = (char)(uVar5 >> 8);
          ((byte *)(gen_frame + 0x0))[6] = (char)(uVar5 >> 0x10);
          ((byte *)(gen_frame + 0x0))[7] = (char)(uVar5 >> 0x18);
          uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(uint *)(gen_frame + 0x14)) + uVar6 * 4) + 0x14))))
                            (param_3,(undefined4)gen_fl2bits(param_4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),param_1 + 0x30,
                             ((byte *)(gen_frame + 0x0)));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar2);
    }
  }
  return uVar5;
}

/* ref: FUN_006923b0 */
uint F_006923b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6923b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00621a50((undefined *)(REFG(int, 0x137127c) + 0x1061c),(uint)*(ushort *)(param_1 + 0x11a));
  *(undefined2 *)(param_1 + 0x11a) = 0xffff;
  return uVar1;
}

/* ref: FUN_006923e0 */
unsigned int F_006923e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6923e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  float * pfVar8;
  uint uVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  iVar5 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = this;
  (*(int *)(gen_frame + 0x68)) = iVar5;
  if (*(int *)(REFG(int, 0x1371284) + 0x14) != 0) {
    (*(float *)(gen_frame + 0x10)) = 0.0;
    (*(float *)(gen_frame + 0x14)) = 0.0;
    (*(float *)(gen_frame + 0x18)) = gen_bits2f(REFG(float, 0x1087f04));
    pfVar8 = (float *)F_004f4130(&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x10)),
                                   *((int *)GEN_TOP((*(int *)(REFG(int, 0x1371284) + 0x14) + 0x10))) + 0x10);
    (*(float *)(gen_frame + 0x78)) = *(float *)((int)this + 0x120);
    (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0x120);
    (*(float *)(gen_frame + 0x74)) = *(float *)((int)this + 0x124);
    (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0x124);
    (*(float *)(gen_frame + 0x10)) = *pfVar8;
    uVar10 = 0;
    (*(float *)(gen_frame + 0x70)) = *(float *)((int)this + 0x128);
    (*(float *)(gen_frame + 0x8)) = *(float *)((int)this + 0x128);
    (*(float *)(gen_frame + 0x14)) = pfVar8[1];
    (*(float *)(gen_frame + 0x18)) = pfVar8[2];
    (*(float * PTR32 *)(gen_frame + 0x7c)) = ((float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1090998))));
    pfVar8 = (float *)(iVar5 + 200);
    do {
      (*(float *)(gen_frame + 0x5c)) = pfVar8[-1];
      fVar1 = pfVar8[-2];
      (*(float *)(gen_frame + 0x60)) = fVar1;
      (*(float *)(gen_frame + 0x58)) = *pfVar8;
      fVar11 = (float10)fVar1;
      fVar12 = (float10)pfVar8[-1];
      fVar13 = (float10)*pfVar8;
      fVar1 = ((float)GEN_TOF(((fVar11 * (float10)(*(float *)(gen_frame + 0x10)) + fVar12 * (float10)(*(float *)(gen_frame + 0x14))) +
                     fVar13 * (float10)(*(float *)(gen_frame + 0x18)))));
      (*(float *)(gen_frame + 0x58)) = fVar1;
      if (!((float10)fVar1 <= (float10)0)) {
        fVar1 = ((float)GEN_TOF((fVar13 * (float10)(*(float *)(gen_frame + 0x70)) +
                       ((float10)(*(float *)(gen_frame + 0x78)) * fVar11 + (float10)(*(float *)(gen_frame + 0x74)) * fVar12))));
        (*(float *)(gen_frame + 0x58)) = fVar1;
        if (!((float10)fVar1 - (float10)pfVar8[1] <= (float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 300))) {
          *(undefined1 *)param_1 = 0;
          return 0;
        }
        bVar7 = F_006af160(&(*(float *)(gen_frame + 0x0)),(uint)(pfVar8 + -2),&(*(float *)(gen_frame + 0x6c)));
        if ((bVar7 != 0) && ((float10)(*(float *)(gen_frame + 0x6c)) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x7c))))))) {
          (*(float * PTR32 *)(gen_frame + 0x7c)) = ((float *)(uintptr_t)gen_fl2bits((float)((*(float *)(gen_frame + 0x6c)))));
        }
      }
      uVar10 = uVar10 + 1;
      pfVar8 = pfVar8 + 4;
    } while (uVar10 < 6);
    uVar10 = *(uint *)(REFG(int, 0x1371280) + 0x24);
    uVar9 = 0;
    fVar1 = ((float)GEN_TOF((-(float10)*(float *)((*(int *)(gen_frame + 0x68)) + 0xcc) - (float10)*(float *)((*(int *)(gen_frame + 0x68)) + 0xac))));
    (*(float *)(gen_frame + 0x58)) = fVar1;
    fVar11 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x7c)))));
    (*(float *)(gen_frame + 0x30)) = (float)(fVar11 * (float10)(*(float *)(gen_frame + 0x10)));
    (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x14)) * fVar11);
    (*(float *)(gen_frame + 0x38)) = (float)(fVar11 * (float10)(*(float *)(gen_frame + 0x18)));
    fVar2 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x78)) + (float10)(float)(fVar11 * (float10)(*(float *)(gen_frame + 0x10))))));
    (*(float *)(gen_frame + 0x20)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x74)) + (float10)(float)((float10)(*(float *)(gen_frame + 0x14)) * fVar11))));
    (*(float *)(gen_frame + 0x24)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x70)) + (float10)(float)(fVar11 * (float10)(*(float *)(gen_frame + 0x18))))));
    (*(float *)(gen_frame + 0x28)) = fVar4;
    if (uVar10 != 0) {
      uVar6 = *param_1;
      bVar7 = 0;
      (*(float *)(gen_frame + 0x60)) = gen_bits2f(uVar6);
      (*(float * PTR32 *)(gen_frame + 0x7c)) = (float *)(REFG(int, 0x1371280) + 0x3c);
      do {
        if ((uVar6 & 3 << (bVar7 & 0x1f)) != 0) {
          if ((int)uVar9 < (int)uVar10) {
            fVar14 = *(*(float * PTR32 *)(gen_frame + 0x7c));
          }
          else {
            fVar14 = *(float *)(REFG(int, 0x1371280) + 0x3c + uVar10 * 4);
          }
          (*(float *)(gen_frame + 0x6c)) = fVar14;
          fVar11 = (float10)fVar14 + (float10)fVar1;
          fVar15 = gen_bits2f(*(uint *)((*(int *)(gen_frame + 0x68)) + 0xc0) ^ REFG(uint, 0x10920d0));
          (*(float *)(gen_frame + 0x5c)) = fVar15;
          (*(float *)(gen_frame + 0x30)) = fVar15;
          fVar16 = gen_bits2f(*(uint *)((*(int *)(gen_frame + 0x68)) + 0xc4) ^ REFG(uint, 0x10920d0));
          (*(float *)(gen_frame + 0x34)) = fVar16;
          (*(float *)(gen_frame + 0x54)) = fVar16;
          fVar17 = gen_bits2f(*(uint *)((*(int *)(gen_frame + 0x68)) + 200) ^ REFG(uint, 0x10920d0));
          (*(float *)(gen_frame + 0x38)) = fVar17;
          (*(float *)(gen_frame + 0x50)) = fVar17;
          fVar14 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x70)) * (float10)fVar17 +
                          ((float10)(*(float *)(gen_frame + 0x74)) * (float10)fVar16 + (float10)(*(float *)(gen_frame + 0x78)) * (float10)fVar15
                          ))));
          (*(float *)(gen_frame + 0x58)) = fVar14;
          fVar14 = (float)((float10)fVar14 - fVar11);
          (*(float *)(gen_frame + 0x4c)) = fVar14;
          (*(float *)(gen_frame + 0x10)) = fVar15;
          (*(float *)(gen_frame + 0x14)) = fVar16;
          (*(float *)(gen_frame + 0x18)) = fVar17;
          fVar15 = ((float)GEN_TOF(((float10)fVar17 * (float10)fVar4 +
                          ((float10)fVar15 * (float10)fVar2 + (float10)fVar16 * (float10)fVar3))));
          (*(float *)(gen_frame + 0x58)) = fVar15;
          fVar15 = (float)((float10)fVar15 - fVar11);
          (*(float *)(gen_frame + 0x58)) = fVar15;
          fVar11 = (float10)fVar15;
          fVar12 = (float10)fVar14;
          if ((!(fVar12 * fVar11 < (float10)0)) &&
             ((*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF(-(float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 300))),
             fVar13 = (float10)((float)GEN_TOF(-(float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 300))),
             fVar12 <= fVar13 && fVar11 <= fVar13)) {
            *param_1 = ~(0xff << ((char)uVar9 * '\x02' + 2U & 0x1f) & 0xffU) & uVar6;
            return 0;
          }
        }
        (*(float * PTR32 *)(gen_frame + 0x7c)) = (*(float * PTR32 *)(gen_frame + 0x7c)) + 1;
        uVar9 = uVar9 + 1;
        bVar7 = bVar7 + 2;
        if (uVar10 <= uVar9) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

/* ref: FUN_00692770 */
uint F_00692770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x692770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int iVar1;
  uint * puVar2;
  float10 fVar3;
  float * pfVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  iVar1 = *(int *)(REFG(int, 0x1371280) + 0x78 + param_1 * 4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_2;
  puVar2 = *(uint * PTR32 *)(iVar1 + 0x10);
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x68)) = REFG(float, 0x1087f04);
  (*(uint *)(gen_frame + 0x70)) = *puVar2 ^ REFG(uint, 0x10920d0);
  (*(uint *)(gen_frame + 0x74)) = puVar2[1] ^ REFG(uint, 0x10920d0);
  (*(uint *)(gen_frame + 0x78)) = puVar2[2] ^ REFG(uint, 0x10920d0);
  (*(float *)(gen_frame + 0x30)) = gen_bits2f(puVar2[4] ^ REFG(uint, 0x10920d0));
  (*(uint *)(gen_frame + 0x34)) = puVar2[5] ^ REFG(uint, 0x10920d0);
  (*(uint *)(gen_frame + 0x38)) = puVar2[6] ^ REFG(uint, 0x10920d0);
  (*(float *)(gen_frame + 0x24)) = gen_bits2f(puVar2[5] ^ REFG(uint, 0x10920d0));
  (*(uint *)(gen_frame + 0x3c)) = puVar2[7];
  (*(float *)(gen_frame + 0x20)) = gen_bits2f(puVar2[4] ^ REFG(uint, 0x10920d0));
  (*(float *)(gen_frame + 0x28)) = gen_bits2f(puVar2[6] ^ REFG(uint, 0x10920d0));
  (*(uint *)(gen_frame + 0x2c)) = puVar2[7];
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x40)),(uint)&(*(float *)(gen_frame + 0x20)));
  fVar3 = (float10)1;
  (*(float *)(gen_frame + 0x20)) = (float)(fVar3 / (float10)REFG(float, 0x1302c60));
  (*(float *)(gen_frame + 0x24)) = (float)(fVar3 / (float10)REFG(float, 0x1302c64));
  (*(float *)(gen_frame + 0x28)) = (float)(fVar3 / (float10)REFG(float, 0x1302c68));
  (*(float *)(gen_frame + 0x0)) = (float)(fVar3 / (float10)REFG(float, 0x1302c60));
  (*(float *)(gen_frame + 0x4)) = (float)(fVar3 / (float10)REFG(float, 0x1302c64));
  (*(float *)(gen_frame + 0x8)) = (float)(fVar3 / (float10)REFG(float, 0x1302c68));
  F_0065f020(&(*(undefined4 *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x30)) = *(float *)((int)this + 0x120);
  (*(uint *)(gen_frame + 0x34)) = *(undefined4 *)((int)this + 0x124);
  (*(uint *)(gen_frame + 0x38)) = *(undefined4 *)((int)this + 0x128);
  (*(uint *)(gen_frame + 0x3c)) = *(undefined4 *)((int)this + 300);
  pfVar4 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x30)) = *pfVar4;
  (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1375ac0);
  (*(float *)(gen_frame + 0x24)) = gen_bits2f(REFG(float, 0x1375ac4));
  (*(uint *)(gen_frame + 0x34)) = (uint)gen_fl2bits(pfVar4[1]);
  (*(uint *)(gen_frame + 0x38)) = (uint)gen_fl2bits(pfVar4[2]);
  (*(float *)(gen_frame + 0x28)) = gen_bits2f(REFG(float, 0x1375ac8));
  (*(uint *)(gen_frame + 0x2c)) = *(undefined4 *)(iVar1 + 0x80);
  uVar5 = F_0065f740(&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x30)));
  if ((char)uVar5 == '\0') {
    *(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = 0;
  }
  else {
    uVar5 = F_006b1f90((undefined *)(iVar1 + 0x30),&(*(float *)(gen_frame + 0x30)));
    if ((char)uVar5 == '\0') {
      *(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = 0;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return uVar5;
}

/* ref: FUN_00692990 */
uint F_00692990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x692990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  int * piVar1;
  uint uVar2;
  uint * puVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int local_c;
  
  piVar1 = (int *)(param_1 * 0x358 + REFG(int, 0x137127c));
  local_c = *(int *)((int)this + 0x74);
  puVar3 = *(uint * PTR32 *)((int)this + 0x7c);
  param_1 = 0;
  if (local_c == 0) {
    *param_3 = 0;
    return (uint)param_3;
  }
  do {
    uVar5 = 0;
    if (*puVar3 != 0) {
      uVar6 = *(uint *)(*puVar3 + 0x14) & *param_3;
      uVar5 = 0;
      piVar4 = piVar1;
      do {
        piVar4 = piVar4 + 0xd;
        if (((param_2 >> ((char)uVar5 * '\x02' & 0x1fU) & 1) != 0) &&
           (uVar2 = F_006556f0((undefined *)*puVar3,*piVar4 + 0xc0), (char)uVar2 == '\0')) {
          uVar6 = uVar6 & ~(3 << ((char)uVar5 * '\x02' & 0x1fU));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x10);
      uVar5 = *puVar3;
      param_1 = param_1 | uVar6;
      *(uint *)(uVar5 + 0x14) = uVar6;
    }
    puVar3 = puVar3 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  *param_3 = param_1;
  return uVar5;
}

/* ref: FUN_00692ab0 */
uint F_00692ab0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x692ab0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float fVar5;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(uint *)(gen_frame + 0x5c)) = uVar3;
  if (*(int *)(param_1 + 0x164) != 0) {
    iVar2 = *(int *)(REFG(undefined4, 0x1371280) + 0x24);
    if (iVar2 + -1 < iVar2) {
      fVar5 = *((float *)GEN_TOP((REFG(undefined4, 0x1371280) + 0x3c + (iVar2 + -1) * 4)));
    }
    else {
      fVar5 = *(float *)(REFG(undefined4, 0x1371280) + 0x3c + iVar2 * 4);
    }
    uVar3 = REFG(undefined4, 0x1371280);
    if (!((float10)param_2 < (float10)fVar5 * (float10)fVar5)) {
      uVar1 = *(undefined4 *)(param_1 + 300);
      fVar4 = (float10)0;
      (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(float *)(gen_frame + 0x40)) = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x120) + fVar4)));
      (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = uVar1;
      (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x124) + fVar4)));
      (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF((fVar4 + (float10)*(float *)(param_1 + 0x128))));
      if (*(int *)(param_1 + 0x160) == 0) {
        (*(float *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
      }
      else {
        fVar4 = (float10)((float)GEN_TOF(((float10)1 - (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x160) + 0x7c))))))
        ;
        (*(float *)(gen_frame + 0xc)) = (float)((float10)1 - fVar4 * fVar4);
      }
      uVar3 = F_006570d0(*(int *)(param_1 + 0x164),&(*(undefined4 *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0xc)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return uVar3;
}

/* ref: FUN_00692bd0 */
byte F_00692bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x692bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = (uint *)((int)this + 0x168);
  do {
    uVar1 = F_004dcd60(0x30,2,0);
    *puVar2 = uVar1;
    if (uVar1 == 0) {
      return 0;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar3 < 2);
  return 1;
}

/* ref: FUN_00692c10 */
uint F_00692c10(unsigned int gen_a0)
{
  GEN_ENTER(0x692c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  undefined3 extraout_var = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0xe4) != (undefined *)0x0) {
    F_00b84960(*(undefined * PTR32 *)((int)this + 0xe4));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0xe4);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0xe4) = 0;
    }
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0x150,0x10);
  if (uVar3 == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = (undefined *)F_00b84860(uVar3);
  }
  *(undefined * PTR32 *)((int)this + 0xe4) = this_00;
  uVar3 = 0;
  if (this_00 != (undefined *)0x0) {
    bVar2 = F_00b83750(this_00,*(undefined4 *)((int)this + 0x78));
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  return uVar3;
}

/* ref: FUN_00692c80 */
unsigned int F_00692c80(unsigned int gen_a0)
{
  GEN_ENTER(0x692c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) & 0xffffff00;
  if (*(int *)((int)this + 0x78) != 0) {
    uVar6 = 0;
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
    if (uVar5 != 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)((int)this + 0x418);
      do {
        if ((*((ushort *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x40))) >> ((byte)uVar6 & 0x1f) & 1) != 0) {
          uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2d0) + uVar6 * 4)));
          if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
            F_0061eec0(*(undefined * PTR32 *)((int)this + 0x78),uVar6);
            F_00622fe0(*(undefined * PTR32 *)((int)this + 0x78),uVar6 & 0xffff,uVar1);
          }
          F_009f0670((*(undefined * PTR32 *)(gen_frame + 0x4)),uVar1);
          bVar3 = '\x01' << ((byte)uVar6 & 0x1f);
          (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),~bVar3 & (byte)(*(uint *)(gen_frame + 0x8)) | bVar3);
        }
        (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x88);
        uVar6 = uVar6 + 1;
        uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
      } while (uVar6 < uVar5);
    }
    uVar6 = 0;
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
    if (uVar5 != 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x28;
      do {
        if ((((*((ushort *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x40))) >> ((char)uVar6 + 10U & 0x1f) & 1) !=
              0) && (iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + *(int *)((int)this + 0x2d0)))), iVar2 != 0)) &&
           (*(undefined * PTR32 *)((int)this + 0xe4) != (undefined *)0x0)) {
          F_00b84d90(*(undefined * PTR32 *)((int)this + 0xe4),uVar6);
          F_00b84de0(*(undefined * PTR32 *)((int)this + 0xe4),iVar2,uVar6);
        }
        (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 4);
        uVar6 = uVar6 + 1;
        uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
      } while (uVar6 < uVar5);
    }
    if ((byte)(*(uint *)(gen_frame + 0x8)) != '\0') {
      if (((*(uint *)(gen_frame + 0x8)) & 1) != 0) {
        if (*(undefined * PTR32 *)((int)this + 0x78) == (undefined *)0x0) {
          uVar4 = 0xffff;
        }
        else {
          uVar5 = F_00623160(*(undefined * PTR32 *)((int)this + 0x78),"n_hara");
          uVar4 = (undefined2)uVar5;
        }
        *(undefined2 *)((int)this + 0x11c) = uVar4;
      }
      F_009f0b10(*(int *)((int)this + 0x78) + 0xa0);
      ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this,(*(uint *)(gen_frame + 0x8)));
    }
  }
  return 0;
}

/* ref: FUN_00692e40 */
uint F_00692e40(unsigned int gen_a0)
{
  GEN_ENTER(0x692e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  float fVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  float * pfVar5;
  undefined3 extraout_var = 0;
  
  (*(uint *)(gen_frame + 0xdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe0);
  if ((*(undefined * PTR32 *)((int)this + 0x78) == (undefined *)0x0) || (*(ushort *)((int)this + 0x11c) == 0xffff)) {
    bVar2 = F_006aea80((undefined *)((int)this + 0x120),(undefined4 *)((int)this + 0x130));
    pfVar5 = ((float *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
    if (bVar2 == 0) {
      *(undefined4 *)((int)this + 0x120) = *(undefined4 *)((int)this + 0x130);
      *(undefined4 *)((int)this + 0x124) = *(undefined4 *)((int)this + 0x134);
      *(undefined4 *)((int)this + 0x128) = *(undefined4 *)((int)this + 0x138);
      *(undefined4 *)((int)this + 300) = *(undefined4 *)((int)this + 0x13c);
      F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0));
      return CONCAT31(extraout_var,1);
    }
  }
  else {
    uVar3 = F_0064ce50(*(undefined * PTR32 *)((int)this + 0x78),((undefined1 *)(gen_frame + 0x50)),(uint)*(ushort *)((int)this + 0x11c))
    ;
    uVar4 = F_00623320(*(undefined * PTR32 *)((int)this + 0x78),(uint)*(ushort *)((int)this + 0x11c));
    F_004ef350(((undefined1 *)(gen_frame + 0x90)),uVar4,uVar3);
    F_005fe770(((undefined1 *)(gen_frame + 0x90)),(uint)((float *)(gen_frame + 0x30)));
    pfVar5 = ((float *)(gen_frame + 0x30)) + 1;
    if (!((float10)((float *)(gen_frame + 0x30))[2] < (float10)((float *)(gen_frame + 0x30))[1])) {
      pfVar5 = ((float *)(gen_frame + 0x30)) + 2;
    }
    if ((float10)*pfVar5 < (float10)((float *)(gen_frame + 0x30))[0]) {
      pfVar5 = ((float *)(gen_frame + 0x30));
    }
    (*(float *)(gen_frame + 0x2c)) = *pfVar5;
    if (*(double *)&REFG(undefined, 0x10ac2d0) < (double)*pfVar5) {
      uVar3 = F_0068e000(this);
      F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0));
      return uVar3;
    }
    (*(float *)(gen_frame + 0x4c)) = *(float *)((int)this + 0x13c);
    pfVar5 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x10)),(int)this + 0x130,((undefined1 *)(gen_frame + 0x90)));
    (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(float *)(gen_frame + 0x4c)) * (float10)(*(float *)(gen_frame + 0x2c)));
    ((float *)(gen_frame + 0x30))[0] = *pfVar5;
    ((float *)(gen_frame + 0x30))[1] = pfVar5[1];
    ((float *)(gen_frame + 0x30))[2] = pfVar5[2];
    (*(float *)(gen_frame + 0x10)) = *pfVar5;
    (*(float *)(gen_frame + 0x14)) = pfVar5[1];
    (*(float *)(gen_frame + 0x18)) = pfVar5[2];
    pfVar5 = (float *)F_00687590(((undefined1 *)(gen_frame + 0x0)),(float *)((int)this + 0x120),&(*(float *)(gen_frame + 0x10)));
    fVar1 = ((float)GEN_TOF(((float10)pfVar5[3] * (float10)pfVar5[3] +
                   ((float10)pfVar5[2] * (float10)pfVar5[2] +
                   ((float10)*pfVar5 * (float10)*pfVar5 + (float10)pfVar5[1] * (float10)pfVar5[1])))))
    ;
    (*(float *)(gen_frame + 0x4c)) = fVar1;
    if (*(double *)&REFG(undefined, 0x10b2cd8) < (double)fVar1) {
      *(float *)((int)this + 0x120) = ((float *)(gen_frame + 0x30))[0];
      *(float *)((int)this + 0x124) = ((float *)(gen_frame + 0x30))[1];
      *(float *)((int)this + 0x128) = ((float *)(gen_frame + 0x30))[2];
      *(float *)((int)this + 300) = (*(float *)(gen_frame + 0x1c));
      F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0));
      return CONCAT31((int3)((uint)((int)(uintptr_t)pfVar5) >> 8),1);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0));
  return (uint)pfVar5 & 0xffffff00;
}

/* ref: FUN_006930a0 */
byte F_006930a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6930a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (((*(byte *)(REFG(int, 0x137129c) + 0xf0) & 1) != 0) && (*(int *)((int)this + 0x2c8) == 0)) {
    if (*(int *)((int)this + 0x78) != 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 200))(this);
      if (uVar1 - 1 < 3) {
        if ((*(uint *)((int)this + 0x71c) >> 7 & 1) != 0) {
          F_0064d6d0(*(undefined * PTR32 *)((int)this + 0x78));
        }
        if ((*(uint *)((int)this + 0x71c) >> 8 & 1) != 0) {
          F_0063a460(*(undefined * PTR32 *)((int)this + 0x78));
        }
        if ((*(uint *)((int)this + 0x71c) >> 9 & 1) != 0) {
          F_0062bb20(*(undefined * PTR32 *)((int)this + 0x78));
        }
      }
    }
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf85 */
uint F_00693120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x693120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00654fd0(param_1,*(undefined4 *)(this + 0x78),this + 0xe8,this + 0xf8,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2d8) != 0) {
    *(undefined4 *)(uVar1 + 0x70) = 0;
    return uVar1;
  }
  *(undefined4 *)(uVar1 + 0x70) = *(undefined4 *)(this + 0x160);
  return uVar1;
}

/* ref: FUN_00693210 */
byte F_00693210(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x693210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  float10 fVar2;
  
  bVar1 = *(byte *)(REFG(int, 0x1371278) + 0x10);
  if (((bVar1 == 0xff) && (bVar1 = *(byte *)(in_ecx + 0x66), bVar1 == 0xff)) &&
     (fVar2 = (float10)((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x1088120) + (float10)*(float *)(in_ecx + 300)
                              ))), bVar1 = fVar2 * fVar2 < (float10)param_2,
     fVar2 = (float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 300) + (float10)*(double *)&REFG(undefined, 0x10b2ce0))))
     , fVar2 * fVar2 < (float10)param_2)) {
    return bVar1 + 1;
  }
  return bVar1;
}

/* ref: FUN_00693280 */
uint F_00693280(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x693280u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  float10 fVar3;
  undefined3 uVar2;
  
  uVar2 = (undefined3)((uint)REFG(int, 0x1371278) >> 8);
  uVar1 = CONCAT31(uVar2,*(char *)(REFG(int, 0x1371278) + 0x11));
  if ((*(char *)(REFG(int, 0x1371278) + 0x11) == -1) &&
     (uVar1 = CONCAT31(uVar2,*(char *)(in_ecx + 0x66)), *(char *)(in_ecx + 0x66) == -1)) {
    uVar1 = in_ecx & 0xffffff00;
    fVar3 = (float10)((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x10948e8) * (float10)*(float *)(in_ecx + 300) +
                            (float10)*(double *)&REFG(undefined, 0x10947f0))));
    if (fVar3 * fVar3 < (float10)param_2) {
      uVar1 = CONCAT31((int3)(in_ecx >> 8),1);
    }
    fVar3 = (float10)((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x10947f0) * (float10)*(float *)(in_ecx + 300) +
                            (float10)REFG(double, 0x10944b8))));
    if (fVar3 * fVar3 < (float10)param_2) {
      return uVar1 + 1;
    }
    uVar1 = CONCAT31(uVar2,(char)uVar1);
  }
  return uVar1;
}

/* ref: FUN_00693300 */
uint F_00693300(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x693300u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined * this;
  float10 fVar6;
  float fVar7;
  
  if (param_1[0x1e] != 0) {
    uVar5 = ((code *)*(gen_code32 *)(*param_1 + 0x2c))(param_1,((undefined1 *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x14)) = *(float *)(uVar5 + 0xc);
    fVar6 = (float10)*(float *)(uVar5 + 0xc);
    fVar7 = (float)(fVar6 * fVar6);
    (*(float *)(gen_frame + 0x14)) = fVar7;
    fVar7 = (float)((float10)param_2 - (float10)fVar7);
    (*(float *)(gen_frame + 0x14)) = fVar7;
    if ((float10)fVar7 < (float10)0) {
      fVar7 = 0.0;
    }
    iVar2 = param_1[0x1e];
    *(float *)(iVar2 + 0xa4) = fVar7;
    *(undefined1 *)(iVar2 + 0xa9) = 1;
  }
  this = (undefined *)(REFG(int, 0x137127c) + 0x1061c);
  if ((*(ushort *)((int)param_1 + 0x11a) == 0xffff) ||
     (iVar2 = REFG(int, 0x137127c) + 0x10640 + (uint)*(ushort *)((int)param_1 + 0x11a) * 0x18, iVar2 == 0))
  {
    uVar5 = F_00693180(param_1,param_2);
    cVar1 = (char)param_1[0x46];
    cVar4 = (char)uVar5;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1b)) + 0)) = cVar4;
    (*(undefined4 *)(gen_frame + 0x1b)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1b)), 1, 3),cVar4);
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x14)) + 0)) = cVar1;
    (*(float *)(gen_frame + 0x14)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x14)), 1, 3),cVar1));
    *(char *)(param_1 + 0x46) = cVar4;
    if (cVar1 != cVar4) {
      if (cVar1 == -2) {
        uVar5 = F_00621970(this,2,1,param_1,(*(undefined4 *)(gen_frame + 0x1b)),0xfe);
        *(short *)((int)param_1 + 0x11a) = (short)uVar5;
        if ((short)uVar5 == -1) {
          *(undefined1 *)(param_1 + 0x46) = 0xfe;
          return uVar5;
        }
      }
      else {
        bVar3 = F_0068e040(param_1,(*(undefined4 *)(gen_frame + 0x1b)));
        (*(byte *)(gen_frame + 0x1f)) = bVar3;
        bVar3 = F_0068e040(param_1,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))));
        uVar5 = CONCAT31(extraout_var_01,bVar3);
        if (((*(byte *)(gen_frame + 0x1f)) != 0) && (bVar3 != 0)) {
          uVar5 = F_00621970(this,2,0,param_1,(*(undefined4 *)(gen_frame + 0x1b)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))));
          *(short *)((int)param_1 + 0x11a) = (short)uVar5;
          if ((short)uVar5 == -1) {
            *(char *)(param_1 + 0x46) = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x14)) + 0));
          }
        }
      }
    }
  }
  else {
    if (*(char *)(iVar2 + 2) == '\x01') {
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x14)) + 0)) = *(undefined1 *)(iVar2 + 3);
      (*(float *)(gen_frame + 0x14)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x14)), 1, 3),*(undefined1 *)(iVar2 + 3)));
      bVar3 = F_0068e040(param_1,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))));
      uVar5 = CONCAT31(extraout_var,bVar3);
    }
    else {
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x14)) + 0)) = *(undefined1 *)(iVar2 + 3);
      (*(float *)(gen_frame + 0x14)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x14)), 1, 3),*(undefined1 *)(iVar2 + 3)));
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1b)) + 0)) = *(undefined1 *)(iVar2 + 4);
      (*(undefined4 *)(gen_frame + 0x1b)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1b)), 1, 3),*(undefined1 *)(iVar2 + 4));
      bVar3 = F_0068e040(param_1,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))));
      (*(byte *)(gen_frame + 0x1f)) = bVar3;
      bVar3 = F_0068e040(param_1,(*(undefined4 *)(gen_frame + 0x1b)));
      uVar5 = CONCAT31(extraout_var_00,bVar3);
      if ((*(byte *)(gen_frame + 0x1f)) == 0) goto LAB_006933ee;
    }
    if ((char)uVar5 == '\0') {
LAB_006933ee: ;
      uVar5 = F_00693180(param_1,param_2);
      *(char *)(param_1 + 0x46) = (char)uVar5;
      F_00621a50(this,(uint)*(ushort *)((int)param_1 + 0x11a));
      *(undefined2 *)((int)param_1 + 0x11a) = 0xffff;
      return 0xffff;
    }
  }
  return uVar5;
}

/* ref: FUN_006934f0 */
uint F_006934f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6934f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00693180(param_1,param_2);
  uVar2 = (uint)*(ushort *)(param_1 + 0x11a);
  *(char *)(param_1 + 0x118) = (char)uVar1;
  uVar1 = uVar2;
  if ((*(ushort *)(param_1 + 0x11a) != 0xffff) &&
     (uVar1 = 0, REFG(int, 0x137127c) + 0x10640 + uVar2 * 0x18 != 0)) {
    uVar1 = F_00621a50((undefined *)(REFG(int, 0x137127c) + 0x1061c),uVar2);
    *(undefined2 *)(param_1 + 0x11a) = 0xffff;
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::VfxInstanceListenner::vf1 */
uint F_00693550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x693550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int * piVar10;
  int * piVar11;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  piVar10 = *(int * PTR32 *)(this + 4);
  if (param_2 == 0) {
    fVar6 = (float10)0;
    (*(float *)(gen_frame + 0xf0)) = (float)fVar6;
    (*(int *)(gen_frame + 0xc0)) = piVar10[0x14];
    (*(float *)(gen_frame + 0xf4)) = (float)fVar6;
    (*(float *)(gen_frame + 0xf8)) = (float)fVar6;
    (*(int *)(gen_frame + 0xc4)) = 0;
    (*(int *)(gen_frame + 0xc8)) = 0;
    (*(int *)(gen_frame + 0xd0)) = 0;
    (*(int *)(gen_frame + 0xd8)) = 0;
    (*(int *)(gen_frame + 0xe0)) = 0;
    (*(int *)(gen_frame + 0xe4)) = 0;
    (*(int *)(gen_frame + 0xd4)) = piVar10[0x15];
    (*(int *)(gen_frame + 0xe8)) = piVar10[0x16];
    uVar8 = F_004efe70(&(*(int *)(gen_frame + 0xc0)),(uint)(piVar10 + 0x10));
    fVar1 = gen_bits2f(piVar10[0xc]);
    fVar6 = (float10)(*(float *)(gen_frame + 0xf0));
    (*(float *)(gen_frame + 0xf0)) = (float)((float10)fVar1 + fVar6);
    fVar2 = gen_bits2f(piVar10[0xd]);
    fVar4 = (float10)(*(float *)(gen_frame + 0xf4));
    (*(float *)(gen_frame + 0xf4)) = (float)((float10)fVar2 + fVar4);
    fVar3 = gen_bits2f(piVar10[0xe]);
    *param_1 = (*(int *)(gen_frame + 0xc0));
    fVar5 = (float10)(*(float *)(gen_frame + 0xf8));
    param_1[1] = (*(int *)(gen_frame + 0xc4));
    param_1[2] = (*(int *)(gen_frame + 0xc8));
    (*(float *)(gen_frame + 0xf8)) = (float)((float10)fVar3 + fVar5);
    param_1[4] = (*(int *)(gen_frame + 0xd0));
    param_1[3] = 0;
    param_1[5] = (*(int *)(gen_frame + 0xd4));
    param_1[7] = 0;
    param_1[0xb] = 0;
    param_1[6] = (*(int *)(gen_frame + 0xd8));
    param_1[0xc] = (int)gen_fl2bits((float)((float10)fVar1 + fVar6));
    param_1[8] = (*(int *)(gen_frame + 0xe0));
    param_1[0xd] = (int)gen_fl2bits((float)((float10)fVar2 + fVar4));
    param_1[9] = (*(int *)(gen_frame + 0xe4));
    param_1[0xe] = (int)gen_fl2bits((float)((float10)fVar3 + fVar5));
    iVar9 = REFG(float, 0x1087f04);
    param_1[10] = (*(int *)(gen_frame + 0xe8));
    param_1[0xf] = iVar9;
LAB_0069370d: ;
    uVar8 = CONCAT31((int3)(uVar8 >> 8),1);
  }
  else {
    uVar8 = param_2;
    if (param_2 == 3) {
      if (param_3 == 0) {
        uVar8 = 0;
        if ((undefined *)piVar10[0x1e] != (undefined *)0x0) {
          uVar7 = F_00623160((undefined *)piVar10[0x1e],param_4);
          uVar8 = uVar7 & 0xffff;
          if ((short)uVar7 != -1) {
            uVar8 = F_0054e1a0(piVar10,((undefined1 *)(gen_frame + 0x40)),uVar8);
            goto LAB_006935bd;
          }
        }
      }
      else {
        uVar8 = ((code *)*(gen_code32 *)(*piVar10 + 0x50))(piVar10,param_3);
        if ((char)uVar8 != '\0') {
          uVar8 = ((code *)*(gen_code32 *)(*piVar10 + 0x40))(piVar10,((undefined1 *)(gen_frame + 0x80)),param_3);
LAB_006935bd: ;
          uVar8 = F_004be0e0(((int *)(gen_frame + 0x0)),uVar8);
          piVar10 = ((int *)(gen_frame + 0x0));
          piVar11 = param_1;
          for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar11 = *piVar10;
            piVar10 = piVar10 + 1;
            piVar11 = piVar11 + 1;
          }
          goto LAB_0069370d;
        }
      }
    }
    uVar8 = uVar8 & 0xffffff00;
  }
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return uVar8;
}

/* ref: FUN_00693730 */
uint F_00693730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x693730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined * pvVar2;
  ushort uVar3;
  int * in_EAX;
  uint uVar4;
  
  if (*(short *)((int)this + 0x40) != 0) {
    uVar4 = 0;
    do {
      uVar3 = *(ushort *)((int)this + 0x40) >> ((byte)uVar4 & 0x1f);
      in_EAX = ((int *)GEN_TOP(CONCAT22((short)((uint)((int)(uintptr_t)in_EAX) >> 0x10),uVar3)));
      if ((uVar3 & 1) != 0) {
        in_EAX = ((int *)GEN_TOP((*(int *)((int)this + uVar4 * 4) + 0x88)));
        LOCK();
        iVar1 = *in_EAX;
        *in_EAX = *in_EAX;
        UNLOCK();
        if (iVar1 == 2) {
          in_EAX = ((int *)GEN_TOP((*(int *)((int)this + uVar4 * 4) + 0x8c)));
          LOCK();
          iVar1 = *in_EAX;
          *in_EAX = *in_EAX;
          UNLOCK();
          if (iVar1 < 8) {
            pvVar2 = *(undefined * PTR32 *)((int)this + uVar4 * 4);
            if (*(int *)((int)pvVar2 + 8) == 0x6d646c) {
              in_EAX = (int *)F_00502310(pvVar2,param_1);
            }
            pvVar2 = *(undefined * PTR32 *)((int)this + uVar4 * 4);
            if (*(int *)((int)pvVar2 + 8) == 0x6d74726c) {
              in_EAX = (int *)F_00502b90(pvVar2,param_2);
            }
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x10);
  }
  return (uint)in_EAX;
}

/* ref: FUN_006937b0 */
uint F_006937b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6937b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  
  iVar2 = (*(int *)&gen_args[1]);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) * 4)));
  if (iVar1 != 0) {
    F_0050c620(iVar1,0,0);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 * 4))) = 0;
  }
  F_004ff310(&(*(int *)&gen_args[1]),4,0);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5000;
  (*(undefined4 *)(gen_frame + 0x20)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 4;
  (*(undefined2 *)(gen_frame + 0x25)) = 0;
  uVar4 = F_00513d20(&(*(int *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),-(uint)((char)(*(undefined4 *)&gen_args[4]) != '\0') & (uint)&(*(undefined4 *)(gen_frame + 0x4)),0,
                       0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 * 4))) = uVar4;
  uVar3 = 1 << ((byte)iVar2 & 0x1f);
  uVar5 = ~uVar3;
  *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) & uVar5 | uVar3;
  *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x42))) = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x42))) & uVar5 | 0 << ((byte)iVar2 & 0x1f);
  *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = uVar5 & *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) | uVar3;
  return (uint)uVar3;
}

/* ref: FUN_00693890 */
uint F_00693890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x693890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar4 = 0 << ((byte)param_1 & 0x1f);
  uVar2 = ~(1 << ((byte)param_1 & 0x1f));
  *(ushort *)((int)this + 0x40) = *(ushort *)((int)this + 0x40) & uVar2 | uVar4;
  *(ushort *)((int)this + 0x42) = uVar2 & *(ushort *)((int)this + 0x42) | uVar4;
  *(ushort *)((int)this + 0x44) = *(ushort *)((int)this + 0x44) & uVar2 | uVar4;
  iVar1 = *(int *)((int)this + param_1 * 4);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = F_0050c620(iVar1,0,0);
    *(undefined4 *)((int)this + param_1 * 4) = 0;
  }
  return uVar3;
}

/* ref: FUN_00693900 */
uint F_00693900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x693900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  bVar2 = *(byte *)((int)this + 2);
  uVar4 = F_006b1210(param_2,param_1);
  if (uVar4 != 0xffffffff) {
    uVar5 = ((code *)*(gen_code32 *)(*param_2 + 0x5c))(param_2);
    uVar6 = F_006b11b0(param_2);
    puVar1 = ((undefined4 *)GEN_TOP((uVar5 + 4 + (uVar6 * bVar2 + uVar4) * 6)));
    uVar4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 4) = *puVar1;
      uVar3 = *(undefined2 *)(puVar1 + 1);
      *(undefined2 *)((int)this + 8) = uVar3;
      return CONCAT22((short)((uint)((int)(uintptr_t)puVar1) >> 0x10),uVar3);
    }
  }
  *(undefined4 *)((int)this + 4) = 0x3ff0000;
  *(undefined1 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00693980 */
byte F_00693980(unsigned int gen_a0)
{
  GEN_ENTER(0x693980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006767d0((undefined *)(REFG(int, 0x137128c) + 0x3d0));
  *(uint *)this = uVar1;
  return -1 < (int)uVar1;
}

/* ref: FUN_006939a0 */
uint F_006939a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6939a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if (-1 < (int)uVar1) {
    uVar1 = F_00676850((undefined *)(REFG(int, 0x137128c) + 0x3d0),uVar1);
    *(undefined4 *)this = 0xffffffff;
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::Human::vf57 */
uint F_006939d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6939d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_1;
  if (4 < param_1) {
    uVar1 = param_1 - 5;
  }
  uVar1 = F_00693900(((undefined *)GEN_TOP((*(int *)(this + 0x818) + param_1 * 0xc))),uVar1,param_2);
  this[0x6ec] = (undefined1)0x0;
  return uVar1;
}

/* ref: Client::Graphics::Scene::Human::vf59 */
uint F_00693a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x693a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *((undefined4 *)GEN_TOP((uVar1 + 0xa8 + *(int *)(REFG(int, 0x137129c) + 0xbc) * 4))) = *(undefined4 *)(this + 0x7e8);
  return uVar1;
}

/* ref: Client::Graphics::Scene::Human::vf67 */
uint F_00693a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x693a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  char * _Format;
  
  if (param_3 < 5) {
    if (*(int *)(this + 0x818) == 0) {
      uVar3 = (uint)*(ushort *)(this + param_3 * 4 + 0x750);
      uVar2 = (uint)*(ushort *)(this + 0x778);
      if (uVar2 % 10 == 1) {
        uVar1 = F_0068c9c0(REFG(undefined4, 0x137129c),uVar2,param_3,uVar3);
        uVar2 = (uint)uVar1;
      }
      else if (uVar2 % 10 == 4) {
        uVar1 = F_0068cc20(REFG(undefined4, 0x137129c),uVar2,param_3,uVar3);
        uVar2 = (uint)uVar1;
      }
      else {
        uVar1 = F_0068cd40(REFG(undefined4, 0x137129c),uVar2,param_3,uVar3);
        uVar2 = (uint)uVar1;
      }
    }
    else {
      uVar3 = (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x818) + param_3 * 0xc)));
      uVar2 = (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x818) + param_3 * 0xc + 10)));
    }
    F_00c472af(param_1,param_2,"chara/equipment/e%04d/model/c%04de%04d_%s.mdl",uVar3,uVar2,uVar3,
               (&REFG(undefined * PTR32, 0x1322f7c))[param_3]);
    return (uint)param_1;
  }
  if (param_3 < 10) {
    if (*(int *)(this + 0x818) == 0) {
      uVar2 = (uint)*(ushort *)(this + param_3 * 4 + 0x750);
      uVar1 = F_00691b90(REFG(undefined4, 0x137129c),(uint)*(ushort *)(this + 0x778),param_3,uVar2);
    }
    else {
      uVar2 = (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x818) + param_3 * 0xc)));
      uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 0x818) + param_3 * 0xc + 10)));
    }
    F_00c472af(param_1,param_2,"chara/accessory/a%04d/model/c%04da%04d_%s.mdl",uVar2,(uint)uVar1,
               uVar2,(&REFG(undefined * PTR32, 0x1322f7c))[param_3]);
    return (uint)param_1;
  }
  if (param_3 == 10) {
    uVar2 = (uint)*(ushort *)(this + 0x77a);
    uVar3 = (uint)*(ushort *)(this + 0x778);
    _Format = "chara/human/c%04d/obj/hair/h%04d/model/c%04dh%04d_hir.mdl";
  }
  else {
    if (param_3 == 0xb) {
      F_00c472af(param_1,param_2,"chara/human/c%04d/obj/face/f%04d/model/c%04df%04d_fac.mdl",
                 (uint)*(ushort *)(this + 0x778),(uint)*(ushort *)(this + 0x77c),
                 (uint)*(ushort *)(this + 0x778),(uint)*(ushort *)(this + 0x77c));
      return (uint)param_1;
    }
    if (param_3 == 0xc) {
      F_00c472af(param_1,param_2,"chara/human/c%04d/obj/tail/t%04d/model/c%04dt%04d_til.mdl",
                 (uint)*(ushort *)(this + 0x778),(uint)*(ushort *)(this + 0x77e),
                 (uint)*(ushort *)(this + 0x778),(uint)*(ushort *)(this + 0x77e));
      return (uint)param_1;
    }
    if (param_3 == 0xd) {
      uVar1 = F_00689950((uint)*(ushort *)(this + 0x778));
      F_00c472af(param_1,param_2,"chara/human/c%04d/obj/body/b%04d/model/c%04db%04d_top.mdl",
                 (uint)uVar1,2,(uint)uVar1,2);
      return (uint)param_1;
    }
    if (param_3 == 0xe) {
      uVar1 = F_006899f0((uint)*(ushort *)(this + 0x778));
      uVar3 = (uint)uVar1;
      uVar2 = 2;
      _Format = "chara/human/c%04d/obj/body/b%04d/model/c%04db%04d_top.mdl";
    }
    else {
      if (param_3 != 0xf) {
        return (uint)param_1;
      }
      uVar3 = F_00689a40((uint)*(ushort *)(this + 0x778));
      uVar3 = uVar3 & 0xffff;
      uVar2 = 3;
      _Format = "chara/human/c%04d/obj/body/b%04d/model/c%04db%04d_top.mdl";
    }
  }
  F_00c472af(param_1,param_2,_Format,uVar3,uVar2,uVar3,uVar2);
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Human::vf89 */
unsigned int F_00693c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x693c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 0x7fc) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)(this + 0x7fc) |
       (uint)((char)param_2 != '\0') << ((byte)param_1 & 0x1f);
  return 0;
}

/* ref: Client::Graphics::Scene::Human::vf84 */
uint F_00693cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x693cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  
  if (param_1 == 0xd) {
    uVar1 = *(ushort *)(this + 0x778);
    uVar2 = *(undefined4 *)(REFG(int, 0x137129c) + 0x20);
    uVar3 = F_00689950((uint)uVar1);
    uVar4 = F_006382e0(uVar2,(uint)uVar1,(uint)uVar3);
    return uVar4;
  }
  if (param_1 != 0xe) {
    if (param_1 == 0xf) {
      uVar2 = *(undefined4 *)(REFG(int, 0x137129c) + 0x20);
      uVar1 = *(ushort *)(this + 0x778);
      uVar4 = F_00689a40((uint)uVar1);
      uVar4 = F_006382e0(uVar2,(uint)uVar1,uVar4 & 0xffff);
      return uVar4;
    }
    if (param_1 < 10) {
      uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 0x818) + 10 + param_1 * 0xc)));
      if (*(ushort *)(this + 0x778) != uVar1) {
        uVar4 = F_006382e0(*(undefined4 *)(REFG(int, 0x137129c) + 0x20),(uint)*(ushort *)(this + 0x778),
                             (uint)uVar1);
        return uVar4;
      }
    }
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Human::vf86 */
unsigned int F_00693d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x693d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  
  bVar2 = 0;
  if ((*(uint *)(REFG(int, 0x137129c) + 0xf0) >> 1 & 1) != 0) {
    fVar5 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 300) + (float10)*(double *)&REFG(undefined, 0x1088120))))
    ;
    if (fVar5 * fVar5 < (float10)param_5) {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
  }
  if (param_3 < 0x14) {
    iVar4 = bVar2 - 1;
    uVar3 = 0xc;
    do {
      iVar1 = *((int *)GEN_TOP(((uVar3 - 0xc) + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP(((uVar3 - 8) + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP(((uVar3 - 4) + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP((uVar3 + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP((uVar3 + 4 + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP((uVar3 + 8 + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      uVar3 = uVar3 + 0x18;
    } while (uVar3 < 0x3c);
    iVar4 = *((int *)GEN_TOP((*(int *)(param_1 + 0x7c) + 0x3c)));
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0x14) = -(uint)bVar2;
    }
  }
  if (param_3 == 0x1e) {
    iVar4 = (-(uint)bVar2 & 0xffffff01) - 1;
    uVar3 = 0xc;
    do {
      iVar1 = *((int *)GEN_TOP(((uVar3 - 0xc) + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP(((uVar3 - 8) + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP(((uVar3 - 4) + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP((uVar3 + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP((uVar3 + 4 + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP((uVar3 + 8 + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      uVar3 = uVar3 + 0x18;
    } while (uVar3 < 0x3c);
    iVar4 = *((int *)GEN_TOP((*(int *)(param_1 + 0x7c) + 0x3c)));
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0x14) = -(uint)bVar2 & 0xff;
    }
  }
  return 0;
}

/* ref: FUN_00693ef0 */
unsigned int F_00693ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x693ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  
  bVar1 = *(byte *)((int)this + 0x746) & 0x80;
  switch((unsigned int)(uintptr_t)(*(byte *)((int)this + 0x734))) {
  default: ;
    uVar4 = 100;
    break;
  case 2: ;
    uVar4 = 300;
    break;
  case 3: ;
  case 4: ;
    uVar4 = 500;
    break;
  case 5: ;
  case 6: ;
    uVar4 = 0x44c;
    break;
  case 7: ;
  case 8: ;
    uVar4 = 700;
    break;
  case 9: ;
  case 10: ;
    uVar4 = 900;
  }
  *(undefined2 *)((int)this + 0x778) = uVar4;
  *(short *)((int)this + 0x778) =
       *(short *)((int)this + 0x778) +
       (ushort)*(byte *)((int)this + 0x732) + (ushort)*(byte *)((int)this + 0x731) * 100 +
       (((ushort)bVar1 - (ushort)bVar1) - (ushort)(bVar1 != 0) & 9000);
  bVar1 = *(byte *)((int)this + 0x735);
  if (bVar1 < 0x65) {
    uVar2 = (ushort)bVar1 + (*(byte *)((int)this + 0x734) - 1 & 1) * 100;
  }
  else {
    uVar2 = (ushort)bVar1;
  }
  if (*(char *)((int)this + 0x730) == '\x04') {
    uVar3 = (ushort)*(byte *)((int)this + 0x746);
  }
  else {
    uVar3 = 0;
  }
  *(uint *)((int)this + 0x74c) =
       (uint)((ushort)*(byte *)((int)this + 0x736) != *(ushort *)((int)this + 0x77a)) << 10 |
       *(uint *)((int)this + 0x74c) & 0xfffffbff;
  *(uint *)((int)this + 0x74c) =
       (uint)(uVar2 != *(ushort *)((int)this + 0x77c)) << 0xb |
       *(uint *)((int)this + 0x74c) & 0xfffff7ff;
  *(uint *)((int)this + 0x74c) =
       (uint)(uVar3 != *(ushort *)((int)this + 0x77e)) << 0xc |
       *(uint *)((int)this + 0x74c) & 0xffffefff;
  *(ushort *)((int)this + 0x77a) = (ushort)*(byte *)((int)this + 0x736);
  *(ushort *)((int)this + 0x77c) = uVar2;
  *(ushort *)((int)this + 0x77e) = uVar3;
  return 0;
}

/* ref: FUN_00694050 */
ushort F_00694050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x694050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined * this;
  
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    this = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x28);
    break;
  case 2: ;
    this = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x2c);
    break;
  case 3: ;
    this = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x30);
    break;
  case 4: ;
    this = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x34);
    break;
  default: ;
    goto switchD_0069405c_default;
  }
  if (this != (undefined *)0x0) {
    uVar1 = F_00503570(this,param_1,param_3);
    return (ushort)uVar1;
  }
switchD_0069405c_default: ;
  return 0xffff;
}

/* ref: FUN_006940c0 */
unsigned int F_006940c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6940c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x818) == 0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                       (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),0x78,0x10)));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[0xc] = 0;
      puVar1[0xf] = 0;
      puVar1[0x12] = 0;
      puVar1[0x15] = 0;
      puVar1[0x18] = 0;
      puVar1[0x1b] = 0;
      *(undefined4 * PTR32 *)((int)this + 0x818) = puVar1;
      return 0;
    }
    *(undefined4 *)((int)this + 0x818) = 0;
  }
  return 0;
}

/* ref: FUN_00694120 */
uint F_00694120(unsigned int gen_a0)
{
  GEN_ENTER(0x694120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x818) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)((int)this + 0x818));
    *(undefined4 *)((int)this + 0x818) = 0;
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf57 */
uint F_00694150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x694150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  uint uVar2;
  
  F_00693900(((undefined *)GEN_TOP((*(int *)(this + 0x790) + param_1 * 0xc))),param_1,param_2);
  uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 0x790) + 8 + param_1 * 0xc)));
  (*(uint *)(gen_frame + 0x8)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 2)),uVar1);
  if ((uVar1 & 0xf00) != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x94))(this);
    if ((char)uVar2 == '\0') {
      ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,5);
    }
    F_00691d70(this);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 1)) = (byte)(uVar1 >> 8);
    uVar2 = F_00691e00(this,param_1,(*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 1)) & 0xf);
    return uVar2;
  }
  this[0x6ec] = (undefined1)0x0;
  return (*(uint *)(gen_frame + 0x8)) >> 8;
}

/* ref: Client::Graphics::Scene::Demihuman::vf89 */
unsigned int F_006941f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6941f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 0x784) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)(this + 0x784) |
       (uint)((char)param_2 != '\0') << ((byte)param_1 & 0x1f);
  return 0;
}

/* ref: FUN_00694230 */
uint F_00694230(unsigned int gen_a0)
{
  GEN_ENTER(0x694230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)((int)this + 0x738);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x10f04d8);
  if ((4 < uVar1) && ((uVar1 < 9 || (uVar1 == 10)))) {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 0)) = (byte)REFG(undefined4, 0x10f04d8);
    (*(uint *)(gen_frame + 0x4)) = (uint)((byte)(*(uint *)(gen_frame + 0x4)) | 1);
  }
  if (((*(uint *)(gen_frame + 0x4)) & 1) != 0) {
    *(uint *)((int)this + 0x78c) = *(uint *)((int)this + 0x78c) | 1;
    *(uint *)((int)this + 0x78c) = *(uint *)((int)this + 0x78c) & 0xfffffffd;
    return uVar1;
  }
  *(uint *)((int)this + 0x78c) = *(uint *)((int)this + 0x78c) | 2;
  *(uint *)((int)this + 0x78c) = *(uint *)((int)this + 0x78c) & 0xfffffffe;
  return uVar1;
}

/* ref: FUN_006942a0 */
unsigned int F_006942a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6942a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x790) == 0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                       (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),0x3c,0x10)));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[0xc] = 0;
      *(undefined4 * PTR32 *)((int)this + 0x790) = puVar1;
      return 0;
    }
    *(undefined4 *)((int)this + 0x790) = 0;
  }
  return 0;
}

/* ref: FUN_006942f0 */
uint F_006942f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6942f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x790) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)((int)this + 0x790));
    *(undefined4 *)((int)this + 0x790) = 0;
  }
  return uVar1;
}

/* ref: FUN_00694320 */
uint F_00694320(unsigned int gen_a0)
{
  GEN_ENTER(0x694320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(char *)((int)this + 0x65) != '\x02') && (*(char *)((int)this + 0x65) != '\x03')) {
    return 0x656d70;
  }
  uVar1 = F_00b51c10(*(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x18),(uint)*(ushort *)((int)this + 0x730));
  return uVar1;
}

/* ref: FUN_00694350 */
uint F_00694350(unsigned int gen_a0)
{
  GEN_ENTER(0x694350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(char *)((int)this + 0x65) != '\x02') && (*(char *)((int)this + 0x65) != '\x03')) {
    return 0x656d70;
  }
  uVar1 = F_00b51c10(*(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x14),(uint)*(ushort *)((int)this + 0x730));
  return uVar1;
}

/* ref: Client::Graphics::Scene::Weapon::vf54 */
unsigned int F_00694380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x694380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if ((param_1 & 1) != 0) {
    if (*(undefined * PTR32 *)(this + 0x78) == (undefined *)0x0) {
      *(undefined2 *)(this + 0x738) = 0xffff;
      return 0;
    }
    uVar1 = F_00623160(*(undefined * PTR32 *)(this + 0x78),"n_root");
    *(short *)(this + 0x738) = (short)uVar1;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Weapon::vf57 */
uint F_006943c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6943c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = *(ushort *)(this + 0x734);
  uVar4 = F_006b1210(param_2,0);
  if (uVar4 != 0xffffffff) {
    uVar5 = ((code *)*(gen_code32 *)(*param_2 + 0x5c))(param_2);
    uVar6 = F_006b11b0(param_2);
    puVar1 = ((undefined4 *)GEN_TOP((uVar5 + 4 + (uVar6 * uVar2 + uVar4) * 6)));
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(this + 0x73a) = *puVar1;
      uVar3 = *(undefined2 *)(puVar1 + 1);
      *(undefined2 *)(this + 0x73e) = uVar3;
      if (((byte)this[0x73f] & 0xf) != 0) {
        uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x94))(this);
        if ((char)uVar4 == '\0') {
          ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,1);
        }
        F_00691d70(this);
        uVar4 = F_00691e00(this,param_1,(byte)this[0x73f] & 0xf);
        return uVar4;
      }
      this[0x6ec] = (undefined1)0x0;
      return CONCAT22((short)((uint)((int)(uintptr_t)puVar1) >> 0x10),uVar3);
    }
  }
  *(ushort *)(this + 0x73c) = *(ushort *)(this + 0x73c) | 0x3ff;
  *(undefined2 *)(this + 0x73a) = 1;
  return 0x3ff;
}

/* ref: Client::Graphics::Scene::Weapon::vf89 */
unsigned int F_006944a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6944a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 0x748) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)(this + 0x748) |
       (uint)((char)param_2 != '\0') << ((byte)param_1 & 0x1f);
  return 0;
}

/* ref: Client::Graphics::Scene::Weapon::vf81 */
uint F_006944e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6944e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  if (*(int *)(this + 200) != 0) {
    if (*(undefined * PTR32 *)(this + 0x78) == (undefined *)0x0) {
      puVar3 = &REFG(float, 0x1302d00);
      puVar4 = ((undefined4 *)(gen_frame + 0x0));
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    else {
      F_0064ce50(*(undefined * PTR32 *)(this + 0x78),((undefined4 *)(gen_frame + 0x0)),(uint)*(ushort *)(this + 0x738));
    }
    *(undefined4 *)(this + 0x30) = (*(undefined4 *)(gen_frame + 0x30));
    *(undefined4 *)(this + 0x34) = (*(undefined4 *)(gen_frame + 0x34));
    *(undefined4 *)(this + 0x38) = (*(undefined4 *)(gen_frame + 0x38));
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
  }
  uVar1 = F_0068dc50((undefined *)this);
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar1;
}

/* ref: Client::Graphics::Scene::Weapon::vf86 */
unsigned int F_00694580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x694580u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  byte bVar1;
  float10 fVar2;
  
  bVar1 = 0;
  if ((*(uint *)(REFG(int, 0x137129c) + 0xf0) >> 1 & 1) != 0) {
    fVar2 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 300) + (float10)*(double *)&REFG(undefined, 0x10b2ce0))))
    ;
    if (fVar2 * fVar2 < (float10)param_5) {
      bVar1 = 1;
    }
    else {
      bVar1 = 0;
    }
  }
  if ((param_3 < 0x14) && (**(int * PTR32 *)(param_1 + 0x7c) != 0)) {
    *((uint *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x7c) + 0x14))) = bVar1 - 1;
  }
  if ((param_3 == 0x1e) && (**(int * PTR32 *)(param_1 + 0x7c) != 0)) {
    *((uint *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x7c) + 0x14))) = (-(uint)bVar1 & 0xffffff01) - 1;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Monster::vf57 */
uint F_00694610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x694610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = *(ushort *)(this + 0x734);
  uVar4 = F_006b1210(param_2,0);
  if (uVar4 != 0xffffffff) {
    uVar5 = ((code *)*(gen_code32 *)(*param_2 + 0x5c))(param_2);
    uVar6 = F_006b11b0(param_2);
    puVar1 = ((undefined4 *)GEN_TOP((uVar5 + 4 + (uVar6 * uVar2 + uVar4) * 6)));
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(this + 0x736) = *puVar1;
      uVar3 = *(undefined2 *)(puVar1 + 1);
      *(undefined2 *)(this + 0x73a) = uVar3;
      if (((byte)this[0x73b] & 0xf) != 0) {
        uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x94))(this);
        if ((char)uVar4 == '\0') {
          ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,1);
        }
        F_00691d70(this);
        uVar4 = F_00691e00(this,param_1,(byte)this[0x73b] & 0xf);
        return uVar4;
      }
      this[0x6ec] = (undefined1)0x0;
      return CONCAT22((short)((uint)((int)(uintptr_t)puVar1) >> 0x10),uVar3);
    }
  }
  *(ushort *)(this + 0x738) = *(ushort *)(this + 0x738) | 0x3ff;
  *(undefined2 *)(this + 0x736) = 1;
  return 0x3ff;
}

/* ref: FUN_006946f0 */
uint F_006946f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6946f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 0xb;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined1 *)((int)this + 0xa0) = 0;
  *(undefined1 *)((int)this + 0x1a8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2cec));
  *(undefined4 *)((int)this + 0x1a4) = 5;
  F_00c48350((undefined *)((int)this + 0xa1),0,0x100);
  return (uint)this;
}

/* ref: FUN_00694790 */
byte F_00694790(unsigned int gen_a0)
{
  GEN_ENTER(0x694790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 100) = *(byte *)(in_ecx + 100) & 0xfb;
  *(uint *)(in_ecx + 0x24) = *(uint *)(in_ecx + 0x24) | 3;
  *(undefined1 *)(in_ecx + 0x65) = 1;
  return 1;
}

/* ref: Client::Graphics::Scene::Terrain::vf13 */
uint F_006947a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6947a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float10 fVar1;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,((undefined1 *)(gen_frame + 0x0)));
  fVar1 = (float10)0;
  (*(float *)(gen_frame + 0x50)) = (float)fVar1;
  (*(float *)(gen_frame + 0x54)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(this + 0x50);
  (*(float *)(gen_frame + 0x58)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(this + 0x54);
  (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(this + 0x58);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x20)),(uint)(this + 0x40));
  (*(float *)(gen_frame + 0x50)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x50)))));
  (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x34) + (float10)(*(float *)(gen_frame + 0x54)))));
  (*(float *)(gen_frame + 0x58)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x38) + (float10)(*(float *)(gen_frame + 0x58)))));
  F_005fec10(param_1,&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return (uint)param_1;
}

/* ref: FUN_00694870 */
byte F_00694870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x694870u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int iVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))) = (*(int *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x14)) = (*(int *)&gen_args[3]);
  (*(int *)&gen_args[3]) = 0x74657261;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5000;
  (*(undefined1 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0x25)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0x10000;
  uVar3 = F_00513d20((*(undefined4 *)&gen_args[1]),&(*(int *)&gen_args[3]),(*(char * PTR32 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
  if (uVar3 != 0) {
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) = uVar3;
    pcVar4 = (*(char * PTR32 *)&gen_args[2]);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    (*(int *)&gen_args[3]) = 0;
    for (iVar5 = (int)pcVar4 - (int)((*(char * PTR32 *)&gen_args[2]) + 1);
        ((iVar2 = (*(int *)&gen_args[3]), iVar5 != 0 && (iVar2 = iVar5, (*(char * PTR32 *)&gen_args[2])[iVar5] != '/')) &&
        ((*(char * PTR32 *)&gen_args[2])[iVar5] != '\\')); iVar5 = iVar5 + -1) {
    }
    (*(int *)&gen_args[3]) = iVar2;
    F_00c46aa0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa1,(*(char * PTR32 *)&gen_args[2]),(*(int *)&gen_args[3]));
    *((undefined1 *)GEN_TOP(((*(int *)&gen_args[3]) + 0xa1 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) = (undefined1)(*(undefined4 *)&gen_args[4]);
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x65))) = 2;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) = 1;
    return 1;
  }
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x65))) = 4;
  return 0;
}

/* ref: FUN_00694950 */
byte F_00694950(unsigned int gen_a0)
{
  GEN_ENTER(0x694950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x12070];
  ushort * puVar1;
  gen_size32 sVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined2 uVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  short * psVar11;
  undefined * pvVar12;
  int * piVar13;
  uint uVar14;
  float10 fVar15;
  
  iVar7 = REFG(int, 0x137127c);
  (*(uint *)(gen_frame + 0x1205c)) = 0x694970;
  (*(undefined * PTR32 *)(gen_frame + 0x1204c)) = (undefined *)(REFG(int, 0x137127c) + 0xaf90);
  uVar9 = F_005003e0(*(undefined * PTR32 *)((int)this + 0x70));
  *(uint *)(iVar7 + 0xb180) = uVar9;
  iVar7 = *(int *)((int)this + 0x78);
  (*(uint *)(gen_frame + 0x12048)) = uVar9;
  (*(undefined * PTR32 *)(gen_frame + 0x12044)) = REFG(undefined4, 0x1370c1c);
  if (iVar7 != 0) {
    (*(uint *)(gen_frame + 0x1205c)) = 0;
    uVar9 = F_00500500(*(undefined * PTR32 *)((int)this + 0x70));
    if (iVar7 != 0) {
      piVar13 = *(int * PTR32 *)((int)this + 0x74);
      iVar10 = uVar9 - (int)piVar13;
      (*(int * PTR32 *)(gen_frame + 0x12058)) = piVar13;
      (*(gen_size32 *)(gen_frame + 0x12054)) = iVar10;
      (*(int *)(gen_frame + 0x12050)) = iVar7;
      do {
        iVar7 = *piVar13;
        uVar14 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar7 + 0xa8) + 4))) + 0x1e +
                                *(int *)(iVar7 + 0xa8))));
        uVar9 = 0;
        if (uVar14 != 0) {
          psVar11 = ((short *)GEN_TOP((*(int *)(iVar7 + 0xb8) + 2)));
          do {
            if (*psVar11 != 0) {
              ((int *)(gen_frame + 0x11000))[(int)((*(uint *)(gen_frame + 0x1205c)))] = iVar7;
              ((int *)(gen_frame + 0x10000))[(int)((*(uint *)(gen_frame + 0x1205c)))] = iVar10 + (int)piVar13;
              (*(uint *)(gen_frame + 0x1205c)) = (*(uint *)(gen_frame + 0x1205c)) + 1;
              break;
            }
            uVar9 = uVar9 + 1;
            psVar11 = psVar11 + 0x1e;
          } while (uVar9 < uVar14);
        }
        piVar13 = piVar13 + 1;
        (*(int * PTR32 *)(gen_frame + 0x12058)) = piVar13;
        iVar7 = (*(int *)(gen_frame + 0x12050)) + -1;
        (*(int *)(gen_frame + 0x12050)) = iVar7;
      } while (iVar7 != 0);
    }
    *(uint *)((int)this + 0x7c) = (*(uint *)(gen_frame + 0x1205c));
    if ((*(uint *)(gen_frame + 0x1205c)) != 0) {
      sVar2 = (*(uint *)(gen_frame + 0x1205c)) * 4;
      (*(gen_size32 *)(gen_frame + 0x12054)) = sVar2;
      pvVar12 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                  (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),sVar2,0x10)));
      *(undefined * PTR32 *)((int)this + 0x88) = pvVar12;
      if (pvVar12 != (undefined *)0x0) {
        F_00c48350(pvVar12,0,sVar2);
        uVar9 = 0;
        if ((*(uint *)(gen_frame + 0x1205c)) != 0) {
          do {
            uVar14 = F_00625750(((int *)(gen_frame + 0x11000))[(int)(uVar9)]);
            *((uint *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4))) = uVar14;
            if (*((int *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4))) == 0) goto LAB_00694a5b;
            uVar6 = ((undefined2 *)((int *)(gen_frame + 0x10000))[(int)(uVar9)])[1];
            iVar7 = *((int *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4)));
            *(undefined2 *)(iVar7 + 8) = *(undefined2 *)((int *)(gen_frame + 0x10000))[(int)(uVar9)];
            *(undefined2 *)(iVar7 + 10) = uVar6;
            iVar7 = uVar9 * 4;
            uVar9 = uVar9 + 1;
            *((undefined2 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x88) + iVar7))) + 0x24))) =
                 (undefined2)(*(uint *)(gen_frame + 0x12048));
          } while (uVar9 < (*(uint *)(gen_frame + 0x1205c)));
        }
        sVar2 = (*(gen_size32 *)(gen_frame + 0x12054));
        pvVar12 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),(*(gen_size32 *)(gen_frame + 0x12054)),0x10)));
        *(undefined * PTR32 *)((int)this + 0x94) = pvVar12;
        if (pvVar12 != (undefined *)0x0) {
          F_00c48350(pvVar12,0,sVar2);
          uVar9 = 0;
          if ((*(uint *)(gen_frame + 0x1205c)) == 0) {
            return 1;
          }
          while( true ) {
            F_00623d60(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4))),&(*(float *)(gen_frame + 0x12000)));
            iVar7 = *((int *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4)));
            (*(float *)(gen_frame + 0x12020)) = (float)((float10)(*(float *)(gen_frame + 0x12000)) + (float10)(*(float *)(gen_frame + 0x12010)));
            (*(float *)(gen_frame + 0x12024)) = (float)((float10)(*(float *)(gen_frame + 0x12004)) + (float10)(*(float *)(gen_frame + 0x12014)));
            (*(float *)(gen_frame + 0x12028)) = (float)((float10)(*(float *)(gen_frame + 0x12008)) + (float10)(*(float *)(gen_frame + 0x12018)));
            fVar15 = (float10)REFG(double, 0x1088108);
            fVar3 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x12000)) + (float10)(*(float *)(gen_frame + 0x12010))) * fVar15)));
            (*(float *)(gen_frame + 0x12030)) = fVar3;
            fVar4 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x12004)) + (float10)(*(float *)(gen_frame + 0x12014))) * fVar15)));
            (*(float *)(gen_frame + 0x12034)) = fVar4;
            fVar5 = ((float)GEN_TOF((fVar15 * (float10)(float)((float10)(*(float *)(gen_frame + 0x12008)) + (float10)(*(float *)(gen_frame + 0x12018))))));
            (*(float *)(gen_frame + 0x12038)) = fVar5;
            *(float *)(iVar7 + 0x10) = fVar3;
            *(float *)(iVar7 + 0x14) = fVar4;
            *(float *)(iVar7 + 0x18) = fVar5;
            F_00623ec0((*(undefined * PTR32 *)(gen_frame + 0x1204c)),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4))),&(*(float *)(gen_frame + 0x12000)))
            ;
            uVar14 = F_00b14060((*(undefined * PTR32 *)(gen_frame + 0x12044)),3);
            *((uint *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))) = uVar14;
            if (*((int *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))) == 0) break;
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))) + 4))) =
                 *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4)));
            F_00b81ef0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))),&(*(float *)(gen_frame + 0x12000)));
            uVar8 = F_00b81f70(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))));
            if ((uVar8 == 0) &&
               (uVar14 = F_00504790(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + uVar9 * 4))),0),
               200 < uVar14)) {
              puVar1 = ((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))) + 0xe)));
              *puVar1 = *puVar1 | 0x8000;
              F_00b81ef0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))),&(*(float *)(gen_frame + 0x12000)));
            }
            uVar9 = uVar9 + 1;
            if ((*(uint *)(gen_frame + 0x1205c)) <= uVar9) {
              return 1;
            }
          }
        }
      }
LAB_00694a5b: ;
      *(undefined1 *)((int)this + 0x65) = 4;
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00694c40 */
byte F_00694c40(unsigned int gen_a0)
{
  GEN_ENTER(0x694c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x12050];
  gen_size32 _Size;
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short * psVar5;
  undefined * pvVar6;
  int * piVar7;
  uint uVar8;
  
  (*(uint *)(gen_frame + 0x1203c)) = 0x694c60;
  iVar2 = *(int *)((int)this + 0x78);
  (*(undefined * PTR32 *)(gen_frame + 0x12028)) = REFG(undefined4, 0x1370c1c);
  if (iVar2 != 0) {
    uVar3 = F_005003e0(*(undefined * PTR32 *)((int)this + 0x70));
    (*(uint *)(gen_frame + 0x12030)) = uVar3;
    (*(uint *)(gen_frame + 0x1203c)) = 0;
    uVar3 = F_00500500(*(undefined * PTR32 *)((int)this + 0x70));
    if (iVar2 != 0) {
      piVar7 = *(int * PTR32 *)((int)this + 0x74);
      iVar4 = uVar3 - (int)piVar7;
      (*(int * PTR32 *)(gen_frame + 0x12038)) = piVar7;
      (*(int *)(gen_frame + 0x1202c)) = iVar4;
      (*(int *)(gen_frame + 0x12034)) = iVar2;
      do {
        iVar2 = *piVar7;
        uVar8 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 0xa8) + 4))) + 0x1e + *(int *)(iVar2 + 0xa8)
                               )));
        uVar3 = 0;
        if (uVar8 != 0) {
          psVar5 = ((short *)GEN_TOP((*(int *)(iVar2 + 0xb8) + 0xe)));
          do {
            if (*psVar5 != 0) {
              ((int *)(gen_frame + 0x11000))[(int)((*(uint *)(gen_frame + 0x1203c)))] = iVar2;
              ((int *)(gen_frame + 0x10000))[(int)((*(uint *)(gen_frame + 0x1203c)))] = iVar4 + (int)piVar7;
              (*(uint *)(gen_frame + 0x1203c)) = (*(uint *)(gen_frame + 0x1203c)) + 1;
              break;
            }
            uVar3 = uVar3 + 1;
            psVar5 = psVar5 + 0x1e;
          } while (uVar3 < uVar8);
        }
        piVar7 = piVar7 + 1;
        (*(int * PTR32 *)(gen_frame + 0x12038)) = piVar7;
        iVar2 = (*(int *)(gen_frame + 0x12034)) + -1;
        (*(int *)(gen_frame + 0x12034)) = iVar2;
      } while (iVar2 != 0);
    }
    *(uint *)((int)this + 0x80) = (*(uint *)(gen_frame + 0x1203c));
    if ((*(uint *)(gen_frame + 0x1203c)) != 0) {
      _Size = (*(uint *)(gen_frame + 0x1203c)) * 4;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                 (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),_Size,0x10)));
      *(undefined * PTR32 *)((int)this + 0x8c) = pvVar6;
      if (pvVar6 != (undefined *)0x0) {
        F_00c48350(pvVar6,0,_Size);
        pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                   (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),_Size,0x10)));
        *(undefined * PTR32 *)((int)this + 0x98) = pvVar6;
        if (pvVar6 != (undefined *)0x0) {
          F_00c48350(pvVar6,0,_Size);
          uVar3 = 0;
          if ((*(uint *)(gen_frame + 0x1203c)) != 0) {
            do {
              uVar8 = F_006257b0(((int *)(gen_frame + 0x11000))[(int)(uVar3)]);
              *((uint *)GEN_TOP((*(int *)((int)this + 0x8c) + uVar3 * 4))) = uVar8;
              if (*((int *)GEN_TOP((*(int *)((int)this + 0x8c) + uVar3 * 4))) == 0) goto LAB_00694d30;
              uVar1 = ((undefined2 *)((int *)(gen_frame + 0x10000))[(int)(uVar3)])[1];
              iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x8c) + uVar3 * 4)));
              *(undefined2 *)(iVar2 + 10) = *(undefined2 *)((int *)(gen_frame + 0x10000))[(int)(uVar3)];
              *(undefined2 *)(iVar2 + 0xc) = uVar1;
              iVar2 = uVar3 * 4;
              uVar3 = uVar3 + 1;
              *((undefined2 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x8c) + iVar2))) + 8))) =
                   (undefined2)(*(uint *)(gen_frame + 0x12030));
            } while (uVar3 < (*(uint *)(gen_frame + 0x1203c)));
          }
          uVar3 = 0;
          if ((*(uint *)(gen_frame + 0x1203c)) == 0) {
            return 1;
          }
          while( true ) {
            uVar8 = F_00b14060((*(undefined * PTR32 *)(gen_frame + 0x12028)),7);
            *((uint *)GEN_TOP((*(int *)((int)this + 0x98) + uVar3 * 4))) = uVar8;
            if (*((int *)GEN_TOP((*(int *)((int)this + 0x98) + uVar3 * 4))) == 0) break;
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x98) + uVar3 * 4))) + 4))) =
                 *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x8c) + uVar3 * 4)));
            F_006251c0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x8c) + uVar3 * 4))),((undefined1 *)(gen_frame + 0x12000)));
            F_00b81ef0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x98) + uVar3 * 4))),((undefined1 *)(gen_frame + 0x12000)));
            uVar3 = uVar3 + 1;
            if ((*(uint *)(gen_frame + 0x1203c)) <= uVar3) {
              return 1;
            }
          }
        }
      }
LAB_00694d30: ;
      *(undefined1 *)((int)this + 0x65) = 4;
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00694e50 */
uint F_00694e50(unsigned int gen_a0)
{
  GEN_ENTER(0x694e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x240];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined * _Dst;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x23c);
  (*(uint *)(gen_frame + 0x238)) = uVar2;
  piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x88)));
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = *piVar3;
  UNLOCK();
  if (iVar1 != 2) {
LAB_00694faa: ;
    F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c));
    return (uint)piVar3;
  }
  piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x8c)));
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = *piVar3;
  UNLOCK();
  if (7 < iVar1) {
    *(undefined1 *)((int)this + 0x65) = 4;
    F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x23c));
    return (uint)piVar3;
  }
  uVar4 = F_005003b0(*(undefined * PTR32 *)((int)this + 0x70));
  uVar2 = F_005003c0(*(undefined * PTR32 *)((int)this + 0x70));
  if (0x1000000 < uVar4) {
    *(uint *)((int)this + 0x78) = uVar2;
    if (uVar2 == 0) {
      *(undefined1 *)((int)this + 0x65) = 3;
      F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c));
      return 0;
    }
    _Dst = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),uVar2 * 4,0x10)));
    *(undefined * PTR32 *)((int)this + 0x74) = _Dst;
    uVar2 = 0;
    if (_Dst != (undefined *)0x0) {
      F_00c48350(_Dst,0,*(int *)((int)this + 0x78) * 4);
      iVar1 = *(int *)((int)this + 0x70);
      (*(undefined4 *)(gen_frame + 0x34)) = 0x6d646c;
      piVar3 = (int *)F_004d4610(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)((int)this + 0x1a4),0);
      uVar2 = 0;
      (*(undefined1 *)(gen_frame + 0x29)) = 0;
      if (*(int *)((int)this + 0x78) != 0) {
        do {
          F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x200,"%s/%04d.mdl",(int)this + 0xa1,uVar2);
          piVar3 = (int *)F_00513d20(iVar1 + 4,&(*(undefined4 *)(gen_frame + 0x34)),((undefined1 *)(gen_frame + 0x38)),((undefined1 *)(gen_frame + 0xc)),0,0);
          if (piVar3 == (int *)0x0) {
            *(undefined1 *)((int)this + 0x65) = 4;
            F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c));
            return 0;
          }
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + uVar2 * 4))) = piVar3;
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)((int)this + 0x78));
      }
      *(undefined1 *)((int)this + 0xa0) = 2;
      goto LAB_00694faa;
    }
  }
  *(undefined1 *)((int)this + 0x65) = 4;
  F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c));
  return uVar2;
}

/* ref: FUN_00694fd0 */
uint F_00694fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x694fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  
  uVar2 = *(uint *)((int)this + 0x78);
  uVar6 = 0;
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x74) + uVar4 * 4)));
      piVar5 = (int *)(iVar3 + 0x8c);
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5;
      UNLOCK();
      if (7 < iVar1) {
        *(undefined1 *)((int)this + 0x65) = 4;
        return (uint)this;
      }
      piVar5 = (int *)(iVar3 + 0x88);
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5;
      UNLOCK();
      uVar4 = uVar4 + 1;
      uVar6 = uVar6 + (iVar1 == 2);
    } while (uVar4 < uVar2);
  }
  if (uVar2 == uVar6) {
    *(undefined1 *)((int)this + 0x65) = 3;
  }
  return uVar4;
}

/* ref: FUN_00695060 */
unsigned int F_00695060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x695060u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  float * in_ecx;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  if ((param_2 == 0x1e) && ((char)*param_3 != '\0')) {
    (*(float *)(gen_frame + 0x4c)) = *param_4;
    (*(float *)(gen_frame + 0x48)) = *param_5;
    fVar7 = (float10)*param_4;
    fVar8 = (float10)*param_5;
    fVar1 = (float)(fVar7 - fVar8);
    (*(float *)(gen_frame + 0x30)) = fVar1;
    (*(float *)(gen_frame + 0x48)) = param_4[1];
    (*(float *)(gen_frame + 0x0)) = fVar1;
    (*(float *)(gen_frame + 0x4c)) = param_5[1];
    fVar9 = (float10)param_4[1];
    fVar10 = (float10)param_5[1];
    fVar1 = (float)(fVar9 - fVar10);
    (*(float *)(gen_frame + 0x34)) = fVar1;
    (*(float *)(gen_frame + 0x48)) = param_4[2];
    (*(float *)(gen_frame + 0x4)) = fVar1;
    (*(float *)(gen_frame + 0x4c)) = param_5[2];
    iVar4 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
    fVar11 = (float10)param_4[2];
    fVar12 = (float10)param_5[2];
    fVar1 = (float)(fVar11 - fVar12);
    (*(float *)(gen_frame + 0x38)) = fVar1;
    (*(float *)(gen_frame + 0x8)) = fVar1;
    fVar1 = (float)(fVar8 + fVar7);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar2 = (float)(fVar10 + fVar9);
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = (float)(fVar12 + fVar11);
    (*(float *)(gen_frame + 0x28)) = fVar3;
    (*(float *)(gen_frame + 0x10)) = fVar1;
    (*(float *)(gen_frame + 0x14)) = fVar2;
    (*(float *)(gen_frame + 0x18)) = fVar3;
    if (*(int *)(REFG(int, 0x1371284) + 0x14) != 0) {
      F_006629e0(*(int *)(REFG(int, 0x1371284) + 0x14),&(*(float *)(gen_frame + 0x20)));
      in_ecx = (float *)(iVar4 + 0xc0);
      uVar6 = 0;
      do {
        fVar1 = ((float)GEN_TOF(((float10)in_ecx[2] * (float10)(*(float *)(gen_frame + 0x28)) +
                       ((float10)*in_ecx * (float10)(*(float *)(gen_frame + 0x20)) +
                       (float10)in_ecx[1] * (float10)(*(float *)(gen_frame + 0x24))))));
        (*(float *)(gen_frame + 0x48)) = fVar1;
        if (((float10)0 < (float10)fVar1) && (bVar5 = F_006aedc0(in_ecx,&(*(float *)(gen_frame + 0x0))), bVar5 == 0))
        {
          *(char *)param_3 = '\0';
          break;
        }
        uVar6 = uVar6 + 1;
        in_ecx = in_ecx + 4;
      } while (uVar6 < 6);
    }
  }
  if ((*param_3 != 0) && (uVar6 = ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1), (char)uVar6 != '\0')) {
    F_0062e380(param_1,param_2,*param_3);
  }
  return 0;
}

/* ref: FUN_006951e0 */
uint F_006951e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x6951e0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  ushort uVar1;
  undefined * this;
  float10 fVar2;
  int * piVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  fVar2 = (float10)0;
  uVar1 = *(ushort *)(param_1 + 2);
  (*(int * PTR32 *)(gen_frame + 0x7c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x50)) = REFG(undefined4, 0x1302e00);
  (*(undefined4 *)(gen_frame + 0x54)) = REFG(undefined4, 0x1302e04);
  (*(undefined4 *)(gen_frame + 0x58)) = REFG(undefined4, 0x1302e08);
  (*(undefined4 *)(gen_frame + 0x5c)) = REFG(undefined4, 0x1302e0c);
  (*(float *)(gen_frame + 0x40)) = (float)(int)((int)*(short *)((int)param_1 + 10) * (uint)uVar1 + (uint)(uVar1 >> 1));
  (*(undefined4 *)(gen_frame + 0x60)) = REFG(float, 0x1302e10);
  (*(undefined4 *)(gen_frame + 0x64)) = REFG(float, 0x1302e14);
  (*(undefined4 *)(gen_frame + 0x68)) = REFG(float, 0x1302e18);
  (*(float *)(gen_frame + 0x44)) = 0.0;
  (*(float *)(gen_frame + 0x48)) = (float)(int)((int)(short)param_1[3] * (uint)uVar1 + (uint)(uVar1 >> 1));
  iVar6 = *(int *)(param_2 * 0x358 + 0x2a4 + REFG(int, 0x137127c));
  (*(float *)(gen_frame + 0xf0)) = (float)fVar2;
  (*(float *)(gen_frame + 0xf4)) = (float)fVar2;
  (*(float *)(gen_frame + 0xf8)) = (float)fVar2;
  (*(undefined4 *)(gen_frame + 0xc0)) = REFG(float, 0x1302e10);
  (*(undefined4 *)(gen_frame + 0xc4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc8)) = 0;
  (*(undefined4 *)(gen_frame + 0xd0)) = 0;
  (*(undefined4 *)(gen_frame + 0xd4)) = REFG(float, 0x1302e14);
  (*(undefined4 *)(gen_frame + 0xd8)) = 0;
  (*(undefined4 *)(gen_frame + 0xe0)) = 0;
  (*(undefined4 *)(gen_frame + 0xe4)) = 0;
  (*(undefined4 *)(gen_frame + 0xe8)) = REFG(float, 0x1302e18);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0xc0)),(uint)&(*(undefined4 *)(gen_frame + 0x50)));
  (*(float *)(gen_frame + 0xf0)) = (float)((float10)(*(float *)(gen_frame + 0xf0)) + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0xf4)) = (float)((float10)(*(float *)(gen_frame + 0xf4)) + (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0xf8)) = (float)((float10)(*(float *)(gen_frame + 0xf8)) + (float10)(*(float *)(gen_frame + 0x48)));
  puVar4 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x80)),(uint)&(*(undefined4 *)(gen_frame + 0xc0)),iVar6 + 0x10);
  puVar7 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar6 = 0x10; piVar3 = (*(int * PTR32 *)(gen_frame + 0x7c)), iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  this = (undefined *)(*(int * PTR32 *)(gen_frame + 0x7c))[5];
  puVar4 = (undefined4 *)F_004d9920(this,0,0x40,2);
  *puVar4 = ((undefined4 *)(gen_frame + 0x0))[0];
  puVar4[1] = (*(undefined4 *)(gen_frame + 0x10));
  puVar4[2] = (*(undefined4 *)(gen_frame + 0x20));
  puVar4[3] = (*(undefined4 *)(gen_frame + 0x30));
  puVar4[4] = ((undefined4 *)(gen_frame + 0x0))[1];
  puVar4[5] = (*(undefined4 *)(gen_frame + 0x14));
  puVar4[6] = (*(undefined4 *)(gen_frame + 0x24));
  puVar4[7] = (*(undefined4 *)(gen_frame + 0x34));
  puVar4[8] = ((undefined4 *)(gen_frame + 0x0))[2];
  puVar4[9] = (*(undefined4 *)(gen_frame + 0x18));
  puVar4[10] = (*(undefined4 *)(gen_frame + 0x28));
  puVar4[0xb] = (*(undefined4 *)(gen_frame + 0x38));
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = GEN_FLT_TO(puVar4[0xf], REFG(float, 0x1087f04));
  *(undefined4 *)((int)this + 0x24) = 0;
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3,param_3,(undefined4)gen_fl2bits(param_4),0xff,0,0);
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return uVar5;
}

/* ref: FUN_00695460 */
unsigned int F_00695460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x695460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00657e40((undefined *)(REFG(int, 0x137127c) + 0xecd0),param_1,param_3);
  return 0;
}

/* ref: FUN_00695480 */
uint F_00695480(unsigned int gen_a0)
{
  GEN_ENTER(0x695480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2db8));
  *(undefined1 *)((int)this + 0x60) = 0;
  F_006946f0((undefined *)((int)this + 0x70));
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  return (uint)this;
}

/* ref: FUN_006954c0 */
byte F_006954c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6954c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 3;
  F_0068bd00(REFG(undefined4, 0x1371294),this);
  pvVar2 = REFG(undefined4, 0x1371294);
  if ((*(byte *)((int)this + 0x24) & 1) != 0) {
    iVar1 = *(int *)((int)REFG(undefined4, 0x1371294) + 0x28);
    uVar3 = *(uint *)((int)this + 0x24) & 3 | (uint)REFG(undefined4, 0x1371294);
    *(int *)((int)this + 0x28) = iVar1;
    *(uint *)((int)this + 0x24) = uVar3;
    *(undefined * PTR32 *)((int)pvVar2 + 0x28) = this;
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) & 3 | (uint)this;
    }
    *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffe;
  }
  *(byte *)((int)this + 0xd4) = *(byte *)((int)this + 0xd4) & 0xfb;
  *(uint *)((int)this + 0x94) = *(uint *)((int)this + 0x94) | 3;
  *(undefined1 *)((int)this + 0xd5) = 1;
  F_0068bd00(this,(int)this + 0x70);
  return 1;
}

/* ref: Client::Graphics::Scene::BGManager::vf1 */
uint F_00695530(unsigned int gen_a0)
{
  GEN_ENTER(0x695530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0068b090(this);
  uVar1 = F_006905b0((undefined *)this);
  return uVar1;
}

/* ref: Client::Graphics::Scene::BGManager::vf4 */
unsigned int F_00695540(unsigned int gen_a0)
{
  GEN_ENTER(0x695540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x70) + 0x10))))(this + 0x70);
  iVar1 = *(int *)(this + 0x228);
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x22c) + iVar2))) + 0x10))))(*(int *)(this + 0x22c) + iVar2)
      ;
      iVar2 = iVar2 + 0x80;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  switch((unsigned int)(uintptr_t)(this[0x60])) {
  case (undefined1)0x1: ;
    F_0068ef60(this);
    return 0;
  case (undefined1)0x2: ;
    F_0068f090(this);
    return 0;
  case (undefined1)0x3: ;
    this[0x60] = (undefined1)0x4;
    return 0;
  case (undefined1)0x4: ;
    this[0x60] = (undefined1)0x5;
  }
  return 0;
}

/* ref: FUN_006955c0 */
uint F_006955c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6955c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 1;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 10;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  *(undefined2 *)((int)this + 0x80) = 0xffff;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined2 *)((int)this + 0x82) = 0;
  *(undefined2 *)((int)this + 0x84) = 0;
  *(undefined2 *)((int)this + 0x86) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2dd4));
  *(undefined4 *)((int)this + 0x88) = 0xff000000;
  *(undefined2 *)((int)this + 0x8c) = 0x1ff;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(byte *)((int)this + 0x95) = *(byte *)((int)this + 0x95) & 0xf3 | 3;
  *(undefined1 *)((int)this + 0x94) = 0xfe;
  return (uint)this;
}

/* ref: FUN_00695660 */
byte F_00695660(unsigned int gen_a0)
{
  GEN_ENTER(0x695660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 100) = *(byte *)(in_ecx + 100) & 0xfb;
  *(uint *)(in_ecx + 0x24) = *(uint *)(in_ecx + 0x24) | 3;
  *(undefined1 *)(in_ecx + 0x65) = 1;
  return 1;
}

/* ref: Client::Graphics::Scene::BGObject::vf1 */
uint F_00695670(unsigned int gen_a0)
{
  GEN_ENTER(0x695670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  if ((*(int *)(this + 0x60) != 0) &&
     ((*((byte *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x70) + 0xa8))) + 4))) + 0x23 +
                *((int *)GEN_TOP((*(int *)(this + 0x70) + 0xa8)))))) & 4) != 0)) {
    F_00b7f460(REFG(undefined4, 0x13712a4),*(int *)(this + 0x60));
  }
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(undefined4, 0x1370c1c),*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  F_006905b0((undefined *)this);
  if (*(int *)(this + 0x70) != 0) {
    F_0050c620(*(int *)(this + 0x70),0,0);
    *(undefined4 *)(this + 0x70) = 0;
  }
  if (((byte)this[0x95] & 8) == 0) {
    piVar3 = *(int * PTR32 *)(this + 0x78);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
      *(undefined4 *)(this + 0x78) = 0;
    }
  }
  else {
    piVar3 = *(int * PTR32 *)(this + 0x78);
    if (piVar3 != (int *)0x0) {
      for (uVar2 = *(uint *)(this + 0x74); uVar2 != 0; uVar2 = uVar2 >> 4) {
        piVar1 = (int *)*piVar3;
        if (piVar1 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
          *piVar3 = 0;
        }
        piVar3 = piVar3 + 1;
      }
      if (*(int *)(this + 0x78) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                  (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)(this + 0x78));
        *(undefined4 *)(this + 0x78) = 0;
      }
    }
  }
  if (*(ushort *)(this + 0x80) != 0xffff) {
    F_00621a50((undefined *)(REFG(int, 0x137127c) + 0x1061c),(uint)*(ushort *)(this + 0x80));
    *(undefined2 *)(this + 0x80) = 0xffff;
  }
  uVar2 = 0;
  if (*(int *)(this + 0x7c) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)(this + 0x7c));
    *(undefined4 *)(this + 0x7c) = 0;
  }
  return uVar2;
}

/* ref: Client::Graphics::Scene::BGObject::vf7 */
uint F_00695790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x695790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float in_xmm1;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
  iVar4 = *(int *)(this + 0x70);
  if (((char)param_1 == '\0') && (*(char *)(iVar4 + 299) == '\0')) {
    *(undefined1 *)(iVar4 + 299) = 1;
  }
  if (*(int *)(this + 0x7c) != 0) {
    fVar7 = (float10)0;
    in_xmm1 = *(float *)(this + 0x54);
    (*(float *)(gen_frame + 0x80)) = (float)fVar7;
    (*(undefined4 *)(gen_frame + 0x50)) = *(undefined4 *)(this + 0x50);
    (*(float *)(gen_frame + 0x84)) = (float)fVar7;
    (*(float *)(gen_frame + 0x88)) = (float)fVar7;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(float *)(gen_frame + 0x64)) = in_xmm1;
    (*(undefined4 *)(gen_frame + 0x78)) = *(undefined4 *)(this + 0x58);
    F_004efe70(&(*(undefined4 *)(gen_frame + 0x50)),(uint)(this + 0x40));
    (*(float *)(gen_frame + 0x80)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x80)))));
    (*(float *)(gen_frame + 0x84)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x34) + (float10)(*(float *)(gen_frame + 0x84)))));
    (*(float *)(gen_frame + 0x88)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x38) + (float10)(*(float *)(gen_frame + 0x88)))));
    (*(uint *)(gen_frame + 0x4)) = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 0xa8) + 4))) + 0x20 + *(int *)(iVar4 + 0xa8))));
    uVar5 = 0;
    if ((*(uint *)(gen_frame + 0x4)) != 0) {
      (*(int *)(gen_frame + 0x0)) = 0;
      (*(int *)(gen_frame + 0x8)) = 0;
      do {
        iVar6 = *(int *)(iVar4 + 0xb4) + (*(int *)(gen_frame + 0x8));
        fVar3 = *(float *)(iVar6 + 0x14);
        fVar1 = *(float *)(iVar6 + 0x18);
        fVar2 = *(float *)(iVar6 + 0x1c);
        fVar7 = F_00c4cde0(in_xmm1,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)fVar3);
        fVar8 = F_00c4ca20(in_xmm1,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)fVar3);
        (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x1087f04);
        (*(float *)(gen_frame + 0x24)) = (float)fVar8;
        (*(float *)(gen_frame + 0x28)) = (float)fVar7;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(-(float10)(float)fVar7));
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        (*(float *)(gen_frame + 0x38)) = (float)fVar8;
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(undefined4 *)(gen_frame + 0x44)) = 0;
        (*(undefined4 *)(gen_frame + 0x48)) = 0;
        F_0065ed60(&(*(undefined4 *)(gen_frame + 0x10)),in_xmm1,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,fVar1);
        F_0065ee80(&(*(undefined4 *)(gen_frame + 0x10)),in_xmm1,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,fVar2);
        (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(iVar6 + 8);
        (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(iVar6 + 0xc);
        (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(iVar6 + 0x10);
        uVar5 = F_004ef350(*(int *)(this + 0x7c) + (*(int *)(gen_frame + 0x0)),(uint)&(*(undefined4 *)(gen_frame + 0x10)),(uint)&(*(undefined4 *)(gen_frame + 0x50)));
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x20;
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 0x40;
        (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) - 1;
      } while ((*(uint *)(gen_frame + 0x4)) != 0);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return uVar5;
}

/* ref: Client::Graphics::Scene::BGObject::vf13 */
uint F_006959f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6959f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  fVar5 = (float10)0;
  fVar1 = *(float *)(this + 0x30);
  uVar4 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x70) + 0xf0)));
  (*(float *)(gen_frame + 0x50)) = (float)fVar5;
  (*(float *)(gen_frame + 0x54)) = (float)fVar5;
  (*(float *)(gen_frame + 0x58)) = (float)fVar5;
  fVar2 = *(float *)(this + 0x34);
  fVar3 = *(float *)(this + 0x38);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(this + 0x40);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(this + 0x44);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(this + 0x48);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(this + 0x4c);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(this + 0x50);
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(this + 0x50);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 0x54);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(this + 0x58);
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(this + 0x54);
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(this + 0x58);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x20)),(uint)&(*(undefined4 *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x50)) = (float)((float10)(*(float *)(gen_frame + 0x50)) + (float10)fVar1);
  (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x54)) + (float10)fVar2);
  (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x58)) + (float10)fVar3);
  F_005fec10(param_1,&(*(undefined4 *)(gen_frame + 0x20)),uVar4);
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return (uint)param_1;
}

/* ref: FUN_00695b00 */
byte F_00695b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x695b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  code * pcVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x6d646c;
  uVar3 = F_00513d20(param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_2,0,0,0);
  if (uVar3 != 0) {
    *(uint *)((int)this + 0x70) = uVar3;
    piVar4 = (int *)(uVar3 + 0x88);
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (iVar1 != 2) {
      *(undefined1 *)((int)this + 0x65) = 2;
      uVar3 = REFG(undefined4, 0x1371294);
      if ((*(byte *)((int)this + 0x24) & 1) != 0) {
        iVar1 = *(int *)(REFG(undefined4, 0x1371294) + 0x28);
        uVar5 = *(uint *)((int)this + 0x24) & 3 | REFG(undefined4, 0x1371294);
        *(int *)((int)this + 0x28) = iVar1;
        *(uint *)((int)this + 0x24) = uVar5;
        *(undefined * PTR32 *)(uVar3 + 0x28) = this;
        if (iVar1 != 0) {
          *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) & 3 | (uint)this;
        }
        *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffe;
      }
      return 1;
    }
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x8c)));
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (iVar1 < 8) {
      pcVar2 = *(gen_code32 *)(*(int *)this + 0x28);
      *(undefined1 *)((int)this + 0x65) = 3;
      (*pcVar2)(this);
      *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 1;
      return 1;
    }
    *(undefined1 *)((int)this + 0x65) = 4;
  }
  return 0;
}

/* ref: FUN_00695bc0 */
byte F_00695bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x695bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte bVar1;
  
  F_004ff310(&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  bVar1 = F_00695b00((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  return bVar1;
}

/* ref: Client::Graphics::Scene::BGObject::vf18 */
uint F_00695bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x695bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  float10 fVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  
  (*(uint *)(gen_frame + 0x19c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1a0);
  fVar1 = (float10)0;
  (*(float *)(gen_frame + 0x180)) = (float)fVar1;
  (*(float *)(gen_frame + 0x184)) = (float)fVar1;
  (*(float *)(gen_frame + 0x188)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x150)) = *(undefined4 *)(this + 0x50);
  (*(undefined4 *)(gen_frame + 0x48)) = param_2;
  (*(undefined4 *)(gen_frame + 0x154)) = 0;
  (*(undefined4 *)(gen_frame + 0x158)) = 0;
  (*(undefined4 *)(gen_frame + 0x160)) = 0;
  (*(undefined4 *)(gen_frame + 0x168)) = 0;
  (*(undefined4 *)(gen_frame + 0x170)) = 0;
  (*(undefined4 *)(gen_frame + 0x174)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x44)) = param_1;
  (*(undefined4 *)(gen_frame + 0x164)) = *(undefined4 *)(this + 0x54);
  (*(undefined4 *)(gen_frame + 0x178)) = *(undefined4 *)(this + 0x58);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x150)),(uint)(this + 0x40));
  (*(float *)(gen_frame + 0x180)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x180)))));
  (*(float *)(gen_frame + 0x184)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x34) + (float10)(*(float *)(gen_frame + 0x184)))));
  (*(float *)(gen_frame + 0x188)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x38) + (float10)(*(float *)(gen_frame + 0x188)))));
  puVar2 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x150)));
  puVar4 = ((undefined4 *)(gen_frame + 0x110));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x40))((*(undefined * PTR32 *)(gen_frame + 0x4c)),((undefined1 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x48)));
  puVar4 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0xd0)),uVar3,(uint)((undefined4 *)(gen_frame + 0x110)));
  puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x44));
  puVar6 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  *puVar2 = (*(undefined4 *)(gen_frame + 0x30));
  puVar2[1] = (*(undefined4 *)(gen_frame + 0x34));
  puVar2[2] = (*(undefined4 *)(gen_frame + 0x38));
  F_00c47745((*(uint *)(gen_frame + 0x19c)) ^ (uint)(uint)(gen_frame + 0x1a0));
  return (uint)puVar2;
}

/* ref: FUN_00695d50 */
uint F_00695d50(unsigned int gen_a0)
{
  GEN_ENTER(0x695d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  code * pcVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x88)));
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = *piVar3;
  UNLOCK();
  if (iVar1 == 2) {
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x8c)));
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3;
    UNLOCK();
    if (7 < iVar1) {
      *(undefined1 *)((int)this + 0x65) = 4;
      return (uint)piVar3;
    }
    pcVar2 = *(gen_code32 *)(*(int *)this + 0x28);
    *(undefined1 *)((int)this + 0x65) = 3;
    piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
    *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 1;
  }
  return (uint)piVar3;
}

/* ref: Client::Graphics::Scene::BGObject::vf6 */
uint F_00695da0(unsigned int gen_a0)
{
  GEN_ENTER(0x695da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  int iVar1;
  float10 fVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  fVar2 = (float10)0;
  (*(float *)(gen_frame + 0xd0)) = (float)fVar2;
  (*(float *)(gen_frame + 0xd4)) = (float)fVar2;
  (*(float *)(gen_frame + 0xd8)) = (float)fVar2;
  (*(float *)(gen_frame + 0x20)) = *(float *)(this + 0x30);
  (*(float *)(gen_frame + 0x24)) = *(float *)(this + 0x34);
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(this + 0x44);
  iVar1 = *(int *)(this + 0x70);
  (*(float *)(gen_frame + 0x28)) = *(float *)(this + 0x38);
  (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(this + 0x40);
  (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(this + 0x50);
  (*(undefined4 *)(gen_frame + 0xa0)) = *(undefined4 *)(this + 0x50);
  (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(this + 0x48);
  (*(undefined4 *)(gen_frame + 0x3c)) = *(undefined4 *)(this + 0x4c);
  (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(this + 0x54);
  (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(this + 0x58);
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0xa8)) = 0;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0;
  (*(undefined4 *)(gen_frame + 0xb4)) = *(undefined4 *)(this + 0x54);
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc0)) = 0;
  (*(undefined4 *)(gen_frame + 0xc4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc8)) = *(undefined4 *)(this + 0x58);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0xa0)),(uint)&(*(undefined4 *)(gen_frame + 0x30)));
  (*(float *)(gen_frame + 0xd0)) = (float)((float10)(*(float *)(gen_frame + 0xd0)) + (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0xd4)) = (float)((float10)(*(float *)(gen_frame + 0xd4)) + (float10)(*(float *)(gen_frame + 0x24)));
  (*(float *)(gen_frame + 0xd8)) = (float)((float10)(*(float *)(gen_frame + 0xd8)) + (float10)(*(float *)(gen_frame + 0x28)));
  F_005fec10(((undefined1 *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0xa0)),*(undefined4 *)(iVar1 + 0xf0));
  uVar3 = F_0068c610(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x50)));
  if (*(undefined * PTR32 *)(this + 0x60) != (undefined *)0x0) {
    uVar3 = F_00b81ef0(*(undefined * PTR32 *)(this + 0x60),((undefined1 *)(gen_frame + 0x0)));
  }
  F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0));
  return uVar3;
}

/* ref: FUN_00695f00 */
byte F_00695f00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x695f00u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  undefined * this;
  float fVar1;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (*(float *)&gen_args[1]);
  fVar3 = (float10)(*(float *)&gen_args[1]);
  this = *(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x70);
  if ((*(char *)(REFG(int, 0x1371278) + 0x13) != '\0') && (*(ushort *)((*(int *)&gen_args[0]) + 0x88) != 0)) {
    fVar4 = (float10)*(ushort *)((*(int *)&gen_args[0]) + 0x88);
    (*(float *)&gen_args[1]) = (float)(fVar4 * fVar4);
    if ((float10)(*(float *)&gen_args[1]) < fVar3) {
      return 0xfe;
    }
  }
  (*(float *)&gen_args[1]) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)&gen_args[1]), 1, 3),*(char *)(REFG(int, 0x1371278) + 0x12)));
  if (*(char *)(REFG(int, 0x1371278) + 0x12) == -1) {
    (*(float *)&gen_args[1]) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)&gen_args[1]), 1, 3),*(char *)((*(int *)&gen_args[0]) + 0x66)));
    if (*(char *)((*(int *)&gen_args[0]) + 0x66) == -1) {
      bVar2 = F_004ffb80(this,fVar1);
      return bVar2;
    }
    bVar2 = F_004ffbd0(this,(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
    return bVar2;
  }
  bVar2 = F_004ffbd0(this,(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
  return bVar2;
}

/* ref: FUN_00695f90 */
uint F_00695f90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x695f90u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  ushort uVar2;
  undefined * this;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined3 extraout_var = 0;
  uint uVar6;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined2 extraout_var_05 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  undefined * this_00;
  
  uVar2 = *(ushort *)(REFG(int, 0x137127c) + 0x1061c);
  this = *(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x70);
  this_00 = (undefined *)(REFG(int, 0x137127c) + 0x1061c);
  if ((*(ushort *)((*(int *)&gen_args[0]) + 0x80) != 0xffff) &&
     (iVar1 = REFG(int, 0x137127c) + 0x10640 + (uint)*(ushort *)((*(int *)&gen_args[0]) + 0x80) * 0x18, iVar1 != 0)) {
    if (*(char *)(iVar1 + 2) == '\x01') {
      (*(undefined4 *)(gen_frame + 0x3)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x3)), 1, 3),*(undefined1 *)(iVar1 + 3));
      bVar3 = F_004ffb50(this,(*(undefined4 *)(gen_frame + 0x3)));
      uVar6 = CONCAT31(extraout_var,bVar3);
      if (bVar3 == 0) {
        bVar3 = F_00695f00((*(int *)&gen_args[0]),(*(float *)&gen_args[1]));
        *(byte *)((*(int *)&gen_args[0]) + 0x94) = bVar3;
        uVar6 = F_00621a50(this_00,(uint)*(ushort *)((*(int *)&gen_args[0]) + 0x80));
        *(undefined2 *)((*(int *)&gen_args[0]) + 0x80) = 0xffff;
        *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
        return uVar6;
      }
    }
    else if (*(char *)(iVar1 + 2) == '\x02') {
      (*(float *)&gen_args[1]) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)&gen_args[1]), 1, 3),*(undefined1 *)(iVar1 + 3)));
      bVar3 = F_004ffb50(this,(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
      uVar6 = CONCAT31(extraout_var_00,bVar3);
      if (bVar3 == 0) {
        *(undefined1 *)((*(int *)&gen_args[0]) + 0x94) = 0xfe;
        uVar6 = F_00621a50(this_00,(uint)*(ushort *)((*(int *)&gen_args[0]) + 0x80));
        *(undefined2 *)((*(int *)&gen_args[0]) + 0x80) = 0xffff;
        *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
        return uVar6;
      }
    }
    else {
      (*(undefined4 *)(gen_frame + 0x3)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x3)), 1, 3),*(undefined1 *)(iVar1 + 3));
      (*(undefined4 *)(gen_frame + 0x7)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x7)), 1, 3),*(undefined1 *)(iVar1 + 4));
      bVar3 = F_004ffb50(this,(*(undefined4 *)(gen_frame + 0x3)));
      bVar4 = F_004ffb50(this,(*(undefined4 *)(gen_frame + 0x7)));
      uVar6 = CONCAT31(extraout_var_01,bVar4);
      if ((bVar3 == 0) || (bVar4 == 0)) {
        bVar3 = F_00695f00((*(int *)&gen_args[0]),(*(float *)&gen_args[1]));
        *(byte *)((*(int *)&gen_args[0]) + 0x94) = bVar3;
        F_00621a50(this_00,(uint)*(ushort *)((*(int *)&gen_args[0]) + 0x80));
        uVar6 = 0xffff;
        *(undefined2 *)((*(int *)&gen_args[0]) + 0x80) = 0xffff;
      }
    }
    *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
    return uVar6;
  }
  if ((uint)uVar2 != *(ushort *)((*(int *)&gen_args[0]) + 0x86) + 1) {
    bVar3 = F_00695f00((*(int *)&gen_args[0]),(*(float *)&gen_args[1]));
    *(byte *)((*(int *)&gen_args[0]) + 0x94) = bVar3;
    *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
    return CONCAT22(extraout_var_05,uVar2);
  }
  bVar4 = F_00695f00((*(int *)&gen_args[0]),(*(float *)&gen_args[1]));
  uVar6 = CONCAT31(extraout_var_02,bVar4);
  bVar3 = *(byte *)((*(int *)&gen_args[0]) + 0x94);
  (*(undefined4 *)(gen_frame + 0x3)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x3)), 1, 3),bVar4);
  (*(undefined4 *)(gen_frame + 0x7)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x7)), 1, 3),bVar3);
  *(byte *)((*(int *)&gen_args[0]) + 0x94) = bVar4;
  if (bVar3 != bVar4) {
    if (bVar3 == 0xfe) {
      uVar6 = F_00621970(this_00,1,1,(*(int *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0x3)),0xfe);
      *(short *)((*(int *)&gen_args[0]) + 0x80) = (short)uVar6;
      if ((short)uVar6 != -1) goto LAB_00696236;
    }
    else {
      if (bVar4 != 0xfe) {
        bVar4 = F_004ffb50(this,(*(undefined4 *)(gen_frame + 0x3)));
        bVar5 = F_004ffb50(this,(*(undefined4 *)(gen_frame + 0x7)));
        uVar6 = CONCAT31(extraout_var_04,bVar5);
        if ((bVar4 != 0) && (bVar5 != 0)) {
          uVar6 = F_00621970(this_00,1,0,(*(int *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0x3)),(*(undefined4 *)(gen_frame + 0x7)));
          *(short *)((*(int *)&gen_args[0]) + 0x80) = (short)uVar6;
          if ((short)uVar6 == -1) {
            *(byte *)((*(int *)&gen_args[0]) + 0x94) = bVar3;
          }
        }
        goto LAB_00696236;
      }
      bVar4 = F_004ffb50(this,(*(undefined4 *)(gen_frame + 0x7)));
      uVar6 = CONCAT31(extraout_var_03,bVar4);
      if (bVar4 != 0) {
        uVar6 = F_00621970(this_00,1,2,(*(int *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0x7)),(*(undefined4 *)(gen_frame + 0x7)));
        *(short *)((*(int *)&gen_args[0]) + 0x80) = (short)uVar6;
        *(byte *)((*(int *)&gen_args[0]) + 0x94) = bVar3;
        *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
        return CONCAT22((short)(uVar6 >> 0x10),uVar2);
      }
    }
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x94) = 0xfe;
    *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
    return CONCAT22((short)(uVar6 >> 0x10),uVar2);
  }
LAB_00696236: ;
  *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
  return CONCAT22((short)(uVar6 >> 0x10),uVar2);
}

/* ref: FUN_00696250 */
uint F_00696250(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x696250u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = F_00695f00(param_1,param_2);
  uVar3 = (uint)*(ushort *)(param_1 + 0x80);
  *(byte *)(param_1 + 0x94) = bVar1;
  uVar2 = uVar3;
  if ((*(ushort *)(param_1 + 0x80) != 0xffff) &&
     (uVar2 = 0, REFG(int, 0x137127c) + 0x10640 + uVar3 * 0x18 != 0)) {
    uVar2 = F_00621a50((undefined *)(REFG(int, 0x137127c) + 0x1061c),uVar3);
    *(undefined2 *)(param_1 + 0x80) = 0xffff;
  }
  return uVar2;
}

/* ref: FUN_006962b0 */
byte F_006962b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6962b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  byte bVar6;
  float * pfVar7;
  uint uVar8;
  float * pfVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  if (*(int *)(REFG(int, 0x1371284) + 0x14) != 0) {
    iVar5 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
    (*(float *)(gen_frame + 0x20)) = 0.0;
    (*(float *)(gen_frame + 0x24)) = 0.0;
    (*(float *)(gen_frame + 0x28)) = gen_bits2f(REFG(float, 0x1087f04));
    pfVar7 = (float *)F_004f4130(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),
                                   *((int *)GEN_TOP((*(int *)(REFG(int, 0x1371284) + 0x14) + 0x10))) + 0x10);
    (*(float *)(gen_frame + 0x30)) = *pfVar7;
    (*(float *)(gen_frame + 0x34)) = pfVar7[1];
    iVar1 = iVar5 + 0xc0;
    (*(float *)(gen_frame + 0x38)) = pfVar7[2];
    (*(int *)(gen_frame + 0x50)) = iVar1;
    uVar10 = 0;
    uVar8 = 0;
    pfVar9 = (float *)(iVar5 + 200);
    do {
      (*(float *)(gen_frame + 0x58)) = pfVar9[-1];
      (*(float *)(gen_frame + 0x5c)) = pfVar9[-2];
      (*(float *)(gen_frame + 0x54)) = *pfVar9;
      fVar11 = (float10)pfVar9[-2];
      fVar12 = (float10)pfVar9[-1];
      fVar13 = (float10)*pfVar9;
      fVar2 = ((float)GEN_TOF((fVar13 * (float10)pfVar7[2] +
                     (fVar12 * (float10)pfVar7[1] + fVar11 * (float10)*pfVar7))));
      (*(float *)(gen_frame + 0x54)) = fVar2;
      if (!((float10)fVar2 <= (float10)0)) {
        fVar2 = ((float)GEN_TOF((fVar13 * (float10)param_1[2] +
                       (fVar12 * (float10)param_1[1] + (float10)*param_1 * fVar11))));
        (*(float *)(gen_frame + 0x54)) = fVar2;
        fVar11 = (float10)fVar2 - (float10)pfVar9[1];
        (*(float *)(gen_frame + 0x54)) = param_1[3];
        fVar12 = (float10)param_1[3];
        if (!(fVar11 <= fVar12)) {
          return 0;
        }
        if (!(fVar11 <= -fVar12)) {
          uVar10 = uVar10 | 1 << ((byte)uVar8 & 0x1f);
        }
      }
      uVar8 = uVar8 + 1;
      pfVar9 = pfVar9 + 4;
    } while (uVar8 < 6);
    if (uVar10 != 0) {
      (*(float *)(gen_frame + 0x54)) = *param_1;
      (*(float *)(gen_frame + 0x58)) = *param_2;
      fVar11 = (float10)*param_1;
      fVar12 = (float10)*param_2;
      fVar2 = (float)(fVar11 - fVar12);
      (*(float *)(gen_frame + 0x30)) = fVar2;
      (*(float *)(gen_frame + 0x54)) = param_1[1];
      (*(float *)(gen_frame + 0x0)) = fVar2;
      (*(float *)(gen_frame + 0x58)) = param_2[1];
      fVar13 = (float10)param_1[1];
      fVar14 = (float10)param_2[1];
      fVar2 = (float)(fVar13 - fVar14);
      (*(float *)(gen_frame + 0x34)) = fVar2;
      (*(float *)(gen_frame + 0x54)) = param_1[2];
      (*(float *)(gen_frame + 0x4)) = fVar2;
      (*(float *)(gen_frame + 0x58)) = param_2[2];
      fVar15 = (float10)param_1[2];
      fVar16 = (float10)param_2[2];
      fVar2 = (float)(fVar15 - fVar16);
      (*(float *)(gen_frame + 0x38)) = fVar2;
      (*(float *)(gen_frame + 0x8)) = fVar2;
      fVar2 = (float)(fVar12 + fVar11);
      (*(float *)(gen_frame + 0x20)) = fVar2;
      fVar3 = (float)(fVar14 + fVar13);
      (*(float *)(gen_frame + 0x24)) = fVar3;
      fVar4 = (float)(fVar16 + fVar15);
      (*(float *)(gen_frame + 0x28)) = fVar4;
      (*(float *)(gen_frame + 0x10)) = fVar2;
      (*(float *)(gen_frame + 0x14)) = fVar3;
      (*(float *)(gen_frame + 0x18)) = fVar4;
      bVar6 = F_0068b210(iVar1,uVar10,&(*(float *)(gen_frame + 0x0)));
      return bVar6;
    }
  }
  return 1;
}

/* ref: FUN_006964c0 */
uint F_006964c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6964c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  piVar3 = (int *)F_006026a0(this,param_1);
  if (param_1 == 1) {
    if (param_2 == 0x1e) {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0xa8)));
      bVar1 = *((byte *)GEN_TOP((*(int *)(iVar2 + 4) + iVar2 + 0x1f)));
      if (((bVar1 >> 1 | bVar1) & 0x20) == 0 && (bVar1 >> 2 & 0x20) == 0) {
        param_3 = param_3 & 0xfffffcff;
      }
      uVar4 = 0xffffff00;
      if (*(char *)((int)this + 0x8b) == '\0') {
        param_3 = param_3 & 0xffffff00;
      }
      if ((char)param_3 != '\0') {
        if ((*(byte *)((int)this + 0x95) & 4) != 0) {
          uVar4 = 0xffffffff;
        }
        param_3 = param_3 & uVar4;
      }
    }
    else if ((param_2 < 0x18) &&
            (iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0xa8))),
            (~(*((byte *)GEN_TOP((*(int *)(iVar2 + 4) + 0x1f + iVar2))) >> 1) &
             *(byte *)((int)this + 0x95) >> 1 & 1) == 0)) {
      uVar4 = 0;
      goto LAB_006965cc;
    }
    uVar4 = param_3;
    if ((param_3 != 0) && (uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3), (char)uVar5 != '\0')) {
      iVar2 = param_2 * 0x358 + 4 + REFG(int, 0x137127c);
      F_0054fa20(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x30);
      ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3,iVar2,*(undefined4 *)((int)this + 0x70),param_3,((undefined1 *)(gen_frame + 0x0)))
      ;
    }
  }
  else if ((param_1 == 2) || (uVar4 = param_3, param_1 == 3)) {
    if (param_2 < 0x18) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_3 & 0x3000000;
    }
  }
LAB_006965cc: ;
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar4;
}

/* ref: FUN_006969e0 */
uint F_006969e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6969e0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  char * pcVar1;
  char cVar2;
  undefined * this;
  uint uVar3;
  undefined4 in_ECX = 0;
  undefined4 local_8;
  
  pcVar1 = (char *)((*(int *)&gen_args[0]) + 0x66);
  cVar2 = *(char *)((*(int *)&gen_args[0]) + 0x67);
  this = *(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x70);
  (*(int *)&gen_args[0]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[0]), 1, 3),*pcVar1);
  local_8 = CONCAT31((int3)((uint)in_ECX >> 8),cVar2);
  if (*pcVar1 == -1) {
    F_00502250(this,(*(float *)&gen_args[1]));
  }
  else {
    F_00502310(this,(*(int *)&gen_args[0]));
  }
  if (cVar2 != -1) {
    uVar3 = F_00504650(this,local_8);
    return uVar3;
  }
  uVar3 = F_00504540(this,(*(float *)&gen_args[1]));
  return uVar3;
}

/* ref: FUN_00696a50 */
uint F_00696a50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x696a50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = F_00695f00(param_1,param_2);
  uVar3 = (uint)*(ushort *)(param_1 + 0x80);
  *(byte *)(param_1 + 0x94) = bVar1;
  uVar2 = uVar3;
  if ((*(ushort *)(param_1 + 0x80) != 0xffff) &&
     (uVar2 = 0, REFG(int, 0x137127c) + 0x10640 + uVar3 * 0x18 != 0)) {
    uVar2 = F_00621a50((undefined *)(REFG(int, 0x137127c) + 0x1061c),uVar3);
    *(undefined2 *)(param_1 + 0x80) = 0xffff;
  }
  return uVar2;
}

/* ref: FUN_00696ab0 */
uint F_00696ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x696ab0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  ushort uVar1;
  undefined * this;
  int iVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x80);
  this = (undefined *)(REFG(int, 0x137127c) + 0x1061c);
  if (uVar1 == 0xffff) {
    iVar2 = 0;
  }
  else {
    iVar2 = REFG(int, 0x137127c) + 0x10640 + (uint)uVar1 * 0x18;
  }
  if (*(char *)(iVar2 + 2) == '\x02') {
    *(undefined1 *)(param_1 + 0x94) = 0xfe;
  }
  F_00621a50(this,(uint)uVar1);
  *(undefined2 *)(param_1 + 0x80) = 0xffff;
  return 0xffff;
}

/* ref: FUN_00696b10 */
uint F_00696b10(unsigned int gen_a0)
{
  GEN_ENTER(0x696b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 0xb;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2ea4));
  return (uint)this;
}

/* ref: FUN_00696b50 */
byte F_00696b50(unsigned int gen_a0)
{
  GEN_ENTER(0x696b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xfb;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 3;
  *(undefined1 *)((int)this + 0x65) = 1;
  uVar1 = F_00625830((int)this + 0x30);
  *(uint *)((int)this + 0x70) = uVar1;
  if (uVar1 == 0) {
    *(undefined1 *)((int)this + 0x65) = 4;
    return 0;
  }
  F_0065d5d0(REFG(undefined4, 0x1371280),uVar1);
  return 1;
}

/* ref: Client::Graphics::Scene::Light::vf1 */
uint F_00696b90(unsigned int gen_a0)
{
  GEN_ENTER(0x696b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  F_0065d7a0(REFG(undefined4, 0x1371280),*(undefined4 *)(this + 0x70));
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(undefined4, 0x1370c1c),*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  F_006905b0((undefined *)this);
  uVar2 = 0;
  if (*(int *)(this + 0x74) != 0) {
    uVar2 = F_0050c620(*(int *)(this + 0x74),0,0);
    *(undefined4 *)(this + 0x74) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x70);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x70) = 0;
  }
  return uVar2;
}

/* ref: Client::Graphics::Scene::Light::vf13 */
uint F_00696c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x696c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  float fVar1;
  float fVar2;
  int iVar3;
  float * pfVar4;
  float * pfVar5;
  float10 fVar6;
  
  (*(uint *)(gen_frame + 0x14c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x150);
  iVar3 = *(int *)(this + 0x70);
  if (*(int *)(iVar3 + 0xc) == 4) {
    pfVar4 = *(float * PTR32 *)(iVar3 + 0x10);
    (*(float *)(gen_frame + 0x40)) = *pfVar4;
    (*(float *)(gen_frame + 0x44)) = pfVar4[1];
    (*(float *)(gen_frame + 0x48)) = pfVar4[2];
    (*(float *)(gen_frame + 0x50)) = pfVar4[4];
    (*(float *)(gen_frame + 0x54)) = pfVar4[5];
    (*(float *)(gen_frame + 0x58)) = pfVar4[6];
    (*(float *)(gen_frame + 0x5c)) = pfVar4[7];
    (*(float *)(gen_frame + 0x60)) = pfVar4[8];
    (*(float *)(gen_frame + 0x64)) = pfVar4[9];
    (*(float *)(gen_frame + 0x68)) = pfVar4[10];
    (*(float *)(gen_frame + 0x3c)) = REFG(float, 0x10abe98);
    pfVar5 = &(*(float *)(gen_frame + 0x7c));
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(iVar3 + 0x78) / (float10)*(double *)&REFG(undefined, 0x1090718))));
    (*(float *)(gen_frame + 0x7c)) = fVar1;
    if (!(*(double *)&REFG(undefined, 0x109ce00) < (double)fVar1)) {
      pfVar5 = &(*(float *)(gen_frame + 0x3c));
    }
    (*(float *)(gen_frame + 0x3c)) = *pfVar5;
    fVar6 = (float10)*pfVar5;
    fVar6 = fVar6 + fVar6;
    (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1088068);
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1088068);
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x0)) = REFG(float, 0x109cab8);
    fVar1 = (float)((float10)pfVar4[8] + fVar6);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x109cab8);
    ((float *)(gen_frame + 0x100))[0] = fVar1;
    fVar2 = (float)(fVar6 + (float10)pfVar4[9]);
    (*(float *)(gen_frame + 0x24)) = fVar2;
    (*(float *)(gen_frame + 0x60)) = fVar1;
    (*(float *)(gen_frame + 0x68)) = *(float *)(iVar3 + 0x7c);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(float *)(gen_frame + 0x64)) = fVar2;
    ((float *)(gen_frame + 0x100))[1] = 0.0;
    fVar6 = (float10)0;
    ((float *)(gen_frame + 0x100))[2] = 0.0;
    (*(float *)(gen_frame + 0x130)) = (float)fVar6;
    (*(undefined4 *)(gen_frame + 0x110)) = 0;
    (*(float *)(gen_frame + 0x134)) = (float)fVar6;
    (*(float *)(gen_frame + 0x114)) = fVar2;
    (*(float *)(gen_frame + 0x138)) = (float)fVar6;
    (*(undefined4 *)(gen_frame + 0x118)) = 0;
    (*(undefined4 *)(gen_frame + 0x120)) = 0;
    (*(undefined4 *)(gen_frame + 0x124)) = 0;
    (*(float *)(gen_frame + 0x128)) = *(float *)(iVar3 + 0x7c);
    F_004efe70(((float *)(gen_frame + 0x100)),(uint)&(*(float *)(gen_frame + 0x50)));
    pfVar5 = ((float *)(gen_frame + 0x100));
    (*(float *)(gen_frame + 0x130)) = (float)((float10)(*(float *)(gen_frame + 0x130)) + (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x134)) = (float)((float10)(*(float *)(gen_frame + 0x134)) + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x138)) = (float)((float10)(*(float *)(gen_frame + 0x138)) + (float10)(*(float *)(gen_frame + 0x48)));
  }
  else {
    if (*(int *)(iVar3 + 0xc) != 5) {
      pfVar5 = *(float * PTR32 *)(iVar3 + 0x10);
      fVar6 = (float10)0;
      (*(float *)(gen_frame + 0x40)) = *pfVar5;
      (*(float *)(gen_frame + 0x44)) = pfVar5[1];
      (*(float *)(gen_frame + 0x48)) = pfVar5[2];
      (*(float *)(gen_frame + 0x50)) = pfVar5[4];
      (*(float *)(gen_frame + 0x54)) = pfVar5[5];
      (*(float *)(gen_frame + 0x58)) = pfVar5[6];
      (*(float *)(gen_frame + 0x5c)) = pfVar5[7];
      (*(float *)(gen_frame + 0x60)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0x64)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0x68)) = REFG(float, 0x1087f04);
      fVar1 = *(float *)(iVar3 + 0x7c);
      (*(float *)(gen_frame + 0xb0)) = (float)fVar6;
      (*(float *)(gen_frame + 0xb4)) = (float)fVar6;
      (*(float *)(gen_frame + 0x20)) = fVar1;
      (*(float *)(gen_frame + 0xb8)) = (float)fVar6;
      (*(float *)(gen_frame + 0x24)) = fVar1;
      (*(float *)(gen_frame + 0x28)) = fVar1;
      ((float *)(gen_frame + 0x80))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x80))[0], REFG(float, 0x1087f04));
      ((float *)(gen_frame + 0x80))[1] = 0.0;
      ((float *)(gen_frame + 0x80))[2] = 0.0;
      (*(undefined4 *)(gen_frame + 0x90)) = 0;
      (*(float *)(gen_frame + 0x94)) = REFG(float, 0x1087f04);
      (*(undefined4 *)(gen_frame + 0x98)) = 0;
      (*(undefined4 *)(gen_frame + 0xa0)) = 0;
      (*(undefined4 *)(gen_frame + 0xa4)) = 0;
      (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1087f04);
      F_004efe70(((float *)(gen_frame + 0x80)),(uint)&(*(float *)(gen_frame + 0x50)));
      (*(float *)(gen_frame + 0xb0)) = (float)((float10)(*(float *)(gen_frame + 0xb0)) + (float10)(*(float *)(gen_frame + 0x40)));
      (*(float *)(gen_frame + 0xb4)) = (float)((float10)(*(float *)(gen_frame + 0xb4)) + (float10)(*(float *)(gen_frame + 0x44)));
      (*(float *)(gen_frame + 0xb8)) = (float)((float10)(*(float *)(gen_frame + 0xb8)) + (float10)(*(float *)(gen_frame + 0x48)));
      F_005feb80(param_1,((float *)(gen_frame + 0x80)),&(*(float *)(gen_frame + 0x20)));
      goto LAB_006970da;
    }
    pfVar5 = *(float * PTR32 *)(iVar3 + 0x10);
    (*(float *)(gen_frame + 0x7c)) = *(float *)(iVar3 + 0x7c);
    (*(float *)(gen_frame + 0x40)) = *pfVar5;
    (*(float *)(gen_frame + 0x44)) = pfVar5[1];
    (*(float *)(gen_frame + 0x48)) = pfVar5[2];
    (*(float *)(gen_frame + 0x50)) = pfVar5[4];
    (*(float *)(gen_frame + 0x54)) = pfVar5[5];
    (*(float *)(gen_frame + 0x58)) = pfVar5[6];
    (*(float *)(gen_frame + 0x5c)) = pfVar5[7];
    (*(float *)(gen_frame + 0x60)) = pfVar5[8];
    (*(undefined4 *)(gen_frame + 0x0)) = REFG(float, 0x109cab8);
    (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x109cab8);
    (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x109cab8);
    fVar6 = (float10)*(float *)(iVar3 + 0x7c) * (float10)*(double *)&REFG(undefined, 0x1092098);
    (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1088068);
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1088068);
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1088068);
    fVar1 = (float)((float10)*(double *)&REFG(undefined, 0x1092098) * fVar6 + (float10)pfVar5[8]);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    ((float *)(gen_frame + 0xc0))[0] = fVar1;
    fVar2 = (float)fVar6;
    (*(float *)(gen_frame + 0x7c)) = fVar2;
    (*(float *)(gen_frame + 0x60)) = fVar1;
    fVar6 = (float10)0;
    (*(float *)(gen_frame + 0x64)) = fVar2;
    (*(float *)(gen_frame + 0xf0)) = (float)fVar6;
    (*(float *)(gen_frame + 0x68)) = fVar2;
    (*(float *)(gen_frame + 0xf4)) = (float)fVar6;
    ((float *)(gen_frame + 0xc0))[1] = 0.0;
    (*(float *)(gen_frame + 0xf8)) = (float)fVar6;
    ((float *)(gen_frame + 0xc0))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0xd0)) = 0;
    (*(float *)(gen_frame + 0xd4)) = fVar2;
    (*(undefined4 *)(gen_frame + 0xd8)) = 0;
    (*(undefined4 *)(gen_frame + 0xe0)) = 0;
    (*(undefined4 *)(gen_frame + 0xe4)) = 0;
    (*(float *)(gen_frame + 0xe8)) = fVar2;
    F_004efe70(((float *)(gen_frame + 0xc0)),(uint)&(*(float *)(gen_frame + 0x50)));
    pfVar5 = ((float *)(gen_frame + 0xc0));
    (*(float *)(gen_frame + 0xf0)) = (float)((float10)(*(float *)(gen_frame + 0xf0)) + (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0xf4)) = (float)((float10)(*(float *)(gen_frame + 0xf4)) + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0xf8)) = (float)((float10)(*(float *)(gen_frame + 0xf8)) + (float10)(*(float *)(gen_frame + 0x48)));
  }
  F_005fec10(param_1,pfVar5,&(*(undefined4 *)(gen_frame + 0x0)));
LAB_006970da: ;
  F_00c47745((*(uint *)(gen_frame + 0x14c)) ^ (uint)(uint)(gen_frame + 0x150));
  return (uint)param_1;
}

/* ref: FUN_006970f0 */
unsigned int F_006970f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6970f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  code * pcVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0x88)));
  LOCK();
  iVar1 = *piVar4;
  *piVar4 = *piVar4;
  UNLOCK();
  if (iVar1 == 2) {
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0x8c)));
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (iVar1 < 8) {
      F_005029b0(*(undefined * PTR32 *)((int)this + 0x74),(uint)*(byte *)(REFG(int, 0x1371278) + 0x10));
      iVar1 = *(int *)((int)this + 0x70);
      if (iVar1 != 0) {
        piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + 0xfc)));
        if (piVar4 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
        }
        piVar2 = *(int * PTR32 *)(iVar1 + 0x84);
        if (piVar2 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
        }
        *(int * PTR32 *)(iVar1 + 0x84) = piVar4;
      }
      pcVar3 = *(gen_code32 *)(*(int *)this + 0x28);
      *(undefined1 *)((int)this + 0x65) = 3;
      (*pcVar3)(this);
      return 0;
    }
    *(undefined1 *)((int)this + 0x65) = 4;
  }
  return 0;
}

/* ref: FUN_00697180 */
uint F_00697180(unsigned int gen_a0)
{
  GEN_ENTER(0x697180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 0xb;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2f74));
  return (uint)this;
}

/* ref: FUN_006971c0 */
byte F_006971c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6971c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 100) = *(byte *)(in_ecx + 100) & 0xfb;
  *(uint *)(in_ecx + 0x24) = *(uint *)(in_ecx + 0x24) | 3;
  *(undefined1 *)(in_ecx + 0x65) = 1;
  return 1;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf1 */
uint F_006971d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6971d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x7c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x7c) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x78);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x78) = 0;
  }
  if (*(int *)(this + 0x74) != 0) {
    F_0050c620(*(int *)(this + 0x74),0,0);
    *(undefined4 *)(this + 0x74) = 0;
  }
  if (*(int *)(this + 0x70) != 0) {
    F_0050c620(*(int *)(this + 0x70),0,0);
    *(undefined4 *)(this + 0x70) = 0;
  }
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(undefined4, 0x1370c1c),*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  uVar2 = F_006905b0((undefined *)this);
  return uVar2;
}

/* ref: FUN_00697250 */
uint F_00697250(unsigned int gen_a0)
{
  GEN_ENTER(0x697250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  bool bVar2;
  bool bVar3;
  int * piVar4;
  
  bVar2 = true;
  if (*(int *)((int)this + 0x70) != 0) {
    bVar2 = false;
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x8c)));
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (7 < iVar1) goto LAB_0069726f;
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x88)));
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if ((iVar1 == 2) && (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0xa0))), iVar1 != 0)) {
      F_0068b3d0(this,iVar1);
      bVar2 = true;
    }
  }
  bVar3 = true;
  piVar4 = (int *)0x0;
  if (*(int *)((int)this + 0x74) != 0) {
    bVar3 = false;
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0x8c)));
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (7 < iVar1) {
LAB_0069726f: ;
      *(undefined1 *)((int)this + 0x65) = 4;
      return (uint)piVar4;
    }
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0x88)));
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if ((iVar1 == 2) &&
       (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0xfc))), piVar4 = (int *)0x0, iVar1 != 0)) {
      piVar4 = (int *)F_0068b400(this,iVar1);
      bVar3 = true;
    }
  }
  if ((bVar2) && (bVar3)) {
    *(undefined1 *)((int)this + 0x65) = 3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00697300 */
float F_00697300(unsigned int gen_a0)
{
  GEN_ENTER(0x697300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float * pfVar1;
  float fVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  ((float *)(gen_frame + 0x4))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x4))[2], REFG(float, 0x1087f04));
  if (*(int *)((int)this + 0x78) != 0) {
    F_004bea00(*(int *)((int)this + 0x78) + 0x108,((undefined1 *)(gen_frame + 0x10)));
    fVar2 = F_004bead0(&REFG(float, 0x1302c80),((undefined1 *)(gen_frame + 0x10)));
    ((float *)(gen_frame + 0x4))[2] = fVar2;
    ((float *)(gen_frame + 0x4))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x4))[1], REFG(float, 0x1087f04));
    ((float *)(gen_frame + 0x4))[0] = 0.0;
    pfVar1 = ((float *)(gen_frame + 0x4)) + 2;
    if (!((float10)fVar2 < (float10)1)) {
      pfVar1 = ((float *)(gen_frame + 0x4)) + 1;
    }
    if (!(0.0 < *pfVar1)) {
      pfVar1 = ((float *)(gen_frame + 0x4));
    }
    ((float *)(gen_frame + 0x4))[2] = *pfVar1;
  }
  fVar2 = ((float *)(gen_frame + 0x4))[2];
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return fVar2;
}

/* ref: FUN_006973b0 */
uint F_006973b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6973b0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(byte *)((int)param_1 + 0x65) - 2;
  if (uVar1 == 0) {
    uVar1 = F_00697250(param_1);
  }
  else if ((*(int *)((int)param_1 + 0x78) != 0) && (*(int *)((int)param_1 + 0x7c) != 0)) {
    *(undefined1 *)((int)param_1 + 0x65) = 3;
  }
  if (*(int *)((int)param_1 + 0x78) != 0) {
    uVar1 = F_004b4e70(*(int *)((int)param_1 + 0x78),param_2);
  }
  return uVar1;
}

/* ref: FUN_006973f0 */
uint F_006973f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6973f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 0xb;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b3044));
  return (uint)this;
}

/* ref: FUN_00697440 */
byte F_00697440(unsigned int gen_a0)
{
  GEN_ENTER(0x697440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = REFG(float, 0x10916ec);
  uVar1 = REFG(float, 0x1088068);
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xfb;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 3;
  *(undefined1 *)((int)this + 0x65) = 1;
  *(undefined4 *)((int)this + 0x50) = uVar1;
  *(undefined4 *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 0x58) = uVar1;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 2;
  *(undefined1 *)((int)this + 0x96) = 1;
  F_006b3750(this,fVar2);
  *(undefined1 *)((int)this + 0x96) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined2 *)((int)this + 0x94) = 0;
  return 1;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf1 */
uint F_006974b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6974b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x78);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x78) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x7c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x7c) = 0;
  }
  if (*(int *)(this + 0x70) != 0) {
    F_0050c620(*(int *)(this + 0x70),0,0);
    *(undefined4 *)(this + 0x70) = 0;
  }
  if (*(int *)(this + 0x74) != 0) {
    F_0050c620(*(int *)(this + 0x74),0,0);
    *(undefined4 *)(this + 0x74) = 0;
  }
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(undefined4, 0x1370c1c),*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  uVar2 = F_006905b0((undefined *)this);
  return uVar2;
}

/* ref: FUN_00697530 */
unsigned int F_00697530(unsigned int gen_a0)
{
  GEN_ENTER(0x697530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  bool bVar2;
  bool bVar3;
  int * piVar4;
  
  bVar2 = true;
  if (*(int *)((int)this + 0x70) != 0) {
    bVar2 = false;
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x8c)));
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (iVar1 < 8) {
      piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x88)));
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4;
      UNLOCK();
      if ((iVar1 == 2) && (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0xa0))), iVar1 != 0)) {
        F_0068b430(this,iVar1);
        bVar2 = true;
      }
    }
    else {
      *(undefined1 *)((int)this + 0x65) = 4;
    }
  }
  bVar3 = true;
  if (*(int *)((int)this + 0x74) != 0) {
    bVar3 = false;
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0x8c)));
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (iVar1 < 8) {
      piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0x88)));
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4;
      UNLOCK();
      if ((iVar1 == 2) && (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0xa0))), iVar1 != 0)) {
        F_0068b460(this,iVar1);
        bVar3 = true;
      }
    }
    else {
      *(undefined1 *)((int)this + 0x65) = 4;
    }
  }
  if ((bVar2) && (bVar3)) {
    *(undefined1 *)((int)this + 0x65) = 3;
  }
  return 0;
}

/* ref: FUN_006975e0 */
uint F_006975e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6975e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(in_ecx + 0x50);
  param_2[1] = 0;
  *param_2 = uVar1;
  param_2[2] = 0;
  param_2[4] = 0;
  param_2[5] = *(undefined4 *)(in_ecx + 0x54);
  param_2[6] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = *(undefined4 *)(in_ecx + 0x58);
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  uVar2 = F_004efe70(param_2,in_ecx + 0x40);
  param_2[0xc] = (undefined4)
                 gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_2[0xc]))) +
                                    (float10)*(float *)(in_ecx + 0x30)))));
  param_2[0xd] = (undefined4)
                 gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x34) +
                                    ((float10)GEN_TOD(gen_bits2f(param_2[0xd])))))));
  param_2[0xe] = (undefined4)
                 gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x38) +
                                    ((float10)GEN_TOD(gen_bits2f(param_2[0xe])))))));
  return uVar2;
}

/* ref: FUN_00697660 */
unsigned int F_00697660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x697660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 0x50);
  param_2[1] = 0;
  *param_2 = uVar1;
  param_2[2] = 0;
  param_2[4] = 0;
  param_2[5] = *(undefined4 *)(in_ecx + 0x54);
  param_2[6] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = *(undefined4 *)(in_ecx + 0x58);
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  F_004efe70(param_2,in_ecx + 0x40);
  param_2[0xc] = (undefined4)
                 gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_2[0xc]))) +
                                    (float10)*(float *)(in_ecx + 0x30)))));
  param_2[0xd] = (undefined4)
                 gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x34) +
                                    ((float10)GEN_TOD(gen_bits2f(param_2[0xd])))))));
  param_2[0xe] = (undefined4)
                 gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x38) +
                                    ((float10)GEN_TOD(gen_bits2f(param_2[0xe])))))));
  F_004f03f0(param_2);
  return 0;
}

/* ref: FUN_006977f0 */
uint F_006977f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6977f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint3 uVar5;
  float10 fVar6;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  fVar6 = (float10)0;
  (*(float *)(gen_frame + 0x50)) = (float)fVar6;
  (*(float *)(gen_frame + 0x54)) = (float)fVar6;
  (*(float *)(gen_frame + 0x58)) = (float)fVar6;
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x50);
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)((int)this + 0x54);
  (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)((int)this + 0x58);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x20)),(int)this + 0x40);
  (*(float *)(gen_frame + 0x50)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x30) + (float10)(*(float *)(gen_frame + 0x50)))));
  (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x34) + (float10)(*(float *)(gen_frame + 0x54)))));
  (*(float *)(gen_frame + 0x58)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x38) + (float10)(*(float *)(gen_frame + 0x58)))));
  F_004f03f0(&(*(undefined4 *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x0)) = *param_1;
  (*(float *)(gen_frame + 0x4)) = param_1[1];
  (*(float *)(gen_frame + 0x8)) = param_1[2];
  uVar3 = F_004eea10(&(*(float *)(gen_frame + 0x0)),(uint)&(*(undefined4 *)(gen_frame + 0x20)));
  cVar2 = *(char *)((int)this + 0x94);
  uVar4 = uVar3 & 0xffffff00;
  uVar5 = (uint3)(uVar3 >> 8);
  if (cVar2 == '\x01') {
    fVar1 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x4)) * (float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0)))
                   + (float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x8)))));
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    fVar6 = (float10)fVar1;
    if ((!GEN_ISNAN((float10)1) && !GEN_ISNAN(fVar6)) && !((float10)1 < fVar6)) {
LAB_00697930: ;
      uVar4 = CONCAT31(uVar5,1);
      goto LAB_00697963;
    }
  }
  else if (cVar2 == '\x02') {
    (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x0)))));
    if (((float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x0))))) <= (float10)1) &&
       ((*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x4))))),
       (float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x4))))) <= (float10)1)) {
      (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x8)))));
LAB_0069792a: ;
      if ((float10)(*(float *)(gen_frame + 0x1c)) <= (float10)1) goto LAB_00697930;
    }
  }
  else {
    if (cVar2 != '\x03') goto LAB_00697963;
    if ((float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x8)) <= (float10)1)
    {
      (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x4)))));
      goto LAB_0069792a;
    }
  }
  uVar4 = (uint)uVar5 << 8;
LAB_00697963: ;
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return uVar4;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf12 */
uint F_00697980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x697980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  undefined4 * puVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  (*(uint *)(gen_frame + 0x17c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x180);
  if ((byte)this[0x94] - 1 < 3) {
    F_006975e0(this,((undefined1 *)(gen_frame + 0xb0)));
    (*(float *)(gen_frame + 0x80)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x84)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x88)) = REFG(float, 0x1090708);
    pfVar4 = (float *)F_004ee970(((undefined1 *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x80)),((undefined1 *)(gen_frame + 0xb0)));
    (*(float *)(gen_frame + 0x90)) = *pfVar4;
    (*(float *)(gen_frame + 0xf0)) = *pfVar4;
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x94)) = pfVar4[1];
    (*(float *)(gen_frame + 0x98)) = pfVar4[2];
    (*(float *)(gen_frame + 0xf4)) = pfVar4[1];
    (*(float *)(gen_frame + 0xf8)) = pfVar4[2];
    (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1090708);
    pfVar4 = (float *)F_004ee970(((undefined1 *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0xb0)));
    ((float *)(gen_frame + 0x100))[0] = *pfVar4;
    ((float *)(gen_frame + 0x100))[1] = pfVar4[1];
    ((float *)(gen_frame + 0x100))[2] = pfVar4[2];
    (*(float *)(gen_frame + 0x40)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x44)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x48)) = REFG(float, 0x1090708);
    puVar5 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0xb0)));
    ((float *)(gen_frame + 0x100))[4] = gen_bits2f(*puVar5);
    (*(undefined4 *)(gen_frame + 0x60)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x64)) = REFG(float, 0x1087f04);
    ((float *)(gen_frame + 0x100))[5] = gen_bits2f(puVar5[1]);
    (*(undefined4 *)(gen_frame + 0x118)) = puVar5[2];
    (*(float *)(gen_frame + 0x68)) = REFG(float, 0x1090708);
    puVar5 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0xb0)));
    (*(undefined4 *)(gen_frame + 0x120)) = *puVar5;
    (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x124)) = puVar5[1];
    (*(undefined4 *)(gen_frame + 0x128)) = puVar5[2];
    (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    puVar5 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0xb0)));
    (*(undefined4 *)(gen_frame + 0x130)) = *puVar5;
    (*(undefined4 *)(gen_frame + 0x134)) = puVar5[1];
    (*(undefined4 *)(gen_frame + 0x138)) = puVar5[2];
    (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    puVar5 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0xb0)));
    (*(undefined4 *)(gen_frame + 0x140)) = *puVar5;
    (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x144)) = puVar5[1];
    (*(undefined4 *)(gen_frame + 0x148)) = puVar5[2];
    (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
    puVar5 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0xb0)));
    (*(undefined4 *)(gen_frame + 0x150)) = *puVar5;
    (*(undefined4 *)(gen_frame + 0x154)) = puVar5[1];
    (*(undefined4 *)(gen_frame + 0x158)) = puVar5[2];
    (*(undefined4 *)(gen_frame + 0x50)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x58)) = REFG(float, 0x1087f04);
    puVar5 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x50)),((undefined1 *)(gen_frame + 0xb0)));
    fVar9 = (*(float *)(gen_frame + 0x98));
    fVar8 = (*(float *)(gen_frame + 0x94));
    fVar7 = (*(float *)(gen_frame + 0x90));
    (*(undefined4 *)(gen_frame + 0x160)) = *puVar5;
    (*(undefined4 *)(gen_frame + 0x164)) = puVar5[1];
    (*(undefined4 *)(gen_frame + 0x168)) = puVar5[2];
    (*(float *)(gen_frame + 0x80)) = (*(float *)(gen_frame + 0x90));
    (*(float *)(gen_frame + 0x84)) = (*(float *)(gen_frame + 0x94));
    (*(float *)(gen_frame + 0x88)) = (*(float *)(gen_frame + 0x98));
    pfVar4 = ((float *)(gen_frame + 0x100)) + 2;
    iVar6 = 7;
    fVar10 = fVar9;
    fVar11 = fVar8;
    fVar12 = fVar7;
    do {
      fVar1 = pfVar4[-2];
      (*(float *)(gen_frame + 0xa8)) = fVar1;
      if ((float10)fVar1 < (float10)(*(float *)(gen_frame + 0x90))) {
        (*(float *)(gen_frame + 0x90)) = fVar1;
        fVar7 = fVar1;
      }
      fVar2 = pfVar4[-1];
      (*(float *)(gen_frame + 0xac)) = fVar2;
      if ((float10)fVar2 < (float10)(*(float *)(gen_frame + 0x94))) {
        (*(float *)(gen_frame + 0x94)) = fVar2;
        fVar8 = fVar2;
      }
      fVar3 = *pfVar4;
      (*(float *)(gen_frame + 0xac)) = fVar3;
      if ((float10)fVar3 < (float10)(*(float *)(gen_frame + 0x98))) {
        (*(float *)(gen_frame + 0x98)) = fVar3;
        fVar9 = fVar3;
      }
      if ((float10)(*(float *)(gen_frame + 0x80)) < (float10)fVar1) {
        (*(float *)(gen_frame + 0x80)) = fVar1;
        fVar12 = fVar1;
      }
      if ((float10)(*(float *)(gen_frame + 0x84)) < (float10)fVar2) {
        (*(float *)(gen_frame + 0x84)) = fVar2;
        fVar11 = fVar2;
      }
      if ((float10)(*(float *)(gen_frame + 0x88)) < (float10)fVar3) {
        (*(float *)(gen_frame + 0x88)) = fVar3;
        fVar10 = fVar3;
      }
      pfVar4 = pfVar4 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    *param_1 = fVar7;
    param_1[1] = fVar8;
    param_1[2] = fVar9;
    param_1[4] = fVar12;
    param_1[5] = fVar11;
    param_1[6] = fVar10;
  }
  F_00c47745((*(uint *)(gen_frame + 0x17c)) ^ (uint)(uint)(gen_frame + 0x180));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf13 */
uint F_00697e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x697e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float10 fVar1;
  float * pfVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  fVar1 = (float10)0;
  (*(float *)(gen_frame + 0x40)) = (float)fVar1;
  (*(float *)(gen_frame + 0x44)) = (float)fVar1;
  (*(float *)(gen_frame + 0x48)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(this + 0x50);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(this + 0x54);
  (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(this + 0x58);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x10)),(uint)(this + 0x40));
  (*(float *)(gen_frame + 0x40)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x40)))));
  (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x34) + (float10)(*(float *)(gen_frame + 0x44)))));
  (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x38) + (float10)(*(float *)(gen_frame + 0x48)))));
  pfVar2 = (float *)F_005fe770(&(*(undefined4 *)(gen_frame + 0x10)),(uint)((undefined1 *)(gen_frame + 0x0)));
  *(float *)(param_1 + 0x40) = (float)((float10)*pfVar2 * (float10)REFG(float, 0x1302c60));
  *(float *)(param_1 + 0x44) = (float)((float10)pfVar2[1] * (float10)REFG(float, 0x1302c64));
  *(float *)(param_1 + 0x48) = (float)((float10)pfVar2[2] * (float10)REFG(float, 0x1302c68));
  F_005fe2e0(param_1,(uint)&(*(undefined4 *)(gen_frame + 0x10)));
  F_005fe2e0(param_1 + 0x10,(uint)&(*(undefined4 *)(gen_frame + 0x20)));
  F_005fe2e0(param_1 + 0x20,(uint)&(*(undefined4 *)(gen_frame + 0x30)));
  *(float *)(param_1 + 0x30) = (*(float *)(gen_frame + 0x40));
  *(float *)(param_1 + 0x34) = (*(float *)(gen_frame + 0x44));
  *(float *)(param_1 + 0x38) = (*(float *)(gen_frame + 0x48));
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return param_1;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf4 */
unsigned int F_00697f70(unsigned int gen_a0)
{
  GEN_ENTER(0x697f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x65] == (undefined1)0x2) {
    F_00697530(this);
    return 0;
  }
  return 0;
}

/* ref: FUN_00697f80 */
uint F_00697f80(unsigned int gen_a0)
{
  GEN_ENTER(0x697f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(REFG(int, 0x1371290) + 0x830) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(REFG(int, 0x1371290) + 0x808) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(REFG(int, 0x1371290) + 0x804) = *(undefined4 *)((int)this + 0x28);
  F_004a3e60(REFG(int, 0x1371290) + 0x818,(int)this + 0x38);
  *(undefined4 *)(REFG(int, 0x1371290) + 0x824) = *(undefined4 *)((int)this + 0x44);
  *(undefined1 *)(REFG(int, 0x1371290) + 0x82c) = *(undefined1 *)((int)this + 0x4c);
  if (*((int *)GEN_TOP(((&REFG(undefined4, 0x1375b90))[(REFG(int, 0x1375bbc) != 2) - 1 & 2] + 0xd0))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((&REFG(undefined4, 0x1375b90))[(REFG(int, 0x1375bbc) != 2) - 1 & 2] + 0xd0))) + 0xb0))) =
         *(undefined4 *)((int)this + 0x2c);
  }
  if (*(int *)(REFG(int, 0x1375b00) + 0x28) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*(int *)(REFG(int, 0x1375b00) + 0x28) + 0x38)));
  }
  if (iVar1 != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0xd0) + 0xb0))) = *(undefined4 *)((int)this + 0x2c);
  }
  uVar2 = REFG(undefined4, 0x1371280);
  *(undefined4 *)(REFG(undefined4, 0x1371280) + 0x30) = *(undefined4 *)((int)this + 0x30);
  *(undefined4 *)(REFG(undefined4, 0x1371280) + 0x28) = *(undefined4 *)((int)this + 0x34);
  return uVar2;
}

/* ref: FUN_00698050 */
uint F_00698050(unsigned int gen_a0)
{
  GEN_ENTER(0x698050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2b34));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  uVar3 = REFG(float, 0x10946bc);
  uVar2 = REFG(float, 0x10946b8);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x58) = uVar3;
  *(undefined4 *)((int)this + 0x4c) = uVar2;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x5c) = REFG(float, 0x10946b4);
  uVar2 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x50) = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x60) = REFG(float, 0x1088068);
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = uVar2;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0x1010000;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  puVar1 = (undefined4 *)((int)this + 0x80);
  *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xb0) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0xb4) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0xb8) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0xc0) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0xc4) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 200) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0xcc) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0xd0) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 0xd4) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0xd8) = REFG(float, 0x1302e18);
  *(uint *)((int)this + 0xa4) = *(uint *)((int)this + 0xa4) | 3;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 * PTR32 *)((int)this + 0x98) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x9c) = puVar1;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined2 *)((int)this + 0xe4) = 0;
  *(undefined2 *)((int)this + 0xe6) = 0xffff;
  *(byte *)((int)this + 0xe4) = *(byte *)((int)this + 0xe4) | 0xb;
  *(byte *)((int)this + 0xe4) = *(byte *)((int)this + 0xe4) & 0xef;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b3044));
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x120) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x150) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x154) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x158) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x160) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x164) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x168) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x16c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x170) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 0x174) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x178) = REFG(float, 0x1302e18);
  *(uint *)((int)this + 0x144) = *(uint *)((int)this + 0x144) | 3;
  puVar1 = (undefined4 *)((int)this + 0x120);
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 * PTR32 *)((int)this + 0x138) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x13c) = puVar1;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined2 *)((int)this + 0x184) = 0;
  *(undefined2 *)((int)this + 0x186) = 0xffff;
  *(byte *)((int)this + 0x184) = *(byte *)((int)this + 0x184) | 0xb;
  *(byte *)((int)this + 0x184) = *(byte *)((int)this + 0x184) & 0xef;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b3044));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c0) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1f0) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 500) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x1f8) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x200) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x204) = REFG(undefined4, 0x1302e04);
  puVar1 = (undefined4 *)((int)this + 0x1c0);
  *(undefined4 *)((int)this + 0x208) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x20c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x210) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 0x214) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x218) = REFG(float, 0x1302e18);
  *(uint *)((int)this + 0x1e4) = *(uint *)((int)this + 0x1e4) | 3;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 * PTR32 *)((int)this + 0x1d8) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x1dc) = puVar1;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined2 *)((int)this + 0x224) = 0;
  *(undefined2 *)((int)this + 0x226) = 0xffff;
  *(byte *)((int)this + 0x224) = *(byte *)((int)this + 0x224) | 0xb;
  *(byte *)((int)this + 0x224) = *(byte *)((int)this + 0x224) & 0xef;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b3044));
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x260) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x290) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x294) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x298) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x2a0) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x2a4) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x2a8) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x2ac) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x2b0) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 0x2b4) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x2b8) = REFG(float, 0x1302e18);
  *(uint *)((int)this + 0x284) = *(uint *)((int)this + 0x284) | 3;
  puVar1 = (undefined4 *)((int)this + 0x260);
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 * PTR32 *)((int)this + 0x278) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x27c) = puVar1;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined2 *)((int)this + 0x2c4) = 0;
  *(undefined2 *)((int)this + 0x2c6) = 0xffff;
  *(byte *)((int)this + 0x2c4) = *(byte *)((int)this + 0x2c4) | 0xb;
  *(byte *)((int)this + 0x2c4) = *(byte *)((int)this + 0x2c4) & 0xef;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b3044));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x300) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined4 *)((int)this + 0x324) = 0;
  *(undefined4 *)((int)this + 0x2d0) = 0;
  *(undefined4 *)((int)this + 0x2d4) = 0;
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x2dc) = 0;
  *(undefined4 *)((int)this + 0x2e0) = 0;
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 800) = 0;
  *(undefined4 *)((int)this + 0x328) = 0;
  *(undefined4 *)((int)this + 0x330) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x334) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x338) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x340) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x344) = REFG(undefined4, 0x1302e04);
  puVar1 = (undefined4 *)((int)this + 0x300);
  *(undefined4 *)((int)this + 0x348) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x34c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x350) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 0x354) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x358) = REFG(float, 0x1302e18);
  *(uint *)((int)this + 0x324) = *(uint *)((int)this + 0x324) | 3;
  *(undefined4 * PTR32 *)((int)this + 0x318) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x31c) = puVar1;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined2 *)((int)this + 0x364) = 0;
  *(undefined2 *)((int)this + 0x366) = 0xffff;
  *(byte *)((int)this + 0x364) = *(byte *)((int)this + 0x364) | 0xb;
  *(byte *)((int)this + 0x364) = *(byte *)((int)this + 0x364) & 0xef;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b3044));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3a0) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x3d0) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x3d4) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x3d8) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x3e0) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x3e4) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 1000) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x3ec) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x3f0) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 0x3f4) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x3f8) = REFG(float, 0x1302e18);
  *(uint *)((int)this + 0x3c4) = *(uint *)((int)this + 0x3c4) | 3;
  puVar1 = (undefined4 *)((int)this + 0x3a0);
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 * PTR32 *)((int)this + 0x3b8) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x3bc) = puVar1;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined2 *)((int)this + 0x404) = 0;
  *(undefined2 *)((int)this + 0x406) = 0xffff;
  *(byte *)((int)this + 0x404) = *(byte *)((int)this + 0x404) | 0xb;
  *(byte *)((int)this + 0x404) = *(byte *)((int)this + 0x404) & 0xef;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b3044));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x440) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined4 *)((int)this + 0x464) = 0;
  *(undefined4 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x414) = 0;
  *(undefined4 *)((int)this + 0x418) = 0;
  *(undefined4 *)((int)this + 0x41c) = 0;
  *(undefined4 *)((int)this + 0x420) = 0;
  *(undefined4 *)((int)this + 0x450) = 0;
  *(undefined4 *)((int)this + 0x454) = 0;
  *(undefined4 *)((int)this + 0x460) = 0;
  *(undefined4 *)((int)this + 0x468) = 0;
  *(undefined4 *)((int)this + 0x470) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x474) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x478) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x480) = REFG(undefined4, 0x1302e00);
  puVar1 = (undefined4 *)((int)this + 0x440);
  *(undefined4 *)((int)this + 0x484) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x488) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x48c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x490) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 0x494) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x498) = REFG(float, 0x1302e18);
  *(uint *)((int)this + 0x464) = *(uint *)((int)this + 0x464) | 3;
  *(undefined4 * PTR32 *)((int)this + 0x458) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x45c) = puVar1;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 *)((int)this + 0x4a0) = 0;
  *(undefined2 *)((int)this + 0x4a4) = 0;
  *(undefined2 *)((int)this + 0x4a6) = 0xffff;
  *(byte *)((int)this + 0x4a4) = *(byte *)((int)this + 0x4a4) | 0xb;
  *(byte *)((int)this + 0x4a4) = *(byte *)((int)this + 0x4a4) & 0xef;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b3044));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4e0) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined4 *)((int)this + 0x504) = 0;
  *(undefined4 *)((int)this + 0x4b0) = 0;
  *(undefined4 *)((int)this + 0x4b4) = 0;
  *(undefined4 *)((int)this + 0x4b8) = 0;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4f4) = 0;
  *(undefined4 *)((int)this + 0x500) = 0;
  *(undefined4 *)((int)this + 0x508) = 0;
  *(undefined4 *)((int)this + 0x510) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x514) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x518) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x520) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x524) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x528) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x52c) = REFG(undefined4, 0x1302e0c);
  puVar1 = (undefined4 *)((int)this + 0x4e0);
  *(undefined4 *)((int)this + 0x530) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 0x534) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x538) = REFG(float, 0x1302e18);
  *(uint *)((int)this + 0x504) = *(uint *)((int)this + 0x504) | 3;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 * PTR32 *)((int)this + 0x4f8) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x4fc) = puVar1;
  *(undefined4 *)((int)this + 0x540) = 0;
  *(undefined2 *)((int)this + 0x544) = 0;
  *(undefined2 *)((int)this + 0x546) = 0xffff;
  *(byte *)((int)this + 0x544) = *(byte *)((int)this + 0x544) | 0xb;
  *(byte *)((int)this + 0x544) = *(byte *)((int)this + 0x544) & 0xef;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b3044));
  *(undefined4 *)((int)this + 0x550) = 0;
  *(undefined4 *)((int)this + 0x554) = 0;
  *(undefined4 *)((int)this + 0x558) = 0;
  *(undefined4 *)((int)this + 0x55c) = 0;
  *(undefined4 *)((int)this + 0x560) = 0;
  *(undefined4 *)((int)this + 0x580) = 0;
  *(undefined4 *)((int)this + 0x584) = 0;
  *(undefined4 *)((int)this + 0x588) = 0;
  *(undefined4 *)((int)this + 0x58c) = 0;
  *(undefined4 *)((int)this + 0x590) = 0;
  *(undefined4 *)((int)this + 0x594) = 0;
  *(undefined4 *)((int)this + 0x598) = 0;
  *(undefined4 *)((int)this + 0x59c) = 0;
  *(undefined4 *)((int)this + 0x5a0) = 0;
  *(undefined4 *)((int)this + 0x5a4) = 0;
  return (uint)this;
}

/* ref: FUN_006989e0 */
byte F_006989e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6989e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int * piVar9;
  undefined * pvVar10;
  float * pfVar11;
  uint uVar12;
  float * pfVar13;
  int iVar14;
  float * pfVar15;
  gen_size32 _Size;
  undefined * pvVar16;
  uint uVar17;
  int * piVar18;
  float10 fVar19;
  
  iVar14 = *param_1 * 4;
  iVar4 = param_1[6];
  iVar1 = param_1[1] * 4;
  iVar2 = iVar4 * 4;
  uVar8 = *param_1 + 0x1fU >> 3 & 0x1ffffffc;
  uVar12 = param_1[1] + 0x1fU >> 3 & 0x1ffffffc;
  _Size = (iVar4 * 2 + 3) * uVar8 + uVar12 + iVar4 * 8 + iVar1 + iVar14;
  (*(uint *)(gen_frame + 0x8)) = uVar8;
  piVar9 = (int *)F_00406520();
  pvVar10 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0xc))(piVar9,_Size,0)));
  if (_Size == 0) {
    if (pvVar10 == (undefined *)0x0) goto LAB_00698a7d;
  }
  else if (pvVar10 == (undefined *)0x0) {
    return 0;
  }
  F_00c48350(pvVar10,0,_Size);
LAB_00698a7d: ;
  fVar7 = REFG(float, 0x10916ec);
  fVar6 = REFG(float, 0x1088068);
  fVar19 = (float10)*(double *)&REFG(undefined, 0x1092098);
  pfVar13 = (float *)((int)this + 0xd8);
  (*(int *)(gen_frame + 0x0)) = 8;
  do {
    *(byte *)(pfVar13 + 3) = *(byte *)(pfVar13 + 3) & 0xfb;
    pfVar13[-0xd] = gen_bits2f((uint)gen_fl2bits(pfVar13[-0xd]) | 3);
    *(undefined1 *)((int)pfVar13 + 0xd) = 1;
    pfVar13[-2] = fVar6;
    pfVar13[-1] = fVar6;
    *pfVar13 = fVar6;
    pfVar13[-0xd] = gen_bits2f((uint)gen_fl2bits(pfVar13[-0xd]) | 2);
    pfVar15 = pfVar13 + -2;
    *(undefined1 *)((int)pfVar13 + 0x3e) = 1;
    pfVar13[0xb] = fVar7;
    if (!((float10)pfVar13[-1] < (float10)*pfVar15)) {
      pfVar15 = pfVar13 + -1;
    }
    if (!((float10)*pfVar13 < (float10)*pfVar15)) {
      pfVar15 = pfVar13;
    }
    pfVar11 = pfVar13 + 0xb;
    (*(float *)(gen_frame + 0x4)) = (float)((float10)*pfVar15 * fVar19);
    if (!((float10)(float)((float10)*pfVar15 * fVar19) < (float10)pfVar13[0xb])) {
      pfVar11 = &(*(float *)(gen_frame + 0x4));
    }
    fVar3 = *pfVar11;
    pfVar13[0xc] = 0.0;
    pfVar13[0xb] = fVar3;
    pfVar13[0xd] = 0.0;
    pfVar13[0xe] = 0.0;
    *(undefined2 *)(pfVar13 + 0xf) = 0;
    *(undefined1 *)((int)pfVar13 + 0x3e) = 0;
    pfVar13 = pfVar13 + 0x28;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + -1;
  } while ((*(int *)(gen_frame + 0x0)) != 0);
  *(uint *)((int)this + 0x580) = -(uint)(iVar14 != 0) & (uint)pvVar10;
  uVar8 = 0;
  pvVar16 = ((undefined *)GEN_TOP(((int)((int)pvVar10 + iVar14) + iVar1)));
  *(uint *)((int)this + 0x588) = -(uint)(iVar1 != 0) & (uint)((int)pvVar10 + iVar14);
  *(uint *)((int)this + 0x590) = -(uint)(iVar2 != 0) & (uint)pvVar16;
  pvVar16 = (undefined *)((int)pvVar16 + iVar2);
  pvVar10 = (undefined *)((int)pvVar16 + iVar2);
  *(undefined4 *)((int)this + 0x584) = 0;
  *(undefined4 *)((int)this + 0x58c) = 0;
  *(uint *)((int)this + 0x594) = -(uint)(iVar2 != 0) & (uint)pvVar16;
  if (param_1[6] != 0) {
    do {
      *((uint *)GEN_TOP((*(int *)((int)this + 0x590) + uVar8 * 4))) = -(uint)((*(uint *)(gen_frame + 0x8)) != 0) & (uint)pvVar10;
      uVar17 = (int)pvVar10 + (*(uint *)(gen_frame + 0x8));
      pvVar10 = (undefined *)(uVar17 + (*(uint *)(gen_frame + 0x8)));
      *((uint *)GEN_TOP((*(int *)((int)this + 0x594) + uVar8 * 4))) = -(uint)((*(uint *)(gen_frame + 0x8)) != 0) & uVar17;
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)param_1[6]);
  }
  *(uint *)((int)this + 0x598) = -(uint)((*(uint *)(gen_frame + 0x8)) != 0) & (uint)pvVar10;
  uVar5 = REFG(float, 0x1087f04);
  uVar8 = (int)pvVar10 + (*(uint *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0x8));
  *(uint *)((int)this + 0x59c) = -(uint)((*(uint *)(gen_frame + 0x8)) != 0) & (int)pvVar10 + (*(uint *)(gen_frame + 0x8));
  *(uint *)((int)this + 0x5a0) = -(uint)((*(uint *)(gen_frame + 0x8)) != 0) & uVar8;
  *(uint *)((int)this + 0x5a4) = -(uint)(uVar12 != 0) & uVar8 + (*(uint *)(gen_frame + 0x8));
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 100) = REFG(undefined4, 0x1375a88);
  *(undefined4 *)((int)this + 0x68) = REFG(undefined4, 0x1375a8c);
  *(undefined4 *)((int)this + 0x6c) = REFG(undefined4, 0x1375a90);
  *(undefined4 *)((int)this + 0x70) = uVar5;
  *(undefined1 *)((int)this + 0x78) = 0;
  piVar9 = param_1;
  piVar18 = (int *)((int)this + 0x10);
  for (iVar14 = 7; iVar14 != 0; iVar14 = iVar14 + -1) {
    *piVar18 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar18 = piVar18 + 1;
  }
  return 1;
}

/* ref: FUN_00698c50 */
byte F_00698c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x698c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 * puVar1;
  byte bVar2;
  undefined4 uVar3;
  float fVar4;
  uint uVar5;
  uint3 uVar8;
  int iVar6;
  float * pfVar7;
  float * pfVar9;
  uint uVar10;
  
  if ((param_1 != (int *)0x0) &&
     (fVar4 = *(float *)((int)this + 0x584),
     (uint)gen_fl2bits(fVar4) < (uint)gen_fl2bits(*(float *)((int)this + 0x10)))) {
    (*(float *)(gen_frame + 0x38)) = fVar4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x580) + (int)gen_fl2bits(fVar4) * 4))) = param_1;
    bVar2 = *(byte *)((int)param_1 + 0x95);
    (*(byte *)(gen_frame + 0x3f)) = bVar2;
    fVar4 = *(float *)((int)this + 0x584);
    while ((fVar4 != 0.0 &&
           ((puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x580) + (int)gen_fl2bits(fVar4) * 4))),
            *((int *)GEN_TOP((*(int *)((int)this + 0x580) + -4 + (int)gen_fl2bits(fVar4) * 4))) == 0 ||
            (*(byte *)(puVar1[-1] + 0x95) < bVar2))))) {
      uVar3 = puVar1[-1];
      puVar1[-1] = *puVar1;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x580) + (int)gen_fl2bits(fVar4) * 4))) = uVar3;
      fVar4 = gen_bits2f((int)gen_fl2bits(fVar4) - 1);
      (*(float *)(gen_frame + 0x38)) = fVar4;
    }
    *(int *)((int)this + 0x584) = *(int *)((int)this + 0x584) + 1;
    ((code *)*(gen_code32 *)(*param_1 + 0x30))(param_1,((float *)(gen_frame + 0x0)));
    uVar5 = F_006b3840(this,((float *)(gen_frame + 0x0))[0]);
    (*(uint *)(gen_frame + 0x34)) = uVar5;
    uVar5 = F_006b3840(this,(*(float *)(gen_frame + 0x10)));
    (*(uint *)(gen_frame + 0x30)) = uVar5;
    uVar5 = F_006b38c0(this,(*(float *)(gen_frame + 0x8)));
    (*(uint *)(gen_frame + 0x2c)) = uVar5;
    uVar5 = F_006b38c0(this,(*(float *)(gen_frame + 0x18)));
    uVar10 = 0;
    (*(uint *)(gen_frame + 0x28)) = uVar5;
    if (*(int *)((int)this + 0x28) != 0) {
      do {
        uVar8 = (uint3)(uVar5 >> 8);
        if ((uVar10 < (*(uint *)(gen_frame + 0x34))) || ((*(uint *)(gen_frame + 0x30)) < uVar10)) {
          iVar6 = (uint)uVar8 << 8;
        }
        else {
          iVar6 = CONCAT31(uVar8,1);
        }
        uVar5 = F_006b09d0(((undefined *)GEN_TOP((*(int *)((int)this + 0x590) + uVar10 * 4))),
                             (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x38))),*(undefined4 *)((int)this + 0x10),
                             iVar6);
        uVar8 = (uint3)(uVar5 >> 8);
        if ((uVar10 < (*(uint *)(gen_frame + 0x2c))) || ((*(uint *)(gen_frame + 0x28)) < uVar10)) {
          iVar6 = (uint)uVar8 << 8;
        }
        else {
          iVar6 = CONCAT31(uVar8,1);
        }
        uVar5 = F_006b09d0(((undefined *)GEN_TOP((*(int *)((int)this + 0x594) + uVar10 * 4))),
                             (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x38))),*(undefined4 *)((int)this + 0x10),
                             iVar6);
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)((int)this + 0x28));
    }
    pfVar7 = (float *)(param_1 + 0x15);
    if (((float10)GEN_TOD(gen_bits2f(param_1[0x15]))) < ((float10)GEN_TOD(gen_bits2f(param_1[0x14])))) {
      pfVar7 = (float *)(param_1 + 0x14);
    }
    pfVar9 = (float *)(param_1 + 0x16);
    if (((float10)GEN_TOD(gen_bits2f(param_1[0x16]))) < (float10)*pfVar7) {
      pfVar9 = pfVar7;
    }
    pfVar7 = (float *)(param_1 + 0x21);
    fVar4 = (float)((float10)*pfVar9 + (float10)*pfVar9);
    (*(float *)(gen_frame + 0x38)) = fVar4;
    if (!((float10)fVar4 < ((float10)GEN_TOD(gen_bits2f(param_1[0x21]))))) {
      pfVar7 = &(*(float *)(gen_frame + 0x38));
    }
    param_1[0x21] = (int)gen_fl2bits(*pfVar7);
    *(undefined1 *)((int)param_1 + 0x96) = 0;
    return 1;
  }
  return 0;
}

/* ref: FUN_00698e00 */
byte F_00698e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x698e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (param_1 != 0) {
    bVar1 = F_0068fad0(this,param_1);
    if (bVar1 != 0) {
      bVar1 = F_00698c50(this,param_1);
      return bVar1 != 0;
    }
  }
  return 0;
}

/* ref: FUN_00698e40 */
uint F_00698e40(unsigned int gen_a0)
{
  GEN_ENTER(0x698e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  
  F_00690510(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 0xb;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  F_00991d30((undefined *)((int)this + 0x70));
  uVar2 = REFG(float, 0x10b321c);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e0) = (*(undefined * PTR32 (*)[3])REFP(0x10b2ad0))
  ;
  *(byte *)((int)this + 0x1e4) = *(byte *)((int)this + 0x1e4) & 0xe0;
  *(undefined4 *)((int)this + 0x228) = uVar2;
  uVar2 = REFG(float, 0x1090708);
  *(undefined2 *)((int)this + 0x1e5) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[52])REFP(0x10b314c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[10])REFP(0x10b3120));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e0) = (*(undefined * PTR32 (*)[3])REFP(0x10b3110));
  *(undefined4 *)((int)this + 0x1e8) = uVar1;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = uVar1;
  *(undefined4 *)((int)this + 0x1fc) = uVar1;
  *(undefined4 *)((int)this + 0x200) = uVar1;
  *(undefined4 *)((int)this + 0x204) = uVar1;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = uVar2;
  *(undefined4 *)((int)this + 0x250) = uVar1;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = uVar1;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x278) = uVar1;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x290) = uVar1;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = uVar1;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x2b8) = uVar1;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  *(undefined4 *)((int)this + 0x2c8) = 0;
  return (uint)this;
}

/* ref: FUN_00699000 */
uint F_00699000(unsigned int gen_a0)
{
  GEN_ENTER(0x699000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = REFG(float, 0x10ac1a8);
  (*(uint *)(gen_frame + 0x16c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x170);
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xfb;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 3;
  *(undefined4 *)((int)this + 0x238) = uVar1;
  *(undefined4 *)((int)this + 0x23c) = 0;
  uVar1 = REFG(float, 0x10ac050);
  *(undefined1 *)((int)this + 0x65) = 1;
  *(undefined4 *)((int)this + 0x240) = uVar1;
  uVar2 = F_00990c20(((undefined1 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)this + 0x1e8) = REFG(float, 0x1087f04);
  *(undefined2 *)((int)this + 0x1e5) = 2;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  F_00983ae0((int)this + 0x70,uVar2);
  F_00982d70();
  F_00c47745((*(uint *)(gen_frame + 0x16c)) ^ (uint)(uint)(gen_frame + 0x170));
  return CONCAT31((int3)(uVar2 >> 8),1);
}

/* ref: Client::Graphics::Scene::VfxObject::vf1 */
uint F_006990c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6990c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  if (*(int *)(this + 0x234) != 0) {
    F_00982b60(*(int *)(this + 0x234),0);
    this_00 = *(undefined * PTR32 *)(this + 0x234);
    if (this_00 != (undefined *)0x0) {
      F_009cfa70(this_00);
      F_00406ad0(this_00);
      *(undefined4 *)(this + 0x234) = 0;
    }
  }
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(undefined4, 0x1370c1c),*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  uVar1 = F_006905b0((undefined *)this);
  return uVar1;
}

/* ref: Client::Graphics::Scene::VfxObject::vf11 */
uint F_00699130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x699130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float * pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  F_009bc120(*(undefined * PTR32 *)(this + 0x234),&(*(float *)(gen_frame + 0x24)),&(*(float *)(gen_frame + 0x1c)),&(*(float *)(gen_frame + 0x2c)),&(*(float *)(gen_frame + 0x28)),&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x4c)))
  ;
  fVar8 = (float10)0;
  (*(float *)(gen_frame + 0x80)) = (float)fVar8;
  (*(float *)(gen_frame + 0x84)) = (float)fVar8;
  (*(undefined4 *)(gen_frame + 0x50)) = *(undefined4 *)(this + 0x50);
  (*(float *)(gen_frame + 0x88)) = (float)fVar8;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)(this + 0x54);
  (*(undefined4 *)(gen_frame + 0x78)) = *(undefined4 *)(this + 0x58);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x50)),(uint)(this + 0x40));
  (*(float *)(gen_frame + 0x80)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x80)))));
  (*(float *)(gen_frame + 0x84)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x34) + (float10)(*(float *)(gen_frame + 0x84)))));
  (*(float *)(gen_frame + 0x88)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x38) + (float10)(*(float *)(gen_frame + 0x88)))));
  (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x28)));
  (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x1c)) - (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x2c)) - (float10)(*(float *)(gen_frame + 0x4c)));
  pfVar7 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x50)));
  fVar1 = *pfVar7;
  fVar2 = pfVar7[1];
  fVar3 = pfVar7[2];
  (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x24)) + (float10)(*(float *)(gen_frame + 0x28)));
  (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x1c)) + (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x2c)) + (float10)(*(float *)(gen_frame + 0x4c)));
  pfVar7 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x50)));
  fVar4 = (float)((float10)fVar1 + (float10)*pfVar7);
  (*(float *)(gen_frame + 0x30)) = fVar4;
  fVar5 = (float)((float10)fVar2 + (float10)pfVar7[1]);
  (*(float *)(gen_frame + 0x34)) = fVar5;
  fVar6 = (float)((float10)fVar3 + (float10)pfVar7[2]);
  (*(float *)(gen_frame + 0x38)) = fVar6;
  fVar8 = (float10)REFG(double, 0x1088108);
  fVar4 = (float)((float10)fVar4 * fVar8);
  (*(float *)(gen_frame + 0x0)) = fVar4;
  *param_1 = fVar4;
  fVar5 = (float)((float10)fVar5 * fVar8);
  (*(float *)(gen_frame + 0x4)) = fVar5;
  param_1[1] = fVar5;
  fVar6 = (float)(fVar8 * (float10)fVar6);
  (*(float *)(gen_frame + 0x8)) = fVar6;
  param_1[2] = fVar6;
  fVar1 = (float)((float10)fVar4 - (float10)fVar1);
  (*(float *)(gen_frame + 0x30)) = fVar1;
  fVar2 = (float)((float10)fVar5 - (float10)fVar2);
  (*(float *)(gen_frame + 0x34)) = fVar2;
  fVar3 = (float)((float10)fVar6 - (float10)fVar3);
  (*(float *)(gen_frame + 0x38)) = fVar3;
  fVar8 = (float10)fVar2;
  fVar9 = (float10)fVar1;
  fVar10 = (float10)fVar3;
  fVar1 = ((float)GEN_TOF((fVar10 * fVar10 + (fVar9 * fVar9 + fVar8 * fVar8))));
  (*(float *)(gen_frame + 0x4c)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)(gen_frame + 0x4c)) = fVar1;
  param_1[3] = fVar1;
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::VfxObject::vf12 */
uint F_00699390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x699390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  float10 fVar1;
  undefined4 * puVar2;
  
  (*(uint *)(gen_frame + 0x11c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x120);
  F_009bc120(*(undefined * PTR32 *)(this + 0x234),&(*(float *)(gen_frame + 0x3c)),&(*(float *)(gen_frame + 0x44)),&(*(float *)(gen_frame + 0x4c)),&(*(float *)(gen_frame + 0x38)),&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x48)))
  ;
  fVar1 = (float10)0;
  (*(float *)(gen_frame + 0x80)) = (float)fVar1;
  (*(float *)(gen_frame + 0x84)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x50)) = *(undefined4 *)(this + 0x50);
  (*(float *)(gen_frame + 0x88)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)(this + 0x54);
  (*(undefined4 *)(gen_frame + 0x78)) = *(undefined4 *)(this + 0x58);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x50)),(uint)(this + 0x40));
  (*(float *)(gen_frame + 0x80)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x80)))));
  (*(float *)(gen_frame + 0x84)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x34) + (float10)(*(float *)(gen_frame + 0x84)))));
  (*(float *)(gen_frame + 0x88)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x38) + (float10)(*(float *)(gen_frame + 0x88)))));
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) - (float10)(*(float *)(gen_frame + 0x38)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x44)) - (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x4c)) - (float10)(*(float *)(gen_frame + 0x48)));
  puVar2 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x50)));
  (*(undefined4 *)(gen_frame + 0x90)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0x94)) = puVar2[1];
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) + (float10)(*(float *)(gen_frame + 0x38)));
  (*(undefined4 *)(gen_frame + 0x98)) = puVar2[2];
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x44)) - (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x4c)) - (float10)(*(float *)(gen_frame + 0x48)));
  puVar2 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x50)));
  (*(undefined4 *)(gen_frame + 0xa0)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0xa4)) = puVar2[1];
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) - (float10)(*(float *)(gen_frame + 0x38)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x44)) + (float10)(*(float *)(gen_frame + 0x40)));
  (*(undefined4 *)(gen_frame + 0xa8)) = puVar2[2];
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x4c)) - (float10)(*(float *)(gen_frame + 0x48)));
  puVar2 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x50)));
  (*(undefined4 *)(gen_frame + 0xb0)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0xb4)) = puVar2[1];
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) + (float10)(*(float *)(gen_frame + 0x38)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x44)) + (float10)(*(float *)(gen_frame + 0x40)));
  (*(undefined4 *)(gen_frame + 0xb8)) = puVar2[2];
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x4c)) - (float10)(*(float *)(gen_frame + 0x48)));
  puVar2 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x50)));
  (*(undefined4 *)(gen_frame + 0xc0)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0xc4)) = puVar2[1];
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) - (float10)(*(float *)(gen_frame + 0x38)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x44)) - (float10)(*(float *)(gen_frame + 0x40)));
  (*(undefined4 *)(gen_frame + 0xc8)) = puVar2[2];
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x4c)) + (float10)(*(float *)(gen_frame + 0x48)));
  puVar2 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x50)));
  (*(undefined4 *)(gen_frame + 0xd0)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0xd4)) = puVar2[1];
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) + (float10)(*(float *)(gen_frame + 0x38)));
  (*(undefined4 *)(gen_frame + 0xd8)) = puVar2[2];
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x44)) - (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x4c)) + (float10)(*(float *)(gen_frame + 0x48)));
  puVar2 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x50)));
  (*(undefined4 *)(gen_frame + 0xe0)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0xe4)) = puVar2[1];
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) - (float10)(*(float *)(gen_frame + 0x38)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x44)) + (float10)(*(float *)(gen_frame + 0x40)));
  (*(undefined4 *)(gen_frame + 0xe8)) = puVar2[2];
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x4c)) + (float10)(*(float *)(gen_frame + 0x48)));
  puVar2 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x50)));
  (*(undefined4 *)(gen_frame + 0xf0)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0xf4)) = puVar2[1];
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) + (float10)(*(float *)(gen_frame + 0x38)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x44)) + (float10)(*(float *)(gen_frame + 0x40)));
  (*(undefined4 *)(gen_frame + 0xf8)) = puVar2[2];
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x4c)) + (float10)(*(float *)(gen_frame + 0x48)));
  puVar2 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x50)));
  (*(undefined4 *)(gen_frame + 0x100)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0x104)) = puVar2[1];
  (*(undefined4 *)(gen_frame + 0x108)) = puVar2[2];
  puVar2 = (undefined4 *)F_004f4990(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x90)),8,0x10);
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  param_1[2] = puVar2[2];
  param_1[4] = puVar2[4];
  param_1[5] = puVar2[5];
  param_1[6] = puVar2[6];
  F_00c47745((*(uint *)(gen_frame + 0x11c)) ^ (uint)(uint)(gen_frame + 0x120));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::VfxObject::vf13 */
uint F_00699870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x699870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  F_009bc120(*(undefined * PTR32 *)(this + 0x234),&(*(float *)(gen_frame + 0x54)),&(*(float *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0x5c)),&(*(float *)(gen_frame + 0x4c)),&(*(float *)(gen_frame + 0x48)),&(*(float *)(gen_frame + 0x58)))
  ;
  fVar7 = (float10)0;
  (*(float *)(gen_frame + 0x90)) = (float)fVar7;
  (*(float *)(gen_frame + 0x94)) = (float)fVar7;
  (*(undefined4 *)(gen_frame + 0x60)) = *(undefined4 *)(this + 0x50);
  (*(float *)(gen_frame + 0x98)) = (float)fVar7;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = *(undefined4 *)(this + 0x54);
  (*(undefined4 *)(gen_frame + 0x88)) = *(undefined4 *)(this + 0x58);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x60)),(uint)(this + 0x40));
  (*(float *)(gen_frame + 0x90)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x90)))));
  (*(float *)(gen_frame + 0x94)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x34) + (float10)(*(float *)(gen_frame + 0x94)))));
  (*(float *)(gen_frame + 0x98)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x38) + (float10)(*(float *)(gen_frame + 0x98)))));
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x4c)) + (float10)(*(float *)(gen_frame + 0x54)));
  (*(float *)(gen_frame + 0x20)) = fVar1;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x48)) + (float10)(*(float *)(gen_frame + 0x50)));
  (*(float *)(gen_frame + 0x24)) = fVar2;
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x58)) + (float10)(*(float *)(gen_frame + 0x5c)));
  (*(float *)(gen_frame + 0x28)) = fVar3;
  fVar4 = (float)((float10)(*(float *)(gen_frame + 0x54)) - (float10)(*(float *)(gen_frame + 0x4c)));
  (*(float *)(gen_frame + 0x30)) = fVar4;
  fVar5 = (float)((float10)(*(float *)(gen_frame + 0x50)) - (float10)(*(float *)(gen_frame + 0x48)));
  (*(float *)(gen_frame + 0x34)) = fVar5;
  fVar6 = (float)((float10)(*(float *)(gen_frame + 0x5c)) - (float10)(*(float *)(gen_frame + 0x58)));
  (*(float *)(gen_frame + 0x38)) = fVar6;
  (*(float *)(gen_frame + 0x0)) = fVar4;
  (*(float *)(gen_frame + 0x4)) = fVar5;
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = fVar6;
  (*(float *)(gen_frame + 0x14)) = fVar2;
  (*(float *)(gen_frame + 0x18)) = fVar3;
  F_005fec10(param_1,&(*(undefined4 *)(gen_frame + 0x60)),&(*(float *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::VfxObject::vf7 */
uint F_00699a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x699a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float10 fVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
  fVar1 = (float10)0;
  (*(float *)(gen_frame + 0x30)) = (float)fVar1;
  (*(float *)(gen_frame + 0x34)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(this + 0x50);
  (*(float *)(gen_frame + 0x38)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 0x54);
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(this + 0x58);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x0)),(uint)(this + 0x40));
  (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x30)))));
  (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x34) + (float10)(*(float *)(gen_frame + 0x34)))));
  (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x38) + (float10)(*(float *)(gen_frame + 0x38)))));
  uVar2 = F_009bc130(*(undefined * PTR32 *)(this + 0x234),&(*(undefined4 *)(gen_frame + 0x0)));
  *(uint *)(this + 0x24) = *(uint *)(this + 0x24) & 0xfffffffd;
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar2;
}

/* ref: Client::Graphics::Scene::VfxObject::vf51 */
uint F_00699ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x699ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  (*(uint *)(gen_frame + 0x4c)) = uVar1;
  if ((*(int *)(this + 0x234) != 0) && (((byte)this[0x1e4] & 8) == 0)) {
    F_0054fa20(((undefined1 *)(gen_frame + 0x0)),this + 0x30);
    F_00982ba0(*(undefined4 *)(this + 0x234),(uint)(byte)this[0x1e5],(uint)(byte)this[0x1e6],
                 *(float *)(this + 0x1e8),*(float *)(this + 0x1ec),((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_0068b800(this);
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar1;
}

/* ref: FUN_00699b70 */
uint F_00699b70(unsigned int gen_a0)
{
  GEN_ENTER(0x699b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float10 fVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar2 = 0;
  if (*(int *)((int)this + 0x234) != 0) {
    uVar2 = F_009cfa30(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x234) + 0x40))),0);
    F_00982b80(uVar2,1);
    fVar1 = (float10)0;
    (*(float *)(gen_frame + 0x30)) = (float)fVar1;
    (*(float *)(gen_frame + 0x34)) = (float)fVar1;
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this + 0x50);
    (*(float *)(gen_frame + 0x38)) = (float)fVar1;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this + 0x54);
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)this + 0x58);
    F_004efe70(&(*(undefined4 *)(gen_frame + 0x0)),(int)this + 0x40);
    (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x30) + (float10)(*(float *)(gen_frame + 0x30)))));
    (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x34) + (float10)(*(float *)(gen_frame + 0x34)))));
    (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x38) + (float10)(*(float *)(gen_frame + 0x38)))));
    F_00982ba0(uVar2,(uint)*(byte *)((int)this + 0x1e5),(uint)*(byte *)((int)this + 0x1e6),
                 *(float *)((int)this + 0x1e8),*(float *)((int)this + 0x1ec),&(*(undefined4 *)(gen_frame + 0x0)));
    F_009bc3a0(uVar2,*(float *)((int)this + 0x1f8),*(float *)((int)this + 0x1fc),
                 *(float *)((int)this + 0x200),*(float *)((int)this + 0x204));
    uVar2 = F_0068b800(this);
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar2;
}

/* ref: FUN_00699cb0 */
uint F_00699cb0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x699cb0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float10 fVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  (*(uint *)(gen_frame + 0x4c)) = uVar2;
  *(byte *)((int)param_1 + 0x1e4) = *(byte *)((int)param_1 + 0x1e4) | 8;
  *(undefined4 *)((int)param_1 + 0x1f0) = 0;
  *(undefined4 *)((int)param_1 + 500) = 0;
  if (*(undefined * PTR32 *)((int)param_1 + 0x234) != (undefined *)0x0) {
    uVar2 = F_009bc2a0(*(undefined * PTR32 *)((int)param_1 + 0x234));
  }
  uVar2 = CONCAT31((int3)(uVar2 >> 8),*(undefined1 *)((int)param_1 + 0x1e4)) & 0xfffffff7 | 4;
  *(byte *)((int)param_1 + 0x1e4) = (byte)uVar2;
  *(float *)((int)param_1 + 0x1f0) = param_2;
  *(undefined4 *)((int)param_1 + 500) = 0;
  if (*(int *)((int)param_1 + 0x234) != 0) {
    fVar1 = (float10)0;
    *(byte *)((int)param_1 + 0x1e4) = (byte)uVar2 & 0xfb;
    (*(float *)(gen_frame + 0x30)) = (float)fVar1;
    (*(float *)(gen_frame + 0x34)) = (float)fVar1;
    (*(float *)(gen_frame + 0x38)) = (float)fVar1;
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)param_1 + 0x50);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)param_1 + 0x54);
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)param_1 + 0x58);
    F_004efe70(&(*(undefined4 *)(gen_frame + 0x0)),(int)param_1 + 0x40);
    (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x30) + (float10)(*(float *)(gen_frame + 0x30)))));
    (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x34) + (float10)(*(float *)(gen_frame + 0x34)))));
    (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x38) + (float10)(*(float *)(gen_frame + 0x38)))));
    F_00982ba0(*(undefined4 *)((int)param_1 + 0x234),(uint)*(byte *)((int)param_1 + 0x1e5),
                 (uint)*(byte *)((int)param_1 + 0x1e6),*(float *)((int)param_1 + 0x1e8),
                 *(float *)((int)param_1 + 0x1ec),&(*(undefined4 *)(gen_frame + 0x0)));
    uVar2 = F_0068b800(param_1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar2;
}

/* ref: FUN_00699e10 */
byte F_00699e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x699e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  short * psVar5;
  
  bVar2 = F_0061f450(param_1,param_2);
  if (bVar2 == 0) {
    return 0;
  }
  uVar4 = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  if ((param_3 & 1) != 0) {
    bVar1 = false;
    psVar5 = (short *)((int)param_1 + 0x38);
    do {
      uVar3 = F_00623160(param_2,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x132312c) + uVar4))));
      *psVar5 = (short)uVar3;
      if ((short)uVar3 == -1) {
        bVar1 = true;
      }
      uVar4 = uVar4 + 4;
      psVar5 = psVar5 + 1;
    } while (uVar4 < 8);
    if (!bVar1) {
      *(uint *)((int)param_1 + 0x48) = *(uint *)((int)param_1 + 0x48) | 1;
    }
  }
  if ((param_3 & 2) == 0) {
    if ((param_3 & 4) != 0) {
      bVar1 = false;
      psVar5 = (short *)((int)param_1 + 0x3c);
      uVar4 = 0;
      do {
        uVar3 = F_00623160(param_2,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x132311c) + uVar4))));
        *psVar5 = (short)uVar3;
        if ((short)uVar3 == -1) {
          bVar1 = true;
        }
        uVar4 = uVar4 + 4;
        psVar5 = psVar5 + 1;
      } while (uVar4 < 8);
      if (!bVar1) {
        *(uint *)((int)param_1 + 0x48) = *(uint *)((int)param_1 + 0x48) | 4;
      }
    }
  }
  else {
    bVar1 = false;
    psVar5 = (short *)((int)param_1 + 0x3c);
    uVar4 = 0;
    do {
      uVar3 = F_00623160(param_2,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x1323124) + uVar4))));
      *psVar5 = (short)uVar3;
      if ((short)uVar3 == -1) {
        bVar1 = true;
      }
      uVar4 = uVar4 + 4;
      psVar5 = psVar5 + 1;
    } while (uVar4 < 8);
    if (!bVar1) {
      *(uint *)((int)param_1 + 0x48) = *(uint *)((int)param_1 + 0x48) | 2;
    }
  }
  if ((param_3 & 8) != 0) {
    F_00690290(param_1);
  }
  *(undefined4 *)((int)param_1 + 0x4c) = *param_4;
  *(undefined4 *)((int)param_1 + 0x50) = param_4[1];
  *(undefined4 *)((int)param_1 + 0x54) = param_4[2];
  *(float *)((int)param_1 + 0x58) = param_5;
  return 1;
}

/* ref: Client::Graphics::Scene::PostBoneDeformer::vf1 */
uint F_00699f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x699f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  undefined1 auVar1 [16];
  undefined * this_00;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  byte bVar6;
  float * pfVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  (*(uint *)(gen_frame + 0x13c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x140);
  this_00 = *(undefined * PTR32 *)(this + 0x30);
  (*(uint *)(gen_frame + 0x38)) = *(uint *)(this + 0x48);
  if ((*(uint *)(this + 0x48) & 1) != 0) {
    (*(uint *)(gen_frame + 0x4c)) = 0;
    do {
      ((byte *)(gen_frame + 0xc))[0] = (byte)(*(ushort *)(this + (*(uint *)(gen_frame + 0x4c)) * 2 + 0x38) >> 0xc);
      (*(ushort *)(gen_frame + 0xe)) = *(ushort *)(this + (*(uint *)(gen_frame + 0x4c)) * 2 + 0x38) & 0xfff;
      pfVar7 = (float *)F_0062b8c0(this_00,((byte *)(gen_frame + 0xc)));
      (*(float *)(gen_frame + 0xa0)) = *pfVar7;
      (*(float *)(gen_frame + 0xa4)) = pfVar7[1];
      (*(float *)(gen_frame + 0xa8)) = pfVar7[2];
      (*(float *)(gen_frame + 0xac)) = pfVar7[3];
      memcpy(&(auVar1), &(*(gen_v16 *)(pfVar7 + 4)), sizeof(*(gen_v16 *)(pfVar7 + 4)) < sizeof(auVar1) ? sizeof(*(gen_v16 *)(pfVar7 + 4)) : sizeof(auVar1));
      fVar31 = (*(float *)((char *)&auVar1 + 0));
      fVar12 = (*(float *)((char *)&auVar1 + 4));
      fVar13 = (*(float *)((char *)&auVar1 + 8));
      fVar15 = (*(float *)((char *)&auVar1 + 12));
      memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0xb0))), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0xb0))) ? sizeof(auVar1) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0xb0))));
      fVar18 = pfVar7[8];
      fVar20 = pfVar7[9];
      fVar3 = pfVar7[10];
      fVar4 = pfVar7[0xb];
      (*(float *)(gen_frame + 0xc0)) = fVar18;
      (*(float *)(gen_frame + 0xc4)) = fVar20;
      (*(float *)(gen_frame + 0xc8)) = fVar3;
      (*(float *)(gen_frame + 0xcc)) = fVar4;
      fVar27 = fVar18 * 0.0;
      fVar28 = fVar20 * 0.0;
      fVar29 = fVar3 * 0.0;
      fVar30 = fVar4 * 0.0;
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x20)) + 0)) = (undefined4)gen_fl2bits(fVar13);
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x20)) + 4)) = (undefined4)gen_fl2bits(fVar31);
      (*(float *)(gen_frame + 0x28)) = fVar12;
      (*(float *)(gen_frame + 0x2c)) = fVar15;
      fVar14 = fVar31 * fVar27;
      fVar16 = fVar12 * fVar28;
      fVar19 = fVar13 * fVar29;
      fVar21 = (((fVar16 + fVar14) + fVar19) * fVar31 +
               (fVar15 * fVar15 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
               fVar27) + (fVar29 * fVar12 - fVar28 * fVar13) * fVar15;
      fVar23 = (((fVar16 + fVar14) + fVar19) * fVar12 +
               (fVar15 * fVar15 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
               fVar28) + (fVar27 * fVar13 - fVar29 * fVar31) * fVar15;
      fVar27 = (((fVar16 + fVar14) + fVar19) * fVar13 +
               (fVar15 * fVar15 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
               fVar29) + (fVar28 * fVar31 - fVar27 * fVar12) * fVar15;
      fVar28 = (((fVar16 + fVar14) + fVar19) * fVar15 +
               (fVar15 * fVar15 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
               fVar30) + (fVar30 * fVar15 - fVar30 * fVar15) * fVar15;
      fVar14 = ((*(float *)&REFG(undefined, 0x1138ca8) * fVar12 - *(float *)&REFG(undefined, 0x1138ca4) * fVar13) +
               *(float *)&REFG(undefined, 0x1138ca0) * fVar15) + fVar31 * *(float *)&REFG(undefined, 0x1138cac);
      fVar16 = ((*(float *)&REFG(undefined, 0x1138ca0) * fVar13 - *(float *)&REFG(undefined, 0x1138ca8) * fVar31) +
               *(float *)&REFG(undefined, 0x1138ca4) * fVar15) + fVar12 * *(float *)&REFG(undefined, 0x1138cac);
      fVar19 = ((*(float *)&REFG(undefined, 0x1138ca4) * fVar31 - *(float *)&REFG(undefined, 0x1138ca0) * fVar12) +
               *(float *)&REFG(undefined, 0x1138ca8) * fVar15) + fVar13 * *(float *)&REFG(undefined, 0x1138cac);
      (*(float *)(gen_frame + 0xa0)) = (fVar21 + fVar21) + *pfVar7;
      (*(float *)(gen_frame + 0xa4)) = (fVar23 + fVar23) + pfVar7[1];
      (*(float *)(gen_frame + 0xa8)) = (fVar27 + fVar27) + pfVar7[2];
      (*(float *)(gen_frame + 0xac)) = (fVar28 + fVar28) + pfVar7[3];
      fVar31 = *(float *)&REFG(undefined, 0x1138cac) * fVar15 -
               ((*(float *)&REFG(undefined, 0x1138ca4) * fVar12 + *(float *)&REFG(undefined, 0x1138ca0) * fVar31) +
               *(float *)&REFG(undefined, 0x1138ca8) * fVar13);
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xb0)) + 0)) = (undefined4)gen_fl2bits(fVar14);
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xb0)) + 4)) = (undefined4)gen_fl2bits(fVar16);
      (*(float *)(gen_frame + 0xb8)) = fVar19;
      (*(float *)(gen_frame + 0xbc)) = fVar31;
      (*(ushort *)(gen_frame + 0x12)) = *(ushort *)(this + (*(uint *)(gen_frame + 0x4c)) * 2 + 0x38) & 0xfff;
      ((byte *)(gen_frame + 0x10))[0] = (byte)(*(ushort *)(this + (*(uint *)(gen_frame + 0x4c)) * 2 + 0x38) >> 0xc);
      (*(float *)(gen_frame + 0xc0)) = *(float *)(this + 0x4c) * fVar18;
      (*(float *)(gen_frame + 0xc4)) = *(float *)(this + 0x50) * fVar20;
      (*(float *)(gen_frame + 0xc8)) = *(float *)(this + 0x54) * fVar3;
      (*(float *)(gen_frame + 0xcc)) = fVar4 * 0.0;
      F_0063a080(this_00,((byte *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0xa0)),0);
      uVar8 = (*(uint *)(gen_frame + 0x4c)) + 1;
      (*(uint *)(gen_frame + 0x4c)) = uVar8;
    } while (uVar8 < 2);
  }
  if (((*(uint *)(gen_frame + 0x38)) & 2) != 0) {
    uVar9 = *(ushort *)(this + 0x3c);
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x4c)) + 2)) = uVar9 & 0xfff;
    uVar5 = CONCAT22(uVar9,(undefined2)(*(uint *)(gen_frame + 0x4c)));
    (*(float *)(gen_frame + 0x40)) = gen_bits2f((uint)*(ushort *)(this + 0x3e));
    bVar6 = (byte)(uVar9 >> 0xc);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x4c)) + 0)) = bVar6;
    (*(uint *)(gen_frame + 0x4c)) = CONCAT31((int3)((uint)uVar5 >> 8),bVar6) & 0xfffffff;
    pfVar7 = (float *)F_0062b8c0(this_00,&(*(uint *)(gen_frame + 0x4c)));
    (*(float * PTR32 *)(gen_frame + 0x3c)) = pfVar7;
    bVar6 = (byte)((uint)gen_fl2bits((*(float *)(gen_frame + 0x40))) >> 0xc) & 0xf;
    uVar9 = (ushort)(uint)gen_fl2bits((*(float *)(gen_frame + 0x40))) & 0xfff;
    (*(byte *)(gen_frame + 0x4b)) = bVar6;
    ((byte *)(gen_frame + 0x8))[0] = bVar6;
    (*(ushort *)(gen_frame + 0xa)) = uVar9;
    pfVar7 = (float *)F_0062b8c0(this_00,((byte *)(gen_frame + 0x8)));
    (*(float *)(gen_frame + 0x100)) = *pfVar7;
    (*(float *)(gen_frame + 0x104)) = pfVar7[1];
    (*(float *)(gen_frame + 0x108)) = pfVar7[2];
    (*(float *)(gen_frame + 0x10c)) = pfVar7[3];
    fVar20 = pfVar7[4];
    fVar3 = pfVar7[5];
    fVar4 = pfVar7[6];
    fVar14 = pfVar7[7];
    (*(float *)(gen_frame + 0x110)) = fVar20;
    (*(float *)(gen_frame + 0x114)) = fVar3;
    (*(float *)(gen_frame + 0x118)) = fVar4;
    (*(float *)(gen_frame + 0x11c)) = fVar14;
    fVar16 = pfVar7[8];
    fVar19 = pfVar7[9];
    fVar21 = pfVar7[10];
    fVar23 = pfVar7[0xb];
    (*(float *)(gen_frame + 0x120)) = fVar16;
    (*(float *)(gen_frame + 0x124)) = fVar19;
    (*(float *)(gen_frame + 0x128)) = fVar21;
    (*(float *)(gen_frame + 0x12c)) = fVar23;
    fVar31 = *(float *)(this + 0x58);
    (*(float *)(gen_frame + 0x40)) = fVar31;
    fVar11 = (float10)fVar31;
    fVar12 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar11 * (float10)(*pfVar7 - *(*(float * PTR32 *)(gen_frame + 0x3c)))))) +
                    (float10)*(*(float * PTR32 *)(gen_frame + 0x3c)))));
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x20)) + 0)) = (undefined4)gen_fl2bits(fVar12);
    fVar13 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(pfVar7[1] - (*(float * PTR32 *)(gen_frame + 0x3c))[1]) * fVar11))) +
                    (float10)(*(float * PTR32 *)(gen_frame + 0x3c))[1])));
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x20)) + 4)) = (undefined4)gen_fl2bits(fVar13);
    fVar15 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar11 * (float10)(pfVar7[2] - (*(float * PTR32 *)(gen_frame + 0x3c))[2])))) +
                    (float10)(*(float * PTR32 *)(gen_frame + 0x3c))[2])));
    (*(float *)(gen_frame + 0x28)) = fVar15;
    (*(float *)(gen_frame + 0x44)) = fVar12;
    (*(float *)(gen_frame + 0x44)) = fVar13;
    (*(float *)(gen_frame + 0x44)) = fVar15;
    fVar18 = (float)(float10)0;
    (*(float *)(gen_frame + 0x44)) = fVar18;
    fVar22 = fVar16 * 0.0;
    fVar24 = fVar19 * 0.0;
    fVar25 = fVar21 * 0.0;
    fVar26 = fVar23 * 0.0;
    (*(float *)(gen_frame + 0x100)) = fVar12;
    (*(float *)(gen_frame + 0x104)) = fVar13;
    (*(float *)(gen_frame + 0x108)) = fVar15;
    (*(float *)(gen_frame + 0x10c)) = fVar18;
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x20)) + 0)) = (undefined4)gen_fl2bits(fVar4);
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x20)) + 4)) = (undefined4)gen_fl2bits(fVar20);
    (*(float *)(gen_frame + 0x28)) = fVar3;
    (*(float *)(gen_frame + 0x2c)) = fVar14;
    fVar27 = fVar20 * fVar22;
    fVar28 = fVar3 * fVar24;
    fVar29 = fVar4 * fVar25;
    fVar30 = (((fVar28 + fVar27) + fVar29) * fVar20 +
             (fVar14 * fVar14 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
             fVar22) + (fVar25 * fVar3 - fVar24 * fVar4) * fVar14;
    fVar17 = (((fVar28 + fVar27) + fVar29) * fVar3 +
             (fVar14 * fVar14 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
             fVar24) + (fVar22 * fVar4 - fVar25 * fVar20) * fVar14;
    fVar22 = (((fVar28 + fVar27) + fVar29) * fVar4 +
             (fVar14 * fVar14 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
             fVar25) + (fVar24 * fVar20 - fVar22 * fVar3) * fVar14;
    fVar27 = (((fVar28 + fVar27) + fVar29) * fVar14 +
             (fVar14 * fVar14 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
             fVar26) + (fVar26 * fVar14 - fVar26 * fVar14) * fVar14;
    (*(float *)(gen_frame + 0x100)) = (fVar30 + fVar30) + fVar12;
    (*(float *)(gen_frame + 0x104)) = (fVar17 + fVar17) + fVar13;
    (*(float *)(gen_frame + 0x108)) = (fVar22 + fVar22) + fVar15;
    (*(float *)(gen_frame + 0x10c)) = (fVar27 + fVar27) + fVar18;
    ((byte *)(gen_frame + 0x1c))[0] = (*(byte *)(gen_frame + 0x4b));
    (*(float *)(gen_frame + 0x110)) = ((*(float *)&REFG(undefined, 0x1138ca8) * fVar3 - *(float *)&REFG(undefined, 0x1138ca4) * fVar4) +
               *(float *)&REFG(undefined, 0x1138ca0) * fVar14) + fVar20 * *(float *)&REFG(undefined, 0x1138cac);
    (*(float *)(gen_frame + 0x114)) = ((*(float *)&REFG(undefined, 0x1138ca0) * fVar4 - *(float *)&REFG(undefined, 0x1138ca8) * fVar20) +
                *(float *)&REFG(undefined, 0x1138ca4) * fVar14) + fVar3 * *(float *)&REFG(undefined, 0x1138cac);
    (*(float *)(gen_frame + 0x118)) = ((*(float *)&REFG(undefined, 0x1138ca4) * fVar20 - *(float *)&REFG(undefined, 0x1138ca0) * fVar3) +
                *(float *)&REFG(undefined, 0x1138ca8) * fVar14) + fVar4 * *(float *)&REFG(undefined, 0x1138cac);
    (*(float *)(gen_frame + 0x11c)) = *(float *)&REFG(undefined, 0x1138cac) * fVar14 -
                ((*(float *)&REFG(undefined, 0x1138ca4) * fVar3 + *(float *)&REFG(undefined, 0x1138ca0) * fVar20) +
                *(float *)&REFG(undefined, 0x1138ca8) * fVar4);
    (*(float *)(gen_frame + 0x120)) = fVar31 * fVar16;
    (*(float *)(gen_frame + 0x124)) = REFG(float, 0x1087f04) * fVar19;
    (*(float *)(gen_frame + 0x128)) = REFG(float, 0x1087f04) * fVar21;
    (*(float *)(gen_frame + 0x12c)) = fVar23 * 0.0;
    (*(ushort *)(gen_frame + 0x1e)) = uVar9;
    F_0063a080(this_00,((byte *)(gen_frame + 0x1c)),&(*(float *)(gen_frame + 0x100)),0);
  }
  if (((*(uint *)(gen_frame + 0x38)) & 4) != 0) {
    (*(uint *)(gen_frame + 0x4c)) = 0;
    do {
      ((byte *)(gen_frame + 0x18))[0] = (byte)(*(ushort *)(this + (*(uint *)(gen_frame + 0x4c)) * 2 + 0x3c) >> 0xc);
      (*(ushort *)(gen_frame + 0x1a)) = *(ushort *)(this + (*(uint *)(gen_frame + 0x4c)) * 2 + 0x3c) & 0xfff;
      pfVar7 = (float *)F_0062b8c0(this_00,((byte *)(gen_frame + 0x18)));
      (*(float *)(gen_frame + 0x70)) = *pfVar7;
      (*(float *)(gen_frame + 0x74)) = pfVar7[1];
      (*(float *)(gen_frame + 0x78)) = pfVar7[2];
      (*(float *)(gen_frame + 0x7c)) = pfVar7[3];
      memcpy(&(auVar1), &(*(gen_v16 *)(pfVar7 + 4)), sizeof(*(gen_v16 *)(pfVar7 + 4)) < sizeof(auVar1) ? sizeof(*(gen_v16 *)(pfVar7 + 4)) : sizeof(auVar1));
      fVar31 = (*(float *)((char *)&auVar1 + 0));
      fVar12 = (*(float *)((char *)&auVar1 + 4));
      fVar13 = (*(float *)((char *)&auVar1 + 8));
      fVar15 = (*(float *)((char *)&auVar1 + 12));
      (*(undefined4 *)((char *)&auVar2 + 8)) = (undefined4)gen_fl2bits(fVar31);
      (*(undefined8 *)((char *)&auVar2 + 0)) = (*(undefined8 *)((char *)&auVar1 + 4));
      (*(undefined4 *)((char *)&auVar2 + 12)) = (undefined4)gen_fl2bits(fVar15);
      memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x20))), &(auVar2), sizeof(auVar2) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x20))) ? sizeof(auVar2) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x20))));
      memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x80))), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x80))) ? sizeof(auVar1) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x80))));
      fVar18 = pfVar7[8];
      fVar20 = pfVar7[9];
      fVar3 = pfVar7[10];
      fVar4 = pfVar7[0xb];
      (*(float *)(gen_frame + 0x90)) = fVar18;
      (*(float *)(gen_frame + 0x94)) = fVar20;
      (*(float *)(gen_frame + 0x98)) = fVar3;
      (*(float *)(gen_frame + 0x9c)) = fVar4;
      fVar27 = fVar18 * 0.0;
      fVar28 = fVar20 * 0.0;
      fVar29 = fVar3 * 0.0;
      fVar30 = fVar4 * 0.0;
      fVar14 = fVar31 * fVar27;
      fVar16 = fVar12 * fVar28;
      fVar19 = fVar13 * fVar29;
      fVar21 = (((fVar16 + fVar14) + fVar19) * fVar31 +
               (fVar15 * fVar15 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
               fVar27) + (fVar29 * fVar12 - fVar28 * fVar13) * fVar15;
      fVar23 = (((fVar16 + fVar14) + fVar19) * fVar12 +
               (fVar15 * fVar15 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
               fVar28) + (fVar27 * fVar13 - fVar29 * fVar31) * fVar15;
      fVar27 = (((fVar16 + fVar14) + fVar19) * fVar13 +
               (fVar15 * fVar15 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
               fVar29) + (fVar28 * fVar31 - fVar27 * fVar12) * fVar15;
      fVar28 = (((fVar16 + fVar14) + fVar19) * fVar15 +
               (fVar15 * fVar15 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
               fVar30) + (fVar30 * fVar15 - fVar30 * fVar15) * fVar15;
      fVar14 = ((*(float *)&REFG(undefined, 0x1138ca8) * fVar12 - *(float *)&REFG(undefined, 0x1138ca4) * fVar13) +
               *(float *)&REFG(undefined, 0x1138ca0) * fVar15) + fVar31 * *(float *)&REFG(undefined, 0x1138cac);
      fVar16 = ((*(float *)&REFG(undefined, 0x1138ca0) * fVar13 - *(float *)&REFG(undefined, 0x1138ca8) * fVar31) +
               *(float *)&REFG(undefined, 0x1138ca4) * fVar15) + fVar12 * *(float *)&REFG(undefined, 0x1138cac);
      fVar19 = ((*(float *)&REFG(undefined, 0x1138ca4) * fVar31 - *(float *)&REFG(undefined, 0x1138ca0) * fVar12) +
               *(float *)&REFG(undefined, 0x1138ca8) * fVar15) + fVar13 * *(float *)&REFG(undefined, 0x1138cac);
      (*(float *)(gen_frame + 0x70)) = (fVar21 + fVar21) + *pfVar7;
      (*(float *)(gen_frame + 0x74)) = (fVar23 + fVar23) + pfVar7[1];
      (*(float *)(gen_frame + 0x78)) = (fVar27 + fVar27) + pfVar7[2];
      (*(float *)(gen_frame + 0x7c)) = (fVar28 + fVar28) + pfVar7[3];
      fVar31 = *(float *)&REFG(undefined, 0x1138cac) * fVar15 -
               ((*(float *)&REFG(undefined, 0x1138ca4) * fVar12 + *(float *)&REFG(undefined, 0x1138ca0) * fVar31) +
               *(float *)&REFG(undefined, 0x1138ca8) * fVar13);
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x80)) + 0)) = (undefined4)gen_fl2bits(fVar14);
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x80)) + 4)) = (undefined4)gen_fl2bits(fVar16);
      (*(float *)(gen_frame + 0x88)) = fVar19;
      (*(float *)(gen_frame + 0x8c)) = fVar31;
      (*(ushort *)(gen_frame + 0x16)) = *(ushort *)(this + (*(uint *)(gen_frame + 0x4c)) * 2 + 0x3c) & 0xfff;
      ((byte *)(gen_frame + 0x14))[0] = (byte)(*(ushort *)(this + (*(uint *)(gen_frame + 0x4c)) * 2 + 0x3c) >> 0xc);
      (*(float *)(gen_frame + 0x90)) = *(float *)(this + 0x58) * fVar18;
      (*(float *)(gen_frame + 0x94)) = REFG(float, 0x1087f04) * fVar20;
      (*(float *)(gen_frame + 0x98)) = REFG(float, 0x1087f04) * fVar3;
      (*(float *)(gen_frame + 0x9c)) = fVar4 * 0.0;
      F_0063a080(this_00,((byte *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x70)),0);
      uVar8 = (*(uint *)(gen_frame + 0x4c)) + 1;
      (*(uint *)(gen_frame + 0x4c)) = uVar8;
    } while (uVar8 < 2);
  }
  uVar8 = (*(uint *)(gen_frame + 0x38));
  if (((*(uint *)(gen_frame + 0x38)) & 8) != 0) {
    (*(uint *)(gen_frame + 0x4c)) = 0;
    do {
      uVar9 = *(ushort *)(this + (*(uint *)(gen_frame + 0x4c)) * 2 + 0x40);
      uVar8 = (uint)uVar9;
      uVar10 = (*(uint *)(gen_frame + 0x4c));
      if (uVar9 != 0xffff) {
        bVar6 = (byte)(uVar9 >> 0xc);
        (*(undefined1 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x3c)) + 0)) = bVar6;
        (*(float * PTR32 *)(gen_frame + 0x3c)) = ((float *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(float * PTR32 *)(gen_frame + 0x3c)), 1, 3),bVar6)));
        (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x3c)) + 2)) = uVar9 & 0xfff;
        (*(float * PTR32 *)(gen_frame + 0x3c)) = ((float *)GEN_TOP((CONCAT22(uVar9,(*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x3c)) + 0))) & 0xfffffff)));
        pfVar7 = (float *)F_0062b8c0(this_00,&(*(float * PTR32 *)(gen_frame + 0x3c)));
        (*(float *)(gen_frame + 0xd0)) = *pfVar7;
        (*(float *)(gen_frame + 0xd4)) = pfVar7[1];
        (*(float *)(gen_frame + 0xd8)) = pfVar7[2];
        (*(float *)(gen_frame + 0xdc)) = pfVar7[3];
        (*(float *)(gen_frame + 0xe0)) = pfVar7[4];
        (*(float *)(gen_frame + 0xe4)) = pfVar7[5];
        (*(float *)(gen_frame + 0xe8)) = pfVar7[6];
        (*(float *)(gen_frame + 0xec)) = pfVar7[7];
        (*(float *)(gen_frame + 0xf0)) = pfVar7[8];
        (*(float *)(gen_frame + 0xf4)) = pfVar7[9];
        (*(float *)(gen_frame + 0xf8)) = pfVar7[10];
        (*(float *)(gen_frame + 0xfc)) = pfVar7[0xb];
        (*(undefined4 *)(gen_frame + 0x60)) = *(undefined4 *)&REFG(undefined, 0x10b2a40);
        (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)&REFG(undefined, 0x10b2a44);
        (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)&REFG(undefined, 0x10b2a48);
        (*(undefined4 *)(gen_frame + 0x6c)) = *(undefined4 *)&REFG(undefined, 0x10b2a4c);
        F_00d988a0(&(*(float *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x60)),*(float *)(this + (*(uint *)(gen_frame + 0x4c)) * 4 + 0x5c));
        (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x20)) + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xe8)));
        (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x20)) + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xe0)));
        (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0xe4));
        (*(float *)(gen_frame + 0x2c)) = (*(float *)(gen_frame + 0xec));
        fVar31 = (*(float *)(gen_frame + 0xe0)) * *(float *)&REFG(undefined, 0x10b2a50);
        fVar12 = (*(float *)(gen_frame + 0xe4)) * *(float *)&REFG(undefined, 0x10b2a54);
        fVar13 = (*(float *)(gen_frame + 0xe8)) * *(float *)&REFG(undefined, 0x10b2a58);
        fVar15 = (((fVar12 + fVar31) + fVar13) * (*(float *)(gen_frame + 0xe0)) +
                 ((*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0xec)) +
                 gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
                 *(float *)&REFG(undefined, 0x10b2a50)) +
                 (*(float *)&REFG(undefined, 0x10b2a58) * (*(float *)(gen_frame + 0xe4)) - *(float *)&REFG(undefined, 0x10b2a54) * (*(float *)(gen_frame + 0xe8))) *
                 (*(float *)(gen_frame + 0xec));
        fVar18 = (((fVar12 + fVar31) + fVar13) * (*(float *)(gen_frame + 0xe4)) +
                 ((*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0xec)) +
                 gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
                 *(float *)&REFG(undefined, 0x10b2a54)) +
                 (*(float *)&REFG(undefined, 0x10b2a50) * (*(float *)(gen_frame + 0xe8)) - *(float *)&REFG(undefined, 0x10b2a58) * (*(float *)(gen_frame + 0xe0))) *
                 (*(float *)(gen_frame + 0xec));
        fVar20 = (((fVar12 + fVar31) + fVar13) * (*(float *)(gen_frame + 0xe8)) +
                 ((*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0xec)) +
                 gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
                 *(float *)&REFG(undefined, 0x10b2a58)) +
                 (*(float *)&REFG(undefined, 0x10b2a54) * (*(float *)(gen_frame + 0xe0)) - *(float *)&REFG(undefined, 0x10b2a50) * (*(float *)(gen_frame + 0xe4))) *
                 (*(float *)(gen_frame + 0xec));
        fVar31 = (((fVar12 + fVar31) + fVar13) * (*(float *)(gen_frame + 0xec)) +
                 ((*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0xec)) +
                 gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
                 *(float *)&REFG(undefined, 0x10b2a5c)) +
                 (*(float *)&REFG(undefined, 0x10b2a5c) * (*(float *)(gen_frame + 0xec)) - *(float *)&REFG(undefined, 0x10b2a5c) * (*(float *)(gen_frame + 0xec))) *
                 (*(float *)(gen_frame + 0xec));
        (*(float *)(gen_frame + 0xd0)) = (fVar15 + fVar15) + (*(float *)(gen_frame + 0xd0));
        (*(float *)(gen_frame + 0xd4)) = (fVar18 + fVar18) + (*(float *)(gen_frame + 0xd4));
        (*(float *)(gen_frame + 0xd8)) = (fVar20 + fVar20) + (*(float *)(gen_frame + 0xd8));
        (*(float *)(gen_frame + 0xdc)) = (fVar31 + fVar31) + (*(float *)(gen_frame + 0xdc));
        fVar15 = (*(float *)(gen_frame + 0x54)) * (*(float *)(gen_frame + 0xe0));
        fVar18 = (*(float *)(gen_frame + 0x58)) * (*(float *)(gen_frame + 0xe0));
        fVar20 = (*(float *)(gen_frame + 0x50)) * (*(float *)(gen_frame + 0xe4));
        uVar9 = *(ushort *)(this + (*(uint *)(gen_frame + 0x4c)) * 2 + 0x40);
        fVar31 = (*(float *)(gen_frame + 0xe0)) * (*(float *)(gen_frame + 0x50));
        fVar12 = (*(float *)(gen_frame + 0xe4)) * (*(float *)(gen_frame + 0x54));
        fVar13 = (*(float *)(gen_frame + 0xe8)) * (*(float *)(gen_frame + 0x58));
        bVar6 = (byte)(uVar9 >> 0xc);
        (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x40)) + 2)) = uVar9 & 0xfff;
        uVar5 = CONCAT22(uVar9,(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x40)) + 0)));
        (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x40)) + 0)) = bVar6;
        (*(float *)(gen_frame + 0x40)) = gen_bits2f(CONCAT31((int3)((uint)uVar5 >> 8),bVar6) & 0xfffffff);
        (*(float *)(gen_frame + 0xe0)) = (((*(float *)(gen_frame + 0x58)) * (*(float *)(gen_frame + 0xe4)) - (*(float *)(gen_frame + 0x54)) * (*(float *)(gen_frame + 0xe8))) + (*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0x50))) +
                   (*(float *)(gen_frame + 0xe0)) * (*(float *)(gen_frame + 0x5c));
        (*(float *)(gen_frame + 0xe4)) = (((*(float *)(gen_frame + 0x50)) * (*(float *)(gen_frame + 0xe8)) - fVar18) + (*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0x54))) +
                    (*(float *)(gen_frame + 0xe4)) * (*(float *)(gen_frame + 0x5c));
        (*(float *)(gen_frame + 0xe8)) = ((fVar15 - fVar20) + (*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0x58))) + (*(float *)(gen_frame + 0xe8)) * (*(float *)(gen_frame + 0x5c));
        (*(float *)(gen_frame + 0xec)) = (*(float *)(gen_frame + 0x5c)) * (*(float *)(gen_frame + 0xec)) - ((fVar12 + fVar31) + fVar13);
        (*(float *)(gen_frame + 0xf0)) = *(float *)&REFG(undefined, 0x1138af0) * (*(float *)(gen_frame + 0xf0));
        (*(float *)(gen_frame + 0xf4)) = *(float *)&REFG(undefined, 0x1138af4) * (*(float *)(gen_frame + 0xf4));
        (*(float *)(gen_frame + 0xf8)) = *(float *)&REFG(undefined, 0x1138af8) * (*(float *)(gen_frame + 0xf8));
        (*(float *)(gen_frame + 0xfc)) = *(float *)&REFG(undefined, 0x1138afc) * (*(float *)(gen_frame + 0xfc));
        uVar8 = F_0063a080(this_00,&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0xd0)),0);
        uVar10 = (*(uint *)(gen_frame + 0x4c));
      }
      (*(uint *)(gen_frame + 0x4c)) = uVar10 + 1;
    } while (uVar10 + 1 < 3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x13c)) ^ (uint)(uint)(gen_frame + 0x140));
  return uVar8;
}

/* ref: Client::Graphics::Scene::Attach::vf3 */
unsigned int F_0069a8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x69a8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006b2f70(this);
  if (*(int *)(this + 0x4c) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)(this + 0x4c));
    *(undefined4 *)(this + 0x4c) = 0;
  }
  *(undefined4 *)(this + 0x3c) = 0;
  F_0061f480((undefined *)this);
  return 0;
}

/* ref: Client::Graphics::Scene::Attach::vf1 */
uint F_0069a920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x69a920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x300];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * pvVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined4 * puVar11;
  uint uVar12;
  int * piVar13;
  float * pfVar14;
  int iVar15;
  undefined4 * puVar16;
  float * pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  (*(uint *)(gen_frame + 0x2ec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2f0);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x38))) {
  case 1: ;
    iVar15 = *(int *)(this + 0x4c);
    piVar13 = *(int * PTR32 *)(this + 0x44);
    (*(undefined * PTR32 *)(gen_frame + 0x1dc)) = *(undefined * PTR32 *)(this + 0x40);
    F_0054fa20(((undefined1 *)(gen_frame + 0x260)),iVar15 + 0x10);
    uVar12 = ((code *)*(gen_code32 *)(*piVar13 + 0x40))(piVar13,((undefined1 *)(gen_frame + 0x1e0)),(uint)*(ushort *)(iVar15 + 2));
    puVar11 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x2a0)),(uint)((undefined1 *)(gen_frame + 0x260)),uVar12);
    puVar16 = ((undefined4 *)(gen_frame + 0x90));
    for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
      *puVar16 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar16 = puVar16 + 1;
    }
    F_005fe8d0(((undefined1 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x90)));
    this = (undefined *)F_0060aad0((*(undefined * PTR32 *)(gen_frame + 0x1dc)),((undefined1 *)(gen_frame + 0x0)));
    break;
  case 2: ;
    iVar15 = *(int *)(this + 0x4c);
    pvVar5 = *(undefined * PTR32 *)(this + 0x44);
    (*(undefined * PTR32 *)(gen_frame + 0x1dc)) = *(undefined * PTR32 *)(this + 0x40);
    F_0054fa20(((undefined1 *)(gen_frame + 0x260)),iVar15 + 0x10);
    uVar12 = F_0064ce50(pvVar5,((undefined1 *)(gen_frame + 0x220)),(uint)*(ushort *)(iVar15 + 2));
    puVar11 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x2a0)),(uint)((undefined1 *)(gen_frame + 0x260)),uVar12);
    puVar16 = ((undefined4 *)(gen_frame + 0x90));
    for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
      *puVar16 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar16 = puVar16 + 1;
    }
    F_005fe8d0(((undefined1 *)(gen_frame + 0x30)),((undefined4 *)(gen_frame + 0x90)));
    this = (undefined *)F_0060aad0((*(undefined * PTR32 *)(gen_frame + 0x1dc)),((undefined1 *)(gen_frame + 0x30)));
    break;
  case 3: ;
    piVar13 = *(int * PTR32 *)(this + 0x44);
    pvVar5 = *(undefined * PTR32 *)(this + 0x40);
    (*(undefined * PTR32 *)(gen_frame + 0x1dc)) = *(undefined * PTR32 *)(this + 0x48);
    (*(int *)(gen_frame + 0x19c)) = *(int *)(this + 0x4c);
    (*(int * PTR32 *)(gen_frame + 0x1d8)) = piVar13;
    uVar12 = ((code *)*(gen_code32 *)(*piVar13 + 0x90))(piVar13);
    if ((char)uVar12 == '\0') {
      piVar13 = piVar13 + 0xc;
    }
    else {
      piVar13 = (int *)(piVar13[0x1e] + 0x10);
    }
    this = (undefined *)F_006001e0(&(*(float *)(gen_frame + 0x1a0)),piVar13);
    if ((*(undefined * PTR32 *)(gen_frame + 0x1dc)) != (undefined *)0x0) {
      (*(float *)(gen_frame + 0xf0)) = (*(float *)(gen_frame + 0x1a0));
      (*(float *)(gen_frame + 0xf4)) = (*(float *)(gen_frame + 0x1a4));
      (*(float *)(gen_frame + 0xf8)) = (*(float *)(gen_frame + 0x1a8));
      (*(float *)(gen_frame + 0xfc)) = 0.0;
      pfVar17 = (float *)((*(int *)(gen_frame + 0x19c)) + 0x28);
      (*(float *)(gen_frame + 0x100)) = (*(float *)(gen_frame + 0x1b0));
      (*(float *)(gen_frame + 0x104)) = (*(float *)(gen_frame + 0x1b4));
      (*(float *)(gen_frame + 0x108)) = (*(float *)(gen_frame + 0x1b8));
      (*(float *)(gen_frame + 0x10c)) = (*(float *)(gen_frame + 0x1bc));
      (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0x1c0));
      (*(float *)(gen_frame + 0x114)) = (*(float *)(gen_frame + 0x1c4));
      (*(float *)(gen_frame + 0x118)) = (*(float *)(gen_frame + 0x1c8));
      (*(float *)(gen_frame + 0x11c)) = 0.0;
      (*(float *)(gen_frame + 0x70)) = (*(float *)(gen_frame + 0x1bc));
      (*(float *)(gen_frame + 0x74)) = (*(float *)(gen_frame + 0x1bc));
      (*(float *)(gen_frame + 0x78)) = (*(float *)(gen_frame + 0x1bc));
      (*(float *)(gen_frame + 0x7c)) = (*(float *)(gen_frame + 0x1bc));
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xe0)) + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1b8)));
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xe0)) + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1b0)));
      (*(float *)(gen_frame + 0xe8)) = (*(float *)(gen_frame + 0x1b4));
      (*(float *)(gen_frame + 0xec)) = (*(float *)(gen_frame + 0x1bc));
      (*(float *)(gen_frame + 0xd0)) = (*(float *)(gen_frame + 0x1b4));
      (*(float *)(gen_frame + 0xd4)) = (*(float *)(gen_frame + 0x1b8));
      (*(float *)(gen_frame + 0xd8)) = (*(float *)(gen_frame + 0x1b0));
      (*(float *)(gen_frame + 0xdc)) = (*(float *)(gen_frame + 0x1bc));
      do {
        (*(float *)(gen_frame + 0x2b0)) = pfVar17[-6];
        (*(float *)(gen_frame + 0x2b4)) = pfVar17[-5];
        (*(float *)(gen_frame + 0x2b8)) = pfVar17[-4];
        (*(float *)(gen_frame + 0x2bc)) = 0.0;
        (*(float *)(gen_frame + 0x2c0)) = pfVar17[-2];
        (*(float *)(gen_frame + 0x2c4)) = pfVar17[-1];
        (*(float *)(gen_frame + 0x2c8)) = *pfVar17;
        (*(float *)(gen_frame + 0x2cc)) = pfVar17[1];
        (*(float *)(gen_frame + 0x2d0)) = pfVar17[2];
        (*(float *)(gen_frame + 0x2d4)) = pfVar17[3];
        (*(float *)(gen_frame + 0x2d8)) = pfVar17[4];
        (*(float *)(gen_frame + 0x2dc)) = 0.0;
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x1d8)) + 0x58))
                  ((*(int * PTR32 *)(gen_frame + 0x1d8)),&(*(float *)(gen_frame + 0x1a0)),(uint)*(ushort *)((int)pfVar17 + -0x26));
        fVar24 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
        fVar27 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
        fVar28 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
        fVar32 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
        (*(float *)(gen_frame + 0x120)) = fVar24;
        (*(float *)(gen_frame + 0x124)) = fVar27;
        (*(float *)(gen_frame + 0x128)) = fVar28;
        (*(float *)(gen_frame + 0x12c)) = fVar32;
        (*(float *)(gen_frame + 0x80)) = (*(float *)(gen_frame + 0x1b4));
        (*(float *)(gen_frame + 0x84)) = (*(float *)(gen_frame + 0x1b8));
        (*(float *)(gen_frame + 0x88)) = (*(float *)(gen_frame + 0x1b0));
        (*(float *)(gen_frame + 0x8c)) = (*(float *)(gen_frame + 0x1bc));
        (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x1b8));
        (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x1b0));
        (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x1b4));
        (*(float *)(gen_frame + 0x6c)) = (*(float *)(gen_frame + 0x1bc));
        fVar18 = (*(float *)(gen_frame + 0x1b0)) * (*(float *)(gen_frame + 0x2b0));
        fVar19 = (*(float *)(gen_frame + 0x1b4)) * (*(float *)(gen_frame + 0x2b4));
        fVar20 = (*(float *)(gen_frame + 0x1b8)) * (*(float *)(gen_frame + 0x2b8));
        fVar29 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x1b0)) +
                 ((*(float *)(gen_frame + 0x1bc)) * (*(float *)(gen_frame + 0x1bc)) + fVar24) * (*(float *)(gen_frame + 0x2b0))) +
                 ((*(float *)(gen_frame + 0x2b8)) * (*(float *)(gen_frame + 0x1b4)) - (*(float *)(gen_frame + 0x2b4)) * (*(float *)(gen_frame + 0x1b8))) * (*(float *)(gen_frame + 0x1bc));
        fVar21 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x1b4)) +
                 ((*(float *)(gen_frame + 0x1bc)) * (*(float *)(gen_frame + 0x1bc)) + fVar27) * (*(float *)(gen_frame + 0x2b4))) +
                 ((*(float *)(gen_frame + 0x2b0)) * (*(float *)(gen_frame + 0x1b8)) - (*(float *)(gen_frame + 0x2b8)) * (*(float *)(gen_frame + 0x1b0))) * (*(float *)(gen_frame + 0x1bc));
        fVar22 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x1b8)) +
                 ((*(float *)(gen_frame + 0x1bc)) * (*(float *)(gen_frame + 0x1bc)) + fVar28) * (*(float *)(gen_frame + 0x2b8))) +
                 ((*(float *)(gen_frame + 0x2b4)) * (*(float *)(gen_frame + 0x1b0)) - (*(float *)(gen_frame + 0x2b0)) * (*(float *)(gen_frame + 0x1b4))) * (*(float *)(gen_frame + 0x1bc));
        fVar18 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x1bc)) +
                 ((*(float *)(gen_frame + 0x1bc)) * (*(float *)(gen_frame + 0x1bc)) + fVar32) * (*(float *)(gen_frame + 0x2bc))) +
                 ((*(float *)(gen_frame + 0x2bc)) * (*(float *)(gen_frame + 0x1bc)) - (*(float *)(gen_frame + 0x2bc)) * (*(float *)(gen_frame + 0x1bc))) * (*(float *)(gen_frame + 0x1bc));
        fVar29 = (fVar29 + fVar29) + (*(float *)(gen_frame + 0x1a0));
        fVar21 = (fVar21 + fVar21) + (*(float *)(gen_frame + 0x1a4));
        fVar22 = (fVar22 + fVar22) + (*(float *)(gen_frame + 0x1a8));
        fVar23 = (fVar18 + fVar18) + 0.0;
        (*(float *)(gen_frame + 0xa0)) = fVar29;
        (*(float *)(gen_frame + 0xa4)) = fVar21;
        (*(float *)(gen_frame + 0xa8)) = fVar22;
        (*(float *)(gen_frame + 0xac)) = fVar23;
        fVar25 = (((*(float *)(gen_frame + 0x2c8)) * (*(float *)(gen_frame + 0x1b4)) - (*(float *)(gen_frame + 0x2c4)) * (*(float *)(gen_frame + 0x1b8))) + (*(float *)(gen_frame + 0x2c0)) * (*(float *)(gen_frame + 0x1bc))) +
                 (*(float *)(gen_frame + 0x1b0)) * (*(float *)(gen_frame + 0x2cc));
        fVar26 = (((*(float *)(gen_frame + 0x2c0)) * (*(float *)(gen_frame + 0x1b8)) - (*(float *)(gen_frame + 0x2c8)) * (*(float *)(gen_frame + 0x1b0))) + (*(float *)(gen_frame + 0x2c4)) * (*(float *)(gen_frame + 0x1bc))) +
                 (*(float *)(gen_frame + 0x1b4)) * (*(float *)(gen_frame + 0x2cc));
        fVar30 = (((*(float *)(gen_frame + 0x2c4)) * (*(float *)(gen_frame + 0x1b0)) - (*(float *)(gen_frame + 0x2c0)) * (*(float *)(gen_frame + 0x1b4))) + (*(float *)(gen_frame + 0x2c8)) * (*(float *)(gen_frame + 0x1bc))) +
                 (*(float *)(gen_frame + 0x1b8)) * (*(float *)(gen_frame + 0x2cc));
        fVar29 = (*(float *)(gen_frame + 0x110)) * fVar29;
        fVar21 = (*(float *)(gen_frame + 0x114)) * fVar21;
        fVar22 = (*(float *)(gen_frame + 0x118)) * fVar22;
        fVar23 = (*(float *)(gen_frame + 0x11c)) * fVar23;
        fVar31 = (*(float *)(gen_frame + 0x2cc)) * (*(float *)(gen_frame + 0x1bc)) -
                 (((*(float *)(gen_frame + 0x1b4)) * (*(float *)(gen_frame + 0x2c4)) + (*(float *)(gen_frame + 0x1b0)) * (*(float *)(gen_frame + 0x2c0))) + (*(float *)(gen_frame + 0x1b8)) * (*(float *)(gen_frame + 0x2c8)));
        fVar18 = (*(float *)(gen_frame + 0x100)) * fVar29;
        fVar19 = (*(float *)(gen_frame + 0x104)) * fVar21;
        fVar20 = (*(float *)(gen_frame + 0x108)) * fVar22;
        (*(float *)(gen_frame + 0xc0)) = (*(float *)(gen_frame + 0x1c0)) * (*(float *)(gen_frame + 0x2d0));
        (*(float *)(gen_frame + 0xc4)) = (*(float *)(gen_frame + 0x1c4)) * (*(float *)(gen_frame + 0x2d4));
        (*(float *)(gen_frame + 0xc8)) = (*(float *)(gen_frame + 0x1c8)) * (*(float *)(gen_frame + 0x2d8));
        (*(float *)(gen_frame + 0xcc)) = (*(float *)(gen_frame + 0x2dc)) * 0.0;
        fVar24 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x100)) +
                 ((*(float *)(gen_frame + 0x70)) * (*(float *)(gen_frame + 0x70)) + fVar24) * fVar29) +
                 (fVar22 * (*(float *)(gen_frame + 0xd0)) - fVar21 * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xe0)) + 0)))) * (*(float *)(gen_frame + 0x70));
        fVar27 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x104)) +
                 ((*(float *)(gen_frame + 0x74)) * (*(float *)(gen_frame + 0x74)) + fVar27) * fVar21) +
                 (fVar29 * (*(float *)(gen_frame + 0xd4)) - fVar22 * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xe0)) + 4)))) * (*(float *)(gen_frame + 0x74));
        fVar22 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x108)) +
                 ((*(float *)(gen_frame + 0x78)) * (*(float *)(gen_frame + 0x78)) + fVar28) * fVar22) +
                 (fVar21 * (*(float *)(gen_frame + 0xd8)) - fVar29 * (*(float *)(gen_frame + 0xe8))) * (*(float *)(gen_frame + 0x78));
        fVar23 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x10c)) +
                 ((*(float *)(gen_frame + 0x7c)) * (*(float *)(gen_frame + 0x7c)) + fVar32) * fVar23) +
                 (fVar23 * (*(float *)(gen_frame + 0xdc)) - fVar23 * (*(float *)(gen_frame + 0xec))) * (*(float *)(gen_frame + 0x7c));
        fVar18 = ((fVar30 * (*(float *)(gen_frame + 0xd0)) - fVar26 * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xe0)) + 0)))) + fVar25 * (*(float *)(gen_frame + 0x70)))
                 + (*(float *)(gen_frame + 0x100)) * fVar31;
        fVar19 = ((fVar25 * (*(float *)(gen_frame + 0xd4)) - fVar30 * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xe0)) + 4)))) + fVar26 * (*(float *)(gen_frame + 0x74))
                 ) + (*(float *)(gen_frame + 0x104)) * fVar31;
        fVar20 = ((fVar26 * (*(float *)(gen_frame + 0xd8)) - fVar25 * (*(float *)(gen_frame + 0xe8))) + fVar30 * (*(float *)(gen_frame + 0x78))) +
                 (*(float *)(gen_frame + 0x108)) * fVar31;
        fVar29 = (fVar24 + fVar24) + (*(float *)(gen_frame + 0xf0));
        fVar21 = (fVar27 + fVar27) + (*(float *)(gen_frame + 0xf4));
        fVar22 = (fVar22 + fVar22) + (*(float *)(gen_frame + 0xf8));
        (*(float *)(gen_frame + 0x130)) = fVar29;
        (*(float *)(gen_frame + 0x134)) = fVar21;
        (*(float *)(gen_frame + 0x138)) = fVar22;
        (*(float *)(gen_frame + 0x13c)) = (fVar23 + fVar23) + (*(float *)(gen_frame + 0xfc));
        fVar23 = fVar31 * (*(float *)(gen_frame + 0x7c)) -
                 ((fVar26 * (*(float *)(gen_frame + 0x104)) + fVar25 * (*(float *)(gen_frame + 0x100))) + fVar30 * (*(float *)(gen_frame + 0x108)));
        (*(float *)(gen_frame + 0x140)) = fVar18;
        (*(float *)(gen_frame + 0x144)) = fVar19;
        (*(float *)(gen_frame + 0x148)) = fVar20;
        (*(float *)(gen_frame + 0x14c)) = fVar23;
        (*(float *)(gen_frame + 0x160)) = fVar29;
        (*(float *)(gen_frame + 0x164)) = fVar21;
        (*(float *)(gen_frame + 0x170)) = fVar18;
        (*(float *)(gen_frame + 0x174)) = fVar19;
        (*(float *)(gen_frame + 0x178)) = fVar20;
        (*(float *)(gen_frame + 0x168)) = fVar22;
        (*(float *)(gen_frame + 0x17c)) = fVar23;
        *((float *)GEN_TOP((*(int *)((int)pvVar5 + 0x74) + 0x290))) = ((*(float *)(gen_frame + 0x1c0)) * (*(float *)(gen_frame + 0x2d0))) * (*(float *)(gen_frame + 0x110));
        (*(undefined4 *)(gen_frame + 0x180)) = *(undefined4 *)((int)pvVar5 + 0x30);
        (*(undefined4 *)(gen_frame + 0x184)) = *(undefined4 *)((int)pvVar5 + 0x34);
        (*(undefined4 *)(gen_frame + 0x188)) = *(undefined4 *)((int)pvVar5 + 0x38);
        F_00623060(pvVar5,&(*(float *)(gen_frame + 0x160)));
        this = *(undefined * PTR32 *)((int)pvVar5 + 0x74);
        if (this != (undefined *)0x0) {
          uVar6 = *(undefined4 *)((int)pvVar5 + 0x24);
          uVar1 = *(undefined4 *)((int)pvVar5 + 0x10);
          uVar2 = *(undefined4 *)((int)pvVar5 + 0x14);
          uVar3 = *(undefined4 *)((int)pvVar5 + 0x18);
          (*(undefined4 *)(gen_frame + 0x284)) = uVar6;
          uVar7 = *(undefined4 *)((int)pvVar5 + 0x28);
          (*(undefined4 *)(gen_frame + 0x288)) = uVar7;
          uVar8 = *(undefined4 *)((int)pvVar5 + 0x2c);
          *(undefined4 *)(this + 0x40) = *(undefined4 *)((int)pvVar5 + 0x20);
          *(undefined4 *)(this + 0x44) = uVar6;
          *(undefined4 *)(this + 0x48) = uVar7;
          *(undefined4 *)(this + 0x30) = uVar1;
          *(undefined4 *)(this + 0x34) = uVar2;
          *(undefined4 *)(this + 0x38) = uVar3;
          *(undefined4 *)(this + 0x4c) = uVar8;
          *(undefined4 *)(this + 0x50) = *(undefined4 *)(this + 0x50);
          *(undefined4 *)(this + 0x54) = *(undefined4 *)(this + 0x54);
          *(undefined4 *)(this + 0x58) = *(undefined4 *)(this + 0x58);
          *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
        }
        pfVar17 = pfVar17 + 0x10;
        pvVar4 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1dc)) + -1);
        (*(undefined * PTR32 *)(gen_frame + 0x1dc)) = pvVar4;
      } while (pvVar4 != (undefined *)0x0);
    }
    break;
  case 4: ;
    pvVar5 = *(undefined * PTR32 *)(this + 0x40);
    (*(int * PTR32 *)(gen_frame + 0x1d8)) = *(int * PTR32 *)(this + 0x44);
    if (*(undefined * PTR32 *)(this + 0x48) != (undefined *)0x0) {
      pfVar17 = ((float *)GEN_TOP((*(int *)(this + 0x4c) + 0x28)));
      (*(undefined * PTR32 *)(gen_frame + 0x1dc)) = *(undefined * PTR32 *)(this + 0x48);
      do {
        (*(float *)(gen_frame + 0xa0)) = pfVar17[-6];
        (*(float *)(gen_frame + 0xa4)) = pfVar17[-5];
        (*(float *)(gen_frame + 0xa8)) = pfVar17[-4];
        (*(float *)(gen_frame + 0xac)) = 0.0;
        (*(float *)(gen_frame + 0x1b0)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[8]);
        (*(float *)(gen_frame + 0xb0)) = pfVar17[-2];
        (*(float *)(gen_frame + 0xb4)) = pfVar17[-1];
        (*(float *)(gen_frame + 0xb8)) = *pfVar17;
        (*(float *)(gen_frame + 0xbc)) = pfVar17[1];
        (*(float *)(gen_frame + 0x1b4)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[9]);
        (*(float *)(gen_frame + 0x1b8)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[10]);
        (*(float *)(gen_frame + 0x1bc)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[0xb]);
        (*(float *)(gen_frame + 0xc0)) = pfVar17[2];
        (*(float *)(gen_frame + 0xc4)) = pfVar17[3];
        (*(float *)(gen_frame + 0xc8)) = pfVar17[4];
        (*(float *)(gen_frame + 0xcc)) = 0.0;
        (*(float *)(gen_frame + 0x2b0)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[4]);
        (*(float *)(gen_frame + 0x2b4)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[5]);
        (*(float *)(gen_frame + 0x2b8)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[6]);
        (*(float *)(gen_frame + 0x2bc)) = 0.0;
        (*(float *)(gen_frame + 0x2c0)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[8]);
        (*(float *)(gen_frame + 0x2c4)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[9]);
        (*(float *)(gen_frame + 0x2c8)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[10]);
        (*(float *)(gen_frame + 0x2cc)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[0xb]);
        (*(ushort *)(gen_frame + 0x1d6)) = *(ushort *)((int)pfVar17 + -0x26) & 0xfff;
        ((byte *)(gen_frame + 0x1d4))[0] = (byte)(*(ushort *)((int)pfVar17 + -0x26) >> 0xc);
        (*(float *)(gen_frame + 0x2d0)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[0xc]);
        (*(float *)(gen_frame + 0x2d4)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[0xd]);
        (*(float *)(gen_frame + 0x2d8)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[0xe]);
        (*(float *)(gen_frame + 0x2dc)) = 0.0;
        pfVar14 = (float *)F_0062b8c0((*(int * PTR32 *)(gen_frame + 0x1d8)),((byte *)(gen_frame + 0x1d4)));
        (*(float *)(gen_frame + 0xf0)) = *pfVar14;
        (*(float *)(gen_frame + 0xf4)) = pfVar14[1];
        (*(float *)(gen_frame + 0xf8)) = pfVar14[2];
        (*(float *)(gen_frame + 0xfc)) = pfVar14[3];
        fVar18 = pfVar14[4];
        fVar19 = pfVar14[5];
        fVar20 = pfVar14[6];
        fVar29 = pfVar14[7];
        (*(float *)(gen_frame + 0x110)) = pfVar14[8];
        (*(float *)(gen_frame + 0x114)) = pfVar14[9];
        (*(float *)(gen_frame + 0x118)) = pfVar14[10];
        (*(float *)(gen_frame + 0x11c)) = pfVar14[0xb];
        fVar21 = fVar18 * (*(float *)(gen_frame + 0xa0));
        fVar22 = fVar19 * (*(float *)(gen_frame + 0xa4));
        fVar23 = fVar20 * (*(float *)(gen_frame + 0xa8));
        (*(float *)(gen_frame + 0x120)) = fVar20;
        (*(float *)(gen_frame + 0x124)) = fVar18;
        (*(float *)(gen_frame + 0x128)) = fVar19;
        (*(float *)(gen_frame + 0x12c)) = fVar29;
        fVar24 = (((fVar22 + fVar21) + fVar23) * fVar18 +
                 (fVar29 * fVar29 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
                 (*(float *)(gen_frame + 0xa0))) + ((*(float *)(gen_frame + 0xa8)) * fVar19 - (*(float *)(gen_frame + 0xa4)) * fVar20) * fVar29;
        fVar25 = (((fVar22 + fVar21) + fVar23) * fVar19 +
                 (fVar29 * fVar29 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
                 (*(float *)(gen_frame + 0xa4))) + ((*(float *)(gen_frame + 0xa0)) * fVar20 - (*(float *)(gen_frame + 0xa8)) * fVar18) * fVar29;
        fVar27 = (((fVar22 + fVar21) + fVar23) * fVar20 +
                 (fVar29 * fVar29 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
                 (*(float *)(gen_frame + 0xa8))) + ((*(float *)(gen_frame + 0xa4)) * fVar18 - (*(float *)(gen_frame + 0xa0)) * fVar19) * fVar29;
        fVar21 = (((fVar22 + fVar21) + fVar23) * fVar29 +
                 (fVar29 * fVar29 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
                 (*(float *)(gen_frame + 0xac))) + ((*(float *)(gen_frame + 0xac)) * fVar29 - (*(float *)(gen_frame + 0xac)) * fVar29) * fVar29;
        fVar22 = (fVar24 + fVar24) + *pfVar14;
        fVar23 = (fVar25 + fVar25) + pfVar14[1];
        fVar24 = (fVar27 + fVar27) + pfVar14[2];
        fVar25 = (fVar21 + fVar21) + pfVar14[3];
        (*(float *)(gen_frame + 0xf0)) = fVar22;
        (*(float *)(gen_frame + 0xf4)) = fVar23;
        (*(float *)(gen_frame + 0xf8)) = fVar24;
        (*(float *)(gen_frame + 0xfc)) = fVar25;
        fVar27 = (((*(float *)(gen_frame + 0xb8)) * fVar19 - (*(float *)(gen_frame + 0xb4)) * fVar20) + (*(float *)(gen_frame + 0xb0)) * fVar29) +
                 fVar18 * (*(float *)(gen_frame + 0xbc));
        fVar26 = (((*(float *)(gen_frame + 0xb0)) * fVar20 - (*(float *)(gen_frame + 0xb8)) * fVar18) + (*(float *)(gen_frame + 0xb4)) * fVar29) +
                 fVar19 * (*(float *)(gen_frame + 0xbc));
        fVar28 = (((*(float *)(gen_frame + 0xb4)) * fVar18 - (*(float *)(gen_frame + 0xb0)) * fVar19) + (*(float *)(gen_frame + 0xb8)) * fVar29) +
                 fVar20 * (*(float *)(gen_frame + 0xbc));
        fVar21 = pfVar14[8] * (*(float *)(gen_frame + 0xc0));
        fVar32 = (*(float *)(gen_frame + 0xbc)) * fVar29 -
                 ((fVar19 * (*(float *)(gen_frame + 0xb4)) + fVar18 * (*(float *)(gen_frame + 0xb0))) + fVar20 * (*(float *)(gen_frame + 0xb8)));
        fVar22 = (*(float *)(gen_frame + 0x2d0)) * fVar22;
        fVar23 = (*(float *)(gen_frame + 0x2d4)) * fVar23;
        fVar24 = (*(float *)(gen_frame + 0x2d8)) * fVar24;
        fVar25 = (*(float *)(gen_frame + 0x2dc)) * fVar25;
        (*(undefined4 *)((char *)&auVar10 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x2c4)));
        (*(undefined4 *)((char *)&auVar10 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x2c0)));
        (*(undefined4 *)((char *)&auVar10 + 8)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x2c8)));
        (*(float *)(gen_frame + 0x110)) = fVar21;
        (*(float *)(gen_frame + 0x114)) = pfVar14[9] * (*(float *)(gen_frame + 0xc4));
        (*(float *)(gen_frame + 0x118)) = pfVar14[10] * (*(float *)(gen_frame + 0xc8));
        (*(float *)(gen_frame + 0x11c)) = pfVar14[0xb] * (*(float *)(gen_frame + 0xcc));
        (*(undefined4 *)((char *)&auVar9 + 8)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x2c0)));
        (*(undefined8 *)((char *)&auVar9 + 0)) = (*(undefined8 *)((char *)&auVar10 + 4));
        (*(undefined4 *)((char *)&auVar9 + 12)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x2cc)));
        memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0xe0))), &(auVar9), sizeof(auVar9) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0xe0))) ? sizeof(auVar9) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0xe0))));
        (*(float *)(gen_frame + 0xd0)) = (*(float *)(gen_frame + 0x2c8));
        (*(float *)(gen_frame + 0xd4)) = (*(float *)(gen_frame + 0x2c0));
        (*(float *)(gen_frame + 0xd8)) = (*(float *)(gen_frame + 0x2c4));
        (*(float *)(gen_frame + 0xdc)) = (*(float *)(gen_frame + 0x2cc));
        fVar18 = (*(float *)(gen_frame + 0x2c0)) * fVar22;
        fVar19 = (*(float *)(gen_frame + 0x2c4)) * fVar23;
        fVar20 = (*(float *)(gen_frame + 0x2c8)) * fVar24;
        fVar29 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x2c0)) +
                 ((*(float *)(gen_frame + 0x2cc)) * (*(float *)(gen_frame + 0x2cc)) +
                 gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) * fVar22) +
                 (fVar24 * (*(float *)(gen_frame + 0x2c4)) - fVar23 * (*(float *)(gen_frame + 0x2c8))) * (*(float *)(gen_frame + 0x2cc));
        fVar30 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x2c4)) +
                 ((*(float *)(gen_frame + 0x2cc)) * (*(float *)(gen_frame + 0x2cc)) +
                 gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) * fVar23) +
                 (fVar22 * (*(float *)(gen_frame + 0x2c8)) - fVar24 * (*(float *)(gen_frame + 0x2c0))) * (*(float *)(gen_frame + 0x2cc));
        fVar23 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x2c8)) +
                 ((*(float *)(gen_frame + 0x2cc)) * (*(float *)(gen_frame + 0x2cc)) +
                 gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) * fVar24) +
                 (fVar23 * (*(float *)(gen_frame + 0x2c0)) - fVar22 * (*(float *)(gen_frame + 0x2c4))) * (*(float *)(gen_frame + 0x2cc));
        fVar18 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x2cc)) +
                 ((*(float *)(gen_frame + 0x2cc)) * (*(float *)(gen_frame + 0x2cc)) +
                 gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) * fVar25) +
                 (fVar25 * (*(float *)(gen_frame + 0x2cc)) - fVar25 * (*(float *)(gen_frame + 0x2cc))) * (*(float *)(gen_frame + 0x2cc));
        fVar29 = (fVar29 + fVar29) + (*(float *)(gen_frame + 0x2b0));
        fVar22 = (fVar30 + fVar30) + (*(float *)(gen_frame + 0x2b4));
        fVar23 = (fVar23 + fVar23) + (*(float *)(gen_frame + 0x2b8));
        (*(float *)(gen_frame + 0x130)) = fVar29;
        (*(float *)(gen_frame + 0x134)) = fVar22;
        (*(float *)(gen_frame + 0x138)) = fVar23;
        (*(float *)(gen_frame + 0x13c)) = (fVar18 + fVar18) + (*(float *)(gen_frame + 0x2bc));
        fVar18 = ((fVar28 * (*(float *)(gen_frame + 0x2c4)) - fVar26 * (*(float *)(gen_frame + 0x2c8))) + fVar27 * (*(float *)(gen_frame + 0x2cc))) +
                 (*(float *)(gen_frame + 0x2c0)) * fVar32;
        fVar19 = ((fVar27 * (*(float *)(gen_frame + 0x2c8)) - fVar28 * (*(float *)(gen_frame + 0x2c0))) + fVar26 * (*(float *)(gen_frame + 0x2cc))) +
                 (*(float *)(gen_frame + 0x2c4)) * fVar32;
        fVar20 = ((fVar26 * (*(float *)(gen_frame + 0x2c0)) - fVar27 * (*(float *)(gen_frame + 0x2c4))) + fVar28 * (*(float *)(gen_frame + 0x2cc))) +
                 (*(float *)(gen_frame + 0x2c8)) * fVar32;
        fVar24 = fVar32 * (*(float *)(gen_frame + 0x2cc)) -
                 ((fVar26 * (*(float *)(gen_frame + 0x2c4)) + fVar27 * (*(float *)(gen_frame + 0x2c0))) + fVar28 * (*(float *)(gen_frame + 0x2c8)));
        (*(float *)(gen_frame + 0x140)) = fVar18;
        (*(float *)(gen_frame + 0x144)) = fVar19;
        (*(float *)(gen_frame + 0x148)) = fVar20;
        (*(float *)(gen_frame + 0x14c)) = fVar24;
        (*(float *)(gen_frame + 0x160)) = fVar29;
        (*(float *)(gen_frame + 0x170)) = fVar18;
        (*(float *)(gen_frame + 0x164)) = fVar22;
        (*(float *)(gen_frame + 0x174)) = fVar19;
        (*(float *)(gen_frame + 0x178)) = fVar20;
        (*(float *)(gen_frame + 0x168)) = fVar23;
        (*(float *)(gen_frame + 0x17c)) = fVar24;
        *((float *)GEN_TOP((*(int *)((int)pvVar5 + 0x74) + 0x290))) = fVar21 * (*(float *)(gen_frame + 0x2d0));
        (*(undefined4 *)(gen_frame + 0x180)) = *(undefined4 *)((int)pvVar5 + 0x30);
        (*(undefined4 *)(gen_frame + 0x184)) = *(undefined4 *)((int)pvVar5 + 0x34);
        (*(undefined4 *)(gen_frame + 0x188)) = *(undefined4 *)((int)pvVar5 + 0x38);
        F_00623060(pvVar5,&(*(float *)(gen_frame + 0x160)));
        this = *(undefined * PTR32 *)((int)pvVar5 + 0x74);
        if (this != (undefined *)0x0) {
          uVar6 = *(undefined4 *)((int)pvVar5 + 0x24);
          uVar1 = *(undefined4 *)((int)pvVar5 + 0x10);
          uVar2 = *(undefined4 *)((int)pvVar5 + 0x14);
          uVar3 = *(undefined4 *)((int)pvVar5 + 0x18);
          (*(undefined4 *)(gen_frame + 0x284)) = uVar6;
          uVar7 = *(undefined4 *)((int)pvVar5 + 0x28);
          (*(undefined4 *)(gen_frame + 0x288)) = uVar7;
          uVar8 = *(undefined4 *)((int)pvVar5 + 0x2c);
          *(undefined4 *)(this + 0x40) = *(undefined4 *)((int)pvVar5 + 0x20);
          *(undefined4 *)(this + 0x44) = uVar6;
          *(undefined4 *)(this + 0x48) = uVar7;
          *(undefined4 *)(this + 0x30) = uVar1;
          *(undefined4 *)(this + 0x34) = uVar2;
          *(undefined4 *)(this + 0x38) = uVar3;
          *(undefined4 *)(this + 0x4c) = uVar8;
          *(undefined4 *)(this + 0x50) = *(undefined4 *)(this + 0x50);
          *(undefined4 *)(this + 0x54) = *(undefined4 *)(this + 0x54);
          *(undefined4 *)(this + 0x58) = *(undefined4 *)(this + 0x58);
          *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
        }
        pfVar17 = pfVar17 + 0x10;
        pvVar4 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1dc)) + -1);
        (*(undefined * PTR32 *)(gen_frame + 0x1dc)) = pvVar4;
      } while (pvVar4 != (undefined *)0x0);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x2ec)) ^ (uint)(uint)(gen_frame + 0x2f0));
  return (uint)this;
}

/* ref: FUN_0069b460 */
byte F_0069b460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x69b460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined2 * puVar1;
  uint uVar2;
  undefined * this_00;
  undefined2 uVar3;
  
  F_006b2f70(this);
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((param_2 != (undefined *)0x0) && (*(int *)((int)this + 0x3c) != 0)) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x90))(param_1);
    if ((char)uVar2 == '\0') {
      *(undefined4 *)((int)this + 0x38) = 1;
      *(int * PTR32 *)((int)this + 0x40) = param_1;
      uVar3 = 0xffff;
    }
    else {
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc0))(param_1)));
      *(undefined4 *)((int)this + 0x38) = 3;
      *(undefined * PTR32 *)((int)this + 0x40) = this_00;
      uVar2 = F_00623160(this_00,"n_root");
      uVar3 = (undefined2)uVar2;
    }
    puVar1 = *(undefined2 * PTR32 *)((int)this + 0x4c);
    *(undefined * PTR32 *)((int)this + 0x44) = param_2;
    *(undefined4 *)((int)this + 0x48) = 1;
    *puVar1 = uVar3;
    puVar1[1] = (undefined2)param_3;
    *(undefined4 *)(puVar1 + 8) = *param_4;
    *(undefined4 *)(puVar1 + 10) = param_4[1];
    *(undefined4 *)(puVar1 + 0xc) = param_4[2];
    *(undefined4 *)(puVar1 + 0x10) = param_4[4];
    *(undefined4 *)(puVar1 + 0x12) = param_4[5];
    *(undefined4 *)(puVar1 + 0x14) = param_4[6];
    *(undefined4 *)(puVar1 + 0x16) = param_4[7];
    *(undefined4 *)(puVar1 + 0x18) = param_4[8];
    *(undefined4 *)(puVar1 + 0x1a) = param_4[9];
    *(undefined4 *)(puVar1 + 0x1c) = param_4[10];
    F_0068bd00(param_2,param_1);
    return 1;
  }
  return 0;
}

/* ref: FUN_0069b540 */
byte F_0069b540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x69b540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined2 * puVar1;
  uint uVar2;
  undefined * this_00;
  undefined2 local_8;
  
  F_006b2f70(this);
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (((param_2 != (undefined *)0x0) && (param_3 != 0)) && (*(int *)((int)this + 0x3c) != 0)) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x90))(param_1);
    if ((char)uVar2 == '\0') {
      *(undefined4 *)((int)this + 0x38) = 2;
      *(int * PTR32 *)((int)this + 0x40) = param_1;
      local_8 = 0xffff;
    }
    else {
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc0))(param_1)));
      *(undefined4 *)((int)this + 0x38) = 4;
      *(undefined * PTR32 *)((int)this + 0x40) = this_00;
      uVar2 = F_00623160(this_00,"n_root");
      local_8 = (undefined2)uVar2;
    }
    puVar1 = *(undefined2 * PTR32 *)((int)this + 0x4c);
    *(undefined * PTR32 *)((int)this + 0x44) = param_2;
    *(undefined4 *)((int)this + 0x48) = 1;
    *puVar1 = local_8;
    uVar2 = F_00623160(param_2,param_3);
    puVar1[1] = (short)uVar2;
    if ((short)uVar2 != -1) {
      F_006001e0(puVar1 + 8,param_4);
      if (*(undefined * PTR32 *)((int)param_2 + 0x74) != (undefined *)0x0) {
        F_0068bd00(*(undefined * PTR32 *)((int)param_2 + 0x74),param_1);
      }
      return 1;
    }
    F_006b2f70(this);
  }
  return 0;
}

/* ref: FUN_0069b650 */
byte F_0069b650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x69b650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = param_3;
  F_006b2f70(this);
  if ((param_1 == (undefined *)0x0) || (param_2 == (undefined *)0x0)) {
    return 0;
  }
  if ((param_3 != 0) && (param_4 <= *(uint *)((int)this + 0x3c))) {
    *(undefined4 *)((int)this + 0x38) = 3;
    *(undefined * PTR32 *)((int)this + 0x40) = param_1;
    *(undefined * PTR32 *)((int)this + 0x44) = param_2;
    *(uint *)((int)this + 0x48) = param_4;
    param_3 = 0;
    if (param_4 != 0) {
      this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) + 0x10)));
      iVar2 = iVar2 + 0x50;
      do {
        uVar1 = F_00623160(param_1,*(undefined4 *)(iVar2 + -0x50));
        *(short *)((int)this_00 + -0x10) = (short)uVar1;
        if ((short)uVar1 == -1) {
          F_006b2f70(this);
          return 0;
        }
        *(undefined2 *)((int)this_00 + -0xe) = *(undefined2 *)(iVar2 + -0x4c);
        F_006001e0(this_00,iVar2);
        param_3 = param_3 + 1;
        iVar2 = iVar2 + 0x80;
        this_00 = (undefined *)((int)this_00 + 0x40);
      } while (param_3 < param_4);
    }
    F_0068bd00(param_2,*(undefined4 *)((int)param_1 + 0x74));
    return 1;
  }
  return 0;
}

/* ref: FUN_0069b720 */
byte F_0069b720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x69b720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = param_3;
  F_006b2f70(this);
  if ((param_1 == (undefined *)0x0) || (param_2 == (undefined *)0x0)) {
    return 0;
  }
  if ((param_3 == 0) || (*(uint *)((int)this + 0x3c) < param_4)) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x38) = 4;
  *(undefined * PTR32 *)((int)this + 0x40) = param_1;
  *(undefined * PTR32 *)((int)this + 0x44) = param_2;
  *(uint *)((int)this + 0x48) = param_4;
  param_3 = 0;
  if (param_4 != 0) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) + 0x10)));
    iVar2 = iVar2 + 0x50;
    do {
      uVar1 = F_00623160(param_1,*(undefined4 *)(iVar2 + -0x50));
      *(short *)((int)this_00 + -0x10) = (short)uVar1;
      if ((short)uVar1 == -1) {
LAB_0069b7ec: ;
        F_006b2f70(this);
        return 0;
      }
      uVar1 = F_00623160(param_2,*(undefined4 *)(iVar2 + -0x4c));
      *(short *)((int)this_00 + -0xe) = (short)uVar1;
      if ((short)uVar1 == -1) goto LAB_0069b7ec;
      F_006001e0(this_00,iVar2);
      param_3 = param_3 + 1;
      iVar2 = iVar2 + 0x80;
      this_00 = (undefined *)((int)this_00 + 0x40);
    } while (param_3 < param_4);
  }
  if (*(undefined * PTR32 *)((int)param_2 + 0x74) != (undefined *)0x0) {
    F_0068bd00(*(undefined * PTR32 *)((int)param_2 + 0x74),*(undefined4 *)((int)param_1 + 0x74));
  }
  return 1;
}

/* ref: FUN_0069b800 */
uint F_0069b800(unsigned int gen_a0)
{
  GEN_ENTER(0x69b800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  
  piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x88)));
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = *piVar3;
  UNLOCK();
  if (iVar1 == 2) {
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x8c)));
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3;
    UNLOCK();
    if (iVar1 < 8) {
      uVar4 = F_00503480(*(undefined * PTR32 *)((int)this + 0xc),*(undefined4 *)((int)this + 0x10));
      *(uint *)((int)this + 0x14) = uVar4;
      if (uVar4 == 0xffffffff) {
        *(undefined4 *)((int)this + 0x10) = 0;
        *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffffd;
        return 0xffffffff;
      }
      bVar2 = F_006b21f0(*(undefined * PTR32 *)((int)this + 0xc),uVar4);
      piVar3 = ((int *)GEN_TOP((*(uint *)((int)this + 0x18) & 0xfffffffd)));
      *(uint *)((int)this + 0x18) =
           (uint)((bool)bVar2 != (*(int *)((int)this + 0x1c) == 1)) * 2 | (uint)piVar3;
    }
  }
  return (uint)piVar3;
}

/* ref: FUN_0069bc80 */
uint F_0069bc80(unsigned int gen_a0)
{
  GEN_ENTER(0x69bc80u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10b322c));
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x10b2afc));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  *(undefined1 *)(in_ecx + 5) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0069bca0 */
uint F_0069bca0(unsigned int gen_a0)
{
  GEN_ENTER(0x69bca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)((int)this + 8);
  iVar1 = *(int *)((int)this + 0xc);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      iVar2 = *(int *)(iVar1 + uVar4 * 4);
      if (iVar2 != 0) {
        F_0050c620(iVar2,0,0);
        *(undefined4 *)(iVar1 + uVar4 * 4) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffffc;
  return uVar3;
}

/* ref: FUN_0069bd10 */
byte F_0069bd10(unsigned int gen_a0)
{
  GEN_ENTER(0x69bd10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x88);
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2;
    UNLOCK();
    if (iVar1 == 2) {
      piVar2 = (int *)(param_1 + 0x8c);
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2;
      UNLOCK();
      return iVar1 < 8;
    }
  }
  return 0;
}

/* ref: FUN_0069bd50 */
byte F_0069bd50(unsigned int gen_a0)
{
  GEN_ENTER(0x69bd50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1 == 0) {
    return 1;
  }
  piVar2 = (int *)(param_1 + 0x88);
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  if (iVar1 != 2) {
    return 0;
  }
  piVar2 = (int *)(param_1 + 0x8c);
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  return 7 < iVar1;
}

/* ref: FUN_0069bd90 */
byte F_0069bd90(unsigned int gen_a0)
{
  GEN_ENTER(0x69bd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 3;
  bVar4 = F_006b4810((undefined *)((int)this + 0x68),*(undefined4 *)(REFG(int, 0x1370b90) + 0x24));
  if (bVar4 == 0) {
    return 0;
  }
  puVar1 = (uint *)((int)this + 0x78);
  LOCK();
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  if (*(uint *)((int)this + 0x74) <= uVar3) {
    *(undefined4 *)((int)this + 0xe0) = 0;
    return 0;
  }
  iVar2 = *(int *)((int)this + 0x70) + uVar3 * 0x14;
  *(int *)((int)this + 0xe0) = iVar2;
  return iVar2 != 0;
}

/* ref: Client::Graphics::Scene::World::vf1 */
uint F_0069bdf0(unsigned int gen_a0)
{
  GEN_ENTER(0x69bdf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_006b4970(this + 0x68);
  uVar1 = F_006905b0((undefined *)this);
  return uVar1;
}

/* ref: FUN_0069be10 */
byte F_0069be10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x69be10u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  uint uVar1;
  
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 3;
  uVar1 = F_00638150();
  *(uint *)(param_1 + 0xc0) = uVar1;
  if (uVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = param_2[1];
  *(undefined4 *)(param_1 + 0x38) = param_2[2];
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 2;
  *(undefined4 *)(param_1 + 0x60) = *param_3;
  *(undefined4 *)(param_1 + 100) = param_3[1];
  *(undefined4 *)(param_1 + 0x68) = param_3[2];
  *(undefined4 *)(param_1 + 0x70) = *param_4;
  *(undefined4 *)(param_1 + 0x74) = param_4[1];
  *(undefined4 *)(param_1 + 0x78) = param_4[2];
  *((float *)GEN_TOP((*(int *)(param_1 + 0xc0) + 0xac))) = param_5;
  *((float *)GEN_TOP((*(int *)(param_1 + 0xc0) + 0xb0))) = param_6;
  *((float *)GEN_TOP((*(int *)(param_1 + 0xc0) + 0xa4))) = param_7;
  if ((*(uint *)(param_1 + 200) >> 1 & 1) == 0) {
    *((float *)GEN_TOP((*(int *)(param_1 + 0xc0) + 0xa8))) = param_8;
  }
  return 1;
}

/* ref: Client::Graphics::Scene::Camera::vf4 */
uint F_0069c2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x69c2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float in_XMM3_Da = 0;
  float in_XMM5_Da = 0;
  float in_XMM6_Da = 0;
  
  F_00690f90(this);
  if ((*(uint *)(this + 200) >> 1 & 1) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0xc0) + 0xa8))) = *(undefined4 *)(REFG(int, 0x1370b90) + 0x98);
  }
  uVar1 = F_00621fc0(*(undefined4 *)(this + 0xc0),in_XMM3_Da,in_XMM5_Da,in_XMM6_Da,this + 0x80);
  return uVar1;
}

/* ref: FUN_0069c300 */
uint F_0069c300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x69c300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  int * piVar2;
  undefined4 uVar3;
  uint in_EAX = 0;
  uint uVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  
  if (*(int *)((int)this + param_1 * 4 + 0x34) == 0) {
    return in_EAX;
  }
  iVar5 = *((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x30) * 4 + 0x34)));
  (*(char *)(gen_frame + 0x1f)) = 0;
  bVar6 = iVar5 != 0;
  if (bVar6) {
    (*(float *)(gen_frame + 0x0)) = *(float *)(iVar5 + 0x60);
    (*(float *)(gen_frame + 0x4)) = *(float *)(iVar5 + 100);
    (*(char *)(gen_frame + 0x1f)) = 1;
    (*(float *)(gen_frame + 0x8)) = *(float *)(iVar5 + 0x68);
  }
  *(int *)((int)this + 0x30) = param_1;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + param_1 * 4 + 0x34) + 0xc0)));
  (*(int *)(gen_frame + 0x18)) = REFG(undefined4, 0x137127c) + 0x66dc;
  (*(char *)(gen_frame + 0x1f)) = bVar6;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  piVar2 = *(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 0x18);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  *(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 0x18) = piVar1;
  uVar4 = REFG(undefined4, 0x137127c);
  *(uint *)(REFG(undefined4, 0x137127c) + 0x6458) = *(uint *)(REFG(undefined4, 0x137127c) + 0x6458) | 1;
  if ((*(char *)(gen_frame + 0x1f)) == '\0') {
    return uVar4;
  }
  uVar4 = param_1 - 2;
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    uVar4 = F_006911a0(*(undefined * PTR32 *)((int)this + 0x58),&(*(float *)(gen_frame + 0x0)));
    uVar3 = REFG(float, 0x1087f04);
    iVar5 = *(int *)((int)this + 0x58);
    *(undefined4 *)(iVar5 + 0x70) = 0;
    *(undefined4 *)(iVar5 + 0x74) = uVar3;
    *(undefined4 *)(iVar5 + 0x78) = 0;
    return uVar4;
  case 1: ;
    uVar4 = F_006911a0(*(undefined * PTR32 *)((int)this + 0x5c),&(*(float *)(gen_frame + 0x0)));
    fVar7 = (float10)(*(float *)(gen_frame + 0x0)) + (float10)*(double *)&REFG(undefined, 0x10947f0);
    iVar5 = *(int *)((int)this + 0x5c);
    break;
  case 2: ;
    uVar4 = F_006911a0(*(undefined * PTR32 *)((int)this + 0x60),&(*(float *)(gen_frame + 0x0)));
    fVar7 = (float10)(*(float *)(gen_frame + 0x0)) - (float10)*(double *)&REFG(undefined, 0x10947f0);
    iVar5 = *(int *)((int)this + 0x60);
    break;
  case 3: ;
    uVar4 = F_006911a0(*(undefined * PTR32 *)((int)this + 100),&(*(float *)(gen_frame + 0x0)));
    fVar7 = (float10)(*(float *)(gen_frame + 0x4)) + (float10)*(double *)&REFG(undefined, 0x10947f0);
    iVar5 = *(int *)((int)this + 100);
    goto LAB_0069c473;
  case 4: ;
    uVar4 = F_006911a0(*(undefined * PTR32 *)((int)this + 0x68),&(*(float *)(gen_frame + 0x0)));
    fVar7 = (float10)(*(float *)(gen_frame + 0x4)) - (float10)*(double *)&REFG(undefined, 0x10947f0);
    iVar5 = *(int *)((int)this + 0x68);
LAB_0069c473: ;
    *(float *)(iVar5 + 0x30) = (*(float *)(gen_frame + 0x0));
    *(float *)(iVar5 + 0x34) = (float)fVar7;
    goto LAB_0069c428;
  case 5: ;
    uVar4 = F_006911a0(*(undefined * PTR32 *)((int)this + 0x6c),&(*(float *)(gen_frame + 0x0)));
    fVar7 = (float10)(*(float *)(gen_frame + 0x8)) + (float10)*(double *)&REFG(undefined, 0x10947f0);
    iVar5 = *(int *)((int)this + 0x6c);
    goto LAB_0069c4d4;
  case 6: ;
    uVar4 = F_006911a0(*(undefined * PTR32 *)((int)this + 0x70),&(*(float *)(gen_frame + 0x0)));
    fVar7 = (float10)(*(float *)(gen_frame + 0x8)) - (float10)*(double *)&REFG(undefined, 0x10947f0);
    iVar5 = *(int *)((int)this + 0x70);
LAB_0069c4d4: ;
    *(float *)(iVar5 + 0x30) = (*(float *)(gen_frame + 0x0));
    *(float *)(iVar5 + 0x38) = (float)fVar7;
    *(float *)(iVar5 + 0x34) = (*(float *)(gen_frame + 0x4));
    *(uint *)(iVar5 + 0x24) = *(uint *)(iVar5 + 0x24) | 2;
switchD_0069c3c2_default: ;
    return uVar4;
  default: ;
    goto switchD_0069c3c2_default;
  }
  *(float *)(iVar5 + 0x30) = (float)fVar7;
  *(float *)(iVar5 + 0x34) = (*(float *)(gen_frame + 0x4));
LAB_0069c428: ;
  *(float *)(iVar5 + 0x38) = (*(float *)(gen_frame + 0x8));
  *(uint *)(iVar5 + 0x24) = *(uint *)(iVar5 + 0x24) | 2;
  return uVar4;
}

/* ref: FUN_0069c618 */
byte F_0069c618(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x69c618u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_ebx = (undefined4)gen_a0;
  int in_esi = (int)gen_a1;
  int in_ebp = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined4 * puVar9;
  
  uVar2 = REFG(float, 0x10a509c);
  fVar6 = REFG(float, 0x1096cd4);
  *(undefined4 *)(in_ebp + -0x30) = REFG(float, 0x1375ac0);
  fVar4 = REFG(float, 0x10946bc);
  fVar3 = REFG(float, 0x108b284);
  *(undefined4 *)(in_ebp + -0x2c) = REFG(float, 0x1375ac4);
  uVar7 = REFG(float, 0x1375ac8);
  fVar5 = REFG(float, 0x1094884);
  *(undefined4 *)(in_ebp + -0x20) = uVar2;
  *(undefined4 *)(in_ebp + -0x28) = uVar7;
  uVar2 = REFG(float, 0x1087f04);
  *(undefined4 *)(in_ebp + -0x1c) = 0;
  *(undefined4 *)(in_ebp + -0x18) = 0;
  *(undefined4 *)(in_ebp + -0x40) = 0;
  *(undefined4 *)(in_ebp + -0x3c) = uVar2;
  *(undefined4 *)(in_ebp + -0x38) = 0;
  bVar8 = F_0069be10(in_esi,in_ebp + -0x20,in_ebp + -0x30,in_ebp + -0x40,fVar5,fVar4,fVar3,fVar6);
  if (bVar8 != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0xc0) + 0xb8))) = 1;
    iVar1 = *(int *)(in_esi + 0xc0);
    if (*(char *)(iVar1 + 0xb8) != '\0') {
      *(float *)(in_ebp + -0x20) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x30) - (float10)*(float *)(in_esi + 0x60))));
      *(float *)(in_ebp + -0x1c) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x34) - (float10)*(float *)(in_esi + 100))));
      *(float *)(in_ebp + -0x18) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x38) - (float10)*(float *)(in_esi + 0x68))));
      *(float *)(in_ebp + -4) =
           ((float)GEN_TOF(((float10)*(float *)(in_ebp + -0x18) * (float10)*(float *)(in_ebp + -0x18) +
                  ((float10)*(float *)(in_ebp + -0x20) * (float10)*(float *)(in_ebp + -0x20) +
                  (float10)*(float *)(in_ebp + -0x1c) * (float10)*(float *)(in_ebp + -0x1c)))));
      *(float *)(in_ebp + -4) = ((float)GEN_TOF(SQRT((float10)*(float *)(in_ebp + -4))));
      *(float *)(in_ebp + -8) = REFG(float, 0x1094884);
      puVar9 = (undefined4 *)(in_ebp + -4);
      *(float *)(in_ebp + -4) =
           ((float)GEN_TOF(((float10)*(float *)(in_ebp + -4) + (float10)*(float *)(in_ebp + -4))));
      if (!(REFG(double, 0x1094800) < (double)*(float *)(in_ebp + -4))) {
        puVar9 = (undefined4 *)(in_ebp + -8);
      }
      *(undefined4 *)(iVar1 + 0xb4) = *puVar9;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_0069c6c7 */
byte F_0069c6c7(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x69c6c7u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_ebx = (undefined4)gen_a0;
  int in_esi = (int)gen_a1;
  int in_ebp = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined4 * puVar9;
  
  uVar2 = REFG(float, 0x10ac048);
  fVar6 = REFG(float, 0x1096cd4);
  *(undefined4 *)(in_ebp + -0x30) = REFG(float, 0x1375ac0);
  fVar4 = REFG(float, 0x10946bc);
  fVar3 = REFG(float, 0x108b284);
  *(undefined4 *)(in_ebp + -0x2c) = REFG(float, 0x1375ac4);
  uVar7 = REFG(float, 0x1375ac8);
  fVar5 = REFG(float, 0x1094884);
  *(undefined4 *)(in_ebp + -0x20) = uVar2;
  *(undefined4 *)(in_ebp + -0x28) = uVar7;
  uVar2 = REFG(float, 0x1087f04);
  *(undefined4 *)(in_ebp + -0x1c) = 0;
  *(undefined4 *)(in_ebp + -0x18) = 0;
  *(undefined4 *)(in_ebp + -0x40) = 0;
  *(undefined4 *)(in_ebp + -0x3c) = uVar2;
  *(undefined4 *)(in_ebp + -0x38) = 0;
  bVar8 = F_0069be10(in_esi,in_ebp + -0x20,in_ebp + -0x30,in_ebp + -0x40,fVar5,fVar4,fVar3,fVar6);
  if (bVar8 != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0xc0) + 0xb8))) = 1;
    iVar1 = *(int *)(in_esi + 0xc0);
    if (*(char *)(iVar1 + 0xb8) != '\0') {
      *(float *)(in_ebp + -0x20) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x30) - (float10)*(float *)(in_esi + 0x60))));
      *(float *)(in_ebp + -0x1c) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x34) - (float10)*(float *)(in_esi + 100))));
      *(float *)(in_ebp + -0x18) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x38) - (float10)*(float *)(in_esi + 0x68))));
      *(float *)(in_ebp + -4) =
           ((float)GEN_TOF(((float10)*(float *)(in_ebp + -0x18) * (float10)*(float *)(in_ebp + -0x18) +
                  ((float10)*(float *)(in_ebp + -0x20) * (float10)*(float *)(in_ebp + -0x20) +
                  (float10)*(float *)(in_ebp + -0x1c) * (float10)*(float *)(in_ebp + -0x1c)))));
      *(float *)(in_ebp + -4) = ((float)GEN_TOF(SQRT((float10)*(float *)(in_ebp + -4))));
      *(float *)(in_ebp + -8) = REFG(float, 0x1094884);
      puVar9 = (undefined4 *)(in_ebp + -4);
      *(float *)(in_ebp + -4) =
           ((float)GEN_TOF(((float10)*(float *)(in_ebp + -4) + (float10)*(float *)(in_ebp + -4))));
      if (!(REFG(double, 0x1094800) < (double)*(float *)(in_ebp + -4))) {
        puVar9 = (undefined4 *)(in_ebp + -8);
      }
      *(undefined4 *)(iVar1 + 0xb4) = *puVar9;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_0069c776 */
byte F_0069c776(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x69c776u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_ebx = (undefined4)gen_a0;
  int in_esi = (int)gen_a1;
  int in_ebp = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined4 * puVar8;
  
  *(undefined4 *)(in_ebp + -0x1c) = REFG(float, 0x10a509c);
  *(undefined4 *)(in_ebp + -0x30) = REFG(float, 0x1375ac0);
  *(undefined4 *)(in_ebp + -0x2c) = REFG(float, 0x1375ac4);
  uVar6 = REFG(float, 0x1375ac8);
  *(undefined4 *)(in_ebp + -0x20) = 0;
  *(undefined4 *)(in_ebp + -0x18) = 0;
  *(undefined4 *)(in_ebp + -0x40) = 0;
  *(undefined4 *)(in_ebp + -0x3c) = 0;
  uVar3 = REFG(float, 0x1090708);
  *(undefined4 *)(in_ebp + -0x28) = uVar6;
  fVar5 = REFG(float, 0x1096cd4);
  fVar4 = REFG(float, 0x10946bc);
  fVar2 = REFG(float, 0x108b284);
  *(undefined4 *)(in_ebp + -0x38) = uVar3;
  bVar7 = F_0069be10(in_esi,in_ebp + -0x20,in_ebp + -0x30,in_ebp + -0x40,REFG(float, 0x1094884),fVar4,fVar2,
                       fVar5);
  if (bVar7 != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0xc0) + 0xb8))) = 1;
    iVar1 = *(int *)(in_esi + 0xc0);
    if (*(char *)(iVar1 + 0xb8) != '\0') {
      *(float *)(in_ebp + -0x20) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x30) - (float10)*(float *)(in_esi + 0x60))));
      *(float *)(in_ebp + -0x1c) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x34) - (float10)*(float *)(in_esi + 100))));
      *(float *)(in_ebp + -0x18) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x38) - (float10)*(float *)(in_esi + 0x68))));
      *(float *)(in_ebp + -4) =
           ((float)GEN_TOF(((float10)*(float *)(in_ebp + -0x18) * (float10)*(float *)(in_ebp + -0x18) +
                  ((float10)*(float *)(in_ebp + -0x20) * (float10)*(float *)(in_ebp + -0x20) +
                  (float10)*(float *)(in_ebp + -0x1c) * (float10)*(float *)(in_ebp + -0x1c)))));
      *(float *)(in_ebp + -4) = ((float)GEN_TOF(SQRT((float10)*(float *)(in_ebp + -4))));
      *(float *)(in_ebp + -8) = REFG(float, 0x1094884);
      puVar8 = (undefined4 *)(in_ebp + -4);
      *(float *)(in_ebp + -4) =
           ((float)GEN_TOF(((float10)*(float *)(in_ebp + -4) + (float10)*(float *)(in_ebp + -4))));
      if (!(REFG(double, 0x1094800) < (double)*(float *)(in_ebp + -4))) {
        puVar8 = (undefined4 *)(in_ebp + -8);
      }
      *(undefined4 *)(iVar1 + 0xb4) = *puVar8;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_0069c7ce */
byte F_0069c7ce(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x69c7ceu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_ebx = (undefined4)gen_a0;
  int in_esi = (int)gen_a1;
  int in_ebp = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined4 * puVar9;
  
  fVar6 = REFG(float, 0x1096cd4);
  *(undefined4 *)(in_ebp + -0x1c) = REFG(float, 0x10ac048);
  fVar4 = REFG(float, 0x10946bc);
  fVar2 = REFG(float, 0x108b284);
  *(undefined4 *)(in_ebp + -0x30) = REFG(float, 0x1375ac0);
  uVar3 = REFG(float, 0x1375ac4);
  fVar5 = REFG(float, 0x1094884);
  *(undefined4 *)(in_ebp + -0x20) = 0;
  *(undefined4 *)(in_ebp + -0x18) = 0;
  *(undefined4 *)(in_ebp + -0x2c) = uVar3;
  uVar7 = REFG(float, 0x1375ac8);
  *(undefined4 *)(in_ebp + -0x40) = 0;
  *(undefined4 *)(in_ebp + -0x3c) = 0;
  uVar3 = REFG(float, 0x1090708);
  *(undefined4 *)(in_ebp + -0x28) = uVar7;
  *(undefined4 *)(in_ebp + -0x38) = uVar3;
  bVar8 = F_0069be10(in_esi,in_ebp + -0x20,in_ebp + -0x30,in_ebp + -0x40,fVar5,fVar4,fVar2,fVar6);
  if (bVar8 == 0) {
    return 0;
  }
  *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0xc0) + 0xb8))) = 1;
  iVar1 = *(int *)(in_esi + 0xc0);
  if (*(char *)(iVar1 + 0xb8) != '\0') {
    *(float *)(in_ebp + -0x20) =
         ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x30) - (float10)*(float *)(in_esi + 0x60))));
    *(float *)(in_ebp + -0x1c) =
         ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x34) - (float10)*(float *)(in_esi + 100))));
    *(float *)(in_ebp + -0x18) =
         ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x38) - (float10)*(float *)(in_esi + 0x68))));
    *(float *)(in_ebp + -4) =
         ((float)GEN_TOF(((float10)*(float *)(in_ebp + -0x18) * (float10)*(float *)(in_ebp + -0x18) +
                ((float10)*(float *)(in_ebp + -0x20) * (float10)*(float *)(in_ebp + -0x20) +
                (float10)*(float *)(in_ebp + -0x1c) * (float10)*(float *)(in_ebp + -0x1c)))));
    *(float *)(in_ebp + -4) = ((float)GEN_TOF(SQRT((float10)*(float *)(in_ebp + -4))));
    *(float *)(in_ebp + -8) = REFG(float, 0x1094884);
    puVar9 = (undefined4 *)(in_ebp + -4);
    *(float *)(in_ebp + -4) =
         ((float)GEN_TOF(((float10)*(float *)(in_ebp + -4) + (float10)*(float *)(in_ebp + -4))));
    if (!(REFG(double, 0x1094800) < (double)*(float *)(in_ebp + -4))) {
      puVar9 = (undefined4 *)(in_ebp + -8);
    }
    *(undefined4 *)(iVar1 + 0xb4) = *puVar9;
  }
  return 1;
}

/* ref: FUN_0069c876 */
byte F_0069c876(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x69c876u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_ebx = (undefined4)gen_a0;
  int in_esi = (int)gen_a1;
  int in_ebp = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  undefined4 * puVar8;
  
  fVar6 = REFG(float, 0x1096cd4);
  *(undefined4 *)(in_ebp + -0x18) = REFG(float, 0x10a509c);
  fVar3 = REFG(float, 0x108b284);
  *(undefined4 *)(in_ebp + -0x30) = REFG(float, 0x1375ac0);
  fVar5 = REFG(float, 0x1094884);
  fVar4 = REFG(float, 0x10946bc);
  *(undefined4 *)(in_ebp + -0x2c) = REFG(float, 0x1375ac4);
  *(undefined4 *)(in_ebp + -0x28) = REFG(float, 0x1375ac8);
  uVar2 = REFG(float, 0x1087f04);
  *(undefined4 *)(in_ebp + -0x20) = 0;
  *(undefined4 *)(in_ebp + -0x1c) = 0;
  *(undefined4 *)(in_ebp + -0x40) = 0;
  *(undefined4 *)(in_ebp + -0x3c) = uVar2;
  *(undefined4 *)(in_ebp + -0x38) = 0;
  bVar7 = F_0069be10(in_esi,in_ebp + -0x20,in_ebp + -0x30,in_ebp + -0x40,fVar5,fVar4,fVar3,fVar6);
  if (bVar7 == 0) {
    return 0;
  }
  *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0xc0) + 0xb8))) = 1;
  iVar1 = *(int *)(in_esi + 0xc0);
  if (*(char *)(iVar1 + 0xb8) != '\0') {
    *(float *)(in_ebp + -0x20) =
         ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x30) - (float10)*(float *)(in_esi + 0x60))));
    *(float *)(in_ebp + -0x1c) =
         ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x34) - (float10)*(float *)(in_esi + 100))));
    *(float *)(in_ebp + -0x18) =
         ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x38) - (float10)*(float *)(in_esi + 0x68))));
    *(float *)(in_ebp + -4) =
         ((float)GEN_TOF(((float10)*(float *)(in_ebp + -0x18) * (float10)*(float *)(in_ebp + -0x18) +
                ((float10)*(float *)(in_ebp + -0x20) * (float10)*(float *)(in_ebp + -0x20) +
                (float10)*(float *)(in_ebp + -0x1c) * (float10)*(float *)(in_ebp + -0x1c)))));
    *(float *)(in_ebp + -4) = ((float)GEN_TOF(SQRT((float10)*(float *)(in_ebp + -4))));
    *(float *)(in_ebp + -8) = REFG(float, 0x1094884);
    puVar8 = (undefined4 *)(in_ebp + -4);
    *(float *)(in_ebp + -4) =
         ((float)GEN_TOF(((float10)*(float *)(in_ebp + -4) + (float10)*(float *)(in_ebp + -4))));
    if (!(REFG(double, 0x1094800) < (double)*(float *)(in_ebp + -4))) {
      puVar8 = (undefined4 *)(in_ebp + -8);
    }
    *(undefined4 *)(iVar1 + 0xb4) = *puVar8;
  }
  return 1;
}

/* ref: FUN_0069c91e */
byte F_0069c91e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x69c91eu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_ebx = (undefined4)gen_a0;
  int in_esi = (int)gen_a1;
  int in_ebp = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  undefined4 * puVar7;
  
  *(undefined4 *)(in_ebp + -0x18) = REFG(float, 0x10ac048);
  *(undefined4 *)(in_ebp + -0x30) = REFG(float, 0x1375ac0);
  *(undefined4 *)(in_ebp + -0x2c) = REFG(float, 0x1375ac4);
  *(undefined4 *)(in_ebp + -0x28) = REFG(float, 0x1375ac8);
  uVar2 = REFG(float, 0x1087f04);
  *(undefined4 *)(in_ebp + -0x20) = 0;
  *(undefined4 *)(in_ebp + -0x1c) = 0;
  *(undefined4 *)(in_ebp + -0x40) = 0;
  *(undefined4 *)(in_ebp + -0x3c) = uVar2;
  fVar5 = REFG(float, 0x1096cd4);
  fVar4 = REFG(float, 0x10946bc);
  fVar3 = REFG(float, 0x108b284);
  *(undefined4 *)(in_ebp + -0x38) = 0;
  bVar6 = F_0069be10(in_esi,in_ebp + -0x20,in_ebp + -0x30,in_ebp + -0x40,REFG(float, 0x1094884),fVar4,fVar3,
                       fVar5);
  if (bVar6 != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0xc0) + 0xb8))) = 1;
    iVar1 = *(int *)(in_esi + 0xc0);
    if (*(char *)(iVar1 + 0xb8) != '\0') {
      *(float *)(in_ebp + -0x20) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x30) - (float10)*(float *)(in_esi + 0x60))));
      *(float *)(in_ebp + -0x1c) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x34) - (float10)*(float *)(in_esi + 100))));
      *(float *)(in_ebp + -0x18) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x38) - (float10)*(float *)(in_esi + 0x68))));
      *(float *)(in_ebp + -4) =
           ((float)GEN_TOF(((float10)*(float *)(in_ebp + -0x18) * (float10)*(float *)(in_ebp + -0x18) +
                  ((float10)*(float *)(in_ebp + -0x20) * (float10)*(float *)(in_ebp + -0x20) +
                  (float10)*(float *)(in_ebp + -0x1c) * (float10)*(float *)(in_ebp + -0x1c)))));
      *(float *)(in_ebp + -4) = ((float)GEN_TOF(SQRT((float10)*(float *)(in_ebp + -4))));
      *(float *)(in_ebp + -8) = REFG(float, 0x1094884);
      puVar7 = (undefined4 *)(in_ebp + -4);
      *(float *)(in_ebp + -4) =
           ((float)GEN_TOF(((float10)*(float *)(in_ebp + -4) + (float10)*(float *)(in_ebp + -4))));
      if (!(REFG(double, 0x1094800) < (double)*(float *)(in_ebp + -4))) {
        puVar7 = (undefined4 *)(in_ebp + -8);
      }
      *(undefined4 *)(iVar1 + 0xb4) = *puVar7;
    }
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::CameraMaya::vf4 */
uint F_0069ca80(unsigned int gen_a0)
{
  GEN_ENTER(0x69ca80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float in_XMM3_Da = 0;
  float in_XMM5_Da = 0;
  float in_XMM6_Da = 0;
  
  uVar3 = REFG(float, 0x1094724);
  uVar4 = REFG(float, 0x1094884);
  if (*(int *)(REFG(int, 0x1371298) + 0x34) != 0) {
    iVar1 = *((int *)GEN_TOP((*(int *)(REFG(int, 0x1371298) + 0x34) + 0xc0)));
    uVar4 = *(undefined4 *)(iVar1 + 0xac);
    uVar3 = *(undefined4 *)(iVar1 + 0xb0);
  }
  iVar1 = *(int *)(this + 0xc0);
  *(undefined4 *)(iVar1 + 0xac) = uVar4;
  *(undefined4 *)(iVar1 + 0xb0) = uVar3;
  F_00690f90(this);
  if ((*(uint *)(this + 200) >> 1 & 1) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0xc0) + 0xa8))) = *(undefined4 *)(REFG(int, 0x1370b90) + 0x98);
  }
  uVar2 = F_00621fc0(*(undefined4 *)(this + 0xc0),in_XMM3_Da,in_XMM5_Da,in_XMM6_Da,this + 0x80);
  return uVar2;
}

/* ref: FUN_0069d250 */
uint F_0069d250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x69d250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  uint uVar1;
  uint * _Dst;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  if (*(int *)((int)this + 0x80) != 0) {
    F_0068ce50((int)this + 0x80,(int)this + 0x84);
  }
  (*(uint *)(gen_frame + 0x34)) = 0;
  switch((unsigned int)(uintptr_t)(param_1 - 1U)) {
  default: ;
    iVar3 = 100;
    break;
  case 1: ;
    iVar3 = 300;
    break;
  case 2: ;
  case 3: ;
    iVar3 = 500;
    break;
  case 4: ;
  case 5: ;
    iVar3 = 0x44c;
    break;
  case 6: ;
  case 7: ;
    iVar3 = 700;
    break;
  case 8: ;
  case 9: ;
    iVar3 = 900;
  }
  iVar3 = iVar3 + 1 + param_2 * 100;
  if ((param_1 == 7) || (param_1 == 8)) {
    (*(uint *)(gen_frame + 0x34)) = 0x10;
  }
  uVar1 = F_00b89a30(param_1,param_2,1);
  (*(uint *)(gen_frame + 0x34)) = uVar1 * 3 + (*(uint *)(gen_frame + 0x34));
  uVar1 = F_00b89a60(param_1,param_2,1);
  (*(uint *)(gen_frame + 0x34)) = uVar1 * 3 + (*(uint *)(gen_frame + 0x34));
  uVar1 = F_00b89a00(param_1,param_2,1);
  uVar1 = (*(uint *)(gen_frame + 0x34)) + 0x1a + uVar1 * 4;
  (*(uint *)(gen_frame + 0x34)) = uVar1;
  _Dst = ((uint *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),uVar1 * 4,4)));
  F_00c48350(_Dst,0,(*(uint *)(gen_frame + 0x34)) * 4);
  *(uint * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x80) = _Dst;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x84) = (*(uint *)(gen_frame + 0x34));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5000;
  (*(undefined4 *)(gen_frame + 0x20)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 6;
  (*(undefined2 *)(gen_frame + 0x25)) = 0;
  if ((param_1 == 7) || (param_1 == 8)) {
    (*(uint *)(gen_frame + 0x34)) = 0;
    do {
      uVar2 = (*(uint *)(gen_frame + 0x34)) + 1 & 0xffff;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,"chara/human/c%04d/obj/tail/t%04d/model/c%04dt%04d_til.mdl",iVar3,
                 uVar2,iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      *_Dst = uVar1;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,"chara/human/c%04d/obj/tail/t%04d/material/mt_c%04dt%04d_a.mtrl",
                 iVar3,uVar2,iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      _Dst[1] = uVar1;
      uVar1 = (*(uint *)(gen_frame + 0x34)) + 1;
      _Dst = _Dst + 2;
      (*(uint *)(gen_frame + 0x34)) = uVar1;
    } while (uVar1 < 8);
  }
  uVar1 = F_00b89a30(param_1,param_2,1);
  (*(uint *)(gen_frame + 0x30)) = uVar1;
  (*(uint *)(gen_frame + 0x34)) = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = (*(uint *)(gen_frame + 0x34)) + 1 & 0xffff;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,"chara/human/c%04d/obj/hair/h%04d/model/c%04dh%04d_hir.mdl",iVar3,
                 uVar2,iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      *_Dst = uVar1;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,
                 "chara/human/c%04d/obj/hair/h%04d/material/v0001/mt_c%04dh%04d_acc_b.mtrl",iVar3,
                 uVar2,iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      _Dst[1] = uVar1;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,
                 "chara/human/c%04d/obj/hair/h%04d/material/v0001/mt_c%04dh%04d_hir_a.mtrl",iVar3,
                 uVar2,iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      _Dst[2] = uVar1;
      uVar1 = (*(uint *)(gen_frame + 0x34)) + 1;
      _Dst = _Dst + 3;
      (*(uint *)(gen_frame + 0x34)) = uVar1;
    } while (uVar1 < (*(uint *)(gen_frame + 0x30)));
  }
  uVar1 = F_00b89a60(param_1,param_2,1);
  (*(uint *)(gen_frame + 0x30)) = uVar1;
  (*(uint *)(gen_frame + 0x34)) = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = (*(uint *)(gen_frame + 0x34)) + 0x33 & 0xffff;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,"chara/human/c%04d/obj/hair/h%04d/model/c%04dh%04d_hir.mdl",iVar3,
                 uVar2,iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      *_Dst = uVar1;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,
                 "chara/human/c%04d/obj/hair/h%04d/material/v0001/mt_c%04dh%04d_acc_b.mtrl",iVar3,
                 uVar2,iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      _Dst[1] = uVar1;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,
                 "chara/human/c%04d/obj/hair/h%04d/material/v0001/mt_c%04dh%04d_hir_a.mtrl",iVar3,
                 uVar2,iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      _Dst[2] = uVar1;
      uVar1 = (*(uint *)(gen_frame + 0x34)) + 1;
      _Dst = _Dst + 3;
      (*(uint *)(gen_frame + 0x34)) = uVar1;
    } while (uVar1 < (*(uint *)(gen_frame + 0x30)));
  }
  uVar1 = F_00b89a00(param_1,param_2,1);
  (*(uint *)(gen_frame + 0x30)) = uVar1;
  (*(uint *)(gen_frame + 0x34)) = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = (param_1 - 1U & 1) * 100 + 1 + (*(uint *)(gen_frame + 0x34)) & 0xffff;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,"chara/human/c%04d/obj/face/f%04d/model/c%04df%04d_fac.mdl",iVar3,
                 uVar2,iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      *_Dst = uVar1;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,
                 "chara/human/c%04d/obj/face/f%04d/material/mt_c%04df%04d_etc_a.mtrl",iVar3,uVar2,
                 iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      _Dst[1] = uVar1;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,
                 "chara/human/c%04d/obj/face/f%04d/material/mt_c%04df%04d_fac_a.mtrl",iVar3,uVar2,
                 iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      _Dst[2] = uVar1;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,
                 "chara/human/c%04d/obj/face/f%04d/material/mt_c%04df%04d_iri_a.mtrl",iVar3,uVar2,
                 iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      _Dst[3] = uVar1;
      uVar1 = (*(uint *)(gen_frame + 0x34)) + 1;
      _Dst = _Dst + 4;
      (*(uint *)(gen_frame + 0x34)) = uVar1;
    } while (uVar1 < (*(uint *)(gen_frame + 0x30)));
  }
  uVar1 = 0;
  while( true ) {
    F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,"chara/common/texture/decal_face/_decal_%d.tex",uVar1 + 1 & 0xffff);
    uVar2 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
    if (uVar2 == 0) break;
    *_Dst = uVar2;
    uVar1 = uVar1 + 1;
    _Dst = _Dst + 1;
    if (0x19 < uVar1) {
      F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
LAB_0069d86f: ;
  uVar1 = (int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x80;
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x80) != 0) {
    uVar1 = F_0068ce50(uVar1,(int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x84);
  }
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
  return uVar1 & 0xffffff00;
}

/* ref: FUN_0069d8d0 */
uint F_0069d8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x69d8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint * PTR32 * PTR32 * PTR32 * param_4 = (uint * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  uint * PTR32 * PTR32 * PTR32 * param_6 = (uint * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  uint * PTR32 * PTR32 * pppuVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint * PTR32 * PTR32 * PTR32 * ppppuVar5;
  uint * _Dst;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint * PTR32 * PTR32 * pppuVar16;
  uint uVar17;
  uint * puVar18;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  puVar18 = (uint *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x60)) = this;
  if (*(int *)((int)this + 0x88) != 0) {
    F_0068ce50((int *)((int)this + 0x88),(int)this + 0x8c);
  }
  switch((unsigned int)(uintptr_t)(param_1)) {
  default: ;
    iVar3 = 100;
    break;
  case 2: ;
    iVar3 = 300;
    break;
  case 3: ;
  case 4: ;
    iVar3 = 500;
    break;
  case 5: ;
  case 6: ;
    iVar3 = 0x44c;
    break;
  case 7: ;
  case 8: ;
    iVar3 = 700;
    break;
  case 9: ;
  case 10: ;
    iVar3 = 900;
  }
  uVar4 = iVar3 + 1 + param_2 * 100;
  (*(uint *)(gen_frame + 0x64)) = uVar4;
  (*(undefined4 *)(gen_frame + 0x78)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x7c)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x80)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x84)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x88)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x8c)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x90)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x94)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x98)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x9c)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xa0)) = 0xc9;
  (*(undefined4 *)(gen_frame + 0xa4)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xa8)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xac)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xb4)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xb8)) = 0xc9;
  (*(undefined4 *)(gen_frame + 0xbc)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xc0)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xc4)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xc8)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xcc)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xd0)) = 0xc9;
  (*(undefined4 *)(gen_frame + 0xd4)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xd8)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xdc)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xe0)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xe4)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xe8)) = 0xc9;
  (*(undefined4 *)(gen_frame + 0xec)) = 0x191;
  (*(undefined4 *)(gen_frame + 0xf0)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xf4)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xf8)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xfc)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x100)) = 0xc9;
  (*(undefined4 *)(gen_frame + 0x104)) = 0x44d;
  (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x68)) = (uint * PTR32 * PTR32 *)0x0;
  if (param_4 != (uint * PTR32 * PTR32 * PTR32 *)0x0) {
    pppuVar16 = (uint * PTR32 * PTR32 *)(uVar4 / 100);
    ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] = pppuVar16;
    do {
      uVar17 = (uint)*(ushort *)(param_3 + (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x68))) * 2);
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 8) + 0x5c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 8));
      uVar2 = *((ushort *)GEN_TOP((uVar4 + 6 + (uVar17 / *(ushort *)(uVar4 + 2)) * 2)));
      if (uVar2 == 0xffff) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)*((ushort *)GEN_TOP(((uVar4 - 6) +
                       ((uint)*(ushort *)(uVar4 + 4) +
                       (*(uint *)(gen_frame + 0x64)) + ((int)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] + ((*(uint *)(gen_frame + 0x64)) / 10) * -2) * 5 +
                       (uVar17 % (uint)*(ushort *)(uVar4 + 2) + (uint)uVar2) *
                       (uint)*(byte *)(uVar4 + 1)) * 2)));
      }
      (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)puVar18 + 1);
      uVar9 = uVar4 >> 1 & 1;
      if (uVar9 != 0) {
        (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)puVar18 + 2);
      }
      if ((uVar4 & 1) != 0) {
        (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x74)) + 1);
      }
      uVar10 = uVar4 >> 3 & 1;
      if (uVar10 != 0) {
        (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x74)) + 1);
      }
      uVar11 = uVar4 >> 2 & 1;
      if (uVar11 != 0) {
        (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x74)) + 1);
      }
      uVar12 = uVar4 >> 5 & 1;
      if (uVar12 != 0) {
        (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x74)) + 1);
      }
      uVar13 = uVar4 >> 4 & 1;
      if (uVar13 != 0) {
        (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x74)) + 1);
      }
      uVar14 = uVar4 >> 7 & 1;
      if (uVar14 != 0) {
        (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x74)) + 1);
      }
      uVar15 = uVar4 >> 6 & 1;
      (*(uint *)(gen_frame + 0x5c)) = uVar15;
      if (uVar15 != 0) {
        (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x74)) + 1);
      }
      uVar15 = uVar4 >> 9 & 1;
      (*(uint *)(gen_frame + 0x50)) = uVar15;
      if (uVar15 != 0) {
        (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x74)) + 1);
      }
      uVar15 = uVar4 >> 8 & 1;
      (*(uint *)(gen_frame + 0x58)) = uVar15;
      if (uVar15 != 0) {
        (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x74)) + 1);
      }
      ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] = (uint * PTR32 * PTR32 *)(((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c)) + (int)((int)(uintptr_t)pppuVar16) * 3);
      (*(uint *)(gen_frame + 0x54)) = 3;
      puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
      do {
        pppuVar1 = ((uint * PTR32 * PTR32 *)GEN_TOP(*((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1]));
        uVar15 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 8) + 0x5c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 8))
        ;
        uVar2 = *((ushort *)GEN_TOP((uVar15 + 6 + (uVar17 / *(ushort *)(uVar15 + 2)) * 2)));
        if (uVar2 == 0xffff) {
          uVar2 = 0;
        }
        else {
          uVar2 = *((ushort *)GEN_TOP(((uVar15 - 6) +
                   ((int)pppuVar1 +
                   (uint)*(ushort *)(uVar15 + 4) +
                   ((uint)((int)(uintptr_t)pppuVar1) / 100 + ((uint)((int)(uintptr_t)pppuVar1) / 10) * -2) * 5 +
                   ((uint)uVar2 + uVar17 % (uint)*(ushort *)(uVar15 + 2)) *
                   (uint)*(byte *)(uVar15 + 1)) * 2)));
          puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
        }
        (*(short *)(gen_frame + 0x8)) = (short)uVar9;
        if (((*(short *)(gen_frame + 0x8)) == 0) && ((uVar2 & 2) != 0)) {
          puVar18 = (uint *)((int)puVar18 + 1);
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
        }
        (*(short *)(gen_frame + 0x24)) = (short)(uVar4 & 1);
        if (((*(short *)(gen_frame + 0x24)) == 0) && ((uVar2 & 1) != 0)) {
          puVar18 = (uint *)((int)puVar18 + 1);
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
        }
        (*(short *)(gen_frame + 0xc)) = (short)uVar10;
        if (((*(short *)(gen_frame + 0xc)) == 0) && ((uVar2 & 8) != 0)) {
          puVar18 = (uint *)((int)puVar18 + 1);
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
        }
        (*(short *)(gen_frame + 0x1c)) = (short)uVar11;
        if (((*(short *)(gen_frame + 0x1c)) == 0) && ((uVar2 & 4) != 0)) {
          puVar18 = (uint *)((int)puVar18 + 1);
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
        }
        (*(short *)(gen_frame + 0x4)) = (short)uVar12;
        if (((*(short *)(gen_frame + 0x4)) == 0) && ((uVar2 & 0x20) != 0)) {
          puVar18 = (uint *)((int)puVar18 + 1);
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
        }
        (*(short *)(gen_frame + 0x14)) = (short)uVar13;
        if (((*(short *)(gen_frame + 0x14)) == 0) && ((uVar2 & 0x10) != 0)) {
          puVar18 = (uint *)((int)puVar18 + 1);
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
        }
        (*(short *)(gen_frame + 0x10)) = (short)uVar14;
        if (((*(short *)(gen_frame + 0x10)) == 0) && ((char)uVar2 < '\0')) {
          puVar18 = (uint *)((int)puVar18 + 1);
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
        }
        if (((short)(*(uint *)(gen_frame + 0x5c)) == 0) && ((uVar2 & 0x40) != 0)) {
          puVar18 = (uint *)((int)puVar18 + 1);
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
        }
        if (((short)(*(uint *)(gen_frame + 0x50)) == 0) && ((uVar2 & 0x200) != 0)) {
          puVar18 = (uint *)((int)puVar18 + 1);
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
        }
        if (((short)(*(uint *)(gen_frame + 0x58)) == 0) && ((uVar2 & 0x100) != 0)) {
          puVar18 = (uint *)((int)puVar18 + 1);
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
        }
        ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] = ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] + 1;
        uVar15 = (*(uint *)(gen_frame + 0x54)) - 1;
        (*(uint *)(gen_frame + 0x54)) = uVar15;
      } while (uVar15 != 0);
      ppppuVar5 = (uint * PTR32 * PTR32 * PTR32 *)((int)(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x68)) + 1);
      (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x68)) = (uint * PTR32 * PTR32 *)ppppuVar5;
    } while (ppppuVar5 < param_4);
  }
  if (param_6 != (uint * PTR32 * PTR32 * PTR32 *)0x0) {
    puVar18 = (uint *)((int)((int)(uintptr_t)param_6) * 5 + (int)puVar18);
  }
  _Dst = ((uint *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),(int)((int)(uintptr_t)puVar18) * 4,4)));
  F_00c48350(_Dst,0,(int)((int)(uintptr_t)puVar18) * 4);
  *(uint * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 0x88) = _Dst;
  *(uint * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 0x8c) = puVar18;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)(gen_frame + 0x3c)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x40)) = 5000;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 6;
  (*(undefined2 *)(gen_frame + 0x49)) = 0;
  ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] = (uint * PTR32 * PTR32 *)0x0;
  if (param_4 != (uint * PTR32 * PTR32 * PTR32 *)0x0) {
    do {
      uVar9 = (uint)*(ushort *)(param_3 + (int)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] * 2);
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 8) + 0x5c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 8));
      uVar17 = uVar9 % (uint)*(ushort *)(uVar4 + 2);
      uVar2 = *((ushort *)GEN_TOP((uVar4 + 6 + (uVar9 / *(ushort *)(uVar4 + 2)) * 2)));
      (*(uint *)(gen_frame + 0x5c)) = uVar17;
      (*(uint *)(gen_frame + 0x50)) = (uint)uVar2;
      if (uVar2 == 0xffff) {
        ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] = (uint * PTR32 * PTR32 *)0x0;
      }
      else {
        (*(uint *)(gen_frame + 0x58)) = ((*(uint *)(gen_frame + 0x64)) / 10) * 2;
        ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] = (uint * PTR32 * PTR32 *)
                       (uint)*((ushort *)GEN_TOP(((uVar4 - 6) +
                              ((uint)*(ushort *)(uVar4 + 4) +
                              (uVar2 + uVar17) * (uint)*(byte *)(uVar4 + 1) + (*(uint *)(gen_frame + 0x64)) +
                              ((*(uint *)(gen_frame + 0x64)) / 100 + ((*(uint *)(gen_frame + 0x64)) / 10) * -2) * 5) * 2)));
      }
      F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/e%04d.imc",uVar9,uVar9);
      uVar17 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
      uVar4 = (*(uint *)(gen_frame + 0x64));
      if (uVar17 == 0) goto LAB_0069e8a9;
      *_Dst = uVar17;
      puVar18 = _Dst + 1;
      uVar17 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] >> 1 & 1;
      (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
      (*(uint *)(gen_frame + 0x5c)) = uVar17;
      if (uVar17 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/model/c%04de%04d_met.mdl",uVar9,(*(uint *)(gen_frame + 0x64)),
                   uVar9);
        uVar17 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        if (uVar17 == 0) goto LAB_0069e8a9;
        *puVar18 = uVar17;
        puVar18 = _Dst + 2;
        (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
      }
      uVar17 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 1;
      (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
      if (uVar17 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_met_a.mtrl",
                   uVar9,uVar4,uVar9);
        uVar10 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        if (uVar10 == 0) goto LAB_0069e8a9;
        *puVar18 = uVar10;
        (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
      }
      puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
      uVar10 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] >> 3 & 1;
      if (uVar10 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/model/c%04de%04d_top.mdl",uVar9,uVar4,
                   uVar9);
        uVar11 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        if (uVar11 == 0) goto LAB_0069e8a9;
        *puVar18 = uVar11;
        (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
      }
      puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
      uVar11 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] >> 2 & 1;
      if (uVar11 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_top_a.mtrl",
                   uVar9,uVar4,uVar9);
        uVar12 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        if (uVar12 == 0) goto LAB_0069e8a9;
        *puVar18 = uVar12;
        (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
      }
      puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
      uVar12 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] >> 5 & 1;
      if (uVar12 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/model/c%04de%04d_glv.mdl",uVar9,uVar4,
                   uVar9);
        uVar13 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        if (uVar13 == 0) goto LAB_0069e8a9;
        *puVar18 = uVar13;
        (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
      }
      puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
      uVar13 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] >> 4 & 1;
      if (uVar13 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_glv_a.mtrl",
                   uVar9,uVar4,uVar9);
        uVar14 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        if (uVar14 == 0) goto LAB_0069e8a9;
        *puVar18 = uVar14;
        (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
      }
      puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
      uVar14 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] >> 7 & 1;
      if (uVar14 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/model/c%04de%04d_dwn.mdl",uVar9,uVar4,
                   uVar9);
        uVar15 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        if (uVar15 == 0) goto LAB_0069e8a9;
        *puVar18 = uVar15;
        (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
      }
      puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
      uVar15 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] >> 6 & 1;
      if (uVar15 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_dwn_a.mtrl",
                   uVar9,uVar4,uVar9);
        uVar6 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        if (uVar6 == 0) goto LAB_0069e8a9;
        *puVar18 = uVar6;
        (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
      }
      puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
      uVar6 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] >> 9 & 1;
      if (uVar6 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/model/c%04de%04d_sho.mdl",uVar9,uVar4,
                   uVar9);
        uVar7 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        if (uVar7 == 0) goto LAB_0069e8a9;
        *puVar18 = uVar7;
        (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
      }
      puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
      uVar7 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] >> 8 & 1;
      if (uVar7 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_sho_a.mtrl",
                   uVar9,uVar4,uVar9);
        uVar8 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        if (uVar8 == 0) goto LAB_0069e8a9;
        *puVar18 = uVar8;
        (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
      }
      (*(uint *)(gen_frame + 0x54)) = 0;
      (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x68)) = ((uint * PTR32 * PTR32 *)GEN_TOP((((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c)) + (uVar4 / 100) * 3)));
      do {
        pppuVar16 = (uint * PTR32 * PTR32 *)*(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x68));
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 8) + 0x5c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 8));
        uVar8 = uVar9 % (uint)*(ushort *)(uVar4 + 2);
        uVar2 = *((ushort *)GEN_TOP((uVar4 + 6 + (uVar9 / *(ushort *)(uVar4 + 2)) * 2)));
        (*(uint *)(gen_frame + 0x50)) = uVar8;
        (*(uint *)(gen_frame + 0x58)) = (uint)uVar2;
        if (uVar2 == 0xffff) {
          ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] = (uint * PTR32 * PTR32 *)0x0;
        }
        else {
          ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] = (uint * PTR32 * PTR32 *)
                         (uint)*((ushort *)GEN_TOP(((uVar4 - 6) +
                                ((int)pppuVar16 +
                                (uint)*(ushort *)(uVar4 + 4) +
                                ((uint)((int)(uintptr_t)pppuVar16) / 100 + ((uint)((int)(uintptr_t)pppuVar16) / 10) * -2) * 5 +
                                (uVar2 + uVar8) * (uint)*(byte *)(uVar4 + 1)) * 2)));
        }
        if (((short)(*(uint *)(gen_frame + 0x5c)) == 0) && (((uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 2) != 0)) {
          F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/model/c%04de%04d_met.mdl",uVar9,
                     pppuVar16,uVar9);
          uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
          if (uVar4 == 0) goto LAB_0069e8a9;
          *(*(uint * PTR32 *)(gen_frame + 0x74)) = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x74)) = (*(uint * PTR32 *)(gen_frame + 0x74)) + 1;
        }
        puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
        (*(short *)(gen_frame + 0x10)) = (short)uVar17;
        if (((*(short *)(gen_frame + 0x10)) == 0) && (((uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 1) != 0)) {
          F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_met_a.mtrl"
                     ,uVar9,pppuVar16,uVar9);
          uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
          if (uVar4 == 0) goto LAB_0069e8a9;
          *puVar18 = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
        }
        puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
        (*(short *)(gen_frame + 0x14)) = (short)uVar10;
        if (((*(short *)(gen_frame + 0x14)) == 0) && (((uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 8) != 0)) {
          F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/model/c%04de%04d_top.mdl",uVar9,
                     pppuVar16,uVar9);
          uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
          if (uVar4 == 0) goto LAB_0069e8a9;
          *puVar18 = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
        }
        puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
        (*(short *)(gen_frame + 0x4)) = (short)uVar11;
        if (((*(short *)(gen_frame + 0x4)) == 0) && (((uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 4) != 0)) {
          F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_top_a.mtrl"
                     ,uVar9,pppuVar16,uVar9);
          uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
          if (uVar4 == 0) goto LAB_0069e8a9;
          *puVar18 = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
        }
        puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
        (*(short *)(gen_frame + 0x1c)) = (short)uVar12;
        if (((*(short *)(gen_frame + 0x1c)) == 0) && (((uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 0x20) != 0)) {
          F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/model/c%04de%04d_glv.mdl",uVar9,
                     pppuVar16,uVar9);
          uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
          if (uVar4 == 0) goto LAB_0069e8a9;
          *puVar18 = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
        }
        puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
        (*(short *)(gen_frame + 0xc)) = (short)uVar13;
        if (((*(short *)(gen_frame + 0xc)) == 0) && (((uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 0x10) != 0)) {
          F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_glv_a.mtrl"
                     ,uVar9,pppuVar16,uVar9);
          uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
          if (uVar4 == 0) goto LAB_0069e8a9;
          *puVar18 = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
        }
        puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
        (*(short *)(gen_frame + 0x24)) = (short)uVar14;
        if (((*(short *)(gen_frame + 0x24)) == 0) && (((uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 0x80) != 0)) {
          F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/model/c%04de%04d_dwn.mdl",uVar9,
                     pppuVar16,uVar9);
          uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
          if (uVar4 == 0) goto LAB_0069e8a9;
          *puVar18 = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
        }
        puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
        (*(short *)(gen_frame + 0x8)) = (short)uVar15;
        if (((*(short *)(gen_frame + 0x8)) == 0) && (((uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 0x40) != 0)) {
          F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_dwn_a.mtrl"
                     ,uVar9,pppuVar16,uVar9);
          uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
          if (uVar4 == 0) goto LAB_0069e8a9;
          *puVar18 = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
        }
        puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
        (*(short *)(gen_frame + 0x18)) = (short)uVar6;
        if (((*(short *)(gen_frame + 0x18)) == 0) && (((uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 0x200) != 0)) {
          F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/model/c%04de%04d_sho.mdl",uVar9,
                     pppuVar16,uVar9);
          uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
          if (uVar4 == 0) goto LAB_0069e8a9;
          *puVar18 = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
        }
        puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
        (*(short *)(gen_frame + 0x20)) = (short)uVar7;
        if (((*(short *)(gen_frame + 0x20)) == 0) && (((uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 0x100) != 0)) {
          F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_sho_a.mtrl"
                     ,uVar9,pppuVar16,uVar9);
          uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
          if (uVar4 == 0) goto LAB_0069e8a9;
          *puVar18 = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
        }
        (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x68)) = (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x68)) + 1;
        uVar4 = (*(uint *)(gen_frame + 0x54)) + 1;
        (*(uint *)(gen_frame + 0x54)) = uVar4;
      } while (uVar4 < 3);
      ppppuVar5 = (uint * PTR32 * PTR32 * PTR32 *)((int)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] + 1);
      ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] = (uint * PTR32 * PTR32 *)ppppuVar5;
      _Dst = (*(uint * PTR32 *)(gen_frame + 0x74));
    } while (ppppuVar5 < param_4);
  }
  ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] = (uint * PTR32 * PTR32 *)0x0;
  if (param_6 != (uint * PTR32 * PTR32 * PTR32 *)0x0) {
    do {
      uVar17 = (uint)*(ushort *)(param_5 + (int)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] * 4);
      uVar9 = (uint)*(ushort *)(param_5 + 2 + (int)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] * 4);
      F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/weapon/w%04d/skeleton/base/b0001/skl_w%04db0001.sklb",uVar17
                 ,uVar17);
      uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
      if (uVar4 == 0) {
LAB_0069e8a9: ;
        uVar4 = (int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 0x88;
        if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 0x88) != 0) {
          uVar4 = F_0068ce50(uVar4,(int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 0x8c);
        }
        F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
        return uVar4 & 0xffffff00;
      }
      *_Dst = uVar4;
      F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/weapon/w%04d/animation/a0001/wp_common/resident/weapon.pap",
                 uVar17);
      uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
      if (uVar4 == 0) goto LAB_0069e8a9;
      _Dst[1] = uVar4;
      F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/weapon/w%04d/obj/body/b%04d/model/w%04db%04d.mdl",uVar17,
                 uVar9,uVar17,uVar9);
      uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
      if (uVar4 == 0) goto LAB_0069e8a9;
      _Dst[2] = uVar4;
      F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/weapon/w%04d/obj/body/b%04d/b%04d.imc",uVar17,uVar9,uVar9);
      uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
      if (uVar4 == 0) goto LAB_0069e8a9;
      _Dst[3] = uVar4;
      F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,
                 "chara/weapon/w%04d/obj/body/b%04d/material/v0001/mt_w%04db%04d_a.mtrl",uVar17,
                 uVar9,uVar17,uVar9);
      uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
      if (uVar4 == 0) goto LAB_0069e8a9;
      _Dst[4] = uVar4;
      ppppuVar5 = (uint * PTR32 * PTR32 * PTR32 *)((int)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] + 1);
      _Dst = _Dst + 5;
      ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] = (uint * PTR32 * PTR32 *)ppppuVar5;
    } while (ppppuVar5 < param_6);
  }
  uVar4 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] >> 8;
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return CONCAT31((int3)uVar4,1);
}

/* ref: FUN_0069e910 */
uint F_0069e910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x69e910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x200];
  ushort uVar1;
  uint * _Dst;
  uint uVar2;
  uint uVar3;
  ushort * puVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint * puVar9;
  bool bVar10;
  
  (*(uint *)(gen_frame + 0x1f8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1fc);
  _Dst = *(uint * PTR32 *)((int)param_1 + 0x90);
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = param_1;
  (*(uint *)(gen_frame + 0x44)) = param_4;
  if (_Dst == (uint *)0x0) {
    _Dst = ((uint *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),0xc0,4)));
    F_00c48350(_Dst,0,0xc0);
    *(uint * PTR32 *)((int)param_1 + 0x90) = _Dst;
    *(undefined4 *)((int)param_1 + 0x94) = 0x30;
  }
  ((ushort *)(gen_frame + 0x1d4))[0] = 0x54;
  ((ushort *)(gen_frame + 0x1d4))[1] = 0x55;
  ((ushort *)(gen_frame + 0x1d4))[2] = 0x56;
  ((ushort *)(gen_frame + 0x1d4))[3] = 0x57;
  ((ushort *)(gen_frame + 0x1d4))[4] = 0x5c;
  ((ushort *)(gen_frame + 0x1d4))[5] = 0x5d;
  ((ushort *)(gen_frame + 0x1d4))[6] = 0x58;
  ((ushort *)(gen_frame + 0x1d4))[7] = 0x59;
  ((ushort *)(gen_frame + 0x1d4))[8] = 0x5a;
  ((ushort *)(gen_frame + 0x1d4))[9] = 0x5b;
  ((ushort *)(gen_frame + 0x1d4))[10] = 0x2a;
  ((ushort *)(gen_frame + 0x1d4))[0xb] = 0x2c;
  ((ushort *)(gen_frame + 0x1d4))[0xc] = 0x25;
  ((ushort *)(gen_frame + 0x1d4))[0xd] = 0x24;
  ((ushort *)(gen_frame + 0x1d4))[0xe] = 0x29;
  ((ushort *)(gen_frame + 0x1d4))[0xf] = 0x27;
  ((ushort *)(gen_frame + 0x1d4))[0x10] = 0x28;
  ((ushort *)(gen_frame + 0x1d4))[0x11] = 0x84;
  (*(undefined4 *)(gen_frame + 0x154)) = 0xb0065;
  (*(undefined4 *)(gen_frame + 0x158)) = 0x100c9;
  (*(undefined4 *)(gen_frame + 0x15c)) = 0xa00c9;
  (*(undefined4 *)(gen_frame + 0x160)) = 0xa00c9;
  (*(undefined4 *)(gen_frame + 0x164)) = 0x9012d;
  (*(undefined4 *)(gen_frame + 0x168)) = 0x10130;
  (*(undefined4 *)(gen_frame + 0x16c)) = 0x9015f;
  (*(undefined4 *)(gen_frame + 0x170)) = 0x10162;
  (*(undefined4 *)(gen_frame + 0x174)) = 0x70191;
  (*(undefined4 *)(gen_frame + 0x178)) = 0x70191;
  (*(undefined4 *)(gen_frame + 0x17c)) = 0x1f0191;
  (*(undefined4 *)(gen_frame + 0x180)) = 0x1f0191;
  (*(undefined4 *)(gen_frame + 0x184)) = 0x301f5;
  (*(undefined4 *)(gen_frame + 0x188)) = 0x301f5;
  (*(undefined4 *)(gen_frame + 0x18c)) = 0x101f8;
  (*(undefined4 *)(gen_frame + 0x190)) = 0x101f8;
  (*(undefined4 *)(gen_frame + 0x194)) = 0x10259;
  (*(undefined4 *)(gen_frame + 0x198)) = 0x1025b;
  (*(undefined4 *)(gen_frame + 0x19c)) = 0x102ba;
  (*(undefined4 *)(gen_frame + 0x1a0)) = 0x402ba;
  (*(undefined4 *)(gen_frame + 0x1a4)) = 0x10321;
  (*(undefined4 *)(gen_frame + 0x1a8)) = 0x10321;
  (*(undefined4 *)(gen_frame + 0x1ac)) = 0x60321;
  (*(undefined4 *)(gen_frame + 0x1b0)) = 0x60321;
  (*(undefined4 *)(gen_frame + 0x1b4)) = 0xf0385;
  (*(undefined4 *)(gen_frame + 0x1b8)) = 0xf0385;
  (*(undefined4 *)(gen_frame + 0x1bc)) = 0x203e9;
  (*(undefined4 *)(gen_frame + 0x1c0)) = 0x203e9;
  (*(undefined4 *)(gen_frame + 0x1c4)) = 0x106ac;
  (*(undefined4 *)(gen_frame + 0x1c8)) = 0x106ac;
  (*(undefined4 *)(gen_frame + 0x1cc)) = 0x106a9;
  (*(undefined4 *)(gen_frame + 0x1d0)) = 0x106a9;
  switch((unsigned int)(uintptr_t)(param_3 - 1U)) {
  default: ;
    iVar6 = 100;
    break;
  case 1: ;
    iVar6 = 300;
    break;
  case 2: ;
  case 3: ;
    iVar6 = 500;
    break;
  case 4: ;
  case 5: ;
    iVar6 = 0x44c;
    break;
  case 6: ;
  case 7: ;
    iVar6 = 700;
    break;
  case 8: ;
  case 9: ;
    iVar6 = 900;
  }
  (*(uint *)(gen_frame + 0x38)) = iVar6 + 1 + (*(uint *)(gen_frame + 0x44)) * 100;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x20)) = 5000;
  (*(undefined4 *)(gen_frame + 0x24)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 6;
  (*(undefined2 *)(gen_frame + 0x29)) = 0;
  (*(uint *)(gen_frame + 0x3c)) = 0;
  do {
    uVar8 = 0;
    (*(ushort * PTR32 *)(gen_frame + 0x48)) = (ushort *)0x0;
    if ((*(uint *)(gen_frame + 0x3c)) == 0) {
      (*(ushort * PTR32 *)(gen_frame + 0x48)) = (ushort *)0x0;
LAB_0069ebb1: ;
      uVar8 = 1;
    }
    else {
      if ((*(uint *)(gen_frame + 0x3c)) == 1) {
        (*(ushort * PTR32 *)(gen_frame + 0x48)) = (ushort *)(uint)((ushort *)(gen_frame + 0x1d4))[(int)((*(uint *)(gen_frame + 0x44)) + (param_3 - 1U & 0xfffffffe))];
        goto LAB_0069ebb1;
      }
      if ((*(uint *)(gen_frame + 0x3c)) == 2) {
        uVar8 = 0;
        (*(ushort * PTR32 *)(gen_frame + 0x48)) = (ushort *)(uint)((ushort *)(gen_frame + 0x1d4))[(int)(param_5 + 10)];
      }
    }
    puVar4 = (*(ushort * PTR32 *)(gen_frame + 0x48));
    (*(ushort * PTR32 *)(gen_frame + 0x4c)) = (*(ushort * PTR32 *)(gen_frame + 0x48));
    F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,"chara/equipment/e%04d/e%04d.imc",(*(ushort * PTR32 *)(gen_frame + 0x48)),(*(ushort * PTR32 *)(gen_frame + 0x48)));
    uVar2 = F_00513dc0(((undefined1 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    (*(uint *)(gen_frame + 0x50)) = uVar2;
    if (uVar2 == 0) goto LAB_0069f0c2;
    if (*_Dst != 0) {
      F_0050c620(*_Dst,0,0);
      *_Dst = 0;
      uVar2 = (*(uint *)(gen_frame + 0x50));
    }
    *_Dst = uVar2;
    _Dst = _Dst + 1;
    (*(uint *)(gen_frame + 0x50)) = uVar8;
    if (uVar8 < 5) {
      uVar2 = ((*(uint *)(gen_frame + 0x38)) & 0xffff) % 10;
      puVar9 = _Dst;
      do {
        (*(uint *)(gen_frame + 0x50)) = uVar8;
        if (uVar2 == 1) {
          uVar1 = F_0068c9c0((*(undefined * PTR32 *)(gen_frame + 0x40)),(*(uint *)(gen_frame + 0x38)),uVar8,puVar4);
        }
        else if (uVar2 == 4) {
          uVar1 = F_0068cc20((*(undefined * PTR32 *)(gen_frame + 0x40)),(*(uint *)(gen_frame + 0x38)),uVar8,puVar4);
        }
        else {
          uVar1 = F_0068cd40((*(undefined * PTR32 *)(gen_frame + 0x40)),(*(uint *)(gen_frame + 0x38)),uVar8,puVar4);
        }
        uVar3 = (uint)uVar1;
        (*(uint *)(gen_frame + 0x34)) = uVar3;
        F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,"chara/equipment/e%04d/model/c%04de%04d_%s.mdl",(*(ushort * PTR32 *)(gen_frame + 0x4c)),uVar3,
                   (*(ushort * PTR32 *)(gen_frame + 0x4c)),(&REFG(undefined * PTR32, 0x1323170))[uVar8]);
        uVar8 = F_00513dc0(((undefined1 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
        if (uVar8 == 0) goto LAB_0069f0c2;
        if (*puVar9 != 0) {
          F_0050c620(*puVar9,0,0);
          *puVar9 = 0;
        }
        *puVar9 = uVar8;
        _Dst = puVar9 + 1;
        if (((*(uint *)(gen_frame + 0x3c)) != 0) || ((*(uint *)(gen_frame + 0x50)) != 2)) {
          uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 8) + 0x5c))))
                            (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 8));
          uVar7 = (uint)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x4c))) % (uint)*(ushort *)(uVar8 + 2);
          uVar1 = *((ushort *)GEN_TOP((uVar8 + 6 + ((uint)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x4c))) / (uint)*(ushort *)(uVar8 + 2)) * 2)));
          (*(uint *)(gen_frame + 0x30)) = uVar7;
          (*(ushort * PTR32 *)(gen_frame + 0x4c)) = (ushort *)(uint)uVar1;
          if (uVar1 == 0xffff) {
            uVar1 = 0;
          }
          else {
            uVar1 = *((ushort *)GEN_TOP(((uVar8 - 6) +
                     ((uint)*(ushort *)(uVar8 + 4) +
                     (uVar1 + uVar7) * (uint)*(byte *)(uVar8 + 1) + uVar3 +
                     (uVar3 / 100 + (uVar3 / 10) * -2) * 5) * 2)));
          }
          uVar5 = (ushort)(*(uint *)(gen_frame + 0x34));
          switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x50)))) {
          case 0: ;
            bVar10 = (uVar1 & 1) == 0;
            break;
          case 1: ;
            bVar10 = (uVar1 & 4) == 0;
            break;
          case 2: ;
            bVar10 = (uVar1 & 0x10) == 0;
            break;
          case 3: ;
            bVar10 = (uVar1 & 0x40) == 0;
            break;
          case 4: ;
            bVar10 = (uVar1 & 0x100) == 0;
            break;
          default: ;
            goto switchD_0069edbb_default;
          }
          if (bVar10) {
            uVar5 = 0x65;
          }
switchD_0069edbb_default: ;
          puVar4 = (ushort *)((uint)(*(ushort * PTR32 *)(gen_frame + 0x48)) & 0xffff);
          (*(ushort * PTR32 *)(gen_frame + 0x4c)) = puVar4;
          F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_%s_a.mtrl",
                     puVar4,(uint)uVar5,puVar4,(&REFG(undefined * PTR32, 0x1323170))[(*(uint *)(gen_frame + 0x50))]);
          uVar8 = F_00513dc0(((undefined1 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
          if (uVar8 == 0) goto LAB_0069f0c2;
          if (*_Dst != 0) {
            F_0050c620(*_Dst,0,0);
            *_Dst = 0;
          }
          *_Dst = uVar8;
          _Dst = puVar9 + 2;
        }
        uVar8 = (*(uint *)(gen_frame + 0x50)) + 1;
        (*(uint *)(gen_frame + 0x50)) = uVar8;
        puVar9 = _Dst;
        puVar4 = (*(ushort * PTR32 *)(gen_frame + 0x48));
      } while (uVar8 < 5);
    }
    uVar8 = (*(uint *)(gen_frame + 0x3c)) + 1;
    (*(uint *)(gen_frame + 0x3c)) = uVar8;
  } while (uVar8 < 3);
  (*(ushort * PTR32 *)(gen_frame + 0x4c)) = (ushort *)((int)&(*(undefined4 *)(gen_frame + 0x154)) + param_5 * 0x10 + 2);
  (*(uint *)(gen_frame + 0x44)) = 0;
  while( true ) {
    uVar2 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x4c))[-1];
    (*(uint *)(gen_frame + 0x30)) = (uint)*(*(ushort * PTR32 *)(gen_frame + 0x4c));
    F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,"chara/weapon/w%04d/skeleton/base/b0001/skl_w%04db0001.sklb",uVar2,
               uVar2);
    uVar8 = F_00513dc0(((undefined1 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    if (uVar8 == 0) break;
    if (*_Dst != 0) {
      F_0050c620(*_Dst,0,0);
      *_Dst = 0;
    }
    *_Dst = uVar8;
    F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,"chara/weapon/w%04d/animation/a0001/wp_common/resident/weapon.pap",
               uVar2);
    uVar8 = F_00513dc0(((undefined1 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    if (uVar8 == 0) break;
    if (_Dst[1] != 0) {
      F_0050c620(_Dst[1],0,0);
      _Dst[1] = 0;
    }
    _Dst[1] = uVar8;
    uVar3 = (*(uint *)(gen_frame + 0x30)) & 0xffff;
    F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,"chara/weapon/w%04d/obj/body/b%04d/model/w%04db%04d.mdl",uVar2,uVar3,
               uVar2,uVar3);
    uVar8 = F_00513dc0(((undefined1 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    (*(uint *)(gen_frame + 0x50)) = uVar8;
    if (uVar8 == 0) break;
    if (_Dst[2] != 0) {
      F_0050c620(_Dst[2],0,0);
      _Dst[2] = 0;
    }
    _Dst[2] = (*(uint *)(gen_frame + 0x50));
    F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,"chara/weapon/w%04d/obj/body/b%04d/b%04d.imc",uVar2,uVar3,uVar3);
    uVar8 = F_00513dc0(((undefined1 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    (*(uint *)(gen_frame + 0x50)) = uVar8;
    if (uVar8 == 0) break;
    if (_Dst[3] != 0) {
      F_0050c620(_Dst[3],0,0);
      _Dst[3] = 0;
    }
    _Dst[3] = (*(uint *)(gen_frame + 0x50));
    F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,
               "chara/weapon/w%04d/obj/body/b%04d/material/v0001/mt_w%04db%04d_a.mtrl",uVar2,uVar3,
               uVar2,uVar3);
    uVar8 = F_00513dc0(((undefined1 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    if (uVar8 == 0) break;
    if (_Dst[4] != 0) {
      F_0050c620(_Dst[4],0,0);
      _Dst[4] = 0;
    }
    (*(ushort * PTR32 *)(gen_frame + 0x4c)) = (*(ushort * PTR32 *)(gen_frame + 0x4c)) + 2;
    uVar2 = (*(uint *)(gen_frame + 0x44)) + 1;
    _Dst[4] = uVar8;
    _Dst = _Dst + 5;
    (*(uint *)(gen_frame + 0x44)) = uVar2;
    if (3 < uVar2) {
      F_00c47745((*(uint *)(gen_frame + 0x1f8)) ^ (uint)(uint)(gen_frame + 0x1fc));
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
LAB_0069f0c2: ;
  uVar8 = (int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x90;
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x90) != 0) {
    uVar8 = F_0068ce50(uVar8,(int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x94);
  }
  F_00c47745((*(uint *)(gen_frame + 0x1f8)) ^ (uint)(uint)(gen_frame + 0x1fc));
  return uVar8 & 0xffffff00;
}

/* ref: FUN_0069f140 */
uint F_0069f140(unsigned int gen_a0)
{
  GEN_ENTER(0x69f140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x78) != 0) {
    F_0068ce50((int)this + 0x78,(int)this + 0x7c);
  }
  if (*(int *)((int)this + 0x80) != 0) {
    F_0068ce50((int)this + 0x80,(int)this + 0x84);
  }
  if (*(int *)((int)this + 0x88) != 0) {
    F_0068ce50((int)this + 0x88,(int)this + 0x8c);
  }
  uVar1 = (int)this + 0x90;
  if (*(int *)((int)this + 0x90) != 0) {
    uVar1 = F_0068ce50(uVar1,(int)this + 0x94);
  }
  return uVar1;
}

/* ref: FUN_0069f1c0 */
byte F_0069f1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x69f1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  undefined * this_00;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 * puVar4;
  undefined2 * puVar5;
  undefined2 * puVar6;
  uint uVar7;
  undefined2 * local_1c;
  undefined2 * local_14;
  
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  *param_1 = REFG(undefined4, 0x10f04cc);
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10f04d0))[0];
  uVar7 = (uint)param_2[2];
  if (uVar7 == 0) {
    uVar7 = 1;
  }
  uVar3 = F_006b3010(this_00,uVar7 >> 9);
  if (uVar3 == 0) {
    puVar4 = (undefined2 *)0x0;
  }
  else {
    puVar4 = ((undefined2 *)GEN_TOP((uVar3 + (uVar7 & 0x1ff) * 8)));
  }
  local_1c = puVar4;
  if ((puVar4[1] & 0x400) != 0) {
    uVar7 = (uint)*param_2;
    if (uVar7 == 0) {
      uVar7 = 1;
    }
    uVar3 = F_006b3010(this_00,uVar7 >> 9);
    if (uVar3 == 0) {
      local_1c = (undefined2 *)0x0;
    }
    else {
      local_1c = ((undefined2 *)GEN_TOP((uVar3 + (uVar7 & 0x1ff) * 8)));
    }
  }
  local_14 = puVar4;
  if ((puVar4[1] & 0x200) != 0) {
    uVar7 = (uint)param_2[4];
    if (uVar7 == 0) {
      uVar7 = 1;
    }
    uVar3 = F_006b3010(this_00,uVar7 >> 9);
    if (uVar3 == 0) {
      local_14 = (undefined2 *)0x0;
    }
    else {
      local_14 = ((undefined2 *)GEN_TOP((uVar3 + (uVar7 & 0x1ff) * 8)));
    }
  }
  puVar6 = puVar4;
  if ((*(byte *)((int)puVar4 + 3) & 1) != 0) {
    uVar7 = (uint)param_2[6];
    if (uVar7 == 0) {
      uVar7 = 1;
    }
    uVar3 = F_006b3010(this_00,uVar7 >> 9);
    if (uVar3 == 0) {
      puVar6 = (undefined2 *)0x0;
    }
    else {
      puVar6 = ((undefined2 *)GEN_TOP((uVar3 + (uVar7 & 0x1ff) * 8)));
    }
  }
  puVar5 = puVar6;
  if ((*(byte *)(puVar6 + 3) & 0x20) != 0) {
    uVar7 = (uint)param_2[8];
    if (uVar7 == 0) {
      uVar7 = 1;
    }
    puVar5 = (undefined2 *)F_006b3010(this_00,uVar7 >> 9);
    if (puVar5 != (undefined2 *)0x0) {
      puVar5 = puVar5 + (uVar7 & 0x1ff) * 4;
    }
  }
  if (local_1c != (undefined2 *)0x0) {
    *(undefined2 *)param_1 = *local_1c;
  }
  *(undefined2 *)((int)param_1 + 2) = puVar4[1];
  if (local_14 != (undefined2 *)0x0) {
    *(undefined2 *)(param_1 + 1) = local_14[2];
  }
  *(undefined1 *)((int)param_1 + 6) = *(undefined1 *)(puVar6 + 3);
  if (puVar5 != (undefined2 *)0x0) {
    *(undefined1 *)((int)param_1 + 7) = *(undefined1 *)((int)puVar5 + 7);
  }
  uVar2 = *(ushort *)(param_1 + 1) >> 1 & 3;
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      uVar2 = *(ushort *)((int)param_1 + 2);
      *(ushort *)((int)param_1 + 2) = ((uVar2 >> 5 & 1) * -0x10 ^ uVar2) & 0x18 ^ uVar2;
    }
    else if (uVar2 == 3) {
      uVar2 = *(ushort *)((int)param_1 + 2);
      *(ushort *)((int)param_1 + 2) = ((uVar2 >> 6 & 1) * -0x10 ^ uVar2) & 0x18 ^ uVar2;
    }
  }
  uVar3 = *(byte *)((int)param_1 + 7) >> 1 & 3;
  uVar7 = 0;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      bVar1 = *(byte *)((int)param_1 + 6);
      bVar1 = ((bVar1 >> 4 & 1) * -8 ^ bVar1) & 0xc ^ bVar1;
      uVar7 = (uint)bVar1;
      *(byte *)((int)param_1 + 6) = bVar1;
    }
    else {
      uVar7 = uVar3 - 3;
      if (uVar7 == 0) {
        *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) & 0xf3;
        return 0;
      }
    }
  }
  return (byte)uVar7;
}

/* ref: FUN_0069f3e0 */
uint F_0069f3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x69f3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  int * piVar4;
  undefined * pvVar5;
  byte * pbVar6;
  int iVar7;
  float * pfVar8;
  uint uVar9;
  float * pfVar10;
  undefined4 * puVar11;
  float10 fVar12;
  float fVar13;
  
  pbVar6 = (*(byte * PTR32 *)&gen_args[3]);
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24)));
  (*(uint *)(gen_frame + 0x68)) = (*(byte * PTR32 *)&gen_args[3])[4] - 1 & 1;
  (*(uint *)(gen_frame + 0x50)) = (uint)(*(byte * PTR32 *)&gen_args[3])[8];
  (*(uint *)(gen_frame + 0x48)) = (*(byte * PTR32 *)&gen_args[3])[0x13] & 0x80;
  (*(uint *)(gen_frame + 0x3c)) = (uint)(*(byte * PTR32 *)&gen_args[3])[0xb];
  (*(uint *)(gen_frame + 0x64)) = (uint)(*(byte * PTR32 *)&gen_args[3])[1];
  (*(uint *)(gen_frame + 0x4c)) = (uint)(*(byte * PTR32 *)&gen_args[3])[2];
  (*(uint *)(gen_frame + 0x44)) = (uint)(*(byte * PTR32 *)&gen_args[3])[0x14];
  (*(uint *)(gen_frame + 0x40)) = (*(byte * PTR32 *)&gen_args[3])[7] & 0x80;
  (*(uint *)(gen_frame + 0x5c)) = (uint)(*(byte * PTR32 *)&gen_args[3])[10];
  (*(uint *)(gen_frame + 0x34)) = (uint)(*(byte * PTR32 *)&gen_args[3])[9];
  (*(uint *)(gen_frame + 0x30)) = (uint)(*(byte * PTR32 *)&gen_args[3])[0xd];
  (*(uint *)(gen_frame + 0x38)) = (uint)(*(byte * PTR32 *)&gen_args[3])[0xf];
  (*(uint *)(gen_frame + 0x2c)) = (uint)(*(byte * PTR32 *)&gen_args[3])[0x19];
  if (((*(byte * PTR32 *)&gen_args[3])[0x18] & 0x80) == 0) {
    (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1087f04);
    fVar13 = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1090708);
    fVar13 = REFG(float, 0x1087f04);
  }
  (*(float *)(gen_frame + 0x54)) = fVar13;
  (*(byte * PTR32 *)&gen_args[3]) = (byte *)(uint)*(*(byte * PTR32 *)&gen_args[3]);
  pfVar8 = (float *)F_004d9920((*(undefined * PTR32 *)&gen_args[1]),0,0x90,2);
  if (pfVar8 != (float *)0x0) {
    (*(int *)(gen_frame + 0x60)) = (((*(uint *)(gen_frame + 0x64)) - 2) + ((*(uint *)(gen_frame + 0x68)) + (int)(*(byte * PTR32 *)&gen_args[3]) * 2) * 2) * 0x1400;
    uVar9 = ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4);
    pfVar10 = (float *)F_006087d0(((byte *)(gen_frame + 0xc)),*(undefined4 *)(uVar9 + (*(int *)(gen_frame + 0x60)) + (*(uint *)(gen_frame + 0x50)) * 4));
    fVar13 = pfVar10[3];
    (*(float *)(gen_frame + 0x28)) = fVar13;
    fVar1 = (float)((float10)*pfVar10 * (float10)*pfVar10);
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    fVar2 = (float)((float10)pfVar10[1] * (float10)pfVar10[1]);
    (*(float *)(gen_frame + 0x20)) = fVar2;
    fVar3 = pfVar10[2];
    *pfVar8 = fVar1;
    pfVar8[1] = fVar2;
    fVar1 = (float)((float10)fVar3 * (float10)fVar3);
    (*(float *)(gen_frame + 0x24)) = fVar1;
    pfVar8[2] = fVar1;
    pfVar8[3] = fVar13;
    if (((*(byte * PTR32 *)&gen_args[3]) == (byte *)0x1) || ((*(byte * PTR32 *)&gen_args[3]) == (byte *)0x5)) {
      fVar12 = F_006b32b0(piVar4,(uint)(*(byte * PTR32 *)&gen_args[3]),(*(uint *)(gen_frame + 0x64)),(*(uint *)(gen_frame + 0x68)),(*(uint *)(gen_frame + 0x4c)),(uint)pbVar6[0x15]);
      pfVar8[3] = (float)fVar12;
    }
    else {
      pfVar8[3] = GEN_FLT_TO(pfVar8[3], REFG(float, 0x1087f04));
    }
    fVar1 = REFG(float, 0x10ac164);
    fVar13 = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x10ac164);
    (*(float *)(gen_frame + 0x20)) = REFG(float, 0x10ac164);
    (*(float *)(gen_frame + 0x24)) = REFG(float, 0x10ac164);
    pfVar8[4] = GEN_FLT_TO(pfVar8[4], REFG(float, 0x10ac164));
    (*(float *)(gen_frame + 0x28)) = fVar13;
    pfVar8[5] = fVar1;
    pfVar8[6] = fVar1;
    pfVar8[7] = fVar13;
    if ((*(uint *)(gen_frame + 0x48)) == 0) {
      (*(float *)(gen_frame + 0x1c)) = 0.0;
      pfVar8[8] = 0.0;
      (*(float *)(gen_frame + 0x20)) = 0.0;
      (*(float *)(gen_frame + 0x24)) = 0.0;
      (*(float *)(gen_frame + 0x28)) = 0.0;
      pfVar8[9] = 0.0;
      pfVar8[10] = 0.0;
      pfVar8[0xb] = 0.0;
    }
    else {
      pfVar8[7] = GEN_FLT_TO(pfVar8[7], REFG(float, 0x10b3234));
      uVar9 = ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4);
      pfVar10 = (float *)F_006087d0(((byte *)(gen_frame + 0xc)),*(undefined4 *)(uVar9 + 0x800 + (*(uint *)(gen_frame + 0x44)) * 4));
      fVar13 = pfVar10[3];
      (*(float *)(gen_frame + 0x28)) = fVar13;
      fVar1 = (float)((float10)*pfVar10 * (float10)*pfVar10);
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      fVar2 = (float)((float10)pfVar10[1] * (float10)pfVar10[1]);
      (*(float *)(gen_frame + 0x20)) = fVar2;
      fVar3 = pfVar10[2];
      pfVar8[8] = fVar1;
      pfVar8[9] = fVar2;
      fVar1 = (float)((float10)fVar3 * (float10)fVar3);
      (*(float *)(gen_frame + 0x24)) = fVar1;
      pfVar8[10] = fVar1;
      pfVar8[0xb] = fVar13;
    }
    uVar9 = ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4);
    iVar7 = (*(int *)(gen_frame + 0x60));
    pfVar10 = (float *)F_006087d0(((byte *)(gen_frame + 0xc)),*(undefined4 *)(uVar9 + (*(int *)(gen_frame + 0x60)) + 0x400 + (*(uint *)(gen_frame + 0x5c)) * 8))
    ;
    fVar13 = pfVar10[3];
    (*(float *)(gen_frame + 0x28)) = fVar13;
    fVar1 = (float)((float10)*pfVar10 * (float10)*pfVar10);
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    fVar2 = (float)((float10)pfVar10[1] * (float10)pfVar10[1]);
    (*(float *)(gen_frame + 0x20)) = fVar2;
    fVar3 = pfVar10[2];
    pfVar8[0xc] = fVar1;
    pfVar8[0xd] = fVar2;
    fVar1 = (float)((float10)fVar3 * (float10)fVar3);
    (*(float *)(gen_frame + 0x24)) = fVar1;
    pfVar8[0xe] = fVar1;
    pfVar8[0xf] = fVar13;
    uVar9 = ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4);
    pfVar10 = (float *)F_006087d0(((byte *)(gen_frame + 0xc)),*(undefined4 *)(uVar9 + iVar7 + 0x404 + (*(uint *)(gen_frame + 0x5c)) * 8));
    fVar13 = pfVar10[3];
    (*(float *)(gen_frame + 0x28)) = fVar13;
    fVar1 = (float)((float10)*pfVar10 * (float10)*pfVar10);
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    fVar2 = (float)((float10)pfVar10[1] * (float10)pfVar10[1]);
    (*(float *)(gen_frame + 0x20)) = fVar2;
    fVar3 = pfVar10[2];
    pfVar8[0x10] = fVar1;
    pfVar8[0x11] = fVar2;
    fVar1 = (float)((float10)fVar3 * (float10)fVar3);
    (*(float *)(gen_frame + 0x24)) = fVar1;
    pfVar8[0x12] = fVar1;
    pfVar8[0x13] = fVar13;
    if ((*(uint *)(gen_frame + 0x40)) == 0) {
      pfVar8[0x14] = pfVar8[0xc];
      pfVar8[0x15] = pfVar8[0xd];
      pfVar8[0x16] = pfVar8[0xe];
      pfVar8[0x17] = pfVar8[0xf];
    }
    else {
      uVar9 = ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4);
      pfVar10 = (float *)F_006087d0(((byte *)(gen_frame + 0xc)),*(undefined4 *)(uVar9 + 0x400 + (*(uint *)(gen_frame + 0x3c)) * 4));
      fVar13 = pfVar10[3];
      (*(float *)(gen_frame + 0x28)) = fVar13;
      fVar1 = (float)((float10)*pfVar10 * (float10)*pfVar10);
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      fVar2 = (float)((float10)pfVar10[1] * (float10)pfVar10[1]);
      (*(float *)(gen_frame + 0x20)) = fVar2;
      fVar3 = pfVar10[2];
      pfVar8[0x14] = fVar1;
      pfVar8[0x15] = fVar2;
      fVar1 = (float)((float10)fVar3 * (float10)fVar3);
      (*(float *)(gen_frame + 0x24)) = fVar1;
      pfVar8[0x16] = fVar1;
      pfVar8[0x17] = fVar13;
    }
    uVar9 = ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4);
    F_006087d0(((byte *)(gen_frame + 0xc)),*(undefined4 *)(uVar9 + (*(uint *)(gen_frame + 0x38)) * 4));
    (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x58));
    fVar13 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0))))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0))))))));
    (*(float *)(gen_frame + 0x1c)) = fVar13;
    pfVar8[0x18] = fVar13;
    fVar13 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4))))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4))))))));
    (*(float *)(gen_frame + 0x20)) = fVar13;
    pfVar8[0x19] = fVar13;
    fVar13 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8))))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8))))))));
    (*(float *)(gen_frame + 0x24)) = fVar13;
    pfVar8[0x1a] = fVar13;
    pfVar8[0x1b] = (*(float *)(gen_frame + 0x58));
    uVar9 = ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4);
    F_006087d0(((byte *)(gen_frame + 0xc)),*(undefined4 *)(uVar9 + (*(uint *)(gen_frame + 0x34)) * 4));
    (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x54));
    fVar13 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0))))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0))))))));
    (*(float *)(gen_frame + 0x1c)) = fVar13;
    pfVar8[0x1c] = fVar13;
    fVar13 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4))))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4))))))));
    (*(float *)(gen_frame + 0x20)) = fVar13;
    pfVar8[0x1d] = fVar13;
    fVar13 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8))))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8))))))));
    (*(float *)(gen_frame + 0x24)) = fVar13;
    pfVar8[0x1e] = fVar13;
    pfVar8[0x1f] = (*(float *)(gen_frame + 0x54));
    uVar9 = ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4);
    pfVar10 = (float *)F_006087d0(((byte *)(gen_frame + 0xc)),*(undefined4 *)(uVar9 + 0xc00 + (*(uint *)(gen_frame + 0x30)) * 4));
    fVar13 = pfVar10[3];
    (*(float *)(gen_frame + 0x28)) = fVar13;
    fVar1 = (float)((float10)*pfVar10 * (float10)*pfVar10);
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    fVar2 = (float)((float10)pfVar10[1] * (float10)pfVar10[1]);
    (*(float *)(gen_frame + 0x20)) = fVar2;
    fVar3 = pfVar10[2];
    pfVar8[0x20] = fVar1;
    pfVar8[0x21] = fVar2;
    fVar1 = (float)((float10)fVar3 * (float10)fVar3);
    (*(float *)(gen_frame + 0x24)) = fVar1;
    pfVar8[0x22] = fVar1;
    pfVar8[0x23] = fVar13;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x24))) = 0;
  }
  pvVar5 = (*(undefined * PTR32 *)&gen_args[2]);
  pfVar8 = (float *)F_004d9920((*(undefined * PTR32 *)&gen_args[2]),0,0x10,2);
  fVar13 = 0.0;
  if (pfVar8 != (float *)0x0) {
    uVar9 = ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4);
    (*(undefined * PTR32 *)&gen_args[1]) = *(undefined * PTR32 *)(uVar9 + 0x1000 + (*(uint *)(gen_frame + 0x2c)) * 4);
    puVar11 = (undefined4 *)F_006b2020(&(*(byte * PTR32 *)&gen_args[3]),&(*(undefined * PTR32 *)&gen_args[1]));
    F_006087d0(&(*(float *)(gen_frame + 0x1c)),*puVar11);
    *pfVar8 = (*(float *)(gen_frame + 0x1c));
    pfVar8[1] = (*(float *)(gen_frame + 0x20));
    pfVar8[2] = (*(float *)(gen_frame + 0x24));
    pfVar8[3] = (*(float *)(gen_frame + 0x28));
    *(undefined4 *)((int)pvVar5 + 0x24) = 0;
    fVar13 = (*(float *)(gen_frame + 0x20));
  }
  return (uint)gen_fl2bits(fVar13);
}

/* ref: FUN_0069f8d0 */
unsigned int F_0069f8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x69f8d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint * puVar2;
  uint * puVar3;
  int iVar4;
  
  if ((*(uint *)&REFG(undefined, 0x1488308) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1488308) = *(uint *)&REFG(undefined, 0x1488308) | 1;
    (*(uint *)(gen_frame + 0x8)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
    (*(uint *)(gen_frame + 0x4)) = 0x1ff;
    puVar2 = &(*(uint *)(gen_frame + 0x8));
    if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
      puVar2 = &(*(uint *)(gen_frame + 0x4));
    }
    (*(uint *)(gen_frame + 0x8)) = *puVar2;
    (*(uint *)(gen_frame + 0x4)) = 0xfffffe00;
    puVar3 = &(*(uint *)(gen_frame + 0x4));
    if (-0x201 < (int)*puVar2) {
      puVar3 = &(*(uint *)(gen_frame + 0x8));
    }
    REFG(undefined4, 0x1488304) = (*puVar3 & 0x3ff) << 10 | 0x1ea;
  }
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *((uint *)GEN_TOP((iVar1 + 0x2ac + *(int *)((int)this + 0xc4) * 8))) = REFG(undefined4, 0x1488304) & 0xfffffff;
  iVar4 = param_1;
  if (param_1 == 0) {
    iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 0x44) + 0xfc)));
  }
  *((int *)GEN_TOP((iVar1 + 0x2a8 + *(int *)((int)this + 0xc4) * 8))) = iVar4;
  if (param_2 == 0) {
    *((undefined4 *)GEN_TOP((iVar1 + 0xa8 + *(int *)((int)this + 0xc0) * 4))) =
         *(undefined4 *)((int)this + 0x9c);
    return 0;
  }
  *((int *)GEN_TOP((iVar1 + 0xa8 + *(int *)((int)this + 0xc0) * 4))) = param_2;
  return 0;
}

/* ref: FUN_0069f9d0 */
unsigned int F_0069f9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x69f9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x78) != 0) {
    F_00691be0(*(int *)((int)this + 0x78),*(undefined4 *)((int)this + 0x7c));
  }
  if (*(int *)((int)this + 0x80) != 0) {
    F_00691be0(*(int *)((int)this + 0x80),*(undefined4 *)((int)this + 0x84));
  }
  if (*(int *)((int)this + 0x88) != 0) {
    F_00691be0(*(int *)((int)this + 0x88),*(undefined4 *)((int)this + 0x8c));
  }
  if (*(int *)((int)this + 0x90) != 0) {
    F_00691be0(*(int *)((int)this + 0x90),*(undefined4 *)((int)this + 0x94));
  }
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf18 */
uint F_0069fa40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x69fa40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)(this + 0x78) == (undefined *)0x0) {
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
    param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
    param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
    return (uint)param_1;
  }
  F_006b4240(*(undefined * PTR32 *)(this + 0x78),param_1,param_2);
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf5 */
uint F_0069fa90(unsigned int gen_a0)
{
  GEN_ENTER(0x69fa90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  this[100] = (undefined1)((byte)this[100] & 0xf7);
  uVar1 = F_00692e40(this);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
  }
  uVar1 = 0;
  if (*(int *)(this + 0x2d8) != 0) {
    uVar1 = F_00655df0(this + 0x108,*(int *)(this + 0x2d8));
  }
  return uVar1;
}

/* ref: FUN_0069fad0 */
unsigned int F_0069fad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x69fad0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  longlong lVar1;
  int iVar2;
  uint this;
  float * pfVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  this = (*(uint *)&gen_args[0]);
  if (((((*(byte *)((*(uint *)&gen_args[0]) + 100) & 1) != 0) && ((*(byte *)((*(uint *)&gen_args[0]) + 0x70) >> 2 & 1) != 0)) &&
      (*(char *)((*(uint *)&gen_args[0]) + 0x65) == '\x03')) &&
     (F_00693300((*(uint *)&gen_args[0]),(*(float *)&gen_args[3])), uVar4 = (*(uint *)&gen_args[2]), *(char *)(this + 0x118) != -2)) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x158))(this,this,(*(int *)&gen_args[1]),(*(uint *)&gen_args[2]),(undefined4)gen_fl2bits((*(float *)&gen_args[3])));
    fVar6 = REFG(float, 0x1087f04);
    if ((*(byte *)(this + 0x70) >> 3 & 1) != 0) {
      fVar6 = REFG(float, 0x1094808);
    }
    fVar6 = ((float)GEN_TOF((((float10)1 - (float10)*(float *)(this + 0x298)) * (float10)fVar6)));
    (*(float *)(gen_frame + 0x18)) = fVar6;
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 4)) = 0;
    (*(ulonglong *)(gen_frame + 0x8)) = (ulonglong)(uint)(*(ulonglong *)(gen_frame + 0x8));
    (*(uint *)&gen_args[0]) = (uint)gen_fl2bits((float)((float10)((float)GEN_TOF(SQRT((float10)(*(float *)&gen_args[3])))) *
                                       (float10)*(double *)&REFG(undefined, 0x10ac178)));
    pfVar3 = (float *)&(*(uint *)&gen_args[0]);
    if (!((float10)(float)((float10)((float)GEN_TOF(SQRT((float10)(*(float *)&gen_args[3])))) *
                          (float10)*(double *)&REFG(undefined, 0x10ac178)) < (float10)1)) {
      pfVar3 = &(*(float *)(gen_frame + 0x14));
    }
    if (!(0.0 < *pfVar3)) {
      pfVar3 = (float *)((int)&(*(ulonglong *)(gen_frame + 0x8)) + 4);
    }
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 4)) = ((undefined2)0x27f) | 0xc00;
    lVar1 = (longlong)TRUNC(((float10)1 - (float10)*pfVar3) * (float10)*(double *)&REFG(undefined, 0x10920e0));
    (*(ulonglong *)(gen_frame + 0x8)) = lVar1;
    lVar1 = (*(ulonglong *)(gen_frame + 0x8));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 0)) = (uint)lVar1;
    (*(uint *)&gen_args[0]) = (uint)(*(ulonglong *)(gen_frame + 0x8)) << 4;
    (*(ulonglong *)(gen_frame + 0x8)) = lVar1;
    if (*(ushort *)(this + 0x11a) == 0xffff) {
      (*(undefined * PTR32 *)(gen_frame + 0x10)) = *(undefined * PTR32 *)(this + 0x168);
      uVar4 = F_004d9920(*(undefined * PTR32 *)(this + 0x168),0,0x30,2);
      if (uVar4 != 0) {
        F_005ffc50(uVar4,this + 0x280);
        *(float *)(uVar4 + 0xc) = ((float)GEN_TOF(((float10)*(float *)(uVar4 + 0xc) * (float10)(*(float *)(gen_frame + 0x18)))));
        *(undefined4 *)(uVar4 + 0x10) = *(undefined4 *)(this + 0x2a0);
        *(undefined4 *)(uVar4 + 0x14) = *(undefined4 *)(this + 0x2a4);
        *(undefined4 *)(uVar4 + 0x18) = *(undefined4 *)(this + 0x2a8);
        *(undefined4 *)(uVar4 + 0x1c) = *(undefined4 *)(this + 0x2ac);
        *(undefined4 *)(uVar4 + 0x20) = *(undefined4 *)(this + 0x2b0);
        *(undefined4 *)(uVar4 + 0x24) = *(undefined4 *)(this + 0x2b4);
        *(undefined4 *)(uVar4 + 0x28) = *(undefined4 *)(this + 0x2b8);
        *(undefined4 *)(uVar4 + 0x2c) = *(undefined4 *)(this + 700);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x168) + 0x24))) = 0;
      }
      uVar4 = *(uint *)(this + 0x74);
      iVar2 = *(int *)(this + 0x7c);
      uVar5 = 0;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 4)) = uVar4;
      (*(ulonglong *)(gen_frame + 0x8)) = CONCAT44(uVar4,(uint)(*(ulonglong *)(gen_frame + 0x8)));
      if (uVar4 != 0) {
        do {
          if (*(int *)(iVar2 + uVar5 * 4) != 0) {
            (*(float *)(gen_frame + 0x14)) = gen_bits2f((uint)((!GEN_ISNAN(*(double *)&REFG(undefined, 0x10b3238)) && !GEN_ISNAN((double)(*(float *)(gen_frame + 0x18)))) &&
                                       !(*(double *)&REFG(undefined, 0x10b3238) <= (double)(*(float *)(gen_frame + 0x18)))) << 0x1e |
                                 ((uint)gen_fl2bits((*(float *)(gen_frame + 0x14))) ^
                                 ((uVar4 - uVar5) + (*(uint *)&gen_args[0]) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x14)))) &
                                 0x3fffffff) & 0x3fffffff);
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar2 + uVar5 * 4) + 0x14))))
                      ((*(uint *)&gen_args[2]),(undefined4)gen_fl2bits((*(float *)&gen_args[3])),(uint)*(byte *)(this + 0x118),
                       this + 0x30,&(*(undefined * PTR32 *)(gen_frame + 0x10)));
            uVar4 = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 4));
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar4);
      }
    }
    else {
      F_00692150(this,(uint)*(ushort *)(this + 0x11a),uVar4,(*(float *)&gen_args[3]),fVar6,(*(uint *)&gen_args[0]));
    }
    F_006b5040((undefined *)this);
    if (((*(int *)&gen_args[1]) == 0x1e) && (((*(uint *)&gen_args[2]) & 0x3000000) != 0)) {
      *(byte *)(this + 100) = *(byte *)(this + 100) | 8;
      F_00692ab0(this,(*(float *)&gen_args[3]));
    }
  }
  return 0;
}

/* ref: FUN_0069fd40 */
uint F_0069fd40(unsigned int gen_a0)
{
  GEN_ENTER(0x69fd40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  float10 fVar3;
  float fVar4;
  
  if (*(undefined * PTR32 *)((int)this + 0x160) != (undefined *)0x0) {
    F_006387b0(*(undefined * PTR32 *)((int)this + 0x160),(int)this + 0x30,
                 (undefined4)gen_fl2bits((float)(float10)0));
  }
  uVar1 = REFG(undefined4, 0x1371290);
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  fVar4 = REFG(float, 0x1087f04);
  if (*(int *)((int)this + 0x2d8) == 0) {
    fVar3 = F_004aa670(uVar1,(int)this + 0x30);
    fVar4 = (float)fVar3;
  }
  *(float *)((int)this + 0x2ac) = fVar4;
  if (*(int *)((int)this + 0x2d8) == 0) {
    uVar1 = *(undefined4 *)((int)this + 0x160);
  }
  else {
    uVar1 = 0;
  }
  F_00691910(REFG(undefined4, 0x137129c),(int)this + 0x2b0,uVar1);
  ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x94))(this);
  if ((char)uVar2 != '\0') {
    uVar2 = F_00692000(this);
  }
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) | 2;
  return uVar2;
}

/* ref: FUN_0069fe00 */
uint F_0069fe00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x69fe00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00693180(param_1,param_2);
  uVar2 = (uint)*(ushort *)(param_1 + 0x11a);
  *(char *)(param_1 + 0x118) = (char)uVar1;
  uVar1 = uVar2;
  if ((*(ushort *)(param_1 + 0x11a) != 0xffff) &&
     (uVar1 = 0, REFG(int, 0x137127c) + 0x10640 + uVar2 * 0x18 != 0)) {
    uVar1 = F_00621a50((undefined *)(REFG(int, 0x137127c) + 0x1061c),uVar2);
    *(undefined2 *)(param_1 + 0x11a) = 0xffff;
  }
  return uVar1;
}

/* ref: FUN_0069fe60 */
uint F_0069fe60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x69fe60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint in_EAX = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x2d0) != (undefined *)0x0) {
    F_00693890(*(undefined * PTR32 *)((int)this + 0x2d0),param_1 + 10);
    in_EAX = *(uint *)((int)this + 0x2d0);
    if (*(short *)(in_EAX + 0x42) == *(short *)(in_EAX + 0x40)) {
      *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) & 0x7fffffff;
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0xe4) != (undefined *)0x0) {
    in_EAX = F_00b84d90(*(undefined * PTR32 *)((int)this + 0xe4),param_1);
  }
  return in_EAX;
}

/* ref: FUN_0069feb0 */
uint F_0069feb0(unsigned int gen_a0)
{
  GEN_ENTER(0x69feb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x2d0) != (undefined *)0x0) {
    F_00693890(*(undefined * PTR32 *)((int)this + 0x2d0),0xf);
    in_EAX = *(uint *)((int)this + 0x2d0);
    if (*(short *)(in_EAX + 0x42) == *(short *)(in_EAX + 0x40)) {
      *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) & 0x7fffffff;
    }
  }
  return in_EAX;
}

/* ref: FUN_0069fee0 */
uint F_0069fee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x69fee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x2d0) != (undefined *)0x0) {
    F_00693890(*(undefined * PTR32 *)((int)this + 0x2d0),param_1);
    if (*((short *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x42))) ==
        *((short *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x40)))) {
      *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) & 0x7fffffff;
    }
  }
  uVar2 = F_009f0670((undefined *)(param_1 * 0x88 + 0x418 + (int)this),0);
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    bVar1 = F_00622fe0(*(undefined * PTR32 *)((int)this + 0x78),param_1,0);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_0069ff40 */
unsigned int F_0069ff40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x69ff40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x2d0) != (undefined *)0x0) {
    F_00693890(*(undefined * PTR32 *)((int)this + 0x2d0),param_1 + 5);
    if (*((short *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x42))) ==
        *((short *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x40)))) {
      *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) & 0x7fffffff;
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061edb0(*(undefined * PTR32 *)((int)this + 0x78),param_1,0);
  }
  return 0;
}

/* ref: FUN_0069ff90 */
uint F_0069ff90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x69ff90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  int * piVar10;
  uint uVar11;
  int local_10;
  
  bVar7 = (byte)param_1;
  piVar10 = ((int *)GEN_TOP(((param_1 + 0x17) * 0x10 + (int)this)));
  iVar9 = 3;
  local_10 = 4;
  do {
    if (*(int *)((int)this + 0x2d4) != 0) {
      iVar4 = param_1 * 0x48;
      iVar1 = iVar4 + *(int *)((int)this + 0x2d4);
      uVar8 = 0 << ((byte)iVar9 & 0x1f);
      uVar5 = ~(1 << ((byte)iVar9 & 0x1f));
      *(ushort *)(iVar1 + 0x40) = uVar5 & *(ushort *)(iVar1 + 0x40) | uVar8;
      *(ushort *)(iVar1 + 0x42) = uVar5 & *(ushort *)(iVar1 + 0x42) | uVar8;
      *(ushort *)(iVar1 + 0x44) = *(ushort *)(iVar1 + 0x44) & uVar5 | uVar8;
      iVar2 = *(int *)(iVar1 + iVar9 * 4);
      if (iVar2 != 0) {
        F_0050c620(iVar2,0,0);
        *(undefined4 *)(iVar1 + iVar9 * 4) = 0;
      }
      if (*((short *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x42 + iVar4))) ==
          *((short *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x40 + iVar4)))) {
        *(uint *)((int)this + 0x2c8) =
             ~(1 << (bVar7 & 0x1f) | 1U >> 0x20 - (bVar7 & 0x1f)) & *(uint *)((int)this + 0x2c8) |
             0 << (bVar7 & 0x1f);
      }
    }
    if (piVar10[0x5b] != 0) {
      F_0050c620(piVar10[0x5b],0,0);
      piVar10[0x5b] = 0;
    }
    piVar3 = (int *)*piVar10;
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
      *piVar10 = 0;
    }
    piVar10 = piVar10 + 1;
    iVar9 = iVar9 + 1;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x7c) + param_1 * 4))) != 0) {
    uVar6 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x7c) + param_1 * 4))) + 0x4c)));
    uVar11 = 0;
    if (uVar6 != 0) {
      do {
        iVar9 = *((int *)GEN_TOP((*(int *)((int)this + 0x7c) + param_1 * 4)));
        iVar1 = *(int *)(iVar9 + 0x48);
        if (*(int *)(iVar1 + uVar11 * 4) != 0) {
          piVar10 = *(int * PTR32 *)(iVar1 + uVar11 * 4);
          ((code *)*(gen_code32 *)(*piVar10 + 0xc))(piVar10);
        }
        *((undefined4 *)GEN_TOP((*(int *)(iVar9 + 0x48) + uVar11 * 4))) = 0;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar6);
    }
  }
  uVar6 = ~(1 << (bVar7 & 0x1f)) & *(uint *)((int)this + 0x2cc) | 0 << (bVar7 & 0x1f);
  *(uint *)((int)this + 0x2cc) = uVar6;
  return uVar6;
}

/* ref: FUN_006a0140 */
unsigned int F_006a0140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a0140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  int local_c;
  
  bVar5 = (byte)param_1;
  iVar7 = 3;
  local_c = 4;
  do {
    if (*(int *)((int)this + 0x2d4) != 0) {
      iVar3 = param_1 * 0x48;
      iVar1 = iVar3 + *(int *)((int)this + 0x2d4);
      uVar6 = 0 << ((byte)iVar7 & 0x1f);
      uVar4 = ~(1 << ((byte)iVar7 & 0x1f));
      *(ushort *)(iVar1 + 0x40) = uVar4 & *(ushort *)(iVar1 + 0x40) | uVar6;
      *(ushort *)(iVar1 + 0x42) = uVar4 & *(ushort *)(iVar1 + 0x42) | uVar6;
      *(ushort *)(iVar1 + 0x44) = *(ushort *)(iVar1 + 0x44) & uVar4 | uVar6;
      iVar2 = *(int *)(iVar1 + iVar7 * 4);
      if (iVar2 != 0) {
        F_0050c620(iVar2,0,0);
        *(undefined4 *)(iVar1 + iVar7 * 4) = 0;
      }
      if (*((short *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x42 + iVar3))) ==
          *((short *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x40 + iVar3)))) {
        *(uint *)((int)this + 0x2c8) =
             ~(1 << (bVar5 & 0x1f) | 1U >> 0x20 - (bVar5 & 0x1f)) & *(uint *)((int)this + 0x2c8) |
             0 << (bVar5 & 0x1f);
      }
    }
    iVar7 = iVar7 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  *(uint *)((int)this + 0x2cc) =
       ~(1 << (bVar5 & 0x1f)) & *(uint *)((int)this + 0x2cc) | 0 << (bVar5 & 0x1f);
  return 0;
}

/* ref: FUN_006a0240 */
uint F_006a0240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a0240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x2d4) != 0) {
    iVar1 = param_1 * 0x48;
    F_00693890(((undefined *)GEN_TOP((iVar1 + *(int *)((int)this + 0x2d4)))),0);
    uVar2 = *(uint *)((int)this + 0x2d4);
    if (*(short *)(uVar2 + 0x42 + iVar1) == *(short *)(uVar2 + 0x40 + iVar1)) {
      uVar2 = 0 << ((byte)param_1 & 0x1f);
      *(uint *)((int)this + 0x2c8) =
           ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x2c8) | uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_006a02a0 */
uint F_006a02a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a02a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x2d4) != 0) {
    iVar1 = param_1 * 0x48;
    F_00693890(((undefined *)GEN_TOP((iVar1 + *(int *)((int)this + 0x2d4)))),2);
    uVar2 = *(uint *)((int)this + 0x2d4);
    if (*(short *)(uVar2 + 0x42 + iVar1) == *(short *)(uVar2 + 0x40 + iVar1)) {
      uVar2 = 0 << ((byte)param_1 & 0x1f);
      *(uint *)((int)this + 0x2c8) =
           ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x2c8) | uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_006a0300 */
unsigned int F_006a0300(unsigned int gen_a0)
{
  GEN_ENTER(0x6a0300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_c;
  
  if (*(int *)((int)this + 0x2c8) == 0) {
    if (*(int *)((int)this + 0x2d4) != 0) {
      local_c = *(int *)((int)this + 0x74);
      if (local_c != 0) {
        iVar3 = 0;
        do {
          iVar1 = iVar3 + *(int *)((int)this + 0x2d4);
          uVar4 = 0;
          do {
            iVar2 = *(int *)(iVar1 + uVar4 * 4);
            if (iVar2 != 0) {
              F_0050c620(iVar2,0,0);
              *(undefined4 *)(iVar1 + uVar4 * 4) = 0;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < 0x10);
          iVar3 = iVar3 + 0x48;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
      if (*(int *)((int)this + 0x2d4) != 0) {
        iVar3 = *(int *)((int)this + 0x2d4) + -4;
        if (iVar3 != 0) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),iVar3);
        }
        *(undefined4 *)((int)this + 0x2d4) = 0;
      }
    }
    iVar3 = *(int *)((int)this + 0x2d0);
    if (iVar3 != 0) {
      uVar4 = 0;
      do {
        iVar1 = *(int *)(iVar3 + uVar4 * 4);
        if (iVar1 != 0) {
          F_0050c620(iVar1,0,0);
          *(undefined4 *)(iVar3 + uVar4 * 4) = 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x10);
      if (*(int *)((int)this + 0x2d0) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                  (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)((int)this + 0x2d0));
        *(undefined4 *)((int)this + 0x2d0) = 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_006a0400 */
uint F_006a0400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a0400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if (*(int *)((int)this + 0x2d4) != 0) {
    iVar2 = param_1 * 0x48;
    F_00693890(((undefined *)GEN_TOP((iVar2 + *(int *)((int)this + 0x2d4)))),param_2 + 3);
    if (*((short *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x42 + iVar2))) ==
        *((short *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x40 + iVar2)))) {
      *(uint *)((int)this + 0x2c8) =
           ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x2c8) |
           0 << ((byte)param_1 & 0x1f);
    }
  }
  piVar1 = ((int *)GEN_TOP(((int)this + (param_2 + param_1 * 4) * 4 + 0x2dc)));
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    F_0050c620(iVar2,0,0);
    *piVar1 = 0;
  }
  iVar2 = param_2 + 0x5c + param_1 * 4;
  piVar1 = *(int * PTR32 *)((int)this + iVar2 * 4);
  puVar3 = (undefined4 *)((int)this + iVar2 * 4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *puVar3 = 0;
  }
  if ((*((int *)GEN_TOP((*(int *)((int)this + 0x7c) + param_1 * 4))) != 0) &&
     (iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x7c) + param_1 * 4))), param_2 < *(uint *)(iVar2 + 0x4c))
     ) {
    if (*((int *)GEN_TOP((*(int *)(iVar2 + 0x48) + param_2 * 4))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0x48) + param_2 * 4)));
      puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    }
    *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x48) + param_2 * 4))) = 0;
  }
  return (uint)puVar3;
}

/* ref: FUN_006a04e0 */
unsigned int F_006a04e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6a04e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x80);
  uVar2 = *(uint *)((int)this + 0x74);
  uVar3 = 0;
  gen_piece_set(&(*(uint *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)((int)(uintptr_t)this) >> 8)));
  (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),*(byte *)((int)this + 0x70) >> 2 & *(byte *)((int)this + 100)) &
            0xffffff01;
  if (uVar2 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(iVar1 + uVar3 * 4);
      if (this_00 != (undefined *)0x0) {
        F_009bc190(this_00,(*(uint *)(gen_frame + 0x8)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_006a0520 */
unsigned int F_006a0520(unsigned int gen_a0)
{
  GEN_ENTER(0x6a0520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = *(int *)((int)this + 0x7c);
  uVar3 = *(uint *)((int)this + 0x74);
  bVar1 = *(byte *)((int)this + 100);
  uVar5 = 0;
  if (uVar3 != 0) {
    do {
      iVar4 = *(int *)(iVar2 + uVar5 * 4);
      if (iVar4 != 0) {
        *(uint *)(iVar4 + 0x10) =
             (uint)((bVar1 >> 1 & 1) != 0) << 6 | *(uint *)(iVar4 + 0x10) & 0xffffffbf;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  return 0;
}

/* ref: FUN_006a05e0 */
uint F_006a05e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a05e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) != 0) {
    F_009bc2a0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))));
    if (*((int *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4)));
      if (pvVar2 != (undefined *)0x0) {
        F_009cfa70(pvVar2);
        F_00406ad0(pvVar2);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) = 0;
    }
  }
  F_004ff2f0(((undefined1 *)(gen_frame + 0x4)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x138))(this,((undefined1 *)(gen_frame + 0x8)),0x100,param_1,((undefined1 *)(gen_frame + 0x4)));
  uVar3 = 0;
  if (uVar1 != 0) {
    pvVar2 = (undefined *)F_009a2040(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x8)));
    uVar3 = F_009cfa30(pvVar2,(int)this + 0x84);
    *((uint *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) = uVar3;
    F_009bc190(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))),
                 (uint)(*(byte *)((int)this + 0x70) >> 2 & *(byte *)((int)this + 100) & 1));
    F_009bc1e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))),
                 (uint)(*(int *)((int)this + 0x2d8) != 0));
    F_00982ca0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))),2,0,(float)(float10)1,
                 (float)(float10)0);
    uVar3 = F_00982b20(pvVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar3;
}

/* ref: FUN_006a0720 */
uint F_006a0720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a0720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  uVar1 = *(uint *)((int)this + 0x7c);
  uVar2 = *(uint *)((int)this + 0x74);
  uVar6 = 0;
  uVar4 = uVar1;
  if (uVar2 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(uVar1 + uVar6 * 4);
      if (this_00 != (undefined *)0x0) {
        uVar3 = F_0065bce0(this_00,param_1);
        uVar4 = uVar3 & 0xffff;
        if ((short)uVar3 != -1) {
          bVar5 = (byte)uVar4;
          uVar4 = (uint)((char)param_2 != '\0') << (bVar5 & 0x1f);
          *(uint *)((int)this_00 + 0x50) =
               ~(1 << (bVar5 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | uVar4;
          *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
  return uVar4;
}

/* ref: FUN_006a0790 */
byte F_006a0790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6a0790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  undefined * this_00;
  byte bVar2;
  ushort uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(short *)((int)this + 0x40) == 0) {
    return 0;
  }
  if (*(short *)((int)this + 0x42) == *(short *)((int)this + 0x40)) {
    return 1;
  }
  uVar6 = 0;
  do {
    bVar2 = (byte)uVar6;
    if (((~(byte)(*(ushort *)((int)this + 0x40) >> (bVar2 & 0x1f)) |
         (byte)(*(ushort *)((int)this + 0x42) >> (bVar2 & 0x1f))) & 1) == 0) {
      piVar4 = ((int *)GEN_TOP((*(int *)((int)this + uVar6 * 4) + 0x88)));
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4;
      UNLOCK();
      if (iVar1 == 2) {
        piVar4 = ((int *)GEN_TOP((*(int *)((int)this + uVar6 * 4) + 0x8c)));
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4;
        UNLOCK();
        if (iVar1 < 8) {
          piVar4 = *(int * PTR32 *)((int)this + uVar6 * 4);
          if (piVar4[2] == 0x6d646c) {
            if ((*(ushort *)((int)this + 0x44) >> (bVar2 & 0x1f) & 1) != 0) {
              F_00502350(piVar4,param_1);
              *(ushort *)((int)this + 0x44) =
                   ~(1 << (bVar2 & 0x1f)) & *(ushort *)((int)this + 0x44) | 0 << (bVar2 & 0x1f);
            }
            uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x20))(piVar4);
            if ((byte)param_3 < (byte)uVar5) goto LAB_006a08c3;
          }
          this_00 = *(undefined * PTR32 *)((int)this + uVar6 * 4);
          if ((*(int *)((int)this_00 + 8) == 0x6d74726c) &&
             ((*(ushort *)((int)this + 0x44) >> (bVar2 & 0x1f) & 1) != 0)) {
            F_00502c10(this_00,param_2);
            *(ushort *)((int)this + 0x44) =
                 ~(1 << (bVar2 & 0x1f)) & *(ushort *)((int)this + 0x44) | 0 << (bVar2 & 0x1f);
          }
          uVar3 = 1 << (bVar2 & 0x1f);
          *(ushort *)((int)this + 0x42) = ~uVar3 & *(ushort *)((int)this + 0x42) | uVar3;
        }
        else {
          F_00693890(this,uVar6);
        }
      }
    }
LAB_006a08c3: ;
    uVar6 = uVar6 + 1;
    if (0xf < uVar6) {
      return *(short *)((int)this + 0x42) == *(short *)((int)this + 0x40);
    }
  } while( true );
}

/* ref: FUN_006a08f0 */
uint F_006a08f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a08f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if (*(int *)this < 0) {
    uVar2 = F_006767d0((undefined *)(REFG(int, 0x137128c) + 0x3d0));
    *(uint *)this = uVar2;
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  uVar2 = F_00678120((undefined *)(REFG(int, 0x137128c) + 0x3d0),*(undefined4 *)this,param_1 + 0x30);
  if (-1 < (int)uVar2) {
    bVar1 = (uVar2 != 0) << 4 | *(byte *)(param_1 + 100) & 0xef;
    uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
    *(byte *)(param_1 + 100) = bVar1;
  }
  return uVar2;
}

/* ref: Client::Graphics::Scene::Human::vf60 */
unsigned int F_006a0950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a0950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  undefined4 uVar3;
  int iVar4;
  
  this_00 = REFG(undefined4, 0x137129c);
  iVar4 = *((int *)GEN_TOP((*(int *)(*param_1 + 0x48) + param_1[1] * 4)));
  uVar1 = *(uint *)(*param_1 + 0x74);
  if (uVar1 < 10) {
    if (*((int *)GEN_TOP((*(int *)(iVar4 + 8) + 0xa4))) == *(int *)((int)REFG(undefined4, 0x137129c) + 0x54)) {
      uVar3 = *(undefined4 *)((int)REFG(undefined4, 0x137129c) + 0x98);
      iVar4 = *(int *)(this + 0x7f4);
      goto LAB_006a0a53;
    }
    if ((*(int *)(this + 0x7f8) != 0) &&
       ((*(uint *)(this + 0x7fc) >> ((byte)uVar1 & 0x1f) & 1) != 0)) {
      F_0069f8d0(REFG(undefined4, 0x137129c),*(int *)(this + 0x7f8),*(undefined4 *)((int)REFG(undefined4, 0x137129c) + 0x9c));
      return 0;
    }
    if (*(int *)(this + uVar1 * 4 + 0x7bc) != 0) {
      F_0069f8d0(REFG(undefined4, 0x137129c),*((undefined4 *)GEN_TOP((*(int *)(this + uVar1 * 4 + 0x7bc) + 0xfc))),
                   *(undefined4 *)((int)REFG(undefined4, 0x137129c) + 0x9c));
      return 0;
    }
    uVar3 = *(undefined4 *)((int)REFG(undefined4, 0x137129c) + 0x9c);
  }
  else {
    if (uVar1 != 0xb) {
      return 0;
    }
    if (*((int *)GEN_TOP((*(int *)(iVar4 + 8) + 0xa4))) != *(int *)((int)REFG(undefined4, 0x137129c) + 0x54)) {
      *(byte *)param_1[2] = *(byte *)param_1[2] & 0xfd;
    }
    piVar2 = ((int *)GEN_TOP((*(int *)(this + 0x7f0) + 0x88)));
    LOCK();
    iVar4 = *piVar2;
    *piVar2 = *piVar2;
    UNLOCK();
    if (iVar4 == 2) {
      piVar2 = ((int *)GEN_TOP((*(int *)(this + 0x7f0) + 0x8c)));
      LOCK();
      iVar4 = *piVar2;
      *piVar2 = *piVar2;
      UNLOCK();
      if (iVar4 < 8) {
        uVar3 = *(undefined4 *)(this + 0x7ec);
        iVar4 = *(int *)(this + 0x7f0);
        goto LAB_006a0a53;
      }
    }
    uVar3 = *(undefined4 *)(this + 0x7ec);
  }
  iVar4 = *(int *)((int)this_00 + 0x44);
LAB_006a0a53: ;
  F_0069f8d0(this_00,*(undefined4 *)(iVar4 + 0xfc),uVar3);
  return 0;
}

/* ref: Client::Graphics::Scene::Human::vf63 */
byte F_006a0a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a0a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if (9 < param_1) {
    return 0;
  }
  F_006940c0(this);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x818) + param_1 * 0xc))) = *param_2;
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  *(uint *)(this + 0x74c) = ~uVar1 & *(uint *)(this + 0x74c) | uVar1;
  return 1;
}

/* ref: Client::Graphics::Scene::Human::vf66 */
uint F_006a0ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6a0ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  short sVar4;
  char * _Format;
  uint uVar5;
  
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 0: ;
    F_00c472af(param_1,param_2,"chara/human/c%04d/skeleton/base/b0001/skl_c%04db0001.sklb",
               (uint)*(ushort *)(this + 0x778),(uint)*(ushort *)(this + 0x778));
    return (uint)param_1;
  case 1: ;
    uVar2 = F_00694050((uint)*(ushort *)(this + 0x778),1,(uint)*(ushort *)(this + 0x77c));
    if ((short)uVar2 < 2) {
      return 0;
    }
    F_00c472af(param_1,param_2,"chara/human/c%04d/skeleton/face/f%04d/skl_c%04df%04d.sklb",
               (uint)*(ushort *)(this + 0x778),(uint)uVar2,(uint)*(ushort *)(this + 0x778),
               (uint)uVar2);
    return (uint)param_1;
  case 2: ;
    uVar2 = F_00694050((uint)*(ushort *)(this + 0x778),2,(uint)*(ushort *)(this + 0x77a));
    if ((short)uVar2 < 2) {
      return 0;
    }
    F_00c472af(param_1,param_2,"chara/human/c%04d/skeleton/hair/h%04d/skl_c%04dh%04d.sklb",
               (uint)*(ushort *)(this + 0x778),(uint)uVar2,(uint)*(ushort *)(this + 0x778),
               (uint)uVar2);
    return (uint)param_1;
  case 3: ;
    if (*(int *)(this + 0x818) == 0) {
      uVar1 = F_00691b90(REFG(undefined4, 0x137129c),(uint)*(ushort *)(this + 0x778),0,
                           (uint)*(ushort *)(this + 0x750));
      uVar2 = *(ushort *)(this + 0x750);
    }
    else {
      uVar1 = (*(ushort * PTR32 *)(this + 0x818))[5];
      uVar2 = **(ushort * PTR32 *)(this + 0x818);
    }
    uVar3 = (uint)uVar1;
    uVar2 = F_00694050(uVar3,3,(uint)uVar2);
    uVar5 = (uint)uVar2;
    if ((short)uVar2 < 2) {
      return 0;
    }
    _Format = "chara/human/c%04d/skeleton/met/m%04d/skl_c%04dm%04d.sklb";
    break;
  case 4: ;
    if (*(int *)(this + 0x818) == 0) {
      uVar2 = F_00691b90(REFG(undefined4, 0x137129c),(uint)*(ushort *)(this + 0x778),1,
                           (uint)*(ushort *)(this + 0x754));
      sVar4 = *(short *)(this + 0x754);
    }
    else {
      uVar2 = *((ushort *)GEN_TOP((*(int *)(this + 0x818) + 0x16)));
      sVar4 = *((short *)GEN_TOP((*(int *)(this + 0x818) + 0xc)));
    }
    uVar3 = (uint)uVar2;
    if (sVar4 != 100) {
      return 0;
    }
    uVar5 = 100;
    _Format = "chara/human/c%04d/skeleton/top/t%04d/skl_c%04dt%04d.sklb";
    break;
  default: ;
    goto switchD_006a0ad7_default;
  }
  F_00c472af(param_1,param_2,_Format,uVar3,uVar5,uVar3,uVar5);
switchD_006a0ad7_default: ;
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Human::vf68 */
uint F_006a0c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6a0c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 0: ;
    F_00c472af(param_1,param_2,"chara/human/c%04d/skeleton/base/b0001/skl_c%04db0001.skp",
               (uint)*(ushort *)(this + 0x778),(uint)*(ushort *)(this + 0x778));
    return param_1;
  case 1: ;
    uVar1 = F_00694050((uint)*(ushort *)(this + 0x778),1,(uint)*(ushort *)(this + 0x77c));
    if (1 < (short)uVar1) {
      F_00c472af(param_1,param_2,"chara/human/c%04d/skeleton/face/f%04d/skl_c%04df%04d.skp",
                 (uint)*(ushort *)(this + 0x778),(uint)uVar1,(uint)*(ushort *)(this + 0x778),
                 (uint)uVar1);
      return param_1;
    }
    break;
  case 2: ;
    uVar1 = F_00694050((uint)*(ushort *)(this + 0x778),2,(uint)*(ushort *)(this + 0x77a));
    if (1 < (short)uVar1) {
      F_00c472af(param_1,param_2,"chara/human/c%04d/skeleton/hair/h%04d/skl_c%04dh%04d.skp",
                 (uint)*(ushort *)(this + 0x778),(uint)uVar1,(uint)*(ushort *)(this + 0x778),
                 (uint)uVar1);
      return param_1;
    }
    break;
  case 3: ;
    uVar2 = (uint)**(ushort * PTR32 *)(this + 0x818);
    uVar3 = (uint)(*(ushort * PTR32 *)(this + 0x818))[5];
    F_00c472af(param_1,param_2,"chara/human/c%04d/skeleton/met/m%04d/skl_c%04dm%04d.skp",uVar3,uVar2
               ,uVar3,uVar2);
  default: ;
    return param_1;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Human::vf69 */
uint F_006a0db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6a0db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  short sVar4;
  char * _Format;
  uint uVar5;
  
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 0: ;
    F_00c472af(param_1,param_2,"chara/human/c%04d/skeleton/base/b0001/phy_c%04db0001.phyb",
               (uint)*(ushort *)(this + 0x778),(uint)*(ushort *)(this + 0x778));
    return (uint)param_1;
  case 1: ;
    return 0;
  case 2: ;
    uVar2 = F_00694050((uint)*(ushort *)(this + 0x778),2,(uint)*(ushort *)(this + 0x77a));
    if ((short)uVar2 < 2) {
      return 0;
    }
    F_00c472af(param_1,param_2,"chara/human/c%04d/skeleton/hair/h%04d/phy_c%04dh%04d.phyb",
               (uint)*(ushort *)(this + 0x778),(uint)uVar2,(uint)*(ushort *)(this + 0x778),
               (uint)uVar2);
    return (uint)param_1;
  case 3: ;
    if (*(int *)(this + 0x818) == 0) {
      uVar1 = F_00691b90(REFG(undefined4, 0x137129c),(uint)*(ushort *)(this + 0x778),0,
                           (uint)*(ushort *)(this + 0x750));
      uVar2 = *(ushort *)(this + 0x750);
    }
    else {
      uVar1 = (*(ushort * PTR32 *)(this + 0x818))[5];
      uVar2 = **(ushort * PTR32 *)(this + 0x818);
    }
    uVar3 = (uint)uVar1;
    uVar2 = F_00694050(uVar3,3,(uint)uVar2);
    uVar5 = (uint)uVar2;
    if ((short)uVar2 < 2) {
      return 0;
    }
    _Format = "chara/human/c%04d/skeleton/met/m%04d/phy_c%04dm%04d.phyb";
    break;
  case 4: ;
    if (*(int *)(this + 0x818) == 0) {
      uVar2 = F_00691b90(REFG(undefined4, 0x137129c),(uint)*(ushort *)(this + 0x778),1,
                           (uint)*(ushort *)(this + 0x754));
      sVar4 = *(short *)(this + 0x754);
    }
    else {
      uVar2 = *((ushort *)GEN_TOP((*(int *)(this + 0x818) + 0x16)));
      sVar4 = *((short *)GEN_TOP((*(int *)(this + 0x818) + 0xc)));
    }
    uVar3 = (uint)uVar2;
    if (sVar4 != 100) {
      return 0;
    }
    uVar5 = 100;
    _Format = "chara/human/c%04d/skeleton/top/t%04d/phy_c%04dt%04d.phyb";
    break;
  default: ;
    goto switchD_006a0dc7_default;
  }
  F_00c472af(param_1,param_2,_Format,uVar3,uVar5,uVar3,uVar5);
switchD_006a0dc7_default: ;
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Human::vf70 */
uint F_006a0f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6a0f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ushort uVar1;
  
  if (param_3 == 0) {
    F_00c472af(param_1,param_2,"chara/human/c%04d/animation/%s/pap/dummy.pap",
               (uint)*(ushort *)(this + 0x778),param_4);
  }
  else if (param_3 == 1) {
    uVar1 = F_00694050((uint)*(ushort *)(this + 0x778),1,(uint)*(ushort *)(this + 0x77c));
    if (uVar1 == 0xffff) {
      return 0;
    }
    F_00c472af(param_1,param_2,"chara/human/c%04d/animation/f%04d/%s.pap",
               (uint)*(ushort *)(this + 0x778),(uint)uVar1,param_4);
    return param_1;
  }
  return param_1;
}

/* ref: Client::Graphics::Scene::Human::vf87 */
unsigned int F_006a0fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6a0fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 HVar1;
  int iVar2;
  
  HVar1 = this[0x118];
  iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x7c) + 0x34)));
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x10) = (uint)(HVar1 == (undefined1)0x0) | *(uint *)(iVar2 + 0x10) & 0xfffffffe;
  }
  iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x7c) + 0x38)));
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x10) = (uint)(HVar1 == (undefined1)0x0) | *(uint *)(iVar2 + 0x10) & 0xfffffffe;
  }
  F_00689220((undefined *)this);
  return 0;
}

/* ref: FUN_006a1010 */
uint F_006a1010(unsigned int gen_a0)
{
  GEN_ENTER(0x6a1010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int * piVar1;
  undefined4 uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  piVar1 = *(int * PTR32 *)((int)this + 0x7e8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x7e8) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x7ec);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x7ec) = 0;
  }
  uVar3 = F_004dcd60(0x90,4,0);
  *(uint *)((int)this + 0x7e8) = uVar3;
  uVar3 = F_004dcd60(0x10,4,0);
  *(uint *)((int)this + 0x7ec) = uVar3;
  F_0069f3e0(REFG(undefined4, 0x137129c),*(undefined4 *)((int)this + 0x7e8),uVar3,(int)this + 0x730);
  if (*(int *)((int)this + 0x7f0) != 0) {
    F_0050c620(*(int *)((int)this + 0x7f0),0,0);
    *(undefined4 *)((int)this + 0x7f0) = 0;
  }
  if ((*(byte *)((int)this + 0x748) & 0x7f) == 0) {
    uVar2 = *(undefined4 *)((int)REFG(undefined4, 0x137129c) + 0x44);
    *(undefined4 *)((int)this + 0x7f0) = uVar2;
    F_00513f60(uVar2,0,0);
  }
  else {
    F_004ff310(((undefined1 *)(gen_frame + 0x4)),4,0);
    (*(undefined4 *)(gen_frame + 0x0)) = 0x746578;
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"chara/common/texture/decal_face/_decal_%d.tex",
               *(byte *)((int)this + 0x748) & 0x7f);
    uVar3 = F_00513d20(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)),0,0,0);
    *(uint *)((int)this + 0x7f0) = uVar3;
  }
  if (*(int *)((int)this + 0x7f4) != 0) {
    F_0050c620(*(int *)((int)this + 0x7f4),0,0);
    *(undefined4 *)((int)this + 0x7f4) = 0;
  }
  if ((*(byte *)((int)this + 0x73c) & 0x80) == 0) {
    *(undefined4 *)((int)this + 0x7f4) = *(undefined4 *)((int)REFG(undefined4, 0x137129c) + 0x44);
  }
  else {
    *(undefined4 *)((int)this + 0x7f4) = *(undefined4 *)((int)REFG(undefined4, 0x137129c) + 0x48);
  }
  uVar3 = F_00513f60(*(undefined4 *)((int)this + 0x7f4),0,0);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar3;
}

/* ref: FUN_006a11b0 */
uint F_006a11b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a11b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = (uint)(ushort)param_1;
  uVar3 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar5 = 0;
  uVar2 = uVar1;
  uVar4 = uVar3;
  uVar6 = uVar5;
  if (((uVar1 < 0x2358) && (uVar4 = REFG(float, 0x10b3240), uVar6 = REFG(float, 0x10b3244), uVar1 != 0x2357)) &&
     (uVar2 = uVar1 - 2, uVar4 = uVar3, uVar6 = uVar5, uVar1 - 2 < 0x84)) {
    uVar2 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x6a13a8) + uVar1 + 2)));
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 2: ;
      uVar4 = REFG(float, 0x109ca64);
      uVar6 = REFG(float, 0x10b3298);
      uVar7 = REFG(float, 0x10b329c);
      uVar8 = REFG(float, 0x10b329c);
      break;
    case 8: ;
    case 0x25: ;
      uVar4 = REFG(float, 0x10b3290);
      uVar6 = REFG(float, 0x10b3294);
      break;
    case 0x1b: ;
      uVar4 = REFG(float, 0x10b329c);
      uVar6 = REFG(float, 0x10b328c);
      break;
    case 0x1e: ;
      uVar4 = REFG(float, 0x10b3284);
      uVar6 = REFG(float, 0x10b3288);
      break;
    case 0x24: ;
      uVar4 = REFG(float, 0x10b3274);
      uVar6 = REFG(float, 0x10b3278);
      uVar7 = REFG(float, 0x10b3270);
      break;
    case 0x30: ;
      uVar4 = REFG(float, 0x10b326c);
      uVar6 = REFG(float, 0x109cb20);
      break;
    case 0x38: ;
      uVar4 = REFG(float, 0x10b3260);
      uVar6 = REFG(float, 0x10b3264);
      break;
    case 0x48: ;
      uVar4 = REFG(float, 0x10b2a2c);
      uVar6 = REFG(float, 0x109cb20);
      uVar7 = REFG(float, 0x10b325c);
      break;
    case 0x4c: ;
    case 0x4f: ;
      uVar4 = REFG(float, 0x109ca64);
      uVar6 = REFG(float, 0x10b3298);
      break;
    case 0x60: ;
      uVar4 = REFG(float, 0x10b3254);
      uVar6 = REFG(float, 0x10b3258);
      break;
    case 0x61: ;
      uVar4 = REFG(float, 0x10b326c);
      uVar6 = REFG(float, 0x10b3268);
      break;
    case 0x81: ;
      uVar4 = REFG(float, 0x10b327c);
      uVar6 = REFG(float, 0x10b3280);
      break;
    case 0x82: ;
      uVar4 = REFG(float, 0x10b324c);
      uVar6 = REFG(float, 0x10b3250);
      break;
    case 0x85: ;
      uVar4 = REFG(float, 0x10b3248);
      uVar6 = REFG(float, 0x109cb20);
    }
  }
  if ((char)param_2 == '\0') {
    uVar4 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  *(undefined4 *)((int)this + 0x800) = uVar4;
  *(undefined4 *)((int)this + 0x804) = uVar7;
  *(undefined4 *)((int)this + 0x808) = uVar8;
  *(undefined4 *)((int)this + 0x80c) = uVar6;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xffbf;
  return uVar2;
}

/* ref: FUN_006a1600 */
unsigned int F_006a1600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a1600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  this_00 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x7c)));
  if (this_00 != (undefined *)0x0) {
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
    *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    if ((*(ushort *)(param_1 + 2) & 1) != 0) {
      if ((char)*(ushort *)(param_1 + 2) < '\0') {
        uVar1 = F_0065bce0(this_00,"atr_inr");
        if ((short)uVar1 != -1) {
          *(uint *)((int)this_00 + 0x50) =
               ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
               0 << ((byte)uVar1 & 0x1f);
          *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
        }
      }
      if ((*(ushort *)(param_1 + 2) & 0x400) == 0) {
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
      }
    }
    uVar1 = 1;
    uVar3 = 0;
    do {
      if ((uVar1 & *(ushort *)((int)this + 0x782) & 0x3ff) == 0) {
        uVar2 = F_0065bce0(this_00,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x1323184) + uVar3))));
        if ((short)uVar2 != -1) {
          *(uint *)((int)this_00 + 0x50) =
               ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
               0 << ((byte)uVar2 & 0x1f);
          *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
        }
      }
      uVar3 = uVar3 + 4;
      uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    } while (uVar3 < 0x28);
  }
  return 0;
}

/* ref: FUN_006a1700 */
unsigned int F_006a1700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a1700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined * this_00;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x7c) + 4)));
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
  *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
  if (*(char *)((int)this + 0x730) == '\x04') {
    pcVar6 = "atr_tlh";
  }
  else {
    pcVar6 = "atr_tls";
  }
  uVar3 = F_0065bce0(this_00,pcVar6);
  if ((short)uVar3 != -1) {
    *(uint *)((int)this_00 + 0x50) =
         ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar3 & 0x1f);
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
  }
  if (((*param_1 & 1) != 0) && (((byte)param_1[1] >> 4 & 8) < ((byte)*param_1 & 8))) {
    uVar3 = F_0065bce0(this_00,"atr_nek");
    if ((short)uVar3 != -1) {
      *(uint *)((int)this_00 + 0x50) =
           ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar3 & 0x1f)
      ;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    }
    uVar3 = F_0065bd80(this_00,"shp_nek");
    if ((short)uVar3 != -1) {
      uVar3 = 1 << ((byte)uVar3 & 0x1f);
      *(uint *)((int)this_00 + 0x60) = ~uVar3 & *(uint *)((int)this_00 + 0x60) | uVar3;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    }
  }
  uVar2 = param_1[2];
  if (((uVar2 & 1) != 0) && (((byte)param_1[1] & 0x18) <= ((byte)uVar2 & 8))) {
    uVar2 = uVar2 >> 1 & 3;
    if (uVar2 == 1) {
      pcVar6 = "shp_hij";
    }
    else if (uVar2 == 2) {
      uVar3 = F_0065bce0(this_00,"atr_hij");
      if ((short)uVar3 != -1) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar3 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      pcVar6 = "shp_ude";
    }
    else {
      if (uVar2 != 3) goto LAB_006a1905;
      uVar3 = F_0065bce0(this_00,"atr_hij");
      if ((short)uVar3 != -1) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar3 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      uVar3 = F_0065bce0(this_00,"atr_ude");
      if ((short)uVar3 != -1) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar3 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      pcVar6 = "shp_kat";
    }
    uVar3 = F_0065bd80(this_00,pcVar6);
    if ((short)uVar3 != -1) {
      uVar3 = 1 << ((byte)uVar3 & 0x1f);
      *(uint *)((int)this_00 + 0x60) = ~uVar3 & *(uint *)((int)this_00 + 0x60) | uVar3;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    }
  }
LAB_006a1905: ;
  bVar1 = *(byte *)((int)param_1 + 7);
  if (((bVar1 & 1) != 0) && (((byte)param_1[3] & 0xc) <= (bVar1 >> 1 & 4))) {
    bVar1 = bVar1 >> 1 & 3;
    if (bVar1 == 1) {
      pcVar6 = "shp_sne";
    }
    else if (bVar1 == 2) {
      uVar3 = F_0065bce0(this_00,"atr_sne");
      if ((short)uVar3 != -1) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar3 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      pcVar6 = "shp_hiz";
    }
    else {
      if (bVar1 != 3) goto LAB_006a1a17;
      uVar3 = F_0065bce0(this_00,"atr_sne");
      if ((short)uVar3 != -1) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar3 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      uVar3 = F_0065bce0(this_00,"atr_hiz");
      if ((short)uVar3 != -1) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar3 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      pcVar6 = "shp_mom";
    }
    uVar3 = F_0065bd80(this_00,pcVar6);
    if ((short)uVar3 != -1) {
      uVar3 = 1 << ((byte)uVar3 & 0x1f);
      *(uint *)((int)this_00 + 0x60) = ~uVar3 & *(uint *)((int)this_00 + 0x60) | uVar3;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    }
  }
LAB_006a1a17: ;
  uVar3 = 1;
  uVar5 = 0;
  do {
    if ((uVar3 & *(ushort *)((int)this + 0x788) & 0x3ff) == 0) {
      uVar4 = F_0065bce0(this_00,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x13231ac) + uVar5))));
      if ((short)uVar4 != -1) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar4 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar4 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
    }
    uVar5 = uVar5 + 4;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
  } while (uVar5 < 0x28);
  return 0;
}

/* ref: FUN_006a1a80 */
unsigned int F_006a1a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a1a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x7c) + 8)));
  if (this_00 != (undefined *)0x0) {
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
    *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    if ((*(ushort *)(param_1 + 2) & 1) != 0) {
      if ((*(byte *)(param_1 + 4) & 8) < ((byte)*(ushort *)(param_1 + 2) & 0x18)) {
        uVar1 = F_0065bce0(this_00,"atr_arm");
        if ((short)uVar1 != -1) {
          *(uint *)((int)this_00 + 0x50) =
               ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
               0 << ((byte)uVar1 & 0x1f);
          *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
        }
        uVar1 = F_0065bd80(this_00,"shp_arm");
        if ((short)uVar1 != -1) {
          uVar1 = 1 << ((byte)uVar1 & 0x1f);
          *(uint *)((int)this_00 + 0x60) = ~uVar1 & *(uint *)((int)this_00 + 0x60) | uVar1;
          *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
        }
      }
      if ((*(ushort *)(param_1 + 2) & 0x200) == 0) {
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
      }
    }
    uVar1 = 1;
    uVar3 = 0;
    do {
      if ((uVar1 & *(ushort *)((int)this + 0x78e) & 0x3ff) == 0) {
        uVar2 = F_0065bce0(this_00,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x13231d4) + uVar3))));
        if ((short)uVar2 != -1) {
          *(uint *)((int)this_00 + 0x50) =
               ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
               0 << ((byte)uVar2 & 0x1f);
          *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
        }
      }
      uVar3 = uVar3 + 4;
      uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    } while (uVar3 < 0x28);
  }
  return 0;
}

/* ref: FUN_006a1bb0 */
unsigned int F_006a1bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a1bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  undefined * this_00;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  char * pcVar7;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x7c) + 0xc)));
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
  *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
  bVar6 = true;
  if (*(char *)((int)this + 0x730) == '\x04') {
    pcVar7 = "atr_tlh";
  }
  else {
    pcVar7 = "atr_tls";
  }
  uVar3 = F_0065bce0(this_00,pcVar7);
  if ((short)uVar3 != -1) {
    *(uint *)((int)this_00 + 0x50) =
         ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar3 & 0x1f);
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
  }
  uVar1 = *(ushort *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    if ((uVar1 & 6) != 0) {
      uVar3 = F_0065bce0(this_00,"atr_kod");
      if ((short)uVar3 != -1) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar3 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      uVar3 = F_0065bd80(this_00,"shp_kos");
      if ((short)uVar3 != -1) {
        uVar3 = 1 << ((byte)uVar3 & 0x1f);
        *(uint *)((int)this_00 + 0x60) = ~uVar3 & *(uint *)((int)this_00 + 0x60) | uVar3;
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
      }
      uVar1 = *(ushort *)(param_1 + 2);
      bVar6 = ((byte)uVar1 & 6) != 4;
    }
    if ((uVar1 & 0x100) == 0) {
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
    }
  }
  bVar2 = *(byte *)(param_1 + 7);
  if (((bVar2 & 1) != 0) && ((*(byte *)(param_1 + 6) & 0xc) <= (bVar2 >> 1 & 4))) {
    bVar2 = bVar2 >> 1 & 3;
    if (bVar2 == 1) {
      pcVar7 = "shp_sne";
    }
    else if (bVar2 == 2) {
      uVar3 = F_0065bce0(this_00,"atr_sne");
      if ((short)uVar3 != -1) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar3 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      pcVar7 = "shp_hiz";
    }
    else {
      if (bVar2 != 3) goto LAB_006a1dd6;
      uVar3 = F_0065bce0(this_00,"atr_sne");
      if ((short)uVar3 != -1) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar3 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      uVar3 = F_0065bce0(this_00,"atr_hiz");
      if ((short)uVar3 != -1) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar3 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      pcVar7 = "shp_mom";
    }
    uVar3 = F_0065bd80(this_00,pcVar7);
    if ((short)uVar3 != -1) {
      uVar3 = 1 << ((byte)uVar3 & 0x1f);
      *(uint *)((int)this_00 + 0x60) = ~uVar3 & *(uint *)((int)this_00 + 0x60) | uVar3;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    }
  }
LAB_006a1dd6: ;
  if (!bVar6) {
    uVar3 = F_0065bce0(this_00,"atr_lpd");
    if ((short)uVar3 != -1) {
      *(uint *)((int)this_00 + 0x50) =
           ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar3 & 0x1f)
      ;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    }
    uVar3 = F_0065bd80(this_00,"shp_sho");
    if ((short)uVar3 != -1) {
      uVar3 = 1 << ((byte)uVar3 & 0x1f);
      *(uint *)((int)this_00 + 0x60) = ~uVar3 & *(uint *)((int)this_00 + 0x60) | uVar3;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    }
  }
  uVar3 = 1;
  uVar5 = 0;
  do {
    if ((uVar3 & *(ushort *)((int)this + 0x794) & 0x3ff) == 0) {
      uVar4 = F_0065bce0(this_00,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x13231fc) + uVar5))));
      if ((short)uVar4 != -1) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar4 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar4 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
    }
    uVar5 = uVar5 + 4;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
  } while (uVar5 < 0x28);
  return 0;
}

/* ref: FUN_006a1eb0 */
unsigned int F_006a1eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a1eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined * this_00;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x7c) + 0x10)));
  if (this_00 != (undefined *)0x0) {
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
    *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    bVar2 = (*(ushort *)(param_1 + 2) & 1) == 0 || ((byte)*(ushort *)(param_1 + 2) & 6) != 4;
    bVar1 = *(byte *)(param_1 + 6);
    bVar3 = bVar2;
    if ((bVar1 & 1) != 0) {
      bVar3 = bVar2 && (bVar1 & 2) != 2;
      bVar2 = bVar3;
      if ((*(byte *)(param_1 + 7) >> 1 & 4) < (bVar1 & 0xc)) {
        uVar4 = F_0065bce0(this_00,"atr_leg");
        if ((short)uVar4 != -1) {
          *(uint *)((int)this_00 + 0x50) =
               ~(1 << ((byte)uVar4 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
               0 << ((byte)uVar4 & 0x1f);
          *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
        }
        uVar4 = F_0065bd80(this_00,"shp_leg");
        if ((short)uVar4 != -1) {
          uVar4 = 1 << ((byte)uVar4 & 0x1f);
          *(uint *)((int)this_00 + 0x60) = ~uVar4 & *(uint *)((int)this_00 + 0x60) | uVar4;
          *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
        }
        bVar2 = false;
      }
      if ((*(byte *)(param_1 + 6) & 0x20) == 0) {
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
      }
    }
    if (!bVar2) {
      uVar4 = F_0065bce0(this_00,"atr_lpd");
      if ((short)uVar4 != -1) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar4 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar4 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
    }
    if (!bVar3) {
      uVar4 = F_0065bd80(this_00,"shp_sho");
      if ((short)uVar4 != -1) {
        uVar4 = 1 << ((byte)uVar4 & 0x1f);
        *(uint *)((int)this_00 + 0x60) = ~uVar4 & *(uint *)((int)this_00 + 0x60) | uVar4;
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
      }
    }
    uVar4 = 1;
    uVar6 = 0;
    do {
      if ((uVar4 & *(ushort *)((int)this + 0x79a) & 0x3ff) == 0) {
        uVar5 = F_0065bce0(this_00,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x1323224) + uVar6))));
        if ((short)uVar5 != -1) {
          *(uint *)((int)this_00 + 0x50) =
               ~(1 << ((byte)uVar5 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
               0 << ((byte)uVar5 & 0x1f);
          *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
        }
      }
      uVar6 = uVar6 + 4;
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    } while (uVar6 < 0x28);
  }
  return 0;
}

/* ref: FUN_006a2080 */
unsigned int F_006a2080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a2080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  char cVar1;
  ushort uVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x7c) + 0x14)));
  iVar4 = 0;
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
  *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
  cVar1 = *(char *)((int)this + 0x730);
  if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    iVar4 = 1;
  }
  else if (cVar1 == '\x04') {
    iVar4 = 2;
  }
  uVar2 = *param_1;
  if ((uVar2 & 1) == 0) goto LAB_006a20f5;
  if (iVar4 == 0) {
    uVar2 = uVar2 & 0x20;
joined_r0x006a20e4: ;
    if (uVar2 != 0) goto LAB_006a20f5;
  }
  else {
    if (iVar4 == 1) {
      uVar2 = uVar2 & 0x40;
      goto joined_r0x006a20e4;
    }
    if ((iVar4 != 2) || ((char)uVar2 < '\0')) goto LAB_006a20f5;
  }
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
LAB_006a20f5: ;
  if ((*(byte *)((int)this + 0x7a0) & 1) == 0) {
    uVar3 = F_0065bce0(this_00,"atr_ev_a");
    if ((short)uVar3 != -1) {
      *(uint *)((int)this_00 + 0x50) =
           ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar3 & 0x1f)
      ;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    }
  }
  return 0;
}

/* ref: FUN_006a2140 */
unsigned int F_006a2140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a2140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x7c) + 0x18)));
  if (this_00 != (undefined *)0x0) {
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
    *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    if (((param_1[1] & 1) != 0) && ((param_1[1] & 0x800) == 0)) {
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
    }
    if (((*param_1 & 1) != 0) && ((*param_1 & 0x10) == 0)) {
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
    }
    if ((*(byte *)((int)this + 0x7a6) & 1) == 0) {
      uVar1 = F_0065bce0(this_00,"atr_nv_a");
      if ((short)uVar1 != -1) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar1 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
    }
  }
  return 0;
}

/* ref: FUN_006a21d0 */
unsigned int F_006a21d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a21d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x7c) + 0x1c)));
  if (this_00 != (undefined *)0x0) {
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
    *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    if (((*(ushort *)(param_1 + 2) & 1) != 0) && ((*(ushort *)(param_1 + 2) & 0x1000) == 0)) {
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
    }
    if (((*(ushort *)(param_1 + 4) & 1) != 0) && ((*(ushort *)(param_1 + 4) & 0x10) == 0)) {
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
    }
    if ((*(byte *)((int)this + 0x7ac) & 1) == 0) {
      uVar1 = F_0065bce0(this_00,"atr_wv_a");
      if ((short)uVar1 != -1) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar1 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
    }
  }
  return 0;
}

