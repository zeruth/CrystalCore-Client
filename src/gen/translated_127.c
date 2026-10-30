#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Client::Game::Fate::FateDirector::vf43 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b07810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb07810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD);
  if ((1 < (int)uVar2) && (((int)uVar2 < 4 || (uVar2 == 7)))) {
    uVar2 = F_00a51200(0x59,param_1[0x1d],0,0,0);
  }
  if ((short)param_1[0x3a] != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
    if ((((uVar2 == 2) && (param_1[0x47] == 0)) && (param_1[0x39] == *(int *)(this + 8))) &&
       (((param_1[0x3b] != 0 || (param_1[0x3c] != 0)) &&
        ((uVar2 = F_00a5f290(param_1 GEN_EDX_ARG), uVar2 != 0 && (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)))))))) {
      bVar1 = F_00aa1800(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG,uVar2);
      if (bVar1 == 0) {
        uVar3 = 0xa4;
      }
      else {
        uVar3 = 0xa3;
      }
      F_00ab4370(uVar3,uVar2,uVar2,0,0);
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c0))))(this GEN_EDX_ARG,param_1);
    if (uVar2 != 0) {
      *((byte *)GEN_TOP(((int)param_1 + 0x8f))) = *((byte *)GEN_TOP(((int)param_1 + 0x8f))) | 4;
    }
  }
  return uVar2;
}

/* ref: FUN_00b078e0 */
GEN_OWN GEN_FRAME ushort F_00b078e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb078e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  *((ushort *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x230))) = (ushort)param_1;
  return (ushort)param_1;
}

/* ref: FUN_00b07930 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b07930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb07930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x21c))) != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_00b076f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x21c))) GEN_EDX_FWD);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00b07950 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_00b07950(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb07950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int iVar1;
  int * this;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  int * piVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  float fVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  uVar2 = param_2;
  if (param_3 != ((uint *)GEN_TOP(0x0))) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*param_3 & 0xffffff) + (int)param_3,REFG(undefined4, 0x108cc50));
    if (((param_1 != -0x20000000) &&
        (this = ((int *)GEN_TOP(F_00a35490(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,param_1))), this != ((int *)GEN_TOP(0x0)))) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x68))))(this GEN_EDX_ARG), (char)uVar2 != '\0')) {
      uVar2 = F_006b8c00();
      uVar2 = F_006d7400(((undefined *)GEN_TOP((uVar2 + 0x100))) GEN_EDX_ARG);
      uVar3 = F_00a5f290(this GEN_EDX_ARG);
      if ((uVar3 != uVar2) && (REFG(int, 0x1488344) != 0)) {
        pvVar4 = ((undefined *)GEN_TOP(F_006b8c00()));
        piVar5 = ((int *)GEN_TOP(F_006de750(pvVar4 GEN_EDX_ARG)));
        if (piVar5 != this) {
          piVar5 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
          if (piVar5 != ((int *)GEN_TOP(0x0))) {
            if ((param_3[3] & 4) == 0) {
              if ((param_3[3] & 1) != 0) {
                uVar12 = 0;
                puVar9 = ((undefined1 *)(gen_frame + 0x0));
                uVar8 = 0x44;
                pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x28))))(piVar5 GEN_EDX_ARG)));
                F_00459b00(pvVar4 GEN_EDX_ARG,uVar8,param_2,puVar9,uVar12);
              }
            }
            else {
              uVar2 = param_3[2];
              iVar1 = *piVar5;
              uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
              uVar6 = F_0042a990(param_2 GEN_EDX_ARG);
              ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x108))))(piVar5,uVar6,uVar3,uVar2);
            }
          }
          if (((param_3[3] & 2) != 0) && (uVar2 = F_00a5f290(this GEN_EDX_ARG), uVar2 != 0)) {
            uVar11 = *((undefined1 *)GEN_TOP(((int)param_3 + 0xd)));
            fVar10 = gen_bits2f(param_3[1]);
            uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            F_00bc5d20(uVar2 + 0x15dc GEN_EDX_ARG,uVar3,fVar10,uVar11);
          }
        }
      }
    }
    uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar2 = (uint)uVar7;
  }
  return uVar2;
}

/* ref: FUN_00b07ac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b07ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb07ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x70, 0, 4);
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  float * pfVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  uVar7 = 0;
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this - 2)));
  (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP(0x0));
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    if (*((int *)GEN_TOP(((int)this + 4))) != -0x20000000) {
      do {
        piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar7)]));
        if (((piVar1 != ((int *)GEN_TOP(0x0))) && (piVar1[0x1d] == *((int *)GEN_TOP(((int)this + 4))))) &&
           (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x68))))(piVar1 GEN_EDX_FWD), (char)uVar3 != '\0')) {
          (*(int * PTR32 *)(gen_frame + 0x68)) = piVar1;
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x158);
    }
    if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
      uVar7 = 0;
      do {
        piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar7)]));
        if (((piVar1 != ((int *)GEN_TOP(0x0))) && (piVar1[0x1e] == *((int *)GEN_TOP(((int)this + 8))))) &&
           (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x68))))(piVar1 GEN_EDX_ARG), (char)uVar3 != '\0')) break;
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x158);
    }
    if ((*(int * PTR32 *)(gen_frame + 0x68)) == ((int *)GEN_TOP(0x0))) {
      *((byte *)GEN_TOP(((int)this + 0x98))) = *((byte *)GEN_TOP(((int)this + 0x98))) & 0xfe;
    }
    else {
      *((byte *)GEN_TOP(((int)this + 0x98))) = *((byte *)GEN_TOP(((int)this + 0x98))) | 1;
    }
    if ((*((byte *)GEN_TOP(((int)this + 0x98))) & 1) != 0) {
      pfVar4 = ((float *)GEN_TOP(F_00a5feb0((*(int * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG)));
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x68)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG);
      F_0042e430(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,uVar7);
      puVar5 = ((undefined4 *)GEN_TOP(F_00a6a710(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,0,((undefined *)GEN_TOP(((int)this + 0x10))),*((undefined4 *)GEN_TOP(((int)this + 0xc))),
                            *pfVar4,pfVar4[1],pfVar4[2],(float)(float10)0,(uint)REFG(undefined2, 0x1379c78),0,0,0,
                            0xff)));
      puVar2 = puVar5;
      puVar8 = ((undefined4 *)GEN_TOP(((int)this + 100)));
      for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 - 1) {
        *puVar8 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar8 = puVar8 + 1;
      }
      return (uint)puVar5;
    }
    puVar2 = ((undefined4 *)GEN_TOP(F_00a6a7a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0,0)));
    puVar8 = puVar2;
    puVar5 = ((undefined4 *)GEN_TOP(((int)this + 100)));
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar5 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00b07c00 */
GEN_OWN GEN_FRAME uint F_00b07c00(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb07c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined4 * this;
  
  this = ((undefined4 *)GEN_TOP(F_00406b90(0x338,0,0)));
  if (this != ((undefined4 *)GEN_TOP(0x0))) {
    F_006fec60(this GEN_EDX_ARG,param_1 & 0xffff | 0x801a0000,param_2);
    *this = (*(undefined * PTR32 (*)[158])REFP(0x10ecd7c));
    this[0xcb] = 0;
    this[0xcc] = 0;
    *((undefined4 * PTR32 *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x218))) = this;
    return (uint)this;
  }
  return 0;
}

