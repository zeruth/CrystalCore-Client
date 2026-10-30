#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00dc1630 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dc1630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(code * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdc1630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(code * param_2 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    do {
      uVar2 = param_1[2];
      uVar3 = param_1[3] * iVar1 + uVar2;
      for (; uVar2 < uVar3; uVar2 = uVar2 + iVar1) {
        (*param_2)(uVar2,*((undefined4 *)GEN_TOP(((int)this + 4))),param_3 & 0xffffff00,param_3,param_4);
        iVar1 = *((int *)GEN_TOP(((int)this + 4)));
      }
      param_1 = ((int *)GEN_TOP(*param_1));
    } while (param_1 != ((int *)GEN_TOP(0x0)));
  }
  return;
}

/* ref: FUN_00dc1690 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc1690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc1690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00dc1460(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x10))));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return uVar1;
}

/* ref: FUN_00dc16b0 */
GEN_LIB GEN_FRAME uint F_00dc16b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc16b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 < 0x11) {
    return param_1 + 0x10;
  }
  return param_2 + param_1;
}

/* ref: FUN_00dc1710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc1710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00dc15a0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x10))));
  uVar4 = F_00dc15a0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xc))));
  *param_1 = uVar3 + uVar4;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x34)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x30)));
  iVar5 = *((int *)GEN_TOP(((int)this + 4))) * iVar1;
  param_1[3] = iVar5;
  param_1[1] = (iVar2 - iVar1) * *((int *)GEN_TOP(((int)this + 4)));
  param_1[5] = *((int *)GEN_TOP(((int)this + 4)));
  param_1[4] = iVar5;
  return (uint)param_1;
}

/* ref: FUN_00dc1760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc1760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = F_00dc1540(this GEN_EDX_FWD);
  if ((uVar3 != *((uint *)GEN_TOP(((int)this + 0x34)))) || (uVar3 = F_00dc1610((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG), uVar3 != *((uint *)GEN_TOP(((int)this + 0x30))))) {
    *param_1 = 0;
    return (uint)param_1;
  }
  piVar4 = *(int * PTR32 *)this;
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    do {
      if (((uint)piVar4 & *((int *)GEN_TOP(((int)this + 0x18))) - 1U) != 0) {
LAB_00dc17ba: ;
        *param_1 = 0;
        return (uint)param_1;
      }
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
      while( true ) {
        if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) goto LAB_00dc17ba;
        piVar2 = ((int *)GEN_TOP(puVar1[2]));
        if ((piVar2 <= piVar4) && (piVar4 < ((int *)GEN_TOP((puVar1[3] * *((int *)GEN_TOP(((int)this + 4))) + (int)piVar2))))) break;
        puVar1 = ((undefined4 *)GEN_TOP(*puVar1));
      }
      if ((uint)((int)piVar4 - (int)piVar2) % *((uint *)GEN_TOP(((int)this + 4))) != 0) goto LAB_00dc17ba;
      piVar4 = ((int *)GEN_TOP(*piVar4));
    } while (piVar4 != ((int *)GEN_TOP(0x0)));
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00dc17f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc17f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc17f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar1;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar2;
  uint uVar3;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * ppppppuVar4;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * ppppppuVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * ppppppuVar6;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
    return 0;
  }
  uVar3 = F_00dc1ee0(*((int *)GEN_TOP(((int)this + 0xc))));
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar3;
  F_00dc1510(this GEN_EDX_ARG);
  ppppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(F_00dc1ef0(*(undefined4 *)this)));
  pppppppuVar1 = *((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc)));
  (*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14)) = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10));
  *(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)this = ppppppuVar4;
  ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = pppppppuVar1;
  (*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10)) = ppppppuVar4;
  (*(uint *)(gen_frame + 0x18)) = 0;
  pppppppuVar2 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14));
  uVar3 = (*(uint *)(gen_frame + 0x18));
  do {
    if (pppppppuVar1 == ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(0x0))) {
      *(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)this = (*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10));
      *((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      return uVar3;
    }
    ppppppuVar6 = pppppppuVar1[2];
    ppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)pppppppuVar1[3] * *((int *)GEN_TOP(((int)this + 4))) + (int)ppppppuVar6)));
    if (ppppppuVar6 == ppppppuVar4) {
      do {
        if (ppppppuVar5 <= ppppppuVar6) break;
        ppppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*ppppppuVar4;
        ppppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)ppppppuVar6 + *((int *)GEN_TOP(((int)this + 4))))));
      } while (ppppppuVar6 == ppppppuVar4);
    }
    if (ppppppuVar6 == ppppppuVar5) {
      ppppppuVar6 = *pppppppuVar1;
      (*(uint *)(gen_frame + 0x18)) = uVar3 + 1;
      (*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14)) = pppppppuVar2;
      *pppppppuVar2 = ppppppuVar6;
      *pppppppuVar1 = *((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10)));
      *((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = pppppppuVar1;
      pppppppuVar1 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*pppppppuVar2;
      *(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ppppppuVar4;
      pppppppuVar2 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14));
      uVar3 = (*(uint *)(gen_frame + 0x18));
    }
    else {
      for (; (ppppppuVar4 != ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(0x0)) && (ppppppuVar4 < ppppppuVar5));
          ppppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*ppppppuVar4) {
      }
      if ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)) != ppppppuVar4) {
        do {
          (*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)*(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c));
        } while ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)) != ppppppuVar4);
      }
      (*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14)) = pppppppuVar1;
      pppppppuVar1 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*pppppppuVar1;
      pppppppuVar2 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14));
    }
  } while( true );
}

/* ref: FUN_00dc18d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc18d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(code * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdc18d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(code * param_1 = (code *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * extraout_ECX = 0;
  undefined4 * extraout_ECX_00 = 0;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  uint3 uVar8;
  
  F_00dc1630(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x10))),param_1,param_2,param_3);
  if ((*((int *)GEN_TOP(((int)this + 0xc))) != 0) || (puVar3 = ((undefined4 *)GEN_TOP(0x0)), *(int *)this != 0)) {
    uVar2 = F_00dc1ee0(*((int *)GEN_TOP(((int)this + 0xc))));
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
    F_00dc1510(this GEN_EDX_ARG);
    puVar3 = ((undefined4 *)GEN_TOP(F_00dc1ef0(*(undefined4 *)this)));
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
    *(undefined4 * PTR32 *)this = puVar3;
    puVar6 = puVar3;
    for (; puVar1 != ((undefined4 *)GEN_TOP(0x0)); puVar1 = ((undefined4 *)GEN_TOP(*puVar1))) {
      puVar7 = ((undefined4 *)GEN_TOP(puVar1[2]));
      puVar4 = ((undefined4 *)GEN_TOP((puVar1[3] * *((int *)GEN_TOP(((int)this + 4))) + (int)puVar7)));
      puVar3 = puVar4;
      puVar5 = puVar1;
      for (; puVar7 < puVar4; puVar7 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 4))))))) {
        uVar8 = (uint3)((uint)((int)(uintptr_t)puVar5) >> 8);
        if (puVar7 == puVar6) {
          puVar3 = ((undefined4 *)GEN_TOP((*param_1)(puVar7,*((undefined4 *)GEN_TOP(((int)this + 4))),(uint)uVar8 << 8,param_2,param_3 )));
          puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
          puVar5 = extraout_ECX;
        }
        else {
          puVar3 = ((undefined4 *)GEN_TOP((*param_1)(puVar7,*((undefined4 *)GEN_TOP(((int)this + 4))),CONCAT31(uVar8,1),param_2, param_3)));
          puVar5 = extraout_ECX_00;
        }
      }
    }
  }
  return (uint)puVar3;
}

/* ref: FUN_00dc1990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc1990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint * puVar6;
  uint * puVar7;
  uint uVar8;
  
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *puVar5;
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = puVar5[2];
    *((int *)GEN_TOP(((int)this + 0x24))) = puVar5[3] * *((int *)GEN_TOP(((int)this + 4))) + puVar5[2];
    *puVar5 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
    *((int *)GEN_TOP(((int)this + 0x34))) = *((int *)GEN_TOP(((int)this + 0x34))) - 1;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar5;
    uVar4 = *((uint *)GEN_TOP(((int)this + 0x20)));
    *((uint *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 4))) + uVar4;
    return uVar4;
  }
  if (*((int *)GEN_TOP(((int)this + 0x14))) == 0) {
    iVar3 = (int)(0x100 / (ulonglong)*((uint *)GEN_TOP(((int)this + 4))));
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    uVar4 = F_00dc16b0(*((uint *)GEN_TOP(((int)this + 4))) * iVar3,*((undefined4 *)GEN_TOP(((int)this + 0x18))));
    *((uint *)GEN_TOP(((int)this + 0x14))) = uVar4;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x2c)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
    (*(int *)(gen_frame + 0x0)) = *((int *)GEN_TOP(((int)this + 0x14)));
    puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)))));
    if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar4 = *((int *)GEN_TOP(((int)this + 0x18))) + 0xf + (int)puVar5 & ~(*((int *)GEN_TOP(((int)this + 0x18))) - 1U);
    (*(uint *)(gen_frame + 0x4)) = uVar4;
    puVar5[1] = 0;
    puVar6 = puVar5 + 3;
    *puVar6 = ((int)puVar5 + ((*(int *)(gen_frame + 0x0)) - uVar4)) / *((uint *)GEN_TOP(((int)this + 4)));
  }
  else {
    puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,0x10)));
    if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
      return 0;
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
    (*(uint *)(gen_frame + 0x4)) = *((uint *)GEN_TOP(((int)this + 0x14)));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x4)));
    if (uVar4 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x2c))) GEN_EDX_ARG,puVar5,0x10);
      return 0;
    }
    puVar5[1] = uVar4;
    uVar8 = *((int *)GEN_TOP(((int)this + 0x18))) - 1 + uVar4 & ~(*((int *)GEN_TOP(((int)this + 0x18))) - 1U);
    if ((uVar8 != uVar4) || ((*(uint *)(gen_frame + 0x4)) != *((uint *)GEN_TOP(((int)this + 0x14))))) {
      uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
      puVar6 = puVar5 + 3;
      puVar7 = puVar5 + 2;
      *puVar7 = uVar8;
      *puVar6 = ((uVar4 - uVar8) + (*(uint *)(gen_frame + 0x4))) / uVar2;
      goto LAB_00dc1acb;
    }
    puVar6 = puVar5 + 3;
    *puVar6 = *((uint *)GEN_TOP(((int)this + 0x1c)));
  }
  puVar7 = puVar5 + 2;
  *puVar7 = uVar4;
LAB_00dc1acb: ;
  *((uint *)GEN_TOP(((int)this + 0x20))) = *puVar7;
  *((uint *)GEN_TOP(((int)this + 0x24))) = *puVar6 * *((int *)GEN_TOP(((int)this + 4))) + *puVar7;
  *puVar5 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar5;
  *((int *)GEN_TOP(((int)this + 0x30))) = *((int *)GEN_TOP(((int)this + 0x30))) + *puVar6;
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x20)));
  *((int *)GEN_TOP(((int)this + 0x34))) = *((int *)GEN_TOP(((int)this + 0x34))) + (*puVar6 - 1);
  *((uint *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 4))) + uVar4;
  return uVar4;
}

/* ref: FUN_00dc1b00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc1b00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00dc1ee0(*((undefined4 *)GEN_TOP(((int)this + 0xc))));
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
  uVar2 = F_00dc1ee0(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
  if (iVar1 != 0) {
    *param_1 = iVar1;
  }
  uVar2 = (uint)(iVar1 != 0);
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    param_1[uVar2] = *((int *)GEN_TOP(((int)this + 0x10)));
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

/* ref: FUN_00dc1b50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xdc1b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  LPVOID pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_4;
  if (param_4 == 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    iVar3 = *((int *)GEN_TOP(((int)pvVar1 + 0x2c)));
  }
  *((int *)GEN_TOP(((int)this + 0x28))) = iVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_5;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((uint *)GEN_TOP(((int)this + 0x14))) = param_3;
  *((uint *)GEN_TOP(((int)this + 0x18))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (param_1 < param_2) {
    *((uint *)GEN_TOP(((int)this + 4))) = param_2;
    *((uint *)GEN_TOP(((int)this + 0x1c))) = param_3 / param_2;
    return param_3 / param_2;
  }
  uVar4 = (param_1 - 1) + param_2 & ~(param_2 - 1);
  uVar2 = param_3 / uVar4;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar2;
  return uVar2;
}

/* ref: FUN_00dc1bd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xdc1bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  F_00dc14d0(this GEN_EDX_FWD);
  uVar1 = F_00dc1b50(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00dc1c00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xdc1c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  F_00dc1b50(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  return (uint)this;
}

/* ref: FUN_00dc1c30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc1c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  LPVOID pvVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  undefined4 * local_c;
  
  iVar9 = *((int *)GEN_TOP((param_1 + 0xc)));
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0xc)));
  uVar6 = iVar9 * 4 + 0x7fU & 0xffffff80;
  if ((*((int *)GEN_TOP(((int)pvVar3 + 8))) < (int)uVar6) ||
     (*((uint *)GEN_TOP(((int)pvVar3 + 0x10))) < (int)puVar4 + uVar6)) {
    puVar4 = ((undefined4 *)GEN_TOP(F_00d94390(pvVar3 GEN_EDX_ARG,uVar6)));
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar3 + 0xc))) = (int)puVar4 + uVar6;
  }
  puVar8 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 8)));
  iVar9 = 0;
  puVar7 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * *((int *)GEN_TOP((param_1 + 0xc))) + (int)puVar8)));
  puVar2 = this;
  for (puVar1 = *(undefined4 * PTR32 *)this; puVar1 != ((undefined4 *)GEN_TOP(0x0)); puVar1 = ((undefined4 *)GEN_TOP(*puVar1))) {
    local_c = puVar1;
    if ((puVar8 <= puVar1) && (puVar1 < puVar7)) {
      puVar4[iVar9] = puVar1;
      *puVar2 = *puVar1;
      iVar9 = iVar9 + 1;
      local_c = puVar2;
    }
    puVar2 = local_c;
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20)));
  if ((puVar1 < puVar8) || (puVar7 <= puVar1)) {
    if (iVar9 == *((int *)GEN_TOP((param_1 + 0xc)))) {
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      if ((((int)uVar6 <= *((int *)GEN_TOP(((int)pvVar3 + 8)))) &&
          (uVar6 + (int)puVar4 == *((int *)GEN_TOP(((int)pvVar3 + 0xc))))) &&
         (*((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0x14))) != puVar4)) {
        *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0xc))) = puVar4;
        return 1;
      }
      F_00d945c0(pvVar3 GEN_EDX_ARG,puVar4,uVar6);
      return 1;
    }
  }
  else if ((uint)(*((int *)GEN_TOP(((int)this + 0x24))) - (int)puVar1) / *((uint *)GEN_TOP(((int)this + 4))) + iVar9 ==
           *((int *)GEN_TOP((param_1 + 0xc)))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    if ((((int)uVar6 <= *((int *)GEN_TOP(((int)pvVar3 + 8)))) &&
        (uVar6 + (int)puVar4 == *((int *)GEN_TOP(((int)pvVar3 + 0xc))))) &&
       (*((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0x14))) != puVar4)) {
      *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0xc))) = puVar4;
      return 1;
    }
    F_00d945c0(pvVar3 GEN_EDX_ARG,puVar4,uVar6);
    return 1;
  }
  if (0 < iVar9) {
    if (1 < iVar9) {
      F_00dc1f40(puVar4,0,iVar9 - 1,((code *)REFP(0xdc2030)));
    }
    iVar5 = 1;
    puVar8 = ((undefined4 *)GEN_TOP(*puVar4));
    if (1 < iVar9) {
      do {
        puVar1 = ((undefined4 *)GEN_TOP(puVar4[iVar5]));
        iVar5 = iVar5 + 1;
        *puVar8 = puVar1;
        puVar8 = puVar1;
      } while (iVar5 < iVar9);
    }
    *((undefined4 *)GEN_TOP(puVar4[iVar9 - 1])) = *(undefined4 *)this;
    *(undefined4 *)this = *puVar4;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar6 <= *((int *)GEN_TOP(((int)pvVar3 + 8)))) &&
      (uVar6 + (int)puVar4 == *((int *)GEN_TOP(((int)pvVar3 + 0xc))))) &&
     (*((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0x14))) != puVar4)) {
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0xc))) = puVar4;
    return 0;
  }
  F_00d945c0(pvVar3 GEN_EDX_ARG,puVar4,uVar6);
  return 0;
}

/* ref: FUN_00dc1e30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdc1e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      if (*((int * PTR32 *)GEN_TOP(((int)this + 8))) == ((int *)GEN_TOP(0x0))) {
        puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
        if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
          *param_3 = iVar2;
          *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
          *param_1 = 1;
          return (uint)param_1;
        }
        uVar1 = F_00dc1c30(this GEN_EDX_FWD,puVar3);
        if (uVar1 == 0) goto LAB_00dc1e8c;
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *puVar3;
        *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
        *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))) = puVar3;
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 8)))));
        if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
          *param_3 = iVar2;
          *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
          *param_1 = 1;
          return (uint)param_1;
        }
        uVar1 = F_00dc1c30(this GEN_EDX_ARG,puVar3);
        if (uVar1 == 0) {
LAB_00dc1e8c: ;
          *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar3;
        }
        else {
          **((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = *puVar3;
          *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
          *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))) = puVar3;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  *param_3 = iVar2;
  *param_1 = *((int *)GEN_TOP(((int)this + 8))) == 0;
  return (uint)param_1;
}

/* ref: FUN_00dc1ee0 */
GEN_LIB GEN_FRAME uint F_00dc1ee0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc1ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00dc27b0(param_1);
  return uVar1;
}

/* ref: FUN_00dc1ef0 */
GEN_LIB GEN_FRAME uint F_00dc1ef0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc1ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00dc27b0(param_1);
  return uVar1;
}

/* ref: FUN_00dc1f00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1f00(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc1f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00dc1f40 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc1f40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdc1f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x18, 8);
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char * pcVar5;
  int iVar6;
  
  do {
    (*(int *)(gen_frame + 0x0)) = param_2;
    uVar3 = *((undefined4 *)GEN_TOP((param_1 + (param_2 + param_3 >> 1) * 4)));
    iVar6 = param_3;
    do {
      pcVar5 = ((char *)GEN_TOP((*param_4)(&(*(undefined1 *)(gen_frame + 0x7)),*((undefined4 *)GEN_TOP((param_1 + (*(int *)(gen_frame + 0x0)) * 4))),uVar3)));
      cVar2 = *pcVar5;
      while (cVar2 != '\0') {
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
        pcVar5 = ((char *)GEN_TOP((*param_4)(&(*(undefined1 *)(gen_frame + 0x7)),*((undefined4 *)GEN_TOP((param_1 + (*(int *)(gen_frame + 0x0)) * 4))),uVar3)));
        cVar2 = *pcVar5;
      }
      pcVar5 = ((char *)GEN_TOP((*param_4)(&(*(undefined1 *)(gen_frame + 0x6)),uVar3,*((undefined4 *)GEN_TOP((param_1 + iVar6 * 4))))));
      cVar2 = *pcVar5;
      while (cVar2 != '\0') {
        iVar1 = iVar6 * 4;
        iVar6 = iVar6 - 1;
        pcVar5 = ((char *)GEN_TOP((*param_4)(&(*(undefined1 *)(gen_frame + 0x6)),uVar3,*((undefined4 *)GEN_TOP((param_1 - 4 + iVar1))))));
        cVar2 = *pcVar5;
      }
      if (iVar6 < (*(int *)(gen_frame + 0x0))) break;
      if (iVar6 != (*(int *)(gen_frame + 0x0))) {
        uVar4 = *((undefined4 *)GEN_TOP((param_1 + iVar6 * 4)));
        *((undefined4 *)GEN_TOP((param_1 + iVar6 * 4))) = *((undefined4 *)GEN_TOP((param_1 + (*(int *)(gen_frame + 0x0)) * 4)));
        *((undefined4 *)GEN_TOP((param_1 + (*(int *)(gen_frame + 0x0)) * 4))) = uVar4;
      }
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      iVar6 = iVar6 - 1;
    } while ((*(int *)(gen_frame + 0x0)) <= iVar6);
    if (param_2 < iVar6) {
      F_00dc1f40(param_1,param_2,iVar6,param_4);
    }
    param_2 = (*(int *)(gen_frame + 0x0));
    if (param_3 <= (*(int *)(gen_frame + 0x0))) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00dc2030 */
GEN_LIB GEN_FRAME uint F_00dc2030(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdc2030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  *((bool *)GEN_TOP(param_1)) = param_2 < param_3;
  return param_1;
}

/* ref: FUN_00dc2050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2050(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00dc2070 */
GEN_LIB GEN_FRAME unsigned int F_00dc2070(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdc2070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (1 < param_2) {
    F_00dc1f40(param_1,0,param_2 - 1,param_3);
  }
  return;
}

/* ref: FUN_00dc20b0 */
GEN_LIB GEN_FRAME uint F_00dc20b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc20b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar2 <= *((uint *)GEN_TOP(((int)this + 0x10))))) {
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_00dc20f0 */
GEN_LIB GEN_FRAME uint F_00dc20f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc20f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar1 + param_1 == *((int *)GEN_TOP(((int)this + 0xc))))) &&
     (*((int *)GEN_TOP(((int)this + 0x14))) != param_1)) {
    *((int *)GEN_TOP(((int)this + 0xc))) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00dc2140 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc2140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *((int *)GEN_TOP(((int)this_00 + 0xc)));
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar2 = iVar1 + uVar3;
  if (((int)uVar3 <= *((int *)GEN_TOP(((int)this_00 + 8)))) && (uVar2 <= *((uint *)GEN_TOP(((int)this_00 + 0x10))))) {
    *((uint *)GEN_TOP(((int)this_00 + 0xc))) = uVar2;
    *(int *)this = iVar1;
    *((int *)GEN_TOP(((int)this + 4))) = param_1;
    return (uint)this;
  }
  uVar2 = F_00d94390(this_00 GEN_EDX_ARG,uVar3);
  *(uint *)this = uVar2;
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return (uint)this;
}

/* ref: FUN_00dc21f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc21f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdc21f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00dc1bd0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2,param_3,param_4,0);
  return uVar1;
}

/* ref: hkFixedSizeAllocator::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc2220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 4);
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *(int *)(this + 0x38) = *(int *)(this + 0x38) - 1;
    *(undefined4 *)(this + 4) = *puVar1;
    return (uint)puVar1;
  }
  uVar2 = *(uint *)(this + 0x24);
  if (*(uint *)(this + 0x28) <= uVar2) {
    uVar2 = F_00dc1990(this + 4 GEN_EDX_FWD);
    return uVar2;
  }
  *(int *)(this + 0x38) = *(int *)(this + 0x38) - 1;
  *(uint *)(this + 0x24) = *(int *)(this + 8) + uVar2;
  return uVar2;
}

/* ref: hkFixedSizeAllocator::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc2260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
  *param_1 = *(undefined4 *)(this + 4);
  *(undefined4 * PTR32 *)(this + 4) = param_1;
  return (uint)param_1;
}

/* ref: hkFixedSizeAllocator::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc2280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 4);
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *(int *)(this + 0x38) = *(int *)(this + 0x38) - 1;
    *(undefined4 *)(this + 4) = *puVar1;
    return (uint)puVar1;
  }
  uVar2 = *(uint *)(this + 0x24);
  if (*(uint *)(this + 0x28) <= uVar2) {
    uVar2 = F_00dc1990(this + 4 GEN_EDX_FWD);
    return uVar2;
  }
  *(int *)(this + 0x38) = *(int *)(this + 0x38) - 1;
  *(uint *)(this + 0x24) = *(int *)(this + 8) + uVar2;
  return uVar2;
}

/* ref: hkFixedSizeAllocator::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc22c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc22c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
  *param_1 = *(undefined4 *)(this + 4);
  *(undefined4 * PTR32 *)(this + 4) = param_1;
  return (uint)param_1;
}

/* ref: hkFixedSizeAllocator::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc22e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdc22e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return param_1;
}

/* ref: hkFixedSizeAllocator::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dc22f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdc22f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * this_00;
  uint * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint * puVar5;
  uint * puVar6;
  
  this_00 = this + 4;
  puVar1 = param_1 + param_2;
  puVar5 = param_1;
  for (puVar2 = *(undefined4 * PTR32 *)this_00;
      (puVar3 = puVar2, puVar5 < puVar1 && (puVar3 = ((undefined4 *)GEN_TOP(0x0)), puVar2 != ((undefined4 *)GEN_TOP(0x0)))
      ); puVar2 = ((undefined4 *)GEN_TOP(*puVar2))) {
    *puVar5 = (uint)puVar2;
    puVar5 = puVar5 + 1;
  }
  *(int *)(this + 0x38) = *(int *)(this + 0x38) - ((int)puVar5 - (int)((int)(uintptr_t)param_1) >> 2);
  *(undefined4 * PTR32 *)this_00 = puVar3;
  do {
    while( true ) {
      if (puVar1 <= puVar5) {
        return 0;
      }
      puVar6 = puVar5;
      if (*(uint *)(this + 0x24) < *(uint *)(this + 0x28)) break;
      uVar4 = F_00dc1990(this_00 GEN_EDX_FWD);
      *puVar5 = uVar4;
      puVar5 = puVar5 + 1;
    }
    do {
      if (puVar1 <= puVar6) break;
      *puVar6 = *(uint *)(this + 0x24);
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + *(int *)(this + 8);
      puVar6 = puVar6 + 1;
    } while (*(uint *)(this + 0x24) < *(uint *)(this + 0x28));
    *(int *)(this + 0x38) = *(int *)(this + 0x38) - ((int)puVar6 - (int)((int)(uintptr_t)puVar5) >> 2);
    puVar5 = puVar6;
  } while( true );
}

/* ref: hkFixedSizeAllocator::vf7 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dc2380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdc2380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  int * piVar2;
  int iVar3;
  undefined4 * puVar4;
  
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + param_2;
  piVar2 = ((int *)GEN_TOP(*(int *)(this + 4)));
  puVar4 = param_1;
  iVar3 = param_2;
  while (iVar3 = iVar3 - 1, -1 < iVar3) {
    piVar1 = ((int *)GEN_TOP(*puVar4));
    puVar4 = puVar4 + 1;
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      *(int *)(this + 0x38) = *(int *)(this + 0x38) - 1;
    }
    else {
      *piVar1 = (int)piVar2;
      piVar2 = piVar1;
    }
  }
  *(int * PTR32 *)(this + 4) = piVar2;
  return 0;
}

/* ref: hkFixedSizeAllocator::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc23c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc23c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dc1710(this + 4 GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkFixedSizeAllocator::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc23d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdc23d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: FUN_00dc23e0 */
GEN_LIB GEN_FRAME uint F_00dc23e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc23e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  *(uint *)&REFG(undefined, 0x15e0070) = param_1;
  return param_1;
}

