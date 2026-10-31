#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: IntArray::IntArray */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d97370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd97370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  iVar3 = param_1[1];
  if (iVar3 == 0) {
    puVar1 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP((iVar3 * 4)));
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined * PTR32 *)(gen_frame + 0x0)))))
    ;
    iVar2 = (int)(((int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 0x1f & 3U) + (int)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 2;
    if (iVar2 != 0) goto LAB_00d973d1;
  }
  iVar2 = ((int)0x80000000);
LAB_00d973d1: ;
  *((int *)GEN_TOP(((int)this + 8))) = iVar2;
  *(undefined4 * PTR32 *)this = puVar1;
  *((int *)GEN_TOP(((int)this + 4))) = iVar3;
  if (0 < iVar3) {
    iVar2 = *param_1 - (int)puVar1;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return (uint)this;
}

/* ref: IntArray::Assign */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d97400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd97400u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  if ((int)(uVar3 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)uVar3) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,*(undefined4 *)this,uVar3 * 4);
    }
    pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc)));
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((piVar2[1] * 4)));
    uVar3 = (*pcVar1)((*(int * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)this = uVar3;
    *((int *)GEN_TOP(((int)this + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
  }
  iVar6 = piVar2[1];
  puVar4 = *(undefined4 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *((undefined4 *)GEN_TOP((iVar5 + (int)puVar4)));
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return (uint)this;
}

/* ref: Array12::PushBackUninit2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d97490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd97490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0xc);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: Array12::Clear */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d97500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd97500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::CopyConstructIntArrays */
GEN_LIB GEN_FRAME unsigned int F_00d97540(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd97540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = (int)param_2;
  if (0 < (int)param_2) {
    param_2 = param_3;
    piVar3 = ((int *)GEN_TOP((param_1 + 4)));
    (*(int *)(gen_frame + 0x0)) = iVar4;
    do {
      if (piVar3 != (int *)&REFG(undefined, 0x4)) {
        piVar3[-1] = 0;
        *piVar3 = 0;
        piVar3[1] = ((int)0x80000000);
        iVar4 = *((int *)GEN_TOP((((int)param_3 - param_1) + (int)piVar3)));
        if (iVar4 == 0) {
          puVar1 = ((undefined4 *)GEN_TOP(0x0));
LAB_00d975ca: ;
          iVar2 = ((int)0x80000000);
        }
        else {
          (*(int *)(gen_frame + 0x4)) = iVar4 * 4;
          puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x4)))));
          iVar2 = (int)(((*(int *)(gen_frame + 0x4)) >> 0x1f & 3U) + (*(int *)(gen_frame + 0x4))) >> 2;
          if (iVar2 == 0) goto LAB_00d975ca;
        }
        piVar3[1] = iVar2;
        piVar3[-1] = (int)puVar1;
        *piVar3 = iVar4;
        if (0 < iVar4) {
          iVar2 = *param_2 - (int)puVar1;
          do {
            *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
            puVar1 = puVar1 + 1;
            iVar4 = iVar4 - 1;
          } while (iVar4 != 0);
        }
      }
      param_2 = param_2 + 3;
      piVar3 = piVar3 + 3;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  return;
}

/* ref: IntArray::Assign2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d97610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd97610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  if ((int)(uVar3 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[0])[1]) {
    if (-1 < (int)uVar3) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 * 4);
    }
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((piVar2[1] * 4)));
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar3 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[0]));
    *(uint *)this = uVar3;
    *((int *)GEN_TOP(((int)this + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  }
  iVar6 = piVar2[1];
  puVar4 = *(undefined4 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *((undefined4 *)GEN_TOP((iVar5 + (int)puVar4)));
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return (uint)this;
}

/* ref: JobQueue::~JobQueue */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d976a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd976a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPVOID pvVar1;
  
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG);
  }
  return;
}

/* ref: JobQueue::Reserve */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d976d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd976d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((int)uVar7 < param_1) {
    if (param_1 <= (int)(uVar7 * 2)) {
      param_1 = uVar7 * 2;
    }
    pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x2c))) + 4))))
                      (*((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x2c))) GEN_EDX_ARG,param_1 << 7);
    uVar7 = uVar6;
    if ((uVar6 != 0) && (iVar1 = *(int *)this, iVar1 != 0)) {
      if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
        iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
        iVar3 = *((int *)GEN_TOP(((int)this + 8)));
        if (iVar3 < iVar2) {
          F_00da1010(uVar6,iVar3 * 0x80 + iVar1,*((int *)GEN_TOP(((int)this + 0x10))) << 7);
        }
        else {
          iVar8 = (*((int *)GEN_TOP(((int)this + 4))) - iVar3) * 0x80;
          F_00da1010(uVar6,iVar3 * 0x80 + iVar1,iVar8);
          F_00da1010(iVar8 + uVar6,*(undefined4 *)this,iVar2 << 7);
        }
      }
      uVar7 = *((uint *)GEN_TOP(((int)this + 0x10)));
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      *((uint *)GEN_TOP(((int)this + 0xc))) = uVar7;
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      uVar4 = *(undefined4 *)this;
      pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x2c))) + 8))))
                        (*((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x2c))) GEN_EDX_ARG,uVar4,iVar1 << 7);
    }
    *(uint *)this = uVar6;
    *((int *)GEN_TOP(((int)this + 4))) = param_1;
  }
  return uVar7;
}

/* ref: Array12::Clear2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d977c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd977c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::AssignIntArrays */
GEN_LIB GEN_FRAME unsigned int F_00d97820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd97820u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  code * pcVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  uint * puVar5;
  uint * puVar6;
  int local_8;
  
  if (0 < (*(int *)&gen_args[2])) {
    puVar6 = ((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 4)));
    puVar5 = ((uint *)GEN_TOP(((*(int *)&gen_args[0]) + 8)));
    local_8 = (*(int *)&gen_args[2]);
    do {
      uVar2 = *puVar5;
      if ((int)(uVar2 & 0x3fffffff) < (int)*puVar6) {
        if (-1 < (int)uVar2) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),puVar5[-2],uVar2 * 4);
        }
        (*(int *)&gen_args[2]) = *puVar6 * 4;
        pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
        uVar2 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[2]));
        puVar5[-2] = uVar2;
        *puVar5 = (int)((*(int *)&gen_args[2]) + ((*(int *)&gen_args[2]) >> 0x1f & 3U)) >> 2;
      }
      uVar2 = *puVar6;
      puVar3 = ((undefined4 *)GEN_TOP(puVar5[-2]));
      puVar5[-1] = uVar2;
      if (0 < (int)uVar2) {
        iVar4 = puVar6[-1] - (int)puVar3;
        do {
          *puVar3 = *((undefined4 *)GEN_TOP((iVar4 + (int)puVar3)));
          puVar3 = puVar3 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      puVar6 = puVar6 + 3;
      puVar5 = puVar5 + 3;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return 0;
}

/* ref: JobQueue::JobQueue2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d978e0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd978e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_00d96f70(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: JobQueue::PushBack */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d97920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd97920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  if (iVar3 <= *((int *)GEN_TOP(((int)this + 0x10)))) {
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 * 2;
    }
    F_00d976d0(this GEN_EDX_FWD,iVar3);
  }
  if (*((int *)GEN_TOP(((int)this + 0xc))) == *((int *)GEN_TOP(((int)this + 4)))) {
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  puVar1 = param_1;
  puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) * 0x80 + *(int *)this)));
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  return 1;
}

/* ref: JobQueue::PushFront */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d97980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd97980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 0x10)))) {
    if (uVar1 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = uVar1 * 2;
    }
    uVar1 = F_00d976d0(this GEN_EDX_FWD,iVar4);
  }
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  }
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  puVar2 = param_1;
  puVar3 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) * 0x80 + *(int *)this)));
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  return uVar1;
}

/* ref: FUN_00d979d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d979d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd979d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: JobQueueSet::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d97a40(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd97a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  undefined * this;
  int iVar2;
  
  this = ((undefined *)GEN_TOP((param_1 + 0x248)));
  iVar2 = 0x19;
  do {
    this = ((undefined *)GEN_TOP(((int)this - 0x14)));
    F_00d976a0(this GEN_EDX_FWD);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x250);
  }
  return param_1;
}

/* ref: JobScheduler::RunNextJob */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d97bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd97bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL(0xa0, 0);
  short * psVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  byte bVar5;
  char * pcVar6;
  int * piVar7;
  undefined4 * puVar8;
  int iVar9;
  undefined4 * puVar10;
  uint uVar11;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = this;
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a8c));
  if (pvVar3 == (LPVOID)0x0) {
    iVar9 = *((int *)GEN_TOP(((int)this + 0x54)));
  }
  else {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a8c));
    iVar9 = (int)*((char *)GEN_TOP(((int)pvVar3 + 0x11c + (int)this)));
  }
  (*(int *)(gen_frame + 0x80)) = (int)*((char *)GEN_TOP(((int)this + iVar9 * 0x1c + 0x90)));
  pcVar6 = ((char *)GEN_TOP(((int)this + iVar9 * 0x1c + 0x90)));
  if (-1 < (*(int *)(gen_frame + 0x80))) {
LAB_00d97c7a: ;
    piVar7 = ((int *)GEN_TOP((param_2 + 0x40 + (*(int *)(gen_frame + 0x80)) * 0x14)));
    pcVar6 = pcVar6 + 1;
    (*(int * PTR32 *)(gen_frame + 0x88)) = piVar7;
    if (piVar7[4] == 0) goto code_r0x00d97c8e;
    puVar8 = ((undefined4 *)GEN_TOP((piVar7[2] * 0x80 + *piVar7)));
    puVar10 = &(*(undefined4 *)(gen_frame + 0x0));
    for (iVar9 = 0x20; this = (*(undefined4 * PTR32 *)(gen_frame + 0x84)), iVar9 != 0; iVar9 = iVar9 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    iVar9 = piVar7[2];
    piVar7[2] = iVar9 + 1;
    if (iVar9 + 1 == piVar7[1]) {
      piVar7[2] = 0;
    }
    piVar7[4] = piVar7[4] - 1;
    uVar11 = ((code *)*((gen_code32 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x84)) + 0x1c))))((*(undefined4 * PTR32 *)(gen_frame + 0x84)),param_2,&(*(undefined4 *)(gen_frame + 0x0)),param_4);
    if (uVar11 == 1) {
      F_00d97980((*(int * PTR32 *)(gen_frame + 0x88)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
      F_00d95b70(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x80)),param_2);
    }
    psVar1 = ((short *)GEN_TOP((param_2 + (uint)(*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 1)) * 2)));
    *psVar1 = *psVar1 + 1;
    iVar9 = (*(int *)(gen_frame + 0x80));
    goto LAB_00d97c40;
  }
LAB_00d97c3d: ;
  iVar9 = -1;
LAB_00d97c40: ;
  if ((param_1 != -1) && (param_1 != iVar9)) {
    F_00d95b70(this GEN_EDX_ARG,param_1,param_2);
  }
  if (-1 < iVar9) {
    F_00d95890(param_2);
    return 0;
  }
  iVar9 = *((int *)GEN_TOP(((int)this + 0x4c)));
  (*(int *)(gen_frame + 0x80)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = ((undefined4 *)GEN_TOP(0x0));
  (*(int * PTR32 *)(gen_frame + 0x88)) = ((int *)GEN_TOP(0x0));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x50)));
  if (iVar9 < iVar4) {
    if (1 < iVar4 - iVar9) {
      iVar4 = ((iVar4 - iVar9) - 2U >> 1) + 1;
      piVar7 = ((int *)GEN_TOP((param_2 + (iVar9 * 5 + 0x19) * 4)));
      iVar9 = iVar9 + iVar4 * 2;
      do {
        (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + piVar7[-5];
        (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x84)) + *piVar7)));
        piVar7 = piVar7 + 10;
        iVar4 = iVar4 - 1;
      } while (iVar4 != 0);
    }
    iVar4 = 0;
    if (iVar9 < *((int *)GEN_TOP(((int)this + 0x50)))) {
      iVar4 = *((int *)GEN_TOP((param_2 + (iVar9 * 5 + 0x14) * 4)));
    }
    if (iVar4 + (*(int *)(gen_frame + 0x80)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x84)) != 0) goto LAB_00d97e69;
  }
  iVar9 = 0;
  uVar11 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x24)))) {
    do {
      if ((*((short *)GEN_TOP((param_2 + iVar9 * 2))) < 1) &&
         (*((int *)GEN_TOP((param_2 + (*((int *)GEN_TOP(((int)this + 0x30))) + 4 + iVar9) * 0x14))) == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = 1;
      }
      bVar5 = (byte)iVar9;
      iVar9 = iVar9 + 1;
      uVar11 = uVar11 | iVar4 << GEN_SHC(bVar5, bVar5);
    } while (iVar9 < *((int *)GEN_TOP(((int)this + 0x24))));
  }
  (*(bool *)(gen_frame + 0x8f)) = uVar11 == 0;
  if ((*((uint *)GEN_TOP((param_2 + 0x2c))) & uVar11) == 0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a8c));
    if (pvVar3 == (LPVOID)0x0) {
      if ((*(bool *)(gen_frame + 0x8f)) != false) {
        F_00d95980(this GEN_EDX_ARG,param_2);
      }
      F_00d95890(param_2);
      return 2;
    }
    if (*((short *)GEN_TOP((param_2 + 0x36 + *((char *)GEN_TOP(((int)this + 0x11c))) * 2))) != 0) {
      psVar1 = ((short *)GEN_TOP((param_2 + 0x36 + *((char *)GEN_TOP(((int)this + 0x11c))) * 2)));
      *psVar1 = *psVar1 - 1;
      F_00da36f0(*((undefined4 *)GEN_TOP(((int)this + *((char *)GEN_TOP(((int)this + 0x11c))) * 4 + 0x78))),1);
    }
  }
  if (((*(bool *)(gen_frame + 0x8f)) != false) && (*((int *)GEN_TOP((param_2 + 0x30))) != 1)) {
    F_00d95980(this GEN_EDX_ARG,param_2);
    F_00d95890(param_2);
    return 2;
  }
LAB_00d97e69: ;
  if (param_3 != 1) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a8c));
    iVar9 = (int)*((char *)GEN_TOP(((int)pvVar3 + 0x11c + (int)this)));
    psVar1 = ((short *)GEN_TOP((param_2 + 0x36 + iVar9 * 2)));
    *psVar1 = *psVar1 + 1;
    F_00d95890(param_2);
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    puVar8 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = puVar8;
    if (puVar8 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0xc)))) {
      *puVar8 = ((char *)REFP(0x1138e10));
      uVar2 = rdtsc();
      (*(int * PTR32 *)(gen_frame + 0x88)) = ((int *)GEN_TOP((int)uVar2));
      puVar8[1] = (int)uVar2;
      *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4))) = puVar8 + 3;
    }
    F_00da36e0(*((undefined4 *)GEN_TOP(((int)this + iVar9 * 4 + 0x78))));
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    puVar8 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4)));
    if (puVar8 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0xc)))) {
      *puVar8 = &REFG(undefined, 0x1136cb0);
      uVar2 = rdtsc();
      (*(int * PTR32 *)(gen_frame + 0x88)) = ((int *)GEN_TOP((int)uVar2));
      puVar8[1] = (int)uVar2;
      *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4))) = puVar8 + 3;
    }
    return 0xffffffff;
  }
  F_00d95890(param_2);
  return 1;
code_r0x00d97c8e: ;
  (*(int *)(gen_frame + 0x80)) = (int)*pcVar6;
  if ((*(int *)(gen_frame + 0x80)) < 0) goto LAB_00d97c3d;
  goto LAB_00d97c7a;
}

/* ref: IntArrayArray::Assign */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d97f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd97f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  int iVar1;
  code * pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint * puVar9;
  int * piVar10;
  uint * puVar11;
  int local_14;
  
  iVar1 = (*(int * PTR32 *)&gen_args[1])[1];
  iVar8 = *((int *)GEN_TOP(((int)this + 4)));
  iVar6 = iVar1;
  if (iVar8 < iVar1) {
    iVar6 = iVar8;
  }
  uVar4 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar7 = uVar4 * 2;
    if (iVar7 <= iVar1) {
      iVar7 = iVar1;
    }
    F_00d95690((*(undefined4 * PTR32 *)&gen_args[0]),this,iVar7,0xc);
  }
  iVar8 = (iVar8 - iVar1) - 1;
  if (-1 < iVar8) {
    piVar10 = ((int *)GEN_TOP((*(int *)this + iVar1 * 0xc + 8 + iVar8 * 0xc)));
    do {
      iVar7 = *piVar10;
      piVar10[-1] = 0;
      if (-1 < iVar7) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar10[-2],iVar7 * 4);
      }
      piVar10[-2] = 0;
      *piVar10 = ((int)0x80000000);
      piVar10 = piVar10 - 3;
      iVar8 = iVar8 - 1;
    } while (-1 < iVar8);
  }
  if (0 < iVar6) {
    puVar11 = ((uint *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4)));
    puVar9 = ((uint *)GEN_TOP((*(int *)this + 8)));
    local_14 = iVar6;
    do {
      uVar4 = *puVar9;
      if ((int)(uVar4 & 0x3fffffff) < (int)*puVar11) {
        if (-1 < (int)uVar4) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),puVar9[-2],uVar4 * 4);
        }
        (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP((*puVar11 * 4)));
        pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
        uVar4 = (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 * PTR32 *)&gen_args[0]));
        puVar9[-2] = uVar4;
        *puVar9 = (int)((int)(*(undefined4 * PTR32 *)&gen_args[0]) + ((int)(*(undefined4 * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
      }
      uVar4 = *puVar11;
      (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(puVar9[-2]));
      puVar9[-1] = uVar4;
      uVar3 = puVar11[-1];
      if (0 < (int)uVar4) {
        puVar5 = (*(undefined4 * PTR32 *)&gen_args[0]);
        do {
          *puVar5 = *((undefined4 *)GEN_TOP(((uVar3 - (int)(*(undefined4 * PTR32 *)&gen_args[0])) + (int)puVar5)));
          puVar5 = puVar5 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar11 = puVar11 + 3;
      puVar9 = puVar9 + 3;
      local_14 = local_14 - 1;
    } while (local_14 != 0);
  }
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + iVar6 * 0xc)));
  iVar8 = *(int *)this + iVar6 * 0xc;
  local_14 = iVar1 - iVar6;
  if (local_14 < 1) {
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
    return (uint)this;
  }
  iVar6 = (int)(*(int * PTR32 *)&gen_args[1]) - iVar8;
  piVar10 = ((int *)GEN_TOP((iVar8 + 4)));
  do {
    if (piVar10 != (int *)&REFG(undefined, 0x4)) {
      piVar10[-1] = 0;
      *piVar10 = 0;
      piVar10[1] = ((int)0x80000000);
      iVar8 = *((int *)GEN_TOP(((int)piVar10 + iVar6)));
      if (iVar8 == 0) {
        puVar5 = ((undefined4 *)GEN_TOP(0x0));
LAB_00d98118: ;
        iVar7 = ((int)0x80000000);
      }
      else {
        (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP((iVar8 * 4)));
        pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
        puVar5 = ((undefined4 *)GEN_TOP((*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 * PTR32 *)&gen_args[0]))));
        iVar7 = (int)(((int)(*(undefined4 * PTR32 *)&gen_args[0]) >> 0x1f & 3U) + (int)(*(undefined4 * PTR32 *)&gen_args[0])) >> 2;
        if (iVar7 == 0) goto LAB_00d98118;
      }
      piVar10[1] = iVar7;
      piVar10[-1] = (int)puVar5;
      *piVar10 = iVar8;
      if (0 < iVar8) {
        iVar7 = *(*(int * PTR32 *)&gen_args[1]) - (int)puVar5;
        do {
          *puVar5 = *((undefined4 *)GEN_TOP((iVar7 + (int)puVar5)));
          puVar5 = puVar5 + 1;
          iVar8 = iVar8 - 1;
        } while (iVar8 != 0);
      }
    }
    (*(int * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[1]) + 3;
    piVar10 = piVar10 + 3;
    local_14 = local_14 - 1;
    if (local_14 == 0) {
      *((int *)GEN_TOP(((int)this + 4))) = iVar1;
      return (uint)this;
    }
  } while( true );
}