/* ref: FUN_00b07c70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b07c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb07c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x64, 12);
  undefined * this_00;
  undefined * pvVar1;
  undefined4 * puVar2;
  int * piVar3;
  float * pfVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  (*(byte *)(gen_frame + 0x53)) = (byte)(*((uint *)GEN_TOP(((int)this + 0x1c))) >> 10) & 1;
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x340)));
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  if (puVar2 == ((undefined4 *)GEN_TOP(0xe0000000))) {
    piVar3 = ((int *)GEN_TOP(F_005f3270(0x31,*((undefined4 *)GEN_TOP(((int)this + 0x318))),0)));
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
    if (piVar3 == ((int *)GEN_TOP(0x0))) goto LAB_00b07d7a;
    *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) | 0x40;
    pfVar4 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xf4))))(piVar3 GEN_EDX_ARG)));
    (*(float *)(gen_frame + 0x34)) = *pfVar4;
    (*(float *)(gen_frame + 0x38)) = pfVar4[1];
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe4))))(piVar3 GEN_EDX_ARG)));
    *((undefined4 *)GEN_TOP(((int)this + 0x330))) = *puVar2;
    *((undefined4 *)GEN_TOP(((int)this + 0x334))) = puVar2[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x338))) = puVar2[2];
    *((float *)GEN_TOP(((int)this + 0x344))) = (*(float *)(gen_frame + 0x34));
    *((float *)GEN_TOP(((int)this + 0x34c))) = (*(float *)(gen_frame + 0x38));
    *((float *)GEN_TOP(((int)this + 0x348))) = (float)((float10)(*(float *)(gen_frame + 0x34)) * (float10)(*(float *)(gen_frame + 0x34)));
  }
  else {
    if (puVar2 == ((undefined4 *)GEN_TOP(0xe0000000))) goto LAB_00b07d7a;
    pvVar1 = ((undefined *)GEN_TOP(F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,puVar2,0)));
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
    if (pvVar1 == ((undefined *)GEN_TOP(0x0))) goto LAB_00b07d7a;
    puVar2 = ((undefined4 *)GEN_TOP(F_00a5feb0(pvVar1 GEN_EDX_ARG)));
    *((undefined4 *)GEN_TOP(((int)this + 0x330))) = *puVar2;
    *((undefined4 *)GEN_TOP(((int)this + 0x334))) = puVar2[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x338))) = puVar2[2];
  }
  (*(byte *)(gen_frame + 0x53)) = 1;
LAB_00b07d7a: ;
  if (*(uint *)&REFG(undefined2, 0x1379c78) == 0) {
    *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) & 0xffffffbf;
    return (uint)puVar2;
  }
  if ((*(byte *)(gen_frame + 0x53)) != 0) {
    *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) & 0xfffffbff;
    *((undefined4 *)GEN_TOP(((int)this + 0x4b8))) = 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x4c4))) = 0xec69;
    (*(int *)(gen_frame + 0x48)) = (int)this + 0x9c;
    uVar5 = F_0042a990((int)this + 0x9c GEN_EDX_ARG);
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x4c8))) GEN_EDX_ARG,uVar5);
    *((undefined4 *)GEN_TOP(((int)this + 0x4c0))) = 0;
    puVar2 = ((undefined4 *)GEN_TOP(F_00a6a710(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0,((undefined *)GEN_TOP(((int)this + 0x4c8))),*((undefined4 *)GEN_TOP(((int)this + 0x4c4))),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x330)))),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x334)))),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x338)))),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x344)))),
                          *(uint *)&REFG(undefined2, 0x1379c78) & 0xffff,0,0,0,0xff)));
    pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
    puVar7 = ((undefined4 *)GEN_TOP(((int)this + 0x51c)));
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar7 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar7 = puVar7 + 1;
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x554))) = 1;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x560))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x310)));
    this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x564)));
    uVar5 = F_0042a990((*(int *)(gen_frame + 0x48)) GEN_EDX_ARG);
    F_0042e430(this_00 GEN_EDX_ARG,uVar5);
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x55c))) = 0;
    puVar2 = ((undefined4 *)GEN_TOP(F_00a6a710(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0,this_00,*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x560))),GEN_ARGF(*((float *)GEN_TOP(((int)pvVar1 + 0x330)))),GEN_ARGF(*((float *)GEN_TOP(((int)pvVar1 + 0x334)))),GEN_ARGF(*((float *)GEN_TOP(((int)pvVar1 + 0x338)))),(float)(float10)0,
                          *(uint *)&REFG(undefined2, 0x1379c78) & 0xffff,0,0,0,0xff)));
    puVar7 = puVar2;
    puVar8 = ((undefined4 *)GEN_TOP(((int)pvVar1 + 0x5b8)));
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00b07f50 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b07f50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb07f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (((*((uint *)GEN_TOP((in_ecx + 0x1c))) >> 7 & 1) != 0) &&
     ((*((char *)GEN_TOP((in_ecx + 0x2f8))) == '\x02' || (*((char *)GEN_TOP((in_ecx + 0x2f8))) == '\b')))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b07f80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b07f80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xb07f80u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x340))) = param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x330))) = *param_3;
  *((undefined4 *)GEN_TOP((in_ecx + 0x334))) = param_3[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x338))) = param_3[2];
  *((float *)GEN_TOP((in_ecx + 0x344))) = param_4;
  *((float *)GEN_TOP((in_ecx + 0x34c))) = param_5;
  *((float *)GEN_TOP((in_ecx + 0x348))) = (float)((float10)param_4 * (float10)param_4);
  *((uint *)GEN_TOP((in_ecx + 0x1c))) = *((uint *)GEN_TOP((in_ecx + 0x1c))) | 0x404;
  return (uint)param_3;
}

/* ref: FUN_00b07fe0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b07fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb07fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_GS(0xa4, 12, 4);
  uint uVar1;
  ulonglong uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  if (uVar1 != param_1) {
    if (uVar1 != 0xe0000000) {
      uVar1 = F_00a35490(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,uVar1);
      if (uVar1 != 0) {
        *((byte *)GEN_TOP((uVar1 + 0x8f))) = *((byte *)GEN_TOP((uVar1 + 0x8f))) | 4;
      }
    }
    *((uint *)GEN_TOP(((int)this + 0x10))) = param_1;
    if (param_1 == 0xe0000000) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(uint *)(gen_frame + 0x4)) = param_1;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      F_0042b630(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      F_00a6a7a0(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,0,0);
      (*(undefined1 *)(gen_frame + 0x98)) = 0;
      F_00b0c920(((undefined *)GEN_TOP(((int)this + 0x5f0))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
      uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      uVar1 = (uint)uVar2;
    }
    else {
      *((byte *)GEN_TOP(((int)this + 0x688))) = *((byte *)GEN_TOP(((int)this + 0x688))) & 0xfe;
      *((undefined4 *)GEN_TOP(((int)this + 0x5f0))) = 2;
      *((undefined4 *)GEN_TOP(((int)this + 0x5fc))) = 0xec2a;
      *((uint *)GEN_TOP(((int)this + 0x5f4))) = param_1;
      uVar1 = F_00a35490(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,param_1);
      if (uVar1 != 0) {
        *((byte *)GEN_TOP((uVar1 + 0x8f))) = *((byte *)GEN_TOP((uVar1 + 0x8f))) | 4;
      }
    }
    *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) | 0x100;
  }
  return uVar1;
}

/* ref: FUN_00b080e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b080e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb080e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xa4, 12, 4);
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  (*(uint *)(gen_frame + 0x9c)) = uVar2;
  if (*((int *)GEN_TOP(((int)this + 0x14))) != param_1) {
    *((int *)GEN_TOP(((int)this + 0x14))) = param_1;
    if (param_1 == -0x20000000) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(int *)(gen_frame + 0x4)) = param_1;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      F_0042b630(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_FWD);
      F_00a6a7a0(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,0,0);
      (*(undefined1 *)(gen_frame + 0x98)) = 0;
      F_00b0c920(((undefined *)GEN_TOP(((int)this + 0x68c))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
      uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      uVar2 = (uint)uVar5;
    }
    else {
      *((byte *)GEN_TOP(((int)this + 0x724))) = *((byte *)GEN_TOP(((int)this + 0x724))) & 0xfe;
      *((undefined4 *)GEN_TOP(((int)this + 0x68c))) = 2;
      *((undefined4 *)GEN_TOP(((int)this + 0x698))) = 0xec60;
      *((int *)GEN_TOP(((int)this + 0x690))) = param_1;
      piVar3 = &REFG(undefined4, 0x14a31f4);
      uVar4 = 2;
      do {
        if ((((uVar4 - 2 < 0x158) && (iVar1 = piVar3[-1], iVar1 != 0)) &&
            (*((short *)GEN_TOP((iVar1 + 0xe8))) == *((short *)GEN_TOP(((int)this + 0x18))))) &&
           (*((int *)GEN_TOP((iVar1 + 0x74))) == param_1)) {
          *((byte *)GEN_TOP((iVar1 + 0x8f))) = *((byte *)GEN_TOP((iVar1 + 0x8f))) | 4;
        }
        if (((uVar4 - 1 < 0x158) && (iVar1 = *piVar3, iVar1 != 0)) &&
           ((*((short *)GEN_TOP((iVar1 + 0xe8))) == *((short *)GEN_TOP(((int)this + 0x18))) &&
            (*((int *)GEN_TOP((iVar1 + 0x74))) == param_1)))) {
          *((byte *)GEN_TOP((iVar1 + 0x8f))) = *((byte *)GEN_TOP((iVar1 + 0x8f))) | 4;
        }
        if (((uVar4 < 0x158) && (iVar1 = piVar3[1], iVar1 != 0)) &&
           ((*((short *)GEN_TOP((iVar1 + 0xe8))) == *((short *)GEN_TOP(((int)this + 0x18))) &&
            (*((int *)GEN_TOP((iVar1 + 0x74))) == param_1)))) {
          *((byte *)GEN_TOP((iVar1 + 0x8f))) = *((byte *)GEN_TOP((iVar1 + 0x8f))) | 4;
        }
        if ((((uVar4 + 1 < 0x158) && (iVar1 = piVar3[2], iVar1 != 0)) &&
            (*((short *)GEN_TOP((iVar1 + 0xe8))) == *((short *)GEN_TOP(((int)this + 0x18))))) &&
           (*((int *)GEN_TOP((iVar1 + 0x74))) == param_1)) {
          *((byte *)GEN_TOP((iVar1 + 0x8f))) = *((byte *)GEN_TOP((iVar1 + 0x8f))) | 4;
        }
        uVar2 = uVar4 + 2;
        piVar3 = piVar3 + 4;
        uVar4 = uVar4 + 4;
      } while (uVar2 < 0x158);
    }
    *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) | 0x200;
  }
  return uVar2;
}

/* ref: FUN_00b08260 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b08260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb08260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  code * pcVar4;
  undefined * this_00;
  undefined4 * puVar5;
  int * piVar6;
  
  if (*((int *)GEN_TOP(((int)this + 0x318))) == 0) {
    return 0;
  }
  if ((*((uint *)GEN_TOP(((int)this + 0x1c))) >> 2 & 1) != 0) {
    if ((*((int *)GEN_TOP(((int)this + 0x340))) == -0x20000000) ||
       (this_00 = ((undefined *)GEN_TOP(F_00a35490(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x340)))))),
       this_00 == ((undefined *)GEN_TOP(0x0)))) {
      *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x330)));
      param_1[1] = *((undefined4 *)GEN_TOP(((int)this + 0x334)));
      param_1[2] = *((undefined4 *)GEN_TOP(((int)this + 0x338)));
    }
    else {
      puVar5 = ((undefined4 *)GEN_TOP(F_00a5feb0(this_00 GEN_EDX_ARG)));
      *param_1 = *puVar5;
      param_1[1] = puVar5[1];
      param_1[2] = puVar5[2];
    }
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x34c)));
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x344)));
    *param_2 = uVar2;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    return 1;
  }
  piVar6 = ((int *)GEN_TOP(F_005f3270(0x31,*((int *)GEN_TOP(((int)this + 0x318))),0)));
  if (piVar6 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xe4))))(piVar6 GEN_EDX_ARG)));
  iVar3 = *piVar6;
  *param_1 = *puVar5;
  param_1[1] = puVar5[1];
  pcVar4 = *((gen_code32 *)GEN_TOP((iVar3 + 0xf4)));
  param_1[2] = puVar5[2];
  puVar5 = ((undefined4 *)GEN_TOP((*pcVar4)(piVar6)));
  *param_2 = *puVar5;
  param_2[1] = puVar5[1];
  param_2[2] = puVar5[2];
  return 1;
}

/* ref: FUN_00b08360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b08360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb08360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  while( true ) {
    if (piVar1 == *((int * PTR32 *)GEN_TOP(((int)this + 4)))) {
      return 0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 2;
  }
  return (uint)piVar1;
}

/* ref: FUN_00b08390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b08390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb08390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  while( true ) {
    if (piVar1 == *((int * PTR32 *)GEN_TOP(((int)this + 4)))) {
      return 0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 2;
  }
  return (uint)piVar1;
}

/* ref: FUN_00b083c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b083c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb083c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  int * piVar5;
  
  piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 0x220)));
  uVar2 = 0;
  if (piVar5 != *((int * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
    do {
      iVar4 = *piVar5;
      puVar3 = ((undefined4 *)GEN_TOP((uVar2 * 0x10 + param_1)));
      if (((param_2 == uVar2) || (*((char *)GEN_TOP((iVar4 + 800))) != '\x02')) ||
         (bVar1 = *((byte *)GEN_TOP((iVar4 + 0x2f9))), bVar1 == 0)) {
        iVar4 = 0;
      }
      else {
        *puVar3 = *((undefined4 *)GEN_TOP((iVar4 + 0x314)));
        puVar3[1] = (uint)bVar1;
        iVar4 = 1;
      }
      piVar5 = piVar5 + 1;
      uVar2 = uVar2 + iVar4;
    } while (piVar5 != *((int * PTR32 *)GEN_TOP(((int)this + 0x224))));
  }
  return uVar2;
}

/* ref: FUN_00b08430 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b08430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb08430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1b4)));
  if (piVar1 != *((int * PTR32 *)GEN_TOP(((int)this + 0x1b8)))) {
    while (*piVar1 != param_1) {
      piVar1 = piVar1 + 0x12;
      if (piVar1 == *((int * PTR32 *)GEN_TOP(((int)this + 0x1b8)))) {
        return 0;
      }
    }
    *piVar1 = -0x20000000;
  }
  return 0;
}

/* ref: FUN_00b08460 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b08460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb08460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int * piVar1;
  int in_ecx_00;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *((int * PTR32 *)GEN_TOP((in_ecx + 0x220)));
  piVar1 = *((int * PTR32 *)GEN_TOP((in_ecx + 0x224)));
  while( true ) {
    if (piVar3 == piVar1) {
      return 0;
    }
    in_ecx_00 = *piVar3;
    if (((*((uint *)GEN_TOP((in_ecx_00 + 0x1c))) >> 7 & 1) != 0) &&
       (((*((char *)GEN_TOP((in_ecx_00 + 0x2f8))) == '\x02' || (*((char *)GEN_TOP((in_ecx_00 + 0x2f8))) == '\b')) &&
        (uVar2 = F_00b0c820(in_ecx_00 GEN_EDX_FWD,param_2), (char)uVar2 != '\0')))) break;
    piVar3 = piVar3 + 1;
  }
  return 1;
}

/* ref: FUN_00b084c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b084c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb084c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint * puVar1;
  
  puVar1 = *((uint * PTR32 *)GEN_TOP(((int)this + 0x220)));
  while( true ) {
    if (puVar1 == *((uint * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
      return 0;
    }
    if (*((short *)GEN_TOP((*puVar1 + 0x18))) == (short)param_1) break;
    puVar1 = puVar1 + 1;
  }
  return *puVar1;
}

/* ref: FUN_00b084f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b084f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb084f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint * puVar1;
  
  puVar1 = *((uint * PTR32 *)GEN_TOP(((int)this + 0x220)));
  while( true ) {
    if (puVar1 == *((uint * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
      return 0;
    }
    if (*((short *)GEN_TOP((*puVar1 + 0x18))) == (short)param_1) break;
    puVar1 = puVar1 + 1;
  }
  return *puVar1;
}

/* ref: FUN_00b08520 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b08520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb08520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined4 * puVar6;
  
  piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 0x220)));
  do {
    if (piVar5 == *((int * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
LAB_00b08546: ;
      uVar4 = F_00ab3de0(param_1);
      if (((uVar4 != 0) && (*((int *)GEN_TOP((uVar4 + 0x20))) != 0)) &&
         (piVar5 = ((int *)GEN_TOP(F_005f3270(0x31,*((int *)GEN_TOP((uVar4 + 0x20))),0))), piVar5 != ((int *)GEN_TOP(0x0)))) {
        puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xe4))))(piVar5 GEN_EDX_ARG)));
        *param_2 = *puVar6;
        param_2[1] = puVar6[1];
        param_2[2] = puVar6[2];
        return 1;
      }
      return 0;
    }
    iVar3 = *piVar5;
    if (*((short *)GEN_TOP((iVar3 + 0x18))) == (short)param_1) {
      if ((*((uint *)GEN_TOP((iVar3 + 0x1c))) >> 7 & 1) != 0) {
        uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 0x334)));
        uVar2 = *((undefined4 *)GEN_TOP((iVar3 + 0x338)));
        *param_2 = *((undefined4 *)GEN_TOP((iVar3 + 0x330)));
        param_2[1] = uVar1;
        param_2[2] = uVar2;
        return 1;
      }
      goto LAB_00b08546;
    }
    piVar5 = piVar5 + 1;
  } while( true );
}

/* ref: FUN_00b085e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b085e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb085e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  int iVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x220)));
  if (piVar2 != *((int * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
    while (iVar1 = *piVar2, *((short *)GEN_TOP((iVar1 + 0x18))) != (short)param_1) {
      piVar2 = piVar2 + 1;
      if (piVar2 == *((int * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
        return (uint)piVar2;
      }
    }
    *((undefined4 *)GEN_TOP((iVar1 + 0x20))) = param_2;
    *((undefined4 *)GEN_TOP((iVar1 + 0x24))) = param_3;
    *((int * PTR32 *)GEN_TOP((iVar1 + 0x28))) = param_4;
    *((undefined4 *)GEN_TOP((iVar1 + 0x2c))) = param_5;
    piVar2 = param_4;
  }
  return (uint)piVar2;
}

/* ref: FUN_00b08630 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b08630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb08630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint in_EAX = 0;
  uint * puVar6;
  float10 fVar7;
  float10 fVar8;
  
  puVar6 = *((uint * PTR32 *)GEN_TOP(((int)this + 0x220)));
  if (puVar6 != *((uint * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
    while( true ) {
      in_EAX = *puVar6;
      if (*((short *)GEN_TOP((in_EAX + 0x18))) == *param_1) break;
      puVar6 = puVar6 + 1;
      if (puVar6 == *((uint * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
        return in_EAX;
      }
    }
    iVar1 = *(int *)(param_1 + 6);
    uVar4 = param_1[4];
    fVar7 = (float10)*(double *)&REFG(undefined, 0x10928e8);
    uVar5 = param_1[5];
    iVar2 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 10);
    *((undefined4 *)GEN_TOP((in_EAX + 0x340))) = *(undefined4 *)(param_1 + 2);
    *((float *)GEN_TOP((in_EAX + 0x330))) = (float)((float10)iVar1 * fVar7);
    *((float *)GEN_TOP((in_EAX + 0x334))) = (float)((float10)iVar2 * fVar7);
    *((float *)GEN_TOP((in_EAX + 0x338))) = (float)((float10)iVar3 * fVar7);
    fVar8 = GEN_X87((float10)(float)((float10)uVar4 * fVar7));
    *((float *)GEN_TOP((in_EAX + 0x344))) = (float)((float10)uVar4 * fVar7);
    *((float *)GEN_TOP((in_EAX + 0x348))) = (float)(fVar8 * fVar8);
    *((float *)GEN_TOP((in_EAX + 0x34c))) = (float)((float10)uVar5 * fVar7);
    *((uint *)GEN_TOP((in_EAX + 0x1c))) = *((uint *)GEN_TOP((in_EAX + 0x1c))) | 0x404;
  }
  return in_EAX;
}

/* ref: FUN_00b08710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b08710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb08710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x220)));
  while( true ) {
    if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
      return 0;
    }
    if (*((short *)GEN_TOP(((int)*puVar1 + 0x18))) == *((short *)GEN_TOP((param_1 + 0xe8)))) break;
    puVar1 = puVar1 + 1;
  }
  uVar2 = F_00b07670(((undefined *)GEN_TOP(*puVar1)) GEN_EDX_FWD,param_1);
  return uVar2;
}

/* ref: FUN_00b08760 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b08760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb08760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x220)));
  while( true ) {
    if (piVar2 == *((int * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
      return 0;
    }
    iVar1 = *piVar2;
    if (*((short *)GEN_TOP((iVar1 + 0x18))) == (short)param_1) break;
    piVar2 = piVar2 + 1;
  }
  if ((param_2 != ((undefined *)GEN_TOP(0x0))) && (uVar3 = F_00a5f290(param_2 GEN_EDX_FWD), uVar3 != 0)) {
    return *((byte *)GEN_TOP((uVar3 + 0x1689))) <= *((byte *)GEN_TOP((iVar1 + 0x322)));
  }
  return 0;
}

/* ref: FUN_00b087d0 */
GEN_OWN GEN_FRAME ulonglong GEN_THISCALL F_00b087d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb087d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x220)));
  while( true ) {
    if (piVar1 == *((int * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
      return 0;
    }
    if (*((short *)GEN_TOP((*piVar1 + 0x18))) == (short)param_1) break;
    piVar1 = piVar1 + 1;
  }
  return *((ulonglong *)GEN_TOP((*piVar1 + 0x20)));
}

/* ref: FUN_00b08810 */
GEN_OWN GEN_FRAME ulonglong GEN_THISCALL F_00b08810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb08810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x220)));
  while( true ) {
    if (piVar2 == *((int * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
      return 0;
    }
    iVar1 = *piVar2;
    if (*((short *)GEN_TOP((iVar1 + 0x18))) == (short)param_1) break;
    piVar2 = piVar2 + 1;
  }
  return CONCAT44(*((int *)GEN_TOP((iVar1 + 0x2c))) + *((int *)GEN_TOP((iVar1 + 0x24))) +
                  (uint)CARRY4(*((uint *)GEN_TOP((iVar1 + 0x28))),*((uint *)GEN_TOP((iVar1 + 0x20)))),
                  *((uint *)GEN_TOP((iVar1 + 0x28))) + *((uint *)GEN_TOP((iVar1 + 0x20))));
}

/* ref: FUN_00b08860 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b08860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb08860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x220)));
  while( true ) {
    if (piVar1 == *((int * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
      return 0;
    }
    if (*((short *)GEN_TOP((*piVar1 + 0x18))) == (short)param_1) break;
    piVar1 = piVar1 + 1;
  }
  return *((byte *)GEN_TOP((*piVar1 + 0x321)));
}

/* ref: FUN_00b088a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b088a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb088a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x220)));
  while( true ) {
    if (piVar1 == *((int * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
      return 0;
    }
    if (*((short *)GEN_TOP((*piVar1 + 0x18))) == (short)param_1) break;
    piVar1 = piVar1 + 1;
  }
  return *((byte *)GEN_TOP((*piVar1 + 0x322)));
}

/* ref: FUN_00b088e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b088e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb088e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x220)));
  while( true ) {
    if (piVar2 == *((int * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
      return 1;
    }
    iVar1 = *piVar2;
    if (*((short *)GEN_TOP((iVar1 + 0x18))) == (short)param_1) break;
    piVar2 = piVar2 + 1;
  }
  if ((*((uint *)GEN_TOP((iVar1 + 0x1c))) >> 7 & 1) == 0) {
    return 1;
  }
  if ((*((char *)GEN_TOP((iVar1 + 0x2f8))) != '\x02') && (*((char *)GEN_TOP((iVar1 + 0x2f8))) != '\b')) {
    return 1;
  }
  return 1 - (*((byte *)GEN_TOP((iVar1 + 0x322))) < *((byte *)GEN_TOP((param_2 + 0x1689))));
}

/* ref: FUN_00b08980 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b08980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb08980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  uint * puVar1;
  short sVar2;
  int iVar3;
  uint * puVar4;
  uint uVar5;
  undefined1 * puVar6;
  
  puVar4 = param_1;
  *((undefined1 *)GEN_TOP(((int)this + 0x321))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x3d)));
  *((undefined1 *)GEN_TOP(((int)this + 0x322))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x3e)));
  *((uint *)GEN_TOP(((int)this + 0x30c))) = param_1[9];
  *((uint *)GEN_TOP(((int)this + 0x310))) = param_1[10];
  *((char *)GEN_TOP(((int)this + 800))) = (char)param_1[0xf];
  *((uint *)GEN_TOP(((int)this + 0x31c))) = param_1[0xb];
  *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) & 0xffffffef;
  *((uint *)GEN_TOP(((int)this + 0x318))) = param_1[8];
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_FWD,(*param_1 & 0xffffff) + (int)param_1);
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_ARG,(int)param_1 + (param_1[1] & 0xffffff) + 4);
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x144))) GEN_EDX_ARG,(int)param_1 + (param_1[2] & 0xffffff) + 8);
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x2e8))) = ((undefined *)GEN_TOP(((int)this + 0xf0)));
  if (*((char *)GEN_TOP(((int)this + 800))) == '\x02') {
    *((uint *)GEN_TOP(((int)this + 0x314))) = param_1[6];
  }
  uVar5 = param_1[4];
  puVar1 = param_1 + 5;
  ((int *)(gen_frame + 0x0))[0] = (int)param_1 + (param_1[3] & 0xffffff) + 0xc;
  ((int *)(gen_frame + 0x0))[1] = (int)param_1 + (uVar5 & 0xffffff) + 0x10;
  param_1 = ((uint *)GEN_TOP(((int)param_1 + 0x36)));
  ((int *)(gen_frame + 0x0))[2] = (*puVar1 & 0xffffff) + (int)puVar1;
  ((int *)(gen_frame + 0x0))[3] = 0;
  ((int *)(gen_frame + 0x0))[4] = 0;
  puVar6 = ((undefined1 *)GEN_TOP(((int)this + 0x3a6)));
  do {
    sVar2 = *(short *)param_1;
    *(short *)(puVar6 - 2) = sVar2;
    if ((sVar2 == 0) || (iVar3 = ((int *)(gen_frame + 0x0))[(int)(((int *)(gen_frame + 0x0))[4])], iVar3 == 0)) {
      *puVar6 = 0;
      uVar5 = ((int *)(gen_frame + 0x0))[4];
    }
    else {
      *puVar6 = 1;
      F_0042e430(puVar6 - 0x56 GEN_EDX_ARG,iVar3);
      uVar5 = ((int *)(gen_frame + 0x0))[4];
    }
    param_1 = ((uint *)GEN_TOP(((int)param_1 + 2)));
    puVar6 = puVar6 + 0x58;
    ((int *)(gen_frame + 0x0))[4] = uVar5 + 1;
  } while (uVar5 + 1 < 4);
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x198))) GEN_EDX_ARG,(*puVar4 & 0xffffff) + (int)puVar4);
  *((undefined4 *)GEN_TOP(((int)this + 0x330))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x334))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x338))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x344))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x348))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34c))) = 0;
  *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) & 0xffffffbf;
  if (*((int *)GEN_TOP(((int)this + 0x318))) != 0) {
    F_00b07c70(this GEN_EDX_ARG);
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x323))) = *((undefined1 *)GEN_TOP(((int)puVar4 + 0x3f)));
  *((char *)GEN_TOP(((int)this + 0x324))) = (char)puVar4[0x10];
  *((undefined1 *)GEN_TOP(((int)this + 0x325))) = *((undefined1 *)GEN_TOP(((int)puVar4 + 0x41)));
  if (*((char *)GEN_TOP(((int)puVar4 + 0x42))) == '\0') {
    *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) | 0x800;
  }
  else {
    *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) & 0xfffff7ff;
  }
  if (*((char *)GEN_TOP(((int)puVar4 + 0x42))) == '\0') {
    *((byte *)GEN_TOP(((int)this + 0x54e))) = *((byte *)GEN_TOP(((int)this + 0x54e))) | 2;
    *((byte *)GEN_TOP(((int)this + 0x5ea))) = *((byte *)GEN_TOP(((int)this + 0x5ea))) | 2;
    *((byte *)GEN_TOP(((int)this + 0x686))) = *((byte *)GEN_TOP(((int)this + 0x686))) | 2;
    *((byte *)GEN_TOP(((int)this + 0x722))) = *((byte *)GEN_TOP(((int)this + 0x722))) | 2;
  }
  return 0;
}

/* ref: FUN_00b08b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b08b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb08b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_8;
  
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x1c))) >> 7;
  if (((uVar4 & 1) != 0) &&
     ((*((byte *)GEN_TOP(((int)this + 0x2f8))) == 2 || (uVar4 = *((byte *)GEN_TOP(((int)this + 0x2f8))) - 8, uVar4 == 0)))
     ) {
    uVar4 = *((uint *)GEN_TOP(((int)this + 0x20)));
    uVar5 = *((uint *)GEN_TOP(((int)this + 0x28)));
    iVar1 = *((int *)GEN_TOP(((int)this + 0x24)));
    iVar2 = *((int *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x218)));
    iVar3 = *((int *)GEN_TOP(((int)this + 0x2c)));
    *((uint *)GEN_TOP((iVar2 + 0x2f0))) = uVar5 + uVar4;
    *((int *)GEN_TOP((iVar2 + 0x2ec))) = iVar1;
    *((uint *)GEN_TOP((iVar2 + 0x2e8))) = uVar4;
    *((uint *)GEN_TOP((iVar2 + 0x2f4))) = iVar3 + iVar1 + (uint)CARRY4(uVar5,uVar4);
    *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x2f8))) + 0x60))) = (uint)*((byte *)GEN_TOP(((int)this + 0x2fd)));
    uVar5 = 0;
    uVar4 = (int)this + 0x350;
    local_8 = 0;
    do {
      if (*((char *)GEN_TOP((uVar4 + 0x56))) != '\0') {
        F_00b074a0(this GEN_EDX_FWD,uVar4,local_8,uVar5 + 0x140 + *((int *)GEN_TOP((iVar2 + 0x2f8))));
      }
      local_8 = local_8 + 1;
      uVar4 = uVar4 + 0x58;
      uVar5 = uVar5 + 0x140;
    } while (uVar5 < 0x500);
  }
  return uVar4;
}

/* ref: FUN_00b08c50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b08c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb08c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*((char *)GEN_TOP(((int)this + 800))) == '\x02') && (*((int *)GEN_TOP(((int)this + 0x314))) != 0)) {
    cVar1 = *((char *)GEN_TOP(((int)this + 0x2f9)));
    uVar2 = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 0x2f9))) = uVar2;
    if (cVar1 != (char)uVar2) {
      REFG(undefined4, 0x14a458f) = 1;
    }
  }
  else {
    *((undefined4 *)GEN_TOP(((int)this + 0x2f9))) = *param_1;
  }
  uVar3 = REFG(undefined4, 0x14c0cf8);
  if (*((undefined * PTR32 *)GEN_TOP((REFG(undefined4, 0x14c0cf8) + 0x21c))) == this) {
    uVar3 = F_00b08b80(this GEN_EDX_FWD);
    F_00a69750(&REFG(undefined4, 0x14b11f8) GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_00b08cb0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b08cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb08cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  undefined1 * puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  this_00 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x218)));
  uVar2 = F_0042a990((int)this + 0x9c GEN_EDX_FWD);
  F_006f7250(this_00 GEN_EDX_ARG,uVar2);
  iVar3 = *((int *)GEN_TOP(((int)this + 0x2e8)));
  if (iVar3 == 0) {
    iVar3 = (int)this + 0x48;
  }
  uVar2 = F_0042a990(iVar3 GEN_EDX_ARG);
  F_0042e430(((undefined *)GEN_TOP(((int)this_00 + 0x23c))) GEN_EDX_ARG,uVar2);
  *((undefined4 *)GEN_TOP(((int)this_00 + 0x3c))) = *((undefined4 *)GEN_TOP(((int)this + 0x30c)));
  *((uint *)GEN_TOP(((int)this_00 + 0x310))) = (uint)*((byte *)GEN_TOP(((int)this + 0x321)));
  F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00ab3e10(3,((undefined1 *)(gen_frame + 0x0)));
  puVar1 = *((undefined1 * PTR32 *)GEN_TOP(((int)this_00 + 0x2f8)));
  *(undefined4 *)(puVar1 + 4) = 5;
  F_0042ccf0(puVar1 + 8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  *puVar1 = 1;
  uVar2 = 0x140;
  iVar3 = (int)this + 0x350;
  do {
    if (*((char *)GEN_TOP((iVar3 + 0x56))) == '\0') {
      *((undefined1 *)GEN_TOP((uVar2 + *((int *)GEN_TOP(((int)this_00 + 0x2f8)))))) = 0;
    }
    else {
      F_0042ccf0(((undefined *)GEN_TOP((uVar2 + 8 + *((int *)GEN_TOP(((int)this_00 + 0x2f8)))))) GEN_EDX_ARG,iVar3);
      *((undefined1 *)GEN_TOP((uVar2 + *((int *)GEN_TOP(((int)this_00 + 0x2f8)))))) = 1;
    }
    uVar2 = uVar2 + 0x140;
    iVar3 = iVar3 + 0x58;
  } while (uVar2 < 0x640);
  F_00b08b80(this GEN_EDX_ARG);
  F_00a69750(&REFG(undefined4, 0x14b11f8) GEN_EDX_ARG);
  uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)uVar4;
}

/* ref: FUN_00b08dc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b08dc0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb08dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL(0x50, 0);
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  float * pfVar7;
  undefined * pvVar8;
  int * piVar9;
  bool bVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  
  if (param_2 != *((char *)GEN_TOP(((int)param_1 + 0x2f8)))) {
    (*(float *)(gen_frame + 0x3c)) = 2.8026e-45;
    piVar9 = &REFG(undefined4, 0x14a31f4);
    do {
      if ((((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) - 2U < 0x158) && (iVar4 = piVar9[-1], iVar4 != 0)) &&
         (*((short *)GEN_TOP((iVar4 + 0xe8))) == *((short *)GEN_TOP(((int)param_1 + 0x18))))) {
        if ((*((int *)GEN_TOP(((int)param_1 + 0x10))) == -0x20000000) ||
           (*((int *)GEN_TOP(((int)param_1 + 0x10))) != *((int *)GEN_TOP((iVar4 + 0x74))))) {
          if ((*((int *)GEN_TOP(((int)param_1 + 0x14))) != -0x20000000) &&
             (*((int *)GEN_TOP(((int)param_1 + 0x14))) == *((int *)GEN_TOP((iVar4 + 0x74))))) {
            *((byte *)GEN_TOP((iVar4 + 0x8f))) = *((byte *)GEN_TOP((iVar4 + 0x8f))) | 4;
          }
        }
        else {
          *((byte *)GEN_TOP((iVar4 + 0x8f))) = *((byte *)GEN_TOP((iVar4 + 0x8f))) | 4;
        }
      }
      if (((((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) - 1U < 0x158) && (iVar4 = *piVar9, iVar4 != 0)) &&
          (*((short *)GEN_TOP((iVar4 + 0xe8))) == *((short *)GEN_TOP(((int)param_1 + 0x18))))) &&
         (((*((int *)GEN_TOP(((int)param_1 + 0x10))) != -0x20000000 &&
           (*((int *)GEN_TOP(((int)param_1 + 0x10))) == *((int *)GEN_TOP((iVar4 + 0x74))))) ||
          ((*((int *)GEN_TOP(((int)param_1 + 0x14))) != -0x20000000 &&
           (*((int *)GEN_TOP(((int)param_1 + 0x14))) == *((int *)GEN_TOP((iVar4 + 0x74))))))))) {
        *((byte *)GEN_TOP((iVar4 + 0x8f))) = *((byte *)GEN_TOP((iVar4 + 0x8f))) | 4;
      }
      if (((((uint)gen_fl2bits((*(float *)(gen_frame + 0x3c))) < 0x158) && (iVar4 = piVar9[1], iVar4 != 0)) &&
          (*((short *)GEN_TOP((iVar4 + 0xe8))) == *((short *)GEN_TOP(((int)param_1 + 0x18))))) &&
         (((*((int *)GEN_TOP(((int)param_1 + 0x10))) != -0x20000000 &&
           (*((int *)GEN_TOP(((int)param_1 + 0x10))) == *((int *)GEN_TOP((iVar4 + 0x74))))) ||
          ((*((int *)GEN_TOP(((int)param_1 + 0x14))) != -0x20000000 &&
           (*((int *)GEN_TOP(((int)param_1 + 0x14))) == *((int *)GEN_TOP((iVar4 + 0x74))))))))) {
        *((byte *)GEN_TOP((iVar4 + 0x8f))) = *((byte *)GEN_TOP((iVar4 + 0x8f))) | 4;
      }
      if (((((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 1U < 0x158) && (iVar4 = piVar9[2], iVar4 != 0)) &&
          (*((short *)GEN_TOP((iVar4 + 0xe8))) == *((short *)GEN_TOP(((int)param_1 + 0x18))))) &&
         (((*((int *)GEN_TOP(((int)param_1 + 0x10))) != -0x20000000 &&
           (*((int *)GEN_TOP(((int)param_1 + 0x10))) == *((int *)GEN_TOP((iVar4 + 0x74))))) ||
          ((*((int *)GEN_TOP(((int)param_1 + 0x14))) != -0x20000000 &&
           (*((int *)GEN_TOP(((int)param_1 + 0x14))) == *((int *)GEN_TOP((iVar4 + 0x74))))))))) {
        *((byte *)GEN_TOP((iVar4 + 0x8f))) = *((byte *)GEN_TOP((iVar4 + 0x8f))) | 4;
      }
      uVar6 = (int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 2;
      piVar9 = piVar9 + 4;
      (*(float *)(gen_frame + 0x3c)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 4);
    } while (uVar6 < 0x158);
  }
  *((char *)GEN_TOP(((int)param_1 + 0x2f8))) = param_2;
  if (((param_2 == '\b') && (**((char * PTR32 *)GEN_TOP(((int)param_1 + 0x144))) != '\0')) &&
     (*((int *)GEN_TOP(((int)param_1 + 0x2e8))) = (int)param_1 + 0x144,
     *((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) == param_1)) {
    iVar4 = *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x218)));
    uVar6 = F_0042a990((int)param_1 + 0x144 GEN_EDX_FWD);
    F_0042e430(((undefined *)GEN_TOP((iVar4 + 0x23c))) GEN_EDX_ARG,uVar6);
    F_00a69750(&REFG(undefined4, 0x14b11f8) GEN_EDX_ARG);
  }
  cVar3 = *((char *)GEN_TOP(((int)param_1 + 0x2f8)));
  if (cVar3 == '\x02') {
    bVar5 = F_00b08260(param_1 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x0)));
    if ((bVar5 != 0) && (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)))) {
      pfVar7 = ((float *)GEN_TOP(F_00a5feb0(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG)));
      (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar7 - (float10)(*(float *)(gen_frame + 0x10)));
      (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar7[1] - (float10)(*(float *)(gen_frame + 0x14)));
      (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar7[2] - (float10)(*(float *)(gen_frame + 0x18)));
      fVar12 = GEN_X87((float10)(float)((float10)pfVar7[2] - (float10)(*(float *)(gen_frame + 0x18))));
      fVar13 = GEN_X87((float10)(float)((float10)*pfVar7 - (float10)(*(float *)(gen_frame + 0x10))));
      fVar1 = (float)(fVar13 * fVar13 + fVar12 * fVar12);
      (*(float *)(gen_frame + 0x3c)) = fVar1;
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0)));
      (*(float *)(gen_frame + 0x3c)) = fVar2;
      if ((float10)fVar1 < (float10)fVar2) {
        fVar1 = ((float)GEN_TOF(ABS((float10)(float)((float10)pfVar7[1] - (float10)(*(float *)(gen_frame + 0x14))))));
        (*(float *)(gen_frame + 0x3c)) = fVar1;
        fVar12 = (float10)fVar1;
        fVar13 = (float10)(*(float *)(gen_frame + 0x4));
        bVar11 = (GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) || fVar13 == fVar12;
        bVar10 = !(fVar12 <= fVar13);
        goto LAB_00b09027;
      }
      goto LAB_00b09029;
    }
  }
  else {
    bVar10 = cVar3 == '\x06';
    bVar11 = cVar3 == '\a';
LAB_00b09027: ;
    if (bVar10 || bVar11) {
LAB_00b09029: ;
      if (REFG(short, 0x14ab148) != 0) {
        F_00a51200(0x58,(uint)*((ushort *)GEN_TOP(((int)param_1 + 0x18))),0,0,0);
      }
    }
  }
  if (*((byte *)GEN_TOP(((int)param_1 + 0x2f8))) == 4) {
    pvVar8 = ((undefined *)GEN_TOP(0x0));
    if ((*((byte *)GEN_TOP(((int)param_1 + 0x1c))) & 1) == 0) goto LAB_00b0909a;
    bVar5 = *((byte *)GEN_TOP(((int)param_1 + 0x324)));
  }
  else {
    pvVar8 = ((undefined *)GEN_TOP((*((byte *)GEN_TOP(((int)param_1 + 0x2f8))) - 5)));
    if ((pvVar8 != ((undefined *)GEN_TOP(0x0))) || ((*((byte *)GEN_TOP(((int)param_1 + 0x1c))) & 1) == 0)) goto LAB_00b0909a;
    bVar5 = *((byte *)GEN_TOP(((int)param_1 + 0x325)));
  }
  if (((bVar5 != 0) && (pvVar8 = REFG(void * PTR32, 0x1379694), REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)))) &&
     (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379694) + 0x18a))) != '\x10')) {
    F_006b8c00();
    pvVar8 = ((undefined *)GEN_TOP(F_006c6500((uint)bVar5)));
  }
LAB_00b0909a: ;
  if ((*((uint *)GEN_TOP(((int)param_1 + 0x1c))) >> 7 & 1) != 0) {
    if (*((byte *)GEN_TOP(((int)param_1 + 0x2f8))) == 2) {
      return 0;
    }
    pvVar8 = ((undefined *)GEN_TOP((*((byte *)GEN_TOP(((int)param_1 + 0x2f8))) - 8)));
    if (pvVar8 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
  }
  if ((*((byte *)GEN_TOP(((int)param_1 + 0x1c))) & 1) != 0) {
    *((uint *)GEN_TOP(((int)param_1 + 0x1c))) = *((uint *)GEN_TOP(((int)param_1 + 0x1c))) & 0xfffffffe;
    pvVar8 = REFG(void * PTR32, 0x14c0cf8);
    *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x232))) = *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x232))) - 1;
  }
  return (uint)pvVar8;
}

/* ref: FUN_00b090e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b090e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb090e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      if (param_3 == 0xb3) {
        F_00b08980(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + uVar1 * 4))) + 4))));
        *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) | 0x80;
        F_00a51200(0x55,(uint)*((ushort *)GEN_TOP(((int)this + 0x18))),0,0,0);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  return;
}

/* ref: FUN_00b09140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b09140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb09140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c4d027(((undefined *)GEN_TOP(((int)this + 0x2fd))),0xd,param_1,0xd);
  if (*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x21c))) == this) {
    uVar1 = F_00b08b80(this GEN_EDX_ARG);
    F_00a69750(&REFG(undefined4, 0x14b11f8) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: Client::Game::Fate::FateDirector::vf122 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b09190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb09190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar1 = F_00b083c0(REFG(void * PTR32, 0x14c0cf8) GEN_EDX_FWD,param_1,param_2);
  if (uVar1 != 0) {
    puVar2 = ((undefined4 *)GEN_TOP((param_1 + 0xc)));
    uVar3 = uVar1;
    do {
      *puVar2 = **(undefined4 * PTR32 *)(this + 0x1d4);
      puVar2 = puVar2 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar1;
}

/* ref: Client::Game::Fate::FateDirector::vf112 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b091d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb091d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x220)));
  while( true ) {
    if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x224)))) {
      return 0;
    }
    if (*((short *)GEN_TOP(((int)*puVar1 + 0x18))) == *((short *)GEN_TOP((param_1 + 0xe8)))) break;
    puVar1 = puVar1 + 1;
  }
  uVar2 = F_00b07670(((undefined *)GEN_TOP(*puVar1)) GEN_EDX_FWD,param_1);
  return uVar2;
}

/* ref: FUN_00b09220 */
GEN_OWN GEN_FRAME uint F_00b09220(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb09220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x220)));
  if (puVar1 != *((undefined4 * PTR32 *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x224)))) {
    while (*((short *)GEN_TOP(((int)*puVar1 + 0x18))) != (short)param_1) {
      puVar1 = puVar1 + 1;
      if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x224)))) {
        return (uint)puVar1;
      }
    }
    puVar1 = ((undefined4 *)GEN_TOP(F_00b07fe0(((undefined *)GEN_TOP(*puVar1)) GEN_EDX_ARG,param_2)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00b09260 */
GEN_OWN GEN_FRAME uint F_00b09260(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb09260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x220)));
  if (puVar1 != *((undefined4 * PTR32 *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x224)))) {
    while (*((short *)GEN_TOP(((int)*puVar1 + 0x18))) != (short)param_1) {
      puVar1 = puVar1 + 1;
      if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x224)))) {
        return (uint)puVar1;
      }
    }
    puVar1 = ((undefined4 *)GEN_TOP(F_00b080e0(((undefined *)GEN_TOP(*puVar1)) GEN_EDX_ARG,param_2)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00b092a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b092a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb092a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x220)));
  if (piVar1 != *((int * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
    while (*((short *)GEN_TOP((*piVar1 + 0x18))) != (short)param_1) {
      piVar1 = piVar1 + 1;
      if (piVar1 == *((int * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
        return (uint)piVar1;
      }
    }
    piVar1 = ((int *)GEN_TOP(F_00b08dc0(*piVar1 GEN_EDX_FWD,(undefined1)param_2)));
  }
  return (uint)piVar1;
}

/* ref: FUN_00b092e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b092e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb092e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  short sVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  sVar1 = *((short *)GEN_TOP((param_1 + 0xe8)));
  if ((sVar1 != 0) && (uVar3 = F_00a62220(param_1), (char)uVar3 != '\0')) {
    for (piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x220))); piVar4 != *((int * PTR32 *)GEN_TOP(((int)this + 0x224)));
        piVar4 = piVar4 + 1) {
      iVar2 = *piVar4;
      if (*((short *)GEN_TOP((iVar2 + 0x18))) == sVar1) {
        if ((*((uint *)GEN_TOP((iVar2 + 0x1c))) >> 7 & 1) == 0) {
          return 0;
        }
        if ((*((char *)GEN_TOP((iVar2 + 0x2f8))) != '\x02') && (*((char *)GEN_TOP((iVar2 + 0x2f8))) != '\b')) {
          return 0;
        }
        return 0xf05a;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b09350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b09350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb09350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  uint in_EAX = 0;
  uint uVar1;
  
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x21c))) = param_1;
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00b08cb0(param_1 GEN_EDX_FWD);
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x218)));
    if (REFG(undefined4, 0x14b11f8) == uVar1) {
      uVar1 = F_00a79840(&REFG(undefined4, 0x14b11f8) GEN_EDX_ARG,uVar1);
    }
    F_00a69770(&REFG(undefined4, 0x14b11f8) GEN_EDX_ARG);
    return uVar1;
  }
  F_00a69780(&REFG(undefined4, 0x14b11f8) GEN_EDX_ARG);
  return in_EAX;
}

/* ref: FUN_00b093a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b093a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb093a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x220)));
  if (puVar1 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
    while (*((short *)GEN_TOP(((int)*puVar1 + 0x18))) != (short)param_1) {
      puVar1 = puVar1 + 1;
      if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
        return (uint)puVar1;
      }
    }
    puVar1 = ((undefined4 *)GEN_TOP(F_00b08c50(((undefined *)GEN_TOP(*puVar1)) GEN_EDX_FWD,param_2)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00b093e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b093e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb093e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this_00;
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x220)));
  if (puVar1 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
    while (this_00 = ((undefined *)GEN_TOP(*puVar1)), *((short *)GEN_TOP(((int)this_00 + 0x18))) != (short)param_1) {
      puVar1 = puVar1 + 1;
      if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
        return (uint)puVar1;
      }
    }
    puVar1 = ((undefined4 *)GEN_TOP(F_00c4d027(((undefined *)GEN_TOP(((int)this_00 + 0x2fd))),0xd,param_2,0xd)));
    if (*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x21c))) == this_00) {
      puVar1 = ((undefined4 *)GEN_TOP(F_00b08b80(this_00 GEN_EDX_ARG)));
      F_00a69750(&REFG(undefined4, 0x14b11f8) GEN_EDX_ARG);
    }
  }
  return (uint)puVar1;
}

/* ref: FUN_00b09450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b09450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb09450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint * puVar2;
  
  puVar2 = *((uint * PTR32 *)GEN_TOP(((int)this + 0x220)));
  if (puVar2 != *((uint * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
    do {
      uVar1 = *puVar2;
      if (*((short *)GEN_TOP((uVar1 + 0x18))) == (short)param_1) {
        if (*((uint *)GEN_TOP(((int)this + 0x21c))) == uVar1) {
          *((undefined4 *)GEN_TOP(((int)this + 0x21c))) = 0;
          F_00a69780(&REFG(undefined4, 0x14b11f8) GEN_EDX_FWD);
        }
        F_00c46e20(puVar2,puVar2 + 1,(*((int *)GEN_TOP(((int)this + 0x224))) - (int)(puVar2 + 1) >> 2) * 4);
        *((int *)GEN_TOP(((int)this + 0x224))) = *((int *)GEN_TOP(((int)this + 0x224))) - 4;
        return uVar1;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != *((uint * PTR32 *)GEN_TOP(((int)this + 0x224))));
  }
  return 0;
}

/* ref: FUN_00b094e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b094e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb094e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * pvVar4;
  ulonglong uVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ecff8));
  if (((*((char *)GEN_TOP(((int)this + 800))) == '\x02') && (*((int *)GEN_TOP(((int)this + 0x314))) != 0)) &&
     (*((char *)GEN_TOP(((int)this + 0x2f9))) != '\0')) {
    *((undefined4 *)GEN_TOP(((int)this + 0x2f9))) = 0;
    REFG(undefined4, 0x14a458f) = 1;
  }
  if ((*((byte *)GEN_TOP(((int)this + 0x1c))) & 1) != 0) {
    *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) & 0xfffffffe;
    if (REFG(int, 0x14c0cf8) != 0) {
      *((char *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x232))) = *((char *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x232))) - 1;
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x4b4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x4b0)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x4b4))));
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x4b4)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x4b4))) = 0;
    }
  }
  if ((*((uint *)GEN_TOP(((int)this + 0x1c))) >> 4 & 1) != 0) {
    F_00ab6920();
  }
  iVar3 = 3;
  pvVar4 = ((undefined *)GEN_TOP(((int)this + 0x738)));
  do {
    pvVar4 = ((undefined *)GEN_TOP(((int)pvVar4 - 0x9c)));
    F_0042c880(pvVar4 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  pvVar4 = ((undefined *)GEN_TOP(((int)this + 0x4b0)));
  iVar3 = 3;
  do {
    pvVar4 = ((undefined *)GEN_TOP(((int)pvVar4 - 0x58)));
    F_0042c880(pvVar4 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  pvVar4 = ((undefined *)GEN_TOP(((int)this + 0x2e8)));
  iVar3 = 7;
  do {
    pvVar4 = ((undefined *)GEN_TOP(((int)pvVar4 - 0x54)));
    F_0042c880(pvVar4 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00b0e900(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
  uVar5 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x30))),8,0x321);
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  return (uint)uVar5;
}

/* ref: FUN_00b09600 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b09600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb09600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 * this_00;
  
  *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) & 0xffffffdf;
  uVar1 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0xb3);
  *((uint *)GEN_TOP(((int)this + 0x4b0))) = uVar1;
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    this_00 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,1,0xb3);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10ecd64));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xb090e0));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x4b4))) = this_00;
  F_00cb4540(this_00 GEN_EDX_ARG,0,(uint)*((ushort *)GEN_TOP(((int)this + 0x18))));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x4b0))) + 0x48))))
            (*((int * PTR32 *)GEN_TOP(((int)this + 0x4b0))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x4b4))));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xe0000000;
  return 0xe0000000;
}

/* ref: FUN_00b096a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b096a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb096a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x40))) + *((int *)GEN_TOP(((int)this + 0x3c)));
  uVar1 = F_00b0f140(((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 0x30))),0,
                       *((undefined4 *)GEN_TOP(((int)this + 0x3c))),*((undefined4 *)GEN_TOP(((int)this + 0x30))),0,iVar2,
                       &(*(undefined4 *)&gen_args[0]));
  return *((int *)GEN_TOP((uVar1 + 8))) != iVar2;
}

/* ref: FUN_00b09710 */
GEN_OWN GEN_FRAME uint F_00b09710(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb09710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00b09450(REFG(void * PTR32, 0x14c0cf8) GEN_EDX_ARG,param_1)));
  uVar2 = 0;
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
  }
  return uVar2;
}

