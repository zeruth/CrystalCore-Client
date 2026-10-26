#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00b5fe80 */
byte F_00b5fe80(unsigned int gen_a0)
{
  GEN_ENTER(0xb5fe80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_0052ee60(REFG(undefined4, 0x1375b00),param_1);
  return 1;
}

/* ref: FUN_00b5fea0 */
byte F_00b5fea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb5fea0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 0x2c) = param_2;
  return 1;
}

/* ref: FUN_00b5feb0 */
uint F_00b5feb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5feb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x2c);
}

/* ref: FUN_00b5fec0 */
byte F_00b5fec0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5fec0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_005f6710(param_1);
  return 1;
}

/* ref: FUN_00b5fee0 */
uint F_00b5fee0(unsigned int gen_a0)
{
  GEN_ENTER(0xb5fee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34f0));
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  F_00be89e0((undefined *)((int)this + 0x3c));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined1 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined2 *)((int)this + 0x110) = 0;
  *(undefined1 *)((int)this + 0x112) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  F_00c48350((undefined *)((int)this + 0x9c),0,0x40);
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(int *)((int)this + 0xfc) = REFG(int, 0x14c4ea4);
  if (0 < REFG(int, 0x14c4ea4) + 1) {
    REFG(int, 0x14c4ea4) = REFG(int, 0x14c4ea4) + 1;
    return (uint)this;
  }
  REFG(int, 0x14c4ea4) = 0;
  return (uint)this;
}

/* ref: FUN_00b60000 */
uint F_00b60000(unsigned int gen_a0)
{
  GEN_ENTER(0xb60000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * this_00;
  uint uVar2;
  
  this_00 = *(undefined4 * PTR32 *)((int)this + 0x20);
  while (this_00 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)this_00[7];
    F_00beabc0(this_00);
    ((code *)*(gen_code32 *)*this_00)(this_00,1);
    this_00 = puVar1;
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  F_00b5fd70(this);
  uVar2 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    uVar2 = F_00b5c650(*(int *)((int)this + 0x24));
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::CutSceneController::vf1 */
byte F_00b60050(unsigned int gen_a0)
{
  GEN_ENTER(0xb60050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  uint uVar2;
  int * piVar3;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  piVar3 = *(int * PTR32 *)(this + 0x20);
  bVar1 = true;
  if (piVar3 != (int *)0x0) {
    do {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
      if ((char)uVar2 == '\0') {
        bVar1 = false;
      }
      piVar3 = (int *)piVar3[7];
    } while (piVar3 != (int *)0x0);
    if (bVar1) {
      *(undefined2 *)(this + 8) = 1;
      if (*(int *)(this + 4) != 0) {
        *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 9))) = 1;
      }
      *(undefined4 *)(this + 0xc) = 0;
      *(undefined4 *)(this + 0x10) = 0;
      *(undefined2 *)(this + 0x14) = 0;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b600c0 */
byte F_00b600c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb600c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  byte bVar2;
  
  bVar2 = 1;
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x20); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
    uVar1 = F_00bea630(this_00,param_1);
    if ((char)uVar1 == '\0') {
      bVar2 = 0;
    }
  }
  return bVar2;
}

/* ref: FUN_00b600f0 */
byte F_00b600f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb600f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  byte bVar1;
  byte bVar2;
  
  bVar2 = 1;
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x20); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
    bVar1 = F_00bea660(this_00,param_1,param_2);
    if (bVar1 == 0) {
      bVar2 = 0;
    }
  }
  return bVar2;
}

/* ref: FUN_00b60130 */
uint F_00b60130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb60130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x24);
  if ((this_00 != (undefined *)0x0) && (*(int *)((int)this + 0x28) == 0)) {
    uVar2 = *(uint *)((int)this_00 + 0x5c) >> 1;
    if (((uVar2 & 1) == 0) || ((uVar2 & 1) == 0)) {
      bVar1 = F_00bcd860(this_00);
      if (bVar1 == 0) {
        uVar2 = F_00bcd800(this_00,param_1);
        return uVar2;
      }
    }
    else if (*(char *)((int)this + 10) != '\0') {
      *(undefined1 *)((int)this + 10) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00b60180 */
unsigned int F_00b60180(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb60180u, gen_a0, 0u, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  char cVar2;
  double dVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined * pvVar7;
  bool bVar8;
  float10 fVar9;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  F_00be85e0((undefined *)((int)param_1 + 0x3c));
  F_00be8830((undefined *)((int)param_1 + 0x3c));
  for (pvVar7 = *(undefined * PTR32 *)((int)param_1 + 0x20); pvVar7 != (undefined *)0x0;
      pvVar7 = *(undefined * PTR32 *)((int)pvVar7 + 0x1c)) {
    F_00bea7c0(pvVar7);
  }
  if (*(char *)((int)param_1 + 0xea) != '\0') {
    bVar8 = true;
    for (pvVar7 = *(undefined * PTR32 *)((int)param_1 + 0x20); pvVar7 != (undefined *)0x0;
        pvVar7 = *(undefined * PTR32 *)((int)pvVar7 + 0x1c)) {
      uVar5 = F_00bea630(pvVar7,0x1a);
      if ((char)uVar5 == '\0') {
        bVar8 = false;
      }
    }
    pvVar7 = *(undefined * PTR32 *)((int)param_1 + 0x20);
    *(bool *)((int)param_1 + 0xea) = !bVar8;
    for (; pvVar7 != (undefined *)0x0; pvVar7 = *(undefined * PTR32 *)((int)pvVar7 + 0x1c)) {
      F_00bea660(pvVar7,0x13,&REFG(undefined, 0x13056c0));
    }
  }
  if ((*(int *)((int)param_1 + 0xf4) == 0) &&
     ((GEN_ISNAN(param_2) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(param_2) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_2 == *(float *)&REFG(undefined, 0x1088114)))) {
    (*(float *)(gen_frame + 0xc)) = *(float *)((int)param_1 + 0xf0);
    fVar9 = F_00c51c40((uint)(ulonglong)
                               gen_d2bits((double)(float)((float10)(*(float *)(gen_frame + 0xc)) + (float10)param_2)),
                         (int)((ulonglong)
                               gen_d2bits((double)(float)((float10)(*(float *)(gen_frame + 0xc)) + (float10)param_2)) >>
                              0x20),&(*(double *)(gen_frame + 0x30)));
    *(float *)((int)param_1 + 0xf0) = (float)fVar9;
    fVar1 = (float)(*(double *)(gen_frame + 0x30));
    (*(double *)(gen_frame + 0x30)) = gen_bits2d((longlong)TRUNC((float10)fVar1));
    dVar3 = (*(double *)(gen_frame + 0x30));
    (*(float *)((char *)&(*(double *)(gen_frame + 0x30)) + 0)) = gen_bits2f((uint)(longlong)TRUNC((float10)fVar1));
    cVar2 = *(char *)((int)param_1 + 0xea);
    iVar6 = (int)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x30)) + 0)));
    while ((*(double *)(gen_frame + 0x30)) = dVar3, cVar2 == '\0') {
      if (iVar6 == 0) {
        iVar6 = -1;
        if (*(char *)((int)param_1 + 0xea) == '\0') goto LAB_00b60414;
        break;
      }
      *(int *)((int)param_1 + 0xec) = *(int *)((int)param_1 + 0xec) + 1;
      iVar6 = iVar6 + -1;
      if ((iVar6 != 0) ||
         (bVar8 = GEN_ISNAN(*(float *)((int)param_1 + 0xf0)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114)),
         (*(byte *)(gen_frame + 0x17)) = 0,
         bVar8 == (bVar8 || *(float *)((int)param_1 + 0xf0) == *(float *)&REFG(undefined, 0x1088114)))) {
        (*(byte *)(gen_frame + 0x17)) = 1;
      }
      for (pvVar7 = *(undefined * PTR32 *)((int)param_1 + 0x20); pvVar7 != (undefined *)0x0;
          pvVar7 = *(undefined * PTR32 *)((int)pvVar7 + 0x1c)) {
        F_00bea660(pvVar7,0x15,&REFG(undefined, 0x13056c0));
      }
      pvVar7 = *(undefined * PTR32 *)((int)param_1 + 0x20);
      (*(uint *)(gen_frame + 0x28)) = 0;
      (*(float *)((char *)&(*(double *)(gen_frame + 0x30)) + 0)) = 0.0;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x30)) + 4)) = 0;
      (*(float *)((char *)&(*(double *)(gen_frame + 0x30)) + 0)) = (float)((float10)1 - (float10)(*(float *)(gen_frame + 0xc)));
      (*(double *)(gen_frame + 0x30)) = gen_bits2d((ulonglong)(uint)gen_fl2bits((float)((float10)1 - (float10)(*(float *)(gen_frame + 0xc)))));
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 0)) = (*(byte *)(gen_frame + 0x17));
      (*(uint *)(gen_frame + 0x28)) = (uint)(*(byte *)(gen_frame + 0x17));
      bVar8 = true;
      if (pvVar7 != (undefined *)0x0) {
        do {
          bVar4 = F_00bea660(pvVar7,0x17,&(*(uint *)(gen_frame + 0x28)));
          if (bVar4 == 0) {
            bVar8 = false;
          }
          pvVar7 = *(undefined * PTR32 *)((int)pvVar7 + 0x1c);
        } while (pvVar7 != (undefined *)0x0);
        if (!bVar8) {
          pvVar7 = *(undefined * PTR32 *)((int)param_1 + 0x20);
          bVar8 = true;
          if (pvVar7 != (undefined *)0x0) {
            do {
              uVar5 = F_00bea630(pvVar7,0x1a);
              if ((char)uVar5 == '\0') {
                bVar8 = false;
              }
              pvVar7 = *(undefined * PTR32 *)((int)pvVar7 + 0x1c);
            } while (pvVar7 != (undefined *)0x0);
            if (!bVar8) {
              *(undefined1 *)((int)param_1 + 0xea) = 1;
            }
          }
          for (pvVar7 = *(undefined * PTR32 *)((int)param_1 + 0x20); pvVar7 != (undefined *)0x0;
              pvVar7 = *(undefined * PTR32 *)((int)pvVar7 + 0x1c)) {
            F_00bea660(pvVar7,0x13,&REFG(undefined, 0x13056c0));
          }
        }
      }
      (*(float *)(gen_frame + 0xc)) = 0.0;
      dVar3 = (*(double *)(gen_frame + 0x30));
      cVar2 = *(char *)((int)param_1 + 0xea);
    }
    (*(uint *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(float *)((char *)&(*(double *)(gen_frame + 0x30)) + 0)) = 0.0;
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x30)) + 4)) = 0;
    (*(double *)(gen_frame + 0x30)) = 0.0;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x28)) = 0;
    while (iVar6 != 0) {
      pvVar7 = *(undefined * PTR32 *)((int)param_1 + 0x20);
      iVar6 = iVar6 + -1;
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x30)) + 4)) = (undefined4)((ulonglong)gen_d2bits((*(double *)(gen_frame + 0x30))) >> 0x20);
      (*(float *)((char *)&(*(double *)(gen_frame + 0x30)) + 0)) = (float)((float10)1 - (float10)(*(float *)(gen_frame + 0xc)));
      (*(double *)(gen_frame + 0x30)) = gen_bits2d(CONCAT44((*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x30)) + 4)),
                                     (uint)gen_fl2bits((float)((float10)1 - (float10)(*(float *)(gen_frame + 0xc))))));
      for (; pvVar7 != (undefined *)0x0; pvVar7 = *(undefined * PTR32 *)((int)pvVar7 + 0x1c)) {
        F_00bea660(pvVar7,0x19,&(*(uint *)(gen_frame + 0x28)));
      }
      for (pvVar7 = *(undefined * PTR32 *)((int)param_1 + 0x20); pvVar7 != (undefined *)0x0;
          pvVar7 = *(undefined * PTR32 *)((int)pvVar7 + 0x1c)) {
        F_00bea660(pvVar7,0x13,&REFG(undefined, 0x13056c0));
      }
      (*(float *)(gen_frame + 0xc)) = 0.0;
    }
LAB_00b60414: ;
    fVar1 = *(float *)((int)param_1 + 0xf0);
    if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
        ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
      (*(uint *)(gen_frame + 0x28)) = 0;
      (*(float *)((char *)&(*(double *)(gen_frame + 0x30)) + 0)) = 0.0;
      (*(float *)((char *)&(*(double *)(gen_frame + 0x30)) + 0)) = (float)((float10)fVar1 - (float10)(*(float *)(gen_frame + 0xc)));
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x30)) + 4)) = 0;
      (*(double *)(gen_frame + 0x30)) = gen_bits2d((ulonglong)
                            (uint)gen_fl2bits((float)((float10)fVar1 - (float10)(*(float *)(gen_frame + 0xc)))));
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 0)) = 0;
      (*(uint *)(gen_frame + 0x28)) = 0;
      F_00b600f0(param_1,0x19,&(*(uint *)(gen_frame + 0x28)));
      F_00b600f0(param_1,0x13,&REFG(undefined, 0x13056c0));
    }
  }
  if (*(char *)((int)param_1 + 0xea) != '\0') {
    *(undefined4 *)((int)param_1 + 0xf0) = 0;
    *(undefined1 *)((int)param_1 + 0xeb) = 0;
  }
  bVar8 = (GEN_ISNAN(param_2) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
          ((GEN_ISNAN(param_2) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_2 == *(float *)&REFG(undefined, 0x1088114));
  pvVar7 = *(undefined * PTR32 *)((int)param_1 + 0x20);
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = bVar8;
  (*(uint *)(gen_frame + 0x18)) = (uint)bVar8;
  for (; pvVar7 != (undefined *)0x0; pvVar7 = *(undefined * PTR32 *)((int)pvVar7 + 0x1c)) {
    F_00bea660(pvVar7,0x1b,&(*(uint *)(gen_frame + 0x18)));
  }
  for (pvVar7 = *(undefined * PTR32 *)((int)param_1 + 0x20); pvVar7 != (undefined *)0x0;
      pvVar7 = *(undefined * PTR32 *)((int)pvVar7 + 0x1c)) {
    F_00bea660(pvVar7,0x13,&REFG(undefined, 0x13056c0));
  }
  for (pvVar7 = *(undefined * PTR32 *)((int)param_1 + 0x20); pvVar7 != (undefined *)0x0;
      pvVar7 = *(undefined * PTR32 *)((int)pvVar7 + 0x1c)) {
    F_00bea7e0(pvVar7);
  }
  if (*(undefined * PTR32 *)((int)param_1 + 0x38) != (undefined *)0x0) {
    F_00beb1c0(*(undefined * PTR32 *)((int)param_1 + 0x38),param_1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return 0;
}

/* ref: FUN_00b60510 */
unsigned int F_00b60510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb60510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0xf4);
  if ((char)param_2 == '\0') {
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 0xf4) = 0;
      goto LAB_00b60553;
    }
    uVar2 = ~(1 << ((byte)param_1 & 0x1f)) & uVar1;
  }
  else {
    uVar2 = 1 << ((byte)param_1 & 0x1f) | uVar1;
  }
  *(uint *)((int)this + 0xf4) = uVar2;
LAB_00b60553: ;
  if (((char)param_3 != '\0') || (*(uint *)((int)this + 0xf4) != uVar1)) {
    for (this_00 = *(undefined * PTR32 *)((int)this + 0x20); this_00 != (undefined *)0x0;
        this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
      F_00bea810(this_00,param_1,param_2,param_3);
    }
  }
  return 0;
}

/* ref: FUN_00b60590 */
unsigned int F_00b60590(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb60590u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int in_ecx;
  int * piVar1;
  uint uVar2;
  undefined4 local_c;
  
  *(float *)(param_1 + 0x98) = (float)((float10)param_2 + (float10)param_2);
  *(undefined1 *)(param_1 + 0xe2) = 1;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1);
  if (((uVar2 & 8) == 0) && (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1), (uVar2 & 2) == 0)) {
    local_c = (undefined4)(longlong)TRUNC((float10)*(float *)(param_1 + 0x98));
    ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1,0,local_c,1);
  }
  in_ecx = *(int *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0xe3) = 1;
  for (; in_ecx != 0; in_ecx = *(int *)(in_ecx + 0x1c)) {
    F_00bea830(in_ecx,1);
  }
  return 0;
}

/* ref: FUN_00b60640 */
unsigned int F_00b60640(unsigned int gen_a0)
{
  GEN_ENTER(0xb60640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  float * pfVar2;
  float10 fVar3;
  
  *(undefined4 *)((int)this + 0xdc) = *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x137104c) + 0x25f8) + 0xe8)));
  iVar1 = 0;
  pfVar2 = (float *)((int)this + 0x9c);
  do {
    fVar3 = F_004e79b0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),iVar1);
    *pfVar2 = (float)fVar3;
    iVar1 = iVar1 + 1;
    pfVar2 = pfVar2 + 1;
  } while (iVar1 < 0x10);
  F_004e7800(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),1);
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined1 *)((int)this + 0x104) = 0;
  return 0;
}

/* ref: FUN_00b606b0 */
uint F_00b606b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb606b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  float * pfVar3;
  
  iVar2 = 0;
  pfVar3 = (float *)((int)this + 0x9c);
  do {
    F_004e79c0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),iVar2,*pfVar3,100);
    iVar2 = iVar2 + 1;
    pfVar3 = pfVar3 + 1;
  } while (iVar2 < 0x10);
  F_004e7800(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),*(undefined4 *)((int)this + 0xdc));
  if (*(char *)((int)this + 0x104) == '\0') {
    uVar1 = F_00ab6dc0();
    return uVar1;
  }
  uVar1 = F_00ab6d50(*(undefined4 *)((int)this + 0x100),0,0,0,0,1);
  return uVar1;
}

/* ref: FUN_00b60730 */
byte F_00b60730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb60730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined * this_00;
  
  this_00 = (undefined *)*param_2;
  if (this_00 == (undefined *)0x0) {
    param_2[1] = 0;
    this_00 = *(undefined * PTR32 *)((int)this + 0x20);
    if (this_00 == (undefined *)0x0) goto LAB_00b60767;
  }
  do {
    uVar1 = F_00bea8a0(this_00,param_1,param_2 + 1);
    if ((char)uVar1 != '\0') {
      *param_2 = (int)this_00;
      return 1;
    }
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
  } while (this_00 != (undefined *)0x0);
LAB_00b60767: ;
  *param_2 = 0;
  return 0;
}

/* ref: FUN_00b60790 */
byte F_00b60790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb60790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined * this_00;
  
  this_00 = (undefined *)*param_2;
  if (this_00 == (undefined *)0x0) {
    param_2[1] = 0;
    this_00 = *(undefined * PTR32 *)((int)this + 0x20);
    if (this_00 == (undefined *)0x0) goto LAB_00b607c7;
  }
  do {
    uVar1 = F_00bea8c0(this_00,param_1,param_2 + 1);
    if ((char)uVar1 != '\0') {
      *param_2 = (int)this_00;
      return 1;
    }
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
  } while (this_00 != (undefined *)0x0);
LAB_00b607c7: ;
  *param_2 = 0;
  return 0;
}

/* ref: FUN_00b607f0 */
uint F_00b607f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb607f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  uint uVar1;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  do {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) {
      ((undefined * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 *)(gen_frame + 0x8));
      this_00 = *(undefined * PTR32 *)((int)this + 0x20);
      goto joined_r0x00b60824;
    }
    while (uVar1 = F_00bea8c0(this_00,&(*(uint *)(gen_frame + 0x4)),((undefined * PTR32 *)(gen_frame + 0xc))), (char)uVar1 == '\0') {
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
joined_r0x00b60824: ;
      if (this_00 == (undefined *)0x0) {
        F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
        return 0;
      }
    }
    uVar1 = (*(uint *)(gen_frame + 0x4));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this_00;
    if (*((int *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x4)) + 0x24) + 8))) == param_1) {
      F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
      return uVar1;
    }
  } while( true );
}

/* ref: FUN_00b60890 */
uint F_00b60890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb60890u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x20);
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    if (*(int *)(uVar1 + 0x30) == param_2) break;
    uVar1 = *(uint *)(uVar1 + 0x1c);
  }
  return uVar1;
}

/* ref: FUN_00b608e0 */
unsigned int F_00b608e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb608e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x20); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
    F_00bea9c0(this_00,param_1);
  }
  return 0;
}

/* ref: FUN_00b60910 */
unsigned int F_00b60910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb60910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (*(uint *)((int)this + 0x140) != param_1) {
    F_00b5fd70(this);
    *(uint *)((int)this + 0x140) = param_1;
    uVar1 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)param_1 * 4),0,0);
    *(uint *)((int)this + 0x13c) = uVar1;
  }
  return 0;
}

/* ref: FUN_00b60960 */
unsigned int F_00b60960(unsigned int gen_a0)
{
  GEN_ENTER(0xb60960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)((int)this + 0x140);
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  while (iVar4 != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x13c) + -4 + iVar4 * 4)));
    iVar4 = iVar4 + -1;
    (*(int *)(gen_frame + 0x34)) = iVar4;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2)));
    if (this_00 != (undefined *)0x0) {
      if ((*(char *)((int)this_00 + 0x188) != '\x01') &&
         ((*(byte *)((int)this_00 + 0x8f) & 0x40) != 0)) {
        iVar5 = (int)this_00 + 0x16c0;
        (*(int *)(gen_frame + 0x38)) = 3;
        do {
          if ((iVar5 != 0) && (*(char *)(iVar5 + 0x65) == '\x03')) {
            uVar3 = F_00ab2ae0(2);
            F_00bbac80(((undefined1 *)(gen_frame + 0x8)));
            F_00bbac80(((undefined1 *)(gen_frame + 0x1c)));
            F_00bbadd0(((undefined1 *)(gen_frame + 0x8)),iVar5);
            F_00bbadf0(((undefined1 *)(gen_frame + 0x1c)),(uint)*(ushort *)((int)this_00 + 0x88),0);
            F_00b5c120(REFG(undefined4, 0x14c4e84),uVar3,2,((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x1c)),1,0,0,(float)(float10)0);
            iVar4 = (*(int *)(gen_frame + 0x34));
          }
          iVar5 = iVar5 + 0x7a0;
          iVar1 = (*(int *)(gen_frame + 0x38)) + -1;
          (*(int *)(gen_frame + 0x38)) = iVar1;
          this = (*(undefined * PTR32 *)(gen_frame + 0x30));
        } while (iVar1 != 0);
      }
      F_00aa4150(this_00,0x90,0,0);
      F_00aa4150(this_00,0x73,0,0);
    }
  }
  return 0;
}

/* ref: FUN_00b60a70 */
unsigned int F_00b60a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb60a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  F_00b5c8c0(REFG(undefined4, 0x14c4e90),param_1,0);
  if ((*(char *)((int)param_1 + *param_1) != '\0') && (param_1[2] == 3)) {
    *(undefined1 *)((int)this + 0x112) = 1;
    *(int *)((int)this + 0x120) = param_1[4];
    *(int *)((int)this + 0x124) = param_1[5];
    *(int *)((int)this + 0x128) = param_1[6];
  }
  return 0;
}

/* ref: FUN_00b60ac0 */
uint F_00b60ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xb60ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  int * piVar1;
  int * piVar2;
  undefined * this_00;
  
  (*(int * PTR32 *)(gen_frame + 0xf8)) = (int *)(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x4)) = 0;
  piVar1 = (int *)(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc));
  do {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) {
      this_00 = *(undefined * PTR32 *)((int)this + 0x20);
      ((undefined4 *)(gen_frame + 0xc))[0] = 0;
      goto joined_r0x00b60afb;
    }
    while (piVar1 = (int *)F_00bea8a0(this_00,&(*(int *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0xc))), (char)piVar1 == '\0') {
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
joined_r0x00b60afb: ;
      if (this_00 == (undefined *)0x0) {
        F_00c47745((uint)(*(int * PTR32 *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
        return (uint)piVar1;
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this_00;
    piVar2 = (int *)F_00beb650((*(int *)(gen_frame + 0x4)));
    piVar1 = piVar2;
    if ((piVar2 != (int *)0x0) && (piVar2[0x1b] == 2)) {
      if ((piVar2[0x22] == 2) &&
         (piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2))), piVar1 != (int *)0x0)) {
        *(undefined2 *)((int)piVar1 + 0x72) = 0;
      }
      if (piVar2[0x22] == 3) {
        piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2)));
        if (piVar1 != (int *)0x0) {
          *(undefined2 *)((int)piVar1 + 0x72) = 1;
        }
        if (*(char *)((int)piVar2 + 0x95) != '\0') {
          *(undefined1 *)((*(int *)(gen_frame + 0x4)) + 0x39) = 0;
          piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,0)));
        }
      }
    }
  } while( true );
}

/* ref: Client::System::Scheduler::Base::CutSceneController::vf5 */
byte F_00b60bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xb60bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (this[0x11] != (undefined1)0x0) {
    return 1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar4 != '\0') {
    piVar1 = *(int * PTR32 *)(this + 0x20);
    while (piVar1 != (int *)0x0) {
      if ((*(char *)((int)piVar1 + 0xd) == '\0') ||
         (uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1), (char)uVar4 != '\0')) {
        iVar2 = piVar1[6];
        iVar3 = piVar1[7];
        if (iVar2 == 0) {
          *(int *)(this + 0x20) = iVar3;
        }
        else {
          *(int *)(iVar2 + 0x1c) = iVar3;
        }
        if (iVar3 != 0) {
          *(int *)(iVar3 + 0x18) = iVar2;
        }
        ((code *)*(gen_code32 *)*piVar1)(piVar1,1);
        piVar1 = *(int * PTR32 *)(this + 0x20);
      }
      else {
        piVar1 = (int *)piVar1[7];
      }
    }
    if (*(int *)(this + 0x20) == 0) {
      this[0x11] = (undefined1)0x1;
      this[0x15] = (undefined1)0x0;
      if (*(int *)(this + 4) == 0) {
        return 1;
      }
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x15))) = 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b60c40 */
unsigned int F_00b60c40(unsigned int gen_a0)
{
  GEN_ENTER(0xb60c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  if ((*(uint *)((int)this + 0xf4) >> 3 & 1) != 0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 0x20);
    *(uint *)((int)this + 0xf4) = *(uint *)((int)this + 0xf4) & 0xfffffff7;
    for (; pvVar1 != (undefined *)0x0; pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x1c)) {
      F_00bea810(pvVar1,3,0,1);
    }
  }
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined2 *)((int)this + 0xe) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  F_00b59800(REFG(undefined4, 0x14c4e78));
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x20); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x1c)) {
    F_00bea760(pvVar1);
  }
  F_00b59820(REFG(undefined4, 0x14c4e78));
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x20); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x1c)) {
    F_00bea780(pvVar1);
  }
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined2 *)((int)this + 0xea) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  return 0;
}

/* ref: FUN_00b60cf0 */
unsigned int F_00b60cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xb60cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b60590(this,REFG(float, 0x10947a4));
  return 0;
}

/* ref: FUN_00b60d00 */
unsigned int F_00b60d00(unsigned int gen_a0)
{
  GEN_ENTER(0xb60d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b60590(this,(float)(float10)1);
  return 0;
}

/* ref: FUN_00b60d10 */
unsigned int F_00b60d10(unsigned int gen_a0)
{
  GEN_ENTER(0xb60d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x24) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    if (((char)uVar1 == '\0') &&
       ((*(char *)((int)this + 0xe4) != '\0' || (*(char *)((int)this + 0xe5) != '\0')))) {
      F_00b60590(this,REFG(float, 0x10947a4));
    }
  }
  return 0;
}

/* ref: FUN_00b60d50 */
uint F_00b60d50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb60d50u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  int * piVar2;
  undefined * this;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar2 != (int *)0x0) {
    uVar5 = 1;
    uVar4 = 4;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    F_007602f0(this,uVar4,uVar5);
  }
  uVar3 = F_00b60ac0(param_1);
  for (iVar1 = *(int *)((int)param_1 + 0x20); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
    if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 4))) == 0) {
      uVar3 = F_00beac80(iVar1,param_2);
    }
  }
  F_004d1650(REFG(undefined4, 0x1370c18));
  F_00984b30(1);
  F_00beb180(*(undefined4 *)((int)param_1 + 0x38));
  *(undefined4 *)((int)param_1 + 10) = 0x1010000;
  return uVar3;
}

/* ref: FUN_00b60de0 */
uint F_00b60de0(void)
{
  GEN_ENTER(0xb60de0u, 0u, 0u, 0u, 0u);
  int iVar1;
  uint uVar2;
  undefined * this;
  
  iVar1 = REFG(int, 0x1371290);
  this = (undefined *)(REFG(int, 0x1371290) + 0x25c);
  if ((*(char *)(REFG(int, 0x1371290) + 0x30f) == -0x80) && (REFG(int, 0x1371290) + 0x274 != 0)) {
    F_004a4530(REFG(int, 0x1371290) + 0x274);
  }
  F_004adca0(this,7,0,0x80);
  if ((*(char *)(iVar1 + 0x318) == -0x80) && (iVar1 + 0x2f0 != 0)) {
    F_004a6420(iVar1 + 0x2f0);
  }
  F_004adca0(this,0x10,0,0x80);
  if ((*(char *)(iVar1 + 0x317) == -0x80) && (iVar1 + 0x2c4 != 0)) {
    F_004a63e0(iVar1 + 0x2c4);
  }
  uVar2 = F_004adca0(this,0xf,0,0x80);
  return uVar2;
}

/* ref: FUN_00b60e70 */
uint F_00b60e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb60e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  this_00 = (undefined *)F_00406b90(0x3c,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00beaa20(this_00,param_1,param_2);
  }
  piVar1 = (int *)(uVar3 + 0x18);
  iVar2 = *(int *)((int)this + 0x20);
  if (*(int *)((int)this + 0x20) == 0) {
    *piVar1 = 0;
    *(undefined4 *)(uVar3 + 0x1c) = 0;
    *(uint *)((int)this + 0x20) = uVar3;
  }
  else {
    do {
      iVar4 = iVar2;
      iVar2 = *(int *)(iVar4 + 0x1c);
    } while (*(int *)(iVar4 + 0x1c) != 0);
    uVar5 = uVar3;
    if (piVar1 == (int *)0x0) {
      uVar5 = 0;
    }
    *(uint *)(iVar4 + 0x1c) = uVar5;
    *piVar1 = iVar4;
    *(undefined4 *)(uVar3 + 0x1c) = 0;
  }
  *(undefined * PTR32 *)(uVar3 + 4) = this;
  if (*(char *)((int)this + 0xe7) != '\0') {
    *(undefined1 *)(uVar3 + 0x3a) = 1;
  }
  return uVar3;
}

/* ref: FUN_00b60f00 */
uint F_00b60f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb60f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[6];
  uVar2 = param_1[7];
  if (iVar1 == 0) {
    *(uint *)((int)this + 0x20) = uVar2;
  }
  else {
    *(uint *)(iVar1 + 0x1c) = uVar2;
  }
  if (uVar2 != 0) {
    *(int *)(uVar2 + 0x18) = iVar1;
  }
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)*param_1)(param_1,1);
  }
  return uVar2;
}

/* ref: FUN_00b60f40 */
unsigned int F_00b60f40(unsigned int gen_a0)
{
  GEN_ENTER(0xb60f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  if (*(char *)((int)this + 0xe0) == '\0') {
    F_00be8740((undefined *)((int)this + 0x3c));
    this_00 = (undefined *)F_00406b90(0x150,0,0);
    if (this_00 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00beb2e0(this_00);
    }
    *(uint *)((int)this + 0x38) = uVar2;
    F_00b60640(this);
    *(undefined4 *)((int)this + 0xf8) = 0xffffffff;
    F_00bdaf90();
    *(undefined4 *)((int)this + 0x130) = 0xffffffff;
    *(undefined4 *)((int)this + 0x134) = 0;
    *(undefined2 *)((int)this + 0xe4) = 0;
    *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xfffe;
    F_005f6750(1);
    iVar1 = REFG(int, 0x137104c);
    *(undefined4 *)((int)this + 0x108) = *(undefined4 *)(REFG(int, 0x137104c) + 0x1248);
    *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)(iVar1 + 0x124c);
    *(undefined1 *)((int)this + 0x110) = *(undefined1 *)(iVar1 + 0x1230);
    F_00a06560(0);
    iVar1 = REFG(int, 0x14c4e78);
    if (REFG(int, 0x14c4e78) != 0) {
      *(undefined4 *)(REFG(int, 0x14c4e78) + 0x18) = 0;
      *(undefined4 *)(iVar1 + 0x1c) = 0;
    }
    F_00621530(REFG(int, 0x137127c) + 0xee30);
    if (REFG(int, 0x13759f4) != 0) {
      F_00690270(REFG(int, 0x13759f4));
    }
    *(undefined1 *)((int)this + 0xe0) = 1;
  }
  return 0;
}

/* ref: FUN_00b61030 */
uint F_00b61030(unsigned int gen_a0)
{
  GEN_ENTER(0xb61030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint in_EAX = 0;
  uint uVar3;
  uint in_ecx;
  int * piVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(char *)((int)this + 0xe0) != '\0') {
    for (pvVar5 = *(undefined * PTR32 *)((int)this + 0x20); pvVar5 != (undefined *)0x0;
        pvVar5 = *(undefined * PTR32 *)((int)pvVar5 + 0x1c)) {
      F_00bea660(pvVar5,3,&REFG(undefined, 0x13056c0));
    }
    F_00be9340((undefined *)((int)this + 0x3c));
    if (*(undefined * PTR32 *)((int)this + 0x38) != (undefined *)0x0) {
      F_00beb300(*(undefined * PTR32 *)((int)this + 0x38));
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x38) + 0x144))) = 0;
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x38);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x38) = 0;
    }
    F_00b606b0(this);
    F_00bdae20();
    F_004d1660(REFG(undefined4, 0x1370c18));
    F_00984b30(0);
    F_00b60de0();
    uVar3 = (uint)*(byte *)((int)this + 0xe2);
    uVar6 = 0;
    in_ecx = F_006b8c00();
    F_006c5170(in_ecx,uVar6,uVar3);
    for (pvVar5 = *(undefined * PTR32 *)((int)this + 0x20); pvVar5 != (undefined *)0x0;
        pvVar5 = *(undefined * PTR32 *)((int)pvVar5 + 0x1c)) {
      F_00bea930(pvVar5);
    }
    F_00b5fd70(this);
    F_00b7c0f0(&REFG(undefined, 0x133e5c0),0);
    iVar2 = REFG(int, 0x137104c);
    *(undefined4 *)(REFG(int, 0x137104c) + 0x1248) = *(undefined4 *)((int)this + 0x108);
    *(undefined4 *)(iVar2 + 0x124c) = *(undefined4 *)((int)this + 0x10c);
    if (*(char *)(iVar2 + 0x1230) != *(char *)((int)this + 0x110)) {
      *(char *)(iVar2 + 0x1230) = *(char *)((int)this + 0x110);
    }
    iVar2 = REFG(int, 0x14c4e78);
    if (REFG(int, 0x14c4e78) != 0) {
      *(undefined4 *)(REFG(int, 0x14c4e78) + 0x18) = 0;
      *(undefined4 *)(iVar2 + 0x1c) = 0;
    }
    F_005f6750(0);
    F_00a06560(1);
    F_00621530(REFG(int, 0x137127c) + 0xee30);
    if (REFG(int, 0x13759f4) != 0) {
      F_00690270(REFG(int, 0x13759f4));
    }
    piVar4 = (int *)F_00424750(REFG(int, 0x137104c));
    in_EAX = 0;
    if (piVar4 != (int *)0x0) {
      uVar7 = 0;
      uVar6 = 4;
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4)));
      in_EAX = F_007602f0(pvVar5,uVar6,uVar7);
    }
    *(undefined1 *)((int)this + 0xe0) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00b611a0 */