/* ref: FUN_00dc2460 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00dc2460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00dc2470 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00dc2470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if ((*(char *)this != '\0') && (*((char *)GEN_TOP(((int)this + 8))) != '\0')) {
    return 0;
  }
  if ((((0x32 < *((int *)GEN_TOP(((int)this + 4)))) && (*((int *)GEN_TOP(((int)this + 4))) % 3 == 0)) &&
      (*((char *)GEN_TOP(((int)this + 8))) != '\0')) && (*((char *)GEN_TOP((param_1 + 9 + (int)this))) == '\0')) {
    *((undefined1 *)GEN_TOP((param_1 + 9 + (int)this))) = 1;
    *(undefined1 *)this = 1;
    return 0;
  }
  return 1;
}

/* ref: FUN_00dc2550 */
GEN_LIB GEN_FRAME uint F_00dc2550(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00dc2570 */
GEN_LIB GEN_FRAME unsigned int F_00dc2570(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x3c);
  }
  return;
}

/* ref: FUN_00dc25a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc25a0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc25a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x3c);
  }
  return param_1;
}

/* ref: FUN_00dc25d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc25d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc25d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((gen_code32 *)GEN_TOP(((int)this + 8))) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 8))))(param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00dc25f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc25f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc25f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((gen_code32 *)GEN_TOP(((int)this + 8))) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 8))))(param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00dc2610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((gen_code32 *)GEN_TOP(((int)this + 0xc))) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0xc))))(param_1);
  }
  return uVar1;
}

/* ref: FUN_00dc2630 */
GEN_LIB GEN_FRAME ulonglong F_00dc2630(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 in_ecx, unsigned int gen_a1), GEN_P(undefined4 in_edx, unsigned int gen_a2), GEN_P(undefined4 in_ebx, unsigned int gen_a3), GEN_P(undefined4 in_esi, unsigned int gen_a4), GEN_P(undefined4 in_edi, unsigned int gen_a5))
{
  GEN_ENTER(0xdc2630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a1;)
  GEN_PIN(undefined4 in_edx = (undefined4)gen_a2;)
  GEN_PIN(undefined4 in_ebx = (undefined4)gen_a3;)
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a4;)
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a5;)
  ulonglong uVar1;
  
  if (in_eax == 0) {
    cpuid_basic_info(0);
  }
  else if (in_eax == 1) {
    cpuid_Version_info(1);
  }
  else if (in_eax == 2) {
    cpuid_cache_tlb_info(2);
  }
  else if (in_eax == 3) {
    cpuid_serial_info(3);
  }
  else if (in_eax == 4) {
    cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (in_eax == 5) {
    cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (in_eax == 6) {
    cpuid_Thermal_Power_Management_info(6);
  }
  else if (in_eax == 7) {
    cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (in_eax == 9) {
    cpuid_Direct_Cache_Access_info(9);
  }
  else if (in_eax == 10) {
    cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (in_eax == 0xb) {
    cpuid_Extended_Topology_info(0xb);
  }
  else if (in_eax == 0xd) {
    cpuid_Processor_Extended_States_info(0xd);
  }
  else if (in_eax == 0xf) {
    cpuid_Quality_of_Service_info(0xf);
  }
  else if (in_eax == -0x7ffffffe) {
    cpuid_brand_part1_info(0x80000002);
  }
  else if (in_eax == -0x7ffffffd) {
    cpuid_brand_part2_info(0x80000003);
  }
  else if (in_eax == -0x7ffffffc) {
    cpuid_brand_part3_info(0x80000004);
  }
  else {
    cpuid(in_eax);
  }
  uVar1 = rdtsc();
  return uVar1;
}

/* ref: FUN_00dc2660 */
GEN_LIB GEN_FRAME ulonglong F_00dc2660(GEN_P(undefined4 in_ebx, unsigned int gen_a0), GEN_P(undefined4 in_esi, unsigned int gen_a1), GEN_P(uint in_edi, unsigned int gen_a2))
{
  GEN_ENTER(0xdc2660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_ebx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a1;)
  GEN_PIN(uint in_edi = (uint)gen_a2;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  double dVar1;
  int in_edx;
  int iVar2;
  uint uVar3;
  uint in_eax;
  uint in_ecx;
  uint in_edx_00;
  uint uVar4;
  float10 fVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = CONCAT44(REFG(undefined4, 0x15e007c),REFG(undefined4, 0x15e0078));
  if (REFG(undefined4, 0x15e0078) == 0 && REFG(undefined4, 0x15e007c) == 0) {
    (*(double *)(gen_frame + 0x20)) = *(double *)&REFG(double, 0x10a1b50);
    (*(int *)(gen_frame + 0x28)) = 10;
    in_ecx = 0;
    in_eax = REFG(undefined4, 0x15e0078);
    in_edx_00 = REFG(undefined4, 0x15e007c);
    do {
      uVar6 = F_00dc2630(in_eax,in_ecx,in_edx_00,in_ebx,in_esi,in_edi);
      in_ebx = (undefined4)uVar6;
      gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4)) = 1;
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4)) = 1;
      iVar2 = 5000;
      do {
        in_edx = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4));
        (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4)) = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4)) * (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4)) + (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4));
        iVar2 = iVar2 - 1;
      } while (iVar2 != 0);
      uVar7 = F_00dc2630(0,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4)),in_edx,in_ebx,in_esi,in_edi);
      gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x8)));
      gen_imp_QueryPerformanceFrequency((LARGE_INTEGER *)&REFG(undefined4, 0x15e0078));
      in_esi = (undefined4)(uVar7 - uVar6);
      uVar4 = (uint)(uVar7 - uVar6 >> 0x20);
      in_edx_00 = 0;
      in_edi = uVar4 & 0x7fffffff;
      (*(uint *)(gen_frame + 0x14)) = uVar4 & 0x80000000;
      uVar3 = ((*(LARGE_INTEGER *)(gen_frame + 0x8)).s.HighPart - (*(undefined4 *)((char *)&(*(LARGE_INTEGER *)(gen_frame + 0x0)) + 4))) -
              (uint)((*(LARGE_INTEGER *)(gen_frame + 0x8)).s.LowPart < (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart);
      (*(undefined4 *)(gen_frame + 0x18)) = in_esi;
      (*(uint *)(gen_frame + 0x1c)) = in_edi;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      in_eax = uVar3 & 0x7fffffff;
      in_ecx = uVar3 & 0x80000000;
      fVar5 = GEN_X87((-(float10)(longlong)(((ulonglong)uVar4 & 0x80000000) << 0x20) +
              (float10)(uVar7 - uVar6 & 0x7fffffffffffffff)) /
              (-(float10)(longlong)(((ulonglong)uVar3 & 0x80000000) << 0x20) +
              ((float10)GEN_TOD((CONCAT44(uVar3,(*(LARGE_INTEGER *)(gen_frame + 0x8)).s.LowPart - (*(undefined4 *)((char *)&(*(LARGE_INTEGER *)(gen_frame + 0x0)) + 0))) & 0x7fffffffffffffff)))));
      dVar1 = (double)fVar5;
      (*(double *)(gen_frame + 0x2c)) = dVar1;
      if (fVar5 < (float10)(*(double *)(gen_frame + 0x20))) {
        (*(double *)(gen_frame + 0x20)) = dVar1;
      }
      iVar2 = (*(int *)(gen_frame + 0x28)) - 1;
      (*(int *)(gen_frame + 0x28)) = iVar2;
    } while (iVar2 != 0);
    uVar6 = (ulonglong)
            ((-(float10)(longlong)(((ulonglong)REFG(undefined4, 0x15e007c) & 0x80000000) << 0x20) +
             ((float10)GEN_TOD((CONCAT44(REFG(undefined4, 0x15e007c),REFG(undefined4, 0x15e0078)) & 0x7fffffffffffffff)))) *
            (float10)(*(double *)(gen_frame + 0x20)));
    REFG(undefined4, 0x15e0078) = (int)uVar6;
  }
  REFG(undefined4, 0x15e007c) = (uint)(uVar6 >> 0x20);
  REFG(undefined4, 0x15e0078) = (uint)uVar6;
  return uVar6;
}

/* ref: FUN_00dc27b0 */
GEN_LIB GEN_FRAME uint F_00dc27b0(GEN_P(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc27b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * param_1 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar1;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar2;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar3;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar4;
  int iVar5;
  int iVar6;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar7;
  
  pppppppuVar3 = param_1;
  if (param_1 == ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(0x0))) {
    return 0;
  }
  param_1 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(0x1));
  do {
    (*(int *)(gen_frame + 0x4)) = 0;
    (*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(0x0));
    pppppppuVar1 = &(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    iVar5 = (*(int *)(gen_frame + 0x4));
joined_r0x00dc27db: ;
    if (pppppppuVar3 != ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(0x0))) {
      (*(int *)(gen_frame + 0x4)) = iVar5 + 1;
      iVar5 = 0;
      pppppppuVar2 = pppppppuVar3;
      iVar6 = (int)param_1;
      if (0 < (int)param_1) {
        do {
          if (pppppppuVar2 == ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(0x0))) break;
          pppppppuVar2 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*pppppppuVar2;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)param_1);
      }
      do {
        pppppppuVar7 = pppppppuVar2;
        if (iVar5 < 1) goto joined_r0x00dc283d;
        if ((iVar6 < 1) || (pppppppuVar7 == ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(0x0)))) goto joined_r0x00dc2828;
        if (pppppppuVar7 < pppppppuVar3) {
          pppppppuVar2 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*pppppppuVar7;
          iVar6 = iVar6 - 1;
          pppppppuVar4 = pppppppuVar3;
        }
        else {
          iVar5 = iVar5 - 1;
          pppppppuVar2 = pppppppuVar7;
          pppppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*pppppppuVar3;
          pppppppuVar7 = pppppppuVar3;
        }
        *pppppppuVar1 = pppppppuVar7;
        pppppppuVar3 = pppppppuVar4;
        pppppppuVar1 = pppppppuVar7;
      } while( true );
    }
    *pppppppuVar1 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(0x0));
    if (iVar5 < 2) {
      return (uint)(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    param_1 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)((int)(uintptr_t)param_1) * 2)));
    pppppppuVar3 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
  } while( true );
joined_r0x00dc2828: ;
  for (; pppppppuVar2 = pppppppuVar3, 0 < iVar5; iVar5 = iVar5 - 1) {
    *pppppppuVar1 = pppppppuVar2;
    pppppppuVar3 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*pppppppuVar2;
    pppppppuVar1 = pppppppuVar2;
  }
joined_r0x00dc283d: ;
  while ((pppppppuVar3 = pppppppuVar7, iVar5 = (*(int *)(gen_frame + 0x4)), 0 < iVar6 &&
         (pppppppuVar3 != ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(0x0))))) {
    *pppppppuVar1 = pppppppuVar3;
    iVar6 = iVar6 - 1;
    pppppppuVar1 = pppppppuVar3;
    pppppppuVar7 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*pppppppuVar3;
  }
  goto joined_r0x00dc27db;
}

/* ref: FUN_00dc2880 */
GEN_LIB GEN_FRAME uint F_00dc2880(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc2890 */
GEN_LIB GEN_FRAME uint F_00dc2890(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc28a0 */
GEN_LIB GEN_FRAME uint F_00dc28a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc28a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc28b0 */
GEN_LIB GEN_FRAME uint F_00dc28b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc28b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc2900 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc2900(void)
{
  GEN_ENTER(0xdc2900u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc2910 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc2910(void)
{
  GEN_ENTER(0xdc2910u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc2920 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc2920(void)
{
  GEN_ENTER(0xdc2920u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc2930 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc2930(void)
{
  GEN_ENTER(0xdc2930u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc2940 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc2940(void)
{
  GEN_ENTER(0xdc2940u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc2950 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc2950(void)
{
  GEN_ENTER(0xdc2950u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc2960 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc2960(void)
{
  GEN_ENTER(0xdc2960u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc2970 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc2970(void)
{
  GEN_ENTER(0xdc2970u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc2980 */
GEN_LIB GEN_FRAME uint F_00dc2980(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc29d0 */
GEN_LIB GEN_FRAME uint F_00dc29d0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc29d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc2a20 */
GEN_LIB GEN_FRAME uint F_00dc2a20(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc2a70 */
GEN_LIB GEN_FRAME uint F_00dc2a70(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc2ac0 */
GEN_LIB GEN_FRAME uint F_00dc2ac0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc2b10 */
GEN_LIB GEN_FRAME uint F_00dc2b10(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc2b60 */
GEN_LIB GEN_FRAME uint F_00dc2b60(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc2bb0 */
GEN_LIB GEN_FRAME uint F_00dc2bb0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc2c00 */
GEN_LIB GEN_FRAME uint F_00dc2c00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc2c20 */
GEN_LIB GEN_FRAME uint F_00dc2c20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc2c40 */
GEN_LIB GEN_FRAME uint F_00dc2c40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc2c60 */
GEN_LIB GEN_FRAME uint F_00dc2c60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc2d10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc2d10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00dc2d40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc2d40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 5);
  return uVar1;
}

/* ref: FUN_00dc2d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc2d70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 6);
  return uVar1;
}

/* ref: FUN_00dc2da0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc2da0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 5);
  return uVar1;
}

/* ref: FUN_00dc2e00 */
GEN_LIB GEN_FRAME unsigned int F_00dc2e00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x30);
  }
  return;
}

/* ref: FUN_00dc2e30 */
GEN_LIB GEN_FRAME unsigned int F_00dc2e30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x30);
  }
  return;
}

/* ref: FUN_00dc2e60 */
GEN_LIB GEN_FRAME unsigned int F_00dc2e60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x30);
  }
  return;
}

/* ref: FUN_00dc2e90 */
GEN_LIB GEN_FRAME unsigned int F_00dc2e90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x30);
  }
  return;
}

/* ref: FUN_00dc2f40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc2f80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))
                      (param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc2fc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc3000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3040 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3080 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc30c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc30c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc30c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3100 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3140 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3180 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc31c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc31c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc31c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3200 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3240 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3290 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc32e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc32e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc32e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3330 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3380 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc33c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc33c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc33c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3400 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3460 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc34c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc34c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc34c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3510 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3560 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc35b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc35b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc35b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3620 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3680 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc36c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc36c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc36c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc3700(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 6);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x30);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc3770 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc37b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc37b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc37b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,iVar1 * 4);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dc3800 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dc3840 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 6);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dc3890 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,iVar1 << 5)
    ;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dc38d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc38d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc38d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x30);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc3940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc3940(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x30);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc39b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc39b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc39b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x30);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc3a20 */
GEN_LIB GEN_FRAME uint F_00dc3a20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc3a30 */
GEN_LIB GEN_FRAME uint F_00dc3a30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc3a40 */
GEN_LIB GEN_FRAME uint F_00dc3a40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc3a50 */
GEN_LIB GEN_FRAME uint F_00dc3a50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc3aa0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc3aa0(void)
{
  GEN_ENTER(0xdc3aa0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc3ab0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc3ab0(void)
{
  GEN_ENTER(0xdc3ab0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc3ac0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc3ac0(void)
{
  GEN_ENTER(0xdc3ac0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc3ad0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc3ad0(void)
{
  GEN_ENTER(0xdc3ad0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc3ae0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc3ae0(void)
{
  GEN_ENTER(0xdc3ae0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc3af0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc3af0(void)
{
  GEN_ENTER(0xdc3af0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc3b00 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc3b00(void)
{
  GEN_ENTER(0xdc3b00u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc3b10 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc3b10(void)
{
  GEN_ENTER(0xdc3b10u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc3b20 */
GEN_LIB GEN_FRAME uint F_00dc3b20(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc3b70 */
GEN_LIB GEN_FRAME uint F_00dc3b70(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc3bc0 */
GEN_LIB GEN_FRAME uint F_00dc3bc0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc3c10 */
GEN_LIB GEN_FRAME uint F_00dc3c10(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc3c60 */
GEN_LIB GEN_FRAME uint F_00dc3c60(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc3cb0 */
GEN_LIB GEN_FRAME uint F_00dc3cb0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc3d00 */
GEN_LIB GEN_FRAME uint F_00dc3d00(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc3d50 */
GEN_LIB GEN_FRAME uint F_00dc3d50(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc3da0 */
GEN_LIB GEN_FRAME uint F_00dc3da0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc3dc0 */
GEN_LIB GEN_FRAME uint F_00dc3dc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc3de0 */
GEN_LIB GEN_FRAME uint F_00dc3de0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc3e00 */
GEN_LIB GEN_FRAME uint F_00dc3e00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc3e20 */
GEN_LIB GEN_FRAME unsigned int F_00dc3e20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00dc3e50 */
GEN_LIB GEN_FRAME unsigned int F_00dc3e50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00dc3e80 */
GEN_LIB GEN_FRAME unsigned int F_00dc3e80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00dc3eb0 */
GEN_LIB GEN_FRAME unsigned int F_00dc3eb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00dc3ee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc3ee0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 6);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc3f50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,iVar1 * 4);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dc3fa0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dc3fe0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 6);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dc4030 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc4030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,iVar1 << 5)
    ;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dc4070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc4070(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc40e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc40e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc40e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc4150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc4150(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc41d0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc41d0(void)
{
  GEN_ENTER(0xdc41d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc41f0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc41f0(void)
{
  GEN_ENTER(0xdc41f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4210 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4210(void)
{
  GEN_ENTER(0xdc4210u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4230 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4230(void)
{
  GEN_ENTER(0xdc4230u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4250 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4250(void)
{
  GEN_ENTER(0xdc4250u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4260 */
GEN_LIB GEN_FRAME uint F_00dc4260(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc4270 */
GEN_LIB GEN_FRAME uint F_00dc4270(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc4290 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4290(void)
{
  GEN_ENTER(0xdc4290u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc42b0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc42b0(void)
{
  GEN_ENTER(0xdc42b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc42d0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc42d0(void)
{
  GEN_ENTER(0xdc42d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4300 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4300(void)
{
  GEN_ENTER(0xdc4300u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4320 */
GEN_LIB GEN_FRAME unsigned int F_00dc4320(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00dc6640(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00dc4350 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4350(void)
{
  GEN_ENTER(0xdc4350u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4360 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4360(void)
{
  GEN_ENTER(0xdc4360u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4370 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4370(void)
{
  GEN_ENTER(0xdc4370u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4380 */
GEN_LIB GEN_FRAME uint F_00dc4380(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc43d0 */
GEN_LIB GEN_FRAME uint F_00dc43d0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc43d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00dc4920(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00dc4410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc4410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc4410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x60);
  return uVar1;
}

/* ref: FUN_00dc4440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc4440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc4440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00dc4470 */
GEN_LIB GEN_FRAME unsigned int F_00dc4470(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x60);
  }
  return;
}

/* ref: FUN_00dc44a0 */
GEN_LIB GEN_FRAME unsigned int F_00dc44a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc44a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x60);
  }
  return;
}

/* ref: FUN_00dc44e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc44e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc44e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc4520 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc4520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc4520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc4560 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc4560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc4560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc45b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc45b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc45b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc45f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc45f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc45f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x60);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc4660 */
GEN_LIB GEN_FRAME unsigned int F_00dc4660(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = param_2 - 1;
  if (-1 < iVar3) {
    piVar2 = ((int *)GEN_TOP((iVar3 * 0x60 + 8 + param_1)));
    do {
      iVar1 = *piVar2;
      piVar2[-1] = 0;
      if (-1 < iVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar2[-2],iVar1 * 4);
      }
      piVar2[-2] = 0;
      *piVar2 = ((int)0x80000000);
      iVar3 = iVar3 - 1;
      piVar2 = piVar2 - 0x18;
    } while (-1 < iVar3);
  }
  return;
}

/* ref: FUN_00dc46c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dc46c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc46c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar3) {
    piVar2 = ((int *)GEN_TOP((iVar3 * 0x60 + 8 + *(int *)this)));
    do {
      iVar1 = *piVar2;
      piVar2[-1] = 0;
      if (-1 < iVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar2[-2],iVar1 * 4);
      }
      piVar2[-2] = 0;
      *piVar2 = ((int)0x80000000);
      iVar3 = iVar3 - 1;
      piVar2 = piVar2 - 0x18;
    } while (-1 < iVar3);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return 0;
}

/* ref: FUN_00dc4740 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc4740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar4) {
    piVar3 = ((int *)GEN_TOP((iVar4 * 0x60 + 8 + *(int *)this)));
    do {
      iVar1 = *piVar3;
      piVar3[-1] = 0;
      if (-1 < iVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar3[-2],iVar1 * 4);
      }
      piVar3[-2] = 0;
      *piVar3 = ((int)0x80000000);
      piVar3 = piVar3 - 0x18;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar2 & 0x3fffffff) * 0x60);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00dc47e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc47e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc47e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar4) {
    piVar3 = ((int *)GEN_TOP((iVar4 * 0x60 + 8 + *(int *)this)));
    do {
      iVar1 = *piVar3;
      piVar3[-1] = 0;
      if (-1 < iVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar3[-2],iVar1 * 4);
      }
      piVar3[-2] = 0;
      *piVar3 = ((int)0x80000000);
      piVar3 = piVar3 - 0x18;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar2 & 0x3fffffff) * 0x60);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00dc4880 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc4880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc4880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar4) {
    piVar3 = ((int *)GEN_TOP((iVar4 * 0x60 + 8 + *(int *)this)));
    do {
      iVar1 = *piVar3;
      piVar3[-1] = 0;
      if (-1 < iVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar3[-2],iVar1 * 4);
      }
      piVar3[-2] = 0;
      *piVar3 = ((int)0x80000000);
      piVar3 = piVar3 - 0x18;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar2 & 0x3fffffff) * 0x60);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00dc4920 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc4920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc4920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x5c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x54))),(uVar2 & 0x3fffffff) * 2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x50)));
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x48))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x40))) - 1;
  if (-1 < iVar3) {
    piVar4 = ((int *)GEN_TOP((iVar3 * 0x60 + 8 + *((int *)GEN_TOP(((int)this + 0x3c))))));
    do {
      iVar1 = *piVar4;
      piVar4[-1] = 0;
      if (-1 < iVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar4[-2],iVar1 * 4);
      }
      piVar4[-2] = 0;
      *piVar4 = ((int)0x80000000);
      piVar4 = piVar4 - 0x18;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x44)));
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x3c))),(uVar2 & 0x3fffffff) * 0x60);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar2 & 0x3fffffff) + uVar2 * 4);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return uVar2;
}

/* ref: FUN_00dc4a50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc4a50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00dc4920(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x60);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc4aa0 */
GEN_LIB GEN_FRAME uint F_00dc4aa0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc4ab0 */
GEN_LIB GEN_FRAME uint F_00dc4ab0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc4ac0 */
GEN_LIB GEN_FRAME uint F_00dc4ac0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc4b00 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4b00(void)
{
  GEN_ENTER(0xdc4b00u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4b10 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4b10(void)
{
  GEN_ENTER(0xdc4b10u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4b20 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4b20(void)
{
  GEN_ENTER(0xdc4b20u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4b30 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4b30(void)
{
  GEN_ENTER(0xdc4b30u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4b40 */
GEN_LIB GEN_FRAME uint F_00dc4b40(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc4b90 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4b90(void)
{
  GEN_ENTER(0xdc4b90u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4ba0 */
GEN_LIB GEN_FRAME uint F_00dc4ba0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc4bf0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4bf0(void)
{
  GEN_ENTER(0xdc4bf0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4c00 */
GEN_LIB GEN_FRAME uint F_00dc4c00(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc4c50 */
GEN_LIB GEN_FRAME uint F_00dc4c50(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc4ca0 */
GEN_LIB GEN_FRAME uint F_00dc4ca0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc4cf0 */
GEN_LIB GEN_FRAME uint F_00dc4cf0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc4d40 */
GEN_LIB GEN_FRAME uint F_00dc4d40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc4d50 */
GEN_LIB GEN_FRAME uint F_00dc4d50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc4d60 */
GEN_LIB GEN_FRAME uint F_00dc4d60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc4de0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc4de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc4de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x30);
  return uVar1;
}

/* ref: FUN_00dc4e10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc4e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc4e10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x30);
  return uVar1;
}

/* ref: FUN_00dc4e40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc4e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc4e40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 5);
  return uVar1;
}

/* ref: FUN_00dc4e90 */
GEN_LIB GEN_FRAME unsigned int F_00dc4e90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return;
}

/* ref: FUN_00dc4ec0 */
GEN_LIB GEN_FRAME unsigned int F_00dc4ec0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return;
}

/* ref: FUN_00dc4ef0 */
GEN_LIB GEN_FRAME unsigned int F_00dc4ef0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return;
}

/* ref: FUN_00dc4f20 */
GEN_LIB GEN_FRAME unsigned int F_00dc4f20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return;
}

/* ref: FUN_00dc4f50 */
GEN_LIB GEN_FRAME unsigned int F_00dc4f50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return;
}

/* ref: FUN_00dc4f80 */
GEN_LIB GEN_FRAME unsigned int F_00dc4f80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4f80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return;
}

/* ref: FUN_00dc5010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc5010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc5050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc5090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc50d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc50d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc50d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5110 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5150 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5190 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc51d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc51d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc51d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5210 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5250 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5290 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc52d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc52d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc52d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5340 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5380 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc53c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc53c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc53c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5400 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5440 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5480 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5520 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5560 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc55a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc55a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc55a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc55e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc55e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc55e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5620 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5660 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc56a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc56a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc56a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc5710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc5710(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc5780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc5780(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc5850 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc5850(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc58c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc58c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc58c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc5930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc5930(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc59a0 */
GEN_LIB GEN_FRAME uint F_00dc59a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc59a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc59b0 */
GEN_LIB GEN_FRAME uint F_00dc59b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc59b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc59c0 */
GEN_LIB GEN_FRAME uint F_00dc59c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc59c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc5a00 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc5a00(void)
{
  GEN_ENTER(0xdc5a00u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc5a10 */
GEN_LIB GEN_FRAME uint F_00dc5a10(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc5a60 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc5a60(void)
{
  GEN_ENTER(0xdc5a60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc5a70 */
GEN_LIB GEN_FRAME uint F_00dc5a70(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc5ac0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc5ac0(void)
{
  GEN_ENTER(0xdc5ac0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc5ad0 */
GEN_LIB GEN_FRAME uint F_00dc5ad0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc5b20 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc5b20(void)
{
  GEN_ENTER(0xdc5b20u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc5b30 */
GEN_LIB GEN_FRAME uint F_00dc5b30(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc5b80 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc5b80(void)
{
  GEN_ENTER(0xdc5b80u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc5b90 */
GEN_LIB GEN_FRAME uint F_00dc5b90(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc5be0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc5be0(void)
{
  GEN_ENTER(0xdc5be0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc5bf0 */
GEN_LIB GEN_FRAME uint F_00dc5bf0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc5c40 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc5c40(void)
{
  GEN_ENTER(0xdc5c40u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc5c50 */
GEN_LIB GEN_FRAME uint F_00dc5c50(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc5ca0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc5ca0(void)
{
  GEN_ENTER(0xdc5ca0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc5cb0 */
GEN_LIB GEN_FRAME uint F_00dc5cb0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc5d00 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc5d00(void)
{
  GEN_ENTER(0xdc5d00u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc5d10 */
GEN_LIB GEN_FRAME uint F_00dc5d10(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc5d60 */
GEN_LIB GEN_FRAME uint F_00dc5d60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc5d70 */
GEN_LIB GEN_FRAME uint F_00dc5d70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc5d80 */
GEN_LIB GEN_FRAME uint F_00dc5d80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc5d90 */
GEN_LIB GEN_FRAME uint F_00dc5d90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc5da0 */
GEN_LIB GEN_FRAME uint F_00dc5da0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc5db0 */
GEN_LIB GEN_FRAME uint F_00dc5db0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc5dc0 */
GEN_LIB GEN_FRAME unsigned int F_00dc5dc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00dc5df0 */
GEN_LIB GEN_FRAME unsigned int F_00dc5df0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00dc5e20 */
GEN_LIB GEN_FRAME unsigned int F_00dc5e20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00dc5e50 */
GEN_LIB GEN_FRAME unsigned int F_00dc5e50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00dc5e80 */
GEN_LIB GEN_FRAME unsigned int F_00dc5e80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00dc5eb0 */
GEN_LIB GEN_FRAME unsigned int F_00dc5eb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00dc5ee0 */
GEN_LIB GEN_FRAME unsigned int F_00dc5ee0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00dc5f10 */
GEN_LIB GEN_FRAME unsigned int F_00dc5f10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00dc5f40 */
GEN_LIB GEN_FRAME unsigned int F_00dc5f40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00dc5f70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc5f70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc5fe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc5fe0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc6050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc6050(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc60c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc60c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc60c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc6130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc6130(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc61a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc61a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc61a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc6210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc6210(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc6280 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc6280(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc62f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc62f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc62f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc6360 */
GEN_LIB GEN_FRAME uint F_00dc6360(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc6380 */
GEN_LIB GEN_FRAME uint F_00dc6380(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc63a0 */
GEN_LIB GEN_FRAME uint F_00dc63a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc63a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc63b0 */
GEN_LIB GEN_FRAME uint F_00dc63b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc63b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc63d0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc63d0(void)
{
  GEN_ENTER(0xdc63d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc63e0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc63e0(void)
{
  GEN_ENTER(0xdc63e0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc6400 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6400(void)
{
  GEN_ENTER(0xdc6400u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc6410 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6410(void)
{
  GEN_ENTER(0xdc6410u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc6430 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6430(void)
{
  GEN_ENTER(0xdc6430u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc6450 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6450(void)
{
  GEN_ENTER(0xdc6450u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc6460 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6460(void)
{
  GEN_ENTER(0xdc6460u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc6470 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6470(void)
{
  GEN_ENTER(0xdc6470u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc6480 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6480(void)
{
  GEN_ENTER(0xdc6480u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc6490 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6490(void)
{
  GEN_ENTER(0xdc6490u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc64a0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc64a0(void)
{
  GEN_ENTER(0xdc64a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc64b0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc64b0(void)
{
  GEN_ENTER(0xdc64b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc64c0 */
GEN_LIB GEN_FRAME uint F_00dc64c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc64c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc64e0 */
GEN_LIB GEN_FRAME uint F_00dc64e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc64e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc6520 */
GEN_LIB GEN_FRAME uint F_00dc6520(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc6540 */
GEN_LIB GEN_FRAME uint F_00dc6540(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc6560 */
GEN_LIB GEN_FRAME uint F_00dc6560(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc6580 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6580(void)
{
  GEN_ENTER(0xdc6580u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc6590 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6590(void)
{
  GEN_ENTER(0xdc6590u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc65b0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc65b0(void)
{
  GEN_ENTER(0xdc65b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc65c0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc65c0(void)
{
  GEN_ENTER(0xdc65c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc65e0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc65e0(void)
{
  GEN_ENTER(0xdc65e0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc65f0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc65f0(void)
{
  GEN_ENTER(0xdc65f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc6640 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc6640(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return in_ecx;
}

/* ref: FUN_00dc6650 */
GEN_LIB GEN_FRAME uint F_00dc6650(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc6670 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6670(void)
{
  GEN_ENTER(0xdc6670u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc6690 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6690(void)
{
  GEN_ENTER(0xdc6690u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc66b0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc66b0(void)
{
  GEN_ENTER(0xdc66b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc66d0 */
GEN_LIB GEN_FRAME unsigned int F_00dc66d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc66d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00dc6760(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00dc66f0 */
GEN_LIB GEN_FRAME uint F_00dc66f0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc66f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00dc6700 */
GEN_LIB GEN_NOFRAME uint F_00dc6700(void)
{
  GEN_ENTER(0xdc6700u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x20, 0);
  
  F_00dc6760(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00dc6760 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc6760(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x113ff54));
  return (uint)in_ecx;
}

/* ref: FUN_00dc6780 */
GEN_LIB GEN_FRAME uint F_00dc6780(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc6780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkcdShape::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc67b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc67b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00dc6850 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc6850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc6850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00dc6870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc6870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = param_1;
  if (param_1 != 0) {
    *((short *)GEN_TOP((param_1 + 6))) = *((short *)GEN_TOP((param_1 + 6))) + 1;
    *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) + 1;
  }
  return (uint)this;
}

/* ref: FUN_00dc68b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc68b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc68b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0xc))))(*(int * PTR32 *)this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00dc68f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc68f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc68f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x60))))(*(int * PTR32 *)this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 4))),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00dc6910 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc6910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x44))))(*(int * PTR32 *)this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 4))),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00dc6930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc6930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = param_1;
  if (param_1 != 0) {
    *((short *)GEN_TOP((param_1 + 6))) = *((short *)GEN_TOP((param_1 + 6))) + 1;
    *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) + 1;
  }
  return (uint)this;
}

/* ref: FUN_00dc6970 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc6970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc6970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  param_1[1] = param_2;
  return (uint)param_1;
}

/* ref: FUN_00dc6990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc6990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdc6990u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00dc69c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc69c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc69c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x5c))))(*(int * PTR32 *)this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 4))));
  *param_1 = uVar1;
  if (uVar1 != 0) {
    *((short *)GEN_TOP((uVar1 + 6))) = *((short *)GEN_TOP((uVar1 + 6))) + 1;
    *((int *)GEN_TOP((uVar1 + 8))) = *((int *)GEN_TOP((uVar1 + 8))) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00dc69f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc69f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc69f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x60))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))),*param_1);
  return uVar1;
}

/* ref: FUN_00dc6a10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc6a10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xdc6a10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x40))))
                    (((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1],(undefined4)gen_fl2bits(param_2));
  return uVar1;
}

/* ref: FUN_00dc6a40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc6a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x50))))(*(int * PTR32 *)this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 4))),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00dc6a60 */
GEN_LIB GEN_FRAME uint F_00dc6a60(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc6a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x113ff60)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),((char *)REFP(0x1136998)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x60))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00dc6ab0 */
GEN_LIB GEN_FRAME uint F_00dc6ab0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc6ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),&REFG(undefined, 0x1134e40));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x30))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)));
  if (3 < (int)uVar1) {
    uVar1 = uVar1 - 2;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),&REFG(undefined, 0x1134e40));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)),uVar1);
  return uVar1;
}

/* ref: FUN_00dc6b10 */
GEN_LIB GEN_FRAME uint F_00dc6b10(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc6b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),((char *)REFP(0x113ff70)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)))));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x1135928)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,uVar4);
  param_1 = ((undefined4 *)GEN_TOP(0x0));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  if (0 < (int)uVar4) {
    do {
      puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,param_1)));
      if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar5 + 6))) = *((short *)GEN_TOP(((int)puVar5 + 6))) + 1;
        puVar5[2] = puVar5[2] + 1;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x60))))(piVar3 GEN_EDX_ARG,param_1,puVar5);
      if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar5 + 6))) = *((short *)GEN_TOP(((int)puVar5 + 6))) - 1;
        piVar1 = puVar5 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,1);
        }
      }
      param_1 = ((undefined4 *)GEN_TOP(((int)param_1 + 1)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
    } while ((int)param_1 < (int)uVar4);
  }
  *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
  }
  *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 - 1;
  if (*piVar3 == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
  }
  return uVar4;
}

/* ref: FUN_00dc6c30 */
GEN_LIB GEN_FRAME uint F_00dc6c30(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc6c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x11358fc)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
  piVar1 = piVar2 + 2;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x1135908)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,uVar3);
  iVar4 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  if (0 < (int)uVar3) {
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x40))))(piVar2 GEN_EDX_ARG,iVar4,0);
      iVar4 = iVar4 + 1;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
    } while (iVar4 < (int)uVar3);
  }
  uVar3 = 0xffffffff;
  *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
  piVar1 = piVar2 + 2;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
  }
  return uVar3;
}

/* ref: FUN_00dc6d20 */
GEN_LIB GEN_FRAME uint F_00dc6d20(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc6d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),((char *)REFP(0x113ff7c)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)))));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x1134f50)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,uVar4);
  param_1 = ((undefined4 *)GEN_TOP(0x0));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  if (0 < (int)uVar4) {
    do {
      puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,param_1)));
      if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar5 + 6))) = *((short *)GEN_TOP(((int)puVar5 + 6))) + 1;
        puVar5[2] = puVar5[2] + 1;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x60))))(piVar3 GEN_EDX_ARG,param_1,puVar5);
      if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar5 + 6))) = *((short *)GEN_TOP(((int)puVar5 + 6))) - 1;
        piVar1 = puVar5 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,1);
        }
      }
      param_1 = ((undefined4 *)GEN_TOP(((int)param_1 + 1)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
    } while ((int)param_1 < (int)uVar4);
  }
  *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
  }
  *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 - 1;
  if (*piVar3 == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
  }
  return uVar4;
}

/* ref: FUN_00dc6e40 */
GEN_LIB GEN_FRAME uint F_00dc6e40(GEN_P(undefined4 * in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*in_eax)) + 0xc))))(((int *)GEN_TOP(*in_eax)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)))));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*in_eax)) + 0xc))))(((int *)GEN_TOP(*in_eax)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),param_2);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x10)) = uVar4;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,uVar4);
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (0 < (int)uVar4) {
    do {
      puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x14)))));
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) + 1;
        puVar6[2] = puVar6[2] + 1;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x60))))(piVar3 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x14)),puVar6);
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) - 1;
        piVar1 = puVar6 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
        }
      }
      uVar5 = (*(uint *)(gen_frame + 0x14)) + 1;
      (*(uint *)(gen_frame + 0x14)) = uVar5;
    } while ((int)uVar5 < (int)(*(uint *)(gen_frame + 0x10)));
  }
  *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
  }
  *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 - 1;
  if (*piVar3 == 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
  }
  return uVar5;
}

/* ref: FUN_00dc6f50 */
GEN_LIB GEN_FRAME uint F_00dc6f50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc6f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00dc6e40(param_1,((char *)REFP(0x11362c8)));
  return uVar1;
}

/* ref: FUN_00dc6f70 */
GEN_LIB GEN_FRAME uint F_00dc6f70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc6f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00dc6e40(param_1,((char *)REFP(0x1134f50)));
  return uVar1;
}

/* ref: FUN_00dc6f90 */
GEN_LIB GEN_FRAME uint F_00dc6f90(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc6f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x10)),((char *)REFP(0x113ffa4)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)))));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),((char *)REFP(0x1135cb0)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)))));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG,0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x50))))(piVar3 GEN_EDX_ARG,0,uVar4);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x50))))(piVar3 GEN_EDX_ARG,1,0);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG,1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x50))))(piVar3 GEN_EDX_ARG,2,uVar4);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG,2);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x50))))(piVar3 GEN_EDX_ARG,3,uVar4);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG,3);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x50))))(piVar3 GEN_EDX_ARG,4,uVar4);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG,4);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x50))))(piVar3 GEN_EDX_ARG,5,uVar4);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG,5);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x50))))(piVar3 GEN_EDX_ARG,6,uVar4);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG,6);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x50))))(piVar3 GEN_EDX_ARG,7,uVar4);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG,7);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x50))))(piVar3 GEN_EDX_ARG,8,uVar4);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))
            (((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x1135c50)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)),0xffffffff);
  *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
  }
  *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 - 1;
  if (*piVar3 == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
  }
  return uVar4;
}