/* ref: IntArrayArray::Assign2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d98170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd98170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  int * piVar6;
  int iVar7;
  int * piVar8;
  uint * puVar9;
  int iVar10;
  uint * puVar11;
  
  iVar10 = param_1[1];
  iVar5 = *((int *)GEN_TOP(((int)this + 4)));
  (*(int * PTR32 *)(gen_frame + 0x10)) = this;
  (*(int *)(gen_frame + 0xc)) = iVar10;
  if (iVar5 < iVar10) {
    (*(int *)(gen_frame + 0x4)) = iVar5;
    iVar7 = iVar5;
  }
  else {
    (*(int *)(gen_frame + 0x4)) = iVar10;
    iVar7 = iVar10;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  (*(int *)(gen_frame + 0x4)) = iVar7;
  if ((int)uVar2 < iVar10) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar10) {
      iVar3 = iVar10;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0xc);
  }
  iVar10 = (iVar5 - (*(int *)(gen_frame + 0xc))) - 1;
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x10));
  if (-1 < iVar10) {
    piVar8 = ((int *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc)) * 0xc + 8 + iVar10 * 0xc)));
    do {
      iVar5 = *piVar8;
      piVar8[-1] = 0;
      if (-1 < iVar5) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar8[-2],iVar5 * 4);
        piVar6 = (*(int * PTR32 *)(gen_frame + 0x10));
      }
      piVar8[-2] = 0;
      *piVar8 = ((int)0x80000000);
      piVar8 = piVar8 - 3;
      iVar10 = iVar10 - 1;
    } while (-1 < iVar10);
  }
  if (0 < iVar7) {
    puVar11 = ((uint *)GEN_TOP((*param_1 + 4)));
    puVar9 = ((uint *)GEN_TOP((*piVar6 + 8)));
    (*(int *)(gen_frame + 0x0)) = iVar7;
    do {
      uVar2 = *puVar9;
      if ((int)(uVar2 & 0x3fffffff) < (int)*puVar11) {
        if (-1 < (int)uVar2) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),puVar9[-2],uVar2 * 4);
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = ((undefined4 *)GEN_TOP((*puVar11 * 4)));
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
        puVar9[-2] = uVar2;
        *puVar9 = (int)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + ((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x8))) >> 0x1f & 3U)) >> 2;
      }
      uVar2 = *puVar11;
      puVar4 = ((undefined4 *)GEN_TOP(puVar9[-2]));
      puVar9[-1] = uVar2;
      uVar1 = puVar11[-1];
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar4;
      if (0 < (int)uVar2) {
        iVar10 = uVar1 - (int)puVar4;
        do {
          *puVar4 = *((undefined4 *)GEN_TOP((iVar10 + (int)puVar4)));
          puVar4 = puVar4 + 1;
          uVar2 = uVar2 - 1;
          iVar7 = (*(int *)(gen_frame + 0x4));
        } while (uVar2 != 0);
      }
      puVar11 = puVar11 + 3;
      puVar9 = puVar9 + 3;
      iVar10 = (*(int *)(gen_frame + 0x0)) - 1;
      (*(int *)(gen_frame + 0x0)) = iVar10;
      piVar6 = (*(int * PTR32 *)(gen_frame + 0x10));
    } while (iVar10 != 0);
  }
  param_1 = ((int *)GEN_TOP((*param_1 + iVar7 * 0xc)));
  iVar10 = *piVar6 + iVar7 * 0xc;
  if ((*(int *)(gen_frame + 0xc)) - iVar7 < 1) {
    (*(int * PTR32 *)(gen_frame + 0x10))[1] = (*(int *)(gen_frame + 0xc));
    return (uint)(*(int * PTR32 *)(gen_frame + 0x10));
  }
  piVar6 = ((int *)GEN_TOP((iVar10 + 4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = ((undefined4 *)GEN_TOP(((int)param_1 - iVar10)));
  (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0xc)) - iVar7;
  do {
    if (piVar6 != (int *)&REFG(undefined, 0x4)) {
      piVar6[-1] = 0;
      *piVar6 = 0;
      piVar6[1] = ((int)0x80000000);
      iVar10 = *((int *)GEN_TOP(((int)piVar6 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)))));
      if (iVar10 == 0) {
        puVar4 = ((undefined4 *)GEN_TOP(0x0));
LAB_00d98358: ;
        iVar5 = ((int)0x80000000);
      }
      else {
        (*(int *)(gen_frame + 0x0)) = iVar10 * 4;
        puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x0)))));
        iVar5 = (int)(((*(int *)(gen_frame + 0x0)) >> 0x1f & 3U) + (*(int *)(gen_frame + 0x0))) >> 2;
        if (iVar5 == 0) goto LAB_00d98358;
      }
      piVar6[1] = iVar5;
      piVar6[-1] = (int)puVar4;
      *piVar6 = iVar10;
      if (0 < iVar10) {
        iVar5 = *param_1 - (int)puVar4;
        do {
          *puVar4 = *((undefined4 *)GEN_TOP((iVar5 + (int)puVar4)));
          puVar4 = puVar4 + 1;
          iVar10 = iVar10 - 1;
        } while (iVar10 != 0);
      }
    }
    param_1 = param_1 + 3;
    piVar6 = piVar6 + 3;
    iVar10 = (*(int *)(gen_frame + 0x4)) - 1;
    (*(int *)(gen_frame + 0x4)) = iVar10;
    if (iVar10 == 0) {
      (*(int * PTR32 *)(gen_frame + 0x10))[1] = (*(int *)(gen_frame + 0xc));
      return (uint)(*(int * PTR32 *)(gen_frame + 0x10));
    }
  } while( true );
}

/* ref: FUN_00d983b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d983b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd983b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined * pvVar6;
  int iVar7;
  uint * puVar8;
  int * piVar9;
  int iVar10;
  uint * puVar11;
  
  *(int *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *(undefined1 *)(param_1 + 1);
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((int *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  iVar10 = param_1[5];
  iVar5 = *((int *)GEN_TOP(((int)this + 0x14)));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(int *)(gen_frame + 0xc)) = iVar10;
  if (iVar5 < iVar10) {
    (*(int *)(gen_frame + 0x4)) = iVar5;
    iVar7 = iVar5;
  }
  else {
    (*(int *)(gen_frame + 0x4)) = iVar10;
    iVar7 = iVar10;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x18))) & 0x3fffffff;
  (*(int *)(gen_frame + 0x4)) = iVar7;
  if ((int)uVar2 < iVar10) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar10) {
      iVar3 = iVar10;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x10))),iVar3,0xc);
  }
  iVar10 = (iVar5 - (*(int *)(gen_frame + 0xc))) - 1;
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  if (-1 < iVar10) {
    piVar9 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (*(int *)(gen_frame + 0xc)) * 0xc + 8 + iVar10 * 0xc)));
    do {
      iVar5 = *piVar9;
      piVar9[-1] = 0;
      if (-1 < iVar5) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar9[-2],iVar5 * 4);
        pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x10));
      }
      piVar9[-2] = 0;
      *piVar9 = ((int)0x80000000);
      piVar9 = piVar9 - 3;
      iVar10 = iVar10 - 1;
    } while (-1 < iVar10);
  }
  if (0 < iVar7) {
    puVar11 = ((uint *)GEN_TOP((param_1[4] + 4)));
    puVar8 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar6 + 0x10))) + 8)));
    (*(int *)(gen_frame + 0x0)) = iVar7;
    do {
      uVar2 = *puVar8;
      if ((int)(uVar2 & 0x3fffffff) < (int)*puVar11) {
        if (-1 < (int)uVar2) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),puVar8[-2],uVar2 * 4);
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = ((undefined4 *)GEN_TOP((*puVar11 * 4)));
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
        puVar8[-2] = uVar2;
        *puVar8 = (int)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + ((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x8))) >> 0x1f & 3U)) >> 2;
      }
      uVar2 = *puVar11;
      puVar4 = ((undefined4 *)GEN_TOP(puVar8[-2]));
      puVar8[-1] = uVar2;
      uVar1 = puVar11[-1];
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar4;
      if (0 < (int)uVar2) {
        iVar10 = uVar1 - (int)puVar4;
        do {
          *puVar4 = *((undefined4 *)GEN_TOP((iVar10 + (int)puVar4)));
          puVar4 = puVar4 + 1;
          uVar2 = uVar2 - 1;
          iVar7 = (*(int *)(gen_frame + 0x4));
        } while (uVar2 != 0);
      }
      puVar11 = puVar11 + 3;
      puVar8 = puVar8 + 3;
      iVar10 = (*(int *)(gen_frame + 0x0)) - 1;
      (*(int *)(gen_frame + 0x0)) = iVar10;
      pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x10));
    } while (iVar10 != 0);
  }
  param_1 = ((int *)GEN_TOP((param_1[4] + iVar7 * 0xc)));
  iVar10 = *((int *)GEN_TOP(((int)pvVar6 + 0x10))) + iVar7 * 0xc;
  if ((*(int *)(gen_frame + 0xc)) - iVar7 < 1) {
    *((int *)GEN_TOP(((int)pvVar6 + 0x14))) = (*(int *)(gen_frame + 0xc));
    return (uint)(*(undefined * PTR32 *)(gen_frame + 0x10));
  }
  piVar9 = ((int *)GEN_TOP((iVar10 + 4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = ((undefined4 *)GEN_TOP(((int)param_1 - iVar10)));
  (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0xc)) - iVar7;
  do {
    if (piVar9 != (int *)&REFG(undefined, 0x4)) {
      piVar9[-1] = 0;
      *piVar9 = 0;
      piVar9[1] = ((int)0x80000000);
      iVar10 = *((int *)GEN_TOP(((int)piVar9 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)))));
      if (iVar10 == 0) {
        puVar4 = ((undefined4 *)GEN_TOP(0x0));
LAB_00d985ac: ;
        iVar5 = ((int)0x80000000);
      }
      else {
        (*(int *)(gen_frame + 0x0)) = iVar10 * 4;
        puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x0)))));
        iVar5 = (int)(((*(int *)(gen_frame + 0x0)) >> 0x1f & 3U) + (*(int *)(gen_frame + 0x0))) >> 2;
        if (iVar5 == 0) goto LAB_00d985ac;
      }
      piVar9[1] = iVar5;
      piVar9[-1] = (int)puVar4;
      *piVar9 = iVar10;
      if (0 < iVar10) {
        iVar5 = *param_1 - (int)puVar4;
        do {
          *puVar4 = *((undefined4 *)GEN_TOP((iVar5 + (int)puVar4)));
          puVar4 = puVar4 + 1;
          iVar10 = iVar10 - 1;
        } while (iVar10 != 0);
      }
    }
    param_1 = param_1 + 3;
    piVar9 = piVar9 + 3;
    iVar10 = (*(int *)(gen_frame + 0x4)) - 1;
    (*(int *)(gen_frame + 0x4)) = iVar10;
    if (iVar10 == 0) {
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x14))) = (*(int *)(gen_frame + 0xc));
      return (uint)(*(undefined * PTR32 *)(gen_frame + 0x10));
    }
  } while( true );
}

/* ref: hkVector4::SetPermutationZWXY */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d98620(GEN_P(gen_v16 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_v16 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd98620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;)
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  (*(undefined4 *)((char *)&auVar2 + 8)) = (*(undefined4 *)((char *)&auVar1 + 0));
  (*(undefined8 *)((char *)&auVar2 + 0)) = (*(undefined8 *)((char *)&auVar1 + 8));
  (*(undefined4 *)((char *)&auVar2 + 12)) = (*(undefined4 *)((char *)&auVar1 + 4));
  memcpy(&(*in_ecx), &(auVar2), sizeof(auVar2) < sizeof(*in_ecx) ? sizeof(auVar2) : sizeof(*in_ecx));
  return (uint)param_2;
}

/* ref: hkMath::SquareRoot */
GEN_LIB GEN_FRAME float F_00d98800(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xd98800u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return SQRT(param_1);
}

/* ref: hkQuaternion::SetAxisAngle */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00d988a0(GEN_P(float * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd988a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = param_3 * REFG(float, 0x1088068);
  fVar4 = F_01052223(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits(fVar3))));
  fVar5 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  *param_1 = fVar4 * *param_2;
  param_1[1] = fVar4 * fVar5;
  param_1[2] = fVar4 * fVar1;
  param_1[3] = fVar4 * fVar2;
  fVar5 = F_01052372(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits(fVar3))));
  param_1[3] = fVar5;
  return fVar5;
}

/* ref: hkQuaternion::SetAxisAngleSimd */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00d988e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd988e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  
  fVar1 = F_00d988a0(this GEN_EDX_FWD,param_2,*param_3);
  return fVar1;
}

/* ref: hkQuaternion::SetAxisAngleApprox */
GEN_LIB GEN_FRAME unsigned int F_00d98900(GEN_P(float * in_eax, unsigned int gen_a0), GEN_P(float * in_ecx, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd98900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_eax = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (*in_eax + *(float *)&REFG(undefined, 0x1139110)) -
          gen_bits2f(-(uint)!(*in_eax + *(float *)&REFG(undefined, 0x1139110) < *(float *)&REFG(undefined, 0x11390f0)) &
                     *(uint *)&REFG(undefined, 0x11390e0));
  fVar3 = (in_eax[3] + *(float *)&REFG(undefined, 0x113911c)) -
          gen_bits2f(-(uint)!(in_eax[3] + *(float *)&REFG(undefined, 0x113911c) < *(float *)&REFG(undefined, 0x11390fc)) &
                     *(uint *)&REFG(undefined, 0x11390ec));
  fVar2 = (ABS(fVar1) * fVar1) * *(float *)&REFG(undefined, 0x11390c0) + *(float *)&REFG(undefined, 0x11390d0) * fVar1;
  fVar4 = (ABS(fVar3) * fVar3) * *(float *)&REFG(undefined, 0x11390cc) + *(float *)&REFG(undefined, 0x11390dc) * fVar3;
  fVar5 = (ABS(fVar4) * fVar4 - fVar4) * *(float *)&REFG(undefined, 0x11390bc);
  fVar2 = (ABS(fVar2) * fVar2 - fVar2) * *(float *)&REFG(undefined, 0x11390b0) + fVar2;
  fVar1 = in_ecx[1];
  fVar3 = in_ecx[2];
  *param_3 = fVar2 * *in_ecx;
  param_3[1] = fVar2 * fVar1;
  param_3[2] = fVar2 * fVar3;
  param_3[3] = fVar5 + fVar4;
  return 0;
}

/* ref: hkQuaternion::SetAxisAngleApprox_00d98990 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d98990(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd98990u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_3 * REFG(float, 0x1088068) + *(float *)&REFG(undefined, 0x1139110);
  fVar3 = param_3 * REFG(float, 0x1088068) + *(float *)&REFG(undefined, 0x113911c);
  fVar1 = fVar1 - gen_bits2f(-(uint)!(fVar1 < *(float *)&REFG(undefined, 0x11390f0)) & *(uint *)&REFG(undefined, 0x11390e0));
  fVar3 = fVar3 - gen_bits2f(-(uint)!(fVar3 < *(float *)&REFG(undefined, 0x11390fc)) & *(uint *)&REFG(undefined, 0x11390ec));
  fVar2 = (ABS(fVar1) * fVar1) * *(float *)&REFG(undefined, 0x11390c0) + *(float *)&REFG(undefined, 0x11390d0) * fVar1;
  fVar4 = (ABS(fVar3) * fVar3) * *(float *)&REFG(undefined, 0x11390cc) + *(float *)&REFG(undefined, 0x11390dc) * fVar3;
  fVar5 = (ABS(fVar4) * fVar4 - fVar4) * *(float *)&REFG(undefined, 0x11390bc);
  fVar2 = (ABS(fVar2) * fVar2 - fVar2) * *(float *)&REFG(undefined, 0x11390b0) + fVar2;
  fVar1 = param_2[1];
  fVar3 = param_2[2];
  *in_ecx = fVar2 * *param_2;
  in_ecx[1] = fVar2 * fVar1;
  in_ecx[2] = fVar2 * fVar3;
  in_ecx[3] = fVar5 + fVar4;
  return 0;
}

/* ref: hkQuaternion::SetAxisAngleApproxSimd */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d98a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd98a30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_2 * *(float *)&REFG(undefined, 0x1138bd0) + *(float *)&REFG(undefined, 0x1139110);
  fVar3 = param_2[3] * *(float *)&REFG(undefined, 0x1138bdc) + *(float *)&REFG(undefined, 0x113911c);
  fVar1 = fVar1 - gen_bits2f(-(uint)!(fVar1 < *(float *)&REFG(undefined, 0x11390f0)) & *(uint *)&REFG(undefined, 0x11390e0));
  fVar3 = fVar3 - gen_bits2f(-(uint)!(fVar3 < *(float *)&REFG(undefined, 0x11390fc)) & *(uint *)&REFG(undefined, 0x11390ec));
  fVar2 = (ABS(fVar1) * fVar1) * *(float *)&REFG(undefined, 0x11390c0) + fVar1 * *(float *)&REFG(undefined, 0x11390d0);
  fVar4 = (ABS(fVar3) * fVar3) * *(float *)&REFG(undefined, 0x11390cc) + fVar3 * *(float *)&REFG(undefined, 0x11390dc);
  fVar5 = (ABS(fVar4) * fVar4 - fVar4) * *(float *)&REFG(undefined, 0x11390bc);
  fVar2 = (ABS(fVar2) * fVar2 - fVar2) * *(float *)&REFG(undefined, 0x11390b0) + fVar2;
  fVar1 = param_1[1];
  fVar3 = param_1[2];
  *(float *)this = fVar2 * *param_1;
  *((float *)GEN_TOP(((int)this + 4))) = fVar2 * fVar1;
  *((float *)GEN_TOP(((int)this + 8))) = fVar2 * fVar3;
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar5 + fVar4;
  return 0;
}

/* ref: hkQuaternion::SetFromEulerAngles */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00d98be0(GEN_P(float * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xd98be0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = param_3 * REFG(float, 0x1088068);
  fVar1 = param_2 * REFG(float, 0x1088068);
  fVar6 = param_4 * REFG(float, 0x1088068);
  fVar2 = F_01052372(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits(fVar1))));
  fVar1 = F_01052223(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits(fVar1))));
  fVar3 = F_01052372(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits(fVar5))));
  fVar5 = F_01052223(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits(fVar5))));
  fVar4 = F_01052372(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits(fVar6))));
  fVar6 = F_01052223(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits(fVar6))));
  *param_1 = (fVar3 * fVar2) * fVar6 + (fVar5 * fVar1) * fVar4;
  param_1[1] = (fVar3 * fVar1) * fVar4 + (fVar5 * fVar2) * fVar6;
  param_1[2] = (fVar5 * fVar2) * fVar4 - (fVar3 * fVar1) * fVar6;
  param_1[3] = (fVar3 * fVar2) * fVar4 - (fVar5 * fVar1) * fVar6;
  return fVar6;
}

/* ref: hkQuaternion::SetFromEulerAnglesSimd */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00d98cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd98cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  
  fVar1 = F_00d98be0(this GEN_EDX_FWD,*param_2,*param_3,*param_4);
  return fVar1;
}