byte F_00b611a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb611a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa60];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa5c);
  (*(uint *)(gen_frame + 0xa58)) = uVar2;
  if (*(int *)((int)this + 0x138) == 6) {
    F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0xa5c));
    return 1;
  }
  if (*(char *)((int)this + 10) == '\0') {
    F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0xa5c));
    return 1;
  }
  uVar2 = F_00b60130(this,((undefined1 *)(gen_frame + 0x4)));
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x138))) {
  case 0: ;
    if (uVar2 == 0) goto LAB_00b612ea;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined2 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined2 *)((int)this + 0x14) = 0;
    F_00b5c670(REFG(undefined4, 0x14c4e90),0);
    F_00b60f40(this);
    *(undefined4 *)((int)this + 0x138) = 1;
    F_00b5fd70(this);
    break;
  case 1: ;
    break;
  case 2: ;
    goto switchD_00b61208_caseD_2;
  case 3: ;
    goto switchD_00b61208_caseD_3;
  case 4: ;
    goto switchD_00b61208_caseD_4;
  case 5: ;
    goto switchD_00b61208_caseD_5;
  default: ;
    goto switchD_00b61208_default;
  }
  F_00b5c440(((undefined1 *)(gen_frame + 0x8)));
  bVar1 = F_00bcdf90(uVar2,this);
  if (bVar1 != 0) {
    *(undefined4 *)((int)this + 0x138) = 2;
switchD_00b61208_caseD_2: ;
    bVar1 = F_00b5fdc0(this);
    if (bVar1 == 0) {
switchD_00b61208_default: ;
      F_00c47745((*(uint *)(gen_frame + 0xa58)) ^ (uint)(uint)(gen_frame + 0xa5c));
      return 1;
    }
    F_00b5fe00(this);
    *(undefined4 *)((int)this + 0x138) = 3;
switchD_00b61208_caseD_3: ;
    F_00b5c440(((undefined1 *)(gen_frame + 0x8)));
    bVar1 = F_00bce270(((undefined1 *)(gen_frame + 0x8)),uVar2,this);
    if (bVar1 != 0) {
      for (this_00 = *(undefined * PTR32 *)((int)this + 0x20); this_00 != (undefined *)0x0;
          this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
        F_00bea980(this_00);
      }
      *(undefined4 *)((int)this + 0x138) = 4;
switchD_00b61208_caseD_4: ;
      bVar1 = F_00b5c680(REFG(undefined4, 0x14c4e90));
      if ((bVar1 != 0) && (uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this), (char)uVar2 != '\0')) {
        F_00b60960(this);
        *(undefined4 *)((int)this + 0x138) = 5;
switchD_00b61208_caseD_5: ;
        *(undefined4 *)((int)this + 0x138) = 6;
        F_00b618f0(this);
        goto switchD_00b61208_default;
      }
    }
  }
LAB_00b612ea: ;
  F_00c47745((*(uint *)(gen_frame + 0xa58)) ^ (uint)(uint)(gen_frame + 0xa5c));
  return 0;
}

/* ref: FUN_00b61350 */
uint F_00b61350(unsigned int gen_a0)
{
  GEN_ENTER(0xb61350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34f0));
  F_00b61030(this);
  F_00b60000(this);
  uVar1 = F_00be92f0((undefined *)((int)this + 0x3c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  return uVar1;
}

/* ref: FUN_00b61380 */
uint F_00b61380(unsigned int gen_a0)
{
  GEN_ENTER(0xb61380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 10) = 0x1000000;
  *(undefined2 *)((int)this + 0xe) = 0x101;
  *(undefined1 *)((int)this + 0x10) = 1;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  }
  uVar1 = F_00b61030(this);
  return uVar1;
}

/* ref: FUN_00b613e0 */
unsigned int F_00b613e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb613e0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  code * pcVar1;
  undefined * this;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int * piVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    if (*(char *)((int)param_1 + 0xe9) != '\0') {
      F_00b600c0(param_1,0x1a);
      *(undefined1 *)((int)param_1 + 0xe9) = 0;
    }
    pcVar1 = *(gen_code32 *)(*param_1 + 0x10);
    *(undefined1 *)((int)param_1 + 0xe6) = 0;
    uVar5 = (*pcVar1)(param_1);
    if ((char)uVar5 != '\0') {
      ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1);
    }
    iVar2 = REFG(int, 0x13712a4);
    if (*(char *)((int)param_1 + 0x112) != '\0') {
      *(int *)(REFG(int, 0x13712a4) + 0x20) = param_1[0x48];
      *(int *)(iVar2 + 0x24) = param_1[0x49];
      *(int *)(iVar2 + 0x28) = param_1[0x4a];
      *(uint *)(REFG(int, 0x13712a4) + 0x30) = *(uint *)(REFG(int, 0x13712a4) + 0x30) | 2;
    }
    if ((((param_1[9] == 0) || (bVar4 = F_00b611a0(param_1), bVar4 == 0)) ||
        (uVar5 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), (char)uVar5 == '\0')) ||
       (*(char *)((int)param_1 + 0xe1) != '\0')) {
      for (this = (undefined *)param_1[8]; this != (undefined *)0x0; this = *(undefined * PTR32 *)((int)this + 0x1c)) {
        F_00bea7c0(this);
      }
    }
    else {
      if ((*(char *)((int)param_1 + 0xe5) != '\0') &&
         (F_00424750(REFG(undefined4, 0x137104c)), (*(byte *)(param_1 + 0x1c) & 1) == 0)) {
        *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 1;
      }
      if ((*(char *)((int)param_1 + 0xe2) != '\0') && (*(char *)((int)param_1 + 0xe3) != '\0')) {
        piVar6 = (int *)F_00424750(REFG(undefined4, 0x137104c));
        uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0xa0))(piVar6);
        if ((uVar5 & 8) == 0) {
          uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0xa0))(piVar6);
          if ((uVar5 & 2) == 0) {
            (*(ushort *)(gen_frame + 0x1e)) = ((undefined2)0x27f);
            (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) = ((undefined2)0x27f) | 0xc00;
            (*(longlong *)(gen_frame + 0x8)) = (longlong)TRUNC(((float10)GEN_TOD(gen_bits2f(param_1[0x26]))));
            lVar3 = (*(longlong *)(gen_frame + 0x8));
            (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 0)) = (undefined4)(longlong)TRUNC(((float10)GEN_TOD(gen_bits2f(param_1[0x26]))));
            uVar8 = (undefined4)(*(longlong *)(gen_frame + 0x8));
            (*(longlong *)(gen_frame + 0x8)) = lVar3;
            ((code *)*(gen_code32 *)(*piVar6 + 0xa8))(piVar6,0,uVar8,1);
          }
          else {
            if ((char)param_1[4] == '\0') {
              F_00b61030(param_1);
              F_00b60000(param_1);
              F_00b61970(param_1);
            }
            *(undefined1 *)((int)param_1 + 0xe3) = 0;
          }
        }
      }
      if (*(char *)((int)param_1 + 10) != '\0') {
        F_00b60d50(param_1,param_2);
        *(undefined1 *)((int)param_1 + 0x112) = 0;
      }
      F_00b60180(param_1,param_2,0xffffffff);
      uVar5 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
      if ((char)uVar5 != '\0') {
        ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1);
        return 0;
      }
      if ((param_1[0x3e] != -1) &&
         (piVar6 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00),param_1[0x3e],0,0), piVar6 != (int *)0x0)) {
        uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0x4c))(piVar6);
        if (uVar5 == 0) {
          uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0x34))(piVar6);
        }
        else {
          uVar5 = *(uint *)(uVar5 + 0xec);
        }
        if (uVar5 == 0) {
          puVar7 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6)));
          (*(undefined4 *)(gen_frame + 0x0)) = *puVar7;
          (*(undefined4 *)(gen_frame + 0x4)) = puVar7[1];
          uVar8 = puVar7[2];
        }
        else {
          (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(uVar5 + 0x30);
          (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(uVar5 + 0x34);
          uVar8 = *(undefined4 *)(uVar5 + 0x38);
        }
        iVar2 = REFG(int, 0x13712a4);
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 0)) = uVar8;
        (*(longlong *)(gen_frame + 0x8)) = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)),uVar8);
        *(undefined4 *)(REFG(int, 0x13712a4) + 0x20) = (*(undefined4 *)(gen_frame + 0x0));
        *(undefined4 *)(iVar2 + 0x24) = (*(undefined4 *)(gen_frame + 0x4));
        *(undefined4 *)(iVar2 + 0x28) = uVar8;
        *(uint *)(REFG(int, 0x13712a4) + 0x30) = *(uint *)(REFG(int, 0x13712a4) + 0x30) | 2;
        if (REFG(int, 0x13759f4) != 0) {
          F_0068bc00(REFG(int, 0x13759f4),&(*(undefined4 *)(gen_frame + 0x0)));
          return 0;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00b616a0 */
byte F_00b616a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb616a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 4 ^ *(byte *)(in_ecx + 0x2dd3)) & 0x10;
  *(byte *)(in_ecx + 0x2dd3) = *(byte *)(in_ecx + 0x2dd3) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00b616d0 */
byte F_00b616d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb616d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xe4) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b61710 */
uint F_00b61710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xf8) = param_2;
  return param_2;
}

/* ref: FUN_00b61790 */
uint F_00b61790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61790u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x138) = param_2;
  return param_2;
}

/* ref: FUN_00b617c0 */
uint F_00b617c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb617c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b617e0 */
uint F_00b617e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb617e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00b617f0 */
uint F_00b617f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb617f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  return in_ecx + (param_2 >> 4) * 2;
}

/* ref: FUN_00b61800 */
uint F_00b61800(unsigned int gen_a0)
{
  GEN_ENTER(0xb61800u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 1 << ((byte)param_1 & 0xf);
}

/* ref: FUN_00b61820 */
uint F_00b61820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61820u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  return in_ecx + (param_2 >> 4) * 2;
}

/* ref: FUN_00b61830 */
unsigned int F_00b61830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61830u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x20) = *param_2;
  *(undefined4 *)(in_ecx + 0x24) = param_2[1];
  *(undefined4 *)(in_ecx + 0x28) = param_2[2];
  *(uint *)(in_ecx + 0x30) = *(uint *)(in_ecx + 0x30) | 2;
  return 0;
}

/* ref: FUN_00b61860 */
float10 F_00b61860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61860u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float10 fVar1;
  
  fVar1 = F_004e79b0(in_ecx,param_2);
  return fVar1;
}

/* ref: FUN_00b61870 */
uint F_00b61870(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb61870u, gen_a0, gen_a1, 0u, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_004e79c0(param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00b61890 */
uint F_00b61890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb61890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_004adca0(this,0xf,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00b618b0 */
uint F_00b618b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb618b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(char *)(in_ecx + 0xbb) == (char)param_2) {
    return in_ecx + 0x68;
  }
  return 0;
}

/* ref: FUN_00b618f0 */
unsigned int F_00b618f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb618f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)this + 8) = 1;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 9))) = 1;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  return 0;
}

/* ref: FUN_00b61910 */
uint F_00b61910(unsigned int gen_a0)
{
  GEN_ENTER(0xb61910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_EAX = 0;
  
  *(undefined4 *)((int)this + 10) = 0x1000000;
  *(undefined2 *)((int)this + 0xe) = 0x101;
  *(undefined1 *)((int)this + 0x10) = 1;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

/* ref: FUN_00b61970 */
uint F_00b61970(unsigned int gen_a0)
{
  GEN_ENTER(0xb61970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_EAX = 0;
  
  *(undefined2 *)((int)this + 8) = 1;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 9))) = 1;
  }
  *(undefined2 *)((int)this + 10) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0xd) = 1;
  *(undefined1 *)((int)this + 0xe) = 1;
  *(undefined1 *)((int)this + 0xf) = 1;
  *(undefined1 *)((int)this + 0x10) = 1;
  *(undefined1 *)((int)this + 0x11) = 1;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x15) = 1;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

/* ref: FUN_00b619d0 */
uint F_00b619d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb619d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = (int)this + -0x18;
    return 0;
  }
  do {
    iVar2 = iVar1;
    iVar1 = *(int *)(iVar2 + 0x1c);
  } while (*(int *)(iVar2 + 0x1c) != 0);
  if (this != (undefined *)0x0) {
    *(uint *)(iVar2 + 0x1c) = (int)this - 0x18U;
    *(int *)this = iVar2;
    *(undefined4 *)((int)this + 4) = 0;
    return (int)this - 0x18U;
  }
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar2;
  *(undefined4 *)&REFG(undefined, 0x4) = 0;
  return 0;
}

/* ref: FUN_00b61a20 */
unsigned int F_00b61a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  if (iVar1 == 0) {
    *param_1 = iVar2;
  }
  else {
    *(int *)(iVar1 + 0x1c) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x18) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b61a50 */
byte F_00b61a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2))) & 1 << ((byte)param_1 & 0xf)) != 0;
}

/* ref: FUN_00b61a80 */
unsigned int F_00b61a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort * puVar1;
  
  puVar1 = ((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2)));
  *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0xf);
  return 0;
}

/* ref: FUN_00b61ab0 */
unsigned int F_00b61ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort * puVar1;
  
  puVar1 = ((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2)));
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0xf));
  return 0;
}

/* ref: FUN_00b61af0 */
unsigned int F_00b61af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb61af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort * puVar1;
  ushort uVar2;
  
  uVar2 = 1 << ((byte)param_1 & 0xf);
  puVar1 = ((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2)));
  if ((char)param_2 != '\0') {
    *puVar1 = *puVar1 | uVar2;
    return 0;
  }
  *puVar1 = *puVar1 & ~uVar2;
  return 0;
}

/* ref: FUN_00b61b30 */
unsigned int F_00b61b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61b30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(ushort *)(in_ecx + 0x34) = *(ushort *)(in_ecx + 0x34) | 1;
    return 0;
  }
  *(ushort *)(in_ecx + 0x34) = *(ushort *)(in_ecx + 0x34) & 0xfffe;
  return 0;
}

/* ref: Client::System::Scheduler::Base::CutSceneController::vf0 */
uint F_00b61b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34f0));
  F_00b61030(this);
  F_00b60000(this);
  F_00be92f0(this + 0x3c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b61b90 */
byte F_00b61b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61b90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xa0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b61ba0 */
uint F_00b61ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61ba0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x9c) = param_2;
  return param_2;
}

/* ref: FUN_00b61bb0 */
unsigned int F_00b61bb0(float gen_a0)
{
  GEN_ENTER(0xb61bb0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b61bd0 */
uint F_00b61bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  F_00b63100(this);
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined1 *)((int)this + 0x62) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[42])REFP(0x10f3594));
  *(undefined1 *)((int)this + 0x68) = 1;
  *(undefined4 *)((int)this + 0x70) = *param_1;
  *(undefined4 *)((int)this + 0x74) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00b61c10 */
unsigned int F_00b61c10(unsigned int gen_a0)
{
  GEN_ENTER(0xb61c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[42])REFP(0x10f3594));
  if (*(char *)((int)this + 0x62) == '\0') {
    F_0052f2b0(REFG(undefined4, 0x1375b00),this);
  }
  F_00b63250(this);
  return 0;
}

/* ref: FUN_00b61c40 */
byte F_00b61c40(unsigned int gen_a0)
{
  GEN_ENTER(0xb61c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this);
  if ((char)uVar1 == '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
    if ((char)uVar1 == '\0') {
      return 0;
    }
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this);
    if (((char)uVar1 == '\0') &&
       (uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this), (char)uVar1 == '\0')) {
      return 0;
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this,0);
  }
  return 1;
}

/* ref: FUN_00b61c90 */
byte F_00b61c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61c90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 1) {
    return *(int *)(in_ecx + 0x6c) < 7;
  }
  if (param_2 != 2) {
    return 1;
  }
  return 6 < *(int *)(in_ecx + 0x6c);
}

/* ref: FUN_00b61cc0 */
uint F_00b61cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xb61cc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * this;
  int * piVar1;
  
  this = (undefined *)F_00406b90(0xa0,0,0);
  if (this != (undefined *)0x0) {
    piVar1 = (int *)F_00b7cd90(this,param_1);
    ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,7);
    return (uint)piVar1;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x60))(0,7);
  return 0;
}

/* ref: FUN_00b61d10 */
uint F_00b61d10(unsigned int gen_a0)
{
  GEN_ENTER(0xb61d10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * this;
  int * piVar1;
  
  this = (undefined *)F_00406b90(0x90,0,0);
  if (this != (undefined *)0x0) {
    piVar1 = (int *)F_00becaf0(this,param_1);
    ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,9);
    return (uint)piVar1;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x60))(0,9);
  return 0;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf24 */
uint F_00b61d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61d60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x6c) = param_2;
  return param_2;
}

/* ref: FUN_00b61d70 */
uint F_00b61d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x70) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x74) = uVar1;
  return uVar1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf22 */
byte F_00b61d90(unsigned int gen_a0)
{
  GEN_ENTER(0xb61d90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x68);
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf32 */
unsigned int F_00b61da0(void)
{
  GEN_ENTER(0xb61da0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf9 */
uint F_00b61db0(unsigned int gen_a0)
{
  GEN_ENTER(0xb61db0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf34 */
uint F_00b61dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xb61dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf35 */
unsigned int F_00b61dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb61dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*(gen_code32 *)(*(int *)this + 0x78))(this);
  return 0;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf36 */
unsigned int F_00b61de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb61de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00b61df0 */
byte F_00b61df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb61df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  if ((param_2 != (int *)0x0) && ((ushort)param_3 != 0)) {
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x50))(param_2,(uint)(ushort)param_3);
    if ((char)uVar2 != '\0') {
      ((code *)*(gen_code32 *)(*param_2 + 0x40))(param_2,((undefined1 *)(gen_frame + 0x0)),(uint)(ushort)param_3);
      F_00a1c4f0(param_1,((undefined1 *)(gen_frame + 0x0)));
      bVar1 = 1;
      goto LAB_00b61e60;
    }
  }
  bVar1 = 0;
LAB_00b61e60: ;
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return bVar1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf40 */
uint F_00b61e80(unsigned int gen_a0)
{
  GEN_ENTER(0xb61e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined * pvVar1;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this)));
  pvVar1 = this_00;
  if ((this_00 != (undefined *)0x0) && ((*(byte *)((int)this_00 + 0x2dd3) & 2) != 0)) {
    pvVar1 = (undefined *)F_00aaa5b0(this_00,1);
    *(byte *)((int)this_00 + 0x2dd3) = *(byte *)((int)this_00 + 0x2dd3) & 0xfd;
  }
  return (uint)pvVar1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf20 */
uint F_00b61eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb61eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this);
  if ((((char)uVar1 == '\0') &&
      (uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this), (char)uVar1 == '\0')) &&
     (uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this), (char)uVar1 != '\0')) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this);
    if (((char)uVar1 == '\0') &&
       (uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this), (char)uVar1 == '\0')) {
      return uVar1;
    }
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this,0);
  }
  return uVar1;
}

/* ref: FUN_00b61f00 */
uint F_00b61f00(unsigned int gen_a0)
{
  GEN_ENTER(0xb61f00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  char cVar1;
  undefined * pvVar2;
  int * piVar3;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x0f') {
    pvVar2 = (undefined *)F_00406b90(0xa0,0,0);
    if (pvVar2 != (undefined *)0x0) {
      piVar3 = (int *)F_00becbe0(pvVar2,param_1);
      ((code *)*(gen_code32 *)(*piVar3 + 0x60))(piVar3,2);
      return (uint)piVar3;
    }
    ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x60))(0,2);
  }
  else {
    if (cVar1 == '0') {
      pvVar2 = (undefined *)F_00406b90(0x90,0,0);
      if (pvVar2 != (undefined *)0x0) {
        piVar3 = (int *)F_00bedf60(pvVar2,param_1);
        ((code *)*(gen_code32 *)(*piVar3 + 0x60))(piVar3,4);
        return (uint)piVar3;
      }
      ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x60))(0,4);
      return 0;
    }
    if (cVar1 == 'J') {
      pvVar2 = (undefined *)F_00406b90(0x80,0,0);
      if (pvVar2 != (undefined *)0x0) {
        piVar3 = (int *)F_00bee210(pvVar2,param_1);
        ((code *)*(gen_code32 *)(*piVar3 + 0x60))(piVar3,5);
        return (uint)piVar3;
      }
      ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x60))(0,5);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00b61ff0 */
uint F_00b61ff0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xb61ff0u, 0u, 0u, 0u, 0u);
  unsigned int gen_args[7];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  ushort uVar6;
  int * this;
  
  iVar1 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 4)));
  (*(byte *)(gen_frame + 0x5f)) = *(*(byte * PTR32 *)&gen_args[4]);
  (*(int *)(gen_frame + 0x4c)) = iVar1;
  F_00a1e7d0((*(float *)&gen_args[0]),(*(float *)&gen_args[1]),(*(float *)&gen_args[2]),(*(float *)&gen_args[3]),((undefined1 *)(gen_frame + 0x0)),(*(byte * PTR32 *)&gen_args[4]) + 0xc);
  uVar6 = (ushort)(*(byte *)(gen_frame + 0x5f)) << 8 | 0xfe;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 0)) = uVar6;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) = 0;
  (*(uint *)(gen_frame + 0x38)) = (uint)uVar6;
  (*(int *)(gen_frame + 0x3c)) = iVar1;
  this = (int *)0x0;
  switch((unsigned int)(uintptr_t)((*(byte *)(gen_frame + 0x5f)))) {
  case 1: ;
    pvVar5 = (undefined *)F_00406b90(0x90,0,0);
    if (pvVar5 == (undefined *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = (int *)F_00bee7c0(pvVar5,&(*(uint *)(gen_frame + 0x38)));
    }
    (*(int * PTR32 *)(gen_frame + 0x58)) = this;
    ((code *)*(gen_code32 *)(*this + 0x60))(this,1);
    if ((*(undefined * PTR32 *)&gen_args[5]) == (undefined *)0x0) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x58)) + 0xa8))((*(int * PTR32 *)(gen_frame + 0x58)),(*(byte * PTR32 *)&gen_args[4]) + *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x30))));
    }
    else {
      (*(int *)(gen_frame + 0x4c)) = *this;
      uVar4 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[5]));
      ((code *)*(gen_code32 *)((*(int *)(gen_frame + 0x4c)) + 0xb0))(this,uVar4);
    }
    break;
  default: ;
    goto switchD_00b6205f_caseD_2;
  case 3: ;
    pvVar5 = (undefined *)F_00406b90(0x90,0,0);
    if (pvVar5 == (undefined *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = (int *)F_00bee4c0(pvVar5,&(*(uint *)(gen_frame + 0x38)));
    }
    ((code *)*(gen_code32 *)(*this + 0x60))(this,1);
    if ((*(undefined * PTR32 *)&gen_args[5]) == (undefined *)0x0) {
      ((code *)*(gen_code32 *)(*this + 0xa8))(this,*((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x30))));
    }
    else {
      (*(int *)(gen_frame + 0x4c)) = *this;
      uVar4 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[5]));
      ((code *)*(gen_code32 *)((*(int *)(gen_frame + 0x4c)) + 0xb0))(this,uVar4);
    }
    break;
  case 4: ;
    pvVar5 = (undefined *)F_00406b90(0x90,0,0);
    if (pvVar5 == (undefined *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = (int *)F_00bee640(pvVar5,&(*(uint *)(gen_frame + 0x38)));
    }
    ((code *)*(gen_code32 *)(*this + 0x60))(this,1);
    if ((*(undefined * PTR32 *)&gen_args[5]) == (undefined *)0x0) {
      ((code *)*(gen_code32 *)(*this + 0xa8))(this,(*(byte * PTR32 *)&gen_args[4]) + *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x30))));
    }
    else {
      (*(int *)(gen_frame + 0x4c)) = *this;
      uVar4 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[5]));
      ((code *)*(gen_code32 *)((*(int *)(gen_frame + 0x4c)) + 0xb0))(this,uVar4);
    }
    break;
  case 6: ;
    pvVar5 = (undefined *)F_00406b90(0x90,0,0);
    if (pvVar5 == (undefined *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = (int *)F_00bee2d0(pvVar5,&(*(uint *)(gen_frame + 0x38)));
    }
    (*(int * PTR32 *)(gen_frame + 0x54)) = this;
    ((code *)*(gen_code32 *)(*this + 0x60))(this,6);
    F_00bee400(this,(*(byte * PTR32 *)&gen_args[4]) + *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x30))),((undefined1 *)(gen_frame + 0x0)));
    break;
  case 8: ;
  case 9: ;
    if ((char)(*(undefined4 *)&gen_args[6]) == '\0') {
      pvVar5 = (undefined *)F_00406b90(0xb0,0,0);
      if (pvVar5 == (undefined *)0x0) {
        this = (int *)0x0;
      }
      else {
        this = (int *)F_00bef000(pvVar5,&(*(uint *)(gen_frame + 0x38)));
      }
      this[0x27] = (uint)(*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[6]) + 1));
      ((code *)*(gen_code32 *)(*this + 0x60))(this,1);
      if (((*(undefined * PTR32 *)&gen_args[5]) == (undefined *)0x0) || (uVar4 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[5])), uVar4 == 0)) {
        ((code *)*(gen_code32 *)(*this + 0xa8))(this,*((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x30))));
      }
      else {
        (*(int *)(gen_frame + 0x4c)) = *this;
        uVar4 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[5]));
        ((code *)*(gen_code32 *)((*(int *)(gen_frame + 0x4c)) + 0xb0))(this,uVar4);
      }
    }
    else {
      pvVar5 = (undefined *)F_00406b90(0xc0,0,0);
      if (pvVar5 == (undefined *)0x0) {
        this = (int *)0x0;
      }
      else {
        this = (int *)F_00bee9b0(pvVar5,&(*(uint *)(gen_frame + 0x38)));
      }
      this[0x27] = (uint)(*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[6]) + 1));
      (*(int * PTR32 *)(gen_frame + 0x54)) = this;
      ((code *)*(gen_code32 *)(*this + 0x60))(this,1);
      ((code *)*(gen_code32 *)(*this + 0xa8))(this,*((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x30))));
    }
    break;
  case 0xf: ;
    if ((*(undefined * PTR32 *)&gen_args[5]) == (undefined *)0x0) {
      pvVar5 = (undefined *)F_00406b90(0xa0,0,0);
      if (pvVar5 == (undefined *)0x0) {
        this = (int *)0x0;
      }
      else {
        this = (int *)F_00becbe0(pvVar5,&(*(uint *)(gen_frame + 0x38)));
      }
      (*(int * PTR32 *)(gen_frame + 0x54)) = this;
      ((code *)*(gen_code32 *)(*this + 0x60))(this,2);
      F_00bedd30(this,(*(float *)&gen_args[0]),(*(float *)&gen_args[1]),(*(float *)&gen_args[2]),(*(float *)&gen_args[3]),(*(byte * PTR32 *)&gen_args[4]));
    }
    else {
      bVar2 = F_00a1b580((*(undefined * PTR32 *)&gen_args[5]));
      if (bVar2 != 0) goto LAB_00b62572;
      pvVar5 = (undefined *)F_00406b90(0xa0,0,0);
      if (pvVar5 == (undefined *)0x0) {
        this = (int *)0x0;
      }
      else {
        this = (int *)F_00becbe0(pvVar5,&(*(uint *)(gen_frame + 0x38)));
      }
      ((code *)*(gen_code32 *)(*this + 0x60))(this,2);
      F_00bed5e0(this,(*(float *)&gen_args[0]),(*(float *)&gen_args[1]),(*(float *)&gen_args[2]),(*(float *)&gen_args[3]),(*(byte * PTR32 *)&gen_args[4]));
      piVar3 = (int *)F_00a1d0c0((*(undefined * PTR32 *)&gen_args[5]));
      (*(int * PTR32 *)(gen_frame + 0x54)) = piVar3;
      if (piVar3 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
        ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x54)))((*(int * PTR32 *)(gen_frame + 0x54)),1);
      }
    }
    break;
  case 0x25: ;
  case 0x49: ;
    pvVar5 = (undefined *)F_00406b90(0xb0,0,0);
    if (pvVar5 == (undefined *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = (int *)F_00bef000(pvVar5,&(*(uint *)(gen_frame + 0x38)));
    }
    this[0x27] = (uint)(*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[6]) + 1));
    (*(int * PTR32 *)(gen_frame + 0x58)) = this;
    ((code *)*(gen_code32 *)(*this + 0x60))(this,1);
    if ((*(byte *)(gen_frame + 0x5f)) == 0x49) {
      *(char *)(this + 0x28) = (char)(*(undefined4 *)&gen_args[6]);
    }
    ((code *)*(gen_code32 *)(*this + 0xa8))(this,*((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x30))));
    break;
  case 0x26: ;
  case 0x2e: ;
    (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x54)) + 0)) = (*(byte *)(gen_frame + 0x5f));
    (*(int * PTR32 *)(gen_frame + 0x54)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x54)), 1, 3),(*(byte *)(gen_frame + 0x5f)))));
    (*(int * PTR32 *)(gen_frame + 0x58)) = (int *)0x0;
    if (*((int * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x34))) == (int *)0x0) {
      if (*((int * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x38))) != (int *)0x0) {
        (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x54)) + 0)) = 9;
        (*(int * PTR32 *)(gen_frame + 0x54)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x54)), 1, 3),9)));
        (*(int * PTR32 *)(gen_frame + 0x58)) = *((int * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x38)));
      }
    }
    else {
      (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x54)) + 0)) = 8;
      (*(int * PTR32 *)(gen_frame + 0x54)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x54)), 1, 3),8)));
      (*(int * PTR32 *)(gen_frame + 0x58)) = *((int * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x34)));
    }
    pvVar5 = (undefined *)F_00406b90(0xb0,0,0);
    if (pvVar5 == (undefined *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = (int *)F_00bef000(pvVar5,&(*(uint *)(gen_frame + 0x38)));
    }
    ((code *)*(gen_code32 *)(*this + 0x60))(this,1);
    if ((*(undefined * PTR32 *)&gen_args[5]) != (undefined *)0x0) {
      if ((*(int * PTR32 *)(gen_frame + 0x58)) == (int *)0x0) {
        (*(int *)(gen_frame + 0x4c)) = *this;
        uVar4 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[5]));
        ((code *)*(gen_code32 *)((*(int *)(gen_frame + 0x4c)) + 0xb0))(this,uVar4);
      }
      else {
        F_00603a80(&(*(int *)(gen_frame + 0x48)),(*(int * PTR32 *)(gen_frame + 0x54)),0,(*(int *)(gen_frame + 0x4c)),0xffffffff);
        this[0x1c] = (*(int *)(gen_frame + 0x48));
        this[0x1d] = (*(int *)(gen_frame + 0x4c));
        uVar4 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[5]));
        F_00bef8a0(this,(*(int * PTR32 *)(gen_frame + 0x58)),uVar4);
        this[0x1c] = (*(uint *)(gen_frame + 0x38));
        this[0x1d] = (*(int *)(gen_frame + 0x3c));
        ((code *)*(gen_code32 *)(*this + 0x54))(this,0);
      }
    }
    break;
  case 0x27: ;
    pvVar5 = (undefined *)F_00406b90(0x90,0,0);
    if (pvVar5 == (undefined *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = (int *)F_00beee50(pvVar5,&(*(uint *)(gen_frame + 0x38)));
    }
    ((code *)*(gen_code32 *)(*this + 0x60))(this,1);
    if ((*(undefined * PTR32 *)&gen_args[5]) == (undefined *)0x0) {
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x48)) + 0)) = 1;
      (*(int *)(gen_frame + 0x48)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x48)), 1, 3),1);
      F_00a1bce0(((undefined1 *)(gen_frame + 0x40)),(*(byte * PTR32 *)&gen_args[4]));
      ((code *)*(gen_code32 *)(*this + 0xa8))(this,((undefined1 *)(gen_frame + 0x40)));
    }
    else {
      (*(int *)(gen_frame + 0x4c)) = *this;
      uVar4 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[5]));
      ((code *)*(gen_code32 *)((*(int *)(gen_frame + 0x4c)) + 0xb0))(this,uVar4);
    }
    break;
  case 0x4a: ;
    if ((*(undefined * PTR32 *)&gen_args[5]) == (undefined *)0x0) {
      pvVar5 = (undefined *)F_00406b90(0x80,0,0);
      if (pvVar5 == (undefined *)0x0) {
        this = (int *)0x0;
        ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x60))(0,5);
      }
      else {
        this = (int *)F_00bee210(pvVar5,&(*(uint *)(gen_frame + 0x38)));
        ((code *)*(gen_code32 *)(*this + 0x60))(this,5);
      }
    }
    else {
      bVar2 = F_00a1b580((*(undefined * PTR32 *)&gen_args[5]));
      if (bVar2 == 0) {
        return 0;
      }
LAB_00b62572: ;
      this = (int *)F_00a1b590((*(undefined * PTR32 *)&gen_args[5]));
      this[0x1c] = (*(uint *)(gen_frame + 0x38));
      this[0x1d] = (*(int *)(gen_frame + 0x3c));
    }
  }
  uVar4 = ((code *)*(gen_code32 *)(*this + 0x68))(this);
  if ((char)uVar4 != '\0') {
    ((code *)*(gen_code32 *)(*this + 0x6c))(this,(*(byte * PTR32 *)&gen_args[4]));
    return (uint)this;
  }
  ((code *)*(gen_code32 *)(*this + 0x70))(this,(*(byte * PTR32 *)&gen_args[4]));
switchD_00b6205f_caseD_2: ;
  return (uint)this;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf27 */
uint F_00b62660(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb62660u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  int param_6 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  
  F_00a1e7d0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,((undefined1 *)(gen_frame + 0x0)),param_6 + 0xc);
  ((code *)*(gen_code32 *)(*in_ecx + 0x20))(in_ecx,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*in_ecx + 0x34))(in_ecx);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a1fa60(in_xmm1,in_xmm2,in_xmm3,in_xmm7,in_ecx + 0x1c,uVar1,param_6);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf30 */
uint F_00b626d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb626d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = param_1[1];
  (*(undefined4 *)(gen_frame + 0x18)) = param_1[2];
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_00a1c7d0(&(*(undefined4 *)(gen_frame + 0x10)),0,0,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this,&(*(undefined4 *)(gen_frame + 0x10)));
  return uVar1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf3 */
uint F_00b62760(unsigned int gen_a0)
{
  GEN_ENTER(0xb62760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf31 */
uint F_00b62770(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xb62770u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  uint uVar2;
  float10 fVar3;
  
  (*(float *)(gen_frame + 0x1c)) = (float)((float10)param_6 * (float10)REFG(double, 0x1088108));
  fVar3 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,
                       (float10)(float)((float10)param_6 * (float10)REFG(double, 0x1088108)));
  fVar1 = (float)fVar3;
  (*(float *)(gen_frame + 0x18)) = fVar1;
  fVar3 = (float10)fVar1;
  (*(float *)(gen_frame + 0x0)) = (float)(fVar3 * (float10)REFG(float, 0x1302c80));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)REFG(float, 0x1302c84) * fVar3);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar3 * (float10)REFG(float, 0x1302c88));
  fVar3 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(*(float *)(gen_frame + 0x1c)));
  (*(float *)(gen_frame + 0x18)) = (float)fVar3;
  (*(float *)(gen_frame + 0xc)) = (float)fVar3;
  uVar2 = ((code *)*(gen_code32 *)(*in_ecx + 0x10))(in_ecx,&(*(float *)(gen_frame + 0x0)));
  return uVar2;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf5 */