/* ref: FUN_00b09740 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b09740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb09740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x220)));
  do {
    if (piVar6 == *((int * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
      return 0;
    }
    iVar2 = *piVar6;
    uVar4 = *((uint *)GEN_TOP((iVar2 + 0x3c)));
    piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x30)));
    uVar5 = *((int *)GEN_TOP((iVar2 + 0x40))) + uVar4;
    if ((((piVar1 == ((int *)GEN_TOP(0x0))) || (piVar1 == ((int *)GEN_TOP(0x0)))) || (((int *)GEN_TOP(*piVar1)) == ((int *)GEN_TOP(0x0)))) ||
       (piVar1 = *((int * PTR32 *)GEN_TOP(*piVar1)), piVar1 == ((int *)GEN_TOP(0x0)))) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if (uVar4 != uVar5) {
      do {
        uVar3 = uVar4 >> 2;
        if (*((uint *)GEN_TOP((iVar2 + 8))) <= uVar3) {
          uVar3 = uVar3 - *((uint *)GEN_TOP((iVar2 + 8)));
        }
      } while ((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 4))) + uVar3 * 4))) + (uVar4 & 3) * 4))) != param_1) &&
              (uVar4 = uVar4 + 1, uVar4 != uVar5));
      if (uVar4 != uVar5) {
        return 1;
      }
    }
    piVar6 = piVar6 + 1;
  } while( true );
}

/* ref: FUN_00b097f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b097f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb097f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  ulonglong uVar6;
  
  piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if (piVar5 != *((int * PTR32 *)GEN_TOP(((int)this + 8)))) {
    do {
      if (*piVar5 != 0) {
        piVar1 = *(int * PTR32 *)this;
        if (piVar1 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_FWD,*piVar5);
        }
        puVar2 = ((undefined4 *)GEN_TOP(*piVar5));
        if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
          *piVar5 = 0;
        }
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != *((int * PTR32 *)GEN_TOP(((int)this + 8))));
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  if (iVar3 != *((int *)GEN_TOP(((int)this + 8)))) {
    F_00c46e20(iVar3,*((int *)GEN_TOP(((int)this + 8))),0);
    *((int *)GEN_TOP(((int)this + 8))) = iVar3;
  }
  piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar5 != *((int * PTR32 *)GEN_TOP(((int)this + 0x18)))) {
    do {
      if (*piVar5 != 0) {
        piVar1 = *(int * PTR32 *)this;
        if (piVar1 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG,*piVar5);
        }
        puVar2 = ((undefined4 *)GEN_TOP(*piVar5));
        if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
          *piVar5 = 0;
        }
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != *((int * PTR32 *)GEN_TOP(((int)this + 0x18))));
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0x14)));
  if (iVar3 != *((int *)GEN_TOP(((int)this + 0x18)))) {
    F_00c46e20(iVar3,*((int *)GEN_TOP(((int)this + 0x18))),0);
    *((int *)GEN_TOP(((int)this + 0x18))) = iVar3;
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0x14)));
  if (iVar3 != 0) {
    F_00429760(iVar3,(*((int *)GEN_TOP(((int)this + 0x1c))) - iVar3 >> 2) * 4,0x321);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar6 = F_00429760(iVar3,(*((int *)GEN_TOP(((int)this + 0xc))) - iVar3 >> 2) * 4,0x321);
    uVar4 = (uint)uVar6;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return uVar4;
}

/* ref: FUN_00b09920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b09920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb09920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ecff8));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x18))) = (undefined2)param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x30)));
  *puVar3 = 0;
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x321)));
  *puVar3 = puVar1;
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar3)) = puVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  iVar2 = (int)this + 0x48;
  param_1 = 7;
  do {
    F_0042b630(iVar2 GEN_EDX_ARG);
    iVar2 = iVar2 + 0x54;
    param_1 = param_1 - 1;
  } while (-1 < param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x2e8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2f4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2f8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x310))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x314))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x318))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x31c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 800))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x324))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x340))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x344))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x348))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34c))) = 0;
  iVar2 = (int)this + 0x350;
  param_1 = 3;
  do {
    F_0042b630(iVar2 GEN_EDX_ARG);
    iVar2 = iVar2 + 0x58;
    param_1 = param_1 - 1;
  } while (-1 < param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x4b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4b4))) = 0;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x4b8)));
  param_1 = 3;
  do {
    *puVar3 = 0;
    puVar3[1] = 0xe0000000;
    puVar3[2] = 0;
    F_0042b630(puVar3 + 4 GEN_EDX_ARG);
    F_00a6a7a0(puVar3 + 0x19 GEN_EDX_ARG,0,0);
    *(undefined1 *)(puVar3 + 0x26) = 0;
    puVar3 = puVar3 + 0x27;
    param_1 = param_1 - 1;
  } while (-1 < param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x2f9))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2fd))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x301))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x305))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x309))) = 0;
  return (uint)this;
}

/* ref: FUN_00b09ab0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b09ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb09ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  if (*((char *)GEN_TOP(((int)this + 800))) != '\x02') {
    return 1;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD);
  if (((1 < (int)uVar2) && (3 < (int)uVar2)) && (uVar2 == 7)) {
    bVar1 = F_00b096a0(this GEN_EDX_ARG,param_1[0x1d]);
    return bVar1 == 0;
  }
  return 1;
}

/* ref: FUN_00b09b10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b09b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb09b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if ((short)param_1[0x3a] == 0) {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x220)));
    if (puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
      while ((((this_00 = ((undefined *)GEN_TOP(*puVar3)), *((char *)GEN_TOP(((int)this_00 + 800))) != '\x02' ||
               (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD), (int)uVar2 < 2)) || ((int)uVar2 < 4))
             || ((uVar2 != 7 || (bVar1 = F_00b096a0(this_00 GEN_EDX_ARG,param_1[0x1d]), bVar1 == 0))))) {
        puVar3 = puVar3 + 1;
        if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
          return 1;
        }
      }
      return 0;
    }
  }
  else {
    for (puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x220))); puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x224)))
        ; puVar3 = puVar3 + 1) {
      if (*((short *)GEN_TOP(((int)*puVar3 + 0x18))) == (short)param_1[0x3a]) {
        bVar1 = F_00b09ab0(((undefined *)GEN_TOP(*puVar3)) GEN_EDX_ARG,param_1);
        return bVar1;
      }
    }
  }
  return 1;
}

/* ref: FUN_00b09be0 */
GEN_OWN GEN_FRAME uint F_00b09be0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb09be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined * pvVar1;
  
  pvVar1 = ((undefined *)GEN_TOP(F_00406b90(0x730,0,0)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = ((undefined *)GEN_TOP(F_00b09920(pvVar1 GEN_EDX_ARG,param_1)));
    F_00b09600(pvVar1 GEN_EDX_ARG);
    return (uint)pvVar1;
  }
  F_00b09600(((undefined *)GEN_TOP(0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf116 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b09c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb09c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00b09b10(REFG(void * PTR32, 0x14c0cf8) GEN_EDX_FWD,param_1);
  return bVar1;
}

/* ref: FUN_00b09c30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b09c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb09c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)this;
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if (piVar3 != piVar1) {
    while (piVar2 = piVar3, *piVar3 != param_1) {
      piVar3 = piVar3 + 2;
      if (piVar3 == piVar1) {
        return (uint)piVar3;
      }
    }
    while (piVar3 = piVar3 + 2, piVar3 != piVar1) {
      *piVar2 = *piVar3;
      piVar2[1] = piVar3[1];
      piVar2 = piVar2 + 2;
    }
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 8;
  }
  return (uint)piVar3;
}

/* ref: FUN_00b09cd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b09cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb09cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x3c))) + *((int *)GEN_TOP(((int)this + 0x40)));
  uVar1 = F_00b0f4a0(((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 0x30))),0,
                       *((undefined4 *)GEN_TOP(((int)this + 0x3c))),*((undefined4 *)GEN_TOP(((int)this + 0x30))),0,iVar3,
                       &(*(uint *)&gen_args[0]));
  if (*((int *)GEN_TOP((uVar1 + 8))) == iVar3) {
    if (2 < *((uint *)GEN_TOP(((int)this + 0x40)))) {
      piVar2 = ((int *)GEN_TOP(F_00b0f700(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG)));
      if (*piVar2 == -0x20000000) {
        uVar1 = 0;
      }
      else {
        uVar1 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,*piVar2,0);
      }
      if ((*((int *)GEN_TOP(((int)this + 0x40))) != 0) &&
         (iVar3 = *((int *)GEN_TOP(((int)this + 0x40))) - 1, *((int *)GEN_TOP(((int)this + 0x40))) = iVar3, iVar3 == 0))
      {
        *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
      }
      if (uVar1 != 0) {
        *((byte *)GEN_TOP((uVar1 + 0x8f))) = *((byte *)GEN_TOP((uVar1 + 0x8f))) | 8;
      }
    }
    F_00b0fbe0(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG,&(*(uint *)&gen_args[0]));
    uVar1 = (*(uint *)&gen_args[0]);
    if ((*(uint *)&gen_args[0]) != 0xe0000000) {
      uVar1 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,(*(uint *)&gen_args[0]),0);
      if (uVar1 != 0) {
        *((byte *)GEN_TOP((uVar1 + 0x8f))) = *((byte *)GEN_TOP((uVar1 + 0x8f))) | 8;
      }
    }
  }
  return uVar1;
}

/* ref: Client::Game::Fate::FateDirector::vf45 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b09da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb09da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar2 = ((int *)GEN_TOP(REFG(int * PTR32, 0x14c0cf8)[1]));
  piVar4 = ((int *)GEN_TOP(*REFG(int * PTR32, 0x14c0cf8)));
  piVar1 = REFG(int * PTR32, 0x14c0cf8) + 1;
  if (piVar4 != piVar2) {
    while (piVar3 = piVar4, *piVar4 != *((int *)GEN_TOP((param_1 + 0x74)))) {
      piVar4 = piVar4 + 2;
      if (piVar4 == piVar2) {
        return 0;
      }
    }
    while (piVar3 = piVar3 + 2, piVar3 != piVar2) {
      *piVar4 = *piVar3;
      piVar4[1] = piVar3[1];
      piVar4 = piVar4 + 2;
    }
    *piVar1 = *piVar1 - 8;
  }
  return 0;
}

/* ref: FUN_00b09e00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b09e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb09e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  F_00b0fab0(((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,0x20);
  F_00b0fab0(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG,0x20);
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x34))),0,0x180);
  *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1bc))) = 0;
  F_0042b630((int)this + 0x1c4 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x218))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x21c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x220))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x224))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x228))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x230))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x232))) = 0;
  F_00b100f0(((undefined *)GEN_TOP(((int)this + 0x1b4))) GEN_EDX_ARG,8);
  return (uint)this;
}

/* ref: FUN_00b09eb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b09eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb09eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  ulonglong uVar6;
  
  piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 0x220)));
  if (piVar5 != *((int * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
    do {
      puVar3 = ((undefined4 *)GEN_TOP(*piVar5));
      if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_FWD,1);
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != *((int * PTR32 *)GEN_TOP(((int)this + 0x224))));
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x220)));
  if (iVar1 != *((int *)GEN_TOP(((int)this + 0x224)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 0x224))),0);
    *((int *)GEN_TOP(((int)this + 0x224))) = iVar1;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x220)));
  if (iVar1 != 0) {
    F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x228))) - iVar1 >> 2) * 4,0x321);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x220))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x224))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x228))) = 0;
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x1c4))) GEN_EDX_ARG);
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1b4)));
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1b8)));
    for (; puVar3 != puVar2; puVar3 = puVar3 + 0x12) {
      *puVar3 = 0xe0000000;
    }
    F_00429760(*((int *)GEN_TOP(((int)this + 0x1b4))),
                 ((*((int *)GEN_TOP(((int)this + 0x1bc))) - *((int *)GEN_TOP(((int)this + 0x1b4)))) / 0x48) * 0x48,0x321);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1bc))) = 0;
  F_00b097f0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  iVar1 = *(int *)this;
  uVar4 = 0;
  if (iVar1 != 0) {
    uVar6 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,0x321);
    uVar4 = (uint)uVar6;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: FUN_00b0a000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0a000(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0a000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  
  for (piVar1 = ((int *)GEN_TOP(*param_1)); piVar1 != ((int *)GEN_TOP(param_1[1])); piVar1 = piVar1 + 2) {
    if (*piVar1 == param_2) goto LAB_00b0a036;
  }
  ((int *)(gen_frame + 0x0))[0] = param_2;
  F_00b10060(param_1 GEN_EDX_FWD,((int *)(gen_frame + 0x0)));
  piVar1 = ((int *)GEN_TOP((param_1[1] - 8)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
LAB_00b0a036: ;
    *(undefined1 *)(piVar1 + 1) = param_3;
  }
  return (uint)piVar1;
}

/* ref: FUN_00b0a050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0a050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb0a050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x220)));
  if (puVar1 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
    while (*((short *)GEN_TOP(((int)*puVar1 + 0x18))) != (short)param_1) {
      puVar1 = puVar1 + 1;
      if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
        return (uint)puVar1;
      }
    }
    puVar1 = ((undefined4 *)GEN_TOP(F_00b09cd0(((undefined *)GEN_TOP(*puVar1)) GEN_EDX_FWD,param_2)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00b0a090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0a090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb0a090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  
  uVar6 = 0;
  if ((*(uint *)&gen_args[1]) != 0) {
    do {
      if ((*(int *)&gen_args[2]) == 0xc3) {
        F_00b07950(*((undefined4 *)GEN_TOP(((*(int *)&gen_args[3]) + 0x1c))),(*(int *)&gen_args[3]) + 0x20,
                     *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)&gen_args[0]) + uVar6 * 4))) + 4))));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (*(uint *)&gen_args[1]));
  }
  for (piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
      (piVar5 != *((int * PTR32 *)GEN_TOP(((int)this + 8))) && (*piVar5 != (*(int *)&gen_args[3]))); piVar5 = piVar5 + 1) {
  }
  F_00c46e20(piVar5,piVar5 + 1,(*((int *)GEN_TOP(((int)this + 8))) - (int)(piVar5 + 1) >> 2) * 4);
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 4;
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if ((&(*(int *)&gen_args[3]) < puVar1) && (puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))), puVar2 <= &(*(int *)&gen_args[3]))) {
    if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c)))) {
      iVar3 = (int)puVar1 - (int)((int)(uintptr_t)puVar2) >> 2;
      if (iVar3 == -1) {
                    
        F_00c4579a(((char *)REFP(0x108497c)));
      }
      uVar4 = iVar3 + 1;
      uVar6 = (int)*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c))) - (int)((int)(uintptr_t)puVar2) >> 2;
      if (uVar6 < uVar4) {
        if (-(uVar6 >> 1) - 1 < uVar6) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar6 + (uVar6 >> 1);
        }
        if (uVar6 < uVar4) {
          uVar6 = uVar4;
        }
        F_00b0fab0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,uVar6);
      }
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18)));
    piVar5 = ((int *)GEN_TOP(0x0));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + ((int)&(*(int *)&gen_args[3]) - (int)((int)(uintptr_t)puVar2) >> 2) * 4)))
      ;
      *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + 4;
      return (uint)puVar1;
    }
  }
  else {
    if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c)))) {
      iVar3 = (int)puVar1 - *((int *)GEN_TOP(((int)this + 0x14))) >> 2;
      if (iVar3 == -1) {
                    
        F_00c4579a(((char *)REFP(0x108497c)));
      }
      uVar4 = iVar3 + 1;
      uVar6 = (int)*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c))) - *((int *)GEN_TOP(((int)this + 0x14))) >> 2;
      if (uVar6 < uVar4) {
        if (-(uVar6 >> 1) - 1 < uVar6) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar6 + (uVar6 >> 1);
        }
        if (uVar6 < uVar4) {
          uVar6 = uVar4;
        }
        F_00b0fab0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,uVar6);
      }
    }
    piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
    if (piVar5 != ((int *)GEN_TOP(0x0))) {
      *piVar5 = (*(int *)&gen_args[3]);
    }
  }
  *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + 4;
  return (uint)piVar5;
}

/* ref: FUN_00b0a1e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b0a1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0a1e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float fVar1;
  float fVar2;
  int * piVar3;
  int iVar4;
  undefined4 * PTR32 * ppuVar5;
  undefined4 * PTR32 * ppuVar6;
  int * piVar7;
  uint uVar8;
  undefined4 * puVar9;
  
  piVar7 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar7 != *((int * PTR32 *)GEN_TOP(((int)this + 0x18)))) {
    do {
      if (*piVar7 != 0) {
        piVar3 = *(int * PTR32 *)this;
        if (piVar3 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x4c))))(piVar3 GEN_EDX_FWD,*piVar7);
        }
        puVar9 = ((undefined4 *)GEN_TOP(*piVar7));
        if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar9)))(puVar9 GEN_EDX_ARG,1);
          *piVar7 = 0;
        }
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != *((int * PTR32 *)GEN_TOP(((int)this + 0x18))));
  }
  fVar1 = *((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198)));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x14)));
  if (iVar4 != *((int *)GEN_TOP(((int)this + 0x18)))) {
    F_00c46e20(iVar4,*((int *)GEN_TOP(((int)this + 0x18))),0);
    *((int *)GEN_TOP(((int)this + 0x18))) = iVar4;
  }
  (*(uint *)(gen_frame + 0x0)) = 0x24;
  do {
    if (*((int *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + 4 + (int)this))) != 0) {
      if (*((int *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + (int)this))) != -0x20000000) {
        piVar7 = ((int *)GEN_TOP(F_00a35490(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,*((int *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + (int)this))))));
        if (piVar7 != ((int *)GEN_TOP(0x0))) {
          uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x68))))(piVar7 GEN_EDX_ARG);
          if ((char)uVar8 != '\0') {
            if (*(int *)this == 0) {
              uVar8 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xc3);
              *(uint *)this = uVar8;
            }
            puVar9 = ((undefined4 *)GEN_TOP(F_00406b90(0x74,0,0)));
            if (puVar9 == ((undefined4 *)GEN_TOP(0x0))) {
              puVar9 = ((undefined4 *)GEN_TOP(0x0));
            }
            else {
              F_00cb4700(puVar9 GEN_EDX_ARG,1,0xc3);
              puVar9[5] = 1;
              puVar9[6] = this;
              *puVar9 = (*(undefined * PTR32 (*)[2])REFP(0x10ecd70));
              F_0042b630(puVar9 + 8 GEN_EDX_ARG);
            }
            ppuVar5 = *((undefined4 * PTR32 * PTR32 *)GEN_TOP(((int)this + 8)));
            (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar9;
            if (&(*(undefined4 * PTR32 *)(gen_frame + 0x4)) < ppuVar5) {
              ppuVar6 = *((undefined4 * PTR32 * PTR32 *)GEN_TOP(((int)this + 4)));
              if (&(*(undefined4 * PTR32 *)(gen_frame + 0x4)) < ppuVar6) goto LAB_00b0a34d;
              if (ppuVar5 == *((undefined4 * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc)))) {
                F_00b0fd10(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,1);
              }
              if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined4 *)GEN_TOP(0x0))) {
                **((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) =
                     *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + ((int)&(*(undefined4 * PTR32 *)(gen_frame + 0x4)) - (int)((int)(uintptr_t)ppuVar6) >> 2) * 4)));
              }
            }
            else {
LAB_00b0a34d: ;
              if (ppuVar5 == *((undefined4 * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc)))) {
                F_00b0fd10(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,1);
              }
              if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined4 *)GEN_TOP(0x0))) {
                **((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar9;
              }
            }
            *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 4;
            puVar9[7] = *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + (int)this)));
            uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG);
            F_0042e430(puVar9 + 8 GEN_EDX_ARG,uVar8);
            F_00cb4540(puVar9 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + 4 + (int)this))));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x48))))(*(int * PTR32 *)this GEN_EDX_ARG,puVar9);
            *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + 4 + (int)this))) = 0;
            goto LAB_00b0a3d0;
          }
        }
      }
      fVar2 = ((float)GEN_TOF(((float10)fVar1 + (float10)*((float *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + 8 + (int)this))))));
      *((float *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + 8 + (int)this))) = fVar2;
      if ((float10)*(float *)&REFG(undefined, 0x10ecd14) <= (float10)fVar2) {
        *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + 4 + (int)this))) = 0;
      }
    }
LAB_00b0a3d0: ;
    (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 0xc;
    if (0x1a3 < (*(uint *)(gen_frame + 0x0))) {
      return;
    }
  } while( true );
}

/* ref: FUN_00b0a3f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b0a3f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0a3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int iVar1;
  byte * pbVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint * this_00;
  int iVar5;
  uint uVar6;
  uint local_8;
  
  this_00 = (*(uint * PTR32 *)&gen_args[0]);
  uVar6 = *((uint *)GEN_TOP(((int)this + 0x1c))) >> 7;
  if (((uVar6 & 1) == 0) ||
     ((*((char *)GEN_TOP(((int)this + 0x2f8))) != '\x02' && (*((char *)GEN_TOP(((int)this + 0x2f8))) != '\b')))) {
    if (((uVar6 & 1) != 0) && (*((char *)GEN_TOP(((int)this + 0x2f8))) == '\a')) {
      *((undefined2 *)GEN_TOP(((int)this + 0x684))) = *((undefined2 *)GEN_TOP(((int)this + 0x18)));
      iVar1 = (int)this + 0x654;
      *((byte *)GEN_TOP(((int)this + 0x686))) =
           *((byte *)GEN_TOP(((int)this + 0x686))) ^
           ((char)(*((uint *)GEN_TOP(((int)this + 0x1c))) >> 0xb) * '\x02' ^ *((byte *)GEN_TOP(((int)this + 0x686)))) & 2;
      puVar3 = ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1]));
      if ((&(*(uint * PTR32 *)&gen_args[0]) < puVar3) && (puVar4 = ((undefined4 *)GEN_TOP(*(*(uint * PTR32 *)&gen_args[0]))), puVar4 <= &(*(uint * PTR32 *)&gen_args[0]))) {
        if (puVar3 == ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[2]))) {
          (*(uint * PTR32 *)&gen_args[0]) = ((uint *)GEN_TOP(iVar1));
          F_00b0fe90(this_00 GEN_EDX_FWD,1);
        }
        if (((undefined4 *)GEN_TOP(this_00[1])) != ((undefined4 *)GEN_TOP(0x0))) {
          *((undefined4 *)GEN_TOP(this_00[1])) =
               *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint * PTR32 *)&gen_args[0]) - (int)((int)(uintptr_t)puVar4) >> 2) * 4)));
          this_00[1] = this_00[1] + 4;
          return;
        }
      }
      else {
        if (puVar3 == ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[2]))) {
          (*(uint * PTR32 *)&gen_args[0]) = ((uint *)GEN_TOP(iVar1));
          F_00b0fe90(this_00 GEN_EDX_ARG,1);
        }
        if (((int *)GEN_TOP(this_00[1])) != ((int *)GEN_TOP(0x0))) {
          *((int *)GEN_TOP(this_00[1])) = iVar1;
        }
      }
      this_00[1] = this_00[1] + 4;
    }
    return;
  }
  local_8 = 0;
  do {
    iVar5 = *((int *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10ecffc) + local_8))) * 0x9c;
    *((undefined2 *)GEN_TOP(((int)this + iVar5 + 0x54c))) = *((undefined2 *)GEN_TOP(((int)this + 0x18)));
    iVar1 = (int)this + iVar5 + 0x51c;
    pbVar2 = ((byte *)GEN_TOP(((int)this + iVar5 + 0x54e)));
    *pbVar2 = *pbVar2 ^ ((char)(*((uint *)GEN_TOP(((int)this + 0x1c))) >> 0xb) * '\x02' ^
                        *((byte *)GEN_TOP(((int)this + iVar5 + 0x54e)))) & 2;
    puVar3 = ((undefined4 *)GEN_TOP(this_00[1]));
    (*(uint * PTR32 *)&gen_args[0]) = ((uint *)GEN_TOP(iVar1));
    if (&(*(uint * PTR32 *)&gen_args[0]) < puVar3) {
      puVar4 = ((undefined4 *)GEN_TOP(*this_00));
      if (&(*(uint * PTR32 *)&gen_args[0]) < puVar4) goto LAB_00b0a49d;
      if (puVar3 == ((undefined4 *)GEN_TOP(this_00[2]))) {
        F_00b0fe90(this_00 GEN_EDX_ARG,1);
      }
      if (((undefined4 *)GEN_TOP(this_00[1])) != ((undefined4 *)GEN_TOP(0x0))) {
        *((undefined4 *)GEN_TOP(this_00[1])) =
             *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint * PTR32 *)&gen_args[0]) - (int)((int)(uintptr_t)puVar4) >> 2) * 4)));
      }
    }
    else {
LAB_00b0a49d: ;
      if (puVar3 == ((undefined4 *)GEN_TOP(this_00[2]))) {
        F_00b0fe90(this_00 GEN_EDX_ARG,1);
      }
      if (((int *)GEN_TOP(this_00[1])) != ((int *)GEN_TOP(0x0))) {
        *((int *)GEN_TOP(this_00[1])) = iVar1;
      }
    }
    this_00[1] = this_00[1] + 4;
    local_8 = local_8 + 4;
    if (0xb < local_8) {
      return;
    }
  } while( true );
}

/* ref: FUN_00b0a580 */
GEN_OWN GEN_NOFRAME unsigned int F_00b0a580(void)
{
  GEN_ENTER(0xb0a580u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  if (REFG(undefined4, 0x14c0cf8) == 0) {
    this = ((undefined *)GEN_TOP(F_00406b90(0x234,0,0)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_00b09e00(this GEN_EDX_ARG);
      REFG(undefined4, 0x14c0cf8) = uVar1;
      return;
    }
    REFG(undefined4, 0x14c0cf8) = 0;
  }
  return;
}

/* ref: FUN_00b0a830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0a830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb0a830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  undefined * this_00;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  ulonglong uVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = ((undefined4 *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x8)) = 0;
  F_00b0fc60(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD,8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x220)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x14)) != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
    do {
      puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x0));
      this_00 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x14))));
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != (*(undefined4 * PTR32 *)(gen_frame + 0x4))) {
        F_00c46e20((*(undefined4 * PTR32 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar3;
      }
      F_00b0a3f0(this_00 GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
      puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x0));
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != (*(undefined4 * PTR32 *)(gen_frame + 0x4))) {
        do {
          puVar5 = ((undefined4 *)GEN_TOP(*puVar3));
          if ((((puVar5 != ((undefined4 *)GEN_TOP(0x0))) && ((*((byte *)GEN_TOP(((int)puVar5 + 0x32))) & 1) == 0)) &&
              (puVar5[2] != 0)) && (*(short *)(puVar5 + 8) == (short)param_1)) {
            puVar6 = ((undefined4 *)GEN_TOP(param_2[1]));
            if ((puVar5 < puVar6) && (puVar1 = ((undefined4 *)GEN_TOP(*param_2)), puVar1 <= puVar5)) {
              if (puVar6 == ((undefined4 *)GEN_TOP(param_2[2]))) {
                F_00969650(param_2 GEN_EDX_ARG,1);
              }
              puVar5 = ((undefined4 *)GEN_TOP(((((int)puVar5 - (int)puVar1) / 0x34) * 0x34 + *param_2)));
            }
            else if (puVar6 == ((undefined4 *)GEN_TOP(param_2[2]))) {
              F_00969650(param_2 GEN_EDX_ARG,1);
            }
            if (((undefined4 *)GEN_TOP(param_2[1])) != ((undefined4 *)GEN_TOP(0x0))) {
              puVar6 = ((undefined4 *)GEN_TOP(param_2[1]));
              for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 - 1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
              }
            }
            param_2[1] = param_2[1] + 0x34;
          }
          puVar3 = puVar3 + 1;
        } while (puVar3 != (*(undefined4 * PTR32 *)(gen_frame + 0x4)));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (*(undefined4 * PTR32 *)(gen_frame + 0x14)) + 1;
    } while ((*(undefined4 * PTR32 *)(gen_frame + 0x14)) != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x224))));
  }
  uVar2 = 0;
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0))) {
    uVar7 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),((*(int *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x0))) >> 2) * 4,0x321);
    uVar2 = (uint)uVar7;
  }
  return uVar2;
}

/* ref: FUN_00b0a980 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0a980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0a980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(int *)&gen_args[0]) != 0) {
    for (piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x220))); piVar1 != *((int * PTR32 *)GEN_TOP(((int)this + 0x224)));
        piVar1 = piVar1 + 1) {
      if (*((short *)GEN_TOP((*piVar1 + 0x18))) == *((short *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18)))) {
        return (uint)piVar1;
      }
    }
    uVar2 = F_00b10470(((undefined *)GEN_TOP(((int)this + 0x220))) GEN_EDX_FWD,&(*(int *)&gen_args[0]));
  }
  return uVar2;
}

/* ref: FUN_00b0a9d0 */
GEN_OWN GEN_NOFRAME unsigned int F_00b0a9d0(void)
{
  GEN_ENTER(0xb0a9d0u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  
  pvVar1 = REFG(void * PTR32, 0x14c0cf8);
  if (REFG(void * PTR32, 0x14c0cf8) != ((undefined *)GEN_TOP(0x0))) {
    F_00b09eb0(REFG(void * PTR32, 0x14c0cf8) GEN_EDX_ARG);
    F_00406ad0(pvVar1);
    REFG(void * PTR32, 0x14c0cf8) = ((undefined *)GEN_TOP(0x0));
  }
  return;
}

/* ref: FUN_00b0aa00 */
GEN_OWN GEN_FRAME uint F_00b0aa00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0aa00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  
  pvVar1 = ((undefined *)GEN_TOP(F_00406b90(0x730,0,0)));
  if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    pvVar1 = ((undefined *)GEN_TOP(F_00b09920(pvVar1 GEN_EDX_ARG,param_1)));
  }
  uVar2 = F_00b09600(pvVar1 GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar1;
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    for (piVar3 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x220))); piVar3 != *((int * PTR32 *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x224)));
        piVar3 = piVar3 + 1) {
      if (*((short *)GEN_TOP((*piVar3 + 0x18))) == *((short *)GEN_TOP(((int)pvVar1 + 0x18)))) {
        return (uint)piVar3;
      }
    }
    uVar2 = F_00b10470(((undefined *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x220))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  }
  return uVar2;
}

/* ref: FUN_00b0aa80 */
GEN_OWN GEN_FRAME uint F_00b0aa80(void)
{
  GEN_ENTER(0xb0aa80u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  ulonglong uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
  piVar1 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_00b07100(0x81b,REFG(undefined4, 0x1379694),&(*(int * PTR32 *)(gen_frame + 0x0)));
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar2;
}

/* ref: FUN_00b0ab00 */
GEN_OWN GEN_FRAME uint F_00b0ab00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0ab00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if ((*(uint *)&REFG(undefined, 0x14c0d20) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14c0d20) = *(uint *)&REFG(undefined, 0x14c0d20) | 1;
    REFG(undefined4 * PTR32, 0x14c0d08) = ((undefined4 *)GEN_TOP(0x0));
    puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
    REFG(undefined4 * PTR32, 0x14c0d08) = puVar2;
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    *REFG(undefined4 * PTR32, 0x14c0d08) = &REFG(undefined4 * PTR32, 0x14c0d08);
    *(undefined4 *)&REFG(undefined, 0x14c0d0c) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0d10) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0d14) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0d18) = 0;
    F_00c47de6(((code *)REFP(0x107c7d0)));
  }
  iVar1 = REFG(int, 0x1379694);
  if ((REFG(int, 0x1379694) != 0) && (*((char *)GEN_TOP((REFG(int, 0x1379694) + 0x18a))) == '\x10')) {
    uVar3 = 0;
    do {
      if (param_1 == *((int *)GEN_TOP(((int)&REFG(undefined4, 0x10ecd3c) + uVar3)))) {
        return uVar3;
      }
      uVar3 = uVar3 + 4;
    } while (uVar3 < 0xc);
  }
  F_006b8c00();
  uVar3 = F_006c5f80(param_1,iVar1,&REFG(undefined4 * PTR32, 0x14c0d08));
  return uVar3;
}

