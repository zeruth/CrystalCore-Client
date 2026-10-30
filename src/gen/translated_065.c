#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00750e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00750e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x750e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00746240(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00750f00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00750f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x750f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0074d4f0(this GEN_EDX_FWD,1);
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
      F_0074d4f0(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00750f70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00750f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x750f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0074d4f0(this GEN_EDX_FWD,1);
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
      F_0074d4f0(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00750fe0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00750fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x750fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0074d7c0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00751030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00751030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x751030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00749bf0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x1c,800);
  return (uint)uVar1;
}

/* ref: FUN_00751070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00751070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x751070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00749c90(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_007510b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007510b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7510b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10))) & 1U) == 0) &&
     (*((uint *)GEN_TOP(((int)this + 8))) <= *((int *)GEN_TOP(((int)this + 0x10))) + 2U >> 1)) {
    F_0074d9d0(this GEN_EDX_FWD,1);
  }
  uVar3 = *((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10)));
  uVar4 = uVar3 >> 1;
  if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar4) {
    uVar4 = uVar4 - *((uint *)GEN_TOP(((int)this + 8)));
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,800);
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar4 * 4))) = uVar2;
  }
  uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar4 * 4)));
  puVar1 = ((undefined4 *)GEN_TOP((uVar4 + (uVar3 & 1) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    uVar4 = param_1[1];
    puVar1[1] = uVar4;
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  return uVar4;
}

/* ref: FUN_00751140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00751140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x751140u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,800)));
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
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,800);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_007511f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007511f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7511f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0074dbb0(this GEN_EDX_FWD,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP(((((int)param_1 - (int)puVar2) / 0x88) * 0x88 + *(int *)this)));
  }
  else {
    puVar2 = param_1;
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0074dbb0(this GEN_EDX_ARG,1);
    }
  }
  if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined4 *)GEN_TOP(0x0))) {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar1 = 0x22; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x88;
  return;
}

/* ref: FUN_00751260 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00751260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x751260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)this != *((int *)GEN_TOP(((int)this + 4)))) {
    *((int *)GEN_TOP(((int)this + 4))) = *(int *)this;
  }
  return;
}

/* ref: FUN_007512b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007512b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7512b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00751300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00751300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x751300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0074dcc0(this GEN_EDX_FWD,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0x14) * 0x14)));
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x14;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0074dcc0(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      puVar3[3] = param_1[3];
      puVar3[4] = param_1[4];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x14;
  return (uint)puVar3;
}

/* ref: FUN_007513b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007513b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7513b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (*(uint *)this != uVar1) {
    uVar1 = F_0073f510(uVar1,uVar1,*(uint *)this);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_007513d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007513d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7513d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  if (*((uint *)GEN_TOP(((int)this + 8))) <= *((int *)GEN_TOP(((int)this + 0x10))) + 1U) {
    F_0074dd50(this GEN_EDX_FWD,1);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar3 == 0) {
    iVar3 = *((int *)GEN_TOP(((int)this + 8)));
  }
  iVar3 = iVar3 - 1;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar3 * 4))) == 0) {
    uVar2 = F_004296a0(0x30,0,800);
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar3 * 4))) = uVar2;
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar3 * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10b8a5c));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[5] = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
    *(undefined1 *)(puVar1 + 6) = *((undefined1 *)GEN_TOP((param_1 + 0x18)));
    puVar1[7] = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
    *(undefined1 *)(puVar1 + 8) = *((undefined1 *)GEN_TOP((param_1 + 0x20)));
    puVar1[9] = *((undefined4 *)GEN_TOP((param_1 + 0x24)));
    puVar1[10] = *((undefined4 *)GEN_TOP((param_1 + 0x28)));
    *(undefined1 *)(puVar1 + 0xb) = *((undefined1 *)GEN_TOP((param_1 + 0x2c)));
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  *((int *)GEN_TOP(((int)this + 0xc))) = iVar3;
  return 0;
}

/* ref: FUN_00751470 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00751470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x751470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  if (*((uint *)GEN_TOP(((int)this + 8))) <= *((int *)GEN_TOP(((int)this + 0x10))) + 1U) {
    F_0074dd50(this GEN_EDX_FWD,1);
  }
  uVar3 = *((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10)));
  if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar3) {
    uVar3 = uVar3 - *((uint *)GEN_TOP(((int)this + 8)));
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4))) == 0) {
    uVar2 = F_004296a0(0x30,0,800);
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4))) = uVar2;
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10b8a5c));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[5] = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
    *(undefined1 *)(puVar1 + 6) = *((undefined1 *)GEN_TOP((param_1 + 0x18)));
    puVar1[7] = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
    *(undefined1 *)(puVar1 + 8) = *((undefined1 *)GEN_TOP((param_1 + 0x20)));
    puVar1[9] = *((undefined4 *)GEN_TOP((param_1 + 0x24)));
    puVar1[10] = *((undefined4 *)GEN_TOP((param_1 + 0x28)));
    *(undefined1 *)(puVar1 + 0xb) = *((undefined1 *)GEN_TOP((param_1 + 0x2c)));
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  return 0;
}

/* ref: FUN_00751510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00751510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x751510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00749d30(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x38,800);
  return (uint)uVar1;
}

/* ref: FUN_00751590 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00751590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x751590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1 & 0xfffffff0,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_007515d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007515d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7515d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0074df70(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00751600 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00751600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x751600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x28) * 0x28,800);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_00751650 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00751650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x751650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)this != *((int *)GEN_TOP(((int)this + 4)))) {
    *((int *)GEN_TOP(((int)this + 4))) = *(int *)this;
  }
  return;
}

/* ref: FUN_007516a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007516a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7516a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0074e060(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_007516d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007516d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7516d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined2 * puVar3;
  undefined2 * puVar4;
  undefined2 * puVar5;
  undefined2 * puVar6;
  
  puVar5 = param_1;
  if (((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 1))) < param_1) {
    puVar3 = ((undefined2 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 2,0,800)));
    puVar5 = *((undefined2 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar6 = puVar3;
    for (puVar4 = *(undefined2 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != ((undefined2 *)GEN_TOP(0x0))) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 1) * 2,800);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined2 * PTR32 *)this = puVar3;
    *((undefined2 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined2 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 1);
  }
  return (uint)puVar5;
}

/* ref: FUN_00751770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00751770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x751770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0074e140(this GEN_EDX_FWD,1);
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
      F_0074e140(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00751810 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00751810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x751810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0074e1b0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00751840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00751840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x751840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0074e210(this GEN_EDX_FWD,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0xc) * 0xc)));
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0xc;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0074e210(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0xc;
  return (uint)puVar3;
}

/* ref: FUN_007518d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007518d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7518d0u, gen_a0, gen_a1, 0u, 0u);
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
      puVar4 = ((undefined4 *)GEN_TOP(F_0074e290(this GEN_EDX_FWD,1)));
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
      F_0074e290(this GEN_EDX_ARG,1);
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

/* ref: FUN_00751950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00751950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x751950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  
  F_007390c0(param_2 + 0xb8,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_2);
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  for (iVar2 = iVar1 - 0xb8; iVar2 != iVar1; iVar2 = iVar2 + 0xb8) {
    F_0042c880(((undefined *)GEN_TOP((iVar2 + 0x58))) GEN_EDX_ARG);
    F_0042c880(((undefined *)GEN_TOP((iVar2 + 4))) GEN_EDX_ARG);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 0xb8;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_007519b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007519b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7519b0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,800)));
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
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,800);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00751aa0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00751aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x751aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xc8, 8, 4);
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc4));
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x6d))) == '\0') {
    puVar2 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar2[3] < *param_1) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(*puVar2));
        puVar3 = puVar2;
      }
      puVar2 = puVar1;
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x6d))) == '\0');
  }
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && ((uint)puVar3[3] <= *param_1)) {
    return (uint)(puVar3 + 4);
  }
  F_0042b630(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_FWD);
  (*(uint *)(gen_frame + 0x60)) = *param_1;
  ((byte *)(gen_frame + 0x64))[0] = ((byte *)(gen_frame + 0x0))[4];
  ((byte *)(gen_frame + 0x64))[1] = ((byte *)(gen_frame + 0x0))[5];
  ((byte *)(gen_frame + 0x64))[2] = ((byte *)(gen_frame + 0x0))[6];
  ((byte *)(gen_frame + 0x64))[3] = ((byte *)(gen_frame + 0x0))[7];
  ((byte *)(gen_frame + 0x68))[0] = ((byte *)(gen_frame + 0x0))[8];
  ((byte *)(gen_frame + 0x68))[1] = ((byte *)(gen_frame + 0x0))[9];
  ((byte *)(gen_frame + 0x68))[2] = ((byte *)(gen_frame + 0x0))[10];
  ((byte *)(gen_frame + 0x68))[3] = ((byte *)(gen_frame + 0x0))[0xb];
  F_0042cbc0(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0x70,0,800)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar2 + 0x1b) = 0;
  if (puVar2 + 3 != ((uint *)GEN_TOP(0x0))) {
    puVar2[3] = (*(uint *)(gen_frame + 0x60));
    puVar2[4] = ((byte *)(gen_frame + 0x64));
    puVar2[5] = ((byte *)(gen_frame + 0x68));
    F_0042cbc0(puVar2 + 6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x6c)));
  }
  F_0074aca0(this GEN_EDX_ARG,((byte *)(gen_frame + 0x0)),puVar3,puVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0x10;
}

/* ref: FUN_00751bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00751bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x751bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00749ea0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00751c10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00751c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x751c10u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_0074e360(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0074e360(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00751c80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00751c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x751c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0074e410(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00751cb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00751cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x751cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x54;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_0074e460(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0074e460(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00751d40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00751d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x751d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != param_3) {
    uVar2 = F_00739130(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1);
    uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
    for (uVar3 = uVar2; uVar3 != uVar1; uVar3 = uVar3 + 0x140) {
      F_0042c880(((undefined *)GEN_TOP((uVar3 + 8))) GEN_EDX_ARG);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00751db0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00751db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x751db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  if (iVar2 != 0) {
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x140) {
      F_0042c880(((undefined *)GEN_TOP((iVar2 + 8))) GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x140) * 0x140,800);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_00751e10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00751e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x751e10u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00751140(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00751140(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00751e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00751e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x751e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10))) & 3U) == 0) &&
     (*((uint *)GEN_TOP(((int)this + 8))) <= *((int *)GEN_TOP(((int)this + 0x10))) + 4U >> 2)) {
    F_0074e580(this GEN_EDX_FWD,1);
  }
  uVar3 = *((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10)));
  uVar4 = uVar3 >> 2;
  if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar4) {
    uVar4 = uVar4 - *((uint *)GEN_TOP(((int)this + 8)));
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,800);
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar4 * 4))) = uVar2;
  }
  uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar4 * 4)));
  puVar1 = ((undefined4 *)GEN_TOP((uVar4 + (uVar3 & 3) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  return uVar4;
}

/* ref: FUN_00751f00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00751f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x751f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 4;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 4;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_0074e700(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0074e700(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00751f70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00751f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x751f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x28;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x28;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_0074e790(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0074e790(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00752000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x752000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(*piVar2))) && (param_3 == piVar2)) {
    F_0074e060(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x2cd))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x2cd))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x2cd)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x2cd)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x2cd)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x2cd)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_0074e880(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_007520d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007520d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7520d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00752000(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_007520f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007520f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7520f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 1;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 1;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_007516d0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_007516d0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00752160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x752160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(*piVar2))) && (param_3 == piVar2)) {
    F_0074e1b0(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x101))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x101))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x101)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x101)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x101)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x101)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_0074ebb0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00752230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x752230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00752160(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00752250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x752250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0xb8;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xb8;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_0074f1b0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0074f1b0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_007522e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007522e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7522e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0074a1e0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x28,800);
  return (uint)uVar1;
}

/* ref: FUN_00752320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x752320u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_007519b0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_007519b0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00752390 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00752390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x752390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  if (iVar2 != 0) {
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x140) {
      F_0042c880(((undefined *)GEN_TOP((iVar2 + 0x1c))) GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x140) * 0x140,800);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_007523f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007523f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7523f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != param_3) {
    uVar2 = F_007394b0(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1);
    uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
    for (uVar3 = uVar2; uVar3 != uVar1; uVar3 = uVar3 + 0x74) {
      F_0042c880(((undefined *)GEN_TOP((uVar3 + 0x20))) GEN_EDX_ARG);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00752460 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00752460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x752460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  if (iVar2 != 0) {
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x74) {
      F_0042c880(((undefined *)GEN_TOP((iVar2 + 0x20))) GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x74) * 0x74,800);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_007524c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007524c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7524c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_0074f310(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_007524e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007524e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7524e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  
  if (this != param_1) {
    iVar1 = *(int *)this;
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,800);
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

/* ref: FUN_00752540 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x752540u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(*piVar2))) && (param_3 == piVar2)) {
    F_0074d7c0(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0xbd))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0xbd))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0xbd)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0xbd)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0xbd)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0xbd)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_0074f3d0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00752610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x752610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  
  puVar5 = param_1;
  if (((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this))) < param_1) {
    puVar3 = ((undefined1 *)GEN_TOP(F_004296a0(param_1,0,0x323)));
    puVar5 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar6 = puVar3;
    for (puVar4 = *(undefined1 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != ((undefined1 *)GEN_TOP(0x0))) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1,0x323);
    }
    puVar5 = puVar3 + (int)param_1;
    *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1);
    *(undefined1 * PTR32 *)this = puVar3;
    *((undefined1 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
  }
  return (uint)puVar5;
}

/* ref: FUN_007526a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007526a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7526a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x140;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x140,0,800);
    F_0074aa00(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    iVar4 = *(int *)this;
    if (iVar4 != 0) {
      for (; iVar4 != iVar1; iVar4 = iVar4 + 0x140) {
        F_0042c880(((undefined *)GEN_TOP((iVar4 + 8))) GEN_EDX_ARG);
      }
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x140) * 0x140,800);
    }
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x140 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = ((iVar1 - iVar2) / 0x140) * 0x140 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_007527a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007527a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7527a0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,800)));
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
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,800);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00752850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x752850u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) && (param_3 == *((int * PTR32 *)GEN_TOP(((int)this + 4))))) {
    F_0074f6d0(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x15)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x15)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00749f80(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_007528f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007528f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7528f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(*piVar2))) && (param_3 == piVar2)) {
    F_0074df70(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x65))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x65))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x65)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x65)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x65)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x65)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_0074f730(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_007529b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007529b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7529b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0074f990(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_007529e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007529e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7529e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x140;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x140,0,800);
    F_00748740(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc,0,param_1)
    ;
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    iVar4 = *(int *)this;
    if (iVar4 != 0) {
      for (; iVar4 != iVar1; iVar4 = iVar4 + 0x140) {
        F_0042c880(((undefined *)GEN_TOP((iVar4 + 0x1c))) GEN_EDX_ARG);
      }
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x140) * 0x140,800);
    }
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x140 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = ((iVar1 - iVar2) / 0x140) * 0x140 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00752ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x752ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x74;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x74,0,800);
    F_007487d0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc,0,param_1)
    ;
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    iVar4 = *(int *)this;
    if (iVar4 != 0) {
      for (; iVar4 != iVar1; iVar4 = iVar4 + 0x74) {
        F_0042c880(((undefined *)GEN_TOP((iVar4 + 0x20))) GEN_EDX_ARG);
      }
      F_00429760(*(undefined4 *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x74) * 0x74,800)
      ;
    }
    *((uint *)GEN_TOP(((int)this + 4))) = ((iVar1 - iVar2) / 0x74) * 0x74 + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x74 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00752be0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00752be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x752be0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0074c430(param_1,param_2,(int)this + 0xc,param_2);
  return;
}

/* ref: FUN_00752c00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x752c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(*piVar2))) && (param_3 == piVar2)) {
    F_0074e410(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x65))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x65))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x65)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x65)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x65)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x65)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_0074d560(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00752cc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x752cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_0074a520(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00752ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x752ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_0074f9e0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00752d00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x752d00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_007506b0(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_2)));
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00752d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x752d20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00750720(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_2)));
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00752d40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x752d40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0xc0,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x2f) = 0;
  F_00748140((int)this + 0xd,puVar1 + 3,param_2);
  F_00750050(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00752da0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x752da0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x2d0,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0xb3) = 0;
  F_007481e0((int)this + 0xd,puVar1 + 3,param_2);
  F_007503b0(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00752e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x752e00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_0074bd60(this GEN_EDX_FWD,param_2);
  F_007504b0(this GEN_EDX_ARG,param_1,uVar1,uVar2);
  return param_1;
}

/* ref: FUN_00752e30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x752e30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_0074be10(this GEN_EDX_FWD,param_2);
  F_007502b0(this GEN_EDX_ARG,param_1,uVar1,uVar2);
  return param_1;
}

/* ref: FUN_00752e60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x752e60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_007507e0(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_2)));
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00752e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x752e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_0074bea0(this GEN_EDX_FWD,param_2);
  F_007505b0(this GEN_EDX_ARG,param_1,uVar1,uVar2);
  return param_1;
}

/* ref: FUN_00752eb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x752eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00750850(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_2)));
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00752ed0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00752ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x752ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined4 uVar1;
  undefined4 * puVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0x68,0,800)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar2 + 0x19) = 0;
  uVar1 = *param_2;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2 + 1);
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2[3] = uVar1;
    F_0042cbc0(puVar2 + 4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0074ff60(this GEN_EDX_ARG,param_1,puVar2,0);
  return param_1;
}

/* ref: FUN_00752f70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00752f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x752f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_3;
    *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(param_3 + 1);
  }
  F_00750150(this GEN_EDX_ARG,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_00752fd0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00752fd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x752fd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00738690(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x1b0)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00753010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x753010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_007496b0(((undefined *)GEN_TOP(((int)this + 100))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x68))),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00753060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x753060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_007509a0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00753080 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00753080(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x753080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00750a20(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_007530a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007530a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7530a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00750930(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_007530d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007530d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7530d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
  F_00750ab0(this GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_00753120 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x753120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004296a0(0x28,0,800);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x25))) = 1;
  F_00750b30(this GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_00753170 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x753170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int * piVar7;
  byte bVar8;
  uint uVar9;
  
  piVar7 = (*(int * PTR32 *)&gen_args[0]);
  if (this != (*(int * PTR32 *)&gen_args[0])) {
    uVar9 = ((*(int * PTR32 *)&gen_args[0])[1] - *(*(int * PTR32 *)&gen_args[0])) / 0xb8;
    if (uVar9 == 0) {
      uVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
      uVar2 = *(undefined4 *)this;
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(uVar9));
      F_007509a0(this GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[0]),uVar2,uVar1);
      return (uint)this;
    }
    iVar3 = *(int *)this;
    uVar6 = (*((int *)GEN_TOP(((int)this + 4))) - iVar3) / 0xb8;
    if (uVar9 <= uVar6) {
      iVar4 = (*(int * PTR32 *)&gen_args[0])[1];
      iVar5 = *(*(int * PTR32 *)&gen_args[0]);
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(uVar9));
      uVar9 = F_0072db20(iVar5,iVar4,iVar3,uVar9);
      F_0074e300(uVar9,*((undefined4 *)GEN_TOP(((int)this + 4))));
      *((int *)GEN_TOP(((int)this + 4))) = ((piVar7[1] - *piVar7) / 0xb8) * 0xb8 + *(int *)this;
      return (uint)this;
    }
    if (uVar9 <= (uint)((*((int *)GEN_TOP(((int)this + 8))) - iVar3) / 0xb8)) {
      iVar4 = *(*(int * PTR32 *)&gen_args[0]);
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((uVar6 * 0xb8 + iVar4)));
      F_0072db20(iVar4,(*(int * PTR32 *)&gen_args[0]),iVar3,(*(int * PTR32 *)&gen_args[0]));
      uVar9 = F_007428e0((*(int * PTR32 *)&gen_args[0]),piVar7[1],*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,(*(int * PTR32 *)&gen_args[0]))
      ;
      *((uint *)GEN_TOP(((int)this + 4))) = uVar9;
      return (uint)this;
    }
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(uVar9));
    if (iVar3 != 0) {
      uVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
      F_0074e300(iVar3,uVar1);
      F_00726420(*(int *)this,(*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xb8);
    }
    bVar8 = F_0073a230(this GEN_EDX_ARG,(piVar7[1] - *piVar7) / 0xb8);
    if (bVar8 != 0) {
      uVar9 = F_0074c7a0(this GEN_EDX_ARG,*piVar7,piVar7[1],*(undefined4 *)this);
      *((uint *)GEN_TOP(((int)this + 4))) = uVar9;
    }
  }
  return (uint)this;
}

/* ref: FUN_00753310 */
GEN_OWN GEN_FRAME unsigned int F_00753310(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x753310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00750a20(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00753330 */
GEN_OWN GEN_FRAME unsigned int F_00753330(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x753330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00750a20(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00753350 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00753350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x753350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x24))) == 0) {
    return 0;
  }
  puVar1 = ((uint *)GEN_TOP(F_007512b0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD)));
  return *puVar1;
}