/* ref: hkQuaternion::SetFromEulerAnglesApprox */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d98d30(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xd98d30u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = param_2 * *(float *)&REFG(undefined, 0x1138bd0);
  fVar6 = param_3 * *(float *)&REFG(undefined, 0x1138bd4);
  fVar7 = param_4 * *(float *)&REFG(undefined, 0x1138bd8);
  fVar1 = fVar4 - gen_bits2f(-(uint)!(fVar4 < *(float *)&REFG(undefined, 0x11390f0)) & *(uint *)&REFG(undefined, 0x11390e0));
  fVar2 = fVar6 - gen_bits2f(-(uint)!(fVar6 < *(float *)&REFG(undefined, 0x11390f4)) & *(uint *)&REFG(undefined, 0x11390e4));
  fVar3 = fVar7 - gen_bits2f(-(uint)!(fVar7 < *(float *)&REFG(undefined, 0x11390f8)) & *(uint *)&REFG(undefined, 0x11390e8));
  fVar1 = (ABS(fVar1) * fVar1) * *(float *)&REFG(undefined, 0x11390c0) + fVar1 * *(float *)&REFG(undefined, 0x11390d0);
  fVar2 = (ABS(fVar2) * fVar2) * *(float *)&REFG(undefined, 0x11390c4) + fVar2 * *(float *)&REFG(undefined, 0x11390d4);
  fVar3 = (ABS(fVar3) * fVar3) * *(float *)&REFG(undefined, 0x11390c8) + fVar3 * *(float *)&REFG(undefined, 0x11390d8);
  fVar1 = (ABS(fVar1) * fVar1 - fVar1) * *(float *)&REFG(undefined, 0x11390b0) + fVar1;
  fVar2 = (ABS(fVar2) * fVar2 - fVar2) * *(float *)&REFG(undefined, 0x11390b4) + fVar2;
  fVar3 = (ABS(fVar3) * fVar3 - fVar3) * *(float *)&REFG(undefined, 0x11390b8) + fVar3;
  fVar4 = (*(float *)&REFG(undefined, 0x1139100) + fVar4) -
          gen_bits2f(-(uint)!(*(float *)&REFG(undefined, 0x1139100) + fVar4 < *(float *)&REFG(undefined, 0x11390f0)) &
                     *(uint *)&REFG(undefined, 0x11390e0));
  fVar6 = (*(float *)&REFG(undefined, 0x1139104) + fVar6) -
          gen_bits2f(-(uint)!(*(float *)&REFG(undefined, 0x1139104) + fVar6 < *(float *)&REFG(undefined, 0x11390f4)) &
                     *(uint *)&REFG(undefined, 0x11390e4));
  fVar7 = (*(float *)&REFG(undefined, 0x1139108) + fVar7) -
          gen_bits2f(-(uint)!(*(float *)&REFG(undefined, 0x1139108) + fVar7 < *(float *)&REFG(undefined, 0x11390f8)) &
                     *(uint *)&REFG(undefined, 0x11390e8));
  fVar4 = (ABS(fVar4) * fVar4) * *(float *)&REFG(undefined, 0x11390c0) + fVar4 * *(float *)&REFG(undefined, 0x11390d0);
  fVar6 = (ABS(fVar6) * fVar6) * *(float *)&REFG(undefined, 0x11390c4) + fVar6 * *(float *)&REFG(undefined, 0x11390d4);
  fVar7 = (ABS(fVar7) * fVar7) * *(float *)&REFG(undefined, 0x11390c8) + fVar7 * *(float *)&REFG(undefined, 0x11390d8);
  fVar4 = (ABS(fVar4) * fVar4 - fVar4) * *(float *)&REFG(undefined, 0x11390b0) + fVar4;
  fVar6 = (ABS(fVar6) * fVar6 - fVar6) * *(float *)&REFG(undefined, 0x11390b4) + fVar6;
  fVar7 = (ABS(fVar7) * fVar7 - fVar7) * *(float *)&REFG(undefined, 0x11390b8) + fVar7;
  fVar5 = gen_bits2f((uint)gen_fl2bits((fVar4 * fVar6) * fVar3) ^
                     *(uint *)&REFG(undefined, 0x1136d80) & *(uint *)&REFG(undefined, 0x1139030));
  fVar4 = gen_bits2f((uint)gen_fl2bits((fVar4 * fVar2) * fVar3) ^
                     *(uint *)&REFG(undefined, 0x1136d84) & *(uint *)&REFG(undefined, 0x1139034));
  fVar6 = gen_bits2f((uint)gen_fl2bits((fVar1 * fVar6) * fVar3) ^
                     *(uint *)&REFG(undefined, 0x1136d88) & *(uint *)&REFG(undefined, 0x1139038));
  fVar1 = gen_bits2f((uint)gen_fl2bits((fVar1 * fVar2) * fVar3) ^
                     *(uint *)&REFG(undefined, 0x1136d8c) & *(uint *)&REFG(undefined, 0x113903c));
  *in_ecx = fVar7 * fVar6 + fVar5;
  in_ecx[1] = fVar7 * fVar1 + fVar4;
  in_ecx[2] = fVar7 * fVar5 + fVar6;
  in_ecx[3] = fVar7 * fVar4 + fVar1;
  return;
}

/* ref: hkQuaternion::SetFromEulerAnglesApproxSimd */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d98e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd98e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *param_1 * *(float *)&REFG(undefined, 0x1138bd0);
  fVar5 = *param_2 * *(float *)&REFG(undefined, 0x1138bd4);
  fVar6 = *param_3 * *(float *)&REFG(undefined, 0x1138bd8);
  fVar1 = fVar4 - gen_bits2f(-(uint)!(fVar4 < *(float *)&REFG(undefined, 0x11390f0)) & *(uint *)&REFG(undefined, 0x11390e0));
  fVar2 = fVar5 - gen_bits2f(-(uint)!(fVar5 < *(float *)&REFG(undefined, 0x11390f4)) & *(uint *)&REFG(undefined, 0x11390e4));
  fVar3 = fVar6 - gen_bits2f(-(uint)!(fVar6 < *(float *)&REFG(undefined, 0x11390f8)) & *(uint *)&REFG(undefined, 0x11390e8));
  fVar1 = (ABS(fVar1) * fVar1) * *(float *)&REFG(undefined, 0x11390c0) + fVar1 * *(float *)&REFG(undefined, 0x11390d0);
  fVar2 = (ABS(fVar2) * fVar2) * *(float *)&REFG(undefined, 0x11390c4) + fVar2 * *(float *)&REFG(undefined, 0x11390d4);
  fVar3 = (ABS(fVar3) * fVar3) * *(float *)&REFG(undefined, 0x11390c8) + fVar3 * *(float *)&REFG(undefined, 0x11390d8);
  fVar1 = (ABS(fVar1) * fVar1 - fVar1) * *(float *)&REFG(undefined, 0x11390b0) + fVar1;
  fVar2 = (ABS(fVar2) * fVar2 - fVar2) * *(float *)&REFG(undefined, 0x11390b4) + fVar2;
  fVar3 = (ABS(fVar3) * fVar3 - fVar3) * *(float *)&REFG(undefined, 0x11390b8) + fVar3;
  fVar4 = (fVar4 + *(float *)&REFG(undefined, 0x1139100)) -
          gen_bits2f(-(uint)!(fVar4 + *(float *)&REFG(undefined, 0x1139100) < *(float *)&REFG(undefined, 0x11390f0)) &
                     *(uint *)&REFG(undefined, 0x11390e0));
  fVar5 = (fVar5 + *(float *)&REFG(undefined, 0x1139104)) -
          gen_bits2f(-(uint)!(fVar5 + *(float *)&REFG(undefined, 0x1139104) < *(float *)&REFG(undefined, 0x11390f4)) &
                     *(uint *)&REFG(undefined, 0x11390e4));
  fVar6 = (fVar6 + *(float *)&REFG(undefined, 0x1139108)) -
          gen_bits2f(-(uint)!(fVar6 + *(float *)&REFG(undefined, 0x1139108) < *(float *)&REFG(undefined, 0x11390f8)) &
                     *(uint *)&REFG(undefined, 0x11390e8));
  fVar4 = (ABS(fVar4) * fVar4) * *(float *)&REFG(undefined, 0x11390c0) + fVar4 * *(float *)&REFG(undefined, 0x11390d0);
  fVar5 = (ABS(fVar5) * fVar5) * *(float *)&REFG(undefined, 0x11390c4) + fVar5 * *(float *)&REFG(undefined, 0x11390d4);
  fVar6 = (ABS(fVar6) * fVar6) * *(float *)&REFG(undefined, 0x11390c8) + fVar6 * *(float *)&REFG(undefined, 0x11390d8);
  fVar4 = (ABS(fVar4) * fVar4 - fVar4) * *(float *)&REFG(undefined, 0x11390b0) + fVar4;
  fVar5 = (ABS(fVar5) * fVar5 - fVar5) * *(float *)&REFG(undefined, 0x11390b4) + fVar5;
  fVar6 = (ABS(fVar6) * fVar6 - fVar6) * *(float *)&REFG(undefined, 0x11390b8) + fVar6;
  fVar7 = gen_bits2f((uint)gen_fl2bits((fVar4 * fVar5) * fVar3) ^
                     *(uint *)&REFG(undefined, 0x1136d80) & *(uint *)&REFG(undefined, 0x1139030));
  fVar4 = gen_bits2f((uint)gen_fl2bits((fVar4 * fVar2) * fVar3) ^
                     *(uint *)&REFG(undefined, 0x1136d84) & *(uint *)&REFG(undefined, 0x1139034));
  fVar5 = gen_bits2f((uint)gen_fl2bits((fVar1 * fVar5) * fVar3) ^
                     *(uint *)&REFG(undefined, 0x1136d88) & *(uint *)&REFG(undefined, 0x1139038));
  fVar1 = gen_bits2f((uint)gen_fl2bits((fVar1 * fVar2) * fVar3) ^
                     *(uint *)&REFG(undefined, 0x1136d8c) & *(uint *)&REFG(undefined, 0x113903c));
  *(float *)this = fVar6 * fVar5 + fVar7;
  *((float *)GEN_TOP(((int)this + 4))) = fVar6 * fVar1 + fVar4;
  *((float *)GEN_TOP(((int)this + 8))) = fVar6 * fVar7 + fVar5;
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar6 * fVar4 + fVar1;
  return 0;
}

/* ref: hkQuaternion::IsOk */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d98fb0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd98fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 in_EAX = 0;
  int iVar6;
  
  fVar2 = *in_ecx;
  fVar3 = in_ecx[1];
  fVar4 = in_ecx[2];
  fVar5 = in_ecx[3];
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)GEN_ISNAN(fVar3);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)GEN_ISNAN(fVar2);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)GEN_ISNAN(fVar4);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)GEN_ISNAN(fVar5);
  iVar6 = gen_movmskps(&(auVar1));
  if ((iVar6 == 0) &&
     (!(*(float *)&REFG(undefined, 0x1139090) <=
       ABS(((fVar5 * fVar5 + fVar3 * fVar3) + (fVar4 * fVar4 + fVar2 * fVar2)) -
           *(float *)&REFG(undefined, 0x1138af0))))) {
    return 1;
  }
  return 0;
}

/* ref: hkQuaternion::SetFromRotation */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d991c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd991c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  float * pfVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = *param_1;
  fVar7 = param_1[5];
  fVar8 = param_1[10];
  fVar5 = (fVar6 + fVar7) + fVar8;
  (*(float * PTR32 *)(gen_frame + 0x28)) = this;
  if (*(float *)&REFG(undefined, 0x1088114) < fVar5) {
    fVar7 = SQRT(fVar5 + REFG(float, 0x1087f04));
    fVar6 = REFG(float, 0x1088068) / fVar7;
    fVar7 = fVar7 * REFG(float, 0x1088068);
    fVar8 = (param_1[6] - param_1[9]) * fVar6;
    ((float *)(gen_frame + 0x0))[0] = fVar8;
    fVar5 = (param_1[8] - param_1[2]) * fVar6;
    ((float *)(gen_frame + 0x0))[1] = fVar5;
    fVar6 = (param_1[1] - param_1[4]) * fVar6;
    ((float *)(gen_frame + 0x0))[2] = fVar6;
    ((float *)(gen_frame + 0x0))[3] = fVar7;
    *(float *)this = fVar8;
    *((float *)GEN_TOP(((int)this + 4))) = fVar5;
    *((float *)GEN_TOP(((int)this + 8))) = fVar6;
    *((float *)GEN_TOP(((int)this + 0xc))) = fVar7;
    return (uint)param_1;
  }
  ((int *)(gen_frame + 0x1c))[0] = 1;
  ((int *)(gen_frame + 0x1c))[1] = 2;
  ((int *)(gen_frame + 0x1c))[2] = 0;
  uVar4 = (uint)((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && !(fVar7 <= fVar6));
  pfVar1 = param_1 + uVar4 * 5;
  if ((!GEN_ISNAN(fVar8) && !GEN_ISNAN(*pfVar1)) && (!(fVar8 < *pfVar1) && fVar8 != *pfVar1)) {
    uVar4 = 2;
  }
  iVar2 = ((int *)(gen_frame + 0x1c))[(int)(((int *)(gen_frame + 0x1c))[(int)(uVar4)])];
  (*(int *)(gen_frame + 0x2c)) = iVar2;
  iVar3 = ((int *)(gen_frame + 0x1c))[(int)(uVar4)];
  fVar7 = SQRT((param_1[uVar4 * 5] - (param_1[iVar2 * 5] + param_1[((int *)(gen_frame + 0x1c))[(int)(uVar4)] * 5])) +
               REFG(float, 0x1087f04));
  fVar6 = REFG(float, 0x1088068) / fVar7;
  ((float *)(gen_frame + 0x0))[(int)(uVar4)] = fVar7 * REFG(float, 0x1088068);
  ((float *)(gen_frame + 0x0))[3] = (param_1[iVar2 + iVar3 * 4] - param_1[iVar3 + iVar2 * 4]) * fVar6;
  ((float *)(gen_frame + 0x0))[(int)(iVar3)] = (param_1[uVar4 + iVar3 * 4] + param_1[iVar3 + uVar4 * 4]) * fVar6;
  ((float *)(gen_frame + 0x0))[(int)((*(int *)(gen_frame + 0x2c)))] = (param_1[uVar4 + (*(int *)(gen_frame + 0x2c)) * 4] + param_1[(*(int *)(gen_frame + 0x2c)) + uVar4 * 4]) * fVar6;
  *(*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)(gen_frame + 0x0))[0];
  (*(float * PTR32 *)(gen_frame + 0x28))[1] = ((float *)(gen_frame + 0x0))[1];
  (*(float * PTR32 *)(gen_frame + 0x28))[2] = ((float *)(gen_frame + 0x0))[2];
  (*(float * PTR32 *)(gen_frame + 0x28))[3] = ((float *)(gen_frame + 0x0))[3];
  return (uint)(*(float * PTR32 *)(gen_frame + 0x28));
}

/* ref: hkVector4::SetPerpendicularNormalized */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d99360(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd99360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar6 = *param_2;
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar1 = param_2[3];
  fVar12 = *(float *)&REFG(undefined, 0x1138af8) * fVar7 - *(float *)&REFG(undefined, 0x1138af4) * fVar8;
  fVar15 = *(float *)&REFG(undefined, 0x1138af0) * fVar8 - *(float *)&REFG(undefined, 0x1138af8) * fVar6;
  fVar16 = *(float *)&REFG(undefined, 0x1138af4) * fVar6 - *(float *)&REFG(undefined, 0x1138af0) * fVar7;
  fVar17 = (float)REFG(undefined8, 0x1138c78) * fVar7 - (*(float *)((char *)&REFG(float, 0x1138c70) + 4)) * fVar8;
  fVar18 = (float)REFG(float, 0x1138c70) * fVar8 - (float)REFG(undefined8, 0x1138c78) * fVar6;
  fVar19 = (*(float *)((char *)&REFG(float, 0x1138c70) + 4)) * fVar6 - (float)REFG(float, 0x1138c70) * fVar7;
  fVar9 = fVar17 * fVar17;
  fVar10 = fVar18 * fVar18;
  fVar11 = fVar19 * fVar19;
  fVar6 = fVar12 * fVar12;
  fVar7 = fVar15 * fVar15;
  fVar8 = fVar16 * fVar16;
  uVar2 = -(uint)((fVar7 + fVar6) + fVar8 < (fVar10 + fVar9) + fVar11);
  uVar3 = -(uint)((fVar7 + fVar6) + fVar8 < (fVar10 + fVar9) + fVar11);
  uVar4 = -(uint)((fVar7 + fVar6) + fVar8 < (fVar10 + fVar9) + fVar11);
  uVar5 = -(uint)((fVar7 + fVar6) + fVar8 < (fVar10 + fVar9) + fVar11);
  fVar17 = gen_bits2f(uVar2 & (uint)gen_fl2bits(fVar17) | ~uVar2 & (uint)gen_fl2bits(fVar12));
  fVar18 = gen_bits2f(uVar3 & (uint)gen_fl2bits(fVar18) | ~uVar3 & (uint)gen_fl2bits(fVar15));
  fVar16 = gen_bits2f(uVar4 & (uint)gen_fl2bits(fVar19) | ~uVar4 & (uint)gen_fl2bits(fVar16));
  fVar6 = fVar17 * fVar17;
  fVar7 = fVar18 * fVar18;
  fVar8 = fVar16 * fVar16;
  fVar9 = (fVar7 + fVar6) + fVar8;
  fVar10 = (fVar7 + fVar6) + fVar8;
  fVar11 = (fVar7 + fVar6) + fVar8;
  fVar8 = (fVar7 + fVar6) + fVar8;
  memset(&auVar13, 0, 12);
  (*(undefined4 *)((char *)&auVar13 + 12)) = 0;
  (*(undefined4 *)((char *)&auVar14 + 4)) = (undefined4)gen_fl2bits(fVar10);
  (*(undefined4 *)((char *)&auVar14 + 0)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar14 + 8)) = (undefined4)gen_fl2bits(fVar11);
  (*(undefined4 *)((char *)&auVar14 + 12)) = (undefined4)gen_fl2bits(fVar8);
  gen_rsqrtps(&(auVar14), &(auVar13), &(auVar14));
  fVar6 = (*(float *)((char *)&auVar14 + 0));
  fVar7 = (*(float *)((char *)&auVar14 + 4));
  fVar12 = (*(float *)((char *)&auVar14 + 8));
  fVar15 = (*(float *)((char *)&auVar14 + 12));
  uVar2 = (uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar10 <= 0.0) &
                                       (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1139074) -
                                                         (fVar7 * fVar10) * fVar7) *
                                                         (*(float *)&REFG(undefined, 0x1139084) * fVar7))) *
                            fVar18) & *(uint *)&REFG(undefined, 0x10abc24);
  uVar3 = (uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar11 <= 0.0) &
                                       (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1139078) -
                                                         (fVar12 * fVar11) * fVar12) *
                                                         (*(float *)&REFG(undefined, 0x1139088) * fVar12))) *
                            fVar16) & *(uint *)&REFG(undefined, 0x10abc28);
  uVar4 = (uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar8 <= 0.0) &
                                       (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113907c) -
                                                         (fVar15 * fVar8) * fVar15) *
                                                         (*(float *)&REFG(undefined, 0x113908c) * fVar15))) *
                            gen_bits2f(uVar5 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138c78) + 4)) * fVar1 -
                                                                 (*(float *)((char *)&REFG(undefined8, 0x1138c78) + 4)) * fVar1) |
                                       ~uVar5 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc) * fVar1 -
                                                                  *(float *)&REFG(undefined, 0x1138afc) * fVar1)))
          & *(uint *)&REFG(undefined, 0x10abc2c);
  *in_ecx = (uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar9 <= 0.0) &
                                         (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1139070) -
                                                           (fVar6 * fVar9) * fVar6) *
                                                           (*(float *)&REFG(undefined, 0x1139080) * fVar6))) *
                              fVar17) & *(uint *)&REFG(undefined, 0x10abc20);
  in_ecx[1] = uVar2;
  in_ecx[2] = uVar3;
  in_ecx[3] = uVar4;
  return 0;
}

/* ref: hkVector4::SetXYZW */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d998a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd998a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_2;
  uVar2 = *param_4;
  uVar3 = *param_3;
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = uVar2;
  return (uint)param_3;
}

/* ref: hkSimdReal::IsLess */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d998f0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd998f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  return !(*param_2 <= *in_ecx);
}

/* ref: hkSimdReal::IsGreater */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d99910(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd99910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  
  fVar1 = *in_ecx;
  return (!GEN_ISNAN(fVar1) && !GEN_ISNAN(*param_2)) && (!(fVar1 < *param_2) && fVar1 != *param_2);
}