/* ref: FUN_00b0abc0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0abc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0abc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  int * piVar5;
  int iVar6;
  
  for (piVar5 = *(int * PTR32 *)this; piVar5 != *((int * PTR32 *)GEN_TOP(((int)this + 4))); piVar5 = piVar5 + 2) {
    if (*piVar5 == param_1[0x1d]) {
      if ((*(byte *)(piVar5 + 1) & 2) == 0) goto LAB_00b0ac82;
      piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x220)));
      goto joined_r0x00b0ac43;
    }
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD);
  if (uVar2 != 7) {
    return 0;
  }
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x220)));
  if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
    return 0;
  }
  while (this_00 = ((undefined *)GEN_TOP(*puVar3)), *((short *)GEN_TOP(((int)this_00 + 0x18))) != (short)param_1[0x3a]) {
    puVar3 = puVar3 + 1;
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
      return 0;
    }
  }
  if (*((char *)GEN_TOP(((int)this_00 + 800))) != '\x02') {
    return 0;
  }
  bVar1 = F_00b0d9e0(this_00 GEN_EDX_ARG,REFG(void * PTR32, 0x1379694));
  if (bVar1 != 0) {
    return 1;
  }
  goto LAB_00b0acb3;
joined_r0x00b0ac43: ;
  if (piVar4 == *((int * PTR32 *)GEN_TOP(((int)this + 0x224)))) goto LAB_00b0ac54;
  iVar6 = *piVar4;
  if (*((short *)GEN_TOP((iVar6 + 0x18))) == (short)param_1[0x3a]) goto LAB_00b0ac56;
  piVar4 = piVar4 + 1;
  goto joined_r0x00b0ac43;
LAB_00b0ac54: ;
  iVar6 = 0;
LAB_00b0ac56: ;
  if ((iVar6 == 0) ||
     (((REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)) && (uVar2 = F_00a5f290(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG), uVar2 != 0)) &&
      (*((byte *)GEN_TOP((uVar2 + 0x1689))) <= *((byte *)GEN_TOP((iVar6 + 0x322))))))) {
LAB_00b0ac82: ;
    return *(byte *)(piVar5 + 1) & 1;
  }
LAB_00b0acb3: ;
  F_00b0ab00(0x81a);
  return 0;
}

/* ref: FUN_00b0acd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b0acd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0acd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x50, 0);
  float fVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  undefined4 * puVar5;
  float * pfVar6;
  uint uVar7;
  undefined * pvVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  
  if ((*(uint *)&REFG(undefined, 0x14c0d3c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14c0d3c) = *(uint *)&REFG(undefined, 0x14c0d3c) | 1;
    REFG(undefined4 * PTR32, 0x14c0d24) = ((undefined4 *)GEN_TOP(0x0));
    puVar5 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
    REFG(undefined4 * PTR32, 0x14c0d24) = puVar5;
    if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar5 = 0;
      puVar5[1] = 0;
    }
    *REFG(undefined4 * PTR32, 0x14c0d24) = &REFG(undefined4 * PTR32, 0x14c0d24);
    *(undefined4 *)&REFG(undefined, 0x14c0d28) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0d2c) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0d30) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0d34) = 0;
    F_00c47de6(((code *)REFP(0x107c800)));
  }
  if (((*((uint *)GEN_TOP(((int)this + 0x1c))) >> 7 & 1) != 0) &&
     (((*((uint *)GEN_TOP(((int)this + 0x1c))) >> 6 & 1) == 0 || (*((int *)GEN_TOP(((int)this + 0x340))) != -0x20000000)))
     ) {
    F_00b07c70(this GEN_EDX_ARG);
  }
  pvVar8 = ((undefined *)GEN_TOP(((int)this + 0x4b8)));
  (*(float *)(gen_frame + 0x38)) = 5.60519e-45;
  do {
    F_00b07ac0(pvVar8 GEN_EDX_ARG);
    pvVar8 = ((undefined *)GEN_TOP(((int)pvVar8 + 0x9c)));
    fVar1 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x38))) - 1);
    (*(float *)(gen_frame + 0x38)) = fVar1;
  } while (fVar1 != 0.0);
  if (*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) == this) {
    F_00b08b80(this GEN_EDX_ARG);
  }
  fVar1 = *((float *)GEN_TOP(((int)this + 0x2f4)));
  (*(float *)(gen_frame + 0x30)) = fVar1;
  if (0.0 < fVar1) {
    *((float *)GEN_TOP(((int)this + 0x2f4))) =
         ((float)GEN_TOF(((float10)fVar1 - (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))))));
  }
  (*(float *)(gen_frame + 0x20)) = 0.0;
  (*(float *)(gen_frame + 0x24)) = 0.0;
  (*(float *)(gen_frame + 0x28)) = 0.0;
  (*(float *)(gen_frame + 0x0)) = 0.0;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  bVar4 = F_00b08260(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x0)));
  if ((bVar4 == 0) || (REFG(void * PTR32, 0x1379694) == ((undefined *)GEN_TOP(0x0)))) goto LAB_00b0b100;
  (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)*(double *)&REFG(undefined, 0x1090718));
  fVar9 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)*(double *)&REFG(undefined, 0x1090718)));
  (*(float *)(gen_frame + 0x38)) = (float)(fVar9 * fVar9);
  pfVar6 = ((float *)GEN_TOP(F_00a5feb0(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG)));
  (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar6 - (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)pfVar6[1] - (float10)(*(float *)(gen_frame + 0x24)));
  (*(float *)(gen_frame + 0x18)) = (float)((float10)pfVar6[2] - (float10)(*(float *)(gen_frame + 0x28)));
  fVar9 = GEN_X87((float10)(float)((float10)*pfVar6 - (float10)(*(float *)(gen_frame + 0x20))));
  fVar10 = GEN_X87((float10)(float)((float10)pfVar6[2] - (float10)(*(float *)(gen_frame + 0x28))));
  fVar1 = (float)(fVar10 * fVar10 + fVar9 * fVar9);
  (*(float *)(gen_frame + 0x30)) = fVar1;
  pvVar8 = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0))))));
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = pvVar8;
  if ((float10)fVar1 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar8)))) {
    (*(char *)(gen_frame + 0x3f)) = '\x01';
    pvVar8 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)(float)((float10)pfVar6[1] - (float10)(*(float *)(gen_frame + 0x24)))))))));
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = pvVar8;
    if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar8))) < (float10)(*(float *)(gen_frame + 0x4)))) goto LAB_00b0ae93;
  }
  else {
LAB_00b0ae93: ;
    (*(char *)(gen_frame + 0x3f)) = '\0';
  }
  if ((*((byte *)GEN_TOP(((int)this + 0x1c))) & 1) == 0) {
    if ((*(char *)(gen_frame + 0x3f)) != '\0') {
      F_00a51200(0x57,(uint)*((ushort *)GEN_TOP(((int)this + 0x18))),0,0,0);
      *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) | 1;
      *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x232))) = *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x232))) + '\x01';
    }
  }
  else {
    if (((*((uint *)GEN_TOP(((int)this + 0x1c))) >> 7 & 1) != 0) &&
       ((*((char *)GEN_TOP(((int)this + 0x2f8))) == '\x02' || (*((char *)GEN_TOP(((int)this + 0x2f8))) == '\b')))) {
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = REFG(void * PTR32, 0x1379694);
      if (REFG(void * PTR32, 0x1379694) == ((undefined *)GEN_TOP(0x0))) {
        uVar7 = 0;
      }
      else {
        uVar7 = F_00a5f290(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
      }
      if (*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) == 0) {
        F_00b09350(REFG(void * PTR32, 0x14c0cf8) GEN_EDX_ARG,this);
        *((undefined4 *)GEN_TOP(((int)this + 0x2ec))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x2f0))) = 0;
        if ((*((uint *)GEN_TOP(((int)this + 0x1c))) >> 5 & 1) == 0) {
          F_00b07200((uint)*((byte *)GEN_TOP(((int)this + 0x323))));
          *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) | 0x20;
        }
      }
      if (((uVar7 != 0) && (*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) == this)) &&
         ((*((uint *)GEN_TOP(((int)this + 0x2ec))) != (uint)*((byte *)GEN_TOP((uVar7 + 0x1688))) ||
          (*((uint *)GEN_TOP(((int)this + 0x2f0))) != (uint)*((byte *)GEN_TOP((uVar7 + 0x1689))))))) {
        *((uint *)GEN_TOP(((int)this + 0x2ec))) = (uint)*((byte *)GEN_TOP((uVar7 + 0x1688)));
        *((uint *)GEN_TOP(((int)this + 0x2f0))) = (uint)*((byte *)GEN_TOP((uVar7 + 0x1689)));
        if (*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) == this) {
          F_00a69750(&REFG(undefined4, 0x14b11f8) GEN_EDX_ARG);
        }
        bVar4 = F_00b073e0((*(undefined * PTR32 *)(gen_frame + 0x34)));
        pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x34));
        if (bVar4 != 0) {
          bVar4 = F_00b07420(this GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x34)));
          if (bVar4 == 0) {
            bVar4 = F_00b07460(this GEN_EDX_ARG,pvVar8);
            if (bVar4 == 0) goto LAB_00b0afc0;
            uVar11 = 0x816;
          }
          else {
            uVar11 = 0x7ea;
          }
          F_00b0ab00(uVar11);
        }
      }
    }
LAB_00b0afc0: ;
    if ((*(char *)(gen_frame + 0x3f)) == '\0') {
      *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) & 0xfffffffe;
      *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x232))) = *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x232))) - 1;
      if ((*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) != 0) && (REFG(short, 0x14ab148) != 0)) {
        F_00a51200(0x58,(uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) + 0x18))),0,0,0);
      }
      if (*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) == this) {
        *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) = 0;
        F_00a69780(&REFG(undefined4, 0x14b11f8) GEN_EDX_ARG);
      }
    }
  }
  if (((*((uint *)GEN_TOP(((int)this + 0x1c))) >> 7 & 1) != 0) &&
     ((*((char *)GEN_TOP(((int)this + 0x2f8))) == '\x02' || (*((char *)GEN_TOP(((int)this + 0x2f8))) == '\b')))) {
    if (((float10)(*(float *)(gen_frame + 0x30)) < (float10)(*(float *)(gen_frame + 0x38))) &&
       ((*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x14))))),
       (float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x14))))) < (float10)(*(float *)(gen_frame + 0x4)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((*((uint *)GEN_TOP(((int)this + 0x1c))) >> 3 & 1) == 0) {
      if ((bVar3) &&
         (*((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) | 8,
         *((float *)GEN_TOP(((int)this + 0x2f4))) <= 0.0)) {
        F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x40,0,0);
        if ((*((byte *)GEN_TOP(((int)this + 0x1c))) & 1) == 0) {
          F_00b0ab00(0x7d1);
          *((undefined4 *)GEN_TOP(((int)this + 0x2f4))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x2f4))), REFG(float, 0x10ec654));
        }
      }
    }
    else if (!bVar3) {
      *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) & 0xfffffff7;
    }
  }
LAB_00b0b100: ;
  if ((((*((uint *)GEN_TOP(((int)this + 0x1c))) >> 7 & 1) == 0) ||
      ((*((char *)GEN_TOP(((int)this + 0x2f8))) != '\x02' && (*((char *)GEN_TOP(((int)this + 0x2f8))) != '\b')))) &&
     (*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) == this)) {
    *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) = 0;
    F_00a69780(&REFG(undefined4, 0x14b11f8) GEN_EDX_ARG);
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 0x1c))) >> 7;
  if (((uVar7 & 1) != 0) &&
     ((*((byte *)GEN_TOP(((int)this + 0x2f8))) == 2 || (uVar7 = *((byte *)GEN_TOP(((int)this + 0x2f8))) - 8, uVar7 == 0)))
     ) {
    uVar7 = *((uint *)GEN_TOP(((int)this + 0x306)));
    bVar3 = false;
    if ((uVar7 != 0) && (*((uint *)GEN_TOP(((int)this + 0x31c))) != uVar7)) {
      *((uint *)GEN_TOP(((int)this + 0x31c))) = uVar7;
      bVar3 = true;
    }
    if (*((int *)GEN_TOP(((int)this + 0x31c))) != 0) {
      uVar7 = *((uint *)GEN_TOP(((int)this + 0x1c))) >> 4;
      bVar4 = (byte)uVar7;
      if (*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) == this) {
        uVar2 = uVar7 & 1;
        uVar7 = uVar7 & 0xffffff01;
        if ((uVar2 == 0) || (bVar3)) {
          if ((bVar4 & 1 & (byte)uVar7) != 0) {
            F_00ab6920();
          }
          *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) | 0x10;
          uVar7 = F_00ab6890(*((undefined4 *)GEN_TOP(((int)this + 0x31c))));
        }
      }
      else if ((uVar7 & 1) != 0) {
        *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) & 0xffffffef;
        uVar7 = F_00ab6920();
        return uVar7;
      }
    }
  }
  return uVar7;
}

/* ref: Client::Game::Fate::FateDirector::vf5 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0b1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0b1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00b0abc0(REFG(void * PTR32, 0x14c0cf8) GEN_EDX_FWD,param_1);
  return bVar1;
}

/* ref: FUN_00b0b1f0 */
GEN_OWN_GS GEN_FRAME uint F_00b0b1f0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0b1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined * this;
  undefined4 * puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar1;
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *puVar1 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(uint *)(gen_frame + 0x18)) = param_1;
    (*(uint * PTR32 *)(gen_frame + 0x1c)) = &(*(uint *)(gen_frame + 0x18));
    (*(char *)(gen_frame + 0x20)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x18)));
    if (((*(uint * PTR32 *)(gen_frame + 0x1c)) != ((uint *)GEN_TOP(0x0))) && (((*(char *)(gen_frame + 0x20)) != '\0' && ((*(char *)(gen_frame + 0x20)) == '\x01')))) {
      this = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x1c))));
      *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)this + 0x54))) < 1) {
        F_0042c880(this GEN_EDX_ARG);
        F_00406ad0(this);
      }
    }
    if (param_2 < 2) {
      uVar2 = 0x817;
    }
    else {
      (*(uint * PTR32 *)(gen_frame + 0x1c)) = &(*(uint *)(gen_frame + 0x18));
      (*(uint *)(gen_frame + 0x18)) = 0;
      uVar2 = 0x818;
      (*(uint *)(gen_frame + 0x18)) = param_2;
      (*(char *)(gen_frame + 0x20)) = '\0';
      F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x18)));
      F_004917c0(&(*(uint *)(gen_frame + 0x18)) GEN_EDX_ARG);
    }
    F_00b07100(uVar2,REFG(undefined4, 0x1379694),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
  }
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar3;
}