/* ref: FUN_00dc7120 */
GEN_LIB GEN_FRAME uint F_00dc7120(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc7120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 1;
    *(char * PTR32 *)&REFG(undefined, 0x15e0dd0) = ((char *)REFP(0x11358c0));
    *(char * PTR32 *)&REFG(undefined, 0x15e0dd4) = ((char *)REFP(0x11358c0));
    *(undefined4 *)&REFG(undefined, 0x15e0dd8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0ddc) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0de0) = &REFG(undefined, 0x1140594);
    *(undefined4 *)&REFG(undefined, 0x15e0de4) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0dd0));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 2;
    *(char * PTR32 *)&REFG(undefined, 0x15e0db8) = ((char *)REFP(0x1135a84));
    *(char * PTR32 *)&REFG(undefined, 0x15e0dbc) = ((char *)REFP(0x1135a84));
    *(undefined4 *)&REFG(undefined, 0x15e0dc0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0dc4) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0dc8) = &REFG(undefined, 0x1140564);
    *(undefined4 *)&REFG(undefined, 0x15e0dcc) = 5;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0db8));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 4;
    *(char * PTR32 *)&REFG(undefined, 0x15e0da0) = ((char *)REFP(0x1135a84));
    *(char * PTR32 *)&REFG(undefined, 0x15e0da4) = ((char *)REFP(0x1135a84));
    *(undefined4 *)&REFG(undefined, 0x15e0da8) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e0dac) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0db0) = &REFG(undefined, 0x1140554);
    *(undefined4 *)&REFG(undefined, 0x15e0db4) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0da0));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 8) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 8;
    *(char * PTR32 *)&REFG(undefined, 0x15e0d88) = ((char *)REFP(0x1136ba8));
    *(char * PTR32 *)&REFG(undefined, 0x15e0d8c) = ((char *)REFP(0x1136ba8));
    *(undefined4 *)&REFG(undefined, 0x15e0d90) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0d94) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0d98) = &REFG(undefined, 0x1140544);
    *(undefined4 *)&REFG(undefined, 0x15e0d9c) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0d88));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x10) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x10;
    *(char * PTR32 *)&REFG(undefined, 0x15e0d70) = ((char *)REFP(0x1136a40));
    *(char * PTR32 *)&REFG(undefined, 0x15e0d74) = ((char *)REFP(0x1136a40));
    *(undefined4 *)&REFG(undefined, 0x15e0d78) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0d7c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0d80) = &REFG(undefined, 0x1140534);
    *(undefined4 *)&REFG(undefined, 0x15e0d84) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0d70));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x20) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x20;
    *(char * PTR32 *)&REFG(undefined, 0x15e0d58) = ((char *)REFP(0x11363d4));
    *(char * PTR32 *)&REFG(undefined, 0x15e0d5c) = ((char *)REFP(0x11363d4));
    *(undefined4 *)&REFG(undefined, 0x15e0d60) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0d64) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0d68) = &REFG(undefined, 0x1140524);
    *(undefined4 *)&REFG(undefined, 0x15e0d6c) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0d58));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x40) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x40;
    *(char * PTR32 *)&REFG(undefined, 0x15e0d40) = ((char *)REFP(0x1134fac));
    *(char * PTR32 *)&REFG(undefined, 0x15e0d44) = ((char *)REFP(0x1134fac));
    *(undefined4 *)&REFG(undefined, 0x15e0d48) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0d4c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0d50) = &REFG(undefined, 0x11404f4);
    *(undefined4 *)&REFG(undefined, 0x15e0d54) = 5;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0d40));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x80) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x80;
    *(char * PTR32 *)&REFG(undefined, 0x15e0d28) = ((char *)REFP(0x1134b40));
    *(char * PTR32 *)&REFG(undefined, 0x15e0d2c) = ((char *)REFP(0x1134b40));
    *(undefined4 *)&REFG(undefined, 0x15e0d30) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0d34) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0d38) = &REFG(undefined, 0x11404e4);
    *(undefined4 *)&REFG(undefined, 0x15e0d3c) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0d28));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x100) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x100;
    *(char * PTR32 *)&REFG(undefined, 0x15e0d10) = ((char *)REFP(0x1136aa0));
    *(char * PTR32 *)&REFG(undefined, 0x15e0d14) = ((char *)REFP(0x1136aa0));
    *(undefined4 *)&REFG(undefined, 0x15e0d18) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0d1c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0d20) = &REFG(undefined, 0x11404bc);
    *(undefined4 *)&REFG(undefined, 0x15e0d24) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0d10));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x200) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x200;
    *(char * PTR32 *)&REFG(undefined, 0x15e0cf8) = ((char *)REFP(0x11404a0));
    *(undefined4 *)&REFG(undefined, 0x15e0cfc) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0d00) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0d04) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0d08) = &REFG(undefined, 0x1140490);
    *(undefined4 *)&REFG(undefined, 0x15e0d0c) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0cf8));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x400) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x400;
    *(char * PTR32 *)&REFG(undefined, 0x15e0ce0) = ((char *)REFP(0x1136818));
    *(char * PTR32 *)&REFG(undefined, 0x15e0ce4) = ((char *)REFP(0x1136818));
    *(undefined4 *)&REFG(undefined, 0x15e0ce8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0cec) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0cf0) = &REFG(undefined, 0x1140480);
    *(undefined4 *)&REFG(undefined, 0x15e0cf4) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0ce0));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x800) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x800;
    *(char * PTR32 *)&REFG(undefined, 0x15e0cc8) = ((char *)REFP(0x113684c));
    *(char * PTR32 *)&REFG(undefined, 0x15e0ccc) = ((char *)REFP(0x113684c));
    *(undefined4 *)&REFG(undefined, 0x15e0cd0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0cd4) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0cd8) = &REFG(undefined, 0x1140470);
    *(undefined4 *)&REFG(undefined, 0x15e0cdc) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0cc8));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x1000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x1000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0cb0) = ((char *)REFP(0x1135a84));
    *(char * PTR32 *)&REFG(undefined, 0x15e0cb4) = ((char *)REFP(0x1135a84));
    *(undefined4 *)&REFG(undefined, 0x15e0cb8) = 2;
    *(undefined4 *)&REFG(undefined, 0x15e0cbc) = 3;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0cc0) = &REFG(undefined, 0x1140458);
    *(undefined4 *)&REFG(undefined, 0x15e0cc4) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0cb0));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x2000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x2000;
    *(undefined4 *)&REFG(undefined, 0x15e0c98) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0c9c) = ((char *)REFP(0x1135ba8));
    *(undefined4 *)&REFG(undefined, 0x15e0ca0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0ca4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0ca8) = &REFG(undefined, 0x1140430);
    *(undefined4 *)&REFG(undefined, 0x15e0cac) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0c98));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x4000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x4000;
    *(undefined4 *)&REFG(undefined, 0x15e0c80) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0c84) = ((char *)REFP(0x1135c04));
    *(undefined4 *)&REFG(undefined, 0x15e0c88) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0c8c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0c90) = &REFG(undefined, 0x11403f8);
    *(undefined4 *)&REFG(undefined, 0x15e0c94) = 6;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0c80));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x8000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x8000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0c68) = ((char *)REFP(0x11363d4));
    *(char * PTR32 *)&REFG(undefined, 0x15e0c6c) = ((char *)REFP(0x11363d4));
    *(undefined4 *)&REFG(undefined, 0x15e0c70) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e0c74) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0c78) = &REFG(undefined, 0x11403e8);
    *(undefined4 *)&REFG(undefined, 0x15e0c7c) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0c68));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x10000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x10000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0c50) = ((char *)REFP(0x11403b8));
    *(undefined4 *)&REFG(undefined, 0x15e0c54) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0c58) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0c5c) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0c60) = &REFG(undefined, 0x1140360);
    *(undefined4 *)&REFG(undefined, 0x15e0c64) = 10;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0c50));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x20000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x20000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0c38) = ((char *)REFP(0x114032c));
    *(undefined4 *)&REFG(undefined, 0x15e0c3c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0c40) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0c44) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0c48) = &REFG(undefined, 0x11402f4);
    *(undefined4 *)&REFG(undefined, 0x15e0c4c) = 6;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0c38));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x40000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x40000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0c20) = ((char *)REFP(0x11402c4));
    *(undefined4 *)&REFG(undefined, 0x15e0c24) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0c28) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0c2c) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0c30) = &REFG(undefined, 0x114028c);
    *(undefined4 *)&REFG(undefined, 0x15e0c34) = 6;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0c20));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x80000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x80000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0c08) = ((char *)REFP(0x1140270));
    *(undefined4 *)&REFG(undefined, 0x15e0c0c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0c10) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0c14) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0c18) = &REFG(undefined, 0x11401d0);
    *(undefined4 *)&REFG(undefined, 0x15e0c1c) = 0x13;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0c08));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x100000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x100000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0bf0) = ((char *)REFP(0x11401b0));
    *(undefined4 *)&REFG(undefined, 0x15e0bf4) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0bf8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0bfc) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0c00) = &REFG(undefined, 0x1140120);
    *(undefined4 *)&REFG(undefined, 0x15e0c04) = 0x11;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0bf0));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x200000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x200000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0bd8) = ((char *)REFP(0x1134fac));
    *(char * PTR32 *)&REFG(undefined, 0x15e0bdc) = ((char *)REFP(0x1134fac));
    *(undefined4 *)&REFG(undefined, 0x15e0be0) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e0be4) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0be8) = &REFG(undefined, 0x1140110);
    *(undefined4 *)&REFG(undefined, 0x15e0bec) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0bd8));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x400000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x400000;
    *(undefined4 *)&REFG(undefined, 0x15e0bc0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0bc4) = ((char *)REFP(0x11361f0));
    *(undefined4 *)&REFG(undefined, 0x15e0bc8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0bcc) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0bd0) = &REFG(undefined, 0x11400c8);
    *(undefined4 *)&REFG(undefined, 0x15e0bd4) = 8;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0bc0));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x800000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x800000;
    *(undefined4 *)&REFG(undefined, 0x15e0ba8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0bac) = ((char *)REFP(0x1136264));
    *(undefined4 *)&REFG(undefined, 0x15e0bb0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0bb4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0bb8) = &REFG(undefined, 0x1140060);
    *(undefined4 *)&REFG(undefined, 0x15e0bbc) = 0xc;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0ba8));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x1000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x1000000;
    *(undefined4 *)&REFG(undefined, 0x15e0b98) = 1;
    *(char * PTR32 *)&REFG(undefined, 0x15e0b90) = ((char *)REFP(0x1136a40));
    *(char * PTR32 *)&REFG(undefined, 0x15e0b94) = ((char *)REFP(0x1136a40));
    *(undefined4 *)&REFG(undefined, 0x15e0b9c) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0ba0) = &REFG(undefined, 0x1140038);
    *(undefined4 *)&REFG(undefined, 0x15e0ba4) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0b90));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x2000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x2000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0b78) = ((char *)REFP(0x11363d4));
    *(char * PTR32 *)&REFG(undefined, 0x15e0b7c) = ((char *)REFP(0x11363d4));
    *(undefined4 *)&REFG(undefined, 0x15e0b80) = 2;
    *(undefined4 *)&REFG(undefined, 0x15e0b84) = 3;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0b88) = &REFG(undefined, 0x1140010);
    *(undefined4 *)&REFG(undefined, 0x15e0b8c) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0b78));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x4000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x4000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0b60) = ((char *)REFP(0x1134fac));
    *(char * PTR32 *)&REFG(undefined, 0x15e0b64) = ((char *)REFP(0x1134fac));
    *(undefined4 *)&REFG(undefined, 0x15e0b68) = 2;
    *(undefined4 *)&REFG(undefined, 0x15e0b6c) = 3;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0b70) = &REFG(undefined, 0x113ffe8);
    *(undefined4 *)&REFG(undefined, 0x15e0b74) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0b60));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x8000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x8000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0b48) = ((char *)REFP(0x1136264));
    *(char * PTR32 *)&REFG(undefined, 0x15e0b4c) = ((char *)REFP(0x1136264));
    *(undefined4 *)&REFG(undefined, 0x15e0b50) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0b54) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0b58) = &REFG(undefined, 0x113ffb8);
    *(undefined4 *)&REFG(undefined, 0x15e0b5c) = 5;
  }
  uVar1 = F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0b48));
  return uVar1;
}