/* ref: FUN_00753370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x753370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00749d30(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x38,800);
  return (uint)uVar1;
}

/* ref: FUN_007533b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007533b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7533b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_007496b0(((undefined *)GEN_TOP(((int)this + 100))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x68))),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00753440 */
GEN_OWN GEN_FRAME byte F_00753440(void)
{
  GEN_ENTER(0x753440u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00753450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x753450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90b4));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  return (uint)this;
}

/* ref: FUN_00753480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x753480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90d4));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  return (uint)this;
}

/* ref: FUN_007534a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007534a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7534a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 0x54,0,0x35);
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x54 + uVar1;
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_007534f0 */
GEN_OWN GEN_FRAME uint F_007534f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7534f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(this GEN_EDX_ARG,param_1);
    }
    param_1 = param_1 + 0x54;
    this = ((undefined *)GEN_TOP(((int)this + 0x54)));
  } while (param_1 != param_2);
  return (uint)this;
}

/* ref: FUN_00753530 */
GEN_OWN GEN_FRAME uint F_00753530(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x753530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x54) {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(this GEN_EDX_ARG,iVar1);
    }
    this = ((undefined *)GEN_TOP(((int)this + 0x54)));
  }
  return (uint)this;
}

/* ref: FUN_00753570 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00753570(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x753570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x54) {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(this GEN_EDX_ARG,iVar1);
    }
    this = ((undefined *)GEN_TOP(((int)this + 0x54)));
  }
  return (uint)this;
}

/* ref: FUN_007535b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007535b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7535b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined * this_00;
  int iVar1;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  iVar2 = (param_1[1] - *param_1) / 0x54;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (iVar2 != 0) {
    iVar2 = iVar2 * 0x54;
    this_00 = ((undefined *)GEN_TOP(F_004296a0(iVar2,0,0x35)));
    *((undefined * PTR32 *)GEN_TOP(((int)this + 8))) = ((undefined *)GEN_TOP((iVar2 + (int)this_00)));
    *(undefined * PTR32 *)this = this_00;
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this_00;
    iVar2 = param_1[1];
    for (iVar1 = *param_1; iVar1 != iVar2; iVar1 = iVar1 + 0x54) {
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(this_00 GEN_EDX_ARG,iVar1);
      }
      this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x54)));
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this_00;
  }
  return (uint)this;
}

/* ref: FUN_00753650 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00753650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x753650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba654));
  uVar1 = F_004876d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: Client::Game::Event::SelectOkCallback::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753670(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x753670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10ba654));
  F_004876d0(param_1 + 6 GEN_EDX_FWD);
  param_1[4] = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_007536b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007536b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7536b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90b4));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba654));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90d4));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  F_007535b0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,param_1 + 0x18);
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *((undefined4 *)GEN_TOP((param_1 + 0x28)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = *((undefined4 *)GEN_TOP((param_1 + 0x2c)));
  return (uint)this;
}

/* ref: FUN_00753750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x753750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90e4));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  return (uint)this;
}

/* ref: FUN_00753770 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00753770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x753770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba664));
  uVar1 = F_004876d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: Client::Game::Event::SelectYesNoCallback::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x753790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  uVar1 = F_00487650(this + 0x18 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)(this + 0x18),
                       *(undefined4 *)(this + 0x1c));
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  return uVar1;
}

/* ref: Client::Game::Event::SelectYesNoCallback::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007537d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7537d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10ba664));
  F_004876d0(param_1 + 6 GEN_EDX_FWD);
  param_1[4] = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00753810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x753810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90b4));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba664));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90e4));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  F_007535b0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,param_1 + 0x18);
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *((undefined4 *)GEN_TOP((param_1 + 0x28)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = *((undefined4 *)GEN_TOP((param_1 + 0x2c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = *((undefined4 *)GEN_TOP((param_1 + 0x34)));
  return (uint)this;
}

/* ref: FUN_007538c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007538c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7538c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90f4));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  return (uint)this;
}

/* ref: FUN_007538e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007538e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7538e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba674));
  uVar1 = F_004876d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: Client::Game::Event::SelectYesNoCountCallback::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x753900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  uVar1 = F_00487650(this + 0x18 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)(this + 0x18),
                       *(undefined4 *)(this + 0x1c));
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  this[0x36] = (undefined1)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined2 *)(this + 0x34) = 0x100;
  return uVar1;
}

/* ref: Client::Game::Event::SelectYesNoCountCallback::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753950(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x753950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10ba674));
  F_004876d0(param_1 + 6 GEN_EDX_FWD);
  param_1[4] = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00753990 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x753990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90b4));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba674));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90f4));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  F_007535b0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,param_1 + 0x18);
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *((undefined4 *)GEN_TOP((param_1 + 0x28)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = *((undefined4 *)GEN_TOP((param_1 + 0x2c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  *((undefined1 *)GEN_TOP(((int)this + 0x34))) = *((undefined1 *)GEN_TOP((param_1 + 0x34)));
  *((undefined1 *)GEN_TOP(((int)this + 0x35))) = *((undefined1 *)GEN_TOP((param_1 + 0x35)));
  *((undefined1 *)GEN_TOP(((int)this + 0x36))) = *((undefined1 *)GEN_TOP((param_1 + 0x36)));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = *((undefined4 *)GEN_TOP((param_1 + 0x38)));
  return (uint)this;
}

/* ref: FUN_00753a50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x753a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9104));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  return (uint)this;
}

/* ref: FUN_00753a70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00753a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x753a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba684));
  uVar1 = F_004876d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: Client::Game::Event::SelectYesNoCheckCallback::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x753a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  uVar1 = F_00487650(this + 0x18 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)(this + 0x18),
                       *(undefined4 *)(this + 0x1c));
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x30] = (undefined1)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  return uVar1;
}

/* ref: Client::Game::Event::SelectYesNoCheckCallback::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753ad0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x753ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10ba684));
  F_004876d0(param_1 + 6 GEN_EDX_FWD);
  param_1[4] = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00753b10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x753b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90b4));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba684));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9104));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  F_007535b0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,param_1 + 0x18);
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *((undefined4 *)GEN_TOP((param_1 + 0x28)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = *((undefined4 *)GEN_TOP((param_1 + 0x2c)));
  *((undefined1 *)GEN_TOP(((int)this + 0x30))) = *((undefined1 *)GEN_TOP((param_1 + 0x30)));
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = *((undefined4 *)GEN_TOP((param_1 + 0x34)));
  return (uint)this;
}

/* ref: FUN_00753bb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x753bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9114))
  ;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  return (uint)this;
}

/* ref: FUN_00753bd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00753bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x753bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba694));
  uVar1 = F_004876d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: Client::Game::Event::SelectStringCallback::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x753bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  uVar1 = F_00487650(this + 0x18 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)(this + 0x18),
                       *(undefined4 *)(this + 0x1c));
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  return uVar1;
}

/* ref: Client::Game::Event::SelectStringCallback::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753c30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x753c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10ba694));
  F_004876d0(param_1 + 6 GEN_EDX_FWD);
  param_1[4] = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00753c70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x753c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90b4));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba694));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9114))
  ;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  F_007535b0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,param_1 + 0x18);
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *((undefined4 *)GEN_TOP((param_1 + 0x28)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = *((undefined4 *)GEN_TOP((param_1 + 0x2c)));
  return (uint)this;
}

/* ref: FUN_00753d10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x753d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9124));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  return (uint)this;
}

/* ref: FUN_00753d30 */
GEN_OWN GEN_FRAME byte F_00753d30(void)
{
  GEN_ENTER(0x753d30u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00753d40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00753d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x753d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 4,0,800);
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 4 + uVar1;
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00753da0 */
GEN_OWN GEN_FRAME unsigned int F_00753da0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x753da0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00753dd0 */
GEN_OWN GEN_FRAME unsigned int F_00753dd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x753dd0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00753e00 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00753e00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x753e00u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00753e30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x753e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  iVar3 = param_1[1];
  iVar1 = *param_1;
  *(undefined4 *)this = 0;
  iVar3 = iVar3 - iVar1 >> 2;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (iVar3 != 0) {
    puVar4 = ((undefined4 *)GEN_TOP(F_004296a0(iVar3 * 4,0,800)));
    *(undefined4 * PTR32 *)this = puVar4;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar4 + iVar3;
    puVar2 = ((undefined4 *)GEN_TOP(param_1[1]));
    for (puVar5 = ((undefined4 *)GEN_TOP(*param_1)); puVar5 != puVar2; puVar5 = puVar5 + 1) {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar4 = *puVar5;
      }
      puVar4 = puVar4 + 1;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
  }
  return (uint)this;
}