/* ref: FUN_00b0b310 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_00b0b310(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0b310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 * PTR32 * ppuVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar1;
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *puVar1 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x18)) = param_1;
  (*(int * PTR32 *)(gen_frame + 0x1c)) = &(*(int *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar5 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar5) {
    uVar5 = uVar5 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar5 * 4))) == 0) {
    uVar2 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar5 * 4))) = uVar2;
  }
  pvVar4 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar5 * 4)));
  if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar4 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(int * PTR32 *)(gen_frame + 0x1c)) != ((int *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar4 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar4 + 0x54))) = *((int *)GEN_TOP(((int)pvVar4 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar4 + 0x54))) < 1) {
      F_0042c880(pvVar4 GEN_EDX_ARG);
      F_00406ad0(pvVar4);
    }
  }
  if (param_2 == 1) {
    uVar6 = 0x7da;
  }
  else {
    (*(int * PTR32 *)(gen_frame + 0x1c)) = &(*(int *)(gen_frame + 0x18));
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x18)) = param_2;
    (*(char *)(gen_frame + 0x20)) = '\0';
    F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x18)));
    if ((((*(int * PTR32 *)(gen_frame + 0x1c)) != ((int *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
      pvVar4 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x1c))));
      *((int *)GEN_TOP(((int)pvVar4 + 0x54))) = *((int *)GEN_TOP(((int)pvVar4 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar4 + 0x54))) < 1) {
        F_0042c880(pvVar4 GEN_EDX_ARG);
        F_00406ad0(pvVar4);
      }
    }
    uVar6 = 0x7db;
  }
  piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  ppuVar9 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  uVar8 = REFG(undefined4, 0x1379694);
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG)));
  F_0046ab30(pvVar4 GEN_EDX_ARG,uVar6,uVar8,ppuVar9);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar7 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar7;
}

/* ref: FUN_00b0b4a0 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_00b0b4a0(GEN_P(ushort * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0b4a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x40, 0, 4);
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  ushort * puVar7;
  int iVar8;
  bool bVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  int * PTR32 * ppiVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c));
  bVar9 = (param_1[1] & 1) == 1;
  uVar6 = 0;
  (*(undefined1 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0)) = bVar9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = ((undefined4 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)), 1, 3),bVar9)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(char *)(gen_frame + 0x2b)) = '\0';
  puVar7 = param_1 + 10;
  (*(int *)(gen_frame + 0x8)) = 4;
  do {
    if (*(int *)puVar7 != 0) {
      if (*(int *)(puVar7 + 2) == 0) {
        (*(char *)(gen_frame + 0x2b)) = '\x01';
      }
      else {
        uVar6 = *(undefined4 *)puVar7;
        (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(puVar7 + 2);
        F_00b0b1f0(uVar6,*(undefined4 *)(puVar7 + 2));
      }
    }
    puVar7 = puVar7 + 4;
    iVar8 = (*(int *)(gen_frame + 0x8)) - 1;
    (*(int *)(gen_frame + 0x8)) = iVar8;
  } while (iVar8 != 0);
  if ((*(char *)(gen_frame + 0x2b)) != '\0') {
    F_00b0aa80();
  }
  iVar8 = *(int *)(param_1 + 8);
  if (iVar8 == 0) {
    iVar8 = -1;
  }
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 200))))
            (piVar2 GEN_EDX_ARG,(uint)*param_1,(*(undefined4 * PTR32 *)(gen_frame + 0x4)),(uint)*((byte *)GEN_TOP(((int)param_1 + 3))),
             *(int *)(param_1 + 4) + *(int *)(param_1 + 2),*(undefined4 *)(param_1 + 6),iVar8,uVar6,
             (*(undefined4 *)(gen_frame + 0xc)));
  uVar3 = F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x42,0,0);
  if (*(int *)(param_1 + 6) != 0) {
    (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)GEN_TOP(0x0));
    piVar2 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
    (*(int * PTR32 *)(gen_frame + 0x10)) = piVar2;
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x10));
    (*(int *)(gen_frame + 0x14)) = 0;
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x1c)) = 0;
    (*(int *)(gen_frame + 0x20)) = 0;
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar6 = *(undefined4 *)(param_1 + 6);
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = uVar6;
    (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = &(*(undefined4 *)(gen_frame + 0x2c));
    (*(char *)(gen_frame + 0x34)) = '\0';
    if ((*(uint *)(gen_frame + 0x18)) <= (*(int *)(gen_frame + 0x20)) + 1U) {
      F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,1);
    }
    uVar3 = (*(int *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0x1c));
    if ((*(uint *)(gen_frame + 0x18)) <= uVar3) {
      uVar3 = uVar3 - (*(uint *)(gen_frame + 0x18));
    }
    if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + uVar3 * 4))) == 0) {
      uVar4 = F_004296a0(0xc,0,0x2c4);
      *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + uVar3 * 4))) = uVar4;
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + uVar3 * 4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(puVar1 + 2) = 0xff;
      if (((*(char *)(gen_frame + 0x34)) != -1) && (puVar1 != &(*(undefined4 *)(gen_frame + 0x2c)))) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar1;
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (*(undefined4 * PTR32 *)(gen_frame + 0x30));
        if ((*(char *)(gen_frame + 0x34)) == '\0') {
          F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        }
        else if ((*(char *)(gen_frame + 0x34)) == '\x01') {
          F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        }
      }
    }
    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x30)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x34)) != '\0')) && ((*(char *)(gen_frame + 0x34)) == '\x01')) {
      pvVar5 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x30))));
      *((int *)GEN_TOP(((int)pvVar5 + 0x54))) = *((int *)GEN_TOP(((int)pvVar5 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar5 + 0x54))) < 1) {
        F_0042c880(pvVar5 GEN_EDX_ARG);
        F_00406ad0(pvVar5);
      }
    }
    ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x10));
    uVar11 = 0x4ea;
    uVar6 = REFG(undefined4, 0x1379694);
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
    F_0046ab30(pvVar5 GEN_EDX_ARG,uVar11,uVar6,ppiVar12);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    uVar10 = F_00429760((*(int * PTR32 *)(gen_frame + 0x10)),8,0x2c4);
    uVar3 = (uint)uVar10;
  }
  return uVar3;
}

/* ref: FUN_00b0b6d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0b6d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0b6d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  if (param_1 == 1) {
    uVar1 = F_00b0ab00(0x7e1);
  }
  else {
    uVar1 = param_1 - 2;
    if (uVar1 == 0) {
      uVar1 = F_00b0ab00(0x7e9);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b0b700 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0b700(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0b700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (uVar1 == 0) {
    uVar1 = F_00b0ab00(0x819);
  }
  return uVar1;
}

/* ref: FUN_00b0b720 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b0b720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0b720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ushort uVar1;
  int in_ecx;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x220)));
  if (puVar4 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
    do {
      F_00b0acd0(((undefined *)GEN_TOP(*puVar4)) GEN_EDX_FWD);
      puVar4 = puVar4 + 1;
    } while (puVar4 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x224))));
  }
  F_00b0a1e0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  uVar1 = *((ushort *)GEN_TOP(((int)this + 0x230)));
  piVar2 = ((int *)GEN_TOP((uint)uVar1));
  if ((uVar1 != 0) &&
     (piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x220))), piVar2 != *((int * PTR32 *)GEN_TOP(((int)this + 0x224))))) {
    while (in_ecx = *piVar2, *((ushort *)GEN_TOP((in_ecx + 0x18))) != uVar1) {
      piVar2 = piVar2 + 1;
      if (piVar2 == *((int * PTR32 *)GEN_TOP(((int)this + 0x224)))) {
        return (uint)piVar2;
      }
    }
    piVar2 = ((int *)GEN_TOP((*((uint *)GEN_TOP((in_ecx + 0x1c))) >> 7)));
    if (((uint)piVar2 & 1) != 0) {
      piVar2 = ((int *)GEN_TOP(0x0));
      if (((*((byte *)GEN_TOP((in_ecx + 0x2f8))) == 2) ||
          (piVar2 = ((int *)GEN_TOP((*((byte *)GEN_TOP((in_ecx + 0x2f8))) - 8))), piVar2 == ((int *)GEN_TOP(0x0)))) &&
         (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)))) {
        uVar3 = F_00a5feb0(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
        piVar2 = ((int *)GEN_TOP(F_00b0c820(in_ecx GEN_EDX_ARG,uVar3)));
        if (((char)piVar2 == '\0') && (REFG(short, 0x14ab148) != 0)) {
          piVar2 = ((int *)GEN_TOP(F_00b07170((uint)*((ushort *)GEN_TOP(((int)this + 0x230))))));
          *((undefined2 *)GEN_TOP(((int)this + 0x230))) = 0;
        }
      }
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00b0b7e0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b0b7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0b7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x19c, 4);
  char cVar1;
  byte bVar2;
  int * piVar3;
  uint * puVar4;
  uint uVar5;
  float * pfVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  int iVar11;
  undefined1 uVar12;
  undefined * pvVar13;
  undefined1 uVar14;
  
  (*(uint *)(gen_frame + 0x188)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18c);
  for (piVar3 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x220))); piVar3 != *((int * PTR32 *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x224)));
      piVar3 = piVar3 + 1) {
    if (*((short *)GEN_TOP((*piVar3 + 0x18))) == *((short *)GEN_TOP(((int)this + 4)))) {
      (*(int *)(gen_frame + 0x20)) = *piVar3;
      goto LAB_00b0b841;
    }
  }
  (*(int *)(gen_frame + 0x20)) = 0;
LAB_00b0b841: ;
  if ((*((int *)GEN_TOP(((int)this + 0x10))) == 0) || (*((uint *)GEN_TOP(((int)this + 0xc))) <= *((uint *)GEN_TOP(((int)this + 8)))))
  goto LAB_00b0bcd2;
  (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(0x0));
  piVar3 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar3;
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    *piVar3 = 0;
    piVar3[1] = 0;
  }
  *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  puVar4 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xa0 + *((int *)GEN_TOP(((int)this + 8))) * 4)));
  F_0042cc20(((char * PTR32 *)(gen_frame + 0xe4)) GEN_EDX_ARG,(*puVar4 & 0xffffff) + (int)puVar4,REFG(undefined4, 0x108cc50));
  (*(int * PTR32 *)(gen_frame + 0x28)) = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + *((int *)GEN_TOP(((int)this + 8))) * 0x14)));
  (*(char *)(gen_frame + 0x32)) = '\x01';
  ((int *)(gen_frame + 0x15c))[2] = 0;
  (*(undefined1 *)(gen_frame + 0x16c)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x168)) = ((int *)(gen_frame + 0x15c)) + 2;
  if ((*(int *)(gen_frame + 0x20)) == 0) {
    ((int *)(gen_frame + 0x15c))[2] = 0;
  }
  else {
    ((int *)(gen_frame + 0x15c))[2] = (uint)*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 0x321)));
  }
  F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,((int *)(gen_frame + 0x15c)) + 2);
  F_004917c0(((int *)(gen_frame + 0x15c)) + 2 GEN_EDX_ARG);
  if ((*((int *)GEN_TOP(((int)this + 8))) + 1U < *((uint *)GEN_TOP(((int)this + 0xc)))) &&
     ((cVar1 = *((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (*((int *)GEN_TOP(((int)this + 8))) * 5 + 5) * 4 + 0x11))),
      cVar1 == '\0' || (cVar1 == '\x04')))) {
    (*(char *)(gen_frame + 0x32)) = '\0';
  }
  if ((*((char * PTR32 *)(gen_frame + 0xe4))[0] != '\0') &&
     (piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0x58))), piVar3 != ((int *)GEN_TOP(0x0)))) {
    puVar4 = ((uint *)GEN_TOP(F_00ab3f40((*(int * PTR32 *)(gen_frame + 0x28))[1])));
    iVar11 = *piVar3;
    ((uint *)(gen_frame + 0x180))[0] = *puVar4;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((iVar11 + 0xb8))))(piVar3);
    if ((char)uVar5 != '\0') {
      (*(undefined * PTR32 *)(gen_frame + 0x1c)) = REFG(void * PTR32, 0x1379694);
      iVar11 = (*(int * PTR32 *)(gen_frame + 0x28))[4];
      pfVar6 = ((float *)GEN_TOP(0x0));
      (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)GEN_TOP(0x0));
      (*(float *)(gen_frame + 0x0)) = 0.0;
      (*(char *)(gen_frame + 0x33)) = '\0';
      if ((char)iVar11 == '\x01') {
        (*(char *)(gen_frame + 0x33)) = '\x01';
      }
      else if ((char)iVar11 == '\x02') {
        ((int *)(gen_frame + 0x15c))[0] = 0;
        ((int *)(gen_frame + 0x15c))[1] = 0;
        (*(char *)(gen_frame + 0x33)) = '\x01';
        ((int *)(gen_frame + 0x15c))[2] = GEN_FLT_TO(((int *)(gen_frame + 0x15c))[2], REFG(float, 0x1087f04));
        uVar5 = F_00a5feb0(piVar3 GEN_EDX_ARG);
        uVar7 = F_00a5feb0((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
        F_0046f4a0(((uint *)(gen_frame + 0x13c)),uVar7,uVar5);
        fVar10 = F_00aae7a0(((uint *)(gen_frame + 0x13c)),((int *)(gen_frame + 0x15c)));
        (*(float *)(gen_frame + 0x2c)) = gen_bits2f(piVar3[8]);
        fVar8 = ((float10)GEN_TOD(gen_bits2f(piVar3[8])));
        fVar9 = (float10)fVar10;
        if (fVar8 < fVar9) {
          (*(float *)(gen_frame + 0x2c)) = (float)(fVar9 - fVar8);
          fVar10 = ((float)GEN_TOF((((float10)(float)(fVar9 - fVar8) * (float10)*(double *)&REFG(undefined, 0x1080220)) /
                          (float10)*(double *)&REFG(undefined, 0x1080228))));
          (*(float *)(gen_frame + 0x2c)) = fVar10;
          if (!((float10)*(float *)&REFG(undefined, 0x10ec5cc) < (float10)fVar10)) goto LAB_00b0ba89;
LAB_00b0bac5: ;
          fVar10 = F_00a5ffa0(piVar3,(*(undefined * PTR32 *)(gen_frame + 0x1c)));
          (*(float *)(gen_frame + 0x0)) = fVar10;
          pfVar6 = &(*(float *)(gen_frame + 0x0));
        }
        else {
LAB_00b0ba89: ;
          pfVar6 = (*(float * PTR32 *)(gen_frame + 0x24));
          if (fVar9 < fVar8) {
            (*(float *)(gen_frame + 0x2c)) = (float)(fVar8 - fVar9);
            fVar10 = ((float)GEN_TOF((((float10)(float)(fVar8 - fVar9) * (float10)*(double *)&REFG(undefined, 0x1080220)) /
                            (float10)*(double *)&REFG(undefined, 0x1080228))));
            (*(float *)(gen_frame + 0x2c)) = fVar10;
            if ((float10)*(float *)&REFG(undefined, 0x10ec5cc) < (float10)fVar10) goto LAB_00b0bac5;
          }
        }
      }
      iVar11 = *(*(int * PTR32 *)(gen_frame + 0x28));
      if (iVar11 == 0) {
        if (pfVar6 != ((float *)GEN_TOP(0x0))) {
          uVar14 = 0;
          uVar12 = 1;
          iVar11 = 0x30f;
          uVar5 = F_00a5f290(piVar3 GEN_EDX_ARG);
          goto LAB_00b0bb3b;
        }
      }
      else {
        uVar14 = 0;
        uVar12 = 1;
        uVar5 = F_00a5f290(piVar3 GEN_EDX_ARG);
LAB_00b0bb3b: ;
        F_006d4be0(uVar5,iVar11,pfVar6,uVar12,uVar14);
      }
      if ((*(char *)(gen_frame + 0x33)) != '\0') {
        uVar12 = 1;
        pvVar13 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
        uVar5 = F_00a5f290(piVar3 GEN_EDX_ARG);
        F_006da750(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 4))) GEN_EDX_ARG,uVar5,pvVar13,uVar12);
      }
    }
    cVar1 = *((char *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 0x11)));
    if ((cVar1 == '\0') || (cVar1 == '\x04')) {
      if (*((char * PTR32 *)(gen_frame + 0xe4))[0] != '\0') {
        F_00710cb0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 4))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x14))),
                     ((char * PTR32 *)(gen_frame + 0xe4)),&(*(int * PTR32 *)(gen_frame + 0x4)),piVar3,(*(char *)(gen_frame + 0x32)) == '\0',(*(int * PTR32 *)(gen_frame + 0x28))[3],0x3d,0,((uint *)(gen_frame + 0x180))[0],
                     (*(int * PTR32 *)(gen_frame + 0x28))[2],0,*((undefined1 *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 0x12))),(*(int * PTR32 *)(gen_frame + 0x28))[1] == 1);
        *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
        goto LAB_00b0bc6f;
      }
    }
    else if ((cVar1 == '\x06') && (*((char * PTR32 *)(gen_frame + 0xe4))[0] != '\0')) {
      F_0042b630(((undefined1 *)(gen_frame + 0x8c)) GEN_EDX_ARG);
      F_0042b630(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
      F_00ab0230(3,((undefined1 *)(gen_frame + 0x8c)));
      F_00ab0230(4,((undefined1 *)(gen_frame + 0x34)));
      F_00710e70(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 4))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x14))),((char * PTR32 *)(gen_frame + 0xe4)),
                   &(*(int * PTR32 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x8c)),((undefined1 *)(gen_frame + 0x34)),1,0,0);
      *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
      F_0042c880(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x8c)) GEN_EDX_ARG);
      goto LAB_00b0bc6f;
    }
  }
  uVar5 = ((uint *)(gen_frame + 0x180))[0];
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 0x11))) != '\x05') {
    F_0042c880(((char * PTR32 *)(gen_frame + 0xe4)) GEN_EDX_ARG);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
LAB_00b0bcd2: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    return 0;
  }
  if (((*(int *)(gen_frame + 0x20)) != 0) && (*((char *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 800))) == '\x02')) {
    iVar11 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 0x314)));
    if (iVar11 != 0) {
      ((int *)(gen_frame + 0x15c))[0] = iVar11;
      ((uint *)(gen_frame + 0x13c))[0] = (uint)*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 0x2f9)));
      (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x180))[0] + 0)) = 0;
      ((uint *)(gen_frame + 0x180))[0] = uVar5 & 0xffffff00;
    }
    uVar5 = (uint)(iVar11 != 0);
    F_00ba07c0(&REFG(undefined, 0x14b0f2c) GEN_EDX_ARG,((int *)(gen_frame + 0x15c)),((uint *)(gen_frame + 0x13c)),((uint *)(gen_frame + 0x180)),uVar5,*((undefined4 *)GEN_TOP(((int)this + 0x14))));
    if ((uVar5 != 0) && (bVar2 = F_00ba05d0(&REFG(undefined, 0x14b0f2c) GEN_EDX_ARG), bVar2 != 0)) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,&REFG(undefined, 0x10ec68b),REFG(undefined4, 0x108cc50));
      F_0042cc20(((undefined1 *)(gen_frame + 0x8c)) GEN_EDX_ARG,&REFG(undefined, 0x10ec69b),REFG(undefined4, 0x108cc50));
      F_00ab0230(0x18f48,((undefined1 *)(gen_frame + 0x34)));
      F_00ab0230(0x18f49,((undefined1 *)(gen_frame + 0x8c)));
      F_006b8c00();
      F_006c64b0(5,((undefined1 *)(gen_frame + 0x34)),((undefined1 *)(gen_frame + 0x8c)),1);
      F_0042c880(((undefined1 *)(gen_frame + 0x8c)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
LAB_00b0bc6f: ;
      F_0042c880(((char * PTR32 *)(gen_frame + 0xe4)) GEN_EDX_ARG);
      F_00493180(&(*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      return 1;
    }
  }
  F_0042c880(((char * PTR32 *)(gen_frame + 0xe4)) GEN_EDX_ARG);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  return 0;
}

/* ref: FUN_00b0be20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0be20(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb0be20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  byte bVar1;
  int * piVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  int iVar4;
  
  for (piVar2 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x220))); piVar2 != *((int * PTR32 *)GEN_TOP((REFG(int, 0x14c0cf8) + 0x224)));
      piVar2 = piVar2 + 1) {
    iVar4 = *piVar2;
    if (*((short *)GEN_TOP((iVar4 + 0x18))) == *((short *)GEN_TOP(((int)param_1 + 4)))) goto LAB_00b0be52;
  }
  iVar4 = 0;
LAB_00b0be52: ;
  if ((short)param_2 == 2) {
    if (((iVar4 == 0) || (*((char *)GEN_TOP((iVar4 + 800))) != '\x02')) || (param_3 != '\0'))
    goto LAB_00b0be8e;
    *((undefined4 *)GEN_TOP(((int)param_1 + 8))) = 4;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0xc))) = 6;
  }
  else if ((short)param_2 != 5) goto LAB_00b0be8e;
  bVar1 = F_00b0b7e0(param_1 GEN_EDX_FWD);
  if (bVar1 != 0) {
    return CONCAT31(extraout_var,bVar1);
  }
LAB_00b0be8e: ;
  uVar3 = F_006f3a50(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x14))) GEN_EDX_ARG,0,0);
  return uVar3;
}

/* ref: FUN_00b0bea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0bea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0bea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  if (param_1 != -2) {
    if (param_1 != -1) {
      bVar1 = F_00b0b7e0(this GEN_EDX_FWD);
      if (bVar1 != 0) {
        return CONCAT31(extraout_var,bVar1);
      }
    }
    bVar1 = F_00b0b7e0(this GEN_EDX_ARG);
    if (bVar1 != 0) {
      return CONCAT31(extraout_var_00,bVar1);
    }
  }
  uVar2 = F_006f3a50(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,0,0);
  return uVar2;
}

/* ref: FUN_00b0bee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0bee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb0bee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined4 uVar3;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (param_1 == -2) {
    F_006f3a50(this_00 GEN_EDX_FWD,0,0);
    uVar2 = F_006f3a50(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,0,0);
    return uVar2;
  }
  if (*((short *)GEN_TOP(((int)this_00 + 0x54))) != 3) {
    if (param_1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 4;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 6;
      uVar2 = F_006bcfc0(this_00 GEN_EDX_ARG,2,0,0);
      return uVar2;
    }
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 6;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 8;
    uVar2 = F_006bcfc0(this_00 GEN_EDX_ARG,3,0,0);
    return uVar2;
  }
  if (param_1 == 0) {
    if (*(int *)this == 3) {
      if (*((int *)GEN_TOP(((int)this_00 + 0x58))) == 0) {
        uVar3 = 0xe0000000;
      }
      else {
        uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 0x58))) + 0x74)));
      }
      F_00a51200(0x54,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,0,0);
    }
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 4;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 6;
  }
  else {
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 6;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 8;
  }
  bVar1 = F_00b0b7e0(this GEN_EDX_ARG);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    uVar2 = F_006f3a50(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,0,0);
  }
  return uVar2;
}

/* ref: FUN_00b0bfc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0bfc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb0bfc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  byte bVar1;
  undefined * this_00;
  undefined * this_01;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  uint uVar6;
  
  ((uint *)(gen_frame + 0x0))[10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (param_1 == 0) {
    uVar6 = 0;
    this_00 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,0x7d5)));
    uVar4 = *((uint *)GEN_TOP(((int)this_00 + 0xc)));
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        this_01 = ((undefined *)GEN_TOP(F_00a37da0(this_00 GEN_EDX_ARG,uVar5)));
        if (uVar6 < 10) {
          if (*((char *)GEN_TOP(((int)this_01 + 6))) == '\0') {
            uVar3 = *((uint *)GEN_TOP(((int)this_01 + 8)));
            if ((*((byte *)GEN_TOP(((int)this_01 + 0x14))) & 1) != 0) {
              uVar3 = uVar3 + 1000000;
            }
          }
          else {
            pvVar2 = ((undefined *)GEN_TOP(F_00a3a860(this_01 GEN_EDX_ARG)));
            uVar3 = F_0046e5e0(pvVar2 GEN_EDX_ARG);
          }
          if (uVar3 != 0) {
            if (*((char *)GEN_TOP(((int)this_01 + 6))) == '\0') {
              uVar3 = *((uint *)GEN_TOP(((int)this_01 + 8)));
              if ((*((byte *)GEN_TOP(((int)this_01 + 0x14))) & 1) != 0) {
                uVar3 = uVar3 + 1000000;
              }
            }
            else {
              pvVar2 = ((undefined *)GEN_TOP(F_00a3a860(this_01 GEN_EDX_ARG)));
              uVar3 = F_0046e5e0(pvVar2 GEN_EDX_ARG);
            }
            ((uint *)(gen_frame + 0x0))[(int)(uVar6)] = uVar3;
            uVar3 = F_00a3a8a0(this_01 GEN_EDX_ARG);
            ((uint *)(gen_frame + 0x0))[(int)(uVar6 + 1)] = uVar3;
            uVar6 = uVar6 + 2;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
    F_00a36310(this_00 GEN_EDX_ARG);
    uVar4 = F_006bcfc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,0,((uint *)(gen_frame + 0x0)),uVar6);
    return uVar4;
  }
  if (param_1 != -2) {
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 6;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 8;
    bVar1 = F_00b0b7e0(this GEN_EDX_ARG);
    if (bVar1 != 0) {
      return CONCAT31(extraout_var,bVar1);
    }
  }
  uVar4 = F_006f3a50(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,0,0);
  return uVar4;
}

/* ref: FUN_00b0c0e0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b0c0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0c0e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint * puVar4;
  undefined4 * puVar5;
  undefined3 extraout_var = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  uVar3 = F_006b8c00();
  if (*((int *)GEN_TOP((uVar3 + 0x124))) == 0) {
    uVar3 = 0;
  }
  else {
    puVar4 = ((uint *)GEN_TOP(F_007512b0(((undefined *)GEN_TOP((uVar3 + 0x114))) GEN_EDX_ARG)));
    uVar3 = *puVar4;
  }
  if (uVar3 == *((uint *)GEN_TOP(((int)this + 0x14)))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    uVar3 = 0xa0;
    do {
      *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
      puVar5 = ((undefined4 *)GEN_TOP(F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + uVar3))) & 0xffffff) + *((int *)GEN_TOP(((int)this + 0x10))) + uVar3,REFG(undefined4, 0x108cc50))));
      cVar1 = *((char *)GEN_TOP(*puVar5));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      if (cVar1 == '\0') break;
      uVar3 = uVar3 + 4;
    } while (uVar3 < 0xc0);
    bVar2 = F_00b0b7e0(this GEN_EDX_ARG);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) {
      uVar3 = F_006f3a50(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,0,0);
    }
  }
  return uVar3;
}

/* ref: FUN_00b0c1a0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b0c1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb0c1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_GS(0x60, 0, 4);
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  int * piVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c));
  uVar4 = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (param_2 != 0) {
    do {
      if (param_3 == 0xdd) {
        uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + (*(uint *)(gen_frame + 0x0)) * 4))) + 4)));
        uVar4 = F_006b8c00();
        if (*((int *)GEN_TOP((uVar4 + 0x124))) == 0) {
          iVar7 = 0;
        }
        else {
          piVar8 = ((int *)GEN_TOP(0x0));
          if ((*((int * PTR32 *)GEN_TOP((uVar4 + 0x114))) != ((int *)GEN_TOP(0x0))) &&
             (puVar6 = ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((uVar4 + 0x114))))), puVar6 != ((undefined4 *)GEN_TOP(0x0)))) {
            piVar8 = ((int *)GEN_TOP(*puVar6));
          }
          uVar4 = (*((int *)GEN_TOP((uVar4 + 0x124))) + *((int *)GEN_TOP((uVar4 + 0x120)))) - 1;
          if (((piVar8 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*piVar8)) == ((int *)GEN_TOP(0x0)))) ||
             (piVar8 = *((int * PTR32 *)GEN_TOP(*piVar8)), piVar8 == ((int *)GEN_TOP(0x0)))) {
            iVar7 = 0;
          }
          else {
            iVar7 = *piVar8;
          }
          uVar5 = uVar4 >> 2;
          if (*((uint *)GEN_TOP((iVar7 + 8))) <= uVar5) {
            uVar5 = uVar5 - *((uint *)GEN_TOP((iVar7 + 8)));
          }
          iVar7 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar7 + 4))) + uVar5 * 4))) + (uVar4 & 3) * 4)));
        }
        if (iVar7 == *((int *)GEN_TOP(((int)this + 0x14)))) {
          *((undefined4 *)GEN_TOP(((int)this + 0x10))) = uVar2;
          *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
          uVar4 = 0xa0;
          do {
            *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
            puVar6 = ((undefined4 *)GEN_TOP(F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,(*((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + uVar4))) & 0xffffff
                                           ) + *((int *)GEN_TOP(((int)this + 0x10))) + uVar4,REFG(undefined4, 0x108cc50))));
            cVar1 = *((char *)GEN_TOP(*puVar6));
            F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
            if (cVar1 == '\0') break;
            uVar4 = uVar4 + 4;
          } while (uVar4 < 0xc0);
          bVar3 = F_00b0b7e0(this GEN_EDX_ARG);
          if (bVar3 == 0) {
            F_006f3a50(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,0,0);
          }
        }
      }
      uVar4 = (*(uint *)(gen_frame + 0x0)) + 1;
      (*(uint *)(gen_frame + 0x0)) = uVar4;
    } while (uVar4 < param_2);
  }
  return uVar4;
}

/* ref: FUN_00b0c2d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0c2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0c2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x1c))));
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar2 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xdd);
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar2;
  puVar3 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
  if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00cb4700(puVar3 GEN_EDX_ARG,1,0xdd);
    puVar3[5] = 1;
    *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10ecd58));
    puVar3[6] = this;
    puVar3[7] = ((code *)REFP(0xb0c1a0));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c))) = puVar3;
  F_00cb4540(puVar3 GEN_EDX_ARG,0,param_1);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1c))));
  return uVar2;
}

/* ref: FUN_00b0c390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0c390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb0c390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  undefined * this_00;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  *(uint *)this = param_3 & 0xffff;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_4;
  iVar1 = REFG(int, 0x1379694);
  switch((unsigned int)(uintptr_t)(param_3 & 0xffff)) {
  case 1: ;
  case 2: ;
  case 3: ;
  case 5: ;
    uVar3 = F_00b0c2d0(this GEN_EDX_FWD,param_4[1]);
    return uVar3;
  case 4: ;
  case 6: ;
    if ((REFG(int, 0x1379694) != 0) && (param_2 != 0)) {
      uVar3 = F_006b8c00();
      this_00 = ((undefined *)GEN_TOP((uVar3 + 0x100)));
      if ((*((int *)GEN_TOP((uVar3 + 0x124))) != 0) &&
         (piVar2 = ((int *)GEN_TOP(F_007512b0(((undefined *)GEN_TOP((uVar3 + 0x114))) GEN_EDX_ARG))), *piVar2 != 0)) {
        F_006da800(this_00 GEN_EDX_ARG,iVar1,1,0);
        F_006da800(this_00 GEN_EDX_ARG,iVar1,0,0);
      }
      F_006df030(this_00 GEN_EDX_ARG,iVar1,param_2,0);
      uVar3 = F_006f1bb0(this_00 GEN_EDX_ARG,iVar1);
      if ((char)uVar3 != '\0') {
        return uVar3;
      }
      uVar3 = F_00b072d0(this GEN_EDX_ARG);
      return uVar3;
    }
  }
  uVar3 = F_006f3a50(param_1 GEN_EDX_ARG,0,0);
  return uVar3;
}

/* ref: FUN_00b0c470 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0c470(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0c470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x5d))) = param_2;
  return param_2;
}

/* ref: FUN_00b0c480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0c480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb0c480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_006f3a50(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00b0c490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0c490(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0c490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x310))) = param_2;
  return param_2;
}

/* ref: FUN_00b0c4a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0c4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0c4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00b0c4d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0c4d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0c4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00b0c4e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0c4e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0c4e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1c))) = param_2;
  return param_2;
}

/* ref: FUN_00b0c500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0c500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0c500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0042e430(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00b0c530 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00b0c530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0c530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x30))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00b0c540 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0c540(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0c540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = ((param_2 == '\0') * '\x02' ^ *((byte *)GEN_TOP((in_ecx + 0x32)))) & 2;
  *((byte *)GEN_TOP((in_ecx + 0x32))) = *((byte *)GEN_TOP((in_ecx + 0x32))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00b0c560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0c560(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb0c560u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  param_1[2] = *param_4;
  param_1[3] = param_4[1];
  param_1[4] = param_4[2];
  F_00a6a6c0(param_1 + 5 GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00b0c5c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0c5c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0c5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 8)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0xc)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x10)));
  return (uint)param_2;
}

/* ref: FUN_00b0c630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0c630(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0c630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x218))) = param_2;
  return param_2;
}

/* ref: FUN_00b0c670 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b0c670(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0c670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((byte *)GEN_TOP((in_ecx + 0x98))) = *((byte *)GEN_TOP((in_ecx + 0x98))) | 1;
    return;
  }
  *((byte *)GEN_TOP((in_ecx + 0x98))) = *((byte *)GEN_TOP((in_ecx + 0x98))) & 0xfe;
  return;
}

/* ref: FUN_00b0c690 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0c690(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0c690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = ((param_2 != '\0') * '\x02' ^ *((byte *)GEN_TOP((in_ecx + 0x96)))) & 2;
  *((byte *)GEN_TOP((in_ecx + 0x96))) = *((byte *)GEN_TOP((in_ecx + 0x96))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00b0c710 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0c710(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0c710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((byte *)GEN_TOP((param_2 + 0x2fa + in_ecx)));
}

/* ref: FUN_00b0c730 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0c730(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0c730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 < 3) {
    return *((byte *)GEN_TOP((param_2 + 0x300 + in_ecx)));
  }
  return 0;
}

/* ref: FUN_00b0c750 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0c750(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0c750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 < 3) {
    return *((byte *)GEN_TOP((param_2 + 0x303 + in_ecx)));
  }
  return 0;
}

/* ref: FUN_00b0c780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0c780(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0c780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x330)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0x334)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x338)));
  return (uint)param_2;
}

/* ref: FUN_00b0c7c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0c7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb0c7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_2;
  *((uint *)GEN_TOP(((int)this + 0x28))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_4;
  return param_3;
}

/* ref: FUN_00b0c820 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b0c820(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0c820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  uint in_EAX = 0;
  float10 fVar1;
  float10 fVar2;
  
  if ((!(0.0 < *((float *)GEN_TOP((in_ecx + 0x344))))) || (!(0.0 < *((float *)GEN_TOP((in_ecx + 0x34c)))))) {
    return in_EAX & 0xffffff00;
  }
  fVar1 = GEN_X87((float10)((float)GEN_TOF(((float10)param_2[2] - (float10)*((float *)GEN_TOP((in_ecx + 0x338)))))));
  fVar2 = GEN_X87((float10)((float)GEN_TOF(((float10)*param_2 - (float10)*((float *)GEN_TOP((in_ecx + 0x330)))))));
  if (((float10)(float)(fVar2 * fVar2 + fVar1 * fVar1) < (float10)*((float *)GEN_TOP((in_ecx + 0x348)))) &&
     ((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)param_2[1] - (float10)*((float *)GEN_TOP((in_ecx + 0x334)))
                                          )))))) < (float10)*((float *)GEN_TOP((in_ecx + 0x34c))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0c8e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b0c8e0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0c8e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00b0c920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0c920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0c920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,param_1 + 4);
  puVar2 = param_1 + 0x19;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 100)));
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x98))) = *(undefined1 *)(param_1 + 0x26);
  return (uint)this;
}

/* ref: FUN_00b0c980 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0c980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb0c980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00cb4700(this GEN_EDX_FWD,param_2,param_3);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ecd4c));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  return (uint)this;
}

/* ref: FUN_00b0ca10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0ca10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb0ca10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ecd58));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VFateEvent_Fate_Game_Client_Game::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0ca50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb0ca50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x1c))))(*((undefined4 *)GEN_TOP(((int)this + 0x18))),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00b0ca70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0ca70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb0ca70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ecd64))
  ;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VFateContext_Fate_Game_Client_Game::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0cab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb0cab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x1c))))(*((undefined4 *)GEN_TOP(((int)this + 0x18))),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: SheetWaiter_VFateMessage_Fate_Game_Client_Game::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0cad0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0cad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00cb4870(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b0cb40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0cb40(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0cb40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0cba0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0cba0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0cba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0cbd0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0cbd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0cbd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0cc00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0cc00(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0cc00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0cc90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0cc90(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0cc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0ccf0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0ccf0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0ccf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x48,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0cd20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0cd20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0cd20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x48,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0cd50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0cd50(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0cd50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0cde0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0cde0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0cde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0ce10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0ce10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0ce10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0ce20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0ce20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0ce20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0ce70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0ce70(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0ce70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0ced0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0ced0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0ced0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0cf00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0cf00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0cf00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0cfe0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0cfe0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0cfe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0d070 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0d070(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0d0c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0d0c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0d100 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0d100(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0d130 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0d130(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0d180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0d180(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0d180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0d1c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0d1c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0d1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0d1e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0d1e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0d1e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0d230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0d230(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00b0d260 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0d260(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0d290 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0d290(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0d2c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0d2c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0d300 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0d300(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0d350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0d350(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 8))) = *((int *)GEN_TOP((in_ecx + 8))) + param_2;
  return in_ecx;
}

/* ref: FUN_00b0d360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0d360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 8;
  return (uint)this;
}

/* ref: FUN_00b0d380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0d380(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2 * 0x48;
  return (uint)in_ecx;
}

/* ref: FUN_00b0d3a0 */
GEN_OWN GEN_FRAME uint F_00b0d3a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0d3a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b0d3b0 */
GEN_OWN GEN_FRAME uint F_00b0d3b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0d3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b0d3c0 */
GEN_OWN GEN_FRAME uint F_00b0d3c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0d3c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b0d3d0 */
GEN_OWN GEN_FRAME uint F_00b0d3d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0d3d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b0d3e0 */
GEN_OWN GEN_FRAME uint F_00b0d3e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0d3e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b0d3f0 */
GEN_OWN GEN_FRAME uint F_00b0d3f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0d3f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b0d400 */
GEN_OWN GEN_FRAME uint F_00b0d400(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0d400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b0d410 */
GEN_OWN GEN_FRAME uint F_00b0d410(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0d410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b0d450 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0d450(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00b0d470 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00b0d470(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb0d470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00b0d490 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00b0d490(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00b0d4b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0d4b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b0d4d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0d4d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b0d510 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0d510(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00b0d530 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00b0d530(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb0d530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00b0d560 */
GEN_OWN GEN_FRAME unsigned int F_00b0d560(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0d560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0d580 */
GEN_OWN GEN_FRAME uint F_00b0d580(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0d580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b0d590 */
GEN_OWN GEN_FRAME uint F_00b0d590(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0d590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b0d5a0 */
GEN_OWN GEN_FRAME byte F_00b0d5a0(void)
{
  GEN_ENTER(0xb0d5a0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00b0d5b0 */
GEN_OWN GEN_FRAME uint F_00b0d5b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0d5b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b0d5e0 */
GEN_OWN GEN_FRAME byte F_00b0d5e0(void)
{
  GEN_ENTER(0xb0d5e0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00b0d5f0 */
GEN_OWN GEN_FRAME uint F_00b0d5f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0d5f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b0d600 */
GEN_OWN GEN_FRAME uint F_00b0d600(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0d600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b0d610 */
GEN_OWN GEN_FRAME byte F_00b0d610(void)
{
  GEN_ENTER(0xb0d610u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00b0d620 */
GEN_OWN GEN_FRAME uint F_00b0d620(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0d620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b0d660 */
GEN_OWN GEN_FRAME byte F_00b0d660(void)
{
  GEN_ENTER(0xb0d660u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00b0d690 */
GEN_OWN GEN_FRAME byte F_00b0d690(void)
{
  GEN_ENTER(0xb0d690u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00b0d6a0 */
GEN_OWN GEN_FRAME uint F_00b0d6a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0d6a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b0d6e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0d6e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0d700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0d700(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0d700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = param_3;
  return in_ecx;
}

/* ref: FUN_00b0d710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0d710(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0d710u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = param_3;
  return in_ecx;
}

/* ref: FUN_00b0d760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0d760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb0d760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  return (uint)this;
}

/* ref: FUN_00b0d780 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0d780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) == *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_00b0d7b0 */
GEN_OWN GEN_FRAME uint F_00b0d7b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0d7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b0d7e0 */
GEN_OWN GEN_FRAME uint F_00b0d7e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0d7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b0d810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0d810(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00b0d830 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0d830(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b0d880 */
GEN_OWN GEN_FRAME uint F_00b0d880(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0d880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b0d890 */
GEN_OWN GEN_FRAME uint F_00b0d890(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0d890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b0d8a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0d8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb0d8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00cb4700(this GEN_EDX_FWD,param_2,param_3);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ecd70));
  F_0042b630((int)this + 0x20 GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00b0d8e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b0d8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0d8e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_FWD);
  uVar1 = F_00cb4870(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Game::Fate::FateMessage::ExdWaiter::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0d900(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0x20))) GEN_EDX_FWD);
  F_00cb4870(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Fate::FateDirector::vf143 */
GEN_OWN GEN_NOFRAME unsigned int F_00b0d940(void)
{
  GEN_ENTER(0xb0d940u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Fate::FateDirector::vf153 */
GEN_OWN GEN_NOFRAME unsigned int F_00b0d950(void)
{
  GEN_ENTER(0xb0d950u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Fate::FateDirector::vf154 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b0d960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb0d960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::Game::Fate::FateDirector::vf155 */
GEN_OWN GEN_NOFRAME unsigned int F_00b0d970(void)
{
  GEN_ENTER(0xb0d970u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Fate::FateDirector::vf147 */
GEN_OWN GEN_NOFRAME byte F_00b0d980(void)
{
  GEN_ENTER(0xb0d980u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf157 */
GEN_OWN GEN_NOFRAME byte F_00b0d990(void)
{
  GEN_ENTER(0xb0d990u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf52 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b0d9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d9a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: Client::Game::Fate::FateDirector::vf100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0d9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0d9b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * this_00;
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  this_00 = *(undefined * PTR32 *)(this + 0x328);
  uVar1 = (uint)*((ushort *)GEN_TOP(((int)this_00 + 0x54)));
  if ((uVar1 == 4) || (uVar1 = uVar1 - 6, uVar1 == 0)) {
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x1));
    uVar1 = F_006f3a50(this_00 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),1);
  }
  return uVar1;
}

/* ref: FUN_00b0d9e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0d9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0d9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00a5f290(param_1 GEN_EDX_FWD);
    if (uVar1 != 0) {
      return *((byte *)GEN_TOP((uVar1 + 0x1689))) <= *((byte *)GEN_TOP(((int)this + 0x322)));
    }
  }
  return 0;
}

/* ref: FUN_00b0da30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0da30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0da30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00a5f290(param_1 GEN_EDX_FWD);
    if (uVar1 != 0) {
      return (uint)(*((byte *)GEN_TOP(((int)this + 0x322))) < *((byte *)GEN_TOP((uVar1 + 0x1689))));
    }
  }
  return 1;
}

/* ref: FUN_00b0da80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0da80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0da80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0da90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0da90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0da90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00b0daa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0daa0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0daa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0dab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0dab0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0dab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00b0dac0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b0dac0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0dac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  uint * puVar1;
  uint uVar2;
  
  if (0xb < param_2) {
                    
    F_00c457e7(((char *)REFP(0x10b92dc)));
  }
  uVar2 = 1 << ((byte)param_2 & 0x1f);
  puVar1 = ((uint *)GEN_TOP((param_1 + (param_2 >> 5) * 4)));
  if (param_3 != '\0') {
    *puVar1 = *puVar1 | uVar2;
    return 0;
  }
  *puVar1 = *puVar1 & ~uVar2;
  return 0;
}

/* ref: FUN_00b0db00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b0db00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0db00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint * puVar1;
  
  if (0xb < param_1) {
                    
    F_00c457e7(((char *)REFP(0x10b92dc)));
  }
  puVar1 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4)));
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
  return 0;
}

/* ref: FUN_00b0db40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0db40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0db40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if (0xb < param_1) {
                    
    F_00c457e7(((char *)REFP(0x10b92dc)));
  }
  return (uint)((1 << ((byte)param_1 & 0x1f) & *((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4)))) != 0);
}

/* ref: FUN_00b0dc40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0dc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0dc40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) == *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_00b0dc60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0dc60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0dc60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) != *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: CallbackSheetWaiter_VFateEvent_Fate_Game_Client_Game::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0dc80(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0dc80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00cb4870(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: CallbackSheetWaiter_VFateContext_Fate_Game_Client_Game::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0dcb0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0dcb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00cb4870(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b0dd80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0dd80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0dd80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0dd90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0dd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0dd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00b0ddb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0ddb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0ddb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0ddc0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0ddc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0ddc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00b0dde0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0dde0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0dde0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0ddf0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0ddf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0ddf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00b0de40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0de40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0de40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0de50 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0de50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0de50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00b0de70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0de70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0de70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0de80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0de80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0de80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00b0ded0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0ded0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb0ded0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_00b0df10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0df10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0df10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b0df50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0df50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0df50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_00b0df80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0df80(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0df80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0df90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0df90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0df90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x48;
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

/* ref: FUN_00b0dfe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0dfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0dfe0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b0e030 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0e030(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0e040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e040u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b0e070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e070(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 8))) = *((int *)GEN_TOP((in_ecx + 8))) - param_2;
  return in_ecx;
}

/* ref: FUN_00b0e080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 8;
  return (uint)this;
}

/* ref: FUN_00b0e0a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e0a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2 * 0x48;
  return (uint)in_ecx;
}

/* ref: FUN_00b0e0c0 */
GEN_OWN GEN_FRAME uint F_00b0e0c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e0c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e0e0 */
GEN_OWN GEN_FRAME uint F_00b0e0e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e0e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e100 */
GEN_OWN GEN_FRAME uint F_00b0e100(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00b0e130 */
GEN_OWN GEN_FRAME unsigned int F_00b0e130(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00b0e150 */
GEN_OWN GEN_FRAME unsigned int F_00b0e150(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00b0e170 */
GEN_OWN GEN_FRAME uint F_00b0e170(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e190 */
GEN_OWN GEN_FRAME uint F_00b0e190(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e1b0 */
GEN_OWN GEN_FRAME uint F_00b0e1b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e1b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b0e1e0 */
GEN_OWN GEN_FRAME uint F_00b0e1e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e1e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e210 */
GEN_OWN GEN_FRAME uint F_00b0e210(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00b0e270 */
GEN_OWN GEN_FRAME unsigned int F_00b0e270(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00b0e2a0 */
GEN_OWN GEN_FRAME uint F_00b0e2a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e2a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b0e2e0 */
GEN_OWN GEN_FRAME uint F_00b0e2e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0e2e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b0e2f0 */
GEN_OWN GEN_FRAME uint F_00b0e2f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0e300 */
GEN_OWN GEN_FRAME uint F_00b0e300(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((param_1 + 8))) = param_3;
  return param_1;
}

/* ref: FUN_00b0e310 */
GEN_OWN GEN_FRAME uint F_00b0e310(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((param_1 + 8))) = param_3;
  return param_1;
}

/* ref: FUN_00b0e320 */
GEN_OWN GEN_FRAME unsigned int F_00b0e320(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: _Uninitialized_move<>_00b0e350 */
GEN_OWN GEN_FRAME unsigned int F_00b0e350(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e350u, gen_a0, gen_a1, gen_a2, 0u);
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
    puVar5 = puVar1 + 0x12;
    puVar3 = puVar2 + 0x12;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 0x12; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00b0e380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  if (*(undefined4 * PTR32 *)this == ((undefined4 *)GEN_TOP(0x0))) {
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    *param_1 = 0;
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *param_1 = **(undefined4 * PTR32 *)this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b0e3f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0e3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) != *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_00b0e410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  return (uint)this;
}

/* ref: FUN_00b0e440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e440(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = 0xe0000000;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b0e470 */
GEN_OWN GEN_FRAME uint F_00b0e470(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e490 */
GEN_OWN GEN_FRAME uint F_00b0e490(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e4b0 */
GEN_OWN GEN_FRAME uint F_00b0e4b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e4b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e4f0 */
GEN_OWN GEN_FRAME uint F_00b0e4f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0e4f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Client::Game::Fate::FateDirector::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e520(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b077a0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b0e560 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b0e560(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((uint *)GEN_TOP((in_ecx + 0x1c))) = *((uint *)GEN_TOP((in_ecx + 0x1c))) | 1;
    return;
  }
  *((uint *)GEN_TOP((in_ecx + 0x1c))) = *((uint *)GEN_TOP((in_ecx + 0x1c))) & 0xfffffffe;
  return;
}

/* ref: FUN_00b0e590 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b0e590(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((uint *)GEN_TOP((in_ecx + 0x1c))) = *((uint *)GEN_TOP((in_ecx + 0x1c))) | 8;
    return;
  }
  *((uint *)GEN_TOP((in_ecx + 0x1c))) = *((uint *)GEN_TOP((in_ecx + 0x1c))) & 0xfffffff7;
  return;
}

/* ref: FUN_00b0e5c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b0e5c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((uint *)GEN_TOP((in_ecx + 0x1c))) = *((uint *)GEN_TOP((in_ecx + 0x1c))) | 0x10;
    return;
  }
  *((uint *)GEN_TOP((in_ecx + 0x1c))) = *((uint *)GEN_TOP((in_ecx + 0x1c))) & 0xffffffef;
  return;
}

/* ref: FUN_00b0e5f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b0e5f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((uint *)GEN_TOP((in_ecx + 0x1c))) = *((uint *)GEN_TOP((in_ecx + 0x1c))) | 0x20;
    return;
  }
  *((uint *)GEN_TOP((in_ecx + 0x1c))) = *((uint *)GEN_TOP((in_ecx + 0x1c))) & 0xffffffdf;
  return;
}

/* ref: FUN_00b0e630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e630(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0e640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e640(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00b0e660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e660(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0e670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e670(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00b0e690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e690(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0e6a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e6a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e6a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00b0e6c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e6c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0e6d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e6d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00b0e6e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b0e700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00b0e740 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0e740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00b0e760 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0e760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00b0e780 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0e780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00b0e7b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e7b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e7b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0e7c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e7c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e7c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00b0e7d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0e7d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e7d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00b0e7f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b0e7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00b0e810 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0e810(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0e830 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b0e830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0e830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00b0e870 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0e870(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0e880 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0e880(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0e8a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b0e8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0e8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00b0e8e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0e8e0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0e8e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  if (param_2 != 0) {
    *in_ecx = *in_ecx & 0xfff;
  }
  return param_2;
}

/* ref: FUN_00b0e900 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b0e900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0e900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 - 1;
      *((int *)GEN_TOP(((int)this + 0x10))) = iVar2;
      if (iVar2 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      }
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  while (iVar2 != 0) {
    iVar2 = iVar2 - 1;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))),0x10,0x321);
    }
  }
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar4 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,0x321);
    uVar3 = (uint)uVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: FUN_00b0e9c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b0e9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0e9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x321);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00b0e9f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b0e9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0e9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00b0ea30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0ea30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb0ea30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_00b0ea70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0ea70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0ea70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((((int *)GEN_TOP(*param_1)) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00b0eaa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0eaa0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0eaa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2 * -8;
  return (uint)in_ecx;
}

/* ref: FUN_00b0eac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0eac0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0eac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2 * -0x48;
  return (uint)in_ecx;
}

/* ref: FUN_00b0eae0 */
GEN_OWN GEN_FRAME uint F_00b0eae0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb0eae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
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

/* ref: FUN_00b0eb10 */
GEN_OWN GEN_FRAME unsigned int F_00b0eb10(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0eb10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: _Uninitialized_move<>_00b0eb40 */
GEN_OWN GEN_FRAME unsigned int F_00b0eb40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0eb40u, gen_a0, gen_a1, gen_a2, 0u);
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
    puVar5 = puVar1 + 0x12;
    puVar3 = puVar2 + 0x12;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 0x12; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00b0eb70 */
GEN_OWN GEN_FRAME uint F_00b0eb70(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(int * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb0eb70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(int * param_6 = (int *)(uintptr_t)gen_a5;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3;
  if (param_3 != param_5) {
    do {
      uVar1 = uVar2 >> 2;
      if (*((uint *)GEN_TOP((param_2 + 8))) <= uVar1) {
        uVar1 = uVar1 - *((uint *)GEN_TOP((param_2 + 8)));
      }
    } while ((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 4))) + uVar1 * 4))) + (uVar2 & 3) * 4))) != *param_6)
            && (uVar2 = uVar2 + 1, uVar2 != param_5));
  }
  *param_1 = param_2;
  param_1[1] = uVar2;
  return (uint)param_1;
}

/* ref: FUN_00b0ebc0 */
GEN_OWN GEN_FRAME uint F_00b0ebc0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb0ebc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = 0;
    param_1[1] = param_4;
    return (uint)param_1;
  }
  *param_1 = *param_2;
  param_1[1] = param_4;
  return (uint)param_1;
}

/* ref: FUN_00b0ebf0 */
GEN_OWN GEN_FRAME uint F_00b0ebf0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(int * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb0ebf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(int * param_6 = (int *)(uintptr_t)gen_a5;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3;
  if (param_3 != param_5) {
    do {
      uVar1 = uVar2 >> 2;
      if (*((uint *)GEN_TOP((param_2 + 8))) <= uVar1) {
        uVar1 = uVar1 - *((uint *)GEN_TOP((param_2 + 8)));
      }
    } while ((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 4))) + uVar1 * 4))) + (uVar2 & 3) * 4))) != *param_6)
            && (uVar2 = uVar2 + 1, uVar2 != param_5));
  }
  *param_1 = param_2;
  param_1[1] = uVar2;
  return (uint)param_1;
}

/* ref: FUN_00b0ec40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0ec40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0ec40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  if (*(undefined4 * PTR32 *)this == ((undefined4 *)GEN_TOP(0x0))) {
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    *param_1 = 0;
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *param_1 = **(undefined4 * PTR32 *)this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b0ec80 */
GEN_OWN GEN_FRAME unsigned int F_00b0ec80(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0ec80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00b0ecb0 */
GEN_OWN GEN_FRAME unsigned int F_00b0ecb0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0ecb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00b0ece0 */
GEN_OWN GEN_FRAME unsigned int F_00b0ece0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0ece0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
    }
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_00b0ed10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b0ed10(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb0ed10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  *param_1 = 0xe0000000;
  return (uint)param_1;
}

/* ref: FUN_00b0ed20 */
GEN_OWN GEN_FRAME unsigned int F_00b0ed20(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0ed20u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00b0ed50 */
GEN_OWN GEN_FRAME unsigned int F_00b0ed50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0ed50u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00b0ed80 */
GEN_OWN GEN_FRAME unsigned int F_00b0ed80(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0ed80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00b0edb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b0edb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0edb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00b0edf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0edf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb0edf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  F_00c46e20(param_2,param_2 + 4,(*((int *)GEN_TOP(((int)this + 4))) - (param_2 + 4) >> 2) * 4);
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0ee30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b0ee30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0ee30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00b0ee70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0ee70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb0ee70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  F_00c46e20(param_2,param_2 + 4,(*((int *)GEN_TOP(((int)this + 4))) - (param_2 + 4) >> 2) * 4);
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0ef00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b0ef00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0ef00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00b0e900(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x321);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00b0ef30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0ef30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0ef30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b0ef50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0ef50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0ef50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00b0ef70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b0ef70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0ef70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00b0efb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0efb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb0efb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*((int *)GEN_TOP(((int)this + 4))) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0f010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0f010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb0f010u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*((int *)GEN_TOP(((int)this + 4))) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0f070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0f070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb0f070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = *(int *)this + param_2 * -8;
  return (uint)param_1;
}

/* ref: FUN_00b0f090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0f090(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0f090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *param_2 = *in_ecx + param_3 * -0x48;
  return (uint)param_2;
}

/* ref: FUN_00b0f0b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0f0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb0f0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*((int *)GEN_TOP(((int)this + 4))) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0f110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0f110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0f110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((((int *)GEN_TOP(*param_1)) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00b0f140 */
GEN_OWN GEN_FRAME uint F_00b0f140(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xb0f140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 * puVar1;
  byte * pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((param_5 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*param_5)) == ((int *)GEN_TOP(0x0)))) ||
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_5)), puVar1 == ((undefined4 *)GEN_TOP(0x0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  if (((param_2 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*param_2)) == ((int *)GEN_TOP(0x0)))) ||
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_2)), puVar1 == ((undefined4 *)GEN_TOP(0x0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
  }
  pbVar2 = ((byte *)GEN_TOP(F_00b0ebf0(((byte *)(gen_frame + 0x0)) + 8,uVar4,param_4,uVar3,param_7,param_8)));
  uVar3 = *(undefined4 *)(pbVar2 + 4);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = *(undefined4 *)pbVar2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar3;
  if ((param_2 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_2)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*param_2));
  }
  return (uint)param_1;
}

/* ref: FUN_00b0f1d0 */
GEN_OWN GEN_FRAME uint F_00b0f1d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb0f1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = 0;
    param_1[1] = param_4;
    return (uint)param_1;
  }
  *param_1 = *param_2;
  param_1[1] = param_4;
  return (uint)param_1;
}

/* ref: FUN_00b0f210 */
GEN_OWN GEN_FRAME unsigned int F_00b0f210(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0f210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f240 */
GEN_OWN GEN_FRAME unsigned int F_00b0f240(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0f240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b0f270 */
GEN_OWN GEN_FRAME unsigned int F_00b0f270(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0f270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP((iVar2 + 4 + (int)puVar1)));
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f2a0 */
GEN_OWN GEN_FRAME unsigned int F_00b0f2a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0f2a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f2d0 */
GEN_OWN GEN_FRAME unsigned int F_00b0f2d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0f2d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f300 */
GEN_OWN GEN_FRAME uint F_00b0f300(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0f300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = 0xe0000000;
  return (uint)param_2;
}

/* ref: FUN_00b0f310 */
GEN_OWN GEN_FRAME unsigned int F_00b0f310(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0f310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f380 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b0f380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0f380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00b0e900(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x321);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00b0f3b0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b0f3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0f3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *((int *)GEN_TOP(((int)this + 4)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 4))),0);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  }
  return;
}

/* ref: FUN_00b0f400 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b0f400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0f400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *((int *)GEN_TOP(((int)this + 4)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 4))),0);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  }
  return;
}

/* ref: FUN_00b0f460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0f460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb0f460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar3 = ((int *)GEN_TOP(*puVar1));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 - param_2;
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*piVar3));
  }
  return (uint)param_1;
}

/* ref: FUN_00b0f4a0 */
GEN_OWN GEN_FRAME uint F_00b0f4a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xb0f4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 * puVar1;
  byte * pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((param_5 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*param_5)) == ((int *)GEN_TOP(0x0)))) ||
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_5)), puVar1 == ((undefined4 *)GEN_TOP(0x0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  if (((param_2 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*param_2)) == ((int *)GEN_TOP(0x0)))) ||
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_2)), puVar1 == ((undefined4 *)GEN_TOP(0x0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
  }
  pbVar2 = ((byte *)GEN_TOP(F_00b0eb70(((byte *)(gen_frame + 0x0)) + 8,uVar4,param_4,uVar3,param_7,param_8)));
  uVar3 = *(undefined4 *)(pbVar2 + 4);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = *(undefined4 *)pbVar2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar3;
  if ((param_2 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_2)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*param_2));
  }
  return (uint)param_1;
}

/* ref: FUN_00b0f540 */
GEN_OWN GEN_FRAME unsigned int F_00b0f540(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0f540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f570 */
GEN_OWN GEN_FRAME unsigned int F_00b0f570(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0f570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b0f5a0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00b0f5a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0f5a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP((iVar2 + 4 + (int)puVar1)));
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f5e0 */
GEN_OWN GEN_FRAME unsigned int F_00b0f5e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0f5e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f610 */
GEN_OWN GEN_FRAME unsigned int F_00b0f610(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0f610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f640 */
GEN_OWN GEN_FRAME unsigned int F_00b0f640(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0f640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 0x12) {
    *puVar1 = 0xe0000000;
  }
  return 0;
}

/* ref: FUN_00b0f660 */
GEN_OWN GEN_FRAME unsigned int F_00b0f660(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0f660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f690 */
GEN_OWN GEN_FRAME unsigned int F_00b0f690(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0f690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 0x12) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar4 = puVar3;
      puVar5 = puVar1;
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar1 = puVar1 + 0x12;
  }
  return 0;
}

/* ref: Client::Game::Fate::FateContext::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0f6d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0f6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b094e0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b0f700 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b0f700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0f700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  piVar4 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar4 = ((int *)GEN_TOP(*puVar2));
  }
  uVar1 = (*((int *)GEN_TOP(((int)this + 0x10))) + *((int *)GEN_TOP(((int)this + 0xc)))) - 1;
  if (((piVar4 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*piVar4)) == ((int *)GEN_TOP(0x0)))) ||
     (piVar4 = *((int * PTR32 *)GEN_TOP(*piVar4)), piVar4 == ((int *)GEN_TOP(0x0)))) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar4;
  }
  uVar3 = uVar1 >> 2;
  if (*((uint *)GEN_TOP((iVar5 + 8))) <= uVar3) {
    uVar3 = uVar3 - *((uint *)GEN_TOP((iVar5 + 8)));
  }
  return *((int *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 4))) + uVar3 * 4))) + (uVar1 & 3) * 4;
}

/* ref: FUN_00b0f760 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b0f760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0f760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00b0f7a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0f7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0f7a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0x3fffffff - uVar6 < param_1) {
                    
    F_00c4579a(((char *)REFP(0x1090ac0)));
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= 0x3fffffff - uVar7)) {
    param_1 = uVar7;
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 0xc))) >> 2;
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((uVar6 + param_1) * 4,0,0x321)));
  iVar5 = *((int *)GEN_TOP(((int)this + 8)));
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  puVar8 = puVar3 + uVar7;
  for (puVar4 = ((undefined4 *)GEN_TOP((iVar2 + uVar7 * 4))); puVar4 != ((undefined4 *)GEN_TOP((iVar2 + iVar5 * 4)));
      puVar4 = puVar4 + 1) {
    if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *((int *)GEN_TOP(((int)this + 4)));
    puVar8 = puVar3;
    for (puVar4 = ((undefined4 *)GEN_TOP((iVar5 + param_1 * 4))); uVar6 = param_1,
        puVar4 != ((undefined4 *)GEN_TOP((iVar5 + uVar7 * 4))); puVar4 = puVar4 + 1) {
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 - 1) {
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar9 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,0x321);
    uVar6 = (uint)uVar9;
  }
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + param_1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  return uVar6;
}

/* ref: FUN_00b0f920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0f920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0f920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,0x321);
    F_00b0f5a0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,0x321);
    }
    uVar4 = uVar3 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 8 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_00b0f9c0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00b0f9c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0f9c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f9f0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00b0f9f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0f9f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0fa20 */
GEN_OWN GEN_FRAME unsigned int F_00b0fa20(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0fa20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 0x12) {
    *puVar1 = 0xe0000000;
  }
  return 0;
}

/* ref: FUN_00b0fa40 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00b0fa40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0fa40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0fa70 */
GEN_OWN GEN_FRAME unsigned int F_00b0fa70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0fa70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0x12;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0fab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0fab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0fab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x321)));
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x321);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00b0fb60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b0fb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0fb60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00b0fba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0fba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb0fba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar3 = param_2;
  puVar2 = param_2;
  while (puVar2 = puVar2 + 2, puVar2 != puVar1) {
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3 = puVar3 + 2;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 8;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0fbe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0fbe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0fbe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*((byte *)GEN_TOP(((int)this + 0xc))) & 3) == 0) &&
     (*((uint *)GEN_TOP(((int)this + 8))) <= *((int *)GEN_TOP(((int)this + 0x10))) + 4U >> 2)) {
    F_00b0f7a0(this GEN_EDX_FWD,1);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar3 == 0) {
    iVar3 = *((int *)GEN_TOP(((int)this + 8))) * 4;
  }
  uVar4 = iVar3 - 1;
  uVar5 = uVar4 >> 2;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar5 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0x321);
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar5 * 4))) = uVar2;
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar5 * 4))) + (uVar4 & 3) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar4;
  return (uint)puVar1;
}