/* ref: hkVector4::SetFlipSign_00d99930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d99930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd99930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_2[1] & *(uint *)&REFG(undefined, 0x1139124);
  uVar5 = param_2[2] & *(uint *)&REFG(undefined, 0x1139128);
  uVar6 = param_2[3] & *(uint *)&REFG(undefined, 0x113912c);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(uint *)this = *param_2 & *(uint *)&REFG(undefined, 0x1139120) ^ *param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar4 ^ uVar1;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar5 ^ uVar2;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar6 ^ uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d99950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d99950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd99950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_2[1] & *(uint *)&REFG(undefined, 0x1139134);
  uVar5 = param_2[2] & *(uint *)&REFG(undefined, 0x1139138);
  uVar6 = param_2[3] & *(uint *)&REFG(undefined, 0x113913c);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(uint *)this = *param_2 & *(uint *)&REFG(undefined, 0x1139130) ^ *param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar4 ^ uVar1;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar5 ^ uVar2;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar6 ^ uVar3;
  return (uint)param_2;
}

/* ref: hkVector4::SetPerpendicular */
GEN_LIB GEN_FRAME unsigned int F_00d99970(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd99970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
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
  
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar19 = param_1[3];
  fVar18 = *(float *)&REFG(undefined, 0x1138afc) * fVar19;
  fVar14 = *(float *)&REFG(undefined, 0x1138afc) * fVar19;
  fVar11 = *(float *)&REFG(undefined, 0x1138af8) * fVar6 - *(float *)&REFG(undefined, 0x1138af4) * fVar7;
  fVar12 = *(float *)&REFG(undefined, 0x1138af0) * fVar7 - *(float *)&REFG(undefined, 0x1138af8) * fVar5;
  fVar13 = *(float *)&REFG(undefined, 0x1138af4) * fVar5 - *(float *)&REFG(undefined, 0x1138af0) * fVar6;
  fVar20 = (*(float *)((char *)&REFG(undefined8, 0x1138c78) + 4)) * fVar19;
  fVar19 = (*(float *)((char *)&REFG(undefined8, 0x1138c78) + 4)) * fVar19;
  fVar15 = (float)REFG(undefined8, 0x1138c78) * fVar6 - (*(float *)((char *)&REFG(float, 0x1138c70) + 4)) * fVar7;
  fVar16 = (float)REFG(float, 0x1138c70) * fVar7 - (float)REFG(undefined8, 0x1138c78) * fVar5;
  fVar17 = (*(float *)((char *)&REFG(float, 0x1138c70) + 4)) * fVar5 - (float)REFG(float, 0x1138c70) * fVar6;
  fVar8 = fVar15 * fVar15;
  fVar9 = fVar16 * fVar16;
  fVar10 = fVar17 * fVar17;
  fVar5 = fVar11 * fVar11;
  fVar6 = fVar12 * fVar12;
  fVar7 = fVar13 * fVar13;
  uVar1 = -(uint)((fVar6 + fVar5) + fVar7 < (fVar9 + fVar8) + fVar10);
  uVar2 = -(uint)((fVar6 + fVar5) + fVar7 < (fVar9 + fVar8) + fVar10);
  uVar3 = -(uint)((fVar6 + fVar5) + fVar7 < (fVar9 + fVar8) + fVar10);
  uVar4 = -(uint)((fVar6 + fVar5) + fVar7 < (fVar9 + fVar8) + fVar10);
  *param_2 = uVar1 & (uint)gen_fl2bits(fVar15) | ~uVar1 & (uint)gen_fl2bits(fVar11);
  param_2[1] = uVar2 & (uint)gen_fl2bits(fVar16) | ~uVar2 & (uint)gen_fl2bits(fVar12);
  param_2[2] = uVar3 & (uint)gen_fl2bits(fVar17) | ~uVar3 & (uint)gen_fl2bits(fVar13);
  param_2[3] = uVar4 & (uint)gen_fl2bits(fVar19 - fVar20) |
               ~uVar4 & (uint)gen_fl2bits(fVar14 - fVar18);
  return 0;
}

/* ref: hkVector4::Assign */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d99a10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd99a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d99d80 */
GEN_LIB GEN_FRAME uint F_00d99d80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd99d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d99d90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d99d90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd99d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1139244));
  F_00d91350(in_ecx + 2 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00d99db0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d99db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd99db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d91510(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00d99dd0 */
GEN_LIB GEN_FRAME uint F_00d99dd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd99dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d99e00 */
GEN_LIB GEN_FRAME uint F_00d99e00(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd99e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1139244));
    uVar1 = F_00d91350(param_1 + 2 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00d99e20 */
GEN_LIB GEN_FRAME uint F_00d99e20(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd99e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d99e30 */
GEN_LIB GEN_NOFRAME uint F_00d99e30(void)
{
  GEN_ENTER(0xd99e30u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x18, 8);
  
  F_00d91350(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return 0x1139244;
}

/* ref: FUN_00d99e80 */
GEN_LIB GEN_FRAME uint F_00d99e80(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd99e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d99e90 */
GEN_LIB GEN_FRAME uint F_00d99e90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd99e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x1139254));
    uVar1 = F_00d91350(param_1 + 0x19 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00d99eb0 */
GEN_LIB GEN_NOFRAME uint F_00d99eb0(void)
{
  GEN_ENTER(0xd99eb0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x1c, 4);
  
  F_00d91350(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return 0x1139254;
}

/* ref: Global::DeallocateArray4_00d99f20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d99f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd99f20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: Global::FreeSizedBlock */
GEN_LIB GEN_FRAME uint F_00d99f50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd99f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00d99f80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d99f80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd99f80u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d99fc0 */
GEN_LIB GEN_FRAME uint F_00d99fc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd99fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkLocalFrameGroup::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d99ff0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd99ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d91510(param_1 + 2 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00d9a050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a050u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9a090 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a090u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9a0d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a0d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9a110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a110(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[15])REFP(0x1139254));
  F_00d91350(in_ecx + 0x19 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: hkSimpleLocalFrame::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x5c)));
}

/* ref: hkSimpleLocalFrame::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a140(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x5c))) = param_2;
  return param_2;
}

/* ref: hkSimpleLocalFrame::vf12 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x60)));
}

/* ref: FUN_00d9a160 */
GEN_LIB GEN_FRAME uint F_00d9a160(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkSimpleLocalFrame::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a190(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 100))) & 0xfffffffe;
}

/* ref: hkSimpleLocalFrame::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a1a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00da9830(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00d9a1e0 */
GEN_LIB GEN_FRAME uint F_00d9a1e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9a1f0 */
GEN_LIB GEN_FRAME uint F_00d9a1f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9a200 */
GEN_LIB GEN_FRAME uint F_00d9a200(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9a210 */
GEN_LIB GEN_FRAME uint F_00d9a210(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9a220 */
GEN_LIB GEN_FRAME uint F_00d9a220(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: Global::ConstructAtA */
GEN_LIB GEN_FRAME unsigned int F_00d9a240(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00da9ae0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: Global::ConstructAtB */
GEN_LIB GEN_FRAME unsigned int F_00d9a270(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00dada40(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: Global::DestroyObjectA */
GEN_LIB GEN_FRAME uint F_00d9a2c0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: Global::ConstructAtC */
GEN_LIB GEN_FRAME unsigned int F_00d9a2d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00d91350(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: Global::ConstructAtD */
GEN_LIB GEN_FRAME unsigned int F_00d9a2f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00d91350(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: Global::DestroyPairValue */
GEN_LIB GEN_FRAME uint F_00d9a310(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d91510(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Global::DestroyElementA */
GEN_LIB GEN_FRAME uint F_00d9a320(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d91510(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: Global::DestroyElementB */
GEN_LIB GEN_FRAME uint F_00d9a330(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d91510(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00d9a340 */
GEN_LIB GEN_FRAME uint F_00d9a340(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1139470));
  }
  return (uint)param_1;
}

/* ref: FUN_00d9a360 */
GEN_LIB GEN_NOFRAME uint F_00d9a360(void)
{
  GEN_ENTER(0xd9a360u, 0u, 0u, 0u, 0u);
  return 0x1139470;
}

/* ref: Global::DestroyArray16Object */
GEN_LIB GEN_FRAME uint F_00d9a370(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d9a9d0(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: Global::DeallocateArray16_00d9a410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9a410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: Global::DeallocateArray8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9a440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: Global::FreeObject12 */
GEN_LIB GEN_FRAME unsigned int F_00d9a460(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Global::FreeObject16 */
GEN_LIB GEN_FRAME unsigned int F_00d9a490(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Global::FreeObject36 */
GEN_LIB GEN_FRAME unsigned int F_00d9a4c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a4c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00d9a4f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a4f0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d91350(in_ecx GEN_EDX_FWD,param_2);
  return in_ecx;
}

/* ref: Global::FreeObject8 */
GEN_LIB GEN_FRAME unsigned int F_00d9a510(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00d9a540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a540(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d91350(in_ecx GEN_EDX_FWD,param_2);
  return in_ecx;
}

/* ref: Global::ScalarDeletingDestructor_00d9a560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a560(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d91510(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return param_1;
}

/* ref: Global::ScalarDeletingDestructor_00d9a5a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a5a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d91510(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x24);
  }
  return (uint)param_1;
}

/* ref: Global::ScalarDeletingDestructor_00d9a5e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a5e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d91510(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,8);
  }
  return (uint)param_1;
}

/* ref: Global::DestroyRange16 */
GEN_LIB GEN_FRAME unsigned int F_00d9a630(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = ((undefined *)GEN_TOP((param_1 + 8 + iVar1 * 0x10)));
    do {
      F_00d91510(this GEN_EDX_ARG);
      this = ((undefined *)GEN_TOP(((int)this - 0x10)));
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: Global::DestroyRange8 */
GEN_LIB GEN_FRAME unsigned int F_00d9a660(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = ((undefined *)GEN_TOP((param_1 + iVar1 * 8)));
    do {
      F_00d91510(this GEN_EDX_ARG);
      this = ((undefined *)GEN_TOP(((int)this - 8)));
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: Global::ClearArray16 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((uVar1 + 8 + iVar2 * 0x10)));
    do {
      uVar1 = F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x10)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return uVar1;
}

/* ref: Global::ClearArray8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a6c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((uVar1 + iVar2 * 8)));
    do {
      uVar1 = F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return uVar1;
}

/* ref: Global::FreeArray16WithAllocator */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + 8 + iVar2 * 0x10)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x10)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d9a750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 8)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d9a7b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + 8 + iVar2 * 0x10)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x10)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d9a810 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 8)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d9a870 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + 8 + iVar2 * 0x10)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x10)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d9a8d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 8)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d9a940 */
GEN_LIB GEN_FRAME uint F_00d9a940(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00d9a970 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2 * 8)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: Global::FreeArray16_00d9a9d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a9d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + 8 + iVar2 * 0x10)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x10)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkMonitorStreamColorTable::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9aa30(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9aa30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d9a970(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: Global::ScalarDeletingDestructor_00d9aa70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9aa70(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9aa70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d9a9d0(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return (uint)param_1;
}

/* ref: FUN_00d9aac0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9aac0(void)
{
  GEN_ENTER(0xd9aac0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9aae0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9aae0(void)
{
  GEN_ENTER(0xd9aae0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ab00 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9ab00(void)
{
  GEN_ENTER(0xd9ab00u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ab20 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9ab20(void)
{
  GEN_ENTER(0xd9ab20u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ab40 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9ab40(void)
{
  GEN_ENTER(0xd9ab40u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ab60 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9ab60(void)
{
  GEN_ENTER(0xd9ab60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ab80 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9ab80(void)
{
  GEN_ENTER(0xd9ab80u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9aba0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9aba0(void)
{
  GEN_ENTER(0xd9aba0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9abc0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9abc0(void)
{
  GEN_ENTER(0xd9abc0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9abe0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9abe0(void)
{
  GEN_ENTER(0xd9abe0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ac00 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9ac00(void)
{
  GEN_ENTER(0xd9ac00u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ac20 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9ac20(void)
{
  GEN_ENTER(0xd9ac20u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ac40 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9ac40(void)
{
  GEN_ENTER(0xd9ac40u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ac60 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9ac60(void)
{
  GEN_ENTER(0xd9ac60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ac80 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9ac80(void)
{
  GEN_ENTER(0xd9ac80u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ac90 */
GEN_LIB GEN_FRAME uint F_00d9ac90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ac90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9acb0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9acb0(void)
{
  GEN_ENTER(0xd9acb0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9acc0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9acc0(void)
{
  GEN_ENTER(0xd9acc0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9acd0 */
GEN_LIB GEN_FRAME uint F_00d9acd0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9acd0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9ad20 */
GEN_LIB GEN_FRAME uint F_00d9ad20(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9ad20u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9ad70 */
GEN_LIB GEN_FRAME uint F_00d9ad70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ad70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9ad80 */
GEN_LIB GEN_FRAME unsigned int F_00d9ad80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9ad80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00d9adb0 */
GEN_LIB GEN_FRAME unsigned int F_00d9adb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9adb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00d9ade0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9ade0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9ade0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9ae20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9ae20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9ae20u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9ae60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ae60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ae60u, gen_a0, gen_a1, 0u, 0u);
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
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00d9aef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9aef0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9aef0u, gen_a0, gen_a1, 0u, 0u);
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
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00d9af60 */
GEN_LIB GEN_FRAME uint F_00d9af60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9af60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9af70 */
GEN_LIB GEN_FRAME uint F_00d9af70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9af70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: Global::ConstructAtE */
GEN_LIB GEN_FRAME unsigned int F_00d9afa0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9afa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00db19a0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: Global::DestroyObjectB */
GEN_LIB GEN_FRAME uint F_00d9afc0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9afc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d9afd0 */
GEN_LIB GEN_NOFRAME uint F_00d9afd0(void)
{
  GEN_ENTER(0xd9afd0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x30, 0);
  
  F_00db19a0(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00d9b000 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b000(void)
{
  GEN_ENTER(0xd9b000u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Global::ReleaseRefPtr_00d9b010 */
GEN_LIB GEN_FRAME unsigned int F_00d9b010(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9b010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_ARG);
  }
  *param_1 = 0;
  return;
}

/* ref: Global::FreeObject8_00d9b030 */
GEN_LIB GEN_FRAME unsigned int F_00d9b030(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9b030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: hkRefPtr::~RefPtr */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9b070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9b070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: hkRefPtr::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9b090(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b090u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9b0e0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b0e0(void)
{
  GEN_ENTER(0xd9b0e0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b0f0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b0f0(void)
{
  GEN_ENTER(0xd9b0f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b100 */
GEN_LIB GEN_FRAME uint F_00d9b100(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9b130 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b130(void)
{
  GEN_ENTER(0xd9b130u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b150 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b150(void)
{
  GEN_ENTER(0xd9b150u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b170 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b170(void)
{
  GEN_ENTER(0xd9b170u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b180 */
GEN_LIB GEN_FRAME uint F_00d9b180(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9b1a0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b1a0(void)
{
  GEN_ENTER(0xd9b1a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b1c0 */
GEN_LIB GEN_FRAME unsigned int F_00d9b1c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b1c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00db2110(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00d9b1e0 */
GEN_LIB GEN_FRAME uint F_00d9b1e0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9b1e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d9b340(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: hkMemoryAllocator::BufFree16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9b210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9b210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: Global::FreeObject18 */
GEN_LIB GEN_FRAME unsigned int F_00d9b240(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9b240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: hkArray::ClearAndDeallocate16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9b280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::~Array16 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9b2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9b2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::~Array16b */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9b300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9b300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::DestroyPairArrays */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9b340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9b340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xc))),iVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: Global::ScalarDeletingDestructor_00d9b3c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9b3c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d9b340(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x18);
  }
  return (uint)param_1;
}

/* ref: FUN_00d9b410 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b410(void)
{
  GEN_ENTER(0xd9b410u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b430 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b430(void)
{
  GEN_ENTER(0xd9b430u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b450 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b450(void)
{
  GEN_ENTER(0xd9b450u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b470 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b470(void)
{
  GEN_ENTER(0xd9b470u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b490 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b490(void)
{
  GEN_ENTER(0xd9b490u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b4b0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b4b0(void)
{
  GEN_ENTER(0xd9b4b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b4d0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b4d0(void)
{
  GEN_ENTER(0xd9b4d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b4f0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b4f0(void)
{
  GEN_ENTER(0xd9b4f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b510 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b510(void)
{
  GEN_ENTER(0xd9b510u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b530 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b530(void)
{
  GEN_ENTER(0xd9b530u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b550 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b550(void)
{
  GEN_ENTER(0xd9b550u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b570 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b570(void)
{
  GEN_ENTER(0xd9b570u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b580 */
GEN_LIB GEN_FRAME uint F_00d9b580(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9b5a0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b5a0(void)
{
  GEN_ENTER(0xd9b5a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: hkArray::DestroyArray4 */
GEN_LIB GEN_FRAME uint F_00d9b5b0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9b5b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9b600 */
GEN_LIB GEN_FRAME unsigned int F_00d9b600(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9b600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00d9b630 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9b630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9b630u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9b680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9b680(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b680u, gen_a0, gen_a1, 0u, 0u);
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
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00d9b700 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b700(void)
{
  GEN_ENTER(0xd9b700u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b720 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b720(void)
{
  GEN_ENTER(0xd9b720u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b740 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b740(void)
{
  GEN_ENTER(0xd9b740u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b750 */
GEN_LIB GEN_FRAME uint F_00d9b750(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9b770 */
GEN_LIB GEN_FRAME uint F_00d9b770(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9b770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x109944c));
  }
  return (uint)param_1;
}

/* ref: Global::CallDestructor */
GEN_LIB GEN_FRAME uint F_00d9b790(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9b790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d9b7a0 */
GEN_LIB GEN_NOFRAME uint F_00d9b7a0(void)
{
  GEN_ENTER(0xd9b7a0u, 0u, 0u, 0u, 0u);
  return 0x109944c;
}

/* ref: FUN_00d9b7c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9b7c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9b7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[11])REFP(0x10e15e4));
  return;
}

/* ref: hkMemoryAllocator::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9b7d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b7d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD,*param_1);
  return uVar1;
}

/* ref: hkMemoryAllocator::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9b7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd9b7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: hkMemoryAllocator::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9b800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9b800u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD,param_3);
      *((uint *)GEN_TOP((param_1 + iVar2 * 4))) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return;
}

/* ref: hkMemoryAllocator::vf7 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9b830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9b830u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      iVar1 = *((int *)GEN_TOP((param_1 + iVar2 * 4)));
      if (iVar1 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD,iVar1,param_3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return;
}

/* ref: hkMemoryAllocator::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9b880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9b880u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  uint uVar1;
  int iVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_3);
  if (uVar1 != 0) {
    iVar2 = *param_3;
    if (param_2 < iVar2) {
      iVar2 = param_2;
    }
    F_00da3710(uVar1,param_1,iVar2);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00d9b8d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9b8d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00d9b8e0 */
GEN_LIB GEN_FRAME uint F_00d9b8e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9b8e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x15da498) = param_1;
  return param_1;
}

/* ref: FUN_00d9b8f0 */
GEN_LIB GEN_NOFRAME uint F_00d9b8f0(void)
{
  GEN_ENTER(0xd9b8f0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15da498);
}

/* ref: FUN_00d9b910 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9b910(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9b910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[24])REFP(0x113bcdc));
  return;
}

/* ref: hkMemorySystem::vf13 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9b920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: hkMemorySystem::vf14 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b930(void)
{
  GEN_ENTER(0xd9b930u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: hkMemorySystem::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9b940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: hkMemorySystem::vf6 */
GEN_LIB GEN_NOFRAME uint F_00d9b950(void)
{
  GEN_ENTER(0xd9b950u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: hkMemorySystem::vf7 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d9b960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: hkMemorySystem::vf8 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d9b970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: hkMemorySystem::vf15 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9b980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd9b980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG,pvVar1);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: hkMemorySystem::vf16 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b9c0(void)
{
  GEN_ENTER(0xd9b9c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: hkMemorySystem::vf17 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9b9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9b9d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: hkMemorySystem::vf18 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9b9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: hkMemorySystem::vf19 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9b9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: hkMemorySystem::vf20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9ba00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ba00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: hkMemorySystem::vf21 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9ba10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9ba10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: hkMemorySystem::vf22 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9ba20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd9ba20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 1;
}

/* ref: hkMemorySystem::vf23 */
GEN_LIB GEN_NOFRAME uint F_00d9ba30(void)
{
  GEN_ENTER(0xd9ba30u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: hkMemorySystem::vf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9ba40(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ba40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  
  F_00d9b910(in_ecx GEN_EDX_FWD);
  return ((uint)(uint)(in_ecx));
}

/* ref: hkBaseSystem::InitThread */
GEN_LIB GEN_FRAME uint F_00d9ba60(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9ba60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00d92510(param_1);
  F_00da1340();
  return 0;
}

/* ref: hkBaseSystem::IsInitialized */
GEN_LIB GEN_FRAME uint F_00d9ba80(GEN_P(undefined1 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9ba80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  *param_1 = REFG(undefined1, 0x15da4a0);
  return (uint)param_1;
}

/* ref: Global::GetNumHardwareThreads */
GEN_LIB GEN_FRAME unsigned int F_00d9baa0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9baa0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  GEN_FRAME_DECL_TOP(0xc28, 8, 4);
  DWORD * pDVar1;
  DWORD DVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  DWORD * pDVar4;
  
  gen_imp_GetSystemInfo(&(*(_SYSTEM_INFO *)(gen_frame + 0xc00)));
  pDVar1 = (*(DWORD * PTR32 *)&gen_args[0]);
  DVar2 = (*(_SYSTEM_INFO *)(gen_frame + 0xc00)).dwNumberOfProcessors;
  if (0xb < (int)(*(_SYSTEM_INFO *)(gen_frame + 0xc00)).dwNumberOfProcessors) {
    DVar2 = 0xc;
  }
  *(*(DWORD * PTR32 *)&gen_args[0]) = DVar2;
  hModule = gen_imp_LoadLibraryA(((char *)REFP(0x113bd94)));
  if (hModule != (HMODULE)0x0) {
    pFVar3 = gen_imp_GetProcAddress(hModule,((char *)REFP(0x113bd74)));
    if (pFVar3 != (FARPROC)0x0) {
      (*(DWORD * PTR32 *)&gen_args[0]) = ((DWORD *)GEN_TOP(0x0));
      ((code *)pFVar3)(0,&(*(DWORD * PTR32 *)&gen_args[0]));
      if ((*(DWORD * PTR32 *)&gen_args[0]) < ((DWORD *)GEN_TOP(0xc01))) {
        ((code *)pFVar3)(((undefined1 *)(gen_frame + 0x0)),&(*(DWORD * PTR32 *)&gen_args[0]));
        pDVar4 = ((DWORD *)GEN_TOP(0x0));
        DVar2 = 0;
        if ((*(DWORD * PTR32 *)&gen_args[0]) != ((DWORD *)GEN_TOP(0x0))) {
          do {
            if (*((int *)GEN_TOP(((int)((int *)(gen_frame + 0x4)) + (int)pDVar4))) == 0) {
              DVar2 = DVar2 + 1;
            }
            pDVar4 = pDVar4 + 6;
          } while (pDVar4 < (*(DWORD * PTR32 *)&gen_args[0]));
        }
        *pDVar1 = DVar2;
      }
    }
    gen_imp_FreeLibrary(hModule);
  }
  return 0;
}

/* ref: hkBaseSystem::QuitThread */
GEN_LIB GEN_NOFRAME uint F_00d9bb50(void)
{
  GEN_ENTER(0xd9bb50u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  if (pvVar1 != (LPVOID)0x0) {
    F_00da1380(pvVar1);
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (pvVar1 != (LPVOID)0x0) {
    F_00d92510(0);
  }
  return 0;
}

/* ref: FUN_00d9bb90 */
GEN_LIB GEN_NOFRAME uint F_00d9bb90(void)
{
  GEN_ENTER(0xd9bb90u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  undefined4 * puVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,8)));
  puVar2[1] = 0x10008;
  *puVar2 = (*(undefined * PTR32 (*)[4])REFP(0x113bda8));
  return (uint)puVar2;
}

/* ref: FUN_00d9bbc0 */
GEN_LIB GEN_FRAME uint F_00d9bbc0(void)
{
  GEN_ENTER(0xd9bbc0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  code * pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  
  piVar6 = &REFG(int, 0x15dff80);
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  iVar5 = REFG(int, 0x15dff80);
  if (REFG(int, 0x15dff80) != 0) {
    do {
      if ((**((int * PTR32 *)GEN_TOP((iVar5 + 0xc))) == 0) && (*((gen_code32 *)GEN_TOP((iVar5 + 4))) != ((code *)GEN_TOP(0x0)))) {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 4))))();
        if (uVar3 != 0) {
          **((uint * PTR32 *)GEN_TOP((iVar5 + 0xc))) = uVar3;
          goto LAB_00d9bc04;
        }
        if ((*(uint *)(gen_frame + 0x4)) == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x0)),4);
        }
        *((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 4))) = iVar5;
        (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
        iVar5 = *((int *)GEN_TOP((iVar5 + 8)));
        *((undefined4 *)GEN_TOP((*piVar6 + 8))) = 0;
        *piVar6 = iVar5;
      }
      else {
LAB_00d9bc04: ;
        piVar6 = ((int *)GEN_TOP((iVar5 + 8)));
        iVar5 = *piVar6;
      }
      uVar3 = (*(uint *)(gen_frame + 0x4));
    } while (iVar5 != 0);
    while (uVar2 = uVar3, uVar3 != 0) {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + uVar2 * 4)));
        pcVar1 = *((gen_code32 *)GEN_TOP((iVar5 + 4)));
        uVar4 = (*pcVar1)((*(int *)(gen_frame + 0x0)));
        uVar3 = (*(uint *)(gen_frame + 0x4));
        if (uVar4 != 0) {
          **((uint * PTR32 *)GEN_TOP((iVar5 + 0xc))) = uVar4;
          *piVar6 = iVar5;
          uVar3 = (*(uint *)(gen_frame + 0x4)) - 1;
          piVar6 = ((int *)GEN_TOP((iVar5 + 8)));
          (*(uint *)(gen_frame + 0x4)) = uVar3;
          uVar3 = (*(uint *)(gen_frame + 0x4));
          if (uVar3 != uVar2) {
            *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + uVar2 * 4))) = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + uVar3 * 4)));
          }
        }
      }
    }
  }
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar3;
}

/* ref: FUN_00d9bcd0 */
GEN_LIB GEN_FRAME uint F_00d9bcd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9bcd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  LPVOID pvVar1;
  undefined * phVar2;
  undefined * this;
  
  if (REFG(char, 0x15da4a0) == '\0') {
    F_00d9ba60(param_1);
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    phVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,8)));
    *(undefined4 *)(phVar2 + 4) = 0x10008;
    *(undefined * PTR32 * PTR32 *)phVar2 = (*(undefined * PTR32 (*)[6])REFP(0x113bd5c));
    if (REFG(undefined4, 0x15dffa8) != ((undefined *)GEN_TOP(0x0))) {
      F_00d91840(REFG(undefined4, 0x15dffa8) GEN_EDX_ARG);
    }
    REFG(undefined4, 0x15dffa8) = phVar2;
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                             (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x28)));
    *((undefined2 *)GEN_TOP(((int)this + 4))) = 0x28;
    phVar2 = ((undefined *)GEN_TOP(F_00db2ca0(this GEN_EDX_ARG,param_2,param_3)));
    if (REFG(undefined4, 0x15dff78) != ((undefined *)GEN_TOP(0x0))) {
      F_00d91840(REFG(undefined4, 0x15dff78) GEN_EDX_ARG);
    }
    REFG(undefined4, 0x15dff78) = phVar2;
    F_00d9bbc0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15da49c) + 0xc))))(REFG(int * PTR32, 0x15da49c) GEN_EDX_ARG);
    F_009f0b80();
    REFG(char, 0x15da4a0) = '\x01';
  }
  return 0;
}

/* ref: hkBaseSystem::DestroySingletons */
GEN_LIB GEN_FRAME uint F_00d9bda0(void)
{
  GEN_ENTER(0xd9bda0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  int iVar1;
  undefined * this;
  code * pcVar2;
  uint uVar3;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  for (iVar1 = REFG(int, 0x15dff80); uVar3 = (*(uint *)(gen_frame + 0x4)), iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 8)))) {
    if ((*(uint *)(gen_frame + 0x4)) == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),4);
    }
    *(int *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 4) = iVar1;
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
  }
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    this = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + uVar3 * 4) + 0xc)))));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91840(this GEN_EDX_ARG);
      **((undefined4 * PTR32 *)GEN_TOP((*(int *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + uVar3 * 4) + 0xc))) = 0;
    }
  }
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10)));
    (*(uint *)(gen_frame + 0x8)) = (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: hkBaseSystem::Quit */
GEN_LIB GEN_NOFRAME uint F_00d9be90(void)
{
  GEN_ENTER(0xd9be90u, 0u, 0u, 0u, 0u);
  if (REFG(char, 0x15da4a0) != '\0') {
    F_00d918e0(0);
    F_00d9bda0();
    if ((REFG(char, 0x15dffac) != '\0') && (REFG(undefined * PTR32, 0x135278c) != ((undefined *)GEN_TOP(0x0)))) {
      (*(code *)REFG(undefined * PTR32, 0x135278c))();
      REFG(char, 0x15dffac) = '\0';
    }
    if (REFG(undefined4, 0x15dff78) != ((undefined *)GEN_TOP(0x0))) {
      F_00d91840(REFG(undefined4, 0x15dff78) GEN_EDX_ARG);
    }
    REFG(undefined4, 0x15dff78) = ((undefined *)GEN_TOP(0x0));
    if (REFG(undefined4, 0x15dffa8) != ((undefined *)GEN_TOP(0x0))) {
      F_00d91840(REFG(undefined4, 0x15dffa8) GEN_EDX_ARG);
    }
    REFG(undefined4, 0x15dffa8) = ((undefined *)GEN_TOP(0x0));
    F_00d9bb50();
    REFG(char, 0x15da4a0) = '\0';
  }
  return 0;
}

/* ref: Global::ReplaceGlobalInstanceA */
GEN_LIB GEN_FRAME unsigned int F_00d9bf00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9bf00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  if (REFG(undefined4, 0x15dff78) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91840(REFG(undefined4, 0x15dff78) GEN_EDX_ARG);
    REFG(undefined4, 0x15dff78) = ((undefined *)GEN_TOP(param_1));
    return;
  }
  REFG(undefined4, 0x15dff78) = ((undefined *)GEN_TOP(param_1));
  return;
}