/* ref: FUN_00753eb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00753eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x753eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba6a4));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x38)));
  if (iVar1 != 0) {
    F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x40))) - iVar1 >> 2) * 4,800);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x28)));
  if (iVar1 != 0) {
    F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x30))) - iVar1 >> 2) * 4,800);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  uVar2 = F_004876d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::Game::Event::SelectIconStringCallback::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x753f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  F_00487650(this + 0x18 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c));
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 != *(int *)(this + 0x2c)) {
    F_00c46e20(iVar1,*(int *)(this + 0x2c),0);
    *(int *)(this + 0x2c) = iVar1;
  }
  iVar1 = *(int *)(this + 0x38);
  if (iVar1 != *(int *)(this + 0x3c)) {
    F_00c46e20(iVar1,*(int *)(this + 0x3c),0);
    *(int *)(this + 0x3c) = iVar1;
  }
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  return 0;
}

/* ref: Client::Game::Event::SelectIconStringCallback::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753fc0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x753fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00753eb0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00753ff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00753ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x753ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90b4));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba6a4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9124));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  F_007535b0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,param_1 + 0x18);
  F_00753e30(((undefined *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,param_1 + 0x28);
  F_00753e30(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG,param_1 + 0x38);
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = *((undefined4 *)GEN_TOP((param_1 + 0x48)));
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = *((undefined4 *)GEN_TOP((param_1 + 0x4c)));
  return (uint)this;
}

/* ref: FUN_00754090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x754090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9134));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  return (uint)this;
}

/* ref: FUN_007540b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007540b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7540b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba6b4));
  uVar1 = F_004876d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: Client::Game::Event::SelectListCallback::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007540d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7540d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10ba6b4));
  F_004876d0(param_1 + 6 GEN_EDX_FWD);
  param_1[4] = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00754110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x754110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90b4));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba6b4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9134));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  F_007535b0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,param_1 + 0x18);
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *((undefined4 *)GEN_TOP((param_1 + 0x28)));
  return (uint)this;
}

/* ref: FUN_00754160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x754160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int local_8;
  
  local_8 = 10;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 8)));
  do {
    F_0042b630(puVar1 + 4 GEN_EDX_FWD);
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0x1000000;
    puVar1[2] = 0;
    puVar1[3] = 0;
    F_0042e430(puVar1 + 4 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    puVar1[0x19] = 0;
    puVar1 = puVar1 + 0x1c;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  *((undefined4 *)GEN_TOP(((int)this + 0x4d0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4d4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4d8))) = 0;
  return (uint)this;
}

/* ref: FUN_00754200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x754200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00749bf0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x1c,800);
  return (uint)uVar1;
}

/* ref: FUN_00754240 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x754240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00749ea0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00754280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x754280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00749c90(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_007542c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007542c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7542c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00751c10(this GEN_EDX_FWD,1);
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
      F_00751c10(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00754330 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00754330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x754330u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0xec, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  undefined * PTR32 * ppvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xe4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe8));
  F_004ff300(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_FWD,0xb);
  (*(undefined4 *)(gen_frame + 0x34)) = 0x6c756162;
  F_0042ce40(((undefined1 *)(gen_frame + 0x90)),((char *)REFP(0x10ba6c0)),param_1,param_2);
  uVar5 = 0;
  uVar4 = 0;
  ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0xc)) = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 5;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x25)) = 0x101;
  (*(undefined2 *)(gen_frame + 0x29)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x90)) GEN_EDX_ARG);
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x34)),uVar1,ppvVar3,uVar4,uVar5);
  (*(uint *)(gen_frame + 0x38)) = uVar1;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x90)));
  F_00752ed0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x38)));
  F_0042c880(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x90)) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_00754440 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00754440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x754440u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0xec, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  undefined * PTR32 * ppvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xe4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe8));
  F_004ff300(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_FWD,0xb);
  (*(undefined4 *)(gen_frame + 0x34)) = 0x6c756162;
  F_0042ce40(((undefined1 *)(gen_frame + 0x90)),((char *)REFP(0x10ba6c0)),param_1,param_2);
  uVar5 = 0;
  uVar4 = 0;
  ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0xc)) = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 5;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x25)) = 0x101;
  (*(undefined2 *)(gen_frame + 0x29)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x90)) GEN_EDX_ARG);
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x34)),uVar1,ppvVar3,uVar4,uVar5);
  (*(uint *)(gen_frame + 0x38)) = uVar1;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x90)));
  F_00752ed0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x38)));
  F_0042c880(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x90)) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_00754550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x754550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[0]);
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x54;
  if ((*(uint *)&gen_args[0]) < uVar2) {
    uVar2 = F_0074d820(this GEN_EDX_FWD,&(*(uint *)&gen_args[0]),(*(uint *)&gen_args[0]) * 0x54 + *(int *)this,*((int *)GEN_TOP(((int)this + 4))));
    return uVar2;
  }
  if (uVar2 < (*(uint *)&gen_args[0])) {
    F_00751cb0(this GEN_EDX_ARG,(*(uint *)&gen_args[0]) - uVar2);
    F_00746710(*((int *)GEN_TOP(((int)this + 4))),uVar1 - (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x54,0,
                 (int)this + 0xc);
    uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x54;
    *((uint *)GEN_TOP(((int)this + 4))) = (uVar1 - uVar2) * 0x54 + *((int *)GEN_TOP(((int)this + 4)));
  }
  return uVar2;
}

/* ref: FUN_00754690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x754690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00751e10(this GEN_EDX_FWD,1);
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
      F_00751e10(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00754700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x754700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00751e80(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00754710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x754710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar4[1] + 0x15))) == '\0') {
    puVar3 = ((undefined4 *)GEN_TOP(puVar4[1]));
    do {
      if ((uint)puVar3[3] < *(*(uint * PTR32 *)&gen_args[0])) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar3[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar3));
        puVar4 = puVar3;
      }
      puVar3 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  if ((puVar4 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && ((uint)puVar4[3] <= *(*(uint * PTR32 *)&gen_args[0]))) {
    return (uint)(puVar4 + 4);
  }
  uVar1 = *(*(uint * PTR32 *)&gen_args[0]);
  (*(uint * PTR32 *)&gen_args[0]) = ((uint *)GEN_TOP(((uint)(*(uint * PTR32 *)&gen_args[0]) & 0xffff)));
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,800)));
  *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar3 + 5) = 0;
  if (puVar3 + 3 != ((uint *)GEN_TOP(0x0))) {
    puVar3[3] = uVar1;
    *(undefined2 *)(puVar3 + 4) = (*((undefined2 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[0]) + 2))));
  }
  F_00750150(this GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[0]),puVar4,puVar3);
  return (int)(*(uint * PTR32 *)&gen_args[0]) + 0x10;
}

/* ref: FUN_00754800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x754800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  int iVar5;
  uint local_14;
  uint local_8;
  
  uVar2 = (*(uint *)&gen_args[0]);
  uVar3 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 4;
  if ((*(uint *)&gen_args[0]) < uVar3) {
    uVar3 = F_0074dee0(this GEN_EDX_FWD,&(*(uint *)&gen_args[0]),(*(uint *)&gen_args[0]) * 0x10 + *(int *)this,*((int *)GEN_TOP(((int)this + 4))));
    return uVar3;
  }
  if (uVar3 < (*(uint *)&gen_args[0])) {
    F_00751f00(this GEN_EDX_ARG,(*(uint *)&gen_args[0]) - uVar3);
    puVar4 = *((uint * PTR32 *)GEN_TOP(((int)this + 4)));
    uVar3 = local_8;
    uVar1 = local_14;
    for (iVar5 = uVar2 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 4); iVar5 != 0; iVar5 = iVar5 - 1) {
      local_14 = uVar1 & 0xffff0000;
      local_8 = uVar3 & 0xffffff00;
      if (puVar4 != ((uint *)GEN_TOP(0x0))) {
        *puVar4 = local_14;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = local_8;
      }
      puVar4 = puVar4 + 4;
      uVar3 = local_8;
      uVar1 = local_14;
    }
    uVar3 = *((uint *)GEN_TOP(((int)this + 4)));
    *((uint *)GEN_TOP(((int)this + 4))) = (uVar2 - ((int)(uVar3 - *(int *)this) >> 4)) * 0x10 + uVar3;
  }
  return uVar3;
}

/* ref: FUN_007548a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007548a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7548a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00751f70(this GEN_EDX_FWD,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar2) / 0x28) * 0x28)));
  }
  else {
    puVar2 = param_1;
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00751f70(this GEN_EDX_ARG,1);
    }
  }
  if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined4 *)GEN_TOP(0x0))) {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x28;
  return;
}

/* ref: FUN_00754910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x754910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00752000(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x2d0,800);
  return (uint)uVar1;
}

/* ref: FUN_00754950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x754950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_0073dba0(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]));
  (*(uint *)&gen_args[0]) = 0;
  F_00747b00((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[0]),0);
  F_00752000(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  return (*(uint *)&gen_args[0]);
}

/* ref: FUN_007549b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007549b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7549b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  undefined2 * puVar1;
  undefined2 * puVar2;
  undefined2 * puVar3;
  
  puVar3 = *((undefined2 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined2 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined2 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_007520f0(this GEN_EDX_FWD,1);
    }
    puVar2 = *((undefined2 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined2 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined2 *)GEN_TOP(0x0))) {
      *puVar2 = *((undefined2 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 1) * 2)));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 2;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined2 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_007520f0(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined2 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined2 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 2;
  return (uint)puVar3;
}

/* ref: FUN_00754a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x754a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00752160(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x104,800);
  return (uint)uVar1;
}

/* ref: FUN_00754a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x754a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_0073dcb0(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]));
  (*(uint *)&gen_args[0]) = 0;
  F_007410e0((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[0]),0);
  F_00752160(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  return (*(uint *)&gen_args[0]);
}

/* ref: FUN_00754ac0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00754ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x754ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar2) && (uVar1 = *(uint *)this, uVar1 <= param_1)) {
    if (uVar2 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00752250(this GEN_EDX_FWD,1);
    }
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    uVar2 = ((int)(param_1 - uVar1) / 0xb8) * 0xb8 + *(int *)this;
  }
  else {
    if (uVar2 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00752250(this GEN_EDX_ARG,1);
    }
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    uVar2 = param_1;
  }
  F_007380d0((int)this + 0xc,uVar3,uVar2);
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0xb8;
  return;
}

/* ref: FUN_00754b40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x754b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00752320(this GEN_EDX_FWD,1);
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
      F_00752320(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00754bb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x754bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  iVar2 = (param_1[1] - *param_1) / 0x140;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (iVar2 != 0) {
    iVar2 = iVar2 * 0x140;
    uVar1 = F_004296a0(iVar2,0,800);
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(((int)this + 8))) = iVar2 + uVar1;
    uVar1 = F_00748620(*param_1,param_1[1],uVar1,(int)this + 0xc,param_1);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00754c60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x754c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_007523f0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00754c80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x754c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0074f310(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x70,800);
  return (uint)uVar1;
}

/* ref: FUN_00754cc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00754cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x754cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
  return (uint)this;
}

/* ref: FUN_00754d00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x754d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0074a1e0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x28,800);
  return (uint)uVar1;
}

/* ref: FUN_00754d40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x754d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0074a1e0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x28,800);
  return (uint)uVar1;
}

/* ref: FUN_00754d80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x754d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0074a1e0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x28,800);
  return (uint)uVar1;
}

/* ref: FUN_00754dd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x754dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (this != param_1) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00754e10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x754e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  
  if (this != param_1) {
    iVar1 = *(int *)this;
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,800);
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00754e70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x754e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00752540(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00754e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x754e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)this;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)this;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00752610(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00752610(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00754ef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x754ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x140;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x140;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_007526a0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_007526a0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00754f80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x754f80u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_007527a0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_007527a0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00754ff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00754ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x754ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00752850(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00755010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x755010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_007528f0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00755030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x755030u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(*piVar2))) && (param_3 == piVar2)) {
    F_0074f990(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x9d))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x9d))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x9d)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x9d)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x9d)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x9d)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_0074eeb0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00755100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x755100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00755030(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00755160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x755160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x140;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x140;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_007529e0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_007529e0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_007551f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007551f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7551f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x74;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x74;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00752ae0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00752ae0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00755280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x755280u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_007413b0(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1);
    F_0074c430(uVar1,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,param_1);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_007552d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007552d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7552d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_0074c430(*(int *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x1b0) * 0x1b0,800
                        );
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00755340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x755340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00752c00(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00755360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x755360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined1 *)this = *param_1;
  F_0074a520(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_2);
  return (uint)this;
}

/* ref: FUN_00755380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x755380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x1b0;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x1b0,0,800);
    F_00752fd0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_0074c430(iVar1,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,uVar3);
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x1b0) * 0x1b0,800);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = ((iVar2 - iVar1) / 0x1b0) * 0x1b0 + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x1b0 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00755460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x755460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined1 *)this = *param_1;
  F_0074a520(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_2);
  return (uint)this;
}

/* ref: FUN_00755480 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00755480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x755480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00755160(this GEN_EDX_FWD,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_00720120(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x140) * 0x140 + *(int *)this
                  );
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x140;
      return;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00755160(this GEN_EDX_ARG,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_00720120(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x140;
  return;
}

/* ref: FUN_00755510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x755510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_007496b0(((undefined *)GEN_TOP(((int)this + 100))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x68))),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00755550 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00755550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x755550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    F_00750930(this GEN_EDX_FWD);
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

/* ref: FUN_00755590 */
GEN_OWN GEN_FRAME unsigned int F_00755590(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x755590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00750a20(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_007555b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007555b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7555b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
  F_00750ab0(this GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_00755600 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00755600(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x755600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00750930(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00755610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x755610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *(undefined1 *)this = *param_1;
  F_00754bb0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00755630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x755630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004296a0(0x28,0,800);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x25))) = 1;
  F_00750b30(this GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_00755680 */
GEN_OWN GEN_FRAME uint F_00755680(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x755680u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  int * this;
  undefined * this_00;
  
  piVar6 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != piVar6) {
      uVar4 = (piVar6[1] - *piVar6) / 0xb8;
      if (uVar4 == 0) {
        F_007509a0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*this,this[1]);
      }
      else {
        iVar1 = *this;
        uVar3 = (this[1] - iVar1) / 0xb8;
        if (uVar3 < uVar4) {
          if ((uint)((this[2] - iVar1) / 0xb8) < uVar4) {
            if (iVar1 != 0) {
              F_0074e300(iVar1,this[1]);
              F_00429760(*this,((this[2] - *this) / 0xb8) * 0xb8,800);
            }
            bVar2 = F_0073a230(this GEN_EDX_ARG,(piVar6[1] - *piVar6) / 0xb8);
            if (bVar2 == 0) goto LAB_0075582c;
            uVar4 = F_007428e0(*piVar6,piVar6[1],*this,this + 3,param_2);
          }
          else {
            iVar5 = uVar3 * 0xb8 + *piVar6;
            F_0072db20(*piVar6,iVar5,iVar1,param_2);
            uVar4 = F_007428e0(iVar5,piVar6[1],this[1],this + 3,param_2);
          }
        }
        else {
          uVar3 = F_0072db20(*piVar6,piVar6[1],iVar1,param_2);
          uVar4 = this[1];
          if (uVar3 != uVar4) {
            this_00 = ((undefined *)GEN_TOP((uVar3 + 4)));
            do {
              F_0042c880(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_ARG);
              F_0042c880(this_00 GEN_EDX_ARG);
              uVar3 = (int)this_00 + 0xb4;
              this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0xb8)));
            } while (uVar3 != uVar4);
          }
          uVar4 = ((piVar6[1] - *piVar6) / 0xb8) * 0xb8 + *this;
        }
        this[1] = uVar4;
      }
    }
LAB_0075582c: ;
    piVar6 = piVar6 + 4;
    this = this + 4;
    if (piVar6 == param_2) {
      return (uint)this;
    }
  } while( true );
}