uint F_00b62800(unsigned int gen_a0)
{
  GEN_ENTER(0xb62800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf7 */
uint F_00b62810(unsigned int gen_a0)
{
  GEN_ENTER(0xb62810u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x40;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf37 */
uint F_00b62820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  float * pfVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this);
  if (uVar1 != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this);
    if (*(char *)(uVar1 + 0x65) == '\x03') {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x34))(this)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x2c))(piVar2,param_1);
      return (uint)param_1;
    }
  }
  ((float *)(gen_frame + 0x0))[0] = *(float *)(this + 0x40);
  ((float *)(gen_frame + 0x0))[2] = *(float *)(this + 0x48);
  pfVar3 = ((float *)(gen_frame + 0x0)) + 1;
  ((float *)(gen_frame + 0x0))[1] = *(float *)(this + 0x44);
  if (!((float10)*(float *)(this + 0x40) < (float10)*(float *)(this + 0x44))) {
    pfVar3 = ((float *)(gen_frame + 0x0));
  }
  if ((float10)*pfVar3 < (float10)*(float *)(this + 0x48)) {
    pfVar3 = ((float *)(gen_frame + 0x0)) + 2;
  }
  *param_1 = *(undefined4 *)(this + 0x20);
  param_1[1] = *(undefined4 *)(this + 0x24);
  param_1[2] = *(undefined4 *)(this + 0x28);
  param_1[3] = (undefined4)gen_fl2bits(*pfVar3);
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf38 */
uint F_00b628e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb628e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  int * piVar2;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this);
  if (uVar1 != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this);
    if (*(char *)(uVar1 + 0x65) == '\x03') {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x34))(this)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x30))(piVar2,param_1);
      goto LAB_00b62994;
    }
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x9c))(this,((undefined1 *)(gen_frame + 0x20)));
  F_00a1cb90(&(*(undefined4 *)(gen_frame + 0x0)),uVar1);
  *param_1 = (*(undefined4 *)(gen_frame + 0x0));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
  param_1[4] = (*(undefined4 *)(gen_frame + 0x10));
  param_1[5] = (*(undefined4 *)(gen_frame + 0x14));
  param_1[6] = (*(undefined4 *)(gen_frame + 0x18));
LAB_00b62994: ;
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf41 */
uint F_00b629b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb629b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  undefined * pvVar4;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this)));
  pvVar4 = this_00;
  if ((this_00 != (undefined *)0x0) && ((*(byte *)((int)this_00 + 0x2dd3) & 2) == 0)) {
    if ((char)param_1 == '\0') {
      uVar1 = F_00aa0210(this_00,0,0);
      puVar2 = (uint *)F_00ab2a20(uVar1);
      if (puVar2 != (uint *)0x0) {
        uVar1 = *puVar2;
        uVar3 = F_00aa0210(this_00,0,0);
        (*(uint *)(gen_frame + 0x8)) = uVar3;
        (*(int *)(gen_frame + 0x4)) = (uVar1 & 0xffffff) + (int)puVar2;
        F_00b5ad70(REFG(undefined4, 0x14c4e84),(uint)*(ushort *)((int)this_00 + 0x88),&(*(int *)(gen_frame + 0x4)),0);
      }
      F_00aa0100(this_00,0,0);
      pvVar4 = (undefined *)F_00aa6f20(this_00,0,0);
    }
    if ((*(byte *)((int)this_00 + 0x8f) & 0x40) != 0) {
      pvVar4 = (undefined *)F_00aaa5b0(this_00,0);
    }
    *(byte *)((int)this_00 + 0x2dd3) = *(byte *)((int)this_00 + 0x2dd3) | 2;
  }
  return (uint)pvVar4;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf2 */
uint F_00b62a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  code * pcVar1;
  int * piVar2;
  undefined * this_00;
  
  *(int *)(this + 0x20) = *param_1;
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x34);
  *(int *)(this + 0x24) = param_1[1];
  *(int *)(this + 0x28) = param_1[2];
  piVar2 = ((int *)GEN_TOP((*pcVar1)(this)));
  if (piVar2 != (int *)0x0) {
    piVar2[0xc] = *param_1;
    piVar2[0xd] = param_1[1];
    piVar2[0xe] = param_1[2];
    piVar2[9] = piVar2[9] | 2;
    if (*(char *)((int)piVar2 + 0x65) == '\x03') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,0);
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this)));
      piVar2 = (int *)0x0;
      if (this_00 != (undefined *)0x0) {
        piVar2 = (int *)F_00a9fae0(this_00);
      }
    }
  }
  return (uint)piVar2;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf4 */
uint F_00b62ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  *(int *)(this + 0x30) = *param_1;
  *(int *)(this + 0x34) = param_1[1];
  *(int *)(this + 0x38) = param_1[2];
  *(int *)(this + 0x3c) = param_1[3];
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x34))(this)));
  if (piVar2 != (int *)0x0) {
    piVar2[0x10] = *param_1;
    piVar2[0x11] = param_1[1];
    piVar2[0x12] = param_1[2];
    iVar1 = param_1[3];
    piVar2[9] = piVar2[9] | 2;
    piVar2[0x13] = iVar1;
    if (*(char *)((int)piVar2 + 0x65) == '\x03') {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,0)));
    }
  }
  return (uint)piVar2;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf6 */
uint F_00b62b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  code * pcVar1;
  int * piVar2;
  
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x34);
  *(int *)(this + 0x40) = *param_1;
  *(int *)(this + 0x44) = param_1[1];
  *(int *)(this + 0x48) = param_1[2];
  piVar2 = ((int *)GEN_TOP((*pcVar1)(this)));
  if (piVar2 != (int *)0x0) {
    piVar2[0x14] = *param_1;
    piVar2[0x15] = param_1[1];
    piVar2[0x16] = param_1[2];
    piVar2[9] = piVar2[9] | 2;
    if (*(char *)((int)piVar2 + 0x65) == '\x03') {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,0)));
    }
  }
  return (uint)piVar2;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf8 */
uint F_00b62b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  code * pcVar1;
  int * piVar2;
  undefined * this_00;
  
  *(int *)(this + 0x20) = *param_1;
  *(int *)(this + 0x24) = param_1[1];
  *(int *)(this + 0x28) = param_1[2];
  *(int *)(this + 0x30) = param_1[4];
  *(int *)(this + 0x34) = param_1[5];
  *(int *)(this + 0x38) = param_1[6];
  *(int *)(this + 0x3c) = param_1[7];
  *(int *)(this + 0x40) = param_1[8];
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x34);
  *(int *)(this + 0x44) = param_1[9];
  *(int *)(this + 0x48) = param_1[10];
  piVar2 = ((int *)GEN_TOP((*pcVar1)(this)));
  if (piVar2 != (int *)0x0) {
    piVar2[0xc] = *param_1;
    piVar2[0xd] = param_1[1];
    piVar2[0xe] = param_1[2];
    piVar2[0x10] = param_1[4];
    piVar2[0x11] = param_1[5];
    piVar2[0x12] = param_1[6];
    piVar2[0x13] = param_1[7];
    piVar2[0x14] = param_1[8];
    piVar2[0x15] = param_1[9];
    piVar2[0x16] = param_1[10];
    piVar2[9] = piVar2[9] | 2;
    if (*(char *)((int)piVar2 + 0x65) == '\x03') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,0);
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this)));
      piVar2 = (int *)0x0;
      if (this_00 != (undefined *)0x0) {
        piVar2 = (int *)F_00a9fae0(this_00);
      }
    }
  }
  return (uint)piVar2;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf21 */
unsigned int F_00b62c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62c40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
  (*(undefined * PTR32 *)&gen_args[0])[0x68] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0));
  uVar2 = (*pcVar1)((*(undefined * PTR32 *)&gen_args[0]));
  if (uVar2 != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))))((*(undefined * PTR32 *)&gen_args[0]));
    *(byte *)(uVar2 + 100) =
         (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)) != (undefined1)0x0 | *(byte *)(uVar2 + 100) & 0xfe;
  }
  return 0;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf39 */
uint F_00b62c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float10 fVar1;
  uint uVar2;
  int * piVar3;
  float * pfVar4;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this);
  if (uVar2 != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this);
    if (*(char *)(uVar2 + 0x65) == '\x03') {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x34))(this)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x34))(piVar3,param_1);
      goto LAB_00b62dc1;
    }
  }
  fVar1 = (float10)0;
  (*(float *)(gen_frame + 0x40)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(this + 0x40);
  (*(float *)(gen_frame + 0x44)) = (float)fVar1;
  (*(float *)(gen_frame + 0x48)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(this + 0x44);
  (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(this + 0x48);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x10)),(uint)(this + 0x30));
  (*(float *)(gen_frame + 0x40)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x40)) + (float10)*(float *)(this + 0x20))));
  (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x24) + (float10)(*(float *)(gen_frame + 0x44)))));
  (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x28) + (float10)(*(float *)(gen_frame + 0x48)))));
  pfVar4 = (float *)F_005fe770(&(*(undefined4 *)(gen_frame + 0x10)),(uint)((undefined1 *)(gen_frame + 0x0)));
  *(float *)(param_1 + 0x40) = (float)((float10)*pfVar4 * (float10)REFG(float, 0x1302c60));
  *(float *)(param_1 + 0x44) = (float)((float10)pfVar4[1] * (float10)REFG(float, 0x1302c64));
  *(float *)(param_1 + 0x48) = (float)((float10)pfVar4[2] * (float10)REFG(float, 0x1302c68));
  F_005fe2e0(param_1,(uint)&(*(undefined4 *)(gen_frame + 0x10)));
  F_005fe2e0(param_1 + 0x10,(uint)&(*(undefined4 *)(gen_frame + 0x20)));
  F_005fe2e0(param_1 + 0x20,(uint)&(*(undefined4 *)(gen_frame + 0x30)));
  *(float *)(param_1 + 0x30) = (*(float *)(gen_frame + 0x40));
  *(float *)(param_1 + 0x34) = (*(float *)(gen_frame + 0x44));
  *(float *)(param_1 + 0x38) = (*(float *)(gen_frame + 0x48));
LAB_00b62dc1: ;
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return param_1;
}

/* ref: FUN_00b62de0 */
byte F_00b62de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62de0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x2dd3)) & 2;
  *(byte *)(in_ecx + 0x2dd3) = *(byte *)(in_ecx + 0x2dd3) ^ bVar1;
  return bVar1;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf1 */
byte F_00b62e00(void)
{
  GEN_ENTER(0xb62e00u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf11 */
uint F_00b62e10(void)
{
  GEN_ENTER(0xb62e10u, 0u, 0u, 0u, 0u);
  return 0x10f363c;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf13 */
uint F_00b62e20(void)
{
  GEN_ENTER(0xb62e20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf12 */
uint F_00b62e30(void)
{
  GEN_ENTER(0xb62e30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf15 */
uint F_00b62e40(void)
{
  GEN_ENTER(0xb62e40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf14 */
uint F_00b62e50(void)
{
  GEN_ENTER(0xb62e50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf17 */
uint F_00b62e60(void)
{
  GEN_ENTER(0xb62e60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf16 */
uint F_00b62e70(void)
{
  GEN_ENTER(0xb62e70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf19 */
uint F_00b62e80(void)
{
  GEN_ENTER(0xb62e80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf18 */
uint F_00b62e90(void)
{
  GEN_ENTER(0xb62e90u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf25 */
byte F_00b62ea0(void)
{
  GEN_ENTER(0xb62ea0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf26 */
byte F_00b62eb0(void)
{
  GEN_ENTER(0xb62eb0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf28 */
unsigned int F_00b62ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf29 */
byte F_00b62ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xb62ed0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x60);
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf33 */
unsigned int F_00b62ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf23 */
unsigned int F_00b62ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xb62ef0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x62) = 1;
  return 0;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf0 */
uint F_00b62f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[42])REFP(0x10f3594));
  if (this[0x62] == (undefined1)0x0) {
    F_0052f2b0(REFG(undefined4, 0x1375b00),this);
  }
  F_00b63250(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf10 */
unsigned int F_00b62f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb62f40u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00b63000 */
unsigned int F_00b63000(float gen_a0)
{
  GEN_ENTER(0xb63000u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b63020 */
unsigned int F_00b63020(unsigned int gen_a0)
{
  GEN_ENTER(0xb63020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_00bf04f0(*(undefined * PTR32 *)((int)this + 0x50));
    return 0;
  }
  return 0;
}

/* ref: FUN_00b63030 */
byte F_00b63030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xb63030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  undefined * this_00;
  
  if (*(int *)((int)this + 0x50) == 0) {
    if (param_2 != (int *)0x0) {
      uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
      if ((char)uVar1 != '\0') goto LAB_00b6306a;
    }
    if (param_5 != (int *)0x0) {
      uVar1 = ((code *)*(gen_code32 *)(*param_5 + 4))(param_5);
      if ((char)uVar1 != '\0') {
LAB_00b6306a: ;
        ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this);
        this_00 = (undefined *)F_00406b90(0xc0,0,0);
        if (this_00 != (undefined *)0x0) {
          uVar1 = F_00beff80(this_00,this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8);
          *(uint *)((int)this + 0x50) = uVar1;
          return 1;
        }
        *(undefined4 *)((int)this + 0x50) = 0;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b630d0 */
byte F_00b630d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb630d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x50);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 4) == param_2 || (*(int *)(iVar1 + 8) == param_2)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b63100 */
uint F_00b63100(unsigned int gen_a0)
{
  GEN_ENTER(0xb63100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x10f36cc));
  *(undefined4 *)((int)this + 0x20) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x24) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x28) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x30) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x34) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x38) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x3c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x40) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 0x44) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x48) = REFG(float, 0x1302e18);
  *(undefined4 *)((int)this + 0x50) = 0;
  return (uint)this;
}

/* ref: FUN_00b63190 */
byte F_00b63190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb63190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  undefined * this_00;
  
  if ((*(int *)((int)this + 0x50) == 0) && (param_2 != (int *)0x0)) {
    uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
    if ((char)uVar1 != '\0') {
      ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this);
      this_00 = (undefined *)F_00406b90(0xc0,0,0);
      if (this_00 != (undefined *)0x0) {
        uVar1 = F_00beff80(this_00,this,param_1,param_2,param_3,param_4,0,&REFG(float, 0x1302df0),0,param_5)
        ;
        *(uint *)((int)this + 0x50) = uVar1;
        return 1;
      }
      *(undefined4 *)((int)this + 0x50) = 0;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b63220 */
unsigned int F_00b63220(unsigned int gen_a0)
{
  GEN_ENTER(0xb63220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x50);
  if (this_00 != (undefined *)0x0) {
    F_00befd60(this_00);
    F_00406ad0(this_00);
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  return 0;
}

/* ref: FUN_00b63250 */
unsigned int F_00b63250(unsigned int gen_a0)
{
  GEN_ENTER(0xb63250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x50);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x10f36cc));
  if (this_00 != (undefined *)0x0) {
    F_00befd60(this_00);
    F_00406ad0(this_00);
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  return 0;
}

/* ref: FUN_00b63280 */
uint F_00b63280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00befd60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf9 */
uint F_00b632c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb632c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf20 */
unsigned int F_00b632d0(void)
{
  GEN_ENTER(0xb632d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf21 */
unsigned int F_00b632e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb632e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf22 */
byte F_00b632f0(void)
{
  GEN_ENTER(0xb632f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf23 */
unsigned int F_00b63300(void)
{
  GEN_ENTER(0xb63300u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf2 */
uint F_00b63310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x20) = *param_2;
  *(undefined4 *)(in_ecx + 0x24) = param_2[1];
  *(undefined4 *)(in_ecx + 0x28) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf3 */
uint F_00b63330(unsigned int gen_a0)
{
  GEN_ENTER(0xb63330u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf4 */
uint F_00b63340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 0x30) = *param_1;
  *(undefined4 *)(this + 0x34) = param_1[1];
  *(undefined4 *)(this + 0x38) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)(this + 0x3c) = uVar1;
  return uVar1;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf5 */
uint F_00b63370(unsigned int gen_a0)
{
  GEN_ENTER(0xb63370u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf6 */
uint F_00b63380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x40) = *param_2;
  *(undefined4 *)(in_ecx + 0x44) = param_2[1];
  *(undefined4 *)(in_ecx + 0x48) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf7 */
uint F_00b633a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb633a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x40;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf8 */
unsigned int F_00b633b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb633b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(this + 0x20) = *param_1;
  *(undefined4 *)(this + 0x24) = param_1[1];
  *(undefined4 *)(this + 0x28) = param_1[2];
  *(undefined4 *)(this + 0x30) = param_1[4];
  *(undefined4 *)(this + 0x34) = param_1[5];
  *(undefined4 *)(this + 0x38) = param_1[6];
  *(undefined4 *)(this + 0x3c) = param_1[7];
  *(undefined4 *)(this + 0x40) = param_1[8];
  *(undefined4 *)(this + 0x44) = param_1[9];
  *(undefined4 *)(this + 0x48) = param_1[10];
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf0 */
uint F_00b63400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x50);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x10f36cc));
  if (this_00 != (undefined *)0x0) {
    F_00befd60(this_00);
    F_00406ad0(this_00);
    *(undefined4 *)(this + 0x50) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b63450 */
byte F_00b63450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63450u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return ((ushort)param_2 & *(ushort *)(in_ecx + 0x12)) != 0;
}

/* ref: FUN_00b63470 */
byte F_00b63470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63470u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (*in_ecx & (byte)param_2) != 0;
}

/* ref: FUN_00b63490 */
uint F_00b63490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63490u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00b634b0 */
unsigned int F_00b634b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb634b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bb9d80(this,(int)this + 0xc,param_1);
  return 0;
}

/* ref: FUN_00b634d0 */
unsigned int F_00b634d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb634d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bb9d80(this,(int)this + 0x10,param_1);
  return 0;
}

/* ref: FUN_00b63510 */
ushort F_00b63510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 6) = *(ushort *)(in_ecx + 6) | (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00b63520 */
byte F_00b63520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63520u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return ((ushort)param_2 & *(ushort *)(in_ecx + 6)) != 0;
}

/* ref: FUN_00b63540 */
uint F_00b63540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00b63570 */
uint F_00b63570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  return param_2;
}

/* ref: FUN_00b63590 */
uint F_00b63590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x28) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x2c) = uVar1;
  return uVar1;
}

/* ref: FUN_00b635c0 */
unsigned int F_00b635c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb635c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x38) = param_2;
  return 0;
}

/* ref: FUN_00b635e0 */
uint F_00b635e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb635e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_00b635f0 */
uint F_00b635f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb635f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (param_2 * 3 + 3) * 0x10 + in_ecx;
}

/* ref: FUN_00b63640 */
uint F_00b63640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63640u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xb4) = param_2;
  return param_2;
}

/* ref: FUN_00b63650 */
unsigned int F_00b63650(float gen_a0)
{
  GEN_ENTER(0xb63650u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b63670 */
uint F_00b63670(unsigned int gen_a0)
{
  GEN_ENTER(0xb63670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    uVar1 = F_00bb9d00(*(undefined * PTR32 *)((int)this + 4));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00b63680 */
byte F_00b63680(unsigned int gen_a0)
{
  GEN_ENTER(0xb63680u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 4);
  if (iVar1 == 0) {
    return 1;
  }
  if ((*(int *)(iVar1 + 0xc) == 0) && (*(int *)(iVar1 + 0x10) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b636a0 */
unsigned int F_00b636a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb636a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int * this_00;
  
  this_00 = param_1;
  do {
    uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0x10))(this_00);
    if (uVar1 != 0) {
      if (uVar1 != 1) {
        return 0;
      }
      F_00bba8b0(this_00,this);
      return 0;
    }
    if (this_00[3] != 0) {
      F_00b636a0(this,(int *)this_00[3]);
    }
    this_00 = (int *)this_00[4];
  } while (this_00 != (int *)0x0);
  return 0;
}

/* ref: FUN_00b636f0 */
unsigned int F_00b636f0(void)
{
  GEN_ENTER(0xb636f0u, 0u, 0u, 0u, 0u);
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(&REFG(undefined, 0x14c4ec0) + REFG(int, 0x14c4ec8) * 4);
  iVar2 = REFG(int, 0x14c4ec8);
  while (iVar1 != 0) {
    REFG(int, 0x14c4ec8) = 1 - iVar2;
    *(undefined4 *)(&REFG(undefined, 0x14c4ec0) + iVar2 * 4) = 0;
    while (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
      F_00a04370(iVar1);
      iVar1 = iVar2;
    }
    iVar2 = REFG(int, 0x14c4ec8);
    iVar1 = *(int *)(&REFG(undefined, 0x14c4ec0) + REFG(int, 0x14c4ec8) * 4);
  }
  REFG(int, 0x14c4ec8) = iVar2;
  return 0;
}

/* ref: FUN_00b63750 */
uint F_00b63750(unsigned int gen_a0)
{
  GEN_ENTER(0xb63750u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(&REFG(undefined, 0x14c4ec0) + REFG(int, 0x14c4ec8) * 4);
  *(uint *)(&REFG(undefined, 0x14c4ec0) + REFG(int, 0x14c4ec8) * 4) = param_1;
  return param_1;
}

/* ref: FUN_00b63780 */
uint F_00b63780(unsigned int gen_a0)
{
  GEN_ENTER(0xb63780u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  ((int *)(gen_frame + 0xc))[2] = *(undefined4 *)((int)param_1 + 0x10);
  ((int *)(gen_frame + 0xc))[3] = *(undefined4 *)((int)param_1 + 0xc);
  uVar2 = 0;
  do {
    piVar4 = (int *)((int *)(gen_frame + 0xc))[(int)(uVar2 + 2)];
    if ((piVar4 != (int *)0x0) && (uVar1 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4), uVar1 == 0)) {
      F_00b63780(piVar4);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  uVar1 = F_00bb9e90(param_1,((int *)(gen_frame + 0xc)),4);
  iVar3 = 0;
  uVar2 = uVar1;
  if (0 < (int)uVar1) {
    do {
      uVar2 = F_00a04370(((int *)(gen_frame + 0xc))[(int)(iVar3)]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar1);
  }
  if (((*(int *)((int)param_1 + 0xc) == 0) && (*(int *)((int)param_1 + 0x10) == 0)) &&
     (*(undefined * PTR32 *)((int)param_1 + 4) != (undefined *)0x0)) {
    F_00bb9e40(*(undefined * PTR32 *)((int)param_1 + 4),param_1);
    uVar2 = REFG(undefined4, 0x14c4ec8);
    *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4);
    *(undefined * PTR32 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4) = param_1;
  }
  this = *(undefined * PTR32 *)((int)param_1 + 4);
  if (this != (undefined *)0x0) {
    uVar1 = *(uint *)((int)param_1 + 0xc);
    uVar2 = *(uint *)((int)param_1 + 0x10);
    if (uVar1 == 0) {
      uVar1 = uVar2;
      if (uVar2 == 0) {
        return 0;
      }
    }
    else if (uVar2 != 0) {
      return uVar1;
    }
    uVar2 = 0;
    if (uVar1 != 0) {
      piVar4 = (int *)((int)this + 0xc);
      if ((undefined *)*piVar4 != param_1) {
        piVar4 = (int *)((int)this + 0x10);
      }
      F_00bb9d80(this,piVar4,uVar1);
      F_00bb9d80(param_1,(uint *)((int)param_1 + 0xc),0);
      F_00bb9d80(param_1,(int)param_1 + 0x10,0);
      *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4);
      uVar2 = REFG(undefined4, 0x14c4ec8);
      *(undefined * PTR32 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4) = param_1;
    }
  }
  return uVar2;
}

/* ref: FUN_00b638a0 */
byte F_00b638a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb638a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  ((int *)(gen_frame + 0x4))[0] = *(int *)(param_1 + 0xc);
  ((int *)(gen_frame + 0x4))[1] = *(undefined4 *)(param_1 + 0x10);
  uVar2 = 0;
  do {
    if (((int *)(gen_frame + 0x4))[(int)(uVar2)] != 0) {
      bVar1 = F_00b638f0(((int *)(gen_frame + 0x4))[(int)(uVar2)],param_2);
      if (bVar1 == 0) {
        return 0;
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  return 1;
}

/* ref: FUN_00b638f0 */
byte F_00b638f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb638f0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
  if (uVar2 == 1) {
    return param_1[8] == param_2;
  }
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
  if (uVar2 == 0) {
    bVar1 = F_00b638a0(param_1,param_2);
    return bVar1;
  }
  return 1;
}

/* ref: FUN_00b63940 */
uint F_00b63940(unsigned int gen_a0)
{
  GEN_ENTER(0xb63940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f37b4));
  uVar1 = F_00a03e20();
  *(uint *)((int)this + 4) = uVar1;
  return (uint)this;
}

/* ref: FUN_00b63960 */
uint F_00b63960(unsigned int gen_a0)
{
  GEN_ENTER(0xb63960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f37b4));
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    F_00b636a0(this,*(int *)((int)this + 4));
    uVar1 = F_00a04250(*(undefined4 *)((int)this + 4));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10e1614));
  return uVar1;
}

/* ref: FUN_00b63990 */
unsigned int F_00b63990(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb63990u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 4))))(*(int * PTR32 *)(param_1 + 4));
    F_00b63780(*(undefined4 *)(param_1 + 4));
  }
  return 0;
}

/* ref: FUN_00b639d0 */
uint F_00b639d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb639d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined * this_00;
  undefined * this_01;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  F_00bba8b0(param_1,this);
  this_00 = *(undefined * PTR32 *)((int)param_1 + 4);
  F_00bb9e40(this_00,param_1);
  uVar2 = REFG(undefined4, 0x14c4ec8);
  *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4);
  *(undefined * PTR32 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4) = param_1;
  this_01 = *(undefined * PTR32 *)((int)this_00 + 4);
  if ((this_01 != (undefined *)0x0) && (*(int *)((int)this_00 + 0x10) == 0)) {
    puVar3 = (undefined4 *)((int)this_01 + 0xc);
    puVar1 = (undefined4 *)((int)this_00 + 0xc);
    if ((undefined *)*puVar3 == this_00) {
      uVar4 = *puVar1;
    }
    else {
      uVar4 = *puVar1;
      puVar3 = (undefined4 *)((int)this_01 + 0x10);
    }
    F_00bb9d80(this_01,puVar3,uVar4);
    F_00bb9d80(this_00,puVar1,0);
    uVar2 = REFG(undefined4, 0x14c4ec8);
    *(undefined4 *)((int)this_00 + 8) = *(undefined4 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4);
    *(undefined * PTR32 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4) = this_00;
  }
  return uVar2;
}

/* ref: FUN_00b63a60 */
uint F_00b63a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb63a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * this_01;
  uint uVar4;
  int * piVar5;
  undefined * pvVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar2 = F_00a03e70(param_1);
  pvVar3 = (undefined *)F_00b644c0(*(undefined4 *)((int)this + 4),uVar2);
  if (pvVar3 == (undefined *)0x0) {
    pvVar3 = *(undefined * PTR32 *)((int)this + 4);
    if (*(int *)((int)pvVar3 + 0xc) == 0) {
      F_00bb9d80(pvVar3,(int)pvVar3 + 0xc,uVar2);
      return uVar2;
    }
    if (*(int *)((int)pvVar3 + 0x10) != 0) {
      pvVar3 = (undefined *)F_00a03e20();
      F_00bb9d80(pvVar3,(int)pvVar3 + 0xc,*(undefined4 *)((int)this + 4));
      *(undefined * PTR32 *)((int)this + 4) = pvVar3;
    }
    F_00bb9d80(*(undefined * PTR32 *)((int)this + 4),(int)*(undefined * PTR32 *)((int)this + 4) + 0x10,uVar2);
    return uVar2;
  }
  if (*(int *)((int)pvVar3 + 0x10) == 0) {
    F_00bb9d80(pvVar3,(int)pvVar3 + 0x10,uVar2);
    return uVar2;
  }
  this_01 = (undefined *)F_00a03e20();
  if ((char)param_2 == '\x01') {
LAB_00b63b72: ;
    pvVar6 = *(undefined * PTR32 *)((int)pvVar3 + 4);
    if (pvVar6 == (undefined *)0x0) {
      *(undefined * PTR32 *)((int)this + 4) = this_01;
    }
    else {
      piVar5 = (int *)((int)pvVar6 + 0xc);
      if ((undefined *)*piVar5 != pvVar3) {
        piVar5 = (int *)((int)pvVar6 + 0x10);
      }
      F_00bb9d80(pvVar6,piVar5,this_01);
    }
    F_00bb9d80(this_01,(int)this_01 + 0xc,pvVar3);
    F_00bb9d80(this_01,(int)this_01 + 0x10,uVar2);
    return uVar2;
  }
  bVar1 = F_00b638a0(pvVar3,param_1);
  if (bVar1 != 0) goto LAB_00b63b72;
  bVar1 = F_00b638f0(*(undefined4 *)((int)pvVar3 + 0xc),param_1);
  if (bVar1 == 0) {
    uVar8 = *(undefined4 *)((int)pvVar3 + 0x10);
    iVar7 = (int)pvVar3 + 0x10;
  }
  else {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x10) + 0x10))))(*(int * PTR32 *)((int)pvVar3 + 0x10));
    if (uVar4 == 2) {
      this_00 = *(undefined * PTR32 *)((int)pvVar3 + 4);
      pvVar6 = this_01;
      if (this_00 == (undefined *)0x0) {
        iVar7 = (int)this_01 + 0xc;
        *(undefined * PTR32 *)((int)this + 4) = this_01;
      }
      else if (*(undefined * PTR32 *)((int)this_00 + 0xc) == pvVar3) {
        F_00bb9d80(this_00,(int *)((int)this_00 + 0xc),this_01);
        iVar7 = (int)this_01 + 0xc;
      }
      else {
        F_00bb9d80(this_00,(int)this_00 + 0x10,this_01);
        iVar7 = (int)this_01 + 0xc;
      }
      goto LAB_00b63b53;
    }
    uVar8 = *(undefined4 *)((int)pvVar3 + 0xc);
    iVar7 = (int)pvVar3 + 0xc;
  }
  F_00bb9d80(this_01,(int)this_01 + 0xc,uVar8);
  pvVar6 = pvVar3;
  pvVar3 = this_01;
LAB_00b63b53: ;
  F_00bb9d80(pvVar6,iVar7,pvVar3);
  F_00bb9d80(this_01,(int)this_01 + 0x10,uVar2);
  return uVar2;
}

/* ref: FUN_00b63c10 */
uint F_00b63c10(unsigned int gen_a0)
{
  GEN_ENTER(0xb63c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b64560(0,*(undefined4 *)((int)this + 4),this);
  return uVar1;
}

/* ref: FUN_00b63c30 */
uint F_00b63c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb63c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b645c0(param_1,param_2,0,*(undefined4 *)((int)this + 4),param_2);
  return uVar1;
}

/* ref: FUN_00b63c60 */
uint F_00b63c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb63c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00b64630(param_1,param_2,0,*(undefined4 *)((int)this + 4),param_3);
  return uVar1;
}

/* ref: FUN_00b63c90 */
byte F_00b63c90(unsigned int gen_a0)
{
  GEN_ENTER(0xb63c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00b646b0(*(int *)((int)this + 4),this);
    return 1 - (uVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00b63cc0 */
byte F_00b63cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xb63cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00b64730(*(int *)((int)this + 4),this);
    return 1 - (uVar1 != 0);
  }
  return 0;
}

/* ref: Client::System::Animation::AnimationTree::vf6 */
uint F_00b63cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = param_1;
  if (*(int *)(param_1 + 4) == 2) {
    this_00 = (undefined *)F_00b647b0(*(undefined4 *)(this + 4),param_1);
    uVar1 = 0;
    if (this_00 != (undefined *)0x0) {
      if (*(int *)((int)this_00 + 0x10) != 0) {
        F_00bba120(this_00);
      }
      uVar1 = F_00b639d0(this,this_00);
    }
  }
  return uVar1;
}