/* ref: Global::ReplaceGlobalInstanceB */
GEN_LIB GEN_FRAME unsigned int F_00d9bf30(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9bf30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  if (REFG(undefined4, 0x15dffa8) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91840(REFG(undefined4, 0x15dffa8) GEN_EDX_ARG);
    REFG(undefined4, 0x15dffa8) = ((undefined *)GEN_TOP(param_1));
    return;
  }
  REFG(undefined4, 0x15dffa8) = ((undefined *)GEN_TOP(param_1));
  return;
}

/* ref: hkArray::GetElementPtr4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9bfc0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9bfc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: hkArray::InitWithBuffer */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9bfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9bfe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: Global::FillWords */
GEN_LIB GEN_FRAME unsigned int F_00d9c020(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9c020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: hkMemoryAllocator::BufFree4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9c060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d9c0a0 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00d9c0a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return 1;
}

/* ref: hkReferencedObject::AllocReferencedObject */
GEN_LIB GEN_FRAME uint F_00d9c0d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9c0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: hkReferencedObject::AllocReferencedObject2 */
GEN_LIB GEN_FRAME uint F_00d9c100(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9c100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: hkNativeFileSystem::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9c150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbea40(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00d9c170 */
GEN_LIB GEN_FRAME uint F_00d9c170(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9c170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00d9c1b0 */
GEN_LIB GEN_FRAME uint F_00d9c1b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9c1b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: hkDummySingleton::vf3 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9c210(void)
{
  GEN_ENTER(0xd9c210u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: hkDummySingleton::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c230(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c230u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9c290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar1 != param_1) {
    uVar1 = *((uint *)GEN_TOP((*(int *)this + uVar1 * 4)));
    *((uint *)GEN_TOP((*(int *)this + param_1 * 4))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00d9c2b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9c2b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d9c2f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9c2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00d9c310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c310u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9c350 */
GEN_LIB GEN_FRAME uint F_00d9c350(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9c350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00d9c380 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c380(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c380u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkNativeFileSystem::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c3c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c3c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkArray::PushBack4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: hkArray::PushBack4Alt */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: hkArray::~Array4 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9c480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9c480u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkArray::~Array4Alt */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9c4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9c4c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::~Array4b */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9c500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9c500u, gen_a0, 0u, 0u, 0u);
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

/* ref: Global::FreePointerArray_00d9c540 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9c540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9c540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::InitInlineString */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  return (uint)this;
}

/* ref: Global::FreePointerArrayAlt */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9c5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9c5a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9c610 */
GEN_LIB GEN_FRAME uint F_00d9c610(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: Global::DebugPrint */
GEN_LIB GEN_FRAME uint F_00d9c6a0(GEN_P(LPCSTR param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9c6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  uint uVar1;
  
  gen_imp_OutputDebugStringA(param_1);
  uVar1 = F_00c5181b(&REFG(undefined, 0x113bdcc),param_1);
  return uVar1;
}

/* ref: Global::InstallDefaultAllocator */
GEN_LIB GEN_NOFRAME unsigned int F_00d9c6f0(void)
{
  GEN_ENTER(0xd9c6f0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32 * PTR32, 0x15da4a4) = &REFG(undefined * PTR32, 0x1352290);
  return;
}

/* ref: Global::ShutdownAllocator */
GEN_LIB GEN_NOFRAME uint F_00d9c700(void)
{
  GEN_ENTER(0xd9c700u, 0u, 0u, 0u, 0u);
  uint in_EAX = 0;
  
  if (REFG(undefined * PTR32 * PTR32, 0x15da4a4) == &REFG(undefined * PTR32, 0x13522a0)) {
    in_EAX = F_00db48c0((undefined *)&REFG(undefined * PTR32, 0x13522a0) GEN_EDX_ARG);
  }
  REFG(undefined * PTR32 * PTR32, 0x15da4a4) = ((undefined * PTR32 *)GEN_TOP(0x0));
  return in_EAX;
}

/* ref: FUN_00d9c720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (this != ((undefined *)GEN_TOP(0x0))) {
    F_00da5ee0(this GEN_EDX_FWD,param_1);
  }
  return (uint)this;
}

/* ref: Global::FindChar */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c780(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd9c780u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  uint uVar1;
  int iVar2;
  
  iVar2 = param_4;
  if (param_1[1] - 1 <= param_4) {
    iVar2 = param_1[1] - 1;
  }
  if ((int)param_3 < iVar2) {
    uVar1 = param_3;
    do {
      if (*((char *)GEN_TOP((*param_1 + uVar1))) == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < iVar2);
  }
  return 0xffffffff;
}

/* ref: Global::FindFrom */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9c7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00da0ee0(*(int *)this + param_2,param_1);
  if (uVar1 != 0) {
    return uVar1 - *(int *)this;
  }
  return 0xffffffff;
}

/* ref: Global::FindNoCase */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  char * pcVar6;
  uint local_8;
  
  pcVar6 = *(char * PTR32 *)this;
  cVar4 = *pcVar6;
  local_8 = 0;
  uVar2 = local_8;
  do {
    if (cVar4 == '\0') {
      return 0xffffffff;
    }
    iVar5 = 0;
    cVar4 = *param_1;
    while (cVar4 != '\0') {
      cVar3 = pcVar6[iVar5];
      if ((byte)(cVar3 + 0xbfU) < 0x1a) {
        cVar3 = cVar3 + ' ';
      }
      if ((byte)(cVar4 + 0xbfU) < 0x1a) {
        cVar4 = cVar4 + ' ';
      }
      if (cVar3 != cVar4) break;
      iVar1 = iVar5 + 1;
      iVar5 = iVar5 + 1;
      cVar4 = param_1[iVar1];
    }
    if (param_1[iVar5] == '\0') {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar6 = pcVar6 + 1;
    cVar4 = *pcVar6;
  } while( true );
}

/* ref: Global::ReverseFindChar */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c880(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd9c880u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  uint uVar1;
  int iVar2;
  
  iVar2 = param_4;
  if (param_1[1] - 1 < param_4) {
    iVar2 = param_1[1] - 1;
  }
  uVar1 = iVar2 - 1;
  if (param_3 <= (int)uVar1) {
    do {
      if (*((char *)GEN_TOP((*param_1 + uVar1))) == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 - 1;
    } while (param_3 <= (int)uVar1);
  }
  return 0xffffffff;
}

/* ref: Global::FindLast */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9c8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  for (uVar1 = F_00da0ee0(*(undefined4 *)this,param_1); uVar1 != 0;
      uVar1 = F_00da0ee0(uVar1 + 1,param_1)) {
    uVar2 = uVar1 - *(int *)this;
  }
  return uVar2;
}

/* ref: Global::Compare */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da0d20(*(undefined4 *)this,param_1);
  return uVar1;
}

/* ref: FUN_00d9c920 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da0d70(*(undefined4 *)this,param_1);
  return uVar1;
}

/* ref: Global::LessThan_00d9c940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9c940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da0d20(*(undefined4 *)this,param_2);
  *((bool *)GEN_TOP(param_1)) = (int)uVar1 < 0;
  return param_1;
}

/* ref: Global::Equals_00d9c960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d9c900(this GEN_EDX_FWD,param_1);
  return (uint)(uVar1 == 0);
}

/* ref: Global::StartsWith */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char cVar1;
  char * pcVar2;
  int iVar3;
  
  pcVar2 = *(char * PTR32 *)this;
  iVar3 = 0;
  cVar1 = *pcVar2;
  while ((cVar1 != '\0' && (*((char *)GEN_TOP((iVar3 + param_1))) != '\0'))) {
    if (pcVar2[iVar3] != *((char *)GEN_TOP((iVar3 + param_1)))) {
      return 0;
    }
    iVar3 = iVar3 + 1;
    cVar1 = pcVar2[iVar3];
  }
  return (uint)(*((char *)GEN_TOP((iVar3 + param_1))) == '\0');
}

/* ref: Global::StartsWithNoCase */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c9c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char cVar2;
  char * pcVar3;
  char * pcVar4;
  
  pcVar3 = *(char * PTR32 *)this;
  cVar2 = *pcVar3;
  pcVar4 = param_1;
  while( true ) {
    if ((cVar2 == '\0') || (cVar2 = *pcVar4, cVar2 == '\0')) {
      return 1;
    }
    cVar1 = *pcVar3;
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      cVar1 = cVar1 + ' ';
    }
    if ((byte)(cVar2 + 0xbfU) < 0x1a) {
      cVar2 = cVar2 + ' ';
    }
    if (cVar1 != cVar2) break;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar3;
  }
  return 0;
}

/* ref: Global::EndsWith */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ca20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ca20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00da0e60(param_1);
  if (*((int *)GEN_TOP(((int)this + 4))) - 1 < (int)uVar1) {
    return 0;
  }
  iVar2 = 0;
  if (0 < (int)uVar1) {
    do {
      if (*((char *)GEN_TOP((*(int *)this + (*((int *)GEN_TOP(((int)this + 4))) - uVar1) - 1 + iVar2))) !=
          *((char *)GEN_TOP((iVar2 + param_1)))) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar1);
  }
  return 1;
}

/* ref: Global::EndsWithNoCase */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ca70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ca70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char cVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  
  uVar2 = F_00da0e60(param_1);
  if (*((int *)GEN_TOP(((int)this + 4))) - 1 < (int)uVar2) {
    return 0;
  }
  iVar4 = 0;
  if (0 < (int)uVar2) {
    do {
      cVar1 = *((char *)GEN_TOP((*(int *)this + (*((int *)GEN_TOP(((int)this + 4))) - uVar2) - 1 + iVar4)));
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        cVar1 = cVar1 + ' ';
      }
      cVar3 = *((char *)GEN_TOP((iVar4 + param_1)));
      if ((byte)(cVar3 + 0xbfU) < 0x1a) {
        cVar3 = cVar3 + ' ';
      }
      if (cVar1 != cVar3) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  return 1;
}

/* ref: Global::ReplaceChar */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9caf0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd9caf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  if (param_1[1] == 1 || param_1[1] - 1 < 0) {
    return 0;
  }
  do {
    if (*((char *)GEN_TOP((*param_1 + iVar1))) == param_2) {
      *((undefined1 *)GEN_TOP((*param_1 + iVar1))) = param_3;
      uVar2 = 1;
      if (param_4 == 0) {
        return 1;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < param_1[1] - 1);
  return uVar2;
}

/* ref: Global::ToLower */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9cb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9cb40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 1 && -1 < *((int *)GEN_TOP(((int)this + 4))) - 1) {
    do {
      cVar1 = *((char *)GEN_TOP((*(int *)this + iVar2)));
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        cVar1 = cVar1 + ' ';
      }
      *((char *)GEN_TOP((*(int *)this + iVar2))) = cVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 4))) - 1);
  }
  return 0;
}

/* ref: Global::ToUpper */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9cb80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9cb80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 1 && -1 < *((int *)GEN_TOP(((int)this + 4))) - 1) {
    do {
      cVar1 = *((char *)GEN_TOP((*(int *)this + iVar2)));
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        cVar1 = cVar1 - 0x20;
      }
      *((char *)GEN_TOP((*(int *)this + iVar2))) = cVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 4))) - 1);
  }
  return 0;
}

/* ref: Global::GetAllocator */
GEN_LIB GEN_NOFRAME uint F_00d9cbc0(void)
{
  GEN_ENTER(0xd9cbc0u, 0u, 0u, 0u, 0u);
  if (REFG(undefined4, 0x15da4a4) == 0) {
    F_00d9c6f0();
  }
  return REFG(undefined4, 0x15da4a4);
}

/* ref: Global::EraseFront */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9cbe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9cbe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  undefined1 * puVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar3 = param_1;
  if (iVar1 <= param_1) {
    iVar3 = iVar1;
  }
  if (0 < iVar3) {
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - iVar3;
    puVar2 = *(undefined1 * PTR32 *)this;
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    if (0 < iVar1) {
      do {
        *puVar2 = puVar2[iVar3];
        puVar2 = puVar2 + 1;
        iVar1 = iVar1 - 1;
      } while (iVar1 != 0);
    }
  }
  return 0;
}