/* ref: FUN_00755850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x755850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined1 *)this = *param_1;
  F_0074a520(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_2);
  return (uint)this;
}

/* ref: FUN_00755870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x755870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_007496b0(((undefined *)GEN_TOP(((int)this + 100))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x68))),0x18,800);
  return (uint)uVar1;
}

/* ref: Client::Game::Event::SelectOkCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007558b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7558b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
    return (uint)param_1;
  }
  uVar2 = *(undefined4 *)(this + 0x14);
  ((byte *)(gen_frame + 0x0))[4] = (char)iVar1;
  ((byte *)(gen_frame + 0x0))[5] = (char)((uint)iVar1 >> 8);
  ((byte *)(gen_frame + 0x0))[6] = (char)((uint)iVar1 >> 0x10);
  ((byte *)(gen_frame + 0x0))[7] = (char)((uint)iVar1 >> 0x18);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = *(undefined4 *)(this + 8);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = *(undefined4 *)(this + 0xc);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = (*(undefined * PTR32 (*)[3])REFP(0x10ba654));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = (*(undefined * PTR32 (*)[3])REFP(0x10b90d4));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = uVar2;
  F_007535b0(((byte *)(gen_frame + 0x0)) + 0x18 GEN_EDX_ARG,this + 0x18);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)) = *(undefined4 *)(this + 0x28);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)) = *(undefined4 *)(this + 0x2c);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)))) + 0xd8))))((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)),0);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = (*(undefined * PTR32 (*)[3])REFP(0x10ba654));
  F_004876d0(((byte *)(gen_frame + 0x0)) + 0x18 GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: Client::Game::Event::SelectYesNoCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x755960u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x3c, 4, 4);
  undefined4 uVar1;
  
  if (*(int *)(this + 4) == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
    return (uint)param_1;
  }
  F_00753810(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,this);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x4)) + 0xdc))))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar1,(*(undefined4 *)(gen_frame + 0x30)));
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10ba664));
  F_004876d0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: Client::Game::Event::SelectYesNoCountCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007559f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7559f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x40, 0, 4);
  int iVar1;
  
  if (*(int *)(this + 4) == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
    return (uint)param_1;
  }
  if ((*param_2 & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == 4) {
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 0;
      return (uint)param_1;
    }
  }
  F_00753990(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,this);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x4)) + 0xdc))))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,iVar1,(*(undefined4 *)(gen_frame + 0x38)));
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10ba674));
  F_004876d0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: Client::Game::Event::SelectYesNoCheckCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x755a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x3c, 4, 4);
  undefined4 uVar1;
  
  if (*(int *)(this + 4) == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
    return (uint)param_1;
  }
  F_00753b10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,this);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x4)) + 0xdc))))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar1,(*(undefined4 *)(gen_frame + 0x34)));
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10ba684));
  F_004876d0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: Client::Game::Event::SelectStringCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x755b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
    return (uint)param_1;
  }
  uVar2 = *(undefined4 *)(this + 0x14);
  ((byte *)(gen_frame + 0x0))[4] = (char)iVar1;
  ((byte *)(gen_frame + 0x0))[5] = (char)((uint)iVar1 >> 8);
  ((byte *)(gen_frame + 0x0))[6] = (char)((uint)iVar1 >> 0x10);
  ((byte *)(gen_frame + 0x0))[7] = (char)((uint)iVar1 >> 0x18);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = *(undefined4 *)(this + 8);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = *(undefined4 *)(this + 0xc);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = (*(undefined * PTR32 (*)[3])REFP(0x10ba694));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = (*(undefined * PTR32 (*)[3])REFP(0x10b9114));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = uVar2;
  F_007535b0(((byte *)(gen_frame + 0x0)) + 0x18 GEN_EDX_ARG,this + 0x18);
  uVar2 = *(undefined4 *)(this + 0x2c);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)) = *(undefined4 *)(this + 0x28);
  ((byte *)(gen_frame + 0x0))[0x2c] = (byte)uVar2;
  ((byte *)(gen_frame + 0x0))[0x2d] = SUB41(uVar2,1);
  ((byte *)(gen_frame + 0x0))[0x2e] = SUB41(uVar2,2);
  ((byte *)(gen_frame + 0x0))[0x2f] = SUB41(uVar2,3);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  if ((*param_2 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 4);
  }
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)))) + 0xe0))))((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)),uVar3,uVar2);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = (*(undefined * PTR32 (*)[3])REFP(0x10ba694));
  F_004876d0(((byte *)(gen_frame + 0x0)) + 0x18 GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: Client::Game::Event::SelectIconStringCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x755be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x54, 12, 4);
  undefined4 uVar1;
  
  if (*(int *)(this + 4) == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
    return (uint)param_1;
  }
  F_00753ff0(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,this);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)))) + 0xe4))))((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)),uVar1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 76)));
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  F_00753eb0(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: Client::Game::Event::SelectListCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x755c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
    return (uint)param_1;
  }
  uVar2 = *(undefined4 *)(this + 0x14);
  ((byte *)(gen_frame + 0x0))[4] = (char)iVar1;
  ((byte *)(gen_frame + 0x0))[5] = (char)((uint)iVar1 >> 8);
  ((byte *)(gen_frame + 0x0))[6] = (char)((uint)iVar1 >> 0x10);
  ((byte *)(gen_frame + 0x0))[7] = (char)((uint)iVar1 >> 0x18);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = *(undefined4 *)(this + 8);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = *(undefined4 *)(this + 0xc);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = (*(undefined * PTR32 (*)[3])REFP(0x10ba6b4));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = (*(undefined * PTR32 (*)[3])REFP(0x10b9134));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = uVar2;
  F_007535b0(((byte *)(gen_frame + 0x0)) + 0x18 GEN_EDX_ARG,this + 0x18);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)) = *(undefined4 *)(this + 0x28);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  if ((*param_2 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 4);
  }
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)))) + 0xe8))))((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)),uVar2);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = (*(undefined * PTR32 (*)[3])REFP(0x10ba6b4));
  F_004876d0(((byte *)(gen_frame + 0x0)) + 0x18 GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00755d50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x755d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = *(undefined1 *)(param_1 + 3);
  *((undefined1 *)GEN_TOP(((int)this + 0xd))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0xd)));
  *((undefined1 *)GEN_TOP(((int)this + 0xe))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0xe)));
  *((undefined1 *)GEN_TOP(((int)this + 0xf))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0xf)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,param_1 + 6);
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = param_1[0x1b];
  return (uint)this;
}

/* ref: FUN_00755db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755db0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x755db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x70 + *in_ecx;
}

/* ref: FUN_00755df0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00755df0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x755df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x70,param_2,800);
  return uVar1;
}

/* ref: FUN_00755e20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755e20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x755e20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00755e40 */
GEN_OWN GEN_FRAME uint F_00755e40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x755e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    puVar3 = param_3;
    do {
      *puVar3 = puVar2[-2];
      puVar3[1] = puVar2[-1];
      puVar3[2] = *puVar2;
      *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(puVar2 + 1);
      *((undefined1 *)GEN_TOP(((int)puVar3 + 0xd))) = *((undefined1 *)GEN_TOP(((int)puVar2 + 5)));
      *((undefined1 *)GEN_TOP(((int)puVar3 + 0xe))) = *((undefined1 *)GEN_TOP(((int)puVar2 + 6)));
      *((undefined1 *)GEN_TOP(((int)puVar3 + 0xf))) = *((undefined1 *)GEN_TOP(((int)puVar2 + 7)));
      puVar3[4] = puVar2[2];
      puVar3[5] = puVar2[3];
      F_0042ccf0(puVar3 + 6 GEN_EDX_ARG,puVar2 + 4);
      puVar3[0x1b] = puVar2[0x19];
      puVar1 = puVar2 + 0x1a;
      puVar3 = puVar3 + 0x1c;
      puVar2 = puVar2 + 0x1c;
    } while (puVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_00755ec0 */
GEN_OWN GEN_FRAME uint F_00755ec0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x755ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00755ed0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00755ed0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x755ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0071f820(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00755ef0 */
GEN_OWN GEN_FRAME uint F_00755ef0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x755ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00755f00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00755f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x755f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_007565e0((int)this - 0x10 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00755f20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00755f20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x755f20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00755f30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00755f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x755f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00755f50 */
GEN_OWN GEN_FRAME uint F_00755f50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x755f50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00755e40(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00755f70 */
GEN_OWN GEN_FRAME uint F_00755f70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x755f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    puVar3 = param_3;
    do {
      *puVar3 = puVar2[-2];
      puVar3[1] = puVar2[-1];
      puVar3[2] = *puVar2;
      *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(puVar2 + 1);
      *((undefined1 *)GEN_TOP(((int)puVar3 + 0xd))) = *((undefined1 *)GEN_TOP(((int)puVar2 + 5)));
      *((undefined1 *)GEN_TOP(((int)puVar3 + 0xe))) = *((undefined1 *)GEN_TOP(((int)puVar2 + 6)));
      *((undefined1 *)GEN_TOP(((int)puVar3 + 0xf))) = *((undefined1 *)GEN_TOP(((int)puVar2 + 7)));
      puVar3[4] = puVar2[2];
      puVar3[5] = puVar2[3];
      F_0042ccf0(puVar3 + 6 GEN_EDX_ARG,puVar2 + 4);
      puVar3[0x1b] = puVar2[0x19];
      puVar1 = puVar2 + 0x1a;
      puVar3 = puVar3 + 0x1c;
      puVar2 = puVar2 + 0x1c;
    } while (puVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_00755ff0 */
GEN_OWN GEN_FRAME unsigned int F_00755ff0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x755ff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0071f820(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00756010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756010(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x756010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00756020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756020(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x756020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00756030 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00756030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x756030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 0x70,0,800);
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x70 + uVar1;
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00756090 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00756090(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x756090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_007560a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007560a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7560a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_007560c0 */
GEN_OWN GEN_FRAME uint F_007560c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7560c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00755f70(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_007560e0 */
GEN_OWN GEN_FRAME uint F_007560e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x7560e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    puVar3 = param_3;
    do {
      if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar3 = puVar2[-2];
        puVar3[1] = puVar2[-1];
        puVar3[2] = *puVar2;
        *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(puVar2 + 1);
        *((undefined1 *)GEN_TOP(((int)puVar3 + 0xd))) = *((undefined1 *)GEN_TOP(((int)puVar2 + 5)));
        *((undefined1 *)GEN_TOP(((int)puVar3 + 0xe))) = *((undefined1 *)GEN_TOP(((int)puVar2 + 6)));
        *((undefined1 *)GEN_TOP(((int)puVar3 + 0xf))) = *((undefined1 *)GEN_TOP(((int)puVar2 + 7)));
        puVar3[4] = puVar2[2];
        puVar3[5] = puVar2[3];
        F_0042cbc0(puVar3 + 6 GEN_EDX_ARG,puVar2 + 4);
        puVar3[0x1b] = puVar2[0x19];
      }
      puVar1 = puVar2 + 0x1a;
      puVar3 = puVar3 + 0x1c;
      puVar2 = puVar2 + 0x1c;
    } while (puVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_00756160 */
GEN_OWN GEN_FRAME uint F_00756160(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x756160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_007560e0(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00756190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x756190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_007560e0(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_007561c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007561c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7561c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != param_3) {
    uVar2 = F_00755f70(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1);
    uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
    for (uVar3 = uVar2; uVar3 != uVar1; uVar3 = uVar3 + 0x70) {
      F_0042c880(((undefined *)GEN_TOP((uVar3 + 0x18))) GEN_EDX_ARG);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00756230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x756230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_007561c0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00756250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x756250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  puVar4 = ((undefined4 *)GEN_TOP(((int)this + 8)));
  iVar6 = 0xb;
  do {
    puVar4[-2] = 0;
    puVar4[-1] = 0;
    *puVar4 = 0;
    puVar4[1] = 0x1000000;
    puVar4[2] = 0;
    puVar4[3] = 0;
    F_0042e430(puVar4 + 4 GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
    puVar4[0x19] = 0;
    puVar4 = puVar4 + 0x1c;
    iVar6 = iVar6 - 1;
  } while (iVar6 != 0);
  pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x4d4)));
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x4d0))) != pvVar3) {
    uVar2 = F_00755f70(pvVar3,pvVar3,*((undefined * PTR32 *)GEN_TOP(((int)this + 0x4d0))),this);
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x4d4)));
    pvVar3 = this;
    for (uVar5 = uVar2; uVar5 != uVar1; uVar5 = uVar5 + 0x70) {
      uVar7 = F_0042c880(((undefined *)GEN_TOP((uVar5 + 0x18))) GEN_EDX_ARG);
      pvVar3 = ((undefined *)GEN_TOP((uint)uVar7));
    }
    *((uint *)GEN_TOP(((int)this + 0x4d4))) = uVar2;
  }
  return (uint)pvVar3;
}

/* ref: FUN_007562f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007562f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7562f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba6e8));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[2])REFP(0x10ba6dc));
  F_0074d930(((undefined *)GEN_TOP(((int)this + 0x4e8))) GEN_EDX_FWD);
  iVar1 = 10;
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x500)));
  do {
    this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x70)));
    uVar2 = F_0042c880(this_00 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return (uint)uVar2;
}

/* ref: Client::Game::Event::GrandCompanySupplyDutyCallback::vf1 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00756340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x756340u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0xa2, 14, 4);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int iVar6;
  undefined * pGVar7;
  byte bVar8;
  uint uVar9;
  undefined4 uVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x9a)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9e));
  if ((*param_2 & 0xf) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_2 + 4);
  }
  (*(bool *)(gen_frame + 0x1)) = iVar6 != 0;
  (*(int *)(gen_frame + 0x72)) = 0;
  (*(uint *)(gen_frame + 0x76)) = 0;
  (*(undefined4 *)(gen_frame + 0x7a)) = 0;
  (*(uint *)(gen_frame + 0x7e)) = 0;
  (*(uint *)(gen_frame + 0x82)) = 0;
  (*(undefined4 *)(gen_frame + 0x86)) = 0;
  (*(uint *)(gen_frame + 0x8a)) = 0;
  (*(uint *)(gen_frame + 0x8e)) = 0;
  (*(undefined4 *)(gen_frame + 0x92)) = 0;
  (*(undefined4 *)(gen_frame + 0x96)) = 0;
  (*(byte *)(gen_frame + 0x0)) = 0;
  if ((iVar6 < 1) || (param_3 < 2)) goto LAB_00756575;
  if ((param_2[8] & 0xf) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = (byte)*(undefined4 *)(param_2 + 0xc);
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x1a)) GEN_EDX_FWD);
  (*(undefined4 *)(gen_frame + 0x2)) = 0;
  (*(undefined4 *)(gen_frame + 0x6)) = 0;
  (*(uint *)(gen_frame + 0xa)) = 0;
  (*(uint *)(gen_frame + 0xe)) = 0x1000000;
  (*(undefined4 *)(gen_frame + 0x12)) = 0;
  (*(undefined4 *)(gen_frame + 0x16)) = 0;
  F_0042e430(((undefined1 *)(gen_frame + 0x1a)) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  (*(undefined4 *)(gen_frame + 0x6e)) = 0;
  uVar9 = (uint)bVar8;
  if (bVar8 < 0xb) {
    pGVar7 = this + uVar9 * 0x70 + 0x18;
  }
  else {
    pGVar7 = ((undefined *)GEN_TOP(((uVar9 - 0xb) * 0x70 + *(int *)(this + 0x4e8))));
  }
  F_00755d50(&(*(undefined4 *)(gen_frame + 0x2)) GEN_EDX_ARG,pGVar7);
  uVar1 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x2)),1,0,1);
  uVar2 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x2)),0,0,1);
  uVar3 = F_00a3ded0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x2)),1000,1);
  uVar4 = F_00a3ded0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x2)),1000,0);
  if ((uVar1 + uVar2 == 0) && (uVar3 + uVar4 != 0)) {
    piVar5 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar10 = 0x700;
LAB_007564e6: ;
    (*(bool *)(gen_frame + 0x1)) = false;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x28))))(piVar5 GEN_EDX_ARG)));
    F_0046a630(this_00 GEN_EDX_ARG,uVar10);
  }
  else {
    uVar3 = (*(uint *)(gen_frame + 0xe)) >> 0x10 & 0xff;
    if (uVar1 + uVar2 < uVar3) {
      piVar5 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar10 = 0x6fe;
      goto LAB_007564e6;
    }
    if (REFG(char, 0x14ab0d0) == '\x01') {
      uVar1 = (*(uint *)(gen_frame + 0xa)) >> 1;
    }
    else {
      uVar1 = (*(uint *)(gen_frame + 0xa));
      if (REFG(char, 0x14ab0d0) == '\x02') {
        uVar1 = 0;
      }
    }
    (*(uint *)(gen_frame + 0x7e)) = uVar3;
    (*(int *)(gen_frame + 0x72)) = iVar6;
    (*(uint *)(gen_frame + 0x82)) = (*(uint *)(gen_frame + 0xe)) & 0xff;
    (*(undefined4 *)(gen_frame + 0x7a)) = (*(undefined4 *)(gen_frame + 0x2));
    (*(uint *)(gen_frame + 0x8a)) = uVar1;
    (*(uint *)(gen_frame + 0x76)) = uVar9;
    (*(undefined4 *)(gen_frame + 0x86)) = (*(undefined4 *)(gen_frame + 0x6));
    (*(uint *)(gen_frame + 0x8e)) = (*(uint *)(gen_frame + 0xe)) >> 8 & 0xff;
    (*(undefined4 *)(gen_frame + 0x92)) = (*(undefined4 *)(gen_frame + 0x12));
    (*(byte *)(gen_frame + 0x0)) = 9;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x1a)) GEN_EDX_ARG);
LAB_00756575: ;
  if ((*(bool *)(gen_frame + 0x1)) != false) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x138))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x72)),(uint)(*(byte *)(gen_frame + 0x0)));
    F_00b9cea0(&REFG(undefined, 0x14b3134) GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
    *(undefined4 *)(this + 0x14) = 0;
    F_00756250(this + 0x18 GEN_EDX_ARG);
  }
  *(bool *)(param_1 + 1) = (*(bool *)(gen_frame + 0x1));
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::GrandCompanySupplyDutyCallback::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007565e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7565e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_007562f0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00756610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x756610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00752000(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x2d0,800);
  return (uint)uVar1;
}

/* ref: FUN_00756650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x756650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00752160(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x104,800);
  return (uint)uVar1;
}

/* ref: FUN_007566a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007566a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7566a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0074f310(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x70,800);
  return (uint)uVar1;
}

/* ref: FUN_007566e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007566e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7566e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  if (this != param_1) {
    uVar1 = *(undefined4 *)this;
    *(undefined4 *)this = *param_1;
    *param_1 = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    param_1[1] = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    param_1[2] = uVar1;
  }
  return (uint)param_1;
}

/* ref: FUN_00756720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x756720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00752540(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0xc0,800);
  return (uint)uVar1;
}

/* ref: FUN_00756760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x756760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined1 * puVar1;
  undefined1 * puVar2;
  undefined1 * puVar3;
  
  puVar3 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined1 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined1 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00754e90(this GEN_EDX_FWD,1);
    }
    puVar2 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined1 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar2 = param_1[*(int *)this - (int)puVar1];
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined1 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00754e90(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar3;
}

/* ref: FUN_007567c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007567c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7567c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[0]);
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x140;
  if ((*(uint *)&gen_args[0]) < uVar2) {
    uVar2 = F_00751d40(this GEN_EDX_FWD,&(*(uint *)&gen_args[0]),(*(uint *)&gen_args[0]) * 0x140 + *(int *)this,*((int *)GEN_TOP(((int)this + 4))));
    return uVar2;
  }
  if (uVar2 < (*(uint *)&gen_args[0])) {
    F_00754ef0(this GEN_EDX_ARG,(*(uint *)&gen_args[0]) - uVar2);
    F_007477e0(*((int *)GEN_TOP(((int)this + 4))),uVar1 - (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x140,0,
                 (int)this + 0xc,0,(*(uint *)&gen_args[0]));
    uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x140;
    *((uint *)GEN_TOP(((int)this + 4))) = (uVar1 - uVar2) * 0x140 + *((int *)GEN_TOP(((int)this + 4)));
  }
  return uVar2;
}

/* ref: FUN_00756870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x756870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int iVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (this != (*(int * PTR32 *)&gen_args[0])) {
    iVar1 = (*(int * PTR32 *)&gen_args[0])[1] - *(*(int * PTR32 *)&gen_args[0]) >> 0x1f;
    iVar5 = ((*(int * PTR32 *)&gen_args[0])[1] - *(*(int * PTR32 *)&gen_args[0])) / 0x70 + iVar1;
    uVar6 = iVar5 - iVar1;
    if (iVar5 == iVar1) {
      F_007561c0(this GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[0]),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
      return (uint)this;
    }
    iVar1 = *(int *)this;
    uVar4 = (*((int *)GEN_TOP(((int)this + 4))) - iVar1) / 0x70;
    if (uVar6 <= uVar4) {
      uVar4 = F_00755e40(*(*(int * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[0])[1],iVar1,(*(int * PTR32 *)&gen_args[0]));
      uVar6 = *((uint *)GEN_TOP(((int)this + 4)));
      for (; uVar4 != uVar6; uVar4 = uVar4 + 0x70) {
        F_0042c880(((undefined *)GEN_TOP((uVar4 + 0x18))) GEN_EDX_ARG);
      }
      *((int *)GEN_TOP(((int)this + 4))) = (((*(int * PTR32 *)&gen_args[0])[1] - *(*(int * PTR32 *)&gen_args[0])) / 0x70) * 0x70 + *(int *)this;
      return (uint)this;
    }
    if (uVar6 <= (uint)((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x70)) {
      iVar5 = *(*(int * PTR32 *)&gen_args[0]) + uVar4 * 0x70;
      F_00755e40(*(*(int * PTR32 *)&gen_args[0]),iVar5,iVar1,(*(int * PTR32 *)&gen_args[0]));
      uVar6 = F_007560e0(iVar5,(*(int * PTR32 *)&gen_args[0])[1],*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,(*(int * PTR32 *)&gen_args[0]));
      *((uint *)GEN_TOP(((int)this + 4))) = uVar6;
      return (uint)this;
    }
    if (iVar1 != 0) {
      F_0074d900(iVar1,*((undefined4 *)GEN_TOP(((int)this + 4))));
      F_00722430(*(int *)this,(*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x70);
    }
    piVar2 = (*(int * PTR32 *)&gen_args[0]);
    bVar3 = F_00756030(this GEN_EDX_ARG,((*(int * PTR32 *)&gen_args[0])[1] - *(*(int * PTR32 *)&gen_args[0])) / 0x70);
    if (bVar3 != 0) {
      uVar6 = F_00756190(this GEN_EDX_ARG,*piVar2,piVar2[1],*(undefined4 *)this);
      *((uint *)GEN_TOP(((int)this + 4))) = uVar6;
    }
  }
  return (uint)this;
}

/* ref: FUN_00756a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x756a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00754f80(this GEN_EDX_FWD,1);
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
      F_00754f80(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00756a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x756a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00752850(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00756ad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x756ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_007528f0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x68,800);
  return (uint)uVar1;
}

/* ref: FUN_00756bb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x756bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00755030(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0xa0,0x324);
  return (uint)uVar1;
}

/* ref: FUN_00756bf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x756bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_0073dda0(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]));
  (*(uint *)&gen_args[0]) = 0;
  F_00741170((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[0]),0);
  F_00755030(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  return (*(uint *)&gen_args[0]);
}

/* ref: FUN_00756c50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00756c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x756c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00755160(this GEN_EDX_FWD,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_00720120(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x140) * 0x140 + *(int *)this
                  );
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x140;
      return;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00755160(this GEN_EDX_ARG,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_00720120(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x140;
  return;
}

/* ref: FUN_00756ce0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00756ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x756ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_007551f0(this GEN_EDX_FWD,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_00728760(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x74) * 0x74 + *(int *)this);
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x74;
      return;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_007551f0(this GEN_EDX_ARG,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_00728760(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x74;
  return;
}

/* ref: FUN_00756d70 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00756d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x756d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*(int *)this != iVar1) {
    uVar2 = F_007413b0(iVar1,iVar1,*(int *)this,this);
    F_0074c430(uVar2,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,this);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
  }
  return;
}

/* ref: FUN_00756df0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x756df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0074a1e0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x28,800);
  return (uint)uVar1;
}

/* ref: FUN_00756e30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x756e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0074a1e0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x28,800);
  return (uint)uVar1;
}

/* ref: FUN_00756e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x756e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00752c00(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x68,800);
  return (uint)uVar1;
}

/* ref: FUN_00756ec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x756ec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined1 *)this = *param_1;
  F_0074a520(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_2);
  return (uint)this;
}

/* ref: FUN_00756ee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x756ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x1b0;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x1b0;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00755380(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00755380(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00756f70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x756f70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined1 *)this = *param_1;
  F_0074a520(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_2);
  return (uint)this;
}

/* ref: FUN_00756f90 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00756f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x756f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    F_00752390(this GEN_EDX_FWD);
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

/* ref: FUN_00756fd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00756fd0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x756fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(uint *)(gen_frame + 0x0)) = param_1;
  F_007496b0(((undefined *)GEN_TOP((param_1 + 100))) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x68))),
               *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x68))));
  F_00429760(*((undefined4 *)GEN_TOP((param_1 + 0x68))),0x18,800);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00757020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757020(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x757020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(uint *)(gen_frame + 0x0)) = param_1;
  F_0074a1e0(((undefined *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP((param_1 + 8))),
               *((undefined4 * PTR32 *)GEN_TOP((param_1 + 8))));
  F_00429760(*((undefined4 *)GEN_TOP((param_1 + 8))),0x28,800);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00757070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757070(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x757070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00752390(((undefined *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_007570a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007570a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7570a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    F_00750930(this GEN_EDX_FWD);
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_007570e0 */
GEN_OWN GEN_FRAME uint F_007570e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7570e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00750930(param_2 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007570f0 */
GEN_OWN GEN_FRAME uint F_007570f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7570f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00750a20(this GEN_EDX_ARG,iVar1);
    }
    iVar1 = iVar1 + 0x10;
    this = ((undefined *)GEN_TOP(((int)this + 0x10)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00757130 */
GEN_OWN GEN_FRAME uint F_00757130(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x757130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00755680(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00757150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x757150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  puVar4 = this;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x48))) = *(undefined1 *)(param_1 + 0x12);
  *((undefined1 *)GEN_TOP(((int)this + 0x49))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x49)));
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = param_1[0x13];
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = param_1[0x14];
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = param_1[0x15];
  *((undefined1 *)GEN_TOP(((int)this + 0x58))) = *(undefined1 *)(param_1 + 0x16);
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *((uint *)GEN_TOP(((int)this + 0x60))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x60))) + 4))) = *((int *)GEN_TOP(((int)this + 0x60)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x60))) + 8))) = *((int *)GEN_TOP(((int)this + 0x60)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x60))) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x60))) + 0x15))) = 1;
  F_00750ab0(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,param_1 + 0x17);
  return (uint)this;
}