/* ref: FUN_00b63d30 */
uint F_00b63d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb63d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  bool bVar2;
  bool bVar3;
  byte * pbVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  undefined * pvVar8;
  uint uVar9;
  int * piVar10;
  float * pfVar11;
  int iVar12;
  int * piVar13;
  uint uVar14;
  int * piVar15;
  byte bVar16;
  uint uVar17;
  float10 fVar18;
  float fVar19;
  
  uVar14 = (*(uint *)&gen_args[1]);
  iVar12 = *(int *)((*(uint *)&gen_args[1]) + 0x18);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)&gen_args[1]) = 0;
  (*(float *)(gen_frame + 0xc)) = -NAN;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0xffffffff;
  fVar19 = (*(float *)(gen_frame + 0xc));
  if (iVar12 != 0) {
    uVar9 = *(uint *)(iVar12 + 0x74);
    if (uVar9 == 0) {
      piVar15 = *(int * PTR32 *)(iVar12 + 0x70);
      if (piVar15 == (int *)0x0) {
        iVar6 = *(int *)(iVar12 + 0x6c);
        if (iVar6 == 0) {
          if (*(int *)(iVar12 + 4) != 0) {
            *(undefined4 *)(iVar12 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(iVar12 + 4) + 4)));
          }
          iVar6 = *(int *)(iVar12 + 0x6c);
          if (iVar6 != 0) goto LAB_00b63d8a;
        }
        else {
LAB_00b63d8a: ;
          *(undefined4 *)(iVar12 + 0x70) = *(undefined4 *)(iVar6 + 4);
        }
        piVar15 = *(int * PTR32 *)(iVar12 + 0x70);
        if (piVar15 != (int *)0x0) goto LAB_00b63d97;
      }
      else {
LAB_00b63d97: ;
        uVar9 = ((code *)*(gen_code32 *)(*piVar15 + 100))(piVar15);
        *(uint *)(iVar12 + 0x74) = uVar9;
      }
      uVar9 = *(uint *)(iVar12 + 0x74);
    }
    uVar7 = *(uint *)(uVar9 + 0x240);
    uVar17 = uVar9;
    if (uVar7 != 0) {
      uVar17 = uVar7;
    }
    (*(float *)(gen_frame + 0xc)) = *(float *)(uVar9 + 0x94);
    if ((((uVar7 != 0) || (uVar7 = uVar9, uVar9 != 0)) && (*(int *)(uVar7 + 0xdc) != 0)) &&
       (iVar6 = *((int *)GEN_TOP((*(int *)(uVar7 + 0xdc) + 4))), iVar6 != 0)) {
      (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)(iVar6 + 0xfc);
    }
    fVar19 = (*(float *)(gen_frame + 0xc));
    (*(uint *)&gen_args[1]) = uVar9;
    if (uVar17 != 0) {
      fVar19 = *(float *)(uVar17 + 0x94);
    }
  }
  pvVar8 = (undefined *)F_00b63a60((*(undefined * PTR32 *)(gen_frame + 0x10)),(undefined4)gen_fl2bits(fVar19),(uint)(-1 < (int)(*(int * PTR32 *)(gen_frame + 0x18))));
  bVar5 = (byte)*(ushort *)(uVar14 + 0x12);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = pvVar8;
  (*(uint *)(gen_frame + 0x4)) = (uint)*(ushort *)(uVar14 + 0x15);
  if ((bVar5 >> 1 & 1) != 0) {
    (*(uint *)(gen_frame + 0x4)) = CONCAT22(1,*(ushort *)(uVar14 + 0x15));
  }
  if ((bVar5 >> 3 & 1) != 0) {
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) | 0x20000;
  }
  if ((bVar5 >> 6 & 1) != 0) {
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) | 0x40000;
  }
  if ((char)bVar5 < '\0') {
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) | 0x80000;
  }
  if ((bVar5 >> 4 & 1) == 0) {
    if ((bVar5 >> 5 & 1) == 0) {
      if ((*(ushort *)(uVar14 + 0x12) >> 8 & 1) != 0) {
        (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) | 0x400000;
      }
    }
    else {
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) | 0x200000;
    }
  }
  else {
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) | 0x100000;
  }
  *(undefined4 *)((int)pvVar8 + 0x28) = *(undefined4 *)(uVar14 + 0xc);
  *(uint *)((int)pvVar8 + 0x2c) = (*(uint *)(gen_frame + 0x4));
  *(int * PTR32 *)((int)pvVar8 + 0x24) = (*(int * PTR32 *)(gen_frame + 0x18));
  if (iVar12 != 0) {
    *(int *)((int)pvVar8 + 0x1c) = iVar12;
    *(uint *)(iVar12 + 0xb4) = (int)pvVar8 + 0xc;
  }
  piVar15 = *(int * PTR32 *)((int)pvVar8 + 4);
  if ((undefined *)piVar15[4] != pvVar8) {
    (*(int *)(gen_frame + 0x8)) = 0;
    if (((*(uint *)&gen_args[1]) == 0) || (bVar5 = F_00bcfe30((undefined *)(*(uint *)&gen_args[1]),&(*(int *)(gen_frame + 0x8))), bVar5 == 0)) {
      uVar9 = F_00a09f30(0,(uint)*(byte *)(uVar14 + 0x15),(uint)*(byte *)(uVar14 + 0x16));
      (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)(int)uVar9);
    }
    else {
      fVar18 = (float10)(*(int *)(gen_frame + 0x8));
      if ((*(int *)(gen_frame + 0x8)) < 0) {
        fVar18 = fVar18 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)fVar18);
    }
    if ((*(*(byte * PTR32 *)&gen_args[3]) & 1) != 0) {
      (*(uint *)&gen_args[1]) = 0;
    }
    bVar2 = true;
    goto LAB_00b64156;
  }
  piVar13 = (int *)piVar15[3];
  uVar9 = ((code *)*(gen_code32 *)(*piVar13 + 0x10))(piVar13);
  if (uVar9 == 1) {
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar13;
LAB_00b63f0e: ;
    if ((*(int * PTR32 *)(gen_frame + 0x18)) == (int *)0x0) goto LAB_00b63f14;
  }
  else {
    uVar9 = ((code *)*(gen_code32 *)(*piVar13 + 0x10))(piVar13);
    if (uVar9 != 0) goto LAB_00b63f14;
    piVar10 = (int *)F_00bb9d70(piVar13);
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar10;
    if (piVar10 == (int *)0x0) {
      piVar10 = (int *)F_00b64450(piVar13,(*(undefined * PTR32 *)&gen_args[2]));
      (*(int * PTR32 *)(gen_frame + 0x18)) = piVar10;
      goto LAB_00b63f0e;
    }
  }
  bVar5 = F_00b638f0(piVar13,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc))));
  piVar13 = (*(int * PTR32 *)(gen_frame + 0x18));
  bVar16 = (byte)*(undefined2 *)((int)(*(int * PTR32 *)(gen_frame + 0x18)) + 0x2e);
  (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 0)) = bVar5;
  (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),bVar5);
  if (((bVar16 >> 1 & 1) != 0) && ((*(byte *)(uVar14 + 0x12) >> 3 & 1) == 0)) {
LAB_00b63f14: ;
    F_00b639d0((*(undefined * PTR32 *)(gen_frame + 0x10)),pvVar8);
    return 0;
  }
  if (((bVar5 == 0) && (-1 < (*(int * PTR32 *)(gen_frame + 0x18))[9])) && ((*(int * PTR32 *)(gen_frame + 0x18))[9] == *(int *)((int)pvVar8 + 0x24))) {
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 0)) = 1;
    (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
  }
  fVar19 = 0.0;
  if (((*(byte *)(uVar14 + 0x12) & 1) != 0) || ((*(byte *)((int)(*(int * PTR32 *)(gen_frame + 0x18)) + 0x2e) & 1) != 0))
  goto LAB_00b640bb;
  if (((bVar16 >> 4 & 1) == 0) && ((*(byte *)(uVar14 + 0x12) >> 4 & 1) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((bVar16 >> 5 & 1) == 0) && ((*(byte *)(uVar14 + 0x12) >> 5 & 1) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((bVar5 != 1) || (bVar2)) || (bVar3)) || ((bVar16 >> 6 & 1) != 0)) {
    (*(float *)(gen_frame + 0xc)) = 0.0;
    if (bVar2) {
      iVar12 = (int)(*(undefined * PTR32 *)&gen_args[2]) + 0x30;
LAB_00b64055: ;
      if ((iVar12 == 0) || (*(int *)(iVar12 + 0x1c) != 0)) goto LAB_00b64074;
      fVar18 = (float10)*(int *)(iVar12 + 0x18);
      if (*(int *)(iVar12 + 0x18) < 0) {
        (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)(fVar18 + (float10)*(float *)&REFG(undefined, 0x1088110)));
        goto LAB_00b640c0;
      }
    }
    else {
      if (bVar3) {
        iVar12 = (int)(*(undefined * PTR32 *)&gen_args[2]) + 0x60;
        goto LAB_00b64055;
      }
LAB_00b64074: ;
      if (((*(uint *)&gen_args[1]) == 0) || (bVar5 = F_00bcfe30((undefined *)(*(uint *)&gen_args[1]),&(*(float *)(gen_frame + 0xc))), bVar5 == 0)) {
        uVar9 = F_00a09f30((int)(char)piVar13[0xb],(uint)*(byte *)(uVar14 + 0x15),
                             (uint)*(byte *)(uVar14 + 0x16));
        fVar19 = (float)(int)uVar9;
        goto LAB_00b640bb;
      }
      fVar18 = (float10)(int)gen_fl2bits((*(float *)(gen_frame + 0xc)));
      if ((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) < 0) {
        fVar18 = fVar18 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
    }
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)fVar18);
  }
  else {
    (*(float *)(gen_frame + 0xc)) = (float)(int)*(short *)(uVar14 + 0xc);
    fVar18 = (float10)(int)*(short *)(uVar14 + 0xc);
    if ((float10)(int)(short)(*(int * PTR32 *)(gen_frame + 0x18))[10] < fVar18) {
      (*(float *)(gen_frame + 0xc)) = 0.0;
      pfVar11 = (float *)&(*(uint *)&gen_args[1]);
      fVar1 = ((float)GEN_TOF((((float10)(int)*(short *)((int)(*(int * PTR32 *)(gen_frame + 0x18)) + 0x2a) +
                      (float10)(int)(short)(*(int * PTR32 *)(gen_frame + 0x18))[10]) - fVar18)));
      (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar1);
      if (!((float10)0 < (float10)fVar1)) {
        pfVar11 = &(*(float *)(gen_frame + 0xc));
      }
      (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(*pfVar11);
      if (!((float10)*pfVar11 <= (float10)*(float *)(uVar14 + 8))) goto LAB_00b640c0;
    }
LAB_00b640bb: ;
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar19);
  }
LAB_00b640c0: ;
  ((code *)*(gen_code32 *)(*piVar15 + 8))(piVar15,(*(uint *)&gen_args[1]));
  F_00bba140((*(int * PTR32 *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x8)),GEN_TOF(gen_bits2f((*(uint *)&gen_args[1]))),(int)*(char *)(uVar14 + 0x17));
  bVar2 = false;
LAB_00b64156: ;
  gen_piece_set(&(*(uint *)(gen_frame + 0x4)), 1, 3, (unsigned long long)((undefined3)((uint)((int)(uintptr_t)piVar15) >> 8)));
  (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),*(byte *)(uVar14 + 0x12) >> 2) & 0xffffff01;
  piVar13 = (int *)F_00bccc60((*(undefined * PTR32 *)&gen_args[2]),*(undefined4 *)(uVar14 + 0x1c),
                                *(undefined4 *)(uVar14 + 0x20),*(undefined4 *)(uVar14 + 0x24),
                                *(undefined4 *)(uVar14 + 0x28),(int)*(short *)(uVar14 + 0x10),
                                *(float *)uVar14,*(float *)(uVar14 + 4),(*(uint *)(gen_frame + 0x4)),GEN_TOF(gen_bits2f((*(uint *)&gen_args[1]))));
  if (piVar13 != (int *)0x0) {
    if (piVar13[6] != 0) {
      ((code *)*(gen_code32 *)(*piVar13 + 8))(piVar13);
      F_009f7c20(piVar13,&REFG(undefined, 0x1333238));
      pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x14));
      pbVar4 = (*(byte * PTR32 *)&gen_args[3]);
      if (bVar2) {
        if (((*(*(byte * PTR32 *)&gen_args[3]) & 1) == 0) &&
           ((GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[1]))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
            ((GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[1]))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ||
            gen_bits2f((*(uint *)&gen_args[1])) == *(float *)&REFG(undefined, 0x1088114)))) {
          fVar18 = (float10)0;
        }
        else {
          fVar18 = (float10)1;
        }
        F_009f6650(piVar13,(float)fVar18);
        if ((*pbVar4 & 2) != 0) {
          F_00bc4070((*(undefined * PTR32 *)&gen_args[2]),0xffffffff);
        }
        bVar5 = F_009f2f00(piVar13);
        if ((bVar5 == 0) && (*(float *)&REFG(undefined, 0x1088114) < gen_bits2f((*(uint *)&gen_args[1])))) {
          uVar14 = F_00a03ed0();
          pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x14));
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x38) = 0;
          F_00bb9d80(piVar15,piVar15 + 3,uVar14);
          F_00bb9d80(piVar15,piVar15 + 4,pvVar8);
          ((code *)*(gen_code32 *)(*piVar15 + 8))(piVar15,(*(uint *)&gen_args[1]));
        }
        else {
          F_00bb9c80(piVar15);
          pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x14));
        }
      }
      else if (0.0 < gen_bits2f((*(uint *)&gen_args[1]))) {
        *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x38) = 0;
        F_009f6650(piVar13,(float)(float10)0);
      }
      else {
        *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x38) = REFG(float, 0x1087f04);
      }
      *(int * PTR32 *)((int)pvVar8 + 0x10) = piVar13;
      F_00bba7e0(pvVar8,(*(undefined * PTR32 *)(gen_frame + 0x10)));
      return (uint)pvVar8;
    }
    ((code *)*(gen_code32 *)(*piVar13 + 0xc))(piVar13);
  }
  F_00b639d0((*(undefined * PTR32 *)(gen_frame + 0x10)),(*(undefined * PTR32 *)(gen_frame + 0x14)));
  return 0;
}

/* ref: FUN_00b642d0 */
uint F_00b642d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb642d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00b645c0(((byte *)(gen_frame + 0x8)),0x20,0,*(int *)((int)this + 4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 128)));
    iVar3 = 0;
    uVar2 = uVar1;
    if (0 < (int)uVar1) {
      do {
        uVar2 = F_00bba0e0(*(undefined * PTR32 *)(((byte *)(gen_frame + 0x8)) + iVar3 * 4));
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar1);
    }
  }
  return uVar2;
}

/* ref: FUN_00b64330 */
uint F_00b64330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b64340 */
byte F_00b64340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = F_00bba950(param_1,*(undefined4 *)this);
  return bVar1;
}

/* ref: FUN_00b64370 */
uint F_00b64370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b64380 */
byte F_00b64380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this == *(int *)(param_1 + 0x20);
}

/* ref: FUN_00b643a0 */
uint F_00b643a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb643a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b643b0 */
byte F_00b643b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb643b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(param_1 + 0xc);
  if (((piVar1 != (int *)0x0) && (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1), uVar2 == 1)) &&
     (*((int *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x20))) == *(int *)(*(int *)this + 0x20))) {
    return 1;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0x10);
  if (((piVar1 != (int *)0x0) && (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1), uVar2 == 1)) &&
     (*((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x20))) == *(int *)(*(int *)this + 0x20))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b64410 */
byte F_00b64410(unsigned int gen_a0)
{
  GEN_ENTER(0xb64410u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00bba1e0(param_1);
  return bVar1 == 0;
}

/* ref: FUN_00b64430 */
byte F_00b64430(unsigned int gen_a0)
{
  GEN_ENTER(0xb64430u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00bba210(param_1);
  return bVar1 == 0;
}

/* ref: FUN_00b64450 */
uint F_00b64450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64450u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  ((int *)(gen_frame + 0x4))[0] = *(int *)(param_1 + 0xc);
  ((int *)(gen_frame + 0x4))[1] = *(undefined4 *)(param_1 + 0x10);
  uVar3 = 0;
  do {
    piVar1 = (int *)((int *)(gen_frame + 0x4))[(int)(uVar3)];
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      if (uVar2 == 1) {
        return (uint)piVar1;
      }
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      if ((uVar2 == 0) && (uVar2 = F_00b64450((int)piVar1,param_2), uVar2 != 0)) {
        return uVar2;
      }
    }
    uVar3 = uVar3 + 1;
    if (1 < uVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b644c0 */
uint F_00b644c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb644c0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)(param_1 + 0xc);
  ((int * PTR32 *)(gen_frame + 0x4))[0] = piVar1;
  ((int * PTR32 *)(gen_frame + 0x4))[1] = (int *)*(undefined4 *)(param_1 + 0x10);
  if (((piVar1 != (int *)0x0) && (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1), uVar2 == 1)) &&
     (*((int *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x20))) == *(int *)(param_2 + 0x20))) {
    return param_1;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0x10);
  if (((piVar1 != (int *)0x0) && (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1), uVar2 == 1)) &&
     (*((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x20))) == *(int *)(param_2 + 0x20))) {
    return param_1;
  }
  uVar2 = 0;
  while (((piVar1 = ((int * PTR32 *)(gen_frame + 0x4))[(int)(uVar2)], piVar1 == (int *)0x0 ||
          (uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1), uVar3 != 0)) ||
         (uVar3 = F_00b644c0((uint)piVar1,param_2), uVar3 == 0))) {
    uVar2 = uVar2 + 1;
    if (1 < uVar2) {
      return 0;
    }
  }
  return uVar3;
}

/* ref: FUN_00b64560 */
uint F_00b64560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb64560u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  ((int *)(gen_frame + 0x4))[0] = *(int *)(param_2 + 0xc);
  ((int *)(gen_frame + 0x4))[1] = *(undefined4 *)(param_2 + 0x10);
  uVar4 = 0;
  uVar3 = param_1;
  do {
    piVar1 = (int *)((int *)(gen_frame + 0x4))[(int)(uVar4)];
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      if (uVar2 == 1) {
        uVar3 = uVar3 + 1;
      }
      else if (uVar2 == 0) {
        uVar3 = F_00b64560(uVar3,(int)piVar1,param_3);
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  return uVar3;
}

/* ref: FUN_00b645c0 */
uint F_00b645c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb645c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  ((int *)(gen_frame + 0x4))[0] = *(int *)(param_4 + 0xc);
  ((int *)(gen_frame + 0x4))[1] = *(undefined4 *)(param_4 + 0x10);
  uVar3 = 0;
  uVar4 = param_3;
  do {
    piVar1 = (int *)((int *)(gen_frame + 0x4))[(int)(uVar3)];
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      if (uVar2 == 1) {
        if ((int)uVar4 < param_2) {
          *(int * PTR32 *)(param_1 + uVar4 * 4) = piVar1;
          uVar4 = uVar4 + 1;
        }
      }
      else if (uVar2 == 0) {
        uVar4 = F_00b645c0(param_1,param_2,uVar4,(int)piVar1,param_5);
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  return uVar4;
}

/* ref: FUN_00b64630 */
uint F_00b64630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb64630u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  ((int *)(gen_frame + 0x4))[0] = *(int *)(param_4 + 0xc);
  ((int *)(gen_frame + 0x4))[1] = *(undefined4 *)(param_4 + 0x10);
  uVar3 = 0;
  uVar4 = param_3;
  do {
    piVar1 = (int *)((int *)(gen_frame + 0x4))[(int)(uVar3)];
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      if (uVar2 == 1) {
        if ((param_5 == piVar1[8]) && ((int)uVar4 < param_2)) {
          *(int * PTR32 *)(param_1 + uVar4 * 4) = piVar1;
          uVar4 = uVar4 + 1;
        }
      }
      else if (uVar2 == 0) {
        uVar4 = F_00b64630(param_1,param_2,uVar4,(int)piVar1,param_5);
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  return uVar4;
}

/* ref: FUN_00b646b0 */
uint F_00b646b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb646b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  ((undefined4 *)(gen_frame + 0x4))[0] = *(undefined4 *)(param_1 + 0xc);
  ((undefined4 *)(gen_frame + 0x4))[1] = *(undefined4 *)(param_1 + 0x10);
  uVar3 = 0;
  do {
    this = (int *)((undefined4 *)(gen_frame + 0x4))[(int)(uVar3)];
    if (this != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*this + 0x10))(this);
      if (uVar2 == 1) {
        bVar1 = F_00bba1e0(this);
        if (bVar1 == 0) {
          return (uint)this;
        }
      }
      else {
        uVar2 = ((code *)*(gen_code32 *)(*this + 0x10))(this);
        if ((uVar2 == 0) && (uVar2 = F_00b646b0((int)this,param_2), uVar2 != 0)) {
          return uVar2;
        }
      }
    }
    uVar3 = uVar3 + 1;
    if (1 < uVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b64730 */
uint F_00b64730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64730u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  ((undefined4 *)(gen_frame + 0x4))[0] = *(undefined4 *)(param_1 + 0xc);
  ((undefined4 *)(gen_frame + 0x4))[1] = *(undefined4 *)(param_1 + 0x10);
  uVar3 = 0;
  do {
    this = (int *)((undefined4 *)(gen_frame + 0x4))[(int)(uVar3)];
    if (this != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*this + 0x10))(this);
      if (uVar2 == 1) {
        bVar1 = F_00bba210(this);
        if (bVar1 == 0) {
          return (uint)this;
        }
      }
      else {
        uVar2 = ((code *)*(gen_code32 *)(*this + 0x10))(this);
        if ((uVar2 == 0) && (uVar2 = F_00b64730((int)this,param_2), uVar2 != 0)) {
          return uVar2;
        }
      }
    }
    uVar3 = uVar3 + 1;
    if (1 < uVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b647b0 */
uint F_00b647b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb647b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  ((undefined4 *)(gen_frame + 0x4))[0] = *(undefined4 *)(param_1 + 0xc);
  ((undefined4 *)(gen_frame + 0x4))[1] = *(undefined4 *)(param_1 + 0x10);
  uVar3 = 0;
  do {
    this = (int *)((undefined4 *)(gen_frame + 0x4))[(int)(uVar3)];
    if (this != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*this + 0x10))(this);
      if (uVar2 == 1) {
        bVar1 = F_00bba950(this,param_2);
        if (bVar1 != 0) {
          return (uint)this;
        }
      }
      else {
        uVar2 = ((code *)*(gen_code32 *)(*this + 0x10))(this);
        if ((uVar2 == 0) && (uVar2 = F_00b647b0((int)this,param_2), uVar2 != 0)) {
          return uVar2;
        }
      }
    }
    uVar3 = uVar3 + 1;
    if (1 < uVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b64850 */
uint F_00b64850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b644c0(*(undefined4 *)((int)this + 4),param_1);
  return uVar1;
}

/* ref: FUN_00b64870 */
uint F_00b64870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b64560(0,*(undefined4 *)((int)this + 4),param_1);
  return uVar1;
}

/* ref: FUN_00b64890 */
uint F_00b64890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb64890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00b645c0(param_1,param_2,0,*(undefined4 *)((int)this + 4),param_3);
  return uVar1;
}

/* ref: FUN_00b648c0 */
uint F_00b648c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb648c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00b64630(param_1,param_2,0,*(undefined4 *)((int)this + 4),param_3);
  return uVar1;
}

/* ref: FUN_00b648f0 */
uint F_00b648f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb648f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b646b0(*(undefined4 *)((int)this + 4),param_1);
  return uVar1;
}

/* ref: FUN_00b64910 */
uint F_00b64910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b64730(*(undefined4 *)((int)this + 4),param_1);
  return uVar1;
}

/* ref: FUN_00b64930 */
uint F_00b64930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b647b0(*(undefined4 *)((int)this + 4),param_1);
  return uVar1;
}

/* ref: Client::System::Animation::AnimationTree::vf0 */
uint F_00b64950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f37b4));
  if (*(int *)(this + 4) != 0) {
    F_00b636a0(this,*(int *)(this + 4));
    F_00a04250(*(undefined4 *)(this + 4));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10e1614));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b649c0 */
uint F_00b649c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb649c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b649d0 */
uint F_00b649d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb649d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00b649e0 */
uint F_00b649e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb649e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00b649f0 */
uint F_00b649f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb649f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00b64a00 */
uint F_00b64a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64a00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_00b64a60 */
unsigned int F_00b64a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb64a60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float * pfVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar5 = (float10)param_4;
  pfVar1 = *(float * PTR32 *)(param_1 + 8);
  iVar3 = 0;
  fVar4 = (float10)*pfVar1 + (float10)*(double *)&REFG(undefined, 0x108bec8);
  param_4 = 0.0;
  fVar5 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0xc) * fVar5)));
  if (fVar4 < fVar5) {
    do {
      iVar3 = iVar3 + 1;
      param_4 = (float)fVar4;
      fVar4 = (float10)pfVar1[iVar3 * *(int *)(param_1 + 0x14)] + (float10)param_4;
    } while ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar4)) && !(fVar5 <= fVar4));
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar3 < iVar2 + -1) {
    *param_2 = ((float)GEN_TOF(((float10)(float)(fVar5 - (float10)param_4) /
                      (float10)pfVar1[iVar3 * *(int *)(param_1 + 0x14)])));
    *param_3 = iVar3;
    return 0;
  }
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1087f04));
  *param_3 = iVar2 + -2;
  return 0;
}

/* ref: FUN_00b64b10 */
float F_00b64b10(unsigned int gen_a0)
{
  GEN_ENTER(0xb64b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float * pfVar5;
  uint uVar6;
  int iVar7;
  float * pfVar8;
  float * local_10;
  float * local_c;
  float local_8;
  
  uVar3 = *(uint *)((int)this + 0x10);
  iVar4 = *(int *)((int)this + 0x14);
  uVar6 = 0;
  local_8 = 0.0;
  if (3 < (int)uVar3) {
    pfVar8 = *(float * PTR32 *)((int)this + 8);
    pfVar5 = pfVar8 + iVar4;
    iVar7 = (uVar3 - 4 >> 2) + 1;
    uVar6 = iVar7 * 4;
    local_10 = pfVar8 + iVar4 * 3;
    local_c = pfVar8 + iVar4 * 2;
    do {
      fVar1 = *pfVar8;
      pfVar8 = pfVar8 + iVar4 * 4;
      fVar2 = *pfVar5;
      pfVar5 = pfVar5 + iVar4 * 4;
      iVar7 = iVar7 + -1;
      local_8 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 +
                                                                          (float10)local_8) +
                                                         (float10)fVar2))) + (float10)*local_c))) +
                       (float10)*local_10)));
      local_10 = local_10 + iVar4 * 4;
      local_c = local_c + iVar4 * 4;
    } while (iVar7 != 0);
  }
  if (uVar6 < uVar3) {
    pfVar5 = ((float *)GEN_TOP((*(int *)((int)this + 8) + uVar6 * iVar4 * 4)));
    iVar7 = uVar3 - uVar6;
    do {
      fVar1 = *pfVar5;
      pfVar5 = pfVar5 + iVar4;
      iVar7 = iVar7 + -1;
      local_8 = (float)((float10)fVar1 + (float10)local_8);
    } while (iVar7 != 0);
  }
  return local_8;
}

/* ref: FUN_00b64bd0 */
uint F_00b64bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64bd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x14) * param_2;
}

/* ref: FUN_00b64bf0 */
float F_00b64bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb64bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float * pfVar7;
  float * pfVar8;
  uint uVar9;
  float * local_c;
  float local_8;
  
  iVar3 = *(int *)((int)this + 0x14);
  local_8 = 0.0;
  if (param_1 < param_2) {
    uVar9 = (uint)param_1;
    if (3 < (int)(param_2 - (int)param_1)) {
      iVar4 = *(int *)((int)this + 8);
      pfVar8 = (float *)(iVar4 + iVar3 * (int)((int)(uintptr_t)param_1) * 4);
      iVar6 = (int)param_1 + 3;
      pfVar7 = ((float *)GEN_TOP((iVar4 + ((int)param_1 + 1U) * iVar3 * 4)));
      iVar5 = ((param_2 - (int)param_1) - 4 >> 2) + 1;
      uVar9 = (int)param_1 + iVar5 * 4;
      param_1 = ((float *)GEN_TOP((iVar4 + ((int)param_1 + 2U) * iVar3 * 4)));
      local_c = (float *)(iVar4 + iVar6 * iVar3 * 4);
      do {
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + iVar3 * 4;
        fVar2 = *pfVar7;
        pfVar7 = pfVar7 + iVar3 * 4;
        iVar5 = iVar5 + -1;
        local_8 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 +
                                                                            (float10)local_8) +
                                                           (float10)fVar2))) + (float10)*param_1))) +
                         (float10)*local_c)));
        param_1 = param_1 + iVar3 * 4;
        local_c = local_c + iVar3 * 4;
      } while (iVar5 != 0);
    }
    if (uVar9 < param_2) {
      pfVar8 = ((float *)GEN_TOP((*(int *)((int)this + 8) + uVar9 * iVar3 * 4)));
      iVar6 = param_2 - uVar9;
      do {
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + iVar3;
        iVar6 = iVar6 + -1;
        local_8 = (float)((float10)fVar1 + (float10)local_8);
      } while (iVar6 != 0);
    }
  }
  return local_8;
}

/* ref: FUN_00b64d50 */
uint F_00b64d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return *(uint *)((int)this + 4);
}

/* ref: FUN_00b64d70 */
float F_00b64d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb64d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  
  fVar1 = F_00b64bf0(*(undefined * PTR32 *)((int)this + 4),param_1,param_2);
  return fVar1;
}

/* ref: FUN_00b64d80 */
uint F_00b64d80(unsigned int gen_a0)
{
  GEN_ENTER(0xb64d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00406ad0(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  return uVar1;
}

/* ref: FUN_00b64dd0 */
unsigned int F_00b64dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb64dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  int local_1c;
  uint local_18;
  
  iVar1 = *(int *)((int)this + 0x14);
  iVar5 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_18 = 0;
  if (*(int *)((int)this + 0x10) != 1) {
    iVar3 = iVar1 * 0x10;
    local_1c = 0;
    iVar4 = iVar3;
    do {
      iVar2 = *(int *)this;
      fVar6 = (float10)((float)GEN_TOF(((float10)*(float *)(iVar5 + 4 + iVar2) -
                              (float10)*(float *)(iVar4 + 4 + iVar2))));
      fVar7 = (float10)((float)GEN_TOF(((float10)*(float *)(iVar5 + iVar2) -
                              (float10)*(float *)(iVar4 + iVar2))));
      fVar8 = (float10)((float)GEN_TOF(((float10)*(float *)(iVar5 + 8 + iVar2) -
                              (float10)*(float *)(iVar4 + 8 + iVar2))));
      local_18 = local_18 + 1;
      *((float *)GEN_TOP((local_1c + *(int *)((int)this + 8)))) =
           ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar8 * fVar8 + (fVar7 * fVar7 + fVar6 * fVar6)))))));
      iVar4 = iVar4 + iVar3;
      iVar5 = iVar5 + iVar3;
      *(float *)((int)this + 0xc) =
           ((float)GEN_TOF(((float10)*((float *)GEN_TOP((local_1c + *(int *)((int)this + 8)))) +
                  (float10)*(float *)((int)this + 0xc))));
      local_1c = local_1c + iVar1 * 4;
    } while (local_18 < *(int *)((int)this + 0x10) - 1U);
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + (*(int *)((int)this + 0x10) + -1) * iVar1 * 4))) = 0;
  return 0;
}

/* ref: FUN_00b64ec0 */
uint F_00b64ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb64ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  float fVar1;
  float fVar2;
  int iVar3;
  float * pfVar4;
  float * pfVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float local_30;
  float local_2c;
  float local_28;
  
  iVar3 = *(int *)((int)this + 0x14);
  if (*(char *)((int)this + 0x18) == '\0') {
    iVar6 = param_2 + 1;
  }
  else if (param_2 < *(int *)((int)this + 0x10) + -2) {
    iVar6 = param_2 + 1;
  }
  else {
    iVar6 = 0;
  }
  fVar1 = *((float *)GEN_TOP((*(int *)((int)this + 8) + iVar3 * param_2 * 4)));
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
    pfVar5 = (float *)(iVar3 * param_2 * 0x10 + *(int *)this);
    pfVar4 = (float *)(iVar6 * iVar3 * 0x10 + *(int *)this);
    fVar7 = (float10)*(double *)&REFG(undefined, 0x10944e0);
    fVar8 = (float10)fVar1;
    local_30 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)*pfVar4 - (float10)*pfVar5) *
                                       fVar7))) / fVar8)));
    local_2c = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)pfVar4[1] - (float10)pfVar5[1]) *
                                       fVar7))) / fVar8)));
    local_28 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar7 * (float10)(float)((float10)pfVar4[2] -
                                                                (float10)pfVar5[2])))) / fVar8)));
  }
  else {
    local_30 = REFG(float, 0x1375ac0);
    local_2c = REFG(float, 0x1375ac4);
    local_28 = REFG(float, 0x1375ac8);
  }
  pfVar4 = ((float *)GEN_TOP((iVar6 * iVar3 * 0x10 + *(int *)((int)this + 4))));
  fVar1 = pfVar4[1];
  fVar2 = pfVar4[2];
  fVar7 = (float10)REFG(double, 0x1088108);
  *param_1 = ((float)GEN_TOF(((float10)(float)((float10)local_30 - (float10)*pfVar4) * fVar7)));
  param_1[1] = ((float)GEN_TOF(((float10)(float)((float10)local_2c - (float10)fVar1) * fVar7)));
  param_1[2] = ((float)GEN_TOF((fVar7 * (float10)(float)((float10)local_28 - (float10)fVar2))));
  return (uint)param_1;
}

/* ref: FUN_00b65020 */
uint F_00b65020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb65020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float * pfVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float local_30;
  float local_2c;
  float local_28;
  
  if (*(char *)((int)this + 0x18) == '\0') {
    iVar4 = param_2 + -1;
  }
  else if (param_2 < 1) {
    iVar4 = *(int *)((int)this + 0x10) + -2;
  }
  else {
    iVar4 = param_2 + -1;
  }
  iVar4 = iVar4 * *(int *)((int)this + 0x14);
  fVar1 = *((float *)GEN_TOP((*(int *)((int)this + 8) + iVar4 * 4)));
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
    iVar6 = *(int *)((int)this + 0x14) * param_2;
    iVar3 = *(int *)this;
    fVar7 = (float10)*(double *)&REFG(undefined, 0x10944e0);
    fVar8 = (float10)fVar1;
    local_30 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(iVar3 + iVar6 * 0x10) -
                                                        (float10)*(float *)(iVar3 + iVar4 * 0x10)))) *
                                       fVar7))) / fVar8)));
    local_2c = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(iVar3 + 4 +
                                                                            iVar6 * 0x10) -
                                                        (float10)*(float *)(iVar3 + 4 + iVar4 * 0x10
                                                                           )))) * fVar7))) / fVar8)));
    local_28 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar7 * (float10)((float)GEN_TOF(((float10)*(float *)(iVar3 + 8 +
                                                                                    iVar6 * 0x10) -
                                                                (float10)*(float *)(iVar3 + 8 +
                                                                                   iVar4 * 0x10))))))) /
                      fVar8)));
  }
  else {
    local_30 = REFG(float, 0x1375ac0);
    local_2c = REFG(float, 0x1375ac4);
    local_28 = REFG(float, 0x1375ac8);
  }
  pfVar5 = ((float *)GEN_TOP((iVar4 * 0x10 + *(int *)((int)this + 4))));
  fVar1 = pfVar5[1];
  fVar2 = pfVar5[2];
  fVar7 = (float10)REFG(double, 0x1088108);
  *param_1 = ((float)GEN_TOF(((float10)(float)((float10)local_30 - (float10)*pfVar5) * fVar7)));
  param_1[1] = ((float)GEN_TOF(((float10)(float)((float10)local_2c - (float10)fVar1) * fVar7)));
  param_1[2] = ((float)GEN_TOF((fVar7 * (float10)(float)((float10)local_28 - (float10)fVar2))));
  return (uint)param_1;
}

/* ref: FUN_00b65190 */
float F_00b65190(unsigned int gen_a0)
{
  GEN_ENTER(0xb65190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * pfVar1;
  float fVar2;
  float * pfVar3;
  float * pfVar4;
  int local_18;
  float local_14;
  
  local_18 = *(int *)((int)this + 0x10) + -1;
  local_14 = 0.0;
  if (local_18 != 0) {
    pfVar4 = *(float * PTR32 *)this;
    pfVar3 = pfVar4;
    do {
      pfVar3 = pfVar3 + *(int *)((int)this + 0x14) * 4;
      fVar2 = *pfVar4;
      pfVar1 = pfVar4 + 2;
      pfVar4 = pfVar4 + *(int *)((int)this + 0x14) * 4;
      local_18 = local_18 + -1;
      local_14 = ((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((((float10)(float)((float10)fVar2 -
                                                                                (float10)*pfVar3) *
                                                                (float10)(float)((float10)fVar2 -
                                                                                (float10)*pfVar3) +
                                                               (float10)0.0) +
                                                              (float10)(float)((float10)*pfVar1 -
                                                                              (float10)pfVar3[2]) *
                                                              (float10)(float)((float10)*pfVar1 -
                                                                              (float10)pfVar3[2])))))))
                        + (float10)local_14)));
    } while (local_18 != 0);
  }
  return local_14;
}

/* ref: FUN_00b652b0 */
float F_00b652b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb652b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float * pfVar6;
  float * pfVar7;
  int local_18;
  float local_14;
  
  iVar5 = *(int *)((int)this + 0x14);
  local_14 = 0.0;
  if (param_1 < param_2) {
    pfVar7 = (float *)(iVar5 * param_1 * 0x10 + *(int *)this);
    pfVar6 = ((float *)GEN_TOP(((param_1 + 1) * iVar5 * 0x10 + *(int *)this)));
    local_18 = param_2 - param_1;
    do {
      fVar3 = *pfVar7;
      fVar4 = *pfVar6;
      pfVar1 = pfVar7 + 2;
      pfVar2 = pfVar6 + 2;
      pfVar6 = pfVar6 + iVar5 * 4;
      pfVar7 = pfVar7 + iVar5 * 4;
      local_18 = local_18 + -1;
      local_14 = ((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((((float10)(float)((float10)fVar3 -
                                                                                (float10)fVar4) *
                                                                (float10)(float)((float10)fVar3 -
                                                                                (float10)fVar4) +
                                                               (float10)0.0) +
                                                              (float10)(float)((float10)*pfVar1 -
                                                                              (float10)*pfVar2) *
                                                              (float10)(float)((float10)*pfVar1 -
                                                                              (float10)*pfVar2))))))) +
                        (float10)local_14)));
    } while (local_18 != 0);
  }
  return local_14;
}

