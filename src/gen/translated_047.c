#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00672630 */
uint F_00672630(unsigned int gen_a0)
{
  GEN_ENTER(0x672630u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00672670 */
uint F_00672670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x672670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  float10 fVar10;
  float10 fVar11;
  undefined4 * local_8;
  
  puVar9 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 3) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                     1) * 2;
  F_00671600(param_2,puVar9,param_3 + -2,param_4,param_5);
  puVar4 = puVar9 + 2;
  for (; param_2 < puVar9; puVar9 = puVar9 + -2) {
    fVar10 = ((float10)GEN_TOD(gen_bits2f(puVar9[-1])));
    fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar9[1])));
    if (((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10)) ||
       ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11))) break;
  }
  puVar8 = puVar4;
  local_8 = puVar9;
  if (puVar4 < param_3) {
    iVar3 = (int)param_3 + (7 - (int)puVar4);
    if (3 < (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3) {
      fVar10 = ((float10)GEN_TOD(gen_bits2f(puVar9[1])));
      do {
        fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar4[1])));
        puVar8 = puVar4;
        if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) ||
           ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10))) goto LAB_006727c3;
        fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar4[3])));
        if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) ||
           ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10))) {
          puVar4 = puVar4 + 2;
          puVar8 = puVar4;
          goto LAB_006727c3;
        }
        fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar4[5])));
        if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) ||
           ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10))) {
          puVar4 = puVar4 + 4;
          puVar8 = puVar4;
          goto LAB_006727c3;
        }
        fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar4[7])));
        if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) ||
           ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10))) {
          puVar4 = puVar4 + 6;
          puVar8 = puVar4;
          goto LAB_006727c3;
        }
        puVar4 = puVar4 + 8;
      } while ((int)puVar4 < (int)(param_3 + -6));
    }
    puVar8 = puVar4;
    if (puVar4 < param_3) {
      fVar10 = ((float10)GEN_TOD(gen_bits2f(puVar9[1])));
      do {
        fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar4[1])));
        puVar8 = puVar4;
        if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) ||
           ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10))) break;
        puVar4 = puVar4 + 2;
        puVar8 = puVar4;
      } while (puVar4 < param_3);
    }
  }
LAB_006727c3: ;
  puVar6 = local_8;
  puVar7 = local_8;
  if (puVar4 < param_3) {
    iVar3 = (int)param_3 + (7 - (int)puVar4);
    if (3 < (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3) {
      do {
        fVar10 = ((float10)GEN_TOD(gen_bits2f(puVar9[1])));
        fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar4[1])));
        if (!(fVar10 < fVar11)) {
          if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) goto joined_r0x00672990;
          uVar1 = puVar8[1];
          uVar2 = *puVar8;
          *puVar8 = *puVar4;
          puVar8[1] = puVar4[1];
          *puVar4 = uVar2;
          puVar8 = puVar8 + 2;
          puVar4[1] = uVar1;
        }
        fVar10 = ((float10)GEN_TOD(gen_bits2f(puVar9[1])));
        fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar4[3])));
        if (!(fVar10 < fVar11)) {
          if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) {
            puVar4 = puVar4 + 2;
            goto joined_r0x00672990;
          }
          uVar1 = puVar8[1];
          uVar2 = *puVar8;
          *puVar8 = puVar4[2];
          puVar8[1] = puVar4[3];
          puVar8 = puVar8 + 2;
          puVar4[2] = uVar2;
          puVar4[3] = uVar1;
        }
        fVar10 = ((float10)GEN_TOD(gen_bits2f(puVar9[1])));
        fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar4[5])));
        if (!(fVar10 < fVar11)) {
          if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) {
            puVar4 = puVar4 + 4;
            goto joined_r0x00672990;
          }
          uVar1 = puVar8[1];
          uVar2 = *puVar8;
          *puVar8 = puVar4[4];
          puVar8[1] = puVar4[5];
          puVar4[4] = uVar2;
          puVar8 = puVar8 + 2;
          puVar4[5] = uVar1;
        }
        fVar10 = ((float10)GEN_TOD(gen_bits2f(puVar9[1])));
        fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar4[7])));
        if (!(fVar10 < fVar11)) {
          if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) {
            puVar4 = puVar4 + 6;
            goto joined_r0x00672990;
          }
          uVar1 = puVar8[1];
          uVar2 = *puVar8;
          *puVar8 = puVar4[6];
          puVar8[1] = puVar4[7];
          puVar8 = puVar8 + 2;
          puVar4[6] = uVar2;
          puVar4[7] = uVar1;
        }
        puVar4 = puVar4 + 8;
      } while ((int)puVar4 < (int)(param_3 + -6));
    }
    for (; puVar4 < param_3; puVar4 = puVar4 + 2) {
      fVar10 = ((float10)GEN_TOD(gen_bits2f(puVar9[1])));
      fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar4[1])));
      if (!(fVar10 < fVar11)) {
        if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) break;
        uVar1 = puVar8[1];
        uVar2 = *puVar8;
        *puVar8 = *puVar4;
        puVar8[1] = puVar4[1];
        puVar8 = puVar8 + 2;
        *puVar4 = uVar2;
        puVar4[1] = uVar1;
      }
    }
  }
joined_r0x00672990: ;
  do {
    if (puVar6 <= param_2) break;
    puVar5 = puVar7 + -2;
    fVar10 = ((float10)GEN_TOD(gen_bits2f(puVar7[-1])));
    fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar9[1])));
    if (!(fVar10 < fVar11)) {
      if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) break;
      uVar1 = puVar9[-2];
      uVar2 = puVar9[-1];
      puVar9[-2] = *puVar5;
      puVar9[-1] = puVar7[-1];
      *puVar5 = uVar1;
      puVar7[-1] = uVar2;
      puVar9 = puVar9 + -2;
    }
    puVar6 = puVar6 + -2;
    puVar7 = puVar5;
  } while( true );
  if (puVar6 == param_2) {
    if (puVar4 == param_3) {
      *param_1 = puVar9;
      param_1[1] = puVar8;
      return (uint)param_1;
    }
    if (puVar8 != puVar4) {
      uVar1 = *puVar9;
      uVar2 = puVar9[1];
      *puVar9 = *puVar8;
      puVar9[1] = puVar8[1];
      *puVar8 = uVar1;
      puVar8[1] = uVar2;
    }
    uVar1 = *puVar9;
    uVar2 = puVar9[1];
    *puVar9 = *puVar4;
    puVar9[1] = puVar4[1];
    *puVar4 = uVar1;
    puVar4[1] = uVar2;
    puVar4 = puVar4 + 2;
    puVar8 = puVar8 + 2;
    puVar9 = puVar9 + 2;
    local_8 = puVar6;
  }
  else {
    puVar7 = puVar6 + -2;
    local_8 = puVar7;
    if (puVar4 == param_3) {
      puVar5 = puVar9 + -2;
      if (puVar7 != puVar5) {
        uVar1 = puVar6[-1];
        uVar2 = *puVar7;
        *puVar7 = *puVar5;
        puVar6[-1] = puVar9[-1];
        *puVar5 = uVar2;
        puVar9[-1] = uVar1;
      }
      uVar1 = puVar9[-1];
      uVar2 = *puVar5;
      puVar6 = puVar8 + -2;
      *puVar5 = *puVar6;
      puVar9[-1] = puVar8[-1];
      *puVar6 = uVar2;
      puVar8[-1] = uVar1;
      puVar8 = puVar6;
      puVar9 = puVar5;
    }
    else {
      uVar1 = puVar4[1];
      uVar2 = *puVar4;
      *puVar4 = *puVar7;
      puVar4[1] = puVar6[-1];
      *puVar7 = uVar2;
      puVar6[-1] = uVar1;
      puVar4 = puVar4 + 2;
    }
  }
  goto LAB_006727c3;
}

/* ref: FUN_00672ad0 */
unsigned int F_00672ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x672ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_006716c0(param_1,param_2,param_3,param_4,0);
  return 0;
}

/* ref: FUN_00672af0 */
unsigned int F_00672af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x672af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = param_2 - (int)param_1;
  if (8 < (int)(uVar2 & 0xfffffff8)) {
    puVar3 = (undefined4 *)(param_2 + -8);
    do {
      uVar1 = puVar3[1];
      (*(undefined4 *)(gen_frame + 0x4)) = *puVar3;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      F_0066a390(param_1,0,(int)(uVar2 - 8) >> 3,&(*(undefined4 *)(gen_frame + 0x4)),param_3,param_4);
      puVar3 = puVar3 + -2;
      uVar2 = (int)puVar3 + (8 - (int)param_1);
    } while (8 < (int)(uVar2 & 0xfffffff8));
  }
  return 0;
}

/* ref: FUN_00672b60 */
uint F_00672b60(unsigned int gen_a0)
{
  GEN_ENTER(0x672b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00672bb0 */
uint F_00672bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x672bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00671af0(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x11);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x11);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x11);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00671890(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00672c60 */
uint F_00672c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x672c60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00671db0(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x19) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x19) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x19);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x19);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x19);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x19);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00671b50(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00672d00 */
uint F_00672d00(unsigned int gen_a0)
{
  GEN_ENTER(0x672d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (0xf < *(uint *)((int)this + 8)) {
    if (*(uint * PTR32 *)((int)this + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)((int)this + 0x10) = *(uint *)((int)this + 8);
    }
    uVar2 = F_00671e30(*(undefined * PTR32 *)((int)this + 0xc));
    *(uint *)((int)this + 0x10) = uVar2;
    *(uint *)((int)this + 4) = uVar2 + 0x10;
    *(undefined4 *)((int)this + 8) = 0;
  }
  iVar1 = *(int *)((int)this + 8);
  *(int *)((int)this + 8) = iVar1 + 1;
  return *(int *)((int)this + 4) + iVar1 * 8;
}

/* ref: FUN_00672d40 */
unsigned int F_00672d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x672d40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 8;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: Client::Graphics::Render::Skeleton::vf0 */
uint F_00672d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x672d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0064cdc0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00672e10 */
uint F_00672e10(unsigned int gen_a0)
{
  GEN_ENTER(0x672e10u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00672e50 */
uint F_00672e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x672e50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_0066d160((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_0066f430((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_00672bb0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00672eb0 */
uint F_00672eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x672eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,0xd3);
    F_00672240(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0xd3);
    }
    uVar4 = uVar3 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar3;
    *(uint *)((int)this + 8) = param_1 * 8 + uVar3;
    *(uint *)((int)this + 4) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_00672f50 */
uint F_00672f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x672f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0xd3);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
  }
  F_00672280(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00672fb0 */
uint F_00672fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x672fb0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00672fe0 */
unsigned int F_00672fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x672fe0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00673010 */
unsigned int F_00673010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x673010u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00673040 */
unsigned int F_00673040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x673040u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00673070 */
unsigned int F_00673070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x673070u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006730b0 */
uint F_006730b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6730b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[3]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) {
    F_00670e50((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,piVar1,(*(int * PTR32 *)&gen_args[3]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)*piVar1) {
    if (*((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3))) < *((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3)))) {
      F_00670e50((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[2]) == piVar1) {
    if (*(ushort *)(piVar1[2] + 0xc) < *((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3)))) {
      F_00670e50((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,piVar1[2],(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    if (*((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3))) < *((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3)))) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00669960(&(*(int * PTR32 *)&gen_args[3]));
      if (*((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3))) < *(ushort *)(piVar2 + 3)) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[2] + 0x19))) != '\0') {
          F_00670e50((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[3]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00670e50((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
    if (*((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3))) < *(ushort *)(piVar2 + 3)) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_006668a0(&(*(int * PTR32 *)&gen_args[3]));
      if (((*(int * PTR32 *)&gen_args[3]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) ||
         (*(ushort *)(piVar2 + 3) < *((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3))))) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x19))) != '\0') {
          F_00670e50((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00670e50((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[3]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
  }
  puVar3 = (undefined4 *)F_00672360((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)),piVar2,0);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00673220 */
uint F_00673220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x673220u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,200);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,200);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_006732d0 */
unsigned int F_006732d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6732d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00672af0(param_1,param_2,param_3,param_4);
  return 0;
}

/* ref: FUN_006732f0 */
uint F_006732f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6732f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00673330 */
uint F_00673330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x673330u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      puVar4 = puVar3 + 8;
      puVar6 = puVar2 + 8;
      puVar7 = puVar3;
      puVar8 = puVar2;
      for (iVar5 = 8; puVar2 = puVar6, puVar3 = puVar4, iVar5 != 0; iVar5 = iVar5 + -1) {
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

/* ref: FUN_00673380 */
uint F_00673380(unsigned int gen_a0)
{
  GEN_ENTER(0x673380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1 & 0xffffffe0,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_006733c0 */
uint F_006733c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6733c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00672bb0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_006733e0 */
uint F_006733e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6733e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0xd3);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00673420 */
uint F_00673420(unsigned int gen_a0)
{
  GEN_ENTER(0x673420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00672c60(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00673440 */
uint F_00673440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x673440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  puVar4 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 5))) < param_1) {
    puVar2 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 0x20,0,0xd8);
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar2;
    for (puVar3 = *(undefined4 * PTR32 *)this; puVar3 != puVar4; puVar3 = puVar3 + 8) {
      if (puVar6 != (undefined4 *)0x0) {
        puVar7 = puVar3;
        puVar8 = puVar6;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar6 = puVar6 + 8;
    }
    iVar5 = *(int *)this;
    iVar1 = *(int *)((int)this + 4);
    if (iVar5 != 0) {
      F_00429760(iVar5,*(int *)((int)this + 8) - iVar5 & 0xffffffe0,0xd8);
    }
    puVar4 = puVar2 + (int)((int)(uintptr_t)param_1) * 8;
    *(undefined4 * PTR32 *)this = puVar2;
    *(uint *)((int)this + 4) = (iVar1 - iVar5 & 0xffffffe0U) + (int)puVar2;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar4;
  }
  return (uint)puVar4;
}

/* ref: FUN_00673500 */
uint F_00673500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x673500u, gen_a0, gen_a1, 0u, 0u);
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
        uVar6 = F_00672fb0(iVar1,param_1[1],*(undefined4 *)((int)this + 4));
        *(uint *)((int)this + 4) = uVar6;
        return (uint)this;
      }
      if (iVar3 != 0) {
        F_00666590(iVar3,uVar5);
      }
      bVar4 = F_0066d040(this,param_1[1] - *param_1 >> 2);
      if (bVar4 != 0) {
        uVar6 = F_00672fb0(*param_1,param_1[1],*(undefined4 *)this);
        *(uint *)((int)this + 4) = uVar6;
      }
    }
  }
  return (uint)this;
}

/* ref: FUN_00673620 */
uint F_00673620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x673620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar1 = F_00527180(this,param_2);
  if (uVar1 != *(uint *)((int)this + 4)) {
    puVar2 = (undefined4 *)(uVar1 + 0xc);
    if (0xf < *(uint *)(uVar1 + 0x20)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    uVar3 = F_004e2560(param_2,0,*(undefined4 *)((int)param_2 + 0x10),puVar2,
                         *(undefined4 *)(uVar1 + 0x1c));
    if (-1 < (int)uVar3) {
      *param_1 = uVar1;
      return (uint)param_1;
    }
  }
  *param_1 = *(uint *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00673690 */
uint F_00673690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x673690u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00673740 */
uint F_00673740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x673740u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_006737f0 */
uint F_006737f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6737f0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00672eb0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00672eb0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00673860 */
uint F_00673860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x673860u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00673690(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00673690(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_006738d0 */
uint F_006738d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6738d0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00673740(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00673740(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00673940 */
uint F_00673940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x673940u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xd3);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd3);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_006739f0 */
uint F_006739f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6739f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00673ae0 */
uint F_00673ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x673ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  puVar3 = (undefined4 *)F_004296a0(0x1c,0,0xd2);
  *puVar3 = *(undefined4 *)((int)this + 4);
  puVar3[1] = *(undefined4 *)((int)this + 4);
  puVar3[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar3 + 6) = 0;
  uVar1 = *(undefined4 *)(param_3 + 2);
  uVar2 = *(undefined4 *)(param_3 + 4);
  if (puVar3 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar3 + 3) = *param_3;
    puVar3[4] = uVar1;
    puVar3[5] = uVar2;
  }
  F_006730b0(this,param_1,param_2,puVar3);
  return param_1;
}

/* ref: FUN_00673b50 */
uint F_00673b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x673b50u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00673220(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00673220(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00673bc0 */
unsigned int F_00673bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x673bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
LAB_00673c60: ;
      if (1 < iVar1) {
        F_006716c0(iVar2,iVar4,param_4,param_5,0);
      }
      return 0;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(iVar4 - iVar2 & 0xfffffff8U)) {
          F_0066f960(iVar2,iVar4,param_4,param_5,0,0);
        }
        F_00672af0(iVar2,iVar4,param_4,param_5);
        return 0;
      }
      goto LAB_00673c60;
    }
    F_00672670(&(*(int *)(gen_frame + 0x4)),iVar2,iVar4,param_4,param_5);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x4)) - iVar2 & 0xfffffff8U) < (int)(iVar4 - (*(int *)(gen_frame + 0x8)) & 0xfffffff8U)) {
      F_00673bc0(iVar2,(*(int *)(gen_frame + 0x4)),iVar3,param_4,param_5);
      iVar2 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_00673bc0((*(int *)(gen_frame + 0x8)),iVar4,iVar3,param_4,param_5);
      iVar4 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_00673cc0 */
uint F_00673cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x673cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00673b50(this,1);
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
      F_00673b50(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00673d30 */
uint F_00673d30(unsigned int gen_a0)
{
  GEN_ENTER(0x673d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1 & 0xffffffe0,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00673d70 */
unsigned int F_00673d70(unsigned int gen_a0)
{
  GEN_ENTER(0x673d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)this != *(int *)((int)this + 4)) {
    *(int *)((int)this + 4) = *(int *)this;
  }
  return 0;
}

/* ref: FUN_00673dc0 */
uint F_00673dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x673dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10ac2e8));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4018));
  iVar1 = *(int *)((int)this + 0x4008);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0x4010) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 0x4008) = 0;
  *(undefined4 *)((int)this + 0x400c) = 0;
  *(undefined4 *)((int)this + 0x4010) = 0;
  return uVar2;
}

/* ref: FUN_00673e20 */
uint F_00673e20(unsigned int gen_a0)
{
  GEN_ENTER(0x673e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00672bb0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xd3);
  return (uint)uVar1;
}

/* ref: FUN_00673e60 */
uint F_00673e60(unsigned int gen_a0)
{
  GEN_ENTER(0x673e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0xd3);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00673ea0 */
uint F_00673ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x673ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00672c60(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x1c,0xd2);
  return (uint)uVar1;
}

/* ref: Updater_VPostBoneDeformerBase_Render_Graphics_Client_Render::vf0 */
uint F_00673ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x673ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00673dc0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00673f10 */
uint F_00673f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x673f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 5;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 5;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00673440(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00673440(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00673f80 */
ushort F_00673f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x673f80u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  undefined4 * puVar2;
  undefined * PTR32 * ppvVar3;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar1 = F_00527180(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14c))),(*(undefined * PTR32 *)&gen_args[1]));
  (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)uVar1;
  if (uVar1 != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150)))) {
    puVar2 = (undefined4 *)(uVar1 + 0xc);
    if (0xf < *(uint *)(uVar1 + 0x20)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    uVar1 = F_004e2560(this_00,0,*(undefined4 *)((int)this_00 + 0x10),puVar2,
                         *(undefined4 *)(uVar1 + 0x1c));
    if (-1 < (int)uVar1) {
      ppvVar3 = &(*(undefined * PTR32 *)&gen_args[1]);
      goto LAB_00673fd5;
    }
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150)));
  ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
LAB_00673fd5: ;
  if (*ppvVar3 == *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150)))) {
    return 0xffff;
  }
  return *(ushort *)((int)*ppvVar3 + 0x28);
}

/* ref: FUN_00674000 */
ushort F_00674000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x674000u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  undefined4 * puVar2;
  undefined * PTR32 * ppvVar3;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar1 = F_00527180(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))),(*(undefined * PTR32 *)&gen_args[1]));
  (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)uVar1;
  if (uVar1 != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130)))) {
    puVar2 = (undefined4 *)(uVar1 + 0xc);
    if (0xf < *(uint *)(uVar1 + 0x20)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    uVar1 = F_004e2560(this_00,0,*(undefined4 *)((int)this_00 + 0x10),puVar2,
                         *(undefined4 *)(uVar1 + 0x1c));
    if (-1 < (int)uVar1) {
      ppvVar3 = &(*(undefined * PTR32 *)&gen_args[1]);
      goto LAB_00674055;
    }
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130)));
  ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
LAB_00674055: ;
  if (*ppvVar3 == *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130)))) {
    return 0xffff;
  }
  return *(ushort *)((int)*ppvVar3 + 0x28);
}

/* ref: FUN_00674080 */
uint F_00674080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x674080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00673500(this,param_1);
  return (uint)this;
}

/* ref: FUN_006740a0 */
uint F_006740a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6740a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)((int)this + 4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 0xc) - iVar1 & 0xffffffe0,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: FUN_006740e0 */
unsigned int F_006740e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6740e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 4) != *(int *)((int)this + 8)) {
    *(int *)((int)this + 8) = *(int *)((int)this + 4);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  return 0;
}

/* ref: FUN_00674130 */
unsigned int F_00674130(unsigned int gen_a0)
{
  GEN_ENTER(0x674130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ac2f0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x105d4) = (*(undefined * PTR32 (*)[5])REFP(0x10abe04));
  puVar1 = (undefined4 *)((int)this + 0x10608);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x105f0);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x105d4) = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10528) = (*(undefined * PTR32 (*)[5])REFP(0x10abf30));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1056c) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbdc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10560) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10554) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  puVar1 = (undefined4 *)((int)this + 0x10554);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10528) = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x104ac) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x104a0) = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10424) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10418) = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1039c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10390) = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  F_00624210((undefined *)((int)this + 0x100e0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x100b0) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10054) = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  F_00625080((undefined *)((int)this + 0xee30));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xedb4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbd4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xedb0) = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xecd0) = (*(undefined * PTR32 (*)[5])REFP(0x10abea0));
  puVar1 = (undefined4 *)((int)this + 0xed7c);
  iVar2 = 2;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xed4c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xed40) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xecd4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbcc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xecd0) = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xea30) = (*(undefined * PTR32 (*)[5])REFP(0x10abf18));
  puVar1 = (undefined4 *)((int)this + 0xebfc);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xea50) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbc4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xea44) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xea30) = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  F_00668670((undefined *)((int)this + 0xaf90));
  F_00668520((undefined *)((int)this + 0xad10));
  F_00668430((undefined *)((int)this + 0xac2c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xab9c) = (*(undefined * PTR32 (*)[1])REFP(0x10aba94));
  F_00673dc0((undefined *)((int)this + 0x6b6c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6b04) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbe4));
  iVar2 = 0x1f;
  puVar1 = (undefined4 *)((int)this + 0x6b04);
  do {
    puVar1[-0xd6] = (*(undefined * PTR32 (*)[1])REFP(0x10abacc));
    F_00401530(puVar1 + -0xd0,0x34,0x10,((code *)REFP(0x662380)));
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -0xd6;
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb44));
  return 0;
}

/* ref: Client::Graphics::Render::Manager::vf0 */
uint F_00674310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x674310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00674130(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00674340 */
uint F_00674340(unsigned int gen_a0)
{
  GEN_ENTER(0x674340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00672bb0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xd3);
  return (uint)uVar1;
}

/* ref: FUN_00674380 */
uint F_00674380(unsigned int gen_a0)
{
  GEN_ENTER(0x674380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00672c60(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x1c,0xd2);
  return (uint)uVar1;
}

/* ref: FUN_00674400 */
uint F_00674400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x674400u, gen_a0, gen_a1, 0u, 0u);
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
      puVar4 = (undefined4 *)F_006737f0(this,1);
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
      F_006737f0(this,1);
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

/* ref: FUN_006744c0 */
uint F_006744c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6744c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ushort uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * local_8;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  local_8 = puVar4;
  if (*(char *)((int)puVar4[1] + 0x19) == '\0') {
    puVar2 = (undefined4 *)puVar4[1];
    do {
      if (*(ushort *)(puVar2 + 3) < *(*(ushort * PTR32 *)&gen_args[1])) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
        local_8 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x19) == '\0');
  }
  if ((puVar4 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) && (*(ushort *)(puVar4 + 3) <= *(*(ushort * PTR32 *)&gen_args[1]))) {
    return (uint)(puVar4 + 4);
  }
  uVar1 = *(*(ushort * PTR32 *)&gen_args[1]);
  puVar4 = (undefined4 *)F_004296a0(0x1c,0,0xd2);
  *puVar4 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar4[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar4[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  *(undefined2 *)(puVar4 + 6) = 0;
  if ((ushort *)(puVar4 + 3) != (ushort *)0x0) {
    *(ushort *)(puVar4 + 3) = uVar1;
    puVar4[4] = 0;
    puVar4[5] = 0;
  }
  F_006730b0((*(undefined * PTR32 *)&gen_args[0]),&(*(ushort * PTR32 *)&gen_args[1]),local_8,puVar4);
  return (uint)((*(ushort * PTR32 *)&gen_args[1]) + 8);
}

/* ref: FUN_00674580 */
uint F_00674580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x674580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00673860(this,1);
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
      F_00673860(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_006745f0 */
uint F_006745f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6745f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_006738d0(this,1);
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
      F_006738d0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00674660 */
uint F_00674660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x674660u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00673940(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00673940(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_006746d0 */
uint F_006746d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6746d0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_006739f0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_006739f0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00674740 */
unsigned int F_00674740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x674740u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00673bc0(param_1,param_2,param_2 - param_1 >> 3,param_3,param_4);
  return 0;
}

/* ref: FUN_00674770 */
uint F_00674770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x674770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = *(int *)((int)this + 4);
  uVar2 = iVar3 - *(int *)((int)(uintptr_t)this) >> 2;
  if (param_1 < uVar2) {
    iVar1 = *(int *)this + param_1 * 4;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *(int *)((int)this + 4) = iVar1;
      return uVar2;
    }
  }
  else if (uVar2 < param_1) {
    F_00673b50(this,param_1 - uVar2);
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar3 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 2); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    uVar2 = *(uint *)((int)this + 4);
    *(uint *)((int)this + 4) = uVar2 + (param_1 - ((int)(uVar2 - *(int *)this) >> 2)) * 4;
  }
  return uVar2;
}

/* ref: FUN_00674800 */
unsigned int F_00674800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x674800u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4018));
  F_00673cc0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4008))),&(*(undefined4 *)&gen_args[1]));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4018));
  return 0;
}

/* ref: FUN_00674840 */
uint F_00674840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x674840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar3 = *(undefined4 * PTR32 *)this, puVar3 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar1 = (undefined4 *)F_00673f10(this,1);
    }
    puVar3 = ((undefined4 *)GEN_TOP((((int)param_1 - (int)puVar3 & 0xffffffe0U) + *(int *)this)));
  }
  else {
    puVar3 = param_1;
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar1 = (undefined4 *)F_00673f10(this,1);
    }
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x20;
  return (uint)puVar1;
}

/* ref: FUN_006748a0 */
uint F_006748a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6748a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  
  if ((param_1 & 2) != 0) {
    piVar1 = (int *)((int)this + -4);
    iVar4 = *piVar1 + -1;
    if (-1 < iVar4) {
      puVar3 = (undefined4 *)(*piVar1 * 0x2c + 4 + (int)this);
      do {
        iVar2 = puVar3[-0xb];
        if (iVar2 != 0) {
          F_00429760(iVar2,puVar3[-9] - iVar2 & 0xffffffe0,0xd8);
        }
        iVar4 = iVar4 + -1;
        puVar3[-0xb] = 0;
        puVar3[-10] = 0;
        puVar3[-9] = 0;
        puVar3 = puVar3 + -0xb;
      } while (-1 < iVar4);
    }
    if (((param_1 & 1) != 0) && (piVar1 != (int *)0x0)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),piVar1);
    }
    return (uint)piVar1;
  }
  iVar4 = *(int *)((int)this + 4);
  if (iVar4 != 0) {
    F_00429760(iVar4,*(int *)((int)this + 0xc) - iVar4 & 0xffffffe0,0xd8);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: FUN_006749b0 */
uint F_006749b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6749b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00674b50((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_006749c0 */
uint F_006749c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6749c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int * this_00;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  uint * puVar4;
  
  puVar4 = *(uint * PTR32 *)((int)this + 8);
  this_00 = (int *)((int)this + 4);
  if ((param_1 < puVar4) && (puVar3 = (uint *)*this_00, puVar3 <= param_1)) {
    if (puVar4 == *(uint * PTR32 *)((int)this + 0xc)) {
      F_00673f10(this_00,1);
    }
    puVar4 = *(uint * PTR32 *)((int)this + 8);
    puVar3 = ((uint *)GEN_TOP((((int)param_1 - (int)puVar3 & 0xffffffe0U) + *this_00)));
  }
  else {
    if (puVar4 == *(uint * PTR32 *)((int)this + 0xc)) {
      F_00673f10(this_00,1);
    }
    puVar4 = *(uint * PTR32 *)((int)this + 8);
    puVar3 = param_1;
  }
  if (puVar4 != (uint *)0x0) {
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x20;
  uVar1 = *param_1;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | uVar1;
  return uVar1;
}

/* ref: FUN_00674a40 */
unsigned int F_00674a40(unsigned int gen_a0)
{
  GEN_ENTER(0x674a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ac310));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10ac2f8));
  iVar1 = *(int *)((int)this + 0x148);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x150) - iVar1 >> 2) * 4,0xd3);
  }
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  iVar1 = *(int *)((int)this + 0x138);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x140) - iVar1 >> 3) * 8,0xd3);
  }
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  iVar1 = *(int *)((int)this + 0x128);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x130) - iVar1 >> 2) * 4,0xd3);
  }
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  F_00672bb0((undefined *)((int)this + 0x118),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x11c),
               *(undefined4 * PTR32 *)((int)this + 0x11c));
  F_00429760(*(undefined4 *)((int)this + 0x11c),0x14,0xd3);
  F_004d6680((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10abb4c));
  return 0;
}

/* ref: Client::Graphics::Render::ShadowManager::vf0 */
uint F_00674b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x674b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00674a40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00674b80 */
uint F_00674b80(unsigned int gen_a0)
{
  GEN_ENTER(0x674b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00672c60(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x1c,0xd2);
  return (uint)uVar1;
}

/* ref: FUN_00674bc0 */
uint F_00674bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x674bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00674660(this,1);
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
      F_00674660(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00674c30 */
uint F_00674c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x674c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_006746d0(this,1);
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
      F_006746d0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00674ca0 */
unsigned int F_00674ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x674ca0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint * puVar1;
  uint uVar2;
  
  puVar1 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4004)));
  LOCK();
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  if (0xfff < uVar2) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4018));
    F_00673cc0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4008))),&(*(undefined4 *)&gen_args[1]));
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4018));
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar2 * 4 + 4))) = (*(undefined4 *)&gen_args[1]);
  return 0;
}

/* ref: FUN_00674d00 */
uint F_00674d00(unsigned int gen_a0)
{
  GEN_ENTER(0x674d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * PTR32 * ppvVar1;
  int iVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar3 = *(uint *)((int)this + 0x4004);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1000;
  ppvVar1 = (undefined * PTR32 *)((int)this + 0x4004);
  if (0xfff < uVar3) {
    ppvVar1 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  F_004a13a0((undefined *)(REFG(int, 0x137104c) + 0x11b0),0,(int)this + 4,*ppvVar1);
  iVar2 = *(int *)((int)this + 0x400c) - *(int *)((int)this + 0x4008) >> 2;
  if (iVar2 != 0) {
    F_004a13a0((undefined *)(REFG(int, 0x137104c) + 0x11b0),0,*(undefined4 *)((int)this + 0x4008),iVar2);
  }
  uVar3 = F_00674770((undefined *)((int)this + 0x4008),0);
  *(undefined4 *)((int)this + 0x4004) = 0;
  return uVar3;
}

/* ref: FUN_00674d90 */
uint F_00674d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x674d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00675230((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00674da0 */
unsigned int F_00674da0(unsigned int gen_a0)
{
  GEN_ENTER(0x674da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x82c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x820) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ac330));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10ac318));
  puVar3 = (undefined4 *)((int)this + 0x820);
  iVar4 = 2;
  do {
    puVar3 = puVar3 + -3;
    iVar4 = iVar4 + -1;
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  puVar3 = (undefined4 *)((int)this + 0x7fc);
  iVar4 = 2;
  do {
    puVar3 = puVar3 + -3;
    iVar4 = iVar4 + -1;
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  puVar3 = (undefined4 *)((int)this + 0x7d8);
  iVar4 = 3;
  do {
    puVar3 = puVar3 + -3;
    iVar4 = iVar4 + -1;
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  puVar3 = (undefined4 *)((int)this + 0x7a8);
  iVar4 = 1;
  do {
    puVar3 = puVar3 + -3;
    iVar4 = iVar4 + -1;
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  puVar3 = (undefined4 *)((int)this + 0x790);
  iVar4 = 2;
  do {
    puVar3 = puVar3 + -3;
    iVar4 = iVar4 + -1;
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x760) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x754) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x748) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x73c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  puVar3 = (undefined4 *)((int)this + 0x73c);
  iVar4 = 1;
  do {
    puVar3 = puVar3 + -3;
    iVar4 = iVar4 + -1;
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  puVar3 = (undefined4 *)((int)this + 0x724);
  iVar4 = 1;
  do {
    puVar3 = puVar3 + -3;
    iVar4 = iVar4 + -1;
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  puVar3 = (undefined4 *)((int)this + 0x70c);
  iVar4 = 2;
  do {
    puVar3 = puVar3 + -3;
    iVar4 = iVar4 + -1;
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  puVar3 = (undefined4 *)((int)this + 0x6e8);
  iVar4 = 1;
  do {
    puVar3 = puVar3 + -3;
    iVar4 = iVar4 + -1;
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  puVar3 = (undefined4 *)((int)this + 0x6d0);
  iVar4 = 1;
  do {
    puVar3 = puVar3 + -3;
    iVar4 = iVar4 + -1;
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  puVar3 = (undefined4 *)((int)this + 0x6b8);
  iVar4 = 3;
  do {
    puVar3 = puVar3 + -3;
    iVar4 = iVar4 + -1;
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  puVar3 = (undefined4 *)((int)this + 0x688);
  iVar4 = 1;
  do {
    puVar3 = puVar3 + -3;
    iVar4 = iVar4 + -1;
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x3;
  puVar3 = (undefined4 *)((int)this + 0x670);
  do {
    piVar2 = (int *)puVar3[-0xc];
    puVar3[-0x10] = (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      puVar3[-0xc] = 0;
    }
    piVar2 = (int *)puVar3[-0xb];
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      puVar3[-0xb] = 0;
    }
    pvVar1 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + -1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
    puVar3 = puVar3 + -0x10;
  } while (-1 < (int)pvVar1);
  piVar2 = *(int * PTR32 *)((int)this + 0x540);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x530) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x540) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x544);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x544) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x500);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4f0) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x500) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x504);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x504) = 0;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x8;
  puVar3 = (undefined4 *)((int)this + 0x4f0);
  do {
    piVar2 = (int *)puVar3[-0xc];
    puVar3[-0x10] = (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      puVar3[-0xc] = 0;
    }
    piVar2 = (int *)puVar3[-0xb];
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      puVar3[-0xb] = 0;
    }
    pvVar1 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + -1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
    puVar3 = puVar3 + -0x10;
  } while (-1 < (int)pvVar1);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
  puVar3 = (undefined4 *)((int)this + 0x2b0);
  do {
    piVar2 = (int *)puVar3[-0xc];
    puVar3[-0x10] = (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      puVar3[-0xc] = 0;
    }
    piVar2 = (int *)puVar3[-0xb];
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      puVar3[-0xb] = 0;
    }
    pvVar1 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + -1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
    puVar3 = puVar3 + -0x10;
  } while (-1 < (int)pvVar1);
  piVar2 = *(int * PTR32 *)((int)this + 0x200);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f0) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x200) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x204);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x204) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x1c0);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x1c0) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x1c4);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x1c4) = 0;
  }
  iVar4 = *(int *)((int)this + 400);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)((int)this + 0x198) - iVar4 >> 2) * 4,0xd2);
  }
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  iVar4 = *(int *)((int)this + 0x180);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)((int)this + 0x188) - iVar4 >> 2) * 4,0xd2);
  }
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  iVar4 = *(int *)((int)this + 0x170);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)((int)this + 0x178) - iVar4 >> 2) * 4,0xd2);
  }
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  iVar4 = *(int *)((int)this + 0x160);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)((int)this + 0x168) - iVar4 >> 2) * 4,0xd2);
  }
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  iVar4 = *(int *)((int)this + 0x150);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)((int)this + 0x158) - iVar4 >> 2) * 4,0xd2);
  }
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  iVar4 = *(int *)((int)this + 0x140);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)((int)this + 0x148) - iVar4 >> 2) * 4,0xd2);
  }
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  F_00672c60((undefined *)((int)this + 0x130),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x134),
               *(undefined4 * PTR32 *)((int)this + 0x134));
  F_00429760(*(undefined4 *)((int)this + 0x134),0x1c,0xd2);
  F_004d6680((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10abb54));
  return 0;
}

/* ref: Client::Graphics::Render::LightingManager::vf0 */
uint F_00675230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x675230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00674da0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00675260 */
uint F_00675260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x675260u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  return *((uint *)GEN_TOP((in_ecx + 0x50 + (param_2 & 1) * 4)));
}

/* ref: FUN_006752f0 */
float10 F_006752f0(float gen_a0)
{
  GEN_ENTER(0x6752f0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00c4f340((float10)param_1);
  return (float10)(float)fVar1;
}

/* ref: FUN_00675320 */
uint F_00675320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x675320u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  *param_1 = *param_1 - param_2;
  param_1[2] = param_1[2] + param_2;
  param_1[1] = param_1[1] - param_3;
  param_1[3] = param_1[3] + param_3;
  return (uint)param_1;
}

/* ref: FUN_00675340 */
unsigned int F_00675340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x675340u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  float10 fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = (float10)1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)param_1 = 0;
  uVar2 = REFG(float, 0x1087f04);
  *(undefined4 *)(param_1 + 0xc) = REFG(float, 0x1087f04);
  *(undefined4 *)(param_1 + 8) = uVar2;
  if ((param_3 != 0) && (param_2 != (int *)0x0)) {
    fVar4 = (float10)*param_2;
    if (*param_2 < 0) {
      fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar5 = (float10)param_2[1];
    if (param_2[1] < 0) {
      fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *(float *)param_1 =
         ((float)GEN_TOF(((float10)(float)(fVar1 / fVar4) * (float10)*(int *)param_3 + (float10)0)));
    *(float *)(param_1 + 4) =
         ((float)GEN_TOF(((float10)(float)(fVar1 / fVar5) * (float10)*(int *)(param_3 + 4) + (float10)0)));
    iVar3 = *param_2 - *(int *)(param_3 + 8);
    fVar6 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *(float *)(param_1 + 8) = ((float)GEN_TOF((fVar1 - fVar6 * (float10)(float)(fVar1 / fVar4))));
    iVar3 = param_2[1] - *(int *)(param_3 + 0xc);
    fVar4 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *(float *)(param_1 + 0xc) = ((float)GEN_TOF((fVar1 - fVar4 * (float10)(float)(fVar1 / fVar5))));
  }
  if ((param_5 != (int *)0x0) && (param_4 != (int *)0x0)) {
    fVar4 = (float10)*param_4;
    if (*param_4 < 0) {
      fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar5 = (float10)param_4[1];
    if (param_4[1] < 0) {
      fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *(float *)param_1 =
         ((float)GEN_TOF(((float10)*(float *)param_1 - (float10)(float)(fVar1 / fVar4) * (float10)*param_5)));
    *(float *)(param_1 + 4) =
         ((float)GEN_TOF(((float10)*(float *)(param_1 + 4) -
                (float10)(float)(fVar1 / fVar5) * (float10)param_5[1])));
    fVar6 = (float10)(*param_4 - param_5[2]);
    if (*param_4 - param_5[2] < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *(float *)(param_1 + 8) =
         ((float)GEN_TOF(((float10)*(float *)(param_1 + 8) + fVar6 * (float10)(float)(fVar1 / fVar4))));
    iVar3 = param_4[1] - param_5[3];
    fVar4 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *(float *)(param_1 + 0xc) =
         ((float)GEN_TOF((fVar4 * (float10)(float)(fVar1 / fVar5) + (float10)*(float *)(param_1 + 0xc))));
    return 0;
  }
  return 0;
}

/* ref: FUN_006754b0 */
unsigned int F_006754b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6754b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  ((undefined4 *)(gen_frame + 0xc))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0], REFG(float, 0x1099848));
  ((undefined4 *)(gen_frame + 0xc))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[1], REFG(float, 0x1099848));
  ((undefined4 *)(gen_frame + 0xc))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[2], REFG(float, 0x1094808));
  ((undefined4 *)(gen_frame + 0xc))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[3], REFG(float, 0x1099848));
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x1099848);
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1094808);
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1094808);
  (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1094808);
  puVar2 = ((undefined4 *)(gen_frame + 0xc));
  puVar3 = param_1;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_00675510 */
unsigned int F_00675510(unsigned int gen_a0)
{
  GEN_ENTER(0x675510u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  ((undefined4 *)(gen_frame + 0x4))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x4))[0], REFG(float, 0x10adb70));
  ((undefined4 *)(gen_frame + 0x4))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x4))[1], REFG(float, 0x10adb70));
  ((undefined4 *)(gen_frame + 0x4))[2] = 0;
  ((undefined4 *)(gen_frame + 0x4))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x4))[3], REFG(float, 0x10adb70));
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x10adb6c);
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x10adb70);
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x10adb70);
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x10adb6c);
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x10adb70);
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10adb6c);
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = REFG(float, 0x10adb6c);
  (*(undefined4 *)(gen_frame + 0x44)) = REFG(float, 0x10adb6c);
  (*(undefined4 *)(gen_frame + 0x48)) = REFG(float, 0x10adb6c);
  puVar2 = ((undefined4 *)(gen_frame + 0x4));
  puVar3 = param_1;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_006755a0 */
unsigned int F_006755a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6755a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  ((undefined4 *)(gen_frame + 0xc))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0], REFG(float, 0x10adb78));
  ((undefined4 *)(gen_frame + 0xc))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[1], REFG(float, 0x10adb78));
  ((undefined4 *)(gen_frame + 0xc))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[2], REFG(float, 0x10ac274));
  ((undefined4 *)(gen_frame + 0xc))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[3], REFG(float, 0x10adb78));
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x10ac160);
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x10adb78);
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x10adb74);
  (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x10adb78);
  (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x10adb78);
  (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x10ac274);
  (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x10ac274);
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10ac274);
  (*(undefined4 *)(gen_frame + 0x3c)) = REFG(float, 0x10ac160);
  (*(undefined4 *)(gen_frame + 0x40)) = REFG(float, 0x10ac274);
  (*(undefined4 *)(gen_frame + 0x44)) = REFG(float, 0x10adb74);
  (*(undefined4 *)(gen_frame + 0x48)) = REFG(float, 0x10ac274);
  (*(undefined4 *)(gen_frame + 0x4c)) = REFG(float, 0x10adb78);
  (*(undefined4 *)(gen_frame + 0x50)) = REFG(float, 0x10ac160);
  (*(undefined4 *)(gen_frame + 0x54)) = REFG(float, 0x10ac274);
  (*(undefined4 *)(gen_frame + 0x58)) = REFG(float, 0x10ac160);
  (*(undefined4 *)(gen_frame + 0x5c)) = REFG(float, 0x10ac160);
  (*(undefined4 *)(gen_frame + 0x60)) = REFG(float, 0x10ac160);
  (*(undefined4 *)(gen_frame + 0x64)) = REFG(float, 0x10adb74);
  (*(undefined4 *)(gen_frame + 0x68)) = REFG(float, 0x10ac160);
  (*(undefined4 *)(gen_frame + 0x6c)) = REFG(float, 0x10adb78);
  (*(undefined4 *)(gen_frame + 0x70)) = REFG(float, 0x10adb74);
  (*(undefined4 *)(gen_frame + 0x74)) = REFG(float, 0x10ac274);
  (*(undefined4 *)(gen_frame + 0x78)) = REFG(float, 0x10adb74);
  (*(undefined4 *)(gen_frame + 0x7c)) = REFG(float, 0x10ac160);
  (*(undefined4 *)(gen_frame + 0x80)) = REFG(float, 0x10adb74);
  (*(undefined4 *)(gen_frame + 0x84)) = REFG(float, 0x10adb74);
  (*(undefined4 *)(gen_frame + 0x88)) = REFG(float, 0x10adb74);
  puVar2 = ((undefined4 *)(gen_frame + 0xc));
  puVar3 = param_1;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_00675680 */
unsigned int F_00675680(unsigned int gen_a0)
{
  GEN_ENTER(0x675680u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  ((undefined4 *)(gen_frame + 0x4))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x4))[0], REFG(float, 0x1090708));
  ((undefined4 *)(gen_frame + 0x4))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x4))[1], REFG(float, 0x1090708));
  ((undefined4 *)(gen_frame + 0x4))[2] = 0;
  ((undefined4 *)(gen_frame + 0x4))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x4))[3], REFG(float, 0x1090708));
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x44)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x48)) = REFG(float, 0x1087f04);
  puVar2 = ((undefined4 *)(gen_frame + 0x4));
  puVar3 = param_1;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_00675710 */
unsigned int F_00675710(unsigned int gen_a0)
{
  GEN_ENTER(0x675710u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  ((undefined4 *)(gen_frame + 0xc))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0], REFG(float, 0x1090708));
  ((undefined4 *)(gen_frame + 0xc))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[1], REFG(float, 0x109cab8));
  ((undefined4 *)(gen_frame + 0xc))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[2], REFG(float, 0x1087f04));
  ((undefined4 *)(gen_frame + 0xc))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[3], REFG(float, 0x1088068));
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x1088068);
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x109cab8);
  (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1087f04);
  puVar2 = ((undefined4 *)(gen_frame + 0xc));
  puVar3 = param_1;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_00675780 */
unsigned int F_00675780(unsigned int gen_a0)
{
  GEN_ENTER(0x675780u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  ((undefined4 *)(gen_frame + 0xc))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0], REFG(float, 0x109cab8));
  ((undefined4 *)(gen_frame + 0xc))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[1], REFG(float, 0x109cab8));
  ((undefined4 *)(gen_frame + 0xc))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[2], REFG(float, 0x1088068));
  ((undefined4 *)(gen_frame + 0xc))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[3], REFG(float, 0x109cab8));
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x109cab8);
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1088068);
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1088068);
  (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1088068);
  puVar2 = ((undefined4 *)(gen_frame + 0xc));
  puVar3 = param_1;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_006757e0 */
unsigned int F_006757e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6757e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  ((undefined4 *)(gen_frame + 0x4))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x4))[1], REFG(float, 0x109cb08));
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x109cb08);
  ((undefined4 *)(gen_frame + 0x4))[0] = 0;
  ((undefined4 *)(gen_frame + 0x4))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x4))[2], REFG(float, 0x1090708));
  ((undefined4 *)(gen_frame + 0x4))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x4))[3], REFG(float, 0x1090708));
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = REFG(float, 0x10928e4);
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x50)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x5c)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x60)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = REFG(float, 0x10928e4);
  puVar2 = ((undefined4 *)(gen_frame + 0x4));
  puVar3 = param_1;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_006758a0 */
unsigned int F_006758a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6758a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  ((undefined4 *)(gen_frame + 0x4))[0] = 0;
  ((undefined4 *)(gen_frame + 0x4))[1] = 0;
  ((undefined4 *)(gen_frame + 0x4))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x4))[2], REFG(float, 0x10adb80));
  ((undefined4 *)(gen_frame + 0x4))[3] = 0;
  ((undefined4 *)(gen_frame + 0x4))[4] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x4))[4], REFG(float, 0x10adb7c));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x10adb80);
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x10adb7c);
  (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x10adb80);
  (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x10adb80);
  (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x10adb80);
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10adb7c);
  (*(undefined4 *)(gen_frame + 0x3c)) = REFG(float, 0x10adb7c);
  (*(undefined4 *)(gen_frame + 0x40)) = REFG(float, 0x10adb80);
  (*(undefined4 *)(gen_frame + 0x44)) = REFG(float, 0x10adb7c);
  (*(undefined4 *)(gen_frame + 0x48)) = REFG(float, 0x10adb7c);
  puVar2 = ((undefined4 *)(gen_frame + 0x4));
  puVar3 = param_1;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_00675930 */
uint F_00675930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x675930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined1 gen_out[0x4];
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = REFG(float, 0x1090708);
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = uVar2;
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[2] = uVar3;
  if ((char)param_2 == '\0') {
    uVar2 = 0;
  }
  param_1[3] = uVar2;
  uVar2 = REFG(float, 0x109cb08);
  uVar3 = REFG(float, 0x109cb08);
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[4] = uVar3;
  if ((char)param_2 == '\0') {
    uVar2 = 0;
  }
  param_1[5] = uVar2;
  uVar2 = REFG(float, 0x10adb88);
  uVar3 = REFG(float, 0x10adb88);
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[6] = uVar3;
  if ((char)param_2 == '\0') {
    uVar2 = 0;
  }
  param_1[7] = uVar2;
  uVar2 = REFG(float, 0x10adb84);
  uVar3 = REFG(float, 0x10adb84);
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[8] = uVar3;
  if ((char)param_2 == '\0') {
    uVar2 = 0;
  }
  param_1[9] = uVar2;
  uVar2 = REFG(float, 0x1087f04);
  uVar3 = REFG(float, 0x1087f04);
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[10] = uVar3;
  if ((char)param_2 == '\0') {
    uVar2 = 0;
  }
  param_1[0xb] = uVar2;
  uVar2 = REFG(float, 0x10928e4);
  uVar3 = REFG(float, 0x10928e4);
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[0xc] = uVar3;
  if ((char)param_2 == '\0') {
    uVar2 = 0;
  }
  param_1[0xd] = uVar2;
  uVar2 = REFG(float, 0x1087ef8);
  uVar3 = REFG(float, 0x1087ef8);
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[0xe] = uVar3;
  uVar3 = REFG(float, 0x1094870);
  if ((char)param_2 == '\0') {
    uVar2 = 0;
  }
  param_1[0xf] = uVar2;
  uVar2 = uVar3;
  if ((char)param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[0x10] = uVar2;
  uVar2 = 0;
  if ((char)param_2 != '\0') {
    uVar2 = uVar3;
  }
  param_1[0x11] = uVar2;
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0));
  return (uint)param_1;
}

/* ref: FUN_00675a90 */
uint F_00675a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x675a90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined1 gen_out[0x4];
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = REFG(float, 0x10adb98);
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = uVar2;
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[2] = uVar3;
  if ((char)param_2 == '\0') {
    uVar2 = 0;
  }
  param_1[3] = uVar2;
  uVar2 = REFG(float, 0x10adb94);
  uVar3 = REFG(float, 0x10adb94);
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[4] = uVar3;
  if ((char)param_2 == '\0') {
    uVar2 = 0;
  }
  param_1[5] = uVar2;
  uVar2 = REFG(float, 0x10adb90);
  uVar3 = REFG(float, 0x10adb90);
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[6] = uVar3;
  uVar3 = REFG(float, 0x10adb8c);
  if ((char)param_2 == '\0') {
    uVar2 = 0;
  }
  param_1[7] = uVar2;
  uVar2 = uVar3;
  if ((char)param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[8] = uVar2;
  uVar2 = 0;
  if ((char)param_2 != '\0') {
    uVar2 = uVar3;
  }
  param_1[9] = uVar2;
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0));
  return (uint)param_1;
}

/* ref: FUN_00675b60 */
uint F_00675b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x675b60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar7 = REFG(float, 0x10adba0);
  uVar4 = REFG(float, 0x10adb88);
  uVar5 = REFG(float, 0x10adb84);
  uVar6 = REFG(float, 0x10ac048);
  uVar8 = REFG(float, 0x109cb08);
  uVar3 = REFG(float, 0x1090708);
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x38)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1087f04);
  ((undefined4 *)(gen_frame + 0x24))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x24))[0], REFG(float, 0x10928e4));
  ((undefined4 *)(gen_frame + 0x24))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x24))[1], REFG(float, 0x1087ef8));
  ((undefined4 *)(gen_frame + 0x24))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x24))[2], REFG(float, 0x1094870));
  ((undefined4 *)(gen_frame + 0x24))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x24))[3], REFG(float, 0x10a509c));
  ((undefined4 *)(gen_frame + 0x4))[0] = 0;
  ((undefined4 *)(gen_frame + 0x4))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x4))[1], REFG(float, 0x1090708));
  ((undefined4 *)(gen_frame + 0x4))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x4))[2], REFG(float, 0x109cb08));
  ((undefined4 *)(gen_frame + 0x4))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x4))[3], REFG(float, 0x10adb88));
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x10adb84);
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x10ac048);
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x10adba0);
  ((undefined4 *)(gen_frame + 0x24))[4] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x24))[4], REFG(float, 0x10adb9c));
  *param_1 = 0;
  param_1[1] = 0;
  uVar9 = uVar3;
  if ((char)param_2 != '\0') {
    uVar9 = 0;
  }
  param_1[2] = uVar9;
  if ((char)param_2 == '\0') {
    uVar3 = 0;
  }
  param_1[3] = uVar3;
  uVar3 = uVar8;
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[4] = uVar3;
  if ((char)param_2 == '\0') {
    uVar8 = 0;
  }
  param_1[5] = uVar8;
  uVar3 = uVar4;
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[6] = uVar3;
  if ((char)param_2 == '\0') {
    uVar4 = 0;
  }
  param_1[7] = uVar4;
  uVar3 = uVar5;
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[8] = uVar3;
  if ((char)param_2 == '\0') {
    uVar5 = 0;
  }
  param_1[9] = uVar5;
  uVar3 = uVar6;
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[10] = uVar3;
  if ((char)param_2 == '\0') {
    uVar6 = 0;
  }
  param_1[0xb] = uVar6;
  uVar3 = uVar7;
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[0xc] = uVar3;
  if ((char)param_2 == '\0') {
    uVar7 = 0;
  }
  param_1[0xd] = uVar7;
  uVar3 = REFG(float, 0x1087f04);
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[0xe] = uVar3;
  uVar3 = REFG(float, 0x1087f04);
  if ((char)param_2 == '\0') {
    uVar3 = 0;
  }
  param_1[0xf] = uVar3;
  uVar2 = 8;
  do {
    if ((char)param_2 == '\0') {
      uVar3 = ((undefined4 *)(gen_frame + 0x4))[(int)(uVar2)];
    }
    else {
      uVar3 = 0;
    }
    param_1[uVar2 * 2] = uVar3;
    if ((char)param_2 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = ((undefined4 *)(gen_frame + 0x4))[(int)(uVar2)];
    }
    param_1[uVar2 * 2 + 1] = uVar3;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xd);
  F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)param_1;
}

/* ref: FUN_00675d60 */
uint F_00675d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x675d60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined1 gen_out[0x4];
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = REFG(float, 0x10adbb8);
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = uVar2;
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[2] = uVar3;
  if ((char)param_2 == '\0') {
    uVar2 = 0;
  }
  param_1[3] = uVar2;
  uVar2 = REFG(float, 0x10adbb4);
  uVar3 = REFG(float, 0x10adbb4);
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[4] = uVar3;
  if ((char)param_2 == '\0') {
    uVar2 = 0;
  }
  param_1[5] = uVar2;
  uVar2 = REFG(float, 0x10adbb0);
  uVar3 = REFG(float, 0x10adbb0);
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[6] = uVar3;
  if ((char)param_2 == '\0') {
    uVar2 = 0;
  }
  param_1[7] = uVar2;
  uVar2 = REFG(float, 0x10adbac);
  uVar3 = REFG(float, 0x10adbac);
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[8] = uVar3;
  if ((char)param_2 == '\0') {
    uVar2 = 0;
  }
  param_1[9] = uVar2;
  uVar2 = REFG(float, 0x10adba8);
  uVar3 = REFG(float, 0x10adba8);
  if ((char)param_2 != '\0') {
    uVar3 = 0;
  }
  param_1[10] = uVar3;
  uVar3 = REFG(float, 0x10adba4);
  if ((char)param_2 == '\0') {
    uVar2 = 0;
  }
  param_1[0xb] = uVar2;
  uVar2 = uVar3;
  if ((char)param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[0xc] = uVar2;
  uVar2 = 0;
  if ((char)param_2 != '\0') {
    uVar2 = uVar3;
  }
  param_1[0xd] = uVar2;
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0));
  return (uint)param_1;
}

/* ref: FUN_00675e70 */
unsigned int F_00675e70(unsigned int gen_a0)
{
  GEN_ENTER(0x675e70u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  ((undefined4 *)(gen_frame + 0xc))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0], REFG(float, 0x10adbd0));
  ((undefined4 *)(gen_frame + 0xc))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[1], REFG(float, 0x10adbd0));
  ((undefined4 *)(gen_frame + 0xc))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[2], REFG(float, 0x10adbcc));
  ((undefined4 *)(gen_frame + 0xc))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[3], REFG(float, 0x10adbd0));
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x10adbd0);
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x10adbcc);
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x10adbcc);
  (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x10adbcc);
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x10adbc4);
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10adbc4);
  (*(undefined4 *)(gen_frame + 0x3c)) = REFG(float, 0x10adbc0);
  (*(undefined4 *)(gen_frame + 0x48)) = REFG(float, 0x10adbc0);
  (*(undefined4 *)(gen_frame + 0x4c)) = REFG(float, 0x10adbbc);
  (*(undefined4 *)(gen_frame + 0x50)) = REFG(float, 0x10adbc4);
  (*(undefined4 *)(gen_frame + 0x54)) = REFG(float, 0x10adbc4);
  (*(undefined4 *)(gen_frame + 0x58)) = REFG(float, 0x10adbbc);
  (*(undefined4 *)(gen_frame + 0x5c)) = REFG(float, 0x10adbc8);
  (*(undefined4 *)(gen_frame + 0x60)) = REFG(float, 0x10adbc4);
  (*(undefined4 *)(gen_frame + 0x64)) = REFG(float, 0x10adbc0);
  (*(undefined4 *)(gen_frame + 0x68)) = REFG(float, 0x10adbbc);
  (*(undefined4 *)(gen_frame + 0x6c)) = REFG(float, 0x10adbbc);
  (*(undefined4 *)(gen_frame + 0x70)) = REFG(float, 0x10adbc0);
  (*(undefined4 *)(gen_frame + 0x74)) = REFG(float, 0x10adbc4);
  (*(undefined4 *)(gen_frame + 0x78)) = REFG(float, 0x10adbc8);
  (*(undefined4 *)(gen_frame + 0x7c)) = REFG(float, 0x10adbc8);
  (*(undefined4 *)(gen_frame + 0x80)) = REFG(float, 0x10adbc0);
  (*(undefined4 *)(gen_frame + 0x84)) = REFG(float, 0x10adbc0);
  (*(undefined4 *)(gen_frame + 0x88)) = REFG(float, 0x10adbc8);
  puVar2 = ((undefined4 *)(gen_frame + 0xc));
  puVar3 = param_1;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_00675f70 */
unsigned int F_00675f70(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x675f70u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)1;
  fVar2 = (float10)param_2;
  fVar3 = (float10)((float)GEN_TOF((fVar1 / ((float10)param_5 - (float10)param_4))));
  *param_1 = ((float)GEN_TOF((fVar3 * (float10)(float)(fVar1 / fVar2))));
  fVar4 = (float10)param_3;
  param_1[1] = ((float)GEN_TOF(((((fVar4 - fVar2) * (fVar3 * (float10)param_4)) / fVar4 + fVar1) *
                      (float10)((float)GEN_TOF(((fVar2 - fVar4) / (fVar2 * fVar4)))))));
  return 0;
}

/* ref: FUN_00675fd0 */
uint F_00675fd0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x675fd0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *param_1 = param_2;
  param_1[1] = ((float)GEN_TOF((((float10)param_3 - (float10)param_2) / (float10)param_4)));
  return (uint)param_1;
}

/* ref: FUN_00675ff0 */
unsigned int F_00675ff0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x675ff0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)param_2;
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10948c8);
  param_1[0xe] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xc] = 0.0;
  fVar1 = (float)(fVar5 * fVar4);
  param_1[2] = fVar1;
  param_1[1] = fVar1;
  fVar2 = (float)(fVar4 * (float10)*(double *)&REFG(undefined, 0x10948c0));
  param_1[6] = fVar2;
  param_1[4] = fVar2;
  fVar3 = (float)(fVar4 * (float10)*(double *)&REFG(undefined, 0x10948b8));
  param_1[9] = fVar3;
  param_1[8] = fVar3;
  fVar4 = (float10)1 - fVar4;
  *param_1 = (float)((float10)fVar1 + fVar4);
  param_1[5] = (float)((float10)fVar2 + fVar4);
  param_1[10] = (float)((float10)fVar3 + fVar4);
  return 0;
}

/* ref: FUN_00676060 */
uint F_00676060(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x676060u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  
  param_1[9] = 0.0;
  param_1[8] = 0.0;
  param_1[6] = 0.0;
  param_1[4] = 0.0;
  param_1[2] = 0.0;
  fVar1 = ((float)GEN_TOF(((float10)1 - ((float10)param_2 + (float10)param_2))));
  param_1[1] = 0.0;
  param_1[10] = fVar1;
  param_1[0xe] = param_2;
  param_1[5] = fVar1;
  param_1[0xd] = param_2;
  *param_1 = fVar1;
  param_1[0xc] = param_2;
  return (uint)param_1;
}

/* ref: FUN_006760c0 */
unsigned int F_006760c0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x6760c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar4 = (float10)param_3;
  fVar1 = (float)(fVar4 * (float10)*(float *)param_2);
  *(float *)(param_1 + 0x20) = fVar1;
  *(float *)param_1 = fVar1;
  *(float *)(param_1 + 0x10) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * fVar4)));
  *(float *)(param_1 + 0x24) = fVar2;
  *(float *)(param_1 + 0x14) = fVar2;
  *(float *)(param_1 + 4) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * fVar4)));
  *(float *)(param_1 + 0x28) = fVar3;
  *(float *)(param_1 + 0x18) = fVar3;
  *(float *)(param_1 + 8) = fVar3;
  fVar4 = (float10)1 - fVar4;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(float *)param_1 = (float)((float10)fVar1 + fVar4);
  *(float *)(param_1 + 0x14) = (float)((float10)fVar2 + fVar4);
  *(float *)(param_1 + 0x28) = ((float)GEN_TOF((fVar4 + (float10)*(float *)(param_1 + 0x28))));
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectSystem::vf1 */
unsigned int F_00676160(unsigned int gen_a0)
{
  GEN_ENTER(0x676160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x5c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x5c) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x54);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x54) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x4c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x4c) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x48);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x48) = 0;
  }
  return 0;
}

/* ref: FUN_006761b0 */
uint F_006761b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6761b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  if (((param_2 != -1) && (iVar1 = *(int *)(in_ecx + 8 + param_2 * 4), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x98) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006761f0 */
unsigned int F_006761f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6761f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  char cVar1;
  uint uVar2;
  int * piVar3;
  
  if (param_1 < 4) {
    if (param_2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
    }
    piVar3 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x18);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    }
    *(int * PTR32 *)((int)this + param_1 * 4 + 0x18) = param_2;
    *(undefined1 *)((int)this + 0x42) = 0;
    uVar2 = 0;
    piVar3 = (int *)((int)this + 0x18);
    do {
      if (*piVar3 == 0) {
        return 0;
      }
      cVar1 = (char)uVar2;
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
      *(char *)((int)this + 0x42) = cVar1 + '\x01';
    } while (uVar2 < 4);
  }
  return 0;
}

/* ref: FUN_00676250 */
unsigned int F_00676250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x676250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x28);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x28) = param_1;
  return 0;
}

/* ref: FUN_00676280 */
ushort F_00676280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x676280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)((int)this + 0x38) = (ushort)param_1;
  *(undefined2 *)((int)this + 0x3a) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_006762a0 */
ushort F_006762a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6762a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)((int)this + 0x3c) = (ushort)param_1;
  *(undefined2 *)((int)this + 0x3e) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_006762c0 */
byte F_006762c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6762c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(byte *)((int)this + 0x48) =
       (((byte)param_2 & 1) * '\x02' | (byte)param_1 & 1) * '\x02' |
       *(byte *)((int)this + 0x48) & 0xf9;
  *(byte *)((int)this + 0x43) = (byte)param_3;
  return (byte)param_3;
}

/* ref: FUN_006762f0 */
uint F_006762f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6762f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  *(byte *)((int)this + 0x48) =
       *(byte *)((int)this + 0x48) ^ (*(byte *)((int)this + 0x48) ^ (byte)param_1) & 1;
  uVar1 = *param_2;
  *(uint *)((int)this + 0x34) = uVar1;
  return uVar1;
}

/* ref: FUN_00676310 */
uint F_00676310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x676310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(uint *)(in_ecx + 0x4c) ^ param_2) & 0xf;
  *(uint *)(in_ecx + 0x4c) = *(uint *)(in_ecx + 0x4c) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00676330 */
uint F_00676330(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x676330u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 8);
  *(float *)(uVar1 + 0x20) = param_2;
  return uVar1;
}

/* ref: FUN_00676350 */
unsigned int F_00676350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x676350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    uVar2 = 0;
    if (*(char *)((int)this + 0x41) != '\0') {
      iVar3 = 0;
      do {
        if (*((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 4 + iVar3))) == param_1) {
          if (param_2 != (int *)0x0) {
            ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
          }
          if (*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4 + iVar3))) != 0) {
            piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 4 + iVar3)));
            ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
          }
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 4 + iVar3))) = param_2;
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0xc;
      } while (uVar2 < *(byte *)((int)this + 0x41));
    }
    if (*(int * PTR32 *)((int)this + 0x14) == param_1) {
      *(int * PTR32 *)((int)this + 0x14) = param_2;
    }
  }
  return 0;
}

/* ref: FUN_006763e0 */
unsigned int F_006763e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6763e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adc0c));
  *(undefined4 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[5])REFP(0x10adbf4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x80) = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  F_004d6680((undefined4 *)((int)this + 0x50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  return 0;
}

/* ref: FUN_00676430 */
uint F_00676430(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x676430u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_1 = (float)(fVar1 * (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] * fVar1);
  param_1[2] = (float)((float10)param_2[2] * fVar1);
  param_1[3] = (float)(fVar1 * (float10)param_2[3]);
  return (uint)param_2;
}

/* ref: FUN_00676460 */
unsigned int F_00676460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x676460u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_4;
  fVar2 = (float10)(float)((float10)1 - fVar1);
  *param_1 = (float)((float10)*param_3 * fVar1 + fVar2 * (float10)*param_2);
  param_1[1] = (float)((float10)param_3[1] * fVar1 + (float10)param_2[1] * fVar2);
  param_1[2] = (float)((float10)param_3[2] * fVar1 + (float10)param_2[2] * fVar2);
  param_1[3] = (float)(fVar2 * (float10)param_2[3] + (float10)param_3[3] * fVar1);
  return 0;
}

/* ref: FUN_00676510 */
uint F_00676510(unsigned int gen_a0)
{
  GEN_ENTER(0x676510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  uVar3 = 0;
  if (*(int *)((int)this + 8) != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4)));
        ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4)));
        if (puVar2 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 8));
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00406b30(*(int *)((int)this + 4));
    uVar3 = (uint)uVar4;
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00676590 */
uint F_00676590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x676590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_006765a0 */
unsigned int F_006765a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6765a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0xc) != param_1) {
    if ((*(int *)((int)this + 0xc) != 0) && (uVar1 = 0, *(int *)((int)this + 8) != 0)) {
      do {
        if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar1 * 4))) != 0) {
          F_00676350(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar1 * 4))),
                       *(undefined4 *)((int)this + 0xc),param_1);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)this + 8));
    }
    *(int *)((int)this + 0xc) = param_1;
  }
  return 0;
}

/* ref: FUN_006765f0 */
unsigned int F_006765f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6765f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  iVar2 = *(int *)((int)this + 8) + -1;
  if (-1 < iVar2) {
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4)));
    while (*piVar4 == 0) {
      piVar4 = piVar4 + -1;
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return 0;
      }
    }
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4)));
    if (param_1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
    }
    piVar4 = *(int * PTR32 *)(iVar2 + 0x18);
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    }
    *(int * PTR32 *)(iVar2 + 0x18) = param_1;
    *(undefined1 *)(iVar2 + 0x42) = 0;
    uVar3 = 0;
    piVar4 = (int *)(iVar2 + 0x18);
    do {
      if (*piVar4 == 0) {
        return 0;
      }
      cVar1 = (char)uVar3;
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
      *(char *)(iVar2 + 0x42) = cVar1 + '\x01';
    } while (uVar3 < 4);
  }
  return 0;
}

/* ref: FUN_00676670 */
uint F_00676670(unsigned int gen_a0)
{
  GEN_ENTER(0x676670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  if (*(int *)((int)this + 4) != 0) {
    F_0050c620(*(int *)((int)this + 4),0,0);
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar2 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = F_0050c620(*(int *)((int)this + 8),0,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  return uVar2;
}

/* ref: FUN_00676700 */
uint F_00676700(unsigned int gen_a0)
{
  GEN_ENTER(0x676700u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return 0;
}

/* ref: FUN_00676720 */
uint F_00676720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x676720u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (uint)((1 << ((byte)param_2 & 0x1f) & *((uint *)GEN_TOP((param_1 + (param_2 >> 5) * 4)))) != 0);
}

/* ref: FUN_00676750 */
uint F_00676750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x676750u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 1 << ((byte)param_2 & 0x1f);
  uVar2 = param_2 >> 5;
  if ((char)param_3 != '\0') {
    puVar1 = (uint *)(param_1 + uVar2 * 4);
    *puVar1 = *puVar1 | uVar3;
    return uVar2;
  }
  puVar1 = (uint *)(param_1 + uVar2 * 4);
  *puVar1 = *puVar1 & ~uVar3;
  return uVar2;
}

/* ref: FUN_00676790 */
unsigned int F_00676790(unsigned int gen_a0)
{
  GEN_ENTER(0x676790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  piVar3 = (int *)((int)this + 0x604);
  iVar2 = 5;
  do {
    iVar4 = 0x80;
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_006767d0 */
uint F_006767d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6767d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = 0;
  do {
    bVar2 = (byte)uVar3;
    if ((*((uint *)GEN_TOP(((int)this + (uVar3 >> 5) * 4 + 0x1004))) & 1 << (bVar2 & 0x1f)) == 0) {
      uVar5 = uVar3 >> 5;
      puVar1 = (uint *)((int)this + uVar5 * 4 + 0x1004);
      *puVar1 = *puVar1 | 1 << (bVar2 & 0x1f);
      uVar4 = ~(1 << (bVar2 & 0x1f) | 1U >> 0x20 - (bVar2 & 0x1f));
      puVar1 = (uint *)((int)this + uVar5 * 4 + 0x1014);
      *puVar1 = *puVar1 & uVar4;
      puVar1 = (uint *)((int)this + uVar5 * 4 + 0x1024);
      *puVar1 = *puVar1 & uVar4;
      puVar1 = (uint *)((int)this + uVar5 * 4 + 0x1034);
      *puVar1 = *puVar1 & uVar4;
      puVar1 = (uint *)((int)this + uVar5 * 4 + 0x1044);
      *puVar1 = *puVar1 & uVar4;
      puVar1 = (uint *)((int)this + uVar5 * 4 + 0x1054);
      *puVar1 = *puVar1 & uVar4;
      return uVar3;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x80);
  return 0xffffffff;
}

/* ref: FUN_00676850 */
uint F_00676850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x676850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = ~(1 << ((byte)param_1 & 0x1f));
  puVar1 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1004)));
  *puVar1 = *puVar1 & uVar2;
  return uVar2;
}

/* ref: FUN_00676880 */
uint F_00676880(unsigned int gen_a0)
{
  GEN_ENTER(0x676880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  F_00676510((undefined *)((int)this + 0x30));
  uVar2 = F_00676510((undefined *)((int)this + 0x10));
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return uVar2;
}

/* ref: FUN_00676920 */
unsigned int F_00676920(float gen_a0)
{
  GEN_ENTER(0x676920u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_006769a0 */
byte F_006769a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6769a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  if (param_1 != 0) {
    uVar1 = 0;
    if (*(uint *)(param_1 + 0xc) != 0) {
      piVar2 = ((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 4)));
      do {
        if (*piVar2 == param_2) {
          return 1;
        }
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 2;
      } while (uVar1 < *(uint *)(param_1 + 0xc));
    }
  }
  return 0;
}

/* ref: FUN_006769e0 */
byte F_006769e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6769e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  if (param_1 != 0) {
    uVar1 = 0;
    if (*(uint *)(param_1 + 0x14) != 0) {
      piVar2 = ((int *)GEN_TOP((*(int *)(param_1 + 0x18) + 4)));
      do {
        if (*piVar2 == param_2) {
          return 1;
        }
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 2;
      } while (uVar1 < *(uint *)(param_1 + 0x14));
    }
  }
  return 0;
}

/* ref: FUN_00676a20 */
unsigned int F_00676a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x676a20u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  
  *param_1 = *param_1 ^
             ((-(uint)(param_2 != 2) & 0xe | (uint)(param_3 != 2)) << 0x17 ^ *param_1) & 0x7800000;
  uVar1 = *param_1;
  if ((param_2 == 1) && (param_3 == 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *param_1 = uVar1 & 0xffff8ff0 | uVar2;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    uVar2 = uVar1 & 0xffff8000 | uVar2;
    break;
  case 1: ;
    uVar2 = uVar1 & 0xffff8010 | uVar2 | 0x10;
    break;
  case 2: ;
    uVar2 = uVar1 & 0xffff8100 | uVar2 | 0x100;
    break;
  case 3: ;
    uVar2 = uVar1 & 0xffff8110 | uVar2 | 0x110;
    break;
  case 4: ;
    uVar2 = uVar1 & 0xffff8200 | uVar2 | 0x200;
    break;
  case 5: ;
    uVar2 = uVar1 & 0xffff8400 | uVar2 | 0x400;
    break;
  case 6: ;
    uVar2 = uVar1 & 0xffff8500 | uVar2 | 0x500;
    break;
  case 7: ;
    uVar2 = uVar1 & 0xffff8540 | uVar2 | 0x540;
    break;
  case 8: ;
    uVar2 = uVar1 & 0xffff8510 | uVar2 | 0x510;
    break;
  default: ;
    goto switchD_00676afa_switchD;
  }
  *param_1 = uVar2;
switchD_00676afa_switchD: ;
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 0: ;
    *param_1 = *param_1 & 0xff807fff;
    return 0;
  case 1: ;
    *param_1 = *param_1 & 0xff80ffff | 0x8000;
    return 0;
  case 2: ;
    *param_1 = *param_1 & 0xff887fff | 0x80000;
    return 0;
  case 3: ;
    *param_1 = *param_1 & 0xff88ffff | 0x88000;
    return 0;
  case 4: ;
  case 5: ;
    *param_1 = *param_1 & 0xffa07fff | 0x200000;
    return 0;
  case 6: ;
    *param_1 = *param_1 & 0xffa87fff | 0x280000;
    return 0;
  case 7: ;
    *param_1 = *param_1 & 0xffa8ffff | 0x288000;
  }
  return 0;
}

/* ref: FUN_00676bd0 */
uint F_00676bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x676bd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_004d5c60(*(undefined4 *)(param_1 + 0x28));
  return uVar1 * *(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x18) >> 3;
}

/* ref: FUN_00676c00 */
uint F_00676c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x676c00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return (uint)param_1;
}

/* ref: FUN_00676c30 */
unsigned int F_00676c30(float gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x676c30u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  return 0;
}

/* ref: FUN_00676cb0 */
unsigned int F_00676cb0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x676cb0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  return 0;
}

/* ref: FUN_00676e60 */
unsigned int F_00676e60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x676e60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar4 = ((float10)GEN_TOD(fsin(
                        (float10)(float)((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1080228)))));
  fVar5 = ((float10)GEN_TOD(fcos(
                        (float10)(float)((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1080228)))));
  fVar6 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  fVar7 = (float10)(float)fVar5;
  param_1[0xe] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xc] = 0.0;
  fVar5 = (float10)1;
  fVar8 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar7 + fVar7) + fVar5))) / fVar8)));
  fVar2 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)(float)fVar4 *
                                                    -(float10)((float)GEN_TOF(SQRT(fVar6))) - fVar7) + fVar5))) /
                 fVar8)));
  fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar5 + (float10)(float)((float10)(float)fVar4 *
                                                            (float10)((float)GEN_TOF(SQRT(fVar6))) - fVar7)))) /
                 fVar8)));
  param_1[10] = fVar1;
  param_1[5] = fVar1;
  *param_1 = fVar1;
  param_1[2] = fVar2;
  param_1[9] = fVar2;
  param_1[4] = fVar2;
  param_1[6] = fVar3;
  param_1[1] = fVar3;
  param_1[8] = fVar3;
  return 0;
}

/* ref: FUN_00676f60 */
unsigned int F_00676f60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x676f60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar2 = REFG(float, 0x10adc54);
  fVar1 = REFG(undefined4, 0x10adc50);
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x10adc54));
  param_1[8] = fVar2;
  param_1[6] = fVar2;
  param_1[4] = fVar2;
  param_1[2] = fVar2;
  param_1[1] = fVar2;
  *param_1 = fVar1;
  param_1[5] = fVar1;
  param_1[10] = fVar1;
  param_1[0xe] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xc] = 0.0;
  if (0.0 < param_2) {
    fVar3 = (float10)1 - (float10)1 / ((float10)*(double *)&REFG(undefined, 0x10adc48) - (float10)param_2);
  }
  else {
    fVar3 = -(float10)param_2;
  }
  F_00687660(param_1,(float)fVar3);
  fVar3 = (float10)1;
  *param_1 = (float)((float10)*param_1 + fVar3);
  param_1[5] = (float)((float10)param_1[5] + fVar3);
  param_1[10] = (float)(fVar3 + (float10)param_1[10]);
  return 0;
}

/* ref: FUN_00677010 */
uint F_00677010(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x677010u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  float10 fVar1;
  uint uVar2;
  float * pfVar3;
  float fVar4;
  
  uVar2 = (*(uint *)&gen_args[0]);
  fVar4 = (*(float *)&gen_args[1]);
  if (!((*(float *)&gen_args[1]) < 0.0)) {
    fVar4 = gen_bits2f((uint)gen_fl2bits((*(float *)&gen_args[1])) ^ REFG(uint, 0x10920d0));
  }
  *(undefined4 *)((*(uint *)&gen_args[0]) + 0x24) = 0;
  fVar1 = (float10)REFG(double, 0x1088130);
  *(undefined4 *)((*(uint *)&gen_args[0]) + 0x20) = 0;
  *(undefined4 *)((*(uint *)&gen_args[0]) + 0x18) = 0;
  *(undefined4 *)((*(uint *)&gen_args[0]) + 0x10) = 0;
  fVar4 = (float)((float10)fVar4 + fVar1);
  *(undefined4 *)((*(uint *)&gen_args[0]) + 8) = 0;
  *(undefined4 *)((*(uint *)&gen_args[0]) + 4) = 0;
  *(float *)((*(uint *)&gen_args[0]) + 0x28) = fVar4;
  (*(uint *)&gen_args[0]) = 0;
  *(float *)(uVar2 + 0x14) = fVar4;
  pfVar3 = (float *)&(*(uint *)&gen_args[0]);
  *(float *)uVar2 = fVar4;
  if (!((float10)(*(float *)&gen_args[1]) < (float10)0)) {
    pfVar3 = &(*(float *)&gen_args[1]);
  }
  fVar4 = *pfVar3;
  *(float *)(uVar2 + 0x38) = fVar4;
  *(float *)(uVar2 + 0x34) = fVar4;
  *(float *)(uVar2 + 0x30) = fVar4;
  return (uint)pfVar3;
}

/* ref: FUN_006770a0 */
unsigned int F_006770a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6770a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 uVar1;
  float10 fVar2;
  
  uVar1 = REFG(float, 0x1087f04);
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
  param_1[5] = uVar1;
  param_1[10] = uVar1;
  uVar1 = REFG(float, 0x109cab8);
  param_1[0xc] = GEN_FLT_TO(param_1[0xc], REFG(float, 0x109cab8));
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (0.0 < param_2) {
    F_006876d0(param_1,(float)((float10)*(double *)&REFG(undefined, 0x10adc48) - (float10)param_2));
  }
  else {
    F_00687660(param_1,(float)((float10)param_2 + (float10)REFG(double, 0x1088130)));
  }
  fVar2 = (float10)REFG(double, 0x1088108);
  param_1[0xc] = (undefined4)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_1[0xc]))) + fVar2));
  param_1[0xd] = (undefined4)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_1[0xd]))) + fVar2));
  param_1[0xe] = (undefined4)gen_fl2bits((float)(fVar2 + ((float10)GEN_TOD(gen_bits2f(param_1[0xe])))));
  return 0;
}

/* ref: FUN_00677150 */
unsigned int F_00677150(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x677150u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x10adc78));
  param_1[4] = GEN_FLT_TO(param_1[4], REFG(float, 0x10adc74));
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x10adc70));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x10adc6c));
  param_1[5] = GEN_FLT_TO(param_1[5], REFG(float, 0x10adc68));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x10adc64));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x10adc60));
  param_1[6] = GEN_FLT_TO(param_1[6], REFG(float, 0x10adc5c));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x10adc58));
  param_1[0xe] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xc] = 0.0;
  F_00687660(param_1,param_2);
  fVar1 = (float10)1 - (float10)param_2;
  *param_1 = (float)((float10)*param_1 + fVar1);
  param_1[5] = (float)((float10)param_1[5] + fVar1);
  param_1[10] = (float)(fVar1 + (float10)param_1[10]);
  return 0;
}

/* ref: FUN_00677210 */
uint F_00677210(unsigned int gen_a0)
{
  GEN_ENTER(0x677210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10adc80));
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  *(undefined4 *)((int)this + 0x58) = 0xffffffff;
  *(undefined4 *)((int)this + 0x5c) = 0;
  REFG(undefined4, 0x148809c) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  return (uint)this;
}

/* ref: FUN_00677290 */
byte F_00677290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x677290u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * puVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (*(int *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(int *)&gen_args[1]) != -1) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) * 4 + 8)));
    if (iVar1 == 0) {
      F_004ff310(&(*(undefined * PTR32 *)(gen_frame + 0x8)),5,0);
      puVar2 = (&REFG(undefined * PTR32, 0x1322348))[(int)(iVar3)];
      (*(int *)&gen_args[1]) = 0x73686364;
      if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
        uVar4 = F_00513d20(&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(int *)&gen_args[1]),puVar2,0,0,0);
      }
      else {
        uVar4 = F_00513d70(&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(int *)&gen_args[1]),puVar2,0,0,0);
      }
    }
    else {
      uVar4 = F_00513f60(iVar1,0,0);
    }
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar3 * 4 + 8))) = uVar4;
    if (uVar4 != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00677320 */
unsigned int F_00677320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x677320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  if ((param_1 != -1) && (iVar1 = *(int *)((int)this + param_1 * 4 + 8), iVar1 != 0)) {
    piVar2 = (int *)(iVar1 + 0x94);
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2;
    UNLOCK();
    F_0050c620(*(undefined4 *)((int)this + param_1 * 4 + 8),0,0);
    if (iVar1 < 2) {
      *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  }
  return 0;
}

/* ref: FUN_00677380 */
uint F_00677380(unsigned int gen_a0)
{
  GEN_ENTER(0x677380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = REFG(undefined4, 0x130235c);
  *(undefined4 *)((int)this + 0x30) = REFG(undefined4, 0x1302350);
  *(undefined4 *)((int)this + 0x34) = 0;
  *(uint *)((int)this + 0x44) = *(uint *)((int)this + 0x44) | 0xff;
  *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) & 0xf8;
  *(uint *)((int)this + 0x4c) = *(uint *)((int)this + 0x4c) & 0xfffffff0;
  *(undefined2 *)((int)this + 0x38) = 0;
  *(undefined2 *)((int)this + 0x3a) = 0;
  *(undefined2 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x3e) = 0;
  *(undefined2 *)((int)this + 0x42) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectShader::vf2 */
uint F_006773f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6773f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  undefined * pPVar5;
  int iVar6;
  
  piVar2 = *(int * PTR32 *)(this + 0x28);
  uVar4 = 0;
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)(this + 0x28) = 0;
  }
  if (this[0x42] != (undefined1)0x0) {
    pPVar5 = this + 0x18;
    do {
      piVar2 = *(int * PTR32 *)pPVar5;
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
        *(int *)pPVar5 = 0;
      }
      uVar4 = uVar4 + 1;
      pPVar5 = pPVar5 + 4;
    } while (uVar4 < (byte)this[0x42]);
  }
  uVar4 = 0;
  if (this[0x41] != (undefined1)0x0) {
    iVar6 = 0;
    do {
      if (*((int *)GEN_TOP((iVar6 + 4 + *(int *)(this + 0x10)))) != 0) {
        piVar2 = *((int * PTR32 *)GEN_TOP((iVar6 + 4 + *(int *)(this + 0x10))));
        ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
        *((undefined4 *)GEN_TOP((iVar6 + 4 + *(int *)(this + 0x10)))) = 0;
      }
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 0xc;
    } while (uVar4 < (byte)this[0x41]);
  }
  uVar4 = 0;
  if (this[0x40] != (undefined1)0x0) {
    do {
      piVar2 = ((int *)GEN_TOP((*(int *)(this + 0xc) + 4 + uVar4 * 8)));
      if (*piVar2 != 0) {
        piVar2 = (int *)*piVar2;
        ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 4 + uVar4 * 8))) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (byte)this[0x40]);
  }
  if (*(int *)(this + 0xc) != 0) {
    F_00406b30(*(int *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(int *)(this + 0x10) != 0) {
    F_00406b30(*(int *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    F_00406810(*(int *)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  if (*(int *)(this + 4) != 0) {
    F_0050c620(*(int *)(this + 4),0,0);
    *(undefined4 *)(this + 4) = 0;
  }
  piVar2 = REFG(int * PTR32, 0x148809c);
  uVar4 = (uint)(char)this[0x44];
  if (uVar4 != 0xffffffff) {
    piVar1 = REFG(int * PTR32, 0x148809c) + uVar4 + 2;
    uVar4 = 0;
    if (*piVar1 != 0) {
      piVar3 = (int *)(*piVar1 + 0x94);
      LOCK();
      iVar6 = *piVar3;
      *piVar3 = *piVar3;
      UNLOCK();
      F_0050c620(*piVar1,0,0);
      if (iVar6 < 2) {
        *piVar1 = 0;
      }
      uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
  }
  *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0xff;
  return uVar4;
}

/* ref: FUN_00677541 */
unsigned int F_00677541(void)
{
  GEN_ENTER(0x677541u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00677550 */
uint F_00677550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x677550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  *(uint *)((int)this + 0x2c) = *param_1 & 0x1f;
  return (uint)param_1;
}

/* ref: FUN_00677570 */
uint F_00677570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x677570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  *(uint *)((int)this + 0x30) = *param_1 & 0x7ffffff;
  return (uint)param_1;
}

/* ref: FUN_00677590 */
uint F_00677590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x677590u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  fVar3 = *(float *)(param_2 + 0xc);
  pfVar4 = *(float * PTR32 *)(param_1 + 8);
  *pfVar4 = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) - (float10)fVar1)));
  pfVar4[1] = (float)((float10)fVar3 - (float10)fVar2);
  pfVar4[2] = fVar1;
  pfVar4[3] = fVar2;
  return (uint)pfVar4;
}

/* ref: FUN_006775f0 */
uint F_006775f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6775f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  fVar3 = *(float *)(param_2 + 0xc);
  uVar4 = *(uint *)(param_1 + 8);
  *(float *)(uVar4 + 0x10) = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) - (float10)fVar1)));
  *(float *)(uVar4 + 0x14) = (float)((float10)fVar3 - (float10)fVar2);
  *(float *)(uVar4 + 0x18) = fVar1;
  *(float *)(uVar4 + 0x1c) = fVar2;
  return uVar4;
}

/* ref: FUN_00677650 */
uint F_00677650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x677650u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  undefined * PTR32 * ppvVar4;
  ulonglong uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  pvVar3 = ((undefined *)GEN_TOP((*(int *)(iVar1 + 0x24) << 4)));
  pvVar2 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) * 8)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar3;
  (*(undefined * PTR32 *)&gen_args[2]) = pvVar2;
  ppvVar4 = &(*(undefined * PTR32 *)&gen_args[2]);
  if (pvVar3 <= pvVar2) {
    ppvVar4 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  uVar5 = F_00c46aa0(iVar1 + 0x28,(*(undefined4 *)&gen_args[1]),*ppvVar4);
  return (uint)uVar5;
}

/* ref: FUN_00677690 */
unsigned int F_00677690(unsigned int gen_a0)
{
  GEN_ENTER(0x677690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = REFG(float, 0x1087f04);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  *puVar1 = GEN_FLT_TO(*puVar1, REFG(float, 0x1087f04));
  puVar1[1] = uVar2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar3 = *(int *)((int)this + 8);
  *(undefined4 *)(iVar3 + 0x10) = uVar2;
  *(undefined4 *)(iVar3 + 0x14) = uVar2;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x24))) =
       *(undefined4 *)(&REFG(undefined, 0x10ac578) + *(char *)((int)this + 0x44) * 4);
  iVar3 = *(int *)((int)this + 8);
  uVar5 = 0;
  if (*(int *)(iVar3 + 0x24) != 0) {
    iVar4 = 0;
    do {
      *(undefined4 *)(iVar4 + 0x28 + iVar3) = 0;
      *(undefined4 *)(iVar4 + 0x2c + iVar3) = 0;
      *(undefined4 *)(iVar4 + 0x30 + iVar3) = 0;
      *(undefined4 *)(iVar4 + 0x34 + iVar3) = 0;
      iVar3 = *(int *)((int)this + 8);
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x10;
    } while (uVar5 < *(uint *)(iVar3 + 0x24));
  }
  return 0;
}

/* ref: FUN_00677770 */
uint F_00677770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x677770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
  }
  iVar3 = param_1 * 0xc;
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4 + iVar3))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 4 + iVar3)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 4 + iVar3))) = param_2;
  uVar2 = *param_3;
  *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + 8 + iVar3))) = uVar2 & 0xfffffff;
  return uVar2 & 0xfffffff;
}

/* ref: FUN_006777d0 */
uint F_006777d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6777d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
  }
  iVar3 = param_1 * 0xc;
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4 + iVar3))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 4 + iVar3)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 4 + iVar3))) = param_2;
  uVar2 = *param_3;
  *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + 8 + iVar3))) = uVar2 & 0xfffffff;
  *(int * PTR32 *)((int)this + 0x14) = param_2;
  return uVar2 & 0xfffffff;
}

/* ref: FUN_00677830 */
uint F_00677830(unsigned int gen_a0)
{
  GEN_ENTER(0x677830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00677380(this);
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adc94));
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectRepeatShader::vf2 */
uint F_00677850(unsigned int gen_a0)
{
  GEN_ENTER(0x677850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x50);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x50) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x54);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x54) = 0;
  }
  uVar2 = F_006773f0((undefined *)this);
  return uVar2;
}

/* ref: FUN_00677890 */
uint F_00677890(unsigned int gen_a0)
{
  GEN_ENTER(0x677890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  
  F_00677380(this);
  puVar2 = (undefined4 *)((int)this + 0x60);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adcb0));
  iVar3 = 2;
  iVar1 = (int)this + 0x96;
  do {
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
    *(undefined4 *)(iVar1 + -0x32) = 0;
    *(undefined4 *)(iVar1 + -0x2e) = 0;
    *(undefined4 *)(iVar1 + -0x2a) = 0;
    *(undefined4 *)(iVar1 + -0x26) = 0;
    *(undefined4 *)(iVar1 + -0x22) = 0;
    *(undefined4 *)(iVar1 + -0xe) = 0;
    *(undefined4 *)(iVar1 + -10) = REFG(undefined4, 0x130235c);
    *(undefined4 *)(iVar1 + -6) = REFG(undefined4, 0x1302350);
    *(undefined4 *)(iVar1 + -2) = 0;
    *(uint *)(iVar1 + 0xe) = *(uint *)(iVar1 + 0xe) | 0xff;
    *(byte *)(iVar1 + 0x12) = *(byte *)(iVar1 + 0x12) & 0xf8;
    *(uint *)(iVar1 + 0x16) = *(uint *)(iVar1 + 0x16) & 0xfffffff0;
    *(undefined2 *)(iVar1 + 2) = 0;
    *(undefined2 *)(iVar1 + 4) = 0;
    *(undefined2 *)(iVar1 + 6) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined2 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + -0x1e) = 0;
    *(undefined4 *)(iVar1 + -0x1a) = 0;
    *(undefined4 *)(iVar1 + -0x16) = 0;
    *(undefined4 *)(iVar1 + -0x12) = 0;
    puVar2 = puVar2 + 0x14;
    iVar1 = iVar1 + 0x50;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectMeasureLumShader::vf2 */
unsigned int F_00677960(unsigned int gen_a0)
{
  GEN_ENTER(0x677960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  undefined * pPVar6;
  
  pPVar6 = this + 0x60;
  iVar4 = 3;
  do {
    ((code *)*(gen_code32 *)(*(int *)pPVar6 + 8))(pPVar6);
    pPVar6 = pPVar6 + 0x50;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar2 = *(int * PTR32 *)(this + 0x28);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)(this + 0x28) = 0;
  }
  if (this[0x42] != (undefined1)0x0) {
    pPVar6 = this + 0x18;
    uVar5 = 0;
    do {
      piVar2 = *(int * PTR32 *)pPVar6;
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
        *(int *)pPVar6 = 0;
      }
      uVar5 = uVar5 + 1;
      pPVar6 = pPVar6 + 4;
    } while (uVar5 < (byte)this[0x42]);
  }
  uVar5 = 0;
  if (this[0x41] != (undefined1)0x0) {
    iVar4 = 0;
    do {
      if (*((int *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar4))) != 0) {
        piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar4)));
        ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar4))) = 0;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (uVar5 < (byte)this[0x41]);
  }
  uVar5 = 0;
  if (this[0x40] != (undefined1)0x0) {
    do {
      piVar2 = ((int *)GEN_TOP((*(int *)(this + 0xc) + 4 + uVar5 * 8)));
      if (*piVar2 != 0) {
        piVar2 = (int *)*piVar2;
        ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 4 + uVar5 * 8))) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (byte)this[0x40]);
  }
  if (*(int *)(this + 0xc) != 0) {
    F_00406b30(*(int *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(int *)(this + 0x10) != 0) {
    F_00406b30(*(int *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    F_00406810(*(int *)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  if (*(int *)(this + 4) != 0) {
    F_0050c620(*(int *)(this + 4),0,0);
    *(undefined4 *)(this + 4) = 0;
  }
  piVar2 = REFG(int * PTR32, 0x148809c);
  if ((char)this[0x44] != -1) {
    piVar1 = REFG(int * PTR32, 0x148809c) + (char)this[0x44] + 2;
    if (*piVar1 != 0) {
      piVar3 = (int *)(*piVar1 + 0x94);
      LOCK();
      iVar4 = *piVar3;
      *piVar3 = *piVar3;
      UNLOCK();
      F_0050c620(*piVar1,0,0);
      if (iVar4 < 2) {
        *piVar1 = 0;
      }
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
  }
  *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0xff;
  pPVar6 = this + 0x50;
  iVar4 = 4;
  do {
    piVar2 = *(int * PTR32 *)pPVar6;
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      *(int *)pPVar6 = 0;
    }
    pPVar6 = pPVar6 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_00677b00 */
uint F_00677b00(unsigned int gen_a0)
{
  GEN_ENTER(0x677b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00677380(this);
  F_004d6630((undefined *)((int)this + 0x50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adc0c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[5])REFP(0x10adbf4));
  F_00677380((undefined *)((int)this + 0x80));
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectAdaptLumShader::vf2 */
uint F_00677b50(unsigned int gen_a0)
{
  GEN_ENTER(0x677b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * pPVar3;
  int iVar4;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x80) + 8))))(this + 0x80);
  uVar2 = F_006773f0((undefined *)this);
  piVar1 = *(int * PTR32 *)(this + 0x7c);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x7c) = 0;
  }
  pPVar3 = this + 0x5c;
  iVar4 = 8;
  do {
    piVar1 = *(int * PTR32 *)pPVar3;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *(int *)pPVar3 = 0;
    }
    pPVar3 = pPVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return uVar2;
}

/* ref: FUN_00677bb0 */
uint F_00677bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x677bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  
  F_00677380(this);
  puVar2 = (undefined4 *)((int)this + 0x58);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adccc));
  iVar3 = 2;
  iVar1 = (int)this + 0x8e;
  do {
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
    *(undefined4 *)(iVar1 + -0x32) = 0;
    *(undefined4 *)(iVar1 + -0x2e) = 0;
    *(undefined4 *)(iVar1 + -0x2a) = 0;
    *(undefined4 *)(iVar1 + -0x26) = 0;
    *(undefined4 *)(iVar1 + -0x22) = 0;
    *(undefined4 *)(iVar1 + -0xe) = 0;
    *(undefined4 *)(iVar1 + -10) = REFG(undefined4, 0x130235c);
    *(undefined4 *)(iVar1 + -6) = REFG(undefined4, 0x1302350);
    *(undefined4 *)(iVar1 + -2) = 0;
    *(uint *)(iVar1 + 0xe) = *(uint *)(iVar1 + 0xe) | 0xff;
    *(byte *)(iVar1 + 0x12) = *(byte *)(iVar1 + 0x12) & 0xf8;
    *(uint *)(iVar1 + 0x16) = *(uint *)(iVar1 + 0x16) & 0xfffffff0;
    *(undefined2 *)(iVar1 + 2) = 0;
    *(undefined2 *)(iVar1 + 4) = 0;
    *(undefined2 *)(iVar1 + 6) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined2 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + -0x1e) = 0;
    *(undefined4 *)(iVar1 + -0x1a) = 0;
    *(undefined4 *)(iVar1 + -0x16) = 0;
    *(undefined4 *)(iVar1 + -0x12) = 0;
    puVar2 = puVar2 + 0x14;
    iVar1 = iVar1 + 0x50;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectBloomShader::vf2 */
unsigned int F_00677c80(unsigned int gen_a0)
{
  GEN_ENTER(0x677c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  undefined * pPVar6;
  
  pPVar6 = this + 0x58;
  iVar4 = 3;
  do {
    ((code *)*(gen_code32 *)(*(int *)pPVar6 + 8))(pPVar6);
    pPVar6 = pPVar6 + 0x50;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar2 = *(int * PTR32 *)(this + 0x28);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)(this + 0x28) = 0;
  }
  if (this[0x42] != (undefined1)0x0) {
    pPVar6 = this + 0x18;
    uVar5 = 0;
    do {
      piVar2 = *(int * PTR32 *)pPVar6;
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
        *(int *)pPVar6 = 0;
      }
      uVar5 = uVar5 + 1;
      pPVar6 = pPVar6 + 4;
    } while (uVar5 < (byte)this[0x42]);
  }
  uVar5 = 0;
  if (this[0x41] != (undefined1)0x0) {
    iVar4 = 0;
    do {
      if (*((int *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar4))) != 0) {
        piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar4)));
        ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar4))) = 0;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (uVar5 < (byte)this[0x41]);
  }
  uVar5 = 0;
  if (this[0x40] != (undefined1)0x0) {
    do {
      piVar2 = ((int *)GEN_TOP((*(int *)(this + 0xc) + 4 + uVar5 * 8)));
      if (*piVar2 != 0) {
        piVar2 = (int *)*piVar2;
        ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 4 + uVar5 * 8))) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (byte)this[0x40]);
  }
  if (*(int *)(this + 0xc) != 0) {
    F_00406b30(*(int *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(int *)(this + 0x10) != 0) {
    F_00406b30(*(int *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    F_00406810(*(int *)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  if (*(int *)(this + 4) != 0) {
    F_0050c620(*(int *)(this + 4),0,0);
    *(undefined4 *)(this + 4) = 0;
  }
  piVar2 = REFG(int * PTR32, 0x148809c);
  if ((char)this[0x44] != -1) {
    piVar1 = REFG(int * PTR32, 0x148809c) + (char)this[0x44] + 2;
    if (*piVar1 != 0) {
      piVar3 = (int *)(*piVar1 + 0x94);
      LOCK();
      iVar4 = *piVar3;
      *piVar3 = *piVar3;
      UNLOCK();
      F_0050c620(*piVar1,0,0);
      if (iVar4 < 2) {
        *piVar1 = 0;
      }
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
  }
  *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0xff;
  pPVar6 = this + 0x50;
  iVar4 = 2;
  do {
    piVar2 = *(int * PTR32 *)pPVar6;
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      *(int *)pPVar6 = 0;
    }
    pPVar6 = pPVar6 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_00677e20 */
uint F_00677e20(unsigned int gen_a0)
{
  GEN_ENTER(0x677e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00677380(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adce8));
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectStarShader::vf2 */
uint F_00677e40(unsigned int gen_a0)
{
  GEN_ENTER(0x677e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * pPVar3;
  int iVar4;
  
  uVar2 = F_006773f0((undefined *)this);
  pPVar3 = this + 0x50;
  iVar4 = 2;
  do {
    piVar1 = *(int * PTR32 *)pPVar3;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *(int *)pPVar3 = 0;
    }
    pPVar3 = pPVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return uVar2;
}

/* ref: Client::Graphics::PostEffect::PostEffectFogShader::vf2 */
uint F_00677e70(unsigned int gen_a0)
{
  GEN_ENTER(0x677e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * pPVar3;
  int iVar4;
  
  uVar2 = F_006773f0((undefined *)this);
  pPVar3 = this + 0x50;
  iVar4 = 3;
  do {
    piVar1 = *(int * PTR32 *)pPVar3;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *(int *)pPVar3 = 0;
    }
    pPVar3 = pPVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return uVar2;
}

/* ref: FUN_00677ea0 */
uint F_00677ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x677ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00677380(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10add04));
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectDofCocShader::vf2 */
uint F_00677ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x677ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * pPVar3;
  int iVar4;
  
  uVar2 = F_006773f0((undefined *)this);
  pPVar3 = this + 0x50;
  iVar4 = 3;
  do {
    piVar1 = *(int * PTR32 *)pPVar3;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *(int *)pPVar3 = 0;
    }
    pPVar3 = pPVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return uVar2;
}

/* ref: FUN_00677ef0 */
uint F_00677ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x677ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00677380(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10add20));
  return (uint)this;
}

/* ref: FUN_00677f20 */
uint F_00677f20(unsigned int gen_a0)
{
  GEN_ENTER(0x677f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00677380(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10add3c));
  *(undefined4 *)((int)this + 0x50) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectMoonShader::vf2 */
uint F_00677f40(unsigned int gen_a0)
{
  GEN_ENTER(0x677f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_006773f0((undefined *)this);
  uVar1 = 0;
  if (*(int *)(this + 0x50) != 0) {
    uVar1 = F_0050c620(*(int *)(this + 0x50),0,0);
    *(undefined4 *)(this + 0x50) = 0;
  }
  return uVar1;
}

/* ref: FUN_00677f90 */
byte F_00677f90(unsigned int gen_a0)
{
  GEN_ENTER(0x677f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  bVar5 = 1;
  if (*(int *)((int)this + 8) != 0) {
    uVar6 = 0;
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar6 * 4))) != 0) {
        iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 4) + uVar6 * 4)));
        iVar3 = (int)*(char *)(iVar1 + 0x44);
        if ((((iVar3 == -1) || (*(int *)(REFG(int, 0x148809c) + 8 + iVar3 * 4) == 0)) ||
            (*((int *)GEN_TOP((*(int *)(REFG(int, 0x148809c) + 8 + iVar3 * 4) + 0x98))) == 0)) ||
           ((*(byte *)(iVar1 + 0x48) & 8) == 0)) {
          piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar6 * 4)));
          uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
          if ((char)uVar4 == '\0') {
            bVar5 = 0;
          }
          else {
            uVar4 = 1 << ((byte)uVar6 & 0x1f);
            *(uint *)((int)this + 0x1c) = ~uVar4 & *(uint *)((int)this + 0x1c) | uVar4;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)((int)this + 8));
  }
  return bVar5;
}

/* ref: FUN_00678010 */
uint F_00678010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x678010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x1c) =
       (uint)((char)param_2 != '\0') << ((byte)param_1 & 0x1f) |
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x1c);
  return (uint)this;
}

/* ref: FUN_00678040 */
byte F_00678040(unsigned int gen_a0)
{
  GEN_ENTER(0x678040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    F_0050c620(*(int *)((int)this + 4),0,0);
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (*(int *)((int)this + 8) != 0) {
    F_0050c620(*(int *)((int)this + 8),0,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  F_004ff310(((undefined1 *)(gen_frame + 0x4)),5,0);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x73686364;
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/LensFlareVS.shcd",0,0,0);
  *(uint *)((int)this + 4) = uVar1;
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/LensFlarePS.shcd",0,0,0);
  *(uint *)((int)this + 8) = uVar1;
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  return uVar1 != 0;
}

/* ref: FUN_006780f0 */
uint F_006780f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6780f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10adc38));
  F_00c48350((undefined *)((int)this + 0x604),0,0xa00);
  return (uint)this;
}

/* ref: FUN_00678120 */
uint F_00678120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x678120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)((int)this + param_1 * 0xc + 4) = *param_2;
  *(undefined4 *)((int)this + param_1 * 0xc + 8) = uVar1;
  *(undefined4 *)((int)this + param_1 * 0xc + 0xc) = uVar2;
  uVar3 = 1 << ((byte)param_1 & 0x1f);
  if ((*((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1064))) & uVar3) == 0) {
    return 0xffffffff;
  }
  return (uint)((*((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1074))) & uVar3) != 0);
}

/* ref: FUN_006781a0 */
unsigned int F_006781a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6781a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x28) = param_2;
  return 0;
}

/* ref: FUN_006781c0 */
unsigned int F_006781c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6781c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  char cVar3;
  uint uVar4;
  int * piVar5;
  
  iVar1 = **(int * PTR32 *)((int)this + 0x34);
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar2 = *(int * PTR32 *)(iVar1 + 0x18);
  piVar5 = (int *)(iVar1 + 0x18);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  *piVar5 = (int)param_1;
  *(undefined1 *)(iVar1 + 0x42) = 0;
  uVar4 = 0;
  do {
    if (*piVar5 == 0) {
      return 0;
    }
    cVar3 = (char)uVar4;
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 1;
    *(char *)(iVar1 + 0x42) = cVar3 + '\x01';
  } while (uVar4 < 4);
  return 0;
}

/* ref: FUN_00678260 */
unsigned int F_00678260(unsigned int gen_a0)
{
  GEN_ENTER(0x678260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10add70));
  *(undefined4 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10add58));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3d0) = (*(undefined * PTR32 (*)[1])REFP(0x10adc38));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x374) = (*(undefined * PTR32 (*)[1])REFP(0x10adc30));
  puVar1 = (undefined4 *)((int)this + 0x374);
  iVar2 = 0x1a;
  do {
    puVar1 = puVar1 + -8;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10adc28));
  } while (-1 < iVar2);
  F_004d6680((undefined4 *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10adc40));
  return 0;
}

/* ref: FUN_006782b0 */
uint F_006782b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6782b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float10 fVar8;
  
  uVar2 = REFG(float, 0x10a0da0);
  uVar1 = REFG(float, 0x1087f04);
  fVar8 = (float10)*(double *)&REFG(undefined, 0x1092098);
  *(undefined4 *)((int)this + 0x1518) = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x151c) = uVar1;
  *(undefined4 *)((int)this + 0x1524) = uVar2;
  *(undefined4 *)((int)this + 0x152c) = REFG(float, 0x1094724);
  *(undefined4 *)((int)this + 0x1530) = REFG(float, 0x10abe50);
  uVar2 = REFG(float, 0x1088068);
  *(undefined4 *)((int)this + 0x1520) = 0;
  *(undefined4 *)((int)this + 0x1528) = 0;
  *(undefined4 *)((int)this + 0x1534) = 0;
  *(undefined4 *)((int)this + 0x1544) = 0;
  *(undefined4 *)((int)this + 0x153c) = uVar2;
  uVar2 = REFG(float, 0x10add88);
  *(undefined4 *)((int)this + 0x1538) = uVar1;
  *(undefined4 *)((int)this + 0x1540) = uVar2;
  *(undefined4 *)((int)this + 0x1548) = 0;
  *(undefined4 *)((int)this + 0x1550) = 0;
  *(undefined4 *)((int)this + 0x154c) = uVar1;
  *(undefined4 *)((int)this + 0x1564) = 0;
  *(undefined4 *)((int)this + 0x1568) = 0;
  *(undefined4 *)((int)this + 0x156c) = 0;
  *(undefined4 *)((int)this + 0x1570) = 0;
  *(undefined4 *)((int)this + 0x1574) = 0;
  *(undefined4 *)((int)this + 0x1578) = 0;
  *(undefined4 *)((int)this + 0x157c) = 0;
  *(undefined4 *)((int)this + 0x1580) = 0;
  *(undefined4 *)((int)this + 0x1584) = 0;
  *(undefined4 *)((int)this + 0x1588) = REFG(float, 0x10ac050);
  *(undefined4 *)((int)this + 0x158c) = REFG(float, 0x10ac1a8);
  *(undefined4 *)((int)this + 0x1594) = REFG(float, 0x10add84);
  uVar2 = REFG(float, 0x1094820);
  *(undefined4 *)((int)this + 0x1590) = uVar1;
  *(undefined4 *)((int)this + 0x1598) = uVar2;
  uVar1 = REFG(float, 0x1087f04);
  *(float *)((int)this + 0x159c) = ((float)GEN_TOF(SQRT(fVar8)));
  *(undefined4 *)((int)this + 0x15a0) = uVar1;
  uVar5 = REFG(float, 0x10add80);
  uVar2 = REFG(float, 0x10ac168);
  *(float *)((int)this + 0x15a4) = ((float)GEN_TOF(SQRT((float10)REFG(double, 0x1088108))));
  uVar4 = REFG(float, 0x1094884);
  uVar7 = REFG(float, 0x1094880);
  uVar6 = REFG(float, 0x1094870);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x15c0) = uVar2;
  *(undefined4 *)((int)this + 0x15d0) = REFG(float, 0x1094820);
  *(undefined4 *)((int)this + 0x15d8) = REFG(float, 0x10920a4);
  uVar2 = REFG(float, 0x10add7c);
  *(undefined4 *)((int)this + 0x15ac) = uVar5;
  *(undefined4 *)((int)this + 0x15dc) = uVar2;
  uVar2 = REFG(float, 0x10a0da0);
  *(undefined4 *)((int)this + 0x15a8) = uVar1;
  *(undefined4 *)((int)this + 0x15b0) = uVar4;
  *(undefined4 *)((int)this + 0x15b4) = 6;
  *(undefined4 *)((int)this + 0x15b8) = 0;
  *(undefined4 *)((int)this + 0x15bc) = uVar7;
  *(undefined4 *)((int)this + 0x15c4) = uVar4;
  *(undefined4 *)((int)this + 0x15c8) = uVar1;
  *(undefined4 *)((int)this + 0x15cc) = 0;
  *(undefined4 *)((int)this + 0x15d4) = uVar6;
  *(undefined4 *)((int)this + 0x15e0) = uVar2;
  *(undefined4 *)((int)this + 0x15e4) = 0;
  *(undefined4 *)((int)this + 0x15e8) = uVar1;
  *(undefined4 *)((int)this + 0x15ec) = 0;
  uVar2 = REFG(float, 0x1094808);
  *(undefined4 *)((int)this + 0x15f0) = *(undefined4 *)((int)this + 0x1584);
  *(undefined4 *)((int)this + 0x15f4) = *(undefined4 *)((int)this + 0x1588);
  *(undefined4 *)((int)this + 0x15f8) = *(undefined4 *)((int)this + 0x158c);
  *(undefined4 *)((int)this + 0x15fc) = *(undefined4 *)((int)this + 0x1590);
  *(undefined4 *)((int)this + 0x1600) = *(undefined4 *)((int)this + 0x1594);
  *(undefined4 *)((int)this + 0x1608) = uVar2;
  *(undefined4 *)((int)this + 0x160c) = uVar4;
  *(undefined4 *)((int)this + 0x1604) = *(undefined4 *)((int)this + 0x1598);
  uVar3 = REFG(float, 0x10920d0);
  *(undefined4 *)((int)this + 0x1624) = 0;
  uVar2 = REFG(float, 0x10add78);
  *(uint *)((int)this + 0x1610) = *(uint *)((int)this + 0x1584) ^ uVar3;
  *(undefined4 *)((int)this + 0x161c) = uVar2;
  uVar2 = REFG(float, 0x1088068);
  *(undefined4 *)((int)this + 0x1620) = REFG(float, 0x1088068);
  *(undefined4 *)((int)this + 0x1628) = uVar2;
  uVar4 = REFG(float, 0x10a0da0);
  *(uint *)((int)this + 0x1614) = *(uint *)((int)this + 0x1588) ^ uVar3;
  *(undefined4 *)((int)this + 0x162c) = uVar4;
  uVar5 = REFG(float, 0x109482c);
  uVar4 = REFG(float, 0x10928e4);
  *(uint *)((int)this + 0x1618) = *(uint *)((int)this + 0x158c) ^ uVar3;
  *(undefined4 *)((int)this + 0x1634) = uVar5;
  uVar5 = REFG(float, 0x10add74);
  *(undefined4 *)((int)this + 0x1630) = uVar4;
  *(undefined4 *)((int)this + 0x1638) = 0;
  *(undefined4 *)((int)this + 0x163c) = uVar1;
  *(undefined4 *)((int)this + 0x1648) = uVar5;
  uVar5 = REFG(float, 0x10add84);
  *(undefined4 *)((int)this + 0x1640) = uVar4;
  *(undefined4 *)((int)this + 0x1644) = uVar1;
  *(undefined4 *)((int)this + 0x164c) = 0;
  *(undefined4 *)((int)this + 0x1650) = uVar7;
  *(undefined4 *)((int)this + 0x1654) = uVar6;
  *(undefined4 *)((int)this + 0x1658) = uVar1;
  *(undefined4 *)((int)this + 0x165c) = uVar1;
  *(undefined4 *)((int)this + 0x1660) = uVar1;
  *(undefined4 *)((int)this + 0x1664) = 0;
  *(undefined4 *)((int)this + 0x1668) = 0;
  *(undefined4 *)((int)this + 0x1678) = 4;
  *(undefined4 *)((int)this + 0x166c) = uVar2;
  *(undefined4 *)((int)this + 0x1670) = uVar5;
  *(undefined4 *)((int)this + 0x1674) = 0;
  *(undefined4 *)((int)this + 0x1680) = uVar1;
  *(undefined4 *)((int)this + 0x1684) = uVar1;
  *(undefined4 *)((int)this + 0x1688) = uVar4;
  *(undefined4 *)((int)this + 0x168c) = 0;
  *(undefined4 *)((int)this + 0x1690) = uVar2;
  *(undefined4 *)((int)this + 0x167c) = 0;
  *(undefined4 *)((int)this + 0x1694) = uVar2;
  *(undefined4 *)((int)this + 0x1698) = uVar2;
  *(undefined4 *)((int)this + 0x169c) = 0;
  *(undefined4 *)((int)this + 0x16a0) = 0;
  *(undefined4 *)((int)this + 0x16a4) = uVar1;
  *(undefined4 *)((int)this + 0x16a8) = uVar1;
  *(undefined4 *)((int)this + 0x16ac) = uVar1;
  *(undefined4 *)((int)this + 0x16b0) = uVar6;
  *(undefined4 *)((int)this + 0x16b4) = uVar7;
  *(undefined4 *)((int)this + 0x16bc) = REFG(float, 0x10a509c);
  *(undefined4 *)((int)this + 0x16c0) = REFG(float, 0x1094834);
  uVar2 = REFG(float, 0x1094724);
  *(undefined4 *)((int)this + 0x16b8) = 0;
  *(undefined4 *)((int)this + 0x16c4) = uVar2;
  *(undefined4 *)((int)this + 0x16c8) = uVar1;
  *(undefined4 *)((int)this + 0x16cc) = uVar1;
  *(undefined4 *)((int)this + 0x16d0) = uVar1;
  *(undefined4 *)((int)this + 0x16d4) = 0;
  *(undefined4 *)((int)this + 0x16d8) = 0;
  *(undefined4 *)((int)this + 0x16dc) = 0;
  *(undefined4 *)((int)this + 0x16e0) = 0;
  *(undefined4 *)((int)this + 0x16e4) = uVar1;
  *(undefined4 *)((int)this + 0x16e8) = 0;
  *(undefined4 *)((int)this + 0x16ec) = 0;
  *(undefined4 *)((int)this + 0x16f0) = 0;
  *(undefined4 *)((int)this + 0x16f4) = 0;
  *(undefined4 *)((int)this + 0x16f8) = uVar1;
  *(undefined4 *)((int)this + 0x16fc) = 0;
  *(undefined4 *)((int)this + 0x1700) = 0;
  *(undefined4 *)((int)this + 0x1704) = 0;
  *(undefined4 *)((int)this + 0x1708) = 0;
  *(undefined4 *)((int)this + 0x170c) = uVar1;
  *(undefined4 *)((int)this + 0x1710) = 0;
  *(undefined4 *)((int)this + 0x1720) = 0;
  *(undefined4 *)((int)this + 0x1724) = 0;
  *(undefined4 *)((int)this + 0x1714) = 0;
  *(undefined4 *)((int)this + 0x1718) = 0;
  *(undefined4 *)((int)this + 0x171c) = 0;
  *(undefined4 *)((int)this + 0x1728) = 0;
  *(undefined4 *)((int)this + 0x172c) = 0;
  *(undefined4 *)((int)this + 0x1730) = 0;
  *(undefined4 *)((int)this + 0x1734) = 0;
  return 0;
}

/* ref: FUN_00678870 */
uint F_00678870(unsigned int gen_a0)
{
  GEN_ENTER(0x678870u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)(in_ecx + 0xb8) + 0x10)));
  if (uVar1 != 0) {
    *(undefined1 *)(uVar1 + 0xd1) = 1;
  }
  return uVar1;
}

/* ref: FUN_00678890 */
uint F_00678890(unsigned int gen_a0)
{
  GEN_ENTER(0x678890u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = **(uint * PTR32 *)(in_ecx + 600);
  if (uVar1 != 0) {
    *(undefined1 *)(uVar1 + 0x90) = 0;
  }
  return uVar1;
}

/* ref: FUN_006788d0 */
uint F_006788d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6788d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0xb8) + 0x10))) + 0x60)));
}

/* ref: FUN_00678900 */
uint F_00678900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x678900u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  byte * param_4 = (byte *)(uintptr_t)gen_a3;
  byte * param_5 = (byte *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float fVar2;
  double dVar3;
  undefined * this;
  uint uVar4;
  float * pfVar5;
  float fVar6;
  undefined1 * puVar7;
  float fVar8;
  uint uVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  
  this = (undefined *)F_004dca20(param_1,1,0x1450,4,0xb);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  if ((this != (undefined *)0x0) && (F_004d6dd0(this,0,((int *)(gen_frame + 0x8)),2), (*(int *)(gen_frame + 0x10)) != 0)) {
    fVar6 = gen_bits2f(param_1[1]);
    ((float *)(gen_frame + 0x44))[2] = 0.0;
    if (fVar6 != 0.0) {
      uVar4 = *param_1;
      ((float *)(gen_frame + 0x44))[1] = 1.4013e-45;
      fVar13 = REFG(float, 0x10a0d8c);
      do {
        ((float *)(gen_frame + 0x44))[3] = gen_bits2f((int)gen_fl2bits(fVar6) - 1U);
        pfVar5 = ((float *)(gen_frame + 0x44)) + 1;
        if (0 < (int)((int)gen_fl2bits(fVar6) - 1U)) {
          pfVar5 = ((float *)(gen_frame + 0x44)) + 3;
        }
        ((float *)(gen_frame + 0x44))[0] = ((float *)(gen_frame + 0x44))[2];
        fVar10 = (float10)(int)gen_fl2bits(((float *)(gen_frame + 0x44))[2]);
        if ((int)gen_fl2bits(((float *)(gen_frame + 0x44))[2]) < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        uVar9 = 0;
        (*(float *)(gen_frame + 0x54)) = (float)(fVar10 / (float10)(int)gen_fl2bits(*pfVar5));
        fVar8 = ((float *)(gen_frame + 0x44))[2];
        if (uVar4 != 0) {
          fVar10 = (float10)(float)(fVar10 / (float10)(int)gen_fl2bits(*pfVar5));
          ((float *)(gen_frame + 0x44))[0] = 1.4013e-45;
          (*(float *)(gen_frame + 0x40)) = fVar13;
          (*(float *)(gen_frame + 0x3c)) = 0.0;
          fVar12 = (float10)1 - fVar10;
          (*(float *)(gen_frame + 0x38)) = fVar13;
          (*(float *)(gen_frame + 0x34)) = 0.0;
          (*(float *)(gen_frame + 0x30)) = fVar13;
          (*(float *)(gen_frame + 0x2c)) = 0.0;
          (*(double *)(gen_frame + 0x14)) = (double)fVar12;
          (*(float *)(gen_frame + 0x28)) = fVar13;
          (*(float *)(gen_frame + 0x24)) = 0.0;
          puVar7 = (undefined1 *)(((int *)(gen_frame + 0x8))[0] * (int)gen_fl2bits(((float *)(gen_frame + 0x44))[2]) + (*(int *)(gen_frame + 0x10)) + 2);
          while( true ) {
            ((float *)(gen_frame + 0x44))[3] = gen_bits2f(uVar4 - 1);
            pfVar5 = ((float *)(gen_frame + 0x44));
            if (0 < (int)(uVar4 - 1)) {
              pfVar5 = ((float *)(gen_frame + 0x44)) + 3;
            }
            (*(uint *)(gen_frame + 0x1c)) = uVar9;
            fVar11 = (float10)(int)uVar9;
            if ((int)uVar9 < 0) {
              fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
            }
            ((float *)(gen_frame + 0x44))[3] = (float)(fVar11 / (float10)(int)gen_fl2bits(*pfVar5));
            fVar11 = (float10)(float)(fVar11 / (float10)(int)gen_fl2bits(*pfVar5));
            ((float *)(gen_frame + 0x44))[3] = gen_bits2f((uint)*param_2);
            fVar6 = ((float)GEN_TOF((fVar12 * ((float10)1 - fVar11))));
            fVar13 = (float)(fVar11 * fVar12);
            fVar8 = ((float)GEN_TOF((fVar10 * ((float10)1 - fVar11))));
            fVar1 = (float)(fVar11 * fVar10);
            ((float *)(gen_frame + 0x44))[3] = gen_bits2f((uint)*param_3);
            ((float *)(gen_frame + 0x44))[3] = gen_bits2f((uint)*param_4);
            ((float *)(gen_frame + 0x44))[3] = gen_bits2f((uint)*param_5);
            fVar2 = ((float)GEN_TOF((((float10)*param_5 * (float10)fVar1 +
                            ((float10)*param_4 * (float10)fVar8 +
                            ((float10)*param_3 * (float10)fVar13 +
                            (float10)*param_2 * (float10)fVar6))) + (float10)REFG(double, 0x1088108))));
            ((float *)(gen_frame + 0x44))[3] = fVar2;
            dVar3 = (double)fVar2;
            fVar10 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar3),
                                  (int)((ulonglong)gen_d2bits(dVar3) >> 0x20));
            fVar2 = (float)fVar10;
            ((float *)(gen_frame + 0x44))[3] = fVar2;
            pfVar5 = ((float *)(gen_frame + 0x44)) + 3;
            if (!((double)fVar2 < *(double *)&REFG(undefined, 0x1088100))) {
              pfVar5 = &(*(float *)(gen_frame + 0x40));
            }
            if (!(*(float *)&REFG(undefined, 0x1088114) < *pfVar5)) {
              pfVar5 = &(*(float *)(gen_frame + 0x3c));
            }
            (*(undefined1 *)(gen_frame + 0x5a)) = (char)(int)*pfVar5;
            ((float *)(gen_frame + 0x44))[3] = gen_bits2f((uint)param_3[1]);
            ((float *)(gen_frame + 0x44))[3] = gen_bits2f((uint)param_2[1]);
            ((float *)(gen_frame + 0x44))[3] = gen_bits2f((uint)param_4[1]);
            ((float *)(gen_frame + 0x44))[3] = gen_bits2f((uint)param_5[1]);
            fVar2 = ((float)GEN_TOF((((float10)param_5[1] * (float10)fVar1 +
                            ((float10)param_4[1] * (float10)fVar8 +
                            ((float10)param_2[1] * (float10)fVar6 +
                            (float10)param_3[1] * (float10)fVar13))) + (float10)REFG(double, 0x1088108))));
            ((float *)(gen_frame + 0x44))[3] = fVar2;
            dVar3 = (double)fVar2;
            fVar10 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar3),
                                  (int)((ulonglong)gen_d2bits(dVar3) >> 0x20));
            fVar2 = (float)fVar10;
            ((float *)(gen_frame + 0x44))[3] = fVar2;
            pfVar5 = ((float *)(gen_frame + 0x44)) + 3;
            if (!((double)fVar2 < *(double *)&REFG(undefined, 0x1088100))) {
              pfVar5 = &(*(float *)(gen_frame + 0x38));
            }
            if (!(*(float *)&REFG(undefined, 0x1088114) < *pfVar5)) {
              pfVar5 = &(*(float *)(gen_frame + 0x34));
            }
            (*(undefined1 *)(gen_frame + 0x5b)) = (char)(int)*pfVar5;
            ((float *)(gen_frame + 0x44))[3] = gen_bits2f((uint)param_3[2]);
            ((float *)(gen_frame + 0x44))[3] = gen_bits2f((uint)param_2[2]);
            ((float *)(gen_frame + 0x44))[3] = gen_bits2f((uint)param_4[2]);
            ((float *)(gen_frame + 0x44))[3] = gen_bits2f((uint)param_5[2]);
            fVar2 = ((float)GEN_TOF((((float10)param_5[2] * (float10)fVar1 +
                            ((float10)param_4[2] * (float10)fVar8 +
                            ((float10)param_2[2] * (float10)fVar6 +
                            (float10)param_3[2] * (float10)fVar13))) + (float10)REFG(double, 0x1088108))));
            ((float *)(gen_frame + 0x44))[3] = fVar2;
            dVar3 = (double)fVar2;
            fVar10 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar3),
                                  (int)((ulonglong)gen_d2bits(dVar3) >> 0x20));
            fVar2 = (float)fVar10;
            ((float *)(gen_frame + 0x44))[3] = fVar2;
            pfVar5 = ((float *)(gen_frame + 0x44)) + 3;
            if (!((double)fVar2 < *(double *)&REFG(undefined, 0x1088100))) {
              pfVar5 = &(*(float *)(gen_frame + 0x30));
            }
            if (!(*(float *)&REFG(undefined, 0x1088114) < *pfVar5)) {
              pfVar5 = &(*(float *)(gen_frame + 0x2c));
            }
            fVar2 = *pfVar5;
            ((float *)(gen_frame + 0x44))[3] = gen_bits2f((uint)param_2[3]);
            ((float *)(gen_frame + 0x44))[3] = gen_bits2f((uint)param_3[3]);
            ((float *)(gen_frame + 0x44))[3] = gen_bits2f((uint)param_4[3]);
            ((float *)(gen_frame + 0x44))[3] = gen_bits2f((uint)param_5[3]);
            fVar6 = ((float)GEN_TOF((((float10)param_5[3] * (float10)fVar1 +
                            ((float10)param_4[3] * (float10)fVar8 +
                            ((float10)param_3[3] * (float10)fVar13 +
                            (float10)param_2[3] * (float10)fVar6))) + (float10)REFG(double, 0x1088108))));
            ((float *)(gen_frame + 0x44))[3] = fVar6;
            dVar3 = (double)fVar6;
            fVar10 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar3),
                                  (int)((ulonglong)gen_d2bits(dVar3) >> 0x20));
            fVar6 = (float)fVar10;
            ((float *)(gen_frame + 0x44))[3] = fVar6;
            pfVar5 = ((float *)(gen_frame + 0x44)) + 3;
            if (!((double)fVar6 < *(double *)&REFG(undefined, 0x1088100))) {
              pfVar5 = &(*(float *)(gen_frame + 0x28));
            }
            if (!(0.0 < *pfVar5)) {
              pfVar5 = &(*(float *)(gen_frame + 0x24));
            }
            fVar6 = *pfVar5;
            puVar7[-1] = (*(undefined1 *)(gen_frame + 0x5b));
            puVar7[-2] = (char)(int)fVar2;
            *puVar7 = (*(undefined1 *)(gen_frame + 0x5a));
            puVar7[1] = (char)(int)fVar6;
            uVar4 = *param_1;
            uVar9 = uVar9 + 1;
            puVar7 = puVar7 + 4;
            fVar8 = ((float *)(gen_frame + 0x44))[2];
            fVar13 = REFG(float, 0x10a0d8c);
            if (uVar4 <= uVar9) break;
            fVar10 = (float10)(*(float *)(gen_frame + 0x54));
            fVar12 = (float10)(*(double *)(gen_frame + 0x14));
          }
        }
        fVar6 = gen_bits2f(param_1[1]);
        ((float *)(gen_frame + 0x44))[2] = gen_bits2f((int)gen_fl2bits(fVar8) + 1U);
        this = (*(undefined * PTR32 *)(gen_frame + 0x20));
      } while ((int)gen_fl2bits(fVar8) + 1U < (uint)gen_fl2bits(fVar6));
    }
    F_004d6e60(this,0);
    return (uint)this;
  }
  return 0;
}

/* ref: FUN_00678cf0 */
uint F_00678cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x678cf0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  this = (undefined *)F_004dca20(param_1,1,0x1450,4,0xb);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  if ((this != (undefined *)0x0) && (F_004d6dd0(this,0,((int *)(gen_frame + 0x8)),2), (*(int *)(gen_frame + 0x10)) != 0)) {
    (*(uint *)(gen_frame + 0x18)) = 0;
    if (param_1[1] != 0) {
      uVar1 = *param_1 * 4;
      do {
        iVar3 = ((int *)(gen_frame + 0x8))[0] * (*(uint *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x10));
        uVar4 = 0;
        uVar2 = (*(uint *)(gen_frame + 0x18));
        if (uVar1 != 0) {
          do {
            uVar1 = F_00c4f2dd();
            *(char *)(uVar4 + iVar3) = (char)uVar1;
            uVar4 = uVar4 + 1;
            uVar1 = *param_1 * 4;
            uVar2 = (*(uint *)(gen_frame + 0x18));
          } while (uVar4 < uVar1);
        }
        (*(uint *)(gen_frame + 0x18)) = uVar2 + 1;
        this = (*(undefined * PTR32 *)(gen_frame + 0x14));
      } while (uVar2 + 1 < (uint)param_1[1]);
    }
    F_004d6e60(this,0);
    return (uint)this;
  }
  return 0;
}

/* ref: FUN_00678da0 */
uint F_00678da0(unsigned int gen_a0)
{
  GEN_ENTER(0x678da0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  undefined * this;
  undefined * this_00;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  
  this = REFG(void * PTR32, 0x1370b90);
  if (REFG(int * PTR32, 0x148809c) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148809c) + 8))))(REFG(int * PTR32, 0x148809c));
    return (uint)REFG(int * PTR32, 0x148809c);
  }
  this_00 = (undefined *)F_00406b90(0x60,0,0);
  if (this_00 == (undefined *)0x0) {
    REFG(int * PTR32, 0x148809c) = (int *)0x0;
  }
  else {
    REFG(int * PTR32, 0x148809c) = (int *)F_00677210(this_00);
  }
  F_004d58e0(((undefined1 *)(gen_frame + 0x48)),0,0,0x24,0);
  uVar2 = F_004deb40(this,((undefined1 *)(gen_frame + 0x48)),1);
  uVar1 = REFG(float, 0x1087f04);
  *((uint *)GEN_TOP(((int)REFG(int * PTR32, 0x148809c) + 0x48))) = uVar2;
  ((undefined4 *)(gen_frame + 0x8))[0] = 0;
  ((undefined4 *)(gen_frame + 0x8))[1] = 0;
  ((undefined4 *)(gen_frame + 0x8))[2] = 0;
  ((undefined4 *)(gen_frame + 0x8))[3] = 0;
  ((undefined4 *)(gen_frame + 0x8))[4] = 0;
  ((undefined4 *)(gen_frame + 0x8))[5] = uVar1;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x28)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x3c)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x40)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x44)) = uVar1;
  uVar2 = F_004dcc90(0x40,4,0);
  *((uint *)GEN_TOP(((int)REFG(int * PTR32, 0x148809c) + 0x4c))) = uVar2;
  puVar3 = (undefined4 *)F_004d68c0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(int * PTR32, 0x148809c) + 0x4c))),0,0x40,2);
  puVar5 = ((undefined4 *)(gen_frame + 0x8));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar3 = puVar3 + 1;
  }
  F_004d6970(*((undefined * PTR32 *)GEN_TOP(((int)REFG(int * PTR32, 0x148809c) + 0x4c))));
  uVar2 = 8;
  do {
    *((undefined4 *)GEN_TOP((uVar2 + (int)REFG(int * PTR32, 0x148809c)))) = 0;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x48);
  uVar2 = F_004df8f0(*(undefined * PTR32 *)((int)this + 0x1c),"cParam");
  *((uint *)GEN_TOP(((int)REFG(int * PTR32, 0x148809c) + 0x50))) = uVar2;
  uVar2 = F_004dcd60(0x30,2,0xb);
  *((uint *)GEN_TOP(((int)REFG(int * PTR32, 0x148809c) + 0x54))) = uVar2;
  uVar2 = F_004df8f0(*(undefined * PTR32 *)((int)this + 0x1c),"cSamplingOffset");
  *((uint *)GEN_TOP(((int)REFG(int * PTR32, 0x148809c) + 0x58))) = uVar2;
  uVar2 = F_004dcd60(0x100,2,0xb);
  *((uint *)GEN_TOP(((int)REFG(int * PTR32, 0x148809c) + 0x5c))) = uVar2;
  return (uint)REFG(int * PTR32, 0x148809c);
}

/* ref: FUN_00678f50 */
uint F_00678f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x678f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  float * pfVar6;
  uint uVar7;
  undefined * pvVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)((int)this + 0x48);
  uVar2 = *(undefined4 *)((int)this + 0x4c);
  *(uint *)(iVar1 + 0x6c) = *(uint *)(iVar1 + 0x6c) & 0x800000ff;
  *(undefined1 *)(iVar1 + 0x6c) = 0x10;
  *(uint *)(iVar1 + 0x6c) = *(uint *)(iVar1 + 0x6c) & 0x7fffffff;
  *(undefined4 *)(iVar1 + 0x68) = uVar2;
  pvVar8 = this;
  if ((*((int *)GEN_TOP(((int)this + *(char *)(param_1 + 0x44) * 4 + 8))) != 0) &&
     (iVar10 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + *(char *)(param_1 + 0x44) * 4 + 8))) + 0x98))), iVar10 != 0
     )) {
    *(int *)(iVar1 + 0x40) = iVar10;
    *(undefined4 *)(iVar1 + 0x60) = 0;
    puVar3 = *(undefined4 * PTR32 *)(param_1 + 8);
    iVar10 = *(int *)(param_1 + 0x18);
    puVar4 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x54),0,0,2);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *puVar3;
      puVar4[1] = puVar3[1];
      puVar4[2] = puVar3[2];
      puVar4[3] = puVar3[3];
      fVar12 = (float10)*(int *)(iVar10 + 0x18);
      if (*(int *)(iVar10 + 0x18) < 0) {
        fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar13 = (float10)REFG(double, 0x1088108);
      puVar4[2] = (undefined4)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(puVar4[2]))) - fVar13 / fVar12))
      ;
      fVar12 = (float10)*(int *)(iVar10 + 0x1c);
      if (*(int *)(iVar10 + 0x1c) < 0) {
        fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      puVar4[3] = (undefined4)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(puVar4[3]))) - fVar13 / fVar12))
      ;
      puVar4[4] = puVar3[4];
      puVar4[5] = puVar3[5];
      puVar4[6] = puVar3[6];
      puVar4[7] = puVar3[7];
      puVar4[8] = puVar3[8];
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x54) + 0x24))) = 0;
    }
    *((undefined4 *)GEN_TOP((iVar1 + 0xa8 + *(int *)((int)this + 0x50) * 4))) =
         *(undefined4 *)((int)this + 0x54);
    uVar7 = puVar3[9];
    pvVar8 = (undefined *)0x0;
    if (uVar7 != 0) {
      iVar5 = uVar7 << 4;
      F_00c46aa0(((undefined1 *)(gen_frame + 0x8)),puVar3 + 10,iVar5);
      uVar11 = 0;
      if (3 < (int)uVar7) {
        fVar12 = (float10)*(int *)(iVar10 + 0x18);
        if (*(int *)(iVar10 + 0x18) < 0) {
          fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar13 = (float10)*(int *)(iVar10 + 0x1c);
        if (*(int *)(iVar10 + 0x1c) < 0) {
          fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar12 = (float10)(float)fVar12;
        fVar13 = (float10)(float)fVar13;
        iVar9 = (uVar7 - 4 >> 2) + 1;
        uVar11 = iVar9 * 4;
        pfVar6 = ((float *)(gen_frame + 0xc));
        do {
          iVar9 = iVar9 + -1;
          pfVar6[-1] = (float)((float10)pfVar6[-1] / fVar12);
          *pfVar6 = (float)((float10)*pfVar6 / fVar13);
          pfVar6[1] = (float)((float10)pfVar6[1] / fVar12);
          pfVar6[2] = (float)((float10)pfVar6[2] / fVar13);
          pfVar6[3] = (float)((float10)pfVar6[3] / fVar12);
          pfVar6[4] = (float)((float10)pfVar6[4] / fVar13);
          pfVar6[5] = (float)((float10)pfVar6[5] / fVar12);
          pfVar6[6] = (float)((float10)pfVar6[6] / fVar13);
          pfVar6[7] = (float)((float10)pfVar6[7] / fVar12);
          pfVar6[8] = (float)((float10)pfVar6[8] / fVar13);
          pfVar6[9] = (float)((float10)pfVar6[9] / fVar12);
          pfVar6[10] = (float)((float10)pfVar6[10] / fVar13);
          pfVar6[0xb] = (float)((float10)pfVar6[0xb] / fVar12);
          pfVar6[0xc] = (float)((float10)pfVar6[0xc] / fVar13);
          pfVar6[0xd] = (float)((float10)pfVar6[0xd] / fVar12);
          pfVar6[0xe] = (float)((float10)pfVar6[0xe] / fVar13);
          pfVar6 = pfVar6 + 0x10;
        } while (iVar9 != 0);
      }
      if (uVar11 < uVar7) {
        fVar12 = (float10)*(int *)(iVar10 + 0x18);
        if (*(int *)(iVar10 + 0x18) < 0) {
          fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar13 = (float10)*(int *)(iVar10 + 0x1c);
        if (*(int *)(iVar10 + 0x1c) < 0) {
          fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        iVar10 = uVar7 - uVar11;
        pfVar6 = ((float *)(gen_frame + 0xc)) + uVar11 * 4;
        do {
          iVar10 = iVar10 + -1;
          pfVar6[-1] = (float)((float10)pfVar6[-1] / (float10)(float)fVar12);
          *pfVar6 = (float)((float10)*pfVar6 / (float10)(float)fVar13);
          pfVar6[1] = (float)((float10)pfVar6[1] / (float10)(float)fVar12);
          pfVar6[2] = (float)((float10)pfVar6[2] / (float10)(float)fVar13);
          pfVar6 = pfVar6 + 4;
        } while (iVar10 != 0);
      }
      uVar7 = F_004d9920(*(undefined * PTR32 *)((int)this + 0x5c),0,iVar5,2);
      if (uVar7 != 0) {
        F_00c46aa0(uVar7,((undefined1 *)(gen_frame + 0x8)),iVar5);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x5c) + 0x24))) = 0;
      }
      pvVar8 = *(undefined * PTR32 *)((int)this + 0x58);
      *(undefined4 *)(iVar1 + 0xa8 + (int)((int)(uintptr_t)pvVar8) * 4) = *(undefined4 *)((int)this + 0x5c);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)pvVar8;
}

/* ref: Client::Graphics::PostEffect::PostEffectShader::vf1 */
byte F_00679280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x679280u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char * pcVar1;
  char cVar2;
  int iVar3;
  undefined * this_00;
  undefined * pPVar4;
  byte bVar5;
  char * pcVar6;
  int * piVar7;
  uint uVar8;
  
  pPVar4 = (*(undefined * PTR32 *)&gen_args[1]);
  this_00 = REFG(void * PTR32, 0x148809c);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  iVar3 = *(int *)(*(undefined * PTR32 *)&gen_args[1]);
  if ((iVar3 == -1) || (pcVar6 = *((char * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[1]) + 4))), pcVar6 == (char *)0x0)) {
    return 0;
  }
  pcVar1 = pcVar6 + 1;
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  if (pcVar6 == pcVar1) {
    return 0;
  }
  if (iVar3 != (char)(*(undefined * PTR32 *)&gen_args[0])[0x44]) {
    F_00677290(REFG(void * PTR32, 0x148809c),iVar3,0);
    F_00677320(this_00,(int)(char)(*(undefined * PTR32 *)&gen_args[0])[0x44]);
    (*(undefined * PTR32 *)&gen_args[0])[0x44] = *pPVar4;
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
      F_00406810(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))));
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
    }
    iVar3 = *(int *)(&REFG(undefined, 0x10ac578) + *(int *)((int)(uintptr_t)pPVar4) * 4);
    piVar7 = (int *)F_00406520();
    uVar8 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,(iVar3 + -1) * 0x10 + 0x38,0);
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) = uVar8;
    F_00677690((*(undefined * PTR32 *)&gen_args[0]));
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) != (undefined *)0x0) {
    bVar5 = F_00501350(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),*(int *)(pPVar4 + 4));
    if (bVar5 == 0) {
      F_0050c620(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),0,0);
    }
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) == 0) {
    F_004ff310(&(*(undefined * PTR32 *)(gen_frame + 0x8)),5,0);
    iVar3 = *(int *)(pPVar4 + 4);
    (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)0x73686364;
    if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
      uVar8 = F_00513d20(&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined * PTR32 *)&gen_args[1]),iVar3,0,0,0);
    }
    else {
      uVar8 = F_00513d70(&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined * PTR32 *)&gen_args[1]),iVar3,0,0,0);
    }
    (*(undefined * PTR32 *)&gen_args[0])[0x48] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x48] & 0xf7);
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar8;
  }
  return 1;
}

/* ref: FUN_006793b0 */
uint F_006793b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6793b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + param_1 * 8)));
  if (iVar1 != 0) {
    if (param_3 <= *(uint *)(iVar1 + 0xc)) goto LAB_00679402;
    if (iVar1 != 0) {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + param_1 * 8)));
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + param_1 * 8))) = 0;
    }
  }
  uVar3 = F_004dcd60(param_3,2,0xb);
  *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + param_1 * 8))) = uVar3;
LAB_00679402: ;
  uVar4 = F_004d9920(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + param_1 * 8))),0,param_3,2);
  uVar3 = 0;
  if (uVar4 != 0) {
    F_00c46aa0(uVar4,param_2,param_3);
    uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + param_1 * 8)));
    *(undefined4 *)(uVar3 + 0x24) = 0;
  }
  return uVar3;
}

/* ref: Client::Graphics::PostEffect::PostEffectRepeatShader::vf1 */
byte F_00679440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x679440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_00679280((undefined *)this,param_1,param_2);
  return bVar1;
}

/* ref: Client::Graphics::PostEffect::PostEffectMeasureLumShader::vf1 */
byte F_00679450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x679450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  char * pcVar2;
  uint uVar3;
  undefined * pPVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar7 = 0;
  uVar6 = 0;
  pPVar4 = this + 0x50;
  do {
    pcVar2 = ((char *)GEN_TOP((1 << ((byte)uVar6 & 0x1f))));
    (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar2;
    (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar2;
    uVar3 = F_004dca20(&(*(char * PTR32 *)(gen_frame + 0x8)),1,(-(uint)(iVar7 != 0) & 0x310) + 0x2150,0x100000,0);
    *(uint *)pPVar4 = uVar3;
    if (uVar3 == 0) goto LAB_00679543;
    uVar6 = uVar6 + 2;
    iVar7 = iVar7 + 1;
    pPVar4 = pPVar4 + 4;
  } while (uVar6 < 8);
  (*(char * PTR32 *)(gen_frame + 0x8)) = (char *)0x3;
  (*(char * PTR32 *)(gen_frame + 0xc)) = "shader/posteffect/MeasureLumInitial.shcd";
  bVar1 = F_00679280((undefined *)this,&(*(char * PTR32 *)(gen_frame + 0x8)),param_2);
  if (bVar1 != 0) {
    (*(undefined4 *)(gen_frame + 0x10)) = 3;
    (*(undefined4 *)(gen_frame + 0x18)) = 3;
    (*(undefined4 *)(gen_frame + 0x20)) = 3;
    uVar6 = 0;
    (*(char * PTR32 *)(gen_frame + 0x14)) = "shader/posteffect/MeasureLumIterative.shcd";
    (*(char * PTR32 *)(gen_frame + 0x1c)) = "shader/posteffect/MeasureLumIterative.shcd";
    (*(char * PTR32 *)(gen_frame + 0x24)) = "shader/posteffect/MeasureLumFinal.shcd";
    puVar5 = &(*(undefined4 *)(gen_frame + 0x10));
    pPVar4 = this + 0x60;
    while( true ) {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)pPVar4 + 4))(pPVar4,puVar5,param_2);
      if ((char)uVar3 == '\0') break;
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 2;
      pPVar4 = pPVar4 + 0x50;
      if (2 < uVar6) {
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return 1;
      }
    }
  }
LAB_00679543: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectAdaptLumShader::vf1 */
byte F_00679560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x679560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  (*(byte *)(gen_frame + 0xb)) = 0;
  uVar4 = 0;
  do {
    (*(undefined4 *)(gen_frame + 0x0)) = 1;
    (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0x1;
    uVar3 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x0)),1,0x2150,0x100000,0);
    *(uint *)(this + uVar4 * 4 + 0x5c) = uVar3;
    if (uVar3 == 0) {
      return 0;
    }
    uVar4 = (uint)(byte)((*(byte *)(gen_frame + 0xb)) + 1);
    (*(byte *)(gen_frame + 0xb)) = (*(byte *)(gen_frame + 0xb)) + 1;
  } while (uVar4 < 2);
  (*(undefined4 *)(gen_frame + 0x0)) = 0x400;
  (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0x1;
  uVar4 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x0)),1,0x2460,0x8100000,0);
  *(uint *)(this + 0x7c) = uVar4;
  if ((uVar4 != 0) &&
     (bVar2 = F_00679280((undefined *)this,param_1,param_2), bVar2 != 0)) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x80) + 4)));
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(char * PTR32 *)(gen_frame + 0x4)) = "shader/posteffect/ToneMapLut.shcd";
    uVar4 = (*pcVar1)(this + 0x80,&(*(undefined4 *)(gen_frame + 0x0)),param_2);
    return (char)uVar4 != '\0';
  }
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectBloomShader::vf1 */
byte F_00679640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x679640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined * pPVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar6 = 0;
  uVar4 = 0xb4;
  do {
    if (uVar6 < 3) {
      piVar2 = *(int * PTR32 *)(uVar4 + REFG(int, 0x1371288));
    }
    else {
      piVar2 = (int *)0x0;
    }
    *((int * PTR32 *)GEN_TOP((this + (uVar4 - 100)))) = piVar2;
    if (piVar2 == (int *)0x0) goto LAB_00679713;
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
    uVar4 = uVar4 + 4;
    uVar6 = uVar6 + 1;
  } while (uVar4 < 0xbc);
  bVar1 = F_00679280((undefined *)this,param_1,param_2);
  if (bVar1 != 0) {
    uVar4 = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 8;
    (*(char * PTR32 *)(gen_frame + 0x4)) = "shader/posteffect/GaussBlur5x5_Linear.shcd";
    (*(undefined4 *)(gen_frame + 0x8)) = 6;
    (*(char * PTR32 *)(gen_frame + 0xc)) = "shader/posteffect/BloomBlur_Linear.shcd";
    (*(undefined4 *)(gen_frame + 0x10)) = 6;
    (*(char * PTR32 *)(gen_frame + 0x14)) = "shader/posteffect/BloomBlur_Linear.shcd";
    puVar3 = &(*(undefined4 *)(gen_frame + 0x0));
    pPVar5 = this + 0x58;
    while( true ) {
      uVar6 = ((code *)*(gen_code32 *)(*(int *)pPVar5 + 4))(pPVar5,puVar3,param_2);
      if ((char)uVar6 == '\0') break;
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 2;
      pPVar5 = pPVar5 + 0x50;
      if (2 < uVar4) {
        F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
        return 1;
      }
    }
  }
LAB_00679713: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectStarShader::vf1 */
byte F_00679730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x679730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = 0xa4;
  while( true ) {
    if (uVar4 < 4) {
      piVar2 = *(int * PTR32 *)(uVar3 + REFG(int, 0x1371288));
    }
    else {
      piVar2 = (int *)0x0;
    }
    *((int * PTR32 *)GEN_TOP((this + (uVar3 - 0x54)))) = piVar2;
    if (piVar2 == (int *)0x0) break;
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
    uVar3 = uVar3 + 4;
    uVar4 = uVar4 + 1;
    if (0xab < uVar3) {
      bVar1 = F_00679280((undefined *)this,param_1,param_2);
      return bVar1;
    }
  }
  return 0;
}

/* ref: FUN_00679790 */
uint F_00679790(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x679790u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  float fVar1;
  float * pfVar2;
  
  *(uint *)((*(int *)&gen_args[0]) + 0x60) = (*(uint *)&gen_args[1]);
  fVar1 = REFG(float, 0x1087f04);
  (*(uint *)&gen_args[1]) = 0;
  pfVar2 = &(*(float *)&gen_args[2]);
  if (!(0.0 < (*(float *)&gen_args[2]))) {
    pfVar2 = (float *)&(*(uint *)&gen_args[1]);
  }
  *(float *)((*(int *)&gen_args[0]) + 100) = *pfVar2;
  (*(float *)&gen_args[2]) = fVar1;
  (*(uint *)&gen_args[1]) = 0;
  pfVar2 = &(*(float *)&gen_args[3]);
  if (!((*(float *)&gen_args[3]) < fVar1)) {
    pfVar2 = &(*(float *)&gen_args[2]);
  }
  if (!(0.0 < *pfVar2)) {
    pfVar2 = (float *)&(*(uint *)&gen_args[1]);
  }
  *(float *)((*(int *)&gen_args[0]) + 0x68) = *pfVar2;
  *(float *)((*(int *)&gen_args[0]) + 0x6c) = (*(float *)&gen_args[4]);
  return (uint)pfVar2;
}

/* ref: FUN_00679800 */
uint F_00679800(unsigned int gen_a0)
{
  GEN_ENTER(0x679800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00677380(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10add90));
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectFogShader::vf1 */
byte F_00679820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x679820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * pcVar1;
  char cVar2;
  undefined * puVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  undefined * pPVar8;
  int iVar9;
  
  pPVar8 = this + 0x50;
  iVar9 = 3;
  do {
    (*(undefined4 *)(gen_frame + 0x8)) = 0x100;
    (*(undefined4 *)(gen_frame + 0xc)) = 1;
    uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x8)),1,0x2250,4,0xb);
    *(uint *)pPVar8 = uVar5;
    piVar7 = REFG(int * PTR32, 0x148809c);
    pPVar8 = pPVar8 + 4;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  iVar9 = *(int *)param_1;
  if ((iVar9 != -1) && (pcVar6 = *(char * PTR32 *)(param_1 + 4), pcVar6 != (char *)0x0)) {
    pcVar1 = pcVar6 + 1;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if (pcVar6 != pcVar1) {
      if (iVar9 != (char)this[0x44]) {
        if (REFG(int * PTR32, 0x148809c)[iVar9 + 2] == 0) {
          F_004ff310(&(*(undefined4 *)(gen_frame + 0xc)),5,0);
          puVar3 = (&REFG(undefined * PTR32, 0x1322348))[(int)(iVar9)];
          (*(undefined4 *)(gen_frame + 0x10)) = 0x73686364;
          uVar5 = F_00513d20(&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x10)),puVar3,0,0,0);
        }
        else {
          uVar5 = F_00513f60(REFG(int * PTR32, 0x148809c)[iVar9 + 2],0,0);
        }
        piVar7[iVar9 + 2] = uVar5;
        if (uVar5 != 0) {
          ((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7);
        }
        F_00677320(piVar7,(int)(char)this[0x44]);
        this[0x44] = *param_1;
        if (*(int *)(this + 8) != 0) {
          F_00406810(*(int *)(this + 8));
          *(undefined4 *)(this + 8) = 0;
        }
        iVar9 = *(int *)(&REFG(undefined, 0x10ac578) + *(int *)((int)(uintptr_t)param_1) * 4);
        piVar7 = (int *)F_00406520();
        uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,(iVar9 + -1) * 0x10 + 0x38,0);
        *(uint *)(this + 8) = uVar5;
        F_00677690(this);
      }
      if (*(undefined * PTR32 *)(this + 4) != (undefined *)0x0) {
        bVar4 = F_00501350(*(undefined * PTR32 *)(this + 4),*(int *)(param_1 + 4));
        if (bVar4 == 0) {
          F_0050c620(*(undefined4 *)(this + 4),0,0);
        }
      }
      if (*(int *)(this + 4) == 0) {
        F_004ff310(((undefined1 *)(gen_frame + 0x14)),5,0);
        iVar9 = *(int *)(param_1 + 4);
        (*(undefined4 *)(gen_frame + 0x18)) = 0x73686364;
        if ((char)param_2 == '\0') {
          uVar5 = F_00513d20(((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x18)),iVar9,0,0,0);
        }
        else {
          uVar5 = F_00513d70(((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x18)),iVar9,0,0,0);
        }
        this[0x48] = (undefined1)((byte)this[0x48] & 0xf7);
        *(uint *)(this + 4) = uVar5;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectDofCocShader::vf1 */
byte F_006799d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6799d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * pcVar1;
  char cVar2;
  undefined * puVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  undefined * pPVar8;
  int iVar9;
  
  pPVar8 = this + 0x50;
  iVar9 = 3;
  do {
    (*(undefined4 *)(gen_frame + 0x8)) = 0x100;
    (*(undefined4 *)(gen_frame + 0xc)) = 1;
    uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x8)),1,0x1131,4,0xb);
    *(uint *)pPVar8 = uVar5;
    piVar7 = REFG(int * PTR32, 0x148809c);
    pPVar8 = pPVar8 + 4;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  iVar9 = *(int *)param_1;
  if ((iVar9 != -1) && (pcVar6 = *(char * PTR32 *)(param_1 + 4), pcVar6 != (char *)0x0)) {
    pcVar1 = pcVar6 + 1;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if (pcVar6 != pcVar1) {
      if (iVar9 != (char)this[0x44]) {
        if (REFG(int * PTR32, 0x148809c)[iVar9 + 2] == 0) {
          F_004ff310(&(*(undefined4 *)(gen_frame + 0xc)),5,0);
          puVar3 = (&REFG(undefined * PTR32, 0x1322348))[(int)(iVar9)];
          (*(undefined4 *)(gen_frame + 0x10)) = 0x73686364;
          uVar5 = F_00513d20(&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x10)),puVar3,0,0,0);
        }
        else {
          uVar5 = F_00513f60(REFG(int * PTR32, 0x148809c)[iVar9 + 2],0,0);
        }
        piVar7[iVar9 + 2] = uVar5;
        if (uVar5 != 0) {
          ((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7);
        }
        F_00677320(piVar7,(int)(char)this[0x44]);
        this[0x44] = *param_1;
        if (*(int *)(this + 8) != 0) {
          F_00406810(*(int *)(this + 8));
          *(undefined4 *)(this + 8) = 0;
        }
        iVar9 = *(int *)(&REFG(undefined, 0x10ac578) + *(int *)((int)(uintptr_t)param_1) * 4);
        piVar7 = (int *)F_00406520();
        uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,(iVar9 + -1) * 0x10 + 0x38,0);
        *(uint *)(this + 8) = uVar5;
        F_00677690(this);
      }
      if (*(undefined * PTR32 *)(this + 4) != (undefined *)0x0) {
        bVar4 = F_00501350(*(undefined * PTR32 *)(this + 4),*(int *)(param_1 + 4));
        if (bVar4 == 0) {
          F_0050c620(*(undefined4 *)(this + 4),0,0);
        }
      }
      if (*(int *)(this + 4) == 0) {
        F_004ff310(((undefined1 *)(gen_frame + 0x14)),5,0);
        iVar9 = *(int *)(param_1 + 4);
        (*(undefined4 *)(gen_frame + 0x18)) = 0x73686364;
        if ((char)param_2 == '\0') {
          uVar5 = F_00513d20(((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x18)),iVar9,0,0,0);
        }
        else {
          uVar5 = F_00513d70(((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x18)),iVar9,0,0,0);
        }
        this[0x48] = (undefined1)((byte)this[0x48] & 0xf7);
        *(uint *)(this + 4) = uVar5;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectCameraVelocityShader::vf1 */
byte F_00679f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x679f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_00679280((undefined *)this,param_1,param_2);
  return bVar1;
}

/* ref: Client::Graphics::PostEffect::PostEffectMoonShader::vf1 */
byte F_00679f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x679f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  
  F_004ff2f0(((undefined1 *)(gen_frame + 0x38)));
  (*(undefined4 *)(gen_frame + 0x34)) = 0x746578;
  F_00503ef0(((undefined1 *)(gen_frame + 0x38)),REFG(undefined * PTR32, 0x13227b4));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302ff0);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5;
  (*(undefined1 *)(gen_frame + 0x20)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x29)) = 0x101;
  (*(undefined2 *)(gen_frame + 0x2d)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  if ((char)param_2 == '\0') {
    uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x34)),REFG(undefined * PTR32, 0x13227b4),&(*(undefined4 *)(gen_frame + 0xc)),
                         0,0);
  }
  else {
    uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x34)),REFG(undefined * PTR32, 0x13227b4),&(*(undefined4 *)(gen_frame + 0xc)),
                         0,0);
  }
  *(uint *)(this + 0x50) = uVar2;
  if (uVar2 == 0) {
    return 0;
  }
  bVar1 = F_00679280((undefined *)this,param_1,param_2);
  return bVar1;
}

/* ref: FUN_0067a050 */
byte F_0067a050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x67a050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 uVar1;
  undefined * _Dst;
  uint uVar2;
  
  if (param_1 < 0x21) {
    _Dst = (undefined *)F_00406bb0(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)param_1 * 4),0,0);
    *(undefined * PTR32 *)((int)this + 4) = _Dst;
    if (_Dst != (undefined *)0x0) {
      F_00c48350(_Dst,0,param_1 * 4);
      *(uint *)((int)this + 8) = param_1;
      *(undefined4 *)((int)this + 0xc) = 0;
      uVar2 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x1c),"cCommonTexParam");
      *(uint *)((int)this + 0x10) = uVar2;
      uVar2 = F_004dcd60(0x10,2,0);
      uVar1 = REFG(float, 0x1087f04);
      *(uint *)((int)this + 0x14) = uVar2;
      *(undefined4 *)((int)this + 0x18) = uVar1;
      *(undefined4 *)((int)this + 0x1c) = 0;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0067a0f0 */
uint F_0067a0f0(unsigned int gen_a0)
{
  GEN_ENTER(0x67a0f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  iVar2 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  if (*(int *)((int)this + 0x10) == -1) {
    uVar4 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x1c),"cCommonTexParam");
    *(uint *)((int)this + 0x10) = uVar4;
  }
  puVar5 = (undefined4 *)
           F_004d9920(*(undefined * PTR32 *)((int)this + 0x14),0,
                        *((undefined4 *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0x14) + 0xc))),2);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = *(undefined4 *)((int)this + 0x18);
    fVar1 = *(float *)((int)this + 0x18);
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[1] = (undefined4)gen_fl2bits((float)((float10)1 / (float10)fVar1));
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x24))) = 0;
    puVar6 = *(undefined4 * PTR32 *)((int)this + 0x14);
    *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0xa8 + *(int *)((int)this + 0x10) * 4))) = puVar6;
    uVar4 = 0;
    if (*(int *)((int)this + 8) != 0) {
      do {
        if (((*(uint *)((int)this + 0x1c) >> ((byte)uVar4 & 0x1f) & 1) != 0) &&
           (puVar6 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))),
           *((int *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) != 0)) {
          puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*puVar6 + 0x10))((int *)*puVar6)));
          if ((char)puVar6 != '\0') {
            piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4)));
            puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3)));
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)((int)this + 8));
    }
  }
  return (uint)puVar6;
}

/* ref: FUN_0067a1d0 */
byte F_0067a1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x67a1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint local_c;
  uint * local_8;
  
  local_8 = (uint *)((int)this + 0x604);
  local_c = 0;
  do {
    uVar2 = 0;
    puVar3 = local_8;
    do {
      uVar1 = F_004dcde0(2,0xb);
      *puVar3 = uVar1;
      if (uVar1 == 0) {
        return 0;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 < 0x80);
    local_8 = local_8 + 0x80;
    local_c = local_c + 1;
  } while (local_c < 5);
  *(undefined4 *)((int)this + 0x1004) = 0;
  *(undefined4 *)((int)this + 0x1008) = 0;
  *(undefined4 *)((int)this + 0x100c) = 0;
  *(undefined4 *)((int)this + 0x1010) = 0;
  F_00c48350((undefined *)((int)this + 0x1014),0,0x50);
  *(undefined4 *)((int)this + 0x1064) = 0;
  *(undefined4 *)((int)this + 0x1068) = 0;
  *(undefined4 *)((int)this + 0x106c) = 0;
  *(undefined4 *)((int)this + 0x1070) = 0;
  *(undefined4 *)((int)this + 0x1074) = 0;
  *(undefined4 *)((int)this + 0x1078) = 0;
  *(undefined4 *)((int)this + 0x107c) = 0;
  *(undefined4 *)((int)this + 0x1080) = 0;
  *(undefined1 *)((int)this + 0x1084) = 0;
  return 1;
}

/* ref: FUN_0067a2b0 */
uint F_0067a2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x67a2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10adc40));
  F_004d6630((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10add70));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10add58));
  puVar1 = (undefined4 *)((int)this + 0x14);
  iVar2 = 0x1a;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10adc28));
    puVar1[1] = 0;
    puVar1[4] = 0xffffffff;
    puVar1[5] = 0;
    puVar1 = puVar1 + 8;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x374) = (*(undefined * PTR32 (*)[1])REFP(0x10adc30));
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3d0) = (*(undefined * PTR32 (*)[1])REFP(0x10adc38));
  F_00c48350((undefined *)((int)this + 0x9d4),0,0xa00);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x1458) = 0;
  *(undefined4 *)((int)this + 0x1460) = 0;
  *(undefined4 *)((int)this + 0x1464) = 0;
  *(undefined4 *)((int)this + 0x146c) = 0;
  *(undefined4 *)((int)this + 0x1470) = 0;
  *(undefined4 *)((int)this + 0x1474) = 0;
  *(undefined4 *)((int)this + 0x1478) = 0;
  *(undefined4 *)((int)this + 0x147c) = 0;
  *(undefined4 *)((int)this + 0x1480) = 0;
  *(undefined4 *)((int)this + 0x1484) = 0;
  *(undefined4 *)((int)this + 0x1488) = 0;
  *(undefined4 *)((int)this + 0x148c) = 0;
  *(undefined4 *)((int)this + 0x1490) = 0;
  *(undefined4 *)((int)this + 0x1494) = 0;
  *(undefined4 *)((int)this + 0x1498) = 0;
  *(undefined4 *)((int)this + 0x149c) = 0;
  *(undefined4 *)((int)this + 0x14a0) = 0;
  *(undefined4 *)((int)this + 0x14a4) = 0;
  *(undefined4 *)((int)this + 0x14a8) = 0;
  *(undefined4 *)((int)this + 0x14ac) = 0;
  *(undefined4 *)((int)this + 0x14b0) = 0;
  *(undefined4 *)((int)this + 0x14b4) = 0;
  *(undefined4 *)((int)this + 0x14b8) = 0;
  *(undefined4 *)((int)this + 0x14bc) = 0;
  *(undefined4 *)((int)this + 0x14c0) = 0;
  *(undefined4 *)((int)this + 0x14c4) = 0;
  *(undefined4 *)((int)this + 0x14c8) = 0;
  F_00c48350((undefined *)((int)this + 0x14cc),0,0x3c);
  *(uint *)((int)this + 0x1508) = *(uint *)((int)this + 0x1508) & 0xffffffa0 | 0x7a0;
  return (uint)this;
}

/* ref: FUN_0067a420 */
uint F_0067a420(unsigned int gen_a0)
{
  GEN_ENTER(0x67a420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined * this_00;
  int * piVar6;
  int local_8;
  
  *(uint *)(REFG(int, 0x137127c) + 0x11e44) = *(uint *)(REFG(int, 0x137127c) + 0x11e44) & 0xfffffff7;
  uVar4 = *(uint *)((int)this + 0x1510);
  uVar3 = 0;
  uVar2 = 1;
  do {
    uVar4 = uVar4 & ~uVar2 | 0 << ((byte)uVar3 & 0x1f);
    uVar3 = uVar3 + 1;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  } while (uVar3 < 0x1b);
  *(uint *)((int)this + 0x1510) = uVar4;
  piVar6 = (int *)((int)this + 0x9d4);
  local_8 = 5;
  do {
    iVar5 = 0x80;
    do {
      piVar1 = (int *)*piVar6;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *piVar6 = 0;
      }
      piVar6 = piVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  F_00676670((undefined *)((int)this + 0x374));
  this_00 = (undefined *)((int)this + 0x14);
  iVar5 = 0x1b;
  do {
    uVar4 = F_00676510(this_00);
    this_00 = (undefined *)((int)this_00 + 0x20);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  piVar6 = (int *)((int)this + 0x14cc);
  local_8 = 5;
  do {
    iVar5 = 3;
    do {
      piVar1 = (int *)*piVar6;
      if (piVar1 != (int *)0x0) {
        uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *piVar6 = 0;
      }
      piVar6 = piVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar6 = *(int * PTR32 *)((int)this + 0x14c8);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x14c8) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x14c4);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x14c4) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x14c0);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x14c0) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x14bc);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x14bc) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x14b8);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x14b8) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x14b4);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x14b4) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x14b0);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x14b0) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x14ac);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x14ac) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x14a8);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x14a8) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x14a4);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x14a4) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x14a0);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x14a0) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x149c);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x149c) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x1498);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x1498) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x1494);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x1494) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x1490);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x1490) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x148c);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x148c) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x1488);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x1488) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x1484);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x1484) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x1480);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x1480) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x147c);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x147c) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x1478);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x1478) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x1474);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x1474) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x1470);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x1470) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x146c);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x146c) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x1468);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x1468) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x1464);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x1464) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x1460);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x1460) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x145c);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x145c) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x1458);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x1458) = 0;
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return uVar4;
}

/* ref: FUN_0067a7a0 */
uint F_0067a7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x67a7a0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  uVar1 = *(*(uint * PTR32 *)&gen_args[0]);
  uVar2 = uVar1 >> 7 & 3;
  ((int *)(gen_frame + 0x4))[1] = 3;
  ((int *)(gen_frame + 0x4))[0] = 0;
  (*(uint * PTR32 *)&gen_args[0]) = (uint *)uVar2;
  if (uVar2 < 3) {
    piVar3 = (int *)&(*(uint * PTR32 *)&gen_args[0]);
    if (uVar2 == 0) {
      piVar3 = ((int *)(gen_frame + 0x4));
    }
  }
  else {
    piVar3 = ((int *)(gen_frame + 0x4)) + 1;
  }
  if ((uVar1 & 0x200) == 0) {
    return (uint)(&REFG(undefined * PTR32, 0x13227b8))[(int)(*piVar3)];
  }
  return (uint)(&REFG(undefined * PTR32, 0x13227c8))[(int)(*piVar3)];
}

/* ref: FUN_0067a800 */
byte F_0067a800(unsigned int gen_a0)
{
  GEN_ENTER(0x67a800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  uint * puVar7;
  
  iVar3 = REFG(int, 0x1371278);
  uVar2 = *(uint *)((int)this + 0x1508);
  (*(int *)(gen_frame + 0x8)) = REFG(int, 0x1371278);
  cVar1 = *(char *)(REFG(int, 0x1371278) + 0x17);
  (*(uint *)(gen_frame + 0x0)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + 0x150c);
  if (cVar1 == '\x01') {
    *(uint *)((int)this + 0x1508) = *(uint *)((int)this + 0x1508) & 0xfffffcff | 0x80;
  }
  else if (cVar1 == '\x02') {
    *(uint *)((int)this + 0x1508) = *(uint *)((int)this + 0x1508) | 0x380;
  }
  uVar4 = 8;
  puVar6 = (uint *)((int)this + 0x1508);
  puVar7 = &(*(uint *)(gen_frame + 0x0));
  do {
    if (*puVar7 != *puVar6) {
      iVar5 = (*puVar7 & 0xff) - (uint)(byte)*puVar6;
      if (((iVar5 == 0) &&
          (iVar5 = (uint)*(byte *)((int)puVar7 + 1) - (uint)*(byte *)((int)puVar6 + 1), iVar5 == 0))
         && (iVar5 = (uint)*(byte *)((int)puVar7 + 2) - (uint)*(byte *)((int)puVar6 + 2), iVar5 == 0
            )) {
        iVar5 = (uint)*(byte *)((int)puVar7 + 3) - (uint)*(byte *)((int)puVar6 + 3);
      }
      uVar4 = iVar5 >> 0x1f | 1;
      goto LAB_0067a876;
    }
    uVar4 = uVar4 - 4;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  } while (3 < uVar4);
  uVar4 = 0;
LAB_0067a876: ;
  *(uint *)((int)this + 0x1508) =
       *(uint *)((int)this + 0x1508) ^
       ((uint)(1 < *(byte *)(iVar3 + 0x18)) * 0x400 ^ *(uint *)((int)this + 0x1508)) & 0x400;
  if (((*(uint *)((int)this + 0x1508) ^ uVar2) & 0x400) != 0) {
    *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) & 0xffeffbff;
    *(uint *)(REFG(int, 0x137127c) + 0x11e44) = *(uint *)(REFG(int, 0x137127c) + 0x11e44) & 0xfffffff7;
  }
  return uVar4 != 0;
}

/* ref: FUN_0067a900 */
uint F_0067a900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x67a900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  if (param_1 == 8) {
    if ((((*(uint *)((int)this + 0x1514) >> 8 & 1) == 0) && ((char)param_2 != '\0')) &&
       (**(int * PTR32 *)((int)this + 600) != 0)) {
      *((undefined1 *)GEN_TOP((**(int * PTR32 *)((int)this + 600) + 0x90))) = 0;
    }
  }
  else if (param_1 == 0xd) {
    if (((*(uint *)((int)this + 0x1514) >> 0xd & 1) == 0) && ((char)param_2 != '\0')) {
      iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x10)));
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 0xd1) = 1;
      }
      *(undefined1 *)((int)this + 0x173d) = 0;
    }
    *(char *)(REFG(int, 0x13759f8) + 0x288) = (char)param_2;
  }
  *(uint *)((int)this + 0x1514) =
       (uint)((char)param_2 != '\0') << ((byte)param_1 & 0x1f) |
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x1514);
  return (uint)this;
}

/* ref: FUN_0067a9a0 */
uint F_0067a9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x67a9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_004d4af0(param_1,param_3,param_3,2,-(uint)((char)param_2 != '\0') & 9,(float)(float10)0,0,0,
               param_4);
  return param_1;
}

/* ref: FUN_0067a9e0 */
uint F_0067a9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x67a9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  byte bVar1;
  undefined4 * puVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  F_00678f50(this,param_1);
  puVar2 = (undefined4 *)F_004d4760(this_00,0x48);
  uVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 4;
    puVar2[1] = 6;
    puVar2[2] = 0;
    puVar2[3] = 4;
    bVar1 = F_004dc830(this_00,puVar2 + 4);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar3 = F_004d4810(this_00,puVar2);
    }
  }
  return uVar3;
}

/* ref: Client::Graphics::PostEffect::PostEffectShader::vf3 */
byte F_0067aa50(unsigned int gen_a0)
{
  GEN_ENTER(0x67aa50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 PVar1;
  int * piVar2;
  double dVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint * puVar6;
  uint * puVar7;
  uint uVar8;
  int iVar9;
  
  if (((((byte)this[0x48] & 8) == 0) && (*(int *)(this + 4) != 0)) &&
     (iVar9 = *((int *)GEN_TOP((*(int *)(this + 4) + 0x9c))), (*(int *)(gen_frame + 0x18)) = iVar9, iVar9 != 0)) {
    if (this[0x41] != (undefined1)0x0) {
      iVar9 = 0;
      uVar8 = 0;
      do {
        if (*((int *)GEN_TOP((iVar9 + 4 + *(int *)(this + 0x10)))) != 0) {
          piVar2 = *((int * PTR32 *)GEN_TOP((iVar9 + 4 + *(int *)(this + 0x10))));
          ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
          *((undefined4 *)GEN_TOP((iVar9 + 4 + *(int *)(this + 0x10)))) = 0;
        }
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 + 0xc;
      } while (uVar8 < (byte)this[0x41]);
    }
    uVar8 = 0;
    if (this[0x40] != (undefined1)0x0) {
      do {
        if (*((int *)GEN_TOP((*(int *)(this + 0xc) + 4 + uVar8 * 8))) != 0) {
          piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 4 + uVar8 * 8)));
          ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
          *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 4 + uVar8 * 8))) = 0;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (byte)this[0x40]);
    }
    if (*(int *)(this + 0xc) != 0) {
      F_00406b30(*(int *)(this + 0xc));
      *(undefined4 *)(this + 0xc) = 0;
    }
    if (*(int *)(this + 0x10) != 0) {
      F_00406b30(*(int *)(this + 0x10));
      *(undefined4 *)(this + 0x10) = 0;
    }
    PVar1 = *(undefined *)((*(int *)(gen_frame + 0x18)) + 0xc);
    this[0x40] = PVar1;
    uVar8 = (uint)(byte)PVar1;
    this[0x41] = *(undefined *)((*(int *)(gen_frame + 0x18)) + 0x14);
    puVar4 = (undefined4 *)F_00406bb0(uVar8 * 8,0,0);
    puVar5 = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
        *puVar5 = 0xffffffff;
        puVar5[1] = 0;
        puVar5 = puVar5 + 2;
      }
    }
    PVar1 = this[0x41];
    *(undefined4 * PTR32 *)(this + 0xc) = puVar4;
    uVar8 = F_00406bb0((uint)(byte)PVar1 * 0xc,0,0);
    if (uVar8 == 0) {
      uVar8 = 0;
    }
    else {
      iVar9 = (byte)PVar1 - 1;
      if (-1 < iVar9) {
        puVar5 = (undefined4 *)(uVar8 + 8);
        do {
          puVar5[-2] = 0xffffffff;
          puVar5[-1] = 0;
          *puVar5 = REFG(undefined4, 0x1375a5c);
          puVar5 = puVar5 + 3;
          iVar9 = iVar9 + -1;
        } while (-1 < iVar9);
      }
    }
    *(uint *)(this + 0x10) = uVar8;
    uVar8 = 0;
    if (this[0x40] != (undefined1)0x0) {
      do {
        *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + uVar8 * 8))) =
             *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x18)) + 0x10) + 4 + uVar8 * 8)));
        *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 4 + uVar8 * 8))) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar8 < (byte)this[0x40]);
    }
    if (this[0x41] != (undefined1)0x0) {
      dVar3 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
      ((uint *)(gen_frame + 0xc))[1] = 0x1ff;
      ((uint *)(gen_frame + 0xc))[0] = 0xfffffe00;
      iVar9 = 0;
      uVar8 = 0;
      do {
        *((undefined4 *)GEN_TOP((iVar9 + *(int *)(this + 0x10)))) =
             *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x18)) + 0x18) + 4 + uVar8 * 8)));
        *((undefined4 *)GEN_TOP((iVar9 + 4 + *(int *)(this + 0x10)))) = 0;
        ((uint *)(gen_frame + 0xc))[2] = (int)dVar3;
        puVar6 = ((uint *)(gen_frame + 0xc)) + 2;
        if (0x1fe < (int)dVar3) {
          puVar6 = ((uint *)(gen_frame + 0xc)) + 1;
        }
        ((uint *)(gen_frame + 0xc))[2] = *puVar6;
        puVar7 = ((uint *)(gen_frame + 0xc));
        if (-0x201 < (int)*puVar6) {
          puVar7 = ((uint *)(gen_frame + 0xc)) + 2;
        }
        *((uint *)GEN_TOP((iVar9 + 8 + *(int *)(this + 0x10)))) = (*puVar7 & 0x3ff) << 10 | 0x25;
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 + 0xc;
      } while (uVar8 < (byte)this[0x41]);
    }
    this[0x48] = (undefined1)((byte)this[0x48] | 8);
  }
  return (byte)this[0x48] >> 3 & 1;
}

/* ref: Client::Graphics::PostEffect::PostEffectShader::vf5 */
uint F_0067acb0(unsigned int gen_a0)
{
  GEN_ENTER(0x67acb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined1 PVar1;
  undefined1 PVar2;
  short sVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  undefined4 * puVar9;
  uint * puVar10;
  int iVar11;
  int * piVar12;
  float fVar13;
  undefined3 extraout_var = 0;
  int iVar14;
  undefined4 uVar15;
  
  uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar8 == '\0') {
    return uVar8;
  }
  iVar14 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  pvVar4 = *(undefined * PTR32 *)(iVar14 + 0x1a8);
  (*(int *)(gen_frame + 0x34)) = iVar14;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = REFG(void * PTR32, 0x148809c);
  F_004daa40(pvVar4,(uint)(byte)this[0x42],this + 0x18,*(undefined4 *)(this + 0x28),0,0);
  if (((byte)this[0x48] & 1) != 0) {
    uVar15 = *(undefined4 *)(this + 0x34);
    puVar9 = (undefined4 *)F_004d4760(pvVar4,0x28);
    uVar5 = REFG(float, 0x1087f04);
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = 3;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[1] = 1;
      puVar9[2] = uVar15;
      puVar9[3] = uVar5;
      F_004d4810(pvVar4,puVar9);
    }
  }
  iVar14 = *(int *)(this + 0x14);
  if ((iVar14 == 0) || ((*(short *)(this + 0x38) == 0 && (*(short *)(this + 0x3a) == 0)))) {
    (*(char *)(gen_frame + 0x4a)) = '\0';
  }
  else {
    (*(char *)(gen_frame + 0x4a)) = '\x01';
  }
  if ((*(short *)(this + 0x3c) != 0) || ((*(char *)(gen_frame + 0x4b)) = '\0', *(short *)(this + 0x3e) != 0)) {
    (*(char *)(gen_frame + 0x4b)) = '\x01';
  }
  if ((*(char *)(gen_frame + 0x4a)) != '\0') {
    iVar11 = *(int *)(iVar14 + 0x18);
    iVar14 = *(int *)(iVar14 + 0x1c);
    (*(int *)(gen_frame + 0x14)) = 0;
    sVar3 = *(short *)(this + 0x38);
    (*(int *)(gen_frame + 0x10)) = 0;
    (*(int *)(gen_frame + 0x14)) = -(int)*(short *)(this + 0x3a);
    (*(int *)(gen_frame + 0x1c)) = iVar14;
    (*(int *)(gen_frame + 0x1c)) = iVar14 + *(short *)(this + 0x3a);
    (*(int *)(gen_frame + 0x10)) = -(int)sVar3;
    (*(int *)(gen_frame + 0x18)) = iVar11 + sVar3;
  }
  if ((*(char *)(gen_frame + 0x4b)) == '\0') {
    uVar15 = 0;
  }
  else {
    iVar14 = *((int *)GEN_TOP((*(int *)(this + 0x18) + 0x18)));
    iVar11 = *((int *)GEN_TOP((*(int *)(this + 0x18) + 0x1c)));
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x2c)) = iVar11;
    sVar3 = *(short *)(this + 0x3e);
    (*(int *)(gen_frame + 0x2c)) = iVar11 + sVar3;
    (*(int *)(gen_frame + 0x28)) = iVar14;
    (*(int *)(gen_frame + 0x28)) = iVar14 + *(short *)(this + 0x3c);
    (*(int *)(gen_frame + 0x20)) = -(int)*(short *)(this + 0x3c);
    (*(int *)(gen_frame + 0x24)) = -(int)sVar3;
    puVar9 = (undefined4 *)F_004d4760(pvVar4,0x14);
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = 2;
      puVar9[1] = (*(int *)(gen_frame + 0x20));
      puVar9[2] = (*(int *)(gen_frame + 0x24));
      puVar9[3] = (*(int *)(gen_frame + 0x28));
      puVar9[4] = (*(int *)(gen_frame + 0x2c));
      F_004d4810(pvVar4,puVar9);
    }
    uVar15 = 1;
  }
  puVar10 = (uint *)F_004d4a30(&(*(float *)(gen_frame + 0x44)),3,1,0,uVar15,(float)(float10)0,(float)(float10)0);
  *(uint *)((int)pvVar4 + 0x3c) = *puVar10 & 0x7fffffff;
  if ((*(char *)(gen_frame + 0x4a)) == '\0') {
    if ((*(char *)(gen_frame + 0x4b)) == '\0') goto LAB_0067aef1;
    iVar14 = *(int *)(this + 0x18) + 0x18;
  }
  else if ((*(char *)(gen_frame + 0x4b)) == '\0') {
    iVar14 = 0;
  }
  else {
    iVar14 = *(int *)(this + 0x18) + 0x18;
  }
  if ((*(char *)(gen_frame + 0x4a)) == '\0') {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(this + 0x14) + 0x18;
  }
  F_00675340((uint)&(*(float *)(gen_frame + 0x0)),iVar11,-(uint)((*(char *)(gen_frame + 0x4a)) != '\0') & (uint)&(*(int *)(gen_frame + 0x10)),iVar14,
               -(uint)((*(char *)(gen_frame + 0x4b)) != '\0') & (uint)&(*(int *)(gen_frame + 0x20)));
  iVar14 = *(int *)(this + 8);
  (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x0));
  (*(float *)(gen_frame + 0x44)) = (*(float *)(gen_frame + 0x4));
  (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x8)) - (float10)(*(float *)(gen_frame + 0x0)));
  *(float *)(iVar14 + 0x10) = (float)((float10)(*(float *)(gen_frame + 0x8)) - (float10)(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x3c)) = (float)((float10)(*(float *)(gen_frame + 0xc)) - (float10)(*(float *)(gen_frame + 0x4)));
  *(float *)(iVar14 + 0x14) = (float)((float10)(*(float *)(gen_frame + 0xc)) - (float10)(*(float *)(gen_frame + 0x4)));
  *(float *)(iVar14 + 0x18) = (*(float *)(gen_frame + 0x0));
  *(float *)(iVar14 + 0x1c) = (*(float *)(gen_frame + 0x4));
LAB_0067aef1: ;
  if (*(int *)(this + 4) == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = *((int *)GEN_TOP((*(int *)(this + 4) + 0x9c)));
  }
  uVar8 = 0;
  if (iVar14 != 0) {
    uVar8 = 0;
    *(int *)((int)pvVar4 + 0x44) = iVar14;
    *(undefined4 *)((int)pvVar4 + 0x60) = 0;
    if (this[0x40] != (undefined1)0x0) {
      do {
        iVar14 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 4 + uVar8 * 8)));
        if (iVar14 != 0) {
          *((int *)GEN_TOP(((int)pvVar4 + *((int *)GEN_TOP((*(int *)(this + 0xc) + uVar8 * 8))) * 4 + 0xa8))) = iVar14;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (byte)this[0x40]);
    }
    (*(float *)(gen_frame + 0x44)) = 0.0;
    if (this[0x41] != (undefined1)0x0) {
      iVar14 = 0;
      do {
        iVar11 = *((int *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar14)));
        piVar12 = ((int *)GEN_TOP((*(int *)(this + 0x10) + iVar14)));
        if (iVar11 != 0) {
          *(int *)((int)pvVar4 + *piVar12 * 8 + 0x2a8) = iVar11;
          *(uint *)((int)pvVar4 + *piVar12 * 8 + 0x2ac) = piVar12[2] & 0xfffffff;
        }
        PVar1 = this[0x41];
        fVar13 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x44))) + 1);
        iVar14 = iVar14 + 0xc;
        (*(float *)(gen_frame + 0x44)) = fVar13;
      } while ((uint)gen_fl2bits(fVar13) < (uint)(byte)PVar1);
    }
    if ((*(int *)(this + 0x28) == 0) || (((byte)this[0x48] & 2) == 0)) {
      bVar7 = 0;
    }
    else {
      bVar7 = 1;
    }
    (*(float *)(gen_frame + 0x40)) = 0.0;
    PVar1 = this[0x43];
    PVar2 = this[0x48];
    *(uint *)((int)pvVar4 + 0x58) =
         (((-(uint)(((byte)this[0x48] & 4) != 0) & 5) + 2) * 2 | (uint)bVar7) << 0x19;
    *(uint *)((int)pvVar4 + 0x5c) =
         ((byte)PVar2 & 4) << 4 | (uint)CONCAT11(PVar1,PVar1) << 8 | (uint)(byte)PVar1 << 0x18;
    uVar8 = REFG(undefined4, 0x130235c);
    if (*(int *)(this + 0x28) != 0) {
      uVar8 = *(uint *)(this + 0x2c);
    }
    *(uint *)((int)pvVar4 + 0x50) = uVar8 & 0x1f;
    *(uint *)((int)pvVar4 + 0x38) = *(uint *)(this + 0x30) & 0x7ffffff;
    pvVar4 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x34)) + 0x1a8);
    F_00678f50((*(undefined * PTR32 *)(gen_frame + 0x30)),this);
    uVar6 = REFG(undefined4, 0x1370b90);
    uVar8 = *(uint *)((int)pvVar4 + 0x18);
    if (uVar8 + 0x50 < 0x8001) {
      puVar9 = ((undefined4 *)GEN_TOP((*(int *)((int)pvVar4 + 0xc) + uVar8)));
      *(uint *)((int)pvVar4 + 0x18) = uVar8 + 0x50;
    }
    else {
      uVar8 = REFG(undefined4, 0x1370b90);
      piVar12 = (int *)(REFG(undefined4, 0x1370b90) + 0xc0);
      LOCK();
      iVar14 = *piVar12;
      *piVar12 = *piVar12 + 0x8000;
      UNLOCK();
      if (*(uint *)(uVar6 + 0xb8) < (uint)(*(int *)(uVar6 + 0xc4) * 3 + *piVar12)) {
        LOCK();
        *piVar12 = *piVar12 + -0x8000;
        UNLOCK();
        return uVar8;
      }
      puVar9 = ((undefined4 *)GEN_TOP((*(int *)(uVar6 + 0xbc) + iVar14)));
      if (puVar9 == (undefined4 *)0x0) {
        return uVar6;
      }
      *(undefined4 * PTR32 *)((int)pvVar4 + 0xc) = puVar9;
      *(undefined4 *)((int)pvVar4 + 0x18) = 0x50;
      uVar8 = uVar6;
    }
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = 4;
      puVar9[1] = 6;
      puVar9[2] = 0;
      puVar9[3] = 4;
      bVar7 = F_004dc830(pvVar4,puVar9 + 4);
      uVar8 = CONCAT31(extraout_var,bVar7);
      if (bVar7 != 0) {
        uVar8 = F_004d4810(pvVar4,puVar9);
      }
    }
  }
  return uVar8;
}

/* ref: Client::Graphics::PostEffect::PostEffectRepeatShader::vf5 */
unsigned int F_0067b0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x67b0e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  char cVar6;
  uint uVar7;
  undefined * pPVar8;
  int * piVar9;
  uint local_8;
  
  piVar9 = *(int * PTR32 *)(this + 0x1c);
  piVar1 = *(int * PTR32 *)(this + 0x18);
  if (piVar9 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar9 + 0xc))(piVar9);
  }
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x42] = (undefined1)0x0;
  uVar7 = 0;
  pPVar8 = this + 0x18;
  do {
    if (*(int *)pPVar8 == 0) break;
    cVar6 = (char)uVar7;
    uVar7 = uVar7 + 1;
    pPVar8 = pPVar8 + 4;
    this[0x42] = (undefined1)(cVar6 + '\x01');
  } while (uVar7 < 4);
  iVar2 = *(int *)(this + 0x5c);
  iVar3 = *(int *)(this + 0x10);
  local_8 = 0;
  if (*(int *)(this + 0x58) != 0) {
    do {
      if (local_8 == 0) {
        piVar9 = *(int * PTR32 *)(this + 0x14);
      }
      else {
        piVar9 = *((int * PTR32 *)GEN_TOP((this + (local_8 - 1 & 1) * 4 + 0x50)));
      }
      iVar4 = *(int *)(this + 0x5c);
      if (piVar9 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar9 + 8))(piVar9);
      }
      iVar4 = iVar4 * 0xc;
      if (*((int *)GEN_TOP((iVar4 + 4 + *(int *)(this + 0x10)))) != 0) {
        piVar5 = *((int * PTR32 *)GEN_TOP((iVar4 + 4 + *(int *)(this + 0x10))));
        ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
      }
      *((int * PTR32 *)GEN_TOP((iVar4 + 4 + *(int *)(this + 0x10)))) = piVar9;
      *((uint *)GEN_TOP((iVar4 + 8 + *(int *)(this + 0x10)))) = *(uint *)(iVar3 + 8 + iVar2 * 0xc) & 0xfffffff;
      if (local_8 == *(int *)(this + 0x58) - 1U) {
        if (piVar1 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
        }
        piVar9 = *(int * PTR32 *)(this + 0x18);
        if (piVar9 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar9 + 0xc))(piVar9);
        }
        *(int * PTR32 *)(this + 0x18) = piVar1;
        this[0x42] = (undefined1)0x0;
        uVar7 = 0;
        pPVar8 = this + 0x18;
        do {
          if (*(int *)pPVar8 == 0) break;
          cVar6 = (char)uVar7;
          uVar7 = uVar7 + 1;
          pPVar8 = pPVar8 + 4;
          this[0x42] = (undefined1)(cVar6 + '\x01');
        } while (uVar7 < 4);
      }
      else {
        piVar9 = *((int * PTR32 *)GEN_TOP((this + (local_8 & 1) * 4 + 0x50)));
        if (piVar9 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar9 + 8))(piVar9);
        }
        piVar5 = *(int * PTR32 *)(this + 0x18);
        if (piVar5 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
        }
        *(int * PTR32 *)(this + 0x18) = piVar9;
        this[0x42] = (undefined1)0x0;
        uVar7 = 0;
        pPVar8 = this + 0x18;
        do {
          if (*(int *)pPVar8 == 0) break;
          cVar6 = (char)uVar7;
          uVar7 = uVar7 + 1;
          pPVar8 = pPVar8 + 4;
          this[0x42] = (undefined1)(cVar6 + '\x01');
        } while (uVar7 < 4);
      }
      F_0067acb0((undefined *)this);
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(this + 0x58));
  }
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectMeasureLumShader::vf5 */
unsigned int F_0067b260(unsigned int gen_a0)
{
  GEN_ENTER(0x67b260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  undefined * pPVar5;
  int iVar6;
  float10 fVar7;
  
  iVar6 = *((int *)GEN_TOP((*(int *)(this + 0x10) + 4)));
  fVar7 = (float10)*(int *)(iVar6 + 0x18);
  if (*(int *)(iVar6 + 0x18) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1094808);
  pfVar4 = &(*(float *)(gen_frame + 0x24));
  fVar1 = (float)(fVar7 * (float10)*(double *)&REFG(undefined, 0x10ac178));
  (*(float *)(gen_frame + 0x28)) = fVar1;
  if (!(*(double *)&REFG(undefined, 0x1094878) < (double)fVar1)) {
    pfVar4 = &(*(float *)(gen_frame + 0x28));
  }
  fVar1 = *pfVar4;
  fVar7 = (float10)*(int *)(iVar6 + 0x1c);
  if (*(int *)(iVar6 + 0x1c) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  pfVar4 = &(*(float *)(gen_frame + 0x24));
  fVar2 = (float)(fVar7 * (float10)*(double *)&REFG(undefined, 0x10ac178));
  (*(float *)(gen_frame + 0x28)) = fVar2;
  if (!(*(double *)&REFG(undefined, 0x1094878) < (double)fVar2)) {
    pfVar4 = &(*(float *)(gen_frame + 0x28));
  }
  fVar2 = *pfVar4;
  iVar6 = *(int *)(this + 8);
  fVar3 = gen_bits2f(*(int *)(iVar6 + 0x24) << 4);
  (*(float *)(gen_frame + 0x28)) = fVar3;
  (*(uint *)(gen_frame + 0x4)) = (uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0);
  (*(uint *)(gen_frame + 0x8)) = (uint)gen_fl2bits(fVar2) ^ REFG(uint, 0x10920d0);
  (*(float *)(gen_frame + 0xc)) = fVar1;
  (*(uint *)(gen_frame + 0x10)) = (uint)gen_fl2bits(fVar2) ^ REFG(uint, 0x10920d0);
  (*(uint *)(gen_frame + 0x14)) = (uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0);
  (*(float *)(gen_frame + 0x18)) = fVar2;
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  (*(float *)(gen_frame + 0x20)) = fVar2;
  (*(float *)(gen_frame + 0x24)) = 4.48416e-44;
  pfVar4 = &(*(float *)(gen_frame + 0x24));
  if ((uint)gen_fl2bits(fVar3) < 0x21) {
    pfVar4 = &(*(float *)(gen_frame + 0x28));
  }
  F_00c46aa0(iVar6 + 0x28,&(*(uint *)(gen_frame + 0x4)),(undefined4)gen_fl2bits(*pfVar4));
  F_0067acb0((undefined *)this);
  pPVar5 = this + 0x60;
  iVar6 = 3;
  do {
    ((code *)*(gen_code32 *)(*(int *)pPVar5 + 0x14))(pPVar5);
    pPVar5 = pPVar5 + 0x50;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectBloomShader::vf3 */
byte F_0067b380(unsigned int gen_a0)
{
  GEN_ENTER(0x67b380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint * puVar4;
  undefined * pPVar5;
  undefined4 * puVar6;
  int iVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  bVar1 = true;
  pPVar5 = this + 0x58;
  iVar7 = 3;
  do {
    if (bVar1) {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)pPVar5 + 0xc))(pPVar5);
      if ((char)uVar3 == '\0') goto LAB_0067b3b7;
      bVar1 = true;
    }
    else {
LAB_0067b3b7: ;
      bVar1 = false;
    }
    pPVar5 = pPVar5 + 0x50;
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      bVar2 = 0;
      if (bVar1) {
        bVar2 = F_0067aa50((undefined *)this);
        (*(byte *)(gen_frame + 0x5f)) = bVar2;
        if (bVar2 != 0) {
          ((undefined4 *)(gen_frame + 0xc))[0] = 0;
          ((undefined4 *)(gen_frame + 0xc))[1] = 0;
          ((undefined4 *)(gen_frame + 0xc))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[2], REFG(float, 0x10adb80));
          ((undefined4 *)(gen_frame + 0xc))[3] = 0;
          ((undefined4 *)(gen_frame + 0xc))[4] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[4], REFG(float, 0x10adb7c));
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          (*(undefined4 *)(gen_frame + 0x24)) = 0;
          (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x10adb80);
          (*(undefined4 *)(gen_frame + 0x2c)) = 0;
          (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x10adb7c);
          (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x10adb80);
          (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10adb80);
          (*(undefined4 *)(gen_frame + 0x3c)) = REFG(float, 0x10adb80);
          (*(undefined4 *)(gen_frame + 0x40)) = REFG(float, 0x10adb7c);
          (*(undefined4 *)(gen_frame + 0x44)) = REFG(float, 0x10adb7c);
          (*(undefined4 *)(gen_frame + 0x48)) = REFG(float, 0x10adb80);
          (*(undefined4 *)(gen_frame + 0x4c)) = REFG(float, 0x10adb7c);
          (*(undefined4 *)(gen_frame + 0x50)) = REFG(float, 0x10adb7c);
          puVar6 = ((undefined4 *)(gen_frame + 0xc));
          puVar8 = ((undefined4 *)(gen_frame + 0x60));
          for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          iVar7 = *(int *)(this + 0x60);
          uVar3 = *(int *)(iVar7 + 0x24) << 4;
          (*(uint *)(gen_frame + 0x58)) = uVar3;
          (*(uint *)(gen_frame + 0x54)) = 0x48;
          puVar4 = &(*(uint *)(gen_frame + 0x54));
          if (uVar3 < 0x49) {
            puVar4 = &(*(uint *)(gen_frame + 0x58));
          }
          F_00c46aa0(iVar7 + 0x28,((undefined4 *)(gen_frame + 0x60)),*puVar4);
          iVar7 = *(int *)(this + 0xb0);
          ((undefined4 *)(gen_frame + 0x60))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x60))[2], REFG(float, 0x10adbb8));
          ((undefined4 *)(gen_frame + 0x60))[4] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x60))[4], REFG(float, 0x10adbb4));
          ((undefined4 *)(gen_frame + 0x60))[6] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x60))[6], REFG(float, 0x10adbb0));
          ((undefined4 *)(gen_frame + 0x60))[8] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x60))[8], REFG(float, 0x10adbac));
          uVar3 = *(int *)(iVar7 + 0x24) << 4;
          ((undefined4 *)(gen_frame + 0x60))[10] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x60))[10], REFG(float, 0x10adba8));
          (*(uint *)(gen_frame + 0x54)) = uVar3;
          ((undefined4 *)(gen_frame + 0x60))[0] = 0;
          ((undefined4 *)(gen_frame + 0x60))[1] = 0;
          ((undefined4 *)(gen_frame + 0x60))[3] = 0;
          ((undefined4 *)(gen_frame + 0x60))[5] = 0;
          ((undefined4 *)(gen_frame + 0x60))[7] = 0;
          ((undefined4 *)(gen_frame + 0x60))[9] = 0;
          ((undefined4 *)(gen_frame + 0x60))[0xb] = 0;
          ((undefined4 *)(gen_frame + 0x60))[0xc] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x60))[0xc], REFG(float, 0x10adba4));
          ((undefined4 *)(gen_frame + 0x60))[0xd] = 0;
          (*(uint *)(gen_frame + 0x58)) = 0x38;
          puVar4 = &(*(uint *)(gen_frame + 0x58));
          if (uVar3 < 0x39) {
            puVar4 = &(*(uint *)(gen_frame + 0x54));
          }
          F_00c46aa0(iVar7 + 0x28,((undefined4 *)(gen_frame + 0x60)),*puVar4);
          iVar7 = *(int *)(this + 0x100);
          ((undefined4 *)(gen_frame + 0x60))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x60))[3], REFG(float, 0x10adbb8));
          ((undefined4 *)(gen_frame + 0x60))[5] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x60))[5], REFG(float, 0x10adbb4));
          ((undefined4 *)(gen_frame + 0x60))[7] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x60))[7], REFG(float, 0x10adbb0));
          uVar3 = *(int *)(iVar7 + 0x24) << 4;
          ((undefined4 *)(gen_frame + 0x60))[0] = 0;
          ((undefined4 *)(gen_frame + 0x60))[1] = 0;
          ((undefined4 *)(gen_frame + 0x60))[2] = 0;
          ((undefined4 *)(gen_frame + 0x60))[4] = 0;
          ((undefined4 *)(gen_frame + 0x60))[6] = 0;
          ((undefined4 *)(gen_frame + 0x60))[8] = 0;
          ((undefined4 *)(gen_frame + 0x60))[9] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x60))[9], REFG(float, 0x10adbac));
          ((undefined4 *)(gen_frame + 0x60))[10] = 0;
          ((undefined4 *)(gen_frame + 0x60))[0xc] = 0;
          (*(uint *)(gen_frame + 0x54)) = uVar3;
          ((undefined4 *)(gen_frame + 0x60))[0xb] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x60))[0xb], REFG(float, 0x10adba8));
          ((undefined4 *)(gen_frame + 0x60))[0xd] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x60))[0xd], REFG(float, 0x10adba4));
          (*(uint *)(gen_frame + 0x58)) = 0x38;
          puVar4 = &(*(uint *)(gen_frame + 0x58));
          if (uVar3 < 0x39) {
            puVar4 = &(*(uint *)(gen_frame + 0x54));
          }
          F_00c46aa0(iVar7 + 0x28,((undefined4 *)(gen_frame + 0x60)),*puVar4);
          *(undefined2 *)(this + 0x90) = 0xffff;
          *(undefined2 *)(this + 0x92) = 0xffff;
          *(undefined2 *)(this + 0x94) = 0xffff;
          *(undefined2 *)(this + 0x96) = 0xffff;
          this[0xa0] = (undefined1)((byte)this[0xa0] | 1);
          *(undefined4 *)(this + 0x8c) = 0;
          *(undefined2 *)(this + 0xe0) = 0xffff;
          *(undefined2 *)(this + 0xe2) = 0xffff;
          *(undefined2 *)(this + 0xe4) = 0xffff;
          *(undefined2 *)(this + 0xe6) = 0xffff;
          this[0xf0] = (undefined1)((byte)this[0xf0] | 1);
          *(undefined4 *)(this + 0xdc) = 0;
          *(undefined2 *)(this + 0x130) = 0xffff;
          *(undefined2 *)(this + 0x132) = 0xffff;
          bVar2 = (*(byte *)(gen_frame + 0x5f));
        }
      }
      F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
      return bVar2;
    }
  } while( true );
}

/* ref: Client::Graphics::PostEffect::PostEffectStarShader::vf5 */
uint F_0067b690(unsigned int gen_a0)
{
  GEN_ENTER(0x67b690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 PVar8;
  short sVar9;
  undefined * pvVar10;
  char cVar12;
  byte bVar13;
  uint * puVar14;
  uint uVar15;
  int iVar16;
  undefined4 * puVar17;
  float * pfVar18;
  uint * PTR32 * ppuVar19;
  char cVar20;
  int iVar21;
  uint * puVar22;
  uint * puVar23;
  float * pfVar24;
  int iVar25;
  int * piVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  float10 fVar31;
  float10 fVar32;
  
  (*(uint *)(gen_frame + 0x198)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c);
  puVar14 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x10))(this)));
  if (((char)puVar14 == '\0') || (iVar21 = *(int *)(this + 0x14), iVar21 == 0)) goto LAB_0067c72a;
  iVar25 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  pvVar10 = *(undefined * PTR32 *)(iVar25 + 0x1a8);
  (*(int *)(gen_frame + 0x40)) = iVar25;
  sVar9 = *(short *)(this + 0x38);
  (*(undefined * PTR32 *)(gen_frame + 0x90)) = pvVar10;
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = REFG(void * PTR32, 0x148809c);
  ((float *)(gen_frame + 0x1c))[0] = 0.0;
  ((float *)(gen_frame + 0x1c))[1] = 0.0;
  ((float *)(gen_frame + 0x1c))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x1c))[2], REFG(float, 0x1087f04));
  (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xc))[0] = 0.0;
  ((float *)(gen_frame + 0xc))[1] = 0.0;
  ((float *)(gen_frame + 0xc))[2] = GEN_FLT_TO(((float *)(gen_frame + 0xc))[2], REFG(float, 0x1087f04));
  (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
  if ((sVar9 == 0) && (*(short *)(this + 0x3a) == 0)) {
    cVar20 = '\0';
  }
  else {
    cVar20 = '\x01';
  }
  (*(bool *)(gen_frame + 0xd3)) = (bool)cVar20;
  if ((*(short *)(this + 0x3c) == 0) && (*(short *)(this + 0x3e) == 0)) {
    cVar12 = '\0';
  }
  else {
    cVar12 = '\x01';
  }
  (*(char *)(gen_frame + 0xcb)) = cVar12;
  if (cVar20 == '\0') {
    if (cVar12 != '\0') {
LAB_0067b7d0: ;
      iVar25 = *((int *)GEN_TOP((*(int *)(this + 0x18) + 0x18)));
      iVar21 = *((int *)GEN_TOP((*(int *)(this + 0x18) + 0x1c)));
      (*(int *)(gen_frame + 0x4c)) = 0;
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x54)) + 4)) = iVar21;
      sVar9 = *(short *)(this + 0x3e);
      iVar21 = iVar21 + sVar9;
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x54)) + 4)) = iVar21;
      iVar25 = iVar25 + *(short *)(this + 0x3c);
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x54)) + 0)) = iVar25;
      (*(double *)(gen_frame + 0x54)) = gen_bits2d(CONCAT44(iVar21,iVar25));
      (*(int *)(gen_frame + 0x4c)) = -(int)*(short *)(this + 0x3c);
      (*(int *)(gen_frame + 0x50)) = -(int)sVar9;
      F_004d4bb0(pvVar10,&(*(int *)(gen_frame + 0x4c)));
      puVar14 = (uint *)F_004d4a30(&(*(uint * PTR32 *)(gen_frame + 0xb8)),3,1,0,1,(float)(float10)0,(float)(float10)0);
      *(uint *)((int)pvVar10 + 0x3c) = *puVar14 & 0x7fffffff;
      iVar21 = *(int *)(this + 0x18) + 0x18;
      goto LAB_0067b886;
    }
  }
  else {
    iVar25 = *(int *)(iVar21 + 0x18);
    iVar21 = *(int *)(iVar21 + 0x1c);
    (*(int *)(gen_frame + 0x60)) = 0;
    sVar9 = *(short *)(this + 0x38);
    (*(int *)(gen_frame + 0x5c)) = 0;
    (*(int *)(gen_frame + 0x60)) = -(int)*(short *)(this + 0x3a);
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x64)) + 4)) = iVar21;
    iVar21 = iVar21 + *(short *)(this + 0x3a);
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x64)) + 4)) = iVar21;
    iVar25 = iVar25 + sVar9;
    (*(int *)(gen_frame + 0x5c)) = -(int)sVar9;
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x64)) + 0)) = iVar25;
    (*(double *)(gen_frame + 0x64)) = gen_bits2d(CONCAT44(iVar21,iVar25));
    if (cVar12 != '\0') goto LAB_0067b7d0;
    puVar14 = (uint *)F_004d4a30(&(*(uint * PTR32 *)(gen_frame + 0xb8)),3,1,0,0,(float)(float10)0,(float)(float10)0);
    *(uint *)((int)pvVar10 + 0x3c) = *puVar14 & 0x7fffffff;
    iVar21 = 0;
LAB_0067b886: ;
    if ((*(bool *)(gen_frame + 0xd3)) == false) {
      iVar25 = 0;
    }
    else {
      iVar25 = *(int *)(this + 0x14) + 0x18;
    }
    F_00675340((uint)((float *)(gen_frame + 0x1c)),iVar25,-(uint)((*(bool *)(gen_frame + 0xd3)) != false) & (uint)&(*(int *)(gen_frame + 0x5c)),iVar21,
                 -(uint)((*(char *)(gen_frame + 0xcb)) != '\0') & (uint)&(*(int *)(gen_frame + 0x4c)));
  }
  fVar1 = REFG(float, 0x1087f04);
  puVar22 = (uint *)0x0;
  puVar14 = (uint *)0x0;
  if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x9c))) != 0) {
    *(int *)((int)pvVar10 + 0x44) = *((int *)GEN_TOP((*(int *)(this + 4) + 0x9c)));
    uVar15 = REFG(undefined4, 0x14882b0);
    *(undefined4 *)((int)pvVar10 + 0x60) = 0;
    if ((uVar15 & 1) == 0) {
      uVar15 = uVar15 | 1;
      *(float *)&REFG(undefined, 0x14882a0) = REFG(float, 0x10addb8);
      *(float *)&REFG(undefined, 0x14882a4) = REFG(float, 0x10addb8);
      *(float *)&REFG(undefined, 0x14882a8) = REFG(float, 0x10addb8);
      *(float *)&REFG(undefined, 0x14882ac) = 0.0;
      REFG(undefined4, 0x14882b0) = uVar15;
    }
    if ((uVar15 & 2) == 0) {
      uVar15 = uVar15 | 2;
      *(float *)&REFG(undefined, 0x1488254) = REFG(float, 0x10abe50);
      *(float *)&REFG(undefined, 0x1488220) = REFG(float, 0x1088068);
      *(float *)&REFG(undefined, 0x1488224) = REFG(float, 0x1088068);
      *(float *)&REFG(undefined, 0x1488228) = REFG(float, 0x1088068);
      *(float *)&REFG(undefined, 0x148822c) = 0.0;
      *(float *)&REFG(undefined, 0x1488230) = REFG(float, 0x1088068);
      *(float *)&REFG(undefined, 0x1488234) = REFG(float, 0x10a0da0);
      *(float *)&REFG(undefined, 0x1488238) = REFG(float, 0x10ac1a8);
      *(float *)&REFG(undefined, 0x148823c) = 0.0;
      *(float *)&REFG(undefined, 0x1488240) = REFG(float, 0x10a0da0);
      *(float *)&REFG(undefined, 0x1488244) = REFG(float, 0x10a0da0);
      *(float *)&REFG(undefined, 0x1488248) = fVar1;
      *(float *)&REFG(undefined, 0x148824c) = 0.0;
      *(float *)&REFG(undefined, 0x1488250) = REFG(float, 0x10a0da0);
      *(float *)&REFG(undefined, 0x1488258) = REFG(float, 0x10944e8);
      *(float *)&REFG(undefined, 0x148825c) = 0.0;
      *(float *)&REFG(undefined, 0x1488260) = REFG(float, 0x10a0da0);
      *(float *)&REFG(undefined, 0x1488264) = REFG(float, 0x10ac1a8);
      *(float *)&REFG(undefined, 0x1488268) = REFG(float, 0x10a0da0);
      *(float *)&REFG(undefined, 0x148826c) = 0.0;
      *(float *)&REFG(undefined, 0x1488270) = REFG(float, 0x10ac1a8);
      *(float *)&REFG(undefined, 0x1488274) = REFG(float, 0x10ac1a8);
      *(float *)&REFG(undefined, 0x1488278) = REFG(float, 0x10a0da0);
      *(float *)&REFG(undefined, 0x148827c) = 0.0;
      *(float *)&REFG(undefined, 0x1488280) = REFG(float, 0x10944e8);
      *(float *)&REFG(undefined, 0x1488284) = REFG(float, 0x1088068);
      *(float *)&REFG(undefined, 0x1488288) = REFG(float, 0x10a0da0);
      *(float *)&REFG(undefined, 0x148828c) = 0.0;
      *(float *)&REFG(undefined, 0x1488290) = fVar1;
      *(float *)&REFG(undefined, 0x1488294) = REFG(float, 0x10a0da0);
      *(float *)&REFG(undefined, 0x1488298) = REFG(float, 0x10a0da0);
      *(float *)&REFG(undefined, 0x148829c) = 0.0;
      REFG(undefined4, 0x14882b0) = uVar15;
    }
    if ((uVar15 & 4) == 0) {
      REFG(undefined4, 0x14882b0) = uVar15 | 4;
    }
    fVar27 = (float10)REFG(double, 0x1088108);
    iVar21 = 3;
    dVar4 = (double)((float10)*(float *)&REFG(undefined, 0x14882a0) * fVar27);
    (*(double *)(gen_frame + 0x9c)) = dVar4;
    dVar5 = (double)((float10)*(float *)&REFG(undefined, 0x14882a4) * fVar27);
    (*(double *)(gen_frame + 0xa4)) = dVar5;
    dVar6 = (double)((float10)*(float *)&REFG(undefined, 0x14882a8) * fVar27);
    (*(double *)(gen_frame + 0xac)) = dVar6;
    dVar7 = (double)((float10)*(float *)&REFG(undefined, 0x14882ac) * fVar27);
    (*(double *)(gen_frame + 0x94)) = dVar7;
    pfVar18 = (float *)&REFG(undefined4, 0x14880a8);
    do {
      puVar22 = (uint *)((int)puVar22 + 1);
      (*(uint * PTR32 *)(gen_frame + 0xb8)) = puVar22;
      fVar28 = (float10)(int)puVar22;
      if ((int)puVar22 < 0) {
        fVar28 = fVar28 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(uint * PTR32 *)(gen_frame + 0xc4)) = ((uint *)(uintptr_t)gen_fl2bits((float)((float)(fVar28 / (float10)*(double *)&REFG(undefined, 0x10944e0)))));
      fVar28 = (float10)(float)(fVar28 / (float10)*(double *)&REFG(undefined, 0x10944e0));
      puVar14 = ((uint *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - fVar28))));
      (*(uint * PTR32 *)(gen_frame + 0xc4)) = puVar14;
      (*(uint * PTR32 *)(gen_frame + 0xd4)) = puVar14;
      fVar29 = (float10)*(float *)&REFG(undefined, 0x14882a0) * fVar28;
      fVar30 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14)));
      pfVar18[-2] = (float)(fVar30 * (float10)*(float *)&REFG(undefined, 0x1488220) + fVar29);
      fVar31 = (float10)*(float *)&REFG(undefined, 0x14882a4) * fVar28;
      pfVar18[-1] = (float)((float10)*(float *)&REFG(undefined, 0x1488224) * fVar30 + fVar31);
      fVar32 = (float10)*(float *)&REFG(undefined, 0x14882a8) * fVar28;
      *pfVar18 = (float)((float10)*(float *)&REFG(undefined, 0x1488228) * fVar30 + fVar32);
      fVar28 = (float10)*(float *)&REFG(undefined, 0x14882ac) * fVar28;
      pfVar18[1] = (float)((float10)*(float *)&REFG(undefined, 0x148822c) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) + fVar28);
      pfVar18[-2] = (float)((float10)pfVar18[-2] * fVar27 + (float10)dVar4);
      pfVar18[-1] = (float)((float10)pfVar18[-1] * fVar27 + (float10)dVar5);
      *pfVar18 = (float)((float10)*pfVar18 * fVar27 + (float10)dVar6);
      pfVar18[1] = (float)((float10)pfVar18[1] * fVar27 + (float10)dVar7);
      pfVar18[2] = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) * (float10)*(float *)&REFG(undefined, 0x1488230) + fVar29);
      pfVar18[3] = (float)((float10)*(float *)&REFG(undefined, 0x1488234) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) + fVar31);
      pfVar18[4] = (float)((float10)*(float *)&REFG(undefined, 0x1488238) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) + fVar32);
      pfVar18[5] = (float)((float10)*(float *)&REFG(undefined, 0x148823c) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) + fVar28);
      pfVar18[2] = (float)((float10)pfVar18[2] * fVar27 + (float10)dVar4);
      pfVar18[3] = (float)((float10)pfVar18[3] * fVar27 + (float10)dVar5);
      pfVar18[4] = (float)((float10)pfVar18[4] * fVar27 + (float10)dVar6);
      pfVar18[5] = (float)((float10)pfVar18[5] * fVar27 + (float10)dVar7);
      pfVar18[6] = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) * (float10)*(float *)&REFG(undefined, 0x1488240) + fVar29);
      pfVar18[7] = (float)((float10)*(float *)&REFG(undefined, 0x1488244) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) + fVar31);
      pfVar18[8] = (float)((float10)*(float *)&REFG(undefined, 0x1488248) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) + fVar32);
      pfVar18[9] = (float)((float10)*(float *)&REFG(undefined, 0x148824c) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) + fVar28);
      pfVar18[6] = (float)((float10)pfVar18[6] * fVar27 + (float10)dVar4);
      pfVar18[7] = (float)((float10)pfVar18[7] * fVar27 + (float10)dVar5);
      pfVar18[8] = (float)((float10)pfVar18[8] * fVar27 + (float10)dVar6);
      pfVar18[9] = (float)((float10)pfVar18[9] * fVar27 + (float10)dVar7);
      pfVar18[10] = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) * (float10)*(float *)&REFG(undefined, 0x1488250) + fVar29);
      pfVar18[0xb] = (float)((float10)*(float *)&REFG(undefined, 0x1488254) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) + fVar31);
      pfVar18[0xc] = (float)((float10)*(float *)&REFG(undefined, 0x1488258) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) + fVar32);
      pfVar18[0xd] = (float)((float10)*(float *)&REFG(undefined, 0x148825c) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) + fVar28);
      pfVar18[10] = (float)((float10)pfVar18[10] * fVar27 + (float10)dVar4);
      pfVar18[0xb] = (float)((float10)pfVar18[0xb] * fVar27 + (float10)dVar5);
      pfVar18[0xc] = (float)((float10)pfVar18[0xc] * fVar27 + (float10)dVar6);
      pfVar18[0xd] = (float)((float10)pfVar18[0xd] * fVar27 + (float10)dVar7);
      pfVar18[0xe] = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) * (float10)*(float *)&REFG(undefined, 0x1488260) + fVar29);
      pfVar18[0xf] = (float)((float10)*(float *)&REFG(undefined, 0x1488264) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) + fVar31);
      pfVar18[0x10] = (float)((float10)*(float *)&REFG(undefined, 0x1488268) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) + fVar32);
      pfVar18[0x11] = (float)((float10)*(float *)&REFG(undefined, 0x148826c) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) + fVar28);
      pfVar18[0xe] = (float)((float10)pfVar18[0xe] * fVar27 + (float10)dVar4);
      pfVar18[0xf] = (float)((float10)pfVar18[0xf] * fVar27 + (float10)dVar5);
      pfVar18[0x10] = (float)((float10)pfVar18[0x10] * fVar27 + (float10)dVar6);
      pfVar18[0x11] = (float)((float10)pfVar18[0x11] * fVar27 + (float10)dVar7);
      pfVar18[0x12] = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) * (float10)*(float *)&REFG(undefined, 0x1488270) + fVar29);
      pfVar18[0x13] = (float)((float10)*(float *)&REFG(undefined, 0x1488274) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) + fVar31);
      pfVar18[0x14] = (float)((float10)*(float *)&REFG(undefined, 0x1488278) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) + fVar32);
      pfVar18[0x15] = (float)((float10)*(float *)&REFG(undefined, 0x148827c) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) + fVar28);
      pfVar18[0x12] = (float)((float10)pfVar18[0x12] * fVar27 + (float10)dVar4);
      pfVar18[0x13] = (float)((float10)pfVar18[0x13] * fVar27 + (float10)dVar5);
      pfVar18[0x14] = (float)((float10)pfVar18[0x14] * fVar27 + (float10)dVar6);
      pfVar18[0x15] = (float)((float10)pfVar18[0x15] * fVar27 + (float10)dVar7);
      pfVar18[0x16] = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) * (float10)*(float *)&REFG(undefined, 0x1488280) + fVar29);
      pfVar18[0x17] = (float)((float10)*(float *)&REFG(undefined, 0x1488284) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) + fVar31);
      pfVar18[0x18] = (float)((float10)*(float *)&REFG(undefined, 0x1488288) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) + fVar32);
      pfVar18[0x19] = (float)((float10)*(float *)&REFG(undefined, 0x148828c) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) + fVar28);
      pfVar18[0x16] = (float)((float10)pfVar18[0x16] * fVar27 + (float10)dVar4);
      pfVar18[0x17] = (float)((float10)pfVar18[0x17] * fVar27 + (float10)dVar5);
      iVar21 = iVar21 + -1;
      pfVar18[0x18] = (float)((float10)pfVar18[0x18] * fVar27 + (float10)dVar6);
      pfVar18[0x19] = (float)((float10)pfVar18[0x19] * fVar27 + (float10)dVar7);
      fVar30 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14)));
      pfVar18[0x1a] = (float)(fVar30 * (float10)*(float *)&REFG(undefined, 0x1488290) + fVar29);
      pfVar18[0x1b] = (float)((float10)*(float *)&REFG(undefined, 0x1488294) * fVar30 + fVar31);
      pfVar18[0x1c] = (float)((float10)*(float *)&REFG(undefined, 0x1488298) * fVar30 + fVar32);
      pfVar18[0x1d] = (float)(fVar30 * (float10)*(float *)&REFG(undefined, 0x148829c) + fVar28);
      pfVar18[0x1a] = (float)((float10)pfVar18[0x1a] * fVar27 + (float10)dVar4);
      pfVar18[0x1b] = (float)((float10)pfVar18[0x1b] * fVar27 + (float10)dVar5);
      pfVar18[0x1c] = (float)((float10)pfVar18[0x1c] * fVar27 + (float10)dVar6);
      pfVar18[0x1d] = (float)((float10)pfVar18[0x1d] * fVar27 + (float10)dVar7);
      pfVar18 = pfVar18 + 0x20;
    } while (iVar21 != 0);
    iVar21 = *((int *)GEN_TOP((*(int *)(this + 0x14) + 0x18)));
    fVar1 = *(float *)(this + 100);
    iVar25 = *(int *)(this + 0x18);
    (*(uint * PTR32 *)(gen_frame + 0xc4)) = ((uint *)(uintptr_t)gen_fl2bits((float)(fVar1)));
    iVar16 = *((int *)GEN_TOP((*(int *)(this + 0x14) + 0x1c)));
    fVar27 = (float10)*(int *)(iVar25 + 0x18);
    (*(float *)(gen_frame + 0x70)) = 0.0;
    piVar26 = (int *)(int)*(short *)(this + 0x3a);
    (*(float *)(gen_frame + 0x74)) = 0.0;
    sVar9 = *(short *)(this + 0x38);
    (*(int * PTR32 *)(gen_frame + 0xc0)) = piVar26;
    iVar21 = iVar21 + sVar9 * 2;
    (*(float *)(gen_frame + 0x74)) = gen_bits2f(-(int)piVar26);
    iVar16 = iVar16 + (int)((int)(uintptr_t)piVar26) * 2;
    (*(int * PTR32 *)(gen_frame + 0x6c)) = (int *)(iVar25 + 0x18);
    if (*(int *)(iVar25 + 0x18) < 0) {
      fVar27 = fVar27 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar28 = (float10)fVar1;
    (*(uint * PTR32 *)(gen_frame + 0xc4)) = (uint *)iVar21;
    puVar14 = *(uint * PTR32 *)(iVar25 + 0x1c);
    (*(uint * PTR32 *)(gen_frame + 0xb8)) = puVar14;
    (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((fVar28 * fVar27) / (float10)iVar21)));
    fVar27 = (float10)(int)puVar14;
    if ((int)puVar14 < 0) {
      fVar27 = fVar27 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(uint * PTR32 *)(gen_frame + 0xc4)) = (uint *)iVar16;
    (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(((fVar27 * fVar28) / (float10)iVar16)));
    fVar27 = F_00c4f340((float10)*(double *)&REFG(undefined, 0x10addb0));
    (*(uint * PTR32 *)(gen_frame + 0xc4)) = ((uint *)(uintptr_t)gen_fl2bits((float)((float)fVar27)));
    puVar22 = *(uint * PTR32 *)(this + 0x60);
    fVar1 = *(float *)(this + 0x6c);
    (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar27)));
    (*(uint * PTR32 *)(gen_frame + 0xb8)) = puVar22;
    fVar27 = (float10)(int)puVar22;
    (*(float *)(gen_frame + 0x30)) = fVar1;
    if ((int)puVar22 < 0) {
      fVar27 = fVar27 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(uint * PTR32 *)(gen_frame + 0xb4)) = (uint *)0x0;
    (*(float *)((char *)&(*(double *)(gen_frame + 0xac)) + 4)) = (float)((float10)1 / fVar27);
    (*(double *)(gen_frame + 0xac)) = gen_bits2d(CONCAT44((uint)gen_fl2bits((float)((float10)1 / fVar27)),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0xac)) + 0))));
    puVar14 = (uint *)0x0;
    if (puVar22 != (uint *)0x0) {
      (*(uint * PTR32 *)(gen_frame + 0xb8)) = (uint *)0x40;
      do {
        fVar27 = (float10)(int)(*(uint * PTR32 *)(gen_frame + 0xb4));
        (*(uint * PTR32 *)(gen_frame + 0xc4)) = (uint *)*(int * PTR32 *)(this + 0x14);
        if ((int)(*(uint * PTR32 *)(gen_frame + 0xb4)) < 0) {
          fVar27 = fVar27 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(uint * PTR32 *)(gen_frame + 0xcc)) = puVar22;
        fVar28 = (float10)(int)puVar22;
        if ((int)puVar22 < 0) {
          fVar28 = fVar28 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        piVar26 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((fVar27 * (float10)*(float *)&REFG(undefined, 0x1322388)) / fVar28 +
                                (float10)(*(float *)(gen_frame + 0x30))))))));
        (*(int * PTR32 *)(gen_frame + 0xc0)) = piVar26;
        fVar27 = ((float10)GEN_TOD(fsin((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar26))))));
        (*(uint * PTR32 *)(gen_frame + 0xcc)) = ((uint *)(uintptr_t)gen_fl2bits((float)((float)fVar27)));
        (*(float *)(gen_frame + 0x88)) = (float)((float10)(float)fVar27 * (float10)(*(float *)(gen_frame + 0x34)));
        fVar27 = ((float10)GEN_TOD(fcos((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar26))))));
        (*(uint * PTR32 *)(gen_frame + 0xcc)) = ((uint *)(uintptr_t)gen_fl2bits((float)((float)fVar27)));
        (*(int * PTR32 *)(gen_frame + 0x84)) = (*(int * PTR32 *)(gen_frame + 0x44));
        (*(uint * PTR32 *)(gen_frame + 0xd4)) = (uint *)0x0;
        (*(float *)(gen_frame + 0x8c)) = (float)((float10)(float)fVar27 * (float10)(*(float *)(gen_frame + 0x48)));
        do {
          pvVar10 = (*(undefined * PTR32 *)(gen_frame + 0x90));
          (*(bool *)(gen_frame + 0xd3)) = (*(uint * PTR32 *)(gen_frame + 0xd4)) == (uint *)0x2;
          if ((*(uint * PTR32 *)(gen_frame + 0xd4)) == (uint *)0x2) {
            (*(int * PTR32 *)(gen_frame + 0xc0)) = *(int * PTR32 *)(this + 0x18);
          }
          else {
            (*(int * PTR32 *)(gen_frame + 0xc0)) = *((int * PTR32 *)GEN_TOP((this + ((uint)(*(uint * PTR32 *)(gen_frame + 0xd4)) & 1) * 4 + 0x50)));
          }
          F_004daa40((*(undefined * PTR32 *)(gen_frame + 0x90)),1,&(*(int * PTR32 *)(gen_frame + 0xc0)),0,0,0);
          if ((((byte)this[0x48] & 1) == 0) || ((*(uint * PTR32 *)(gen_frame + 0xb4)) != (uint *)0x0)) {
            if (((*(uint * PTR32 *)(gen_frame + 0xb4)) == (uint *)0x0) || ((*(bool *)(gen_frame + 0xd3)) == false)) goto LAB_0067c19f;
            uVar15 = (*(uint *)(gen_frame + 0x2c)) & 0xff080111 | 0x7080111;
            (*(uint *)(gen_frame + 0x2c)) = uVar15;
          }
          else {
            if (((*(bool *)(gen_frame + 0xd3)) != false) &&
               (puVar17 = (undefined4 *)F_004d4760(pvVar10,0x28), fVar1 = REFG(float, 0x1087f04),
               puVar17 != (undefined4 *)0x0)) {
              *puVar17 = 3;
              puVar17[1] = 1;
              puVar17[2] = 0;
              puVar17[3] = (undefined4)gen_fl2bits(fVar1);
              puVar17[4] = 0;
              puVar17[5] = 0;
              F_004d4810(pvVar10,puVar17);
            }
LAB_0067c19f: ;
            uVar15 = (*(uint *)(gen_frame + 0x38)) & 0xff808010 | 0x7808010;
            (*(uint *)(gen_frame + 0x38)) = uVar15;
          }
          *(uint *)((int)pvVar10 + 0x38) = uVar15 & 0x7ffffff;
          fVar1 = *(float *)(this + 0x68);
          (*(uint * PTR32 *)(gen_frame + 0xcc)) = (*(uint * PTR32 *)(gen_frame + 0xd4));
          fVar27 = (float10)(int)(*(uint * PTR32 *)(gen_frame + 0xd4));
          (*(uint *)(gen_frame + 0x80)) = 0;
          (*(float *)((char *)&(*(double *)(gen_frame + 0x94)) + 4)) = fVar1;
          (*(double *)(gen_frame + 0x94)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar1),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x94)) + 0))));
          if ((int)(*(uint * PTR32 *)(gen_frame + 0xd4)) < 0) {
            fVar27 = fVar27 + (float10)*(float *)&REFG(undefined, 0x1088110);
          }
          dVar4 = ((double)GEN_TOD(((fVar27 + (float10)REFG(double, 0x1088130)) * (float10)REFG(double, 0x1088108))));
          (*(double *)(gen_frame + 0x54)) = dVar4;
          dVar5 = (double)*(*(int * PTR32 *)(gen_frame + 0x6c));
          if (*(*(int * PTR32 *)(gen_frame + 0x6c)) < 0) {
            dVar5 = dVar5 + (double)*(float *)&REFG(undefined, 0x1088110);
          }
          dVar5 = dVar5 * *(double *)&REFG(undefined, 0x1094818);
          pfVar18 = ((float *)(gen_frame + 0xd8)) + 2;
          (*(double *)(gen_frame + 0x64)) = dVar5;
          pfVar24 = (float *)(&REFG(undefined, 0x14881a8) + (int)(*(uint * PTR32 *)(gen_frame + 0xd4)) * -0x80);
          do {
            fVar27 = (float10)(int)(*(uint *)(gen_frame + 0x80));
            if ((int)(*(uint *)(gen_frame + 0x80)) < 0) {
              fVar27 = fVar27 + (float10)*(float *)&REFG(undefined, 0x1088110);
            }
            puVar14 = ((uint *)(uintptr_t)gen_fl2bits((float)((float)fVar27)));
            (*(uint * PTR32 *)(gen_frame + 0xcc)) = puVar14;
            (*(float *)(gen_frame + 0xbc)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x84))))));
            fVar27 = ((float10)GEN_TOD(pow((float10)fVar1,
                                           (float10)(float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) *
                                                           (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x84)))))))));
            (*(float *)(gen_frame + 0xbc)) = (float)fVar27;
            fVar2 = (float)((float10)(float)fVar27 * (float10)dVar4);
            (*(float *)(gen_frame + 0xbc)) = fVar2;
            if ((*(bool *)(gen_frame + 0xd3)) != false) {
              (*(float *)(gen_frame + 0xbc)) = ((float)GEN_TOF(((float10)fVar2 * (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0xac)) + 4)))));
            }
            fVar27 = (float10)(*(float *)(gen_frame + 0xbc));
            pfVar18[-2] = (float)(fVar27 * (float10)pfVar24[-2]);
            pfVar18[-1] = (float)((float10)pfVar24[-1] * fVar27);
            *pfVar18 = (float)(fVar27 * (float10)*pfVar24);
            pfVar18[1] = (float)(fVar27 * (float10)pfVar24[1]);
            puVar22 = ((uint *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))) * (float10)(*(float *)(gen_frame + 0x88))))));
            (*(uint * PTR32 *)(gen_frame + 0xcc)) = puVar22;
            ((float *)(gen_frame + 0x158))[(int)((*(uint *)(gen_frame + 0x80)) * 2)] = ((float)gen_bits2f((unsigned int)(uintptr_t)(puVar22)));
            puVar14 = ((uint *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(float *)(gen_frame + 0x8c)) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14)))))));
            (*(uint * PTR32 *)(gen_frame + 0xcc)) = puVar14;
            ((float *)(gen_frame + 0x158))[(int)((*(uint *)(gen_frame + 0x80)) * 2 + 1)] = ((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14)));
            (*(uint * PTR32 *)(gen_frame + 0xcc)) = ((uint *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar22)))))))));
            dVar6 = (double)((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar22))))));
            if ((GEN_ISNAN(dVar6) || GEN_ISNAN(dVar5)) || dVar6 < dVar5) {
              iVar21 = (*(int * PTR32 *)(gen_frame + 0x6c))[1];
              (*(uint * PTR32 *)(gen_frame + 0xcc)) = ((uint *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14)))))))));
              fVar27 = (float10)(*(int * PTR32 *)(gen_frame + 0x6c))[1];
              if (iVar21 < 0) {
                fVar27 = fVar27 + (float10)*(float *)&REFG(undefined, 0x1088110);
              }
              if (fVar27 * (float10)*(double *)&REFG(undefined, 0x1094818) <=
                  (float10)((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar14))))))) goto LAB_0067c3b1;
            }
            else {
LAB_0067c3b1: ;
              fVar2 = pfVar18[-2];
              fVar27 = (float10)0;
              ((float *)(gen_frame + 0x158))[(int)((*(uint *)(gen_frame + 0x80)) * 2)] = 0.0;
              ((float *)(gen_frame + 0x158))[(int)((*(uint *)(gen_frame + 0x80)) * 2 + 1)] = 0.0;
              pfVar18[-2] = (float)((float10)fVar2 * fVar27);
              pfVar18[-1] = (float)((float10)pfVar18[-1] * fVar27);
              *pfVar18 = (float)((float10)*pfVar18 * fVar27);
              pfVar18[1] = (float)(fVar27 * (float10)pfVar18[1]);
            }
            uVar15 = (*(uint *)(gen_frame + 0x80)) + 1;
            pfVar24 = pfVar24 + 4;
            pfVar18 = pfVar18 + 4;
            (*(uint *)(gen_frame + 0x80)) = uVar15;
          } while (uVar15 < 8);
          pfVar18 = ((float *)(gen_frame + 0x1c));
          if ((*(uint * PTR32 *)(gen_frame + 0xd4)) != (uint *)0x0) {
            pfVar18 = ((float *)(gen_frame + 0xc));
          }
          fVar1 = *pfVar18;
          fVar2 = pfVar18[1];
          (*(float *)((char *)&(*(double *)(gen_frame + 0xa4)) + 4)) = fVar1;
          (*(double *)(gen_frame + 0xa4)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar1),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0xa4)) + 0))));
          (*(float *)((char *)&(*(double *)(gen_frame + 0x9c)) + 4)) = fVar2;
          (*(double *)(gen_frame + 0x9c)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar2),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x9c)) + 0))));
          (*(float *)(gen_frame + 0x78)) = fVar1;
          (*(float *)(gen_frame + 0x7c)) = fVar2;
          (*(float *)(gen_frame + 0x70)) = (float)((float10)pfVar18[2] - (float10)fVar1);
          fVar3 = pfVar18[3];
          iVar21 = *(int *)(this + 8);
          *(float *)(iVar21 + 0x10) = (float)((float10)pfVar18[2] - (float10)fVar1);
          (*(float *)(gen_frame + 0x74)) = (float)((float10)fVar3 - (float10)fVar2);
          *(float *)(iVar21 + 0x14) = (float)((float10)fVar3 - (float10)fVar2);
          *(float *)(iVar21 + 0x18) = fVar1;
          *(float *)(iVar21 + 0x1c) = fVar2;
          iVar21 = *(int *)(this + 8);
          puVar14 = ((uint *)GEN_TOP((*(int *)(iVar21 + 0x24) << 4)));
          (*(uint * PTR32 *)(gen_frame + 0xcc)) = puVar14;
          ppuVar19 = &(*(uint * PTR32 *)(gen_frame + 0xb8));
          if (puVar14 < (uint *)0x41) {
            ppuVar19 = &(*(uint * PTR32 *)(gen_frame + 0xcc));
          }
          F_00c46aa0(iVar21 + 0x28,((float *)(gen_frame + 0x158)),*ppuVar19);
          iVar21 = *(int *)(this + 0x58);
          piVar26 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar21 * 8)));
          if (piVar26 == (int *)0x0) {
LAB_0067c4db: ;
            uVar15 = F_004dcd60(0x80,2,0xb);
            *((uint *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar21 * 8))) = uVar15;
          }
          else if ((uint)piVar26[3] < 0x80) {
            if (piVar26 != (int *)0x0) {
              ((code *)*(gen_code32 *)(*piVar26 + 0xc))(piVar26);
              *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar21 * 8))) = 0;
            }
            goto LAB_0067c4db;
          }
          uVar15 = F_004d9920(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar21 * 8))),0,0x80,2);
          if (uVar15 != 0) {
            F_00c46aa0(uVar15,((float *)(gen_frame + 0xd8)),0x80);
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar21 * 8))) + 0x24))) = 0;
          }
          puVar14 = (*(uint * PTR32 *)(gen_frame + 0xc4));
          iVar21 = *(int *)(this + 0x5c);
          (*(uint * PTR32 *)(gen_frame + 0xcc)) = ((uint *)GEN_TOP((*(int *)(this + 0x10) + 8 + iVar21 * 0xc)));
          if ((*(uint * PTR32 *)(gen_frame + 0xc4)) != (uint *)0x0) {
            ((code *)*(gen_code32 *)(*(*(uint * PTR32 *)(gen_frame + 0xc4)) + 8))((*(uint * PTR32 *)(gen_frame + 0xc4)));
          }
          iVar21 = iVar21 * 0xc;
          if (*((int *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar21))) != 0) {
            piVar26 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar21)));
            ((code *)*(gen_code32 *)(*piVar26 + 0xc))(piVar26);
          }
          *((uint * PTR32 *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar21))) = puVar14;
          *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8 + iVar21))) = *(*(uint * PTR32 *)(gen_frame + 0xcc)) & 0xfffffff;
          uVar15 = 0;
          if (this[0x40] != (undefined1)0x0) {
            do {
              piVar26 = ((int *)GEN_TOP((*(int *)(this + 0xc) + uVar15 * 8)));
              iVar21 = piVar26[1];
              if (iVar21 != 0) {
                *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x90)) + *piVar26 * 4 + 0xa8) = iVar21;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < (byte)this[0x40]);
          }
          iVar21 = 0;
          (*(uint * PTR32 *)(gen_frame + 0xcc)) = (uint *)0x0;
          if (this[0x41] != (undefined1)0x0) {
            do {
              iVar25 = *((int *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar21)));
              piVar26 = ((int *)GEN_TOP((*(int *)(this + 0x10) + iVar21)));
              if (iVar25 != 0) {
                *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x90)) + *piVar26 * 8 + 0x2a8) = iVar25;
                *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x90)) + *piVar26 * 8 + 0x2ac) = piVar26[2] & 0xfffffff;
              }
              PVar8 = this[0x41];
              puVar14 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0xcc)) + 1);
              iVar21 = iVar21 + 0xc;
              (*(uint * PTR32 *)(gen_frame + 0xcc)) = puVar14;
            } while (puVar14 < (uint *)(uint)(byte)PVar8);
          }
          pvVar10 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x40)) + 0x1a8);
          F_00678f50((*(undefined * PTR32 *)(gen_frame + 0x3c)),this);
          iVar21 = REFG(int, 0x1370b90);
          uVar15 = *(int *)((int)pvVar10 + 0x18) + 0x50;
          if (uVar15 < 0x8001) {
            puVar17 = ((undefined4 *)GEN_TOP((*(int *)((int)pvVar10 + 0xc) + *(int *)((int)pvVar10 + 0x18))));
            *(uint *)((int)pvVar10 + 0x18) = uVar15;
LAB_0067c688: ;
            if (puVar17 != (undefined4 *)0x0) {
              *puVar17 = 4;
              puVar17[1] = 6;
              puVar17[2] = 0;
              puVar17[3] = 4;
              bVar13 = F_004dc830(pvVar10,puVar17 + 4);
              if (bVar13 != 0) {
                F_004d4810(pvVar10,puVar17);
              }
            }
          }
          else {
            piVar26 = (int *)(REFG(int, 0x1370b90) + 0xc0);
            LOCK();
            iVar25 = *piVar26;
            *piVar26 = *piVar26 + 0x8000;
            UNLOCK();
            if (*(uint *)(iVar21 + 0xb8) < (uint)(*(int *)(iVar21 + 0xc4) * 3 + *piVar26)) {
              LOCK();
              *piVar26 = *piVar26 + -0x8000;
              UNLOCK();
            }
            else {
              puVar17 = ((undefined4 *)GEN_TOP((*(int *)(iVar21 + 0xbc) + iVar25)));
              if (puVar17 != (undefined4 *)0x0) {
                *(undefined4 * PTR32 *)((int)pvVar10 + 0xc) = puVar17;
                *(undefined4 *)((int)pvVar10 + 0x18) = 0x50;
                goto LAB_0067c688;
              }
            }
          }
          fVar27 = (float10)REFG(double, 0x10ac068);
          puVar14 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0xd4)) + 1);
          (*(uint * PTR32 *)(gen_frame + 0xc4)) = (uint *)(*(int * PTR32 *)(gen_frame + 0xc0));
          (*(uint * PTR32 *)(gen_frame + 0xd4)) = puVar14;
          (*(float *)(gen_frame + 0x88)) = (float)((float10)(*(float *)(gen_frame + 0x88)) * fVar27);
          (*(float *)(gen_frame + 0x8c)) = (float)((float10)(*(float *)(gen_frame + 0x8c)) * fVar27);
          (*(int * PTR32 *)(gen_frame + 0x84)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar27 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x84)))))))));
        } while (puVar14 < (uint *)0x3);
        puVar22 = *(uint * PTR32 *)(this + 0x60);
        puVar23 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0xb4)) + 1);
        (*(uint * PTR32 *)(gen_frame + 0xb4)) = puVar23;
        puVar14 = puVar22;
      } while (puVar23 < puVar22);
    }
  }
LAB_0067c72a: ;
  F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c));
  return (uint)puVar14;
}

/* ref: FUN_0067c740 */
uint F_0067c740(unsigned int gen_a0)
{
  GEN_ENTER(0x67c740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  ushort uVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  ushort * puVar9;
  undefined * this_00;
  float10 fVar10;
  float10 fVar11;
  
  uVar6 = (*(int *)((int)this + 0x5c) + 1U) % 3;
  *(uint *)((int)this + 0x5c) = uVar6;
  this_00 = *(undefined * PTR32 *)((int)this + uVar6 * 4 + 0x50);
  fVar8 = *(float *)((int)this_00 + 0x18);
  fVar7 = gen_bits2f((int)gen_fl2bits(fVar8) - 1);
  (*(float *)(gen_frame + 0x1c)) = fVar7;
  fVar10 = (float10)(int)gen_fl2bits(fVar7);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this_00;
  (*(float *)(gen_frame + 0x3c)) = fVar8;
  if ((int)gen_fl2bits(fVar7) < 0) {
    fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x34)) = (float)fVar10;
  pfVar3 = (float *)((int)this + 0x78);
  fVar11 = (float10)1;
  (*(float *)(gen_frame + 0x30)) = (float)(fVar11 / (float10)(float)fVar10);
  if (!((float10)*(float *)((int)this + 0x78) < (float10)*(float *)((int)this + 0x7c))) {
    pfVar3 = (float *)((int)this + 0x7c);
  }
  fVar7 = *pfVar3;
  (*(float *)(gen_frame + 0x44)) = fVar7;
  (*(float *)(gen_frame + 0x48)) = fVar7;
  fVar1 = *(float *)((int)this + 0x80);
  (*(float *)(gen_frame + 0x38)) = fVar1;
  if (REFG(float, 0x1094778) <= fVar1) {
    pfVar3 = &(*(float *)(gen_frame + 0x48));
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x74) / (float10)fVar1 +
                   (float10)*(float *)((int)this + 0x78))));
    (*(float *)(gen_frame + 0x40)) = fVar1;
    if (!((float10)fVar1 < (float10)fVar7)) {
      pfVar3 = &(*(float *)(gen_frame + 0x40));
    }
    (*(float *)(gen_frame + 0x48)) = *pfVar3;
  }
  fVar1 = *(float *)((int)this + 0x84);
  (*(float *)(gen_frame + 0x38)) = fVar1;
  if (REFG(float, 0x1094778) <= fVar1) {
    pfVar3 = &(*(float *)(gen_frame + 0x48));
    fVar1 = ((float)GEN_TOF((fVar11 / (float10)fVar1 + (float10)*(float *)((int)this + 0x7c))));
    (*(float *)(gen_frame + 0x40)) = fVar1;
    if (!((float10)fVar1 < (float10)(*(float *)(gen_frame + 0x48)))) {
      pfVar3 = &(*(float *)(gen_frame + 0x40));
    }
    (*(float *)(gen_frame + 0x48)) = *pfVar3;
  }
  pfVar3 = (float *)((int)this + 0x90);
  if ((float10)(*(float *)(gen_frame + 0x48)) < (float10)*pfVar3) {
    pfVar3 = &(*(float *)(gen_frame + 0x48));
  }
  fVar1 = *pfVar3;
  (*(float *)(gen_frame + 0x48)) = fVar1;
  (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
  pfVar3 = &(*(float *)(gen_frame + 0x38));
  fVar7 = (float)((float10)fVar1 - (float10)fVar7);
  (*(float *)(gen_frame + 0x40)) = fVar7;
  if (!((float10)fVar7 < fVar11)) {
    pfVar3 = &(*(float *)(gen_frame + 0x40));
  }
  (*(float *)(gen_frame + 0x38)) = *pfVar3;
  F_004d6dd0(this_00,0,((byte *)(gen_frame + 0xc)),2);
  uVar6 = 0;
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) != 0) {
    fVar7 = 0.0;
    if (fVar8 != 0.0) {
      fVar10 = (float10)(*(float *)(gen_frame + 0x30));
      (*(float *)(gen_frame + 0x2c)) = 0.0;
      (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0x24)) = 0.0;
      puVar9 = (ushort *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
      do {
        (*(float *)(gen_frame + 0x30)) = fVar7;
        fVar11 = (float10)(int)gen_fl2bits(fVar7);
        if ((int)gen_fl2bits(fVar7) < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        pfVar3 = &(*(float *)(gen_frame + 0x40));
        fVar1 = ((float)GEN_TOF(((fVar11 * fVar10) * (float10)(*(float *)(gen_frame + 0x38)) + (float10)(*(float *)(gen_frame + 0x44)))));
        (*(float *)(gen_frame + 0x30)) = fVar1;
        fVar11 = (float10)fVar1;
        fVar1 = ((float)GEN_TOF((fVar11 - (float10)*(float *)((int)this + 0x7c))));
        (*(float *)(gen_frame + 0x48)) = fVar1;
        fVar5 = ((float)GEN_TOF((fVar11 - (float10)*(float *)((int)this + 0x78))));
        (*(float *)(gen_frame + 0x30)) = fVar5;
        fVar5 = ((float)GEN_TOF(((float10)fVar5 * (float10)*(float *)((int)this + 0x80))));
        (*(float *)(gen_frame + 0x40)) = fVar5;
        if (!((float10)fVar5 < (float10)*(float *)((int)this + 0x74))) {
          pfVar3 = (float *)((int)this + 0x74);
        }
        if (!(0.0 < *pfVar3)) {
          pfVar3 = &(*(float *)(gen_frame + 0x2c));
        }
        fVar5 = *pfVar3;
        pfVar3 = &(*(float *)(gen_frame + 0x40));
        fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x84) * (float10)fVar1)));
        (*(float *)(gen_frame + 0x40)) = fVar1;
        if (!((float10)fVar1 < (float10)1)) {
          pfVar3 = &(*(float *)(gen_frame + 0x28));
        }
        if (!(0.0 < *pfVar3)) {
          pfVar3 = &(*(float *)(gen_frame + 0x24));
        }
        fVar1 = *pfVar3;
        (*(float *)(gen_frame + 0x20)) = fVar5;
        (*(float *)(gen_frame + 0x48)) = fVar1;
        fVar11 = (float10)fVar1;
        fVar1 = (float)(fVar11 * fVar11);
        (*(float *)(gen_frame + 0x48)) = fVar1;
        uVar2 = 0;
        if (fVar5 != 0.0) {
          fVar4 = gen_bits2f(((uint)gen_fl2bits(fVar5) >> 0x17 & 0xff) - 0x70);
          (*(float *)(gen_frame + 0x30)) = fVar4;
          if ((int)gen_fl2bits(fVar4) < 0) {
            uVar2 = 0;
          }
          else {
            (*(float *)(gen_frame + 0x40)) = 4.34403e-44;
            pfVar3 = &(*(float *)(gen_frame + 0x30));
            if (0x1e < (int)gen_fl2bits(fVar4)) {
              pfVar3 = &(*(float *)(gen_frame + 0x40));
            }
            uVar2 = (ushort)((uint)gen_fl2bits(fVar5) >> 0x10) & 0x8000 |
                    (ushort)((uint)gen_fl2bits(fVar5) >> 0xd) & 0x3ff |
                    (ushort)((int)gen_fl2bits(*pfVar3) << 10);
            fVar8 = (*(float *)(gen_frame + 0x3c));
          }
        }
        (*(float *)(gen_frame + 0x1c)) = fVar1;
        *puVar9 = uVar2;
        uVar2 = 0;
        if (fVar1 != 0.0) {
          fVar5 = gen_bits2f(((uint)gen_fl2bits(fVar1) >> 0x17 & 0xff) - 0x70);
          (*(float *)(gen_frame + 0x30)) = fVar5;
          if ((int)gen_fl2bits(fVar5) < 0) {
            uVar2 = 0;
          }
          else {
            (*(float *)(gen_frame + 0x40)) = 4.34403e-44;
            pfVar3 = &(*(float *)(gen_frame + 0x30));
            if (0x1e < (int)gen_fl2bits(fVar5)) {
              pfVar3 = &(*(float *)(gen_frame + 0x40));
            }
            uVar2 = (ushort)((uint)gen_fl2bits(fVar1) >> 0x10) & 0x8000 |
                    (ushort)((uint)gen_fl2bits(fVar1) >> 0xd) & 0x3ff |
                    (ushort)((int)gen_fl2bits(*pfVar3) << 10);
            fVar8 = (*(float *)(gen_frame + 0x3c));
          }
        }
        puVar9[1] = uVar2;
        fVar7 = gen_bits2f((int)gen_fl2bits(fVar7) + 1);
        puVar9 = puVar9 + 2;
        this_00 = (*(undefined * PTR32 *)(gen_frame + 0x18));
      } while ((uint)gen_fl2bits(fVar7) < (uint)gen_fl2bits(fVar8));
    }
    uVar6 = F_004d6e60(this_00,0);
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar8)));
    fVar10 = (float10)(int)gen_fl2bits(fVar8);
    if ((int)gen_fl2bits(fVar8) < 0) {
      fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)fVar10)));
    fVar10 = (float10)(float)fVar10;
    fVar11 = fVar10 * (float10)(*(float *)(gen_frame + 0x38));
    *(float *)((int)this + 0x94) =
         ((float)GEN_TOF(((float10)REFG(double, 0x1088108) / fVar10 - ((float10)(*(float *)(gen_frame + 0x34)) * (float10)(*(float *)(gen_frame + 0x44))) / fVar11)));
    *(float *)((int)this + 0x98) = (float)((float10)(*(float *)(gen_frame + 0x34)) / fVar11);
  }
  return uVar6;
}

/* ref: FUN_0067ca70 */
uint F_0067ca70(unsigned int gen_a0)
{
  GEN_ENTER(0x67ca70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  uint * puVar6;
  
  uVar1 = *(undefined4 *)((int)this + 0x60);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + 0x68);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x6c);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)((int)this + 0x70);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 0x74);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 0x88);
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)this + 0x8c);
  (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)((int)this + 0x94);
  (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)((int)this + 0x98);
  F_006793b0(this,uVar1,&(*(undefined4 *)(gen_frame + 0x4)),0x30);
  (*(uint *)(gen_frame + 0x38)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x34)) = 0x1ff;
  puVar6 = &(*(uint *)(gen_frame + 0x38));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar6 = &(*(uint *)(gen_frame + 0x34));
  }
  uVar2 = *puVar6;
  (*(uint *)(gen_frame + 0x38)) = uVar2;
  (*(uint *)(gen_frame + 0x34)) = 0xfffffe00;
  puVar6 = &(*(uint *)(gen_frame + 0x34));
  if (-0x201 < (int)uVar2) {
    puVar6 = &(*(uint *)(gen_frame + 0x38));
  }
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x5c) * 4 + 0x50)));
  iVar4 = *(int *)((int)this + 100);
  (*(uint *)(gen_frame + 0x34)) = (*puVar6 & 0x3ff) << 10 | 0x26a;
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
  }
  iVar4 = iVar4 * 0xc;
  if (*((int *)GEN_TOP((iVar4 + 4 + *(int *)((int)this + 0x10)))) != 0) {
    piVar5 = *((int * PTR32 *)GEN_TOP((iVar4 + 4 + *(int *)((int)this + 0x10))));
    ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
  }
  *((int * PTR32 *)GEN_TOP((iVar4 + 4 + *(int *)((int)this + 0x10)))) = piVar3;
  *((uint *)GEN_TOP((iVar4 + 8 + *(int *)((int)this + 0x10)))) = (*(uint *)(gen_frame + 0x34)) & 0xfffffff;
  return (*(uint *)(gen_frame + 0x34)) & 0xfffffff;
}

/* ref: Client::Graphics::PostEffect::PostEffectFogShader::vf5 */
uint F_0067cba0(unsigned int gen_a0)
{
  GEN_ENTER(0x67cba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0067ca70(this);
  uVar1 = F_0067acb0((undefined *)this);
  return uVar1;
}

/* ref: FUN_0067cbb0 */
uint F_0067cbb0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x67cbb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  float in_xmm2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  int * piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  float fVar7;
  float * pfVar8;
  float10 fVar9;
  
  fVar1 = *(float *)((int)in_ecx + 0x6c);
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)in_ecx + *(int *)((int)in_ecx + 0x5c) * 4 + 0x50)));
  (*(float *)(gen_frame + 0x18)) = fVar1;
  fVar7 = gen_bits2f(piVar2[6]);
  (*(float *)(gen_frame + 0xc)) = fVar7;
  fVar9 = (float10)(int)gen_fl2bits(fVar7);
  if ((int)gen_fl2bits(fVar7) < 0) {
    fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar7 = gen_bits2f((int)gen_fl2bits(fVar7) + -1);
  (*(float *)(gen_frame + 0x10)) = (float)fVar9;
  (*(float *)(gen_frame + 0xc)) = fVar7;
  fVar9 = (float10)(int)gen_fl2bits(fVar7);
  if ((int)gen_fl2bits(fVar7) < 0) {
    fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0xc)) = (float)fVar9;
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)in_ecx + 0x78) / (float10)fVar1)));
  (*(float *)(gen_frame + 0x14)) = fVar1;
  fVar9 = F_00c4d440(in_xmm2,(float10)fVar1);
  (*(float *)(gen_frame + 0x14)) = (float)fVar9;
  uVar3 = *(undefined4 *)((int)in_ecx + 0x60);
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xc)) / ((float10)(*(float *)(gen_frame + 0x10)) * (float10)(float)fVar9))));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)REFG(double, 0x1088108) / (float10)(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x8)) = (float)((float10)1 / (float10)(*(float *)(gen_frame + 0x18)));
  F_006793b0(in_ecx,uVar3,&(*(float *)(gen_frame + 0x0)),0xc);
  (*(float *)(gen_frame + 0x18)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0));
  (*(float *)(gen_frame + 0xc)) = 7.16064e-43;
  pfVar8 = &(*(float *)(gen_frame + 0x18));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    pfVar8 = &(*(float *)(gen_frame + 0xc));
  }
  fVar1 = *pfVar8;
  (*(float *)(gen_frame + 0x18)) = fVar1;
  (*(float *)(gen_frame + 0xc)) = -NAN;
  pfVar8 = &(*(float *)(gen_frame + 0xc));
  if (-0x201 < (int)gen_fl2bits(fVar1)) {
    pfVar8 = &(*(float *)(gen_frame + 0x18));
  }
  iVar4 = *piVar2;
  iVar5 = *(int *)((int)in_ecx + 100);
  (*(float *)(gen_frame + 0xc)) = gen_bits2f(((uint)gen_fl2bits(*pfVar8) & 0x3ff) << 10 | 0x26a);
  ((code *)*(gen_code32 *)(iVar4 + 8))(piVar2);
  iVar5 = iVar5 * 0xc;
  if (*((int *)GEN_TOP((iVar5 + 4 + *(int *)((int)in_ecx + 0x10)))) != 0) {
    piVar6 = *((int * PTR32 *)GEN_TOP((iVar5 + 4 + *(int *)((int)in_ecx + 0x10))));
    ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
  }
  *((int * PTR32 *)GEN_TOP((iVar5 + 4 + *(int *)((int)in_ecx + 0x10)))) = piVar2;
  *((uint *)GEN_TOP((iVar5 + 8 + *(int *)((int)in_ecx + 0x10)))) = (uint)gen_fl2bits((*(float *)(gen_frame + 0xc))) & 0xfffffff;
  return (uint)gen_fl2bits((*(float *)(gen_frame + 0xc))) & 0xfffffff;
}

/* ref: Client::Graphics::PostEffect::PostEffectDofCocShader::vf5 */
uint F_0067cce0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x67cce0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  float in_xmm2 = (float)gen_a1;
  uint uVar1;
  
  F_0067cbb0(in_ecx,in_xmm2);
  uVar1 = F_0067acb0(in_ecx);
  return uVar1;
}

/* ref: Client::Graphics::PostEffect::PostEffectCameraVelocityShader::vf3 */
byte F_0067ccf0(unsigned int gen_a0)
{
  GEN_ENTER(0x67ccf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_0067aa50((undefined *)this);
  if (bVar1 != 0) {
    this[0x90] = (undefined1)0x0;
  }
  return bVar1;
}

/* ref: FUN_0067cd10 */
byte F_0067cd10(unsigned int gen_a0)
{
  GEN_ENTER(0x67cd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  undefined2 * puVar4;
  uint uVar5;
  float10 fVar6;
  double dVar7;
  
  bVar2 = F_00678040(this);
  if (bVar2 != 0) {
    F_004d58e0(((undefined1 *)(gen_frame + 0xc)),0,0,0x32,0);
    uVar3 = F_004deb40(REFG(void * PTR32, 0x1370b90),((undefined1 *)(gen_frame + 0xc)),1);
    *(uint *)((int)this + 0xc) = uVar3;
    if (uVar3 != 0) {
      this_00 = (undefined *)F_004dcc90(800,4,0xb);
      *(undefined * PTR32 *)((int)this + 0x10) = this_00;
      if (this_00 != (undefined *)0x0) {
        uVar3 = F_004d68c0(this_00,0,*(undefined4 *)((int)this_00 + 0x18),2);
        if (uVar3 != 0) {
          uVar5 = 0;
          do {
            dVar7 = F_004a4fe0();
            fVar1 = (float)((float10)dVar7 * (float10)*(double *)&REFG(undefined, 0x10944e0) -
                           (float10)REFG(double, 0x1088130));
            (*(float *)(gen_frame + 0x14)) = fVar1;
            fVar6 = (float10)fVar1;
            if ((float10)1 < fVar6) {
              (*(float *)(gen_frame + 0x14)) = (float)(fVar6 * fVar6);
            }
            dVar7 = F_004a4fe0();
            puVar4 = (undefined2 *)
                     F_004d4590(((undefined1 *)(gen_frame + 0x1a)),GEN_TOF(gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x14))) ^ REFG(uint, 0x10920d0))));
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 0)) = *puVar4;
            (*(undefined4 *)(gen_frame + 0x10)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 2)),*puVar4);
            puVar4 = (undefined2 *)F_004d4590(((undefined1 *)(gen_frame + 0x18)),(float)dVar7);
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 2)) = *puVar4;
            (*(undefined4 *)(gen_frame + 0x10)) = CONCAT22(*puVar4,(undefined2)(*(undefined4 *)(gen_frame + 0x10)));
            *(undefined4 *)(uVar3 + uVar5 * 4) = (*(undefined4 *)(gen_frame + 0x10));
            uVar5 = uVar5 + 1;
          } while (uVar5 < 200);
          F_004d6970(*(undefined * PTR32 *)((int)this + 0x10));
          uVar3 = F_004dcd60(0x30,2,0xb);
          *(uint *)((int)this + 0x14) = uVar3;
          uVar3 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))),"cLensFlareParam");
          *(uint *)((int)this + 0x20) = uVar3;
          uVar3 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x20))),"sToneMap");
          *(uint *)((int)this + 0x24) = uVar3;
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_0067ce60 */
uint F_0067ce60(unsigned int gen_a0)
{
  GEN_ENTER(0x67ce60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined * this_00;
  int iVar8;
  undefined4 * puVar9;
  float * pfVar10;
  uint uVar11;
  float10 fVar12;
  
  iVar7 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  this_00 = *(undefined * PTR32 *)(iVar7 + 0x1a8);
  uVar11 = (int)this + 0x1c;
  if (*(int *)((int)this + 0x1c) != 0) {
    F_004daa40(this_00,1,uVar11,0,0,0);
    uVar11 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x98)));
    if ((uVar11 != 0) && (*((int *)GEN_TOP((*(int *)((int)this + 8) + 0x9c))) != 0)) {
      *(undefined4 *)((int)this_00 + 0x60) = 0;
      *(uint *)((int)this_00 + 0x40) = uVar11;
      *(undefined4 *)((int)this_00 + 0x44) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x9c)));
      *(undefined4 *)((int)this_00 + 0x60) = 0;
      puVar9 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x14),0,0,2);
      uVar11 = 0;
      if (puVar9 != (undefined4 *)0x0) {
        uVar1 = *(undefined4 *)((int)this + 0x2c);
        uVar2 = *(undefined4 *)((int)this + 0x34);
        uVar3 = *(undefined4 *)((int)this + 0x58);
        *puVar9 = *(undefined4 *)((int)this + 0x28);
        puVar9[1] = uVar1;
        puVar9[2] = uVar2;
        puVar9[3] = uVar3;
        fVar4 = *(float *)((int)this + 0x30);
        uVar1 = *(undefined4 *)((int)this + 0x44);
        (*(float *)(gen_frame + 0x8)) = fVar4;
        fVar12 = (float10)fVar4;
        fVar4 = ((float)GEN_TOF((fVar12 * (float10)*(float *)((int)this + 0x3c))));
        (*(float *)(gen_frame + 0x8)) = fVar4;
        fVar5 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x40) * fVar12)));
        (*(float *)(gen_frame + 0x4)) = fVar5;
        fVar6 = *(float *)((int)this + 0x38);
        puVar9[7] = uVar1;
        puVar9[4] = (undefined4)gen_fl2bits((float)(fVar12 * (float10)fVar6));
        puVar9[5] = (undefined4)gen_fl2bits(fVar4);
        puVar9[6] = (undefined4)gen_fl2bits(fVar5);
        uVar1 = *(undefined4 *)((int)this + 0x4c);
        uVar2 = *(undefined4 *)((int)this + 0x50);
        uVar3 = *(undefined4 *)((int)this + 0x54);
        puVar9[8] = *(undefined4 *)((int)this + 0x48);
        puVar9[9] = uVar1;
        puVar9[10] = uVar2;
        puVar9[0xb] = uVar3;
        uVar11 = *(uint *)((int)this + 0x14);
        *(undefined4 *)(uVar11 + 0x24) = 0;
        *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x20) * 4 + 0xa8))) =
             *(undefined4 *)((int)this + 0x14);
        if (*(int *)((int)this + 0x18) != 0) {
          (*(float *)(gen_frame + 0x8)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0));
          (*(float *)(gen_frame + 0x4)) = 7.16064e-43;
          pfVar10 = &(*(float *)(gen_frame + 0x8));
          if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
            pfVar10 = &(*(float *)(gen_frame + 0x4));
          }
          fVar4 = *pfVar10;
          (*(float *)(gen_frame + 0x8)) = fVar4;
          (*(float *)(gen_frame + 0x4)) = -NAN;
          pfVar10 = &(*(float *)(gen_frame + 0x4));
          if (-0x201 < (int)gen_fl2bits(fVar4)) {
            pfVar10 = &(*(float *)(gen_frame + 0x8));
          }
          *((uint *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x24) * 8 + 0x2ac))) =
               ((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x25;
          *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x24) * 8 + 0x2a8))) =
               *(undefined4 *)((int)this + 0x18);
          *(undefined4 *)((int)this_00 + 0x4c) = *(undefined4 *)((int)this + 0xc);
          uVar1 = *(undefined4 *)((int)this + 0x10);
          *(uint *)((int)this_00 + 0x6c) = *(uint *)((int)this_00 + 0x6c) & 0x800000ff;
          *(undefined4 *)((int)this_00 + 0x68) = uVar1;
          *(undefined1 *)((int)this_00 + 0x6c) = 4;
          *(uint *)((int)this_00 + 0x6c) = *(uint *)((int)this_00 + 0x6c) & 0x7fffffff;
          *((uint *)GEN_TOP((*(int *)(iVar7 + 0x1a8) + 0x3c))) = REFG(undefined4, 0x1302370) & 0x7fffffff;
          uVar11 = REFG(undefined4, 0x130236c);
          iVar8 = *(int *)(iVar7 + 0x1a8);
          *(uint *)(iVar8 + 0x58) = REFG(undefined4, 0x1302368) & 0xfe000000;
          *(uint *)(iVar8 + 0x5c) = uVar11 & 0xfffffffc;
          *((uint *)GEN_TOP((*(int *)(iVar7 + 0x1a8) + 0x50))) = REFG(undefined4, 0x130235c) & 0x1f;
          *(undefined4 *)((int)this_00 + 0x38) = 0x7080111;
          uVar11 = F_0066c5a0(this_00,1,0,200);
        }
      }
    }
  }
  return uVar11;
}

/* ref: FUN_0067d0a0 */
byte F_0067d0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x67d0a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  
  if (*(int *)((int)this + 0xc) == 0) {
    return 0;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 8))))(*(int * PTR32 *)((int)this + 0xc));
  bVar1 = F_0067a050((undefined *)((int)this + 0x10),1);
  if (bVar1 != 0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(char * PTR32 *)(gen_frame + 0x8)) = "shader/posteffect/TextureDebug.shcd";
    uVar2 = F_00688330((undefined *)((int)this + 0x10),0,&(*(undefined4 *)(gen_frame + 0x4)),1);
    if (uVar2 != 0) {
      bVar1 = F_00677f90((undefined *)((int)this + 0x10));
      if (bVar1 != 0) {
        this_00 = (undefined *)((int)this + 0x30);
        bVar1 = F_0067a050(this_00,1);
        if (bVar1 != 0) {
          (*(undefined4 *)(gen_frame + 0x4)) = 0;
          (*(char * PTR32 *)(gen_frame + 0x8)) = "shader/posteffect/Default.shcd";
          uVar2 = F_00688330(this_00,0,&(*(undefined4 *)(gen_frame + 0x4)),1);
          if (uVar2 != 0) {
            bVar1 = F_00677f90(this_00);
            return bVar1 != 0;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_0067d150 */
byte F_0067d150(unsigned int gen_a0)
{
  GEN_ENTER(0x67d150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x4)) = "shader/posteffect/Clear.shcd";
  (*(undefined4 *)(gen_frame + 0x8)) = 3;
  (*(char * PTR32 *)(gen_frame + 0xc)) = "shader/posteffect/GatherDepthNormalZ.shcd";
  uVar1 = F_0067a7a0((int)this + 0x1508);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  do {
    uVar1 = F_00688330((undefined *)((int)this + 0x2f4),uVar3,puVar2,0);
    if (uVar1 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return 0;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 2;
  } while (uVar3 < 3);
  *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) & 0xff7dffff;
  *(uint *)(REFG(int, 0x137127c) + 0x11e44) = *(uint *)(REFG(int, 0x137127c) + 0x11e44) & 0xfffffff7;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 1;
}

/* ref: FUN_0067d1f0 */
uint F_0067d1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x67d1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = 0;
  uVar6 = 1;
  do {
    if ((uVar3 != 8) && (uVar3 == 0xd)) {
      *(undefined1 *)(REFG(int, 0x13759f8) + 0x288) = 0;
    }
    iVar1 = uVar3 + 1;
    uVar4 = uVar6 << 1 | (uint)((int)uVar6 < 0);
    *(uint *)((int)this + 0x1514) =
         ~uVar6 & *(uint *)((int)this + 0x1514) | 0 << ((byte)uVar3 & 0x1f);
    if ((iVar1 != 8) && (iVar1 == 0xd)) {
      *(undefined1 *)(REFG(int, 0x13759f8) + 0x288) = 0;
    }
    iVar2 = uVar3 + 2;
    uVar5 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    *(uint *)((int)this + 0x1514) =
         ~uVar4 & *(uint *)((int)this + 0x1514) | 0 << ((byte)iVar1 & 0x1f);
    if ((iVar2 != 8) && (iVar2 == 0xd)) {
      *(undefined1 *)(REFG(int, 0x13759f8) + 0x288) = 0;
    }
    uVar3 = uVar3 + 3;
    uVar6 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    *(uint *)((int)this + 0x1514) =
         ~uVar5 & *(uint *)((int)this + 0x1514) | 0 << ((byte)iVar2 & 0x1f);
  } while (uVar3 < 0x12);
  return (uint)this;
}

/* ref: FUN_0067d2b0 */
uint F_0067d2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x67d2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  int * piVar7;
  bool bVar8;
  
  uVar3 = 0;
  if (*(byte *)((int)this + 0x40) != 0) {
    piVar7 = *(int * PTR32 *)((int)this + 0xc);
    do {
      iVar5 = *piVar7;
      if (iVar5 != -1) {
        iVar2 = *((int *)GEN_TOP((*(int *)(REFG(int, 0x1370b90) + 0x1c) + 0x2c)));
        pbVar6 = (byte *)(iVar2 + iVar5 * 0x1c);
        pbVar4 = param_1;
        if (0xf < *(uint *)(iVar2 + 0x14 + iVar5 * 0x1c)) {
          pbVar6 = *(byte * PTR32 *)pbVar6;
        }
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_0067d310: ;
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_0067d315;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_0067d310;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_0067d315: ;
        if (iVar5 == 0) {
          return uVar3;
        }
      }
      uVar3 = uVar3 + 1;
      piVar7 = piVar7 + 2;
    } while (uVar3 < *(byte *)((int)this + 0x40));
  }
  return 0xffffffff;
}

/* ref: FUN_0067d330 */
ulonglong F_0067d330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x67d330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  byte * in_EDX = 0;
  int * piVar6;
  bool bVar7;
  
  uVar3 = 0;
  if (*(byte *)((int)this + 0x41) != 0) {
    piVar6 = *(int * PTR32 *)((int)this + 0x10);
    do {
      iVar5 = *piVar6;
      if (iVar5 != -1) {
        iVar2 = *((int *)GEN_TOP((*(int *)(REFG(int, 0x1370b90) + 0x20) + 0x2c)));
        in_EDX = (byte *)(iVar2 + iVar5 * 0x1c);
        pbVar4 = param_1;
        if (0xf < *(uint *)(iVar2 + 0x14 + iVar5 * 0x1c)) {
          in_EDX = *(byte * PTR32 *)in_EDX;
        }
        do {
          bVar1 = *pbVar4;
          bVar7 = bVar1 < *in_EDX;
          if (bVar1 != *in_EDX) {
LAB_0067d390: ;
            iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_0067d395;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar7 = bVar1 < in_EDX[1];
          if (bVar1 != in_EDX[1]) goto LAB_0067d390;
          pbVar4 = pbVar4 + 2;
          in_EDX = in_EDX + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_0067d395: ;
        if (iVar5 == 0) goto LAB_0067d3a4;
      }
      uVar3 = uVar3 + 1;
      piVar6 = piVar6 + 3;
    } while (uVar3 < *(byte *)((int)this + 0x41));
  }
  uVar3 = 0xffffffff;
LAB_0067d3a4: ;
  return CONCAT44(in_EDX,uVar3);
}

/* ref: FUN_0067d3b0 */
uint F_0067d3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x67d3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_0067d2b0(this,param_1);
  if (-1 < (int)uVar1) {
    uVar1 = F_006793b0(this,uVar1,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_0067d3e0 */
uint F_0067d3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x67d3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  int * piVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = F_0067d330(this,param_1);
  uVar3 = (uint)uVar4;
  if (-1 < (int)uVar3) {
    if (param_2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
    }
    iVar2 = uVar3 * 0xc;
    if (*((int *)GEN_TOP((iVar2 + 4 + *(int *)((int)this + 0x10)))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 4 + *(int *)((int)this + 0x10))));
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
    *((int * PTR32 *)GEN_TOP((iVar2 + 4 + *(int *)((int)this + 0x10)))) = param_2;
    uVar3 = *(uint *)((int)this + 0x10);
    *(uint *)(iVar2 + 8 + uVar3) = *param_3 & 0xfffffff;
  }
  return uVar3;
}

/* ref: FUN_0067d450 */
uint F_0067d450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x67d450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  int * piVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = F_0067d330(this,param_1);
  uVar3 = (uint)uVar4;
  if (-1 < (int)uVar3) {
    if (param_2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
    }
    iVar2 = uVar3 * 0xc;
    if (*((int *)GEN_TOP((iVar2 + 4 + *(int *)((int)this + 0x10)))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 4 + *(int *)((int)this + 0x10))));
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
    *((int * PTR32 *)GEN_TOP((iVar2 + 4 + *(int *)((int)this + 0x10)))) = param_2;
    uVar3 = *param_3;
    *((uint *)GEN_TOP((iVar2 + 8 + *(int *)((int)this + 0x10)))) = uVar3 & 0xfffffff;
    *(int * PTR32 *)((int)this + 0x14) = param_2;
    return uVar3 & 0xfffffff;
  }
  *(int * PTR32 *)((int)this + 0x14) = param_2;
  return uVar3;
}

/* ref: Client::Graphics::PostEffect::PostEffectRepeatShader::vf3 */
byte F_0067d4d0(unsigned int gen_a0)
{
  GEN_ENTER(0x67d4d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = F_0067aa50((undefined *)this);
  if (bVar1 != 0) {
    *(undefined4 *)(this + 0x58) = 1;
    uVar2 = F_0067d330(this,"sInput");
    *(int *)(this + 0x5c) = (int)uVar2;
  }
  return bVar1;
}

/* ref: Client::Graphics::PostEffect::PostEffectMeasureLumShader::vf3 */
byte F_0067d500(unsigned int gen_a0)
{
  GEN_ENTER(0x67d500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined1 PVar1;
  int * piVar2;
  char cVar3;
  double dVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  int * piVar8;
  int * PTR32 * ppiVar9;
  undefined * pPVar10;
  undefined * pPVar11;
  undefined4 * puVar12;
  int iVar13;
  undefined4 * puVar14;
  ulonglong uVar15;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  bVar5 = true;
  pPVar11 = this + 0x60;
  iVar13 = 3;
  do {
    if ((bVar5) && (uVar7 = ((code *)*(gen_code32 *)(*(int *)pPVar11 + 0xc))(pPVar11), (char)uVar7 != '\0')) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    pPVar11 = pPVar11 + 0x50;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  bVar6 = 0;
  if (bVar5) {
    bVar6 = F_0067aa50((undefined *)this);
    (*(byte *)(gen_frame + 0x3f)) = bVar6;
    if (bVar6 != 0) {
      piVar8 = *(int * PTR32 *)(this + 0x5c);
      (*(bool *)(gen_frame + 0x47)) = (*(byte *)(REFG(int, 0x137128c) + 0x1508) & 0x18) != 0;
      if (piVar8 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8);
      }
      piVar2 = *(int * PTR32 *)(this + 0x18);
      pPVar11 = this + 0x18;
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      }
      *(int * PTR32 *)pPVar11 = piVar8;
      this[0x42] = (undefined1)0x0;
      uVar7 = 0;
      do {
        if (*(int *)pPVar11 == 0) break;
        cVar3 = (char)uVar7;
        uVar7 = uVar7 + 1;
        pPVar11 = pPVar11 + 4;
        this[0x42] = (undefined1)(cVar3 + '\x01');
      } while (uVar7 < 4);
      PVar1 = this[0x48];
      dVar4 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
      bVar6 = (*(bool *)(gen_frame + 0x47)) & 1;
      ((undefined4 *)(gen_frame + 0x4))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x4))[0], REFG(float, 0x1099848));
      ((undefined4 *)(gen_frame + 0x4))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x4))[1], REFG(float, 0x1099848));
      ((undefined4 *)(gen_frame + 0x4))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x4))[2], REFG(float, 0x1094808));
      ((undefined4 *)(gen_frame + 0x4))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x4))[3], REFG(float, 0x1099848));
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1099848);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1094808);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x1094808);
      (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1094808);
      (*(bool *)(gen_frame + 0x47)) = (bool)bVar6;
      this[0x48] = (undefined1)((byte)PVar1 & 0xfe | bVar6);
      *(undefined4 *)(this + 0x34) = 0;
      puVar12 = ((undefined4 *)(gen_frame + 0x4));
      puVar14 = ((undefined4 *)(gen_frame + 0x48));
      for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)(int)dVar4;
      (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)0x1ff;
      (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)0xfffffe00;
      (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)0x20;
      (*(undefined * PTR32 *)(gen_frame + 0x38)) = this + 0x58;
      pPVar11 = this + 0x70;
      (*(int *)(gen_frame + 0x34)) = 3;
      do {
        (*(int * PTR32 *)(gen_frame + 0x40)) = (*(int * PTR32 *)(gen_frame + 0x30));
        ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x40));
        if (0x1fe < (int)(*(int * PTR32 *)(gen_frame + 0x30))) {
          ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x28));
        }
        piVar8 = *ppiVar9;
        (*(int * PTR32 *)(gen_frame + 0x40)) = piVar8;
        ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x24));
        if (-0x201 < (int)piVar8) {
          ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x40));
        }
        piVar8 = *ppiVar9;
        (*(int * PTR32 *)(gen_frame + 0x40)) = *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 4);
        uVar15 = F_0067d330(pPVar11 + -0x10,"sToneMap");
        if (-1 < (int)uVar15) {
          if ((*(int * PTR32 *)(gen_frame + 0x40)) != (int *)0x0) {
            ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x40)) + 8))((*(int * PTR32 *)(gen_frame + 0x40)));
          }
          iVar13 = (int)uVar15 * 0xc;
          if (*(int *)(*(int *)pPVar11 + 4 + iVar13) != 0) {
            piVar2 = *(int * PTR32 *)(*(int *)pPVar11 + 4 + iVar13);
            ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
          }
          *(int * PTR32 *)(*(int *)pPVar11 + 4 + iVar13) = (*(int * PTR32 *)(gen_frame + 0x40));
          *(uint *)(*(int *)pPVar11 + 8 + iVar13) = ((uint)piVar8 & 0x3ff) << 10 | 0x265;
        }
        piVar8 = *(int * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x38));
        if (piVar8 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8);
        }
        piVar2 = *(int * PTR32 *)(pPVar11 + 8);
        if (piVar2 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
        }
        *(int * PTR32 *)(pPVar11 + 8) = piVar8;
        pPVar11[0x32] = (undefined1)0x0;
        uVar7 = 0;
        pPVar10 = pPVar11 + 8;
        do {
          if (*(int *)pPVar10 == 0) break;
          cVar3 = (char)uVar7;
          uVar7 = uVar7 + 1;
          pPVar10 = pPVar10 + 4;
          pPVar11[0x32] = (undefined1)(cVar3 + '\x01');
        } while (uVar7 < 4);
        *(int *)(pPVar11 + 0x24) = 0;
        pPVar11[0x38] = (undefined1)((byte)pPVar11[0x38] & 0xfe | (*(bool *)(gen_frame + 0x47)));
        iVar13 = *(int *)(pPVar11 + -8);
        piVar8 = ((int *)GEN_TOP((*(int *)(iVar13 + 0x24) << 4)));
        (*(int * PTR32 *)(gen_frame + 0x40)) = piVar8;
        ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x2c));
        if (piVar8 < (int *)0x21) {
          ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x40));
        }
        F_00c46aa0(iVar13 + 0x28,((undefined4 *)(gen_frame + 0x48)),*ppiVar9);
        (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)(gen_frame + 0x38)) + -4;
        pPVar11 = pPVar11 + 0x50;
        iVar13 = (*(int *)(gen_frame + 0x34)) + -1;
        (*(int *)(gen_frame + 0x34)) = iVar13;
        bVar6 = (*(byte *)(gen_frame + 0x3f));
      } while (iVar13 != 0);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return bVar6;
}

/* ref: Client::Graphics::PostEffect::PostEffectAdaptLumShader::vf3 */
byte F_0067d780(unsigned int gen_a0)
{
  GEN_ENTER(0x67d780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x80) + 0xc))))(this + 0x80);
  if ((char)uVar1 != '\0') {
    F_0067aa50((undefined *)this);
    uVar2 = F_0067d330(this,"sAdaptedLum");
    this[0xd0] = SUB81(uVar2,0);
    this[0xd1] = (undefined1)0x1;
    if ((*(byte *)(REFG(int, 0x137128c) + 0x1508) & 0x18) != 0) {
      this[200] = (undefined1)((byte)this[200] | 1);
      *(undefined4 *)(this + 0xb4) = 0;
    }
  }
  return (byte)this[0x48] >> 3 & 1;
}

/* ref: Client::Graphics::PostEffect::PostEffectAdaptLumShader::vf5 */
byte F_0067d7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x67d7f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float * pfVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  undefined4 uVar5;
  char cVar7;
  float fVar8;
  undefined1 PVar9;
  uint uVar10;
  int iVar11;
  int * PTR32 * ppiVar12;
  undefined * pPVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  ulonglong uVar17;
  
  (*(float *)(gen_frame + 0x30)) = gen_bits2f(REFG(int, 0x137128c) + 0x1518);
  if (this[0xd1] == (undefined1)0x0) {
    piVar3 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) *
                           (float10)*(float *)(REFG(int, 0x137128c) + 0x1644)))))));
    (*(int * PTR32 *)(gen_frame + 0x38)) = piVar3;
    piVar3 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar3))) * (float10)*(double *)&REFG(undefined, 0x1088070)))));
    (*(int * PTR32 *)(gen_frame + 0x38)) = piVar3;
    fVar14 = ((float10)GEN_TOD(pow((float10)*(double *)&REFG(undefined, 0x10ab998),(float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar3))))));
    (*(int * PTR32 *)(gen_frame + 0x38)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar14)));
    fVar14 = (float10)1 - (float10)(float)fVar14;
  }
  else {
    fVar14 = (float10)1;
  }
  (*(float *)(gen_frame + 0x24)) = (float)fVar14;
  (*(float *)(gen_frame + 0x1c)) = *(float *)(REFG(int, 0x137128c) + 0x164c);
  (*(float *)(gen_frame + 0x20)) = gen_bits2f(*(undefined4 *)(REFG(int, 0x137128c) + 0x1650));
  (*(float *)(gen_frame + 0x28)) = gen_bits2f(*(undefined4 *)(REFG(int, 0x137128c) + 0x1648));
  uVar10 = F_0067d2b0(this,"cAdaptLumParam");
  if (-1 < (int)uVar10) {
    F_006793b0(this,uVar10,&(*(float *)(gen_frame + 0x1c)),0x10);
  }
  piVar3 = (int *)(int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar3;
  (*(int * PTR32 *)(gen_frame + 0x38)) = piVar3;
  (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)0x1ff;
  ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x38));
  if (0x1fe < (int)piVar3) {
    ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x34));
  }
  piVar3 = *ppiVar12;
  (*(int * PTR32 *)(gen_frame + 0x38)) = piVar3;
  (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)0xfffffe00;
  ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x34));
  if (-0x201 < (int)piVar3) {
    ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x38));
  }
  piVar3 = *(int * PTR32 *)(this + 0x60);
  PVar9 = this[0xd0];
  piVar4 = *ppiVar12;
  (*(int * PTR32 *)(gen_frame + 0x34)) = piVar3;
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
  }
  iVar11 = (uint)(byte)PVar9 * 0xc;
  if (*((int *)GEN_TOP((iVar11 + 4 + *(int *)(this + 0x10)))) != 0) {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar11 + 4 + *(int *)(this + 0x10))));
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  }
  *((int * PTR32 *)GEN_TOP((iVar11 + 4 + *(int *)(this + 0x10)))) = (*(int * PTR32 *)(gen_frame + 0x34));
  *((uint *)GEN_TOP((iVar11 + 8 + *(int *)(this + 0x10)))) = ((uint)piVar4 & 0x3ff) << 10 | 0x25;
  piVar3 = *(int * PTR32 *)(this + 0x5c);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
  }
  piVar4 = *(int * PTR32 *)(this + 0x18);
  pPVar13 = this + 0x18;
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
  }
  *(int * PTR32 *)pPVar13 = piVar3;
  this[0x42] = (undefined1)0x0;
  uVar10 = 0;
  do {
    if (*(int *)pPVar13 == 0) break;
    cVar7 = (char)uVar10;
    uVar10 = uVar10 + 1;
    pPVar13 = pPVar13 + 4;
    this[0x42] = (undefined1)(cVar7 + '\x01');
  } while (uVar10 < 4);
  F_0067acb0((undefined *)this);
  fVar8 = (*(float *)(gen_frame + 0x30));
  pfVar1 = (float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x30))) + 0x13c);
  puVar2 = (undefined4 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x30))) + 0x144);
  (*(float *)(gen_frame + 0x30)) = *pfVar1;
  fVar14 = (float10)*pfVar1;
  iVar11 = *((int *)GEN_TOP((*(int *)(this + 0x7c) + 0x18)));
  (*(undefined4 *)(gen_frame + 0xc)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)gen_fl2bits(fVar8) + 0x140);
  (*(float *)(gen_frame + 0x30)) = gen_bits2f(iVar11);
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1088068);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)1 / fVar14);
  fVar15 = (float10)iVar11;
  if (iVar11 < 0) {
    fVar15 = fVar15 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x30)) = (float)fVar15;
  iVar11 = iVar11 + -1;
  fVar15 = (float10)(float)fVar15;
  (*(float *)(gen_frame + 0x30)) = gen_bits2f(iVar11);
  fVar16 = (float10)REFG(double, 0x1088108) / fVar15;
  (*(float *)(gen_frame + 0x1c)) = (float)fVar16;
  (*(float *)(gen_frame + 0x20)) = (float)((float10)1 - fVar16);
  fVar16 = (float10)iVar11;
  if (iVar11 < 0) {
    fVar16 = fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x30)) = (float)fVar16;
  fVar16 = (float10)(float)fVar16;
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((fVar15 * fVar14) / fVar16)));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((fVar14 * (float10)REFG(double, 0x1088108)) / fVar16)));
  uVar10 = F_0067d2b0(this + 0x80,"cToneMapParam");
  if (-1 < (int)uVar10) {
    F_006793b0(this + 0x80,uVar10,&(*(undefined4 *)(gen_frame + 0xc)),0x20);
  }
  piVar3 = (*(int * PTR32 *)(gen_frame + 0x2c));
  (*(int * PTR32 *)(gen_frame + 0x38)) = (*(int * PTR32 *)(gen_frame + 0x2c));
  (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)0x1ff;
  ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x38));
  if (0x1fe < (int)piVar3) {
    ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x2c));
  }
  piVar3 = *ppiVar12;
  (*(int * PTR32 *)(gen_frame + 0x38)) = piVar3;
  (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)0xfffffe00;
  ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x2c));
  if (-0x201 < (int)piVar3) {
    ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x38));
  }
  (*(int * PTR32 *)(gen_frame + 0x2c)) = ((int *)GEN_TOP((((uint)*ppiVar12 & 0x3ff) << 10 | 0x25)));
  (*(int * PTR32 *)(gen_frame + 0x38)) = *(int * PTR32 *)(this + 0x5c);
  uVar17 = F_0067d330(this + 0x80,"sAdaptedLum");
  if (-1 < (int)uVar17) {
    if ((*(int * PTR32 *)(gen_frame + 0x38)) != (int *)0x0) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x38)) + 8))((*(int * PTR32 *)(gen_frame + 0x38)));
    }
    iVar11 = (int)uVar17 * 0xc;
    if (*((int *)GEN_TOP((iVar11 + 4 + *(int *)(this + 0x90)))) != 0) {
      piVar3 = *((int * PTR32 *)GEN_TOP((iVar11 + 4 + *(int *)(this + 0x90))));
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    }
    *((int * PTR32 *)GEN_TOP((iVar11 + 4 + *(int *)(this + 0x90)))) = (*(int * PTR32 *)(gen_frame + 0x38));
    *((uint *)GEN_TOP((iVar11 + 8 + *(int *)(this + 0x90)))) = (uint)(*(int * PTR32 *)(gen_frame + 0x2c)) & 0xfffffff;
  }
  piVar3 = *(int * PTR32 *)(this + 0x7c);
  (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar3;
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int * PTR32 *)(this + 0x98);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  }
  *(int * PTR32 *)(this + 0x98) = (*(int * PTR32 *)(gen_frame + 0x2c));
  this[0xc2] = (undefined1)0x0;
  uVar10 = 0;
  pPVar13 = this + 0x98;
  do {
    if (*(int *)pPVar13 == 0) break;
    cVar7 = (char)uVar10;
    uVar10 = uVar10 + 1;
    pPVar13 = pPVar13 + 4;
    this[0xc2] = (undefined1)(cVar7 + '\x01');
  } while (uVar10 < 4);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x80) + 0x14))))(this + 0x80);
  uVar5 = *(undefined4 *)(this + 0x60);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 0x5c);
  *(undefined4 *)(this + 0x5c) = uVar5;
  PVar9 = this[0xd1];
  if (PVar9 != (undefined1)0x0) {
    PVar9 = (undefined1)((char)PVar9 - 1);
    this[0xd1] = PVar9;
  }
  return (byte)PVar9;
}

/* ref: Client::Graphics::PostEffect::PostEffectBloomShader::vf5 */
unsigned int F_0067db80(unsigned int gen_a0)
{
  GEN_ENTER(0x67db80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  int * piVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint * puVar7;
  undefined * pPVar8;
  undefined * this_00;
  int iVar9;
  
  piVar1 = *(int * PTR32 *)(this + 0x18);
  F_0067acb0((undefined *)this);
  uVar6 = (uint)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x4)) = uVar6;
  (*(uint *)(gen_frame + 0x8)) = uVar6;
  (*(uint *)(gen_frame + 0x0)) = 0x1ff;
  puVar7 = &(*(uint *)(gen_frame + 0x8));
  if (0x1fe < (int)uVar6) {
    puVar7 = &(*(uint *)(gen_frame + 0x0));
  }
  uVar6 = *puVar7;
  (*(uint *)(gen_frame + 0x8)) = uVar6;
  (*(uint *)(gen_frame + 0x0)) = 0xfffffe00;
  puVar7 = &(*(uint *)(gen_frame + 0x0));
  if (-0x201 < (int)uVar6) {
    puVar7 = &(*(uint *)(gen_frame + 0x8));
  }
  (*(uint *)(gen_frame + 0x0)) = (*puVar7 & 0x3ff) << 10 | 0x265;
  this_00 = this + 0x58;
  F_0067d450(this_00,"sInput",piVar1,&(*(uint *)(gen_frame + 0x0)));
  piVar2 = *(int * PTR32 *)(this + 0x50);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  piVar3 = *(int * PTR32 *)(this + 0x70);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  }
  *(int * PTR32 *)(this + 0x70) = piVar2;
  this[0x9a] = (undefined1)0x0;
  uVar6 = 0;
  pPVar8 = this + 0x70;
  do {
    if (*(int *)pPVar8 == 0) break;
    cVar5 = (char)uVar6;
    uVar6 = uVar6 + 1;
    pPVar8 = pPVar8 + 4;
    this[0x9a] = (undefined1)(cVar5 + '\x01');
  } while (uVar6 < 4);
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x4));
  (*(uint *)(gen_frame + 0x0)) = 0x1ff;
  puVar7 = &(*(uint *)(gen_frame + 0x8));
  if (0x1fe < (int)(*(uint *)(gen_frame + 0x4))) {
    puVar7 = &(*(uint *)(gen_frame + 0x0));
  }
  uVar6 = *puVar7;
  (*(uint *)(gen_frame + 0x8)) = uVar6;
  (*(uint *)(gen_frame + 0x0)) = 0xfffffe00;
  puVar7 = &(*(uint *)(gen_frame + 0x0));
  if (-0x201 < (int)uVar6) {
    puVar7 = &(*(uint *)(gen_frame + 0x8));
  }
  (*(uint *)(gen_frame + 0x0)) = (*puVar7 & 0x3ff) << 10 | 0x265;
  F_0067d450(this + 0xa8,"sInput",*(undefined4 *)(this + 0x50),&(*(uint *)(gen_frame + 0x0)));
  piVar2 = *(int * PTR32 *)(this + 0x54);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  piVar3 = *(int * PTR32 *)(this + 0xc0);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  }
  pPVar8 = this + 0xc0;
  *(int * PTR32 *)pPVar8 = piVar2;
  this[0xea] = (undefined1)0x0;
  uVar6 = 0;
  do {
    if (*(int *)pPVar8 == 0) break;
    cVar5 = (char)uVar6;
    uVar6 = uVar6 + 1;
    pPVar8 = pPVar8 + 4;
    this[0xea] = (undefined1)(cVar5 + '\x01');
  } while (uVar6 < 4);
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x4));
  (*(uint *)(gen_frame + 0x0)) = 0x1ff;
  puVar7 = &(*(uint *)(gen_frame + 0x8));
  if (0x1fe < (int)(*(uint *)(gen_frame + 0x4))) {
    puVar7 = &(*(uint *)(gen_frame + 0x0));
  }
  uVar6 = *puVar7;
  (*(uint *)(gen_frame + 0x8)) = uVar6;
  (*(uint *)(gen_frame + 0x0)) = 0xfffffe00;
  puVar7 = &(*(uint *)(gen_frame + 0x0));
  if (-0x201 < (int)uVar6) {
    puVar7 = &(*(uint *)(gen_frame + 0x8));
  }
  uVar4 = *(undefined4 *)(this + 0x54);
  (*(uint *)(gen_frame + 0x0)) = (*puVar7 & 0x3ff) << 10 | 0x265;
  F_0067d450(this + 0xf8,"sInput",uVar4,&(*(uint *)(gen_frame + 0x0)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  piVar2 = *(int * PTR32 *)(this + 0x110);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  *(int * PTR32 *)(this + 0x110) = piVar1;
  this[0x13a] = (undefined1)0x0;
  uVar6 = 0;
  pPVar8 = this + 0x110;
  do {
    if (*(int *)pPVar8 == 0) break;
    cVar5 = (char)uVar6;
    uVar6 = uVar6 + 1;
    pPVar8 = pPVar8 + 4;
    this[0x13a] = (undefined1)(cVar5 + '\x01');
  } while (uVar6 < 4);
  iVar9 = 3;
  do {
    ((code *)*(gen_code32 *)(*(int *)this_00 + 0x14))(this_00);
    this_00 = this_00 + 0x50;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectStarShader::vf3 */
byte F_0067ddc0(unsigned int gen_a0)
{
  GEN_ENTER(0x67ddc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  
  bVar2 = F_0067aa50((undefined *)this);
  if (bVar2 != 0) {
    uVar3 = F_0067d2b0(this,"cSamplingWeight");
    *(uint *)(this + 0x58) = uVar3;
    uVar4 = F_0067d330(this,"sInput");
    *(int *)(this + 0x5c) = (int)uVar4;
    if (((int)uVar3 < 0) || ((int)uVar4 < 0)) {
      return 0;
    }
    *(undefined4 *)(this + 100) = REFG(float, 0x1087f04);
    *(undefined4 *)(this + 0x68) = REFG(float, 0x10add84);
    uVar1 = REFG(float, 0x10addbc);
    *(undefined4 *)(this + 0x60) = 4;
    *(undefined4 *)(this + 0x6c) = uVar1;
    *(undefined2 *)(this + 0x3e) = 0xffff;
    *(undefined2 *)(this + 0x3c) = 0xffff;
    *(undefined2 *)(this + 0x38) = 0xffff;
  }
  return bVar2;
}

/* ref: Client::Graphics::PostEffect::PostEffectFogShader::vf3 */
byte F_0067de50(unsigned int gen_a0)
{
  GEN_ENTER(0x67de50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  bVar1 = F_0067aa50((undefined *)this);
  if (bVar1 != 0) {
    uVar3 = F_0067d330(this,&REFG(undefined, 0x10ac798));
    *(int *)(this + 100) = (int)uVar3;
    uVar2 = F_0067d2b0(this,"cFogParam");
    *(uint *)(this + 0x60) = uVar2;
    if (((int)uVar3 < 0) && ((int)uVar2 < 0)) {
      return 0;
    }
    *(undefined4 *)(this + 0x5c) = 0;
    *(undefined4 *)(this + 0x68) = 0;
    *(undefined4 *)(this + 0x6c) = 0;
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x7c) = 0;
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x84) = 0;
    *(undefined4 *)(this + 0x80) = 0;
    *(undefined4 *)(this + 0x88) = 0;
    *(undefined4 *)(this + 0x8c) = 0;
  }
  return bVar1;
}

/* ref: Client::Graphics::PostEffect::PostEffectDofCocShader::vf3 */
byte F_0067dee0(unsigned int gen_a0)
{
  GEN_ENTER(0x67dee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  
  bVar3 = F_0067aa50((undefined *)this);
  if (bVar3 != 0) {
    uVar5 = F_0067d330(this,"sWeight");
    *(int *)(this + 100) = (int)uVar5;
    uVar4 = F_0067d2b0(this,"cWeightSamplingParam");
    *(uint *)(this + 0x60) = uVar4;
    uVar2 = REFG(float, 0x1094880);
    uVar1 = REFG(float, 0x1087f04);
    if (((int)uVar5 < 0) && ((int)uVar4 < 0)) {
      return 0;
    }
    *(undefined4 *)(this + 0x68) = REFG(float, 0x1094880);
    *(undefined4 *)(this + 0x70) = uVar2;
    *(undefined4 *)(this + 0x74) = REFG(float, 0x10916ec);
    uVar2 = REFG(float, 0x1094724);
    *(undefined4 *)(this + 0x5c) = 0;
    *(undefined4 *)(this + 0x6c) = uVar1;
    *(undefined4 *)(this + 0x78) = uVar2;
    *(undefined4 *)(this + 0x7c) = uVar1;
    *(undefined4 *)(this + 0x80) = uVar1;
    *(undefined4 *)(this + 0x84) = uVar1;
  }
  return bVar3;
}

/* ref: Client::Graphics::PostEffect::PostEffectCameraVelocityShader::vf5 */
uint F_0067df80(unsigned int gen_a0)
{
  GEN_ENTER(0x67df80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x2b0];
  undefined * this_00;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pPVar3;
  int iVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined * pPVar7;
  
  (*(uint *)(gen_frame + 0x29c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2a0);
  iVar5 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  ((undefined4 *)(gen_frame + 0x250))[0] = *(undefined4 *)(iVar5 + 0x10);
  ((undefined4 *)(gen_frame + 0x250))[1] = *(undefined4 *)(iVar5 + 0x14);
  ((undefined4 *)(gen_frame + 0x250))[2] = *(undefined4 *)(iVar5 + 0x18);
  ((undefined4 *)(gen_frame + 0x250))[3] = 0;
  ((undefined4 *)(gen_frame + 0x250))[4] = *(undefined4 *)(iVar5 + 0x20);
  (*(undefined4 *)(gen_frame + 0x264)) = *(undefined4 *)(iVar5 + 0x24);
  (*(undefined4 *)(gen_frame + 0x26c)) = 0;
  (*(undefined4 *)(gen_frame + 0x268)) = *(undefined4 *)(iVar5 + 0x28);
  (*(undefined4 *)(gen_frame + 0x270)) = *(undefined4 *)(iVar5 + 0x30);
  (*(undefined4 *)(gen_frame + 0x274)) = *(undefined4 *)(iVar5 + 0x34);
  (*(undefined4 *)(gen_frame + 0x27c)) = 0;
  (*(undefined4 *)(gen_frame + 0x278)) = *(undefined4 *)(iVar5 + 0x38);
  (*(undefined4 *)(gen_frame + 0x280)) = *(undefined4 *)(iVar5 + 0x40);
  (*(undefined4 *)(gen_frame + 0x284)) = *(undefined4 *)(iVar5 + 0x44);
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  (*(undefined4 *)(gen_frame + 0x288)) = *(undefined4 *)(iVar5 + 0x48);
  (*(undefined4 *)(gen_frame + 0x28c)) = REFG(float, 0x1087f04);
  puVar1 = (undefined4 *)(iVar5 + 0x50);
  puVar6 = ((undefined4 *)(gen_frame + 0x1d0));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar1 = (undefined4 *)F_004f4970(((undefined4 *)(gen_frame + 0x210)),((undefined4 *)(gen_frame + 0x250)));
  puVar6 = ((undefined4 *)(gen_frame + 0x110));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar1 = (undefined4 *)F_004f4970(((undefined4 *)(gen_frame + 0x210)),((undefined4 *)(gen_frame + 0x1d0)));
  puVar6 = ((undefined4 *)(gen_frame + 0x190));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar6 = puVar6 + 1;
  }
  if ((*(undefined * PTR32 *)(gen_frame + 0x4c))[0x90] == (undefined1)0x0) {
    ((undefined4 *)(gen_frame + 0x0))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[0], REFG(float, 0x1087f04));
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    ((undefined4 *)(gen_frame + 0x0))[3] = 0;
    ((undefined4 *)(gen_frame + 0x0))[4] = 0;
    ((undefined4 *)(gen_frame + 0x0))[5] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[5], REFG(float, 0x1087f04));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = REFG(float, 0x1087f04);
  }
  else {
    puVar1 = (undefined4 *)F_004f0e10(((undefined1 *)(gen_frame + 0x50)),(uint)((undefined4 *)(gen_frame + 0x190)),(uint)((undefined4 *)(gen_frame + 0x110)));
    puVar6 = ((undefined4 *)(gen_frame + 0x150));
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar1 = (undefined4 *)F_004f0e10(((undefined1 *)(gen_frame + 0x90)),(uint)((undefined4 *)(gen_frame + 0x150)),(uint)((*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x50));
    puVar6 = ((undefined4 *)(gen_frame + 0x210));
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar1 = (undefined4 *)F_004f0e10(((undefined1 *)(gen_frame + 0xd0)),(uint)((undefined4 *)(gen_frame + 0x210)),(uint)((undefined4 *)(gen_frame + 0x1d0)));
    puVar6 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
  uVar2 = F_0067d2b0((*(undefined * PTR32 *)(gen_frame + 0x4c)),"cPrev");
  if (-1 < (int)uVar2) {
    F_006793b0(this_00,uVar2,((undefined4 *)(gen_frame + 0x0)),0x40);
  }
  F_0067acb0((undefined *)this_00);
  pPVar3 = (undefined *)(*(undefined * PTR32 *)(gen_frame + 0x4c));
  puVar1 = ((undefined4 *)(gen_frame + 0x250));
  pPVar7 = (undefined *)(this_00 + 0x50);
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pPVar7 = *puVar1;
    puVar1 = puVar1 + 1;
    pPVar7 = pPVar7 + 4;
  }
  *(undefined *)((*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x90) = (undefined1)0x1;
  F_00c47745((*(uint *)(gen_frame + 0x29c)) ^ (uint)(uint)(gen_frame + 0x2a0));
  return (uint)pPVar3;
}

/* ref: Client::Graphics::PostEffect::PostEffectMoonShader::vf3 */
byte F_0067e230(unsigned int gen_a0)
{
  GEN_ENTER(0x67e230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int * PTR32 * ppiVar8;
  int * piVar9;
  ulonglong uVar10;
  
  bVar7 = 0;
  if ((*(int *)(this + 0x50) != 0) && (*((int *)GEN_TOP((*(int *)(this + 0x50) + 0xfc))) != 0)) {
    bVar7 = F_0067aa50((undefined *)this);
    (*(byte *)(gen_frame + 0x1b)) = bVar7;
    if (bVar7 != 0) {
      piVar1 = (int *)(int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar1;
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar1;
      (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x1ff;
      ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x14));
      if (0x1fe < (int)piVar1) {
        ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x10));
      }
      piVar1 = *ppiVar8;
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar1;
      (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0xfffffe00;
      ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x10));
      if (-0x201 < (int)piVar1) {
        ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x14));
      }
      piVar1 = *ppiVar8;
      (*(int * PTR32 *)(gen_frame + 0x14)) = *(int * PTR32 *)(REFG(int, 0x137128c) + 0x14a8);
      uVar10 = F_0067d330(this,&REFG(undefined, 0x10ac7fc));
      if (-1 < (int)uVar10) {
        if ((*(int * PTR32 *)(gen_frame + 0x14)) != (int *)0x0) {
          ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 8))((*(int * PTR32 *)(gen_frame + 0x14)));
        }
        iVar2 = (int)uVar10 * 0xc;
        piVar9 = (*(int * PTR32 *)(gen_frame + 0x14));
        if (*((int *)GEN_TOP((iVar2 + 4 + *(int *)(this + 0x10)))) != 0) {
          piVar9 = *((int * PTR32 *)GEN_TOP((iVar2 + 4 + *(int *)(this + 0x10))));
          ((code *)*(gen_code32 *)(*piVar9 + 0xc))(piVar9);
          piVar9 = (*(int * PTR32 *)(gen_frame + 0x14));
        }
        *((int * PTR32 *)GEN_TOP((iVar2 + 4 + *(int *)(this + 0x10)))) = piVar9;
        *((uint *)GEN_TOP((iVar2 + 8 + *(int *)(this + 0x10)))) = ((uint)piVar1 & 0x3ff) << 10 | 0x265;
      }
      piVar1 = (*(int * PTR32 *)(gen_frame + 0xc));
      (*(int * PTR32 *)(gen_frame + 0x14)) = (*(int * PTR32 *)(gen_frame + 0xc));
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x1ff;
      ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x14));
      if (0x1fe < (int)piVar1) {
        ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0xc));
      }
      piVar1 = *ppiVar8;
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar1;
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0xfffffe00;
      ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0xc));
      if (-0x201 < (int)piVar1) {
        ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x14));
      }
      piVar1 = *ppiVar8;
      (*(int * PTR32 *)(gen_frame + 0x14)) = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x50) + 0xfc)));
      uVar10 = F_0067d330(this,"sMoon");
      if (-1 < (int)uVar10) {
        if ((*(int * PTR32 *)(gen_frame + 0x14)) != (int *)0x0) {
          ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 8))((*(int * PTR32 *)(gen_frame + 0x14)));
        }
        iVar2 = (int)uVar10 * 0xc;
        piVar9 = (*(int * PTR32 *)(gen_frame + 0x14));
        if (*((int *)GEN_TOP((iVar2 + 4 + *(int *)(this + 0x10)))) != 0) {
          piVar9 = *((int * PTR32 *)GEN_TOP((iVar2 + 4 + *(int *)(this + 0x10))));
          ((code *)*(gen_code32 *)(*piVar9 + 0xc))(piVar9);
          piVar9 = (*(int * PTR32 *)(gen_frame + 0x14));
        }
        *((int * PTR32 *)GEN_TOP((iVar2 + 4 + *(int *)(this + 0x10)))) = piVar9;
        *((uint *)GEN_TOP((iVar2 + 8 + *(int *)(this + 0x10)))) = ((uint)piVar1 & 0x3ff) << 10 | 0x26a;
      }
      uVar5 = REFG(float, 0x10928e4);
      uVar3 = REFG(float, 0x1087f04);
      *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0x20))) = REFG(float, 0x1087f04);
      *(undefined4 *)(this + 0x2c) = 0xd;
      uVar6 = REFG(float, 0x109cb08);
      uVar4 = REFG(float, 0x1090708);
      iVar2 = *(int *)(this + 8);
      *(undefined4 *)(iVar2 + 0x10) = uVar5;
      *(undefined4 *)(iVar2 + 0x14) = uVar6;
      *(undefined4 *)(iVar2 + 0x18) = uVar4;
      *(undefined4 *)(iVar2 + 0x1c) = uVar3;
      bVar7 = (*(byte *)(gen_frame + 0x1b));
    }
  }
  return bVar7;
}

/* ref: Client::Graphics::PostEffect::PostEffectMoonShader::vf5 */
uint F_0067e430(unsigned int gen_a0)
{
  GEN_ENTER(0x67e430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar7;
  undefined * this_00;
  uint uVar8;
  float * pfVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  
  iVar7 = REFG(int, 0x137128c);
  iVar5 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  (*(float *)(gen_frame + 0xa0)) = *(float *)(REFG(int, 0x137128c) + 0x1610);
  (*(undefined * PTR32 *)(gen_frame + 0x9c)) = this;
  (*(float *)(gen_frame + 0xa4)) = *(float *)(REFG(int, 0x137128c) + 0x1614);
  (*(float *)(gen_frame + 0xa8)) = *(float *)(REFG(int, 0x137128c) + 0x1618);
  F_0046f390(&(*(float *)(gen_frame + 0xa0)));
  uVar8 = F_004eebf0(&(*(float *)(gen_frame + 0xa0)),iVar5 + 0x10);
  if (!GEN_ISNAN((*(float *)(gen_frame + 0xa8))) && !(0.0 <= (*(float *)(gen_frame + 0xa8)))) {
    F_004eeb30(&(*(float *)(gen_frame + 0xa0)),iVar5 + 0x50);
    fVar10 = (float10)REFG(double, 0x1088108);
    pfVar9 = *(float * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x9c)) + 8);
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0xa0)) * fVar10 + fVar10);
    (*(float *)(gen_frame + 0xa0)) = fVar1;
    fVar2 = (float)(fVar10 - (float10)(*(float *)(gen_frame + 0xa4)) * fVar10);
    (*(float *)(gen_frame + 0xa4)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0x161c) / (float10)*(float *)(iVar5 + 0xa4))));
    (*(float *)(gen_frame + 0x8c)) = fVar3;
    fVar11 = (float10)fVar3;
    fVar3 = ((float)GEN_TOF((fVar11 / (float10)*(float *)(iVar5 + 0xa8))));
    (*(float *)(gen_frame + 0x88)) = fVar3;
    fVar12 = (float10)fVar1;
    fVar13 = (float10)fVar3;
    fVar1 = (float)(fVar12 - fVar13);
    (*(float *)(gen_frame + 0x74)) = fVar1;
    fVar14 = (float10)fVar2;
    (*(float *)(gen_frame + 0x64)) = fVar1;
    fVar2 = (float)(fVar14 - fVar11);
    (*(float *)(gen_frame + 0x78)) = fVar2;
    (*(float *)(gen_frame + 0x68)) = fVar2;
    fVar3 = (float)(fVar13 + fVar12);
    (*(float *)(gen_frame + 0x7c)) = fVar3;
    fVar4 = (float)(fVar14 + fVar11);
    (*(float *)(gen_frame + 0x80)) = fVar4;
    fVar3 = (float)((float10)fVar3 - (float10)fVar1);
    (*(float *)(gen_frame + 0x5c)) = fVar3;
    *pfVar9 = fVar3;
    fVar3 = (float)((float10)fVar4 - (float10)fVar2);
    (*(float *)(gen_frame + 0x60)) = fVar3;
    pfVar9[1] = fVar3;
    pfVar9[2] = fVar1;
    pfVar9[3] = fVar2;
    fVar12 = (float10)*(double *)&REFG(undefined, 0x1092098);
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0x1620) * fVar12)));
    (*(float *)(gen_frame + 0x90)) = fVar1;
    fVar11 = (float10)1;
    fVar1 = (float)((float10)fVar1 - fVar11);
    (*(float *)(gen_frame + 0xbc)) = fVar1;
    fVar1 = ((float)GEN_TOF(ABS((float10)fVar1)));
    (*(float *)(gen_frame + 0xbc)) = fVar1;
    (*(float *)(gen_frame + 0x98)) = fVar1;
    (*(float *)(gen_frame + 0x94)) = (float)(fVar11 - (float10)fVar1);
    fVar13 = (float10)(float)(fVar11 - (float10)fVar1);
    fVar1 = *(float *)(iVar7 + 0x1628);
    (*(float *)(gen_frame + 0xbc)) = 0.0;
    pfVar9 = &(*(float *)(gen_frame + 0xbc));
    fVar1 = ((float)GEN_TOF((fVar11 / ((fVar11 - fVar13) * (float10)fVar1 + (float10)REFG(double, 0x1094438)) - fVar11)));
    (*(float *)(gen_frame + 0x84)) = fVar1;
    (*(float *)(gen_frame + 0x70)) = ((float)GEN_TOF((fVar11 - fVar11 / ((float10)REFG(double, 0x1094438) + (float10)fVar1))));
    fVar1 = (float)(fVar10 - fVar13);
    (*(float *)(gen_frame + 0xb8)) = fVar1;
    if (!((float10)fVar1 < (float10)0)) {
      pfVar9 = &(*(float *)(gen_frame + 0xb8));
    }
    fVar1 = *pfVar9;
    (*(float *)(gen_frame + 0xbc)) = (float)((float10)fVar1 * fVar12);
    fVar11 = ((float10)GEN_TOD(pow((float10)(float)((float10)fVar1 * fVar12),fVar12)));
    (*(float *)(gen_frame + 0xbc)) = (float)fVar11;
    (*(float *)(gen_frame + 0x58)) = (float)fVar11;
    fVar11 = F_004a3ed0(iVar7 + 0x1630U);
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x9c));
    (*(float *)(gen_frame + 0x6c)) = (float)fVar11;
    fVar1 = *(float *)(iVar7 + 0x1640);
    (*(float *)(gen_frame + 0xbc)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)1 /
                   (((float10)*(float *)(iVar7 + 0x1668) + (float10)*(float *)(iVar7 + 0x1664)) *
                    (float10)fVar1 + (float10)1))));
    (*(float *)(gen_frame + 0xb0)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0x1624) * (float10)*(float *)&REFG(undefined, 0x132238c))));
    (*(float *)(gen_frame + 0xb8)) = fVar3;
    fVar10 = ((float10)GEN_TOD(fcos((float10)fVar3)));
    (*(float *)(gen_frame + 0xb4)) = (float)fVar10;
    (*(float *)(gen_frame + 0x8)) = (float)fVar10;
    fVar10 = ((float10)GEN_TOD(fsin((float10)fVar3)));
    (*(float *)(gen_frame + 0xb4)) = (float)fVar10;
    (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(-(float10)(float)fVar10));
    fVar3 = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0x1620) * (float10)*(float *)&REFG(undefined, 0x132238c))));
    (*(float *)(gen_frame + 0xb8)) = fVar3;
    fVar10 = ((float10)GEN_TOD(fsin((float10)fVar3)));
    (*(float *)(gen_frame + 0xb4)) = (float)fVar10;
    (*(float *)(gen_frame + 0x10)) = (float)fVar10;
    fVar10 = ((float10)GEN_TOD(fcos((float10)fVar3)));
    (*(float *)(gen_frame + 0xb4)) = (float)fVar10;
    (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x84));
    (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(-(float10)(float)fVar10));
    (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0x70));
    fVar11 = (float10)(float)fVar11 * (float10)(*(float *)(gen_frame + 0x98));
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    fVar10 = (float10)(*(float *)(gen_frame + 0x94));
    (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x90));
    fVar12 = (float10)fVar2;
    (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF((fVar12 * (fVar10 * (float10)*(float *)(iVar7 + 0x1630U) + fVar11))));
    (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF((((float10)*(float *)(iVar7 + 0x1634) * fVar10 + fVar11) * fVar12)));
    (*(float *)(gen_frame + 0x34)) = fVar1;
    (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF((fVar12 * ((float10)*(float *)(iVar7 + 0x1638) * fVar10 + fVar11))));
    (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(iVar7 + 0x163c);
    (*(float *)(gen_frame + 0xb0)) = *(float *)(iVar7 + 0x162c);
    fVar11 = (float10)*(float *)(iVar7 + 0x162c);
    (*(float *)(gen_frame + 0x48)) = (*(float *)(gen_frame + 0x88));
    fVar10 = (float10)(*(float *)(gen_frame + 0x58));
    (*(uint *)(gen_frame + 0x4c)) = (uint)gen_fl2bits((*(float *)(gen_frame + 0x8c))) ^ REFG(uint, 0x10920d0);
    (*(float *)(gen_frame + 0x50)) = (*(float *)(gen_frame + 0xa0));
    (*(float *)(gen_frame + 0x38)) = (float)(fVar10 * fVar11);
    (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0xa4));
    (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(((fVar11 * (float10)REFG(double, 0x1088108)) * fVar10)));
    (*(float *)(gen_frame + 0x40)) = ((float)GEN_TOF(((fVar11 * (float10)*(double *)&REFG(undefined, 0x108bec8)) * fVar10)));
    uVar8 = F_0067d2b0((*(undefined * PTR32 *)(gen_frame + 0x9c)),"cMoonParam");
    if (-1 < (int)uVar8) {
      F_006793b0(this_00,uVar8,&(*(float *)(gen_frame + 0x8)),0x50);
    }
    uVar8 = F_0067acb0((undefined *)this_00);
  }
  return uVar8;
}

/* ref: FUN_0067e7d0 */
uint F_0067e7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x67e7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  uint * puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int * piVar5;
  float * pfVar6;
  byte bVar7;
  undefined4 * puVar8;
  uint uVar9;
  int iVar10;
  undefined4 * puVar11;
  uint uVar12;
  float10 fVar13;
  
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  (*(float * PTR32 *)(gen_frame + 0x54)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  puVar8 = (undefined4 *)
           F_004f11a0(((undefined1 *)(gen_frame + 0x60)),*(int *)(REFG(int, 0x137127c) + 0x6554) + 0x10,
                        *(int *)(REFG(int, 0x137127c) + 0x6554) + 0x50);
  pfVar6 = (*(float * PTR32 *)(gen_frame + 0x54));
  puVar11 = ((undefined4 *)(gen_frame + 0xa0));
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  (*(float * PTR32 *)(gen_frame + 0x54)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x54)) + 0xc);
  (*(uint *)(gen_frame + 0x50)) = 0;
  (*(uint *)(gen_frame + 0x58)) = 1;
  do {
    uVar12 = (*(uint *)(gen_frame + 0x50)) >> 5;
    if ((*(uint *)((int)pfVar6 + uVar12 * 4 + 0x1004) & (*(uint *)(gen_frame + 0x58))) != 0) {
      (*(float *)(gen_frame + 0x30)) = (*(float * PTR32 *)(gen_frame + 0x54))[-2];
      (*(float *)(gen_frame + 0x34)) = (*(float * PTR32 *)(gen_frame + 0x54))[-1];
      (*(float *)(gen_frame + 0x38)) = *(*(float * PTR32 *)(gen_frame + 0x54));
      F_004eeb30(&(*(float *)(gen_frame + 0x30)),(uint)((undefined4 *)(gen_frame + 0xa0)));
      if (((*((uint *)GEN_TOP(((int)pfVar6 +
                     (uVar12 + (uint)*(byte *)((int)pfVar6 + 0x1084) * 4) * 4 + 0x1014))) & (*(uint *)(gen_frame + 0x58)))
           == 0) ||
         (bVar7 = F_00687780(*((undefined * PTR32 *)GEN_TOP(((int)pfVar6 +
                                         ((uint)*(byte *)((int)pfVar6 + 0x1084) * 0x80 + (*(uint *)(gen_frame + 0x50))) *
                                         4 + 0x604))),&(*(int *)(gen_frame + 0x2c)),4), bVar7 == 0)) {
LAB_0067e976: ;
        puVar1 = (uint *)((int)pfVar6 + uVar12 * 4 + 0x1064);
        *puVar1 = *puVar1 & ~(*(uint *)(gen_frame + 0x58));
      }
      else {
        fVar13 = (float10)(*(int *)(gen_frame + 0x2c));
        if ((*(int *)(gen_frame + 0x2c)) < 0) {
          fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(undefined * PTR32 *)(gen_frame + 0x5c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(fVar13 / (float10)*(double *)&REFG(undefined, 0x1088100)))));
        fVar13 = (float10)(float)(fVar13 / (float10)*(double *)&REFG(undefined, 0x1088100));
        if (fVar13 * fVar13 < (float10)(*(float *)(gen_frame + 0x38))) {
          puVar1 = (uint *)((int)pfVar6 + uVar12 * 4 + 0x1074);
          *puVar1 = *puVar1 | (*(uint *)(gen_frame + 0x58));
        }
        else {
          puVar1 = (uint *)((int)pfVar6 + uVar12 * 4 + 0x1074);
          *puVar1 = *puVar1 & ~(*(uint *)(gen_frame + 0x58));
        }
        if (bVar7 == 0) goto LAB_0067e976;
        puVar1 = (uint *)((int)pfVar6 + uVar12 * 4 + 0x1064);
        *puVar1 = *puVar1 | (*(uint *)(gen_frame + 0x58));
      }
      if ((*(undefined * PTR32 *)(gen_frame + 0x48)) != (undefined *)0x0) {
        fVar2 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x30)))));
        (*(undefined * PTR32 *)(gen_frame + 0x5c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar2)));
        if ((float10)fVar2 <= (float10)1) {
          fVar2 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x34)))));
          (*(undefined * PTR32 *)(gen_frame + 0x5c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar2)));
          if ((float10)fVar2 <= (float10)1) {
            fVar13 = (float10)REFG(double, 0x1088108);
            piVar5 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 4);
            (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
            (*(undefined4 *)(gen_frame + 0x10)) = 0;
            (*(undefined4 *)(gen_frame + 0x14)) = 0;
            fVar2 = (float)((float10)(*(float *)(gen_frame + 0x30)) * fVar13 + fVar13);
            (*(float *)(gen_frame + 0x30)) = fVar2;
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            fVar3 = (float)(fVar13 - (float10)(*(float *)(gen_frame + 0x34)) * fVar13);
            (*(float *)(gen_frame + 0x34)) = fVar3;
            iVar10 = *(int *)(*piVar5 + 8);
            fVar4 = (float)((float10)fVar2 - (float10)fVar2);
            (*(float *)(gen_frame + 0x1c)) = fVar4;
            *(float *)(iVar10 + 0x10) = fVar4;
            fVar4 = (float)((float10)fVar3 - (float10)fVar3);
            (*(float *)(gen_frame + 0x20)) = fVar4;
            *(float *)(iVar10 + 0x14) = fVar4;
            (*(float *)(gen_frame + 0x24)) = fVar2;
            *(float *)(iVar10 + 0x18) = fVar2;
            (*(float *)(gen_frame + 0x28)) = fVar3;
            *(float *)(iVar10 + 0x1c) = fVar3;
            (*(undefined * PTR32 *)(gen_frame + 0x5c)) = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 4)));
            uVar9 = F_0067d2b0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 4))),"cQueryParam");
            if (-1 < (int)uVar9) {
              F_006793b0((*(undefined * PTR32 *)(gen_frame + 0x5c)),uVar9,&(*(undefined4 *)(gen_frame + 0xc)),0x10);
            }
            (*(undefined * PTR32 *)(gen_frame + 0x5c)) = (undefined *)*((undefined4 *)GEN_TOP(((int)pfVar6 +
                                ((uint)*(byte *)((int)pfVar6 + 0x1084) * 0x80 + (*(uint *)(gen_frame + 0x50))) * 4 +
                                0x604)));
            puVar8 = (undefined4 *)F_004d4760((*(undefined * PTR32 *)(gen_frame + 0x4c)),0xc);
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = 0xc;
              puVar8[1] = (*(undefined * PTR32 *)(gen_frame + 0x5c));
              puVar8[2] = 2;
              F_004d4810((*(undefined * PTR32 *)(gen_frame + 0x4c)),puVar8);
            }
            F_0067a0f0((*(undefined * PTR32 *)(gen_frame + 0x48)));
            (*(undefined * PTR32 *)(gen_frame + 0x5c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(*((float *)GEN_TOP(((int)pfVar6 +
                                         ((uint)*(byte *)((int)pfVar6 + 0x1084) * 0x80 + (*(uint *)(gen_frame + 0x50))) *
                                         4 + 0x604))))));
            puVar8 = (undefined4 *)F_004d4760((*(undefined * PTR32 *)(gen_frame + 0x4c)),0xc);
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = 0xc;
              puVar8[1] = (*(undefined * PTR32 *)(gen_frame + 0x5c));
              puVar8[2] = 1;
              F_004d4810((*(undefined * PTR32 *)(gen_frame + 0x4c)),puVar8);
            }
            puVar1 = ((uint *)GEN_TOP(((int)pfVar6 +
                             uVar12 * 4 + (uint)*(byte *)((int)pfVar6 + 0x1084) * 0x10 + 0x1014)));
            *puVar1 = *puVar1 | (*(uint *)(gen_frame + 0x58));
            goto LAB_0067eb8f;
          }
        }
      }
      puVar1 = ((uint *)GEN_TOP(((int)pfVar6 +
                       uVar12 * 4 + (uint)*(byte *)((int)pfVar6 + 0x1084) * 0x10 + 0x1014)));
      *puVar1 = *puVar1 & ~(*(uint *)(gen_frame + 0x58));
    }
LAB_0067eb8f: ;
    uVar12 = (*(uint *)(gen_frame + 0x50)) + 1;
    (*(float * PTR32 *)(gen_frame + 0x54)) = (*(float * PTR32 *)(gen_frame + 0x54)) + 3;
    (*(uint *)(gen_frame + 0x50)) = uVar12;
    (*(uint *)(gen_frame + 0x58)) = (*(uint *)(gen_frame + 0x58)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0x58)) < 0);
    if (0x7f < uVar12) {
      uVar12 = *(byte *)((int)pfVar6 + 0x1084) + 1;
      *(char *)((int)pfVar6 + 0x1084) = (char)((ulonglong)uVar12 % 5);
      F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0));
      return uVar12 / 5;
    }
  } while( true );
}

/* ref: FUN_0067ebf0 */
uint F_0067ebf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x67ebf0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int * piVar8;
  float * pfVar9;
  double dVar10;
  uint uVar11;
  uint * puVar12;
  int * piVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_28;
  float local_24;
  
  uVar2 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  uVar3 = *(uint *)(uVar2 + 8);
  uVar4 = *(uint *)(uVar2 + 8);
  uVar5 = *(uint *)(uVar2 + 8);
  uVar6 = *(uint *)(uVar2 + 8);
  F_0067d450(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 0x14))),"sInput",(*(uint *)&gen_args[1]),(*(int *)&gen_args[0]) + 0x88);
  iVar7 = **(int * PTR32 *)((*(int *)&gen_args[0]) + 0x14);
  piVar8 = *(int * PTR32 *)((*(int *)&gen_args[0]) + 0xc);
  if (piVar8 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8);
  }
  piVar13 = *(int * PTR32 *)(iVar7 + 0x18);
  if (piVar13 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar13 + 0xc))(piVar13);
  }
  piVar13 = (int *)(iVar7 + 0x18);
  *piVar13 = (int)piVar8;
  *(undefined1 *)(iVar7 + 0x42) = 0;
  uVar11 = 0;
  do {
    if (*piVar13 == 0) break;
    *(char *)(iVar7 + 0x42) = (char)uVar11 + '\x01';
    uVar11 = uVar11 + 1;
    piVar13 = piVar13 + 1;
  } while (uVar11 < 4);
  iVar7 = **(int * PTR32 *)((*(int *)&gen_args[0]) + 0x14);
  bVar1 = *(byte *)(iVar7 + 0x48);
  *(undefined4 *)(iVar7 + 0x34) = 0;
  *(byte *)(iVar7 + 0x48) = *(byte *)(iVar7 + 0x48) ^ (bVar1 ^ (byte)(*(uint *)&gen_args[2])) & 1;
  (*(uint *)&gen_args[2]) = **(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 0x14);
  uVar11 = F_0067d2b0((undefined *)(*(uint *)&gen_args[2]),"cScale");
  if (-1 < (int)uVar11) {
    F_006793b0((undefined *)(*(uint *)&gen_args[2]),uVar11,(*(int *)&gen_args[0]) + 0x50,0x10);
  }
  (*(uint *)&gen_args[2]) = **(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 0x14);
  uVar11 = F_0067d2b0((undefined *)(*(uint *)&gen_args[2]),"cOffset");
  if (-1 < (int)uVar11) {
    F_006793b0((undefined *)(*(uint *)&gen_args[2]),uVar11,(*(int *)&gen_args[0]) + 0x60,0x10);
  }
  (*(uint *)&gen_args[2]) = **(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 0x14);
  uVar11 = F_0067d2b0((undefined *)(*(uint *)&gen_args[2]),"cFlag");
  if (-1 < (int)uVar11) {
    F_006793b0((undefined *)(*(uint *)&gen_args[2]),uVar11,(*(int *)&gen_args[0]) + 0x70,8);
  }
  iVar7 = *(int *)((*(int *)&gen_args[0]) + 0xc);
  fVar14 = (float10)*(int *)(iVar7 + 0x18);
  if (*(int *)(iVar7 + 0x18) < 0) {
    fVar14 = fVar14 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar15 = (float10)*(int *)((*(uint *)&gen_args[1]) + 0x18);
  if (*(int *)((*(uint *)&gen_args[1]) + 0x18) < 0) {
    fVar15 = fVar15 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar15 = (float10)*(float *)((*(int *)&gen_args[0]) + 0x80) * fVar15;
  fVar14 = (float10)(float)fVar14;
  fVar18 = ((float)GEN_TOF(((fVar14 - fVar15) / fVar14)));
  fVar16 = (float10)*(int *)(iVar7 + 0x1c);
  if (*(int *)(iVar7 + 0x1c) < 0) {
    fVar16 = fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar17 = (float10)*(int *)((*(uint *)&gen_args[1]) + 0x1c);
  if (*(int *)((*(uint *)&gen_args[1]) + 0x1c) < 0) {
    fVar17 = fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar17 = fVar17 * (float10)*(float *)((*(int *)&gen_args[0]) + 0x80);
  fVar16 = (float10)(float)fVar16;
  fVar20 = ((float)GEN_TOF(((fVar16 - fVar17) / fVar16)));
  (*(uint *)&gen_args[2]) = (uint)gen_fl2bits((float)(fVar15 / fVar14));
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)(fVar17 / fVar16));
  local_28 = ((float)GEN_TOF(((float10)*(float *)((*(int *)&gen_args[0]) + 0x78) + ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))))));
  local_24 = ((float)GEN_TOF(((float10)*(float *)((*(int *)&gen_args[0]) + 0x7c) + ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))))));
  if (*(char *)((*(int *)&gen_args[0]) + 0x84) == '\0') {
LAB_0067ee25: ;
    fVar19 = *(float *)((*(int *)&gen_args[0]) + 0x78);
    if (*(char *)((*(int *)&gen_args[0]) + 0x85) != '\0') {
LAB_0067ee33: ;
      local_28 = REFG(float, 0x1087f04);
      fVar19 = fVar18;
    }
  }
  else {
    if (*(char *)((*(int *)&gen_args[0]) + 0x85) != '\0') {
      fVar18 = 0.0;
      goto LAB_0067ee33;
    }
    if (*(char *)((*(int *)&gen_args[0]) + 0x84) == '\0') goto LAB_0067ee25;
    fVar19 = 0.0;
    local_28 = gen_bits2f((*(uint *)&gen_args[2]));
  }
  if (*(char *)((*(int *)&gen_args[0]) + 0x86) == '\0') {
LAB_0067ee68: ;
    fVar18 = *(float *)((*(int *)&gen_args[0]) + 0x7c);
    if (*(char *)((*(int *)&gen_args[0]) + 0x87) == '\0') goto LAB_0067ee80;
  }
  else {
    if (*(char *)((*(int *)&gen_args[0]) + 0x87) == '\0') {
      if (*(char *)((*(int *)&gen_args[0]) + 0x86) != '\0') {
        fVar18 = 0.0;
        local_24 = gen_bits2f((*(uint *)&gen_args[1]));
        goto LAB_0067ee80;
      }
      goto LAB_0067ee68;
    }
    fVar20 = 0.0;
  }
  local_24 = REFG(float, 0x1087f04);
  fVar18 = fVar20;
LAB_0067ee80: ;
  pfVar9 = *((float * PTR32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 0x14) + 8)));
  *pfVar9 = (float)((float10)local_28 - (float10)fVar19);
  pfVar9[1] = (float)((float10)local_24 - (float10)fVar18);
  pfVar9[2] = fVar19;
  pfVar9[3] = fVar18;
  F_0067a0f0((undefined *)((*(int *)&gen_args[0]) + 0x10));
  dVar10 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
  *(undefined4 *)(uVar2 + 8) = 0xf7ffffff;
  (*(uint *)&gen_args[2]) = (int)dVar10;
  (*(uint *)&gen_args[1]) = 0x1ff;
  puVar12 = &(*(uint *)&gen_args[2]);
  if (0x1fe < (int)dVar10) {
    puVar12 = &(*(uint *)&gen_args[1]);
  }
  uVar11 = *puVar12;
  (*(uint *)&gen_args[2]) = uVar11;
  (*(uint *)&gen_args[1]) = 0xfffffe00;
  puVar12 = &(*(uint *)&gen_args[1]);
  if (-0x201 < (int)uVar11) {
    puVar12 = &(*(uint *)&gen_args[2]);
  }
  (*(uint *)&gen_args[2]) = (*puVar12 & 0x3ff) << 10 | 0x25;
  F_0067d450(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 0x34))),"sInput",*(undefined4 *)((*(int *)&gen_args[0]) + 0xc),
               &(*(uint *)&gen_args[2]));
  fVar18 = REFG(float, 0x1087f04);
  *((undefined4 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 0x34) + 0x30))) = 0x7a80541;
  *(float *)((*(int *)&gen_args[0]) + 0x48) = fVar18;
  F_0067a0f0((undefined *)((*(int *)&gen_args[0]) + 0x30));
  *(uint *)(uVar2 + 8) =
       ((uVar5 >> 0x17 & 0xf | (uVar3 >> 0x1b) << 4) << 4 | uVar4 >> 0x13 & 0xf) << 0x13 |
       uVar6 & 0x7ffff;
  return uVar2;
}

/* ref: FUN_0067efb0 */
byte F_0067efb0(unsigned int gen_a0)
{
  GEN_ENTER(0x67efb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char * pcVar1;
  undefined4 uVar2;
  char * pcVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  char * PTR32 * ppcVar7;
  
  bVar5 = F_0067a050(this,1);
  if (bVar5 != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(char * PTR32 *)(gen_frame + 0x4)) = "shader/posteffect/LightDebug.shcd";
    uVar6 = F_00688330(this,0,&(*(undefined4 *)(gen_frame + 0x0)),1);
    if (uVar6 != 0) {
      bVar5 = F_00677f90(this);
      iVar4 = REFG(int, 0x1371288);
      if (bVar5 != 0) {
        pcVar3 = (char *)(int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar3;
        (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0x1ff;
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        if (0x1fe < (int)pcVar3) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        }
        pcVar1 = *ppcVar7;
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar1;
        (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0xfffffe00;
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        if (-0x201 < (int)pcVar1) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        }
        uVar2 = *(undefined4 *)(REFG(int, 0x1371288) + 0x14);
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((((uint)*ppcVar7 & 0x3ff) << 10 | 0x25)));
        F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 4))),"sLight0",uVar2,&(*(char * PTR32 *)(gen_frame + 0x4)));
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar3;
        (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0x1ff;
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        if (0x1fe < (int)pcVar3) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        }
        pcVar1 = *ppcVar7;
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar1;
        (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0xfffffe00;
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        if (-0x201 < (int)pcVar1) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        }
        uVar2 = *(undefined4 *)(iVar4 + 0x18);
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((((uint)*ppcVar7 & 0x3ff) << 10 | 0x25)));
        F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 4))),"sLight1",uVar2,&(*(char * PTR32 *)(gen_frame + 0x4)));
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar3;
        (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0x1ff;
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        if (0x1fe < (int)pcVar3) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        }
        pcVar1 = *ppcVar7;
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar1;
        (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0xfffffe00;
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        if (-0x201 < (int)pcVar1) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        }
        uVar2 = *(undefined4 *)(iVar4 + 0x28);
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((((uint)*ppcVar7 & 0x3ff) << 10 | 0x25)));
        F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 4))),"sLight2",uVar2,&(*(char * PTR32 *)(gen_frame + 0x4)));
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar3;
        (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0x1ff;
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        if (0x1fe < (int)pcVar3) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        }
        pcVar3 = *ppcVar7;
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar3;
        (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0xfffffe00;
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        if (-0x201 < (int)pcVar3) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        }
        uVar2 = *(undefined4 *)(iVar4 + 0x2c);
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((((uint)*ppcVar7 & 0x3ff) << 10 | 0x25)));
        F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 4))),"sLight3",uVar2,&(*(char * PTR32 *)(gen_frame + 0x4)));
        F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 4))),0,
                     *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x1370b90) + 0x2c) + 0x34))));
        *((undefined4 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))) = 0x7080541;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_0067f1c0 */
uint F_0067f1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x67f1c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  char cVar2;
  undefined * this_00;
  float10 fVar3;
  float * pfVar4;
  uint uVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  
  cVar2 = *(char *)((int)this + 0x2d);
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x2f) == '\0')) {
    (*(float *)(gen_frame + 0x4)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x30) == '\0')) {
    (*(float *)(gen_frame + 0x8)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x31) == '\0')) {
    (*(float *)(gen_frame + 0x14)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x32) == '\0')) {
    (*(float *)(gen_frame + 0x18)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x33) == '\0')) {
    (*(float *)(gen_frame + 0x1c)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x34) == '\0')) {
    (*(float *)(gen_frame + 0x20)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1087f04);
  }
  cVar2 = *(char *)((int)this + 0x2e);
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x2f) == '\0')) {
    (*(float *)(gen_frame + 0x24)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x30) == '\0')) {
    (*(float *)(gen_frame + 0x28)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1087f04);
  }
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x31) == '\0')) {
    (*(float *)(gen_frame + 0x34)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x32) == '\0')) {
    (*(float *)(gen_frame + 0x38)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x33) == '\0')) {
    (*(float *)(gen_frame + 0x3c)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x3c)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x34) == '\0')) {
    (*(float *)(gen_frame + 0x40)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x40)) = REFG(float, 0x1087f04);
  }
  fVar6 = *(float *)((int)this + 0x24);
  (*(float *)(gen_frame + 0x54)) = fVar6;
  fVar7 = (float10)(int)gen_fl2bits(fVar6);
  if ((int)gen_fl2bits(fVar6) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x58)) = (float)fVar7;
  (*(float *)(gen_frame + 0x54)) = 0.0;
  pfVar4 = &(*(float *)(gen_frame + 0x54));
  fVar8 = (float10)0;
  if (!((float10)(float)fVar7 < fVar8)) {
    pfVar4 = &(*(float *)(gen_frame + 0x58));
  }
  fVar1 = *pfVar4;
  fVar6 = gen_bits2f(*(int *)((int)this + 0x28) - (int)gen_fl2bits(fVar6));
  (*(float *)(gen_frame + 0x54)) = fVar6;
  fVar7 = (float10)(int)gen_fl2bits(fVar6);
  (*(float *)(gen_frame + 0x44)) = fVar1;
  if ((int)gen_fl2bits(fVar6) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x58)) = (float)fVar7;
  (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
  pfVar4 = &(*(float *)(gen_frame + 0x54));
  fVar3 = (float10)1;
  if (!((float10)(float)fVar7 < fVar3)) {
    pfVar4 = &(*(float *)(gen_frame + 0x58));
  }
  (*(float *)(gen_frame + 0x48)) = (float)(fVar3 / (float10)*pfVar4);
  if (*(char *)((int)this + 0x2c) != '\0') {
    fVar6 = gen_bits2f((int)gen_fl2bits(fVar6) + -1);
    (*(float *)(gen_frame + 0x54)) = fVar6;
    fVar7 = (float10)(int)gen_fl2bits(fVar6);
    if ((int)gen_fl2bits(fVar6) < 0) {
      fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(float *)(gen_frame + 0x58)) = (float)fVar7;
    (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
    pfVar4 = &(*(float *)(gen_frame + 0x54));
    if (!((float10)(float)fVar7 < fVar3)) {
      pfVar4 = &(*(float *)(gen_frame + 0x58));
    }
    fVar8 = fVar3 / (float10)*pfVar4;
  }
  (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x4c)) = (float)fVar8;
  this_00 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 4)));
  (*(undefined4 *)(gen_frame + 0x50)) = *(undefined4 *)((int)this + 0x20);
  uVar5 = F_0067d2b0(this_00,"cLightParam");
  if (-1 < (int)uVar5) {
    F_006793b0(this_00,uVar5,&(*(float *)(gen_frame + 0x4)),0x50);
  }
  uVar5 = F_0067a0f0(this);
  return uVar5;
}

/* ref: FUN_0067f3e0 */
byte F_0067f3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x67f3e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined4 * puVar7;
  char * PTR32 * ppcVar8;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  F_0067a800(this);
  *(undefined4 *)((int)this + 0x1510) = 0xffffffff;
  uVar5 = *(uint *)((int)this + 0x1510);
  uVar4 = 0;
  uVar2 = 1;
  do {
    bVar1 = (byte)uVar4;
    uVar4 = uVar4 + 1;
    uVar5 = 0 << (bVar1 & 0x1f) | ~uVar2 & uVar5;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  } while (uVar4 < 0x1b);
  *(uint *)((int)this + 0x1510) = uVar5;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x10)) = "shader/posteffect/Default.shcd";
  uVar5 = F_00688330((undefined *)((int)this + 0x14),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
  if (uVar5 != 0) {
    pcVar3 = "shader/posteffect/Default.shcd";
    if (*(int *)(REFG(int, 0x1370b90) + 0x44) != 0x8086) {
      pcVar3 = "shader/posteffect/AlphaTest.shcd";
    }
    (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar3;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    uVar5 = F_00688330((undefined *)((int)this + 0x34),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
    if (uVar5 != 0) {
      pcVar3 = "shader/posteffect/DownScaleDepthNormalZ_RAWZ.shcd";
      if ((*(byte *)((int)this + 0x1508) & 4) == 0) {
        pcVar3 = "shader/posteffect/DownScaleDepthNormalZ.shcd";
      }
      (*(undefined4 *)(gen_frame + 0xc)) = 4;
      (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar3;
      uVar5 = F_00688330((undefined *)((int)this + 0x54),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
      if (uVar5 != 0) {
        pcVar3 = "shader/posteffect/ViewDepth_RAWZ.shcd";
        if ((*(byte *)((int)this + 0x1508) & 4) == 0) {
          pcVar3 = "shader/posteffect/ViewDepth.shcd";
        }
        (*(char * PTR32 *)(gen_frame + 0x44)) = pcVar3;
        ((char *)(gen_frame + 0x40))[0] = '\0';
        ((char *)(gen_frame + 0x40))[1] = '\0';
        ((char *)(gen_frame + 0x40))[2] = '\0';
        ((char *)(gen_frame + 0x40))[3] = '\0';
        (*(undefined4 *)(gen_frame + 0x48)) = 0;
        (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/Default.shcd";
        (*(undefined4 *)(gen_frame + 0x50)) = 0;
        (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/Default.shcd";
        uVar5 = 0;
        (*(char * PTR32 *)(gen_frame + 0x10)) = ((char *)(gen_frame + 0x40));
        do {
          uVar2 = F_00688330((undefined *)((int)this + 0x74),uVar5,(*(char * PTR32 *)(gen_frame + 0x10)),0);
          if (uVar2 == 0) goto LAB_0067f44c;
          (*(char * PTR32 *)(gen_frame + 0x10)) = (*(char * PTR32 *)(gen_frame + 0x10)) + 8;
          uVar5 = uVar5 + 1;
        } while (uVar5 < 3);
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(char * PTR32 *)(gen_frame + 0x10)) = "shader/posteffect/Saturate.shcd";
        uVar5 = F_00688330((undefined *)((int)this + 0x94),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
        if (uVar5 != 0) {
          ((char * PTR32 *)(gen_frame + 0x28))[2] = (char *)0x0;
          ((char * PTR32 *)(gen_frame + 0x28))[3] = "shader/posteffect/DownScale2x2_Linear.shcd";
          (*(char * PTR32 *)(gen_frame + 0x38)) = (char *)0x0;
          (*(char * PTR32 *)(gen_frame + 0x3c)) = "shader/posteffect/DownScale2x2_Linear.shcd";
          ((char *)(gen_frame + 0x40))[0] = '\0';
          ((char *)(gen_frame + 0x40))[1] = '\0';
          ((char *)(gen_frame + 0x40))[2] = '\0';
          ((char *)(gen_frame + 0x40))[3] = '\0';
          (*(char * PTR32 *)(gen_frame + 0x44)) = "shader/posteffect/DownScale2x2_Linear.shcd";
          (*(undefined4 *)(gen_frame + 0x48)) = 3;
          (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/MeasureLumInitial.shcd";
          (*(undefined4 *)(gen_frame + 0x50)) = 0;
          (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/AdaptLum.shcd";
          uVar5 = 0;
          do {
            if (uVar5 == 3) {
              uVar2 = F_00687d40((undefined *)((int)this + 0xb4),3,&(*(undefined4 *)(gen_frame + 0x48)),0);
            }
            else if (uVar5 == 4) {
              uVar2 = F_00687e00((undefined *)((int)this + 0xb4),4,&(*(undefined4 *)(gen_frame + 0x50)),0);
            }
            else {
              uVar2 = F_00688330((undefined *)((int)this + 0xb4),uVar5,((char * PTR32 *)(gen_frame + 0x28)) + uVar5 * 2 + 2,0);
            }
            if (uVar2 == 0) goto LAB_0067f44c;
            uVar5 = uVar5 + 1;
          } while (uVar5 < 5);
          (*(undefined4 *)(gen_frame + 0xc)) = 0;
          (*(char * PTR32 *)(gen_frame + 0x10)) = "shader/posteffect/ToneMapping.shcd";
          uVar5 = F_00688330((undefined *)((int)this + 0xd4),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
          if (uVar5 != 0) {
            (*(undefined4 *)(gen_frame + 0xc)) = 0;
            (*(char * PTR32 *)(gen_frame + 0x10)) = "shader/posteffect/ToneAdjust.shcd";
            uVar5 = F_00688330((undefined *)((int)this + 0xf4),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
            if (uVar5 != 0) {
              (*(undefined4 *)(gen_frame + 0xc)) = 0;
              (*(char * PTR32 *)(gen_frame + 0x10)) = "shader/posteffect/Default.shcd";
              uVar5 = F_00688330((undefined *)((int)this + 0x114),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
              if (uVar5 != 0) {
                pvVar6 = (undefined *)((int)this + 0x134);
                ((char * PTR32 *)(gen_frame + 0x28))[2] = (char *)0x0;
                ((char * PTR32 *)(gen_frame + 0x28))[3] = "shader/posteffect/BrightPassFilter.shcd";
                (*(char * PTR32 *)(gen_frame + 0x38)) = (char *)0x8;
                (*(char * PTR32 *)(gen_frame + 0x3c)) = "shader/posteffect/GaussBlur5x5_Linear.shcd";
                ((char *)(gen_frame + 0x40))[0] = '\0';
                ((char *)(gen_frame + 0x40))[1] = '\0';
                ((char *)(gen_frame + 0x40))[2] = '\0';
                ((char *)(gen_frame + 0x40))[3] = '\0';
                (*(char * PTR32 *)(gen_frame + 0x44)) = "shader/posteffect/DownScale2x2_Linear.shcd";
                (*(undefined4 *)(gen_frame + 0x48)) = 7;
                (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/StarBlur.shcd";
                (*(undefined4 *)(gen_frame + 0x50)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/GlareMerge.shcd";
                uVar5 = 0;
                do {
                  if (uVar5 == 2) {
                    uVar2 = F_00687f00(pvVar6,2,((char *)(gen_frame + 0x40)),0);
                  }
                  else if (uVar5 == 3) {
                    uVar2 = F_00687fc0(pvVar6,3,&(*(undefined4 *)(gen_frame + 0x48)),0);
                  }
                  else {
                    uVar2 = F_00688330(pvVar6,uVar5,((char * PTR32 *)(gen_frame + 0x28)) + uVar5 * 2 + 2,0);
                  }
                  if (uVar2 == 0) goto LAB_0067f44c;
                  uVar5 = uVar5 + 1;
                } while (uVar5 < 5);
                (*(undefined4 *)(gen_frame + 0x4)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x8)) = "shader/posteffect/MergeTextures1.shcd";
                (*(undefined4 *)(gen_frame + 0xc)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x10)) = "shader/posteffect/Default.shcd";
                uVar5 = 0;
                puVar7 = &(*(undefined4 *)(gen_frame + 0x4));
                do {
                  uVar2 = F_00688330((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x154),uVar5,puVar7,0);
                  if (uVar2 == 0) goto LAB_0067f44c;
                  uVar5 = uVar5 + 1;
                  puVar7 = puVar7 + 2;
                } while (uVar5 < 2);
                (*(undefined4 *)(gen_frame + 0x48)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/FXAALuma.shcd";
                (*(undefined4 *)(gen_frame + 0x50)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/FXAA.shcd";
                (*(char * PTR32 *)(gen_frame + 0x10)) = (char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x174);
                uVar5 = 0;
                puVar7 = &(*(undefined4 *)(gen_frame + 0x48));
                do {
                  uVar2 = F_00688330((*(char * PTR32 *)(gen_frame + 0x10)),uVar5,puVar7,0);
                  if (uVar2 == 0) goto LAB_0067f44c;
                  uVar5 = uVar5 + 1;
                  puVar7 = puVar7 + 2;
                } while (uVar5 < 2);
                (*(char * PTR32 *)(gen_frame + 0x38)) = (char *)0x0;
                (*(char * PTR32 *)(gen_frame + 0x3c)) = "shader/posteffect/Clear.shcd";
                ((char *)(gen_frame + 0x40))[0] = '\0';
                ((char *)(gen_frame + 0x40))[1] = '\0';
                ((char *)(gen_frame + 0x40))[2] = '\0';
                ((char *)(gen_frame + 0x40))[3] = '\0';
                (*(char * PTR32 *)(gen_frame + 0x44)) = "shader/posteffect/Sky.shcd";
                (*(undefined4 *)(gen_frame + 0x48)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/Sky2.shcd";
                (*(undefined4 *)(gen_frame + 0x50)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/Default.shcd";
                uVar5 = 0;
                ppcVar8 = ((char * PTR32 *)(gen_frame + 0x28)) + 4;
                do {
                  uVar2 = F_00688330((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x194),uVar5,ppcVar8,0);
                  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x14));
                  if (uVar2 == 0) goto LAB_0067f44c;
                  uVar5 = uVar5 + 1;
                  ppcVar8 = ppcVar8 + 2;
                } while (uVar5 < 4);
                (*(undefined4 *)(gen_frame + 0xc)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x10)) = "shader/posteffect/Moon.shcd";
                uVar5 = F_00688090((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x1b4),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
                if (uVar5 != 0) {
                  (*(undefined4 *)(gen_frame + 0xc)) = 3;
                  (*(char * PTR32 *)(gen_frame + 0x10)) = "shader/posteffect/CloudShadow.shcd";
                  uVar5 = F_00688330((undefined *)((int)pvVar6 + 0x1d4),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
                  if (uVar5 != 0) {
                    (*(char * PTR32 *)(gen_frame + 0x38)) = (char *)0x0;
                    (*(char * PTR32 *)(gen_frame + 0x3c)) = "shader/posteffect/Default.shcd";
                    ((char *)(gen_frame + 0x40))[0] = '\0';
                    ((char *)(gen_frame + 0x40))[1] = '\0';
                    ((char *)(gen_frame + 0x40))[2] = '\0';
                    ((char *)(gen_frame + 0x40))[3] = '\0';
                    (*(char * PTR32 *)(gen_frame + 0x44)) = "shader/posteffect/Halo.shcd";
                    (*(undefined4 *)(gen_frame + 0x48)) = 0;
                    (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/Default.shcd";
                    (*(undefined4 *)(gen_frame + 0x50)) = 0;
                    (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/Default.shcd";
                    uVar5 = 0;
                    ppcVar8 = ((char * PTR32 *)(gen_frame + 0x28)) + 4;
                    do {
                      uVar2 = F_00688330((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 500),uVar5,ppcVar8,0);
                      if (uVar2 == 0) goto LAB_0067f44c;
                      uVar5 = uVar5 + 1;
                      ppcVar8 = ppcVar8 + 2;
                    } while (uVar5 < 4);
                    pcVar3 = "shader/posteffect/Fog_RAWZ.shcd";
                    if ((*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x1508) & 4) == 0) {
                      pcVar3 = "shader/posteffect/Fog.shcd";
                    }
                    (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar3;
                    (*(undefined4 *)(gen_frame + 0xc)) = 0;
                    uVar5 = F_00688520((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x214),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
                    pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x14));
                    if (uVar5 != 0) {
                      ((char * PTR32 *)(gen_frame + 0x18))[0] = (char *)0x0;
                      ((char * PTR32 *)(gen_frame + 0x18))[1] = "shader/posteffect/DepthOfFieldWeight2.shcd";
                      ((char * PTR32 *)(gen_frame + 0x18))[2] = (char *)0x0;
                      ((char * PTR32 *)(gen_frame + 0x18))[3] = "shader/posteffect/DownScale2x2_Linear.shcd";
                      ((char * PTR32 *)(gen_frame + 0x28))[0] = (char *)0x0;
                      ((char * PTR32 *)(gen_frame + 0x28))[1] = "shader/posteffect/DownScale2x2_Linear.shcd";
                      ((char * PTR32 *)(gen_frame + 0x28))[2] = (char *)0x3;
                      ((char * PTR32 *)(gen_frame + 0x28))[3] = "shader/posteffect/DepthOfFieldDownScale4x4.shcd";
                      (*(char * PTR32 *)(gen_frame + 0x38)) = (char *)0x3;
                      (*(char * PTR32 *)(gen_frame + 0x3c)) = "shader/posteffect/DownScale3x3_Linear.shcd";
                      ((char *)(gen_frame + 0x40))[0] = '\x0f';
                      ((char *)(gen_frame + 0x40))[1] = '\0';
                      ((char *)(gen_frame + 0x40))[2] = '\0';
                      ((char *)(gen_frame + 0x40))[3] = '\0';
                      (*(char * PTR32 *)(gen_frame + 0x44)) = "shader/posteffect/DepthOfFieldDiscBlurNear.shcd";
                      (*(undefined4 *)(gen_frame + 0x48)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/DepthOfFieldMergeFar.shcd";
                      (*(undefined4 *)(gen_frame + 0x50)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/DepthOfFieldMerge2.shcd";
                      uVar5 = 0;
                      do {
                        if (uVar5 == 0) {
                          uVar2 = F_00688160((undefined *)((int)pvVar6 + 0x234),0,((char * PTR32 *)(gen_frame + 0x18)),0);
                        }
                        else {
                          uVar2 = F_00688330((undefined *)((int)pvVar6 + 0x234),uVar5,
                                               ((char * PTR32 *)(gen_frame + 0x18)) + uVar5 * 2,0);
                        }
                        if (uVar2 == 0) goto LAB_0067f44c;
                        uVar5 = uVar5 + 1;
                      } while (uVar5 < 8);
                      pcVar3 = "shader/posteffect/CameraVelocity_RAWZ.shcd";
                      if ((*(byte *)((int)pvVar6 + 0x1508) & 4) == 0) {
                        pcVar3 = "shader/posteffect/CameraVelocity.shcd";
                      }
                      ((char * PTR32 *)(gen_frame + 0x28))[0] = (char *)0x0;
                      ((char * PTR32 *)(gen_frame + 0x28))[1] = pcVar3;
                      ((char * PTR32 *)(gen_frame + 0x28))[2] = (char *)0x0;
                      ((char * PTR32 *)(gen_frame + 0x28))[3] = "shader/posteffect/CameraSpeed.shcd";
                      (*(char * PTR32 *)(gen_frame + 0x38)) = (char *)0x0;
                      (*(char * PTR32 *)(gen_frame + 0x3c)) = "shader/posteffect/CameraMotionBlur.shcd";
                      ((char *)(gen_frame + 0x40))[0] = '\0';
                      ((char *)(gen_frame + 0x40))[1] = '\0';
                      ((char *)(gen_frame + 0x40))[2] = '\0';
                      ((char *)(gen_frame + 0x40))[3] = '\0';
                      (*(char * PTR32 *)(gen_frame + 0x44)) = "shader/posteffect/CameraMotionBlur.shcd";
                      (*(undefined4 *)(gen_frame + 0x48)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/CameraMotionBlur.shcd";
                      (*(undefined4 *)(gen_frame + 0x50)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/CameraMotionBlurMerge.shcd";
                      uVar5 = 0;
                      do {
                        if (uVar5 == 0) {
                          uVar2 = F_00688240((undefined *)((int)pvVar6 + 0x254),0,((char * PTR32 *)(gen_frame + 0x28)),0);
                        }
                        else {
                          uVar2 = F_00688330((undefined *)((int)pvVar6 + 0x254),uVar5,
                                               ((char * PTR32 *)(gen_frame + 0x28)) + uVar5 * 2,0);
                        }
                        if (uVar2 == 0) goto LAB_0067f44c;
                        uVar5 = uVar5 + 1;
                      } while (uVar5 < 6);
                      ((char * PTR32 *)(gen_frame + 0x28))[2] = (char *)0x0;
                      ((char * PTR32 *)(gen_frame + 0x28))[3] = "shader/posteffect/Default.shcd";
                      (*(char * PTR32 *)(gen_frame + 0x38)) = (char *)0x0;
                      (*(char * PTR32 *)(gen_frame + 0x3c)) = "shader/posteffect/RadialBlur.shcd";
                      ((char *)(gen_frame + 0x40))[0] = '\0';
                      ((char *)(gen_frame + 0x40))[1] = '\0';
                      ((char *)(gen_frame + 0x40))[2] = '\0';
                      ((char *)(gen_frame + 0x40))[3] = '\0';
                      (*(char * PTR32 *)(gen_frame + 0x44)) = "shader/posteffect/RadialBlur.shcd";
                      (*(undefined4 *)(gen_frame + 0x48)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/RadialBlur.shcd";
                      (*(undefined4 *)(gen_frame + 0x50)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/DonutMerge.shcd";
                      (*(char * PTR32 *)(gen_frame + 0x10)) = (char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x274);
                      uVar5 = 0;
                      ppcVar8 = ((char * PTR32 *)(gen_frame + 0x28));
                      do {
                        ppcVar8 = (char * PTR32 *)((int)ppcVar8 + 8);
                        uVar2 = F_00688330((*(char * PTR32 *)(gen_frame + 0x10)),uVar5,ppcVar8,0);
                        if (uVar2 == 0) goto LAB_0067f44c;
                        uVar5 = uVar5 + 1;
                      } while (uVar5 < 5);
                      ((char * PTR32 *)(gen_frame + 0x28))[0] = (char *)0x0;
                      ((char * PTR32 *)(gen_frame + 0x28))[1] = "shader/posteffect/Sun.shcd";
                      ((char * PTR32 *)(gen_frame + 0x28))[2] = (char *)0x0;
                      ((char * PTR32 *)(gen_frame + 0x28))[3] = "shader/posteffect/RadialBlur.shcd";
                      (*(char * PTR32 *)(gen_frame + 0x38)) = (char *)0x0;
                      (*(char * PTR32 *)(gen_frame + 0x3c)) = "shader/posteffect/RadialBlur.shcd";
                      ((char *)(gen_frame + 0x40))[0] = '\0';
                      ((char *)(gen_frame + 0x40))[1] = '\0';
                      ((char *)(gen_frame + 0x40))[2] = '\0';
                      ((char *)(gen_frame + 0x40))[3] = '\0';
                      (*(char * PTR32 *)(gen_frame + 0x44)) = "shader/posteffect/RadialBlur.shcd";
                      (*(undefined4 *)(gen_frame + 0x48)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/GodraysMerge.shcd";
                      (*(undefined4 *)(gen_frame + 0x50)) = 0xf;
                      (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/DownScale4x4_Point.shcd";
                      uVar5 = 0;
                      ppcVar8 = ((char * PTR32 *)(gen_frame + 0x28));
                      do {
                        uVar2 = F_00688330((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x294),uVar5,ppcVar8,0);
                        if (uVar2 == 0) goto LAB_0067f44c;
                        uVar5 = uVar5 + 1;
                        ppcVar8 = ppcVar8 + 2;
                      } while (uVar5 < 6);
                      (*(undefined4 *)(gen_frame + 0xc)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x10)) = "shader/posteffect/ColorFilter.shcd";
                      uVar5 = F_00688330((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x2b4),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
                      if (uVar5 != 0) {
                        (*(undefined4 *)(gen_frame + 0x48)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/Vignetting.shcd";
                        (*(undefined4 *)(gen_frame + 0x50)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/AlphaTest.shcd";
                        uVar5 = 0;
                        puVar7 = &(*(undefined4 *)(gen_frame + 0x48));
                        do {
                          uVar2 = F_00688330((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x2d4),uVar5,puVar7,0);
                          if (uVar2 == 0) goto LAB_0067f44c;
                          uVar5 = uVar5 + 1;
                          puVar7 = puVar7 + 2;
                        } while (uVar5 < 2);
                        (*(undefined4 *)(gen_frame + 0x48)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/Default.shcd";
                        (*(undefined4 *)(gen_frame + 0x50)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/Default.shcd";
                        (*(char * PTR32 *)(gen_frame + 0x10)) = (char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x314);
                        uVar5 = 0;
                        puVar7 = &(*(undefined4 *)(gen_frame + 0x48));
                        do {
                          uVar2 = F_00688330((*(char * PTR32 *)(gen_frame + 0x10)),uVar5,puVar7,0);
                          if (uVar2 == 0) goto LAB_0067f44c;
                          uVar5 = uVar5 + 1;
                          puVar7 = puVar7 + 2;
                        } while (uVar5 < 2);
                        (*(char * PTR32 *)(gen_frame + 0x38)) = (char *)0x0;
                        (*(char * PTR32 *)(gen_frame + 0x3c)) = "shader/posteffect/QueryInitial.shcd";
                        ((char *)(gen_frame + 0x40))[0] = '\0';
                        ((char *)(gen_frame + 0x40))[1] = '\0';
                        ((char *)(gen_frame + 0x40))[2] = '\0';
                        ((char *)(gen_frame + 0x40))[3] = '\0';
                        (*(char * PTR32 *)(gen_frame + 0x44)) = "shader/posteffect/QueryWeight.shcd";
                        (*(undefined4 *)(gen_frame + 0x48)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/QueryWeight.shcd";
                        (*(undefined4 *)(gen_frame + 0x50)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/QueryWeight.shcd";
                        uVar5 = 0;
                        ppcVar8 = ((char * PTR32 *)(gen_frame + 0x28)) + 4;
                        do {
                          uVar2 = F_00688330((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x334),uVar5,ppcVar8,0);
                          pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x14));
                          if (uVar2 == 0) goto LAB_0067f44c;
                          uVar5 = uVar5 + 1;
                          ppcVar8 = ppcVar8 + 2;
                        } while (uVar5 < 4);
                        (*(undefined4 *)(gen_frame + 0xc)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x10)) = "shader/posteffect/QueryWeight.shcd";
                        uVar5 = F_00688330((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x354),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
                        if (uVar5 != 0) {
                          bVar1 = F_0067d150(pvVar6);
                          F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
                          return bVar1 != 0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0067f44c: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_0067fb80 */
byte F_0067fb80(unsigned int gen_a0)
{
  GEN_ENTER(0x67fb80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  byte * pbVar1;
  undefined * pvVar2;
  float fVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  int * piVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  float * pfVar11;
  float fVar12;
  uint * puVar13;
  int iVar14;
  int iVar15;
  float * pfVar16;
  undefined4 uVar17;
  uint uVar18;
  float10 fVar19;
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 0)) = REFG(int, 0x1371288);
  fVar12 = 0.0;
  if (REFG(int, 0x1371288) != 0) {
    if (((*(byte *)((int)this + 0x1510) & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x14)), bVar10 != 0)) {
      dVar7 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x1458);
      (*(float *)(gen_frame + 0xb0)) = gen_bits2f((int)dVar7);
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)dVar7) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar12 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar12)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar17 = *(undefined4 *)((int)this + 0x1458);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x265);
      F_0067d450(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x18))),"sInput",uVar17,((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x18))),0,*(undefined4 *)((int)this + 0x1488)
                  );
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 1;
    }
    if (((*(uint *)((int)this + 0x1510) >> 1 & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x34)), bVar10 != 0)) {
      dVar7 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
      *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x146c);
      (*(float *)(gen_frame + 0xb0)) = gen_bits2f((int)dVar7);
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)dVar7) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar12 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar12)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      pvVar2 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x38)));
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x265);
      F_0067d450(pvVar2,"sInput",*(undefined4 *)((int)this + 0x146c),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x38))),0,*(undefined4 *)((int)this + 0x1458)
                  );
      *((undefined4 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x38) + 0x30))) = 0x7080541;
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 2;
    }
    if (((*(uint *)((int)this + 0x1510) >> 2 & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x54)), bVar10 != 0)) {
      fVar12 = gen_bits2f((int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0));
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar12)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar17 = *(undefined4 *)((int)this + 0x1464);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x25);
      F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x58))),"sDepth",uVar17,((float *)(gen_frame + 0xb4)));
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar12)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar12 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar12)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar17 = *(undefined4 *)((int)this + 0x146c);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x265);
      F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x58))),"sNormal",uVar17,((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x58))),0,*(undefined4 *)((int)this + 0x14c0)
                  );
      ((byte *)(gen_frame + 0x8c))[4] = (byte)REFG(float, 0x1099848);
      ((byte *)(gen_frame + 0x8c))[5] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 1));
      ((byte *)(gen_frame + 0x8c))[6] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 2));
      ((byte *)(gen_frame + 0x8c))[7] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 3));
      ((byte *)(gen_frame + 0x8c))[8] = (byte)REFG(float, 0x1099848);
      ((byte *)(gen_frame + 0x8c))[9] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 1));
      ((byte *)(gen_frame + 0x8c))[10] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 2));
      ((byte *)(gen_frame + 0x8c))[0xb] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 3));
      ((byte *)(gen_frame + 0x8c))[0xc] = (byte)REFG(float, 0x1094808);
      ((byte *)(gen_frame + 0x8c))[0xd] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 1));
      ((byte *)(gen_frame + 0x8c))[0xe] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 2));
      ((byte *)(gen_frame + 0x8c))[0xf] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 3));
      ((byte *)(gen_frame + 0x8c))[0x10] = (byte)REFG(float, 0x1099848);
      ((byte *)(gen_frame + 0x8c))[0x11] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 1));
      ((byte *)(gen_frame + 0x8c))[0x12] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 2));
      ((byte *)(gen_frame + 0x8c))[0x13] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 3));
      ((byte *)(gen_frame + 0x8c))[0x14] = (byte)REFG(float, 0x1099848);
      ((byte *)(gen_frame + 0x8c))[0x15] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 1));
      ((byte *)(gen_frame + 0x8c))[0x16] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 2));
      ((byte *)(gen_frame + 0x8c))[0x17] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 3));
      ((byte *)(gen_frame + 0x8c))[0x18] = (byte)REFG(float, 0x1094808);
      ((byte *)(gen_frame + 0x8c))[0x19] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 1));
      ((byte *)(gen_frame + 0x8c))[0x1a] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 2));
      ((byte *)(gen_frame + 0x8c))[0x1b] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 3));
      ((byte *)(gen_frame + 0x8c))[0x1c] = (byte)REFG(float, 0x1094808);
      ((byte *)(gen_frame + 0x8c))[0x1d] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 1));
      ((byte *)(gen_frame + 0x8c))[0x1e] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 2));
      ((byte *)(gen_frame + 0x8c))[0x1f] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 3));
      ((byte *)(gen_frame + 0x8c))[0x20] = (byte)REFG(float, 0x1094808);
      ((byte *)(gen_frame + 0x8c))[0x21] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 1));
      ((byte *)(gen_frame + 0x8c))[0x22] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 2));
      ((byte *)(gen_frame + 0x8c))[0x23] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 3));
      pfVar11 = (float *)((byte *)(gen_frame + 0x8c));
      pfVar16 = ((float *)(gen_frame + 0xb4));
      for (iVar14 = 8; pfVar16 = (float *)((int)pfVar16 + 4), pfVar11 = pfVar11 + 1, iVar14 != 0;
          iVar14 = iVar14 + -1) {
        *pfVar16 = *pfVar11;
      }
      F_00677650(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x58))),((float *)(gen_frame + 0xb4)) + 1,4);
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 4;
    }
    if (((*(uint *)((int)this + 0x1510) >> 3 & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x74)), bVar10 != 0)) {
      fVar12 = gen_bits2f((int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0));
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar12)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar17 = *(undefined4 *)((int)this + 0x14c0);
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0x78);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x25);
      F_0067d3e0((undefined *)*puVar4,"sDepthNormalZ",uVar17,((float *)(gen_frame + 0xb4)));
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar12)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar17 = *(undefined4 *)((int)this + 0x1468);
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0x78);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x25);
      F_0067d3e0((undefined *)*puVar4,"sDepth",uVar17,((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x78))),0,*(undefined4 *)((int)this + 0x1494)
                  );
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar12)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x78) + 4)));
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x265);
      F_0067d3e0(pvVar2,"sInput",*(undefined4 *)((int)this + 0x14a8),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x78) + 4))),0,*(undefined4 *)((int)this + 0x1494))
      ;
      *((undefined1 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x78) + 4))) + 0x30))) = REFP(0x00a00101);
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar12)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar12 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar12)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar17 = *(undefined4 *)((int)this + 0x1458);
      iVar14 = *(int *)((int)this + 0x78);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x265);
      F_0067d450(*(undefined * PTR32 *)(iVar14 + 8),"sInput",uVar17,((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x78) + 8))),0,*(undefined4 *)((int)this + 0x1494))
      ;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x78) + 8))) + 0x30))) = 0xa88101;
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 8;
    }
    if (((*(uint *)((int)this + 0x1510) >> 4 & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x94)), bVar10 != 0)) {
      dVar7 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
      *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)((int)this + 0x1458);
      (*(float *)(gen_frame + 0xb0)) = gen_bits2f((int)dVar7);
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)dVar7) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar12 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar12)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar17 = *(undefined4 *)((int)this + 0x1458);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x25);
      F_0067d450(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x98))),"sInput",uVar17,((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x98))),0,*(undefined4 *)((int)this + 0x1488)
                  );
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x10;
    }
    if (((*(uint *)((int)this + 0x1510) >> 5 & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0xb4)), bVar10 != 0)) {
      dVar7 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
      *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)((int)this + 0x1458);
      fVar12 = gen_bits2f((int)dVar7);
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar12)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      pvVar2 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xb8)));
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x265);
      F_0067d450(pvVar2,"sInput",*(undefined4 *)((int)this + 0x1458),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xb8))),0,*(undefined4 *)((int)this + 0x148c)
                  );
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar12)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar17 = *(undefined4 *)((int)this + 0x148c);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x265);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xb8) + 4))),"sInput",uVar17,((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xb8) + 4))),0,*(undefined4 *)((int)this + 0x14a0))
      ;
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar12)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar17 = *(undefined4 *)((int)this + 0x14a0);
      iVar14 = *(int *)((int)this + 0xb8);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x265);
      F_0067d450(*(undefined * PTR32 *)(iVar14 + 8),"sInput",uVar17,((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xb8) + 8))),0,*(undefined4 *)((int)this + 0x14ac))
      ;
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar12)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xb8) + 0xc)));
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x265);
      F_0067d450(pvVar2,"sInput",*(undefined4 *)((int)this + 0x14ac),((float *)(gen_frame + 0xb4)));
      iVar14 = *(int *)((int)this + 0xb8);
      uVar17 = *((undefined4 *)GEN_TOP((*(int *)(iVar14 + 0xc) + 0x50)));
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar12)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar12 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar12)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x25);
      F_0067d3e0(*(undefined * PTR32 *)(iVar14 + 0x10),"sToneMap",uVar17,((float *)(gen_frame + 0xb4)));
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x20;
    }
    if (((*(uint *)((int)this + 0x1510) >> 6 & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0xd4)), bVar10 != 0)) {
      dVar7 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
      *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)((int)this + 0x1458);
      (*(int * PTR32 *)(gen_frame + 0x88)) = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x10))) + 0x7c)));
      fVar12 = gen_bits2f((int)dVar7);
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar12)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar17 = *(undefined4 *)((int)this + 0x1458);
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0xd8);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x25);
      F_0067d450((undefined *)*puVar4,"sInput",uVar17,((float *)(gen_frame + 0xb4)));
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar12)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar12 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar12)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0xd8);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x25);
      F_0067d3e0((undefined *)*puVar4,"sToneMap",(*(int * PTR32 *)(gen_frame + 0x88)),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xd8))),0,*(undefined4 *)((int)this + 0x1488)
                  );
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x40;
    }
    if (((*(uint *)((int)this + 0x1510) >> 7 & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0xf4)), bVar10 != 0)) {
      dVar7 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
      *(undefined4 *)((int)this + 0x100) = *(undefined4 *)((int)this + 0x1458);
      (*(float *)(gen_frame + 0xb0)) = gen_bits2f((int)dVar7);
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)dVar7) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar12 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar12)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar17 = *(undefined4 *)((int)this + 0x1458);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x25);
      F_0067d450(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xf8))),"sInput",uVar17,((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xf8))),0,*(undefined4 *)((int)this + 0x1460)
                  );
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x80;
    }
    if (((*(uint *)((int)this + 0x1510) >> 8 & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x114)), bVar10 != 0)) {
      dVar7 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
      *(undefined4 *)((int)this + 0x120) = *(undefined4 *)((int)this + 0x1458);
      (*(float *)(gen_frame + 0xb0)) = gen_bits2f((int)dVar7);
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)dVar7) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar12 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar12)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      pvVar2 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x118)));
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x265);
      F_0067d450(pvVar2,"sInput",*(undefined4 *)((int)this + 0x1458),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x118))),0,
                   *(undefined4 *)((int)this + 0x1498));
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x100;
    }
    if (((*(uint *)((int)this + 0x1510) >> 9 & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x134)), bVar10 != 0)) {
      dVar7 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
      *(undefined4 *)((int)this + 0x140) = *(undefined4 *)((int)this + 0x1458);
      fVar12 = gen_bits2f((int)dVar7);
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar12)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar17 = *(undefined4 *)((int)this + 0x1498);
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0x138);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x265);
      F_0067d450((undefined *)*puVar4,"sInput",uVar17,((float *)(gen_frame + 0xb4)));
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar12)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar17 = *(undefined4 *)((int)this + 0x1494);
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0x138);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x265);
      F_0067d3e0((undefined *)*puVar4,"sGeometry",uVar17,((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x138))),0,
                   *(undefined4 *)((int)this + 0x149c));
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar12)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x138) + 4)));
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x265);
      F_0067d450(pvVar2,"sInput",*(undefined4 *)((int)this + 0x149c),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x138) + 4))),0,*(undefined4 *)((int)this + 0x14a8)
                  );
      iVar14 = *((int *)GEN_TOP((*(int *)((int)this + 0x138) + 4)));
      pbVar1 = (byte *)(iVar14 + 0x48);
      *pbVar1 = *pbVar1 | 1;
      *(undefined4 *)(iVar14 + 0x34) = 0;
      iVar14 = *((int *)GEN_TOP((*(int *)((int)this + 0x138) + 4)));
      *(undefined2 *)(iVar14 + 0x3c) = 0xffff;
      *(undefined2 *)(iVar14 + 0x3e) = 0xffff;
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar12)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar17 = *(undefined4 *)((int)this + 0x14a8);
      iVar14 = *(int *)((int)this + 0x138);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x26a);
      F_0067d450(*(undefined * PTR32 *)(iVar14 + 8),"sInput",uVar17,((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x138) + 8))),0,*(undefined4 *)((int)this + 0x14b4)
                  );
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar12)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x138) + 0xc)));
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x26a);
      F_0067d450(pvVar2,"sInput",*(undefined4 *)((int)this + 0x14a8),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x138) + 0xc))),0,
                   *(undefined4 *)((int)this + 0x14a4));
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar12)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar17 = *(undefined4 *)((int)this + 0x14b4);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x265);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x138) + 0x10))),"sInput",uVar17,((float *)(gen_frame + 0xb4)));
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar12)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar12 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar12)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar17 = *(undefined4 *)((int)this + 0x14a4);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x265);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x138) + 0x10))),"sMerge1",uVar17,((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x138) + 0x10))),0,
                   *(undefined4 *)((int)this + 0x14a8));
      ((float *)(gen_frame + 0x40))[0] = 0.0;
      ((float *)(gen_frame + 0x40))[1] = 0.0;
      ((float *)(gen_frame + 0x40))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x40))[2], REFG(float, 0x10adb80));
      ((float *)(gen_frame + 0x40))[3] = 0.0;
      ((float *)(gen_frame + 0x40))[4] = GEN_FLT_TO(((float *)(gen_frame + 0x40))[4], REFG(float, 0x10adb7c));
      (*(float *)(gen_frame + 0x54)) = 0.0;
      (*(float *)(gen_frame + 0x58)) = 0.0;
      (*(float *)(gen_frame + 0x5c)) = REFG(float, 0x10adb80);
      (*(float *)(gen_frame + 0x60)) = 0.0;
      (*(float *)(gen_frame + 0x64)) = REFG(float, 0x10adb7c);
      (*(float *)(gen_frame + 0x68)) = REFG(float, 0x10adb80);
      (*(float *)(gen_frame + 0x6c)) = REFG(float, 0x10adb80);
      (*(float *)(gen_frame + 0x70)) = REFG(float, 0x10adb80);
      (*(float *)(gen_frame + 0x74)) = REFG(float, 0x10adb7c);
      (*(float *)(gen_frame + 0x78)) = REFG(float, 0x10adb7c);
      (*(float *)(gen_frame + 0x7c)) = REFG(float, 0x10adb80);
      (*(float *)(gen_frame + 0x80)) = REFG(float, 0x10adb7c);
      (*(float *)(gen_frame + 0x84)) = REFG(float, 0x10adb7c);
      pfVar11 = ((float *)(gen_frame + 0xb4));
      pfVar16 = ((float *)(gen_frame + 0x40));
      for (iVar14 = 0x12; pfVar11 = (float *)((int)pfVar11 + 4), iVar14 != 0; iVar14 = iVar14 + -1)
      {
        *pfVar11 = *pfVar16;
        pfVar16 = pfVar16 + 1;
      }
      F_00677650(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x138) + 4))),((float *)(gen_frame + 0xb4)) + 1,9);
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x200;
    }
    if (((*(uint *)((int)this + 0x1510) >> 10 & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x154)), bVar10 != 0)) {
      if ((*(uint *)((int)this + 0x1508) & 0x400) == 0) {
        uVar17 = *(undefined4 *)((int)this + 0x149c);
      }
      else {
        uVar17 = *(undefined4 *)((int)this + 0x148c);
      }
      (*(float *)(gen_frame + 0xb0)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0));
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar11 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
        pfVar11 = ((float *)(gen_frame + 0xb4));
      }
      fVar12 = *pfVar11;
      (*(float *)(gen_frame + 0xb0)) = fVar12;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar11 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar12)) {
        pfVar11 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar5 = *(undefined4 *)((int)this + 0x14a8);
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0x158);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar11) & 0x3ff) << 10 | 0x265);
      F_0067d3e0((undefined *)*puVar4,"sInput",uVar5,((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x158))),0,uVar17);
      *((undefined4 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x158) + 0x30))) = 0x7080111;
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x158) + 4))),"sInput",uVar17,((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x158) + 4))),0,*(undefined4 *)((int)this + 0x1458)
                  );
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x158) + 4))) + 0x30))) = 0x7080111;
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x400;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0xb & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x174)), bVar10 != 0)) {
      *(undefined4 *)((int)this + 0x180) = *(undefined4 *)((int)this + 0x1458);
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d450(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x178))),"sInput",
                   *(undefined4 *)((int)this + 0x1458),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x178))),0,
                   *(undefined4 *)((int)this + 0x1488));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x178) + 4))),"sInput",
                   *(undefined4 *)((int)this + 0x1488),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x178) + 4))),0,*(undefined4 *)((int)this + 0x1458)
                  );
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x800;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0xc & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x194)), bVar10 != 0)) {
      ((byte *)(gen_frame + 0x8c))[0x14] = (byte)REFG(float, 0x1090708);
      ((byte *)(gen_frame + 0x8c))[0x15] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 1));
      ((byte *)(gen_frame + 0x8c))[0x16] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 2));
      ((byte *)(gen_frame + 0x8c))[0x17] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 3));
      ((byte *)(gen_frame + 0x8c))[0x18] = (byte)REFG(float, 0x1087f04);
      ((byte *)(gen_frame + 0x8c))[0x19] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
      ((byte *)(gen_frame + 0x8c))[0x1a] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
      ((byte *)(gen_frame + 0x8c))[0x1b] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
      ((byte *)(gen_frame + 0x8c))[0x1c] = (byte)REFG(float, 0x1087f04);
      ((byte *)(gen_frame + 0x8c))[0x1d] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
      ((byte *)(gen_frame + 0x8c))[0x1e] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
      ((byte *)(gen_frame + 0x8c))[0x1f] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
      ((byte *)(gen_frame + 0x8c))[0x20] = (byte)REFG(float, 0x1090708);
      ((byte *)(gen_frame + 0x8c))[0x21] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 1));
      ((byte *)(gen_frame + 0x8c))[0x22] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 2));
      ((byte *)(gen_frame + 0x8c))[0x23] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 3));
      F_006775f0(**(undefined4 * PTR32 *)((int)this + 0x198),(uint)(((byte *)(gen_frame + 0x8c)) + 0x14));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x198))),0,
                   *(undefined4 *)((int)this + 0x14a8));
      ((byte *)(gen_frame + 0x8c))[0x14] = (byte)REFG(float, 0x1090708);
      ((byte *)(gen_frame + 0x8c))[0x15] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 1));
      ((byte *)(gen_frame + 0x8c))[0x16] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 2));
      ((byte *)(gen_frame + 0x8c))[0x17] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 3));
      ((byte *)(gen_frame + 0x8c))[0x18] = (byte)REFG(float, 0x1087f04);
      ((byte *)(gen_frame + 0x8c))[0x19] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
      ((byte *)(gen_frame + 0x8c))[0x1a] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
      ((byte *)(gen_frame + 0x8c))[0x1b] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
      ((byte *)(gen_frame + 0x8c))[0x1c] = (byte)REFG(float, 0x1087f04);
      ((byte *)(gen_frame + 0x8c))[0x1d] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
      ((byte *)(gen_frame + 0x8c))[0x1e] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
      ((byte *)(gen_frame + 0x8c))[0x1f] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
      ((byte *)(gen_frame + 0x8c))[0x20] = (byte)REFG(float, 0x1090708);
      ((byte *)(gen_frame + 0x8c))[0x21] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 1));
      ((byte *)(gen_frame + 0x8c))[0x22] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 2));
      ((byte *)(gen_frame + 0x8c))[0x23] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 3));
      F_006775f0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x198) + 4))),(uint)(((byte *)(gen_frame + 0x8c)) + 0x14));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x198) + 4))),0,*(undefined4 *)((int)this + 0x14a8)
                  );
      ((byte *)(gen_frame + 0x8c))[0x14] = (byte)REFG(float, 0x1090708);
      ((byte *)(gen_frame + 0x8c))[0x15] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 1));
      ((byte *)(gen_frame + 0x8c))[0x16] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 2));
      ((byte *)(gen_frame + 0x8c))[0x17] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 3));
      ((byte *)(gen_frame + 0x8c))[0x18] = (byte)REFG(float, 0x1087f04);
      ((byte *)(gen_frame + 0x8c))[0x19] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
      ((byte *)(gen_frame + 0x8c))[0x1a] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
      ((byte *)(gen_frame + 0x8c))[0x1b] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
      ((byte *)(gen_frame + 0x8c))[0x1c] = (byte)REFG(float, 0x1087f04);
      ((byte *)(gen_frame + 0x8c))[0x1d] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
      ((byte *)(gen_frame + 0x8c))[0x1e] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
      ((byte *)(gen_frame + 0x8c))[0x1f] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
      ((byte *)(gen_frame + 0x8c))[0x20] = (byte)REFG(float, 0x1090708);
      ((byte *)(gen_frame + 0x8c))[0x21] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 1));
      ((byte *)(gen_frame + 0x8c))[0x22] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 2));
      ((byte *)(gen_frame + 0x8c))[0x23] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 3));
      F_006775f0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x198) + 8))),(uint)(((byte *)(gen_frame + 0x8c)) + 0x14));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x198) + 8))),0,*(undefined4 *)((int)this + 0x14a8)
                  );
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x198) + 0xc))),"sInput",
                   *(undefined4 *)((int)this + 0x14a8),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x198) + 0xc))),0,
                   *(undefined4 *)((int)this + 0x1458));
      F_00676250(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x198) + 0xc))),*(undefined4 *)((int)this + 0x1464)
                  );
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x198) + 0xc))) + 8))) + 0x20))) =
           REFG(float, 0x1087f04);
      *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x198) + 0xc))) + 0x2c))) = REFG(undefined4, 0x1302364) & 0x1f;
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x1000;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0xd & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x1b4)), bVar10 != 0)) {
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x1b8))),0,
                   *(undefined4 *)((int)this + 0x1458));
      F_00676250(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x1b8))),*(undefined4 *)((int)this + 0x1464))
      ;
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x2000;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0xe & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x1d4)), bVar10 != 0)) {
      F_004d4af0(((float *)(gen_frame + 0xb4)),0,0,2,9,(float)(float10)0,0,0,0);
      uVar17 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 0));
      F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x1d8))),"sInput",
                   *((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 0)) + 0x58))),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x1d8))),0,*(undefined4 *)(uVar17 + 0x8c));
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0x1d8);
      ((byte *)(gen_frame + 0x8c))[4] = (byte)REFG(float, 0x1090708);
      ((byte *)(gen_frame + 0x8c))[5] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 1));
      ((byte *)(gen_frame + 0x8c))[6] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 2));
      ((byte *)(gen_frame + 0x8c))[7] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 3));
      ((byte *)(gen_frame + 0x8c))[8] = (byte)REFG(float, 0x109cab8);
      ((byte *)(gen_frame + 0x8c))[9] = (*(undefined1 *)((char *)&REFG(float, 0x109cab8) + 1));
      ((byte *)(gen_frame + 0x8c))[10] = (*(undefined1 *)((char *)&REFG(float, 0x109cab8) + 2));
      ((byte *)(gen_frame + 0x8c))[0xb] = (*(undefined1 *)((char *)&REFG(float, 0x109cab8) + 3));
      ((byte *)(gen_frame + 0x8c))[0xc] = (byte)REFG(float, 0x1087f04);
      ((byte *)(gen_frame + 0x8c))[0xd] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
      ((byte *)(gen_frame + 0x8c))[0xe] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
      ((byte *)(gen_frame + 0x8c))[0xf] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
      ((byte *)(gen_frame + 0x8c))[0x10] = (byte)REFG(float, 0x1088068);
      ((byte *)(gen_frame + 0x8c))[0x11] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 1));
      ((byte *)(gen_frame + 0x8c))[0x12] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 2));
      ((byte *)(gen_frame + 0x8c))[0x13] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 3));
      ((byte *)(gen_frame + 0x8c))[0x14] = (byte)REFG(float, 0x1088068);
      ((byte *)(gen_frame + 0x8c))[0x15] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 1));
      ((byte *)(gen_frame + 0x8c))[0x16] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 2));
      ((byte *)(gen_frame + 0x8c))[0x17] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 3));
      ((byte *)(gen_frame + 0x8c))[0x18] = (byte)REFG(float, 0x1090708);
      ((byte *)(gen_frame + 0x8c))[0x19] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 1));
      ((byte *)(gen_frame + 0x8c))[0x1a] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 2));
      ((byte *)(gen_frame + 0x8c))[0x1b] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 3));
      ((byte *)(gen_frame + 0x8c))[0x1c] = (byte)REFG(float, 0x109cab8);
      ((byte *)(gen_frame + 0x8c))[0x1d] = (*(undefined1 *)((char *)&REFG(float, 0x109cab8) + 1));
      ((byte *)(gen_frame + 0x8c))[0x1e] = (*(undefined1 *)((char *)&REFG(float, 0x109cab8) + 2));
      ((byte *)(gen_frame + 0x8c))[0x1f] = (*(undefined1 *)((char *)&REFG(float, 0x109cab8) + 3));
      ((byte *)(gen_frame + 0x8c))[0x20] = (byte)REFG(float, 0x1087f04);
      ((byte *)(gen_frame + 0x8c))[0x21] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
      ((byte *)(gen_frame + 0x8c))[0x22] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
      ((byte *)(gen_frame + 0x8c))[0x23] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
      pfVar11 = (float *)((byte *)(gen_frame + 0x8c));
      pfVar16 = ((float *)(gen_frame + 0xb4));
      for (iVar14 = 8; pfVar16 = (float *)((int)pfVar16 + 4), pfVar11 = pfVar11 + 1, iVar14 != 0;
          iVar14 = iVar14 + -1) {
        *pfVar16 = *pfVar11;
      }
      F_00677650((undefined *)*puVar4,((float *)(gen_frame + 0xb4)) + 1,4);
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x4000;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0xf & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 500)), bVar10 != 0)) {
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x1f8))),"sInput",
                   *(undefined4 *)((int)this + 0x145c),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x1f8))),0,
                   *(undefined4 *)((int)this + 0x14a8));
      *((undefined4 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f8) + 0x30))) = 0x7808511;
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 4))),&REFG(undefined, 0x10ad690),
                   *(undefined4 *)((int)this + 0x14a8),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 4))),0,*(undefined4 *)((int)this + 0x14a4)
                  );
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 8))),"sInput",
                   *(undefined4 *)((int)this + 0x145c),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 8))),0,*(undefined4 *)((int)this + 0x1458)
                  );
      F_00676250(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 8))),*(undefined4 *)((int)this + 0x1464));
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1f8) + 8))) + 8))) + 0x20))) = REFG(float, 0x1087f04)
      ;
      *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1f8) + 8))) + 0x2c))) = REFG(undefined4, 0x1302364) & 0x1f;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1f8) + 8))) + 0x30))) = 0x7800511;
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 0xc))),"sInput",
                   *(undefined4 *)((int)this + 0x14a4),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 0xc))),0,
                   *(undefined4 *)((int)this + 0x1458));
      F_00676250(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 0xc))),*(undefined4 *)((int)this + 0x1464)
                  );
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1f8) + 0xc))) + 8))) + 0x20))) =
           REFG(float, 0x1087f04);
      *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1f8) + 0xc))) + 0x2c))) = REFG(undefined4, 0x1302364) & 0x1f;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1f8) + 0xc))) + 0x30))) = 0x7080111;
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x8000;
    }
    if (((*(byte *)((int)this + 0x1512) & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x214)), bVar10 != 0)) {
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x218))),"sDepth",
                   *(undefined4 *)((int)this + 0x1464),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x218))),&REFG(undefined, 0x10ad6b0),
                   *(undefined4 *)((int)this + 0x14a8),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x218))),"sGeometry",
                   *(undefined4 *)((int)this + 0x1494),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x218))),0,
                   *(undefined4 *)((int)this + 0x1458));
      *((undefined4 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x218) + 0x30))) = 0x7800541;
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x10000;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0x11 & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x234)), bVar10 != 0)) {
      *(undefined4 *)((int)this + 0x240) = *(undefined4 *)((int)this + 0x1458);
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d450(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x238))),"sInput",
                   *(undefined4 *)((int)this + 0x1458),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x238))),"sGeometry",
                   *(undefined4 *)((int)this + 0x1494),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x238))),0,
                   *(undefined4 *)((int)this + 0x1488));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 4))),"sInput",
                   *(undefined4 *)((int)this + 0x1488),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 4))),0,*(undefined4 *)((int)this + 0x148c)
                  );
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 8))),"sInput",
                   *(undefined4 *)((int)this + 0x148c),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 8))),0,*(undefined4 *)((int)this + 0x14a0)
                  );
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0xc))),"sInput",
                   *(undefined4 *)((int)this + 0x1488),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0xc))),0,
                   *(undefined4 *)((int)this + 0x149c));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0xc))),1,
                   *(undefined4 *)((int)this + 0x14a0));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x10))),"sInput",
                   *(undefined4 *)((int)this + 0x14a0),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x10))),0,
                   *(undefined4 *)((int)this + 0x14a8));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x14))),"sNear",
                   *(undefined4 *)((int)this + 0x149c),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x14))),0,
                   *(undefined4 *)((int)this + 0x14a4));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x18))),&REFG(undefined, 0x10ad700),
                   *(undefined4 *)((int)this + 0x14a8),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x18))),"sInput",
                   *(undefined4 *)((int)this + 0x1488),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x18))),0,
                   *(undefined4 *)((int)this + 0x1458));
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x238) + 0x18))) + 0x30))) = 0x7080011;
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x1c))),"sNear",
                   *(undefined4 *)((int)this + 0x14a4),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x1c))),&REFG(undefined, 0x10ad718),
                   *(undefined4 *)((int)this + 0x14a8),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x1c))),"sInput",
                   *(undefined4 *)((int)this + 0x1488),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x1c))),0,
                   *(undefined4 *)((int)this + 0x1458));
      uVar8 = REFG(float, 0x1099848);
      uVar17 = REFG(float, 0x1094808);
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x238) + 0x1c))) + 0x30))) = 0x7080011;
      uVar9 = REFG(float, 0x1099848);
      uVar5 = REFG(float, 0x1094808);
      (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 0)) = (byte)uVar8;
      (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 1)) = SUB41(uVar8,1);
      (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 2)) = SUB41(uVar8,2);
      (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 3)) = SUB41(uVar8,3);
      ((byte *)(gen_frame + 0x8c))[4] = (byte)REFG(float, 0x1099848);
      ((byte *)(gen_frame + 0x8c))[5] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 1));
      ((byte *)(gen_frame + 0x8c))[6] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 2));
      ((byte *)(gen_frame + 0x8c))[7] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 3));
      (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 0)) = (byte)uVar8;
      (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 1)) = SUB41(uVar8,1);
      (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 2)) = SUB41(uVar8,2);
      (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 3)) = SUB41(uVar8,3);
      ((byte *)(gen_frame + 0x8c))[8] = (byte)REFG(float, 0x1099848);
      ((byte *)(gen_frame + 0x8c))[9] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 1));
      ((byte *)(gen_frame + 0x8c))[10] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 2));
      ((byte *)(gen_frame + 0x8c))[0xb] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 3));
      (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 0)) = (byte)uVar17;
      (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 1)) = SUB41(uVar17,1);
      (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 2)) = SUB41(uVar17,2);
      (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 3)) = SUB41(uVar17,3);
      ((byte *)(gen_frame + 0x8c))[0xc] = (byte)REFG(float, 0x1094808);
      ((byte *)(gen_frame + 0x8c))[0xd] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 1));
      ((byte *)(gen_frame + 0x8c))[0xe] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 2));
      ((byte *)(gen_frame + 0x8c))[0xf] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 3));
      (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 0)) = (byte)uVar8;
      (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 1)) = SUB41(uVar8,1);
      (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 2)) = SUB41(uVar8,2);
      (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 3)) = SUB41(uVar8,3);
      ((byte *)(gen_frame + 0x8c))[0x10] = (byte)REFG(float, 0x1099848);
      ((byte *)(gen_frame + 0x8c))[0x11] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 1));
      ((byte *)(gen_frame + 0x8c))[0x12] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 2));
      ((byte *)(gen_frame + 0x8c))[0x13] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 3));
      (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 0)) = (byte)uVar8;
      (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 1)) = SUB41(uVar8,1);
      (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 2)) = SUB41(uVar8,2);
      (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 3)) = SUB41(uVar8,3);
      ((byte *)(gen_frame + 0x8c))[0x14] = (byte)REFG(float, 0x1099848);
      ((byte *)(gen_frame + 0x8c))[0x15] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 1));
      ((byte *)(gen_frame + 0x8c))[0x16] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 2));
      ((byte *)(gen_frame + 0x8c))[0x17] = (*(undefined1 *)((char *)&REFG(float, 0x1099848) + 3));
      (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 0)) = (byte)uVar17;
      (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 1)) = SUB41(uVar17,1);
      (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 2)) = SUB41(uVar17,2);
      (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 3)) = SUB41(uVar17,3);
      ((byte *)(gen_frame + 0x8c))[0x18] = (byte)REFG(float, 0x1094808);
      ((byte *)(gen_frame + 0x8c))[0x19] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 1));
      ((byte *)(gen_frame + 0x8c))[0x1a] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 2));
      ((byte *)(gen_frame + 0x8c))[0x1b] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 3));
      (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 0)) = (byte)uVar17;
      (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 1)) = SUB41(uVar17,1);
      (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 2)) = SUB41(uVar17,2);
      (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 3)) = SUB41(uVar17,3);
      ((byte *)(gen_frame + 0x8c))[0x1c] = (byte)REFG(float, 0x1094808);
      ((byte *)(gen_frame + 0x8c))[0x1d] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 1));
      ((byte *)(gen_frame + 0x8c))[0x1e] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 2));
      ((byte *)(gen_frame + 0x8c))[0x1f] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 3));
      (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 0)) = (byte)uVar17;
      (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 1)) = SUB41(uVar17,1);
      (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 2)) = SUB41(uVar17,2);
      (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 3)) = SUB41(uVar17,3);
      ((byte *)(gen_frame + 0x8c))[0x20] = (byte)REFG(float, 0x1094808);
      ((byte *)(gen_frame + 0x8c))[0x21] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 1));
      ((byte *)(gen_frame + 0x8c))[0x22] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 2));
      ((byte *)(gen_frame + 0x8c))[0x23] = (*(undefined1 *)((char *)&REFG(float, 0x1094808) + 3));
      pfVar11 = (float *)((byte *)(gen_frame + 0x8c));
      pfVar16 = ((float *)(gen_frame + 0xb4));
      for (iVar14 = 8; pfVar16 = (float *)((int)pfVar16 + 4), pfVar11 = pfVar11 + 1, iVar14 != 0;
          iVar14 = iVar14 + -1) {
        *pfVar16 = *pfVar11;
      }
      REFG(float, 0x1094808) = uVar5;
      REFG(float, 0x1099848) = uVar9;
      F_00677650(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0xc))),((float *)(gen_frame + 0xb4)) + 1,4);
      iVar14 = *(int *)((int)this + 0x238);
      ((byte *)(gen_frame + 0x8c))[4] = (byte)REFG(float, 0x109cab8);
      ((byte *)(gen_frame + 0x8c))[5] = (*(undefined1 *)((char *)&REFG(float, 0x109cab8) + 1));
      ((byte *)(gen_frame + 0x8c))[6] = (*(undefined1 *)((char *)&REFG(float, 0x109cab8) + 2));
      ((byte *)(gen_frame + 0x8c))[7] = (*(undefined1 *)((char *)&REFG(float, 0x109cab8) + 3));
      ((byte *)(gen_frame + 0x8c))[8] = (byte)REFG(float, 0x109cab8);
      ((byte *)(gen_frame + 0x8c))[9] = (*(undefined1 *)((char *)&REFG(float, 0x109cab8) + 1));
      ((byte *)(gen_frame + 0x8c))[10] = (*(undefined1 *)((char *)&REFG(float, 0x109cab8) + 2));
      ((byte *)(gen_frame + 0x8c))[0xb] = (*(undefined1 *)((char *)&REFG(float, 0x109cab8) + 3));
      ((byte *)(gen_frame + 0x8c))[0xc] = (byte)REFG(float, 0x1088068);
      ((byte *)(gen_frame + 0x8c))[0xd] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 1));
      ((byte *)(gen_frame + 0x8c))[0xe] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 2));
      ((byte *)(gen_frame + 0x8c))[0xf] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 3));
      ((byte *)(gen_frame + 0x8c))[0x10] = (byte)REFG(float, 0x109cab8);
      ((byte *)(gen_frame + 0x8c))[0x11] = (*(undefined1 *)((char *)&REFG(float, 0x109cab8) + 1));
      ((byte *)(gen_frame + 0x8c))[0x12] = (*(undefined1 *)((char *)&REFG(float, 0x109cab8) + 2));
      ((byte *)(gen_frame + 0x8c))[0x13] = (*(undefined1 *)((char *)&REFG(float, 0x109cab8) + 3));
      ((byte *)(gen_frame + 0x8c))[0x14] = (byte)REFG(float, 0x109cab8);
      ((byte *)(gen_frame + 0x8c))[0x15] = (*(undefined1 *)((char *)&REFG(float, 0x109cab8) + 1));
      ((byte *)(gen_frame + 0x8c))[0x16] = (*(undefined1 *)((char *)&REFG(float, 0x109cab8) + 2));
      ((byte *)(gen_frame + 0x8c))[0x17] = (*(undefined1 *)((char *)&REFG(float, 0x109cab8) + 3));
      ((byte *)(gen_frame + 0x8c))[0x18] = (byte)REFG(float, 0x1088068);
      ((byte *)(gen_frame + 0x8c))[0x19] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 1));
      ((byte *)(gen_frame + 0x8c))[0x1a] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 2));
      ((byte *)(gen_frame + 0x8c))[0x1b] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 3));
      ((byte *)(gen_frame + 0x8c))[0x1c] = (byte)REFG(float, 0x1088068);
      ((byte *)(gen_frame + 0x8c))[0x1d] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 1));
      ((byte *)(gen_frame + 0x8c))[0x1e] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 2));
      ((byte *)(gen_frame + 0x8c))[0x1f] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 3));
      ((byte *)(gen_frame + 0x8c))[0x20] = (byte)REFG(float, 0x1088068);
      ((byte *)(gen_frame + 0x8c))[0x21] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 1));
      ((byte *)(gen_frame + 0x8c))[0x22] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 2));
      ((byte *)(gen_frame + 0x8c))[0x23] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 3));
      pfVar11 = (float *)((byte *)(gen_frame + 0x8c));
      pfVar16 = ((float *)(gen_frame + 0xb4));
      for (iVar15 = 8; pfVar16 = (float *)((int)pfVar16 + 4), pfVar11 = pfVar11 + 1, iVar15 != 0;
          iVar15 = iVar15 + -1) {
        *pfVar16 = *pfVar11;
      }
      F_00677650(*(undefined * PTR32 *)(iVar14 + 0x10),((float *)(gen_frame + 0xb4)) + 1,4);
      F_00675e70(((float *)(gen_frame + 0xb4)) + 1);
      F_00677650(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x14))),((float *)(gen_frame + 0xb4)) + 1,0x10);
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x20000;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0x12 & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x254)), bVar10 != 0)) {
      *(undefined4 *)((int)this + 0x260) = *(undefined4 *)((int)this + 0x1458);
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 600))),"sDepth",
                   *(undefined4 *)((int)this + 0x1464),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 600))),0,*(undefined4 *)((int)this + 0x14b8))
      ;
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 4))),"sInput",
                   *(undefined4 *)((int)this + 0x1458),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 4))),"sVelocity",
                   *(undefined4 *)((int)this + 0x14b8),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 4))),0,*(undefined4 *)((int)this + 0x148c));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 8))),"sInput",
                   *(undefined4 *)((int)this + 0x148c),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 8))),"sVelocity",
                   *(undefined4 *)((int)this + 0x14b8),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 8))),0,*(undefined4 *)((int)this + 0x1490));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 0xc))),"sInput",
                   *(undefined4 *)((int)this + 0x1490),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 0xc))),"sVelocity",
                   *(undefined4 *)((int)this + 0x14b8),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 0xc))),0,*(undefined4 *)((int)this + 0x148c)
                  );
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 0x10))),"sInput",
                   *(undefined4 *)((int)this + 0x148c),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 0x10))),"sVelocity",
                   *(undefined4 *)((int)this + 0x14b8),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 0x10))),0,
                   *(undefined4 *)((int)this + 0x1490));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 0x14))),"sInput",
                   *(undefined4 *)((int)this + 0x1458),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 0x14))),"sBlur",
                   *(undefined4 *)((int)this + 0x1490),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 0x14))),0,
                   *(undefined4 *)((int)this + 0x1488));
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x40000;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0x13 & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x274)), bVar10 != 0)) {
      *(undefined4 *)((int)this + 0x280) = *(undefined4 *)((int)this + 0x1458);
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x278))),"sInput",
                   *(undefined4 *)((int)this + 0x1458),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x278))),0,
                   *(undefined4 *)((int)this + 0x148c));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x278) + 4))),"sInput",
                   *(undefined4 *)((int)this + 0x148c),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x278) + 4))),0,*(undefined4 *)((int)this + 0x1490)
                  );
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x278) + 8))),"sInput",
                   *(undefined4 *)((int)this + 0x1490),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x278) + 8))),0,*(undefined4 *)((int)this + 0x148c)
                  );
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x278) + 0xc))),"sInput",
                   *(undefined4 *)((int)this + 0x148c),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x278) + 0xc))),0,
                   *(undefined4 *)((int)this + 0x1490));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x278) + 0x10))),"sInput",
                   *(undefined4 *)((int)this + 0x1458),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x278) + 0x10))),"sMerge1",
                   *(undefined4 *)((int)this + 0x1490),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x278) + 0x10))),0,
                   *(undefined4 *)((int)this + 0x1488));
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x80000;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0x14 & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x294)), bVar10 != 0)) {
      if ((*(uint *)((int)this + 0x1508) >> 10 & 1) == 0) {
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 24)) = *(undefined4 *)((int)this + 0x149c);
        uVar17 = *(undefined4 *)((int)this + 0x14a0);
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 32)) = *(undefined4 *)((int)this + 0x14a4);
      }
      else {
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 24)) = *(undefined4 *)((int)this + 0x148c);
        uVar17 = *(undefined4 *)((int)this + 0x1490);
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 32)) = *(undefined4 *)((int)this + 0x1498);
      }
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x298))),"sGeometry",
                   *(undefined4 *)((int)this + 0x1494),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x298))),0,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 24)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 4))),"sInput",(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 24)),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 4))),0,uVar17);
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 8))),"sInput",uVar17,((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 8))),0,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 32)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 0xc))),"sInput",(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 32)),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 0xc))),0,uVar17);
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 0x10))),"sMerge1",uVar17,((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 0x10))),"sMerge2",(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 32)),((float *)(gen_frame + 0xb4)));
      uVar17 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 24));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 0x10))),0,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 24)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),2,2,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 0x14))),"sInput",uVar17,((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 0x14))),0,
                   *(undefined4 *)((int)this + 0x1478));
      if ((*(byte *)((int)this + 0x1508) & 0x18) != 0) {
        iVar14 = *((int *)GEN_TOP((*(int *)((int)this + 0x298) + 0x14)));
        pbVar1 = (byte *)(iVar14 + 0x48);
        *pbVar1 = *pbVar1 | 1;
        *(undefined4 *)(iVar14 + 0x34) = 0;
      }
      ((float *)(gen_frame + 0x8))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x8))[0], REFG(float, 0x10adb78));
      ((float *)(gen_frame + 0x8))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x8))[1], REFG(float, 0x10adb78));
      ((float *)(gen_frame + 0x8))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x8))[2], REFG(float, 0x10ac274));
      ((float *)(gen_frame + 0x8))[3] = GEN_FLT_TO(((float *)(gen_frame + 0x8))[3], REFG(float, 0x10adb78));
      (*(float *)(gen_frame + 0x18)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x10adb78);
      (*(float *)(gen_frame + 0x20)) = REFG(float, 0x10adb74);
      (*(float *)(gen_frame + 0x24)) = REFG(float, 0x10adb78);
      (*(float *)(gen_frame + 0x28)) = REFG(float, 0x10adb78);
      (*(float *)(gen_frame + 0x2c)) = REFG(float, 0x10ac274);
      (*(float *)(gen_frame + 0x30)) = REFG(float, 0x10ac274);
      (*(float *)(gen_frame + 0x34)) = REFG(float, 0x10ac274);
      (*(float *)(gen_frame + 0x38)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x3c)) = REFG(float, 0x10ac274);
      ((float *)(gen_frame + 0x40))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x40))[0], REFG(float, 0x10adb74));
      ((float *)(gen_frame + 0x40))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x40))[1], REFG(float, 0x10ac274));
      ((float *)(gen_frame + 0x40))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x40))[2], REFG(float, 0x10adb78));
      ((float *)(gen_frame + 0x40))[3] = GEN_FLT_TO(((float *)(gen_frame + 0x40))[3], REFG(float, 0x10ac160));
      ((float *)(gen_frame + 0x40))[4] = GEN_FLT_TO(((float *)(gen_frame + 0x40))[4], REFG(float, 0x10ac274));
      (*(float *)(gen_frame + 0x54)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x58)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x5c)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x60)) = REFG(float, 0x10adb74);
      (*(float *)(gen_frame + 0x64)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x68)) = REFG(float, 0x10adb78);
      (*(float *)(gen_frame + 0x6c)) = REFG(float, 0x10adb74);
      (*(float *)(gen_frame + 0x70)) = REFG(float, 0x10ac274);
      (*(float *)(gen_frame + 0x74)) = REFG(float, 0x10adb74);
      (*(float *)(gen_frame + 0x78)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x7c)) = REFG(float, 0x10adb74);
      (*(float *)(gen_frame + 0x80)) = REFG(float, 0x10adb74);
      (*(float *)(gen_frame + 0x84)) = REFG(float, 0x10adb74);
      pfVar11 = ((float *)(gen_frame + 0xb4));
      pfVar16 = ((float *)(gen_frame + 0x8));
      for (iVar14 = 0x20; pfVar11 = (float *)((int)pfVar11 + 4), iVar14 != 0; iVar14 = iVar14 + -1)
      {
        *pfVar11 = *pfVar16;
        pfVar16 = pfVar16 + 1;
      }
      F_00677650(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 0x14))),((float *)(gen_frame + 0xb4)) + 1,0x10);
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x100000;
      F_006879b0((undefined *)((int)this + 0x374),*(undefined4 *)((int)this + 0x1478));
      F_006879e0((undefined *)((int)this + 0x374),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 24)));
    }
    if (((*(uint *)((int)this + 0x1510) >> 0x15 & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x2b4)), bVar10 != 0)) {
      *(undefined4 *)((int)this + 0x2c0) = *(undefined4 *)((int)this + 0x1458);
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x2b8))),"sInput",
                   *(undefined4 *)((int)this + 0x1458),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x2b8))),0,
                   *(undefined4 *)((int)this + 0x1460));
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x200000;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0x16 & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x2d4)), bVar10 != 0)) {
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x2d8))),0,
                   *(undefined4 *)((int)this + 0x149c));
      ((byte *)(gen_frame + 0x8c))[0x14] = (byte)REFG(float, 0x1090708);
      ((byte *)(gen_frame + 0x8c))[0x15] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 1));
      ((byte *)(gen_frame + 0x8c))[0x16] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 2));
      ((byte *)(gen_frame + 0x8c))[0x17] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 3));
      ((byte *)(gen_frame + 0x8c))[0x18] = (byte)REFG(float, 0x1087f04);
      ((byte *)(gen_frame + 0x8c))[0x19] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
      ((byte *)(gen_frame + 0x8c))[0x1a] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
      ((byte *)(gen_frame + 0x8c))[0x1b] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
      ((byte *)(gen_frame + 0x8c))[0x1c] = (byte)REFG(float, 0x1087f04);
      ((byte *)(gen_frame + 0x8c))[0x1d] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
      ((byte *)(gen_frame + 0x8c))[0x1e] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
      ((byte *)(gen_frame + 0x8c))[0x1f] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
      ((byte *)(gen_frame + 0x8c))[0x20] = (byte)REFG(float, 0x1090708);
      ((byte *)(gen_frame + 0x8c))[0x21] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 1));
      ((byte *)(gen_frame + 0x8c))[0x22] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 2));
      ((byte *)(gen_frame + 0x8c))[0x23] = (*(undefined1 *)((char *)&REFG(float, 0x1090708) + 3));
      F_006775f0(**(undefined4 * PTR32 *)((int)this + 0x2d8),(uint)(((byte *)(gen_frame + 0x8c)) + 0x14));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2d8) + 4))),"sInput",
                   *(undefined4 *)((int)this + 0x149c),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2d8) + 4))),0,*(undefined4 *)((int)this + 0x1460)
                  );
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x2d8) + 4))) + 0x30))) = 0x7a80541;
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x400000;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0x17 & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x2f4)), bVar10 != 0)) {
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x2f8))),0,
                   *(undefined4 *)((int)this + 0x14b8));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x2f8))),1,
                   *(undefined4 *)((int)this + 0x14bc));
      F_004d4af0(((float *)(gen_frame + 0xb4)),2,2,2,0,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2f8) + 4))),"sDepthNormalZ",
                   *(undefined4 *)((int)this + 0x14c0),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2f8) + 4))),0,*(undefined4 *)((int)this + 0x14b8)
                  );
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2f8) + 4))),1,*(undefined4 *)((int)this + 0x14bc)
                  );
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2f8) + 8))),"sGatherDepth",
                   *(undefined4 *)((int)this + 0x14b8),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2f8) + 8))),"sGatherNormalZ",
                   *(undefined4 *)((int)this + 0x14bc),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2f8) + 8))),0,*(undefined4 *)((int)this + 0x1498)
                  );
      ((float *)(gen_frame + 0xb4))[1] = 0.0;
      ((byte *)(gen_frame + 0xbc))[0] = (byte)REFG(float, 0x1087f04);
      ((byte *)(gen_frame + 0xbc))[1] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
      ((byte *)(gen_frame + 0xbc))[2] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
      ((byte *)(gen_frame + 0xbc))[3] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
      ((byte *)(gen_frame + 0xc0))[0] = (byte)REFG(float, 0x1087f04);
      ((byte *)(gen_frame + 0xc0))[1] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
      ((byte *)(gen_frame + 0xc0))[2] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
      ((byte *)(gen_frame + 0xc0))[3] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
      ((byte *)(gen_frame + 0xc4))[0] = (byte)REFG(float, 0x1087f04);
      ((byte *)(gen_frame + 0xc4))[1] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
      ((byte *)(gen_frame + 0xc4))[2] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
      ((byte *)(gen_frame + 0xc4))[3] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
      ((byte *)(gen_frame + 0xc8))[0] = (byte)REFG(float, 0x1087f04);
      ((byte *)(gen_frame + 0xc8))[1] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
      ((byte *)(gen_frame + 0xc8))[2] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
      ((byte *)(gen_frame + 0xc8))[3] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
      (*(undefined4 *)(gen_frame + 0xcc)) = 0;
      (*(undefined4 *)(gen_frame + 0xd0)) = 0;
      (*(undefined4 *)(gen_frame + 0xd4)) = 0;
      F_00677650(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2f8) + 4))),((float *)(gen_frame + 0xb4)) + 1,4);
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x800000;
    }
    if (((*(byte *)((int)this + 0x1513) & 1) == 0) &&
       (bVar10 = F_00677f90((undefined *)((int)this + 0x314)), bVar10 != 0)) {
      if ((*(byte *)((int)this + 0x1508) & 0x18) != 0) {
        iVar14 = **(int * PTR32 *)((int)this + 0x318);
        pbVar1 = (byte *)(iVar14 + 0x48);
        *pbVar1 = *pbVar1 | 1;
        *(undefined4 *)(iVar14 + 0x34) = 0;
      }
      fVar19 = (float10)*((int *)GEN_TOP((*(int *)((int)this + 0x147c) + 0x18)));
      if (*((int *)GEN_TOP((*(int *)((int)this + 0x147c) + 0x18))) < 0) {
        fVar19 = fVar19 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0xb0)) = (float)((float10)1 / fVar19);
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x318))),"sInput",
                   *((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 0)) + 0x58))),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x318))),0,
                   *(undefined4 *)((int)this + 0x147c));
      ((byte *)(gen_frame + 0x8c))[0x18] = 0;
      ((byte *)(gen_frame + 0x8c))[0x19] = 0;
      ((byte *)(gen_frame + 0x8c))[0x1a] = 0;
      ((byte *)(gen_frame + 0x8c))[0x1b] = 0;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 20)) =
           (undefined4)gen_fl2bits((float)((float10)*(double *)&REFG(undefined, 0x108bec8) * (float10)(*(float *)(gen_frame + 0xb0))));
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 28)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xb0)));
      ((byte *)(gen_frame + 0x8c))[0x20] = (byte)REFG(float, 0x1087f04);
      ((byte *)(gen_frame + 0x8c))[0x21] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
      ((byte *)(gen_frame + 0x8c))[0x22] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
      ((byte *)(gen_frame + 0x8c))[0x23] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
      F_00677590(**(undefined4 * PTR32 *)((int)this + 0x318),(uint)(((byte *)(gen_frame + 0x8c)) + 0x14));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x318) + 4))),"sInput",
                   *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x10))) + 0x60))),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x318) + 4))),0,*(undefined4 *)((int)this + 0x147c)
                  );
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 20)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xb0)));
      ((byte *)(gen_frame + 0x8c))[0x18] = 0;
      ((byte *)(gen_frame + 0x8c))[0x19] = 0;
      ((byte *)(gen_frame + 0x8c))[0x1a] = 0;
      ((byte *)(gen_frame + 0x8c))[0x1b] = 0;
      ((byte *)(gen_frame + 0x8c))[0x20] = (byte)REFG(float, 0x1087f04);
      ((byte *)(gen_frame + 0x8c))[0x21] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
      ((byte *)(gen_frame + 0x8c))[0x22] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
      ((byte *)(gen_frame + 0x8c))[0x23] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 28)) = (undefined4)gen_fl2bits((float)((float10)(*(float *)(gen_frame + 0xb0)) + (float10)(*(float *)(gen_frame + 0xb0))));
      F_00677590(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x318) + 4))),(uint)(((byte *)(gen_frame + 0x8c)) + 0x14));
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x1000000;
    }
    fVar12 = gen_bits2f(*(uint *)((int)this + 0x1510) >> 0x19);
    if (((uint)gen_fl2bits(fVar12) & 1) == 0) {
      bVar10 = F_00677f90((undefined *)((int)this + 0x334));
      fVar12 = gen_bits2f((uint)bVar10);
      if (bVar10 != 0) {
        F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
        uVar17 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 0));
        F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x338) + 4))),"sInput",
                     *((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 0)) + 0x58))),((float *)(gen_frame + 0xb4)));
        F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
        F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x338) + 8))),"sInput",
                     *(undefined4 *)(uVar17 + 0x58),((float *)(gen_frame + 0xb4)));
        F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
        F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x338) + 0xc))),"sInput",
                     *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x10))) + 0x60))),((float *)(gen_frame + 0xb4)));
        uVar18 = 0;
        (*(float *)(gen_frame + 0xb0)) = 1.4013e-45;
        do {
          F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x338) + uVar18 * 4))),0,
                       *(undefined4 *)((int)this + 0x1480));
          ((float *)(gen_frame + 0xb4))[0] = *((float *)GEN_TOP((*(int *)((int)this + 0x338) + uVar18 * 4)));
          piVar6 = *(int * PTR32 *)((int)this + 0x1484);
          (*(int * PTR32 *)(gen_frame + 0x88)) = piVar6;
          if (piVar6 != (int *)0x0) {
            ((code *)*(gen_code32 *)(*piVar6 + 8))();
          }
          if (*(int * PTR32 *)((int)gen_fl2bits(((float *)(gen_frame + 0xb4))[0]) + 0x28) != (int *)0x0) {
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)gen_fl2bits(((float *)(gen_frame + 0xb4))[0]) + 0x28) + 0xc))))();
          }
          *(int * PTR32 *)((int)gen_fl2bits(((float *)(gen_frame + 0xb4))[0]) + 0x28) = (*(int * PTR32 *)(gen_frame + 0x88));
          puVar13 = &REFG(undefined4, 0x1302350);
          if ((*(byte *)((int)this + 0x1508) & 0x40) == 0) {
            puVar13 = &REFG(undefined4, 0x1302358);
          }
          *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x338) + uVar18 * 4))) + 0x30))) =
               *puVar13 & 0x7ffffff;
          uVar17 = REFG(float, 0x1088068);
          if (uVar18 == 0) {
            *((undefined4 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x338) + 0x2c))) = 0x1f;
          }
          else {
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x338) + uVar18 * 4))) + 0x2c))) = 0x11;
            uVar5 = REFG(float, 0x1088068);
            (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 0)) = (byte)uVar17;
            (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 1)) = SUB41(uVar17,1);
            (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 2)) = SUB41(uVar17,2);
            (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 3)) = SUB41(uVar17,3);
            ((byte *)(gen_frame + 0x8c))[0x14] = (byte)REFG(float, 0x1088068);
            ((byte *)(gen_frame + 0x8c))[0x15] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 1));
            ((byte *)(gen_frame + 0x8c))[0x16] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 2));
            ((byte *)(gen_frame + 0x8c))[0x17] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 3));
            (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 0)) = (byte)uVar17;
            (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 1)) = SUB41(uVar17,1);
            (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 2)) = SUB41(uVar17,2);
            (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 3)) = SUB41(uVar17,3);
            ((byte *)(gen_frame + 0x8c))[0x18] = (byte)REFG(float, 0x1088068);
            ((byte *)(gen_frame + 0x8c))[0x19] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 1));
            ((byte *)(gen_frame + 0x8c))[0x1a] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 2));
            ((byte *)(gen_frame + 0x8c))[0x1b] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 3));
            (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 0)) = (byte)uVar17;
            (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 1)) = SUB41(uVar17,1);
            (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 2)) = SUB41(uVar17,2);
            (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 3)) = SUB41(uVar17,3);
            ((byte *)(gen_frame + 0x8c))[0x1c] = (byte)REFG(float, 0x1088068);
            ((byte *)(gen_frame + 0x8c))[0x1d] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 1));
            ((byte *)(gen_frame + 0x8c))[0x1e] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 2));
            ((byte *)(gen_frame + 0x8c))[0x1f] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 3));
            (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 0)) = (byte)uVar17;
            (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 1)) = SUB41(uVar17,1);
            (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 2)) = SUB41(uVar17,2);
            (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 3)) = SUB41(uVar17,3);
            ((byte *)(gen_frame + 0x8c))[0x20] = (byte)REFG(float, 0x1088068);
            ((byte *)(gen_frame + 0x8c))[0x21] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 1));
            ((byte *)(gen_frame + 0x8c))[0x22] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 2));
            ((byte *)(gen_frame + 0x8c))[0x23] = (*(undefined1 *)((char *)&REFG(float, 0x1088068) + 3));
            REFG(float, 0x1088068) = uVar5;
            F_006775f0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x338) + uVar18 * 4))),
                         (uint)(((byte *)(gen_frame + 0x8c)) + 0x14));
            *(uint *)((int)this + 0x350) =
                 ~(uint)gen_fl2bits((*(float *)(gen_frame + 0xb0))) & *(uint *)((int)this + 0x350) |
                 0 << ((byte)uVar18 & 0x1f);
          }
          uVar18 = uVar18 + 1;
          fVar12 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xb0))) << 1 |
                              (uint)((int)gen_fl2bits((*(float *)(gen_frame + 0xb0))) < 0));
          (*(float *)(gen_frame + 0xb0)) = fVar12;
        } while (uVar18 < 4);
        *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x2000000;
      }
    }
    if ((*(uint *)((int)this + 0x1510) >> 0x1a & 1) == 0) {
      bVar10 = F_00677f90((undefined *)((int)this + 0x354));
      fVar12 = gen_bits2f((uint)bVar10);
      if (bVar10 != 0) {
        F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
        F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x358))),"sInput",
                     *((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8c)) + 0)) + 0x58))),((float *)(gen_frame + 0xb4)));
        F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x358))),0,
                     *(undefined4 *)((int)this + 0x1480));
        piVar6 = *(int * PTR32 *)((int)this + 0x1484);
        ((float *)(gen_frame + 0xb4))[0] = **(float * PTR32 *)((int)this + 0x358);
        if (piVar6 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar6 + 8))();
        }
        if (*(int * PTR32 *)((int)gen_fl2bits(((float *)(gen_frame + 0xb4))[0]) + 0x28) != (int *)0x0) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)gen_fl2bits(((float *)(gen_frame + 0xb4))[0]) + 0x28) + 0xc))))();
        }
        *(int * PTR32 *)((int)gen_fl2bits(((float *)(gen_frame + 0xb4))[0]) + 0x28) = piVar6;
        *((uint *)GEN_TOP((**(int * PTR32 *)((int)this + 0x358) + 0x30))) = REFG(undefined4, 0x1302358) & 0x7ffffff;
        fVar12 = **(float * PTR32 *)((int)this + 0x358);
        *(undefined4 *)((int)gen_fl2bits(fVar12) + 0x2c) = 0x11;
        *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x4000000;
      }
    }
    fVar3 = REFG(undefined4, 0x137127c);
    if (*(int *)((int)this + 0x1510) == -1) {
      *(uint *)((int)gen_fl2bits(REFG(undefined4, 0x137127c)) + 0x11e44U) =
           *(uint *)((int)gen_fl2bits(REFG(undefined4, 0x137127c)) + 0x11e44U) | 8;
      fVar12 = fVar3;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
  return (byte)(uint)gen_fl2bits(fVar12);
}

/* ref: FUN_00682f10 */
unsigned int F_00682f10(unsigned int gen_a0)
{
  GEN_ENTER(0x682f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined * pvVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int * piVar6;
  int * PTR32 * ppiVar7;
  int * piVar8;
  int * piVar9;
  int * piVar10;
  int iVar11;
  
  iVar11 = REFG(int, 0x1371288);
  if (*(int *)((int)this + 0x1510) == -1) {
    piVar6 = *(int * PTR32 *)((int)this + 0x1458);
    *(undefined4 *)(REFG(int, 0x1371288) + 0x16c) = *(undefined4 *)((int)this + 0x1464);
    *(int * PTR32 *)(iVar11 + 300) = piVar6;
    (*(int *)(gen_frame + 0x8)) = iVar11;
    if ((*(uint *)((int)this + 0x1514) >> 2 & 1) != 0) {
      F_006765f0((undefined *)((int)this + 0x194),piVar6);
    }
    if ((*(uint *)((int)this + 0x1514) >> 3 & 1) != 0) {
      F_006765f0((undefined *)((int)this + 0x1b4),piVar6);
    }
    if ((*(uint *)((int)this + 0x1514) >> 10 & 1) != 0) {
      F_006765a0((undefined *)((int)this + 0x114),piVar6);
    }
    if ((*(uint *)((int)this + 0x1514) >> 4 & 1) != 0) {
      (*(int * PTR32 *)(gen_frame + 0xc)) = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 8)));
      if (piVar6 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6);
      }
      piVar8 = (int *)(*(int * PTR32 *)(gen_frame + 0xc))[6];
      piVar9 = (*(int * PTR32 *)(gen_frame + 0xc));
      if (piVar8 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
        piVar9 = (*(int * PTR32 *)(gen_frame + 0xc));
      }
      piVar8 = piVar9 + 6;
      *piVar8 = (int)piVar6;
      *(undefined1 *)((int)piVar9 + 0x42) = 0;
      uVar5 = 0;
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar8;
      do {
        if (*piVar8 == 0) break;
        *(char *)((int)piVar9 + 0x42) = (char)uVar5 + '\x01';
        uVar5 = uVar5 + 1;
        piVar8 = piVar8 + 1;
        (*(int * PTR32 *)(gen_frame + 0xc)) = piVar8;
      } while (uVar5 < 4);
      (*(int * PTR32 *)(gen_frame + 0xc)) = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 0xc)));
      if (piVar6 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6);
      }
      piVar8 = (int *)(*(int * PTR32 *)(gen_frame + 0xc))[6];
      piVar9 = (*(int * PTR32 *)(gen_frame + 0xc));
      if (piVar8 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
        piVar9 = (*(int * PTR32 *)(gen_frame + 0xc));
      }
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar9 + 6;
      *(*(int * PTR32 *)(gen_frame + 0xc)) = (int)piVar6;
      *(undefined1 *)((int)piVar9 + 0x42) = 0;
      uVar5 = 0;
      do {
        if (*(*(int * PTR32 *)(gen_frame + 0xc)) == 0) break;
        *(char *)((int)piVar9 + 0x42) = (char)uVar5 + '\x01';
        uVar5 = uVar5 + 1;
        (*(int * PTR32 *)(gen_frame + 0xc)) = (*(int * PTR32 *)(gen_frame + 0xc)) + 1;
      } while (uVar5 < 4);
    }
    uVar1 = *(undefined4 *)((int)this + 0x1464);
    *(int * PTR32 *)(iVar11 + 0x130) = piVar6;
    *(undefined4 *)(iVar11 + 0x170) = uVar1;
    uVar1 = *(undefined4 *)((int)this + 0x1464);
    *(int * PTR32 *)(iVar11 + 0x134) = piVar6;
    *(undefined4 *)(iVar11 + 0x174) = uVar1;
    if ((*(uint *)((int)this + 0x1514) >> 6 & 1) != 0) {
      F_006765f0((undefined *)((int)this + 0x214),piVar6);
    }
    uVar1 = *(undefined4 *)((int)this + 0x1464);
    *(int * PTR32 *)(iVar11 + 0x138) = piVar6;
    *(undefined4 *)(iVar11 + 0x178) = uVar1;
    uVar1 = *(undefined4 *)((int)this + 0x1464);
    *(int * PTR32 *)(iVar11 + 0x13c) = piVar6;
    *(undefined4 *)(iVar11 + 0x17c) = uVar1;
    F_006765a0((undefined *)((int)this + 0x74),piVar6);
    if ((*(uint *)((int)this + 0x1514) >> 7 & 1) != 0) {
      F_006765a0((undefined *)((int)this + 0x234),piVar6);
      piVar8 = *(int * PTR32 *)((int)this + 0x1458);
      if (piVar6 == piVar8) {
        piVar8 = *(int * PTR32 *)((int)this + 0x1488);
      }
      (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x238)));
      if (piVar8 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8);
      }
      piVar9 = (int *)(*(int * PTR32 *)(gen_frame + 0xc))[6];
      piVar10 = (*(int * PTR32 *)(gen_frame + 0xc));
      if (piVar9 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar9 + 0xc))(piVar9);
        piVar10 = (*(int * PTR32 *)(gen_frame + 0xc));
      }
      piVar9 = piVar10 + 6;
      *piVar9 = (int)piVar8;
      *(undefined1 *)((int)piVar10 + 0x42) = 0;
      uVar5 = 0;
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar9;
      do {
        if (*piVar9 == 0) break;
        *(char *)((int)piVar10 + 0x42) = (char)uVar5 + '\x01';
        uVar5 = uVar5 + 1;
        piVar9 = piVar9 + 1;
        (*(int * PTR32 *)(gen_frame + 0xc)) = piVar9;
      } while (uVar5 < 4);
      piVar9 = (int *)(int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar9;
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar9;
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x1ff;
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x14));
      if (0x1fe < (int)piVar9) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0xc));
      }
      piVar9 = *ppiVar7;
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar9;
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0xfffffe00;
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0xc));
      if (-0x201 < (int)piVar9) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x14));
      }
      (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP((((uint)*ppiVar7 & 0x3ff) << 10 | 0x265)));
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 4))),"sInput",piVar8,&(*(int * PTR32 *)(gen_frame + 0xc)));
      (*(int * PTR32 *)(gen_frame + 0x14)) = (*(int * PTR32 *)(gen_frame + 0x10));
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x1ff;
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x14));
      if (0x1fe < (int)(*(int * PTR32 *)(gen_frame + 0x10))) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0xc));
      }
      piVar9 = *ppiVar7;
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar9;
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0xfffffe00;
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0xc));
      if (-0x201 < (int)piVar9) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x14));
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0xc)));
      (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP((((uint)*ppiVar7 & 0x3ff) << 10 | 0x265)));
      F_0067d450(pvVar2,"sInput",piVar8,&(*(int * PTR32 *)(gen_frame + 0xc)));
      (*(int * PTR32 *)(gen_frame + 0x14)) = (*(int * PTR32 *)(gen_frame + 0x10));
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x1ff;
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x14));
      if (0x1fe < (int)(*(int * PTR32 *)(gen_frame + 0x10))) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0xc));
      }
      piVar9 = *ppiVar7;
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar9;
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0xfffffe00;
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0xc));
      if (-0x201 < (int)piVar9) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x14));
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x18)));
      (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP((((uint)*ppiVar7 & 0x3ff) << 10 | 0x25)));
      F_0067d450(pvVar2,"sInput",piVar8,&(*(int * PTR32 *)(gen_frame + 0xc)));
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x1ff;
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x10));
      if (0x1fe < (int)(*(int * PTR32 *)(gen_frame + 0x10))) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0xc));
      }
      piVar9 = *ppiVar7;
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar9;
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0xfffffe00;
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0xc));
      if (-0x201 < (int)piVar9) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x10));
      }
      (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP((((uint)*ppiVar7 & 0x3ff) << 10 | 0x25)));
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x1c))),"sInput",piVar8,&(*(int * PTR32 *)(gen_frame + 0xc)));
      F_006765f0((undefined *)((int)this + 0x234),piVar6);
      iVar11 = (*(int *)(gen_frame + 0x8));
    }
    piVar8 = piVar6;
    if ((*(uint *)((int)this + 0x1514) >> 8 & 1) != 0) {
      F_006765a0((undefined *)((int)this + 0x254),piVar6);
      piVar8 = *(int * PTR32 *)((int)this + 0x1458);
      if (piVar6 == piVar8) {
        piVar8 = *(int * PTR32 *)((int)this + 0x1488);
      }
      F_006765f0((undefined *)((int)this + 0x254),piVar8);
    }
    uVar1 = *(undefined4 *)((int)this + 0x1464);
    *(int * PTR32 *)(iVar11 + 0x140) = piVar8;
    *(undefined4 *)(iVar11 + 0x180) = uVar1;
    piVar6 = piVar8;
    if ((*(uint *)((int)this + 0x1514) >> 9 & 1) != 0) {
      F_006765a0((undefined *)((int)this + 0x274),piVar8);
      piVar6 = *(int * PTR32 *)((int)this + 0x1458);
      if (piVar8 == piVar6) {
        piVar6 = *(int * PTR32 *)((int)this + 0x1488);
      }
      F_006765f0((undefined *)((int)this + 0x274),piVar6);
    }
    if ((*(uint *)((int)this + 0x1514) >> 0xd & 1) != 0) {
      F_006765a0((undefined *)((int)this + 0xb4),piVar6);
    }
    uVar1 = *(undefined4 *)((int)this + 0x1464);
    *(int * PTR32 *)(iVar11 + 0x144) = piVar6;
    *(undefined4 *)(iVar11 + 0x184) = uVar1;
    if ((*(uint *)((int)this + 0x1514) >> 10 & 1) != 0) {
      F_006765a0((undefined *)((int)this + 0x134),piVar6);
    }
    if (((*(uint *)((int)this + 0x1514) >> 10 & 1) != 0) ||
       ((*(uint *)((int)this + 0x1514) >> 0xb & 1) != 0)) {
      F_006765f0((undefined *)((int)this + 0x154),piVar6);
    }
    *(undefined4 *)(iVar11 + 0x188) = *(undefined4 *)((int)this + 0x1464);
    *(int * PTR32 *)(iVar11 + 0x148) = piVar6;
    piVar8 = piVar6;
    if ((*(uint *)((int)this + 0x1514) >> 0xd & 1) != 0) {
      F_006765a0((undefined *)((int)this + 0xd4),piVar6);
      piVar8 = *(int * PTR32 *)((int)this + 0x1458);
      if (piVar6 == piVar8) {
        piVar8 = *(int * PTR32 *)((int)this + 0x1488);
      }
      F_006765f0((undefined *)((int)this + 0xd4),piVar8);
    }
    piVar6 = piVar8;
    if ((*(uint *)((int)this + 0x1514) >> 0xe & 1) != 0) {
      F_006765a0((undefined *)((int)this + 0x94),piVar8);
      piVar6 = *(int * PTR32 *)((int)this + 0x1458);
      if (piVar8 == piVar6) {
        piVar6 = *(int * PTR32 *)((int)this + 0x1488);
      }
      F_006765f0((undefined *)((int)this + 0x94),piVar6);
    }
    piVar8 = piVar6;
    if ((*(uint *)((int)this + 0x1514) >> 0xf & 1) != 0) {
      F_006765a0((undefined *)((int)this + 0x2b4),piVar6);
      piVar8 = *(int * PTR32 *)((int)this + 0x1458);
      if (piVar6 == piVar8) {
        piVar8 = *(int * PTR32 *)((int)this + 0x1488);
      }
      F_006765f0((undefined *)((int)this + 0x2b4),piVar8);
    }
    uVar5 = *(uint *)((int)this + 0x1514) >> 1;
    (*(byte *)(gen_frame + 0x1b)) = (byte)(*(uint *)((int)this + 0x1514) >> 0x11) & 1;
    piVar6 = ((int *)GEN_TOP(((-(uint)((uVar5 & 1) != 0) & 0xb) * 0x20 + 0x14 + (int)this)));
    (*(int * PTR32 *)(gen_frame + 0xc)) = piVar6;
    F_006765a0(piVar6,piVar8);
    piVar6 = *(int * PTR32 *)((int)this + 0x1458);
    if ((uVar5 & 1) == 0) {
      if (piVar8 == piVar6) {
        piVar6 = *(int * PTR32 *)((int)this + 0x1488);
      }
    }
    else {
      if (piVar8 == piVar6) {
        piVar6 = *(int * PTR32 *)((int)this + 0x1488);
      }
      iVar11 = *(int *)(*(int * PTR32 *)(gen_frame + 0xc))[1];
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar6;
      if (piVar6 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6);
      }
      piVar6 = *(int * PTR32 *)(iVar11 + 0x18);
      if (piVar6 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
      }
      piVar6 = (int *)(iVar11 + 0x18);
      *piVar6 = (int)(*(int * PTR32 *)(gen_frame + 0x14));
      *(undefined1 *)(iVar11 + 0x42) = 0;
      uVar5 = 0;
      do {
        if (*piVar6 == 0) break;
        cVar3 = (char)uVar5;
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 1;
        *(char *)(iVar11 + 0x42) = cVar3 + '\x01';
      } while (uVar5 < 4);
      (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)(int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
      (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x1ff;
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x10));
      if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x4));
      }
      piVar6 = *ppiVar7;
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar6;
      (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0xfffffe00;
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x4));
      if (-0x201 < (int)piVar6) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x10));
      }
      (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP((((uint)*ppiVar7 & 0x3ff) << 10 | 0x265)));
      F_0067d450(*(undefined * PTR32 *)((*(int * PTR32 *)(gen_frame + 0xc))[1] + 4),"sInput",(*(int * PTR32 *)(gen_frame + 0x14)),&(*(int * PTR32 *)(gen_frame + 0x4)));
      piVar6 = piVar8;
    }
    bVar4 = (*(byte *)(gen_frame + 0x1b));
    if ((*(byte *)(gen_frame + 0x1b)) == 0) {
      piVar6 = *(int * PTR32 *)((int)this + 0x1460);
    }
    F_006765f0((*(int * PTR32 *)(gen_frame + 0xc)),piVar6);
    F_006765f0((undefined *)((int)this + 0x34),piVar6);
    if ((*(byte *)((int)this + 0x1516) & 1) != 0) {
      F_006765f0((undefined *)((int)this + 0x2d4),piVar6);
    }
    uVar1 = *(undefined4 *)((int)this + 0x1464);
    *(int * PTR32 *)((*(int *)(gen_frame + 0x8)) + 0x14c) = piVar6;
    *(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0x18c) = uVar1;
    if (bVar4 != 0) {
      F_006765a0((undefined *)((int)this + 0xf4),piVar6);
    }
  }
  return 0;
}

/* ref: FUN_006835d0 */
uint F_006835d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6835d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  uint * puVar1;
  float fVar2;
  int * piVar3;
  float fVar4;
  char cVar5;
  undefined * pvVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  double dVar10;
  undefined1 auVar11 [4];
  undefined1 uVar12;
  uint uVar13;
  undefined4 * puVar14;
  int * PTR32 * ppiVar15;
  int iVar16;
  int * piVar17;
  byte bVar18;
  uint uVar19;
  undefined4 * puVar20;
  float10 fVar21;
  ulonglong uVar22;
  
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  puVar1 = (uint *)((int)pvVar6 + 8);
  *puVar1 = *puVar1 | 0x7ffffff;
  uVar13 = *(uint *)((int)this + 0x1514) >> 0xd;
  bVar18 = *(byte *)(REFG(int, 0x137127c) + 0x6540) & 1;
  *(undefined4 *)((undefined1 *)(gen_frame + 0x34)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = pvVar6;
  (*(byte *)(gen_frame + 0x4a)) = bVar18;
  (*(byte *)(gen_frame + 0x4b)) = (byte)uVar13 & 1;
  if ((bVar18 == 0) || ((*(char *)(gen_frame + 0x3e)) = '\x01', *(byte *)((int)this + 0x173c) < 5)) {
    (*(char *)(gen_frame + 0x3e)) = '\0';
  }
  if (bVar18 == 0) {
    *(undefined1 *)((int)this + 0x173c) = 0;
  }
  else if (*(byte *)((int)this + 0x173c) < 5) {
    *(byte *)((int)this + 0x173c) = *(byte *)((int)this + 0x173c) + 1;
  }
  if (((uVar13 & 1) == 0) || ((*(char *)(gen_frame + 0x3f)) = '\x01', *(byte *)((int)this + 0x173d) < 5)) {
    (*(char *)(gen_frame + 0x3f)) = '\0';
  }
  if ((uVar13 & 1) == 0) {
    *(undefined1 *)((int)this + 0x173d) = 0;
  }
  else if (*(byte *)((int)this + 0x173d) < 5) {
    *(byte *)((int)this + 0x173d) = *(byte *)((int)this + 0x173d) + 1;
  }
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1088068)));
  if ((bVar18 != 0) && (iVar16 = *(int *)(REFG(int, 0x137127c) + 0x6554), iVar16 != 0)) {
    puVar14 = (undefined4 *)F_004f11a0(((undefined1 *)(gen_frame + 0x50)),iVar16 + 0x10,iVar16 + 0x50);
    piVar17 = *(int * PTR32 *)((int)((undefined1 *)(gen_frame + 0x34)) + 0x172c);
    fVar2 = *(float *)((int)((undefined1 *)(gen_frame + 0x34)) + 0x1730);
    piVar3 = *(int * PTR32 *)((int)((undefined1 *)(gen_frame + 0x34)) + 0x1734);
    puVar20 = ((undefined4 *)(gen_frame + 0x90));
    for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
      *puVar20 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar20 = puVar20 + 1;
    }
    (*(int * PTR32 *)(gen_frame + 0x10)) = piVar17;
    (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar2)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3;
    F_004eeb30(&(*(int * PTR32 *)(gen_frame + 0x10)),(uint)((undefined4 *)(gen_frame + 0x90)));
    fVar21 = (float10)REFG(double, 0x1088108);
    (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))) * fVar21 + fVar21))));
    (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar21 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x14))))) * fVar21))));
  }
  { unsigned int gen_ac = (unsigned int)((*(unsigned int *)((undefined1 *)(gen_frame + 0x34)))); memcpy(auVar11, &gen_ac, 4); }
  (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 0)) = 0xff;
  (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 1)) = 0xff;
  (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 2)),0xffff)));
  *(undefined4 *)((int)((undefined1 *)(gen_frame + 0x34)) + 0x1738) = REFG(float, 0x1087f04);
  if ((*(byte *)((int)((undefined1 *)(gen_frame + 0x34)) + 0x1508) & 0x20) == 0) {
    if (((*(byte *)(gen_frame + 0x4a)) != 0) || ((*(byte *)(gen_frame + 0x4b)) != 0)) {
      uVar8 = *(undefined4 *)((int)((undefined1 *)(gen_frame + 0x34)) + 0x147c);
      puVar14 = (undefined4 *)F_004d4760((*(undefined * PTR32 *)(gen_frame + 0x30)),8);
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = 10;
        puVar14[1] = uVar8;
        F_004d4810((*(undefined * PTR32 *)(gen_frame + 0x30)),puVar14);
      }
    }
    uVar13 = F_004d6dd0(*(undefined * PTR32 *)((int)(*(unsigned int *)auVar11) + 0x147c),0,&(*(float *)(gen_frame + 0xe0)),1);
    if (uVar13 != 0) {
      if ((*(char *)(gen_frame + 0x3e)) != '\0') {
        (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 0)) = 1;
        (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x44)), 1, 3),1)));
        if (!((float10)*(*(float * PTR32 *)(gen_frame + 0xe8)) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x18))))))) {
          (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 0)) = 0;
          (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)((uint)GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x44)), 1, 3) << 8);
        }
        (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 1)) = 1;
        (*(undefined2 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 0)) = CONCAT11(1,(byte)(*(int * PTR32 *)(gen_frame + 0x44)));
        if (!((float10)(*(float * PTR32 *)(gen_frame + 0xe8))[1] < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x18))))))) {
          (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 1)) = 0;
          (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 2)),(ushort)(byte)(*(int * PTR32 *)(gen_frame + 0x44)))));
        }
      }
      if ((*(char *)(gen_frame + 0x3f)) != '\0') {
        *(float *)((int)(*(unsigned int *)auVar11) + 0x1738) = (*(float * PTR32 *)(gen_frame + 0xe8))[4];
      }
      F_004d6e60(*(undefined * PTR32 *)((int)(*(unsigned int *)auVar11) + 0x147c),0);
    }
  }
  else {
    (*(int * PTR32 *)(gen_frame + 0x4c)) = (int *)0x0;
    do {
      uVar22 = (*(ulonglong *)(gen_frame + 0x8));
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 0)) = (int *)0x0;
      (*(ulonglong *)(gen_frame + 0x8)) = uVar22 & 0xffffffff00000000;
      iVar16 = *((int *)GEN_TOP(((int)(*(unsigned int *)auVar11) + ((int)(*(int * PTR32 *)(gen_frame + 0x4c)) + REFG(undefined4, 0x14882b4) * 3) * 4 + 0x14cc)));
      if (*(int *)(iVar16 + 0x1c) == 0) {
        uVar12 = 0;
        piVar17 = (*(int * PTR32 *)(gen_frame + 0x4c));
      }
      else {
        uVar13 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar16 + 0x1c) + 0x1c))))
                           (*(int * PTR32 *)(iVar16 + 0x1c),&(*(ulonglong *)(gen_frame + 0x8)),4,0);
        piVar17 = (*(int * PTR32 *)(gen_frame + 0x4c));
        if (uVar13 == 0) {
          if (*(int *)(iVar16 + 0x18) == 3) {
            (*(ulonglong *)(gen_frame + 0x8)) = ((*(ulonglong *)(gen_frame + 0x8)) * 1000) / CONCAT44(REFG(undefined4, 0x1375a34),REFG(undefined4, 0x1375a30));
          }
          uVar12 = 1;
        }
        else {
          uVar12 = 0;
        }
      }
      *(undefined1 *)((int)&(*(int *)(gen_frame + 0x38)) + (int)piVar17) = uVar12;
      if ((int *)(*(ulonglong *)(gen_frame + 0x8)) < (int *)0x101) {
        (*(int * PTR32 *)(gen_frame + 0x40)) = (int *)0xff;
        ppiVar15 = (int * PTR32 *)&(*(ulonglong *)(gen_frame + 0x8));
        if ((int *)0xfe < (int *)(*(ulonglong *)(gen_frame + 0x8))) {
          ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x40));
        }
        fVar21 = (float10)(int)*ppiVar15;
        if ((int)*ppiVar15 < 0) {
          fVar21 = fVar21 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(int * PTR32 *)(gen_frame + 0x40)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar21 / (float10)*(double *)&REFG(undefined, 0x1088100)))));
        fVar21 = (float10)(float)(fVar21 / (float10)*(double *)&REFG(undefined, 0x1088100));
        (&(*(float *)(gen_frame + 0xe0)))[(int)piVar17] = (float)(fVar21 * fVar21);
      }
      else {
        *(undefined1 *)((int)&(*(int *)(gen_frame + 0x38)) + (int)piVar17) = 0;
      }
      (*(int * PTR32 *)(gen_frame + 0x4c)) = (int *)((int)piVar17 + 1U);
    } while ((int *)((int)piVar17 + 1U) < (int *)0x3);
    if ((*(char *)(gen_frame + 0x3e)) != '\0') {
      if ((byte)(*(int *)(gen_frame + 0x38)) != '\0') {
        (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 0)) = 1;
        (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x44)), 1, 3),1)));
        if (!((float10)(*(float *)(gen_frame + 0xe0)) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x18))))))) {
          (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 0)) = 0;
          (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)((uint)GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x44)), 1, 3) << 8);
        }
      }
      if ((*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x38)) + 1)) != '\0') {
        if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xe4))))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x18)))))) {
          (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 1)) = 1;
          (*(undefined2 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 0)) = CONCAT11(1,(byte)(*(int * PTR32 *)(gen_frame + 0x44)));
        }
        else {
          (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 1)) = 0;
          (*(undefined2 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 0)) = (ushort)(byte)(*(int * PTR32 *)(gen_frame + 0x44));
        }
      }
    }
    if (((*(char *)(gen_frame + 0x3f)) != '\0') && ((*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x38)) + 2)) != '\0')) {
      *(float *)((int)(*(unsigned int *)auVar11) + 0x1738) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xe8))))) * (float10)REFG(double, 0x10944b8));
    }
  }
  *(byte *)(REFG(int, 0x1371290) + 0x2a) = (byte)(*(int * PTR32 *)(gen_frame + 0x44));
  *(undefined1 *)(REFG(int, 0x1371290) + 0x2b) = (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 1));
  if ((*(byte *)((int)(*(unsigned int *)auVar11) + 0x1508) & 0x20) == 0) {
    uVar13 = *(uint *)((int)(*(unsigned int *)auVar11) + 0x330);
    fVar2 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))));
    (*(float *)(gen_frame + 0xdc)) = fVar2;
    (*(int * PTR32 *)(gen_frame + 0xe4)) = (*(int * PTR32 *)(gen_frame + 0x10));
    fVar4 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x14))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x14))))));
    (*(float *)(gen_frame + 0xe0)) = fVar4;
    (*(float * PTR32 *)(gen_frame + 0xe8)) = (float *)(*(int * PTR32 *)(gen_frame + 0x14));
    dVar10 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
    *(uint *)((int)(*(unsigned int *)auVar11) + 0x330) =
         (uint)((*(byte *)(gen_frame + 0x4b)) != 0) * 2 | (uint)((*(byte *)(gen_frame + 0x4a)) != 0) | uVar13 & 0xfffffffc;
    iVar16 = *((int *)GEN_TOP((**(int * PTR32 *)((int)(*(unsigned int *)auVar11) + 0x318) + 8)));
    *(float *)(iVar16 + 0x10) = fVar2;
    *(float *)(iVar16 + 0x14) = fVar4;
    *(int * PTR32 *)(iVar16 + 0x18) = (*(int * PTR32 *)(gen_frame + 0x10));
    *(int * PTR32 *)(iVar16 + 0x1c) = (*(int * PTR32 *)(gen_frame + 0x14));
    (*(int * PTR32 *)(gen_frame + 0x4c)) = (int *)(int)dVar10;
    (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)0x1ff;
    ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x4c));
    if (0x1fe < (int)dVar10) {
      ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x2c));
    }
    piVar17 = *ppiVar15;
    (*(int * PTR32 *)(gen_frame + 0x4c)) = piVar17;
    (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)0xfffffe00;
    ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x2c));
    if (-0x201 < (int)piVar17) {
      ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x4c));
    }
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP((((uint)*ppiVar15 & 0x3ff) << 10 | 0x25)));
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(unsigned int *)auVar11) + 0x318) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x4c)) = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)((undefined1 *)(gen_frame + 0x34)) + 0xb8) + 0x10))) + 0x60)));
    uVar22 = F_0067d330(pvVar6,"sInput");
    (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)uVar22;
    if (-1 < (int)(int *)uVar22) {
      if ((*(int * PTR32 *)(gen_frame + 0x4c)) != (int *)0x0) {
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4c)) + 8))((*(int * PTR32 *)(gen_frame + 0x4c)));
      }
      iVar16 = *(int *)((int)pvVar6 + 0x10);
      piVar17 = (int *)((int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x2c))) * 0xc);
      iVar7 = *(int *)(iVar16 + 4 + (int)piVar17);
      (*(int * PTR32 *)(gen_frame + 0x40)) = piVar17;
      if (iVar7 != 0) {
        piVar17 = *(int * PTR32 *)(iVar16 + 4 + (int)piVar17);
        ((code *)*(gen_code32 *)(*piVar17 + 0xc))(piVar17);
      }
      *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar6 + 0x10) + 4 + (int)(*(int * PTR32 *)(gen_frame + 0x40))))) = (*(int * PTR32 *)(gen_frame + 0x4c));
      *((uint *)GEN_TOP((*(int *)((int)pvVar6 + 0x10) + 8 + (int)(*(int * PTR32 *)(gen_frame + 0x40))))) = (uint)(*(undefined * PTR32 *)(gen_frame + 0x30)) & 0xfffffff;
    }
    *(undefined4 *)((int)(*(unsigned int *)auVar11) + 0x32c) = REFG(float, 0x1087f04);
    F_0067a0f0((undefined *)((int)(*(unsigned int *)auVar11) + 0x314));
  }
  else {
    pvVar6 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)(*(unsigned int *)auVar11) + 0x338)));
    uVar13 = F_0067d2b0(pvVar6,"cQueryParam");
    if (-1 < (int)uVar13) {
      F_006793b0(pvVar6,uVar13,&REFG(undefined, 0x1322808),0x10);
    }
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(unsigned int *)auVar11) + 0x338) + 4)));
    uVar13 = F_0067d2b0(pvVar6,"cQueryParam");
    if (-1 < (int)uVar13) {
      F_006793b0(pvVar6,uVar13,&REFG(undefined, 0x13227f8),0x10);
    }
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(unsigned int *)auVar11) + 0x338) + 8)));
    uVar13 = F_0067d2b0(pvVar6,"cQueryParam");
    if (-1 < (int)uVar13) {
      F_006793b0(pvVar6,uVar13,&REFG(undefined, 0x13227e8),0x10);
    }
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(unsigned int *)auVar11) + 0x338) + 0xc)));
    uVar13 = F_0067d2b0(pvVar6,"cQueryParam");
    if (-1 < (int)uVar13) {
      F_006793b0(pvVar6,uVar13,&REFG(undefined, 0x13227d8),0x10);
    }
    iVar16 = *(int *)((int)(*(unsigned int *)auVar11) + 0x338);
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 0)) = (*(int * PTR32 *)(gen_frame + 0x10));
    iVar16 = *((int *)GEN_TOP((*(int *)(iVar16 + 4) + 8)));
    fVar2 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))));
    (*(float *)(gen_frame + 0xdc)) = fVar2;
    *(float *)(iVar16 + 0x10) = fVar2;
    (*(int * PTR32 *)(gen_frame + 0xe4)) = (*(int * PTR32 *)(gen_frame + 0x10));
    fVar2 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x14))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x14))))));
    (*(float *)(gen_frame + 0xe0)) = fVar2;
    *(float *)(iVar16 + 0x14) = fVar2;
    *(int * PTR32 *)(iVar16 + 0x18) = (*(int * PTR32 *)(gen_frame + 0x10));
    (*(float * PTR32 *)(gen_frame + 0xe8)) = (float *)(*(int * PTR32 *)(gen_frame + 0x14));
    (*(float *)(gen_frame + 0xdc)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))));
    *(int * PTR32 *)(iVar16 + 0x1c) = (*(int * PTR32 *)(gen_frame + 0x14));
    iVar16 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)(*(unsigned int *)auVar11) + 0x338) + 8))) + 8)));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 4)) = (*(int * PTR32 *)(gen_frame + 0x14));
    (*(ulonglong *)(gen_frame + 0x8)) = CONCAT44((*(int * PTR32 *)(gen_frame + 0x14)),(*(int * PTR32 *)(gen_frame + 0x10)));
    *(float *)(iVar16 + 0x10) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))));
    (*(float *)(gen_frame + 0xe0)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x14))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x14))))));
    dVar10 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
    *(float *)(iVar16 + 0x14) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x14))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x14))))));
    *(int * PTR32 *)(iVar16 + 0x18) = (*(int * PTR32 *)(gen_frame + 0x10));
    *(int * PTR32 *)(iVar16 + 0x1c) = (*(int * PTR32 *)(gen_frame + 0x14));
    (*(int * PTR32 *)(gen_frame + 0x4c)) = (int *)(int)dVar10;
    (*(int * PTR32 *)(gen_frame + 0x40)) = (int *)0x1ff;
    ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x4c));
    if (0x1fe < (int)dVar10) {
      ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x40));
    }
    piVar17 = *ppiVar15;
    (*(int * PTR32 *)(gen_frame + 0x4c)) = piVar17;
    (*(int * PTR32 *)(gen_frame + 0x40)) = (int *)0xfffffe00;
    ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x40));
    if (-0x201 < (int)piVar17) {
      ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x4c));
    }
    (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)GEN_TOP((((uint)*ppiVar15 & 0x3ff) << 10 | 0x25)));
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(unsigned int *)auVar11) + 0x338) + 0xc)));
    (*(int * PTR32 *)(gen_frame + 0x4c)) = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)((undefined1 *)(gen_frame + 0x34)) + 0xb8) + 0x10))) + 0x60)));
    uVar22 = F_0067d330(pvVar6,"sInput");
    (*(int * PTR32 *)(gen_frame + 0x40)) = (int *)uVar22;
    if (-1 < (int)(int *)uVar22) {
      if ((*(int * PTR32 *)(gen_frame + 0x4c)) != (int *)0x0) {
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4c)) + 8))((*(int * PTR32 *)(gen_frame + 0x4c)));
      }
      iVar16 = *(int *)((int)pvVar6 + 0x10);
      iVar9 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x40))) * 0xc;
      iVar7 = *(int *)(iVar16 + 4 + iVar9);
      (*(int *)(gen_frame + 0x38)) = iVar9;
      if (iVar7 != 0) {
        piVar17 = *(int * PTR32 *)(iVar16 + 4 + iVar9);
        ((code *)*(gen_code32 *)(*piVar17 + 0xc))(piVar17);
      }
      *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar6 + 0x10) + 4 + (*(int *)(gen_frame + 0x38))))) = (*(int * PTR32 *)(gen_frame + 0x4c));
      *((uint *)GEN_TOP((*(int *)((int)pvVar6 + 0x10) + 8 + (*(int *)(gen_frame + 0x38))))) = (uint)(*(int * PTR32 *)(gen_frame + 0x44)) & 0xfffffff;
    }
    pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x30));
    *(undefined4 *)((int)(*(unsigned int *)auVar11) + 0x34c) = *(undefined4 *)(REFG(int, 0x13759f8) + 0x268);
    if ((*(byte *)((int)((undefined1 *)(gen_frame + 0x34)) + 0x1508) & 0x18) != 0) {
      F_004daa40((*(undefined * PTR32 *)(gen_frame + 0x30)),1,(int)((undefined1 *)(gen_frame + 0x34)) + 0x1480,*(undefined4 *)((int)((undefined1 *)(gen_frame + 0x34)) + 0x1484),0,0);
      puVar14 = (undefined4 *)F_004d4760(pvVar6,0x28);
      uVar8 = REFG(float, 0x1087f04);
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = 3;
        puVar14[2] = 0;
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[1] = 2;
        puVar14[3] = uVar8;
        F_004d4810(pvVar6,puVar14);
      }
      *(uint *)((int)(*(unsigned int *)auVar11) + 0x350) = *(uint *)((int)(*(unsigned int *)auVar11) + 0x350) | 1;
    }
    F_0067a0f0((undefined *)((int)(*(unsigned int *)auVar11) + 0x334));
    *(uint *)((int)(*(unsigned int *)auVar11) + 0x350) = *(uint *)((int)(*(unsigned int *)auVar11) + 0x350) & 0xfffffffe;
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x38)) + 0)) = (*(byte *)(gen_frame + 0x4a));
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x38)) + 1)) = (*(byte *)(gen_frame + 0x4a));
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x38)) + 2)) = (*(byte *)(gen_frame + 0x4b));
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x38)) + 3)) = (*(byte *)(gen_frame + 0x4b));
    (*(int *)(gen_frame + 0x38)) = CONCAT13((*(byte *)(gen_frame + 0x4b)),CONCAT12((*(byte *)(gen_frame + 0x4b)),CONCAT11((*(byte *)(gen_frame + 0x4a)),(*(byte *)(gen_frame + 0x4a)))));
    (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x4c)) = (int *)0x1;
    (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)(((undefined1 *)(gen_frame + 0x34)) + 3);
    do {
      cVar5 = *(char *)((int)(*(int * PTR32 *)(gen_frame + 0x44)) + 1 + (int)(*(int * PTR32 *)(gen_frame + 0x2c)));
      (*(int * PTR32 *)(gen_frame + 0x40)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x44)) + 1);
      if (cVar5 != '\0') {
        uVar8 = *((undefined4 *)GEN_TOP(((int)((undefined1 *)(gen_frame + 0x34)) + ((int)(*(int * PTR32 *)(gen_frame + 0x44)) + REFG(undefined4, 0x14882b4) * 3) * 4 + 0x14cc)));
        puVar14 = (undefined4 *)F_004d4760((*(undefined * PTR32 *)(gen_frame + 0x30)),0xc);
        if (puVar14 != (undefined4 *)0x0) {
          *puVar14 = 0xc;
          puVar14[1] = uVar8;
          puVar14[2] = 2;
          F_004d4810((*(undefined * PTR32 *)(gen_frame + 0x30)),puVar14);
        }
        uVar13 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x4c))) << 1 | (uint)((int)(*(int * PTR32 *)(gen_frame + 0x4c)) < 0);
        uVar19 = ~uVar13;
        *(uint *)((int)(*(unsigned int *)auVar11) + 0x350) = uVar19 & *(uint *)((int)(*(unsigned int *)auVar11) + 0x350) | uVar13;
        F_0067a0f0((undefined *)((int)(*(unsigned int *)auVar11) + 0x334));
        iVar16 = REFG(undefined4, 0x14882b4) * 3;
        *(uint *)((int)(*(unsigned int *)auVar11) + 0x350) =
             uVar19 & *(uint *)((int)(*(unsigned int *)auVar11) + 0x350) | 0 << ((byte)(*(int * PTR32 *)(gen_frame + 0x40)) & 0x1f);
        uVar8 = *((undefined4 *)GEN_TOP(((int)((undefined1 *)(gen_frame + 0x34)) + ((int)(*(int * PTR32 *)(gen_frame + 0x44)) + iVar16) * 4 + 0x14cc)));
        puVar14 = (undefined4 *)F_004d4760((*(undefined * PTR32 *)(gen_frame + 0x30)),0xc);
        if (puVar14 != (undefined4 *)0x0) {
          *puVar14 = 0xc;
          puVar14[1] = uVar8;
          puVar14[2] = 1;
          F_004d4810((*(undefined * PTR32 *)(gen_frame + 0x30)),puVar14);
        }
      }
      (*(int * PTR32 *)(gen_frame + 0x44)) = (*(int * PTR32 *)(gen_frame + 0x40));
      (*(int * PTR32 *)(gen_frame + 0x4c)) = (int *)((int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x4c))) << 1 | (uint)((int)(*(int * PTR32 *)(gen_frame + 0x4c)) < 0));
    } while ((*(int * PTR32 *)(gen_frame + 0x40)) < (int *)0x3);
    REFG(undefined4, 0x14882b4) = (REFG(undefined4, 0x14882b4) + 1) % 5;
  }
  if ((*(byte *)(gen_frame + 0x4a)) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = (int)((undefined1 *)(gen_frame + 0x34)) + 0x354;
  }
  uVar13 = F_0067e7d0((undefined *)((int)((undefined1 *)(gen_frame + 0x34)) + 0x3d0),iVar16);
  F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0));
  return uVar13;
}

/* ref: FUN_00684040 */
byte F_00684040(unsigned int gen_a0)
{
  GEN_ENTER(0x684040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  byte bVar3;
  uint * PTR32 * ppuVar4;
  uint uVar5;
  uint uVar6;
  uint * puVar7;
  
  uVar5 = *(uint *)(REFG(int, 0x1370b90) + 0x8c);
  (*(uint * PTR32 *)(gen_frame + 0x14)) = (uint *)0x4;
  (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)0x1;
  (*(uint * PTR32 *)(gen_frame + 0x10)) = (uint *)uVar5;
  if (uVar5 < 4) {
    ppuVar4 = &(*(uint * PTR32 *)(gen_frame + 0x10));
    if (uVar5 < 2) {
      ppuVar4 = &(*(uint * PTR32 *)(gen_frame + 0xc));
    }
  }
  else {
    ppuVar4 = &(*(uint * PTR32 *)(gen_frame + 0x14));
  }
  *(uint *)((int)this + 0x1508) =
       *(uint *)((int)this + 0x1508) ^
       ((int)*ppuVar4 * 8 - 8U ^ *(uint *)((int)this + 0x1508)) & 0x18;
  uVar5 = ((*(uint *)(REFG(int, 0x1370b90) + 0x34) >> 1 & 0xff) * 4 ^ *(uint *)((int)this + 0x1508)) & 4 ^
          *(uint *)((int)this + 0x1508);
  *(uint *)((int)this + 0x1508) = uVar5;
  *(uint *)((int)this + 0x1508) =
       ((uint)(*(int *)(REFG(int, 0x1370b90) + 0x44) == 0x8086) << 6 ^ uVar5) & 0x40 ^ uVar5;
  uVar5 = F_00678da0(&(*(undefined1 *)(gen_frame + 0x1b)));
  *(uint *)((int)this + 0x10) = uVar5;
  iVar2 = REFG(int, 0x1371288);
  if (uVar5 == 0) {
    return 0;
  }
  piVar1 = *(int * PTR32 *)(REFG(int, 0x1371288) + 0x1c);
  *(int * PTR32 *)((int)this + 0x1458) = piVar1;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    piVar1 = *(int * PTR32 *)(iVar2 + 0x30);
    *(int * PTR32 *)((int)this + 0x145c) = piVar1;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x1370b90) + 0x2c) + 0x34)));
      *(int * PTR32 *)((int)this + 0x1460) = piVar1;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
        piVar1 = *(int * PTR32 *)(iVar2 + 0x20);
        *(int * PTR32 *)((int)this + 0x1464) = piVar1;
        if (piVar1 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
          piVar1 = *(int * PTR32 *)(iVar2 + 0x34);
          *(int * PTR32 *)((int)this + 0x1468) = piVar1;
          if (piVar1 != (int *)0x0) {
            ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
            piVar1 = *(int * PTR32 *)(iVar2 + 0x10);
            *(int * PTR32 *)((int)this + 0x146c) = piVar1;
            if (piVar1 != (int *)0x0) {
              ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
              piVar1 = *(int * PTR32 *)(iVar2 + 0x40);
              *(int * PTR32 *)((int)this + 0x1470) = piVar1;
              if (piVar1 != (int *)0x0) {
                ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                (*(undefined4 *)(gen_frame + 0x8)) = 1;
                (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)0x1;
                uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x8)),1,0x2460,0x100000,0xb);
                *(uint *)((int)this + 0x1478) = uVar5;
                if (uVar5 != 0) {
                  (*(undefined4 *)(gen_frame + 0x8)) = 4;
                  (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)0x1;
                  uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x8)),1,0x2470,0x8100010,0xb);
                  *(uint *)((int)this + 0x147c) = uVar5;
                  if (uVar5 != 0) {
                    uVar5 = *(uint *)((int)this + 0x1508);
                    (*(undefined4 *)(gen_frame + 0x8)) = 0x100;
                    (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)0x1;
                    uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x8)),1,
                                         (-(uint)((uVar5 & 0x40) != 0) & 0xffffc350) + 0x5100,
                                         0x100000,0xb);
                    *(uint *)((int)this + 0x1480) = uVar5;
                    if (uVar5 != 0) {
                      (*(undefined4 *)(gen_frame + 0x8)) = 0x100;
                      (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)0x1;
                      uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x8)),1,0x4140,0x200000,0xb);
                      *(uint *)((int)this + 0x1484) = uVar5;
                      if (uVar5 != 0) {
                        piVar1 = *(int * PTR32 *)(iVar2 + 0x90);
                        *(int * PTR32 *)((int)this + 0x1488) = piVar1;
                        if (piVar1 != (int *)0x0) {
                          ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                          piVar1 = *(int * PTR32 *)(iVar2 + 0x94);
                          *(int * PTR32 *)((int)this + 0x148c) = piVar1;
                          if (piVar1 != (int *)0x0) {
                            ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                            piVar1 = *(int * PTR32 *)(iVar2 + 0x98);
                            *(int * PTR32 *)((int)this + 0x1490) = piVar1;
                            if (piVar1 != (int *)0x0) {
                              ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                              piVar1 = *(int * PTR32 *)(iVar2 + 0x9c);
                              *(int * PTR32 *)((int)this + 0x1494) = piVar1;
                              if (piVar1 != (int *)0x0) {
                                ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                piVar1 = *(int * PTR32 *)(iVar2 + 0xa0);
                                *(int * PTR32 *)((int)this + 0x1498) = piVar1;
                                if (piVar1 != (int *)0x0) {
                                  ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                  piVar1 = *(int * PTR32 *)(iVar2 + 0xa4);
                                  *(int * PTR32 *)((int)this + 0x149c) = piVar1;
                                  if (piVar1 != (int *)0x0) {
                                    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                    piVar1 = *(int * PTR32 *)(iVar2 + 0xa8);
                                    *(int * PTR32 *)((int)this + 0x14a0) = piVar1;
                                    if (piVar1 != (int *)0x0) {
                                      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                      piVar1 = *(int * PTR32 *)(iVar2 + 0xac);
                                      *(int * PTR32 *)((int)this + 0x14a4) = piVar1;
                                      if (piVar1 != (int *)0x0) {
                                        ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                        piVar1 = *(int * PTR32 *)(iVar2 + 0xb0);
                                        *(int * PTR32 *)((int)this + 0x14a8) = piVar1;
                                        if (piVar1 != (int *)0x0) {
                                          ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                          piVar1 = *(int * PTR32 *)(iVar2 + 0xb4);
                                          *(int * PTR32 *)((int)this + 0x14ac) = piVar1;
                                          if (piVar1 != (int *)0x0) {
                                            ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                            piVar1 = *(int * PTR32 *)(iVar2 + 0xb8);
                                            *(int * PTR32 *)((int)this + 0x14b0) = piVar1;
                                            if (piVar1 != (int *)0x0) {
                                              ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                              piVar1 = *(int * PTR32 *)(iVar2 + 0xbc);
                                              *(int * PTR32 *)((int)this + 0x14b4) = piVar1;
                                              if (piVar1 != (int *)0x0) {
                                                ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                                piVar1 = *(int * PTR32 *)(iVar2 + 0xc0);
                                                *(int * PTR32 *)((int)this + 0x14b8) = piVar1;
                                                if (piVar1 != (int *)0x0) {
                                                  ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                                  piVar1 = *(int * PTR32 *)(iVar2 + 0xc4);
                                                  *(int * PTR32 *)((int)this + 0x14bc) = piVar1;
                                                  if (piVar1 != (int *)0x0) {
                                                    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                                    piVar1 = *(int * PTR32 *)(iVar2 + 200);
                                                    *(int * PTR32 *)((int)this + 0x14c0) = piVar1;
                                                    if (piVar1 != (int *)0x0) {
                                                      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                                      (*(uint * PTR32 *)(gen_frame + 0x10)) = (uint *)0x0;
                                                      (*(uint * PTR32 *)(gen_frame + 0x14)) = (uint *)((int)this + 0x14cc);
                                                      do {
                                                        uVar5 = 0;
                                                        puVar7 = (*(uint * PTR32 *)(gen_frame + 0x14));
                                                        do {
                                                          uVar6 = F_004dcde0(2,0xb);
                                                          *puVar7 = uVar6;
                                                          if (uVar6 == 0) {
                                                            return 0;
                                                          }
                                                          uVar5 = uVar5 + 1;
                                                          puVar7 = puVar7 + 1;
                                                        } while (uVar5 < 3);
                                                        (*(uint * PTR32 *)(gen_frame + 0x14)) = (*(uint * PTR32 *)(gen_frame + 0x14)) + 3;
                                                        uVar5 = (int)(*(uint * PTR32 *)(gen_frame + 0x10)) + 1;
                                                        (*(uint * PTR32 *)(gen_frame + 0x10)) = (uint *)uVar5;
                                                      } while (uVar5 < 5);
                                                      bVar3 = F_0067a050((undefined *)((int)this + 0x14
                                                                                   ),1);
                                                      if ((((((((bVar3 != 0) &&
                                                               (bVar3 = F_0067a050((undefined *)((int)
                                                  this + 0x34),1), bVar3 != 0)) &&
                                                  (bVar3 = F_0067a050((undefined *)((int)this + 0x54),1
                                                                       ), bVar3 != 0)) &&
                                                  (((bVar3 = F_0067a050((undefined *)((int)this + 0x74)
                                                                          ,3), bVar3 != 0 &&
                                                    (bVar3 = F_0067a050((undefined *)((int)this + 0x94)
                                                                          ,1), bVar3 != 0)) &&
                                                   ((bVar3 = F_0067a050((undefined *)((int)this + 0xb4)
                                                                          ,5), bVar3 != 0 &&
                                                    ((bVar3 = F_0067a050((undefined *)((int)this + 0xd4
                                                                                   ),1), bVar3 != 0
                                                     && (bVar3 = F_0067a050((undefined *)((int)this +
                                                                                      0xf4),1),
                                                        bVar3 != 0)))))))) &&
                                                  (bVar3 = F_0067a050((undefined *)((int)this + 0x114),
                                                                        1), bVar3 != 0)) &&
                                                  (((bVar3 = F_0067a050((undefined *)((int)this + 0x134
                                                                                  ),5), bVar3 != 0
                                                    && (bVar3 = F_0067a050((undefined *)((int)this +
                                                                                     0x154),2),
                                                       bVar3 != 0)) &&
                                                   (bVar3 = F_0067a050((undefined *)((int)this + 0x174)
                                                                         ,2), bVar3 != 0)))) &&
                                                  (((bVar3 = F_0067a050((undefined *)((int)this + 0x194
                                                                                  ),4), bVar3 != 0
                                                    && (bVar3 = F_0067a050((undefined *)((int)this +
                                                                                     0x1b4),1),
                                                       bVar3 != 0)) &&
                                                   ((bVar3 = F_0067a050((undefined *)((int)this + 0x1d4
                                                                                  ),1), bVar3 != 0
                                                    && ((bVar3 = F_0067a050((undefined *)((int)this +
                                                                                      500),4),
                                                        bVar3 != 0 &&
                                                        (bVar3 = F_0067a050((undefined *)((int)this +
                                                                                      0x214),1),
                                                        bVar3 != 0)))))))) &&
                                                  (((bVar3 = F_0067a050((undefined *)((int)this + 0x234
                                                                                  ),8), bVar3 != 0
                                                    && (((((bVar3 = F_0067a050((undefined *)((int)this
                                                                                         + 0x254),6)
                                                           , bVar3 != 0 &&
                                                           (bVar3 = F_0067a050((undefined *)((int)this
                                                                                         + 0x274),5)
                                                           , bVar3 != 0)) &&
                                                          (bVar3 = F_0067a050((undefined *)((int)this +
                                                                                        0x294),6),
                                                          bVar3 != 0)) &&
                                                         ((bVar3 = F_0067a050((undefined *)((int)this +
                                                                                        0x2b4),1),
                                                          bVar3 != 0 &&
                                                          (bVar3 = F_0067a050((undefined *)((int)this +
                                                                                        0x2d4),2),
                                                          bVar3 != 0)))) &&
                                                        ((bVar3 = F_0067a050((undefined *)((int)this +
                                                                                       0x2f4),3),
                                                         bVar3 != 0 &&
                                                         ((bVar3 = F_0067a050((undefined *)((int)this +
                                                                                        0x314),2),
                                                          bVar3 != 0 &&
                                                          (bVar3 = F_0067a050((undefined *)((int)this +
                                                                                        0x334),4),
                                                          bVar3 != 0)))))))) &&
                                                   ((bVar3 = F_0067a050((undefined *)((int)this + 0x354
                                                                                  ),1), bVar3 != 0
                                                    && (((bVar3 = F_0067f3e0(this), bVar3 != 0 &&
                                                         (bVar3 = F_0067cd10((undefined *)((int)this +
                                                                                       0x374)),
                                                         bVar3 != 0)) &&
                                                        (bVar3 = F_0067a1d0((undefined *)((int)this +
                                                                                      0x3d0)),
                                                        bVar3 != 0)))))))) {
                                                    F_0067d1f0(this);
                                                    F_006782b0(this);
                                                    *(undefined4 *)((int)this + 0x1738) =
                                                         REFG(float, 0x1087f04);
                                                    *(undefined2 *)((int)this + 0x173c) = 0;
                                                    return 1;
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_006874c0 */
unsigned int F_006874c0(void)
{
  GEN_ENTER(0x6874c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_006874e0 */
uint F_006874e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6874e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00687b60((undefined *)((int)this + -0x50),param_1);
  return uVar1;
}

/* ref: FUN_006874f0 */
uint F_006874f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6874f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_00687520 */
float F_00687520(unsigned int gen_a0)
{
  GEN_ENTER(0x687520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0xc) *
                                      (float10)*(float *)((int)this + 0xc) +
                                     ((float10)*(float *)((int)this + 8) *
                                      (float10)*(float *)((int)this + 8) +
                                     ((float10)*(float *)((int)(uintptr_t)this) * (float10)*(float *)this +
                                     (float10)*(float *)((int)this + 4) *
                                     (float10)*(float *)((int)this + 4)))))))));
}

/* ref: FUN_00687560 */
uint F_00687560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x687560u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 - (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] - (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] - (float10)param_3[2]);
  param_1[3] = (float)((float10)param_2[3] - (float10)param_3[3]);
  return (uint)param_1;
}

/* ref: FUN_00687590 */
uint F_00687590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x687590u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  fVar5 = param_2[3];
  fVar6 = param_3[3];
  *param_1 = (float)((float10)*param_2 - (float10)*param_3);
  param_1[1] = (float)((float10)fVar1 - (float10)fVar2);
  param_1[2] = (float)((float10)fVar3 - (float10)fVar4);
  param_1[3] = (float)((float10)fVar5 - (float10)fVar6);
  return (uint)param_1;
}

/* ref: FUN_00687600 */
uint F_00687600(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x687600u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[4] = 0;
  in_ecx[6] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[0xc] = (undefined4)gen_fl2bits(param_2);
  in_ecx[0xd] = (undefined4)gen_fl2bits(param_3);
  *in_ecx = uVar1;
  in_ecx[5] = uVar1;
  in_ecx[10] = uVar1;
  in_ecx[0xe] = (undefined4)gen_fl2bits(param_4);
  return (uint)in_ecx;
}

/* ref: FUN_00687660 */
unsigned int F_00687660(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x687660u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] * fVar1);
  in_ecx[2] = (float)(fVar1 * (float10)in_ecx[2]);
  in_ecx[4] = (float)((float10)in_ecx[4] * fVar1);
  in_ecx[5] = (float)(fVar1 * (float10)in_ecx[5]);
  in_ecx[6] = (float)((float10)in_ecx[6] * fVar1);
  in_ecx[8] = (float)(fVar1 * (float10)in_ecx[8]);
  in_ecx[9] = (float)((float10)in_ecx[9] * fVar1);
  in_ecx[10] = (float)(fVar1 * (float10)in_ecx[10]);
  in_ecx[0xc] = (float)((float10)in_ecx[0xc] * fVar1);
  in_ecx[0xd] = (float)(fVar1 * (float10)in_ecx[0xd]);
  in_ecx[0xe] = (float)(fVar1 * (float10)in_ecx[0xe]);
  return 0;
}

/* ref: FUN_006876d0 */
unsigned int F_006876d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6876d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx / fVar1);
  in_ecx[1] = (float)((float10)in_ecx[1] / fVar1);
  in_ecx[2] = (float)((float10)in_ecx[2] / fVar1);
  in_ecx[4] = (float)((float10)in_ecx[4] / fVar1);
  in_ecx[5] = (float)((float10)in_ecx[5] / fVar1);
  in_ecx[6] = (float)((float10)in_ecx[6] / fVar1);
  in_ecx[8] = (float)((float10)in_ecx[8] / fVar1);
  in_ecx[9] = (float)((float10)in_ecx[9] / fVar1);
  in_ecx[10] = (float)((float10)in_ecx[10] / fVar1);
  in_ecx[0xc] = (float)((float10)in_ecx[0xc] / fVar1);
  in_ecx[0xd] = (float)((float10)in_ecx[0xd] / fVar1);
  in_ecx[0xe] = (float)((float10)in_ecx[0xe] / fVar1);
  return 0;
}

/* ref: FUN_00687740 */
unsigned int F_00687740(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x687740u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  F_00687660(in_ecx,param_2);
  return 0;
}

/* ref: FUN_00687760 */
unsigned int F_00687760(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x687760u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  F_006876d0(in_ecx,param_2);
  return 0;
}

/* ref: FUN_00687780 */
byte F_00687780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x687780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong * param_1 = (ulonglong *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(int *)((int)this + 0x1c) == 0) {
    return 0;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x1c))))
                    (*(int * PTR32 *)((int)this + 0x1c),param_1,param_2,0);
  if (uVar1 != 0) {
    return 0;
  }
  if (*(int *)((int)this + 0x18) == 3) {
    *param_1 = (*param_1 * 1000) / CONCAT44(REFG(undefined4, 0x1375a34),REFG(undefined4, 0x1375a30));
  }
  return 1;
}

/* ref: FUN_006877f0 */
uint F_006877f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6877f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 4) {
    return *(uint *)(in_ecx + 0xa4 + param_2 * 4);
  }
  return 0;
}

/* ref: FUN_00687810 */
uint F_00687810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687810u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 3) {
    return *(uint *)(in_ecx + 0xb4 + param_2 * 4);
  }
  return 0;
}

/* ref: FUN_00687830 */
uint F_00687830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687830u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 200 + param_2 * 4);
}

/* ref: FUN_00687850 */
uint F_00687850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x687850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + param_1 * 4 + 0x110) = param_2;
  *(undefined4 *)((int)this + param_1 * 4 + 0x150) = param_3;
  return param_1;
}

/* ref: FUN_00687870 */
uint F_00687870(unsigned int gen_a0)
{
  GEN_ENTER(0x687870u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (param_1 + -1) * 0x10 + 0x38;
}

/* ref: FUN_006878c0 */
uint F_006878c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6878c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x10ac578) + param_1 * 4);
}

/* ref: FUN_006878e0 */
uint F_006878e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6878e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectShader::vf4 */
uint F_00687940(unsigned int gen_a0)
{
  GEN_ENTER(0x687940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = (int)(char)this[0x44];
  if ((((iVar1 != -1) && (*(int *)(REFG(int, 0x148809c) + 8 + iVar1 * 4) != 0)) &&
      (*((int *)GEN_TOP((*(int *)(REFG(int, 0x148809c) + 8 + iVar1 * 4) + 0x98))) != 0)) &&
     (((((byte)this[0x48] & 8) != 0 && (this[0x42] != (undefined1)0x0)) &&
      (*(int *)(this + 0x18) != 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00687980 */
uint F_00687980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687980u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 4) + param_2 * 4)));
}

/* ref: FUN_00687990 */
unsigned int F_00687990(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x687990u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x18) = param_2;
  return 0;
}

/* ref: FUN_006879b0 */
unsigned int F_006879b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6879b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x18) = param_1;
  return 0;
}

/* ref: FUN_006879e0 */
unsigned int F_006879e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6879e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x1c) = param_1;
  return 0;
}

/* ref: FUN_00687a30 */
uint F_00687a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x687a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *((undefined1 *)GEN_TOP(((param_1 & 1) + 0x2a + (int)this))) = (undefined1)param_2;
  return param_1 & 1;
}

/* ref: Singleton_VPostEffectManager_PostEffect_Graphics_Client_Graphics::vf0 */
uint F_00687a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10adc40));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00687a90 */
uint F_00687a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687a90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 0) {
    return *(uint *)(in_ecx + 0x14);
  }
  return *((uint *)GEN_TOP((in_ecx + 0x50 + (param_2 - 1U & 1) * 4)));
}

/* ref: FUN_00687ab0 */
byte F_00687ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x687ab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x81) = 1;
  return 1;
}

/* ref: Client::Graphics::PostEffect::PostEffectAdaptLumShader::vf4 */
uint F_00687ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x687ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = (int)(char)this[0x44];
  if ((((iVar1 != -1) && (*(int *)(REFG(int, 0x148809c) + 8 + iVar1 * 4) != 0)) &&
      (*((int *)GEN_TOP((*(int *)(REFG(int, 0x148809c) + 8 + iVar1 * 4) + 0x98))) != 0)) &&
     (((byte)this[0x48] & 8) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectShader::vf0 */
uint F_00687b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectRepeatShader::vf0 */
uint F_00687b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectAdaptLumShader::vf0 */
uint F_00687b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adc0c));
  *(undefined * PTR32 * PTR32 *)(this + 0x50) = (*(undefined * PTR32 (*)[5])REFP(0x10adbf4));
  *(undefined * PTR32 * PTR32 *)(this + 0x80) = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  F_004d6680(this + 0x50);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectStarShader::vf0 */
uint F_00687ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectDofCocShader::vf0 */
uint F_00687be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectCameraVelocityShader::vf0 */
uint F_00687c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectMoonShader::vf0 */
uint F_00687c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectChain::vf0 */
uint F_00687c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10adc28));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectLensFlare::vf0 */
uint F_00687ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10adc30));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectRoofQuery::vf0 */
uint F_00687ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10adc38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00687d20 */
uint F_00687d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006884f0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00687d30 */
unsigned int F_00687d30(void)
{
  GEN_ENTER(0x687d30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00687d40 */
uint F_00687d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x687d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  this_00 = (undefined *)F_00406b90(0x150,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00677890(this_00);
  }
  *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = uVar3;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = 0;
    }
  }
  *(uint *)((int)this + 0x1c) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x1c) | 0 << ((byte)param_1 & 0x1f);
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
}

/* ref: FUN_00687e00 */
uint F_00687e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x687e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined4 *)F_00406b90(0xd4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    F_00677380(puVar2);
    F_004d6630(puVar2 + 0x14);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10adc0c));
    puVar2[0x14] = (*(undefined * PTR32 (*)[5])REFP(0x10adbf4));
    F_00677380(puVar2 + 0x20);
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1d] = 0;
    puVar2[0x1e] = 0;
    puVar2[0x1f] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = puVar2;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = 0;
    }
  }
  *(uint *)((int)this + 0x1c) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x1c) | 0 << ((byte)param_1 & 0x1f);
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
}

/* ref: FUN_00687f00 */
uint F_00687f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x687f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  this_00 = (undefined *)F_00406b90(0x148,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00677bb0(this_00);
  }
  *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = uVar3;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = 0;
    }
  }
  *(uint *)((int)this + 0x1c) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x1c) | 0 << ((byte)param_1 & 0x1f);
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
}

/* ref: FUN_00687fc0 */
uint F_00687fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x687fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined4 *)F_00406b90(0x70,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    F_00677380(puVar2);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10adce8));
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = puVar2;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = 0;
    }
  }
  *(uint *)((int)this + 0x1c) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x1c) | 0 << ((byte)param_1 & 0x1f);
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
}

/* ref: FUN_00688090 */
uint F_00688090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x688090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined4 *)F_00406b90(0x54,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    F_00677380(puVar2);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10add3c));
    puVar2[0x14] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = puVar2;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = 0;
    }
  }
  *(uint *)((int)this + 0x1c) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x1c) | 0 << ((byte)param_1 & 0x1f);
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
}

/* ref: FUN_00688160 */
uint F_00688160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x688160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined4 *)F_00406b90(0x88,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    F_00677380(puVar2);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10add04));
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = puVar2;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = 0;
    }
  }
  *(uint *)((int)this + 0x1c) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x1c) | 0 << ((byte)param_1 & 0x1f);
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
}

/* ref: FUN_00688240 */
uint F_00688240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x688240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    F_00677380(puVar2);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10add20));
  }
  *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = puVar2;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = 0;
    }
  }
  *(uint *)((int)this + 0x1c) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x1c) | 0 << ((byte)param_1 & 0x1f);
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
}

/* ref: FUN_00688310 */
uint F_00688310(unsigned int gen_a0)
{
  GEN_ENTER(0x688310u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined2 *)(in_ecx + 0x1738) = 0;
  *(uint *)(in_ecx + 0x34c) = *(uint *)(in_ecx + 0x34c) | 1;
  return 1;
}

/* ref: FUN_00688330 */
uint F_00688330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x688330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  this_00 = (undefined *)F_00406b90(0x50,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00677380(this_00);
  }
  *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = uVar3;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = 0;
    }
  }
  *(uint *)((int)this + 0x1c) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x1c) | 0 << ((byte)param_1 & 0x1f);
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
}

/* ref: Client::Graphics::PostEffect::PostEffectSystem::vf0 */
uint F_006883f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6883f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  REFG(undefined4, 0x148809c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectMeasureLumShader::vf0 */
uint F_00688420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pPVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adcb0));
  pPVar1 = this + 0x150;
  iVar2 = 2;
  do {
    pPVar1 = pPVar1 + -0x50;
    iVar2 = iVar2 + -1;
    *(undefined * PTR32 * PTR32 *)pPVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectBloomShader::vf0 */
uint F_00688470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pPVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adccc));
  pPVar1 = this + 0x148;
  iVar2 = 2;
  do {
    pPVar1 = pPVar1 + -0x50;
    iVar2 = iVar2 + -1;
    *(undefined * PTR32 * PTR32 *)pPVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectFogShader::vf0 */
uint F_006884c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6884c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectManager::vf0 */
uint F_006884f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6884f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00678260(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00688520 */
uint F_00688520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x688520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined4 *)F_00406b90(0x9c,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    F_00677380(puVar2);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10add90));
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = puVar2;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = 0;
    }
  }
  *(uint *)((int)this + 0x1c) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x1c) | 0 << ((byte)param_1 & 0x1f);
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
}

/* ref: FUN_00688600 */
uint F_00688600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_004d4760(this,8);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 10;
    puVar1[1] = param_1;
    uVar2 = F_004d4810(this,puVar1);
  }
  return uVar2;
}

/* ref: FUN_00688630 */
uint F_00688630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x688630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_004d4760(this,0xc);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0xc;
    puVar1[1] = param_1;
    puVar1[2] = param_2;
    uVar2 = F_004d4810(this,puVar1);
  }
  return uVar2;
}

/* ref: FUN_00688660 */
uint F_00688660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x688660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00688330(this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00688670 */
uint F_00688670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x2c)));
  puVar2 = (undefined4 *)(iVar1 + param_1 * 0x1c);
  if (0xf < *(uint *)(iVar1 + 0x14 + param_1 * 0x1c)) {
    puVar2 = (undefined4 *)*puVar2;
  }
  return (uint)puVar2;
}

/* ref: FUN_006886a0 */
uint F_006886a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6886a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 0x2c)));
  puVar2 = (undefined4 *)(iVar1 + param_1 * 0x1c);
  if (0xf < *(uint *)(iVar1 + 0x14 + param_1 * 0x1c)) {
    puVar2 = (undefined4 *)*puVar2;
  }
  return (uint)puVar2;
}

/* ref: FUN_006886d0 */
uint F_006886d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6886d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x14);
  if ((iVar1 != 0) && (*(undefined * PTR32 *)(iVar1 + 0x20) == this)) {
    *(uint *)(iVar1 + 0x20) =
         -(uint)(*(undefined * PTR32 *)((int)this + 0x1c) != this) & (uint)*(undefined * PTR32 *)((int)this + 0x1c);
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x18))) = *(undefined4 *)((int)this + 0x18);
  uVar2 = *(uint *)((int)this + 0x18);
  *(undefined4 *)(uVar2 + 0x1c) = *(undefined4 *)((int)this + 0x1c);
  *(undefined * PTR32 *)((int)this + 0x18) = this;
  *(undefined * PTR32 *)((int)this + 0x1c) = this;
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar2;
}

/* ref: Client::Graphics::Scene::Object::vf4 */
unsigned int F_00688710(void)
{
  GEN_ENTER(0x688710u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::Object::vf5 */
unsigned int F_00688720(void)
{
  GEN_ENTER(0x688720u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::World::vf2 */
uint F_00688730(void)
{
  GEN_ENTER(0x688730u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00688740 */
uint F_00688740(unsigned int gen_a0)
{
  GEN_ENTER(0x688740u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x10))((int *)*param_1);
  return uVar1;
}

/* ref: FUN_00688760 */
uint F_00688760(unsigned int gen_a0)
{
  GEN_ENTER(0x688760u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x14))((int *)*param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::Camera::vf2 */
uint F_00688780(void)
{
  GEN_ENTER(0x688780u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00688790 */
byte F_00688790(void)
{
  GEN_ENTER(0x688790u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::DrawObject::vf7 */
uint F_006887a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6887a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
  return uVar1;
}

/* ref: Client::Graphics::Scene::DrawObject::vf16 */
uint F_006887b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6887b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::DrawObject::vf19 */
uint F_006887d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6887d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::DrawObject::vf20 */
byte F_006887f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6887f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf30 */
uint F_00688800(void)
{
  GEN_ENTER(0x688800u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf31 */
unsigned int F_00688810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00688870 */
unsigned int F_00688870(float gen_a0)
{
  GEN_ENTER(0x688870u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00688890 */
unsigned int F_00688890(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x688890u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterUtility::vf1 */
unsigned int F_00688910(unsigned int gen_a0)
{
  GEN_ENTER(0x688910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0xa8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0xa8) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0xa4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0xa4) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0xa0);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0xa0) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x9c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x9c) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x98);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x98) = 0;
  }
  return 0;
}

/* ref: FUN_00688990 */
uint F_00688990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688990u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  ushort uVar1;
  
  *param_1 = REFG(undefined4, 0x10f04d4);
  param_1[1] = REFG(undefined4, 0x10f04d8);
  param_1[2] = REFG(undefined4, 0x10f04dc);
  uVar1 = *(ushort *)(param_2 + 4);
  if ((4 < uVar1) && ((uVar1 < 9 || (uVar1 == 10)))) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
  }
  return (uint)param_1;
}

/* ref: FUN_006889d0 */
uint F_006889d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6889d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    this_00 = *(undefined * PTR32 *)((int)this + 0x28);
    break;
  case 2: ;
    this_00 = *(undefined * PTR32 *)((int)this + 0x2c);
    break;
  case 3: ;
    this_00 = *(undefined * PTR32 *)((int)this + 0x30);
    break;
  case 4: ;
    this_00 = *(undefined * PTR32 *)((int)this + 0x34);
    break;
  default: ;
    goto switchD_006889dc_default;
  }
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00503570(this_00,param_1,param_3);
    return uVar1;
  }
switchD_006889dc_default: ;
  return 0xffff;
}

/* ref: FUN_00688a30 */
byte F_00688a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00b51e00(*(undefined * PTR32 *)((int)this + 0x10),param_1);
  return bVar1;
}

/* ref: FUN_00688a40 */
uint F_00688a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x688a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b51c10(*(undefined * PTR32 *)((int)this + 0x14),param_2);
  *param_1 = uVar1;
  return uVar1;
}

/* ref: FUN_00688a60 */
uint F_00688a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x688a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b51c10(*(undefined * PTR32 *)((int)this + 0x18),param_2);
  *param_1 = uVar1;
  return uVar1;
}

/* ref: FUN_00688a80 */
uint F_00688a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x688a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b51c10(*(undefined * PTR32 *)((int)this + 0x1c),param_2);
  *param_1 = uVar1;
  return uVar1;
}

/* ref: FUN_00688ad0 */
uint F_00688ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x688ad0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = 4;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    return 0;
  case 2: ;
    return 2;
  case 3: ;
    return 1;
  case 4: ;
    uVar1 = 3;
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf2 */
uint F_00688b20(void)
{
  GEN_ENTER(0x688b20u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: CPane::GetBorders */
uint F_00688b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *param_1 = *(undefined4 *)(this + 0x120);
  param_1[1] = *(undefined4 *)(this + 0x124);
  uVar1 = *(undefined4 *)(this + 300);
  param_1[2] = *(undefined4 *)(this + 0x128);
  param_1[3] = uVar1;
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf13 */
uint F_00688b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  if ((*(undefined * PTR32 *)(this + 0x78) == (undefined *)0x0) || (*(ushort *)(this + 0x11c) == 0xffff)) {
    puVar3 = &REFG(float, 0x1302d00);
  }
  else {
    uVar1 = F_0064ce50(*(undefined * PTR32 *)(this + 0x78),((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)(this + 0x11c));
    uVar2 = F_00623320(*(undefined * PTR32 *)(this + 0x78),(uint)*(ushort *)(this + 0x11c));
    F_004ef350(((undefined4 *)(gen_frame + 0x40)),uVar2,uVar1);
    puVar3 = ((undefined4 *)(gen_frame + 0x40));
  }
  F_005fec10(param_1,puVar3,this + 0x140);
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf16 */
uint F_00688c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x688c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (*(undefined * PTR32 *)(this + 0x78) == (undefined *)0x0) {
    puVar2 = &REFG(float, 0x1302d00);
    puVar3 = param_1;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return (uint)param_1;
  }
  F_006558a0(*(undefined * PTR32 *)(this + 0x78),param_1,param_2);
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf20 */
byte F_00688c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  if (*(undefined * PTR32 *)(this + 0x78) == (undefined *)0x0) {
    return 0;
  }
  bVar1 = F_00623360(*(undefined * PTR32 *)(this + 0x78),param_1);
  return bVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf23 */
uint F_00688c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 0x270) = *param_1;
  *(undefined4 *)(this + 0x274) = param_1[1];
  *(undefined4 *)(this + 0x278) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)(this + 0x27c) = uVar1;
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf24 */
uint F_00688ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 0x280) = *param_1;
  *(undefined4 *)(this + 0x284) = param_1[1];
  *(undefined4 *)(this + 0x288) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)(this + 0x28c) = uVar1;
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf25 */
uint F_00688cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x688cd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x280;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf26 */
unsigned int F_00688ce0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x688ce0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x298) = param_2;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf27 */
unsigned int F_00688d00(unsigned int gen_a0)
{
  GEN_ENTER(0x688d00u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf28 */
uint F_00688d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688d10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x29c) = param_2;
  return param_2;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf29 */
uint F_00688d20(unsigned int gen_a0)
{
  GEN_ENTER(0x688d20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x29c);
}

/* ref: Client::Graphics::Scene::CharacterBase::vf51 */
uint F_00688d30(void)
{
  GEN_ENTER(0x688d30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00688d50 */
uint F_00688d50(unsigned int gen_a0)
{
  GEN_ENTER(0x688d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061eec0(*(undefined * PTR32 *)((int)this + 0x78),1);
  }
  F_009f54d0((undefined *)((int)this + 0x4a0),*(undefined4 *)((int)this + 0x414),1,0);
  uVar1 = 0;
  if (*(int *)((int)this + 0x414) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x414),0,0);
    *(undefined4 *)((int)this + 0x414) = 0;
  }
  return uVar1;
}

/* ref: FUN_00688da0 */
unsigned int F_00688da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x688da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(int *)((int)this + 0x78) != 0) {
    F_00b825e0((undefined *)((int)this + 0x700),param_3,param_1,param_2);
    F_0063a2f0(*(undefined * PTR32 *)((int)this + 0x78),param_1,param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00688de0 */
uint F_00688de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  
  if (*(int *)((int)this + 0x78) == 0) {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))();
  uVar3 = 0;
  if (uVar2 != 0) {
    this_00 = (undefined *)((int)this + 0x418);
    do {
      bVar1 = F_009f30c0(this_00,param_1);
      if (bVar1 != 0) {
        uVar2 = F_009f55b0((undefined *)(uVar3 * 0x88 + 0x418 + (int)this),param_1);
        return uVar2;
      }
      uVar3 = uVar3 + 1;
      this_00 = (undefined *)((int)this_00 + 0x88);
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_00688e60 */
unsigned int F_00688e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x688e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0064d630(*(undefined * PTR32 *)((int)this + 0x78),param_2,param_1);
  }
  return 0;
}

/* ref: FUN_00688e80 */
uint F_00688e80(unsigned int gen_a0)
{
  GEN_ENTER(0x688e80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) != 0) {
    uVar1 = F_006233a0(*(int *)(in_ecx + 0x78));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00688e90 */
uint F_00688e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    uVar1 = F_0061efe0(*(undefined * PTR32 *)((int)this + 0x78),param_1);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00688eb0 */
uint F_00688eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    uVar1 = F_006233d0(*(undefined * PTR32 *)((int)this + 0x78),param_1);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00688ed0 */
unsigned int F_00688ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061f000(*(undefined * PTR32 *)((int)this + 0x78),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00688ef0 */
unsigned int F_00688ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_006233b0(*(undefined * PTR32 *)((int)this + 0x78),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00688f30 */
float F_00688f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float10 fVar1;
  
  if (*(int *)((int)this + 0x78) != 0) {
    fVar1 = F_00623400(*(int *)((int)this + 0x78),param_1);
    return (float)fVar1;
  }
  return (float)(float10)0;
}

/* ref: FUN_00688f50 */
uint F_00688f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x688f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061f100(*(undefined * PTR32 *)((int)this + 0x78),param_1,param_2);
    return (uint)param_1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00688fa0 */
uint F_00688fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x688fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061f0b0(*(undefined * PTR32 *)((int)this + 0x78),param_1,param_2);
    return (uint)param_1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00688ff0 */
uint F_00688ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x688ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061f150(*(undefined * PTR32 *)((int)this + 0x78),param_1,param_2);
    return (uint)param_1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00689040 */
uint F_00689040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061f1a0(*(undefined * PTR32 *)((int)this + 0x78),param_1,param_2);
    return (uint)param_1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00689090 */
uint F_00689090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061f1f0(*(undefined * PTR32 *)((int)this + 0x78),param_1,param_2);
    return (uint)param_1;
  }
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_006890d0 */
uint F_006890d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6890d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061f230(*(undefined * PTR32 *)((int)this + 0x78),param_1,param_2);
    return (uint)param_1;
  }
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00689110 */
uint F_00689110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061f020(*(undefined * PTR32 *)((int)this + 0x78),param_1,param_2);
    return (uint)param_1;
  }
  *param_1 = (undefined4)REFG(float, 0x1375ad0);
  param_1[1] = (*(undefined4 *)((char *)&REFG(float, 0x1375ad0) + 4));
  param_1[2] = (undefined4)REFG(float, 0x1375ad8);
  param_1[3] = (*(undefined4 *)((char *)&REFG(float, 0x1375ad8) + 4));
  return (uint)param_1;
}

/* ref: FUN_00689160 */
unsigned int F_00689160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061f270(*(undefined * PTR32 *)((int)this + 0x78),param_1,param_2,param_3);
    return 0;
  }
  return 0;
}

/* ref: FUN_00689180 */
uint F_00689180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    uVar1 = F_0061f070(*(undefined * PTR32 *)((int)this + 0x78),param_1);
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_006891a0 */
uint F_006891a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6891a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) != 0) {
    uVar1 = F_0061f090(*(int *)(in_ecx + 0x78),param_2);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_006891c0 */
uint F_006891c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6891c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  uint in_EAX = 0;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x80);
  uVar2 = *(uint *)((int)this + 0x74);
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(iVar1 + uVar3 * 4);
      if (this_00 != (undefined *)0x0) {
        in_EAX = F_009bc310(this_00,param_1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return in_EAX;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf63 */
byte F_00689200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf64 */
uint F_00689210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf87 */
unsigned int F_00689220(unsigned int gen_a0)
{
  GEN_ENTER(0x689220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  int local_8;
  
  local_8 = 0x1e;
  if (*(int *)(this + 0x2d8) != 0) {
    uVar2 = F_0061f4f0(*(int *)(this + 0x2d8));
    local_8 = uVar2 + 0x1a;
  }
  uVar2 = *(uint *)(this + 0x74);
  iVar1 = *(int *)(this + 0x7c);
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(iVar1 + uVar3 * 4);
      if (this_00 != (undefined *)0x0) {
        F_006583e0(this_00,local_8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_00689270 */
unsigned int F_00689270(void)
{
  GEN_ENTER(0x689270u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00689280 */
unsigned int F_00689280(unsigned int gen_a0)
{
  GEN_ENTER(0x689280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x160) != (undefined *)0x0) {
    F_0061e400(*(undefined * PTR32 *)((int)this + 0x160));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x160);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x160) = 0;
    }
  }
  return 0;
}

/* ref: FUN_006892b0 */
byte F_006892b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6892b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_ecx;
  undefined * this_00;
  
  in_ecx = F_00406b90(8,0,0);
  if (in_ecx == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = (undefined *)F_006207f0(in_ecx);
  }
  *(undefined * PTR32 *)((int)this + 0x164) = this_00;
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  bVar1 = F_00632400(this_00);
  return bVar1 != 0;
}

/* ref: FUN_006892f0 */
unsigned int F_006892f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6892f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x164) != (undefined *)0x0) {
    F_00620800(*(undefined * PTR32 *)((int)this + 0x164));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x164);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x164) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00689350 */
unsigned int F_00689350(unsigned int gen_a0)
{
  GEN_ENTER(0x689350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0xe4) != (undefined *)0x0) {
    F_00b84960(*(undefined * PTR32 *)((int)this + 0xe4));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0xe4);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0xe4) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00689380 */
unsigned int F_00689380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x80);
  uVar2 = *(uint *)((int)this + 0x74);
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(iVar1 + uVar3 * 4);
      if (this_00 != (undefined *)0x0) {
        F_009bc1e0(this_00,param_1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf83 */
uint F_006893c0(void)
{
  GEN_ENTER(0x6893c0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf84 */
uint F_006893d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6893d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf88 */
byte F_006893e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6893e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf89 */
unsigned int F_006893f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6893f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf90 */
unsigned int F_00689400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00689410 */
byte F_00689410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689410u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 4) = param_2;
  return 1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf32 */
unsigned int F_00689420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf33 */
unsigned int F_00689430(void)
{
  GEN_ENTER(0x689430u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf34 */
uint F_00689440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (*(int *)(this + 0x714) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this);
  }
  *(uint *)(this + 0x6fc) = param_1;
  uVar1 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 4),0,0);
  *(uint *)(this + 0x714) = uVar1;
  uVar1 = 0;
  if (param_1 != 0) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)(this + 0x714) + uVar1 * 4))) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_1);
  }
  uVar1 = F_00b82430(this + 0x700,param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf36 */
byte F_006894c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6894c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x78) != 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf37 */
uint F_006894d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6894d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b82530(in_ecx + 0x700);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf38 */
uint F_006894e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6894e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00b825e0(this + 0x700,param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf39 */
uint F_006894f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6894f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b82190(param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf40 */
unsigned int F_00689500(unsigned int gen_a0)
{
  GEN_ENTER(0x689500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b821d0(this + 0x700);
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf41 */
uint F_00689510(unsigned int gen_a0)
{
  GEN_ENTER(0x689510u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b82200(in_ecx + 0x700);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf42 */
uint F_00689520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b82240(this + 0x700,param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf43 */
uint F_00689530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00b82390(this + 0x700,param_1,param_2,param_3);
  return param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf44 */
uint F_00689560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b823f0(this + 0x700,param_1,param_2);
  return uVar1;
}