/* ref: FUN_007571e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007571e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7571e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *(undefined1 *)this = *param_1;
  F_00754bb0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00757200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x757200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *(undefined1 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_004296a0(0x28,0,800);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x25))) = 1;
  F_00750b30(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00757260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x757260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *(undefined1 *)this = *param_1;
  F_0074a520(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00757280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x757280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  F_00757150(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1 + 2);
  return (uint)this;
}

/* ref: FUN_007572a0 */
GEN_OWN GEN_FRAME uint F_007572a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7572a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00750a20(this GEN_EDX_ARG,iVar1);
    }
    iVar1 = iVar1 + 0x10;
    this = ((undefined *)GEN_TOP(((int)this + 0x10)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_007572e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007572e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7572e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = *param_1;
  F_00757150(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_2);
  return (uint)this;
}

/* ref: FUN_00757300 */
GEN_OWN GEN_FRAME uint F_00757300(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x757300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00750a20(this GEN_EDX_ARG,param_1);
    }
    param_1 = param_1 + 0x10;
    this = ((undefined *)GEN_TOP(((int)this + 0x10)));
  } while (param_1 != param_2);
  return (uint)this;
}

/* ref: FUN_00757340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x757340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00752850(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00757380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x757380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  undefined1 * puVar2;
  int local_8;
  
  puVar2 = ((undefined1 *)GEN_TOP((param_1 + 0xc)));
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 4)));
  local_8 = 0xb;
  do {
    puVar1[-1] = *(undefined4 *)(puVar2 - 0xc);
    *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)this) + (int)puVar1)));
    puVar1[1] = *(undefined4 *)(puVar2 - 4);
    *(undefined1 *)(puVar1 + 2) = *puVar2;
    *((undefined1 *)GEN_TOP(((int)puVar1 + 9))) = puVar2[1];
    *((undefined1 *)GEN_TOP(((int)puVar1 + 10))) = puVar2[2];
    *((undefined1 *)GEN_TOP(((int)puVar1 + 0xb))) = puVar2[3];
    puVar1[3] = *(undefined4 *)(puVar2 + 4);
    puVar1[4] = *(undefined4 *)(puVar2 + 8);
    F_0042ccf0(puVar1 + 5 GEN_EDX_FWD,puVar2 + 0xc);
    puVar1[0x1a] = *(undefined4 *)(puVar2 + 0x60);
    puVar2 = puVar2 + 0x70;
    puVar1 = puVar1 + 0x1c;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  F_00756870(((undefined *)GEN_TOP(((int)this + 0x4d0))) GEN_EDX_ARG,param_1 + 0x4d0);
  return (uint)this;
}

/* ref: FUN_00757420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x757420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00752540(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0xc0,800);
  return (uint)uVar1;
}

/* ref: FUN_00757460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x757460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_007528f0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x68,800);
  return (uint)uVar1;
}

/* ref: FUN_007574a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007574a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7574a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00755030(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0xa0,0x324);
  return (uint)uVar1;
}

/* ref: FUN_00757610 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00757610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x757610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00756ee0(this GEN_EDX_FWD,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_00738690(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x1b0) * 0x1b0 + *(int *)this
                  );
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x1b0;
      return;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00756ee0(this GEN_EDX_ARG,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_00738690(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x1b0;
  return;
}

/* ref: FUN_007576a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007576a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7576a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00752c00(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x68,800);
  return (uint)uVar1;
}

/* ref: FUN_00757720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x757720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (this != param_1) {
    F_00752390(this GEN_EDX_FWD);
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00757760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x757760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a038b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1d0))) GEN_EDX_FWD,param_1);
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *((uint *)GEN_TOP(((int)this + 0x60))) = uVar2;
    }
    uVar3 = F_006f4000(this GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_007577a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007577a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7577a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a03850(*((undefined4 *)GEN_TOP(((int)this + 0x1d0))) GEN_EDX_FWD,(undefined1)param_1);
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *((uint *)GEN_TOP(((int)this + 0x60))) = uVar2;
    }
    uVar3 = F_006f4000(this GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_007577e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007577e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7577e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a03970(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1d0))) GEN_EDX_FWD,param_1);
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *((uint *)GEN_TOP(((int)this + 0x60))) = uVar2;
    }
    uVar3 = F_006f4000(this GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_00757820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x757820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a03a70(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1d0))) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]));
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *((uint *)GEN_TOP(((int)this + 0x60))) = uVar2;
    }
    uVar3 = F_006f4000(this GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_00757860 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00757860(unsigned int gen_a0)
{
  GEN_ENTER(0x757860u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[0]);
  F_007496b0(((undefined *)GEN_TOP(((*(int *)&gen_args[0]) + 100))) GEN_EDX_ARG,&(*(int *)&gen_args[0]),**((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x68))),
               *((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x68))));
  uVar2 = F_00429760(*((undefined4 *)GEN_TOP((iVar1 + 0x68))),0x18,800);
  return (uint)uVar2;
}

/* ref: FUN_007578a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007578a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7578a0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[0]);
  F_0074a1e0(((undefined *)GEN_TOP(((*(int *)&gen_args[0]) + 4))) GEN_EDX_ARG,&(*(int *)&gen_args[0]),**((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 8))));
  uVar2 = F_00429760(*((undefined4 *)GEN_TOP((iVar1 + 8))),0x28,800);
  return (uint)uVar2;
}

/* ref: FUN_007578e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007578e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7578e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00752390(((undefined *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00757900 */
GEN_OWN GEN_FRAME unsigned int F_00757900(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x757900u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  undefined * this;
  
  this = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 - 1) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00750a20(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
    }
    F_00750930(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    this = ((undefined *)GEN_TOP(((int)this + 0x10)));
  }
  return;
}

/* ref: FUN_00757950 */
GEN_OWN GEN_FRAME uint F_00757950(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x757950u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  undefined4 * this;
  
  puVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != puVar1) {
      F_00750930(this GEN_EDX_ARG);
      *this = *puVar1;
      this[1] = puVar1[1];
      this[2] = puVar1[2];
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    puVar1 = puVar1 + 4;
    this = this + 4;
  } while (puVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_007579a0 */
GEN_OWN GEN_FRAME uint F_007579a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7579a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00750a20(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x10)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_007579e0 */
GEN_OWN GEN_FRAME unsigned int F_007579e0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7579e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x10) {
    F_00750930(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00757a10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x757a10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = *param_1;
  F_00757150(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_2);
  return (uint)this;
}

/* ref: FUN_00757a30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x757a30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * this_00;
  
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined1 *)this = *param_1;
  *this_00 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (this_00 != param_2) {
    F_00752390(this_00 GEN_EDX_FWD);
    *this_00 = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2[1];
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00757a80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00757a80(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x757a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    uVar1 = F_00754bb0(param_1 + 4 GEN_EDX_ARG,param_2 + 4);
  }
  return uVar1;
}

/* ref: FUN_00757ab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x757ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *(undefined1 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_004296a0(0x28,0,800);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x25))) = 1;
  F_00750b30(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00757b10 */
GEN_OWN GEN_FRAME uint F_00757b10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x757b10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00750a20(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x10)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00757b50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x757b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  F_00757150(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00757b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x757b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  F_00757150(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00757b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x757b90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * this_00;
  
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined1 *)this = *param_1;
  *this_00 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (this_00 != param_2) {
    F_00752390(this_00 GEN_EDX_FWD);
    *this_00 = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2[1];
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00757be0 */
GEN_OWN GEN_FRAME uint F_00757be0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x757be0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x10) {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00750a20(this GEN_EDX_ARG,iVar1);
    }
    this = ((undefined *)GEN_TOP(((int)this + 0x10)));
  }
  return (uint)this;
}