/* ref: FUN_00b65370 */
uint F_00b65370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xb65370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = param_1;
  ((undefined4 *)(gen_frame + 0x80))[0] = *param_2;
  ((undefined4 *)(gen_frame + 0x80))[1] = param_2[1];
  (*(undefined4 *)(gen_frame + 0x90)) = *param_4;
  ((undefined4 *)(gen_frame + 0x80))[2] = param_2[2];
  (*(undefined4 *)(gen_frame + 0x94)) = param_4[1];
  ((undefined4 *)(gen_frame + 0x80))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x80))[3], REFG(float, 0x1087f04));
  (*(undefined4 *)(gen_frame + 0x9c)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0xa0)) = *param_3;
  (*(undefined4 *)(gen_frame + 0xa4)) = param_3[1];
  (*(undefined4 *)(gen_frame + 0x98)) = param_4[2];
  (*(undefined4 *)(gen_frame + 0xb0)) = *param_5;
  (*(undefined4 *)(gen_frame + 0xa8)) = param_3[2];
  (*(undefined4 *)(gen_frame + 0xb4)) = param_5[1];
  (*(undefined4 *)(gen_frame + 0xac)) = 0;
  (*(undefined4 *)(gen_frame + 0xb8)) = param_5[2];
  (*(undefined4 *)(gen_frame + 0xbc)) = 0;
  puVar4 = (undefined4 *)F_004f0e10(((undefined1 *)(gen_frame + 0x40)),0x133d0a0,(uint)((undefined4 *)(gen_frame + 0x80)));
  fVar7 = (float10)param_6;
  puVar5 = ((undefined4 *)(gen_frame + 0x80));
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((fVar7 * (fVar7 * fVar7))));
  (*(float *)(gen_frame + 0x14)) = (float)(fVar7 * fVar7);
  (*(float *)(gen_frame + 0x18)) = param_6;
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
  puVar4 = (undefined4 *)F_004eede0(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)),((undefined4 *)(gen_frame + 0x80)));
  uVar1 = puVar4[1];
  (*(undefined4 *)(gen_frame + 0x20)) = *puVar4;
  uVar2 = puVar4[2];
  (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
  uVar3 = puVar4[3];
  puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
  *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = *puVar4;
  (*(undefined4 *)(gen_frame + 0x28)) = uVar2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1] = uVar1;
  (*(undefined4 *)(gen_frame + 0x2c)) = uVar3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2] = uVar2;
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return (uint)puVar5;
}

/* ref: FUN_00b65520 */
uint F_00b65520(unsigned int gen_a0)
{
  GEN_ENTER(0xb65520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f37dc));
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00406ad0(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  return uVar1;
}

/* ref: FUN_00b65550 */
float * F_00b65550(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb65550u, gen_a0, gen_a1, 0u, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float * pfVar1;
  float * pfVar2;
  float10 fVar3;
  float10 fVar4;
  
  pfVar1 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1,((undefined1 *)(gen_frame + 0x10)),param_4 + 1)));
  pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1,((undefined1 *)(gen_frame + 0x0)),param_4)));
  (*(float *)(gen_frame + 0x2c)) = *pfVar2;
  fVar3 = (float10)*pfVar2;
  fVar4 = (float10)param_3;
  *param_2 = ((float)GEN_TOF((fVar4 * ((float10)*pfVar1 - fVar3) + fVar3)));
  (*(float *)(gen_frame + 0x2c)) = pfVar2[1];
  fVar3 = (float10)pfVar2[1];
  param_2[1] = ((float)GEN_TOF((fVar3 + fVar4 * ((float10)pfVar1[1] - fVar3))));
  (*(float *)(gen_frame + 0x2c)) = pfVar2[2];
  fVar3 = (float10)pfVar2[2];
  param_2[2] = ((float)GEN_TOF((fVar3 + ((float10)pfVar1[2] - fVar3) * fVar4)));
  return param_2;
}

/* ref: FUN_00b655f0 */
float F_00b655f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb655f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  uint uVar2;
  float * pfVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  (*(float *)(gen_frame + 0x3c)) = 0.0;
  iVar4 = 0;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (uVar2 != 1 && -1 < (int)(uVar2 - 1)) {
    do {
      pfVar3 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x10)),iVar4)));
      iVar4 = iVar4 + 1;
      (*(float * PTR32 *)(gen_frame + 0x38)) = pfVar3;
      pfVar3 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x0)),iVar4)));
      (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar3 - (float10)*(*(float * PTR32 *)(gen_frame + 0x38)));
      (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar3[1] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[1]);
      (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar3[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[2]);
      fVar5 = (float10)(float)((float10)pfVar3[1] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[1]);
      fVar6 = (float10)(float)((float10)*pfVar3 - (float10)*(*(float * PTR32 *)(gen_frame + 0x38)));
      fVar7 = (float10)(float)((float10)pfVar3[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[2]);
      fVar1 = ((float)GEN_TOF((fVar7 * fVar7 + (fVar6 * fVar6 + fVar5 * fVar5))));
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar1)));
      fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar1)));
      (*(float *)(gen_frame + 0x3c)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x3c)));
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    } while (iVar4 < (int)(uVar2 - 1));
  }
  return (*(float *)(gen_frame + 0x3c));
}

/* ref: FUN_00b656b0 */
float F_00b656b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb656b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float * pfVar2;
  float * pfVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x10)),param_1)));
  pfVar3 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x0)),param_1 + 1)));
  (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar3 - (float10)*pfVar2);
  (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar3[1] - (float10)pfVar2[1]);
  (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar3[2] - (float10)pfVar2[2]);
  fVar4 = (float10)(float)((float10)pfVar3[1] - (float10)pfVar2[1]);
  fVar5 = (float10)(float)((float10)*pfVar3 - (float10)*pfVar2);
  fVar6 = (float10)(float)((float10)pfVar3[2] - (float10)pfVar2[2]);
  fVar1 = ((float)GEN_TOF((fVar6 * fVar6 + (fVar5 * fVar5 + fVar4 * fVar4))));
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  return fVar1;
}

/* ref: FUN_00b65740 */
float F_00b65740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb65740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float * pfVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  (*(float *)(gen_frame + 0x3c)) = 0.0;
  iVar3 = param_1;
  while (iVar3 < param_2) {
    pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x10)),iVar3)));
    iVar3 = iVar3 + 1;
    (*(float * PTR32 *)(gen_frame + 0x38)) = pfVar2;
    pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x0)),iVar3)));
    (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar2 - (float10)*(*(float * PTR32 *)(gen_frame + 0x38)));
    (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar2[1] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[1]);
    (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar2[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[2]);
    fVar4 = (float10)(float)((float10)pfVar2[1] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[1]);
    fVar5 = (float10)(float)((float10)*pfVar2 - (float10)*(*(float * PTR32 *)(gen_frame + 0x38)));
    fVar6 = (float10)(float)((float10)pfVar2[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[2]);
    fVar1 = ((float)GEN_TOF((fVar6 * fVar6 + (fVar5 * fVar5 + fVar4 * fVar4))));
    (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar1)));
    fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
    (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar1)));
    (*(float *)(gen_frame + 0x3c)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x3c)));
  }
  return (*(float *)(gen_frame + 0x3c));
}

/* ref: FUN_00b657f0 */
float F_00b657f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb657f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  uint uVar2;
  float * pfVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  (*(float *)(gen_frame + 0x3c)) = 0.0;
  iVar4 = 0;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (uVar2 != 1 && -1 < (int)(uVar2 - 1)) {
    (*(double *)(gen_frame + 0x30)) = 0.0;
    do {
      pfVar3 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x10)),iVar4)));
      iVar4 = iVar4 + 1;
      (*(float * PTR32 *)(gen_frame + 0x38)) = pfVar3;
      pfVar3 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x0)),iVar4)));
      (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar3 - (float10)*(*(float * PTR32 *)(gen_frame + 0x38)));
      (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar3[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[2]);
      fVar5 = (float10)(float)((float10)*pfVar3 - (float10)*(*(float * PTR32 *)(gen_frame + 0x38)));
      fVar6 = (float10)(float)((float10)pfVar3[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[2]);
      fVar1 = ((float)GEN_TOF(((fVar5 * fVar5 + (float10)(*(double *)(gen_frame + 0x30))) + fVar6 * fVar6)));
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar1)));
      fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar1)));
      (*(float *)(gen_frame + 0x3c)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x3c)));
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    } while (iVar4 < (int)(uVar2 - 1));
  }
  return (*(float *)(gen_frame + 0x3c));
}

/* ref: FUN_00b658b0 */
float F_00b658b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb658b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float * pfVar2;
  float * pfVar3;
  float10 fVar4;
  float10 fVar5;
  
  pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x10)),param_1)));
  pfVar3 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x0)),param_1 + 1)));
  (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar3 - (float10)*pfVar2);
  (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar3[2] - (float10)pfVar2[2]);
  fVar4 = (float10)(float)((float10)*pfVar3 - (float10)*pfVar2);
  fVar5 = (float10)(float)((float10)pfVar3[2] - (float10)pfVar2[2]);
  fVar1 = ((float)GEN_TOF((fVar5 * fVar5 + ((float10)0 * (float10)0 + fVar4 * fVar4))));
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  return fVar1;
}

/* ref: FUN_00b65940 */
float F_00b65940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb65940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float * pfVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  (*(float *)(gen_frame + 0x3c)) = 0.0;
  if (param_1 < param_2) {
    (*(double *)(gen_frame + 0x30)) = 0.0;
    iVar3 = param_1;
    do {
      pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x10)),iVar3)));
      iVar3 = iVar3 + 1;
      (*(float * PTR32 *)(gen_frame + 0x38)) = pfVar2;
      pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x0)),iVar3)));
      (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar2 - (float10)*(*(float * PTR32 *)(gen_frame + 0x38)));
      (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar2[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[2]);
      fVar4 = (float10)(float)((float10)*pfVar2 - (float10)*(*(float * PTR32 *)(gen_frame + 0x38)));
      fVar5 = (float10)(float)((float10)pfVar2[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[2]);
      fVar1 = ((float)GEN_TOF(((fVar4 * fVar4 + (float10)(*(double *)(gen_frame + 0x30))) + fVar5 * fVar5)));
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar1)));
      fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar1)));
      (*(float *)(gen_frame + 0x3c)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x3c)));
    } while (iVar3 < param_2);
  }
  return (*(float *)(gen_frame + 0x3c));
}

/* ref: FUN_00b65a00 */
float F_00b65a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb65a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar1 = **(int * PTR32 *)((int)this + 4);
  iVar3 = (*(int * PTR32 *)((int)this + 4))[5];
  iVar2 = (param_1 + 1) * iVar3;
  iVar3 = iVar3 * param_1;
  fVar4 = (float10)((float)GEN_TOF(((float10)*(float *)(iVar1 + iVar3 * 0x10) -
                          (float10)*(float *)(iVar1 + iVar2 * 0x10))));
  fVar5 = (float10)((float)GEN_TOF(((float10)*(float *)(iVar1 + 8 + iVar3 * 0x10) -
                          (float10)*(float *)(iVar1 + 8 + iVar2 * 0x10))));
  return ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar5 * fVar5 + ((float10)0 * (float10)0 + fVar4 * fVar4)))))));
}

/* ref: FUN_00b65a80 */
float F_00b65a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb65a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  
  fVar1 = F_00b652b0(*(undefined * PTR32 *)((int)this + 4),param_1,param_2);
  return fVar1;
}

/* ref: FUN_00b65a90 */
uint F_00b65a90(unsigned int gen_a0)
{
  GEN_ENTER(0xb65a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  (*(int * PTR32 *)(gen_frame + 0xa8)) = this;
  F_00b64dd0(this);
  uVar8 = *(uint *)((int)this + 0x14);
  iVar9 = *(int *)((int)this + 0x10);
  (*(uint *)(gen_frame + 0xa0)) = uVar8;
  if (*(char *)((int)this + 0x18) != '\0') {
    (*(uint *)(gen_frame + 0xac)) = 0;
    if (iVar9 != 1) {
      iVar10 = 0;
      (*(int *)(gen_frame + 0x98)) = uVar8 << 4;
      do {
        if ((*(uint *)(gen_frame + 0xac)) < iVar9 - 2U) {
          iVar6 = (*(uint *)(gen_frame + 0xac)) + 1;
        }
        else {
          iVar6 = 0;
        }
        if ((*(uint *)(gen_frame + 0xac)) == 0) {
          (*(uint *)(gen_frame + 0xa4)) = iVar9 - 2U;
        }
        else {
          (*(uint *)(gen_frame + 0xa4)) = (*(uint *)(gen_frame + 0xac)) - 1;
        }
        iVar6 = iVar6 * (*(uint *)(gen_frame + 0xa0));
        iVar9 = *(int *)this;
        fVar1 = ((float)GEN_TOF(((float10)*(float *)(iVar9 + iVar6 * 0x10) -
                       (float10)*(float *)(iVar9 + iVar10))));
        (*(float *)(gen_frame + 0x70)) = fVar1;
        fVar2 = ((float)GEN_TOF(((float10)*(float *)(iVar9 + 4 + iVar6 * 0x10) -
                       (float10)*(float *)(iVar9 + 4 + iVar10))));
        (*(float *)(gen_frame + 0x74)) = fVar2;
        fVar3 = ((float)GEN_TOF(((float10)*(float *)(iVar9 + 8 + iVar6 * 0x10) -
                       (float10)*(float *)(iVar9 + 8 + iVar10))));
        (*(float *)(gen_frame + 0x78)) = fVar3;
        (*(float *)(gen_frame + 0x50)) = fVar1;
        (*(float *)(gen_frame + 0x54)) = fVar2;
        (*(float *)(gen_frame + 0x58)) = fVar3;
        F_005fe2e0(&(*(float *)(gen_frame + 0x30)),(uint)&(*(float *)(gen_frame + 0x50)));
        iVar6 = (*(uint *)(gen_frame + 0xa4)) * (*(uint *)(gen_frame + 0xa0));
        fVar1 = ((float)GEN_TOF(((float10)*(float *)(iVar9 + iVar6 * 0x10) -
                       (float10)*(float *)(iVar9 + iVar10))));
        (*(float *)(gen_frame + 0x80)) = fVar1;
        fVar2 = ((float)GEN_TOF(((float10)*(float *)(iVar9 + 4 + iVar6 * 0x10) -
                       (float10)*(float *)(iVar9 + 4 + iVar10))));
        (*(float *)(gen_frame + 0x84)) = fVar2;
        fVar3 = ((float)GEN_TOF(((float10)*(float *)(iVar9 + 8 + iVar6 * 0x10) -
                       (float10)*(float *)(iVar9 + 8 + iVar10))));
        (*(float *)(gen_frame + 0x88)) = fVar3;
        (*(float *)(gen_frame + 0x20)) = fVar1;
        (*(float *)(gen_frame + 0x24)) = fVar2;
        (*(float *)(gen_frame + 0x28)) = fVar3;
        F_005fe2e0(&(*(float *)(gen_frame + 0x10)),(uint)&(*(float *)(gen_frame + 0x20)));
        (*(float *)(gen_frame + 0x60)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x10)));
        (*(float *)(gen_frame + 0x64)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x14)));
        (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x18)));
        (*(float *)(gen_frame + 0x40)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x10)));
        (*(float *)(gen_frame + 0x44)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x14)));
        (*(float *)(gen_frame + 0x48)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x18)));
        F_005fe2e0(&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x40)));
        iVar9 = (*(int * PTR32 *)(gen_frame + 0xa8))[1];
        *(float *)(iVar9 + iVar10) = (*(float *)(gen_frame + 0x0));
        *(float *)(iVar9 + 4 + iVar10) = (*(float *)(gen_frame + 0x4));
        *(float *)(iVar9 + 8 + iVar10) = (*(float *)(gen_frame + 0x8));
        iVar9 = (*(int * PTR32 *)(gen_frame + 0xa8))[4];
        uVar7 = (*(uint *)(gen_frame + 0xac)) + 1;
        iVar10 = iVar10 + (*(int *)(gen_frame + 0x98));
        (*(uint *)(gen_frame + 0xac)) = uVar7;
        uVar8 = (*(uint *)(gen_frame + 0xa0));
        this = (*(int * PTR32 *)(gen_frame + 0xa8));
      } while (uVar7 < iVar9 - 1U);
    }
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    iVar9 = (*(int *)((int)this + 0x10) + -1) * uVar8;
    puVar5[iVar9 * 4] = *puVar5;
    puVar5[iVar9 * 4 + 1] = puVar5[1];
    puVar5[iVar9 * 4 + 2] = puVar5[2];
    return uVar8;
  }
  (*(uint *)(gen_frame + 0xa4)) = 1;
  if (1 < iVar9 - 1U) {
    iVar9 = uVar8 << 4;
    (*(int *)(gen_frame + 0x9c)) = uVar8 << 5;
    (*(int *)(gen_frame + 0x98)) = iVar9;
    (*(uint *)(gen_frame + 0xac)) = 0;
    do {
      iVar10 = *(int *)this;
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(iVar10 + (*(int *)(gen_frame + 0x9c))) - (float10)*(float *)(iVar10 + iVar9))));
      (*(float *)(gen_frame + 0x60)) = fVar1;
      fVar2 = ((float)GEN_TOF(((float10)*(float *)(iVar10 + 4 + (*(int *)(gen_frame + 0x9c))) -
                     (float10)*(float *)(iVar10 + 4 + iVar9))));
      (*(float *)(gen_frame + 0x64)) = fVar2;
      fVar3 = ((float)GEN_TOF(((float10)*(float *)(iVar10 + 8 + (*(int *)(gen_frame + 0x9c))) -
                     (float10)*(float *)(iVar10 + 8 + iVar9))));
      (*(float *)(gen_frame + 0x68)) = fVar3;
      (*(float *)(gen_frame + 0x0)) = fVar1;
      (*(float *)(gen_frame + 0x4)) = fVar2;
      (*(float *)(gen_frame + 0x8)) = fVar3;
      F_005fe2e0(&(*(float *)(gen_frame + 0x10)),(uint)&(*(float *)(gen_frame + 0x0)));
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(iVar10 + (*(uint *)(gen_frame + 0xac))) - (float10)*(float *)(iVar10 + iVar9))));
      (*(float *)(gen_frame + 0x80)) = fVar1;
      fVar2 = ((float)GEN_TOF(((float10)*(float *)(iVar10 + 4 + (*(uint *)(gen_frame + 0xac))) -
                     (float10)*(float *)(iVar10 + 4 + iVar9))));
      (*(float *)(gen_frame + 0x84)) = fVar2;
      fVar3 = ((float)GEN_TOF(((float10)*(float *)(iVar10 + 8 + (*(uint *)(gen_frame + 0xac))) -
                     (float10)*(float *)(iVar10 + 8 + iVar9))));
      (*(float *)(gen_frame + 0x88)) = fVar3;
      (*(float *)(gen_frame + 0x40)) = fVar1;
      (*(float *)(gen_frame + 0x44)) = fVar2;
      (*(float *)(gen_frame + 0x48)) = fVar3;
      F_005fe2e0(&(*(float *)(gen_frame + 0x30)),(uint)&(*(float *)(gen_frame + 0x40)));
      (*(float *)(gen_frame + 0x70)) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x74)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x34)));
      (*(float *)(gen_frame + 0x78)) = (float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x38)));
      (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x34)));
      (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x38)));
      F_005fe2e0(&(*(float *)(gen_frame + 0x50)),(uint)&(*(float *)(gen_frame + 0x20)));
      iVar10 = (*(int * PTR32 *)(gen_frame + 0xa8))[1];
      *(float *)(iVar10 + iVar9) = (*(float *)(gen_frame + 0x50));
      *(float *)(iVar10 + 4 + iVar9) = (*(float *)(gen_frame + 0x54));
      *(float *)(iVar10 + 8 + iVar9) = (*(float *)(gen_frame + 0x58));
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + (*(int *)(gen_frame + 0x98));
      (*(uint *)(gen_frame + 0xac)) = (*(uint *)(gen_frame + 0xac)) + (*(int *)(gen_frame + 0x98));
      uVar8 = (*(uint *)(gen_frame + 0xa4)) + 1;
      iVar9 = iVar9 + (*(int *)(gen_frame + 0x98));
      (*(uint *)(gen_frame + 0xa4)) = uVar8;
      this = (*(int * PTR32 *)(gen_frame + 0xa8));
    } while (uVar8 < (*(int * PTR32 *)(gen_frame + 0xa8))[4] - 1U);
  }
  puVar4 = (undefined4 *)F_00b64ec0(this,&(*(float *)(gen_frame + 0x50)),0);
  puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
  *puVar5 = *puVar4;
  puVar5[1] = puVar4[1];
  puVar5[2] = puVar4[2];
  iVar9 = (*(int *)((int)this + 0x10) + -1) * (*(uint *)(gen_frame + 0xa0));
  puVar5 = (undefined4 *)F_00b65020(this,&(*(float *)(gen_frame + 0x50)),iVar9);
  puVar4 = ((undefined4 *)GEN_TOP((iVar9 * 0x10 + *(int *)((int)this + 4))));
  *puVar4 = *puVar5;
  puVar4[1] = puVar5[1];
  puVar4[2] = puVar5[2];
  return (uint)puVar5;
}

/* ref: FUN_00b65e10 */
unsigned int F_00b65e10(unsigned int gen_a0)
{
  GEN_ENTER(0xb65e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float * pfVar5;
  undefined4 * puVar6;
  undefined * this_00;
  undefined * pvVar7;
  undefined * this_01;
  undefined4 * puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (*(char *)((int)this + 0x18) != '\0') {
    pfVar5 = *(float * PTR32 *)((int)this + 4);
    iVar10 = *(int *)((int)this + 0x14);
    fVar14 = *pfVar5;
    fVar17 = pfVar5[1];
    fVar15 = pfVar5[2];
    (*(int *)(gen_frame + 0x7c)) = iVar10;
    (*(uint *)(gen_frame + 0x78)) = 1;
    if (1 < *(int *)((int)this + 0x10) - 1U) {
      (*(float *)(gen_frame + 0x70)) = gen_bits2f(iVar10 << 4);
      (*(int *)(gen_frame + 0x74)) = 0;
      iVar11 = 0;
      iVar9 = iVar10;
      fVar16 = fVar14;
      fVar18 = fVar17;
      fVar19 = fVar15;
      do {
        (*(float *)(gen_frame + 0x6c)) = *((float *)GEN_TOP((*(int *)((int)this + 8) + iVar11)));
        pfVar5 = (float *)F_00b64ec0(this,((undefined1 *)(gen_frame + 0x0)),iVar9);
        fVar13 = (float10)(*(float *)(gen_frame + 0x6c));
        (*(float *)(gen_frame + 0x30)) = (float)(fVar13 * (float10)*pfVar5);
        (*(float *)(gen_frame + 0x34)) = (float)((float10)pfVar5[1] * fVar13);
        (*(float *)(gen_frame + 0x38)) = (float)(fVar13 * (float10)pfVar5[2]);
        (*(float *)(gen_frame + 0x6c)) = *((float *)GEN_TOP((*(int *)((int)this_01 + 8) + iVar9 * 4)));
        pfVar5 = (float *)F_00b65020(this_01,((undefined1 *)(gen_frame + 0x10)),iVar9);
        fVar13 = (float10)(*(float *)(gen_frame + 0x6c));
        (*(float *)(gen_frame + 0x20)) = (float)(fVar13 * (float10)*pfVar5);
        (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar5[1] * fVar13);
        (*(float *)(gen_frame + 0x28)) = (float)(fVar13 * (float10)pfVar5[2]);
        fVar2 = ((float)GEN_TOF(((float10)(float)(fVar13 * (float10)*pfVar5) + (float10)(*(float *)(gen_frame + 0x30)))));
        (*(float *)(gen_frame + 0x40)) = fVar2;
        fVar3 = ((float)GEN_TOF(((float10)(float)((float10)pfVar5[1] * fVar13) + (float10)(*(float *)(gen_frame + 0x34)))));
        (*(float *)(gen_frame + 0x44)) = fVar3;
        fVar4 = ((float)GEN_TOF(((float10)(float)(fVar13 * (float10)pfVar5[2]) + (float10)(*(float *)(gen_frame + 0x38)))));
        (*(float *)(gen_frame + 0x48)) = fVar4;
        fVar14 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)((undefined *)(uint)(this_01)) + 8) + iVar11))) +
                        (float10)*((float *)GEN_TOP((*(int *)((int)((undefined *)(uint)(this_01)) + 8) + iVar9 * 4))))));
        (*(float *)(gen_frame + 0x6c)) = fVar14;
        fVar13 = (float10)fVar14;
        bVar12 = GEN_ISNAN(fVar13) || GEN_ISNAN((float10)0);
        fVar14 = REFG(float, 0x1375ac0);
        fVar17 = REFG(float, 0x1375ac4);
        fVar15 = REFG(float, 0x1375ac8);
        if (bVar12 == (bVar12 || fVar13 == (float10)0)) {
          fVar14 = (float)((float10)fVar2 / fVar13);
          (*(float *)(gen_frame + 0x50)) = fVar14;
          fVar17 = (float)((float10)fVar3 / fVar13);
          (*(float *)(gen_frame + 0x54)) = fVar17;
          fVar15 = (float)((float10)fVar4 / fVar13);
          (*(float *)(gen_frame + 0x58)) = fVar15;
        }
        iVar10 = *(int *)((int)((undefined *)(uint)(this_01)) + 4);
        uVar1 = (*(uint *)(gen_frame + 0x78)) + 1;
        (*(uint *)(gen_frame + 0x78)) = uVar1;
        iVar9 = iVar9 + (*(int *)(gen_frame + 0x7c));
        *(float *)(iVar10 + (*(int *)(gen_frame + 0x74))) = fVar16;
        *(float *)(iVar10 + 4 + (*(int *)(gen_frame + 0x74))) = fVar18;
        *(float *)(iVar10 + 8 + (*(int *)(gen_frame + 0x74))) = fVar19;
        iVar11 = iVar11 + (*(int *)(gen_frame + 0x7c)) * 4;
        (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + (int)gen_fl2bits((*(float *)(gen_frame + 0x70)));
        this = ((undefined *)(uint)(this_01));
        iVar10 = (*(int *)(gen_frame + 0x7c));
        fVar16 = fVar14;
        fVar18 = fVar17;
        fVar19 = fVar15;
      } while (uVar1 < *(int *)((int)((undefined *)(uint)(this_01)) + 0x10) - 1U);
    }
    puVar6 = *(undefined4 * PTR32 *)((int)this + 4);
    iVar9 = (*(int *)((int)this + 0x10) + -1) * iVar10;
    puVar6[iVar9 * 4] = *puVar6;
    puVar6[iVar9 * 4 + 1] = puVar6[1];
    puVar6[iVar9 * 4 + 2] = puVar6[2];
    pfVar5 = ((float *)GEN_TOP(((*(int *)((int)this + 0x10) + -2) * iVar10 * 0x10 + *(int *)((int)this + 4))));
    *pfVar5 = fVar14;
    pfVar5[2] = fVar15;
    pfVar5[1] = fVar17;
    return 0;
  }
  iVar10 = *(int *)((int)this + 0x14);
  F_00b64ec0(this,&(*(float *)(gen_frame + 0x50)),0);
  (*(uint *)(gen_frame + 0x78)) = 1;
  pvVar7 = ((undefined *)(uint)(this));
  fVar15 = (*(float *)(gen_frame + 0x58));
  fVar17 = (*(float *)(gen_frame + 0x54));
  fVar14 = (*(float *)(gen_frame + 0x50));
  if (1 < *(int *)((int)((undefined *)(uint)(this)) + 0x10) - 1U) {
    (*(float *)(gen_frame + 0x6c)) = gen_bits2f(iVar10 << 4);
    (*(int *)(gen_frame + 0x74)) = 0;
    (*(int *)(gen_frame + 0x7c)) = 0;
    iVar9 = iVar10;
    fVar16 = (*(float *)(gen_frame + 0x58));
    fVar18 = (*(float *)(gen_frame + 0x54));
    fVar19 = (*(float *)(gen_frame + 0x50));
    do {
      (*(float *)(gen_frame + 0x70)) = *((float *)GEN_TOP((*(int *)((int)pvVar7 + 8) + (*(int *)(gen_frame + 0x7c)))));
      pfVar5 = (float *)F_00b64ec0(pvVar7,((undefined1 *)(gen_frame + 0x10)),iVar9);
      fVar13 = (float10)(*(float *)(gen_frame + 0x70));
      (*(float *)(gen_frame + 0x40)) = (float)(fVar13 * (float10)*pfVar5);
      (*(float *)(gen_frame + 0x44)) = (float)((float10)pfVar5[1] * fVar13);
      (*(float *)(gen_frame + 0x48)) = (float)(fVar13 * (float10)pfVar5[2]);
      (*(float *)(gen_frame + 0x70)) = *((float *)GEN_TOP((*(int *)((int)this_00 + 8) + iVar9 * 4)));
      pfVar5 = (float *)F_00b65020(this_00,((undefined1 *)(gen_frame + 0x0)),iVar9);
      fVar13 = (float10)(*(float *)(gen_frame + 0x70));
      (*(float *)(gen_frame + 0x50)) = (float)(fVar13 * (float10)*pfVar5);
      (*(float *)(gen_frame + 0x54)) = (float)((float10)pfVar5[1] * fVar13);
      (*(float *)(gen_frame + 0x58)) = (float)(fVar13 * (float10)pfVar5[2]);
      fVar2 = ((float)GEN_TOF(((float10)(float)(fVar13 * (float10)*pfVar5) + (float10)(*(float *)(gen_frame + 0x40)))));
      (*(float *)(gen_frame + 0x30)) = fVar2;
      fVar3 = ((float)GEN_TOF(((float10)(float)((float10)pfVar5[1] * fVar13) + (float10)(*(float *)(gen_frame + 0x44)))));
      (*(float *)(gen_frame + 0x34)) = fVar3;
      fVar4 = ((float)GEN_TOF(((float10)(float)(fVar13 * (float10)pfVar5[2]) + (float10)(*(float *)(gen_frame + 0x48)))));
      (*(float *)(gen_frame + 0x38)) = fVar4;
      fVar14 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)((undefined *)(uint)(this_00)) + 8) + (*(int *)(gen_frame + 0x7c))))) +
                      (float10)*((float *)GEN_TOP((*(int *)((int)((undefined *)(uint)(this_00)) + 8) + iVar9 * 4))))));
      (*(float *)(gen_frame + 0x70)) = fVar14;
      fVar13 = (float10)fVar14;
      bVar12 = GEN_ISNAN(fVar13) || GEN_ISNAN((float10)0);
      fVar14 = REFG(float, 0x1375ac0);
      fVar17 = REFG(float, 0x1375ac4);
      fVar15 = REFG(float, 0x1375ac8);
      if (bVar12 == (bVar12 || fVar13 == (float10)0)) {
        fVar14 = (float)((float10)fVar2 / fVar13);
        (*(float *)(gen_frame + 0x20)) = fVar14;
        fVar17 = (float)((float10)fVar3 / fVar13);
        (*(float *)(gen_frame + 0x24)) = fVar17;
        fVar15 = (float)((float10)fVar4 / fVar13);
        (*(float *)(gen_frame + 0x28)) = fVar15;
      }
      iVar11 = *(int *)((int)((undefined *)(uint)(this_00)) + 4);
      uVar1 = (*(uint *)(gen_frame + 0x78)) + 1;
      (*(uint *)(gen_frame + 0x78)) = uVar1;
      *(float *)(iVar11 + (*(int *)(gen_frame + 0x74))) = fVar19;
      *(float *)(iVar11 + 4 + (*(int *)(gen_frame + 0x74))) = fVar18;
      *(float *)(iVar11 + 8 + (*(int *)(gen_frame + 0x74))) = fVar16;
      (*(int *)(gen_frame + 0x7c)) = (*(int *)(gen_frame + 0x7c)) + iVar10 * 4;
      iVar9 = iVar9 + iVar10;
      (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + (int)gen_fl2bits((*(float *)(gen_frame + 0x6c)));
      pvVar7 = ((undefined *)(uint)(this_00));
      fVar16 = fVar15;
      fVar18 = fVar17;
      fVar19 = fVar14;
    } while (uVar1 < *(int *)((int)((undefined *)(uint)(this_00)) + 0x10) - 1U);
  }
  puVar6 = (undefined4 *)F_00b65020(pvVar7,((undefined1 *)(gen_frame + 0x0)),(*(int *)((int)pvVar7 + 0x10) + -1) * iVar10);
  puVar8 = ((undefined4 *)GEN_TOP(((*(int *)(((int)(uint)(pvVar7)) + 0x10) + -1) * iVar10 * 0x10 + *(int *)(((int)(uint)(pvVar7)) + 4))))
  ;
  *puVar8 = *puVar6;
  puVar8[1] = puVar6[1];
  puVar8[2] = puVar6[2];
  pfVar5 = ((float *)GEN_TOP(((*(int *)(((int)(uint)(pvVar7)) + 0x10) + -2) * iVar10 * 0x10 +
                    *(int *)(((int)(uint)(pvVar7)) + 4))));
  *pfVar5 = fVar14;
  pfVar5[2] = fVar15;
  pfVar5[1] = fVar17;
  return 0;
}

/* ref: FUN_00b66190 */
unsigned int F_00b66190(unsigned int gen_a0)
{
  GEN_ENTER(0xb66190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  float * pfVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar4 = *(int *)((int)this + 0x14);
  local_24 = 1;
  if (1 < *(int *)((int)this + 0x10) - 1U) {
    iVar1 = iVar4 * 4;
    local_20 = iVar4 << 5;
    iVar4 = iVar4 * 0x10;
    local_18 = 0;
    local_1c = 0;
    iVar5 = iVar4;
    local_28 = iVar1;
    do {
      iVar2 = *(int *)this;
      fVar6 = (float10)((float)GEN_TOF(((float10)*(float *)(iVar5 + 4 + iVar2) -
                              (float10)*(float *)(local_1c + 4 + iVar2))));
      fVar7 = (float10)((float)GEN_TOF(((float10)*(float *)(iVar5 + iVar2) -
                              (float10)*(float *)(local_1c + iVar2))));
      fVar8 = (float10)((float)GEN_TOF(((float10)*(float *)(iVar5 + 8 + iVar2) -
                              (float10)*(float *)(local_1c + 8 + iVar2))));
      fVar9 = (float10)((float)GEN_TOF(((float10)*(float *)(local_20 + 4 + iVar2) -
                              (float10)*(float *)(iVar5 + 4 + iVar2))));
      fVar10 = (float10)((float)GEN_TOF(((float10)*(float *)(local_20 + iVar2) -
                               (float10)*(float *)(iVar5 + iVar2))));
      fVar11 = (float10)((float)GEN_TOF(((float10)*(float *)(local_20 + 8 + iVar2) -
                               (float10)*(float *)(iVar5 + 8 + iVar2))));
      pfVar3 = ((float *)GEN_TOP((*(int *)((int)this + 4) + iVar5)));
      fVar9 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar11 * fVar11 +
                                                                    (fVar10 * fVar10 + fVar9 * fVar9
                                                                    ))))))) /
                              (float10)*((float *)GEN_TOP((local_28 + *(int *)((int)this + 8)))))));
      fVar6 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar8 * fVar8 +
                                                                    (fVar7 * fVar7 + fVar6 * fVar6))))
                                                   ))) /
                              (float10)*((float *)GEN_TOP((local_18 + *(int *)((int)this + 8)))))));
      fVar7 = fVar6 + fVar9;
      fVar6 = (float10)((float)GEN_TOF((((fVar6 * (float10)*(double *)&REFG(undefined, 0x1094788)) * fVar9) /
                              (fVar7 * fVar7))));
      *pfVar3 = (float)(fVar6 * (float10)*pfVar3);
      local_24 = local_24 + 1;
      pfVar3[1] = (float)((float10)pfVar3[1] * fVar6);
      pfVar3[2] = (float)(fVar6 * (float10)pfVar3[2]);
      local_18 = local_18 + iVar1;
      local_28 = local_28 + iVar1;
      local_1c = local_1c + iVar4;
      local_20 = local_20 + iVar4;
      iVar5 = iVar5 + iVar4;
    } while (local_24 < *(int *)((int)this + 0x10) - 1U);
  }
  return 0;
}