/* ref: FUN_00dc79e0 */
GEN_LIB GEN_NOFRAME uint F_00dc79e0(void)
{
  GEN_ENTER(0xdc79e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00dc7120(REFG(undefined4, 0x15e3734));
  return uVar1;
}

/* ref: FUN_00dc79f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc79f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc79f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x28))))(*(int * PTR32 *)this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 4))));
  *param_1 = uVar1;
  if (uVar1 != 0) {
    *((short *)GEN_TOP((uVar1 + 6))) = *((short *)GEN_TOP((uVar1 + 6))) + 1;
    *((int *)GEN_TOP((uVar1 + 8))) = *((int *)GEN_TOP((uVar1 + 8))) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00dc7a60 */
GEN_LIB GEN_FRAME uint F_00dc7a60(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc7a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 1;
    *(undefined4 *)&REFG(undefined, 0x15e1378) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e137c) = ((char *)REFP(0x113f7f4));
    *(undefined4 *)&REFG(undefined, 0x15e1380) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1384) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1388) = &REFG(undefined, 0x11418c0);
    *(undefined4 *)&REFG(undefined, 0x15e138c) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1378));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 2;
    *(undefined4 *)&REFG(undefined, 0x15e1360) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1364) = ((char *)REFP(0x113f7c0));
    *(undefined4 *)&REFG(undefined, 0x15e1368) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e136c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1370) = &REFG(undefined, 0x11418a8);
    *(undefined4 *)&REFG(undefined, 0x15e1374) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1360));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 4;
    *(undefined4 *)&REFG(undefined, 0x15e1348) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e134c) = ((char *)REFP(0x113f8a4));
    *(undefined4 *)&REFG(undefined, 0x15e1350) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1354) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1358) = &REFG(undefined, 0x1141880);
    *(undefined4 *)&REFG(undefined, 0x15e135c) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1348));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 8) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 8;
    *(undefined4 *)&REFG(undefined, 0x15e1330) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1334) = ((char *)REFP(0x113f8f8));
    *(undefined4 *)&REFG(undefined, 0x15e1338) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e133c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1340) = &REFG(undefined, 0x1141858);
    *(undefined4 *)&REFG(undefined, 0x15e1344) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1330));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x10) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x10;
    *(undefined4 *)&REFG(undefined, 0x15e1318) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e131c) = ((char *)REFP(0x113f868));
    *(undefined4 *)&REFG(undefined, 0x15e1320) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1324) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1328) = &REFG(undefined, 0x1141840);
    *(undefined4 *)&REFG(undefined, 0x15e132c) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1318));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x20) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x20;
    *(undefined4 *)&REFG(undefined, 0x15e1300) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1304) = ((char *)REFP(0x113f828));
    *(undefined4 *)&REFG(undefined, 0x15e1308) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e130c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1310) = &REFG(undefined, 0x1141828);
    *(undefined4 *)&REFG(undefined, 0x15e1314) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1300));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x40) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x40;
    *(undefined4 *)&REFG(undefined, 0x15e12e8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e12ec) = ((char *)REFP(0x113f94c));
    *(undefined4 *)&REFG(undefined, 0x15e12f0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e12f4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e12f8) = &REFG(undefined, 0x1141820);
    *(undefined4 *)&REFG(undefined, 0x15e12fc) = 0;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e12e8));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x80) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x80;
    *(undefined4 *)&REFG(undefined, 0x15e12d0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e12d4) = ((char *)REFP(0x113f9d0));
    *(undefined4 *)&REFG(undefined, 0x15e12d8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e12dc) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e12e0) = &REFG(undefined, 0x1141818);
    *(undefined4 *)&REFG(undefined, 0x15e12e4) = 0;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e12d0));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x100) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x100;
    *(undefined4 *)&REFG(undefined, 0x15e12b8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e12bc) = ((char *)REFP(0x113f990));
    *(undefined4 *)&REFG(undefined, 0x15e12c0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e12c4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e12c8) = &REFG(undefined, 0x1141810);
    *(undefined4 *)&REFG(undefined, 0x15e12cc) = 0;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e12b8));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x200) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x200;
    *(undefined4 *)&REFG(undefined, 0x15e12a0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e12a4) =
         ((char *)REFP(0x113f5a8));
    *(undefined4 *)&REFG(undefined, 0x15e12a8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e12ac) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e12b0) = &REFG(undefined, 0x11417e0);
    *(undefined4 *)&REFG(undefined, 0x15e12b4) = 5;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e12a0));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x400) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x400;
    *(undefined4 *)&REFG(undefined, 0x15e1288) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e128c) = ((char *)REFP(0x113f660));
    *(undefined4 *)&REFG(undefined, 0x15e1290) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1294) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1298) = &REFG(undefined, 0x11417c0);
    *(undefined4 *)&REFG(undefined, 0x15e129c) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1288));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x800) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x800;
    *(undefined4 *)&REFG(undefined, 0x15e1270) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1274) =
         ((char *)REFP(0x113f450))
    ;
    *(undefined4 *)&REFG(undefined, 0x15e1278) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e127c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1280) = &REFG(undefined, 0x1141788);
    *(undefined4 *)&REFG(undefined, 0x15e1284) = 6;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1270));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x1000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x1000;
    *(undefined4 *)&REFG(undefined, 0x15e1258) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e125c) = ((char *)REFP(0x113f518));
    *(undefined4 *)&REFG(undefined, 0x15e1260) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1264) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1268) = &REFG(undefined, 0x1141768);
    *(undefined4 *)&REFG(undefined, 0x15e126c) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1258));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x2000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x2000;
    *(undefined4 *)&REFG(undefined, 0x15e1240) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1244) =
         ((char *)REFP(0x113f2f0))
    ;
    *(undefined4 *)&REFG(undefined, 0x15e1248) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e124c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1250) = &REFG(undefined, 0x1141730);
    *(undefined4 *)&REFG(undefined, 0x15e1254) = 6;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1240));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x4000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x4000;
    *(undefined4 *)&REFG(undefined, 0x15e1228) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e122c) = ((char *)REFP(0x113f3b8));
    *(undefined4 *)&REFG(undefined, 0x15e1230) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1234) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1238) = &REFG(undefined, 0x1141710);
    *(undefined4 *)&REFG(undefined, 0x15e123c) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1228));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x8000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x8000;
    *(undefined4 *)&REFG(undefined, 0x15e1210) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1214) = ((char *)REFP(0x113f2ac));
    *(undefined4 *)&REFG(undefined, 0x15e1218) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e121c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1220) = &REFG(undefined, 0x11416e8);
    *(undefined4 *)&REFG(undefined, 0x15e1224) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1210));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x10000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x10000;
    *(undefined4 *)&REFG(undefined, 0x15e11f8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e11fc) = ((char *)REFP(0x113f220));
    *(undefined4 *)&REFG(undefined, 0x15e1200) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1204) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1208) = &REFG(undefined, 0x11416c0);
    *(undefined4 *)&REFG(undefined, 0x15e120c) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e11f8));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x20000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x20000;
    *(undefined4 *)&REFG(undefined, 0x15e11e0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e11e4) = ((char *)REFP(0x113f268));
    *(undefined4 *)&REFG(undefined, 0x15e11e8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e11ec) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e11f0) = &REFG(undefined, 0x1141698);
    *(undefined4 *)&REFG(undefined, 0x15e11f4) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e11e0));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x40000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x40000;
    *(undefined4 *)&REFG(undefined, 0x15e11c8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e11cc) = ((char *)REFP(0x113e658));
    *(undefined4 *)&REFG(undefined, 0x15e11d0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e11d4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e11d8) = &REFG(undefined, 0x1141688);
    *(undefined4 *)&REFG(undefined, 0x15e11dc) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e11c8));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x80000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x80000;
    *(undefined4 *)&REFG(undefined, 0x15e11b0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e11b4) = ((char *)REFP(0x113e690));
    *(undefined4 *)&REFG(undefined, 0x15e11b8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e11bc) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e11c0) = &REFG(undefined, 0x1141668);
    *(undefined4 *)&REFG(undefined, 0x15e11c4) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e11b0));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x100000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x100000;
    *(undefined4 *)&REFG(undefined, 0x15e1198) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e119c) = ((char *)REFP(0x113e6cc));
    *(undefined4 *)&REFG(undefined, 0x15e11a0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e11a4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e11a8) = &REFG(undefined, 0x1141640);
    *(undefined4 *)&REFG(undefined, 0x15e11ac) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1198));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x200000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x200000;
    *(undefined4 *)&REFG(undefined, 0x15e1180) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1184) = ((char *)REFP(0x113e708));
    *(undefined4 *)&REFG(undefined, 0x15e1188) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e118c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1190) = &REFG(undefined, 0x1141618);
    *(undefined4 *)&REFG(undefined, 0x15e1194) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1180));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x400000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x400000;
    *(undefined4 *)&REFG(undefined, 0x15e1168) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e116c) = ((char *)REFP(0x113e744));
    *(undefined4 *)&REFG(undefined, 0x15e1170) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1174) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1178) = &REFG(undefined, 0x1141600);
    *(undefined4 *)&REFG(undefined, 0x15e117c) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1168));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x800000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x800000;
    *(undefined4 *)&REFG(undefined, 0x15e1150) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1154) = ((char *)REFP(0x113e3b4));
    *(undefined4 *)&REFG(undefined, 0x15e1158) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e115c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1160) = &REFG(undefined, 0x11415e0);
    *(undefined4 *)&REFG(undefined, 0x15e1164) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1150));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x1000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x1000000;
    *(undefined4 *)&REFG(undefined, 0x15e1138) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e113c) = ((char *)REFP(0x113e430));
    *(undefined4 *)&REFG(undefined, 0x15e1140) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1144) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1148) = &REFG(undefined, 0x11415c0);
    *(undefined4 *)&REFG(undefined, 0x15e114c) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1138));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x2000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x2000000;
    *(undefined4 *)&REFG(undefined, 0x15e1120) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1124) = ((char *)REFP(0x113e4a8));
    *(undefined4 *)&REFG(undefined, 0x15e1128) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e112c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1130) = &REFG(undefined, 0x11415a0);
    *(undefined4 *)&REFG(undefined, 0x15e1134) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1120));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x4000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x4000000;
    *(undefined4 *)&REFG(undefined, 0x15e1108) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e110c) = ((char *)REFP(0x113e2a4));
    *(undefined4 *)&REFG(undefined, 0x15e1110) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1114) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1118) = &REFG(undefined, 0x1141588);
    *(undefined4 *)&REFG(undefined, 0x15e111c) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1108));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x8000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x8000000;
    *(undefined4 *)&REFG(undefined, 0x15e10f0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e10f4) = ((char *)REFP(0x113e2e8));
    *(undefined4 *)&REFG(undefined, 0x15e10f8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e10fc) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1100) = &REFG(undefined, 0x1141570);
    *(undefined4 *)&REFG(undefined, 0x15e1104) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e10f0));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x10000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x10000000;
    *(undefined4 *)&REFG(undefined, 0x15e10d8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e10dc) = ((char *)REFP(0x113e32c));
    *(undefined4 *)&REFG(undefined, 0x15e10e0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e10e4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e10e8) = &REFG(undefined, 0x1141558);
    *(undefined4 *)&REFG(undefined, 0x15e10ec) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e10d8));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x20000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x20000000;
    *(undefined4 *)&REFG(undefined, 0x15e10c0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e10c4) = ((char *)REFP(0x113e520));
    *(undefined4 *)&REFG(undefined, 0x15e10c8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e10cc) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e10d0) = &REFG(undefined, 0x1141540);
    *(undefined4 *)&REFG(undefined, 0x15e10d4) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e10c0));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x40000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x40000000;
    *(undefined4 *)&REFG(undefined, 0x15e10a8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e10ac) = ((char *)REFP(0x113e370));
    *(undefined4 *)&REFG(undefined, 0x15e10b0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e10b4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e10b8) = &REFG(undefined, 0x1141528);
    *(undefined4 *)&REFG(undefined, 0x15e10bc) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e10a8));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x80000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x80000000;
    *(undefined4 *)&REFG(undefined, 0x15e1090) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1094) = ((char *)REFP(0x113f028));
    *(undefined4 *)&REFG(undefined, 0x15e1098) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e109c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e10a0) = &REFG(undefined, 0x11414e0);
    *(undefined4 *)&REFG(undefined, 0x15e10a4) = 8;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1090));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 1;
    *(undefined4 *)&REFG(undefined, 0x15e1074) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1078) = ((char *)REFP(0x113f110));
    *(undefined4 *)&REFG(undefined, 0x15e107c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1080) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1084) = &REFG(undefined, 0x1141498);
    *(undefined4 *)&REFG(undefined, 0x15e1088) = 8;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1074));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 2;
    *(undefined4 *)&REFG(undefined, 0x15e105c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1060) = ((char *)REFP(0x113f09c));
    *(undefined4 *)&REFG(undefined, 0x15e1064) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1068) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e106c) = &REFG(undefined, 0x1141450);
    *(undefined4 *)&REFG(undefined, 0x15e1070) = 8;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e105c));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 4;
    *(undefined4 *)&REFG(undefined, 0x15e1044) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1048) = ((char *)REFP(0x113ef40));
    *(undefined4 *)&REFG(undefined, 0x15e104c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1050) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1054) = &REFG(undefined, 0x1141418);
    *(undefined4 *)&REFG(undefined, 0x15e1058) = 6;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1044));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 8) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 8;
    *(undefined4 *)&REFG(undefined, 0x15e102c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1030) = ((char *)REFP(0x113efdc));
    *(undefined4 *)&REFG(undefined, 0x15e1034) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1038) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e103c) = &REFG(undefined, 0x11413e0);
    *(undefined4 *)&REFG(undefined, 0x15e1040) = 6;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e102c));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x10) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x10;
    *(undefined4 *)&REFG(undefined, 0x15e1014) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1018) = ((char *)REFP(0x113ef90));
    *(undefined4 *)&REFG(undefined, 0x15e101c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1020) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1024) = &REFG(undefined, 0x11413a8);
    *(undefined4 *)&REFG(undefined, 0x15e1028) = 6;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1014));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x20) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x20;
    *(undefined4 *)&REFG(undefined, 0x15e0ffc) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1000) = ((char *)REFP(0x113e088));
    *(undefined4 *)&REFG(undefined, 0x15e1004) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1008) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e100c) = &REFG(undefined, 0x1141378);
    *(undefined4 *)&REFG(undefined, 0x15e1010) = 5;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0ffc));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x40) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x40;
    *(undefined4 *)&REFG(undefined, 0x15e0fe4) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0fe8) = ((char *)REFP(0x113e0f4));
    *(undefined4 *)&REFG(undefined, 0x15e0fec) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0ff0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0ff4) = &REFG(undefined, 0x1141348);
    *(undefined4 *)&REFG(undefined, 0x15e0ff8) = 5;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0fe4));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x80) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x80;
    *(undefined4 *)&REFG(undefined, 0x15e0fcc) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0fd0) = ((char *)REFP(0x113e160));
    *(undefined4 *)&REFG(undefined, 0x15e0fd4) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0fd8) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0fdc) = &REFG(undefined, 0x1141318);
    *(undefined4 *)&REFG(undefined, 0x15e0fe0) = 5;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0fcc));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x100) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x100;
    *(undefined4 *)&REFG(undefined, 0x15e0fb4) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0fb8) = ((char *)REFP(0x113e1cc));
    *(undefined4 *)&REFG(undefined, 0x15e0fbc) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0fc0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0fc4) = &REFG(undefined, 0x11412e8);
    *(undefined4 *)&REFG(undefined, 0x15e0fc8) = 5;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0fb4));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x200) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x200;
    *(undefined4 *)&REFG(undefined, 0x15e0f9c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0fa0) = ((char *)REFP(0x113e03c));
    *(undefined4 *)&REFG(undefined, 0x15e0fa4) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0fa8) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0fac) = &REFG(undefined, 0x11412c0);
    *(undefined4 *)&REFG(undefined, 0x15e0fb0) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0f9c));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x400) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x400;
    *(undefined4 *)&REFG(undefined, 0x15e0f84) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0f88) = ((char *)REFP(0x113df58));
    *(undefined4 *)&REFG(undefined, 0x15e0f8c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0f90) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0f94) = &REFG(undefined, 0x1141298);
    *(undefined4 *)&REFG(undefined, 0x15e0f98) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0f84));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x800) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x800;
    *(undefined4 *)&REFG(undefined, 0x15e0f6c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0f70) = ((char *)REFP(0x113dfa4));
    *(undefined4 *)&REFG(undefined, 0x15e0f74) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0f78) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0f7c) = &REFG(undefined, 0x1141270);
    *(undefined4 *)&REFG(undefined, 0x15e0f80) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0f6c));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x1000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x1000;
    *(undefined4 *)&REFG(undefined, 0x15e0f54) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0f58) = ((char *)REFP(0x113dff0));
    *(undefined4 *)&REFG(undefined, 0x15e0f5c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0f60) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0f64) = &REFG(undefined, 0x1141248);
    *(undefined4 *)&REFG(undefined, 0x15e0f68) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0f54));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x2000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x2000;
    *(undefined4 *)&REFG(undefined, 0x15e0f3c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0f40) = ((char *)REFP(0x113ec78));
    *(undefined4 *)&REFG(undefined, 0x15e0f44) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0f48) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0f4c) = &REFG(undefined, 0x1141238);
    *(undefined4 *)&REFG(undefined, 0x15e0f50) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0f3c));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x4000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x4000;
    *(undefined4 *)&REFG(undefined, 0x15e0f24) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0f28) = ((char *)REFP(0x113ebc0));
    *(undefined4 *)&REFG(undefined, 0x15e0f2c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0f30) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0f34) = &REFG(undefined, 0x1141228);
    *(undefined4 *)&REFG(undefined, 0x15e0f38) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0f24));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x8000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x8000;
    *(undefined4 *)&REFG(undefined, 0x15e0f0c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0f10) = ((char *)REFP(0x113ec20));
    *(undefined4 *)&REFG(undefined, 0x15e0f14) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0f18) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0f1c) = &REFG(undefined, 0x1141218);
    *(undefined4 *)&REFG(undefined, 0x15e0f20) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0f0c));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x10000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x10000;
    *(undefined4 *)&REFG(undefined, 0x15e0ef4) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0ef8) = ((char *)REFP(0x113ed54));
    *(undefined4 *)&REFG(undefined, 0x15e0efc) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0f00) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0f04) = &REFG(undefined, 0x1141198);
    *(undefined4 *)&REFG(undefined, 0x15e0f08) = 0xf;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0ef4));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x20000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x20000;
    *(undefined4 *)&REFG(undefined, 0x15e0edc) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0ee0) = ((char *)REFP(0x1141160));
    *(undefined4 *)&REFG(undefined, 0x15e0ee4) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0ee8) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0eec) = &REFG(undefined, 0x1141140);
    *(undefined4 *)&REFG(undefined, 0x15e0ef0) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0edc));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x40000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x40000;
    *(undefined4 *)&REFG(undefined, 0x15e0ec4) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0ec8) = ((char *)REFP(0x113edcc));
    *(undefined4 *)&REFG(undefined, 0x15e0ecc) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0ed0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0ed4) = &REFG(undefined, 0x1141120);
    *(undefined4 *)&REFG(undefined, 0x15e0ed8) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0ec4));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x80000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x80000;
    *(undefined4 *)&REFG(undefined, 0x15e0eac) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0eb0) = ((char *)REFP(0x113ed84));
    *(undefined4 *)&REFG(undefined, 0x15e0eb4) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0eb8) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0ebc) = &REFG(undefined, 0x1141108);
    *(undefined4 *)&REFG(undefined, 0x15e0ec0) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0eac));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x100000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x100000;
    *(undefined4 *)&REFG(undefined, 0x15e0e94) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0e98) = ((char *)REFP(0x113eccc));
    *(undefined4 *)&REFG(undefined, 0x15e0e9c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0ea0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0ea4) = &REFG(undefined, 0x1141080);
    *(undefined4 *)&REFG(undefined, 0x15e0ea8) = 0x10;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0e94));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x200000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x200000;
    *(undefined4 *)&REFG(undefined, 0x15e0e7c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0e80) = ((char *)REFP(0x113ed10));
    *(undefined4 *)&REFG(undefined, 0x15e0e84) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0e88) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0e8c) = &REFG(undefined, 0x1141070);
    *(undefined4 *)&REFG(undefined, 0x15e0e90) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0e7c));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x400000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x400000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0e64) = ((char *)REFP(0x113eccc));
    *(char * PTR32 *)&REFG(undefined, 0x15e0e68) = ((char *)REFP(0x113eccc));
    *(undefined4 *)&REFG(undefined, 0x15e0e6c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0e70) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0e74) = &REFG(undefined, 0x1141060);
    *(undefined4 *)&REFG(undefined, 0x15e0e78) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0e64));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x800000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x800000;
    *(undefined4 *)&REFG(undefined, 0x15e0e4c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0e50) = ((char *)REFP(0x113fec4));
    *(undefined4 *)&REFG(undefined, 0x15e0e54) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0e58) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0e5c) = &REFG(undefined, 0x1141058);
    *(undefined4 *)&REFG(undefined, 0x15e0e60) = 0;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0e4c));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x1000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x1000000;
    *(undefined4 *)&REFG(undefined, 0x15e0e34) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0e38) = ((char *)REFP(0x113fef4));
    *(undefined4 *)&REFG(undefined, 0x15e0e3c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0e40) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0e44) = &REFG(undefined, 0x1141050);
    *(undefined4 *)&REFG(undefined, 0x15e0e48) = 0;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0e34));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x2000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x2000000;
    *(undefined4 *)&REFG(undefined, 0x15e0e1c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0e20) = ((char *)REFP(0x113fea4));
    *(undefined4 *)&REFG(undefined, 0x15e0e24) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0e28) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0e2c) = &REFG(undefined, 0x1141048);
    *(undefined4 *)&REFG(undefined, 0x15e0e30) = 0;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0e1c));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x4000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x4000000;
    *(undefined4 *)&REFG(undefined, 0x15e0e04) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0e08) = ((char *)REFP(0x113ff38));
    *(undefined4 *)&REFG(undefined, 0x15e0e0c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0e10) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0e14) = &REFG(undefined, 0x1140ff8);
    *(undefined4 *)&REFG(undefined, 0x15e0e18) = 9;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0e04));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x8000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x8000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0dec) = ((char *)REFP(0x113eccc));
    *(char * PTR32 *)&REFG(undefined, 0x15e0df0) = ((char *)REFP(0x113eccc));
    *(undefined4 *)&REFG(undefined, 0x15e0df4) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e0df8) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0dfc) = &REFG(undefined, 0x1140fd8);
    *(undefined4 *)&REFG(undefined, 0x15e0e00) = 3;
  }
  uVar1 = F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e0dec));
  return uVar1;
}

/* ref: FUN_00dc8d30 */
GEN_LIB GEN_NOFRAME uint F_00dc8d30(void)
{
  GEN_ENTER(0xdc8d30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00dc7a60(REFG(undefined4, 0x15e3734));
  return uVar1;
}

/* ref: FUN_00dc8d40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc8d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc8d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined2 *)this = *((undefined2 *)GEN_TOP((param_1 + 2)));
  return (uint)this;
}

/* ref: FUN_00dc8d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc8d70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc8d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00dc8da0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc8da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdc8da0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x2c))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00dc8db0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc8db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc8db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 8))))(*(int * PTR32 *)this GEN_EDX_FWD);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00dc8df0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc8df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc8df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x34))))(*(int * PTR32 *)this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 4))));
  *param_1 = uVar1;
  if (uVar1 != 0) {
    *((short *)GEN_TOP((uVar1 + 6))) = *((short *)GEN_TOP((uVar1 + 6))) + 1;
    *((int *)GEN_TOP((uVar1 + 8))) = *((int *)GEN_TOP((uVar1 + 8))) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00dc8e20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc8e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc8e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x5c))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))),*param_1);
  return uVar1;
}

/* ref: FUN_00dc8e40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc8e40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xdc8e40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x50))))
                    (((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1],(undefined4)gen_fl2bits(param_2));
  return uVar1;
}

/* ref: FUN_00dc8e70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc8e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc8e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x18))))(*(int * PTR32 *)this GEN_EDX_FWD);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00dc8ec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc8ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc8ec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x30))))(*(int * PTR32 *)this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 4))),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00dc8ee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc8ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc8ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x38))))(*(int * PTR32 *)this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 4))),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00dc8f00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc8f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc8f00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x28))))(*(int * PTR32 *)this GEN_EDX_FWD,param_2);
  *param_1 = uVar1;
  if (uVar1 != 0) {
    *((short *)GEN_TOP((uVar1 + 6))) = *((short *)GEN_TOP((uVar1 + 6))) + 1;
    *((int *)GEN_TOP((uVar1 + 8))) = *((int *)GEN_TOP((uVar1 + 8))) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00dc8f30 */
GEN_LIB GEN_FRAME uint F_00dc8f30(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc8f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),((char *)REFP(0x114234c)));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)))));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) + 1;
    puVar2[2] = puVar2[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x1142340)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x5c))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)),puVar2);
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = 0xffffffff;
    *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) - 1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  return uVar3;
}

/* ref: FUN_00dc8fb0 */
GEN_LIB GEN_FRAME uint F_00dc8fb0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc8fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),((char *)REFP(0x1142364)));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)))));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) + 1;
    puVar2[2] = puVar2[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x114235c)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x5c))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)),puVar2);
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = 0xffffffff;
    *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) - 1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  return uVar3;
}

/* ref: FUN_00dc9030 */
GEN_LIB GEN_FRAME uint F_00dc9030(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc9030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),((char *)REFP(0x1142378)));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)))));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) + 1;
    puVar2[2] = puVar2[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x1142370)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x5c))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)),puVar2);
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = 0xffffffff;
    *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) - 1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  return uVar3;
}

/* ref: FUN_00dc90b0 */
GEN_LIB GEN_FRAME uint F_00dc90b0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc90b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),((char *)REFP(0x1142364)));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)))));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) + 1;
    puVar2[2] = puVar2[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x114235c)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x5c))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)),puVar2);
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = 0xffffffff;
    *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) - 1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  return uVar3;
}

/* ref: FUN_00dc9130 */
GEN_LIB GEN_FRAME uint F_00dc9130(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc9130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),((char *)REFP(0x1142384)));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)))));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) + 1;
    puVar2[2] = puVar2[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x1139c38)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x5c))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)),puVar2);
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = 0xffffffff;
    *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) - 1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  return uVar3;
}

/* ref: FUN_00dc91b0 */
GEN_LIB GEN_FRAME uint F_00dc91b0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc91b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),((char *)REFP(0x1142390)));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)))));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) + 1;
    puVar2[2] = puVar2[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x1139eac)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x5c))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)),puVar2);
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = 0xffffffff;
    *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) - 1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  return uVar3;
}