/* ref: Client::Game::Event::SelectEventListCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x757c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined4 uVar1;
  
  if ((param_3 < 1) || ((*param_2 & 0xf) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  F_006f0f30(REFG(void * PTR32, 0x1488344) GEN_EDX_FWD,uVar1);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: FUN_00757c60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00757c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x757c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if ((*((int *)GEN_TOP(((int)this + 4))) != 0) && (param_1 == 0x16)) {
    F_00756250(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
    uVar1 = F_00b9cdd0(&REFG(undefined, 0x14b3134) GEN_EDX_ARG);
    F_00757380(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar1);
    F_006c6040();
  }
  return 1;
}

/* ref: Client::Game::Event::ShopMenuCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x757ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined4 uVar1;
  
  if (*(undefined * PTR32 *)(this + 4) == ((undefined *)GEN_TOP(0x0))) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  }
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  F_006f4dc0(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,uVar1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::ShopItemListCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x757cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  if ((1 < param_3) && ((param_2[8] & 0xf) != 0)) {
    uVar2 = *(undefined4 *)(param_2 + 0xc);
  }
  if ((*param_2 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 4);
  }
  bVar1 = F_006f4e90(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,uVar3,uVar2);
  if (bVar1 != 0) {
    F_006c21d0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  }
  *(byte *)(param_1 + 1) = bVar1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::GCShopMenuCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x757d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined4 uVar1;
  
  if (*(undefined * PTR32 *)(this + 4) == ((undefined *)GEN_TOP(0x0))) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  }
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  F_006f5b00(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,uVar1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757da0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x757da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_006f6430(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00757dd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x757dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  F_00509590(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[5])REFP(0x10ba948));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  uVar1 = F_004296a0(0x68,0,800);
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) = *((int *)GEN_TOP(((int)this + 0x10)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 8))) = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x65))) = 1;
  return (uint)this;
}

/* ref: FUN_00757e30 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_00757e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x757e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x65))) == '\0') {
    puVar1 = puVar2;
    puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
        puVar2 = puVar1;
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x65))) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00757e60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x757e60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x65))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x65))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00757ea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x757ea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x65))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x65))) == '\0');
  }
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: LuaScriptLoader_VModuleBase_Event_Game_Client_Event::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x757f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  
  F_00757ea0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)),&(*(int * PTR32 *)&gen_args[0]));
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  piVar1 = (*(int * PTR32 *)&gen_args[0]) + 0x23;
  iVar5 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
  if (iVar5 < 8) {
    iVar5 = (*(int * PTR32 *)&gen_args[0])[7];
    uVar6 = 1;
    uVar3 = F_0042a990((*(int *)(gen_frame + 0x0)) + 0x10 GEN_EDX_ARG);
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG);
    uVar3 = F_00a022c0(*((undefined4 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar4,iVar5,uVar3,uVar6);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x14))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,(uint)(uVar3 == 0),piVar2[4]);
  }
  F_0050c620(piVar2,0,0);
  uVar3 = F_0074d560(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]),(*(int *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_00757fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00757fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x757fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined * this_00;
  char cVar1;
  int * piVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[5])REFP(0x10ba948));
  piVar6 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x10)))));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  if (piVar6 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10)))) {
    do {
      F_0050c620(piVar6[3],0,0);
      if (*((char *)GEN_TOP(((int)piVar6 + 0x65))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar6[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x65))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x65)));
          piVar6 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x65)));
            piVar6 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar6[1] + 0x65)));
          piVar4 = ((int *)GEN_TOP(piVar6[1]));
          piVar2 = piVar6;
          while ((piVar6 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar6[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar6[1] + 0x65)));
            piVar4 = ((int *)GEN_TOP(piVar6[1]));
            piVar2 = piVar6;
          }
        }
      }
    } while (piVar6 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x10))));
  }
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x4));
  piVar6 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x10))) + 4)));
  this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0xc)));
  cVar1 = *((char *)GEN_TOP(((int)piVar6 + 0x65)));
  while (cVar1 == '\0') {
    F_0074e410(this_00 GEN_EDX_ARG,piVar6[2]);
    piVar2 = ((int *)GEN_TOP(*piVar6));
    F_0042c880(piVar6 + 4 GEN_EDX_ARG);
    F_00429760(piVar6,0x68,800);
    piVar6 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x65)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar3 + 0x10))) + 4))) = *((int *)GEN_TOP(((int)pvVar3 + 0x10)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)pvVar3 + 0x10))))) = *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x10)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar3 + 0x10))) + 8))) = *((int *)GEN_TOP(((int)pvVar3 + 0x10)));
  *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x14))) = 0;
  F_00752c00(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0x10))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0x10))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)pvVar3 + 0x10))),0x68,800);
  uVar5 = F_005095f0((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_007580c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007580c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7580c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  F_00509590(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[5])REFP(0x10ba960));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  uVar1 = F_004296a0(0x68,0,800);
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) = *((int *)GEN_TOP(((int)this + 0x10)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 8))) = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x65))) = 1;
  return (uint)this;
}

/* ref: LuaScriptLoader_VLuaEventHandler_Event_Game_Client_Event::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00758120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x758120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  
  F_00757ea0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)),&(*(int * PTR32 *)&gen_args[0]));
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  piVar1 = (*(int * PTR32 *)&gen_args[0]) + 0x23;
  iVar5 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
  if (iVar5 < 8) {
    iVar5 = (*(int * PTR32 *)&gen_args[0])[7];
    uVar6 = 1;
    uVar3 = F_0042a990((*(int *)(gen_frame + 0x0)) + 0x10 GEN_EDX_ARG);
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG);
    uVar3 = F_00a022c0(*((undefined4 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar4,iVar5,uVar3,uVar6);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x240))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,(uint)(uVar3 == 0),piVar2[4]);
  }
  F_0050c620(piVar2,0,0);
  uVar3 = F_0074d560(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]),(*(int *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_007581c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007581c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7581c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined * this_00;
  char cVar1;
  int * piVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[5])REFP(0x10ba960));
  piVar6 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x10)))));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  if (piVar6 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10)))) {
    do {
      F_0050c620(piVar6[3],0,0);
      if (*((char *)GEN_TOP(((int)piVar6 + 0x65))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar6[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x65))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x65)));
          piVar6 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x65)));
            piVar6 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar6[1] + 0x65)));
          piVar4 = ((int *)GEN_TOP(piVar6[1]));
          piVar2 = piVar6;
          while ((piVar6 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar6[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar6[1] + 0x65)));
            piVar4 = ((int *)GEN_TOP(piVar6[1]));
            piVar2 = piVar6;
          }
        }
      }
    } while (piVar6 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x10))));
  }
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x4));
  piVar6 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x10))) + 4)));
  this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0xc)));
  cVar1 = *((char *)GEN_TOP(((int)piVar6 + 0x65)));
  while (cVar1 == '\0') {
    F_0074e410(this_00 GEN_EDX_ARG,piVar6[2]);
    piVar2 = ((int *)GEN_TOP(*piVar6));
    F_0042c880(piVar6 + 4 GEN_EDX_ARG);
    F_00429760(piVar6,0x68,800);
    piVar6 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x65)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar3 + 0x10))) + 4))) = *((int *)GEN_TOP(((int)pvVar3 + 0x10)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)pvVar3 + 0x10))))) = *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x10)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar3 + 0x10))) + 8))) = *((int *)GEN_TOP(((int)pvVar3 + 0x10)));
  *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x14))) = 0;
  F_00752c00(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0x10))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0x10))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)pvVar3 + 0x10))),0x68,800);
  uVar5 = F_005095f0((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar5;
}

/* ref: LuaScriptLoader_VModuleBase_Event_Game_Client_Event::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007582d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7582d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00757fb0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: LuaScriptLoader_VLuaEventHandler_Event_Game_Client_Event::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00758300(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x758300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_007581c0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00758330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00758330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x758330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * this_00;
  
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined1 *)this = *param_1;
  *this_00 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (this_00 != param_2) {
    F_00752390(this_00 GEN_EDX_FWD);
    *this_00 = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2[1];
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00758380 */
GEN_OWN GEN_FRAME unsigned int F_00758380(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x758380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 in_ECX = 0;
  
  F_00757900(param_1,param_2,param_3,param_4,0,in_ECX);
  return;
}

/* ref: FUN_007583b0 */
GEN_OWN GEN_FRAME uint F_007583b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7583b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  F_007496b0(((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 100))) GEN_EDX_ARG,&(*(int *)&gen_args[1]),**((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[1]) + 0x68))),
               *((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[1]) + 0x68))));
  uVar2 = F_00429760(*((undefined4 *)GEN_TOP((iVar1 + 0x68))),0x18,800);
  return (uint)uVar2;
}

/* ref: FUN_007583e0 */
GEN_OWN GEN_FRAME uint F_007583e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7583e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  F_0074a1e0(((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 4))) GEN_EDX_ARG,&(*(int *)&gen_args[1]),**((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[1]) + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[1]) + 8))));
  uVar2 = F_00429760(*((undefined4 *)GEN_TOP((iVar1 + 8))),0x28,800);
  return (uint)uVar2;
}

/* ref: FUN_00758410 */
GEN_OWN GEN_FRAME uint F_00758410(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x758410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00757950(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00758430 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00758430(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x758430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00750a20(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x10)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00758470 */
GEN_OWN GEN_FRAME unsigned int F_00758470(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x758470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x10) {
    F_00750930(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_007584a0 */
GEN_OWN GEN_FRAME uint F_007584a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7584a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00752390(((undefined *)GEN_TOP((param_2 + 4))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007584b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007584b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7584b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  piVar4 = (*(int * PTR32 *)&gen_args[3]);
  if (0xfffffffd < *((uint *)GEN_TOP(((int)this + 8)))) {
    F_0074a1e0((*(int * PTR32 *)&gen_args[3]) + 4 GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),*((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[3])[5])),((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[3])[5])));
    F_00429760(piVar4[5],0x28,800);
    F_00429760(piVar4,0x24,800);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP(((int)this + 8))) = *((uint *)GEN_TOP(((int)this + 8))) + 1;
  (*(int * PTR32 *)&gen_args[3])[1] = (int)(*(undefined4 * PTR32 *)&gen_args[2]);
  if ((*(undefined4 * PTR32 *)&gen_args[2]) == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1] = (*(int * PTR32 *)&gen_args[3]);
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(int * PTR32 *)&gen_args[3]);
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = (*(int * PTR32 *)&gen_args[3]);
  }
  else if ((char)(*(undefined4 *)&gen_args[1]) == '\0') {
    (*(undefined4 * PTR32 *)&gen_args[2])[2] = (*(int * PTR32 *)&gen_args[3]);
    if ((*(undefined4 * PTR32 *)&gen_args[2]) == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = (*(int * PTR32 *)&gen_args[3]);
    }
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[3]);
    if ((*(undefined4 * PTR32 *)&gen_args[2]) == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      **((int * PTR32 *)GEN_TOP(((int)this + 4))) = (int)(*(int * PTR32 *)&gen_args[3]);
    }
  }
  cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[1] + 0x20)));
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[3]);
      *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x20))) == '\0') {
        *(undefined1 *)(piVar5 + 8) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x21))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_007586cd: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x20))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar4[2]))) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar2 + 8))) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x21))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar3))) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_007586cd;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x20)));
  } while( true );
}

/* ref: FUN_00758700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00758700(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x758700u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00752390(param_5 + 4 GEN_EDX_FWD);
    F_00429760(param_5,0x24,800);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    iVar4 = *((int *)GEN_TOP((param_1 + 4)));
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_5;
      if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
        **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
      }
      goto LAB_00758776;
    }
    param_4[2] = param_5;
    iVar4 = *((int *)GEN_TOP((param_1 + 4)));
    if (param_4 != *((undefined4 * PTR32 *)GEN_TOP((iVar4 + 8)))) goto LAB_00758776;
  }
  *((int * PTR32 *)GEN_TOP((iVar4 + 8))) = param_5;
LAB_00758776: ;
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x20)));
  piVar3 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar4 + 0x20))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar3[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar4 = piVar6[2];
      if (*((char *)GEN_TOP((iVar4 + 0x20))) == '\0') {
        *(undefined1 *)(piVar5 + 8) = 1;
        *((undefined1 *)GEN_TOP((iVar4 + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x20))) = 0;
        piVar3 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
      }
      else {
        if (piVar3 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar3 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar3;
          if (*((char *)GEN_TOP((*piVar3 + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar3 + 4))) = piVar5;
          }
          piVar3[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar3;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
              *piVar6 = (int)piVar3;
            }
            else {
              piVar6[2] = (int)piVar3;
            }
          }
          *piVar3 = (int)piVar5;
          piVar5[1] = (int)piVar3;
          piVar3 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar3[1] + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x20))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x21))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar2 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar2[2]))) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00758901: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*((char *)GEN_TOP((iVar4 + 0x20))) != '\0') {
        if (piVar3 == ((int *)GEN_TOP(*piVar5))) {
          iVar4 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar4 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 8))) + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar4 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar4;
          }
          else {
            piVar3 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
              piVar3[2] = iVar4;
            }
            else {
              *piVar3 = iVar4;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar4 + 8))) = piVar5;
          piVar5[1] = iVar4;
          piVar3 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar3[1] + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x20))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x21))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
        }
        else {
          piVar2 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar2))) {
            *piVar2 = (int)piVar6;
          }
          else {
            piVar2[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00758901;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *((undefined1 *)GEN_TOP((iVar4 + 0x20))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x20))) = 0;
      piVar3 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x20)));
  } while( true );
}

/* ref: FUN_00758930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00758930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x758930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = *param_1;
  F_00757150(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_2);
  return (uint)this;
}

/* ref: FUN_00758950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00758950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x758950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * this_00;
  
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined1 *)this = *param_1;
  *this_00 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (this_00 != param_2) {
    F_00752390(this_00 GEN_EDX_FWD);
    *this_00 = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2[1];
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_007589a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007589a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7589a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  piVar6 = (*(int * PTR32 *)&gen_args[3]);
  if (0xfffffffd < *((uint *)GEN_TOP(((int)this + 8)))) {
    F_007496b0((*(int * PTR32 *)&gen_args[3]) + 0x1d GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),*((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[3])[0x1e])),((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[3])[0x1e])));
    F_00429760(piVar6[0x1e],0x18,800);
    F_00429760(piVar6,0x90,800);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP(((int)this + 8))) = *((uint *)GEN_TOP(((int)this + 8))) + 1;
  (*(int * PTR32 *)&gen_args[3])[1] = (int)(*(undefined4 * PTR32 *)&gen_args[2]);
  if ((*(undefined4 * PTR32 *)&gen_args[2]) == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1] = (*(int * PTR32 *)&gen_args[3]);
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(int * PTR32 *)&gen_args[3]);
    iVar4 = *((int *)GEN_TOP(((int)this + 4)));
  }
  else {
    if ((char)(*(undefined4 *)&gen_args[1]) != '\0') {
      *(*(undefined4 * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[3]);
      if ((*(undefined4 * PTR32 *)&gen_args[2]) == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
        **((int * PTR32 *)GEN_TOP(((int)this + 4))) = (int)(*(int * PTR32 *)&gen_args[3]);
      }
      goto LAB_00758a35;
    }
    (*(undefined4 * PTR32 *)&gen_args[2])[2] = (*(int * PTR32 *)&gen_args[3]);
    iVar4 = *((int *)GEN_TOP(((int)this + 4)));
    if ((*(undefined4 * PTR32 *)&gen_args[2]) != *((undefined4 * PTR32 *)GEN_TOP((iVar4 + 8)))) goto LAB_00758a35;
  }
  *((int * PTR32 *)GEN_TOP((iVar4 + 8))) = (*(int * PTR32 *)&gen_args[3]);
LAB_00758a35: ;
  cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[1] + 0x88)));
  piVar3 = (*(int * PTR32 *)&gen_args[3]);
  do {
    if (cVar1 != '\0') {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) + 0x88))) = 1;
      *(*(undefined4 * PTR32 *)&gen_args[0]) = piVar3;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    piVar5 = ((int *)GEN_TOP(piVar6[1]));
    piVar2 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar2))) {
      iVar4 = piVar2[2];
      if (*((char *)GEN_TOP((iVar4 + 0x88))) != '\0') {
        if (piVar6 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar6 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar6;
          if (*((char *)GEN_TOP((*piVar6 + 0x89))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
          }
          piVar6[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar6;
          }
          else {
            piVar3 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar3))) {
              *piVar3 = (int)piVar6;
            }
            else {
              piVar3[2] = (int)piVar6;
            }
          }
          *piVar6 = (int)piVar5;
          piVar5[1] = (int)piVar6;
          piVar6 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar6[1] + 0x88))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar6[1] + 4))) + 0x88))) = 0;
        piVar3 = *((int * PTR32 *)GEN_TOP((piVar6[1] + 4)));
        piVar5 = ((int *)GEN_TOP(*piVar3));
        *piVar3 = piVar5[2];
        if (*((char *)GEN_TOP((piVar5[2] + 0x89))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar5[2] + 4))) = piVar3;
        }
        piVar5[1] = piVar3[1];
        if (piVar3 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar5;
          piVar5[2] = (int)piVar3;
        }
        else {
          piVar2 = ((int *)GEN_TOP(piVar3[1]));
          if (piVar3 == ((int *)GEN_TOP(piVar2[2]))) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar3;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar3;
          }
        }
        goto LAB_00758ba8;
      }
LAB_00758b24: ;
      *(undefined1 *)(piVar5 + 0x22) = 1;
      *((undefined1 *)GEN_TOP((iVar4 + 0x88))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar6[1] + 4))) + 0x88))) = 0;
      piVar6 = *((int * PTR32 *)GEN_TOP((piVar6[1] + 4)));
    }
    else {
      iVar4 = *piVar2;
      if (*((char *)GEN_TOP((iVar4 + 0x88))) == '\0') goto LAB_00758b24;
      if (piVar6 == ((int *)GEN_TOP(*piVar5))) {
        F_007313f0(this GEN_EDX_ARG,piVar5);
        piVar6 = piVar5;
      }
      *((undefined1 *)GEN_TOP((piVar6[1] + 0x88))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar6[1] + 4))) + 0x88))) = 0;
      piVar3 = *((int * PTR32 *)GEN_TOP((piVar6[1] + 4)));
      piVar5 = ((int *)GEN_TOP(piVar3[2]));
      piVar3[2] = *piVar5;
      if (*((char *)GEN_TOP((*piVar5 + 0x89))) == '\0') {
        *((int * PTR32 *)GEN_TOP((*piVar5 + 4))) = piVar3;
      }
      piVar5[1] = piVar3[1];
      if (piVar3 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar5;
      }
      else {
        piVar2 = ((int *)GEN_TOP(piVar3[1]));
        if (piVar3 == ((int *)GEN_TOP(*piVar2))) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar3;
LAB_00758ba8: ;
      piVar3[1] = (int)piVar5;
      piVar3 = (*(int * PTR32 *)&gen_args[3]);
    }
    cVar1 = *((char *)GEN_TOP((piVar6[1] + 0x88)));
  } while( true );
}

/* ref: FUN_00758be0 */
GEN_OWN GEN_FRAME uint F_00758be0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x758be0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    uVar1 = F_00754bb0(param_2 + 4 GEN_EDX_ARG,param_3 + 4);
  }
  return uVar1;
}