/* ref: FUN_00b66320 */
uint F_00b66320(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb66320u, gen_a0, gen_a1, 0u, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  
  iVar6 = param_1[5] * param_4;
  fVar1 = *(float *)(param_1[2] + iVar6 * 4);
  iVar5 = param_1[1];
  iVar6 = iVar6 * 0x10;
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  fVar8 = (float10)fVar1;
  fVar2 = ((float)GEN_TOF((fVar8 * (float10)*(float *)(iVar5 + iVar6))));
  (*(float *)(gen_frame + 0x20)) = fVar2;
  (*(float *)(gen_frame + 0x38)) = fVar1;
  iVar7 = (param_4 + 1) * param_1[5] * 0x10;
  fVar3 = ((float)GEN_TOF(((float10)*(float *)(iVar5 + 4 + iVar6) * fVar8)));
  (*(float *)(gen_frame + 0x24)) = fVar3;
  fVar4 = ((float)GEN_TOF((fVar8 * (float10)*(float *)(iVar5 + 8 + iVar6))));
  (*(float *)(gen_frame + 0x28)) = fVar4;
  (*(float *)(gen_frame + 0x0)) = fVar2;
  (*(float *)(gen_frame + 0x4)) = fVar3;
  (*(float *)(gen_frame + 0x8)) = fVar4;
  fVar8 = (float10)fVar1;
  fVar1 = ((float)GEN_TOF((fVar8 * (float10)*(float *)(iVar7 + iVar5))));
  (*(float *)(gen_frame + 0x20)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 4 + iVar5) * fVar8)));
  (*(float *)(gen_frame + 0x24)) = fVar2;
  fVar3 = ((float)GEN_TOF((fVar8 * (float10)*(float *)(iVar7 + 8 + iVar5))));
  (*(float *)(gen_frame + 0x28)) = fVar3;
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x14)) = fVar2;
  (*(float *)(gen_frame + 0x18)) = fVar3;
  F_00b65370(param_2,*param_1 + iVar6,&(*(float *)(gen_frame + 0x0)),iVar7 + *param_1,&(*(float *)(gen_frame + 0x10)),param_3);
  return param_2;
}

/* ref: FUN_00b66400 */
unsigned int F_00b66400(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb66400u, gen_a0, gen_a1, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  float10 fVar4;
  
  (*(int *)(gen_frame + 0x38)) = param_4;
  (*(float *)(gen_frame + 0x3c)) = (float)((float10)REFG(double, 0x1091858) + (float10)param_3);
  fVar4 = (float10)(float)((float10)REFG(double, 0x1091858) + (float10)param_3);
  if ((float10)1 < fVar4) {
    iVar1 = *(int *)(param_1 + 0x10) + -1;
    (*(float *)(gen_frame + 0x3c)) = (float)(fVar4 - (float10)REFG(double, 0x1088130));
    (*(int *)(gen_frame + 0x38)) = param_4 + 1;
    if (iVar1 <= param_4 + 1) {
      pfVar3 = ((float *)GEN_TOP((*(int *)(param_1 + 0x14) * iVar1 * 0x10 + *(int *)(param_1 + 4))));
      *param_2 = *pfVar3;
      param_2[1] = pfVar3[1];
      param_2[2] = pfVar3[2];
      return 0;
    }
  }
  pfVar3 = (float *)F_00b66320(param_1,&(*(float *)(gen_frame + 0x10)),param_3,param_4);
  pfVar2 = (float *)F_00b66320(param_1,((undefined1 *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x38)));
  (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar2 - (float10)*pfVar3);
  (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar2[1] - (float10)pfVar3[1]);
  (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar2[2] - (float10)pfVar3[2]);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar2 - (float10)*pfVar3);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)pfVar2[1] - (float10)pfVar3[1]);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)pfVar2[2] - (float10)pfVar3[2]);
  F_005fe2e0(&(*(float *)(gen_frame + 0x20)),(uint)&(*(float *)(gen_frame + 0x10)));
  *param_2 = (*(float *)(gen_frame + 0x20));
  param_2[1] = (*(float *)(gen_frame + 0x24));
  param_2[2] = (*(float *)(gen_frame + 0x28));
  return 0;
}

/* ref: FUN_00b66510 */
uint F_00b66510(unsigned int gen_a0)
{
  GEN_ENTER(0xb66510u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x10f37dc));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00b66530 */
uint F_00b66530(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb66530u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  if (REFG(float, 0x1087f04) <= param_3) {
    param_3 = REFG(float, 0x1087f04);
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
    iVar3 = uVar2 - 2;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))();
    (*(float *)(gen_frame + 0x8)) = gen_bits2f(uVar2 - 1);
    dVar1 = (double)((float)GEN_TOF(((float10)(int)(uVar2 - 1) * (float10)param_3)));
    fVar4 = F_00c51c40((uint)(ulonglong)gen_d2bits(dVar1),
                         (int)((ulonglong)gen_d2bits(dVar1) >> 0x20),&(*(undefined4 *)(gen_frame + 0x4)));
    param_3 = (float)fVar4;
    dVar1 = gen_bits2d(CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x8))),(*(undefined4 *)(gen_frame + 0x4))));
    (*(float *)(gen_frame + 0x8)) = (float)dVar1;
    iVar3 = (int)dVar1;
  }
  F_00b65550(param_1,param_2,param_3,iVar3);
  return param_2;
}

/* ref: FUN_00b66680 */
float F_00b66680(unsigned int gen_a0)
{
  GEN_ENTER(0xb66680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  float fVar2;
  float local_8;
  
  sVar1 = *(short *)((int)this + 0xc);
  local_8 = 0.0;
  if (sVar1 == 0) {
    local_8 = F_00b655f0(this);
  }
  else {
    if (sVar1 == 1) {
      return 0.0;
    }
    if (sVar1 == 2) {
      fVar2 = F_00b64b10(*(undefined * PTR32 *)((int)this + 4));
      return fVar2;
    }
  }
  return local_8;
}

/* ref: FUN_00b666d0 */
float F_00b666d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb666d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short sVar1;
  float fVar2;
  
  sVar1 = *(short *)((int)this + 0xc);
  fVar2 = 0.0;
  if (sVar1 == 0) {
    fVar2 = F_00b656b0(this,param_1);
    return fVar2;
  }
  if (sVar1 != 1) {
    if (sVar1 != 2) {
      return 0.0;
    }
    fVar2 = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) +
                      *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) * param_1 * 4)));
  }
  return fVar2;
}

/* ref: FUN_00b66720 */
float F_00b66720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb66720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  short sVar1;
  float fVar2;
  float local_8;
  
  sVar1 = *(short *)((int)this + 0xc);
  local_8 = 0.0;
  if (sVar1 == 0) {
    local_8 = F_00b65740(this,param_1,param_2);
  }
  else {
    if (sVar1 == 1) {
      return 0.0;
    }
    if (sVar1 == 2) {
      fVar2 = F_00b64bf0(*(undefined * PTR32 *)((int)this + 4),param_1,param_2);
      return fVar2;
    }
  }
  return local_8;
}

/* ref: FUN_00b66780 */
float F_00b66780(unsigned int gen_a0)
{
  GEN_ENTER(0xb66780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  float fVar2;
  float local_8;
  
  sVar1 = *(short *)((int)this + 0xc);
  local_8 = 0.0;
  if (sVar1 == 0) {
    local_8 = F_00b657f0(this);
  }
  else {
    if (sVar1 == 1) {
      return 0.0;
    }
    if (sVar1 == 2) {
      fVar2 = F_00b65190(*(undefined * PTR32 *)((int)this + 4));
      return fVar2;
    }
  }
  return local_8;
}

/* ref: FUN_00b667d0 */
float F_00b667d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb667d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short sVar1;
  float fVar2;
  float local_8;
  
  sVar1 = *(short *)((int)this + 0xc);
  local_8 = 0.0;
  if (sVar1 == 0) {
    local_8 = F_00b658b0(this,param_1);
  }
  else {
    if (sVar1 == 1) {
      return 0.0;
    }
    if (sVar1 == 2) {
      fVar2 = F_00b65a00(this,param_1);
      return fVar2;
    }
  }
  return local_8;
}

/* ref: FUN_00b66830 */
float F_00b66830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb66830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  short sVar1;
  float fVar2;
  float local_8;
  
  sVar1 = *(short *)((int)this + 0xc);
  local_8 = 0.0;
  if (sVar1 == 0) {
    local_8 = F_00b65940(this,param_1,param_2);
  }
  else {
    if (sVar1 == 1) {
      return 0.0;
    }
    if (sVar1 == 2) {
      fVar2 = F_00b652b0(*(undefined * PTR32 *)((int)this + 4),param_1,param_2);
      return fVar2;
    }
  }
  return local_8;
}

/* ref: FUN_00b66890 */
unsigned int F_00b66890(unsigned int gen_a0)
{
  GEN_ENTER(0xb66890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined * this_01;
  
  F_00b65a90(this);
  F_00b65e10(this);
  F_00b65e10(this_00);
  F_00b65e10(this_01);
  return 0;
}

/* ref: FUN_00b668b0 */
unsigned int F_00b668b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb668b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b65a90(this);
  F_00b65e10(this);
  return 0;
}

/* ref: FUN_00b668c0 */
unsigned int F_00b668c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb668c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  F_00b65a90(this);
  F_00b65e10(this);
  F_00b66190(this_00);
  return 0;
}

/* ref: FUN_00b668e0 */
uint F_00b668e0(float gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb668e0u, 0u, gen_a1, 0u, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[0]);
  F_00b64a60((undefined4)gen_fl2bits((*(float *)&gen_args[0])),&(*(float *)(gen_frame + 0x8)),&(*(float *)&gen_args[2]),(*(float *)&gen_args[2]));
  F_00b66320((undefined4)gen_fl2bits((*(float *)&gen_args[0])),(*(uint *)&gen_args[1]),(*(float *)(gen_frame + 0x8)),(undefined4)gen_fl2bits((*(float *)&gen_args[2])));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00b66920 */
uint F_00b66920(float gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb66920u, 0u, gen_a1, 0u, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[0]);
  F_00b64a60((undefined4)gen_fl2bits((*(float *)&gen_args[0])),&(*(float *)(gen_frame + 0x8)),&(*(float *)&gen_args[2]),(*(float *)&gen_args[2]));
  F_00b66400((undefined4)gen_fl2bits((*(float *)&gen_args[0])),(*(uint *)&gen_args[1]),(*(float *)(gen_frame + 0x8)),(undefined4)gen_fl2bits((*(float *)&gen_args[2])));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00b66960 */
uint F_00b66960(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb66960u, gen_a0, gen_a1, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  
  uVar4 = REFG(float, 0x1375ac8);
  uVar3 = REFG(float, 0x1375ac4);
  uVar2 = REFG(float, 0x1375ac0);
  sVar1 = *(short *)(param_1 + 0xc);
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1375ac0));
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  if (sVar1 == 0) {
    puVar5 = (undefined4 *)F_00b677f0(param_1,((undefined1 *)(gen_frame + 0x0)),param_3,param_4);
    *param_2 = *puVar5;
    param_2[1] = puVar5[1];
    param_2[2] = puVar5[2];
  }
  else if (sVar1 == 1) {
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
  }
  else if (sVar1 == 2) {
    F_00b66320(*(undefined4 *)(param_1 + 4),&(*(undefined4 *)(gen_frame + 0x10)),param_3,param_4);
    *param_2 = (*(undefined4 *)(gen_frame + 0x10));
    param_2[1] = (*(undefined4 *)(gen_frame + 0x14));
    param_2[2] = (*(undefined4 *)(gen_frame + 0x18));
  }
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    param_2[1] = 0;
  }
  return (uint)param_2;
}

/* ref: FUN_00b66b20 */
unsigned int F_00b66b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb66b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = param_1;
  uVar3 = F_00406bb0(param_1 * 0x24 + 0x20,0,0);
  *(uint *)((int)this + 4) = uVar3;
  **(int * PTR32 *)((int)this + 4) = uVar3 + 0x20;
  iVar4 = uVar3 + 0x20 + param_1 * 0x10;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar4;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = iVar4 + param_1 * 0x10;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x10))) = param_1;
  iVar4 = **(int * PTR32 *)((int)this + 4);
  param_1 = 0;
  if (3 < iVar7) {
    iVar8 = (iVar7 - 4U >> 2) + 1;
    puVar6 = (undefined4 *)(iVar4 + 0x18);
    puVar5 = (undefined4 *)(param_2 + 0x2c);
    param_1 = iVar8 * 4;
    do {
      uVar1 = puVar5[-10];
      uVar2 = puVar5[-9];
      puVar6[-6] = puVar5[-0xb];
      puVar6[-5] = uVar1;
      puVar6[-4] = uVar2;
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      puVar6[-2] = puVar5[-2];
      puVar6[-1] = uVar1;
      *puVar6 = uVar2;
      uVar1 = puVar5[8];
      uVar2 = puVar5[9];
      puVar6[2] = puVar5[7];
      puVar6[3] = uVar1;
      puVar6[4] = uVar2;
      uVar1 = puVar5[0x11];
      uVar2 = puVar5[0x12];
      puVar6[6] = puVar5[0x10];
      puVar6[7] = uVar1;
      puVar6[8] = uVar2;
      puVar5 = puVar5 + 0x24;
      puVar6 = puVar6 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (param_1 < iVar7) {
    puVar6 = (undefined4 *)(iVar4 + param_1 * 0x10 + 8);
    iVar7 = iVar7 - param_1;
    puVar5 = (undefined4 *)(param_2 + 8 + param_1 * 0x24);
    do {
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      puVar6[-2] = puVar5[-2];
      puVar6[-1] = uVar1;
      *puVar6 = uVar2;
      puVar5 = puVar5 + 9;
      puVar6 = puVar6 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((char)param_3 == '\0') {
    *(ushort *)((int)this + 0xe) = *(ushort *)((int)this + 0xe) & 0xfffd;
  }
  else {
    *(ushort *)((int)this + 0xe) = *(ushort *)((int)this + 0xe) | 2;
  }
  *((char *)GEN_TOP((*(int *)((int)this + 4) + 0x18))) = (char)param_3;
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  F_00b65a90(this_00);
  F_00b65e10(this_00);
  return 0;
}

/* ref: FUN_00b66cc0 */
unsigned int F_00b66cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb66cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = param_1;
  uVar3 = F_00406bb0(param_1 * 0x24 + 0x20,0,0);
  *(uint *)((int)this + 4) = uVar3;
  **(int * PTR32 *)((int)this + 4) = uVar3 + 0x20;
  iVar4 = uVar3 + 0x20 + param_1 * 0x10;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar4;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = iVar4 + param_1 * 0x10;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x10))) = param_1;
  iVar4 = **(int * PTR32 *)((int)this + 4);
  param_1 = 0;
  if (3 < iVar7) {
    puVar6 = (undefined4 *)(iVar4 + 0x24);
    puVar5 = (undefined4 *)(param_2 + 0x18);
    iVar8 = (iVar7 - 4U >> 2) + 1;
    param_1 = iVar8 * 4;
    do {
      uVar1 = puVar5[-5];
      uVar2 = puVar5[-4];
      puVar6[-9] = puVar5[-6];
      puVar6[-8] = uVar1;
      puVar6[-7] = uVar2;
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      puVar6[-5] = puVar5[-2];
      puVar6[-4] = uVar1;
      *((undefined4 *)GEN_TOP(((iVar4 - param_2) + (int)puVar5))) = uVar2;
      uVar1 = puVar5[3];
      uVar2 = puVar5[4];
      puVar6[-1] = puVar5[2];
      *puVar6 = uVar1;
      puVar6[1] = uVar2;
      uVar1 = puVar5[7];
      uVar2 = puVar5[8];
      puVar6[3] = puVar5[6];
      puVar6[4] = uVar1;
      puVar6[5] = uVar2;
      puVar5 = puVar5 + 0x10;
      puVar6 = puVar6 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (param_1 < iVar7) {
    puVar5 = (undefined4 *)(iVar4 + param_1 * 0x10);
    puVar6 = (undefined4 *)(param_1 * 0x10 + 8 + param_2);
    iVar7 = iVar7 - param_1;
    do {
      uVar1 = puVar6[-1];
      uVar2 = *puVar6;
      *puVar5 = puVar6[-2];
      puVar5[1] = uVar1;
      *((undefined4 *)GEN_TOP(((iVar4 - param_2) + (int)puVar6))) = uVar2;
      puVar6 = puVar6 + 4;
      puVar5 = puVar5 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((char)param_3 == '\0') {
    *(ushort *)((int)this + 0xe) = *(ushort *)((int)this + 0xe) & 0xfffd;
  }
  else {
    *(ushort *)((int)this + 0xe) = *(ushort *)((int)this + 0xe) | 2;
  }
  *((char *)GEN_TOP((*(int *)((int)this + 4) + 0x18))) = (char)param_3;
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  F_00b65a90(this_00);
  F_00b65e10(this_00);
  return 0;
}

/* ref: FUN_00b66e50 */
uint F_00b66e50(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb66e50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  
  uVar4 = REFG(float, 0x1375ac8);
  uVar3 = REFG(float, 0x1375ac4);
  uVar2 = REFG(float, 0x1375ac0);
  sVar1 = *(short *)(param_1 + 0xc);
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1375ac0));
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  if (sVar1 == 0) {
    puVar5 = (undefined4 *)F_00b67b00(param_1,((undefined1 *)(gen_frame + 0x0)),param_3);
    *param_2 = *puVar5;
    param_2[1] = puVar5[1];
    param_2[2] = puVar5[2];
  }
  else if (sVar1 == 1) {
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
  }
  else if (sVar1 == 2) {
    F_00b64a60(*(undefined4 *)(param_1 + 4),&(*(float *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x2c)),param_3);
    F_00b66320(*(undefined4 *)(param_1 + 4),&(*(undefined4 *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)));
    *param_2 = (*(undefined4 *)(gen_frame + 0x10));
    param_2[1] = (*(undefined4 *)(gen_frame + 0x14));
    param_2[2] = (*(undefined4 *)(gen_frame + 0x18));
  }
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    param_2[1] = 0;
  }
  return (uint)param_2;
}

/* ref: FUN_00b66f40 */
uint F_00b66f40(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb66f40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  short sVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  sVar1 = *(short *)(param_1 + 0xc);
  if (sVar1 == 0) {
    puVar3 = (undefined4 *)F_00b67bc0(param_1,((undefined1 *)(gen_frame + 0x0)),param_3);
    *param_2 = *puVar3;
    param_2[1] = puVar3[1];
    param_2[2] = puVar3[2];
    return (uint)param_2;
  }
  if (sVar1 != 1) {
    if (sVar1 == 2) {
      uVar2 = *(undefined4 *)(param_1 + 4);
      F_00b64a60(uVar2,&(*(float *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x2c)),param_3);
      F_00b66400(uVar2,&(*(undefined4 *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)));
      *param_2 = (*(undefined4 *)(gen_frame + 0x10));
      param_2[1] = (*(undefined4 *)(gen_frame + 0x14));
      param_2[2] = (*(undefined4 *)(gen_frame + 0x18));
      return (uint)param_2;
    }
    return (uint)param_2;
  }
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1375ac0));
  param_2[1] = GEN_FLT_TO(param_2[1], REFG(float, 0x1375ac4));
  param_2[2] = GEN_FLT_TO(param_2[2], REFG(float, 0x1375ac8));
  return (uint)param_2;
}

/* ref: FUN_00b67040 */
uint F_00b67040(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb67040u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  
  uVar2 = REFG(undefined4, 0x1302cf4);
  sVar1 = *(short *)(param_1 + 0xc);
  if (sVar1 == 0) {
    puVar4 = (undefined4 *)F_00b68040(param_1,((undefined1 *)(gen_frame + 0x0)),param_3);
    *param_2 = *puVar4;
    param_2[1] = puVar4[1];
    uVar2 = puVar4[3];
    param_2[2] = puVar4[2];
    param_2[3] = uVar2;
    return (uint)param_2;
  }
  if (sVar1 != 1) {
    if (sVar1 == 2) {
      F_00b64a60(*(undefined4 *)(param_1 + 4),&(*(float *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x2c)),param_3);
      F_00b67db0(param_1,&(*(undefined4 *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)));
      *param_2 = (*(undefined4 *)(gen_frame + 0x10));
      param_2[1] = (*(undefined4 *)(gen_frame + 0x14));
      param_2[2] = (*(undefined4 *)(gen_frame + 0x18));
      param_2[3] = (*(undefined4 *)(gen_frame + 0x1c));
      return (uint)param_2;
    }
    return (uint)param_2;
  }
  *param_2 = REFG(undefined4, 0x1302cf0);
  uVar3 = REFG(undefined4, 0x1302cf8);
  param_2[1] = uVar2;
  uVar2 = REFG(undefined4, 0x1302cfc);
  param_2[2] = uVar3;
  param_2[3] = uVar2;
  return (uint)param_2;
}

/* ref: FUN_00b672f0 */
uint F_00b672f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb672f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  short sVar1;
  undefined4 * puVar2;
  
  sVar1 = *(short *)(param_1 + 0xc);
  if (sVar1 == 0) {
    puVar2 = (undefined4 *)F_00b68130(param_1,((undefined1 *)(gen_frame + 0x0)),param_3);
    *param_2 = *puVar2;
    param_2[1] = puVar2[1];
    param_2[2] = puVar2[2];
    return (uint)param_2;
  }
  if (sVar1 != 1) {
    if (sVar1 == 2) {
      puVar2 = (undefined4 *)F_00b68270(param_1,((undefined1 *)(gen_frame + 0x10)),param_3);
      *param_2 = *puVar2;
      param_2[1] = puVar2[1];
      param_2[2] = puVar2[2];
      return (uint)param_2;
    }
    return (uint)param_2;
  }
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1375ac0));
  param_2[1] = GEN_FLT_TO(param_2[1], REFG(float, 0x1375ac4));
  param_2[2] = GEN_FLT_TO(param_2[2], REFG(float, 0x1375ac8));
  return (uint)param_2;
}

/* ref: FUN_00b675a0 */
unsigned int F_00b675a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb675a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = REFG(undefined4, 0x1302cf4);
  *param_1 = REFG(undefined4, 0x1302cf0);
  uVar2 = REFG(undefined4, 0x1302cf8);
  param_1[1] = uVar1;
  uVar1 = REFG(undefined4, 0x1302cfc);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return 0;
}

/* ref: FUN_00b675d0 */
uint F_00b675d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb675d0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  double dVar2;
  uint uVar3;
  float10 fVar4;
  
  iVar1 = *param_1;
  if (REFG(float, 0x1087f04) <= param_4) {
    *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1087f04));
    uVar3 = ((code *)*(gen_code32 *)(iVar1 + 0x10))(param_1);
    *param_3 = uVar3 - 2;
    return uVar3 - 2;
  }
  uVar3 = ((code *)*(gen_code32 *)(iVar1 + 0x10))();
  (*(int *)(gen_frame + 0x8)) = uVar3 - 1;
  dVar2 = (double)((float)GEN_TOF(((float10)(int)(uVar3 - 1) * (float10)param_4)));
  fVar4 = F_00c51c40((uint)(ulonglong)gen_d2bits(dVar2),
                       (int)((ulonglong)gen_d2bits(dVar2) >> 0x20),&(*(undefined4 *)(gen_frame + 0x4)));
  *param_2 = (float)fVar4;
  *param_3 = (int)gen_bits2d(CONCAT44((*(int *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4))));
  return (int)gen_bits2d(CONCAT44((*(int *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4))));
}

/* ref: FUN_00b67660 */
unsigned int F_00b67660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb67660u, gen_a0, gen_a1, gen_a2, 0u);
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
                      fVar1 * ((float10)param_3[2] - (float10)*(float *)(param_2 + 8)))));
  param_1[3] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 0xc) +
                      ((float10)param_3[3] - (float10)*(float *)(param_2 + 0xc)) * fVar1)));
  return 0;
}

/* ref: FUN_00b676e0 */
uint F_00b676e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb676e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00b676f0 */
uint F_00b676f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb676f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: Client::DevEnv::Common::ControlPoint::IControlPoint::vf4 */
uint F_00b67710(void)
{
  GEN_ENTER(0xb67710u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::DevEnv::Common::ControlPoint::IControlPoint::vf5 */
uint F_00b67720(void)
{
  GEN_ENTER(0xb67720u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::DevEnv::Common::ControlPoint::IControlPoint::vf6 */
uint F_00b67730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb67730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::DevEnv::Common::ControlPoint::IControlPoint::vf7 */
unsigned int F_00b67740(void)
{
  GEN_ENTER(0xb67740u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::DevEnv::Common::ControlPoint::IControlPoint::vf8 */
unsigned int F_00b67750(void)
{
  GEN_ENTER(0xb67750u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::DevEnv::Common::ControlPoint::IControlPoint::vf1 */
uint F_00b67760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb67760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: Client::DevEnv::Common::ControlPoint::IControlPoint::vf2 */
uint F_00b67790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb67790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: Client::DevEnv::Common::ControlPoint::IControlPoint::vf3 */
uint F_00b677c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb677c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302c60));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302c64));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302c68));
  return (uint)param_1;
}

/* ref: FUN_00b677f0 */
uint F_00b677f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb677f0u, gen_a0, gen_a1, 0u, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float * pfVar1;
  float * pfVar2;
  float10 fVar3;
  float10 fVar4;
  
  pfVar1 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1,((undefined1 *)(gen_frame + 0x10)),param_4 + 1)));
  pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1,((undefined1 *)(gen_frame + 0x0)),param_4)));
  (*(float *)(gen_frame + 0x2c)) = *pfVar2;
  fVar3 = (float10)*pfVar2;
  fVar4 = (float10)param_3;
  *param_2 = ((float)GEN_TOF((fVar4 * ((float10)*pfVar1 - fVar3) + fVar3)));
  (*(float *)(gen_frame + 0x2c)) = pfVar2[1];
  fVar3 = (float10)pfVar2[1];
  param_2[1] = ((float)GEN_TOF((fVar3 + fVar4 * ((float10)pfVar1[1] - fVar3))));
  (*(float *)(gen_frame + 0x2c)) = pfVar2[2];
  fVar3 = (float10)pfVar2[2];
  param_2[2] = ((float)GEN_TOF((fVar3 + ((float10)pfVar1[2] - fVar3) * fVar4)));
  return (uint)param_2;
}

/* ref: FUN_00b67890 */
uint F_00b67890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb67890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00b678c0 */
uint F_00b678c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb678c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00b678f0 */
uint F_00b678f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb678f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00b67920 */
uint F_00b67920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb67920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 * puVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 4))(this,&(*(float *)(gen_frame + 0x10)),param_3);
  ((code *)*(gen_code32 *)(*(int *)this + 4))(this,&(*(float *)(gen_frame + 0x20)),param_3 + 1);
  (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x14)));
  (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)(gen_frame + 0x18)));
  (*(float *)(gen_frame + 0x0)) = (float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x14)));
  (*(float *)(gen_frame + 0x8)) = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)(gen_frame + 0x18)));
  puVar1 = (undefined4 *)F_0046f390(&(*(float *)(gen_frame + 0x0)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: FUN_00b679c0 */
uint F_00b679c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb679c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00b679f0 */
uint F_00b679f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb679f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: Client::DevEnv::Common::ControlPoint::IControlPoint::vf0 */
uint F_00b67ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb67ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f37dc));
  if (*(int *)(this + 4) != 0) {
    F_00406ad0(*(int *)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b67b00 */
uint F_00b67b00(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb67b00u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  if (REFG(float, 0x1087f04) <= param_3) {
    param_3 = REFG(float, 0x1087f04);
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
    iVar3 = uVar2 - 2;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))();
    (*(float *)(gen_frame + 0x8)) = gen_bits2f(uVar2 - 1);
    dVar1 = (double)((float)GEN_TOF(((float10)(int)(uVar2 - 1) * (float10)param_3)));
    fVar4 = F_00c51c40((uint)(ulonglong)gen_d2bits(dVar1),
                         (int)((ulonglong)gen_d2bits(dVar1) >> 0x20),&(*(undefined4 *)(gen_frame + 0x4)));
    param_3 = (float)fVar4;
    dVar1 = gen_bits2d(CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x8))),(*(undefined4 *)(gen_frame + 0x4))));
    (*(float *)(gen_frame + 0x8)) = (float)dVar1;
    iVar3 = (int)dVar1;
  }
  F_00b677f0(param_1,param_2,param_3,iVar3);
  return param_2;
}

/* ref: FUN_00b67b90 */
uint F_00b67b90(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb67b90u, gen_a0, gen_a1, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00b66320(*(undefined4 *)(param_1 + 4),param_2,param_3,param_4);
  return param_2;
}

/* ref: FUN_00b67bc0 */
uint F_00b67bc0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb67bc0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  if (REFG(float, 0x1087f04) <= param_3) {
    param_3 = REFG(float, 0x1087f04);
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
    iVar3 = uVar2 - 2;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))();
    (*(float *)(gen_frame + 0x8)) = gen_bits2f(uVar2 - 1);
    dVar1 = (double)((float)GEN_TOF(((float10)(int)(uVar2 - 1) * (float10)param_3)));
    fVar4 = F_00c51c40((uint)(ulonglong)gen_d2bits(dVar1),
                         (int)((ulonglong)gen_d2bits(dVar1) >> 0x20),&(*(undefined4 *)(gen_frame + 0x4)));
    param_3 = (float)fVar4;
    dVar1 = gen_bits2d(CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x8))),(*(undefined4 *)(gen_frame + 0x4))));
    (*(float *)(gen_frame + 0x8)) = (float)dVar1;
    iVar3 = (int)dVar1;
  }
  F_00b67920(param_1,param_2,(undefined4)gen_fl2bits(param_3),iVar3);
  return param_2;
}

/* ref: FUN_00b67c50 */
uint F_00b67c50(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb67c50u, gen_a0, gen_a1, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00b66400(*(undefined4 *)(param_1 + 4),param_2,param_3,param_4);
  return param_2;
}

/* ref: FUN_00b67c80 */
uint F_00b67c80(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb67c80u, gen_a0, gen_a1, 0u, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float * pfVar2;
  float10 fVar3;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 8))(param_1,((undefined1 *)(gen_frame + 0x10)),param_4 + 1)));
  (*(float *)(gen_frame + 0x4c)) = *pfVar2;
  fVar1 = (float)((float10)*pfVar2 * (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x4c)) = fVar1;
  fVar3 = F_00c4cde0(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)fVar1);
  (*(float *)(gen_frame + 0x48)) = (float)fVar3;
  ((float *)(gen_frame + 0x30))[0] = (float)fVar3;
  ((float *)(gen_frame + 0x30))[1] = 0.0;
  ((float *)(gen_frame + 0x30))[2] = 0.0;
  fVar3 = F_00c4ca20(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)(*(float *)(gen_frame + 0x4c)));
  (*(float *)(gen_frame + 0x48)) = (float)fVar3;
  ((float *)(gen_frame + 0x30))[3] = (float)fVar3;
  F_0054d030(((float *)(gen_frame + 0x30)),in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,pfVar2[1]);
  F_0054d0f0(((float *)(gen_frame + 0x30)),in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,pfVar2[2]);
  pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 8))(param_1,((undefined1 *)(gen_frame + 0x0)),param_4)));
  (*(float *)(gen_frame + 0x48)) = *pfVar2;
  fVar1 = (float)((float10)*pfVar2 * (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x4c)) = fVar1;
  fVar3 = F_00c4cde0(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)fVar1);
  (*(float *)(gen_frame + 0x48)) = (float)fVar3;
  ((float *)(gen_frame + 0x20))[0] = (float)fVar3;
  ((float *)(gen_frame + 0x20))[1] = 0.0;
  ((float *)(gen_frame + 0x20))[2] = 0.0;
  fVar3 = F_00c4ca20(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)(*(float *)(gen_frame + 0x4c)));
  (*(float *)(gen_frame + 0x48)) = (float)fVar3;
  ((float *)(gen_frame + 0x20))[3] = (float)fVar3;
  F_0054d030(((float *)(gen_frame + 0x20)),in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,pfVar2[1]);
  F_0054d0f0(((float *)(gen_frame + 0x20)),in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,pfVar2[2]);
  F_00b67660(param_2,(uint)((float *)(gen_frame + 0x20)),((float *)(gen_frame + 0x30)),param_3);
  return param_2;
}

/* ref: FUN_00b67db0 */
uint F_00b67db0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb67db0u, gen_a0, gen_a1, 0u, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float * pfVar2;
  float10 fVar3;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 8))(param_1,((undefined1 *)(gen_frame + 0x10)),param_4 + 1)));
  (*(float *)(gen_frame + 0x4c)) = *pfVar2;
  fVar1 = (float)((float10)*pfVar2 * (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x4c)) = fVar1;
  fVar3 = F_00c4cde0(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)fVar1);
  (*(float *)(gen_frame + 0x48)) = (float)fVar3;
  ((float *)(gen_frame + 0x30))[0] = (float)fVar3;
  ((float *)(gen_frame + 0x30))[1] = 0.0;
  ((float *)(gen_frame + 0x30))[2] = 0.0;
  fVar3 = F_00c4ca20(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)(*(float *)(gen_frame + 0x4c)));
  (*(float *)(gen_frame + 0x48)) = (float)fVar3;
  ((float *)(gen_frame + 0x30))[3] = (float)fVar3;
  F_0054d030(((float *)(gen_frame + 0x30)),in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,pfVar2[1]);
  F_0054d0f0(((float *)(gen_frame + 0x30)),in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,pfVar2[2]);
  pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 8))(param_1,((undefined1 *)(gen_frame + 0x0)),param_4)));
  (*(float *)(gen_frame + 0x48)) = *pfVar2;
  fVar1 = (float)((float10)*pfVar2 * (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x4c)) = fVar1;
  fVar3 = F_00c4cde0(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)fVar1);
  (*(float *)(gen_frame + 0x48)) = (float)fVar3;
  ((float *)(gen_frame + 0x20))[0] = (float)fVar3;
  ((float *)(gen_frame + 0x20))[1] = 0.0;
  ((float *)(gen_frame + 0x20))[2] = 0.0;
  fVar3 = F_00c4ca20(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)(*(float *)(gen_frame + 0x4c)));
  (*(float *)(gen_frame + 0x48)) = (float)fVar3;
  ((float *)(gen_frame + 0x20))[3] = (float)fVar3;
  F_0054d030(((float *)(gen_frame + 0x20)),in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,pfVar2[1]);
  F_0054d0f0(((float *)(gen_frame + 0x20)),in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,pfVar2[2]);
  F_009fac00(param_2,(uint)((float *)(gen_frame + 0x20)),(uint)((float *)(gen_frame + 0x30)),param_3);
  return param_2;
}

/* ref: FUN_00b67ee0 */
uint F_00b67ee0(float gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb67ee0u, 0u, gen_a1, 0u, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[0]);
  uVar1 = *(undefined4 *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 4);
  F_00b64a60(uVar1,&(*(float *)(gen_frame + 0x8)),&(*(float *)&gen_args[2]),(*(float *)&gen_args[2]));
  F_00b66320(uVar1,(*(uint *)&gen_args[1]),(*(float *)(gen_frame + 0x8)),(undefined4)gen_fl2bits((*(float *)&gen_args[2])));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00b68000 */