/* ref: FUN_00dc9230 */
GEN_LIB GEN_FRAME uint F_00dc9230(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc9230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x113a1dc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x50))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)),(unsigned int)gen_fl2bits((float)(REFG(float, 0x1087f04))));
  return uVar1;
}

/* ref: FUN_00dc9270 */
GEN_LIB GEN_FRAME uint F_00dc9270(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc9270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x84, 12, 4);
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x78)),&REFG(undefined, 0x1134e40));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x78)) + 0x30))))((*(int * PTR32 *)(gen_frame + 0x78)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x7c)));
  uVar1 = uVar1 & 0xffff;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x28)),&REFG(undefined, 0x1134e40));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x2c)),0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x20)),((char *)REFP(0x114239c)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x20)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x24)),0);
    return uVar1;
  case 1: ;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),&REFG(undefined, 0x1134e40));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)),1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x114239c)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)),4);
    break;
  case 2: ;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x38)),&REFG(undefined, 0x1134e40));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x38)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x3c)),2);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x30)),((char *)REFP(0x114239c)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x30)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x34)),2);
    return uVar1;
  case 3: ;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x18)),&REFG(undefined, 0x1134e40));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)),3);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x10)),((char *)REFP(0x114239c)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)),1);
    return uVar1;
  case 4: ;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x78)),&REFG(undefined, 0x1134e40));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x78)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x78)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x7c)),4);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x70)),((char *)REFP(0x114239c)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x70)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x70)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x74)),1);
    return uVar1;
  case 5: ;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x68)),&REFG(undefined, 0x1134e40));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x68)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x6c)),4);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x60)),((char *)REFP(0x114239c)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x60)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x60)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x64)),2);
    return uVar1;
  case 6: ;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x58)),&REFG(undefined, 0x1134e40));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x58)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x58)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x5c)),4);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x50)),((char *)REFP(0x114239c)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x50)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x50)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x54)),3);
    return uVar1;
  case 7: ;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x48)),&REFG(undefined, 0x1134e40));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x48)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4c)),4);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x40)),((char *)REFP(0x114239c)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x40)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x44)),4);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00dc9520 */
GEN_LIB GEN_FRAME uint F_00dc9520(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc9520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x10)),((char *)REFP(0x11423b0)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)))));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),((char *)REFP(0x11423a8)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)))));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,uVar4);
  param_1 = ((undefined4 *)GEN_TOP(0x0));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  if (0 < (int)uVar4) {
    do {
      piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,param_1)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
        piVar5[2] = piVar5[2] + 1;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x11393bc)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x2c))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x38))))(piVar3 GEN_EDX_ARG,param_1,uVar4);
      *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) - 1;
      piVar1 = piVar5 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar5)))(piVar5 GEN_EDX_ARG,1);
      }
      param_1 = ((undefined4 *)GEN_TOP(((int)param_1 + 1)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
    } while ((int)param_1 < (int)uVar4);
  }
  *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
  piVar5 = piVar3 + 2;
  *piVar5 = *piVar5 - 1;
  if (*piVar5 == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
  }
  *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 - 1;
  if (*piVar3 == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
  }
  return uVar4;
}

/* ref: FUN_00dc9660 */
GEN_LIB GEN_FRAME uint F_00dc9660(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc9660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),((char *)REFP(0x11423cc)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)))));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x11423bc)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x10)) = uVar4;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,uVar4);
  param_1 = ((undefined4 *)GEN_TOP(0x0));
  if (0 < (int)uVar4) {
    do {
      puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,param_1)));
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) + 1;
        puVar6[2] = puVar6[2] + 1;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x60))))(piVar3 GEN_EDX_ARG,param_1,puVar6);
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) - 1;
        piVar1 = puVar6 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
        }
      }
      uVar5 = (int)param_1 + 1;
      param_1 = ((undefined4 *)GEN_TOP(uVar5));
    } while ((int)uVar5 < (int)(*(uint *)(gen_frame + 0x10)));
  }
  *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
  }
  *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 - 1;
  if (*piVar3 == 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
  }
  return uVar5;
}

/* ref: FUN_00dc9780 */
GEN_LIB GEN_FRAME uint F_00dc9780(unsigned int gen_a0)
{
  GEN_ENTER(0xdc9780u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  GEN_FRAME_DECL_TOP(0x114, 12, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  char * pcVar6;
  uint uVar7;
  undefined4 * puVar8;
  int iVar9;
  int iVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  puVar8 = (*(undefined4 * PTR32 *)&gen_args[0]);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 8))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG)));
  (*(int * PTR32 *)(gen_frame + 0xfc)) = piVar2;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 0xc))))(((int *)GEN_TOP(*puVar8)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0xa0)),((char *)REFP(0x11424bc)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xa0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0xa0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xa4)))));
  (*(int * PTR32 *)(gen_frame + 0xf8)) = piVar2;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG)));
  piVar5 = (*(int * PTR32 *)(gen_frame + 0xfc));
  (*(int * PTR32 *)(gen_frame + 0xbc)) = piVar3;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xfc)) + 0x24))))((*(int * PTR32 *)(gen_frame + 0xfc)) GEN_EDX_ARG,((char *)REFP(0x11424a0)));
  (*(uint *)(gen_frame + 0xb0)) = uVar4;
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x10))))(piVar5 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xb0)),0)));
  (*(int * PTR32 *)(gen_frame + 0xf4)) = piVar5;
  if (piVar5 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
    piVar5[2] = piVar5[2] + 1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  (*(int * PTR32 *)(gen_frame + 0xd8)) = ((int *)GEN_TOP(uVar4));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0xc4)),((char *)REFP(0x1142494)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xc4)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0xc4)) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0xc8)),(*(int * PTR32 *)(gen_frame + 0xd8)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 0xc))))(((int *)GEN_TOP(*puVar8)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0xc4)),&REFG(undefined, 0x1134fe0));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xc4)) + 0x5c))))((*(int * PTR32 *)(gen_frame + 0xc4)) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0xc8)),piVar5);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 0xc))))(((int *)GEN_TOP(*puVar8)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x18)),((char *)REFP(0x1142488)));
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)))));
  (*(int * PTR32 *)(gen_frame + 0xc8)) = piVar5;
  if (piVar5 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
    piVar5[2] = piVar5[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x48)),((char *)REFP(0x1142480)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x48)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4c)))));
  piVar5 = (*(int * PTR32 *)(gen_frame + 0xfc));
  (*(int * PTR32 *)(gen_frame + 0xc0)) = piVar3;
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xfc)) + 0x24))))((*(int * PTR32 *)(gen_frame + 0xfc)) GEN_EDX_ARG,((char *)REFP(0x1142468)));
  (*(uint *)(gen_frame + 0xac)) = uVar4;
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x10))))(piVar5 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xac)),0)));
  (*(int * PTR32 *)(gen_frame + 0xa8)) = piVar5;
  if (piVar5 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
    piVar5[2] = piVar5[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 0xc))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0xb4)),&REFG(undefined, 0x1142460));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xb4)) + 0x5c))))((*(int * PTR32 *)(gen_frame + 0xb4)) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0xb8)),piVar5);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x88)),((char *)REFP(0x1142480)));
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x88)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x88)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x8c)))));
  (*(int * PTR32 *)(gen_frame + 0xd8)) = piVar5;
  if (piVar5 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
    piVar5[2] = piVar5[2] + 1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x10))))(piVar5 GEN_EDX_ARG,uVar4);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x108)) = uVar4;
  (*(int *)(gen_frame + 0xd4)) = 0;
  (*(int *)(gen_frame + 0xd0)) = 0;
  (*(int * PTR32 *)(gen_frame + 0xfc)) = ((int *)GEN_TOP(0x0));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
  if (0 < (int)uVar4) {
    do {
      piVar2 = (*(int * PTR32 *)(gen_frame + 0xfc));
      piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xc0)) + 0x5c))))((*(int * PTR32 *)(gen_frame + 0xc0)) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0xfc)))));
      (*(int * PTR32 *)(gen_frame + 0xb8)) = piVar5;
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
        piVar5[2] = piVar5[2] + 1;
      }
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xd8)) + 0x5c))))((*(int * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,piVar2)));
      (*(int * PTR32 *)(gen_frame + 0xf0)) = piVar2;
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
        piVar2[2] = piVar2[2] + 1;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),&REFG(undefined, 0x1134e40));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x20)),&REFG(undefined, 0x1134e40));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x20)) + 0x60))))((*(int * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x8)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x1142458)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x78)),((char *)REFP(0x1142458)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x78)) + 0x60))))((*(int * PTR32 *)(gen_frame + 0x78)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x7c)),((undefined1 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x38)),&REFG(undefined, 0x1134e40));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x38)) + 0x30))))((*(int * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x3c)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x68)),((char *)REFP(0x114244c)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x68)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x6c)),*(undefined4 *)(&REFG(undefined, 0x1142320) + uVar4 * 4));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x10)),((char *)REFP(0x1142458)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x30))))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)));
      piVar2 = (*(int * PTR32 *)(gen_frame + 0xf8));
      puVar8 = (*(undefined4 * PTR32 *)&gen_args[0]);
      switch((unsigned int)(uintptr_t)(uVar4)) {
      case 1: ;
      case 4: ;
      case 8: ;
      case 0x10: ;
        if (uVar4 == 1) {
          pcVar6 = ((char *)REFP(0x113a7ec));
        }
        else if (uVar4 == 4) {
          pcVar6 = ((char *)REFP(0x1142444));
        }
        else if (uVar4 == 0x10) {
          pcVar6 = ((char *)REFP(0x1142438));
        }
        else {
          pcVar6 = ((char *)GEN_TOP(((uVar4 != 8) - 1 & 0x1142430)));
        }
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xf8)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0xf8)) GEN_EDX_ARG,pcVar6)));
        if (piVar2 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
          piVar2[2] = piVar2[2] + 1;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xf4)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0xf4)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x58)),((char *)REFP(0x1142424)));
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x58)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x58)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x5c)))));
        if (piVar5 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
          piVar5[2] = piVar5[2] + 1;
        }
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG)));
        (*(int * PTR32 *)(gen_frame + 0x10c)) = piVar3;
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xf0)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0xf0)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x28)),((char *)REFP(0x1142418)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x2c)),uVar4 << 4);
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x10))))(piVar5 GEN_EDX_ARG,uVar4 + (*(uint *)(gen_frame + 0x108)));
        iVar10 = 0;
        if (0 < (int)(*(uint *)(gen_frame + 0x108))) {
          do {
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x2c))))(piVar2 GEN_EDX_ARG,iVar10);
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x30))))(piVar5 GEN_EDX_ARG,iVar10 + (int)(*(int * PTR32 *)(gen_frame + 0x10c)),uVar4);
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)(*(uint *)(gen_frame + 0x108)));
        }
        break;
      case 2: ;
        (*(undefined4 *)(gen_frame + 0xdc)) = 0x66666964;
        (*(undefined2 *)(gen_frame + 0xe0)) = 0x7375;
        (*(undefined1 *)(gen_frame + 0xe2)) = 0x65;
        (*(char *)(gen_frame + 0xe3)) = (char)(*(int *)(gen_frame + 0xd0)) + 'A';
        (*(undefined1 *)(gen_frame + 0xe4)) = 0;
        if (((*(int *)(gen_frame + 0xd4)) == 0) &&
           (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xbc)) + 0x2c))))((*(int * PTR32 *)(gen_frame + 0xbc)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xdc))), uVar4 == 0xffffffff)) {
          (*(char *)(gen_frame + 0xe3)) = '\0';
        }
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xf8)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0xf8)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xdc)))));
        if (piVar2 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
          piVar2[2] = piVar2[2] + 1;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xf4)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0xf4)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x98)),((char *)REFP(0x114240c)));
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x98)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x98)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x9c)))));
        if (piVar5 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
          piVar5[2] = piVar5[2] + 1;
        }
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG)));
        (*(int * PTR32 *)(gen_frame + 0x10c)) = piVar3;
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xf0)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0xf0)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x90)),((char *)REFP(0x1142418)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x90)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x90)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x94)),uVar4 * 4);
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x10))))(piVar5 GEN_EDX_ARG,uVar4 + (*(uint *)(gen_frame + 0x108)));
        iVar10 = 0;
        if (0 < (int)(*(uint *)(gen_frame + 0x108))) {
          do {
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG,iVar10);
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x50))))(piVar5 GEN_EDX_ARG,iVar10 + (int)(*(int * PTR32 *)(gen_frame + 0x10c)),uVar4);
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)(*(uint *)(gen_frame + 0x108)));
        }
        (*(int *)(gen_frame + 0xd0)) = (*(int *)(gen_frame + 0xd0)) + 1;
        break;
      default: ;
        goto switchD_00dc9b18_caseD_3;
      case 0x20: ;
        cVar1 = (char)(*(int *)(gen_frame + 0xd4)) + '0';
        (*((undefined2 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 0)))) = CONCAT11(cVar1,0x75);
        (*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 3)))) = SUB41(puVar8,3);
        gen_piece_set(&(*(undefined4 * PTR32 *)&gen_args[0]), 0, 3, (unsigned long long)((uint3)(ushort)(*(undefined4 * PTR32 *)&gen_args[0])));
        (*(undefined1 *)(gen_frame + 0xec)) = 0x76;
        (*(char *)(gen_frame + 0xed)) = cVar1;
        (*(undefined1 *)(gen_frame + 0xee)) = 0;
        if (((*(int *)(gen_frame + 0xd4)) == 0) &&
           (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xbc)) + 0x2c))))((*(int * PTR32 *)(gen_frame + 0xbc)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0])), uVar4 == 0xffffffff)) {
          (*((undefined2 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 0)))) = (ushort)(byte)(*(undefined4 * PTR32 *)&gen_args[0]);
          (*(char *)(gen_frame + 0xed)) = '\0';
        }
        piVar2 = (*(int * PTR32 *)(gen_frame + 0xf8));
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xf8)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0xf8)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]))));
        (*(int * PTR32 *)(gen_frame + 0x100)) = piVar5;
        if (piVar5 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
          piVar5[2] = piVar5[2] + 1;
        }
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0xec)))));
        (*(int * PTR32 *)(gen_frame + 0x104)) = piVar2;
        if (piVar2 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
          piVar2[2] = piVar2[2] + 1;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xf4)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0xf4)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x80)),((char *)REFP(0x1135ca4)));
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x80)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x80)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x84)))));
        if (piVar2 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
          piVar2[2] = piVar2[2] + 1;
        }
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG)));
        (*(int * PTR32 *)(gen_frame + 0x10c)) = piVar5;
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xf0)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0xf0)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x70)),((char *)REFP(0x1142418)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x70)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x70)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x74)),uVar4 * 4);
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
        uVar4 = (*(uint *)(gen_frame + 0x108));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,uVar7 + (*(uint *)(gen_frame + 0x108)) * 4);
        iVar10 = 0;
        piVar5 = (*(int * PTR32 *)(gen_frame + 0x10c));
        if (0 < (int)uVar4) {
          do {
            extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x100)) + 0x3c))))((*(int * PTR32 *)(gen_frame + 0x100)),iVar10);
            (*(int * PTR32 *)(gen_frame + 0x10c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)extraout_ST0)));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x40))))
                      (piVar2 GEN_EDX_ARG,piVar5,(undefined4)gen_fl2bits((float)extraout_ST0));
            extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x104)) + 0x3c))))((*(int * PTR32 *)(gen_frame + 0x104)),iVar10);
            (*(int * PTR32 *)(gen_frame + 0x10c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)extraout_ST0_00)));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x40))))(piVar2 GEN_EDX_ARG,(int)piVar5 + 1,((int *)(uintptr_t)gen_fl2bits((float)((float)extraout_ST0_00))));
            iVar10 = iVar10 + 1;
            piVar5 = ((int *)GEN_TOP(((int)piVar5 + 2)));
          } while (iVar10 < (int)(*(uint *)(gen_frame + 0x108)));
        }
        (*(int *)(gen_frame + 0xd4)) = (*(int *)(gen_frame + 0xd4)) + 1;
        *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
        piVar5 = piVar2 + 2;
        *piVar5 = *piVar5 - 1;
        if (*piVar5 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
        }
        piVar2 = (*(int * PTR32 *)(gen_frame + 0x100));
        if ((*(int * PTR32 *)(gen_frame + 0x104)) != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x104)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x104)) + 6))) - 1;
          piVar5 = (*(int * PTR32 *)(gen_frame + 0x104)) + 2;
          *piVar5 = *piVar5 - 1;
          if (*piVar5 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x104)))))((*(int * PTR32 *)(gen_frame + 0x104)) GEN_EDX_ARG,1);
            piVar2 = (*(int * PTR32 *)(gen_frame + 0x100));
          }
        }
        goto LAB_00dc9f16;
      case 0x40: ;
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xf8)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0xf8)) GEN_EDX_ARG,&REFG(undefined, 0x1142408))));
        (*(int * PTR32 *)(gen_frame + 0x10c)) = piVar5;
        if (piVar5 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
          piVar5[2] = piVar5[2] + 1;
        }
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,&REFG(undefined, 0x1142404))));
        (*(int * PTR32 *)(gen_frame + 0xe8)) = piVar5;
        if (piVar5 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
          piVar5[2] = piVar5[2] + 1;
        }
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,&REFG(undefined, 0x1142400))));
        (*(int * PTR32 *)(gen_frame + 0x104)) = piVar5;
        if (piVar5 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
          piVar5[2] = piVar5[2] + 1;
        }
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,&REFG(undefined, 0x11423fc))));
        (*(int * PTR32 *)(gen_frame + 0x100)) = piVar2;
        if (piVar2 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
          piVar2[2] = piVar2[2] + 1;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xf4)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0xf4)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x60)),((char *)REFP(0x11423f0)));
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x60)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x60)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x64)))));
        if (piVar2 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
          piVar2[2] = piVar2[2] + 1;
        }
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0xcc)) = uVar4;
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xf0)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0xf0)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x50)),((char *)REFP(0x1142418)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x50)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x50)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x54)),uVar4);
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
        uVar4 = (*(uint *)(gen_frame + 0x108));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,uVar7 + (*(uint *)(gen_frame + 0x108)) * 4);
        iVar10 = 0;
        if (0 < (int)uVar4) {
          iVar9 = (*(uint *)(gen_frame + 0xcc)) + 2;
          do {
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10c)) + 0x4c))))((*(int * PTR32 *)(gen_frame + 0x10c)) GEN_EDX_ARG,iVar10);
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x50))))(piVar2 GEN_EDX_ARG,iVar9 - 2,uVar4);
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xe8)) + 0x4c))))((*(int * PTR32 *)(gen_frame + 0xe8)) GEN_EDX_ARG,iVar10);
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x50))))(piVar2 GEN_EDX_ARG,iVar9 - 1,uVar4);
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x104)) + 0x4c))))((*(int * PTR32 *)(gen_frame + 0x104)) GEN_EDX_ARG,iVar10);
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x50))))(piVar2 GEN_EDX_ARG,iVar9,uVar4);
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x100)) + 0x4c))))((*(int * PTR32 *)(gen_frame + 0x100)) GEN_EDX_ARG,iVar10);
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x50))))(piVar2 GEN_EDX_ARG,iVar9 + 1,uVar4);
            iVar10 = iVar10 + 1;
            iVar9 = iVar9 + 4;
          } while (iVar10 < (int)(*(uint *)(gen_frame + 0x108)));
        }
        *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
        piVar5 = piVar2 + 2;
        *piVar5 = *piVar5 - 1;
        if (*piVar5 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
        }
        if ((*(int * PTR32 *)(gen_frame + 0x100)) != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x100)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x100)) + 6))) - 1;
          piVar2 = (*(int * PTR32 *)(gen_frame + 0x100)) + 2;
          *piVar2 = *piVar2 - 1;
          if (*piVar2 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x100)))))((*(int * PTR32 *)(gen_frame + 0x100)) GEN_EDX_ARG,1);
          }
        }
        if ((*(int * PTR32 *)(gen_frame + 0x104)) != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x104)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x104)) + 6))) - 1;
          piVar2 = (*(int * PTR32 *)(gen_frame + 0x104)) + 2;
          *piVar2 = *piVar2 - 1;
          if (*piVar2 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x104)))))((*(int * PTR32 *)(gen_frame + 0x104)) GEN_EDX_ARG,1);
          }
        }
        piVar2 = (*(int * PTR32 *)(gen_frame + 0x10c));
        if ((*(int * PTR32 *)(gen_frame + 0xe8)) != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xe8)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xe8)) + 6))) - 1;
          piVar5 = (*(int * PTR32 *)(gen_frame + 0xe8)) + 2;
          *piVar5 = *piVar5 - 1;
          if (*piVar5 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xe8)))))((*(int * PTR32 *)(gen_frame + 0xe8)) GEN_EDX_ARG,1);
            piVar2 = (*(int * PTR32 *)(gen_frame + 0x10c));
          }
        }
LAB_00dc9f16: ;
        if (piVar2 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
          piVar5 = piVar2 + 2;
          *piVar5 = *piVar5 - 1;
          iVar10 = *piVar5;
LAB_00dca306: ;
          if (iVar10 != 0) goto switchD_00dc9b18_caseD_3;
          puVar8 = ((undefined4 *)GEN_TOP(*piVar2));
          goto LAB_00dca30a;
        }
        goto switchD_00dc9b18_caseD_3;
      case 0x80: ;
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xf8)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0xf8)) GEN_EDX_ARG,&REFG(undefined, 0x11423ec))));
        (*(int * PTR32 *)(gen_frame + 0x104)) = piVar5;
        if (piVar5 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
          piVar5[2] = piVar5[2] + 1;
        }
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,&REFG(undefined, 0x11423e8))));
        (*(int * PTR32 *)(gen_frame + 0x100)) = piVar5;
        if (piVar5 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
          piVar5[2] = piVar5[2] + 1;
        }
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,&REFG(undefined, 0x11423e4))));
        (*(int * PTR32 *)(gen_frame + 0xe8)) = piVar5;
        if (piVar5 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
          piVar5[2] = piVar5[2] + 1;
        }
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,&REFG(undefined, 0x11423e0))));
        (*(int * PTR32 *)(gen_frame + 0x10c)) = piVar2;
        if (piVar2 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
          piVar2[2] = piVar2[2] + 1;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xf4)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0xf4)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x40)),((char *)REFP(0x11423f0)));
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x40)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x44)))));
        if (piVar2 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
          piVar2[2] = piVar2[2] + 1;
        }
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0xcc)) = uVar4;
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xf0)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0xf0)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x30)),((char *)REFP(0x1142418)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x30)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x34)),uVar4);
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
        uVar4 = (*(uint *)(gen_frame + 0x108));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,uVar7 + (*(uint *)(gen_frame + 0x108)) * 4);
        iVar10 = 0;
        if (0 < (int)uVar4) {
          iVar9 = (*(uint *)(gen_frame + 0xcc)) + 2;
          do {
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x104)) + 0x4c))))((*(int * PTR32 *)(gen_frame + 0x104)) GEN_EDX_ARG,iVar10);
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x50))))(piVar2 GEN_EDX_ARG,iVar9 - 2,uVar4);
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x100)) + 0x4c))))((*(int * PTR32 *)(gen_frame + 0x100)) GEN_EDX_ARG,iVar10);
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x50))))(piVar2 GEN_EDX_ARG,iVar9 - 1,uVar4);
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xe8)) + 0x4c))))((*(int * PTR32 *)(gen_frame + 0xe8)) GEN_EDX_ARG,iVar10);
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x50))))(piVar2 GEN_EDX_ARG,iVar9,uVar4);
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10c)) + 0x4c))))((*(int * PTR32 *)(gen_frame + 0x10c)) GEN_EDX_ARG,iVar10);
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x50))))(piVar2 GEN_EDX_ARG,iVar9 + 1,uVar4);
            iVar10 = iVar10 + 1;
            iVar9 = iVar9 + 4;
          } while (iVar10 < (int)(*(uint *)(gen_frame + 0x108)));
        }
        *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
        piVar5 = piVar2 + 2;
        *piVar5 = *piVar5 - 1;
        if (*piVar5 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
        }
        if ((*(int * PTR32 *)(gen_frame + 0x10c)) != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x10c)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x10c)) + 6))) - 1;
          piVar2 = (*(int * PTR32 *)(gen_frame + 0x10c)) + 2;
          *piVar2 = *piVar2 - 1;
          if (*piVar2 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x10c)))))((*(int * PTR32 *)(gen_frame + 0x10c)) GEN_EDX_ARG,1);
          }
        }
        if ((*(int * PTR32 *)(gen_frame + 0xe8)) != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xe8)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xe8)) + 6))) - 1;
          piVar2 = (*(int * PTR32 *)(gen_frame + 0xe8)) + 2;
          *piVar2 = *piVar2 - 1;
          if (*piVar2 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xe8)))))((*(int * PTR32 *)(gen_frame + 0xe8)) GEN_EDX_ARG,1);
          }
        }
        if ((*(int * PTR32 *)(gen_frame + 0x100)) != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x100)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x100)) + 6))) - 1;
          piVar2 = (*(int * PTR32 *)(gen_frame + 0x100)) + 2;
          *piVar2 = *piVar2 - 1;
          if (*piVar2 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x100)))))((*(int * PTR32 *)(gen_frame + 0x100)) GEN_EDX_ARG,1);
          }
        }
        if ((*(int * PTR32 *)(gen_frame + 0x104)) == ((int *)GEN_TOP(0x0))) goto switchD_00dc9b18_caseD_3;
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x104)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x104)) + 6))) - 1;
        piVar2 = (*(int * PTR32 *)(gen_frame + 0x104)) + 2;
        *piVar2 = *piVar2 - 1;
        iVar10 = *piVar2;
        piVar2 = (*(int * PTR32 *)(gen_frame + 0x104));
        goto LAB_00dca306;
      }
      *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) - 1;
      piVar3 = piVar5 + 2;
      *piVar3 = *piVar3 - 1;
      if (*piVar3 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar5)))(piVar5 GEN_EDX_ARG,1);
      }
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
        piVar5 = piVar2 + 2;
        *piVar5 = *piVar5 - 1;
        if (*piVar5 == 0) {
          puVar8 = ((undefined4 *)GEN_TOP(*piVar2));
LAB_00dca30a: ;
          (*((code *)GEN_TOP(*puVar8)))(piVar2,1);
        }
      }