/* ref: FUN_00758c00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00758c00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x758c00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00750a20(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x10)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00758c40 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00758c40(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x758c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if (param_1 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar1 = F_004296a0(0x28,0,800);
    *(uint *)(param_1 + 8) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = *(int *)(param_1 + 8);
    *((int *)GEN_TOP((*(int *)(param_1 + 8) + 8))) = *(int *)(param_1 + 8);
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 8) + 0x24))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 8) + 0x25))) = 1;
    F_00750b30(param_1 + 4 GEN_EDX_ARG,param_2 + 4);
  }
  return;
}

/* ref: FUN_00758ca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00758ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x758ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * this_00;
  
  puVar1 = (undefined4 *)(param_1 + 4);
  *(undefined1 *)this = *param_1;
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 4)));
  *this_00 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (this_00 != puVar1) {
    F_00752390(this_00 GEN_EDX_FWD);
    *this_00 = *puVar1;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = *(undefined4 *)(param_1 + 8);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *(undefined4 *)(param_1 + 0xc);
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00758cf0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00758cf0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x758cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x10) {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00750a20(this GEN_EDX_ARG,iVar1);
    }
    this = ((undefined *)GEN_TOP(((int)this + 0x10)));
  }
  return (uint)this;
}

/* ref: FUN_00758d30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00758d30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x758d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    uVar1 = F_00757150(param_1 + 2 GEN_EDX_ARG,param_2 + 2);
  }
  return uVar1;
}

/* ref: Client::Game::Event::GuildleveAssignmentRewardMenuCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00758d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x758d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  bVar1 = 1;
  if (*(undefined * PTR32 *)(this + 4) != ((undefined *)GEN_TOP(0x0))) {
    if ((param_3 < 2) || ((param_2[8] & 0xf) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
    }
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    bVar1 = F_006fad60(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,uVar2,uVar3);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  *(byte *)(param_1 + 1) = bVar1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::GatheringBarCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00758dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x758dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  byte bVar1;
  
  if (*(undefined * PTR32 *)(this + 4) != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_006fae00(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,param_2,param_3);
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::QuestOfferCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00758e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x758e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined * this_00;
  undefined4 uVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 4);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
  if ((this_00 != ((undefined *)GEN_TOP(0x0))) && (0 < param_3)) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    F_006fb930(this_00 GEN_EDX_ARG,uVar1);
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::Game::Event::QuestRewardCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00758e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x758e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  bVar1 = 1;
  if (*(undefined * PTR32 *)(this + 4) != ((undefined *)GEN_TOP(0x0))) {
    if ((param_3 < 2) || ((param_2[8] & 0xf) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
    }
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    bVar1 = F_006fb9e0(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,uVar2,uVar3);
    if (bVar1 == 0) goto LAB_00758eaa;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
LAB_00758eaa: ;
  *(byte *)(param_1 + 1) = bVar1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::ShopItemPriceChangedCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00758ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x758ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  byte bVar1;
  undefined4 uVar2;
  
  if (((REFG(int, 0x1488760) != 0) && (*((short *)GEN_TOP((REFG(int, 0x1488760) + 0x54))) != -1)) &&
     (*(undefined * PTR32 *)(this + 4) != ((undefined *)GEN_TOP(0x0)))) {
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    bVar1 = F_006fbd30(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,uVar2);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
    *(byte *)(param_1 + 1) = bVar1;
    *param_1 = 2;
    return (uint)param_1;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::ShopConfirmWidgetCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00758f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x758f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined4 uVar1;
  
  if (((REFG(int, 0x1488760) != 0) && (*((short *)GEN_TOP((REFG(int, 0x1488760) + 0x54))) != -1)) &&
     (*(undefined * PTR32 *)(this + 4) != ((undefined *)GEN_TOP(0x0)))) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    F_006fbdf0(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,uVar1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return (uint)param_1;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::CraftLeveRewardCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00758fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x758fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  uVar4 = 1;
  if (*(undefined * PTR32 *)(this + 4) == ((undefined *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
  }
  else {
    if ((param_3 < 2) || ((param_2[8] & 0xf) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
    }
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    bVar1 = F_006fbeb0(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG,uVar2,uVar3);
    uVar4 = 0;
    if (bVar1 != 0) {
      *(undefined4 *)(this + 4) = 0;
      *(byte *)(param_1 + 1) = bVar1;
      *param_1 = 2;
      return (uint)param_1;
    }
  }
  *(undefined1 *)(param_1 + 1) = uVar4;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::ChocoboTaxiStandEventHandler::vf110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00759020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x759020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0042ccf0(param_1 GEN_EDX_FWD,this + 0x1d8);
  return uVar1;
}

/* ref: Client::Game::Event::Director::vf145 */
GEN_OWN GEN_NOFRAME byte F_00759040(void)
{
  GEN_ENTER(0x759040u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::Director::vf146 */
GEN_OWN GEN_NOFRAME unsigned int F_00759050(void)
{
  GEN_ENTER(0x759050u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Event::Director::vf147 */
GEN_OWN GEN_NOFRAME byte F_00759060(void)
{
  GEN_ENTER(0x759060u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::Event::Director::vf148 */
GEN_OWN GEN_NOFRAME byte F_00759070(void)
{
  GEN_ENTER(0x759070u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::Director::vf149 */
GEN_OWN GEN_NOFRAME uint F_00759080(void)
{
  GEN_ENTER(0x759080u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::Director::vf150 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00759090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8), GEN_P(undefined4 param_9, unsigned int gen_a9))
{
  GEN_ENTER(0x759090u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a9;)
  return;
}

/* ref: Client::Game::Event::Director::vf151 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007590a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7590a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::Game::Event::Director::vf152 */
GEN_OWN GEN_NOFRAME unsigned int F_007590b0(void)
{
  GEN_ENTER(0x7590b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Event::Director::vf110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007590c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7590c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0042ccf0(param_1 GEN_EDX_FWD,this + 0x1e8);
  return uVar1;
}

/* ref: Client::Game::Event::Director::vf156 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007590e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7590e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf5 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00759100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x759100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf148 */
GEN_OWN GEN_NOFRAME byte F_00759110(void)
{
  GEN_ENTER(0x759110u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf149 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00759120(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x759120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x31c;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf122 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00759130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x759130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00ba0c90(this + 0x31c GEN_EDX_FWD,param_1,param_2);
  return;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf123 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00759140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x759140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00ba0ce0(this + 0x31c GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf7 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00759150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x759150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 1;
}

/* ref: FUN_00759160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00759160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x759160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int * piVar6;
  int * piVar7;
  
  piVar6 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x89))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)&gen_args[1]);
  F_00724e40(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar5 = ((int *)GEN_TOP(*piVar6));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x89))) == '\0') {
    piVar7 = piVar5;
    if ((*((char *)GEN_TOP((piVar6[2] + 0x89))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar6)) {
      piVar5[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar6;
      piVar5 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar6[2]))) {
        piVar5 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x89))) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar6[2];
        *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) == piVar6) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar6[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar6) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar6[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[0x22];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 0x22))) = (char)piVar6[0x22];
      *(char *)(piVar6 + 0x22) = (char)iVar1;
      goto LAB_0075929f;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar6[2]));
  }
  piVar5 = ((int *)GEN_TOP(piVar6[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x89))) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) == piVar6) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar5)) == piVar6) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))))) == piVar6) {
    piVar3 = piVar5;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x89))) == '\0') {
      piVar3 = ((int *)GEN_TOP(F_00722c90(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) = piVar3;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4)));
  (*(int *)(gen_frame + 0x0)) = iVar1;
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar6) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x89))) == '\0') {
      uVar4 = F_00722c60(piVar7);
      *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 8))) = uVar4;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar5;
    }
  }
LAB_0075929f: ;
  if ((char)(*(int * PTR32 *)(gen_frame + 0x4))[0x22] == '\x01') {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4)))) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[0x22] != '\x01') break;
        piVar5 = ((int *)GEN_TOP(*piVar6));
        if (piVar7 == piVar5) {
          piVar5 = ((int *)GEN_TOP(piVar6[2]));
          if ((char)piVar5[0x22] == '\0') {
            *(undefined1 *)(piVar5 + 0x22) = 1;
            *(undefined1 *)(piVar6 + 0x22) = 0;
            F_0073c1b0(this_00 GEN_EDX_ARG,piVar6);
            piVar5 = ((int *)GEN_TOP(piVar6[2]));
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*((char *)GEN_TOP(((int)piVar5 + 0x89))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar5 + 0x88))) != '\x01') || (*((char *)GEN_TOP((piVar5[2] + 0x88))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar5[2] + 0x88))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar5 + 0x88))) = 1;
                *(undefined1 *)(piVar5 + 0x22) = 0;
                F_007313f0(this_00 GEN_EDX_ARG,piVar5);
                piVar5 = ((int *)GEN_TOP(piVar6[2]));
                this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
              }
              *(char *)(piVar5 + 0x22) = (char)piVar6[0x22];
              *(undefined1 *)(piVar6 + 0x22) = 1;
              *((undefined1 *)GEN_TOP((piVar5[2] + 0x88))) = 1;
              F_0073c1b0(this_00 GEN_EDX_ARG,piVar6);
              break;
            }
LAB_007593ac: ;
            *(undefined1 *)(piVar5 + 0x22) = 0;
          }
        }
        else {
          if ((char)piVar5[0x22] == '\0') {
            *(undefined1 *)(piVar5 + 0x22) = 1;
            *(undefined1 *)(piVar6 + 0x22) = 0;
            F_007313f0(this_00 GEN_EDX_ARG,piVar6);
            piVar5 = ((int *)GEN_TOP(*piVar6));
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*((char *)GEN_TOP(((int)piVar5 + 0x89))) == '\0') {
            if ((*((char *)GEN_TOP((piVar5[2] + 0x88))) == '\x01') && (*((char *)GEN_TOP((*piVar5 + 0x88))) == '\x01'))
            goto LAB_007593ac;
            if (*((char *)GEN_TOP((*piVar5 + 0x88))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar5[2] + 0x88))) = 1;
              *(undefined1 *)(piVar5 + 0x22) = 0;
              F_0073c1b0(this_00 GEN_EDX_ARG,piVar5);
              piVar5 = ((int *)GEN_TOP(*piVar6));
              this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            *(char *)(piVar5 + 0x22) = (char)piVar6[0x22];
            *(undefined1 *)(piVar6 + 0x22) = 1;
            *((undefined1 *)GEN_TOP((*piVar5 + 0x88))) = 1;
            F_007313f0(this_00 GEN_EDX_ARG,piVar6);
            break;
          }
        }
        piVar5 = ((int *)GEN_TOP(piVar6[1]));
        piVar7 = piVar6;
      } while (piVar6 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x22) = 1;
  }
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
  F_007496b0((*(int * PTR32 *)(gen_frame + 0x4)) + 0x1d GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x4))[0x1e])),((undefined4 *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x4))[0x1e])));
  F_00429760(piVar6[0x1e],0x18,800);
  F_00429760(piVar6,0x90,800);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00759470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00759470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x759470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int * piVar6;
  int * piVar7;
  
  piVar6 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x21))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)&gen_args[1]);
  F_007237a0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar5 = ((int *)GEN_TOP(*piVar6));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x21))) == '\0') {
    piVar7 = piVar5;
    if ((*((char *)GEN_TOP((piVar6[2] + 0x21))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar6)) {
      piVar5[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar6;
      piVar5 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar6[2]))) {
        piVar5 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar6[2];
        *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) == piVar6) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar6[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar6) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar6[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 8))) = (char)piVar6[8];
      *(char *)(piVar6 + 8) = (char)iVar1;
      goto LAB_0075958a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar6[2]));
  }
  piVar5 = ((int *)GEN_TOP(piVar6[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) == piVar6) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar5)) == piVar6) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))))) == piVar6) {
    piVar3 = piVar5;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
      piVar3 = ((int *)GEN_TOP(F_00722dc0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) = piVar3;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4)));
  (*(int *)(gen_frame + 0x0)) = iVar1;
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar6) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
      uVar4 = F_00722da0(piVar7);
      *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 8))) = uVar4;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar5;
    }
  }
LAB_0075958a: ;
  if ((char)(*(int * PTR32 *)(gen_frame + 0x4))[8] == '\x01') {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4)))) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[8] != '\x01') break;
        piVar5 = ((int *)GEN_TOP(*piVar6));
        if (piVar7 == piVar5) {
          piVar5 = ((int *)GEN_TOP(piVar6[2]));
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_0073c2d0(this_00 GEN_EDX_ARG,piVar6);
            piVar5 = ((int *)GEN_TOP(piVar6[2]));
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*((char *)GEN_TOP(((int)piVar5 + 0x21))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar5 + 0x20))) != '\x01') || (*((char *)GEN_TOP((piVar5[2] + 0x20))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar5[2] + 0x20))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar5 + 0x20))) = 1;
                *(undefined1 *)(piVar5 + 8) = 0;
                F_00731500(this_00 GEN_EDX_ARG,piVar5);
                piVar5 = ((int *)GEN_TOP(piVar6[2]));
                this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
              }
              *(char *)(piVar5 + 8) = (char)piVar6[8];
              *(undefined1 *)(piVar6 + 8) = 1;
              *((undefined1 *)GEN_TOP((piVar5[2] + 0x20))) = 1;
              F_0073c2d0(this_00 GEN_EDX_ARG,piVar6);
              break;
            }
LAB_00759648: ;
            *(undefined1 *)(piVar5 + 8) = 0;
          }
        }
        else {
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_00731500(this_00 GEN_EDX_ARG,piVar6);
            piVar5 = ((int *)GEN_TOP(*piVar6));
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*((char *)GEN_TOP(((int)piVar5 + 0x21))) == '\0') {
            if ((*((char *)GEN_TOP((piVar5[2] + 0x20))) == '\x01') && (*((char *)GEN_TOP((*piVar5 + 0x20))) == '\x01'))
            goto LAB_00759648;
            if (*((char *)GEN_TOP((*piVar5 + 0x20))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar5[2] + 0x20))) = 1;
              *(undefined1 *)(piVar5 + 8) = 0;
              F_0073c2d0(this_00 GEN_EDX_ARG,piVar5);
              piVar5 = ((int *)GEN_TOP(*piVar6));
              this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            *(char *)(piVar5 + 8) = (char)piVar6[8];
            *(undefined1 *)(piVar6 + 8) = 1;
            *((undefined1 *)GEN_TOP((*piVar5 + 0x20))) = 1;
            F_00731500(this_00 GEN_EDX_ARG,piVar6);
            break;
          }
        }
        piVar5 = ((int *)GEN_TOP(piVar6[1]));
        piVar7 = piVar6;
      } while (piVar6 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
  F_0074a1e0((*(int * PTR32 *)(gen_frame + 0x4)) + 4 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x4))[5])),((undefined4 *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x4))[5])));
  F_00429760(piVar6[5],0x28,800);
  F_00429760(piVar6,0x24,800);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_007596f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007596f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7596f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x21)));
  piVar4 = (*(int * PTR32 *)&gen_args[0]);
  while (cVar1 == '\0') {
    iVar2 = piVar4[2];
    F_007596f0(this GEN_EDX_FWD,((int *)GEN_TOP(iVar2)));
    piVar3 = ((int *)GEN_TOP(*piVar4));
    F_0074a1e0(piVar4 + 4 GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(piVar4[5])),((undefined4 *)GEN_TOP(piVar4[5])));
    F_00429760(piVar4[5],0x28,800);
    F_00429760(piVar4,0x24,800);
    piVar4 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x21)));
  }
  return;
}

/* ref: FUN_00759760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00759760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x759760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * this_00;
  
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined1 *)this = *param_1;
  *this_00 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (this_00 != param_2) {
    F_00752390(this_00 GEN_EDX_FWD);
    *this_00 = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2[1];
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_007597b0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_007597b0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7597b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0x10)))) {
    F_00750930(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_007597e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007597e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7597e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x21))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00732f60(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x21))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x21))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar3[2];
        *((int * PTR32 *)GEN_TOP((piVar3[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar3[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 8))) = (char)piVar3[8];
      *(char *)(piVar3 + 8) = (char)iVar1;
      goto LAB_007598fa;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar6)) == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00726550(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
      uVar5 = F_00726c20(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_007598fa: ;
  if ((char)piVar3[8] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[8] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00733f90(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x21))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x20))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x20))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x20))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x20))) = 1;
                *(undefined1 *)(piVar6 + 8) = 0;
                F_00733ff0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 8) = (char)piVar4[8];
              *(undefined1 *)(piVar4 + 8) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x20))) = 1;
              F_00733f90(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_007599b8: ;
            *(undefined1 *)(piVar6 + 8) = 0;
          }
        }
        else {
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00733ff0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x21))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x20))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x20))) == '\x01'))
            goto LAB_007599b8;
            if (*((char *)GEN_TOP((*piVar6 + 0x20))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x20))) = 1;
              *(undefined1 *)(piVar6 + 8) = 0;
              F_00733f90(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 8) = (char)piVar4[8];
            *(undefined1 *)(piVar4 + 8) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x20))) = 1;
            F_00733ff0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  F_00752390(piVar3 + 4 GEN_EDX_ARG);
  F_00429760(piVar3,0x24,800);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00759a40 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00759a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x759a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x89)));
  piVar4 = (*(int * PTR32 *)&gen_args[0]);
  while (cVar1 == '\0') {
    iVar2 = piVar4[2];
    F_00759a40(this GEN_EDX_FWD,((int *)GEN_TOP(iVar2)));
    piVar3 = ((int *)GEN_TOP(*piVar4));
    F_007496b0(piVar4 + 0x1d GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(piVar4[0x1e])),((undefined4 *)GEN_TOP(piVar4[0x1e])));
    F_00429760(piVar4[0x1e],0x18,800);
    F_00429760(piVar4,0x90,800);
    piVar4 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x89)));
  }
  return;
}

/* ref: FUN_00759ab0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00759ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x759ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x21)));
  piVar4 = param_1;
  while (cVar1 == '\0') {
    F_00759ab0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar4[2])));
    iVar5 = piVar4[4];
    piVar2 = ((int *)GEN_TOP(*piVar4));
    if (iVar5 != 0) {
      iVar3 = piVar4[5];
      for (; iVar5 != iVar3; iVar5 = iVar5 + 0x140) {
        F_0042c880(((undefined *)GEN_TOP((iVar5 + 0x1c))) GEN_EDX_ARG);
      }
      F_00429760(piVar4[4],((piVar4[6] - piVar4[4]) / 0x140) * 0x140,800);
    }
    piVar4[4] = 0;
    piVar4[5] = 0;
    piVar4[6] = 0;
    F_00429760(piVar4,0x24,800);
    piVar4 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x21)));
  }
  return;
}

/* ref: FUN_00759b70 */
GEN_OWN GEN_FRAME uint F_00759b70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x759b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *param_1 = *param_2;
  F_00757150(param_1 + 2 GEN_EDX_ARG,param_3);
  return (uint)param_1;
}

/* ref: FUN_00759b90 */
GEN_OWN GEN_FRAME uint F_00759b90(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x759b90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 * this;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00754bb0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_3)));
  this = (undefined4 *)(param_1 + 4);
  *param_1 = *param_2;
  *this = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (this != puVar1) {
    F_00752390(this GEN_EDX_ARG);
    *this = *puVar1;
    *(undefined4 *)(param_1 + 8) = puVar1[1];
    *(undefined4 *)(param_1 + 0xc) = puVar1[2];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  F_00752390(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00759c00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00759c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x759c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool local_8;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  local_8 = true;
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x21))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        local_8 = *((byte *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) < *(byte *)(puVar2 + 3);
      }
      else {
        local_8 = *((byte *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) <= *(byte *)(puVar2 + 3);
      }
      if (local_8 == false) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(*puVar2));
      }
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x21))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_00758700(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00728aa0(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if (*((byte *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[2]) + 3))) < *((byte *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00758700(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00752390(((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))) GEN_EDX_ARG);
  F_00429760((*(int *)&gen_args[1]),0x24,800);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00759cf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00759cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x759cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[2]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    F_00758700(this GEN_EDX_FWD,(*(undefined4 * PTR32 *)&gen_args[0]),1,piVar1,(*(int * PTR32 *)&gen_args[2]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(*piVar1))) {
    if (*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3))) < *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 3)))) {
      F_00758700(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[1]) == piVar1) {
    if (*((byte *)GEN_TOP((piVar1[2] + 0xc))) < *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3)))) {
      F_00758700(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,piVar1[2],(*(int * PTR32 *)&gen_args[2]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
  else {
    if (*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3))) < *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 3)))) {
      (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
      F_00728aa0(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      if (*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3))) < *(byte *)(piVar2 + 3)) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x21))) != '\0') {
          F_00758700(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00758700(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[1]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
    }
    if (*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 3))) < *(byte *)(piVar2 + 3)) {
      (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
      F_00732f60(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      if (((*(int * PTR32 *)&gen_args[2]) == *((int * PTR32 *)GEN_TOP(((int)this + 4)))) || (*(byte *)(piVar2 + 3) < *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3)))))
      {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[2] + 0x21))) != '\0') {
          F_00758700(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[1]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00758700(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
    }
  }
  puVar3 = ((undefined4 *)GEN_TOP(F_00759c00(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),piVar2,0)));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar3;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00759e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00759e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x759e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  bool bVar6;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x21)));
  bVar6 = true;
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),1);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  uVar3 = (*(undefined4 *)(gen_frame + 0x0));
  while (cVar1 == '\0') {
    if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
      bVar6 = *((byte *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) < *(byte *)(puVar5 + 3);
    }
    else {
      bVar6 = *((byte *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) <= *(byte *)(puVar5 + 3);
    }
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3, (unsigned long long)((undefined3)((uint)uVar3 >> 8)));
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),bVar6);
    if (bVar6 == false) {
      puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    uVar3 = (*(undefined4 *)(gen_frame + 0x0));
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0x21)));
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (bVar6 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar5 = ((undefined4 *)GEN_TOP(F_007584b0(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00728a30(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if (*((byte *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[2]) + 3))) < *((byte *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar5 = ((undefined4 *)GEN_TOP(F_007584b0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),uVar3,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_0074a1e0(((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),**((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))),
               *((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))));
  F_00429760(*((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))),0x28,800);
  F_00429760((*(int *)&gen_args[1]),0x24,800);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00759f60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00759f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x759f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x24,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 8) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined1 *)(puVar1 + 3) = *param_1;
    F_00754bb0(puVar1 + 4 GEN_EDX_ARG,param_1 + 4);
  }
  return (uint)puVar1;
}

/* ref: FUN_00759fc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00759fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x759fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool bVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3, (unsigned long long)((undefined3)((uint)((int)(uintptr_t)this) >> 8)));
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),1);
  if (*((char *)GEN_TOP(((int)puVar1 + 0x89))) == '\0') {
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
        bVar3 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))) < (uint)puVar2[4];
      }
      else {
        bVar3 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))) <= (uint)puVar2[4];
      }
      (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(*puVar2));
      }
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x89))) == '\0');
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_007589a0(this GEN_EDX_FWD,&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)(gen_frame + 0x0)),puVar2,(*(int *)&gen_args[1]))));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_0075a040 */
GEN_OWN GEN_FRAME uint F_0075a040(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x75a040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 * puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  puVar1 = (undefined4 *)(param_3 + 4);
  uVar2 = *param_3;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  if (&(*(undefined4 *)(gen_frame + 0x0)) != puVar1) {
    F_00752390(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar3 = *(undefined4 *)(param_3 + 8);
    uVar4 = *(undefined4 *)(param_3 + 0xc);
    (*(undefined4 *)(gen_frame + 0x0)) = *puVar1;
    (*(undefined4 *)(gen_frame + 0x4)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x8)) = uVar4;
    *puVar1 = 0;
    *(undefined4 *)(param_3 + 8) = 0;
    *(undefined4 *)(param_3 + 0xc) = 0;
  }
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_2 = uVar2;
    F_00754bb0(param_2 + 4 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  }
  uVar5 = F_00752390(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_0075a0b0 */
GEN_OWN GEN_FRAME uint F_0075a0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a0b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined1 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = *(*(undefined1 * PTR32 *)&gen_args[2]);
  F_0074a520(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined1 * PTR32 *)&gen_args[2]) + 4);
  if ((*(undefined1 * PTR32 *)&gen_args[1]) != ((undefined1 *)GEN_TOP(0x0))) {
    *(*(undefined1 * PTR32 *)&gen_args[1]) = uVar1;
    *((undefined4 *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 0xc))) = 0;
    uVar2 = F_004296a0(0x28,0,800);
    *((uint *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8))) = uVar2;
    *((uint *)GEN_TOP(uVar2)) = uVar2;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8))) + 4))) = *((int *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8))) + 8))) = *((int *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8))) + 0x24))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8))) + 0x25))) = 1;
    F_00750b30((*(undefined1 * PTR32 *)&gen_args[1]) + 4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  }
  F_0074a1e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined1 * PTR32 *)&gen_args[2]),*(*(undefined4 * PTR32 *)(gen_frame + 0x4)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar3 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),0x28,800);
  return (uint)uVar3;
}