/* ref: Global::DuplicateString */
GEN_LIB GEN_NOFRAME uint F_00d9cc60(GEN_P(undefined4 in_edi, unsigned int gen_a0))
{
  GEN_ENTER(0xd9cc60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a0;)
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00da0e60(in_edi);
  iVar2 = uVar1 + 1;
  uVar1 = F_00d9cbc0();
  uVar1 = F_00d92460(uVar1,iVar2);
  F_00da0e20(uVar1,in_edi);
  return uVar1;
}

/* ref: Global::DuplicateStringN */
GEN_LIB GEN_FRAME uint F_00d9cc90(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9cc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00da0e60(param_2);
  if ((int)in_eax < (int)uVar1) {
    uVar1 = in_eax;
  }
  iVar3 = uVar1 + 1;
  uVar2 = F_00d9cbc0();
  uVar2 = F_00d92460(uVar2,iVar3);
  F_00da0e40(uVar2,param_2,uVar1);
  *((undefined1 *)GEN_TOP((uVar2 + uVar1))) = 0;
  return uVar2;
}

/* ref: Global::SetTaggedString */
GEN_LIB GEN_FRAME uint F_00d9cce0(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(uint * in_esi, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9cce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(uint * in_esi = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  uVar2 = *in_esi;
  if ((uVar2 & 0xfffffffe) != in_eax) {
    if ((uVar2 & 1) != 0) {
      iVar1 = uVar2 - 1;
      uVar2 = F_00d9cbc0();
      uVar2 = F_00d924b0(uVar2,iVar1);
    }
    if (in_eax != 0) {
      if (param_3 == -1) {
        uVar2 = F_00d9cc60(in_eax);
        *in_esi = uVar2 + 1;
        return uVar2 + 1;
      }
      uVar2 = F_00d9cc90(param_3,in_eax);
      *in_esi = uVar2 + 1;
      return uVar2 + 1;
    }
    *in_esi = 0;
  }
  return uVar2;
}

/* ref: Global::TaggedStringFromCStr */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9cd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9cd40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined4 *)this = 0;
  F_00d9cce0(param_1,this,0xffffffff);
  return (uint)this;
}

/* ref: Global::TaggedStringFromCStrN */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9cd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9cd60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = 0;
  F_00d9cce0(param_1,this,param_2);
  return (uint)this;
}

/* ref: Global::TaggedStringCopy */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9cd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9cd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = 0;
  F_00d9cce0(*param_1 & 0xfffffffe,this,0xffffffff);
  return (uint)this;
}

/* ref: Global::AssignCStr */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9cde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9cde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00d9cce0(param_1,this,0xffffffff);
  return (uint)this;
}

/* ref: Global::AssignTaggedString */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ce00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ce00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  F_00d9cce0(*param_1 & 0xfffffffe,this,0xffffffff);
  return (uint)this;
}

/* ref: Global::AssignCStrN */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ce20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9ce20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00d9cce0(param_1,this,param_2);
  return uVar1;
}

/* ref: Global::SetBorrowed */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ce40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ce40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)this & 0xfffffffe;
  if (uVar1 != param_1) {
    uVar1 = F_00d9cce0(0,this,0xffffffff);
    *(uint *)this = param_1;
  }
  return uVar1;
}

/* ref: Global::Assign_00d9ce80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ce80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ce80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    uVar2 = F_00d9cbc0();
    if ((*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) == 0) {
      F_00d95690(uVar2,this,1,1);
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
    **(undefined1 * PTR32 *)this = 0;
    return (uint)this;
  }
  uVar2 = F_00da0e60(param_1);
  iVar1 = uVar2 + 1;
  uVar3 = F_00d9cbc0();
  uVar4 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(uVar3,this,iVar5,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  *((undefined1 *)GEN_TOP((uVar2 + *(int *)this))) = 0;
  F_00da1010(*(undefined4 *)this,param_1,uVar2);
  return (uint)this;
}

/* ref: Global::SplitInPlace */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9cf30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9cf30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)this;
  uVar3 = F_00d9cbc0();
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
    F_00d95710(uVar3,param_2,4);
  }
  *((undefined4 *)GEN_TOP((*param_2 + param_2[1] * 4))) = uVar1;
  param_2[1] = param_2[1] + 1;
  uVar3 = param_2[1];
  for (uVar4 = F_00d9c780(this GEN_EDX_ARG,(undefined1)param_1,0,0x7fffffff); -1 < (int)uVar4;
      uVar4 = F_00d9c780(this GEN_EDX_ARG,(undefined1)param_1,uVar4 + 1,0x7fffffff)) {
    *((undefined1 *)GEN_TOP((uVar4 + *(int *)this))) = 0;
    iVar2 = *(int *)this;
    uVar3 = F_00d9cbc0();
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      F_00d95710(uVar3,param_2,4);
    }
    *((uint *)GEN_TOP((*param_2 + param_2[1] * 4))) = iVar2 + uVar4 + 1;
    param_2[1] = param_2[1] + 1;
    uVar3 = param_2[1];
  }
  return uVar3;
}

/* ref: Global::Clear_00d9cff0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9cff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9cff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 * puVar1;
  uint uVar2;
  
  uVar2 = F_00d9cbc0();
  if ((*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) == 0) {
    F_00d95690(uVar2,this,1,1);
  }
  puVar1 = *(undefined1 * PTR32 *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
  *puVar1 = 0;
  return (uint)puVar1;
}

/* ref: Global::Format */
GEN_LIB GEN_FRAME uint F_00d9d030(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xd9d030u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int iVar4;
  uint uVar5;
  
  while( true ) {
    while( true ) {
      uVar5 = param_1[2] & 0x3fffffff;
      uVar3 = F_00da0cd0(*param_1,uVar5,param_2,((undefined *)&gen_args[2]));
      if (-1 < (int)uVar3) break;
      uVar5 = uVar5 * 2;
      if (uVar5 < 0x100) {
        uVar5 = 0xff;
      }
      iVar1 = uVar5 + 1;
      uVar3 = F_00d9cbc0();
      if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
        iVar4 = (param_1[2] & 0x3fffffffU) * 2;
        if (iVar4 <= iVar1) {
          iVar4 = iVar1;
        }
        F_00d95690(uVar3,param_1,iVar4,1);
      }
      param_1[1] = iVar1;
      *((undefined1 *)GEN_TOP((uVar5 + *param_1))) = 0;
    }
    if ((int)uVar3 < (int)uVar5) break;
    iVar1 = uVar3 + 1;
    uVar5 = F_00d9cbc0();
    if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
      iVar4 = (param_1[2] & 0x3fffffffU) * 2;
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      F_00d95690(uVar5,param_1,iVar4,1);
    }
    param_1[1] = iVar1;
    *((undefined1 *)GEN_TOP((uVar3 + *param_1))) = 0;
  }
  iVar1 = uVar3 + 1;
  uVar5 = F_00d9cbc0();
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    bVar2 = F_00d95690(uVar5,param_1,iVar4,1);
    uVar5 = CONCAT31(extraout_var,bVar2);
  }
  param_1[1] = iVar1;
  *((undefined1 *)GEN_TOP((uVar3 + *param_1))) = 0;
  return uVar5;
}

/* ref: Global::StringAppendList */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9d120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xd9d120u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar1 = param_1;
  ((int *)(gen_frame + 0x0))[2] = param_3;
  ((int *)(gen_frame + 0x0))[1] = param_2;
  ((int *)(gen_frame + 0x0))[4] = param_5;
  iVar7 = 0;
  iVar5 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  ((int *)(gen_frame + 0x0))[3] = param_4;
  iVar6 = 0;
  (*(undefined8 *)(gen_frame + 0x1c)) = 0;
  (*(undefined8 *)(gen_frame + 0x24)) = 0;
  (*(undefined8 *)(gen_frame + 0x2c)) = 0;
  ((int *)(gen_frame + 0x0))[0] = param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = param_6;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  iVar3 = iVar5;
  iVar4 = param_1;
  while (iVar4 != 0) {
    uVar2 = F_00da0e60(iVar4);
    iVar3 = iVar3 + uVar2;
    iVar6 = iVar6 + 1;
    *((uint *)GEN_TOP(((int)&(*(undefined8 *)(gen_frame + 0x1c)) + iVar7))) = uVar2;
    iVar7 = iVar6 * 4;
    iVar4 = ((int *)(gen_frame + 0x0))[(int)(iVar6)];
  }
  iVar7 = iVar3 + 1;
  uVar2 = F_00d9cbc0();
  uVar8 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar8 < iVar7) {
    iVar4 = uVar8 * 2;
    if (iVar4 <= iVar7) {
      iVar4 = iVar7;
    }
    F_00d95690(uVar2,this,iVar4,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar7;
  *((undefined1 *)GEN_TOP((iVar3 + *(int *)this))) = 0;
  iVar7 = 0;
  param_1 = 0;
  iVar3 = param_1;
  while (iVar1 != 0) {
    iVar4 = *((int *)GEN_TOP(((int)&(*(undefined8 *)(gen_frame + 0x1c)) + iVar7)));
    iVar7 = *(int *)this;
    F_00da1010(iVar7 + iVar5,iVar1,iVar4);
    iVar3 = iVar3 + 1;
    iVar7 = iVar3 * 4;
    iVar5 = iVar5 + iVar4;
    iVar1 = ((int *)(gen_frame + 0x0))[(int)(iVar3)];
  }
  return 0;
}

/* ref: Global::StringAssignList */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9d230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xd9d230u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  F_00d9cff0(this GEN_EDX_FWD);
  F_00d9d120(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

/* ref: Global::StringTrimEnd */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9d260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9d260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (0 < param_1) {
    uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - param_1) - 1;
    uVar2 = ((int)uVar2 < 0) - 1 & uVar2;
    iVar1 = uVar2 + 1;
    uVar3 = F_00d9cbc0();
    uVar4 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
    if ((int)uVar4 < iVar1) {
      iVar5 = uVar4 * 2;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
      }
      F_00d95690(uVar3,this,iVar5,1);
    }
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
    *((undefined1 *)GEN_TOP((uVar2 + *(int *)this))) = 0;
  }
  return;
}

/* ref: Global::StringKeepRange */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9d2c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  int iVar5;
  
  if (param_1 != 0) {
    F_00da38f0(*(int *)this,param_1 + *(int *)this,param_2);
  }
  iVar1 = param_2 + 1;
  uVar3 = F_00d9cbc0();
  uVar4 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    bVar2 = F_00d95690(uVar3,this,iVar5,1);
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  *((undefined1 *)GEN_TOP((param_2 + *(int *)this))) = 0;
  return uVar3;
}

/* ref: Global::StringAssign_00d9d320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9d320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = F_00da0e60(param_1);
  }
  iVar1 = uVar2 + 1;
  uVar3 = F_00d9cbc0();
  uVar4 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(uVar3,this,iVar5,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  *((undefined1 *)GEN_TOP((uVar2 + *(int *)this))) = 0;
  uVar2 = F_00da3710(*(undefined4 *)this,param_1,uVar2);
  return uVar2;
}

/* ref: Global::StringAppend_00d9d390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9d390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if ((int)param_2 < 0) {
      param_2 = F_00da0e60(param_1);
    }
    iVar5 = *((int *)GEN_TOP(((int)this + 4))) - 1;
    iVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_2;
    uVar2 = F_00d9cbc0();
    uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
    if ((int)uVar3 < iVar1) {
      iVar4 = uVar3 * 2;
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      F_00d95690(uVar2,this,iVar4,1);
    }
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
    *((undefined1 *)GEN_TOP((iVar5 + param_2 + *(int *)this))) = 0;
    uVar2 = F_00da3710(*(int *)this + iVar5,param_1,param_2);
  }
  return uVar2;
}

/* ref: FUN_00d9d490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9d490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00d9ee80(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Global::StringAppendCStr_00d9d4b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9d4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    uVar1 = F_00da0e60(param_1);
    iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
    uVar2 = F_00d9cbc0();
    F_00d9eb80(this GEN_EDX_ARG,uVar2,iVar3,param_1,uVar1);
  }
  return (uint)this;
}

/* ref: Global::StringInsert_00d9d4f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9d4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9d4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    uVar1 = param_3;
    if ((int)param_3 < 0) {
      uVar1 = F_00da0e60(param_2);
    }
    uVar2 = F_00d9cbc0();
    F_00d9eb80(this GEN_EDX_ARG,uVar2,param_1,param_2,uVar1);
  }
  return;
}

/* ref: Global::StringPrepend */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9d530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9d530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00d9d4f0(this GEN_EDX_FWD,0,param_1,param_2);
  return;
}

/* ref: Global::StringFromCStr */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9d550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  if (param_1 == 0) {
    uVar2 = F_00d9cbc0();
    if ((*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) == 0) {
      F_00d95690(uVar2,this,1,1);
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
    **(undefined1 * PTR32 *)this = 0;
    return (uint)this;
  }
  uVar2 = F_00da0e60(param_1);
  iVar1 = uVar2 + 1;
  uVar3 = F_00d9cbc0();
  uVar4 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(uVar3,this,iVar5,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  *((undefined1 *)GEN_TOP((uVar2 + *(int *)this))) = 0;
  F_00da1010(*(undefined4 *)this,param_1,uVar2);
  return (uint)this;
}

/* ref: FUN_00d9d610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9d610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  F_00d9ce80(this GEN_EDX_FWD,*param_1 & 0xfffffffe);
  return (uint)this;
}

/* ref: Global::StringFromList */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xd9d640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  *(undefined1 * PTR32 *)this = ((undefined1 *)GEN_TOP(((int)this + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  F_00d9d120(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6);
  return (uint)this;
}

/* ref: Global::StringFromBuffer */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9d690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  iVar1 = param_2 + 1;
  uVar2 = F_00d9cbc0();
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(uVar2,this,iVar4,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  *((undefined1 *)GEN_TOP((param_2 + *(int *)this))) = 0;
  F_00da1010(*(undefined4 *)this,param_1,param_2);
  return (uint)this;
}

/* ref: Global::StringCopy */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9d700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  F_00d9ee80(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Global::StringAppendFormat */
GEN_LIB GEN_FRAME uint F_00d9d730(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xd9d730u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  uVar2 = F_00d9cbc0();
  if (((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) == 0) {
    F_00d95690(uVar2,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),1,1);
  }
  (*(int *)(gen_frame + 0x4)) = 1;
  *(*(undefined1 * PTR32 *)(gen_frame + 0x0)) = 0;
  *(*(undefined1 * PTR32 *)(gen_frame + 0x0)) = 0;
  while( true ) {
    while( true ) {
      uVar2 = (*(uint *)(gen_frame + 0x8)) & 0x3fffffff;
      uVar3 = F_00da0cd0((*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar2,param_2,((undefined *)&gen_args[2]));
      if (-1 < (int)uVar3) break;
      uVar2 = uVar2 * 2;
      if (uVar2 < 0x100) {
        uVar2 = 0xff;
      }
      iVar1 = uVar2 + 1;
      uVar3 = F_00d9cbc0();
      if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < iVar1) {
        iVar5 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
        if (iVar5 <= iVar1) {
          iVar5 = iVar1;
        }
        F_00d95690(uVar3,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar5,1);
      }
      (*(int *)(gen_frame + 0x4)) = iVar1;
      (*(undefined1 * PTR32 *)(gen_frame + 0x0))[uVar2] = 0;
    }
    if ((int)uVar3 < (int)uVar2) break;
    iVar1 = uVar3 + 1;
    uVar2 = F_00d9cbc0();
    if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < iVar1) {
      iVar5 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
      }
      F_00d95690(uVar2,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar5,1);
    }
    (*(int *)(gen_frame + 0x4)) = iVar1;
    (*(undefined1 * PTR32 *)(gen_frame + 0x0))[uVar3] = 0;
  }
  iVar1 = uVar3 + 1;
  uVar2 = F_00d9cbc0();
  if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < iVar1) {
    iVar5 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(uVar2,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar5,1);
  }
  (*(int *)(gen_frame + 0x4)) = iVar1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x0))[uVar3] = 0;
  F_00d9d390(param_1 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),0xffffffff);
  piVar4 = ((int *)GEN_TOP(F_00d9cbc0()));
  (*(int *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)));
  }
  return (uint)piVar4;
}

/* ref: Global::StringNormalizePath */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9d910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xb0, 0, 4);
  undefined4 * puVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  F_00d9d700(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,this);
  F_00d9caf0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,0x5c,0x2f,1);
  (*(int *)(gen_frame + 0x90)) = 0;
  (*(int *)(gen_frame + 0x94)) = 0;
  (*(uint *)(gen_frame + 0x98)) = 0x80000000;
  F_00d9cf30((((undefined *)GEN_TOP((uint)(&(*(undefined4 *)(gen_frame + 0x0)))))) GEN_EDX_ARG,0x2f,&(*(int *)(gen_frame + 0x90)));
  iVar5 = 0;
  (*(int *)(gen_frame + 0x8c)) = 0;
  if (0 < (*(int *)(gen_frame + 0x94))) {
    do {
      uVar3 = F_00da0d20(&REFG(undefined, 0x113be34),*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x90)) + iVar5 * 4))));
      if (uVar3 != 0) {
        (*(int *)(gen_frame + 0x8c)) = iVar5;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (*(int *)(gen_frame + 0x94)));
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = ((undefined4 *)GEN_TOP(0x0));
  (*(uint *)(gen_frame + 0xa4)) = 0;
  (*(int *)(gen_frame + 0x9c)) = 0;
  (*(uint *)(gen_frame + 0xa8)) = 0x80000000;
  iVar5 = (*(int *)(gen_frame + 0x94));
  while (iVar5 = iVar5 - 1, -1 < iVar5) {
    uVar2 = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x90)) + iVar5 * 4)));
    uVar3 = F_00da0d20(&REFG(undefined, 0x113be34),uVar2);
    if (uVar3 == 0) {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 1;
    }
    else if ((*(int *)(gen_frame + 0x9c)) < 1) {
      puVar1 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x90)) + iVar5 * 4)));
      uVar3 = F_00d9cbc0();
      if ((*(uint *)(gen_frame + 0xa4)) == ((*(uint *)(gen_frame + 0xa8)) & 0x3fffffff)) {
        F_00d95710(uVar3,&(*(undefined4 * PTR32 *)(gen_frame + 0xa0)),4);
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0xa0))[(*(uint *)(gen_frame + 0xa4))] = *puVar1;
      (*(uint *)(gen_frame + 0xa4)) = (*(uint *)(gen_frame + 0xa4)) + 1;
    }
    else {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) - 1;
    }
  }
  F_00d9cff0(this GEN_EDX_ARG);
  uVar3 = (*(uint *)(gen_frame + 0xa4));
  if (0 < (int)(*(uint *)(gen_frame + 0xa4))) {
    while (uVar3 = uVar3 - 1, 0 < (int)uVar3) {
      uVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0xa0))[uVar3];
      F_00d9d120(this GEN_EDX_ARG,uVar2,&REFG(undefined, 0x1080808),0,0,0,0);
    }
    uVar2 = *(*(undefined4 * PTR32 *)(gen_frame + 0xa0));
    F_00d9d390(this GEN_EDX_ARG,uVar2,0xffffffff);
    iVar5 = (*(int *)(gen_frame + 0x8c));
    if (0 < (*(int *)(gen_frame + 0x8c))) {
      do {
        F_00d9d530(this GEN_EDX_ARG,&REFG(undefined, 0x113be30),0xffffffff);
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
  }
  piVar4 = ((int *)GEN_TOP(F_00d9cbc0()));
  (*(uint *)(gen_frame + 0xa4)) = 0;
  if (((*(uint *)(gen_frame + 0xa8)) & 0x80000000) == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0xa0)),(*(uint *)(gen_frame + 0xa8)) * 4);
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = ((undefined4 *)GEN_TOP(0x0));
  (*(uint *)(gen_frame + 0xa8)) = 0x80000000;
  piVar4 = ((int *)GEN_TOP(F_00d9cbc0()));
  (*(int *)(gen_frame + 0x94)) = 0;
  if (((*(uint *)(gen_frame + 0x98)) & 0x80000000) == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG,(*(int *)(gen_frame + 0x90)),(*(uint *)(gen_frame + 0x98)) * 4);
  }
  (*(int *)(gen_frame + 0x90)) = 0;
  (*(uint *)(gen_frame + 0x98)) = 0x80000000;
  piVar4 = ((int *)GEN_TOP(F_00d9cbc0()));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if (((*(uint *)(gen_frame + 0x8)) & 0x80000000) == 0) {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)));
  }
  return (uint)piVar4;
}