switchD_00dc9b18_caseD_3: ;
      *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xf0)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xf0)) + 6))) - 1;
      piVar2 = (*(int * PTR32 *)(gen_frame + 0xf0)) + 2;
      *piVar2 = *piVar2 - 1;
      if (*piVar2 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xf0)))))((*(int * PTR32 *)(gen_frame + 0xf0)) GEN_EDX_ARG,1);
      }
      *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xb8)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xb8)) + 6))) - 1;
      piVar2 = (*(int * PTR32 *)(gen_frame + 0xb8)) + 2;
      *piVar2 = *piVar2 - 1;
      if (*piVar2 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xb8)))))((*(int * PTR32 *)(gen_frame + 0xb8)) GEN_EDX_ARG,1);
      }
      iVar10 = (int)(*(int * PTR32 *)(gen_frame + 0xfc)) + 1;
      (*(int * PTR32 *)(gen_frame + 0xfc)) = ((int *)GEN_TOP(iVar10));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xc0)) + 0x14))))((*(int * PTR32 *)(gen_frame + 0xc0)) GEN_EDX_ARG);
    } while (iVar10 < (int)uVar4);
  }
  *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xd8)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xd8)) + 6))) - 1;
  piVar2 = (*(int * PTR32 *)(gen_frame + 0xd8)) + 2;
  *piVar2 = *piVar2 - 1;
  if (*piVar2 == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xd8)))))((*(int * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
  }
  *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xa8)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xa8)) + 6))) - 1;
  piVar2 = (*(int * PTR32 *)(gen_frame + 0xa8)) + 2;
  *piVar2 = *piVar2 - 1;
  if (*piVar2 == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xa8)))))((*(int * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG,1);
  }
  *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xc0)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xc0)) + 6))) - 1;
  piVar2 = (*(int * PTR32 *)(gen_frame + 0xc0)) + 2;
  *piVar2 = *piVar2 - 1;
  if (*piVar2 == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xc0)))))((*(int * PTR32 *)(gen_frame + 0xc0)) GEN_EDX_ARG,1);
  }
  *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xc8)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xc8)) + 6))) - 1;
  piVar2 = (*(int * PTR32 *)(gen_frame + 0xc8)) + 2;
  *piVar2 = *piVar2 - 1;
  if (*piVar2 == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xc8)))))((*(int * PTR32 *)(gen_frame + 0xc8)) GEN_EDX_ARG,1);
  }
  *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xf4)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xf4)) + 6))) - 1;
  piVar2 = (*(int * PTR32 *)(gen_frame + 0xf4)) + 2;
  *piVar2 = *piVar2 - 1;
  if (*piVar2 == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xf4)))))((*(int * PTR32 *)(gen_frame + 0xf4)) GEN_EDX_ARG,1);
  }
  *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xf8)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xf8)) + 6))) - 1;
  piVar2 = (*(int * PTR32 *)(gen_frame + 0xf8)) + 2;
  *piVar2 = *piVar2 - 1;
  if (*piVar2 == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xf8)))))((*(int * PTR32 *)(gen_frame + 0xf8)) GEN_EDX_ARG,1);
  }
  return uVar4;
}

/* ref: FUN_00dca470 */
GEN_LIB GEN_FRAME uint F_00dca470(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdca470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x10)),((char *)REFP(0x1134b70)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)))));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),((char *)REFP(0x11424c8)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)))));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x18)) = uVar4;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,uVar4);
  param_1 = ((undefined4 *)GEN_TOP(0x0));
  if (0 < (int)uVar4) {
    do {
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,param_1)));
      if (piVar6 != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)piVar6 + 6))) = *((short *)GEN_TOP(((int)piVar6 + 6))) + 1;
        piVar6[2] = piVar6[2] + 1;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),&REFG(undefined, 0x1135940));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x2c))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x38))))(piVar3 GEN_EDX_ARG,param_1,uVar4);
        *((short *)GEN_TOP(((int)piVar6 + 6))) = *((short *)GEN_TOP(((int)piVar6 + 6))) - 1;
        piVar1 = piVar6 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar6)))(piVar6 GEN_EDX_ARG,1);
        }
      }
      uVar5 = (int)param_1 + 1;
      param_1 = ((undefined4 *)GEN_TOP(uVar5));
    } while ((int)uVar5 < (int)(*(uint *)(gen_frame + 0x18)));
  }
  *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
  piVar6 = piVar3 + 2;
  *piVar6 = *piVar6 - 1;
  if (*piVar6 == 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
  }
  *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 - 1;
  if (*piVar3 == 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
  }
  return uVar5;
}

/* ref: FUN_00dca5a0 */
GEN_LIB GEN_FRAME uint F_00dca5a0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdca5a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),((char *)REFP(0x11424e4)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)))));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x11424d4)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x10)) = uVar4;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,uVar4);
  param_1 = ((undefined4 *)GEN_TOP(0x0));
  if (0 < (int)uVar4) {
    do {
      puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,param_1)));
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) + 1;
        puVar6[2] = puVar6[2] + 1;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x60))))(piVar3 GEN_EDX_ARG,param_1,puVar6);
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) - 1;
        piVar1 = puVar6 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
        }
      }
      uVar5 = (int)param_1 + 1;
      param_1 = ((undefined4 *)GEN_TOP(uVar5));
    } while ((int)uVar5 < (int)(*(uint *)(gen_frame + 0x10)));
  }
  *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
  }
  *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 - 1;
  if (*piVar3 == 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
  }
  return uVar5;
}

/* ref: FUN_00dca6c0 */
GEN_LIB GEN_FRAME uint F_00dca6c0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdca6c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),((char *)REFP(0x1142508)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)))));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x11424f8)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x10)) = uVar4;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,uVar4);
  param_1 = ((undefined4 *)GEN_TOP(0x0));
  if (0 < (int)uVar4) {
    do {
      puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,param_1)));
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) + 1;
        puVar6[2] = puVar6[2] + 1;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x60))))(piVar3 GEN_EDX_ARG,param_1,puVar6);
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) - 1;
        piVar1 = puVar6 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
        }
      }
      uVar5 = (int)param_1 + 1;
      param_1 = ((undefined4 *)GEN_TOP(uVar5));
    } while ((int)uVar5 < (int)(*(uint *)(gen_frame + 0x10)));
  }
  *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
  }
  *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 - 1;
  if (*piVar3 == 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
  }
  return uVar5;
}

/* ref: FUN_00dca7e0 */
GEN_LIB GEN_FRAME uint F_00dca7e0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdca7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),((char *)REFP(0x114251c)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)))));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x113b9a0)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x10)) = uVar4;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,uVar4);
  param_1 = ((undefined4 *)GEN_TOP(0x0));
  if (0 < (int)uVar4) {
    do {
      puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,param_1)));
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) + 1;
        puVar6[2] = puVar6[2] + 1;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x60))))(piVar3 GEN_EDX_ARG,param_1,puVar6);
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) - 1;
        piVar1 = puVar6 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
        }
      }
      uVar5 = (int)param_1 + 1;
      param_1 = ((undefined4 *)GEN_TOP(uVar5));
    } while ((int)uVar5 < (int)(*(uint *)(gen_frame + 0x10)));
  }
  *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
  }
  *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 - 1;
  if (*piVar3 == 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
  }
  return uVar5;
}

/* ref: FUN_00dca900 */
GEN_LIB GEN_FRAME uint F_00dca900(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdca900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  float10 extraout_ST0;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(param_1)) + 0xc))))(*((int * PTR32 *)GEN_TOP(param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),&REFG(undefined, 0x1142538));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)))));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(param_1)) + 0xc))))(*((int * PTR32 *)GEN_TOP(param_1)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x1142530)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  iVar5 = 0;
  do {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x3c))))(piVar2,iVar5);
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x50))))
                      (piVar3 GEN_EDX_ARG,iVar5,(int)gen_fl2bits((float)extraout_ST0) >> 0x10 & 0xffff);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
  }
  *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 - 1;
  if (*piVar3 == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
  }
  return uVar4;
}