uint F_00b68000(float gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb68000u, 0u, gen_a1, 0u, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[0]);
  uVar1 = *(undefined4 *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 4);
  F_00b64a60(uVar1,&(*(float *)(gen_frame + 0x8)),&(*(float *)&gen_args[2]),(*(float *)&gen_args[2]));
  F_00b66400(uVar1,(*(uint *)&gen_args[1]),(*(float *)(gen_frame + 0x8)),(undefined4)gen_fl2bits((*(float *)&gen_args[2])));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00b68040 */
uint F_00b68040(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb68040u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  if (REFG(float, 0x1087f04) <= param_3) {
    param_3 = REFG(float, 0x1087f04);
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
    iVar3 = uVar2 - 2;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))();
    (*(float *)(gen_frame + 0x8)) = gen_bits2f(uVar2 - 1);
    dVar1 = (double)((float)GEN_TOF(((float10)(int)(uVar2 - 1) * (float10)param_3)));
    fVar4 = F_00c51c40((uint)(ulonglong)gen_d2bits(dVar1),
                         (int)((ulonglong)gen_d2bits(dVar1) >> 0x20),&(*(undefined4 *)(gen_frame + 0x4)));
    param_3 = (float)fVar4;
    dVar1 = gen_bits2d(CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x8))),(*(undefined4 *)(gen_frame + 0x4))));
    (*(float *)(gen_frame + 0x8)) = (float)dVar1;
    iVar3 = (int)dVar1;
  }
  F_00b67c80(param_1,param_2,param_3,iVar3);
  return param_2;
}

/* ref: FUN_00b680d0 */
uint F_00b680d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb680d0u, gen_a0, gen_a1, 0u, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00b67db0(param_1,param_2,param_3,param_4);
  return param_2;
}

/* ref: FUN_00b680f0 */
uint F_00b680f0(float gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb680f0u, 0u, gen_a1, 0u, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[0]);
  F_00b64a60(*(undefined4 *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 4),&(*(float *)(gen_frame + 0x8)),&(*(float *)&gen_args[2]),(*(float *)&gen_args[2]));
  F_00b67db0((undefined4)gen_fl2bits((*(float *)&gen_args[0])),(*(uint *)&gen_args[1]),(*(float *)(gen_frame + 0x8)),(undefined4)gen_fl2bits((*(float *)&gen_args[2])));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00b68130 */
uint F_00b68130(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb68130u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  
  if (REFG(float, 0x1087f04) <= param_3) {
    (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
    iVar4 = uVar3 - 2;
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x10))();
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f(uVar3 - 1);
    fVar1 = ((float)GEN_TOF(((float10)(int)(uVar3 - 1) * (float10)param_3)));
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    dVar2 = (double)fVar1;
    fVar5 = F_00c51c40((uint)(ulonglong)gen_d2bits(dVar2),
                         (int)((ulonglong)gen_d2bits(dVar2) >> 0x20),&(*(undefined4 *)(gen_frame + 0x8)));
    (*(float *)(gen_frame + 0x1c)) = (float)fVar5;
    dVar2 = gen_bits2d(CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0xc))),(*(undefined4 *)(gen_frame + 0x8))));
    (*(float *)(gen_frame + 0xc)) = (float)dVar2;
    iVar4 = (int)dVar2;
  }
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1302c90));
  param_2[1] = GEN_FLT_TO(param_2[1], REFG(float, 0x1302c94));
  param_2[2] = GEN_FLT_TO(param_2[2], REFG(float, 0x1302c98));
  F_00b67c80(param_1,((undefined1 *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x1c)),iVar4);
  F_004f41e0(param_2,((undefined1 *)(gen_frame + 0x0)));
  return (uint)param_2;
}

/* ref: FUN_00b68270 */
uint F_00b68270(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb68270u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00b64a60(*(undefined4 *)(param_1 + 4),&(*(float *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x1c)),param_3);
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1302c90));
  param_2[1] = GEN_FLT_TO(param_2[1], REFG(float, 0x1302c94));
  param_2[2] = GEN_FLT_TO(param_2[2], REFG(float, 0x1302c98));
  F_00b67db0(param_1,((undefined1 *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)));
  F_004f41e0(param_2,((undefined1 *)(gen_frame + 0x0)));
  return (uint)param_2;
}

/* ref: FUN_00b68310 */
uint F_00b68310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  return (uint)(((*(uint *)this ^ *param_1) & 0xc0000000) == 0 &&
               ((*(uint *)this ^ *param_1) & 0x3fffffff) == 0);
}

/* ref: FUN_00b68340 */
uint F_00b68340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x45c) = param_2;
  return param_2;
}

/* ref: FUN_00b68360 */
unsigned int F_00b68360(float gen_a0)
{
  GEN_ENTER(0xb68360u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b68380 */
unsigned int F_00b68380(unsigned int gen_a0)
{
  GEN_ENTER(0xb68380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(int *)((int)this + 0x14) == 0) && (*(int *)((int)this + 0x10) != 0)) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x45c))) = 0;
    F_00b59c20(REFG(undefined4, 0x14c4e78),*(undefined4 *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return 0;
}

/* ref: FUN_00b683c0 */
byte F_00b683c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb683c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x9dc);
  if ((iVar1 != 0) && (-1 < *(int *)(param_1 + 4))) {
    piVar2 = (int *)((int)this + iVar1 * 4 + 0x9bc);
    do {
      piVar2 = piVar2 + -1;
      iVar1 = iVar1 + -1;
      if (*piVar2 == *(int *)(param_1 + 4)) {
        return 0;
      }
    } while (iVar1 != 0);
  }
  return 1;
}

/* ref: FUN_00b68400 */
unsigned int F_00b68400(unsigned int gen_a0)
{
  GEN_ENTER(0xb68400u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00b68410 */
uint F_00b68410(unsigned int gen_a0)
{
  GEN_ENTER(0xb68410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if ((uVar1 == 0) && (uVar1 = F_00b59660(REFG(undefined4, 0x14c4e78),(int)this + 0x9a8), uVar1 != 0)) {
    *(uint *)((int)this + 0x10) = uVar1;
    F_00b595f0(uVar1);
    *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x45c))) = this;
  }
  return uVar1;
}

/* ref: FUN_00b68450 */
uint F_00b68450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10f38a0));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[0x269] = param_2;
  F_00bbac80(in_ecx + 0x26a);
  in_ecx[0x278] = in_ecx[0x278] & 0xfffffffe;
  in_ecx[0x277] = 0;
  in_ecx[0x279] = 0;
  in_ecx[0x27a] = 0;
  *(undefined2 *)(in_ecx + 0x27b) = 0xffff;
  in_ecx[0x27c] = 0xffffffff;
  *(undefined2 *)(in_ecx + 0x27d) = 0;
  *(undefined1 *)((int)in_ecx + 0x9f6) = 0;
  iVar2 = 4;
  do {
    iVar1 = iVar2 + -1;
    *(undefined1 *)((int)in_ecx + iVar2 + 0x99f) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return (uint)in_ecx;
}

/* ref: FUN_00b684e0 */
uint F_00b684e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb684e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * this_00;
  uint uVar1;
  byte bVar2;
  
  uVar1 = (*(uint *)&gen_args[1]);
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    bVar2 = F_00bcf9f0(this_00,uVar1,&(*(uint *)&gen_args[1]));
    if (bVar2 != 0) break;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x9c);
  }
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00b68520 */
uint F_00b68520(unsigned int gen_a0)
{
  GEN_ENTER(0xb68520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint in_EAX = 0;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x14); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x9c)) {
    in_EAX = F_00bd0840(this_00);
  }
  return in_EAX;
}

/* ref: FUN_00b68540 */
uint F_00b68540(unsigned int gen_a0)
{
  GEN_ENTER(0xb68540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint in_EAX = 0;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x14); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x9c)) {
    in_EAX = F_00bd0970(this_00);
  }
  return in_EAX;
}

/* ref: FUN_00b68560 */
uint F_00b68560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb68560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x14); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x9c)) {
    in_EAX = F_00bcfbe0(this_00);
    if (in_EAX == param_1) {
      if ((char)param_2 == '\0') {
        in_EAX = F_00bd0910(this_00);
      }
      else {
        bVar1 = F_00bd0880(this_00,1,0);
        in_EAX = CONCAT31(extraout_var,bVar1);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00b685b0 */
uint F_00b685b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb685b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  byte bVar1;
  int * this_00;
  uint in_EAX = 0;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  this_00 = *(int * PTR32 *)((int)this + 0x14);
  do {
    if (this_00 == (int *)0x0) {
      return in_EAX;
    }
    if (param_2 == (byte *)0x0) {
LAB_00b685fb: ;
      in_EAX = F_00bc2aa0(this_00,param_1);
    }
    else {
      pbVar2 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*this_00 + 0x5c))(this_00)));
      pbVar3 = param_2;
      do {
        bVar1 = *pbVar3;
        bVar4 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_00b685f2: ;
          in_EAX = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
          goto LAB_00b685f7;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar4 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_00b685f2;
        pbVar3 = pbVar3 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      in_EAX = 0;
LAB_00b685f7: ;
      if (in_EAX == 0) goto LAB_00b685fb;
    }
    this_00 = (int *)this_00[0x27];
  } while( true );
}

/* ref: FUN_00b68620 */
uint F_00b68620(unsigned int gen_a0)
{
  GEN_ENTER(0xb68620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint in_EAX = 0;
  
  for (piVar1 = *(int * PTR32 *)((int)this + 0x14); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x27]) {
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x94))(piVar1);
    if (in_EAX != 0) {
      *(undefined1 *)(in_EAX + 0x21) = 0;
    }
  }
  return in_EAX;
}

/* ref: FUN_00b68650 */
unsigned int F_00b68650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  *(uint *)((int)this + 0x9e0) = *(uint *)((int)this + 0x9e0) & 0xfffffffe | param_1 & 1;
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 != 0) {
    do {
      *(uint *)(iVar1 + 0x138) = *(uint *)(iVar1 + 0x138) & 0xfffffffd | (param_1 & 1) * 2;
      iVar1 = *(int *)(iVar1 + 0x9c);
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00b686a0 */
uint F_00b686a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb686a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if ((uVar1 == 0) && (uVar1 = F_00b59660(REFG(undefined4, 0x14c4e78),(int)this + 0x9a8), uVar1 != 0)) {
    *(uint *)((int)this + 0x10) = uVar1;
    F_00b595f0(uVar1);
    *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x45c))) = this;
  }
  if (uVar1 != 0) {
    uVar1 = F_00b5ccd0(REFG(undefined4, 0x14c4e90),param_1,uVar1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00b68700 */
uint F_00b68700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x14);
  uVar2 = 0xffffffff;
  do {
    if (this_00 == (undefined *)0x0) {
      return uVar2;
    }
    uVar1 = F_00bd0ae0(this_00,param_1);
    if ((char)uVar1 != '\0') {
      if (*(char *)((int)this_00 + 0x24a) != '\0') {
        return 0xffffffff;
      }
      if (*(char *)((int)this_00 + 8) == '\0') {
        return 0;
      }
      uVar2 = 1;
    }
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x9c);
  } while( true );
}

/* ref: FUN_00b68760 */
byte F_00b68760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * this_00;
  uint uVar1;
  
  this_00 = *(int * PTR32 *)((int)this + 0x14);
  do {
    if (this_00 == (int *)0x0) {
      return 0;
    }
    uVar1 = F_00bd0ae0(this_00,param_1);
    if ((char)uVar1 != '\0') {
      if (*(char *)((int)this_00 + 0x24a) != '\0') {
        return 0;
      }
      if (((char)this_00[2] == '\0') ||
         ((*(char *)((int)this_00 + 0xd) != '\0' &&
          (uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0x10))(this_00), (char)uVar1 == '\0')))) {
        return 1;
      }
    }
    this_00 = (int *)this_00[0x27];
  } while( true );
}

/* ref: FUN_00b687c0 */
byte F_00b687c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb687c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  byte bVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  iVar2 = *(int *)((int)this + 0x9dc);
  if ((iVar2 != 0) && (-1 < *(int *)(param_1 + 4))) {
    piVar4 = (int *)((int)this + iVar2 * 4 + 0x9bc);
    do {
      piVar4 = piVar4 + -1;
      iVar2 = iVar2 + -1;
      if (*piVar4 == *(int *)(param_1 + 4)) {
        return 0;
      }
    } while (iVar2 != 0);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x14);
  do {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    uVar3 = F_00bd0ae0(this_00,param_1);
    if ((char)uVar3 != '\0') {
      if (*(char *)((int)this_00 + 0x24a) != '\0') {
        return 0;
      }
      bVar1 = F_00bcfba0(this_00);
      if (bVar1 == 0) {
        return 0;
      }
      if ((*(char *)((int)this_00 + 8) == '\0') ||
         ((*(char *)((int)this_00 + 0xd) != '\0' && (*(char *)((int)this_00 + 0xf) == '\0')))) {
        return 1;
      }
    }
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x9c);
  } while( true );
}

/* ref: FUN_00b68840 */
byte F_00b68840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68840u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int in_ecx_00;
  uint uVar1;
  
  in_ecx_00 = *(int *)(in_ecx + 0x14);
  do {
    if (in_ecx_00 == 0) {
      return 0;
    }
    uVar1 = F_00bcfbe0(in_ecx_00);
    if (uVar1 == param_2) {
      if (*(char *)(in_ecx_00 + 0x24a) != '\0') {
        return 0;
      }
      if ((*(char *)(in_ecx_00 + 8) == '\0') ||
         ((*(char *)(in_ecx_00 + 0xd) != '\0' && (*(char *)(in_ecx_00 + 0xf) == '\0')))) {
        return 1;
      }
    }
    in_ecx_00 = *(int *)(in_ecx_00 + 0x9c);
  } while( true );
}

/* ref: FUN_00b68890 */
uint F_00b68890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x14); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x9c)) {
    uVar1 = F_00bd0ae0(this_00,param_1);
    if (((char)uVar1 != '\0') && (uVar1 = F_00bcff00(this_00), (int)uVar2 < (int)uVar1)) {
      uVar2 = uVar1;
    }
  }
  return uVar2;
}

/* ref: FUN_00b688d0 */
uint F_00b688d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb688d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined * this;
  uint in_EAX = 0;
  
  for (this = *(undefined * PTR32 *)(param_1 + 0x14); this != (undefined *)0x0; this = *(undefined * PTR32 *)((int)this + 0x9c))
  {
    in_EAX = F_00bd0ae0(this,param_2);
    if ((((char)in_EAX != '\0') && (*(char *)((int)this + 0x24a) == '\0')) &&
       (*(char *)((int)this + 0xf) == '\0')) {
      in_EAX = F_00bcfc00(this,param_3);
    }
  }
  return in_EAX;
}

/* ref: FUN_00b68920 */
uint F_00b68920(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb68920u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined * this;
  uint in_EAX = 0;
  
  for (this = *(undefined * PTR32 *)(param_1 + 0x14); this != (undefined *)0x0; this = *(undefined * PTR32 *)((int)this + 0x9c))
  {
    in_EAX = F_00bd0ae0(this,param_2);
    if ((((char)in_EAX != '\0') && (*(char *)((int)this + 0x24a) == '\0')) &&
       (*(char *)((int)this + 0xf) == '\0')) {
      in_EAX = F_00bcfc70(this,param_3);
    }
  }
  return in_EAX;
}

/* ref: FUN_00b68970 */
unsigned int F_00b68970(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb68970u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined * this;
  uint uVar1;
  
  for (this = *(undefined * PTR32 *)(param_1 + 0x14); this != (undefined *)0x0; this = *(undefined * PTR32 *)((int)this + 0x9c))
  {
    uVar1 = F_00bd0ae0(this,param_2);
    if ((((char)uVar1 != '\0') && (*(char *)((int)this + 0x24a) == '\0')) &&
       (*(char *)((int)this + 0xf) == '\0')) {
      F_00bd1550(this,param_3);
    }
  }
  return 0;
}

/* ref: FUN_00b689c0 */
byte F_00b689c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb689c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  char cVar1;
  
  cVar1 = (char)param_1;
  if (*(char *)((int)this + 0x9f6) != cVar1) {
    this_00 = *(undefined * PTR32 *)((int)this + 0x14);
    *(char *)((int)this + 0x9f6) = cVar1;
    for (; this_00 != (undefined *)0x0; this_00 = *(undefined * PTR32 *)((int)this_00 + 0x9c)) {
      if ((cVar1 == '\0') || (*(char *)((int)this_00 + 0x24a) == '\0')) {
        F_00bc3440(this_00,2,param_1,0);
      }
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00b68a10 */
unsigned int F_00b68a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb68a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x14); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x9c)) {
    uVar1 = F_00bd0ae0(this_00,param_1);
    if (((char)uVar1 != '\0') && (*(char *)((int)this_00 + 0x24a) == '\0')) {
      F_00bc3440(this_00,2,param_2,0);
    }
  }
  return 0;
}

/* ref: FUN_00b68a60 */
byte F_00b68a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb68a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (*param_2 == 0) {
    *param_2 = *(int *)((int)this + 0x14);
  }
  else {
    *param_2 = *(int *)(*param_2 + 0x9c);
  }
  iVar1 = *param_2;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = *(uint *)(*param_2 + 0xf8);
    if (((*param_1 ^ uVar2) & 0xc0000000) == 0 && ((*param_1 ^ uVar2) & 0x3fffffff) == 0) break;
    iVar1 = *(int *)(*param_2 + 0x9c);
    *param_2 = iVar1;
  }
  return 1;
}

/* ref: FUN_00b68ad0 */
byte F_00b68ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb68ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (*param_2 == 0) {
    *param_2 = *(int *)((int)this + 0x14);
  }
  else {
    *param_2 = *(int *)(*param_2 + 0x9c);
  }
  iVar1 = *param_2;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = F_00bd0ae0((undefined *)*param_2,param_1);
    if ((char)uVar2 != '\0') break;
    iVar1 = *(int *)(*param_2 + 0x9c);
    *param_2 = iVar1;
  }
  return 1;
}

/* ref: FUN_00b68b20 */
byte F_00b68b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb68b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  bool bVar6;
  
  if (*param_3 == 0) {
    *param_3 = *(int *)((int)this + 0x14);
  }
  else {
    *param_3 = *(int *)(*param_3 + 0x9c);
  }
  iVar2 = *param_3;
  do {
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = *param_3;
    if (*(int *)(iVar2 + 200) == -1) {
      pbVar3 = *(byte * PTR32 *)(iVar2 + 0xd4);
      pbVar5 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00b68b90: ;
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00b68b95;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00b68b90;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00b68b95: ;
      bVar6 = iVar4 == 0;
    }
    else {
      bVar6 = *(int *)(iVar2 + 200) == param_2;
    }
    if (bVar6) {
      return 1;
    }
    iVar2 = *(int *)(iVar2 + 0x9c);
    *param_3 = iVar2;
  } while( true );
}

/* ref: FUN_00b68bc0 */
byte F_00b68bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb68bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (*param_2 == 0) {
    *param_2 = *(int *)((int)this + 0x14);
  }
  else {
    *param_2 = *(int *)(*param_2 + 0x9c);
  }
  iVar1 = *param_2;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(*param_2 + 0xd0) == param_1) break;
    iVar1 = *(int *)(*param_2 + 0x9c);
    *param_2 = iVar1;
  }
  return 1;
}

/* ref: FUN_00b68c10 */
uint F_00b68c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68c10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(in_ecx + 0x14);
  for (iVar2 = param_2; (iVar1 != 0 && (iVar2 != 0)); iVar2 = iVar2 + -1) {
    iVar1 = *(int *)(iVar1 + 0x9c);
  }
  return iVar1 + 0xfc;
}

/* ref: FUN_00b68c40 */
uint F_00b68c40(unsigned int gen_a0)
{
  GEN_ENTER(0xb68c40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  uint in_EAX = 0;
  
  for (iVar1 = *(int *)(in_ecx + 0x14); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x9c)) {
    F_00bcf970();
  }
  *(undefined4 *)(in_ecx + 0x9dc) = 0;
  *(undefined1 *)(in_ecx + 0x9f5) = 0;
  return in_EAX;
}

/* ref: FUN_00b68c80 */
uint F_00b68c80(unsigned int gen_a0)
{
  GEN_ENTER(0xb68c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint in_EAX = 0;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x14); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x9c)) {
    in_EAX = F_00bcf980(this_00);
  }
  *(undefined4 *)((int)this + 0x9dc) = 0;
  *(undefined1 *)((int)this + 0x9f5) = 1;
  return in_EAX;
}

/* ref: FUN_00b68cc0 */
unsigned int F_00b68cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68cc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int in_ecx_00;
  
  for (in_ecx_00 = *(int *)(in_ecx + 0x14); in_ecx_00 != 0; in_ecx_00 = *(int *)(in_ecx_00 + 0x9c))
  {
    F_00bc2a10(in_ecx_00,param_2);
  }
  return 0;
}

/* ref: FUN_00b68cf0 */
byte F_00b68cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  
  if (*(int *)((int)this + 0x9e4) == 1) {
    for (pvVar2 = *(undefined * PTR32 *)((int)this + 0x14); pvVar2 != (undefined *)0x0;
        pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x9c)) {
      uVar1 = F_00bd0ae0(pvVar2,param_1);
      if ((char)uVar1 != '\0') {
        return 1;
      }
    }
    for (pvVar2 = *(undefined * PTR32 *)((int)this + 0x14); pvVar2 != (undefined *)0x0;
        pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x9c)) {
      F_00bd0910(pvVar2);
    }
    pvVar2 = (undefined *)F_00b68410(this);
    if (pvVar2 != (undefined *)0x0) {
      F_00bc3bc0(pvVar2,0);
    }
  }
  *(undefined4 *)((int)this + 0x9e4) = 0;
  return 0;
}

/* ref: FUN_00b68d80 */
uint F_00b68d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb68d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  byte bVar2;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x14); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
    in_EAX = F_00bd0ae0(pvVar1,param_1);
    if ((char)in_EAX != '\0') {
      bVar2 = F_00bd0880(pvVar1,1,param_2);
      in_EAX = CONCAT31(extraout_var,bVar2);
    }
  }
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x14); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
    in_EAX = F_00bd0840(pvVar1);
  }
  return in_EAX;
}

/* ref: FUN_00b68de0 */
uint F_00b68de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb68de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  byte bVar2;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x14); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
    in_EAX = F_00bd0ae0(pvVar1,param_1);
    if ((char)in_EAX != '\0') {
      bVar2 = F_00bd0880(pvVar1,3,param_2);
      in_EAX = CONCAT31(extraout_var,bVar2);
    }
  }
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x14); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
    in_EAX = F_00bd0840(pvVar1);
  }
  return in_EAX;
}

/* ref: FUN_00b68e40 */
uint F_00b68e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 4;
  do {
    iVar4 = iVar3 + -1;
    if (*(char *)((int)this + iVar3 + 0x99f) == '\0') {
      pvVar1 = (undefined *)(iVar4 * 0x260 + 0x20 + (int)this);
      if (pvVar1 == (undefined *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = F_00bd0210(pvVar1,this);
      }
      *(undefined1 *)(iVar3 + 0x99f + (int)this) = 1;
      if (uVar2 != 0) goto LAB_00b68eb5;
      break;
    }
    iVar3 = iVar4;
  } while (iVar4 != 0);
  pvVar1 = (undefined *)F_00406b90(0x260,0,0x10);
  if ((pvVar1 == (undefined *)0x0) || (uVar2 = F_00bd0210(pvVar1,this), uVar2 == 0)) {
    return 0;
  }
LAB_00b68eb5: ;
  *(undefined4 *)(uVar2 + 0xf8) = *param_1;
  F_00b69d80((undefined *)(uVar2 + 0x98),(int *)((int)this + 0x14));
  iVar3 = *(int *)((int)this + 0x14);
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  if (iVar3 != 0) {
    iVar4 = 1;
    do {
      *(int *)(iVar3 + 0x1e0) = iVar4;
      iVar3 = *(int *)(iVar3 + 0x9c);
      iVar4 = iVar4 + 1;
    } while (iVar3 != 0);
  }
  return uVar2;
}

/* ref: FUN_00b68f00 */
uint F_00b68f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1,3,&REFG(undefined, 0x13056c0));
  iVar1 = param_1[0x26];
  iVar2 = param_1[0x27];
  if (iVar1 == 0) {
    *(int *)((int)this + 0x14) = iVar2;
  }
  else {
    *(int *)(iVar1 + 0x9c) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x98) = iVar1;
  }
  if (((int *)((int)this + 0x20U) <= param_1) && (param_1 < (int *)((int)this + 0x9a0U))) {
    ((code *)*(gen_code32 *)*param_1)(param_1,0);
    uVar3 = (int)param_1 + (-0x20 - (int)this);
    *(undefined1 *)(uVar3 / 0x260 + 0x9a0 + (int)this) = 0;
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
    return uVar3 * -0x50d79435;
  }
  uVar3 = ((code *)*(gen_code32 *)*param_1)(param_1,1);
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  return uVar3;
}

/* ref: FUN_00b68fa0 */
uint F_00b68fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xb68fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)((int)this + 0x14);
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[0x27];
    ((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4,3,&REFG(undefined, 0x13056c0));
    iVar2 = piVar4[0x26];
    iVar3 = piVar4[0x27];
    if (iVar2 == 0) {
      *(int *)((int)this + 0x14) = iVar3;
    }
    else {
      *(int *)(iVar2 + 0x9c) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x98) = iVar2;
    }
    if ((piVar4 < (int *)((int)this + 0x20U)) || ((int *)((int)this + 0x9a0U) <= piVar4)) {
      ((code *)*(gen_code32 *)*piVar4)(piVar4,1);
    }
    else {
      ((code *)*(gen_code32 *)*piVar4)(piVar4,0);
      *((undefined1 *)GEN_TOP(((uint)((int)piVar4 + (-0x20 - (int)this)) / 0x260 + 0x9a0 + (int)this))) = 0;
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
    piVar4 = piVar1;
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return 0;
}

/* ref: FUN_00b69050 */
byte F_00b69050(unsigned int gen_a0)
{
  GEN_ENTER(0xb69050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  while (piVar1 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
    if ((char)uVar4 == '\0') {
      piVar1 = (int *)piVar1[0x27];
    }
    else {
      ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,3,&REFG(undefined, 0x13056c0));
      iVar2 = piVar1[0x26];
      iVar3 = piVar1[0x27];
      if (iVar2 == 0) {
        *(int *)((int)this + 0x14) = iVar3;
      }
      else {
        *(int *)(iVar2 + 0x9c) = iVar3;
      }
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x98) = iVar2;
      }
      if ((piVar1 < (int *)((int)this + 0x20U)) || ((int *)((int)this + 0x9a0U) <= piVar1)) {
        ((code *)*(gen_code32 *)*piVar1)(piVar1,1);
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
        piVar1 = *(int * PTR32 *)((int)this + 0x14);
      }
      else {
        ((code *)*(gen_code32 *)*piVar1)(piVar1,0);
        *((undefined1 *)GEN_TOP(((uint)((int)piVar1 + (-0x20 - (int)this)) / 0x260 + 0x9a0 + (int)this))) = 0;
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
        piVar1 = *(int * PTR32 *)((int)this + 0x14);
      }
    }
  }
  if ((*(int *)((int)this + 0x14) == 0) && (*(char *)((int)this + 0x9f4) == '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b69120 */
byte F_00b69120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xb69120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  undefined * pvVar6;
  undefined * pvVar7;
  int local_8;
  
  if ((*(byte *)((int)this + 0x9e0) & 1) != 0) {
    return 0;
  }
  pvVar7 = (undefined *)0x0;
  if ((((char *)*param_2 != (char *)0x0) && (*(char *)*param_2 != '\0')) &&
     (bVar2 = F_00b683c0(this,param_2), bVar2 != 0)) {
    if (((*(int *)((int)this + 0x9e4) != 0) && ((char)param_6 == '\0')) &&
       (bVar2 = F_00b68cf0(this,param_2), bVar2 != 0)) {
      return 1;
    }
    pvVar6 = *(undefined * PTR32 *)((int)this + 0x14);
    piVar5 = (int *)((int)this + 0x14);
    local_8 = 0;
    if (pvVar6 != (undefined *)0x0) {
      do {
        uVar3 = F_00bd0ae0(pvVar6,param_2);
        if ((char)uVar3 == '\0') {
          local_8 = local_8 + 1;
        }
        else {
          bVar2 = F_00bcfba0(pvVar6);
          if (bVar2 == 0) {
            return 0;
          }
          if ((*(char *)((int)pvVar6 + 0x24a) == '\0') &&
             (((*(uint *)((int)pvVar6 + 0x138) >> 2 & 1) != 0 ||
              (bVar2 = F_00bcf500(pvVar6), bVar2 == 0)))) {
            if ((char)param_6 != '\0') {
              return 1;
            }
            F_00b69de0((undefined *)((int)pvVar6 + 0x98),piVar5);
            F_00b69d80((undefined *)((int)pvVar6 + 0x98),piVar5);
            iVar4 = 1;
            for (iVar1 = *piVar5; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x9c)) {
              *(int *)(iVar1 + 0x1e0) = iVar4;
              iVar4 = iVar4 + 1;
            }
            F_00bd1210(pvVar6,param_2,param_5);
            if (*(char *)((int)this + 0x9f6) != '\0') {
              F_00bc3440(pvVar6,2,1,0);
            }
            F_00b68520(this);
            return 1;
          }
        }
        if ((*(uint *)((int)pvVar6 + 0x138) >> 2 & 1) != 0) {
          pvVar7 = pvVar6;
        }
        pvVar6 = *(undefined * PTR32 *)((int)pvVar6 + 0x9c);
      } while (pvVar6 != (undefined *)0x0);
      if ((pvVar7 != (undefined *)0x0) &&
         (((char)param_6 != '\0' || (bVar2 = F_00bd0a80(pvVar7,param_5), bVar2 != 0)))) {
        F_00bd0910(pvVar7);
      }
    }
    if ((*(int *)(REFG(int, 0x1375b00) + 0x28) == 0) && (5 < local_8)) {
      iVar1 = local_8 + -5;
      pvVar7 = (undefined *)*piVar5;
      while ((pvVar6 = pvVar7, pvVar6 != (undefined *)0x0 && (iVar1 != 0))) {
        pvVar7 = *(undefined * PTR32 *)((int)pvVar6 + 0x9c);
        if (((*(char *)((int)pvVar6 + 0xd) == '\0') ||
            ((*(uint *)((int)pvVar6 + 0x138) >> 7 & 1) == 0)) &&
           (uVar3 = F_00bd1530(pvVar6), (char)uVar3 == '\0')) {
          F_00bd0910(pvVar6);
          iVar1 = iVar1 + -1;
        }
      }
    }
    pvVar7 = (undefined *)F_00b68e40(this,param_1);
    if (pvVar7 != (undefined *)0x0) {
      if (*(char *)((int)this + 0x9f6) != '\0') {
        F_00bc3440(pvVar7,2,1,0);
      }
      uVar3 = F_00bbad30((undefined *)((int)this + 0x9a8));
      F_00bcfcc0(pvVar7,uVar3,param_3,param_4);
      bVar2 = F_00bd1110(pvVar7,param_2,param_6,param_5);
      if (bVar2 != 0) {
        F_00b68520(this);
        if (*(char *)((int)this + 0x9f5) == '\0') {
          return 1;
        }
        F_00bcf980(pvVar7);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b69380 */
uint F_00b69380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb69380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00b68e40(this,param_1);
  uVar2 = 0;
  if (pvVar1 != (undefined *)0x0) {
    uVar2 = F_00bd1610(pvVar1,param_2,param_3);
    for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x14); pvVar1 != (undefined *)0x0;
        pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
      uVar2 = F_00bd0840(pvVar1);
    }
  }
  return uVar2;
}

/* ref: FUN_00b693d0 */
uint F_00b693d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xb693d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00b68e40(this,param_1);
  uVar2 = 0;
  if (pvVar1 != (undefined *)0x0) {
    if ((*(char *)((int)this + 0x9f6) != '\0') && ((char)param_6 == '\0')) {
      F_00bc3440(pvVar1,2,1,0);
    }
    uVar2 = F_00bd13a0(pvVar1,param_2,(int)this + 0x9a8,param_4,param_5,param_6);
    for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x14); pvVar1 != (undefined *)0x0;
        pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
      uVar2 = F_00bd0840(pvVar1);
    }
  }
  return uVar2;
}

/* ref: FUN_00b69440 */
uint F_00b69440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xb69440u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00b68e40(this,param_1);
  uVar2 = 0;
  if (pvVar1 != (undefined *)0x0) {
    if ((*(char *)((int)this + 0x9f6) != '\0') && ((char)param_7 == '\0')) {
      F_00bc3440(pvVar1,2,1,0);
    }
    uVar2 = F_00bd1460(pvVar1,param_2,(int)this + 0x9a8,param_4,param_5,param_6,param_7,param_8,
                         param_9,param_10);
    for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x14); pvVar1 != (undefined *)0x0;
        pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
      uVar2 = F_00bd0840(pvVar1);
    }
  }
  return uVar2;
}

/* ref: FUN_00b694c0 */
uint F_00b694c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, float gen_a9)
{
  GEN_ENTER(0xb694c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  float param_10 = (float)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  char * pcVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  if (param_4 == 0) {
    return 0;
  }
  pcVar2 = ((char *)GEN_TOP(((int)param_3 + (*param_3 & 0xffffff))));
  if (pcVar2 == (char *)0x0) {
    return 0;
  }
  if (*pcVar2 == '\0') {
    return (uint)pcVar2;
  }
  iVar5 = 0;
  for (pvVar1 = *(undefined * PTR32 *)((int)param_1 + 0x14); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
    if ((*(char *)((int)pvVar1 + 0xd) == '\0') && (*(int *)((int)pvVar1 + 200) == param_4 + 0x20000)
       ) {
      return (uint)pvVar1;
    }
    iVar5 = iVar5 + 1;
  }
  if ((*(int *)(REFG(int, 0x1375b00) + 0x28) == 0) && (1 < iVar5)) {
    iVar5 = iVar5 + -1;
    pvVar1 = *(undefined * PTR32 *)((int)param_1 + 0x14);
    while ((pvVar4 = pvVar1, pvVar4 != (undefined *)0x0 && (iVar5 != 0))) {
      pvVar1 = *(undefined * PTR32 *)((int)pvVar4 + 0x9c);
      if ((*(char *)((int)pvVar4 + 0xd) == '\0') &&
         (uVar3 = F_00bd1530(pvVar4), (char)uVar3 == '\0')) {
        F_00bd0910(pvVar4);
        iVar5 = iVar5 + -1;
      }
    }
  }
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  (*(int *)(gen_frame + 0x0)) = (*param_3 & 0xffffff) + (int)param_3;
  (*(int *)(gen_frame + 0x4)) = param_4 + 0x20000;
  pvVar4 = (undefined *)F_00b68e40((*(undefined * PTR32 *)(gen_frame + 0x8)),param_2);
  if (pvVar4 == (undefined *)0x0) {
    return 0;
  }
  if (*(char *)((int)pvVar1 + 0x9f6) == '\0') {
    if ((char)param_9 != '\0') goto LAB_00b695dd;
  }
  else {
    if ((char)param_9 != '\0') goto LAB_00b695dd;
    F_00bc3440(pvVar4,2,1,0);
  }
  *(short *)((int)pvVar1 + 0x9ec) = (short)param_3[1];
  uVar3 = F_00bbad30(param_6);
  *(uint *)((int)pvVar1 + 0x9f0) = uVar3;
  *(undefined4 *)((int)pvVar1 + 0x9e8) = *param_2;
LAB_00b695dd: ;
  F_00bd12c0(pvVar4,&(*(int *)(gen_frame + 0x0)),param_5,param_6,param_7,param_8,param_9,param_10);
  uVar3 = F_00b68520(pvVar1);
  return uVar3;
}

/* ref: FUN_00b69620 */
unsigned int F_00b69620(unsigned int gen_a0)
{
  GEN_ENTER(0xb69620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  if (-1 < *(short *)((int)this + 0x9ec)) {
    for (piVar1 = *(int * PTR32 *)((int)this + 0x14); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x27]) {
      if ((((piVar1[0x3e] ^ *(uint *)((int)this + 0x9e8)) & 0xc0000000) == 0 &&
           ((piVar1[0x3e] ^ *(uint *)((int)this + 0x9e8)) & 0x3fffffff) == 0) &&
         (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1), (char)uVar2 == '\0')) {
        return 0;
      }
    }
    F_00b5aba0(REFG(undefined4, 0x14c4e84),((undefined1 *)(gen_frame + 0x18)));
    uVar2 = F_00ab2ae0((int)*(short *)((int)this + 0x9ec));
    F_00bbac80(((undefined1 *)(gen_frame + 0x4)));
    F_00bbadf0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)((int)this + 0x9f0),0);
    F_00b694c0(this,((undefined1 *)(gen_frame + 0x18)),uVar2,(int)*(short *)((int)this + 0x9ec),(int)this + 0x9a8,((undefined1 *)(gen_frame + 0x4)),0,
                 0xffffffff,0,(float)(float10)0);
  }
  return 0;
}