/* ref: FUN_00b0fc60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0fc60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0fc60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x321)));
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x321);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00b0fd10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0fd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0fd10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b0fab0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b0fab0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b0fd80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0fd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0fd80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b0f920(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b0f920(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b0fdf0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00b0fdf0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb0fdf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 0x12) {
    *puVar1 = 0xe0000000;
  }
  return 0;
}

/* ref: FUN_00b0fe20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b0fe20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0fe20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  uVar3 = 0;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (; puVar2 != puVar1; puVar2 = puVar2 + 0x12) {
      *puVar2 = 0xe0000000;
    }
    uVar4 = F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x48) * 0x48,0x321
                        );
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: FUN_00b0fe90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0fe90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0fe90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b0fc60(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b0fc60(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b0ff00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0ff00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0ff00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x321)));
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x321);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00b0ffb0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00b0ffb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb0ffb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0x12;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0fff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b0fff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb0fff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00b0fd10(this GEN_EDX_FWD,1);
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00b0fd10(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00b10060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b10060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb10060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      puVar4 = ((undefined4 *)GEN_TOP(F_00b0fd80(this GEN_EDX_FWD,1)));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      iVar2 = *(int *)this;
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + iVar5 * 8)));
      uVar3 = *((uint *)GEN_TOP((iVar2 + 4 + iVar5 * 8)));
      puVar1[1] = uVar3;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00b0fd80(this GEN_EDX_ARG,1);
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
  return (uint)puVar4;
}

/* ref: FUN_00b100f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b100f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb100f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = ((undefined4 *)GEN_TOP(((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x48)));
  if (puVar1 < param_1) {
    puVar1 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 0x48,0,0x321)));
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar5 = puVar1;
    for (puVar2 = *(undefined4 * PTR32 *)this; puVar2 != puVar3; puVar2 = puVar2 + 0x12) {
      if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar6 = puVar2;
        puVar7 = puVar5;
        for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      puVar5 = puVar5 + 0x12;
    }
    puVar3 = *(undefined4 * PTR32 *)this;
    iVar4 = *((int *)GEN_TOP(((int)this + 4))) - (int)puVar3;
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
      for (; puVar3 != puVar2; puVar3 = puVar3 + 0x12) {
        *puVar3 = 0xe0000000;
      }
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x48) * 0x48,0x321);
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar1 + (int)((int)(uintptr_t)param_1) * 0x12;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar1 + (iVar4 / 0x48) * 0x12;
    *(undefined4 * PTR32 *)this = puVar1;
  }
  return (uint)puVar1;
}

/* ref: FUN_00b10200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b10200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb10200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00b0fe90(this GEN_EDX_FWD,1);
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00b0fe90(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00b10270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b10270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb10270u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar2 = param_2;
    puVar4 = param_3;
    while (puVar4 != puVar1) {
      puVar3 = puVar4 + 0x12;
      puVar6 = puVar2 + 0x12;
      puVar7 = puVar4;
      puVar8 = puVar2;
      for (iVar5 = 0x12; puVar2 = puVar6, puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (puVar4 = puVar2; puVar4 != puVar1; puVar4 = puVar4 + 0x12) {
      *puVar4 = 0xe0000000;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b102e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b102e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb102e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x48;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x48;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00b100f0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00b100f0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00b10370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b10370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb10370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b0ff00(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b0ff00(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b103e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b103e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb103e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00b102e0(this GEN_EDX_FWD,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar2) / 0x48) * 0x48)));
  }
  else {
    puVar2 = param_1;
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00b102e0(this GEN_EDX_ARG,1);
    }
  }
  if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined4 *)GEN_TOP(0x0))) {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x48;
  return;
}

/* ref: FUN_00b10450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b10450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb10450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00b10270(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00b10470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b10470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb10470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00b10370(this GEN_EDX_FWD,1);
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00b10370(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: Client::Game::Fate::FateMessage::ExdWaiter::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b104e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb104e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00b0a090(*(undefined * PTR32 *)(this + 0x18) GEN_EDX_FWD,param_2,param_1,param_3,this);
  return uVar1;
}

/* ref: FUN_00b10500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b10500(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb10500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b09eb0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Fate::FateDirector::vf27 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b10530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb10530u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00b0be20(this + 0x314 GEN_EDX_FWD,param_1,(undefined1)param_2,param_3,param_4);
  return uVar1;
}

/* ref: Client::Game::Fate::FateDirector::vf53 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b10540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb10540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  if (param_1 != -2) {
    if (param_1 != -1) {
      bVar1 = F_00b0b7e0(this + 0x314 GEN_EDX_FWD);
      if (bVar1 != 0) {
        return CONCAT31(extraout_var,bVar1);
      }
    }
    bVar1 = F_00b0b7e0(this + 0x314 GEN_EDX_ARG);
    if (bVar1 != 0) {
      return CONCAT31(extraout_var_00,bVar1);
    }
  }
  uVar2 = F_006f3a50(*(undefined * PTR32 *)(this + 0x328) GEN_EDX_ARG,0,0);
  return uVar2;
}

/* ref: Client::Game::Fate::FateDirector::vf55 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b10580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb10580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00b0bee0(this + 0x314 GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: Client::Game::Fate::FateDirector::vf59 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b10590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb10590u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00b0bfc0(this + 0x314 GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::Game::Fate::FateDirector::vf24 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b105a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb105a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00b0c390(this + 0x314 GEN_EDX_FWD,this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00b105d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b105d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb105d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed00c));
  uVar1 = F_00406b30(*((undefined4 *)GEN_TOP(((int)this + 8))));
  return (uint)uVar1;
}

/* ref: FUN_00b105f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b105f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb105f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * _Dst;
  gen_size32 _Size;
  
  *((undefined2 *)GEN_TOP(((int)this + 4))) = (undefined2)param_1;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = (undefined2)param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed00c));
  *((undefined2 *)GEN_TOP(((int)this + 0xc))) = 0x3440;
  _Size = (int)*((short *)GEN_TOP(((int)this + 6))) * (int)*((short *)GEN_TOP(((int)this + 4)));
  _Dst = ((undefined *)GEN_TOP(F_00406bb0(_Size,0,0)));
  if (_Dst != ((undefined *)GEN_TOP(0x0))) {
    if (-1 < (int)(_Size - 1)) {
      F_00c48350(_Dst,0,_Size);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 8))) = _Dst;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return (uint)this;
}

/* ref: FUN_00b10660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b10660(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb10660u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar4 = (float10)(*(float *)&gen_args[0]);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10943d8);
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1094788);
  iVar3 = *((short *)GEN_TOP((param_1 + 4))) * (*(int *)&gen_args[2]);
  (*(undefined2 *)((char *)&(*(float *)&gen_args[0]) + 0)) = gen_x87_cw | 0xc00;
  (*(uint *)(gen_frame + 0x8)) = 0;
  gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(float *)&gen_args[0]) + 0)));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar2 = 1;
  if (*((short *)GEN_TOP((param_1 + 4))) < 1) {
    return 0;
  }
  do {
    if (((*(uint *)&gen_args[1]) & uVar2) == 0) {
      (*(ushort *)(gen_frame + 0x0)) = gen_x87_cw | 0xc00;
      gen_set_x87_cw((unsigned short)(*(ushort *)(gen_frame + 0x0)));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x0)) + 0)) = (undefined1)(int)TRUNC(((float10)0 * fVar5) * fVar6);
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + iVar3))) = (undefined1)(*(ushort *)(gen_frame + 0x0));
    }
    else {
      uVar1 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + iVar3))) +
              ((int)TRUNC((fVar4 * fVar5) * fVar6) & 0xffU);
      if (0xff < uVar1) {
        uVar1 = 0xff;
      }
      *((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + iVar3))) = (byte)uVar1;
      if (*((byte *)GEN_TOP((param_1 + 0xc))) < (byte)uVar1) {
        (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) | uVar2;
        *((undefined1 *)GEN_TOP((iVar3 + *((int *)GEN_TOP((param_1 + 8)))))) = *((undefined1 *)GEN_TOP((param_1 + 0xd)));
      }
    }
    (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    iVar3 = iVar3 + 1;
  } while ((*(int *)(gen_frame + 0x4)) < *((short *)GEN_TOP((param_1 + 4))));
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_00b10770 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b10770(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb10770u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint * puVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)*(double *)&REFG(undefined, 0x10943d8);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1094788);
  (*(ushort *)(gen_frame + 0x0)) = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)(*(ushort *)(gen_frame + 0x0)));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  iVar3 = 0;
  if (*((short *)GEN_TOP((param_1 + 4))) < 1) {
    return 0;
  }
  do {
    if ((*((uint *)GEN_TOP((param_3 + iVar3 * 4))) & param_4) == 0) {
      (*(ushort *)(gen_frame + 0x0)) = gen_x87_cw | 0xc00;
      gen_set_x87_cw((unsigned short)(*(ushort *)(gen_frame + 0x0)));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x0)) + 0)) = (undefined1)(int)TRUNC(((float10)0 * fVar4) * fVar5);
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + iVar3))) = (undefined1)(*(ushort *)(gen_frame + 0x0));
    }
    else {
      uVar2 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + iVar3))) +
              ((int)TRUNC(((float10)param_2 * fVar4) * fVar5) & 0xffU);
      if (0xff < uVar2) {
        uVar2 = 0xff;
      }
      *((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + iVar3))) = (byte)uVar2;
      if (*((byte *)GEN_TOP((param_1 + 0xc))) < (byte)uVar2) {
        puVar1 = ((uint *)GEN_TOP((param_3 + iVar3 * 4)));
        *puVar1 = *puVar1 | param_5;
        *((undefined1 *)GEN_TOP((iVar3 + *((int *)GEN_TOP((param_1 + 8)))))) = *((undefined1 *)GEN_TOP((param_1 + 0xd)));
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < *((short *)GEN_TOP((param_1 + 4))));
  return 0;
}

/* ref: FUN_00b10870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b10870(GEN_P(undefined1 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xb10870u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  ushort local_8;
  
  local_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)local_8);
  uVar1 = (int)TRUNC(((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x10943d8)) *
                     (float10)*(double *)&REFG(undefined, 0x1094788)) & 0xff;
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *in_ecx = (char)uVar1;
  return uVar1;
}

/* ref: FUN_00b108d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b108d0(GEN_P(undefined1 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb108d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  undefined1 uVar2;
  
  (*(ushort *)(gen_frame + 0x0)) = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)(*(ushort *)(gen_frame + 0x0)));
  uVar1 = (uint)TRUNC(((float10)*(double *)&REFG(undefined, 0x10943d8) *
                      (float10)((float)GEN_TOF(((float10)(param_2 & 0xff) / (float10)*(double *)&REFG(undefined, 0x10943d8)
                                      )))) * (float10)*(double *)&REFG(undefined, 0x1094788));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x0)) + 0)) = (undefined1)uVar1;
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar2 = (undefined1)(*(ushort *)(gen_frame + 0x0));
  if (0xff < (uVar1 & 0xff)) {
    uVar2 = 0xff;
  }
  *param_1 = uVar2;
  return (uint)param_1;
}

/* ref: FUN_00b10930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b10930(GEN_P(undefined1 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xb10930u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  undefined1 uVar2;
  
  (*(ushort *)(gen_frame + 0x0)) = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)(*(ushort *)(gen_frame + 0x0)));
  uVar1 = (uint)TRUNC(((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x10943d8)) *
                      (float10)*(double *)&REFG(undefined, 0x1094788));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x0)) + 0)) = (undefined1)uVar1;
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar2 = (undefined1)(*(ushort *)(gen_frame + 0x0));
  if (0xff < (uVar1 & 0xff)) {
    uVar2 = 0xff;
  }
  *in_ecx = uVar2;
  return (uint)in_ecx;
}

/* ref: FUN_00b10990 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b10990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb10990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = (uint)*param_1 + (uint)*(byte *)this;
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *(char *)this = (char)uVar1;
  return (uint)this;
}

/* ref: FUN_00b109c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b109c0(GEN_P(byte * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb109c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte * in_ecx = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  return (uint)(*param_2 < *in_ecx);
}

/* ref: FUN_00b109e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b109e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb109e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *(undefined1 *)this = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00b109f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b109f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb109f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  ushort local_8;
  
  local_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)local_8);
  uVar1 = (int)TRUNC(((float10)(byte)param_1 * (float10)*(double *)&REFG(undefined, 0x10943d8)) *
                     (float10)*(double *)&REFG(undefined, 0x1094788)) & 0xff;
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *(char *)this = (char)uVar1;
  return uVar1;
}

/* ref: Client::System::Input::RepeatCounter::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b10a40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb10a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10ed00c));
  F_00406b30(param_1[2]);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b10a80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b10a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb10a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  undefined * puVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed038));
  if (REFG(int, 0x14c0d40) == 0) {
    uVar6 = 0;
    puVar5 = &REFG(int, 0x14c0d40);
    puVar4 = &REFG(undefined, 0x1081724);
    uVar3 = 0x800;
    pHVar1 = gen_imp_GetModuleHandleA((LPCSTR)0x0);
    iVar2 = gen_imp_DirectInput8Create(pHVar1,uVar3,puVar4,puVar5,uVar6);
    if (iVar2 < 0) {
      REFG(int, 0x14c0d40) = 0;
      gen_imp_MessageBoxA((HWND)0x0,((char *)REFP(0x10ed018)),((char *)REFP(0x10ed010)),0);
      return (uint)this;
    }
  }
  *(int *)&REFG(undefined, 0x14c0d44) = *(int *)&REFG(undefined, 0x14c0d44) + 1;
  return (uint)this;
}

/* ref: FUN_00b10af0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b10af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb10af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed038));
  *(int *)&REFG(undefined, 0x14c0d44) = *(int *)&REFG(undefined, 0x14c0d44) - 1;
  if ((*(int *)&REFG(undefined, 0x14c0d44) == 0) && (REFG(int * PTR32, 0x14c0d40) != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14c0d40) + 8))))(REFG(int * PTR32, 0x14c0d40) GEN_EDX_FWD);
    REFG(int * PTR32, 0x14c0d40) = ((int *)GEN_TOP(0x0));
  }
  return;
}

/* ref: Client::System::Input::InputDevice::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b10b20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb10b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10ed038));
  *(int *)&REFG(undefined, 0x14c0d44) = *(int *)&REFG(undefined, 0x14c0d44) - 1;
  if ((*(int *)&REFG(undefined, 0x14c0d44) == 0) && (REFG(int * PTR32, 0x14c0d40) != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14c0d40) + 8))))(REFG(int * PTR32, 0x14c0d40) GEN_EDX_FWD);
    REFG(int * PTR32, 0x14c0d40) = ((int *)GEN_TOP(0x0));
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b10b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b10b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb10b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  HMODULE hModule;
  FARPROC pFVar1;
  int * piVar2;
  uint uVar3;
  
  gen_imp_ImmDisableTextFrameService(0xffffffff);
  hModule = gen_imp_LoadLibraryA(((char *)REFP(0x10ed03c)));
  if (hModule != (HMODULE)0x0) {
    pFVar1 = gen_imp_GetProcAddress(hModule,((char *)REFP(0x10ed048)));
    if (pFVar1 != (FARPROC)0x0) {
      ((code *)pFVar1)(0xffffffff);
    }
    gen_imp_FreeLibrary(hModule);
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
    uVar3 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x11555c0),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x10ed068),&(*(int * PTR32 *)(gen_frame + 0x0)));
    piVar2 = (*(int * PTR32 *)(gen_frame + 0x0));
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  else {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,param_1,0,&(*(int * PTR32 *)(gen_frame + 0x4)));
  if ((-1 < (int)uVar3) && (uVar3 = 0, (*(int * PTR32 *)(gen_frame + 0x4)) != ((int *)GEN_TOP(0x0)))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return uVar3;
}