/* ref: FUN_00dca9d0 */
GEN_LIB GEN_FRAME uint F_00dca9d0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdca9d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if ((REFG(undefined4, 0x15e2320) & 1) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x13532e0) = &REFG(undefined, 0x1138ca0);
  }
  if ((REFG(undefined4, 0x15e2320) & 2) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 2;
    *(undefined4 *)&REFG(undefined, 0x15e2308) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e230c) = ((char *)REFP(0x11392a0));
    *(undefined4 *)&REFG(undefined, 0x15e2310) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e2314) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2318) = &REFG(undefined, 0x1144a34);
    *(undefined4 *)&REFG(undefined, 0x15e231c) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e2308));
  if ((REFG(undefined4, 0x15e2320) & 4) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 4;
    *(undefined4 *)&REFG(undefined, 0x15e22f0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e22f4) = ((char *)REFP(0x1139b08));
    *(undefined4 *)&REFG(undefined, 0x15e22f8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e22fc) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2300) = &REFG(undefined, 0x1144a24);
    *(undefined4 *)&REFG(undefined, 0x15e2304) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e22f0));
  if ((REFG(undefined4, 0x15e2320) & 8) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 8;
    *(undefined4 *)&REFG(undefined, 0x15e22d8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e22dc) = ((char *)REFP(0x11399f8));
    *(undefined4 *)&REFG(undefined, 0x15e22e0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e22e4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e22e8) = &REFG(undefined, 0x11449fc);
    *(undefined4 *)&REFG(undefined, 0x15e22ec) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e22d8));
  if ((REFG(undefined4, 0x15e2320) & 0x10) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x10;
    *(undefined4 *)&REFG(undefined, 0x15e22c0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e22c4) = ((char *)REFP(0x11449e8));
    *(undefined4 *)&REFG(undefined, 0x15e22c8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e22cc) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e22d0) = &REFG(undefined, 0x11449c8);
    *(undefined4 *)&REFG(undefined, 0x15e22d4) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e22c0));
  if ((REFG(undefined4, 0x15e2320) & 0x20) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x20;
    *(undefined4 *)&REFG(undefined, 0x15e22a8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e22ac) = ((char *)REFP(0x1139b68));
    *(undefined4 *)&REFG(undefined, 0x15e22b0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e22b4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e22b8) = &REFG(undefined, 0x11449b8);
    *(undefined4 *)&REFG(undefined, 0x15e22bc) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e22a8));
  if ((REFG(undefined4, 0x15e2320) & 0x40) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x40;
    *(undefined4 *)&REFG(undefined, 0x15e2290) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e2294) = ((char *)REFP(0x11399c8));
    *(undefined4 *)&REFG(undefined, 0x15e2298) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e229c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e22a0) = &REFG(undefined, 0x1144990);
    *(undefined4 *)&REFG(undefined, 0x15e22a4) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e2290));
  if ((REFG(undefined4, 0x15e2320) & 0x80) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x80;
    *(undefined4 *)&REFG(undefined, 0x15e2278) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e227c) = ((char *)REFP(0x1139b98));
    *(undefined4 *)&REFG(undefined, 0x15e2280) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e2284) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2288) = &REFG(undefined, 0x1144980);
    *(undefined4 *)&REFG(undefined, 0x15e228c) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e2278));
  if ((REFG(undefined4, 0x15e2320) & 0x100) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x100;
    *(undefined4 *)&REFG(undefined, 0x15e2260) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e2264) = ((char *)REFP(0x1139ae4));
    *(undefined4 *)&REFG(undefined, 0x15e2268) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e226c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2270) = &REFG(undefined, 0x1144970);
    *(undefined4 *)&REFG(undefined, 0x15e2274) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e2260));
  if ((REFG(undefined4, 0x15e2320) & 0x200) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x200;
    *(undefined4 *)&REFG(undefined, 0x15e2248) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e224c) = ((char *)REFP(0x1139b38));
    *(undefined4 *)&REFG(undefined, 0x15e2250) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e2254) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2258) = &REFG(undefined, 0x1144960);
    *(undefined4 *)&REFG(undefined, 0x15e225c) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e2248));
  if ((REFG(undefined4, 0x15e2320) & 0x400) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x400;
    *(undefined4 *)&REFG(undefined, 0x15e2230) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e2234) = ((char *)REFP(0x1144954));
    *(undefined4 *)&REFG(undefined, 0x15e2238) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e223c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2240) = &REFG(undefined, 0x1144934);
    *(undefined4 *)&REFG(undefined, 0x15e2244) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e2230));
  if ((REFG(undefined4, 0x15e2320) & 0x800) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x800;
    *(undefined4 *)&REFG(undefined, 0x15e2218) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e221c) = ((char *)REFP(0x1139a84));
    *(undefined4 *)&REFG(undefined, 0x15e2220) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e2224) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2228) = &REFG(undefined, 0x1144914);
    *(undefined4 *)&REFG(undefined, 0x15e222c) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e2218));
  if ((REFG(undefined4, 0x15e2320) & 0x1000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x1000;
    *(undefined4 *)&REFG(undefined, 0x15e2200) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e2204) = ((char *)REFP(0x1144900));
    *(undefined4 *)&REFG(undefined, 0x15e2208) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e220c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2210) = &REFG(undefined, 0x1144898);
    *(undefined4 *)&REFG(undefined, 0x15e2214) = 0xc;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e2200));
  if ((REFG(undefined4, 0x15e2320) & 0x2000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x2000;
    *(undefined4 *)&REFG(undefined, 0x15e21e8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e21ec) = ((char *)REFP(0x1139a64));
    *(undefined4 *)&REFG(undefined, 0x15e21f0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e21f4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e21f8) = &REFG(undefined, 0x114485c);
    *(undefined4 *)&REFG(undefined, 0x15e21fc) = 6;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e21e8));
  if ((REFG(undefined4, 0x15e2320) & 0x4000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x4000;
    *(undefined4 *)&REFG(undefined, 0x15e21d0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e21d4) = ((char *)REFP(0x1139bd0));
    *(undefined4 *)&REFG(undefined, 0x15e21d8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e21dc) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e21e0) = &REFG(undefined, 0x114484c);
    *(undefined4 *)&REFG(undefined, 0x15e21e4) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e21d0));
  if ((REFG(undefined4, 0x15e2320) & 0x8000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x8000;
    *(undefined4 *)&REFG(undefined, 0x15e21b8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e21bc) = ((char *)REFP(0x1144838));
    *(undefined4 *)&REFG(undefined, 0x15e21c0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e21c4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e21c8) = &REFG(undefined, 0x11447e8);
    *(undefined4 *)&REFG(undefined, 0x15e21cc) = 9;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e21b8));
  if ((REFG(undefined4, 0x15e2320) & 0x10000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x10000;
    *(undefined4 *)&REFG(undefined, 0x15e21a0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e21a4) = ((char *)REFP(0x11447d8));
    *(undefined4 *)&REFG(undefined, 0x15e21a8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e21ac) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e21b0) = &REFG(undefined, 0x11447b8);
    *(undefined4 *)&REFG(undefined, 0x15e21b4) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e21a0));
  if ((REFG(undefined4, 0x15e2320) & 0x20000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x20000;
    *(undefined4 *)&REFG(undefined, 0x15e2188) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e218c) = ((char *)REFP(0x11447a8));
    *(undefined4 *)&REFG(undefined, 0x15e2190) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e2194) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2198) = &REFG(undefined, 0x1144730);
    *(undefined4 *)&REFG(undefined, 0x15e219c) = 0xe;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e2188));
  if ((REFG(undefined4, 0x15e2320) & 0x40000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x40000;
    *(undefined4 *)&REFG(undefined, 0x15e2170) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e2174) = ((char *)REFP(0x1139aac));
    *(undefined4 *)&REFG(undefined, 0x15e2178) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e217c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2180) = &REFG(undefined, 0x114471c);
    *(undefined4 *)&REFG(undefined, 0x15e2184) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e2170));
  if ((REFG(undefined4, 0x15e2320) & 0x80000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x80000;
    *(undefined4 *)&REFG(undefined, 0x15e2158) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e215c) = ((char *)REFP(0x113c3d4));
    *(undefined4 *)&REFG(undefined, 0x15e2160) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e2164) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2168) = &REFG(undefined, 0x114470c);
    *(undefined4 *)&REFG(undefined, 0x15e216c) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e2158));
  if ((REFG(undefined4, 0x15e2320) & 0x100000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x100000;
    *(char * PTR32 *)&REFG(undefined, 0x15e2140) = ((char *)REFP(0x11392c8));
    *(char * PTR32 *)&REFG(undefined, 0x15e2144) = ((char *)REFP(0x11392c8));
    *(undefined4 *)&REFG(undefined, 0x15e2148) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e214c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2150) = &REFG(undefined, 0x11446f4);
    *(undefined4 *)&REFG(undefined, 0x15e2154) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e2140));
  if ((REFG(undefined4, 0x15e2320) & 0x200000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x200000;
    *(undefined4 *)&REFG(undefined, 0x15e2128) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e212c) = ((char *)REFP(0x11446d8));
    *(undefined4 *)&REFG(undefined, 0x15e2130) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e2134) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2138) = &REFG(undefined, 0x1144688);
    *(undefined4 *)&REFG(undefined, 0x15e213c) = 9;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e2128));
  if ((REFG(undefined4, 0x15e2320) & 0x400000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x400000;
    *(char * PTR32 *)&REFG(undefined, 0x15e2110) = ((char *)REFP(0x1144674));
    *(char * PTR32 *)&REFG(undefined, 0x15e2114) = ((char *)REFP(0x1144674));
    *(undefined4 *)&REFG(undefined, 0x15e2118) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e211c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2120) = &REFG(undefined, 0x1144654);
    *(undefined4 *)&REFG(undefined, 0x15e2124) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e2110));
  if ((REFG(undefined4, 0x15e2320) & 0x800000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x800000;
    *(char * PTR32 *)&REFG(undefined, 0x15e20f8) = ((char *)REFP(0x1144638));
    *(char * PTR32 *)&REFG(undefined, 0x15e20fc) = ((char *)REFP(0x1144638));
    *(undefined4 *)&REFG(undefined, 0x15e2100) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e2104) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2108) = &REFG(undefined, 0x1144618);
    *(undefined4 *)&REFG(undefined, 0x15e210c) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e20f8));
  if ((REFG(undefined4, 0x15e2320) & 0x1000000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x1000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e20e0) = ((char *)REFP(0x1144604));
    *(char * PTR32 *)&REFG(undefined, 0x15e20e4) = ((char *)REFP(0x1144604));
    *(undefined4 *)&REFG(undefined, 0x15e20e8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e20ec) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e20f0) = &REFG(undefined, 0x11445e4);
    *(undefined4 *)&REFG(undefined, 0x15e20f4) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e20e0));
  if ((REFG(undefined4, 0x15e2320) & 0x2000000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x2000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e20c8) = ((char *)REFP(0x11445d0));
    *(char * PTR32 *)&REFG(undefined, 0x15e20cc) = ((char *)REFP(0x11445d0));
    *(undefined4 *)&REFG(undefined, 0x15e20d0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e20d4) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e20d8) = &REFG(undefined, 0x11445b0);
    *(undefined4 *)&REFG(undefined, 0x15e20dc) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e20c8));
  if ((REFG(undefined4, 0x15e2320) & 0x4000000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x4000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e20b0) = ((char *)REFP(0x1144598));
    *(char * PTR32 *)&REFG(undefined, 0x15e20b4) = ((char *)REFP(0x1144598));
    *(undefined4 *)&REFG(undefined, 0x15e20b8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e20bc) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e20c0) = &REFG(undefined, 0x1144578);
    *(undefined4 *)&REFG(undefined, 0x15e20c4) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e20b0));
  if ((REFG(undefined4, 0x15e2320) & 0x8000000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x8000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e2098) = ((char *)REFP(0x1144560));
    *(char * PTR32 *)&REFG(undefined, 0x15e209c) = ((char *)REFP(0x1144560));
    *(undefined4 *)&REFG(undefined, 0x15e20a0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e20a4) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e20a8) = &REFG(undefined, 0x1144540);
    *(undefined4 *)&REFG(undefined, 0x15e20ac) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e2098));
  if ((REFG(undefined4, 0x15e2320) & 0x10000000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x10000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e2080) = ((char *)REFP(0x1144528));
    *(char * PTR32 *)&REFG(undefined, 0x15e2084) = ((char *)REFP(0x1144528));
    *(undefined4 *)&REFG(undefined, 0x15e2088) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e208c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2090) = &REFG(undefined, 0x1144508);
    *(undefined4 *)&REFG(undefined, 0x15e2094) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e2080));
  if ((REFG(undefined4, 0x15e2320) & 0x20000000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x20000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e2068) = ((char *)REFP(0x11444ec));
    *(char * PTR32 *)&REFG(undefined, 0x15e206c) = ((char *)REFP(0x11444ec));
    *(undefined4 *)&REFG(undefined, 0x15e2070) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e2074) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2078) = &REFG(undefined, 0x11444cc);
    *(undefined4 *)&REFG(undefined, 0x15e207c) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e2068));
  if ((REFG(undefined4, 0x15e2320) & 0x40000000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x40000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e2050) = ((char *)REFP(0x11444b0));
    *(char * PTR32 *)&REFG(undefined, 0x15e2054) = ((char *)REFP(0x11444b0));
    *(undefined4 *)&REFG(undefined, 0x15e2058) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e205c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2060) = &REFG(undefined, 0x1144490);
    *(undefined4 *)&REFG(undefined, 0x15e2064) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e2050));
  if ((REFG(undefined4, 0x15e2320) & 0x80000000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x80000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e2038) = ((char *)REFP(0x1144478));
    *(char * PTR32 *)&REFG(undefined, 0x15e203c) = ((char *)REFP(0x1144478));
    *(undefined4 *)&REFG(undefined, 0x15e2040) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e2044) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2048) = &REFG(undefined, 0x1144458);
    *(undefined4 *)&REFG(undefined, 0x15e204c) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e2038));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 1;
    *(char * PTR32 *)&REFG(undefined, 0x15e201c) = ((char *)REFP(0x1144440));
    *(char * PTR32 *)&REFG(undefined, 0x15e2020) = ((char *)REFP(0x1144440));
    *(undefined4 *)&REFG(undefined, 0x15e2024) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e2028) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e202c) = &REFG(undefined, 0x1144420);
    *(undefined4 *)&REFG(undefined, 0x15e2030) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e201c));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 2;
    *(char * PTR32 *)&REFG(undefined, 0x15e2004) = ((char *)REFP(0x1144408));
    *(char * PTR32 *)&REFG(undefined, 0x15e2008) = ((char *)REFP(0x1144408));
    *(undefined4 *)&REFG(undefined, 0x15e200c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e2010) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2014) = &REFG(undefined, 0x11443e8);
    *(undefined4 *)&REFG(undefined, 0x15e2018) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e2004));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 4;
    *(char * PTR32 *)&REFG(undefined, 0x15e1fec) = ((char *)REFP(0x1139a64));
    *(char * PTR32 *)&REFG(undefined, 0x15e1ff0) = ((char *)REFP(0x1139a64));
    *(undefined4 *)&REFG(undefined, 0x15e1ff4) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1ff8) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1ffc) = &REFG(undefined, 0x11443d8);
    *(undefined4 *)&REFG(undefined, 0x15e2000) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1fec));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 8) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 8;
    *(char * PTR32 *)&REFG(undefined, 0x15e1fd4) = ((char *)REFP(0x113c3d4));
    *(undefined4 *)&REFG(undefined, 0x15e1fd8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1fdc) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1fe0) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1fe4) = &REFG(undefined, 0x11443c8);
    *(undefined4 *)&REFG(undefined, 0x15e1fe8) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1fd4));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x10) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x10;
    *(char * PTR32 *)&REFG(undefined, 0x15e1fbc) = ((char *)REFP(0x1139a64));
    *(char * PTR32 *)&REFG(undefined, 0x15e1fc0) = ((char *)REFP(0x1139a64));
    *(undefined4 *)&REFG(undefined, 0x15e1fc4) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1fc8) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1fcc) = &REFG(undefined, 0x11443b8);
    *(undefined4 *)&REFG(undefined, 0x15e1fd0) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1fbc));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x20) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x20;
    *(undefined4 *)&REFG(undefined, 0x15e1fa4) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1fa8) = ((char *)REFP(0x113a434));
    *(undefined4 *)&REFG(undefined, 0x15e1fac) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1fb0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1fb4) = &REFG(undefined, 0x1144398);
    *(undefined4 *)&REFG(undefined, 0x15e1fb8) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1fa4));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x40) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x40;
    *(undefined4 *)&REFG(undefined, 0x15e1f8c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1f90) = ((char *)REFP(0x113a408));
    *(undefined4 *)&REFG(undefined, 0x15e1f94) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1f98) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1f9c) = &REFG(undefined, 0x1144370);
    *(undefined4 *)&REFG(undefined, 0x15e1fa0) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1f8c));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x80) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x80;
    *(undefined4 *)&REFG(undefined, 0x15e1f74) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1f78) = ((char *)REFP(0x11424a0));
    *(undefined4 *)&REFG(undefined, 0x15e1f7c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1f80) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1f84) = &REFG(undefined, 0x1144310);
    *(undefined4 *)&REFG(undefined, 0x15e1f88) = 0xb;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1f74));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x100) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x100;
    *(char * PTR32 *)&REFG(undefined, 0x15e1f5c) = ((char *)REFP(0x11442f0));
    *(char * PTR32 *)&REFG(undefined, 0x15e1f60) = ((char *)REFP(0x11442f0));
    *(undefined4 *)&REFG(undefined, 0x15e1f64) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1f68) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1f6c) = &REFG(undefined, 0x11442e0);
    *(undefined4 *)&REFG(undefined, 0x15e1f70) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1f5c));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x200) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x200;
    *(char * PTR32 *)&REFG(undefined, 0x15e1f44) = ((char *)REFP(0x11442d0));
    *(char * PTR32 *)&REFG(undefined, 0x15e1f48) = ((char *)REFP(0x11442d0));
    *(undefined4 *)&REFG(undefined, 0x15e1f4c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1f50) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1f54) = &REFG(undefined, 0x1144288);
    *(undefined4 *)&REFG(undefined, 0x15e1f58) = 8;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1f44));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x400) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x400;
    *(char * PTR32 *)&REFG(undefined, 0x15e1f2c) = ((char *)REFP(0x1142468));
    *(char * PTR32 *)&REFG(undefined, 0x15e1f30) = ((char *)REFP(0x1142468));
    *(undefined4 *)&REFG(undefined, 0x15e1f34) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1f38) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1f3c) = &REFG(undefined, 0x1144274);
    *(undefined4 *)&REFG(undefined, 0x15e1f40) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1f2c));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x800) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x800;
    *(undefined4 *)&REFG(undefined, 0x15e1f14) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1f18) = ((char *)REFP(0x114426c));
    *(undefined4 *)&REFG(undefined, 0x15e1f1c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1f20) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1f24) = &REFG(undefined, 0x114423c);
    *(undefined4 *)&REFG(undefined, 0x15e1f28) = 5;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1f14));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x1000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x1000;
    *(undefined4 *)&REFG(undefined, 0x15e1efc) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1f00) = ((char *)REFP(0x1144230));
    *(undefined4 *)&REFG(undefined, 0x15e1f04) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1f08) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1f0c) = &REFG(undefined, 0x1144218);
    *(undefined4 *)&REFG(undefined, 0x15e1f10) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1efc));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x2000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x2000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1ee4) = ((char *)REFP(0x1144674));
    *(undefined4 *)&REFG(undefined, 0x15e1ee8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1eec) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1ef0) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1ef4) = &REFG(undefined, 0x11441a0);
    *(undefined4 *)&REFG(undefined, 0x15e1ef8) = 0xe;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1ee4));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x4000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x4000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1ecc) = ((char *)REFP(0x1144190));
    *(undefined4 *)&REFG(undefined, 0x15e1ed0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1ed4) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1ed8) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1edc) = &REFG(undefined, 0x1144158);
    *(undefined4 *)&REFG(undefined, 0x15e1ee0) = 6;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1ecc));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x8000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x8000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1eb4) = ((char *)REFP(0x1144638));
    *(undefined4 *)&REFG(undefined, 0x15e1eb8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1ebc) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1ec0) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1ec4) = &REFG(undefined, 0x1144080);
    *(undefined4 *)&REFG(undefined, 0x15e1ec8) = 0x1a;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1eb4));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x10000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x10000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1e9c) = ((char *)REFP(0x1144604));
    *(undefined4 *)&REFG(undefined, 0x15e1ea0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1ea4) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1ea8) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1eac) = &REFG(undefined, 0x1144048);
    *(undefined4 *)&REFG(undefined, 0x15e1eb0) = 6;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1e9c));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x20000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x20000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1e84) = ((char *)REFP(0x11445d0));
    *(undefined4 *)&REFG(undefined, 0x15e1e88) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1e8c) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1e90) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1e94) = &REFG(undefined, 0x1143ff0);
    *(undefined4 *)&REFG(undefined, 0x15e1e98) = 10;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1e84));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x40000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x40000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1e6c) = ((char *)REFP(0x1144598));
    *(undefined4 *)&REFG(undefined, 0x15e1e70) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1e74) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1e78) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1e7c) = &REFG(undefined, 0x1143fa8);
    *(undefined4 *)&REFG(undefined, 0x15e1e80) = 8;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1e6c));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x80000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x80000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1e54) = ((char *)REFP(0x1144560));
    *(undefined4 *)&REFG(undefined, 0x15e1e58) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1e5c) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1e60) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1e64) = &REFG(undefined, 0x1143f40);
    *(undefined4 *)&REFG(undefined, 0x15e1e68) = 0xc;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1e54));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x100000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x100000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1e3c) = ((char *)REFP(0x1143f28));
    *(undefined4 *)&REFG(undefined, 0x15e1e40) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1e44) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1e48) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1e4c) = &REFG(undefined, 0x1143ee0);
    *(undefined4 *)&REFG(undefined, 0x15e1e50) = 8;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1e3c));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x200000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x200000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1e24) = ((char *)REFP(0x1143ec8));
    *(undefined4 *)&REFG(undefined, 0x15e1e28) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1e2c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1e30) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1e34) = &REFG(undefined, 0x1143e30);
    *(undefined4 *)&REFG(undefined, 0x15e1e38) = 0x12;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1e24));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x400000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x400000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1e0c) = ((char *)REFP(0x1144528));
    *(undefined4 *)&REFG(undefined, 0x15e1e10) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1e14) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1e18) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1e1c) = &REFG(undefined, 0x1143da8);
    *(undefined4 *)&REFG(undefined, 0x15e1e20) = 0x10;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1e0c));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x800000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x800000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1df4) = ((char *)REFP(0x1143d88));
    *(undefined4 *)&REFG(undefined, 0x15e1df8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1dfc) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1e00) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1e04) = &REFG(undefined, 0x1143d38);
    *(undefined4 *)&REFG(undefined, 0x15e1e08) = 9;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1df4));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x1000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x1000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1ddc) = ((char *)REFP(0x11444ec));
    *(undefined4 *)&REFG(undefined, 0x15e1de0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1de4) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1de8) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1dec) = &REFG(undefined, 0x1143ca0);
    *(undefined4 *)&REFG(undefined, 0x15e1df0) = 0x12;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1ddc));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x2000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x2000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1dc4) = ((char *)REFP(0x11444b0));
    *(undefined4 *)&REFG(undefined, 0x15e1dc8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1dcc) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1dd0) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1dd4) = &REFG(undefined, 0x1143be8);
    *(undefined4 *)&REFG(undefined, 0x15e1dd8) = 0x16;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1dc4));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x4000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x4000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1dac) = ((char *)REFP(0x1143bd0));
    *(undefined4 *)&REFG(undefined, 0x15e1db0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1db4) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1db8) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1dbc) = &REFG(undefined, 0x1143b90);
    *(undefined4 *)&REFG(undefined, 0x15e1dc0) = 7;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1dac));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x8000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x8000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1d94) = ((char *)REFP(0x1144478));
    *(undefined4 *)&REFG(undefined, 0x15e1d98) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1d9c) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1da0) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1da4) = &REFG(undefined, 0x1143b08);
    *(undefined4 *)&REFG(undefined, 0x15e1da8) = 0x10;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1d94));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x10000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x10000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1d7c) = ((char *)REFP(0x1144440));
    *(undefined4 *)&REFG(undefined, 0x15e1d80) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1d84) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1d88) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1d8c) = &REFG(undefined, 0x1143a60);
    *(undefined4 *)&REFG(undefined, 0x15e1d90) = 0x14;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1d7c));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x20000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x20000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1d64) = ((char *)REFP(0x1143a48));
    *(undefined4 *)&REFG(undefined, 0x15e1d68) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1d6c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1d70) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1d74) = &REFG(undefined, 0x1143a00);
    *(undefined4 *)&REFG(undefined, 0x15e1d78) = 8;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1d64));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x40000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x40000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1d4c) = ((char *)REFP(0x1144408));
    *(undefined4 *)&REFG(undefined, 0x15e1d50) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1d54) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1d58) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1d5c) = &REFG(undefined, 0x1143938);
    *(undefined4 *)&REFG(undefined, 0x15e1d60) = 0x18;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1d4c));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x80000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x80000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1d34) = ((char *)REFP(0x1143918));
    *(char * PTR32 *)&REFG(undefined, 0x15e1d38) = ((char *)REFP(0x1143918));
    *(undefined4 *)&REFG(undefined, 0x15e1d3c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1d40) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1d44) = &REFG(undefined, 0x11438f0);
    *(undefined4 *)&REFG(undefined, 0x15e1d48) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1d34));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 1;
    *(char * PTR32 *)&REFG(undefined, 0x15e1d18) = ((char *)REFP(0x11438cc));
    *(undefined4 *)&REFG(undefined, 0x15e1d1c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1d20) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1d24) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1d28) = &REFG(undefined, 0x11438bc);
    *(undefined4 *)&REFG(undefined, 0x15e1d2c) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1d18));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 2;
    *(char * PTR32 *)&REFG(undefined, 0x15e1d00) = ((char *)REFP(0x11438a8));
    *(undefined4 *)&REFG(undefined, 0x15e1d04) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1d08) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1d0c) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1d10) = &REFG(undefined, 0x1143840);
    *(undefined4 *)&REFG(undefined, 0x15e1d14) = 0xc;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1d00));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 4;
    *(char * PTR32 *)&REFG(undefined, 0x15e1ce8) = ((char *)REFP(0x1143828));
    *(undefined4 *)&REFG(undefined, 0x15e1cec) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1cf0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1cf4) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1cf8) = &REFG(undefined, 0x11437a0);
    *(undefined4 *)&REFG(undefined, 0x15e1cfc) = 0x10;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1ce8));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 8) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 8;
    *(char * PTR32 *)&REFG(undefined, 0x15e1cd0) = ((char *)REFP(0x114378c));
    *(char * PTR32 *)&REFG(undefined, 0x15e1cd4) = ((char *)REFP(0x114378c));
    *(undefined4 *)&REFG(undefined, 0x15e1cd8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1cdc) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1ce0) = &REFG(undefined, 0x114377c);
    *(undefined4 *)&REFG(undefined, 0x15e1ce4) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1cd0));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x10) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x10;
    *(char * PTR32 *)&REFG(undefined, 0x15e1cb8) = ((char *)REFP(0x114376c));
    *(char * PTR32 *)&REFG(undefined, 0x15e1cbc) = ((char *)REFP(0x114376c));
    *(undefined4 *)&REFG(undefined, 0x15e1cc0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1cc4) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1cc8) = &REFG(undefined, 0x114375c);
    *(undefined4 *)&REFG(undefined, 0x15e1ccc) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1cb8));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x20) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x20;
    *(char * PTR32 *)&REFG(undefined, 0x15e1ca0) = ((char *)REFP(0x1143744));
    *(char * PTR32 *)&REFG(undefined, 0x15e1ca4) = ((char *)REFP(0x1143744));
    *(undefined4 *)&REFG(undefined, 0x15e1ca8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1cac) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1cb0) = &REFG(undefined, 0x1143734);
    *(undefined4 *)&REFG(undefined, 0x15e1cb4) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1ca0));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x40) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x40;
    *(char * PTR32 *)&REFG(undefined, 0x15e1c88) = ((char *)REFP(0x1143720));
    *(char * PTR32 *)&REFG(undefined, 0x15e1c8c) = ((char *)REFP(0x1143720));
    *(undefined4 *)&REFG(undefined, 0x15e1c90) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1c94) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1c98) = &REFG(undefined, 0x1143710);
    *(undefined4 *)&REFG(undefined, 0x15e1c9c) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1c88));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x80) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x80;
    *(char * PTR32 *)&REFG(undefined, 0x15e1c70) = ((char *)REFP(0x1143700));
    *(char * PTR32 *)&REFG(undefined, 0x15e1c74) = ((char *)REFP(0x1143700));
    *(undefined4 *)&REFG(undefined, 0x15e1c78) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1c7c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1c80) = &REFG(undefined, 0x11436f0);
    *(undefined4 *)&REFG(undefined, 0x15e1c84) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1c70));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x100) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x100;
    *(char * PTR32 *)&REFG(undefined, 0x15e1c58) = ((char *)REFP(0x11436d8));
    *(char * PTR32 *)&REFG(undefined, 0x15e1c5c) = ((char *)REFP(0x11436d8));
    *(undefined4 *)&REFG(undefined, 0x15e1c60) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1c64) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1c68) = &REFG(undefined, 0x11436c8);
    *(undefined4 *)&REFG(undefined, 0x15e1c6c) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1c58));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x200) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x200;
    *(char * PTR32 *)&REFG(undefined, 0x15e1c40) = ((char *)REFP(0x11436bc));
    *(char * PTR32 *)&REFG(undefined, 0x15e1c44) = ((char *)REFP(0x11436bc));
    *(undefined4 *)&REFG(undefined, 0x15e1c48) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1c4c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1c50) = &REFG(undefined, 0x11436ac);
    *(undefined4 *)&REFG(undefined, 0x15e1c54) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1c40));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x400) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x400;
    *(char * PTR32 *)&REFG(undefined, 0x15e1c28) = ((char *)REFP(0x1143918));
    *(char * PTR32 *)&REFG(undefined, 0x15e1c2c) = ((char *)REFP(0x1143918));
    *(undefined4 *)&REFG(undefined, 0x15e1c30) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1c34) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1c38) = &REFG(undefined, 0x114369c);
    *(undefined4 *)&REFG(undefined, 0x15e1c3c) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1c28));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x800) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x800;
    *(char * PTR32 *)&REFG(undefined, 0x15e1c10) = ((char *)REFP(0x1143684));
    *(char * PTR32 *)&REFG(undefined, 0x15e1c14) = ((char *)REFP(0x1143684));
    *(undefined4 *)&REFG(undefined, 0x15e1c18) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1c1c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1c20) = &REFG(undefined, 0x1143674);
    *(undefined4 *)&REFG(undefined, 0x15e1c24) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1c10));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x1000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x1000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1bf8) = ((char *)REFP(0x114365c));
    *(char * PTR32 *)&REFG(undefined, 0x15e1bfc) = ((char *)REFP(0x114365c));
    *(undefined4 *)&REFG(undefined, 0x15e1c00) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1c04) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1c08) = &REFG(undefined, 0x114364c);
    *(undefined4 *)&REFG(undefined, 0x15e1c0c) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1bf8));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x2000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x2000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1be0) = ((char *)REFP(0x1143644));
    *(char * PTR32 *)&REFG(undefined, 0x15e1be4) = ((char *)REFP(0x1143644));
    *(undefined4 *)&REFG(undefined, 0x15e1be8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1bec) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1bf0) = &REFG(undefined, 0x1143634);
    *(undefined4 *)&REFG(undefined, 0x15e1bf4) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1be0));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x4000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x4000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1bc8) = ((char *)REFP(0x1143620));
    *(char * PTR32 *)&REFG(undefined, 0x15e1bcc) = ((char *)REFP(0x1143620));
    *(undefined4 *)&REFG(undefined, 0x15e1bd0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1bd4) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1bd8) = &REFG(undefined, 0x1143610);
    *(undefined4 *)&REFG(undefined, 0x15e1bdc) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1bc8));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x8000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x8000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1bb0) = ((char *)REFP(0x11435f4));
    *(char * PTR32 *)&REFG(undefined, 0x15e1bb4) = ((char *)REFP(0x11435f4));
    *(undefined4 *)&REFG(undefined, 0x15e1bb8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1bbc) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1bc0) = &REFG(undefined, 0x11435e4);
    *(undefined4 *)&REFG(undefined, 0x15e1bc4) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1bb0));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x10000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x10000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1b98) = ((char *)REFP(0x11435cc));
    *(char * PTR32 *)&REFG(undefined, 0x15e1b9c) = ((char *)REFP(0x11435cc));
    *(undefined4 *)&REFG(undefined, 0x15e1ba0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1ba4) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1ba8) = &REFG(undefined, 0x11435a4);
    *(undefined4 *)&REFG(undefined, 0x15e1bac) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1b98));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x20000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x20000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1b80) = ((char *)REFP(0x114358c));
    *(char * PTR32 *)&REFG(undefined, 0x15e1b84) = ((char *)REFP(0x114358c));
    *(undefined4 *)&REFG(undefined, 0x15e1b88) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1b8c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1b90) = &REFG(undefined, 0x114357c);
    *(undefined4 *)&REFG(undefined, 0x15e1b94) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1b80));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x40000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x40000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1b68) = ((char *)REFP(0x1143560));
    *(char * PTR32 *)&REFG(undefined, 0x15e1b6c) = ((char *)REFP(0x1143560));
    *(undefined4 *)&REFG(undefined, 0x15e1b70) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1b74) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1b78) = &REFG(undefined, 0x1143550);
    *(undefined4 *)&REFG(undefined, 0x15e1b7c) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1b68));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x80000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x80000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1b50) = ((char *)REFP(0x1143538));
    *(char * PTR32 *)&REFG(undefined, 0x15e1b54) = ((char *)REFP(0x1143538));
    *(undefined4 *)&REFG(undefined, 0x15e1b58) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1b5c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1b60) = &REFG(undefined, 0x1143528);
    *(undefined4 *)&REFG(undefined, 0x15e1b64) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1b50));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x100000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x100000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1b38) = ((char *)REFP(0x114350c));
    *(char * PTR32 *)&REFG(undefined, 0x15e1b3c) = ((char *)REFP(0x114350c));
    *(undefined4 *)&REFG(undefined, 0x15e1b40) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1b44) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1b48) = &REFG(undefined, 0x11434fc);
    *(undefined4 *)&REFG(undefined, 0x15e1b4c) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1b38));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x200000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x200000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1b20) = ((char *)REFP(0x11434ec));
    *(char * PTR32 *)&REFG(undefined, 0x15e1b24) = ((char *)REFP(0x11434ec));
    *(undefined4 *)&REFG(undefined, 0x15e1b28) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1b2c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1b30) = &REFG(undefined, 0x11434dc);
    *(undefined4 *)&REFG(undefined, 0x15e1b34) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1b20));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x400000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x400000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1b08) = ((char *)REFP(0x11434d0));
    *(char * PTR32 *)&REFG(undefined, 0x15e1b0c) = ((char *)REFP(0x11434d0));
    *(undefined4 *)&REFG(undefined, 0x15e1b10) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1b14) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1b18) = &REFG(undefined, 0x11434c0);
    *(undefined4 *)&REFG(undefined, 0x15e1b1c) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1b08));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x800000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x800000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1af0) = ((char *)REFP(0x11434ac));
    *(char * PTR32 *)&REFG(undefined, 0x15e1af4) = ((char *)REFP(0x11434ac));
    *(undefined4 *)&REFG(undefined, 0x15e1af8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1afc) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1b00) = &REFG(undefined, 0x114349c);
    *(undefined4 *)&REFG(undefined, 0x15e1b04) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1af0));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x1000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x1000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1ad8) = ((char *)REFP(0x1143488));
    *(char * PTR32 *)&REFG(undefined, 0x15e1adc) = ((char *)REFP(0x1143488));
    *(undefined4 *)&REFG(undefined, 0x15e1ae0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1ae4) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1ae8) = &REFG(undefined, 0x1143478);
    *(undefined4 *)&REFG(undefined, 0x15e1aec) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1ad8));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x2000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x2000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1ac0) = ((char *)REFP(0x11446d8));
    *(char * PTR32 *)&REFG(undefined, 0x15e1ac4) = ((char *)REFP(0x11446d8));
    *(undefined4 *)&REFG(undefined, 0x15e1ac8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1acc) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1ad0) = &REFG(undefined, 0x1143460);
    *(undefined4 *)&REFG(undefined, 0x15e1ad4) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1ac0));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x4000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x4000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1aa8) = ((char *)REFP(0x114344c));
    *(char * PTR32 *)&REFG(undefined, 0x15e1aac) = ((char *)REFP(0x114344c));
    *(undefined4 *)&REFG(undefined, 0x15e1ab0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1ab4) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1ab8) = &REFG(undefined, 0x114343c);
    *(undefined4 *)&REFG(undefined, 0x15e1abc) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1aa8));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x8000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x8000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1a90) = ((char *)REFP(0x114342c));
    *(char * PTR32 *)&REFG(undefined, 0x15e1a94) = ((char *)REFP(0x114342c));
    *(undefined4 *)&REFG(undefined, 0x15e1a98) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1a9c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1aa0) = &REFG(undefined, 0x114341c);
    *(undefined4 *)&REFG(undefined, 0x15e1aa4) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1a90));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x10000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x10000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1a78) = ((char *)REFP(0x1143410));
    *(char * PTR32 *)&REFG(undefined, 0x15e1a7c) = ((char *)REFP(0x1143410));
    *(undefined4 *)&REFG(undefined, 0x15e1a80) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1a84) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1a88) = &REFG(undefined, 0x1143400);
    *(undefined4 *)&REFG(undefined, 0x15e1a8c) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1a78));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x20000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x20000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1a60) = ((char *)REFP(0x11433e4));
    *(char * PTR32 *)&REFG(undefined, 0x15e1a64) = ((char *)REFP(0x11433e4));
    *(undefined4 *)&REFG(undefined, 0x15e1a68) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1a6c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1a70) = &REFG(undefined, 0x11433d4);
    *(undefined4 *)&REFG(undefined, 0x15e1a74) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1a60));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x40000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x40000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1a48) = ((char *)REFP(0x11433c0));
    *(char * PTR32 *)&REFG(undefined, 0x15e1a4c) = ((char *)REFP(0x11433c0));
    *(undefined4 *)&REFG(undefined, 0x15e1a50) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1a54) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1a58) = &REFG(undefined, 0x11433b0);
    *(undefined4 *)&REFG(undefined, 0x15e1a5c) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1a48));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x80000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x80000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1a30) = ((char *)REFP(0x114338c));
    *(char * PTR32 *)&REFG(undefined, 0x15e1a34) = ((char *)REFP(0x114338c));
    *(undefined4 *)&REFG(undefined, 0x15e1a38) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1a3c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1a40) = &REFG(undefined, 0x1143374);
    *(undefined4 *)&REFG(undefined, 0x15e1a44) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1a30));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 1;
    *(char * PTR32 *)&REFG(undefined, 0x15e1a14) = ((char *)REFP(0x114335c));
    *(char * PTR32 *)&REFG(undefined, 0x15e1a18) = ((char *)REFP(0x114335c));
    *(undefined4 *)&REFG(undefined, 0x15e1a1c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1a20) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1a24) = &REFG(undefined, 0x114334c);
    *(undefined4 *)&REFG(undefined, 0x15e1a28) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1a14));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 2;
    *(char * PTR32 *)&REFG(undefined, 0x15e19fc) = ((char *)REFP(0x1143330));
    *(char * PTR32 *)&REFG(undefined, 0x15e1a00) = ((char *)REFP(0x1143330));
    *(undefined4 *)&REFG(undefined, 0x15e1a04) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1a08) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1a0c) = &REFG(undefined, 0x1143320);
    *(undefined4 *)&REFG(undefined, 0x15e1a10) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e19fc));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 4;
    *(char * PTR32 *)&REFG(undefined, 0x15e19e4) = ((char *)REFP(0x1144900));
    *(char * PTR32 *)&REFG(undefined, 0x15e19e8) = ((char *)REFP(0x1144900));
    *(undefined4 *)&REFG(undefined, 0x15e19ec) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e19f0) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e19f4) = &REFG(undefined, 0x1143310);
    *(undefined4 *)&REFG(undefined, 0x15e19f8) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e19e4));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 8) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 8;
    *(char * PTR32 *)&REFG(undefined, 0x15e19cc) = ((char *)REFP(0x11447a8));
    *(char * PTR32 *)&REFG(undefined, 0x15e19d0) = ((char *)REFP(0x11447a8));
    *(undefined4 *)&REFG(undefined, 0x15e19d4) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e19d8) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e19dc) = &REFG(undefined, 0x1143300);
    *(undefined4 *)&REFG(undefined, 0x15e19e0) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e19cc));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x10) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x10;
    *(char * PTR32 *)&REFG(undefined, 0x15e19b4) = ((char *)REFP(0x11432f0));
    *(char * PTR32 *)&REFG(undefined, 0x15e19b8) = ((char *)REFP(0x11432f0));
    *(undefined4 *)&REFG(undefined, 0x15e19bc) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e19c0) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e19c4) = &REFG(undefined, 0x11432e0);
    *(undefined4 *)&REFG(undefined, 0x15e19c8) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e19b4));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x20) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x20;
    *(char * PTR32 *)&REFG(undefined, 0x15e199c) = ((char *)REFP(0x114335c));
    *(char * PTR32 *)&REFG(undefined, 0x15e19a0) = ((char *)REFP(0x114335c));
    *(undefined4 *)&REFG(undefined, 0x15e19a4) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e19a8) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e19ac) = &REFG(undefined, 0x11432d0);
    *(undefined4 *)&REFG(undefined, 0x15e19b0) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e199c));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x40) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x40;
    *(char * PTR32 *)&REFG(undefined, 0x15e1984) = ((char *)REFP(0x11446d8));
    *(char * PTR32 *)&REFG(undefined, 0x15e1988) = ((char *)REFP(0x11446d8));
    *(undefined4 *)&REFG(undefined, 0x15e198c) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1990) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1994) = &REFG(undefined, 0x11432c0);
    *(undefined4 *)&REFG(undefined, 0x15e1998) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1984));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x80) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x80;
    *(char * PTR32 *)&REFG(undefined, 0x15e196c) = ((char *)REFP(0x11432b8));
    *(char * PTR32 *)&REFG(undefined, 0x15e1970) = ((char *)REFP(0x11432b8));
    *(undefined4 *)&REFG(undefined, 0x15e1974) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1978) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e197c) = &REFG(undefined, 0x11432b0);
    *(undefined4 *)&REFG(undefined, 0x15e1980) = 0;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e196c));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x100) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x100;
    *(char * PTR32 *)&REFG(undefined, 0x15e1954) = ((char *)REFP(0x114342c));
    *(char * PTR32 *)&REFG(undefined, 0x15e1958) = ((char *)REFP(0x114342c));
    *(undefined4 *)&REFG(undefined, 0x15e195c) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1960) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1964) = &REFG(undefined, 0x1143288);
    *(undefined4 *)&REFG(undefined, 0x15e1968) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1954));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x200) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x200;
    *(undefined4 *)&REFG(undefined, 0x15e193c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1940) = ((char *)REFP(0x1143270));
    *(undefined4 *)&REFG(undefined, 0x15e1944) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1948) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e194c) = &REFG(undefined, 0x1143230);
    *(undefined4 *)&REFG(undefined, 0x15e1950) = 7;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e193c));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x400) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x400;
    *(undefined4 *)&REFG(undefined, 0x15e1924) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1928) = ((char *)REFP(0x1143210));
    *(undefined4 *)&REFG(undefined, 0x15e192c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1930) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1934) = &REFG(undefined, 0x11431a8);
    *(undefined4 *)&REFG(undefined, 0x15e1938) = 0xc;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1924));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x800) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x800;
    *(undefined4 *)&REFG(undefined, 0x15e190c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1910) = ((char *)REFP(0x114318c));
    *(undefined4 *)&REFG(undefined, 0x15e1914) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1918) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e191c) = &REFG(undefined, 0x1143154);
    *(undefined4 *)&REFG(undefined, 0x15e1920) = 6;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e190c));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x1000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x1000;
    *(undefined4 *)&REFG(undefined, 0x15e18f4) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e18f8) = ((char *)REFP(0x1143130));
    *(undefined4 *)&REFG(undefined, 0x15e18fc) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1900) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1904) = &REFG(undefined, 0x1143118);
    *(undefined4 *)&REFG(undefined, 0x15e1908) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e18f4));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x2000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x2000;
    *(undefined4 *)&REFG(undefined, 0x15e18dc) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e18e0) = ((char *)REFP(0x1143100));
    *(undefined4 *)&REFG(undefined, 0x15e18e4) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e18e8) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e18ec) = &REFG(undefined, 0x1143058);
    *(undefined4 *)&REFG(undefined, 0x15e18f0) = 0x14;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e18dc));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x4000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x4000;
    *(undefined4 *)&REFG(undefined, 0x15e18c4) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e18c8) = ((char *)REFP(0x1143040));
    *(undefined4 *)&REFG(undefined, 0x15e18cc) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e18d0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e18d4) = &REFG(undefined, 0x1142ff8);
    *(undefined4 *)&REFG(undefined, 0x15e18d8) = 8;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e18c4));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x8000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x8000;
    *(undefined4 *)&REFG(undefined, 0x15e18ac) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e18b0) = ((char *)REFP(0x1142fec));
    *(undefined4 *)&REFG(undefined, 0x15e18b4) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e18b8) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e18bc) = &REFG(undefined, 0x1142fcc);
    *(undefined4 *)&REFG(undefined, 0x15e18c0) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e18ac));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x10000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x10000;
    *(undefined4 *)&REFG(undefined, 0x15e1894) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1898) = ((char *)REFP(0x1142fb8));
    *(undefined4 *)&REFG(undefined, 0x15e189c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e18a0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e18a4) = &REFG(undefined, 0x1142f70);
    *(undefined4 *)&REFG(undefined, 0x15e18a8) = 8;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1894));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x20000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x20000;
    *(undefined4 *)&REFG(undefined, 0x15e187c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1880) = ((char *)REFP(0x1142f58));
    *(undefined4 *)&REFG(undefined, 0x15e1884) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1888) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e188c) = &REFG(undefined, 0x1142ef0);
    *(undefined4 *)&REFG(undefined, 0x15e1890) = 0xc;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e187c));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x40000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x40000;
    *(undefined4 *)&REFG(undefined, 0x15e1864) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1868) = ((char *)REFP(0x1142edc));
    *(undefined4 *)&REFG(undefined, 0x15e186c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1870) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1874) = &REFG(undefined, 0x1142ebc);
    *(undefined4 *)&REFG(undefined, 0x15e1878) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1864));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x80000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x80000;
    *(undefined4 *)&REFG(undefined, 0x15e184c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1850) = ((char *)REFP(0x1142e94));
    *(undefined4 *)&REFG(undefined, 0x15e1854) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1858) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e185c) = &REFG(undefined, 0x1142e64);
    *(undefined4 *)&REFG(undefined, 0x15e1860) = 5;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e184c));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x100000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x100000;
    *(undefined4 *)&REFG(undefined, 0x15e1834) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1838) = ((char *)REFP(0x1142e40));
    *(undefined4 *)&REFG(undefined, 0x15e183c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1840) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1844) = &REFG(undefined, 0x1142e00);
    *(undefined4 *)&REFG(undefined, 0x15e1848) = 7;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1834));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x200000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x200000;
    *(undefined4 *)&REFG(undefined, 0x15e181c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1820) = ((char *)REFP(0x1142dec));
    *(undefined4 *)&REFG(undefined, 0x15e1824) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1828) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e182c) = &REFG(undefined, 0x1142dcc);
    *(undefined4 *)&REFG(undefined, 0x15e1830) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e181c));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x400000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x400000;
    *(undefined4 *)&REFG(undefined, 0x15e1804) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1808) = ((char *)REFP(0x1142db4));
    *(undefined4 *)&REFG(undefined, 0x15e180c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1810) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1814) = &REFG(undefined, 0x1142da4);
    *(undefined4 *)&REFG(undefined, 0x15e1818) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1804));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x800000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x800000;
    *(char * PTR32 *)&REFG(undefined, 0x15e17ec) = ((char *)REFP(0x1143040));
    *(char * PTR32 *)&REFG(undefined, 0x15e17f0) = ((char *)REFP(0x1143040));
    *(undefined4 *)&REFG(undefined, 0x15e17f4) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e17f8) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e17fc) = &REFG(undefined, 0x1142d8c);
    *(undefined4 *)&REFG(undefined, 0x15e1800) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e17ec));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x1000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x1000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e17d4) = ((char *)REFP(0x1142fb8));
    *(char * PTR32 *)&REFG(undefined, 0x15e17d8) = ((char *)REFP(0x1142fb8));
    *(undefined4 *)&REFG(undefined, 0x15e17dc) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e17e0) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e17e4) = &REFG(undefined, 0x1142d7c);
    *(undefined4 *)&REFG(undefined, 0x15e17e8) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e17d4));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x2000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x2000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e17bc) = ((char *)REFP(0x1142d68));
    *(char * PTR32 *)&REFG(undefined, 0x15e17c0) = ((char *)REFP(0x1142d68));
    *(undefined4 *)&REFG(undefined, 0x15e17c4) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e17c8) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e17cc) = &REFG(undefined, 0x1142d48);
    *(undefined4 *)&REFG(undefined, 0x15e17d0) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e17bc));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x4000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x4000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e17a4) = ((char *)REFP(0x1142fb8));
    *(char * PTR32 *)&REFG(undefined, 0x15e17a8) = ((char *)REFP(0x1142fb8));
    *(undefined4 *)&REFG(undefined, 0x15e17ac) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e17b0) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e17b4) = &REFG(undefined, 0x1142d30);
    *(undefined4 *)&REFG(undefined, 0x15e17b8) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e17a4));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x8000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x8000000;
    *(undefined4 *)&REFG(undefined, 0x15e178c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1790) = ((char *)REFP(0x1142d1c));
    *(undefined4 *)&REFG(undefined, 0x15e1794) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1798) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e179c) = &REFG(undefined, 0x1142d04);
    *(undefined4 *)&REFG(undefined, 0x15e17a0) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e178c));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x10000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x10000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1774) = ((char *)REFP(0x1142cf8));
    *(char * PTR32 *)&REFG(undefined, 0x15e1778) = ((char *)REFP(0x1142cf8));
    *(undefined4 *)&REFG(undefined, 0x15e177c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1780) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1784) = &REFG(undefined, 0x1142ce0);
    *(undefined4 *)&REFG(undefined, 0x15e1788) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1774));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x20000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x20000000;
    *(undefined4 *)&REFG(undefined, 0x15e175c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1760) = ((char *)REFP(0x1142cd8));
    *(undefined4 *)&REFG(undefined, 0x15e1764) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1768) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e176c) = &REFG(undefined, 0x1142cc8);
    *(undefined4 *)&REFG(undefined, 0x15e1770) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e175c));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x40000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x40000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1744) = ((char *)REFP(0x1143210));
    *(char * PTR32 *)&REFG(undefined, 0x15e1748) = ((char *)REFP(0x1143210));
    *(undefined4 *)&REFG(undefined, 0x15e174c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1750) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1754) = &REFG(undefined, 0x1142cb8);
    *(undefined4 *)&REFG(undefined, 0x15e1758) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1744));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x80000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x80000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e172c) = ((char *)REFP(0x113a328));
    *(char * PTR32 *)&REFG(undefined, 0x15e1730) = ((char *)REFP(0x113a328));
    *(undefined4 *)&REFG(undefined, 0x15e1734) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1738) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e173c) = &REFG(undefined, 0x1142ca0);
    *(undefined4 *)&REFG(undefined, 0x15e1740) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e172c));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 1;
    *(char * PTR32 *)&REFG(undefined, 0x15e1710) = ((char *)REFP(0x1142cd8));
    *(char * PTR32 *)&REFG(undefined, 0x15e1714) = ((char *)REFP(0x1142cd8));
    *(undefined4 *)&REFG(undefined, 0x15e1718) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e171c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1720) = &REFG(undefined, 0x1142c90);
    *(undefined4 *)&REFG(undefined, 0x15e1724) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1710));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 2;
    *(undefined4 *)&REFG(undefined, 0x15e16f8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e16fc) = ((char *)REFP(0x113bc48));
    *(undefined4 *)&REFG(undefined, 0x15e1700) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1704) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1708) = &REFG(undefined, 0x1142c78);
    *(undefined4 *)&REFG(undefined, 0x15e170c) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e16f8));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 4;
    *(char * PTR32 *)&REFG(undefined, 0x15e16e0) = ((char *)REFP(0x11442f0));
    *(char * PTR32 *)&REFG(undefined, 0x15e16e4) = ((char *)REFP(0x11442f0));
    *(undefined4 *)&REFG(undefined, 0x15e16e8) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e16ec) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e16f0) = &REFG(undefined, 0x1142c60);
    *(undefined4 *)&REFG(undefined, 0x15e16f4) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e16e0));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 8) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 8;
    *(undefined4 *)&REFG(undefined, 0x15e16c8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e16cc) = ((char *)REFP(0x113a00c));
    *(undefined4 *)&REFG(undefined, 0x15e16d0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e16d4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e16d8) = &REFG(undefined, 0x1142c50);
    *(undefined4 *)&REFG(undefined, 0x15e16dc) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e16c8));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x10) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x10;
    *(undefined4 *)&REFG(undefined, 0x15e16b0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e16b4) = ((char *)REFP(0x1139fcc));
    *(undefined4 *)&REFG(undefined, 0x15e16b8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e16bc) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e16c0) = &REFG(undefined, 0x1142c38);
    *(undefined4 *)&REFG(undefined, 0x15e16c4) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e16b0));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x20) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x20;
    *(undefined4 *)&REFG(undefined, 0x15e1698) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e169c) = ((char *)REFP(0x1139c08));
    *(undefined4 *)&REFG(undefined, 0x15e16a0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e16a4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e16a8) = &REFG(undefined, 0x1142c30);
    *(undefined4 *)&REFG(undefined, 0x15e16ac) = 0;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1698));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x40) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x40;
    *(undefined4 *)&REFG(undefined, 0x15e1680) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1684) = ((char *)REFP(0x113a464));
    *(undefined4 *)&REFG(undefined, 0x15e1688) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e168c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1690) = &REFG(undefined, 0x1142c20);
    *(undefined4 *)&REFG(undefined, 0x15e1694) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1680));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x80) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x80;
    *(char * PTR32 *)&REFG(undefined, 0x15e1668) = ((char *)REFP(0x1142cd8));
    *(char * PTR32 *)&REFG(undefined, 0x15e166c) = ((char *)REFP(0x1142cd8));
    *(undefined4 *)&REFG(undefined, 0x15e1670) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1674) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1678) = &REFG(undefined, 0x1142c00);
    *(undefined4 *)&REFG(undefined, 0x15e167c) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1668));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x100) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x100;
    *(char * PTR32 *)&REFG(undefined, 0x15e1650) = ((char *)REFP(0x1142cf8));
    *(char * PTR32 *)&REFG(undefined, 0x15e1654) = ((char *)REFP(0x1142cf8));
    *(undefined4 *)&REFG(undefined, 0x15e1658) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e165c) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1660) = &REFG(undefined, 0x1142bd8);
    *(undefined4 *)&REFG(undefined, 0x15e1664) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1650));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x200) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x200;
    *(char * PTR32 *)&REFG(undefined, 0x15e1638) = ((char *)REFP(0x114335c));
    *(char * PTR32 *)&REFG(undefined, 0x15e163c) = ((char *)REFP(0x114335c));
    *(undefined4 *)&REFG(undefined, 0x15e1640) = 2;
    *(undefined4 *)&REFG(undefined, 0x15e1644) = 3;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1648) = &REFG(undefined, 0x1142bb0);
    *(undefined4 *)&REFG(undefined, 0x15e164c) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1638));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x400) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x400;
    *(char * PTR32 *)&REFG(undefined, 0x15e1620) = ((char *)REFP(0x1142b98));
    *(char * PTR32 *)&REFG(undefined, 0x15e1624) = ((char *)REFP(0x1142b98));
    *(undefined4 *)&REFG(undefined, 0x15e1628) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e162c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1630) = &REFG(undefined, 0x1142b70);
    *(undefined4 *)&REFG(undefined, 0x15e1634) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1620));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x800) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x800;
    *(char * PTR32 *)&REFG(undefined, 0x15e1608) = ((char *)REFP(0x1143700));
    *(char * PTR32 *)&REFG(undefined, 0x15e160c) = ((char *)REFP(0x1143700));
    *(undefined4 *)&REFG(undefined, 0x15e1610) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1614) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1618) = &REFG(undefined, 0x1142b48);
    *(undefined4 *)&REFG(undefined, 0x15e161c) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1608));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x1000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x1000;
    *(char * PTR32 *)&REFG(undefined, 0x15e15f0) = ((char *)REFP(0x1142b24));
    *(char * PTR32 *)&REFG(undefined, 0x15e15f4) = ((char *)REFP(0x1142b24));
    *(undefined4 *)&REFG(undefined, 0x15e15f8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e15fc) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1600) = &REFG(undefined, 0x1142afc);
    *(undefined4 *)&REFG(undefined, 0x15e1604) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e15f0));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x2000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x2000;
    *(char * PTR32 *)&REFG(undefined, 0x15e15d8) = ((char *)REFP(0x1142aec));
    *(char * PTR32 *)&REFG(undefined, 0x15e15dc) = ((char *)REFP(0x1142aec));
    *(undefined4 *)&REFG(undefined, 0x15e15e0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e15e4) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e15e8) = &REFG(undefined, 0x1142ac4);
    *(undefined4 *)&REFG(undefined, 0x15e15ec) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e15d8));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x4000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x4000;
    *(char * PTR32 *)&REFG(undefined, 0x15e15c0) = ((char *)REFP(0x11432b8));
    *(char * PTR32 *)&REFG(undefined, 0x15e15c4) = ((char *)REFP(0x11432b8));
    *(undefined4 *)&REFG(undefined, 0x15e15c8) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e15cc) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e15d0) = &REFG(undefined, 0x1142a9c);
    *(undefined4 *)&REFG(undefined, 0x15e15d4) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e15c0));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x8000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x8000;
    *(char * PTR32 *)&REFG(undefined, 0x15e15a8) = ((char *)REFP(0x1143488));
    *(char * PTR32 *)&REFG(undefined, 0x15e15ac) = ((char *)REFP(0x1143488));
    *(undefined4 *)&REFG(undefined, 0x15e15b0) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e15b4) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e15b8) = &REFG(undefined, 0x1142a74);
    *(undefined4 *)&REFG(undefined, 0x15e15bc) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e15a8));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x10000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x10000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1590) = ((char *)REFP(0x1143040));
    *(char * PTR32 *)&REFG(undefined, 0x15e1594) = ((char *)REFP(0x1143040));
    *(undefined4 *)&REFG(undefined, 0x15e1598) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e159c) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e15a0) = &REFG(undefined, 0x1142a4c);
    *(undefined4 *)&REFG(undefined, 0x15e15a4) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1590));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x20000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x20000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1578) = ((char *)REFP(0x113ba6c));
    *(char * PTR32 *)&REFG(undefined, 0x15e157c) = ((char *)REFP(0x113ba6c));
    *(undefined4 *)&REFG(undefined, 0x15e1580) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1584) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1588) = &REFG(undefined, 0x1142a24);
    *(undefined4 *)&REFG(undefined, 0x15e158c) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1578));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x40000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x40000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1560) = ((char *)REFP(0x1143270));
    *(char * PTR32 *)&REFG(undefined, 0x15e1564) = ((char *)REFP(0x1143270));
    *(undefined4 *)&REFG(undefined, 0x15e1568) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e156c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1570) = &REFG(undefined, 0x11429fc);
    *(undefined4 *)&REFG(undefined, 0x15e1574) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1560));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x80000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x80000;
    *(undefined4 *)&REFG(undefined, 0x15e1548) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e154c) = ((char *)REFP(0x11429e0));
    *(undefined4 *)&REFG(undefined, 0x15e1550) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1554) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1558) = &REFG(undefined, 0x1142988);
    *(undefined4 *)&REFG(undefined, 0x15e155c) = 10;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1548));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x100000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x100000;
    *(undefined4 *)&REFG(undefined, 0x15e1530) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1534) = ((char *)REFP(0x1142964));
    *(undefined4 *)&REFG(undefined, 0x15e1538) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e153c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1540) = &REFG(undefined, 0x1142944);
    *(undefined4 *)&REFG(undefined, 0x15e1544) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1530));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x200000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x200000;
    *(undefined4 *)&REFG(undefined, 0x15e1518) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e151c) = ((char *)REFP(0x1142930));
    *(undefined4 *)&REFG(undefined, 0x15e1520) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1524) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1528) = &REFG(undefined, 0x11428f8);
    *(undefined4 *)&REFG(undefined, 0x15e152c) = 6;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1518));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x400000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x400000;
    *(undefined4 *)&REFG(undefined, 0x15e1500) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1504) = ((char *)REFP(0x11428d8));
    *(undefined4 *)&REFG(undefined, 0x15e1508) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e150c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1510) = &REFG(undefined, 0x1142898);
    *(undefined4 *)&REFG(undefined, 0x15e1514) = 7;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1500));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x800000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x800000;
    *(undefined4 *)&REFG(undefined, 0x15e14e8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e14ec) = ((char *)REFP(0x1142878));
    *(undefined4 *)&REFG(undefined, 0x15e14f0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e14f4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e14f8) = &REFG(undefined, 0x1142858);
    *(undefined4 *)&REFG(undefined, 0x15e14fc) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e14e8));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x1000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x1000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e14d0) = ((char *)REFP(0x1142cd8));
    *(undefined4 *)&REFG(undefined, 0x15e14d4) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e14d8) = 2;
    *(undefined4 *)&REFG(undefined, 0x15e14dc) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e14e0) = &REFG(undefined, 0x1142848);
    *(undefined4 *)&REFG(undefined, 0x15e14e4) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e14d0));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x2000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x2000000;
    *(undefined4 *)&REFG(undefined, 0x15e14b8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e14bc) = ((char *)REFP(0x1139f18));
    *(undefined4 *)&REFG(undefined, 0x15e14c0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e14c4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e14c8) = &REFG(undefined, 0x1142818);
    *(undefined4 *)&REFG(undefined, 0x15e14cc) = 5;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e14b8));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x4000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x4000000;
    *(undefined4 *)&REFG(undefined, 0x15e14a0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e14a4) = ((char *)REFP(0x1139f54));
    *(undefined4 *)&REFG(undefined, 0x15e14a8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e14ac) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e14b0) = &REFG(undefined, 0x11427e8);
    *(undefined4 *)&REFG(undefined, 0x15e14b4) = 5;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e14a0));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x8000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x8000000;
    *(undefined4 *)&REFG(undefined, 0x15e1488) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e148c) = ((char *)REFP(0x113a57c));
    *(undefined4 *)&REFG(undefined, 0x15e1490) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1494) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1498) = &REFG(undefined, 0x11427d8);
    *(undefined4 *)&REFG(undefined, 0x15e149c) = 1;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1488));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x10000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x10000000;
    *(undefined4 *)&REFG(undefined, 0x15e1470) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1474) = ((char *)REFP(0x113a4b8));
    *(undefined4 *)&REFG(undefined, 0x15e1478) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e147c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1480) = &REFG(undefined, 0x11427c0);
    *(undefined4 *)&REFG(undefined, 0x15e1484) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1470));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x20000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x20000000;
    *(undefined4 *)&REFG(undefined, 0x15e1458) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e145c) = ((char *)REFP(0x1139e00));
    *(undefined4 *)&REFG(undefined, 0x15e1460) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1464) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1468) = &REFG(undefined, 0x11427a8);
    *(undefined4 *)&REFG(undefined, 0x15e146c) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1458));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x40000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x40000000;
    *(undefined4 *)&REFG(undefined, 0x15e1440) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1444) = ((char *)REFP(0x1139de4));
    *(undefined4 *)&REFG(undefined, 0x15e1448) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e144c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1450) = &REFG(undefined, 0x1142790);
    *(undefined4 *)&REFG(undefined, 0x15e1454) = 2;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1440));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x80000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x80000000;
    *(undefined4 *)&REFG(undefined, 0x15e1428) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e142c) = ((char *)REFP(0x1142788));
    *(undefined4 *)&REFG(undefined, 0x15e1430) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1434) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1438) = &REFG(undefined, 0x1142760);
    *(undefined4 *)&REFG(undefined, 0x15e143c) = 4;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1428));
  if ((*(uint *)&REFG(undefined, 0x15e1424) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e1424) = *(uint *)&REFG(undefined, 0x15e1424) | 1;
    *(undefined4 *)&REFG(undefined, 0x15e140c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1410) = ((char *)REFP(0x1142748));
    *(undefined4 *)&REFG(undefined, 0x15e1414) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1418) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e141c) = &REFG(undefined, 0x1142708);
    *(undefined4 *)&REFG(undefined, 0x15e1420) = 7;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e140c));
  if ((*(uint *)&REFG(undefined, 0x15e1424) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x15e1424) = *(uint *)&REFG(undefined, 0x15e1424) | 2;
    *(undefined4 *)&REFG(undefined, 0x15e13f4) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e13f8) = ((char *)REFP(0x11426e4));
    *(undefined4 *)&REFG(undefined, 0x15e13fc) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1400) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1404) = &REFG(undefined, 0x11426ac);
    *(undefined4 *)&REFG(undefined, 0x15e1408) = 6;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e13f4));
  if ((*(uint *)&REFG(undefined, 0x15e1424) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x15e1424) = *(uint *)&REFG(undefined, 0x15e1424) | 4;
    *(undefined4 *)&REFG(undefined, 0x15e13dc) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e13e0) = ((char *)REFP(0x1142698));
    *(undefined4 *)&REFG(undefined, 0x15e13e4) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e13e8) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e13ec) = &REFG(undefined, 0x1142678);
    *(undefined4 *)&REFG(undefined, 0x15e13f0) = 3;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e13dc));
  if ((*(uint *)&REFG(undefined, 0x15e1424) & 8) == 0) {
    *(uint *)&REFG(undefined, 0x15e1424) = *(uint *)&REFG(undefined, 0x15e1424) | 8;
    *(undefined4 *)&REFG(undefined, 0x15e13c4) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e13c8) = ((char *)REFP(0x1142660));
    *(undefined4 *)&REFG(undefined, 0x15e13cc) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e13d0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e13d4) = &REFG(undefined, 0x1142608);
    *(undefined4 *)&REFG(undefined, 0x15e13d8) = 10;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e13c4));
  if ((*(uint *)&REFG(undefined, 0x15e1424) & 0x10) == 0) {
    *(uint *)&REFG(undefined, 0x15e1424) = *(uint *)&REFG(undefined, 0x15e1424) | 0x10;
    *(undefined4 *)&REFG(undefined, 0x15e13ac) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e13b0) = ((char *)REFP(0x11425e8));
    *(undefined4 *)&REFG(undefined, 0x15e13b4) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e13b8) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e13bc) = &REFG(undefined, 0x1142598);
    *(undefined4 *)&REFG(undefined, 0x15e13c0) = 9;
  }
  F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e13ac));
  if ((*(uint *)&REFG(undefined, 0x15e1424) & 0x20) == 0) {
    *(uint *)&REFG(undefined, 0x15e1424) = *(uint *)&REFG(undefined, 0x15e1424) | 0x20;
    *(undefined4 *)&REFG(undefined, 0x15e1394) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1398) = ((char *)REFP(0x1142580));
    *(undefined4 *)&REFG(undefined, 0x15e139c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e13a0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e13a4) = &REFG(undefined, 0x1142540);
    *(undefined4 *)&REFG(undefined, 0x15e13a8) = 7;
  }
  uVar1 = F_00ded650(param_1 GEN_EDX_ARG,&REFG(undefined, 0x15e1394));
  return uVar1;
}