/* ref: FUN_0075a150 */
GEN_OWN GEN_FRAME unsigned int F_0075a150(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x75a150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00758c40(param_2,param_3);
  return;
}

/* ref: FUN_0075a170 */
GEN_OWN_GS GEN_FRAME uint F_0075a170(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x75a170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x84, 12, 4);
  ulonglong uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80));
  (*(undefined4 *)(gen_frame + 0x4)) = *param_3;
  F_00757150(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,param_3 + 2);
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = (*(undefined4 *)(gen_frame + 0x4));
    F_00757150(param_2 + 2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  }
  F_007496b0(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*(*(undefined4 * PTR32 *)(gen_frame + 0x6c)),(*(undefined4 * PTR32 *)(gen_frame + 0x6c)));
  uVar1 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x6c)),0x18,800);
  return (uint)uVar1;
}

/* ref: Client::Game::Event::ModuleBase::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0075a1f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x75a1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10ba978));
  F_00757fb0(param_1 + 2 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Event::LuaActorModule::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0075a220(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x75a220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10ba994));
  F_00744fa0(param_1 + 0xb GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(param_1[0xc])),((undefined4 *)GEN_TOP(param_1[0xc])));
  F_00429760(param_1[0xc],0x28,0x322);
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10ba978));
  F_00757fb0(param_1 + 2 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0075a280(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x75a280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_006fd580(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Event::AetheryteEventHandler::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0075a2b0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x75a2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_006fd840(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Event::CompanyLeveOfficerEventHandler::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0075a2e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x75a2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[145])REFP(0x10bae44));
  F_006fd580(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0075a310(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x75a310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_006fdd70(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0075a340(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x75a340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_006fe160(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Event::WarpEventHandler::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0075a370(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x75a370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_006fe4f0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Event::StoryEventHandler::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0075a3a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x75a3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_006fe690(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Event::EventHandlerModule::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0075a3d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x75a3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_006fe800(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Event::LeveDirector::vf145 */
GEN_OWN GEN_NOFRAME byte F_0075a400(void)
{
  GEN_ENTER(0x75a400u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::Event::LeveDirector::vf158 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0075a410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x75a410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf149 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0075a420(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x75a420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x4f0;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf122 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0075a430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x75a430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00ba0c90(this + 0x4f0 GEN_EDX_FWD,param_1,param_2);
  return;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf123 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0075a440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x75a440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00ba0ce0(this + 0x4f0 GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf7 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0075a450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x75a450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 1;
}

/* ref: Client::Game::Event::DirectorModule::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0075a460(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x75a460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_006fe980(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Event::OpeningEventHandler::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0075a490(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x75a490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_006feae0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Event::ExitRangeEventHandler::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0075a4c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x75a4c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[145])REFP(0x10bbc3c));
  F_006fd580(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Event::ChocoboTaxiStandEventHandler::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0075a4f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x75a4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[145])REFP(0x10bbe84));
  F_0042c880(param_1 + 0x76 GEN_EDX_FWD);
  F_006fd580(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Event::Director::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0075a530(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x75a530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_006fed10(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0075a560(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x75a560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_006feea0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0075a590 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0075a590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x75a590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_007596f0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_0075a5c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0075a5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x75a5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * this_00;
  
  if (param_2 != param_3) {
    pvVar2 = ((undefined *)GEN_TOP(F_00757950(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1)));
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (this_00 = pvVar2; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x10)))) {
      F_00750930(this_00 GEN_EDX_ARG);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = pvVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0075a630 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0075a630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x75a630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x10)))) {
      F_00750930(this_00 GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,*((int *)GEN_TOP(((int)this + 8))) - *(int *)this & 0xfffffff0,800);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_0075a680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0075a680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x75a680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  
  uVar2 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 4) < param_1) {
    uVar2 = F_004296a0(param_1 * 0x10,0,800);
    F_00758430(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar2);
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    this_00 = *(undefined * PTR32 *)this;
    uVar3 = (int)pvVar1 - (int)this_00;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x10)))) {
        F_00750930(this_00 GEN_EDX_ARG);
      }
      F_00429760(*(int *)this,*((int *)GEN_TOP(((int)this + 8))) - *(int *)this & 0xfffffff0,800);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = (uVar3 & 0xfffffff0) + uVar2;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x10 + uVar2;
    *(uint *)this = uVar2;
  }
  return uVar2;
}

/* ref: FUN_0075a740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0075a740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x75a740u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(*piVar2))) && (param_3 == piVar2)) {
    F_007596f0(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x21))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x21))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x21)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x21)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x21)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x21)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00759470(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_0075a800 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0075a800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x75a800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00759a40(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