/* ref: FUN_00b696f0 */
uint F_00b696f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb696f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00bbaea0((undefined *)((int)this + 0x9a8),param_1);
  if ((char)uVar2 != '\0') {
    *(undefined2 *)((int)this + 0x9ec) = 0xffff;
    *(undefined1 *)((int)this + 0x9f4) = 0;
  }
  for (piVar1 = *(int * PTR32 *)((int)this + 0x14); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x27]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1,param_1);
  }
  F_00b69050(this);
  uVar2 = F_00bbaf20((undefined *)((int)this + 0x9a8),param_1);
  if (*(char *)((int)this + 0x9f4) == '\0') {
    uVar2 = 0;
    if (*(int *)((int)this + 0x10) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x45c))) = 0;
      uVar2 = F_00b59c20(REFG(undefined4, 0x14c4e78),*(undefined4 *)((int)this + 0x10));
      *(undefined4 *)((int)this + 0x10) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00b69780 */
uint F_00b69780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined3 extraout_var = 0;
  int * piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = *(uint *)((int)this + 0x9dc);
  if ((uVar2 != 0) && (-1 < *(int *)(param_1 + 4))) {
    piVar4 = (int *)((int)this + uVar2 * 4 + 0x9bc);
    do {
      piVar4 = piVar4 + -1;
      uVar2 = uVar2 - 1;
      if (*piVar4 == *(int *)(param_1 + 4)) goto LAB_00b6988c;
    } while (uVar2 != 0);
  }
  F_00b5aba0(REFG(undefined4, 0x14c4e84),((undefined1 *)(gen_frame + 0x5c)));
  pvVar3 = (undefined *)F_00b68e40(this,((undefined1 *)(gen_frame + 0x5c)));
  uVar2 = 0;
  if (pvVar3 != (undefined *)0x0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = F_00bbad30((undefined *)((int)this + 0x9a8));
    F_00bcfcc0(pvVar3,uVar2,uVar5,uVar6);
    *(uint *)((int)pvVar3 + 0xe0) = *(uint *)((int)pvVar3 + 0xe0) | 0x400;
    (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x14)) = 1;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    bVar1 = F_00bd1110(pvVar3,param_1,0,&(*(undefined4 *)(gen_frame + 0x0)));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      for (pvVar3 = *(undefined * PTR32 *)((int)this + 0x14); pvVar3 != (undefined *)0x0;
          pvVar3 = *(undefined * PTR32 *)((int)pvVar3 + 0x9c)) {
        F_00bd0840(pvVar3);
      }
      *(undefined4 *)((int)this + 0x9e4) = 1;
      return 1;
    }
  }
LAB_00b6988c: ;
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00b698a0 */
uint F_00b698a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb698a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f38a0));
  F_00b68fa0(this);
  uVar1 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x45c))) = 0;
    uVar1 = F_00b59c20(REFG(undefined4, 0x14c4e78),*(undefined4 *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9a8) = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  return uVar1;
}

/* ref: FUN_00b698f0 */
byte F_00b698f0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb698f0u, gen_a0, 0u, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  undefined * this;
  byte bVar2;
  
  if (*(int *)((int)param_1 + 0x9e4) != 0) {
    *(int *)((int)param_1 + 0x9e4) = *(int *)((int)param_1 + 0x9e4) + 1;
  }
  for (iVar1 = *(int *)((int)param_1 + 0x14); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x9c)) {
    F_00bd0e90(iVar1,param_2,param_3);
  }
  for (this = *(undefined * PTR32 *)((int)param_1 + 0x14); this != (undefined *)0x0;
      this = *(undefined * PTR32 *)((int)this + 0x9c)) {
    F_00bd0840(this);
  }
  if (-1 < *(short *)((int)param_1 + 0x9ec)) {
    F_00b69620(param_1);
  }
  bVar2 = F_00b69050(param_1);
  return bVar2;
}

/* ref: FUN_00b69970 */
byte F_00b69970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb69970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00b5aba0(REFG(undefined4, 0x14c4e84),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  bVar1 = F_00b69120(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_1,param_2,param_3,param_4,1);
  return bVar1;
}

/* ref: FUN_00b699b0 */
byte F_00b699b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb699b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00b5aba0(REFG(undefined4, 0x14c4e84),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  bVar1 = F_00b69120(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_1,param_2,param_3,param_4,0);
  return bVar1;
}

/* ref: FUN_00b699f0 */
uint F_00b699f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb699f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_00bbad00((undefined *)((int)this + 0x9a8));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (((bVar1 != 0) && ((*(byte *)((int)this + 0x9e0) & 1) == 0)) &&
     (uVar2 = REFG(undefined4, 0x1375b00), *(int *)(REFG(undefined4, 0x1375b00) + 0x28) == 0)) {
    (*(char * PTR32 *)(gen_frame + 0x14)) = "normal/idle";
    (*(undefined4 *)(gen_frame + 0x18)) = 3;
    uVar2 = F_00b69780(this,&(*(char * PTR32 *)(gen_frame + 0x14)));
    if ((char)uVar2 == '\0') {
      (*(char * PTR32 *)(gen_frame + 0xc)) = "battle/idle";
      (*(undefined4 *)(gen_frame + 0x10)) = 0x22;
      uVar2 = F_00b69780(this,&(*(char * PTR32 *)(gen_frame + 0xc)));
    }
  }
  return uVar2;
}

/* ref: FUN_00b69a60 */
uint F_00b69a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x14); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
    if ((char)param_1 == '\0') {
      F_00bd0910(pvVar1);
    }
    else {
      F_00bd0880(pvVar1,1,0);
    }
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x10);
  if (pvVar1 == (undefined *)0x0) {
    pvVar1 = (undefined *)F_00b59660(REFG(undefined4, 0x14c4e78),(int)this + 0x9a8);
    if (pvVar1 == (undefined *)0x0) goto LAB_00b69ad5;
    *(undefined * PTR32 *)((int)this + 0x10) = pvVar1;
    F_00b595f0(pvVar1);
    *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x45c))) = this;
  }
  F_00bc3bc0(pvVar1,param_1);
LAB_00b69ad5: ;
  uVar2 = F_00b699f0(this);
  return uVar2;
}

/* ref: FUN_00b69af0 */
byte F_00b69af0(unsigned int gen_a0)
{
  GEN_ENTER(0xb69af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * pvVar2;
  int iVar3;
  int local_8;
  
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x14);
  iVar3 = 0;
  local_8 = 0;
  for (; pvVar2 != (undefined *)0x0; pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x9c)) {
    if ((*(char *)((int)pvVar2 + 10) != '\0') || (*(char *)((int)pvVar2 + 0xd) != '\0')) {
      local_8 = local_8 + 1;
    }
    bVar1 = F_00bcf9c0(pvVar2);
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = F_00bcfba0(pvVar2);
    if (bVar1 != 0) {
      iVar3 = iVar3 + 1;
    }
  }
  if ((*(int *)((int)this + 0x14) != 0) || (*(int *)(REFG(int, 0x1375b00) + 0x28) == 0)) {
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x10);
    if ((pvVar2 == (undefined *)0x0) &&
       (pvVar2 = (undefined *)F_00b59660(REFG(undefined4, 0x14c4e78),(int)this + 0x9a8), pvVar2 != (undefined *)0x0)) {
      *(undefined * PTR32 *)((int)this + 0x10) = pvVar2;
      F_00b595f0(pvVar2);
      *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x45c))) = this;
    }
    if (((iVar3 != 0) && (pvVar2 != (undefined *)0x0)) && (bVar1 = F_00bc5290(pvVar2), bVar1 == 0)) {
      return 0;
    }
    if (local_8 == 0) {
      F_00b699f0(this);
    }
  }
  return 1;
}

/* ref: FUN_00b69bc0 */
uint F_00b69bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0xf8) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00b69be0 */
uint F_00b69be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  return (uint)(((*param_1 ^ *(uint *)((int)this + 0xf8)) & 0xc0000000) == 0 &&
               ((*param_1 ^ *(uint *)((int)this + 0xf8)) & 0x3fffffff) == 0);
}

/* ref: FUN_00b69c20 */
byte F_00b69c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb69c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if (*(int *)((int)this + 200) != -1) {
    return *(int *)((int)this + 200) == param_2;
  }
  pbVar2 = *(byte * PTR32 *)((int)this + 0xd4);
  pbVar3 = param_1;
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00b69cb0 */
byte F_00b69cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69cb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0xd0) == param_2;
}

/* ref: FUN_00b69ce0 */
uint F_00b69ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69ce0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((param_2 & 0xff) * 2 ^ *(uint *)(in_ecx + 0x138)) & 2;
  *(uint *)(in_ecx + 0x138) = *(uint *)(in_ecx + 0x138) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00b69d00 */
uint F_00b69d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69d00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1e0) = param_2;
  return param_2;
}

/* ref: FUN_00b69d50 */
uint F_00b69d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69d50u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b69d70 */
uint F_00b69d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69d70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00b69d80 */
uint F_00b69d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = (int)this + -0x98;
    return 0;
  }
  do {
    iVar2 = iVar1;
    iVar1 = *(int *)(iVar2 + 0x9c);
  } while (*(int *)(iVar2 + 0x9c) != 0);
  if (this != (undefined *)0x0) {
    *(uint *)(iVar2 + 0x9c) = (int)this - 0x98U;
    *(int *)this = iVar2;
    *(undefined4 *)((int)this + 4) = 0;
    return (int)this - 0x98U;
  }
  *(undefined4 *)(iVar2 + 0x9c) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar2;
  *(undefined4 *)&REFG(undefined, 0x4) = 0;
  return 0;
}

/* ref: FUN_00b69de0 */
unsigned int F_00b69de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  if (iVar1 == 0) {
    *param_1 = iVar2;
  }
  else {
    *(int *)(iVar1 + 0x9c) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x98) = iVar1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::TimelineGroup::vf0 */
uint F_00b69e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f38a0));
  F_00b68fa0(this);
  if (*(int *)(this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + 0x45c))) = 0;
    F_00b59c20(REFG(undefined4, 0x14c4e78),*(undefined4 *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)(this + 0x9a8) = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::CameraBase::vf3 */
uint F_00b69e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xb69e80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 4))))
                    (this + 0x10,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00b69e90 */
unsigned int F_00b69e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0068bf80((undefined *)((int)this + 0x10),param_1);
  return 0;
}

/* ref: FUN_00b69ea0 */
unsigned int F_00b69ea0(float gen_a0)
{
  GEN_ENTER(0xb69ea0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b69ec0 */
unsigned int F_00b69ec0(float gen_a0)
{
  GEN_ENTER(0xb69ec0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b69ee0 */
unsigned int F_00b69ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb69ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  return 0;
}

/* ref: FUN_00b69f10 */
byte F_00b69f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb69f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar6 = (float10)*(float *)this;
  fVar7 = (float10)((float)GEN_TOF(((float10)param_2[2] * (float10)*(float *)((int)this + 8) +
                          ((float10)param_2[1] * (float10)*(float *)((int)this + 4) +
                          fVar6 * (float10)*param_2))));
  bVar5 = GEN_ISNAN(fVar7) || GEN_ISNAN((float10)0);
  if (bVar5 != (bVar5 || fVar7 == (float10)0)) {
    return 0;
  }
  fVar7 = (float10)*(float *)((int)this + 4);
  fVar8 = (float10)*(float *)((int)this + 8);
  fVar9 = (float10)((float)GEN_TOF((fVar8 * (float10)param_2[2] +
                          (fVar7 * (float10)param_2[1] + fVar6 * (float10)*param_2))));
  bVar5 = GEN_ISNAN(fVar9) || GEN_ISNAN((float10)0);
  if (bVar5 == (bVar5 || fVar9 == (float10)0)) {
    *param_4 = ((float)GEN_TOF((-(float10)((float)GEN_TOF(((float10)((float)GEN_TOF(-(((float10)*(float *)((int)this + 0x10) *
                                                            fVar6 + fVar7 * (float10)*((float *)GEN_TOP(((int
                                                  )this + 0x14)))) +
                                                  fVar8 * (float10)*(float *)((int)this + 0x18)))) +
                                        ((float10)param_1[2] * fVar8 +
                                        (fVar7 * (float10)param_1[1] + (float10)*param_1 * fVar6)))))
                      / fVar9)));
  }
  else {
    *param_4 = 0.0;
  }
  fVar6 = (float10)*param_4;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  *param_3 = ((float)GEN_TOF(((float10)*param_1 + (float10)(float)(fVar6 * (float10)*param_2))));
  param_3[1] = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)(fVar6 * (float10)fVar1))));
  param_3[2] = ((float)GEN_TOF(((float10)fVar4 + (float10)(float)(fVar6 * (float10)fVar2))));
  return 1;
}

/* ref: FUN_00b6a060 */
unsigned int F_00b6a060(unsigned int gen_a0)
{
  GEN_ENTER(0xb6a060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  uVar1 = REFG(float, 0x133d28c);
  fVar3 = (float10)*(float *)&REFG(undefined, 0x133d284);
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1080228);
  *(undefined4 *)((int)this + 0xe4) = REFG(float, 0x10f396c);
  uVar2 = REFG(float, 0x133d290);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1080220);
  *(undefined4 *)((int)this + 0xe8) = uVar1;
  *(undefined4 *)((int)this + 0x148) = uVar1;
  *(undefined4 *)((int)this + 0xec) = uVar2;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined1 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined2 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x134) = 2;
  *(undefined4 *)((int)this + 0x138) = 2;
  *(undefined4 *)((int)this + 0xe0) = 1;
  *(float *)((int)this + 0x114) = ((float)GEN_TOF(((fVar3 * fVar4) / fVar5)));
  *(float *)((int)this + 0x118) = ((float)GEN_TOF(((fVar4 * (float10)*(float *)&REFG(undefined, 0x133d288)) / fVar5)));
  *(undefined4 *)((int)this + 0x140) = *(undefined4 *)((int)this + 0xf0);
  *(undefined4 *)((int)this + 0x13c) = REFG(float, 0x10f396c);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x168) = uVar1;
  uVar1 = REFG(float, 0x10928e4);
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x170) = uVar1;
  *(undefined4 *)((int)this + 0x174) = REFG(float, 0x1087ef8);
  uVar1 = REFG(float, 0x109482c);
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x184) = uVar1;
  uVar1 = REFG(float, 0x10f3964);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x1b4) = uVar1;
  uVar1 = REFG(float, 0x10f3960);
  *(undefined1 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined1 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined2 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = uVar1;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined2 *)((int)this + 500) = 0;
  *(undefined1 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined1 *)((int)this + 0x1fc) = 1;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined1 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined1 *)((int)this + 0x244) = 0;
  *(undefined1 *)((int)this + 0x205) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined1 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  return 0;
}

/* ref: FUN_00b6a2d0 */
byte F_00b6a2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb6a2d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  uint uVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x68))(param_1);
  if ((char)uVar2 == '\0') {
    return 0;
  }
  if ((char)param_2 != '\0') {
    *(undefined4 *)((int)this + 0x1f8) = 0;
    return 1;
  }
  uVar2 = F_00a5fd10(param_1,((undefined1 *)(gen_frame + 0x10)),0x46);
  uVar3 = F_00a5fd10(param_1,((undefined1 *)(gen_frame + 0x0)),0x2e);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(uVar3 + 4) - (float10)*(float *)(uVar2 + 4))));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1f8) = (float)((float10)fVar1 * (float10)REFG(double, 0x1088108));
  return 1;
}

/* ref: FUN_00b6a390 */
uint F_00b6a390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb6a390u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1090b18);
  *param_1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)*param_3 - (float10)*param_2) *
                                     fVar5))) + (float10)*param_2)));
  param_1[1] = ((float)GEN_TOF(((float10)fVar1 +
                      (float10)((float)GEN_TOF(((float10)(float)((float10)fVar2 - (float10)fVar1) * fVar5))))));
  param_1[2] = ((float)GEN_TOF(((float10)fVar3 +
                      (float10)((float)GEN_TOF((fVar5 * (float10)(float)((float10)fVar4 - (float10)fVar3)))))));
  return (uint)param_1;
}

/* ref: FUN_00b6a440 */
float10 F_00b6a440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xb6a440u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  
  if (param_6 < 0.0) {
    param_6 = gen_bits2f((uint)gen_fl2bits(param_6) ^ REFG(uint, 0x10920d0));
  }
  if ((char)param_3 == '\0') {
    fVar3 = F_00aae900(param_1);
  }
  else {
    fVar3 = F_00aae920(param_1);
  }
  fVar1 = F_00aae710((float)((float10)param_4 - (float10)fVar3));
  fVar2 = (float10)param_6;
  if ((float10)(float)fVar1 < -fVar2) {
    return (float10)(float)((float10)fVar3 - fVar2);
  }
  if (fVar2 < (float10)(float)fVar1) {
    return (float10)(float)(fVar2 + (float10)fVar3);
  }
  return (float10)param_4;
}

/* ref: FUN_00b6a4f0 */
uint F_00b6a4f0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xb6a4f0u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  uint param_6 = (uint)gen_a5;
  float param_7 = (float)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  undefined4 * puVar2;
  float10 fVar3;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  fVar3 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_7);
  (*(float *)(gen_frame + 0x1c)) = (float)fVar3;
  (*(float *)(gen_frame + 0x18)) = (float)fVar3;
  fVar3 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_7);
  fVar1 = (float)fVar3;
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  (*(float *)(gen_frame + 0x34)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x18));
  (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(-(float10)(*(float *)(gen_frame + 0x18))));
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(float *)(gen_frame + 0x48)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  puVar2 = (undefined4 *)F_004ee670(((undefined1 *)(gen_frame + 0x0)),param_6,(uint)&(*(undefined4 *)(gen_frame + 0x20)));
  *param_5 = *puVar2;
  param_5[1] = puVar2[1];
  param_5[2] = puVar2[2];
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return (uint)param_5;
}

/* ref: FUN_00b6a5c0 */
uint F_00b6a5c0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xb6a5c0u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  uint param_6 = (uint)gen_a5;
  float param_7 = (float)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  undefined4 * puVar2;
  float10 fVar3;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  fVar3 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_7);
  (*(float *)(gen_frame + 0x1c)) = (float)fVar3;
  (*(float *)(gen_frame + 0x18)) = (float)fVar3;
  fVar3 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_7);
  fVar1 = (float)fVar3;
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  ((float *)(gen_frame + 0x20))[0] = fVar1;
  ((float *)(gen_frame + 0x20))[2] = ((float)GEN_TOF(-(float10)(*(float *)(gen_frame + 0x18))));
  ((float *)(gen_frame + 0x20))[1] = 0.0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x18));
  (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(float *)(gen_frame + 0x48)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  puVar2 = (undefined4 *)F_004ee670(((undefined1 *)(gen_frame + 0x0)),param_6,(uint)((float *)(gen_frame + 0x20)));
  *param_5 = *puVar2;
  param_5[1] = puVar2[1];
  param_5[2] = puVar2[2];
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return (uint)param_5;
}

/* ref: FUN_00b6a690 */
uint F_00b6a690(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0xb6a690u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  uint param_6 = (uint)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  float fVar1;
  undefined4 * puVar2;
  float10 fVar3;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  fVar3 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_8);
  (*(float *)(gen_frame + 0x38)) = (float)fVar3;
  (*(float *)(gen_frame + 0x3c)) = (float)fVar3;
  fVar3 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_8);
  fVar1 = (float)fVar3;
  (*(float *)(gen_frame + 0x38)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x40)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x54)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x3c));
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(float *)(gen_frame + 0x64)) = ((float)GEN_TOF(-(float10)(*(float *)(gen_frame + 0x3c))));
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(float *)(gen_frame + 0x68)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  fVar3 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_7);
  (*(float *)(gen_frame + 0x3c)) = (float)fVar3;
  (*(float *)(gen_frame + 0x38)) = (float)fVar3;
  fVar3 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_7);
  fVar1 = (float)fVar3;
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  ((float *)(gen_frame + 0x80))[0] = fVar1;
  ((float *)(gen_frame + 0x80))[2] = ((float)GEN_TOF(-(float10)(*(float *)(gen_frame + 0x38))));
  ((float *)(gen_frame + 0x80))[1] = 0.0;
  (*(undefined4 *)(gen_frame + 0x90)) = 0;
  (*(float *)(gen_frame + 0xa0)) = (*(float *)(gen_frame + 0x38));
  (*(undefined4 *)(gen_frame + 0x94)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x98)) = 0;
  (*(float *)(gen_frame + 0xa8)) = fVar1;
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0;
  (*(undefined4 *)(gen_frame + 0xb4)) = 0;
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  puVar2 = (undefined4 *)F_004ee670(((undefined1 *)(gen_frame + 0x10)),param_6,(uint)&(*(undefined4 *)(gen_frame + 0x40)));
  (*(undefined4 *)(gen_frame + 0x20)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0x24)) = puVar2[1];
  (*(undefined4 *)(gen_frame + 0x28)) = puVar2[2];
  puVar2 = (undefined4 *)F_004ee670(((undefined1 *)(gen_frame + 0x0)),(uint)&(*(undefined4 *)(gen_frame + 0x20)),(uint)((float *)(gen_frame + 0x80)));
  *param_5 = *puVar2;
  param_5[1] = puVar2[1];
  param_5[2] = puVar2[2];
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return (uint)param_5;
}

/* ref: FUN_00b6a870 */
uint F_00b6a870(void)
{
  GEN_ENTER(0xb6a870u, 0u, 0u, 0u, 0u);
  byte bVar1;
  double dVar2;
  
  bVar1 = F_00542470();
  if (bVar1 != 0) {
    return 1;
  }
  dVar2 = F_0053b320();
  if (GEN_ISNAN(dVar2) != (GEN_ISNAN(dVar2) || dVar2 == 0.0)) {
    dVar2 = F_0053b360();
    if (GEN_ISNAN(dVar2) != (GEN_ISNAN(dVar2) || dVar2 == 0.0)) {
      return -(uint)(REFG(int, 0x1375b64) != 0) & 3;
    }
  }
  return 2;
}

/* ref: FUN_00b6a8d0 */
uint F_00b6a8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb6a8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (REFG(undefined4, 0x1379694) == (undefined *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0x180);
    param_1[1] = *(undefined4 *)((int)this + 0x184);
    param_1[2] = *(undefined4 *)((int)this + 0x188);
    return (uint)param_1;
  }
  puVar1 = (undefined4 *)F_00a5feb0(REFG(undefined4, 0x1379694));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: FUN_00b6aa40 */
unsigned int F_00b6aa40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6aa40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xfc) = param_2;
  return 0;
}

/* ref: FUN_00b6ab10 */
unsigned int F_00b6ab10(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6ab10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  float local_8;
  
  if (REFG(int, 0x1379694) == 0) {
    local_8 = 0.0;
  }
  else {
    local_8 = *(float *)(REFG(int, 0x1379694) + 0xb0);
  }
  *(undefined4 *)(in_ecx + 0x104) = 0;
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1080228);
  *(undefined4 *)(in_ecx + 0x108) = 0;
  *(float *)(in_ecx + 0xfc) = ((float)GEN_TOF((((float10)local_8 + fVar1) + (float10)param_2)));
  return 0;
}

/* ref: FUN_00b6ab60 */
unsigned int F_00b6ab60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb6ab60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 3) {
    return 0;
  }
  return 0;
}

/* ref: FUN_00b6ab80 */
unsigned int F_00b6ab80(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6ab80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x120) = param_2;
  *(float *)(in_ecx + 0x124) = param_3;
  return 0;
}

/* ref: FUN_00b6ad90 */
uint F_00b6ad90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb6ad90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  uVar1 = param_1[2];
  *(uint *)((int)this + 8) = uVar1;
  return uVar1;
}

/* ref: FUN_00b6adb0 */
byte F_00b6adb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb6adb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b6a870();
  if (uVar1 == 0) {
    if (param_2 == 0) {
      return (byte)param_1;
    }
    if ((param_2 == 1) || (param_2 != 2)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b6ade0 */
unsigned int F_00b6ade0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6ade0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  
  iVar1 = REFG(int, 0x1379694);
  if ((REFG(int, 0x1379694) != 0) && (*(int *)((int)this + 0xe0) == 0)) {
    bVar2 = F_005374c0(&REFG(undefined4, 0x1375bc0));
    if (bVar2 == 0) {
      *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)(iVar1 + 0xb0);
    }
  }
  return 0;
}

/* ref: FUN_00b6ae20 */
uint F_00b6ae20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb6ae20u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,3,0);
    return uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,3,0);
  return uVar1;
}

/* ref: FUN_00b6ae50 */
uint F_00b6ae50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb6ae50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x170) = *param_2;
  *(undefined4 *)(in_ecx + 0x174) = param_2[1];
  *(undefined4 *)(in_ecx + 0x178) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00b6ae80 */
uint F_00b6ae80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb6ae80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x180) = *param_2;
  *(undefined4 *)(in_ecx + 0x184) = param_2[1];
  *(undefined4 *)(in_ecx + 0x188) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00b6aeb0 */
uint F_00b6aeb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6aeb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = 2;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
  case 4: ;
    return 0;
  case 1: ;
  case 2: ;
  case 3: ;
  case 5: ;
  case 6: ;
    uVar1 = 1;
  }
  return uVar1;
}

/* ref: FUN_00b6aef0 */
uint F_00b6aef0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6aef0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((((param_1 != 3) && (param_1 != 4)) && (param_1 != 5)) && (param_1 != 6)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b6af20 */
byte F_00b6af20(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb6af20u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int in_ecx;
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  in_ecx = REFG(int, 0x1379694);
  if ((param_5 != 0) && (param_5 != REFG(int, 0x1379694))) {
    uVar1 = F_00a61360(param_5,in_xmm1,in_xmm2,in_xmm3,in_xmm7,((undefined1 *)(gen_frame + 0x10)));
    uVar2 = F_00a61360(in_ecx,in_xmm1,in_xmm2,in_xmm3,in_xmm7,((undefined1 *)(gen_frame + 0x0)));
    fVar3 = F_00aaea30(uVar2,uVar1);
    if ((float10)0 < (float10)fVar3) {
      return 1;
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00b6afa0 */
uint F_00b6afa0(void)
{
  GEN_ENTER(0xb6afa0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  undefined * this;
  int * piVar2;
  
  uVar1 = F_006b8c00();
  uVar1 = F_006c5190(uVar1);
  if ((char)uVar1 == '\0') {
    this = (undefined *)F_00533c90(&REFG(undefined4, 0x1375bc0));
  }
  else {
    this = (undefined *)F_005339e0(&REFG(undefined4, 0x1375bc0));
  }
  if (this != (undefined *)0x0) {
    piVar2 = (int *)F_00a5f290(this);
    if ((((piVar2 != (int *)0x0) &&
         (uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2), (char)uVar1 == '\x01')) &&
        (piVar2[0xbb6] != -0x20000000)) && (uVar1 = F_00ab1210(piVar2[0xbb6]), uVar1 != 0)) {
      return uVar1;
    }
    return (uint)this;
  }
  return 0;
}

/* ref: FUN_00b6b010 */
uint F_00b6b010(unsigned int gen_a0)
{
  GEN_ENTER(0xb6b010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint in_ecx;
  undefined4 * puVar1;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  in_ecx = F_00b6afa0();
  puVar1 = (undefined4 *)0x0;
  if (in_ecx != 0) {
    *(undefined1 *)((int)this + 0x220) = 1;
    puVar1 = (undefined4 *)F_00a61360(in_ecx,in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,((undefined1 *)(gen_frame + 0x0)))
    ;
    *(undefined4 *)((int)this + 0x210) = *puVar1;
    *(undefined4 *)((int)this + 0x214) = puVar1[1];
    *(undefined4 *)((int)this + 0x218) = puVar1[2];
  }
  return (uint)puVar1;
}

/* ref: FUN_00b6b1b0 */
float10 F_00b6b1b0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6b1b0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)1 -
                                                                                   ((float10)param_1
                                                                                   * (float10)
                                                  param_1) / ((float10)param_2 * (float10)param_2)))))))
                                              ))) * (float10)param_3)));
}

/* ref: FUN_00b6b1f0 */
float10 F_00b6b1f0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6b1f0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)1 -
                                                                                   (float10)(float)(
                                                  (float10)param_1 / (float10)param_3) *
                                                  (float10)(float)((float10)param_1 /
                                                                  (float10)param_3)))))))))) *
                         (float10)param_2)));
}

/* ref: FUN_00b6b230 */
float10 F_00b6b230(float gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0xb6b230u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_7);
  fVar2 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_7);
  fVar2 = (float10)(float)((float10)param_5 * (float10)(float)fVar2);
  return (float10)((float)GEN_TOF(((float10)(double)((float10)param_6 * (float10)param_5) /
                         (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar2 * fVar2 +
                                                              (float10)(float)((float10)(float)fVar1
                                                                              * (float10)param_6) *
                                                              (float10)(float)((float10)(float)fVar1
                                                                              * (float10)param_6))))))))))
  ;
}

/* ref: FUN_00b6b2b0 */
unsigned int F_00b6b2b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6b2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    piVar1 = *(int * PTR32 *)((int)this + iVar2 * 4);
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  return 0;
}

/* ref: FUN_00b6b310 */
unsigned int F_00b6b310(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xb6b310u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[6] = param_4;
  fVar1 = ((float)GEN_TOF(((float10)param_6 + ((float10)param_5 + (float10)param_4))));
  *(undefined1 *)(in_ecx + 10) = 1;
  fVar2 = (float10)fVar1;
  in_ecx[4] = param_5;
  in_ecx[2] = fVar1;
  in_ecx[5] = param_6;
  in_ecx[3] = 0.0;
  fVar3 = (float10)((float)GEN_TOF(((float10)(float)((float10)param_3 - (float10)param_2) / fVar2))) * fVar2;
  fVar1 = ((float)GEN_TOF(((fVar3 + fVar3) / (fVar2 + (float10)param_4))));
  fVar2 = (float10)fVar1;
  in_ecx[7] = fVar1;
  if (0.0 < param_5) {
    in_ecx[8] = (float)(fVar2 / (float10)param_5);
  }
  else {
    in_ecx[8] = 0.0;
  }
  if (0.0 < param_6) {
    in_ecx[9] = (float)(-fVar2 / (float10)param_6);
    return 0;
  }
  in_ecx[9] = 0.0;
  return 0;
}

/* ref: FUN_00b6b410 */
float10 F_00b6b410(unsigned int gen_a0)
{
  GEN_ENTER(0xb6b410u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  
  if (in_ecx[3] <= 0.0) {
    return (float10)*in_ecx;
  }
  fVar1 = (float10)in_ecx[3];
  if ((float10)in_ecx[2] <= fVar1) {
    return (float10)in_ecx[1];
  }
  if (fVar1 <= (float10)in_ecx[4]) {
    return (float10)((float)GEN_TOF(((((float10)in_ecx[3] * (float10)in_ecx[3]) * (float10)in_ecx[8]) *
                            (float10)REFG(double, 0x1088108) + (float10)*in_ecx)));
  }
  if (fVar1 <= (float10)in_ecx[4] + (float10)in_ecx[6]) {
    fVar2 = (float10)in_ecx[4];
    return (float10)((float)GEN_TOF((((float10)(float)(fVar1 - fVar2) * (float10)in_ecx[7] +
                            (float10)((float)GEN_TOF((((fVar2 * fVar2) * (float10)in_ecx[8]) *
                                            (float10)REFG(double, 0x1088108))))) + (float10)*in_ecx)));
  }
  fVar2 = (float10)in_ecx[4];
  fVar1 = (float10)((float)GEN_TOF(((fVar1 - fVar2) - (float10)in_ecx[6])));
  return (float10)((float)GEN_TOF((((((float10)in_ecx[9] * fVar1) * fVar1) * (float10)REFG(double, 0x1088108) +
                          ((float10)((float)GEN_TOF(((float10)((float)GEN_TOF((((fVar2 * fVar2) * (float10)in_ecx[8])
                                                            * (float10)REFG(double, 0x1088108)))) +
                                           (float10)in_ecx[7] * (float10)in_ecx[6]))) +
                          fVar1 * (float10)in_ecx[7])) + (float10)*in_ecx)));
}

/* ref: Client::Game::LowCutCamera::vf3 */
uint F_00b6b540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xb6b540u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 4))))
                    (this + 0x10,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00b6b550 */
byte F_00b6b550(unsigned int gen_a0)
{
  GEN_ENTER(0xb6b550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((!((float10)*(float *)(in_ecx + 0x118) < (float10)*(float *)(in_ecx + 0x114))) &&
     (!((float10)*(float *)(in_ecx + 0x144) < (float10)*(float *)(in_ecx + 0x140)))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b6b580 */
byte F_00b6b580(unsigned int gen_a0)
{
  GEN_ENTER(0xb6b580u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((!((float10)*(float *)(in_ecx + 0x170) < (float10)*(float *)(in_ecx + 0x16c))) &&
     (!((float10)*(float *)(in_ecx + 0x19c) < (float10)*(float *)(in_ecx + 0x198)))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b6b5b0 */
byte F_00b6b5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6b5b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((float10)*(float *)(in_ecx + 0x1c8) < (float10)*(float *)(in_ecx + 0x1c4)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b6b5d0 */
byte F_00b6b5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6b5d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((float10)*(float *)(in_ecx + 500) < (float10)*(float *)(in_ecx + 0x1f0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::Game::LobbyCamera::vf8 */
unsigned int F_00b6b5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6b5f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x2c8) = 0;
  return 0;
}

/* ref: FUN_00b6b600 */
unsigned int F_00b6b600(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6b600u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (!(param_2 <= 0.0)) {
    *(float *)(in_ecx + 0x294) = param_2;
  }
  return 0;
}

/* ref: FUN_00b6b620 */
unsigned int F_00b6b620(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6b620u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x2a4) = param_2;
  *(float *)(in_ecx + 0x2b4) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x294) -
              (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_2 -
                                               (float10)*(float *)(in_ecx + 0x294)))) *
                              (float10)*(float *)&REFG(undefined, 0x14c4ee0)))))));
  return 0;
}