/* ref: FUN_00dcde20 */
GEN_LIB GEN_NOFRAME uint F_00dcde20(void)
{
  GEN_ENTER(0xdcde20u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00dca9d0(REFG(undefined4, 0x15e3734));
  return uVar1;
}

/* ref: FUN_00dcde30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dcde30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdcde30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x30))))(*(int * PTR32 *)this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 4))),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00dcde60 */
GEN_LIB GEN_FRAME uint F_00dcde60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdcde60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dcde70 */
GEN_LIB GEN_FRAME uint F_00dcde70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdcde70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dcde90 */
GEN_LIB GEN_FRAME unsigned int F_00dcde90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdcde90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00dceba0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00dcdec0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dcdec0(void)
{
  GEN_ENTER(0xdcdec0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dcdef0 */
GEN_LIB GEN_FRAME unsigned int F_00dcdef0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdcdef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00dcf540(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00dcdf10 */
GEN_LIB GEN_FRAME uint F_00dcdf10(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdcdf10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00dcdf20 */
GEN_LIB GEN_NOFRAME uint F_00dcdf20(void)
{
  GEN_ENTER(0xdcdf20u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x40, 0);
  
  F_00dcf540(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00dcdf50 */
GEN_LIB GEN_FRAME unsigned int F_00dcdf50(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdcdf50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_ARG);
  }
  *param_1 = 0;
  return;
}

/* ref: FUN_00dcdf70 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00dcdf70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdcdf70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00dcdf90 */
GEN_LIB GEN_FRAME unsigned int F_00dcdf90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdcdf90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,8);
  }
  return;
}

/* ref: FUN_00dcdfc0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00dcdfc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdcdfc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00dcdff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dcdff0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdcdff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,8);
  }
  return (uint)param_1;
}

/* ref: FUN_00dce030 */
GEN_LIB GEN_FRAME uint F_00dce030(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdce030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dce060 */
GEN_LIB GEN_NOFRAME unsigned int F_00dce060(void)
{
  GEN_ENTER(0xdce060u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dce090 */
GEN_LIB GEN_NOFRAME unsigned int F_00dce090(void)
{
  GEN_ENTER(0xdce090u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dce0a0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dce0a0(void)
{
  GEN_ENTER(0xdce0a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dce0e0 */
GEN_LIB GEN_FRAME unsigned int F_00dce0e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdce0e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x104);
  }
  return;
}

/* ref: FUN_00dce120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dce120(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdce120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x104);
  }
  return param_1;
}

/* ref: FUN_00dce1a0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dce1a0(void)
{
  GEN_ENTER(0xdce1a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dce1c0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dce1c0(void)
{
  GEN_ENTER(0xdce1c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dce1f0 */
GEN_LIB GEN_FRAME uint F_00dce1f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdce1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