/* ref: Global::StringReplace */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9db00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9db00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0xa4, 12, 4);
  uint uVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = F_00da0e60(param_1);
  (*(uint *)(gen_frame + 0x90)) = uVar1;
  uVar2 = F_00da0e60(param_2);
  (*(uint *)(gen_frame + 0x94)) = uVar2;
  (*(uint *)(gen_frame + 0x9c)) = 0;
  if ((int)uVar1 < (int)uVar2) {
    F_00d9d700(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG,this);
    F_00d9cff0(this GEN_EDX_ARG);
    iVar6 = 0;
    uVar1 = F_00d9c7c0(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,0,0x7fffffff);
    if (-1 < (int)uVar1) {
      (*(uint *)(gen_frame + 0x9c)) = 1;
      do {
        F_00d9d390(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)) + iVar6,uVar1 - iVar6);
        F_00d9d390(this GEN_EDX_ARG,param_2,(*(uint *)(gen_frame + 0x94)));
        iVar6 = uVar1 + (*(uint *)(gen_frame + 0x90));
        if (param_3 == 0) break;
        uVar1 = F_00d9c7c0(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,iVar6,0x7fffffff);
      } while (-1 < (int)uVar1);
    }
    F_00d9d390(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)) + iVar6,((*(int *)(gen_frame + 0x4)) - iVar6) - 1);
    piVar3 = ((int *)GEN_TOP(F_00d9cbc0()));
    (*(int *)(gen_frame + 0x4)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
      return (*(uint *)(gen_frame + 0x9c));
    }
  }
  else {
    iVar6 = *(int *)this;
    iVar7 = 0;
    (*(int *)(gen_frame + 0x98)) = 0;
    (*(uint *)(gen_frame + 0x8c)) = F_00d9c7c0(this GEN_EDX_ARG,param_1,0,0x7fffffff);
    while (iVar5 = (*(int *)(gen_frame + 0x98)), (*(uint *)(gen_frame + 0x8c)) != 0xffffffff) {
      for (; iVar5 < (int)(*(uint *)(gen_frame + 0x8c)); iVar5 = iVar5 + 1) {
        *((undefined1 *)GEN_TOP((iVar7 + iVar6))) = *((undefined1 *)GEN_TOP((iVar5 + iVar6)));
        iVar7 = iVar7 + 1;
      }
      iVar4 = 0;
      if (0 < (int)(*(uint *)(gen_frame + 0x94))) {
        do {
          *((undefined1 *)GEN_TOP((iVar7 + iVar6))) = *((undefined1 *)GEN_TOP((iVar4 + param_2)));
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar4 < (int)(*(uint *)(gen_frame + 0x94)));
      }
      (*(int *)(gen_frame + 0x98)) = iVar5 + (*(uint *)(gen_frame + 0x90));
      if (param_3 == 0) break;
      (*(uint *)(gen_frame + 0x8c)) = F_00d9c7c0(this GEN_EDX_ARG,param_1,(*(uint *)(gen_frame + 0x8c)) + (*(uint *)(gen_frame + 0x90)),0x7fffffff);
    }
    iVar5 = (*(int *)(gen_frame + 0x98));
    if ((*(int *)(gen_frame + 0x98)) < *((int *)GEN_TOP(((int)this + 4))) - 1) {
      do {
        *((undefined1 *)GEN_TOP((iVar7 + iVar6))) = *((undefined1 *)GEN_TOP((iVar5 + iVar6)));
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar5 < *((int *)GEN_TOP(((int)this + 4))) - 1);
    }
    *((undefined1 *)GEN_TOP((iVar7 + iVar6))) = 0;
    iVar6 = iVar7 + 1;
    uVar1 = F_00d9cbc0();
    uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
    if ((int)uVar2 < iVar6) {
      iVar5 = uVar2 * 2;
      if (iVar5 <= iVar6) {
        iVar5 = iVar6;
      }
      F_00d95690(uVar1,this,iVar5,1);
    }
    *((int *)GEN_TOP(((int)this + 4))) = iVar6;
    *((undefined1 *)GEN_TOP((iVar7 + *(int *)this))) = 0;
  }
  return (*(uint *)(gen_frame + 0x9c));
}

/* ref: Global::StringFormat */
GEN_LIB GEN_FRAME uint F_00d9dd00(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xd9dd00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  GEN_FRAME_DECL_TOP(0x110, 0, 4);
  uint uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x800000ff;
  while( true ) {
    while( true ) {
      uVar4 = (*(uint *)(gen_frame + 0x8)) & 0x3fffffff;
      uVar2 = F_00da0cd0((*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar4,param_2,((undefined *)&gen_args[2]));
      if (-1 < (int)uVar2) break;
      uVar2 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
      uVar4 = F_00d9cbc0();
      if (((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < uVar2) {
        uVar1 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
        if (uVar2 < uVar1) {
          uVar2 = uVar1;
        }
        F_00d95690(uVar4,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar2,1);
      }
    }
    if ((int)uVar2 < (int)uVar4) break;
    uVar4 = F_00d9cbc0();
    if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < (int)uVar2) {
      uVar1 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
      if ((int)uVar2 < (int)uVar1) {
        uVar2 = uVar1;
      }
      F_00d95690(uVar4,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar2,1);
    }
  }
  F_00d9cde0(param_1 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  F_00d9cde0(param_1 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  piVar3 = ((int *)GEN_TOP(F_00d9cbc0()));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)));
  }
  return (uint)piVar3;
}

/* ref: Global::StringEquals_00d9de40 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d9de40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9de40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da0d20(param_1,param_2);
  return (uint)(uVar1 == 0);
}

/* ref: Global::HashString */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d9de60(GEN_P(char * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9de60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  char * pcVar1;
  char cVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar3 = 0;
  cVar2 = *param_1;
  pcVar4 = param_1;
  while (cVar2 != '\0') {
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    uVar3 = (int)cVar2 + uVar3 * 0x1f;
    cVar2 = *pcVar1;
  }
  return uVar3 & 0x7fffffff;
}

/* ref: FUN_00d9de90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9de90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9de90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  F_00db3820(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  F_00d9b7c0(this GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00d9deb0 */
GEN_LIB GEN_FRAME uint F_00d9deb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9deb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9dec0 */
GEN_LIB GEN_FRAME uint F_00d9dec0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9dec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9df30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9df30(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9df30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d9df50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9df50(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9df50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2;
}

/* ref: FUN_00d9df60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9df60(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9df60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2;
}

/* ref: Global::StringMapGetKeyAt */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9dfe0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9dfe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 4 + param_2 * 0xc)));
}

/* ref: Global::StringMapGetValueAt */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e000(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 8 + param_2 * 0xc)));
}

/* ref: Global::StringMapSetValueAt */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((*(int *)this + 8 + param_1 * 0xc))) = param_2;
  return param_1 * 3;
}

/* ref: Global::StringMapNextUsedSlot */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9e040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + iVar1 * 0xc)));
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: Global::StringMapIsValidIndex */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e070(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: Global::StringMapSet */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char * pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char * pcVar7;
  uint uVar8;
  
  uVar5 = 0;
  cVar2 = *param_1;
  pcVar7 = param_1;
  while (cVar2 != '\0') {
    pcVar1 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
    uVar5 = (int)cVar2 + uVar5 * 0x1f;
    cVar2 = *pcVar1;
  }
  uVar5 = uVar5 & 0x7fffffff;
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00d9ecf0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  uVar8 = *((uint *)GEN_TOP(((int)this + 8))) & uVar5;
  iVar4 = uVar8 * 0xc;
  iVar3 = *((int *)GEN_TOP((iVar4 + *(int *)this)));
  while (iVar3 != -1) {
    if ((*((uint *)GEN_TOP((iVar4 + *(int *)this))) == uVar5) &&
       (uVar6 = F_00da0d20(param_1,*((undefined4 *)GEN_TOP((iVar4 + 4 + *(int *)this)))), uVar6 == 0))
    goto LAB_00d9e122;
    uVar8 = uVar8 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
    iVar4 = uVar8 * 0xc;
    iVar3 = *((int *)GEN_TOP((iVar4 + *(int *)this)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
LAB_00d9e122: ;
  uVar8 = uVar8 * 0xc;
  *((uint *)GEN_TOP((uVar8 + *(int *)this))) = uVar5;
  *((char * PTR32 *)GEN_TOP((uVar8 + 4 + *(int *)this))) = param_1;
  *((undefined4 *)GEN_TOP((uVar8 + 8 + *(int *)this))) = param_2;
  return uVar8;
}

/* ref: Global::StringMapFind */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char * pcVar1;
  uint * puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  uint uVar7;
  
  uVar4 = 0;
  cVar3 = *param_1;
  pcVar6 = param_1;
  while (cVar3 != '\0') {
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    uVar4 = (int)cVar3 + uVar4 * 0x1f;
    cVar3 = *pcVar1;
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 8))) & uVar4 & 0x7fffffff;
  puVar2 = ((uint *)GEN_TOP((*(int *)this + uVar7 * 0xc)));
  uVar5 = *puVar2;
  while( true ) {
    if (uVar5 == 0xffffffff) {
      return *((int *)GEN_TOP(((int)this + 8))) + 1;
    }
    if ((uVar5 == (uVar4 & 0x7fffffff)) && (uVar5 = F_00da0d20(param_1,puVar2[1]), uVar5 == 0)
       ) break;
    uVar7 = uVar7 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
    puVar2 = ((uint *)GEN_TOP((*(int *)this + uVar7 * 0xc)));
    uVar5 = *puVar2;
  }
  return uVar7;
}

/* ref: Global::StringMapGetOrAdd */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e1e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 uVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  
  uVar1 = (*(undefined4 *)&gen_args[0]);
  uVar2 = F_00d9e150(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  pcVar3 = ((char *)GEN_TOP(F_00d9e070(this GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3,uVar2)));
  uVar4 = (*(uint *)&gen_args[1]);
  if (*pcVar3 != '\0') {
    uVar4 = F_00d9e000(this GEN_EDX_ARG,uVar2);
    return uVar4;
  }
  F_00d9e090(this GEN_EDX_ARG,uVar1,(*(uint *)&gen_args[1]));
  return uVar4;
}

/* ref: Global::StringMapTryGetValue */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  char * pcVar2;
  
  uVar1 = F_00d9e150(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  pcVar2 = ((char *)GEN_TOP(F_00d9e070(this GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3,uVar1)));
  if (*pcVar2 != '\0') {
    uVar1 = F_00d9e000(this GEN_EDX_ARG,uVar1);
    *(*(uint * PTR32 *)&gen_args[1]) = uVar1;
    return 0;
  }
  return 1;
}

/* ref: Global::StringMapRemoveAt */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9e280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  *((undefined4 *)GEN_TOP((*(int *)this + param_1 * 0xc))) = 0xffffffff;
  uVar5 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar3 = uVar5 + param_1 & uVar5;
  iVar1 = *((int *)GEN_TOP((*(int *)this + uVar3 * 0xc)));
  while (iVar1 != -1) {
    uVar3 = uVar3 + uVar5 & uVar5;
    iVar1 = *((int *)GEN_TOP((*(int *)this + uVar3 * 0xc)));
  }
  uVar4 = uVar3 + 1 & uVar5;
  uVar3 = param_1 + 1 & uVar5;
  iVar2 = uVar3 * 0xc;
  iVar1 = *((int *)GEN_TOP((*(int *)this + iVar2)));
  uVar6 = param_1;
  while (iVar1 != -1) {
    uVar5 = *((uint *)GEN_TOP((*(int *)this + iVar2))) & uVar5;
    if ((((uVar3 < uVar4) || (uVar5 <= uVar6)) &&
        ((uVar6 <= uVar3 || ((uVar5 <= uVar6 && (uVar3 < uVar5)))))) &&
       ((uVar5 <= uVar6 || (uVar4 <= uVar5)))) {
      iVar1 = uVar6 * 0xc;
      *((uint *)GEN_TOP((iVar1 + *(int *)this))) = *((uint *)GEN_TOP((*(int *)this + iVar2)));
      *((undefined4 *)GEN_TOP((iVar1 + 4 + *(int *)this))) = *((undefined4 *)GEN_TOP((*(int *)this + 4 + iVar2)));
      *((undefined4 *)GEN_TOP((iVar1 + 8 + *(int *)this))) = *((undefined4 *)GEN_TOP((*(int *)this + 8 + iVar2)));
      *((undefined4 *)GEN_TOP((iVar2 + *(int *)this))) = 0xffffffff;
      uVar6 = uVar3;
    }
    uVar5 = *((uint *)GEN_TOP(((int)this + 8)));
    uVar3 = uVar3 + 1 & uVar5;
    iVar2 = uVar3 * 0xc;
    iVar1 = *((int *)GEN_TOP((iVar2 + *(int *)this)));
  }
  return 0;
}

/* ref: Global::StringMapValidate */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int local_c;
  int local_8;
  
  uVar4 = *((uint *)GEN_TOP(((int)this + 8)));
  local_c = 0;
  if (-1 < (int)uVar4) {
    local_8 = 0;
    do {
      iVar1 = *(int *)this;
      if (*((int *)GEN_TOP((iVar1 + local_8))) != -1) {
        uVar2 = *((uint *)GEN_TOP((iVar1 + local_8)));
        uVar3 = *((undefined4 *)GEN_TOP((iVar1 + 4 + local_8)));
        uVar4 = uVar4 & uVar2;
        while ((*((uint *)GEN_TOP((*(int *)this + uVar4 * 0xc))) != uVar2 ||
               (uVar5 = F_00da0d20(uVar3,*((undefined4 *)GEN_TOP((*(int *)this + uVar4 * 0xc + 4)))),
               uVar5 != 0))) {
          uVar4 = uVar4 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
        }
      }
      uVar4 = *((uint *)GEN_TOP(((int)this + 8)));
      local_8 = local_8 + 0xc;
      local_c = local_c + 1;
    } while (local_c <= (int)uVar4);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: Global::StringMapSwap */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: Global::StringMapInsertAll */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_1[2];
  if (-1 < (int)uVar1) {
    iVar2 = 0;
    iVar3 = uVar1 + 1;
    do {
      uVar1 = *param_1;
      if (*((int *)GEN_TOP((uVar1 + iVar2))) != -1) {
        uVar1 = F_00d9e090(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((uVar1 + 4 + iVar2))),
                             *((undefined4 *)GEN_TOP((uVar1 + 8 + iVar2))));
      }
      iVar2 = iVar2 + 0xc;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return uVar1;
}

/* ref: Global::FillDwords_00d9e4c0 */
GEN_LIB GEN_FRAME unsigned int F_00d9e4c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e4c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: Global::CopyBytesForward */
GEN_LIB GEN_FRAME unsigned int F_00d9e4f0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e4f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined1 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = puVar1[param_2 - (int)param_1];
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: Global::FillBytes_00d9e510 */
GEN_LIB GEN_FRAME unsigned int F_00d9e510(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined1 *)GEN_TOP((iVar1 + param_1))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: Global::AllocEntries12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD,param_1 * 0xc);
  return uVar1;
}

/* ref: Global::FreeEntries12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: Global::FreeDwordArray */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: Global::CopyBytesForward2 */
GEN_LIB GEN_FRAME unsigned int F_00d9e5a0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e5a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined1 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = puVar1[param_2 - (int)param_1];
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: Global::CopyBytesCountFirst */
GEN_LIB GEN_FRAME unsigned int F_00d9e5c0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e5c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined1 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = puVar1[param_3 - (int)param_1];
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: Global::AllocAtLeast */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e5e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd9e5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
  uVar3 = (*pcVar1)(this,&(*(undefined4 * PTR32 *)&gen_args[0]));
  *puVar2 = (*(undefined4 * PTR32 *)&gen_args[0]);
  return uVar3;
}

/* ref: FUN_00d9e650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e650(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[3] = param_2;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0x80000000;
  in_ecx[4] = 0xffffffff;
  in_ecx[5] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: Global::ThreadFree18 */
GEN_LIB GEN_FRAME unsigned int F_00d9e680(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9e680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00d9e6b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e6b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[11])REFP(0x113bdd4));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: hkMallocAllocator::vf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9e6d0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d9b7c0(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00d9e6e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9e6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9e6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x113be04));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  F_00da5ee0(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_FWD,0);
  return (uint)this;
}

/* ref: hkLeakDetectAllocator::vf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9e720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x20));
  F_00db3820(this + 8 GEN_EDX_ARG);
  F_00d9b7c0(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: Global::ScalarDeletingDestructor_00d9e750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e750(GEN_P(LPCRITICAL_SECTION param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCRITICAL_SECTION param_1 = (LPCRITICAL_SECTION)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  gen_imp_DeleteCriticalSection(param_1);
  if (((param_2 & 1) != 0) && (param_1 != (LPCRITICAL_SECTION)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x18);
  }
  return (uint)param_1;
}

/* ref: Global::ThreadAlloc_00d9e7b0 */
GEN_LIB GEN_FRAME uint F_00d9e7b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9e7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: Global::ThreadFree10 */
GEN_LIB GEN_FRAME unsigned int F_00d9e7d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9e7d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00d9e800 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00d9e150(this GEN_EDX_FWD,param_2);
  F_00d9e070(this GEN_EDX_ARG,param_1,uVar1);
  return param_1;
}

/* ref: Global::InitFromBuffer */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9e830u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: Global::PushBackDword */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: Global::EraseBytes */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9e890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined1 * puVar1;
  int iVar2;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - param_2;
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - param_1;
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + param_1)));
  if (0 < iVar2) {
    do {
      *puVar1 = puVar1[param_2];
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: Global::PushBackByteUnchecked */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined1 * puVar1;
  
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))))));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d9e8f0 */
GEN_LIB GEN_FRAME uint F_00d9e8f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9e8f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d9cbc0();
  uVar1 = F_00d92460(uVar1,param_1);
  return uVar1;
}

/* ref: FUN_00d9e910 */
GEN_LIB GEN_FRAME uint F_00d9e910(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9e910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d9cbc0();
  uVar1 = F_00d924b0(uVar1,param_1);
  return uVar1;
}

/* ref: FUN_00d9e930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  F_00d9e230(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),&(*(uint *)&gen_args[1]));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00d9e950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd9e950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  char * pcVar2;
  
  uVar1 = F_00d9e150(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  pcVar2 = ((char *)GEN_TOP(F_00d9e070(this GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3,uVar1)));
  if (*pcVar2 != '\0') {
    F_00d9e280(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: Global::ReplaceBytes */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9e990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xd9e990u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  uint uVar1;
  undefined1 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 4)));
  iVar5 = (iVar4 - param_3) + param_5;
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < iVar5) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(param_1,this,iVar3,1);
  }
  F_00da38f0(param_2 + *(int *)this + param_5,param_3 + param_2 + *(int *)this,
                     (iVar4 - param_2) - param_3);
  puVar2 = ((undefined1 *)GEN_TOP((*(int *)this + param_2)));
  if (0 < param_5) {
    iVar3 = param_4 - (int)puVar2;
    iVar4 = param_5;
    do {
      *puVar2 = puVar2[iVar3];
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar5;
  return 0;
}

/* ref: Global::AssignBytes */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ea20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd9ea20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,*(undefined4 *)this,uVar3);
    }
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(piVar2[1]));
    pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc)));
    uVar3 = (*pcVar1)((*(int * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)this = uVar3;
    *((int * PTR32 *)GEN_TOP(((int)this + 8))) = (*(int * PTR32 *)&gen_args[1]);
  }
  iVar6 = piVar2[1];
  puVar4 = *(undefined1 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = puVar4[iVar5];
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return (uint)this;
}

/* ref: Global::PushBackDwordDefault */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9eac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9eac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = F_00d9cbc0();
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(uVar2,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: Global::Reserve_00d9eb00 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d9eb00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9eb00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int in_ECX = 0;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00d9cbc0();
  uVar4 = *((uint *)GEN_TOP((in_ECX + 8))) & 0x3fffffff;
  if ((int)uVar4 < param_1) {
    iVar1 = uVar4 * 2;
    iVar5 = param_1;
    if (param_1 < iVar1) {
      iVar5 = iVar1;
    }
    bVar2 = F_00d95690(uVar3,in_ECX,iVar5,1);
    return CONCAT31(extraout_var,bVar2);
  }
  return 0;
}

/* ref: Global::Resize_00d9eb40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9eb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9eb40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  int iVar4;
  
  uVar2 = F_00d9cbc0();
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < param_1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= param_1) {
      iVar4 = param_1;
    }
    bVar1 = F_00d95690(uVar2,this,iVar4,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: Global::InsertBytes */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9eb80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd9eb80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00d9e990(this GEN_EDX_FWD,param_1,param_2,0,param_3,param_4);
  return;
}

/* ref: Global::AssignBytesDefault */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9eba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd9eba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  undefined1 * puVar5;
  int iVar6;
  int iVar7;
  
  piVar3 = ((int *)GEN_TOP(F_00d9cbc0()));
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  uVar4 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar4 < (*(int * PTR32 *)&gen_args[0])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,*(undefined4 *)this,uVar4);
    }
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(piVar2[1]));
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar3 + 0xc)));
    uVar4 = (*pcVar1)(piVar3,&(*(int * PTR32 *)&gen_args[0]));
    *(uint *)this = uVar4;
    *((int * PTR32 *)GEN_TOP(((int)this + 8))) = (*(int * PTR32 *)&gen_args[0]);
  }
  iVar7 = piVar2[1];
  puVar5 = *(undefined1 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar7;
  if (0 < iVar7) {
    iVar6 = *piVar2 - (int)puVar5;
    do {
      *puVar5 = puVar5[iVar6];
      puVar5 = puVar5 + 1;
      iVar7 = iVar7 - 1;
    } while (iVar7 != 0);
  }
  return (uint)this;
}

/* ref: Global::StringHashMap */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9ec20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ec20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00d9cbc0()));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,0xc0);
  *(uint *)this = uVar2;
  F_00da1030(uVar2,0xff,0xc0);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xf;
  return (uint)this;
}

/* ref: Global::AssignHashMap */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ec80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ec80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_00d9cbc0()));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG,*(undefined4 *)this,(*((int *)GEN_TOP(((int)this + 8))) * 3 + 3) * 4);
  iVar1 = param_1[2];
  *((int *)GEN_TOP(((int)this + 8))) = iVar1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,(iVar1 * 3 + 3) * 4);
  *(uint *)this = uVar3;
  F_00da1010(uVar3,*param_1,(*((int *)GEN_TOP(((int)this + 8))) * 3 + 3) * 4);
  return (uint)this;
}

/* ref: Global::Rehash_00d9ecf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ecf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ecf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  
  iVar1 = *(int *)this;
  iVar4 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  piVar2 = ((int *)GEN_TOP(F_00d9cbc0()));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1 * 0xc);
  *(uint *)this = uVar3;
  F_00da1030(uVar3,0xff,param_1 * 0xc);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((int *)GEN_TOP(((int)this + 8))) = param_1 - 1;
  if (0 < iVar4) {
    puVar5 = ((undefined4 *)GEN_TOP((iVar1 + 4)));
    param_1 = iVar4;
    do {
      if (puVar5[-1] != -1) {
        F_00d9e090(this GEN_EDX_ARG,*puVar5,puVar5[1]);
      }
      puVar5 = puVar5 + 3;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG,iVar1,iVar4 * 0xc);
  return uVar3;
}

/* ref: Global::FreeBytes_00d9ed90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9ed90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9ed90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00d9cbc0()));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                              (piVar1 GEN_EDX_ARG,*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: Global::FreeDwords */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9edd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9edd0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::ResizeTerminated */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ee10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ee10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_1 + 1;
  uVar2 = F_00d9cbc0();
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(uVar2,this,iVar4,1);
  }
  uVar2 = *(uint *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  *((undefined1 *)GEN_TOP((param_1 + uVar2))) = 0;
  return uVar2;
}

/* ref: Global::InsertBytesDefault */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00d9ee60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9ee60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * in_ECX = 0;
  
  uVar1 = F_00d9cbc0();
  F_00d9eb80(in_ECX GEN_EDX_ARG,uVar1,param_1,param_2,param_3);
  return;
}

/* ref: Global::AssignBytesDefault2 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9ee80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd9ee80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  undefined1 * puVar5;
  int iVar6;
  int iVar7;
  
  piVar3 = ((int *)GEN_TOP(F_00d9cbc0()));
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  uVar4 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar4 < (*(int * PTR32 *)&gen_args[0])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,*(undefined4 *)this,uVar4);
    }
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(piVar2[1]));
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar3 + 0xc)));
    uVar4 = (*pcVar1)(piVar3,&(*(int * PTR32 *)&gen_args[0]));
    *(uint *)this = uVar4;
    *((int * PTR32 *)GEN_TOP(((int)this + 8))) = (*(int * PTR32 *)&gen_args[0]);
  }
  iVar7 = piVar2[1];
  puVar5 = *(undefined1 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar7;
  if (0 < iVar7) {
    iVar6 = *piVar2 - (int)puVar5;
    do {
      *puVar5 = puVar5[iVar6];
      puVar5 = puVar5 + 1;
      iVar7 = iVar7 - 1;
    } while (iVar7 != 0);
  }
  return 0;
}

/* ref: Global::FreeBytes2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9eef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9eef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00d9cbc0()));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                              (piVar1 GEN_EDX_ARG,*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: Global::Insert */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ef30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9ef30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char * pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  uint uVar7;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00d9ecf0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  uVar4 = 0;
  cVar2 = *param_1;
  pcVar6 = param_1;
  while (cVar2 != '\0') {
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    uVar4 = (int)cVar2 + uVar4 * 0x1f;
    cVar2 = *pcVar1;
  }
  uVar4 = uVar4 & 0x7fffffff;
  uVar7 = uVar4;
  while( true ) {
    uVar7 = uVar7 & *((uint *)GEN_TOP(((int)this + 8)));
    iVar3 = uVar7 * 0xc;
    if ((*((uint *)GEN_TOP((*(int *)this + iVar3))) == uVar4) &&
       (uVar5 = F_00da0d20(param_1,*((undefined4 *)GEN_TOP((*(int *)this + 4 + iVar3)))), uVar5 == 0))
    break;
    if (*((int *)GEN_TOP((iVar3 + *(int *)this))) == -1) {
      iVar3 = uVar7 * 0xc;
      *((uint *)GEN_TOP((iVar3 + *(int *)this))) = uVar4;
      *((char * PTR32 *)GEN_TOP((iVar3 + 4 + *(int *)this))) = param_1;
      *((undefined4 *)GEN_TOP((iVar3 + 8 + *(int *)this))) = param_2;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
      return uVar7;
    }
    uVar7 = uVar7 + 1;
  }
  return uVar7;
}

/* ref: hkMapBase::Reserve */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9efe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9efe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      uVar1 = uVar1 * 2;
    } while ((int)uVar1 < param_1 * 2);
  }
  if (*((int *)GEN_TOP(((int)this + 8))) + 1 < (int)uVar1) {
    uVar1 = F_00d9ecf0(this GEN_EDX_FWD,uVar1);
  }
  return uVar1;
}

/* ref: hkArray::ClearAndDeallocate_00d9f010 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00d9cbc0()));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < *((int *)GEN_TOP(((int)this + 8)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                              (piVar1 GEN_EDX_ARG,*(undefined4 *)this,*((int *)GEN_TOP(((int)this + 8))) * 4)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: hkArray::ClearAndDeallocate_00d9f050 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00d9cbc0()));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                              (piVar1 GEN_EDX_ARG,*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: hkArray::ClearAndDeallocateBytes */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00d9cbc0()));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                              (piVar1 GEN_EDX_ARG,*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: hkArray::SetDataUserFree */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9f0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9f0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: hkArray::ClearAndDeallocatePtrs */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f0f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00d9cbc0()));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < *((int *)GEN_TOP(((int)this + 8)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                              (piVar1 GEN_EDX_ARG,*(undefined4 *)this,*((int *)GEN_TOP(((int)this + 8))) * 4)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: FUN_00d9f130 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00d9cbc0()));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                              (piVar1 GEN_EDX_ARG,*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: FUN_00d9f170 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00d9cbc0()));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                              (piVar1 GEN_EDX_ARG,*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: hkStringBuf::hkStringBuf */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  uVar1 = F_00d9cbc0();
  if ((*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) == 0) {
    F_00d95690(uVar1,this,1,1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
  **(undefined1 * PTR32 *)this = 0;
  **(undefined1 * PTR32 *)this = 0;
  return (uint)this;
}

/* ref: Global::PrintDebugAndConsole */
GEN_LIB GEN_FRAME uint F_00d9f250(GEN_P(LPCSTR param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9f250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  uint uVar1;
  
  gen_imp_OutputDebugStringA(param_1);
  uVar1 = F_00c5181b(&REFG(undefined, 0x113bdcc),param_1);
  return uVar1;
}

/* ref: hkMemoryInitUtil::QuitMemorySystem */
GEN_LIB GEN_NOFRAME uint F_00d9f270(void)
{
  GEN_ENTER(0xd9f270u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = 0;
  if (REFG(int * PTR32, 0x15da4a8) != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15da4a8) + 8))))(REFG(int * PTR32, 0x15da4a8) GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x15da4a8))))(REFG(int * PTR32, 0x15da4a8) GEN_EDX_ARG,0);
    REFG(int * PTR32, 0x15da4a8) = ((int *)GEN_TOP(0x0));
    F_00d9b8e0(0);
  }
  if (REFG(undefined * PTR32, 0x15da4ac) != ((code *)GEN_TOP(0x0))) {
    ((code *)REFG(gen_code32, 0x15da4ac))();
    REFG(undefined * PTR32, 0x15da4ac) = ((code *)GEN_TOP(0x0));
  }
  return uVar1;
}

/* ref: FUN_00d9f360 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00da3670(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,0,0xc);
  return (uint)this;
}

/* ref: hkCpuJobThreadPool::WorkerThreadData::WorkerThreadData */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00db60b0((int)this + 8 GEN_EDX_FWD);
  F_00da3670(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG,0,1);
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0xffffffff;
  *(undefined4 *)this = 0;
  return (uint)this;
}

/* ref: hkCpuJobThreadPool::vf3 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9f3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9f3c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  undefined * this_00;
  
  *(undefined4 *)(this + 0x248) = param_1;
  this[600] = (undefined1)0x1;
  iVar1 = *(int *)(this + 0x250) - 1;
  if (-1 < iVar1) {
    this_00 = this + iVar1 * 0x30 + 0x2c;
    do {
      F_00da36c0(this_00 GEN_EDX_FWD,1);
      this_00 = this_00 - 0x30;
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: hkCpuJobThreadPool::vf5 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d9f400(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((char *)GEN_TOP((in_ecx + 600))) != '\0';
}

/* ref: hkCpuJobThreadPool::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f410(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x250)));
}

/* ref: hkCpuJobThreadPool::RemoveThread */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9f420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  *(int *)(this + 0x250) = *(int *)(this + 0x250) - 1;
  iVar1 = *(int *)(this + 0x250) * 0x30;
  this[iVar1 + 0x28] = (undefined1)0x1;
  F_00da36c0(this + iVar1 + 0x2c GEN_EDX_FWD,1);
  F_00da36b0(this + 0x24c GEN_EDX_ARG);
  F_00db60c0(this + iVar1 + 0x10 GEN_EDX_ARG);
  return;
}

/* ref: hkCpuJobThreadPool::vf4 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9f460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (this[600] != (undefined1)0x0) {
    iVar1 = 0;
    if (0 < *(int *)(this + 0x250)) {
      do {
        F_00da36b0(this + 0x24c GEN_EDX_FWD);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this + 0x250));
    }
    this[600] = (undefined1)0x0;
  }
  return;
}

/* ref: hkCpuJobThreadPool::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9f4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f4a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * phVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x250)) {
    phVar1 = this + 0x34;
    do {
      *(undefined4 *)phVar1 = *(undefined4 *)(phVar1 - 4);
      phVar1[-0xb] = (undefined1)0x1;
      iVar2 = iVar2 + 1;
      phVar1 = phVar1 + 0x30;
    } while (iVar2 < *(int *)(this + 0x250));
  }
  return;
}

/* ref: FUN_00d9f4d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9f4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f4d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * pvVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113be68));
  F_00d9f460(this GEN_EDX_FWD);
  iVar1 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x250)))) {
    pvVar2 = ((undefined *)GEN_TOP(((int)this + 0x2c)));
    do {
      *((undefined1 *)GEN_TOP(((int)pvVar2 - 4))) = 1;
      F_00da36c0(pvVar2 GEN_EDX_ARG,1);
      iVar1 = iVar1 + 1;
      pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 0x30)));
    } while (iVar1 < *((int *)GEN_TOP(((int)this + 0x250))));
  }
  iVar1 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x250)))) {
    do {
      F_00da36b0(((undefined *)GEN_TOP(((int)this + 0x24c))) GEN_EDX_ARG);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *((int *)GEN_TOP(((int)this + 0x250))));
  }
  F_00d918e0(0);
  F_00da36a0(((undefined *)GEN_TOP(((int)this + 0x24c))) GEN_EDX_ARG);
  iVar1 = 0xb;
  pvVar2 = ((undefined *)GEN_TOP(((int)this + 0x250)));
  do {
    F_00da36a0(((undefined *)GEN_TOP(((int)pvVar2 - 0x14))) GEN_EDX_ARG);
    F_00db60c0(((undefined *)GEN_TOP(((int)pvVar2 - 0x30))) GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
    pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 0x30)));
  } while (-1 < iVar1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return;
}

/* ref: hkCpuJobThreadPool::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9f570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9f570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined * phVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x250)) {
    phVar3 = this + 0x34;
    do {
      if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
        F_00d95710(param_2,param_1,8);
      }
      puVar1 = ((undefined4 *)GEN_TOP((*param_1 + param_1[1] * 8)));
      param_1[1] = param_1[1] + 1;
      *puVar1 = *(undefined4 *)(phVar3 - 4);
      iVar2 = iVar2 + 1;
      puVar1[1] = *(undefined4 *)phVar3;
      phVar3 = phVar3 + 0x30;
    } while (iVar2 < *(int *)(this + 0x250));
  }
  return;
}

/* ref: hkCpuJobThreadPool::WorkerThreadMain */
GEN_LIB GEN_FRAME uint F_00d9f5e0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9f5e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x44, 12, 4);
  char cVar1;
  undefined4 * puVar2;
  HANDLE hThread;
  int * piVar3;
  LPVOID pvVar4;
  DWORD dwIdealProcessor;
  
  puVar2 = ((undefined4 *)GEN_TOP(*param_1));
  MXCSR = MXCSR | 0x8000;
  dwIdealProcessor = param_1[7];
  hThread = gen_imp_GetCurrentThread();
  gen_imp_SetThreadIdealProcessor(hThread,dwIdealProcessor);
  F_00d92530(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar3 = ((int *)GEN_TOP(F_00d9b8f0()));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x113be90)),3);
  F_00d9ba60(((undefined1 *)(gen_frame + 0x0)));
  gen_imp_TlsSetValue(REFG(undefined4, 0x15d9a8c),(LPVOID)param_1[6]);
  if (0 < (int)puVar2[3]) {
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    F_00da13f0(pvVar4,puVar2[3]);
  }
  piVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  param_1[10] = *piVar3;
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  param_1[0xb] = *((int *)GEN_TOP(((int)pvVar4 + 4)));
  F_00da36b0(param_1 + 9 GEN_EDX_ARG);
  cVar1 = (char)param_1[8];
  while (cVar1 == '\0') {
    if (*((char *)GEN_TOP(((int)param_1 + 0x21))) != '\0') {
      pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      F_00da1330(pvVar4);
      pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      param_1[0xb] = *((int *)GEN_TOP(((int)pvVar4 + 4)));
      *((undefined1 *)GEN_TOP(((int)param_1 + 0x21))) = 0;
    }
    F_00d969a0(*puVar2 GEN_EDX_ARG,1);
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    param_1[0xb] = *((int *)GEN_TOP(((int)pvVar4 + 4)));
    F_00da36c0(puVar2 + 1 GEN_EDX_ARG,1);
    F_00da36b0(param_1 + 9 GEN_EDX_ARG);
    cVar1 = (char)param_1[8];
  }
  F_00d9bb50();
  piVar3 = ((int *)GEN_TOP(F_00d9b8f0()));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),3);
  F_00da36c0(puVar2 + 1 GEN_EDX_ARG,1);
  F_00d9b7c0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00d9f740 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9f740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9f740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113be68));
  this_00 = ((undefined *)GEN_TOP(((int)this + 8)));
  iVar3 = 0xb;
  do {
    F_00d9f380(this_00 GEN_EDX_FWD);
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x30)));
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00d9f360(((undefined *)GEN_TOP(((int)this + 0x248))) GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)this + 600))) = 0;
  *((int *)GEN_TOP(((int)this + 0x25c))) = param_1[6];
  *((int *)GEN_TOP(((int)this + 0x260))) = param_1[1];
  *((int *)GEN_TOP(((int)this + 0x254))) = param_1[2];
  (*(int *)(gen_frame + 0x8)) = *param_1;
  if (0xb < *param_1) {
    (*(int *)(gen_frame + 0x8)) = 0xb;
  }
  iVar3 = (*(int *)(gen_frame + 0x8));
  *((int *)GEN_TOP(((int)this + 0x250))) = (*(int *)(gen_frame + 0x8));
  F_00d9baa0(&(*(int *)(gen_frame + 0x0)));
  if (0 < iVar3) {
    (*(int *)(gen_frame + 0x4)) = 0;
    iVar3 = 1;
    puVar2 = this;
    do {
      puVar2[2] = (int)this + 0x248;
      puVar2[8] = iVar3;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      *(undefined2 *)(puVar2 + 10) = 0;
      if (param_1[4] < 1) {
        puVar2[9] = iVar3 % (*(int *)(gen_frame + 0x0));
      }
      else {
        puVar2[9] = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + param_1[3])));
      }
      F_00db60e0(puVar2 + 4 GEN_EDX_ARG,((code *)REFP(0xd9f5e0)),puVar2 + 2,
                 *((undefined4 *)GEN_TOP(((int)this + 0x25c))),*((undefined4 *)GEN_TOP(((int)this + 0x260))));
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 4;
      iVar3 = iVar3 + 1;
      iVar1 = (*(int *)(gen_frame + 0x8)) - 1;
      (*(int *)(gen_frame + 0x8)) = iVar1;
      puVar2 = puVar2 + 0xc;
    } while (iVar1 != 0);
  }
  F_00d918e0(1);
  return (uint)this;
}

/* ref: hkCpuJobThreadPool::AddThread */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9f870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  undefined * phVar1;
  int iVar2;
  uint uVar3;
  
  phVar1 = this + *(int *)(this + 0x250) * 0x30 + 8;
  *(undefined * PTR32 *)phVar1 = this + 0x248;
  iVar2 = *(int *)(this + 0x250);
  *(int *)(phVar1 + 0x28) = 0;
  *(int *)(phVar1 + 0x2c) = 0;
  *(undefined2 *)(phVar1 + 0x20) = 0;
  *(int *)(phVar1 + 0x18) = iVar2 + 1;
  gen_imp_GetSystemInfo((GEN_LPANY)((byte *)(gen_frame + 0x0)));
  *(int *)(phVar1 + 0x1c) = *(int *)(phVar1 + 0x18) % (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20));
  uVar3 = F_00db60e0(phVar1 + 8 GEN_EDX_ARG,((code *)REFP(0xd9f5e0)),phVar1,*(undefined4 *)(this + 0x25c),
                     *(undefined4 *)(this + 0x260));
  *(int *)(this + 0x250) = *(int *)(this + 0x250) + 1;
  return uVar3;
}

/* ref: hkCpuJobThreadPool::vf7 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9f8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9f8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1;
  if (0xb < param_1) {
    iVar3 = 0xb;
  }
  iVar1 = *(int *)(this + 0x250);
  iVar2 = iVar1 - iVar3;
  while (iVar1 < iVar3) {
    F_00d9f870(this GEN_EDX_FWD);
    iVar1 = *(int *)(this + 0x250);
    iVar2 = iVar1 - iVar3;
  }
  if (iVar1 != iVar3 && SBORROW4(iVar1,iVar3) == iVar2 < 0) {
    do {
      F_00d9f420(this GEN_EDX_ARG);
    } while (iVar3 < *(int *)(this + 0x250));
  }
  return;
}

/* ref: hkCpuJobThreadPoolCinfo::hkCpuJobThreadPoolCinfo */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f940(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 1;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0x80000000;
  in_ecx[6] = ((char *)REFP(0x113bea4));
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: hkCpuJobThreadPool::WorkerThreadData::~WorkerThreadData */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9f990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00da36a0(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_FWD);
  F_00db60c0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00d9f9e0 */
GEN_LIB GEN_FRAME uint F_00d9f9e0(GEN_P(uint * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9f9e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  return *param_1;
}

/* ref: hkReferencedObject::FreeReferencedObject */
GEN_LIB GEN_FRAME uint F_00d9f9f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9f9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

