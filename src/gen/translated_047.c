#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_0066d020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066d020(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66d020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0066d030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066d030(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66d030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::AllocateStorage */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0066d040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66d040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 4,0,0xd2);
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 4 + uVar1;
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: Global::ReleaseStorage */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0066d0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66d0b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Global::ReleaseStorage_0066d100 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0066d100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66d100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_0066d140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066d140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x66d140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined2 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2[1];
  return (uint)this;
}

/* ref: Global::FindEqualRange */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066d160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x66d160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar4 = puVar3;
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x11))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        if ((*((char *)GEN_TOP(((int)puVar3 + 0x11))) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x11))) == '\0');
  }
  if (*((char *)GEN_TOP(((int)puVar3 + 0x11))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar3));
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  if (*((char *)GEN_TOP(((int)puVar1 + 0x11))) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x11))) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_0066d230 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0066d230(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66d230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Global::FindLowerBoundNode */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_0066d240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66d240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x19))) == '\0') {
    puVar1 = puVar2;
    puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar3;
      if (*(ushort *)(puVar2 + 3) < *param_1) {
        puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
        puVar2 = puVar1;
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x19))) == '\0');
  }
  return puVar2;
}

/* ref: Global::IteratorNotEqual_0066d2b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0066d2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66d2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: Global::Initialize_0066d2d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0066d2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66d2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  code * pcVar1;
  int * PTR32 * ppiVar2;
  uint * puVar3;
  uint * puVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  
  (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x2));
  ppiVar2 = &(*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) < 3) {
    ppiVar2 = &(*(int * PTR32 *)(gen_frame + 0x14));
  }
  piVar9 = *ppiVar2;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar9;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[0]) = piVar9;
  if (piVar9 == ((int *)GEN_TOP(0x0))) {
    puVar3 = ((uint *)GEN_TOP(F_00406a50(4)));
  }
  else {
    piVar8 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar8;
    (*(int *)(gen_frame + 0x10)) = *piVar8;
    uVar6 = -(uint)((int)(ZEXT48(piVar9) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar9) * 0x14);
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar8 + 8)));
    puVar3 = ((uint *)GEN_TOP((*pcVar1)(piVar8,-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0x10)));
    piVar9 = (*(int * PTR32 *)&gen_args[0]);
  }
  if (puVar3 == ((uint *)GEN_TOP(0x0))) {
    puVar4 = ((uint *)GEN_TOP(0x0));
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = (uint)piVar9;
    puVar3 = puVar4;
    piVar8 = piVar9;
    while (piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1))), -1 < (int)piVar8) {
      *puVar3 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10abb64));
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3 = puVar3 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
  if (piVar9 != ((int *)GEN_TOP(0x0))) {
    iVar7 = 0;
    piVar8 = piVar9;
    do {
      iVar5 = *((int *)GEN_TOP(((int)this + 4))) + iVar7;
      iVar7 = iVar7 + 0x14;
      piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1)));
      *((undefined4 *)GEN_TOP((iVar5 + 4))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 8))) = 8;
      *((undefined * PTR32 *)GEN_TOP((iVar5 + 0xc))) = this;
      *((undefined4 *)GEN_TOP((iVar5 + 0x10))) = 0;
    } while (piVar8 != ((int *)GEN_TOP(0x0)));
  }
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x78,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar6 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)GEN_TOP(0x0));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x665ba0));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x669a90));
    uVar6 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x0)),0,(int)piVar9 - 1);
  }
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar6;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return 1;
}

/* ref: Global::Finalize_0066d430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066d430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66d430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  piVar5 = ((int *)GEN_TOP(((int)this + 0x1c)));
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *((int *)GEN_TOP(((int)this + 4)));
      *((undefined4 *)GEN_TOP((uVar3 + 0x10 + iVar2))) = 0;
      *((undefined4 *)GEN_TOP((uVar3 + 0xc + iVar2))) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,3);
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: FUN_0066d4e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0066d4e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x66d4e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *((int *)GEN_TOP(((int)param_1 + 8)));
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 0x10 + iVar2)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = param_3;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 100))) = 0;
  if (*((int *)GEN_TOP(((int)param_1 + 0x5c))) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))));
    F_00664e20(param_1 GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_ARG);
  }
  iVar4 = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 - 1) {
    iVar2 = *((int *)GEN_TOP(((int)param_1 + 4)));
    *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar4))) = 8;
    *((undefined4 *)GEN_TOP((iVar2 + 0x10 + iVar4))) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if (param_4 != '\0') {
    piVar5 = ((int *)GEN_TOP(((int)param_1 + 0x1c)));
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = 0;
  }
  return 0;
}

/* ref: FUN_0066d5b0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0066d5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66d5b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x10 + iVar2)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    if (iVar3 != 0) {
      iVar4 = 0;
      do {
        iVar2 = *((int *)GEN_TOP(((int)this + 4)));
        *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar4))) = 8;
        *((undefined4 *)GEN_TOP((iVar2 + 0x10 + iVar4))) = 0;
        iVar4 = iVar4 + 0x14;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
    }
  }
  piVar5 = ((int *)GEN_TOP(((int)this + 0x1c)));
  iVar3 = 0x10;
  do {
    if (*piVar5 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  return 0;
}

/* ref: Global::Initialize_0066d640 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0066d640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66d640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  code * pcVar1;
  int * PTR32 * ppiVar2;
  uint * puVar3;
  uint * puVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  
  (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x2));
  ppiVar2 = &(*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) < 3) {
    ppiVar2 = &(*(int * PTR32 *)(gen_frame + 0x14));
  }
  piVar9 = *ppiVar2;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar9;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[0]) = piVar9;
  if (piVar9 == ((int *)GEN_TOP(0x0))) {
    puVar3 = ((uint *)GEN_TOP(F_00406a50(4)));
  }
  else {
    piVar8 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar8;
    (*(int *)(gen_frame + 0x10)) = *piVar8;
    uVar6 = -(uint)((int)(ZEXT48(piVar9) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar9) * 0x14);
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar8 + 8)));
    puVar3 = ((uint *)GEN_TOP((*pcVar1)(piVar8,-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0x10)));
    piVar9 = (*(int * PTR32 *)&gen_args[0]);
  }
  if (puVar3 == ((uint *)GEN_TOP(0x0))) {
    puVar4 = ((uint *)GEN_TOP(0x0));
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = (uint)piVar9;
    puVar3 = puVar4;
    piVar8 = piVar9;
    while (piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1))), -1 < (int)piVar8) {
      *puVar3 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10abb6c));
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3 = puVar3 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
  if (piVar9 != ((int *)GEN_TOP(0x0))) {
    iVar7 = 0;
    piVar8 = piVar9;
    do {
      iVar5 = *((int *)GEN_TOP(((int)this + 4))) + iVar7;
      iVar7 = iVar7 + 0x14;
      piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1)));
      *((undefined4 *)GEN_TOP((iVar5 + 4))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 8))) = 8;
      *((undefined * PTR32 *)GEN_TOP((iVar5 + 0xc))) = this;
      *((undefined4 *)GEN_TOP((iVar5 + 0x10))) = 0;
    } while (piVar8 != ((int *)GEN_TOP(0x0)));
  }
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x78,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar6 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)GEN_TOP(0x0));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x665bc0));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x669b00));
    uVar6 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x0)),0,(int)piVar9 - 1);
  }
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar6;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return 1;
}

/* ref: Global::SetFlagBit1_0066d7a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066d7a0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66d7a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  
  uVar1 = (uint)(param_2 != '\0') * 2 | *((uint *)GEN_TOP((param_1 + 0xf0))) & 0xfffffffd;
  *((uint *)GEN_TOP((param_1 + 0xf0))) = uVar1;
  return uVar1;
}

/* ref: Global::Finalize_0066d7d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066d7d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66d7d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  piVar5 = ((int *)GEN_TOP(((int)this + 0x1c)));
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *((int *)GEN_TOP(((int)this + 4)));
      *((undefined4 *)GEN_TOP((uVar3 + 0x10 + iVar2))) = 0;
      *((undefined4 *)GEN_TOP((uVar3 + 0xc + iVar2))) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,3);
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: Global::ExecuteJobs */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0066d880(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x66d880u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *((int *)GEN_TOP(((int)param_1 + 8)));
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 0x10 + iVar2)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = param_3;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 100))) = 0;
  if (*((int *)GEN_TOP(((int)param_1 + 0x5c))) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))));
    F_00664ef0(param_1 GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_ARG);
  }
  iVar4 = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 - 1) {
    iVar2 = *((int *)GEN_TOP(((int)param_1 + 4)));
    *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar4))) = 8;
    *((undefined4 *)GEN_TOP((iVar2 + 0x10 + iVar4))) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if (param_4 != '\0') {
    piVar5 = ((int *)GEN_TOP(((int)param_1 + 0x1c)));
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = 0;
  }
  return 0;
}

/* ref: Global::Initialize_0066d950 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0066d950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66d950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  code * pcVar1;
  int * PTR32 * ppiVar2;
  uint * puVar3;
  uint * puVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  
  (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x2));
  ppiVar2 = &(*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) < 3) {
    ppiVar2 = &(*(int * PTR32 *)(gen_frame + 0x14));
  }
  piVar9 = *ppiVar2;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar9;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[0]) = piVar9;
  if (piVar9 == ((int *)GEN_TOP(0x0))) {
    puVar3 = ((uint *)GEN_TOP(F_00406a50(4)));
  }
  else {
    piVar8 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar8;
    (*(int *)(gen_frame + 0x10)) = *piVar8;
    uVar6 = -(uint)((int)(ZEXT48(piVar9) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar9) * 0x14);
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar8 + 8)));
    puVar3 = ((uint *)GEN_TOP((*pcVar1)(piVar8,-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0x10)));
    piVar9 = (*(int * PTR32 *)&gen_args[0]);
  }
  if (puVar3 == ((uint *)GEN_TOP(0x0))) {
    puVar4 = ((uint *)GEN_TOP(0x0));
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = (uint)piVar9;
    puVar3 = puVar4;
    piVar8 = piVar9;
    while (piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1))), -1 < (int)piVar8) {
      *puVar3 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10abb74));
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3 = puVar3 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
  if (piVar9 != ((int *)GEN_TOP(0x0))) {
    iVar7 = 0;
    piVar8 = piVar9;
    do {
      iVar5 = *((int *)GEN_TOP(((int)this + 4))) + iVar7;
      iVar7 = iVar7 + 0x14;
      piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1)));
      *((undefined4 *)GEN_TOP((iVar5 + 4))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 8))) = 0x10;
      *((undefined * PTR32 *)GEN_TOP((iVar5 + 0xc))) = this;
      *((undefined4 *)GEN_TOP((iVar5 + 0x10))) = 0;
    } while (piVar8 != ((int *)GEN_TOP(0x0)));
  }
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x78,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar6 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)GEN_TOP(0x0));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x665be0));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x669b70));
    uVar6 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x0)),0,(int)piVar9 - 1);
  }
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar6;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return 1;
}

/* ref: Global::Finalize_0066dab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066dab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66dab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  piVar5 = ((int *)GEN_TOP(((int)this + 0x1c)));
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *((int *)GEN_TOP(((int)this + 4)));
      *((undefined4 *)GEN_TOP((uVar3 + 0x10 + iVar2))) = 0;
      *((undefined4 *)GEN_TOP((uVar3 + 0xc + iVar2))) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,3);
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: Global::ExecuteJobs_0066db60 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0066db60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x66db60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  
  iVar3 = 0;
  iVar4 = *((int *)GEN_TOP(((int)param_1 + 8)));
  for (iVar5 = iVar4; iVar5 != 0; iVar5 = iVar5 - 1) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 0x10 + iVar3)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 8 + iVar3)));
    }
    iVar3 = iVar3 + 0x14;
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = param_3;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 100))) = 0;
  if (*((int *)GEN_TOP(((int)param_1 + 0x5c))) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))));
    F_00664fc0(param_1 GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = 0;
  iVar5 = 0x10;
  if (iVar4 != 0) {
    iVar3 = 0;
    do {
      iVar2 = *((int *)GEN_TOP(((int)param_1 + 4)));
      *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar3))) = 0x10;
      *((undefined4 *)GEN_TOP((iVar2 + 0x10 + iVar3))) = 0;
      iVar3 = iVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  if (param_4 != '\0') {
    piVar6 = ((int *)GEN_TOP(((int)param_1 + 0x1c)));
    do {
      if (*piVar6 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar6);
        *piVar6 = 0;
      }
      piVar6 = piVar6 + 1;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = 0;
  }
  return 0;
}

/* ref: Global::Initialize_0066dc30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0066dc30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66dc30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  code * pcVar1;
  int * PTR32 * ppiVar2;
  uint * puVar3;
  uint * puVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  
  (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x2));
  ppiVar2 = &(*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) < 3) {
    ppiVar2 = &(*(int * PTR32 *)(gen_frame + 0x14));
  }
  piVar9 = *ppiVar2;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar9;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[0]) = piVar9;
  if (piVar9 == ((int *)GEN_TOP(0x0))) {
    puVar3 = ((uint *)GEN_TOP(F_00406a50(4)));
  }
  else {
    piVar8 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar8;
    (*(int *)(gen_frame + 0x10)) = *piVar8;
    uVar6 = -(uint)((int)(ZEXT48(piVar9) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar9) * 0x14);
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar8 + 8)));
    puVar3 = ((uint *)GEN_TOP((*pcVar1)(piVar8,-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0x10)));
    piVar9 = (*(int * PTR32 *)&gen_args[0]);
  }
  if (puVar3 == ((uint *)GEN_TOP(0x0))) {
    puVar4 = ((uint *)GEN_TOP(0x0));
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = (uint)piVar9;
    puVar3 = puVar4;
    piVar8 = piVar9;
    while (piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1))), -1 < (int)piVar8) {
      *puVar3 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10abb7c));
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3 = puVar3 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
  if (piVar9 != ((int *)GEN_TOP(0x0))) {
    iVar7 = 0;
    piVar8 = piVar9;
    do {
      iVar5 = *((int *)GEN_TOP(((int)this + 4))) + iVar7;
      iVar7 = iVar7 + 0x14;
      piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1)));
      *((undefined4 *)GEN_TOP((iVar5 + 4))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 8))) = 8;
      *((undefined * PTR32 *)GEN_TOP((iVar5 + 0xc))) = this;
      *((undefined4 *)GEN_TOP((iVar5 + 0x10))) = 0;
    } while (piVar8 != ((int *)GEN_TOP(0x0)));
  }
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x78,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar6 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)GEN_TOP(0x0));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x665c00));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x669be0));
    uVar6 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x0)),0,(int)piVar9 - 1);
  }
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar6;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return 1;
}

/* ref: Global::Finalize_0066dd90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066dd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66dd90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  piVar5 = ((int *)GEN_TOP(((int)this + 0x1c)));
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *((int *)GEN_TOP(((int)this + 4)));
      *((undefined4 *)GEN_TOP((uVar3 + 0x10 + iVar2))) = 0;
      *((undefined4 *)GEN_TOP((uVar3 + 0xc + iVar2))) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,3);
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: Global::ExecuteJobs_0066de40 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0066de40(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x66de40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *((int *)GEN_TOP(((int)param_1 + 8)));
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 0x10 + iVar2)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = param_3;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 100))) = 0;
  if (*((int *)GEN_TOP(((int)param_1 + 0x5c))) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))));
    F_00665090(param_1 GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_ARG);
  }
  iVar4 = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 - 1) {
    iVar2 = *((int *)GEN_TOP(((int)param_1 + 4)));
    *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar4))) = 8;
    *((undefined4 *)GEN_TOP((iVar2 + 0x10 + iVar4))) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if (param_4 != '\0') {
    piVar5 = ((int *)GEN_TOP(((int)param_1 + 0x1c)));
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = 0;
  }
  return 0;
}

/* ref: Global::ResetJobs */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0066df10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66df10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x10 + iVar2)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    if (iVar3 != 0) {
      iVar4 = 0;
      do {
        iVar2 = *((int *)GEN_TOP(((int)this + 4)));
        *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar4))) = 8;
        *((undefined4 *)GEN_TOP((iVar2 + 0x10 + iVar4))) = 0;
        iVar4 = iVar4 + 0x14;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
    }
  }
  piVar5 = ((int *)GEN_TOP(((int)this + 0x1c)));
  iVar3 = 0x10;
  do {
    if (*piVar5 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  return 0;
}

/* ref: Global::Initialize_0066dfa0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0066dfa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66dfa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  code * pcVar1;
  int * PTR32 * ppiVar2;
  uint * puVar3;
  uint * puVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  
  (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x2));
  ppiVar2 = &(*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) < 3) {
    ppiVar2 = &(*(int * PTR32 *)(gen_frame + 0x14));
  }
  piVar9 = *ppiVar2;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar9;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[0]) = piVar9;
  if (piVar9 == ((int *)GEN_TOP(0x0))) {
    puVar3 = ((uint *)GEN_TOP(F_00406a50(4)));
  }
  else {
    piVar8 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar8;
    (*(int *)(gen_frame + 0x10)) = *piVar8;
    uVar6 = -(uint)((int)(ZEXT48(piVar9) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar9) * 0x14);
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar8 + 8)));
    puVar3 = ((uint *)GEN_TOP((*pcVar1)(piVar8,-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0x10)));
    piVar9 = (*(int * PTR32 *)&gen_args[0]);
  }
  if (puVar3 == ((uint *)GEN_TOP(0x0))) {
    puVar4 = ((uint *)GEN_TOP(0x0));
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = (uint)piVar9;
    puVar3 = puVar4;
    piVar8 = piVar9;
    while (piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1))), -1 < (int)piVar8) {
      *puVar3 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10abb8c));
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3 = puVar3 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
  if (piVar9 != ((int *)GEN_TOP(0x0))) {
    iVar7 = 0;
    piVar8 = piVar9;
    do {
      iVar5 = *((int *)GEN_TOP(((int)this + 4))) + iVar7;
      iVar7 = iVar7 + 0x14;
      piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1)));
      *((undefined4 *)GEN_TOP((iVar5 + 4))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 8))) = 8;
      *((undefined * PTR32 *)GEN_TOP((iVar5 + 0xc))) = this;
      *((undefined4 *)GEN_TOP((iVar5 + 0x10))) = 0;
    } while (piVar8 != ((int *)GEN_TOP(0x0)));
  }
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x78,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar6 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)GEN_TOP(0x0));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x665c20));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x669c50));
    uVar6 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x0)),0,(int)piVar9 - 1);
  }
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar6;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return 1;
}

/* ref: Global::Finalize_0066e100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066e100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66e100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  piVar5 = ((int *)GEN_TOP(((int)this + 0x1c)));
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *((int *)GEN_TOP(((int)this + 4)));
      *((undefined4 *)GEN_TOP((uVar3 + 0x10 + iVar2))) = 0;
      *((undefined4 *)GEN_TOP((uVar3 + 0xc + iVar2))) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,3);
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: Global::ExecuteJobs_0066e1b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0066e1b0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x66e1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *((int *)GEN_TOP(((int)param_1 + 8)));
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 0x10 + iVar2)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = param_3;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 100))) = 0;
  if (*((int *)GEN_TOP(((int)param_1 + 0x5c))) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))));
    F_00665160(param_1 GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_ARG);
  }
  iVar4 = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 - 1) {
    iVar2 = *((int *)GEN_TOP(((int)param_1 + 4)));
    *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar4))) = 8;
    *((undefined4 *)GEN_TOP((iVar2 + 0x10 + iVar4))) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if (param_4 != '\0') {
    piVar5 = ((int *)GEN_TOP(((int)param_1 + 0x1c)));
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = 0;
  }
  return 0;
}

/* ref: Global::Initialize_0066e280 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0066e280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66e280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  code * pcVar1;
  int * PTR32 * ppiVar2;
  uint * puVar3;
  uint * puVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  
  (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x2));
  ppiVar2 = &(*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) < 3) {
    ppiVar2 = &(*(int * PTR32 *)(gen_frame + 0x14));
  }
  piVar9 = *ppiVar2;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar9;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[0]) = piVar9;
  if (piVar9 == ((int *)GEN_TOP(0x0))) {
    puVar3 = ((uint *)GEN_TOP(F_00406a50(4)));
  }
  else {
    piVar8 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar8;
    (*(int *)(gen_frame + 0x10)) = *piVar8;
    uVar6 = -(uint)((int)(ZEXT48(piVar9) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar9) * 0x14);
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar8 + 8)));
    puVar3 = ((uint *)GEN_TOP((*pcVar1)(piVar8,-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0x10)));
    piVar9 = (*(int * PTR32 *)&gen_args[0]);
  }
  if (puVar3 == ((uint *)GEN_TOP(0x0))) {
    puVar4 = ((uint *)GEN_TOP(0x0));
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = (uint)piVar9;
    puVar3 = puVar4;
    piVar8 = piVar9;
    while (piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1))), -1 < (int)piVar8) {
      *puVar3 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10abb94));
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3 = puVar3 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
  if (piVar9 != ((int *)GEN_TOP(0x0))) {
    iVar7 = 0;
    piVar8 = piVar9;
    do {
      iVar5 = *((int *)GEN_TOP(((int)this + 4))) + iVar7;
      iVar7 = iVar7 + 0x14;
      piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1)));
      *((undefined4 *)GEN_TOP((iVar5 + 4))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 8))) = 8;
      *((undefined * PTR32 *)GEN_TOP((iVar5 + 0xc))) = this;
      *((undefined4 *)GEN_TOP((iVar5 + 0x10))) = 0;
    } while (piVar8 != ((int *)GEN_TOP(0x0)));
  }
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x78,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar6 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)GEN_TOP(0x0));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x665c40));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x669cc0));
    uVar6 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x0)),0,(int)piVar9 - 1);
  }
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar6;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return 1;
}

/* ref: Global::Finalize_0066e3e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066e3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66e3e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  piVar5 = ((int *)GEN_TOP(((int)this + 0x1c)));
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *((int *)GEN_TOP(((int)this + 4)));
      *((undefined4 *)GEN_TOP((uVar3 + 0x10 + iVar2))) = 0;
      *((undefined4 *)GEN_TOP((uVar3 + 0xc + iVar2))) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,3);
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: Global::ExecuteJobs_0066e490 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0066e490(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x66e490u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *((int *)GEN_TOP(((int)param_1 + 8)));
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 0x10 + iVar2)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = param_3;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 100))) = 0;
  if (*((int *)GEN_TOP(((int)param_1 + 0x5c))) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))));
    F_00665230(param_1 GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_ARG);
  }
  iVar4 = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 - 1) {
    iVar2 = *((int *)GEN_TOP(((int)param_1 + 4)));
    *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar4))) = 8;
    *((undefined4 *)GEN_TOP((iVar2 + 0x10 + iVar4))) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if (param_4 != '\0') {
    piVar5 = ((int *)GEN_TOP(((int)param_1 + 0x1c)));
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = 0;
  }
  return 0;
}

/* ref: Global::ResetJobs_0066e560 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0066e560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66e560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x10 + iVar2)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    if (iVar3 != 0) {
      iVar4 = 0;
      do {
        iVar2 = *((int *)GEN_TOP(((int)this + 4)));
        *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar4))) = 8;
        *((undefined4 *)GEN_TOP((iVar2 + 0x10 + iVar4))) = 0;
        iVar4 = iVar4 + 0x14;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
    }
  }
  piVar5 = ((int *)GEN_TOP(((int)this + 0x1c)));
  iVar3 = 0x10;
  do {
    if (*piVar5 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  return 0;
}

/* ref: Global::Initialize_0066e5f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0066e5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66e5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  code * pcVar1;
  int * PTR32 * ppiVar2;
  uint * puVar3;
  uint * puVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  
  (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x2));
  ppiVar2 = &(*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) < 3) {
    ppiVar2 = &(*(int * PTR32 *)(gen_frame + 0x14));
  }
  piVar9 = *ppiVar2;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar9;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[0]) = piVar9;
  if (piVar9 == ((int *)GEN_TOP(0x0))) {
    puVar3 = ((uint *)GEN_TOP(F_00406a50(4)));
  }
  else {
    piVar8 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar8;
    (*(int *)(gen_frame + 0x10)) = *piVar8;
    uVar6 = -(uint)((int)(ZEXT48(piVar9) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar9) * 0x14);
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar8 + 8)));
    puVar3 = ((uint *)GEN_TOP((*pcVar1)(piVar8,-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0x10)));
    piVar9 = (*(int * PTR32 *)&gen_args[0]);
  }
  if (puVar3 == ((uint *)GEN_TOP(0x0))) {
    puVar4 = ((uint *)GEN_TOP(0x0));
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = (uint)piVar9;
    puVar3 = puVar4;
    piVar8 = piVar9;
    while (piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1))), -1 < (int)piVar8) {
      *puVar3 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10abb9c));
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3 = puVar3 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
  if (piVar9 != ((int *)GEN_TOP(0x0))) {
    iVar7 = 0;
    piVar8 = piVar9;
    do {
      iVar5 = *((int *)GEN_TOP(((int)this + 4))) + iVar7;
      iVar7 = iVar7 + 0x14;
      piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1)));
      *((undefined4 *)GEN_TOP((iVar5 + 4))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 8))) = 8;
      *((undefined * PTR32 *)GEN_TOP((iVar5 + 0xc))) = this;
      *((undefined4 *)GEN_TOP((iVar5 + 0x10))) = 0;
    } while (piVar8 != ((int *)GEN_TOP(0x0)));
  }
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x78,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar6 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)GEN_TOP(0x0));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x665c60));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x669d30));
    uVar6 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x0)),0,(int)piVar9 - 1);
  }
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar6;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return 1;
}

/* ref: Global::Finalize_0066e750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066e750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66e750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  piVar5 = ((int *)GEN_TOP(((int)this + 0x1c)));
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *((int *)GEN_TOP(((int)this + 4)));
      *((undefined4 *)GEN_TOP((uVar3 + 0x10 + iVar2))) = 0;
      *((undefined4 *)GEN_TOP((uVar3 + 0xc + iVar2))) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,3);
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: Global::ExecuteJobs_0066e800 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0066e800(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x66e800u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *((int *)GEN_TOP(((int)param_1 + 8)));
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 0x10 + iVar2)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = param_3;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 100))) = 0;
  if (*((int *)GEN_TOP(((int)param_1 + 0x5c))) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))));
    F_00665300(param_1 GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_ARG);
  }
  iVar4 = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 - 1) {
    iVar2 = *((int *)GEN_TOP(((int)param_1 + 4)));
    *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar4))) = 8;
    *((undefined4 *)GEN_TOP((iVar2 + 0x10 + iVar4))) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if (param_4 != '\0') {
    piVar5 = ((int *)GEN_TOP(((int)param_1 + 0x1c)));
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = 0;
  }
  return 0;
}

/* ref: Global::Initialize_0066e8d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0066e8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66e8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  code * pcVar1;
  int * PTR32 * ppiVar2;
  uint * puVar3;
  uint * puVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  
  (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x2));
  ppiVar2 = &(*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) < 3) {
    ppiVar2 = &(*(int * PTR32 *)(gen_frame + 0x14));
  }
  piVar9 = *ppiVar2;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar9;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[0]) = piVar9;
  if (piVar9 == ((int *)GEN_TOP(0x0))) {
    puVar3 = ((uint *)GEN_TOP(F_00406a50(4)));
  }
  else {
    piVar8 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar8;
    (*(int *)(gen_frame + 0x10)) = *piVar8;
    uVar6 = -(uint)((int)(ZEXT48(piVar9) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar9) * 0x14);
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar8 + 8)));
    puVar3 = ((uint *)GEN_TOP((*pcVar1)(piVar8,-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0x10)));
    piVar9 = (*(int * PTR32 *)&gen_args[0]);
  }
  if (puVar3 == ((uint *)GEN_TOP(0x0))) {
    puVar4 = ((uint *)GEN_TOP(0x0));
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = (uint)piVar9;
    puVar3 = puVar4;
    piVar8 = piVar9;
    while (piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1))), -1 < (int)piVar8) {
      *puVar3 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10abb84));
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3 = puVar3 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
  if (piVar9 != ((int *)GEN_TOP(0x0))) {
    iVar7 = 0;
    piVar8 = piVar9;
    do {
      iVar5 = *((int *)GEN_TOP(((int)this + 4))) + iVar7;
      iVar7 = iVar7 + 0x14;
      piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1)));
      *((undefined4 *)GEN_TOP((iVar5 + 4))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 8))) = 8;
      *((undefined * PTR32 *)GEN_TOP((iVar5 + 0xc))) = this;
      *((undefined4 *)GEN_TOP((iVar5 + 0x10))) = 0;
    } while (piVar8 != ((int *)GEN_TOP(0x0)));
  }
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x78,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar6 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)GEN_TOP(0x0));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x665c80));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x669da0));
    uVar6 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x0)),0,(int)piVar9 - 1);
  }
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar6;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return 1;
}

/* ref: Global::Finalize_0066ea40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066ea40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66ea40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  piVar5 = ((int *)GEN_TOP(((int)this + 0x1c)));
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *((int *)GEN_TOP(((int)this + 4)));
      *((undefined4 *)GEN_TOP((uVar3 + 0x10 + iVar2))) = 0;
      *((undefined4 *)GEN_TOP((uVar3 + 0xc + iVar2))) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,3);
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: Global::ExecuteJobs_0066eaf0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0066eaf0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x66eaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *((int *)GEN_TOP(((int)param_1 + 8)));
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 0x10 + iVar2)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = param_3;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 100))) = 0;
  if (*((int *)GEN_TOP(((int)param_1 + 0x5c))) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))));
    F_006653d0(param_1 GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_ARG);
  }
  iVar4 = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 - 1) {
    iVar2 = *((int *)GEN_TOP(((int)param_1 + 4)));
    *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar4))) = 8;
    *((undefined4 *)GEN_TOP((iVar2 + 0x10 + iVar4))) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if (param_4 != '\0') {
    piVar5 = ((int *)GEN_TOP(((int)param_1 + 0x1c)));
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = 0;
  }
  return 0;
}

/* ref: Global::Initialize_0066ebc0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0066ebc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66ebc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  code * pcVar1;
  int * PTR32 * ppiVar2;
  uint * puVar3;
  uint * puVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  
  (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x2));
  ppiVar2 = &(*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) < 3) {
    ppiVar2 = &(*(int * PTR32 *)(gen_frame + 0x14));
  }
  piVar9 = *ppiVar2;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar9;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[0]) = piVar9;
  if (piVar9 == ((int *)GEN_TOP(0x0))) {
    puVar3 = ((uint *)GEN_TOP(F_00406a50(4)));
  }
  else {
    piVar8 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar8;
    (*(int *)(gen_frame + 0x10)) = *piVar8;
    uVar6 = -(uint)((int)(ZEXT48(piVar9) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar9) * 0x14);
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar8 + 8)));
    puVar3 = ((uint *)GEN_TOP((*pcVar1)(piVar8,-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0x10)));
    piVar9 = (*(int * PTR32 *)&gen_args[0]);
  }
  if (puVar3 == ((uint *)GEN_TOP(0x0))) {
    puVar4 = ((uint *)GEN_TOP(0x0));
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = (uint)piVar9;
    puVar3 = puVar4;
    piVar8 = piVar9;
    while (piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1))), -1 < (int)piVar8) {
      *puVar3 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10abbec));
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3 = puVar3 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
  if (piVar9 != ((int *)GEN_TOP(0x0))) {
    iVar7 = 0;
    piVar8 = piVar9;
    do {
      iVar5 = *((int *)GEN_TOP(((int)this + 4))) + iVar7;
      iVar7 = iVar7 + 0x14;
      piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1)));
      *((undefined4 *)GEN_TOP((iVar5 + 4))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 8))) = 0x10;
      *((undefined * PTR32 *)GEN_TOP((iVar5 + 0xc))) = this;
      *((undefined4 *)GEN_TOP((iVar5 + 0x10))) = 0;
    } while (piVar8 != ((int *)GEN_TOP(0x0)));
  }
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x78,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar6 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)GEN_TOP(0x0));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x665ca0));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x669e10));
    uVar6 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x0)),0,(int)piVar9 - 1);
  }
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar6;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return 1;
}

/* ref: Global::Finalize_0066ed20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066ed20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66ed20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  piVar5 = ((int *)GEN_TOP(((int)this + 0x1c)));
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *((int *)GEN_TOP(((int)this + 4)));
      *((undefined4 *)GEN_TOP((uVar3 + 0x10 + iVar2))) = 0;
      *((undefined4 *)GEN_TOP((uVar3 + 0xc + iVar2))) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,3);
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: FUN_0066edd0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0066edd0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x66edd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  
  iVar3 = 0;
  iVar4 = *((int *)GEN_TOP(((int)param_1 + 8)));
  for (iVar5 = iVar4; iVar5 != 0; iVar5 = iVar5 - 1) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 0x10 + iVar3)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 8 + iVar3)));
    }
    iVar3 = iVar3 + 0x14;
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = param_3;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 100))) = 0;
  if (*((int *)GEN_TOP(((int)param_1 + 0x5c))) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))));
    F_006654a0(param_1 GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = 0;
  iVar5 = 0x10;
  if (iVar4 != 0) {
    iVar3 = 0;
    do {
      iVar2 = *((int *)GEN_TOP(((int)param_1 + 4)));
      *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar3))) = 0x10;
      *((undefined4 *)GEN_TOP((iVar2 + 0x10 + iVar3))) = 0;
      iVar3 = iVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  if (param_4 != '\0') {
    piVar6 = ((int *)GEN_TOP(((int)param_1 + 0x1c)));
    do {
      if (*piVar6 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar6);
        *piVar6 = 0;
      }
      piVar6 = piVar6 + 1;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = 0;
  }
  return 0;
}

/* ref: JobQueue_JobSystem_UOffscreenRenderingManager_Render_Graphics_Client::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066eea0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66eea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_2 & 2) != 0) {
    iVar2 = param_1[-1];
    puVar1 = param_1 - 1;
    puVar3 = param_1 + iVar2 * 5;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      puVar3 = puVar3 - 5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abb64));
    }
    if (((param_2 & 1) != 0) && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,puVar1);
    }
    return (uint)puVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abb64));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: JobQueue_JobSystem_VModelRenderer_Render_Graphics_Client::VectorDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066ef10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66ef10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_2 & 2) != 0) {
    iVar2 = param_1[-1];
    puVar1 = param_1 - 1;
    puVar3 = param_1 + iVar2 * 5;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      puVar3 = puVar3 - 5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abb6c));
    }
    if (((param_2 & 1) != 0) && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,puVar1);
    }
    return (uint)puVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abb6c));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: JobQueue_JobSystem_VBGInstancingRenderer_Render_Graphics_Client::VectorDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066ef80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66ef80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_2 & 2) != 0) {
    iVar2 = param_1[-1];
    puVar1 = param_1 - 1;
    puVar3 = param_1 + iVar2 * 5;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      puVar3 = puVar3 - 5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abb74));
    }
    if (((param_2 & 1) != 0) && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,puVar1);
    }
    return (uint)puVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abb74));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: JobQueue_JobSystem_VTerrainRenderer_Render_Graphics_Client::VectorDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066eff0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66eff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_2 & 2) != 0) {
    iVar2 = param_1[-1];
    puVar1 = param_1 - 1;
    puVar3 = param_1 + iVar2 * 5;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      puVar3 = puVar3 - 5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abb7c));
    }
    if (((param_2 & 1) != 0) && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,puVar1);
    }
    return (uint)puVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abb7c));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: JobQueue_JobSystem_VWaterRenderer_Render_Graphics_Client::VectorDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f060(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66f060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_2 & 2) != 0) {
    iVar2 = param_1[-1];
    puVar1 = param_1 - 1;
    puVar3 = param_1 + iVar2 * 5;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      puVar3 = puVar3 - 5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abb8c));
    }
    if (((param_2 & 1) != 0) && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,puVar1);
    }
    return (uint)puVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abb8c));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: JobQueue_JobSystem_VVerticalFogRenderer_Render_Graphics_Client::VectorDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f0d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66f0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_2 & 2) != 0) {
    iVar2 = param_1[-1];
    puVar1 = param_1 - 1;
    puVar3 = param_1 + iVar2 * 5;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      puVar3 = puVar3 - 5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abb94));
    }
    if (((param_2 & 1) != 0) && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,puVar1);
    }
    return (uint)puVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abb94));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: JobQueue_JobSystem_VLightShaftRenderer_Render_Graphics_Client::VectorDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f140(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66f140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_2 & 2) != 0) {
    iVar2 = param_1[-1];
    puVar1 = param_1 - 1;
    puVar3 = param_1 + iVar2 * 5;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      puVar3 = puVar3 - 5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abb9c));
    }
    if (((param_2 & 1) != 0) && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,puVar1);
    }
    return (uint)puVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abb9c));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: JobQueue_JobSystem_VShadowMaskRenderer_Render_Graphics_Client::VectorDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f1b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66f1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_2 & 2) != 0) {
    iVar2 = param_1[-1];
    puVar1 = param_1 - 1;
    puVar3 = param_1 + iVar2 * 5;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      puVar3 = puVar3 - 5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abb84));
    }
    if (((param_2 & 1) != 0) && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,puVar1);
    }
    return (uint)puVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abb84));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: JobQueue_JobSystem_VManager_Render_Graphics_Client::VectorDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f220(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66f220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_2 & 2) != 0) {
    iVar2 = param_1[-1];
    puVar1 = param_1 - 1;
    puVar3 = param_1 + iVar2 * 5;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      puVar3 = puVar3 - 5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abbec));
    }
    if (((param_2 & 1) != 0) && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,puVar1);
    }
    return (uint)puVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abbec));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: Global::FreeArrayStorage */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0066f2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66f2a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: Global::IteratorDifference */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f2e0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66f2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  return *in_ecx - *param_2 >> 3;
}

/* ref: Global::GetBegin_0066f300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f300(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66f300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: Global::GetEnd_0066f310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f310(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66f310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0066f320 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0066f320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66f320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00669900(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0066f330 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0066f330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66f330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00669960(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::PairIteratorBool_0066f340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x66f340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::IteratorAt */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x66f360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: Global::MakeIterator_0066f380 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0066f380(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66f380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0066f390 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0066f390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66f390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00669960(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::IteratorNotEqual_0066f3a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0066f3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66f3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: Global::PairIteratorBool2_0066f3c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x66f3c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::AllocTreeNode */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66f3e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x14,0,0xd3)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_1;
  }
  return (uint)puVar1;
}

/* ref: Global::CountTreeRange */
GEN_OWN GEN_FRAME unsigned int F_0066f430(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x66f430u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  
  if (param_1 != param_2) {
    iVar5 = *param_3;
    piVar4 = param_1;
    do {
      iVar5 = iVar5 + 1;
      *param_3 = iVar5;
      if (*((char *)GEN_TOP(((int)piVar4 + 0x11))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar4[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x11))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
          piVar4 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
            piVar4 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x11)));
          piVar3 = ((int *)GEN_TOP(piVar4[1]));
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar4[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x11)));
            piVar3 = ((int *)GEN_TOP(piVar4[1]));
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return;
}

/* ref: Global::AcquireJobBlock */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66f4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      iVar3 = _InterlockedExchangeAdd((volatile gen_long *)(piVar1), 0);
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0xa00,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  uVar4 = _InterlockedExchange((volatile gen_long *)(puVar2), (gen_long)(uVar5));
  return uVar4;
}

/* ref: Global::AcquireJobBlock_0066f4f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66f4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      iVar3 = _InterlockedExchangeAdd((volatile gen_long *)(piVar1), 0);
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0x1600,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  uVar4 = _InterlockedExchange((volatile gen_long *)(puVar2), (gen_long)(uVar5));
  return uVar4;
}

/* ref: Global::AcquireJobBlock_0066f540 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66f540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      iVar3 = _InterlockedExchangeAdd((volatile gen_long *)(piVar1), 0);
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0x1200,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  uVar4 = _InterlockedExchange((volatile gen_long *)(puVar2), (gen_long)(uVar5));
  return uVar4;
}

/* ref: Global::AcquireJobBlock_0066f590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66f590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      iVar3 = _InterlockedExchangeAdd((volatile gen_long *)(piVar1), 0);
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0x1600,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  uVar4 = _InterlockedExchange((volatile gen_long *)(puVar2), (gen_long)(uVar5));
  return uVar4;
}

/* ref: Global::AcquireJobBlock_0066f5e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66f5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      iVar3 = _InterlockedExchangeAdd((volatile gen_long *)(piVar1), 0);
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0xa00,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  uVar4 = _InterlockedExchange((volatile gen_long *)(puVar2), (gen_long)(uVar5));
  return uVar4;
}

/* ref: Global::AcquireJobBlock_0066f630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66f630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      iVar3 = _InterlockedExchangeAdd((volatile gen_long *)(piVar1), 0);
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0x600,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  uVar4 = _InterlockedExchange((volatile gen_long *)(puVar2), (gen_long)(uVar5));
  return uVar4;
}

/* ref: Global::AcquireJobBlock_0066f680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66f680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      iVar3 = _InterlockedExchangeAdd((volatile gen_long *)(piVar1), 0);
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0xa00,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  uVar4 = _InterlockedExchange((volatile gen_long *)(puVar2), (gen_long)(uVar5));
  return uVar4;
}

/* ref: Global::AcquireJobBlock_0066f6d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66f6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      iVar3 = _InterlockedExchangeAdd((volatile gen_long *)(piVar1), 0);
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0x600,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  uVar4 = _InterlockedExchange((volatile gen_long *)(puVar2), (gen_long)(uVar5));
  return uVar4;
}

/* ref: Global::CopyRange8 */
GEN_OWN GEN_FRAME unsigned int F_0066f720(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66f720u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: JobSystem_UOffscreenRenderingManager_Render_Graphics_Client_UOffscreenRenderingJob::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f750(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66f750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abba4));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: JobSystem_VModelRenderer_Render_Graphics_Client_URenderJob::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f780(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66f780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abbac));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: JobSystem_VBGInstancingRenderer_Render_Graphics_Client_UtagInstancingContainerRenderInfo::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f7b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66f7b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abbb4));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: JobSystem_VTerrainRenderer_Render_Graphics_Client_URenderJob::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f7e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66f7e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abbbc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: JobSystem_VWaterRenderer_Render_Graphics_Client_URenderJob::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f810(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66f810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abbc4));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: JobSystem_VVerticalFogRenderer_Render_Graphics_Client_URenderJob::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f840(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66f840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abbcc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: JobSystem_VLightShaftRenderer_Render_Graphics_Client_URenderJob::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f870(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66f870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abbd4));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: JobSystem_VShadowMaskRenderer_Render_Graphics_Client_URenderJob::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f8a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66f8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abbdc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: JobSystem_VManager_Render_Graphics_Client_UBoneCollectorJob::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066f8d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66f8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abbe4));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0066f900 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0066f900(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66f900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined2 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return (uint)param_1;
}

/* ref: Global::SwapPair_0066f930 */
GEN_OWN GEN_FRAME uint F_0066f930(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66f930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
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

/* ref: Global::MakeHeapByFloatKey */
GEN_OWN GEN_FRAME unsigned int F_0066f960(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x66f960u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = param_2 - param_1 >> 3;
  iVar9 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  if (0 < iVar9) {
    iVar5 = iVar9 * 2 + 2;
    iVar4 = param_1 + iVar9 * 8;
    do {
      uVar1 = *((undefined4 *)GEN_TOP((iVar4 - 8)));
      iVar5 = iVar5 - 2;
      iVar9 = iVar9 - 1;
      fVar2 = *((float *)GEN_TOP((iVar4 - 4)));
      iVar7 = iVar5;
      iVar8 = iVar9;
      while (iVar6 = iVar7, iVar6 < iVar3) {
        if ((float10)*((float *)GEN_TOP((param_1 + 4 + iVar6 * 8))) <
            (float10)*((float *)GEN_TOP((param_1 - 4 + iVar6 * 8)))) {
          iVar6 = iVar6 - 1;
        }
        *((undefined4 *)GEN_TOP((param_1 + iVar8 * 8))) = *((undefined4 *)GEN_TOP((param_1 + iVar6 * 8)));
        *((undefined4 *)GEN_TOP((param_1 + 4 + iVar8 * 8))) = *((undefined4 *)GEN_TOP((param_1 + 4 + iVar6 * 8)));
        iVar8 = iVar6;
        iVar7 = iVar6 * 2 + 2;
      }
      if (iVar6 == iVar3) {
        *((undefined4 *)GEN_TOP((param_1 + iVar8 * 8))) = *((undefined4 *)GEN_TOP((param_1 - 8 + iVar3 * 8)));
        *((undefined4 *)GEN_TOP((param_1 + 4 + iVar8 * 8))) = *((undefined4 *)GEN_TOP((param_1 - 4 + iVar3 * 8)));
        iVar8 = iVar3 - 1;
      }
      if (iVar9 < iVar8) {
        do {
          iVar7 = (iVar8 - 1) / 2;
          if (!((float10)*((float *)GEN_TOP((param_1 + 4 + iVar7 * 8))) < (float10)fVar2)) break;
          *((undefined4 *)GEN_TOP((param_1 + iVar8 * 8))) = *((undefined4 *)GEN_TOP((param_1 + iVar7 * 8)));
          *((undefined4 *)GEN_TOP((param_1 + 4 + iVar8 * 8))) = *((undefined4 *)GEN_TOP((param_1 + 4 + iVar7 * 8)));
          iVar8 = iVar7;
        } while (iVar9 < iVar7);
      }
      *((undefined4 *)GEN_TOP((param_1 + iVar8 * 8))) = uVar1;
      *((float *)GEN_TOP((param_1 + 4 + iVar8 * 8))) = fVar2;
      iVar4 = iVar4 - 8;
    } while (0 < iVar9);
  }
  return 0;
}

/* ref: Global::UninitializedCopyU32_0066fa60 */
GEN_OWN GEN_FRAME unsigned int F_0066fa60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66fa60u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedCopyU32B */
GEN_OWN GEN_FRAME unsigned int F_0066fa90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66fa90u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedCopyU32C */
GEN_OWN GEN_FRAME unsigned int F_0066fac0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66fac0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0066faf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066faf0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66faf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0066fb00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066fb00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66fb00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::UninitializedCopyU32D */
GEN_OWN GEN_FRAME unsigned int F_0066fb10(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66fb10u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedCopyU32E */
GEN_OWN GEN_FRAME unsigned int F_0066fb40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66fb40u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedFillZeroU32_0066fb70 */
GEN_OWN GEN_FRAME unsigned int F_0066fb70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66fb70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::UninitializedCopyU32F */
GEN_OWN GEN_FRAME unsigned int F_0066fba0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66fba0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::Median3ByFloatKey */
GEN_OWN GEN_FRAME unsigned int F_0066fc10(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x66fc10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (((float10)GEN_TOD(gen_bits2f(param_2[1]))) < ((float10)GEN_TOD(gen_bits2f(param_1[1])))) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  if (((float10)GEN_TOD(gen_bits2f(param_3[1]))) < ((float10)GEN_TOD(gen_bits2f(param_2[1])))) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    *param_2 = uVar1;
    param_2[1] = uVar2;
  }
  if (((float10)GEN_TOD(gen_bits2f(param_2[1]))) < ((float10)GEN_TOD(gen_bits2f(param_1[1])))) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  return;
}

/* ref: Global::CopyBackwardPairs */
GEN_OWN GEN_FRAME unsigned int F_0066fc90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66fc90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 8) {
    puVar1[-2] = *((undefined4 *)GEN_TOP((iVar2 - 8)));
    puVar1[-1] = *((undefined4 *)GEN_TOP((iVar2 - 4)));
    puVar1 = puVar1 - 2;
  }
  return 0;
}

/* ref: Global::PopHeapByFloatKey_0066fcc0 */
GEN_OWN GEN_FRAME uint F_0066fcc0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x66fcc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_2 - 4)));
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_2 - 8)));
  *((undefined4 *)GEN_TOP((param_2 - 8))) = *param_1;
  *((undefined4 *)GEN_TOP((param_2 - 4))) = param_1[1];
  uVar1 = F_0066a390(param_1,0,(param_2 - (int)param_1) - 8 >> 3,&(*(undefined4 *)(gen_frame + 0x0)),param_3,param_4);
  return uVar1;
}

/* ref: FUN_0066fd10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0066fd10(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66fd10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Global::TreeBegin_0066fd20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066fd20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66fd20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::TreeEnd_0066fd40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066fd40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66fd40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::IteratorNotEqual_0066fd70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0066fd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66fd70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_0066fda0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066fda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x66fda0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00666840(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0066fdc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066fdc0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66fdc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0066fdd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066fdd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x66fdd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_006668a0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: Global::EraseSubtree_0066fdf0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0066fdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66fdf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x11)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0066fdf0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x14,0xd3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x11)));
  }
  return;
}

/* ref: Global::RotateLeft_0066fe30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066fe30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66fe30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x11))) == '\0') {
    *((int *)GEN_TOP((*piVar2 + 4))) = param_1;
  }
  piVar2[1] = *((int *)GEN_TOP((param_1 + 4)));
  if (param_1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  return (uint)piVar2;
}

/* ref: Global::EraseSubtreeB */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0066fe90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66fe90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x19)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0066fe90(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x1c,0xd2);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x19)));
  }
  return;
}

/* ref: Global::RotateLeftB */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066fed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66fed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x19))) == '\0') {
    *((int *)GEN_TOP((*piVar2 + 4))) = param_1;
  }
  piVar2[1] = *((int *)GEN_TOP((param_1 + 4)));
  if (param_1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  return (uint)piVar2;
}

/* ref: _Uninitialized_move<>_0066ff80 */
GEN_OWN GEN_FRAME unsigned int F_0066ff80(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66ff80u, gen_a0, gen_a1, gen_a2, 0u);
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
    puVar5 = puVar1 + 8;
    puVar3 = puVar2 + 8;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 8; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_0066ffd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066ffd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66ffd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      iVar3 = _InterlockedExchangeAdd((volatile gen_long *)(piVar1), 0);
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0x1200,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  uVar4 = _InterlockedExchange((volatile gen_long *)(puVar2), (gen_long)(uVar5));
  return uVar4;
}

/* ref: Client::Graphics::Render::BoneCollector::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00670060(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x670060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined * pTVar5;
  undefined * pTVar6;
  undefined * this;
  
  if ((param_2 & 2) == 0) {
    *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10abfe4));
    F_004a05c0(param_1 GEN_EDX_FWD);
    pTVar6 = param_1;
    if (param_1 == ((undefined *)GEN_TOP(0xffffffd8))) {
      pTVar6 = ((undefined *)GEN_TOP(0x0));
    }
    iVar1 = *(int *)(pTVar6 + 0x28);
    iVar2 = *(int *)(pTVar6 + 0x2c);
    iVar3 = iVar2;
    if (iVar1 != 0) {
      *((int *)GEN_TOP((iVar1 + 0x2c))) = iVar2;
      iVar3 = *(int *)&REFG(undefined, 0x1487c74);
    }
    *(int *)&REFG(undefined, 0x1487c74) = iVar3;
    if (iVar2 != 0) {
      *((int *)GEN_TOP((iVar2 + 0x28))) = iVar1;
      iVar1 = REFG(int, 0x1487c78);
    }
    REFG(int, 0x1487c78) = iVar1;
    if ((param_2 & 1) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
    }
  }
  else {
    iVar1 = *(int *)(param_1 - 0x10);
    pTVar6 = param_1 - 0x10;
    pTVar5 = param_1 + iVar1 * 0x90;
    iVar2 = REFG(int, 0x1487c78);
    while (REFG(int, 0x1487c78) = iVar2, iVar1 = iVar1 - 1, -1 < iVar1) {
      this = pTVar5 - 0x90;
      *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10abfe4));
      F_004a05c0(this GEN_EDX_ARG);
      if (pTVar5 == ((undefined *)GEN_TOP(0x68))) {
        pTVar5 = ((undefined *)GEN_TOP(0x0));
      }
      else {
        pTVar5 = pTVar5 - 0x90;
      }
      iVar2 = *(int *)(pTVar5 + 0x28);
      iVar3 = *(int *)(pTVar5 + 0x2c);
      iVar4 = iVar3;
      if (iVar2 != 0) {
        *((int *)GEN_TOP((iVar2 + 0x2c))) = iVar3;
        iVar4 = *(int *)&REFG(undefined, 0x1487c74);
      }
      *(int *)&REFG(undefined, 0x1487c74) = iVar4;
      pTVar5 = this;
      if (iVar3 != 0) {
        *((int *)GEN_TOP((iVar3 + 0x28))) = iVar2;
        iVar2 = REFG(int, 0x1487c78);
      }
    }
    param_1 = pTVar6;
    if (((param_2 & 1) != 0) && (pTVar6 != ((undefined *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,pTVar6);
      return (uint)pTVar6;
    }
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::RendererUtility::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00670160(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x670160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00662be0((undefined *)(param_1 + 0x1c) GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abb3c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_006701e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006701e0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_v16 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6701e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar11;
  undefined1 in_XMM2 [16] = {0};
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar12;
  float fVar13;
  undefined1 in_XMM3 [16] = {0};
  
  memcpy(&(auVar10), &(*param_2), sizeof(*param_2) < sizeof(auVar10) ? sizeof(*param_2) : sizeof(auVar10));
  gen_rcpps(&(auVar9), &(in_XMM2), &(auVar10));
  fVar1 = (*(float *)&REFG(undefined, 0x10ab950) - (*(float *)((char *)&auVar10 + 0)) * (*(float *)((char *)&auVar9 + 0))) * (*(float *)((char *)&auVar9 + 0));
  fVar3 = (*(float *)&REFG(undefined, 0x10ab954) - (*(float *)((char *)&auVar10 + 4)) * (*(float *)((char *)&auVar9 + 4))) * (*(float *)((char *)&auVar9 + 4));
  fVar5 = (*(float *)&REFG(undefined, 0x10ab958) - (*(float *)((char *)&auVar10 + 8)) * (*(float *)((char *)&auVar9 + 8))) * (*(float *)((char *)&auVar9 + 8));
  fVar7 = (*(float *)&REFG(undefined, 0x10ab95c) - (*(float *)((char *)&auVar10 + 12)) * (*(float *)((char *)&auVar9 + 12))) * (*(float *)((char *)&auVar9 + 12));
  *in_ecx = *in_ecx * fVar1;
  in_ecx[1] = in_ecx[1] * fVar3;
  in_ecx[2] = in_ecx[2] * fVar5;
  in_ecx[3] = in_ecx[3] * fVar7;
  in_ecx[8] = in_ecx[8] * fVar1;
  in_ecx[9] = in_ecx[9] * fVar3;
  in_ecx[10] = in_ecx[10] * fVar5;
  in_ecx[0xb] = in_ecx[0xb] * fVar7;
  fVar1 = in_ecx[4];
  fVar3 = in_ecx[5];
  fVar5 = in_ecx[6];
  fVar7 = in_ecx[7];
  fVar2 = fVar5 * fVar5 + fVar1 * fVar1;
  fVar4 = fVar7 * fVar7 + fVar3 * fVar3;
  fVar6 = fVar1 * fVar1 + fVar5 * fVar5;
  fVar8 = fVar3 * fVar3 + fVar7 * fVar7;
  (*(float *)((char *)&auVar10 + 0)) = fVar4 + fVar2;
  (*(float *)((char *)&auVar10 + 4)) = fVar2 + fVar4;
  (*(float *)((char *)&auVar10 + 8)) = fVar8 + fVar6;
  (*(float *)((char *)&auVar10 + 12)) = fVar6 + fVar8;
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar10));
  fVar13 = (*(float *)((char *)&auVar9 + 0));
  fVar8 = (*(float *)((char *)&auVar9 + 4));
  fVar11 = (*(float *)((char *)&auVar9 + 8));
  fVar12 = (*(float *)((char *)&auVar9 + 12));
  fVar2 = *(float *)&REFG(undefined, 0x10ab964) - (fVar8 * (*(float *)((char *)&auVar10 + 4))) * fVar8;
  fVar4 = *(float *)&REFG(undefined, 0x10ab968) - (fVar11 * (*(float *)((char *)&auVar10 + 8))) * fVar11;
  fVar6 = *(float *)&REFG(undefined, 0x10ab96c) - (fVar12 * (*(float *)((char *)&auVar10 + 12))) * fVar12;
  fVar8 = *(float *)&REFG(undefined, 0x10ab974) * fVar8;
  fVar11 = *(float *)&REFG(undefined, 0x10ab978) * fVar11;
  fVar12 = *(float *)&REFG(undefined, 0x10ab97c) * fVar12;
  in_ecx[4] = fVar1 * ((*(float *)&REFG(undefined, 0x10ab960) - (fVar13 * (*(float *)((char *)&auVar10 + 0))) * fVar13) *
                      (*(float *)&REFG(undefined, 0x10ab970) * fVar13));
  in_ecx[5] = fVar3 * (fVar2 * fVar8);
  in_ecx[6] = fVar5 * (fVar4 * fVar11);
  in_ecx[7] = fVar7 * (fVar6 * fVar12);
  return 0;
}

/* ref: Client::Graphics::Render::WeatherRenderer::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00670320(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x670320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[3] = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::StarRenderer::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00670350(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x670350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x17] = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Global::GetBoneWorldMatrix */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00670380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x670380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL(0x50, 0);
  float fVar1;
  int * piVar2;
  float * pfVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  
  (*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40);
  if (((param_2 < (*((uint *)GEN_TOP(((int)this + 4))) >> 6 & 0xfff)) && (param_2 != 0xffffffff)) &&
     (*((int *)GEN_TOP(((int)this + 0xbc))) != 0)) {
    F_006614e0(&(*(float *)(gen_frame + 0x0)),*((int *)GEN_TOP(((int)this + 0xcc))) + 0x10);
    piVar2 = ((int *)GEN_TOP(F_00d321b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xbc))) GEN_EDX_ARG)));
    pfVar3 = ((float *)GEN_TOP((param_2 * 0x30 + *piVar2)));
    fVar24 = (*(float *)(gen_frame + 0x20)) * *pfVar3;
    fVar25 = (*(float *)(gen_frame + 0x24)) * pfVar3[1];
    fVar26 = (*(float *)(gen_frame + 0x28)) * pfVar3[2];
    fVar27 = (*(float *)(gen_frame + 0x2c)) * pfVar3[3];
    fVar10 = (*(float *)(gen_frame + 0x10)) * fVar24;
    fVar16 = (*(float *)(gen_frame + 0x14)) * fVar25;
    fVar18 = (*(float *)(gen_frame + 0x18)) * fVar26;
    fVar20 = (((fVar16 + fVar10) + fVar18) * (*(float *)(gen_frame + 0x10)) +
             ((*(float *)(gen_frame + 0x1c)) * (*(float *)(gen_frame + 0x1c)) + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
             fVar24) + (fVar26 * (*(float *)(gen_frame + 0x14)) - fVar25 * (*(float *)(gen_frame + 0x18))) * (*(float *)(gen_frame + 0x1c));
    fVar21 = (((fVar16 + fVar10) + fVar18) * (*(float *)(gen_frame + 0x14)) +
             ((*(float *)(gen_frame + 0x1c)) * (*(float *)(gen_frame + 0x1c)) + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
             fVar25) + (fVar24 * (*(float *)(gen_frame + 0x18)) - fVar26 * (*(float *)(gen_frame + 0x10))) * (*(float *)(gen_frame + 0x1c));
    fVar22 = (((fVar16 + fVar10) + fVar18) * (*(float *)(gen_frame + 0x18)) +
             ((*(float *)(gen_frame + 0x1c)) * (*(float *)(gen_frame + 0x1c)) + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
             fVar26) + (fVar25 * (*(float *)(gen_frame + 0x10)) - fVar24 * (*(float *)(gen_frame + 0x14))) * (*(float *)(gen_frame + 0x1c));
    fVar23 = (((fVar16 + fVar10) + fVar18) * (*(float *)(gen_frame + 0x1c)) +
             ((*(float *)(gen_frame + 0x1c)) * (*(float *)(gen_frame + 0x1c)) + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
             fVar27) + (fVar27 * (*(float *)(gen_frame + 0x1c)) - fVar27 * (*(float *)(gen_frame + 0x1c))) * (*(float *)(gen_frame + 0x1c));
    fVar10 = pfVar3[4];
    fVar16 = pfVar3[5];
    fVar18 = pfVar3[6];
    fVar24 = pfVar3[7];
    fVar7 = (*(float *)(gen_frame + 0x10)) * fVar10;
    fVar8 = (*(float *)(gen_frame + 0x14)) * fVar16;
    fVar9 = (*(float *)(gen_frame + 0x18)) * fVar18;
    fVar25 = pfVar3[8];
    fVar26 = pfVar3[9];
    fVar27 = pfVar3[10];
    fVar1 = pfVar3[0xb];
    fVar11 = ((fVar18 * (*(float *)(gen_frame + 0x14)) - fVar16 * (*(float *)(gen_frame + 0x18))) + (*(float *)(gen_frame + 0x1c)) * fVar10) + (*(float *)(gen_frame + 0x10)) * fVar24;
    fVar17 = ((fVar10 * (*(float *)(gen_frame + 0x18)) - fVar18 * (*(float *)(gen_frame + 0x10))) + (*(float *)(gen_frame + 0x1c)) * fVar16) + (*(float *)(gen_frame + 0x14)) * fVar24;
    fVar19 = ((fVar16 * (*(float *)(gen_frame + 0x10)) - fVar10 * (*(float *)(gen_frame + 0x14))) + (*(float *)(gen_frame + 0x1c)) * fVar18) + (*(float *)(gen_frame + 0x18)) * fVar24;
    (*(float *)((char *)&auVar28 + 0)) = fVar24 * (*(float *)(gen_frame + 0x1c)) - ((fVar8 + fVar7) + fVar9);
    (*(float *)((char *)&auVar28 + 4)) = fVar24 * (*(float *)(gen_frame + 0x1c)) - ((fVar8 + fVar7) + fVar9);
    (*(float *)((char *)&auVar28 + 8)) = fVar24 * (*(float *)(gen_frame + 0x1c)) - ((fVar8 + fVar7) + fVar9);
    (*(float *)((char *)&auVar28 + 12)) = fVar24 * (*(float *)(gen_frame + 0x1c)) - ((fVar8 + fVar7) + fVar9);
    (*(undefined4 *)((char *)&auVar12 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar28 + 8)));
    (*(undefined4 *)((char *)&auVar12 + 0)) = (undefined4)gen_fl2bits(fVar19);
    (*(undefined4 *)((char *)&auVar12 + 8)) =
         (undefined4)
         gen_fl2bits(((fVar24 * (*(float *)(gen_frame + 0x1c)) - fVar24 * (*(float *)(gen_frame + 0x1c))) + (*(float *)(gen_frame + 0x1c)) * fVar24) +
                     (*(float *)(gen_frame + 0x1c)) * fVar24);
    (*(undefined4 *)((char *)&auVar12 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar28 + 12)));
    gen_rcpps(&(auVar13), &(auVar12), &(*(gen_v16 *)&REFG(float, 0x1138af0)));
    fVar10 = (*(float *)&REFG(undefined, 0x10ab950) - (*(float *)((char *)&auVar13 + 0)) * (float)REFG(float, 0x1138af0)) * (*(float *)((char *)&auVar13 + 0));
    fVar16 = (*(float *)&REFG(undefined, 0x10ab954) - (*(float *)((char *)&auVar13 + 4)) * (*(float *)((char *)&REFG(float, 0x1138af0) + 4))) * (*(float *)((char *)&auVar13 + 4));
    fVar18 = (*(float *)&REFG(undefined, 0x10ab958) - (*(float *)((char *)&auVar13 + 8)) * (*(float *)((char *)&REFG(float, 0x1138af0) + 8))) * (*(float *)((char *)&auVar13 + 8));
    fVar24 = (*(float *)&REFG(undefined, 0x10ab95c) - (*(float *)((char *)&auVar13 + 12)) * (*(float *)((char *)&REFG(float, 0x1138af0) + 12))) * (*(float *)((char *)&auVar13 + 12));
    (*(float *)(gen_frame + 0x0)) = fVar10 * ((fVar20 + fVar20) + (*(float *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x4)) = fVar16 * ((fVar21 + fVar21) + (*(float *)(gen_frame + 0x4)));
    (*(float *)(gen_frame + 0x8)) = fVar18 * ((fVar22 + fVar22) + (*(float *)(gen_frame + 0x8)));
    (*(float *)(gen_frame + 0xc)) = fVar24 * ((fVar23 + fVar23) + (*(float *)(gen_frame + 0xc)));
    (*(float *)(gen_frame + 0x20)) = fVar10 * (fVar25 * (*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x24)) = fVar16 * (fVar26 * (*(float *)(gen_frame + 0x24)));
    (*(float *)(gen_frame + 0x28)) = fVar18 * (fVar27 * (*(float *)(gen_frame + 0x28)));
    (*(float *)(gen_frame + 0x2c)) = fVar24 * (fVar1 * (*(float *)(gen_frame + 0x2c)));
    fVar10 = fVar19 * fVar19 + fVar11 * fVar11;
    fVar16 = (*(float *)((char *)&auVar28 + 12)) * (*(float *)((char *)&auVar28 + 12)) + fVar17 * fVar17;
    fVar18 = fVar11 * fVar11 + fVar19 * fVar19;
    fVar24 = fVar17 * fVar17 + (*(float *)((char *)&auVar28 + 12)) * (*(float *)((char *)&auVar28 + 12));
    (*(float *)((char *)&auVar14 + 0)) = fVar16 + fVar10;
    (*(float *)((char *)&auVar14 + 4)) = fVar10 + fVar16;
    (*(float *)((char *)&auVar14 + 8)) = fVar24 + fVar18;
    (*(float *)((char *)&auVar14 + 12)) = fVar18 + fVar24;
    gen_rsqrtps(&(auVar13), &(auVar28), &(auVar14));
    fVar10 = (*(float *)((char *)&auVar13 + 0));
    fVar16 = (*(float *)((char *)&auVar13 + 4));
    fVar18 = (*(float *)((char *)&auVar13 + 8));
    fVar24 = (*(float *)((char *)&auVar13 + 12));
    fVar11 = ((*(float *)&REFG(undefined, 0x10ab960) - (fVar10 * (*(float *)((char *)&auVar14 + 0))) * fVar10) *
             (*(float *)&REFG(undefined, 0x10ab970) * fVar10)) * fVar11;
    fVar17 = ((*(float *)&REFG(undefined, 0x10ab964) - (fVar16 * (*(float *)((char *)&auVar14 + 4))) * fVar16) *
             (*(float *)&REFG(undefined, 0x10ab974) * fVar16)) * fVar17;
    fVar19 = ((*(float *)&REFG(undefined, 0x10ab968) - (fVar18 * (*(float *)((char *)&auVar14 + 8))) * fVar18) *
             (*(float *)&REFG(undefined, 0x10ab978) * fVar18)) * fVar19;
    fVar10 = ((*(float *)&REFG(undefined, 0x10ab96c) - (fVar24 * (*(float *)((char *)&auVar14 + 12))) * fVar24) *
             (*(float *)&REFG(undefined, 0x10ab97c) * fVar24)) * (*(float *)((char *)&auVar28 + 12));
    (*(float *)((char *)&auVar15 + 0)) = fVar19 * fVar19 + fVar11 * fVar11;
    (*(float *)((char *)&auVar15 + 4)) = fVar10 * fVar10 + fVar17 * fVar17;
    (*(float *)((char *)&auVar15 + 8)) = fVar11 * fVar11 + fVar19 * fVar19;
    (*(float *)((char *)&auVar15 + 12)) = fVar17 * fVar17 + fVar10 * fVar10;
    (*(undefined4 *)((char *)&auVar13 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar15 + 0)) + (*(float *)((char *)&auVar15 + 4)));
    (*(undefined4 *)((char *)&auVar13 + 0)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar15 + 4)) + (*(float *)((char *)&auVar15 + 0)));
    (*(undefined4 *)((char *)&auVar13 + 8)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar15 + 12)) + (*(float *)((char *)&auVar15 + 8)));
    (*(undefined4 *)((char *)&auVar13 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar15 + 8)) + (*(float *)((char *)&auVar15 + 12)));
    gen_rsqrtps(&(auVar13), &(auVar15), &(auVar13));
    fVar16 = (*(float *)((char *)&auVar13 + 0));
    fVar18 = (*(float *)((char *)&auVar13 + 4));
    fVar24 = (*(float *)((char *)&auVar13 + 8));
    fVar25 = (*(float *)((char *)&auVar13 + 12));
    (*(float *)(gen_frame + 0x10)) = ((*(float *)&REFG(undefined, 0x10ab960) - (fVar16 * ((*(float *)((char *)&auVar15 + 4)) + (*(float *)((char *)&auVar15 + 0)))) * fVar16) *
               (*(float *)&REFG(undefined, 0x10ab970) * fVar16)) * fVar11;
    (*(float *)(gen_frame + 0x14)) = ((*(float *)&REFG(undefined, 0x10ab964) - (fVar18 * ((*(float *)((char *)&auVar15 + 0)) + (*(float *)((char *)&auVar15 + 4)))) * fVar18) *
                (*(float *)&REFG(undefined, 0x10ab974) * fVar18)) * fVar17;
    (*(float *)(gen_frame + 0x18)) = ((*(float *)&REFG(undefined, 0x10ab968) - (fVar24 * ((*(float *)((char *)&auVar15 + 12)) + (*(float *)((char *)&auVar15 + 8)))) * fVar24)
                * (*(float *)&REFG(undefined, 0x10ab978) * fVar24)) * fVar19;
    (*(float *)(gen_frame + 0x1c)) = ((*(float *)&REFG(undefined, 0x10ab96c) - (fVar25 * ((*(float *)((char *)&auVar15 + 8)) + (*(float *)((char *)&auVar15 + 12)))) * fVar25)
                * (*(float *)&REFG(undefined, 0x10ab97c) * fVar25)) * fVar10;
    F_00d93970(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  }
  else {
    puVar5 = &REFG(float, 0x1302d00);
    puVar6 = param_1;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  return (uint)param_1;
}

/* ref: Global::GetBoneMatrix_006705e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006705e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6705e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL(0x90, 0);
  undefined * this_00;
  float fVar1;
  int * piVar2;
  float * pfVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  float fVar7;
  float fVar8;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  if ((param_2 < (*((uint *)GEN_TOP(((int)this + 4))) >> 6 & 0xfff)) && (param_2 != 0xffffffff)) {
    iVar4 = *((int *)GEN_TOP(((int)this + 0xcc)));
    fVar7 = *((float *)GEN_TOP((iVar4 + 0x14)));
    fVar13 = *((float *)GEN_TOP((iVar4 + 0x18)));
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xbc)));
    (*(float *)(gen_frame + 0x40)) = *((float *)GEN_TOP((iVar4 + 0x10)));
    (*(float *)(gen_frame + 0x44)) = fVar7;
    (*(float *)(gen_frame + 0x48)) = fVar13;
    (*(float *)(gen_frame + 0x4c)) = 0.0;
    (*(undefined8 *)(gen_frame + 0x50)) = *((undefined8 *)GEN_TOP((iVar4 + 0x20)));
    (*(float *)(gen_frame + 0x58)) = *((float *)GEN_TOP((iVar4 + 0x28)));
    (*(float *)(gen_frame + 0x5c)) = *((float *)GEN_TOP((iVar4 + 0x2c)));
    (*(float *)(gen_frame + 0x60)) = *((float *)GEN_TOP((iVar4 + 0x30)));
    (*(float *)(gen_frame + 0x64)) = *((float *)GEN_TOP((iVar4 + 0x34)));
    (*(float *)(gen_frame + 0x68)) = *((float *)GEN_TOP((iVar4 + 0x38)));
    (*(float *)(gen_frame + 0x6c)) = 0.0;
    piVar2 = ((int *)GEN_TOP(F_00d321b0(this_00 GEN_EDX_FWD)));
    pfVar3 = ((float *)GEN_TOP((param_2 * 0x30 + *piVar2)));
    fVar21 = (*(float *)(gen_frame + 0x60)) * *pfVar3;
    fVar22 = (*(float *)(gen_frame + 0x64)) * pfVar3[1];
    fVar23 = (*(float *)(gen_frame + 0x68)) * pfVar3[2];
    fVar24 = (*(float *)(gen_frame + 0x6c)) * pfVar3[3];
    fVar7 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) * fVar21;
    fVar13 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) * fVar22;
    fVar15 = (*(float *)(gen_frame + 0x58)) * fVar23;
    fVar17 = (((fVar13 + fVar7) + fVar15) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) +
             ((*(float *)(gen_frame + 0x5c)) * (*(float *)(gen_frame + 0x5c)) + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
             fVar21) + (fVar23 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) - fVar22 * (*(float *)(gen_frame + 0x58))) * (*(float *)(gen_frame + 0x5c));
    fVar18 = (((fVar13 + fVar7) + fVar15) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) +
             ((*(float *)(gen_frame + 0x5c)) * (*(float *)(gen_frame + 0x5c)) + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
             fVar22) + (fVar21 * (*(float *)(gen_frame + 0x58)) - fVar23 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0))) * (*(float *)(gen_frame + 0x5c));
    fVar19 = (((fVar13 + fVar7) + fVar15) * (*(float *)(gen_frame + 0x58)) +
             ((*(float *)(gen_frame + 0x5c)) * (*(float *)(gen_frame + 0x5c)) + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
             fVar23) + (fVar22 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) - fVar21 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4))) * (*(float *)(gen_frame + 0x5c));
    fVar20 = (((fVar13 + fVar7) + fVar15) * (*(float *)(gen_frame + 0x5c)) +
             ((*(float *)(gen_frame + 0x5c)) * (*(float *)(gen_frame + 0x5c)) + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
             fVar24) + (fVar24 * (*(float *)(gen_frame + 0x5c)) - fVar24 * (*(float *)(gen_frame + 0x5c))) * (*(float *)(gen_frame + 0x5c));
    fVar7 = pfVar3[4];
    fVar13 = pfVar3[5];
    fVar15 = pfVar3[6];
    fVar21 = pfVar3[7];
    fVar8 = ((fVar15 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) - fVar13 * (*(float *)(gen_frame + 0x58))) + (*(float *)(gen_frame + 0x5c)) * fVar7) +
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) * fVar21;
    fVar14 = ((fVar7 * (*(float *)(gen_frame + 0x58)) - fVar15 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0))) + (*(float *)(gen_frame + 0x5c)) * fVar13) +
             (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) * fVar21;
    fVar16 = ((fVar13 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) - fVar7 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4))) + (*(float *)(gen_frame + 0x5c)) * fVar15) +
             (*(float *)(gen_frame + 0x58)) * fVar21;
    fVar7 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) * fVar7;
    fVar13 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) * fVar13;
    fVar15 = (*(float *)(gen_frame + 0x58)) * fVar15;
    fVar22 = pfVar3[8];
    fVar23 = pfVar3[9];
    fVar24 = pfVar3[10];
    fVar1 = pfVar3[0xb];
    (*(float *)((char *)&auVar25 + 0)) = fVar21 * (*(float *)(gen_frame + 0x5c)) - ((fVar13 + fVar7) + fVar15);
    (*(float *)((char *)&auVar25 + 4)) = fVar21 * (*(float *)(gen_frame + 0x5c)) - ((fVar13 + fVar7) + fVar15);
    (*(float *)((char *)&auVar25 + 8)) = fVar21 * (*(float *)(gen_frame + 0x5c)) - ((fVar13 + fVar7) + fVar15);
    (*(float *)((char *)&auVar25 + 12)) = fVar21 * (*(float *)(gen_frame + 0x5c)) - ((fVar13 + fVar7) + fVar15);
    (*(undefined4 *)((char *)&auVar9 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar25 + 8)));
    (*(undefined4 *)((char *)&auVar9 + 0)) = (undefined4)gen_fl2bits(fVar16);
    (*(undefined4 *)((char *)&auVar9 + 8)) = (undefined4)
                   gen_fl2bits(((fVar21 * (*(float *)(gen_frame + 0x5c)) - fVar21 * (*(float *)(gen_frame + 0x5c))) + (*(float *)(gen_frame + 0x5c)) * fVar21) +
                               (*(float *)(gen_frame + 0x5c)) * fVar21);
    (*(undefined4 *)((char *)&auVar9 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar25 + 12)));
    gen_rcpps(&(auVar10), &(auVar9), &(*(gen_v16 *)&REFG(float, 0x1138af0)));
    fVar7 = (*(float *)&REFG(undefined, 0x10ab950) - (*(float *)((char *)&auVar10 + 0)) * (float)REFG(float, 0x1138af0)) * (*(float *)((char *)&auVar10 + 0));
    fVar13 = (*(float *)&REFG(undefined, 0x10ab954) - (*(float *)((char *)&auVar10 + 4)) * (*(float *)((char *)&REFG(float, 0x1138af0) + 4))) * (*(float *)((char *)&auVar10 + 4));
    fVar15 = (*(float *)&REFG(undefined, 0x10ab958) - (*(float *)((char *)&auVar10 + 8)) * (*(float *)((char *)&REFG(float, 0x1138af0) + 8))) * (*(float *)((char *)&auVar10 + 8));
    fVar21 = (*(float *)&REFG(undefined, 0x10ab95c) - (*(float *)((char *)&auVar10 + 12)) * (*(float *)((char *)&REFG(float, 0x1138af0) + 12))) * (*(float *)((char *)&auVar10 + 12));
    (*(float *)(gen_frame + 0x40)) = fVar7 * ((fVar17 + fVar17) + (*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x44)) = fVar13 * ((fVar18 + fVar18) + (*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x48)) = fVar15 * ((fVar19 + fVar19) + (*(float *)(gen_frame + 0x48)));
    (*(float *)(gen_frame + 0x4c)) = fVar21 * ((fVar20 + fVar20) + (*(float *)(gen_frame + 0x4c)));
    (*(float *)(gen_frame + 0x60)) = fVar7 * (fVar22 * (*(float *)(gen_frame + 0x60)));
    (*(float *)(gen_frame + 0x64)) = fVar13 * (fVar23 * (*(float *)(gen_frame + 0x64)));
    (*(float *)(gen_frame + 0x68)) = fVar15 * (fVar24 * (*(float *)(gen_frame + 0x68)));
    (*(float *)(gen_frame + 0x6c)) = fVar21 * (fVar1 * (*(float *)(gen_frame + 0x6c)));
    fVar7 = fVar16 * fVar16 + fVar8 * fVar8;
    fVar13 = (*(float *)((char *)&auVar25 + 12)) * (*(float *)((char *)&auVar25 + 12)) + fVar14 * fVar14;
    fVar15 = fVar8 * fVar8 + fVar16 * fVar16;
    fVar21 = fVar14 * fVar14 + (*(float *)((char *)&auVar25 + 12)) * (*(float *)((char *)&auVar25 + 12));
    (*(float *)((char *)&auVar11 + 0)) = fVar13 + fVar7;
    (*(float *)((char *)&auVar11 + 4)) = fVar7 + fVar13;
    (*(float *)((char *)&auVar11 + 8)) = fVar21 + fVar15;
    (*(float *)((char *)&auVar11 + 12)) = fVar15 + fVar21;
    gen_rsqrtps(&(auVar10), &(auVar25), &(auVar11));
    fVar7 = (*(float *)((char *)&auVar10 + 0));
    fVar13 = (*(float *)((char *)&auVar10 + 4));
    fVar15 = (*(float *)((char *)&auVar10 + 8));
    fVar21 = (*(float *)((char *)&auVar10 + 12));
    fVar8 = ((*(float *)&REFG(undefined, 0x10ab960) - (fVar7 * (*(float *)((char *)&auVar11 + 0))) * fVar7) * (*(float *)&REFG(undefined, 0x10ab970) * fVar7)) * fVar8;
    fVar14 = ((*(float *)&REFG(undefined, 0x10ab964) - (fVar13 * (*(float *)((char *)&auVar11 + 4))) * fVar13) * (*(float *)&REFG(undefined, 0x10ab974) * fVar13)) * fVar14;
    fVar16 = ((*(float *)&REFG(undefined, 0x10ab968) - (fVar15 * (*(float *)((char *)&auVar11 + 8))) * fVar15) * (*(float *)&REFG(undefined, 0x10ab978) * fVar15)) * fVar16;
    fVar7 = ((*(float *)&REFG(undefined, 0x10ab96c) - (fVar21 * (*(float *)((char *)&auVar11 + 12))) * fVar21) * (*(float *)&REFG(undefined, 0x10ab97c) * fVar21)) * (*(float *)((char *)&auVar25 + 12));
    (*(float *)((char *)&auVar12 + 0)) = fVar16 * fVar16 + fVar8 * fVar8;
    (*(float *)((char *)&auVar12 + 4)) = fVar7 * fVar7 + fVar14 * fVar14;
    (*(float *)((char *)&auVar12 + 8)) = fVar8 * fVar8 + fVar16 * fVar16;
    (*(float *)((char *)&auVar12 + 12)) = fVar14 * fVar14 + fVar7 * fVar7;
    (*(undefined4 *)((char *)&auVar10 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar12 + 0)) + (*(float *)((char *)&auVar12 + 4)));
    (*(undefined4 *)((char *)&auVar10 + 0)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar12 + 4)) + (*(float *)((char *)&auVar12 + 0)));
    (*(undefined4 *)((char *)&auVar10 + 8)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar12 + 12)) + (*(float *)((char *)&auVar12 + 8)));
    (*(undefined4 *)((char *)&auVar10 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar12 + 8)) + (*(float *)((char *)&auVar12 + 12)));
    gen_rsqrtps(&(auVar10), &(auVar12), &(auVar10));
    fVar13 = (*(float *)((char *)&auVar10 + 0));
    fVar15 = (*(float *)((char *)&auVar10 + 4));
    fVar21 = (*(float *)((char *)&auVar10 + 8));
    fVar22 = (*(float *)((char *)&auVar10 + 12));
    fVar8 = ((*(float *)&REFG(undefined, 0x10ab960) - (fVar13 * ((*(float *)((char *)&auVar12 + 4)) + (*(float *)((char *)&auVar12 + 0)))) * fVar13) * (*(float *)&REFG(undefined, 0x10ab970) * fVar13)) * fVar8;
    fVar14 = ((*(float *)&REFG(undefined, 0x10ab964) - (fVar15 * ((*(float *)((char *)&auVar12 + 0)) + (*(float *)((char *)&auVar12 + 4)))) * fVar15) * (*(float *)&REFG(undefined, 0x10ab974) * fVar15)) * fVar14;
    (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) = fVar8;
    (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) = fVar14;
    (*(undefined8 *)(gen_frame + 0x50)) = CONCAT44((uint)gen_fl2bits(fVar14),(uint)gen_fl2bits(fVar8));
    (*(float *)(gen_frame + 0x58)) = ((*(float *)&REFG(undefined, 0x10ab968) - (fVar21 * ((*(float *)((char *)&auVar12 + 12)) + (*(float *)((char *)&auVar12 + 8)))) * fVar21) * (*(float *)&REFG(undefined, 0x10ab978) * fVar21)) * fVar16;
    (*(float *)(gen_frame + 0x5c)) = ((*(float *)&REFG(undefined, 0x10ab96c) - (fVar22 * ((*(float *)((char *)&auVar12 + 8)) + (*(float *)((char *)&auVar12 + 12)))) * fVar22) * (*(float *)&REFG(undefined, 0x10ab97c) * fVar22)) * fVar7;
    F_00d93970(&(*(float *)(gen_frame + 0x40)) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x0)));
    puVar5 = ((undefined4 *)(gen_frame + 0x0));
  }
  else {
    puVar5 = &REFG(float, 0x1302d00);
  }
  puVar6 = param_1;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00670890 */
GEN_OWN GEN_FRAME uint F_00670890(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x670890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0063bbd0(REFG(undefined4, 0x13759f8) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006708b0 */
GEN_OWN GEN_FRAME uint F_006708b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6708b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0063bc60(REFG(undefined4, 0x13759f8) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: Global::CreateRendererUtility */
GEN_OWN GEN_NOFRAME byte F_006708d0(void)
{
  GEN_ENTER(0x6708d0u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00406b90(0x290,0,0)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10ac1b4));
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0;
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0;
    puVar1[5] = 0xffffffff;
    puVar1[6] = 0;
    F_0066caa0((undefined *)(puVar1 + 0x1c) GEN_EDX_ARG);
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xa3] = 0;
    REFG(undefined4 * PTR32, 0x13759f8) = puVar1;
    return puVar1 != ((undefined4 *)GEN_TOP(0x0));
  }
  REFG(undefined4 * PTR32, 0x13759f8) = ((undefined4 *)GEN_TOP(0x0));
  return 0;
}

/* ref: Global::VectorTidy_00670940 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00670940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x670940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Global::VectorTidyB */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00670980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x670980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00670a00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00670a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x670a00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0066d160(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: Global::VectorEraseRange_00670a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00670a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x670a20u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Global::TreeLowerBound_00670ac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00670ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x670ac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x19))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x19))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: Global::VectorEraseRange_00670b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00670b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x670b00u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Global::ReleaseBuffer_00670b60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00670b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x670b60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00670ba0 */
GEN_OWN GEN_FRAME unsigned int F_00670ba0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x670ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 in_ECX = 0;
  
  F_0066f430(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_00670bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00670bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x670bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Global::TreeInsertNode_00670c20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00670c20(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x670c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00429760(param_5,0x14,0xd3);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
  }
  else if (param_3 == '\0') {
    param_4[2] = param_5;
    if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
    }
  }
  else {
    *param_4 = param_5;
    if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
      **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
    }
  }
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x10)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x10))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x10))) == '\0') {
        *(undefined1 *)(piVar5 + 4) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x10))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x10))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x11))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar4;
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x10))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x10))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x11))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
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
LAB_00670e1d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x10))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x11))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar2;
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x10))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x10))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x11))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
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
        goto LAB_00670e1d;
      }
      *(undefined1 *)(piVar5 + 4) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x10))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x10))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x10)));
  } while( true );
}

/* ref: Global::TreeInsertNode_00670e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00670e50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x670e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00429760(param_5,0x1c,0xd2);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
  }
  else if (param_3 == '\0') {
    param_4[2] = param_5;
    if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
    }
  }
  else {
    *param_4 = param_5;
    if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
      **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
    }
  }
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x18)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x18))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x18))) == '\0') {
        *(undefined1 *)(piVar5 + 6) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x18))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x18))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x19))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar4;
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x18))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x18))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x19))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
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
LAB_0067104d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x18))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x19))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar2;
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x18))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x18))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x19))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
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
        goto LAB_0067104d;
      }
      *(undefined1 *)(piVar5 + 6) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x18))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x18))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x18)));
  } while( true );
}

/* ref: Global::PoolAllocate */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00671080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x671080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x5c)));
  uVar3 = _InterlockedExchangeAdd((volatile gen_long *)(puVar1), (gen_long)(1));
  uVar6 = uVar3 >> 5;
  if (*((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = ((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
      do {
        iVar4 = _InterlockedExchangeAdd((volatile gen_long *)(piVar2), 0);
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0xa00,0x10);
    _InterlockedExchange((volatile gen_long *)((((uint *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))))), (gen_long)(uVar5));
  }
  return (uVar3 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
}

/* ref: Global::PoolAllocate_006710f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006710f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6710f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x5c)));
  uVar3 = _InterlockedExchangeAdd((volatile gen_long *)(puVar1), (gen_long)(1));
  uVar6 = uVar3 >> 5;
  if (*((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = ((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
      do {
        iVar4 = _InterlockedExchangeAdd((volatile gen_long *)(piVar2), 0);
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0xb0 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0x1600,0x10)
    ;
    _InterlockedExchange((volatile gen_long *)((((uint *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))))), (gen_long)(uVar5));
  }
  return (uVar3 & 0x1f) * 0xb0 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
}

/* ref: Global::PoolAllocate_00671170 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00671170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x671170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x5c)));
  uVar3 = _InterlockedExchangeAdd((volatile gen_long *)(puVar1), (gen_long)(1));
  uVar6 = uVar3 >> 5;
  if (*((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = ((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
      do {
        iVar4 = _InterlockedExchangeAdd((volatile gen_long *)(piVar2), 0);
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x90 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0x1200,0x10)
    ;
    _InterlockedExchange((volatile gen_long *)((((uint *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))))), (gen_long)(uVar5));
  }
  return (uVar3 & 0x1f) * 0x90 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
}

/* ref: Global::PoolAllocate_006711e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006711e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6711e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x5c)));
  uVar3 = _InterlockedExchangeAdd((volatile gen_long *)(puVar1), (gen_long)(1));
  uVar6 = uVar3 >> 5;
  if (*((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = ((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
      do {
        iVar4 = _InterlockedExchangeAdd((volatile gen_long *)(piVar2), 0);
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0xb0 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0x1600,0x10)
    ;
    _InterlockedExchange((volatile gen_long *)((((uint *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))))), (gen_long)(uVar5));
  }
  return (uVar3 & 0x1f) * 0xb0 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
}

/* ref: Global::PoolAllocate_00671260 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00671260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x671260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x5c)));
  uVar3 = _InterlockedExchangeAdd((volatile gen_long *)(puVar1), (gen_long)(1));
  uVar6 = uVar3 >> 5;
  if (*((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = ((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
      do {
        iVar4 = _InterlockedExchangeAdd((volatile gen_long *)(piVar2), 0);
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0xa00,0x10);
    _InterlockedExchange((volatile gen_long *)((((uint *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))))), (gen_long)(uVar5));
  }
  return (uVar3 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
}

/* ref: Global::PoolAllocate_006712d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006712d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6712d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x5c)));
  uVar3 = _InterlockedExchangeAdd((volatile gen_long *)(puVar1), (gen_long)(1));
  uVar6 = uVar3 >> 5;
  if (*((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = ((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
      do {
        iVar4 = _InterlockedExchangeAdd((volatile gen_long *)(piVar2), 0);
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x30 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0x600,0x10);
    _InterlockedExchange((volatile gen_long *)((((uint *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))))), (gen_long)(uVar5));
  }
  return (uVar3 & 0x1f) * 0x30 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
}

/* ref: Global::PoolAllocate_00671340 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00671340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x671340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x5c)));
  uVar3 = _InterlockedExchangeAdd((volatile gen_long *)(puVar1), (gen_long)(1));
  uVar6 = uVar3 >> 5;
  if (*((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = ((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
      do {
        iVar4 = _InterlockedExchangeAdd((volatile gen_long *)(piVar2), 0);
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0xa00,0x10);
    _InterlockedExchange((volatile gen_long *)((((uint *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))))), (gen_long)(uVar5));
  }
  return (uVar3 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
}

/* ref: Global::PoolAllocate_006713b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006713b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6713b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x5c)));
  uVar3 = _InterlockedExchangeAdd((volatile gen_long *)(puVar1), (gen_long)(1));
  uVar6 = uVar3 >> 5;
  if (*((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = ((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
      do {
        iVar4 = _InterlockedExchangeAdd((volatile gen_long *)(piVar2), 0);
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x30 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0x600,0x10);
    _InterlockedExchange((volatile gen_long *)((((uint *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))))), (gen_long)(uVar5));
  }
  return (uVar3 & 0x1f) * 0x30 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
}

/* ref: Global::UninitializedCopy8 */
GEN_OWN GEN_FRAME unsigned int F_00671420(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x671420u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::SortRange */
GEN_OWN GEN_FRAME unsigned int F_00671450(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x671450u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
    F_0066f960(param_1,param_2,param_3,param_4,0,0);
  }
  return;
}

/* ref: Global::ConstructCopy */
GEN_OWN GEN_FRAME uint F_00671480(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x671480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_3 + 2);
  uVar2 = *(undefined4 *)(param_3 + 4);
  if (param_2 != ((undefined2 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    *(undefined4 *)(param_2 + 2) = uVar1;
    *(undefined4 *)(param_2 + 4) = uVar2;
  }
  return (uint)param_2;
}

/* ref: Global::UninitializedCopy4_006714b0 */
GEN_OWN GEN_FRAME unsigned int F_006714b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6714b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedCopy4_006714e0 */
GEN_OWN GEN_FRAME unsigned int F_006714e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6714e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedCopy4_00671510 */
GEN_OWN GEN_FRAME unsigned int F_00671510(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x671510u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedCopy4_00671540 */
GEN_OWN GEN_FRAME unsigned int F_00671540(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x671540u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedCopy4_00671570 */
GEN_OWN GEN_FRAME unsigned int F_00671570(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x671570u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedFillZero_006715a0 */
GEN_OWN GEN_FRAME unsigned int F_006715a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6715a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::UninitializedCopy4_006715d0 */
GEN_OWN GEN_FRAME unsigned int F_006715d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6715d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::MedianOfNine */
GEN_OWN GEN_FRAME unsigned int F_00671600(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x671600u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3 - param_1 >> 3;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 8 + param_1;
    F_0066fc10(param_1,iVar1,iVar2 * 0x10 + param_1,param_4,param_5);
    F_0066fc10(param_2 + iVar2 * -8,param_2,iVar2 * 8 + param_2,param_4,param_5);
    iVar3 = param_3 + iVar2 * -8;
    F_0066fc10(param_3 + iVar2 * -0x10,iVar3,param_3,param_4,param_5);
    F_0066fc10(iVar1,param_2,iVar3,param_4,param_5);
    return;
  }
  F_0066fc10(param_1,param_2,param_3,param_4,param_5);
  return;
}

/* ref: Global::InsertionSortByFloat */
GEN_OWN GEN_FRAME unsigned int F_006716c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x6716c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  float fVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  if (param_1 != param_2) {
    while (puVar3 = puVar3 + 2, puVar3 != param_2) {
      fVar1 = gen_bits2f(puVar3[1]);
      uVar2 = *puVar3;
      puVar4 = puVar3;
      if ((float10)fVar1 < ((float10)GEN_TOD(gen_bits2f(param_1[1])))) {
        for (; param_1 != puVar4; puVar4 = puVar4 - 2) {
          *puVar4 = puVar4[-2];
          puVar4[1] = puVar4[-1];
        }
        *param_1 = uVar2;
        param_1[1] = (undefined4)gen_fl2bits(fVar1);
      }
      else {
        while ((float10)fVar1 < ((float10)GEN_TOD(gen_bits2f(puVar4[-1])))) {
          *puVar4 = puVar4[-2];
          puVar4[1] = puVar4[-1];
          puVar4 = puVar4 - 2;
        }
        *puVar4 = uVar2;
        puVar4[1] = (undefined4)gen_fl2bits(fVar1);
      }
    }
  }
  return 0;
}

/* ref: Global::VectorTidy_00671750 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00671750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x671750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0xd3);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Global::VectorTidy_00671790 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00671790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x671790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0xd2);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Global::PopHeap */
GEN_OWN GEN_FRAME uint F_006717d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x6717d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_2 - 4)));
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_2 - 8)));
  *((undefined4 *)GEN_TOP((param_2 - 8))) = *param_1;
  *((undefined4 *)GEN_TOP((param_2 - 4))) = param_1[1];
  uVar1 = F_0066a390(param_1,0,(param_2 - (int)param_1) - 8 >> 3,&(*(undefined4 *)(gen_frame + 0x0)),param_3,param_4);
  return uVar1;
}

/* ref: Global::VectorTidy_00671820 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00671820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x671820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Global::TreeBegin_00671860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00671860(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x671860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::TreeEnd_00671880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00671880(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x671880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::TreeErase_00671890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00671890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x671890u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x11))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00666840(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x11))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x11))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x11))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[4];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 4))) = (char)piVar3[4];
      *(char *)(piVar3 + 4) = (char)iVar1;
      goto LAB_006719aa;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x11))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x11))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00666740(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x11))) == '\0') {
      uVar5 = F_00666720(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_006719aa: ;
  if ((char)piVar3[4] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[4] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_0066fe30(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x11))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x10))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x10))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x10))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x10))) = 1;
                *(undefined1 *)(piVar6 + 4) = 0;
                F_0066a690(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 4) = (char)piVar4[4];
              *(undefined1 *)(piVar4 + 4) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x10))) = 1;
              F_0066fe30(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00671a68: ;
            *(undefined1 *)(piVar6 + 4) = 0;
          }
        }
        else {
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_0066a690(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x11))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x10))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x10))) == '\x01'))
            goto LAB_00671a68;
            if (*((char *)GEN_TOP((*piVar6 + 0x10))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x10))) = 1;
              *(undefined1 *)(piVar6 + 4) = 0;
              F_0066fe30(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 4) = (char)piVar4[4];
            *(undefined1 *)(piVar4 + 4) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x10))) = 1;
            F_0066a690(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 4) = 1;
  }
  F_00429760(piVar3,0x14,0xd3);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::TreeClear_00671af0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00671af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x671af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x11)));
  while (cVar1 == '\0') {
    F_0066fdf0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x14,0xd3);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x11)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: Global::TreeErase_00671b50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00671b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x671b50u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x19))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_006668a0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x19))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x19))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x19))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[6];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 6))) = (char)piVar3[6];
      *(char *)(piVar3 + 6) = (char)iVar1;
      goto LAB_00671c6a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x19))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x19))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_006667e0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x19))) == '\0') {
      uVar5 = F_006667c0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00671c6a: ;
  if ((char)piVar3[6] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[6] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[6] == '\0') {
            *(undefined1 *)(piVar6 + 6) = 1;
            *(undefined1 *)(piVar4 + 6) = 0;
            F_0066fed0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x19))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x18))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x18))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x18))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x18))) = 1;
                *(undefined1 *)(piVar6 + 6) = 0;
                F_0066a710(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 6) = (char)piVar4[6];
              *(undefined1 *)(piVar4 + 6) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x18))) = 1;
              F_0066fed0(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00671d28: ;
            *(undefined1 *)(piVar6 + 6) = 0;
          }
        }
        else {
          if ((char)piVar6[6] == '\0') {
            *(undefined1 *)(piVar6 + 6) = 1;
            *(undefined1 *)(piVar4 + 6) = 0;
            F_0066a710(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x19))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x18))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x18))) == '\x01'))
            goto LAB_00671d28;
            if (*((char *)GEN_TOP((*piVar6 + 0x18))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x18))) = 1;
              *(undefined1 *)(piVar6 + 6) = 0;
              F_0066fed0(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 6) = (char)piVar4[6];
            *(undefined1 *)(piVar4 + 6) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x18))) = 1;
            F_0066a710(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 6) = 1;
  }
  F_00429760(piVar3,0x1c,0xd2);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::TreeClear_00671db0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00671db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x671db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x19)));
  while (cVar1 == '\0') {
    F_0066fe90(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x1c,0xd2);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x19)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: Global::PoolAllocate_00671e30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00671e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x671e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x5c)));
  uVar3 = _InterlockedExchangeAdd((volatile gen_long *)(puVar1), (gen_long)(1));
  uVar6 = uVar3 >> 5;
  if (*((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = ((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
      do {
        iVar4 = _InterlockedExchangeAdd((volatile gen_long *)(piVar2), 0);
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x90 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0x1200,0x10)
    ;
    _InterlockedExchange((volatile gen_long *)((((uint *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))))), (gen_long)(uVar5));
  }
  return (uVar3 & 0x1f) * 0x90 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
}

/* ref: Global::UninitializedCopy32 */
GEN_OWN GEN_FRAME unsigned int F_00671ea0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x671ea0u, gen_a0, gen_a1, gen_a2, 0u);
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
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 - 1) {
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

/* ref: Global::VectorClear_00671ee0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00671ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x671ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *((int *)GEN_TOP(((int)this + 4)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 4))),0);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  }
  return;
}

/* ref: Global::ScratchArrayInit */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00671f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x671f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *((uint *)GEN_TOP(((int)this + 0x10))) = param_1;
  if (param_1 != 0) {
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *(uint *)(this_00 + 0xc);
    uVar2 = param_1 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)(this_00 + 8) < (int)uVar2) || (*(uint *)(this_00 + 0x10) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00 GEN_EDX_ARG,uVar2);
    }
    else {
      *(uint *)(this_00 + 0xc) = uVar1 + uVar2;
    }
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1 | 0x80000000;
  *(uint *)this = uVar1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  return (uint)this;
}

/* ref: Global::ScratchArrayRelease */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00671fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x671fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar1 == *(int *)this) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)(this_00 + 8) < (int)uVar3) || (uVar3 + iVar1 != *(int *)(this_00 + 0xc))) ||
     (*(int *)(this_00 + 0x14) == iVar1)) {
    F_00d945c0(this_00 GEN_EDX_ARG,iVar1,uVar3);
  }
  else {
    *(int *)(this_00 + 0xc) = iVar1;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: Global::PoolAllocate8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00672040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x672040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  if (7 < *((uint *)GEN_TOP(((int)this + 8)))) {
    if (*((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((uint *)GEN_TOP(0x0))) {
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = *((uint *)GEN_TOP(((int)this + 8)));
    }
    uVar2 = F_00671080(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2 + 0x10;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP(((int)this + 8))) = iVar1 + 1;
  return *((int *)GEN_TOP(((int)this + 4))) + iVar1 * 8;
}

/* ref: Global::PoolAllocate20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00672080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x672080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  if (7 < *((uint *)GEN_TOP(((int)this + 8)))) {
    if (*((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((uint *)GEN_TOP(0x0))) {
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = *((uint *)GEN_TOP(((int)this + 8)));
    }
    uVar2 = F_006710f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2 + 0x10;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP(((int)this + 8))) = iVar1 + 1;
  return *((int *)GEN_TOP(((int)this + 4))) + iVar1 * 0x14;
}

/* ref: Global::PoolAllocate8x16 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006720c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6720c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  if (0xf < *((uint *)GEN_TOP(((int)this + 8)))) {
    if (*((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((uint *)GEN_TOP(0x0))) {
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = *((uint *)GEN_TOP(((int)this + 8)));
    }
    uVar2 = F_00671170(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2 + 0x10;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP(((int)this + 8))) = iVar1 + 1;
  return *((int *)GEN_TOP(((int)this + 4))) + iVar1 * 8;
}

/* ref: Global::PoolAllocate20B */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00672100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x672100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  if (7 < *((uint *)GEN_TOP(((int)this + 8)))) {
    if (*((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((uint *)GEN_TOP(0x0))) {
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = *((uint *)GEN_TOP(((int)this + 8)));
    }
    uVar2 = F_006711e0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2 + 0x10;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP(((int)this + 8))) = iVar1 + 1;
  return *((int *)GEN_TOP(((int)this + 4))) + iVar1 * 0x14;
}

/* ref: Global::PoolAllocate4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00672140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x672140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  if (7 < *((uint *)GEN_TOP(((int)this + 8)))) {
    if (*((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((uint *)GEN_TOP(0x0))) {
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = *((uint *)GEN_TOP(((int)this + 8)));
    }
    uVar2 = F_006713b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2 + 0x10;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP(((int)this + 8))) = iVar1 + 1;
  return *((int *)GEN_TOP(((int)this + 4))) + iVar1 * 4;
}

/* ref: Global::PoolAllocate8B */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00672180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x672180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  if (7 < *((uint *)GEN_TOP(((int)this + 8)))) {
    if (*((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((uint *)GEN_TOP(0x0))) {
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = *((uint *)GEN_TOP(((int)this + 8)));
    }
    uVar2 = F_00671260(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2 + 0x10;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP(((int)this + 8))) = iVar1 + 1;
  return *((int *)GEN_TOP(((int)this + 4))) + iVar1 * 8;
}

/* ref: Global::PoolAllocate4B */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006721c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6721c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  if (7 < *((uint *)GEN_TOP(((int)this + 8)))) {
    if (*((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((uint *)GEN_TOP(0x0))) {
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = *((uint *)GEN_TOP(((int)this + 8)));
    }
    uVar2 = F_006712d0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2 + 0x10;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP(((int)this + 8))) = iVar1 + 1;
  return *((int *)GEN_TOP(((int)this + 4))) + iVar1 * 4;
}

/* ref: Global::PoolAllocate8C */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00672200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x672200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  if (7 < *((uint *)GEN_TOP(((int)this + 8)))) {
    if (*((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((uint *)GEN_TOP(0x0))) {
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = *((uint *)GEN_TOP(((int)this + 8)));
    }
    uVar2 = F_00671340(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2 + 0x10;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP(((int)this + 8))) = iVar1 + 1;
  return *((int *)GEN_TOP(((int)this + 4))) + iVar1 * 8;
}

/* ref: Global::UninitializedCopy8_00672240 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00672240(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x672240u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::TreeInsertUintKey */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00672280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x672280u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x11))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) < (uint)puVar2[3];
      }
      else {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) <= (uint)puVar2[3];
      }
      if (local_8 == false) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(*puVar2));
      }
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x11))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_00670c20(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00669900(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00670c20(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00429760((*(int *)&gen_args[1]),0x14,0xd3);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::TreeInsertUshortKey */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00672360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x672360u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x19))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        local_8 = *((ushort *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) < *(ushort *)(puVar2 + 3);
      }
      else {
        local_8 = *((ushort *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) <= *(ushort *)(puVar2 + 3);
      }
      if (local_8 == false) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(*puVar2));
      }
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x19))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_00670e50(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00669960(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if (*((ushort *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[2]) + 3))) < *((ushort *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00670e50(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00429760((*(int *)&gen_args[1]),0x1c,0xd2);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::TreeBuyNodeUshortKey */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00672440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x672440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(0x1c,0,0xd2)));
  *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar3 + 6) = 0;
  uVar1 = *(undefined4 *)(param_1 + 2);
  uVar2 = *(undefined4 *)(param_1 + 4);
  if (puVar3 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined2 *)(puVar3 + 3) = *param_1;
    puVar3[4] = uVar1;
    puVar3[5] = uVar2;
  }
  return (uint)puVar3;
}

/* ref: Global::UninitializedCopy4_006724a0 */
GEN_OWN GEN_FRAME unsigned int F_006724a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6724a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedCopy4B */
GEN_OWN GEN_FRAME unsigned int F_006724d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6724d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedCopy4C */
GEN_OWN GEN_FRAME unsigned int F_00672500(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x672500u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedCopy4D */
GEN_OWN GEN_FRAME unsigned int F_00672530(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x672530u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedCopy4E */
GEN_OWN GEN_FRAME unsigned int F_00672560(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x672560u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedFillZero4 */
GEN_OWN GEN_FRAME unsigned int F_00672590(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x672590u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::UninitializedCopy4F */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_006725c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6725c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::VectorTidyD3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006725f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6725f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0xd3);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Global::VectorTidyD2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00672630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x672630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0xd2);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Global::UnguardedPartitionByFloat */
GEN_OWN GEN_FRAME uint F_00672670(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x672670u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
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
  F_00671600(param_2,puVar9,param_3 - 2,param_4,param_5);
  puVar4 = puVar9 + 2;
  for (; param_2 < puVar9; puVar9 = puVar9 - 2) {
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
      } while ((int)puVar4 < (int)(param_3 - 6));
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
      } while ((int)puVar4 < (int)(param_3 - 6));
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
    puVar5 = puVar7 - 2;
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
      puVar9 = puVar9 - 2;
    }
    puVar6 = puVar6 - 2;
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
    puVar7 = puVar6 - 2;
    local_8 = puVar7;
    if (puVar4 == param_3) {
      puVar5 = puVar9 - 2;
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
      puVar6 = puVar8 - 2;
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
GEN_OWN GEN_FRAME unsigned int F_00672ad0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x672ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  F_006716c0(param_1,param_2,param_3,param_4,0);
  return;
}

/* ref: Global::SortHeap8 */
GEN_OWN GEN_FRAME unsigned int F_00672af0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x672af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = param_2 - (int)param_1;
  if (8 < (int)(uVar2 & 0xfffffff8)) {
    puVar3 = ((undefined4 *)GEN_TOP((param_2 - 8)));
    do {
      uVar1 = puVar3[1];
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar3;
      (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      F_0066a390(param_1,0,(int)(uVar2 - 8) >> 3,&(*(undefined4 *)(gen_frame + 0x0)),param_3,param_4);
      puVar3 = puVar3 - 2;
      uVar2 = (int)puVar3 + (8 - (int)param_1);
    } while (8 < (int)(uVar2 & 0xfffffff8));
  }
  return 0;
}

/* ref: Global::VectorTidyC8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00672b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x672b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Global::TreeEraseRange_00672bb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00672bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x672bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00671af0(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x11))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x11))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x11)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x11)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00671890(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: Global::TreeEraseRangeB_00672c60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00672c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x672c60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00671db0(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x19))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x19))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x19)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x19)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x19)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x19)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00671b50(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: Global::PoolAllocate8x16B */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00672d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x672d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  if (0xf < *((uint *)GEN_TOP(((int)this + 8)))) {
    if (*((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((uint *)GEN_TOP(0x0))) {
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = *((uint *)GEN_TOP(((int)this + 8)));
    }
    uVar2 = F_00671e30(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2 + 0x10;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP(((int)this + 8))) = iVar1 + 1;
  return *((int *)GEN_TOP(((int)this + 4))) + iVar1 * 8;
}

/* ref: Global::UninitializedCopy32_00672d40 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00672d40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x672d40u, gen_a0, gen_a1, gen_a2, 0u);
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
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 - 1) {
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

/* ref: Client::Graphics::Render::Skeleton::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00672d80(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x672d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0064cdc0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::VectorTidyD2B */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00672e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x672e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0xd2);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Global::TreeEraseKey */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00672e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x672e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_0066d160(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]));
  (*(uint *)&gen_args[0]) = 0;
  F_0066f430((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[0]),0);
  F_00672bb0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  return (*(uint *)&gen_args[0]);
}

/* ref: Global::VectorReserve8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00672eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x672eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,0xd3);
    F_00672240(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,0xd3);
    }
    uVar4 = uVar3 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 8 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
  }
  return uVar4;
}

/* ref: Global::TreeInsertUintValue */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00672f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x672f50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x14,0,0xd3)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_2;
  }
  F_00672280(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: Global::UninitializedCopy4G */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00672fb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x672fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = param_3;
  if (param_1 != param_2) {
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return (uint)puVar1;
}

/* ref: Global::UninitializedCopy4H */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00672fe0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x672fe0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedCopy4I */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00673010(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x673010u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedCopyPtr_00673040 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00673040(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x673040u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedCopyPtr2_00673070 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00673070(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x673070u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::TreeInsertHint_006730b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006730b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6730b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00670e50(this GEN_EDX_FWD,(*(undefined4 * PTR32 *)&gen_args[0]),1,piVar1,(*(int * PTR32 *)&gen_args[2]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(*piVar1))) {
    if (*((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3))) < *((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 3)))) {
      F_00670e50(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[1]) == piVar1) {
    if (*((ushort *)GEN_TOP((piVar1[2] + 0xc))) < *((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3)))) {
      F_00670e50(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,piVar1[2],(*(int * PTR32 *)&gen_args[2]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
  else {
    if (*((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3))) < *((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 3)))) {
      (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
      F_00669960(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      if (*((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3))) < *(ushort *)(piVar2 + 3)) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x19))) != '\0') {
          F_00670e50(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00670e50(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[1]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
    }
    if (*((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 3))) < *(ushort *)(piVar2 + 3)) {
      (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
      F_006668a0(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      if (((*(int * PTR32 *)&gen_args[2]) == *((int * PTR32 *)GEN_TOP(((int)this + 4)))) ||
         (*(ushort *)(piVar2 + 3) < *((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3))))) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[2] + 0x19))) != '\0') {
          F_00670e50(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[1]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00670e50(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
    }
  }
  puVar3 = ((undefined4 *)GEN_TOP(F_00672360(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),piVar2,0)));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar3;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::VectorReserve */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00673220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x673220u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,200)));
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
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,200);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: Global::SortHeap */
GEN_OWN GEN_FRAME unsigned int F_006732d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x6732d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  F_00672af0(param_1,param_2,param_3,param_4);
  return;
}

/* ref: Global::VectorTidy_006732f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006732f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6732f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Global::VectorErase */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00673330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x673330u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    puVar3 = param_3;
    while (puVar3 != puVar1) {
      puVar4 = puVar3 + 8;
      puVar6 = puVar2 + 8;
      puVar7 = puVar3;
      puVar8 = puVar2;
      for (iVar5 = 8; puVar2 = puVar6, puVar3 = puVar4, iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Global::VectorTidy32 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00673380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x673380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1 & 0xffffffe0,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Global::TreeClear_006733c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006733c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6733c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00672bb0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))
  ;
  return uVar1;
}

/* ref: Global::VectorTidy8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006733e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6733e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,0xd3);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Global::TreeClear2_00673420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00673420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x673420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00672c60(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))
  ;
  return uVar1;
}

/* ref: Global::VectorReserve32 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00673440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x673440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  puVar4 = param_1;
  if (((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 5))) < param_1) {
    puVar2 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 0x20,0,0xd8)));
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar6 = puVar2;
    for (puVar3 = *(undefined4 * PTR32 *)this; puVar3 != puVar4; puVar3 = puVar3 + 8) {
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar7 = puVar3;
        puVar8 = puVar6;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar6 = puVar6 + 8;
    }
    iVar5 = *(int *)this;
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar5 != 0) {
      F_00429760(iVar5,*((int *)GEN_TOP(((int)this + 8))) - iVar5 & 0xffffffe0,0xd8);
    }
    puVar4 = puVar2 + (int)((int)(uintptr_t)param_1) * 8;
    *(undefined4 * PTR32 *)this = puVar2;
    *((uint *)GEN_TOP(((int)this + 4))) = (iVar1 - iVar5 & 0xffffffe0U) + (int)puVar2;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar4;
  }
  return (uint)puVar4;
}

/* ref: Global::VectorAssign */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00673500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x673500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
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
      if (iVar3 != *((int *)GEN_TOP(((int)this + 4)))) {
        F_00c46e20(iVar3,*((int *)GEN_TOP(((int)this + 4))),0);
        *((int *)GEN_TOP(((int)this + 4))) = iVar3;
        return (uint)this;
      }
    }
    else {
      uVar7 = *((int *)GEN_TOP(((int)this + 4))) - iVar3 >> 2;
      if (uVar6 <= uVar7) {
        F_00c46e20(iVar3,iVar2,(param_1[1] - iVar2 >> 2) * 4);
        *((int *)GEN_TOP(((int)this + 4))) = *(int *)this + (param_1[1] - *param_1 >> 2) * 4;
        return (uint)this;
      }
      uVar5 = *((int *)GEN_TOP(((int)this + 8))) - iVar3 >> 2;
      if (uVar6 <= uVar5) {
        iVar1 = iVar2 + uVar7 * 4;
        F_00c46e20(iVar3,iVar2,(iVar1 - iVar2 >> 2) * 4);
        uVar6 = F_00672fb0(iVar1,param_1[1],*((undefined4 *)GEN_TOP(((int)this + 4))));
        *((uint *)GEN_TOP(((int)this + 4))) = uVar6;
        return (uint)this;
      }
      if (iVar3 != 0) {
        F_00666590(iVar3,uVar5);
      }
      bVar4 = F_0066d040(this GEN_EDX_ARG,param_1[1] - *param_1 >> 2);
      if (bVar4 != 0) {
        uVar6 = F_00672fb0(*param_1,param_1[1],*(undefined4 *)this);
        *((uint *)GEN_TOP(((int)this + 4))) = uVar6;
      }
    }
  }
  return (uint)this;
}

/* ref: Global::TreeFindString */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00673620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x673620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar1 = F_00527180(this GEN_EDX_FWD,param_2);
  if (uVar1 != *((uint *)GEN_TOP(((int)this + 4)))) {
    puVar2 = ((undefined4 *)GEN_TOP((uVar1 + 0xc)));
    if (0xf < *((uint *)GEN_TOP((uVar1 + 0x20)))) {
      puVar2 = ((undefined4 *)GEN_TOP(*puVar2));
    }
    uVar3 = F_004e2560(param_2 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)param_2 + 0x10))),puVar2,
                                *((undefined4 *)GEN_TOP((uVar1 + 0x1c))));
    if (-1 < (int)uVar3) {
      *param_1 = uVar1;
      return (uint)param_1;
    }
  }
  *param_1 = *((uint *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: Global::VectorReserveD8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00673690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x673690u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xd8)));
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
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0xd8);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: Global::VectorReserveD8b */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00673740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x673740u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xd8)));
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
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0xd8);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: Global::VectorGrowBy8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006737f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6737f0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00672eb0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00672eb0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: Global::VectorGrowBy_00673860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00673860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x673860u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00673690(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00673690(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: Global::VectorGrowBy2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006738d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6738d0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00673740(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00673740(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: Global::VectorReserveD3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00673940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x673940u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xd3)));
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
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0xd3);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: Global::VectorReserveD2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006739f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6739f0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xd2)));
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
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0xd2);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: Global::TreeEmplaceHint */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00673ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined2 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x673ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a3;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(0x1c,0,0xd2)));
  *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar3 + 6) = 0;
  uVar1 = *(undefined4 *)(param_3 + 2);
  uVar2 = *(undefined4 *)(param_3 + 4);
  if (puVar3 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined2 *)(puVar3 + 3) = *param_3;
    puVar3[4] = uVar1;
    puVar3[5] = uVar2;
  }
  F_006730b0(this GEN_EDX_ARG,param_1,param_2,puVar3);
  return param_1;
}

/* ref: Global::VectorGrowBy200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00673b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x673b50u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00673220(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00673220(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: Global::IntroSortLoop */
GEN_OWN GEN_FRAME unsigned int F_00673bc0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x673bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
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
      return;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(iVar4 - iVar2 & 0xfffffff8U)) {
          F_0066f960(iVar2,iVar4,param_4,param_5,0,0);
        }
        F_00672af0(iVar2,iVar4,param_4,param_5);
        return;
      }
      goto LAB_00673c60;
    }
    F_00672670(&(*(int *)(gen_frame + 0x0)),iVar2,iVar4,param_4,param_5);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x0)) - iVar2 & 0xfffffff8U) < (int)(iVar4 - (*(int *)(gen_frame + 0x4)) & 0xfffffff8U)) {
      F_00673bc0(iVar2,(*(int *)(gen_frame + 0x0)),iVar3,param_4,param_5);
      iVar2 = (*(int *)(gen_frame + 0x4));
    }
    else {
      F_00673bc0((*(int *)(gen_frame + 0x4)),iVar4,iVar3,param_4,param_5);
      iVar4 = (*(int *)(gen_frame + 0x0));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: Global::VectorPushBack_00673cc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00673cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x673cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00673b50(this GEN_EDX_FWD,1);
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
      F_00673b50(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: Global::VectorTidy32b */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00673d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x673d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1 & 0xffffffe0,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Global::VectorClear_00673d70 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00673d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x673d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)this != *((int *)GEN_TOP(((int)this + 4)))) {
    *((int *)GEN_TOP(((int)this + 4))) = *(int *)this;
  }
  return;
}

/* ref: Global::~Updater */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00673dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x673dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10ac2e8));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4018));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x4008)));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x4010))) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x4008))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x400c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4010))) = 0;
  return uVar2;
}

/* ref: Global::~Tree */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00673e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x673e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00672bb0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x14,0xd3);
  return (uint)uVar1;
}

/* ref: Global::VectorTidy8b */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00673e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x673e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,0xd3);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Global::~Tree2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00673ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x673ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00672c60(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x1c,0xd2);
  return (uint)uVar1;
}

/* ref: Updater_VPostBoneDeformerBase_Render_Graphics_Client_Render::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00673ee0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x673ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00673dc0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::VectorGrowBy32 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00673f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x673f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 5;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 5;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00673440(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00673440(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: Global::FindIndexByName_00673f80 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00673f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x673f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * this_00;
  uint uVar1;
  undefined4 * puVar2;
  undefined * PTR32 * ppvVar3;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00527180(((undefined *)GEN_TOP(((int)this + 0x14c))) GEN_EDX_FWD,(*(undefined * PTR32 *)&gen_args[0]));
  (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(uVar1));
  if (uVar1 != *((uint *)GEN_TOP(((int)this + 0x150)))) {
    puVar2 = ((undefined4 *)GEN_TOP((uVar1 + 0xc)));
    if (0xf < *((uint *)GEN_TOP((uVar1 + 0x20)))) {
      puVar2 = ((undefined4 *)GEN_TOP(*puVar2));
    }
    uVar1 = F_004e2560(this_00 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this_00 + 0x10))),puVar2,
                                *((undefined4 *)GEN_TOP((uVar1 + 0x1c))));
    if (-1 < (int)uVar1) {
      ppvVar3 = &(*(undefined * PTR32 *)&gen_args[0]);
      goto LAB_00673fd5;
    }
  }
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x150)));
  ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x0));
LAB_00673fd5: ;
  if (*ppvVar3 == *((undefined * PTR32 *)GEN_TOP(((int)this + 0x150)))) {
    return 0xffff;
  }
  return *((ushort *)GEN_TOP(((int)*ppvVar3 + 0x28)));
}

/* ref: Global::FindIndexByName2 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00674000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x674000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * this_00;
  uint uVar1;
  undefined4 * puVar2;
  undefined * PTR32 * ppvVar3;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00527180(((undefined *)GEN_TOP(((int)this + 300))) GEN_EDX_FWD,(*(undefined * PTR32 *)&gen_args[0]));
  (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(uVar1));
  if (uVar1 != *((uint *)GEN_TOP(((int)this + 0x130)))) {
    puVar2 = ((undefined4 *)GEN_TOP((uVar1 + 0xc)));
    if (0xf < *((uint *)GEN_TOP((uVar1 + 0x20)))) {
      puVar2 = ((undefined4 *)GEN_TOP(*puVar2));
    }
    uVar1 = F_004e2560(this_00 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this_00 + 0x10))),puVar2,
                                *((undefined4 *)GEN_TOP((uVar1 + 0x1c))));
    if (-1 < (int)uVar1) {
      ppvVar3 = &(*(undefined * PTR32 *)&gen_args[0]);
      goto LAB_00674055;
    }
  }
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x130)));
  ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x0));
LAB_00674055: ;
  if (*ppvVar3 == *((undefined * PTR32 *)GEN_TOP(((int)this + 0x130)))) {
    return 0xffff;
  }
  return *((ushort *)GEN_TOP(((int)*ppvVar3 + 0x28)));
}

/* ref: Global::AssignVector */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00674080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x674080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00673500(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Global::TidyVectorAt4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006740a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6740a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 0xc))) - iVar1 & 0xffffffe0,0xd8);
    uVar2 = (uint)uVar3;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return uVar2;
}

/* ref: Global::Reset_006740e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006740e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6740e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((int *)GEN_TOP(((int)this + 4))) != *((int *)GEN_TOP(((int)this + 8)))) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  return;
}

/* ref: Client::Graphics::Render::Manager::~Manager */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00674130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x674130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pMVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ac2f0));
  *(undefined * PTR32 * PTR32 *)(this + 0x105d4) = (*(undefined * PTR32 (*)[5])REFP(0x10abe04));
  pMVar1 = this + 0x10608;
  iVar2 = 1;
  do {
    pMVar1 = pMVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pMVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  } while (-1 < iVar2);
  pMVar1 = this + 0x105f0;
  iVar2 = 1;
  do {
    pMVar1 = pMVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pMVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)(this + 0x105d4) = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  *(undefined * PTR32 * PTR32 *)(this + 0x10528) = (*(undefined * PTR32 (*)[5])REFP(0x10abf30));
  *(undefined * PTR32 * PTR32 *)(this + 0x1056c) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbdc));
  *(undefined * PTR32 * PTR32 *)(this + 0x10560) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 0x10554) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  pMVar1 = this + 0x10554;
  iVar2 = 1;
  do {
    pMVar1 = pMVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pMVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)(this + 0x10528) = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  *(undefined * PTR32 * PTR32 *)(this + 0x104ac) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 0x104a0) = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  *(undefined * PTR32 * PTR32 *)(this + 0x10424) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 0x10418) = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  *(undefined * PTR32 * PTR32 *)(this + 0x1039c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 0x10390) = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  F_00624210(this + 0x100e0 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 0x100b0) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 0x10054) = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  F_00625080((undefined *)(this + 0xee30) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 0xedb4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbd4));
  *(undefined * PTR32 * PTR32 *)(this + 0xedb0) = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  *(undefined * PTR32 * PTR32 *)(this + 0xecd0) = (*(undefined * PTR32 (*)[5])REFP(0x10abea0));
  pMVar1 = this + 0xed7c;
  iVar2 = 2;
  do {
    pMVar1 = pMVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pMVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)(this + 0xed4c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 0xed40) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 0xecd4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbcc));
  *(undefined * PTR32 * PTR32 *)(this + 0xecd0) = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  *(undefined * PTR32 * PTR32 *)(this + 0xea30) = (*(undefined * PTR32 (*)[5])REFP(0x10abf18));
  pMVar1 = this + 0xebfc;
  iVar2 = 1;
  do {
    pMVar1 = pMVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pMVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)(this + 0xea50) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbc4));
  *(undefined * PTR32 * PTR32 *)(this + 0xea44) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 0xea30) = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  F_00668670((undefined *)(this + 0xaf90) GEN_EDX_ARG);
  F_00668520((undefined *)(this + 0xad10) GEN_EDX_ARG);
  F_00668430((undefined *)(this + 0xac2c) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 0xab9c) = (*(undefined * PTR32 (*)[1])REFP(0x10aba94));
  F_00673dc0(this + 0x6b6c GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 0x6b04) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbe4));
  iVar2 = 0x1f;
  pMVar1 = this + 0x6b04;
  do {
    *(undefined * PTR32 * PTR32 *)(pMVar1 - 0x358) = (*(undefined * PTR32 (*)[1])REFP(0x10abacc));
    F_00401530(pMVar1 - 0x340,0x34,0x10,((code *)REFP(0x662380)));
    iVar2 = iVar2 - 1;
    pMVar1 = pMVar1 - 0x358;
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb44));
  return;
}

/* ref: Client::Graphics::Render::Manager::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00674310(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x674310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00674130(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::DestroyTree_00674340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00674340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x674340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00672bb0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x14,0xd3);
  return (uint)uVar1;
}

/* ref: Global::DestroyTree_00674380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00674380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x674380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00672c60(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x1c,0xd2);
  return (uint)uVar1;
}

/* ref: Global::PushBack_00674400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00674400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x674400u, gen_a0, gen_a1, 0u, 0u);
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
      puVar4 = ((undefined4 *)GEN_TOP(F_006737f0(this GEN_EDX_FWD,1)));
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
      F_006737f0(this GEN_EDX_ARG,1);
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

/* ref: Global::FindOrInsertU16Key */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006744c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6744c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  ushort uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * local_8;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  local_8 = puVar4;
  if (*((char *)GEN_TOP(((int)puVar4[1] + 0x19))) == '\0') {
    puVar2 = ((undefined4 *)GEN_TOP(puVar4[1]));
    do {
      if (*(ushort *)(puVar2 + 3) < *(*(ushort * PTR32 *)&gen_args[0])) {
        puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
        puVar4 = puVar2;
        local_8 = puVar2;
      }
      puVar2 = puVar3;
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x19))) == '\0');
  }
  if ((puVar4 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && (*(ushort *)(puVar4 + 3) <= *(*(ushort * PTR32 *)&gen_args[0]))) {
    return (uint)(puVar4 + 4);
  }
  uVar1 = *(*(ushort * PTR32 *)&gen_args[0]);
  puVar4 = ((undefined4 *)GEN_TOP(F_004296a0(0x1c,0,0xd2)));
  *puVar4 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar4[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar4[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar4 + 6) = 0;
  if ((ushort *)(puVar4 + 3) != ((ushort *)GEN_TOP(0x0))) {
    *(ushort *)(puVar4 + 3) = uVar1;
    puVar4[4] = 0;
    puVar4[5] = 0;
  }
  F_006730b0(this GEN_EDX_ARG,&(*(ushort * PTR32 *)&gen_args[0]),local_8,puVar4);
  return (uint)((*(ushort * PTR32 *)&gen_args[0]) + 8);
}

/* ref: Global::PushBack_00674580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00674580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x674580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00673860(this GEN_EDX_FWD,1);
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
      F_00673860(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: Global::PushBack_006745f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006745f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6745f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_006738d0(this GEN_EDX_FWD,1);
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
      F_006738d0(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: Global::ReserveForInsert */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00674660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x674660u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00673940(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00673940(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: Global::ReserveForInsert_006746d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006746d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6746d0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_006739f0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_006739f0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00674740 */
GEN_OWN GEN_FRAME unsigned int F_00674740(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x674740u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  F_00673bc0(param_1,param_2,param_2 - param_1 >> 3,param_3,param_4);
  return;
}

/* ref: Global::Resize */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00674770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x674770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  uVar2 = iVar3 - *(int *)((int)(uintptr_t)this) >> 2;
  if (param_1 < uVar2) {
    iVar1 = *(int *)this + param_1 * 4;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *((int *)GEN_TOP(((int)this + 4))) = iVar1;
      return uVar2;
    }
  }
  else if (uVar2 < param_1) {
    F_00673b50(this GEN_EDX_ARG,param_1 - uVar2);
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar3 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 2); iVar3 != 0; iVar3 = iVar3 - 1) {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2 + (param_1 - ((int)(uVar2 - *(int *)this) >> 2)) * 4;
  }
  return uVar2;
}

/* ref: Global::PushOverflowLocked */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00674800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x674800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4018));
  F_00673cc0(((undefined *)GEN_TOP(((int)this + 0x4008))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[0]));
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4018)));
}

/* ref: Global::PushBack_00674840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00674840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x674840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar1) && (puVar3 = *(undefined4 * PTR32 *)this, puVar3 <= param_1)) {
    if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      puVar1 = ((undefined4 *)GEN_TOP(F_00673f10(this GEN_EDX_FWD,1)));
    }
    puVar3 = ((undefined4 *)GEN_TOP((((int)param_1 - (int)puVar3 & 0xffffffe0U) + *(int *)this)));
  }
  else {
    puVar3 = param_1;
    if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      puVar1 = ((undefined4 *)GEN_TOP(F_00673f10(this GEN_EDX_ARG,1)));
    }
  }
  if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined4 *)GEN_TOP(0x0))) {
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x20;
  return (uint)puVar1;
}

/* ref: Global::VectorDeletingDestructor_006748a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006748a0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6748a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  
  if ((param_2 & 2) != 0) {
    piVar1 = ((int *)GEN_TOP((param_1 - 4)));
    iVar4 = *piVar1 - 1;
    if (-1 < iVar4) {
      puVar3 = ((undefined4 *)GEN_TOP((*piVar1 * 0x2c + 4 + param_1)));
      do {
        iVar2 = puVar3[-0xb];
        if (iVar2 != 0) {
          F_00429760(iVar2,puVar3[-9] - iVar2 & 0xffffffe0,0xd8);
        }
        iVar4 = iVar4 - 1;
        puVar3[-0xb] = 0;
        puVar3[-10] = 0;
        puVar3[-9] = 0;
        puVar3 = puVar3 - 0xb;
      } while (-1 < iVar4);
    }
    if (((param_2 & 1) != 0) && (piVar1 != ((int *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,piVar1);
    }
    return (uint)piVar1;
  }
  iVar4 = *((int *)GEN_TOP((param_1 + 4)));
  if (iVar4 != 0) {
    F_00429760(iVar4,*((int *)GEN_TOP((param_1 + 0xc))) - iVar4 & 0xffffffe0,0xd8);
  }
  *((undefined4 *)GEN_TOP((param_1 + 4))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return param_1;
}

/* ref: Client::Graphics::Render::ShadowManager::ScalarDeletingDestructor */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006749b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6749b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00674b50(this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_006749c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006749c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6749c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  int * this_00;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  uint * puVar4;
  
  puVar4 = *((uint * PTR32 *)GEN_TOP(((int)this + 8)));
  this_00 = ((int *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar4) && (puVar3 = ((uint *)GEN_TOP(*this_00)), puVar3 <= param_1)) {
    if (puVar4 == *((uint * PTR32 *)GEN_TOP(((int)this + 0xc)))) {
      F_00673f10(this_00 GEN_EDX_FWD,1);
    }
    puVar4 = *((uint * PTR32 *)GEN_TOP(((int)this + 8)));
    puVar3 = ((uint *)GEN_TOP((((int)param_1 - (int)puVar3 & 0xffffffe0U) + *this_00)));
  }
  else {
    if (puVar4 == *((uint * PTR32 *)GEN_TOP(((int)this + 0xc)))) {
      F_00673f10(this_00 GEN_EDX_ARG,1);
    }
    puVar4 = *((uint * PTR32 *)GEN_TOP(((int)this + 8)));
    puVar3 = param_1;
  }
  if (puVar4 != ((uint *)GEN_TOP(0x0))) {
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 0x20;
  uVar1 = *param_1;
  *((uint *)GEN_TOP(((int)this + 0x24))) = *((uint *)GEN_TOP(((int)this + 0x24))) | uVar1;
  return uVar1;
}

/* ref: Client::Graphics::Render::ShadowManager::~ShadowManager */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00674a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x674a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ac310));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10ac2f8));
  iVar1 = *(int *)(this + 0x148);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)(this + 0x150) - iVar1 >> 2) * 4,0xd3);
  }
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  iVar1 = *(int *)(this + 0x138);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)(this + 0x140) - iVar1 >> 3) * 8,0xd3);
  }
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  iVar1 = *(int *)(this + 0x128);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)(this + 0x130) - iVar1 >> 2) * 4,0xd3);
  }
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  F_00672bb0(this + 0x118 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**(undefined4 * PTR32 *)(this + 0x11c),*(undefined4 * PTR32 *)(this + 0x11c));
  F_00429760(*(undefined4 *)(this + 0x11c),0x14,0xd3);
  F_004d6680((undefined *)(this + 4) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb4c));
  return;
}

/* ref: Client::Graphics::Render::ShadowManager::ScalarDeletingDestructor_00674b50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00674b50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x674b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00674a40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::DestroyTree_00674b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00674b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x674b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00672c60(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x1c,0xd2);
  return (uint)uVar1;
}

/* ref: Global::PushBack_00674bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00674bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x674bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00674660(this GEN_EDX_FWD,1);
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
      F_00674660(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: Global::PushBack_00674c30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00674c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x674c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_006746d0(this GEN_EDX_FWD,1);
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
      F_006746d0(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: Global::Append */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00674ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x674ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint * puVar1;
  uint uVar2;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x4004)));
  uVar2 = _InterlockedExchangeAdd((volatile gen_long *)(puVar1), (gen_long)(1));
  if (0xfff < uVar2) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4018));
    F_00673cc0(((undefined *)GEN_TOP(((int)this + 0x4008))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[0]));
    return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4018)));
  }
  *((undefined4 *)GEN_TOP(((int)this + uVar2 * 4 + 4))) = (*(undefined4 *)&gen_args[0]);
  return 0;
}

/* ref: Global::Flush */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00674d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x674d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * PTR32 * ppvVar1;
  int iVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x4004)));
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x1000));
  ppvVar1 = ((undefined * PTR32 *)GEN_TOP(((int)this + 0x4004)));
  if (0xfff < uVar3) {
    ppvVar1 = &(*(undefined * PTR32 *)(gen_frame + 0x0));
  }
  F_004a13a0(((undefined *)GEN_TOP((REFG(int, 0x137104c) + 0x11b0))) GEN_EDX_FWD,0,(int)this + 4,*ppvVar1);
  iVar2 = *((int *)GEN_TOP(((int)this + 0x400c))) - *((int *)GEN_TOP(((int)this + 0x4008))) >> 2;
  if (iVar2 != 0) {
    F_004a13a0(((undefined *)GEN_TOP((REFG(int, 0x137104c) + 0x11b0))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x4008))),iVar2);
  }
  uVar3 = F_00674770(((undefined *)GEN_TOP(((int)this + 0x4008))) GEN_EDX_ARG,0);
  *((undefined4 *)GEN_TOP(((int)this + 0x4004))) = 0;
  return uVar3;
}

/* ref: Client::Graphics::Render::LightingManager::ScalarDeletingDestructor */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00674d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x674d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00675230(this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Client::Graphics::Render::LightingManager::~LightingManager */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00674da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x674da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * pLVar1;
  int * piVar2;
  undefined * pLVar3;
  int iVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)(this + 0x82c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 0x820) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ac330));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10ac318));
  pLVar3 = this + 0x820;
  iVar4 = 2;
  do {
    pLVar3 = pLVar3 - 0xc;
    iVar4 = iVar4 - 1;
    *(undefined * PTR32 * PTR32 *)pLVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  pLVar3 = this + 0x7fc;
  iVar4 = 2;
  do {
    pLVar3 = pLVar3 - 0xc;
    iVar4 = iVar4 - 1;
    *(undefined * PTR32 * PTR32 *)pLVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  pLVar3 = this + 0x7d8;
  iVar4 = 3;
  do {
    pLVar3 = pLVar3 - 0xc;
    iVar4 = iVar4 - 1;
    *(undefined * PTR32 * PTR32 *)pLVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  pLVar3 = this + 0x7a8;
  iVar4 = 1;
  do {
    pLVar3 = pLVar3 - 0xc;
    iVar4 = iVar4 - 1;
    *(undefined * PTR32 * PTR32 *)pLVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  pLVar3 = this + 0x790;
  iVar4 = 2;
  do {
    pLVar3 = pLVar3 - 0xc;
    iVar4 = iVar4 - 1;
    *(undefined * PTR32 * PTR32 *)pLVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  *(undefined * PTR32 * PTR32 *)(this + 0x760) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)(this + 0x754) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)(this + 0x748) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)(this + 0x73c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  pLVar3 = this + 0x73c;
  iVar4 = 1;
  do {
    pLVar3 = pLVar3 - 0xc;
    iVar4 = iVar4 - 1;
    *(undefined * PTR32 * PTR32 *)pLVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  pLVar3 = this + 0x724;
  iVar4 = 1;
  do {
    pLVar3 = pLVar3 - 0xc;
    iVar4 = iVar4 - 1;
    *(undefined * PTR32 * PTR32 *)pLVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  pLVar3 = this + 0x70c;
  iVar4 = 2;
  do {
    pLVar3 = pLVar3 - 0xc;
    iVar4 = iVar4 - 1;
    *(undefined * PTR32 * PTR32 *)pLVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  pLVar3 = this + 0x6e8;
  iVar4 = 1;
  do {
    pLVar3 = pLVar3 - 0xc;
    iVar4 = iVar4 - 1;
    *(undefined * PTR32 * PTR32 *)pLVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  pLVar3 = this + 0x6d0;
  iVar4 = 1;
  do {
    pLVar3 = pLVar3 - 0xc;
    iVar4 = iVar4 - 1;
    *(undefined * PTR32 * PTR32 *)pLVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  pLVar3 = this + 0x6b8;
  iVar4 = 3;
  do {
    pLVar3 = pLVar3 - 0xc;
    iVar4 = iVar4 - 1;
    *(undefined * PTR32 * PTR32 *)pLVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  pLVar3 = this + 0x688;
  iVar4 = 1;
  do {
    pLVar3 = pLVar3 - 0xc;
    iVar4 = iVar4 - 1;
    *(undefined * PTR32 * PTR32 *)pLVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar4);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x3));
  pLVar3 = this + 0x670;
  do {
    piVar2 = *(int * PTR32 *)(pLVar3 - 0x30);
    *(undefined * PTR32 * PTR32 *)(pLVar3 - 0x40) = (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_FWD);
      *(undefined4 *)(pLVar3 - 0x30) = 0;
    }
    piVar2 = *(int * PTR32 *)(pLVar3 - 0x2c);
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
      *(undefined4 *)(pLVar3 - 0x2c) = 0;
    }
    pLVar1 = (*(undefined * PTR32 *)(gen_frame + 0x0)) - 1;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = pLVar1;
    pLVar3 = pLVar3 - 0x40;
  } while (-1 < (int)pLVar1);
  piVar2 = *(int * PTR32 *)(this + 0x540);
  *(undefined * PTR32 * PTR32 *)(this + 0x530) = (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x540) = 0;
  }
  piVar2 = *(int * PTR32 *)(this + 0x544);
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x544) = 0;
  }
  piVar2 = *(int * PTR32 *)(this + 0x500);
  *(undefined * PTR32 * PTR32 *)(this + 0x4f0) = (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x500) = 0;
  }
  piVar2 = *(int * PTR32 *)(this + 0x504);
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x504) = 0;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x8));
  pLVar3 = this + 0x4f0;
  do {
    piVar2 = *(int * PTR32 *)(pLVar3 - 0x30);
    *(undefined * PTR32 * PTR32 *)(pLVar3 - 0x40) = (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
      *(undefined4 *)(pLVar3 - 0x30) = 0;
    }
    piVar2 = *(int * PTR32 *)(pLVar3 - 0x2c);
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
      *(undefined4 *)(pLVar3 - 0x2c) = 0;
    }
    pLVar1 = (*(undefined * PTR32 *)(gen_frame + 0x0)) - 1;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = pLVar1;
    pLVar3 = pLVar3 - 0x40;
  } while (-1 < (int)pLVar1);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x1));
  pLVar3 = this + 0x2b0;
  do {
    piVar2 = *(int * PTR32 *)(pLVar3 - 0x30);
    *(undefined * PTR32 * PTR32 *)(pLVar3 - 0x40) = (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
      *(undefined4 *)(pLVar3 - 0x30) = 0;
    }
    piVar2 = *(int * PTR32 *)(pLVar3 - 0x2c);
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
      *(undefined4 *)(pLVar3 - 0x2c) = 0;
    }
    pLVar1 = (*(undefined * PTR32 *)(gen_frame + 0x0)) - 1;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = pLVar1;
    pLVar3 = pLVar3 - 0x40;
  } while (-1 < (int)pLVar1);
  piVar2 = *(int * PTR32 *)(this + 0x200);
  *(undefined * PTR32 * PTR32 *)(this + 0x1f0) = (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x200) = 0;
  }
  piVar2 = *(int * PTR32 *)(this + 0x204);
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x204) = 0;
  }
  piVar2 = *(int * PTR32 *)(this + 0x1c0);
  *(undefined * PTR32 * PTR32 *)(this + 0x1b0) = (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x1c0) = 0;
  }
  piVar2 = *(int * PTR32 *)(this + 0x1c4);
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x1c4) = 0;
  }
  iVar4 = *(int *)(this + 400);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)(this + 0x198) - iVar4 >> 2) * 4,0xd2);
  }
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  iVar4 = *(int *)(this + 0x180);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)(this + 0x188) - iVar4 >> 2) * 4,0xd2);
  }
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  iVar4 = *(int *)(this + 0x170);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)(this + 0x178) - iVar4 >> 2) * 4,0xd2);
  }
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  iVar4 = *(int *)(this + 0x160);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)(this + 0x168) - iVar4 >> 2) * 4,0xd2);
  }
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  iVar4 = *(int *)(this + 0x150);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)(this + 0x158) - iVar4 >> 2) * 4,0xd2);
  }
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  iVar4 = *(int *)(this + 0x140);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)(this + 0x148) - iVar4 >> 2) * 4,0xd2);
  }
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  F_00672c60(this + 0x130 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**(undefined4 * PTR32 *)(this + 0x134),*(undefined4 * PTR32 *)(this + 0x134));
  F_00429760(*(undefined4 *)(this + 0x134),0x1c,0xd2);
  F_004d6680((undefined *)(this + 4) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb54));
  return;
}

/* ref: Client::Graphics::Render::LightingManager::ScalarDeletingDestructor_00675230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00675230(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x675230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00674da0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00675260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00675260(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x675260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x50 + (param_2 & 1) * 4)));
}

/* ref: Global::ArcTangent */
GEN_OWN GEN_FRAME float10 F_006752f0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x6752f0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)param_1,5)));
  return (float10)(float)fVar2;
}

/* ref: Global::ExpandRect */
GEN_OWN GEN_FRAME uint F_00675320(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x675320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *param_1 = *param_1 - param_2;
  param_1[2] = param_1[2] + param_2;
  param_1[1] = param_1[1] - param_3;
  param_1[3] = param_1[3] + param_3;
  return (uint)param_1;
}

/* ref: Global::ComputeUvScaleOffset */
GEN_OWN GEN_FRAME unsigned int F_00675340(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x675340u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  float10 fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = (float10)1;
  *((undefined4 *)GEN_TOP((param_1 + 4))) = 0;
  *((undefined4 *)GEN_TOP(param_1)) = 0;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP((param_1 + 0xc))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((param_1 + 0xc))), REFG(float, 0x1087f04));
  *((undefined4 *)GEN_TOP((param_1 + 8))) = uVar2;
  if ((param_3 != 0) && (param_2 != ((int *)GEN_TOP(0x0)))) {
    fVar4 = (float10)*param_2;
    if (*param_2 < 0) {
      fVar4 = GEN_X87(fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    fVar5 = (float10)param_2[1];
    if (param_2[1] < 0) {
      fVar5 = GEN_X87(fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    *((float *)GEN_TOP(param_1)) =
         ((float)GEN_TOF(((float10)(float)(fVar1 / fVar4) * (float10)*((int *)GEN_TOP(param_3)) + (float10)0)));
    *((float *)GEN_TOP((param_1 + 4))) =
         ((float)GEN_TOF(((float10)(float)(fVar1 / fVar5) * (float10)*((int *)GEN_TOP((param_3 + 4))) + (float10)0)));
    iVar3 = *param_2 - *((int *)GEN_TOP((param_3 + 8)));
    fVar6 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar6 = GEN_X87(fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    *((float *)GEN_TOP((param_1 + 8))) = ((float)GEN_TOF((fVar1 - fVar6 * (float10)(float)(fVar1 / fVar4))));
    iVar3 = param_2[1] - *((int *)GEN_TOP((param_3 + 0xc)));
    fVar4 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar4 = GEN_X87(fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    *((float *)GEN_TOP((param_1 + 0xc))) = ((float)GEN_TOF((fVar1 - fVar4 * (float10)(float)(fVar1 / fVar5))));
  }
  if ((param_5 != ((int *)GEN_TOP(0x0))) && (param_4 != ((int *)GEN_TOP(0x0)))) {
    fVar4 = (float10)*param_4;
    if (*param_4 < 0) {
      fVar4 = GEN_X87(fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    fVar5 = (float10)param_4[1];
    if (param_4[1] < 0) {
      fVar5 = GEN_X87(fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    *((float *)GEN_TOP(param_1)) =
         ((float)GEN_TOF(((float10)*((float *)GEN_TOP(param_1)) - (float10)(float)(fVar1 / fVar4) * (float10)*param_5)));
    *((float *)GEN_TOP((param_1 + 4))) =
         ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 4))) -
                (float10)(float)(fVar1 / fVar5) * (float10)param_5[1])));
    fVar6 = GEN_X87((float10)(*param_4 - param_5[2]));
    if (*param_4 - param_5[2] < 0) {
      fVar6 = GEN_X87(fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    *((float *)GEN_TOP((param_1 + 8))) =
         ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 8))) + fVar6 * (float10)(float)(fVar1 / fVar4))));
    iVar3 = param_4[1] - param_5[3];
    fVar4 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar4 = GEN_X87(fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    *((float *)GEN_TOP((param_1 + 0xc))) =
         ((float)GEN_TOF((fVar4 * (float10)(float)(fVar1 / fVar5) + (float10)*((float *)GEN_TOP((param_1 + 0xc))))));
    return 0;
  }
  return 0;
}

/* ref: FUN_006754b0 */
GEN_OWN GEN_FRAME unsigned int F_006754b0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6754b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  ((undefined4 *)(gen_frame + 0x0))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[0], REFG(float, 0x1099848));
  ((undefined4 *)(gen_frame + 0x0))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[1], REFG(float, 0x1099848));
  ((undefined4 *)(gen_frame + 0x0))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[2], REFG(float, 0x1094808));
  ((undefined4 *)(gen_frame + 0x0))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[3], REFG(float, 0x1099848));
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1099848)));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094808)));
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094808)));
  (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094808)));
  puVar2 = ((undefined4 *)(gen_frame + 0x0));
  puVar3 = param_1;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: FUN_00675510 */
GEN_OWN GEN_FRAME unsigned int F_00675510(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x675510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x4c, 4, 4);
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  ((undefined4 *)(gen_frame + 0x0))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[0], REFG(float, 0x10adb70));
  ((undefined4 *)(gen_frame + 0x0))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[1], REFG(float, 0x10adb70));
  ((undefined4 *)(gen_frame + 0x0))[2] = 0;
  ((undefined4 *)(gen_frame + 0x0))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[3], REFG(float, 0x10adb70));
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb6c)));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb70)));
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb70)));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb6c)));
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb70)));
  (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb6c)));
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb6c)));
  (*(undefined4 *)(gen_frame + 0x40)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb6c)));
  (*(undefined4 *)(gen_frame + 0x44)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb6c)));
  puVar2 = ((undefined4 *)(gen_frame + 0x0));
  puVar3 = param_1;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: FUN_006755a0 */
GEN_OWN GEN_FRAME unsigned int F_006755a0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6755a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x84, 12, 4);
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  ((undefined4 *)(gen_frame + 0x0))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[0], REFG(float, 0x10adb78));
  ((undefined4 *)(gen_frame + 0x0))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[1], REFG(float, 0x10adb78));
  ((undefined4 *)(gen_frame + 0x0))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[2], REFG(float, 0x10ac274));
  ((undefined4 *)(gen_frame + 0x0))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[3], REFG(float, 0x10adb78));
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac160)));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb78)));
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb74)));
  (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb78)));
  (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb78)));
  (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac274)));
  (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac274)));
  (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac274)));
  (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac160)));
  (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac274)));
  (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb74)));
  (*(undefined4 *)(gen_frame + 0x3c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac274)));
  (*(undefined4 *)(gen_frame + 0x40)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb78)));
  (*(undefined4 *)(gen_frame + 0x44)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac160)));
  (*(undefined4 *)(gen_frame + 0x48)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac274)));
  (*(undefined4 *)(gen_frame + 0x4c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac160)));
  (*(undefined4 *)(gen_frame + 0x50)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac160)));
  (*(undefined4 *)(gen_frame + 0x54)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac160)));
  (*(undefined4 *)(gen_frame + 0x58)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb74)));
  (*(undefined4 *)(gen_frame + 0x5c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac160)));
  (*(undefined4 *)(gen_frame + 0x60)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb78)));
  (*(undefined4 *)(gen_frame + 0x64)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb74)));
  (*(undefined4 *)(gen_frame + 0x68)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac274)));
  (*(undefined4 *)(gen_frame + 0x6c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb74)));
  (*(undefined4 *)(gen_frame + 0x70)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac160)));
  (*(undefined4 *)(gen_frame + 0x74)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb74)));
  (*(undefined4 *)(gen_frame + 0x78)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb74)));
  (*(undefined4 *)(gen_frame + 0x7c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb74)));
  puVar2 = ((undefined4 *)(gen_frame + 0x0));
  puVar3 = param_1;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: FUN_00675680 */
GEN_OWN GEN_FRAME unsigned int F_00675680(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x675680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x4c, 4, 4);
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  ((undefined4 *)(gen_frame + 0x0))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[0], REFG(float, 0x1090708));
  ((undefined4 *)(gen_frame + 0x0))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[1], REFG(float, 0x1090708));
  ((undefined4 *)(gen_frame + 0x0))[2] = 0;
  ((undefined4 *)(gen_frame + 0x0))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[3], REFG(float, 0x1090708));
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x40)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x44)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  puVar2 = ((undefined4 *)(gen_frame + 0x0));
  puVar3 = param_1;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: FUN_00675710 */
GEN_OWN GEN_FRAME unsigned int F_00675710(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x675710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  ((undefined4 *)(gen_frame + 0x0))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[0], REFG(float, 0x1090708));
  ((undefined4 *)(gen_frame + 0x0))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[1], REFG(float, 0x109cab8));
  ((undefined4 *)(gen_frame + 0x0))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[2], REFG(float, 0x1087f04));
  ((undefined4 *)(gen_frame + 0x0))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[3], REFG(float, 0x1088068));
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cab8)));
  (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  puVar2 = ((undefined4 *)(gen_frame + 0x0));
  puVar3 = param_1;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: FUN_00675780 */
GEN_OWN GEN_FRAME unsigned int F_00675780(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x675780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  ((undefined4 *)(gen_frame + 0x0))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[0], REFG(float, 0x109cab8));
  ((undefined4 *)(gen_frame + 0x0))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[1], REFG(float, 0x109cab8));
  ((undefined4 *)(gen_frame + 0x0))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[2], REFG(float, 0x1088068));
  ((undefined4 *)(gen_frame + 0x0))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[3], REFG(float, 0x109cab8));
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cab8)));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  puVar2 = ((undefined4 *)(gen_frame + 0x0));
  puVar3 = param_1;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: FUN_006757e0 */
GEN_OWN GEN_FRAME unsigned int F_006757e0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6757e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x6c, 4, 4);
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  ((undefined4 *)(gen_frame + 0x0))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[1], REFG(float, 0x109cb08));
  (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cb08)));
  ((undefined4 *)(gen_frame + 0x0))[0] = 0;
  ((undefined4 *)(gen_frame + 0x0))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[2], REFG(float, 0x1090708));
  ((undefined4 *)(gen_frame + 0x0))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[3], REFG(float, 0x1090708));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x4c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x58)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x5c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
  puVar2 = ((undefined4 *)(gen_frame + 0x0));
  puVar3 = param_1;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: FUN_006758a0 */
GEN_OWN GEN_FRAME unsigned int F_006758a0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6758a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x4c, 4, 4);
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  ((undefined4 *)(gen_frame + 0x0))[0] = 0;
  ((undefined4 *)(gen_frame + 0x0))[1] = 0;
  ((undefined4 *)(gen_frame + 0x0))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[2], REFG(float, 0x10adb80));
  ((undefined4 *)(gen_frame + 0x0))[3] = 0;
  ((undefined4 *)(gen_frame + 0x0))[4] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[4], REFG(float, 0x10adb7c));
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb80)));
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb7c)));
  (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb80)));
  (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb80)));
  (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb80)));
  (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb7c)));
  (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb7c)));
  (*(undefined4 *)(gen_frame + 0x3c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb80)));
  (*(undefined4 *)(gen_frame + 0x40)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb7c)));
  (*(undefined4 *)(gen_frame + 0x44)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb7c)));
  puVar2 = ((undefined4 *)(gen_frame + 0x0));
  puVar3 = param_1;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: FUN_00675930 */
GEN_OWN GEN_FRAME uint F_00675930(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x675930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = uVar1;
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[2] = uVar2;
  if (param_2 == '\0') {
    uVar1 = 0;
  }
  param_1[3] = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cb08)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cb08)));
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[4] = uVar2;
  if (param_2 == '\0') {
    uVar1 = 0;
  }
  param_1[5] = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb88)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb88)));
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[6] = uVar2;
  if (param_2 == '\0') {
    uVar1 = 0;
  }
  param_1[7] = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb84)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb84)));
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[8] = uVar2;
  if (param_2 == '\0') {
    uVar1 = 0;
  }
  param_1[9] = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[10] = uVar2;
  if (param_2 == '\0') {
    uVar1 = 0;
  }
  param_1[0xb] = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[0xc] = uVar2;
  if (param_2 == '\0') {
    uVar1 = 0;
  }
  param_1[0xd] = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087ef8)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087ef8)));
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[0xe] = uVar2;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094870)));
  if (param_2 == '\0') {
    uVar1 = 0;
  }
  param_1[0xf] = uVar1;
  uVar1 = uVar2;
  if (param_2 != '\0') {
    uVar1 = 0;
  }
  param_1[0x10] = uVar1;
  uVar1 = 0;
  if (param_2 != '\0') {
    uVar1 = uVar2;
  }
  param_1[0x11] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00675a90 */
GEN_OWN GEN_FRAME uint F_00675a90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x675a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb98)));
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = uVar1;
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[2] = uVar2;
  if (param_2 == '\0') {
    uVar1 = 0;
  }
  param_1[3] = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb94)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb94)));
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[4] = uVar2;
  if (param_2 == '\0') {
    uVar1 = 0;
  }
  param_1[5] = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb90)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb90)));
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[6] = uVar2;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb8c)));
  if (param_2 == '\0') {
    uVar1 = 0;
  }
  param_1[7] = uVar1;
  uVar1 = uVar2;
  if (param_2 != '\0') {
    uVar1 = 0;
  }
  param_1[8] = uVar1;
  uVar1 = 0;
  if (param_2 != '\0') {
    uVar1 = uVar2;
  }
  param_1[9] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00675b60 */
GEN_OWN_GS GEN_FRAME uint F_00675b60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x675b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_GS(0x3c, 4, 4);
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adba0)));
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb88)));
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb84)));
  uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac048)));
  uVar7 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cb08)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  GEN_COOKIE((*(uint *)(gen_frame + 0x34)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x38));
  (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  ((undefined4 *)(gen_frame + 0x20))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x20))[0], REFG(float, 0x10928e4));
  ((undefined4 *)(gen_frame + 0x20))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x20))[1], REFG(float, 0x1087ef8));
  ((undefined4 *)(gen_frame + 0x20))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x20))[2], REFG(float, 0x1094870));
  ((undefined4 *)(gen_frame + 0x20))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x20))[3], REFG(float, 0x10a509c));
  ((undefined4 *)(gen_frame + 0x0))[0] = 0;
  ((undefined4 *)(gen_frame + 0x0))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[1], REFG(float, 0x1090708));
  ((undefined4 *)(gen_frame + 0x0))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[2], REFG(float, 0x109cb08));
  ((undefined4 *)(gen_frame + 0x0))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[3], REFG(float, 0x10adb88));
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb84)));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac048)));
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adba0)));
  ((undefined4 *)(gen_frame + 0x20))[4] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x20))[4], REFG(float, 0x10adb9c));
  *param_1 = 0;
  param_1[1] = 0;
  uVar8 = uVar2;
  if (param_2 != '\0') {
    uVar8 = 0;
  }
  param_1[2] = uVar8;
  if (param_2 == '\0') {
    uVar2 = 0;
  }
  param_1[3] = uVar2;
  uVar2 = uVar7;
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[4] = uVar2;
  if (param_2 == '\0') {
    uVar7 = 0;
  }
  param_1[5] = uVar7;
  uVar2 = uVar3;
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[6] = uVar2;
  if (param_2 == '\0') {
    uVar3 = 0;
  }
  param_1[7] = uVar3;
  uVar2 = uVar4;
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[8] = uVar2;
  if (param_2 == '\0') {
    uVar4 = 0;
  }
  param_1[9] = uVar4;
  uVar2 = uVar5;
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[10] = uVar2;
  if (param_2 == '\0') {
    uVar5 = 0;
  }
  param_1[0xb] = uVar5;
  uVar2 = uVar6;
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[0xc] = uVar2;
  if (param_2 == '\0') {
    uVar6 = 0;
  }
  param_1[0xd] = uVar6;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[0xe] = uVar2;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (param_2 == '\0') {
    uVar2 = 0;
  }
  param_1[0xf] = uVar2;
  uVar1 = 8;
  do {
    if (param_2 == '\0') {
      uVar2 = ((undefined4 *)(gen_frame + 0x0))[(int)(uVar1)];
    }
    else {
      uVar2 = 0;
    }
    param_1[uVar1 * 2] = uVar2;
    if (param_2 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = ((undefined4 *)(gen_frame + 0x0))[(int)(uVar1)];
    }
    param_1[uVar1 * 2 + 1] = uVar2;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xd);
  return (uint)param_1;
}

/* ref: FUN_00675d60 */
GEN_OWN GEN_FRAME uint F_00675d60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x675d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbb8)));
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = uVar1;
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[2] = uVar2;
  if (param_2 == '\0') {
    uVar1 = 0;
  }
  param_1[3] = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbb4)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbb4)));
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[4] = uVar2;
  if (param_2 == '\0') {
    uVar1 = 0;
  }
  param_1[5] = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbb0)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbb0)));
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[6] = uVar2;
  if (param_2 == '\0') {
    uVar1 = 0;
  }
  param_1[7] = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbac)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbac)));
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[8] = uVar2;
  if (param_2 == '\0') {
    uVar1 = 0;
  }
  param_1[9] = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adba8)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adba8)));
  if (param_2 != '\0') {
    uVar2 = 0;
  }
  param_1[10] = uVar2;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adba4)));
  if (param_2 == '\0') {
    uVar1 = 0;
  }
  param_1[0xb] = uVar1;
  uVar1 = uVar2;
  if (param_2 != '\0') {
    uVar1 = 0;
  }
  param_1[0xc] = uVar1;
  uVar1 = 0;
  if (param_2 != '\0') {
    uVar1 = uVar2;
  }
  param_1[0xd] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00675e70 */
GEN_OWN GEN_FRAME unsigned int F_00675e70(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x675e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x84, 12, 4);
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  ((undefined4 *)(gen_frame + 0x0))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[0], REFG(float, 0x10adbd0));
  ((undefined4 *)(gen_frame + 0x0))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[1], REFG(float, 0x10adbd0));
  ((undefined4 *)(gen_frame + 0x0))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[2], REFG(float, 0x10adbcc));
  ((undefined4 *)(gen_frame + 0x0))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[3], REFG(float, 0x10adbd0));
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbd0)));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbcc)));
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbcc)));
  (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbcc)));
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbc4)));
  (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbc4)));
  (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbc0)));
  (*(undefined4 *)(gen_frame + 0x3c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbc0)));
  (*(undefined4 *)(gen_frame + 0x40)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbbc)));
  (*(undefined4 *)(gen_frame + 0x44)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbc4)));
  (*(undefined4 *)(gen_frame + 0x48)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbc4)));
  (*(undefined4 *)(gen_frame + 0x4c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbbc)));
  (*(undefined4 *)(gen_frame + 0x50)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbc8)));
  (*(undefined4 *)(gen_frame + 0x54)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbc4)));
  (*(undefined4 *)(gen_frame + 0x58)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbc0)));
  (*(undefined4 *)(gen_frame + 0x5c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbbc)));
  (*(undefined4 *)(gen_frame + 0x60)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbbc)));
  (*(undefined4 *)(gen_frame + 0x64)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbc0)));
  (*(undefined4 *)(gen_frame + 0x68)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbc4)));
  (*(undefined4 *)(gen_frame + 0x6c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbc8)));
  (*(undefined4 *)(gen_frame + 0x70)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbc8)));
  (*(undefined4 *)(gen_frame + 0x74)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbc0)));
  (*(undefined4 *)(gen_frame + 0x78)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbc0)));
  (*(undefined4 *)(gen_frame + 0x7c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adbc8)));
  puVar2 = ((undefined4 *)(gen_frame + 0x0));
  puVar3 = param_1;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: FUN_00675f70 */
GEN_OWN GEN_FRAME unsigned int F_00675f70(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0x675f70u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)1;
  fVar2 = (float10)param_2;
  fVar3 = GEN_X87((float10)((float)GEN_TOF((fVar1 / ((float10)param_5 - (float10)param_4)))));
  *param_1 = ((float)GEN_TOF((fVar3 * (float10)(float)(fVar1 / fVar2))));
  fVar4 = (float10)param_3;
  param_1[1] = ((float)GEN_TOF(((((fVar4 - fVar2) * (fVar3 * (float10)param_4)) / fVar4 + fVar1) *
                      (float10)((float)GEN_TOF(((fVar2 - fVar4) / (fVar2 * fVar4)))))));
  return 0;
}

/* ref: FUN_00675fd0 */
GEN_OWN GEN_FRAME uint F_00675fd0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x675fd0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  *param_1 = param_2;
  param_1[1] = ((float)GEN_TOF((((float10)param_3 - (float10)param_2) / (float10)param_4)));
  return (uint)param_1;
}

/* ref: Global::BuildGrayscaleMatrix */
GEN_OWN GEN_FRAME unsigned int F_00675ff0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x675ff0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
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
  fVar4 = GEN_X87((float10)1 - fVar4);
  *param_1 = (float)((float10)fVar1 + fVar4);
  param_1[5] = (float)((float10)fVar2 + fVar4);
  param_1[10] = (float)((float10)fVar3 + fVar4);
  return 0;
}

/* ref: Global::BuildContrastMatrix */
GEN_OWN GEN_FRAME uint F_00676060(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x676060u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
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

/* ref: Global::BuildTintMatrix */
GEN_OWN GEN_FRAME unsigned int F_006760c0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x6760c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar4 = (float10)param_3;
  fVar1 = (float)(fVar4 * (float10)*((float *)GEN_TOP(param_2)));
  *((float *)GEN_TOP((param_1 + 0x20))) = fVar1;
  *((float *)GEN_TOP(param_1)) = fVar1;
  *((float *)GEN_TOP((param_1 + 0x10))) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 4))) * fVar4)));
  *((float *)GEN_TOP((param_1 + 0x24))) = fVar2;
  *((float *)GEN_TOP((param_1 + 0x14))) = fVar2;
  *((float *)GEN_TOP((param_1 + 4))) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 8))) * fVar4)));
  *((float *)GEN_TOP((param_1 + 0x28))) = fVar3;
  *((float *)GEN_TOP((param_1 + 0x18))) = fVar3;
  *((float *)GEN_TOP((param_1 + 8))) = fVar3;
  fVar4 = GEN_X87((float10)1 - fVar4);
  *((undefined4 *)GEN_TOP((param_1 + 0x38))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x34))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x30))) = 0;
  *((float *)GEN_TOP(param_1)) = (float)((float10)fVar1 + fVar4);
  *((float *)GEN_TOP((param_1 + 0x14))) = (float)((float10)fVar2 + fVar4);
  *((float *)GEN_TOP((param_1 + 0x28))) = ((float)GEN_TOF((fVar4 + (float10)*((float *)GEN_TOP((param_1 + 0x28))))));
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectSystem::ReleaseResources */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00676160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x676160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x5c);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x5c) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x54);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x54) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x4c);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x4c) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x48);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x48) = 0;
  }
  return;
}

/* ref: FUN_006761b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006761b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6761b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  if (((param_2 != -1) && (iVar1 = *((int *)GEN_TOP((in_ecx + 8 + param_2 * 4))), iVar1 != 0)) &&
     (*((int *)GEN_TOP((iVar1 + 0x98))) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: Global::SetRenderTarget_006761f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006761f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6761f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  char cVar1;
  uint uVar2;
  int * piVar3;
  
  if (param_1 < 4) {
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 8))))(param_2 GEN_EDX_FWD);
    }
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 0x18)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
    }
    *((int * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) = param_2;
    *((undefined1 *)GEN_TOP(((int)this + 0x42))) = 0;
    uVar2 = 0;
    piVar3 = ((int *)GEN_TOP(((int)this + 0x18)));
    do {
      if (*piVar3 == 0) {
        return;
      }
      cVar1 = (char)uVar2;
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
      *((char *)GEN_TOP(((int)this + 0x42))) = cVar1 + '\x01';
    } while (uVar2 < 4);
  }
  return;
}

/* ref: FUN_00676250 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00676250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x676250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  }
  *((int * PTR32 *)GEN_TOP(((int)this + 0x28))) = param_1;
  return;
}

/* ref: FUN_00676280 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00676280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x676280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((ushort *)GEN_TOP(((int)this + 0x38))) = (ushort)param_1;
  *((undefined2 *)GEN_TOP(((int)this + 0x3a))) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_006762a0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_006762a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6762a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((ushort *)GEN_TOP(((int)this + 0x3c))) = (ushort)param_1;
  *((undefined2 *)GEN_TOP(((int)this + 0x3e))) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_006762c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006762c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x6762c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  *((byte *)GEN_TOP((param_1 + 0x48))) =
       ((param_3 & 1) * '\x02' | param_2 & 1) * '\x02' | *((byte *)GEN_TOP((param_1 + 0x48))) & 0xf9;
  *((byte *)GEN_TOP((param_1 + 0x43))) = param_4;
  return param_4;
}

/* ref: FUN_006762f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006762f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6762f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  *((byte *)GEN_TOP((param_1 + 0x48))) = *((byte *)GEN_TOP((param_1 + 0x48))) ^ (*((byte *)GEN_TOP((param_1 + 0x48))) ^ param_2) & 1;
  uVar1 = *param_3;
  *((uint *)GEN_TOP((param_1 + 0x34))) = uVar1;
  return uVar1;
}

/* ref: FUN_00676310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00676310(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x676310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((uint *)GEN_TOP((in_ecx + 0x4c))) ^ param_2) & 0xf;
  *((uint *)GEN_TOP((in_ecx + 0x4c))) = *((uint *)GEN_TOP((in_ecx + 0x4c))) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00676330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00676330(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x676330u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 8)));
  *((float *)GEN_TOP((uVar1 + 0x20))) = param_2;
  return uVar1;
}

/* ref: Global::ReplaceTexture */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00676350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x676350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    uVar2 = 0;
    if (*((char *)GEN_TOP(((int)this + 0x41))) != '\0') {
      iVar3 = 0;
      do {
        if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4 + iVar3))) == param_1) {
          if (param_2 != ((int *)GEN_TOP(0x0))) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 8))))(param_2 GEN_EDX_FWD);
          }
          if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4 + iVar3))) != 0) {
            piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4 + iVar3)));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
          }
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4 + iVar3))) = param_2;
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0xc;
      } while (uVar2 < *((byte *)GEN_TOP(((int)this + 0x41))));
    }
    if (*((int * PTR32 *)GEN_TOP(((int)this + 0x14))) == param_1) {
      *((int * PTR32 *)GEN_TOP(((int)this + 0x14))) = param_2;
    }
  }
  return 0;
}

/* ref: FUN_006763e0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006763e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6763e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adc0c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x50))) = (*(undefined * PTR32 (*)[5])REFP(0x10adbf4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x80))) = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  F_004d6680(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  return;
}

/* ref: Global::Vector4Scale */
GEN_OWN GEN_FRAME uint F_00676430(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x676430u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_1 = (float)(fVar1 * (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] * fVar1);
  param_1[2] = (float)((float10)param_2[2] * fVar1);
  param_1[3] = (float)(fVar1 * (float10)param_2[3]);
  return (uint)param_2;
}

/* ref: Global::Vector4Lerp */
GEN_OWN GEN_FRAME unsigned int F_00676460(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x676460u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_4;
  fVar2 = GEN_X87((float10)(float)((float10)1 - fVar1));
  *param_1 = (float)((float10)*param_3 * fVar1 + fVar2 * (float10)*param_2);
  param_1[1] = (float)((float10)param_3[1] * fVar1 + (float10)param_2[1] * fVar2);
  param_1[2] = (float)((float10)param_3[2] * fVar1 + (float10)param_2[2] * fVar2);
  param_1[3] = (float)(fVar2 * (float10)param_2[3] + (float10)param_3[3] * fVar1);
  return 0;
}

/* ref: Global::ClearPasses */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00676510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x676510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    do {
      if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4))) != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4)));
        if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *((uint *)GEN_TOP(((int)this + 8))));
  }
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar4 = F_00406b30(*((int *)GEN_TOP(((int)this + 4))));
    uVar3 = (uint)uVar4;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: FUN_00676590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00676590(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x676590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xc))) = param_2;
  return param_2;
}

/* ref: Global::SetInputTexture */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006765a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6765a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) != param_1) {
    if ((*((int *)GEN_TOP(((int)this + 0xc))) != 0) && (uVar1 = 0, *((int *)GEN_TOP(((int)this + 8))) != 0)) {
      do {
        if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar1 * 4))) != 0) {
          F_00676350(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar1 * 4))) GEN_EDX_FWD,
                         *((undefined4 *)GEN_TOP(((int)this + 0xc))),param_1);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *((uint *)GEN_TOP(((int)this + 8))));
    }
    *((int *)GEN_TOP(((int)this + 0xc))) = param_1;
  }
  return;
}

/* ref: Global::SetOutputTarget */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006765f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6765f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 8))) - 1;
  if (-1 < iVar2) {
    piVar4 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4)));
    while (*piVar4 == 0) {
      piVar4 = piVar4 - 1;
      iVar2 = iVar2 - 1;
      if (iVar2 < 0) {
        return 0;
      }
    }
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4)));
    if (param_1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
    }
    piVar4 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x18)));
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
    }
    *((int * PTR32 *)GEN_TOP((iVar2 + 0x18))) = param_1;
    *((undefined1 *)GEN_TOP((iVar2 + 0x42))) = 0;
    uVar3 = 0;
    piVar4 = ((int *)GEN_TOP((iVar2 + 0x18)));
    do {
      if (*piVar4 == 0) {
        return 0;
      }
      cVar1 = (char)uVar3;
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
      *((char *)GEN_TOP((iVar2 + 0x42))) = cVar1 + '\x01';
    } while (uVar3 < 4);
  }
  return 0;
}

/* ref: Global::ReleaseResources_00676670 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00676670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x676670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    F_0050c620(*((int *)GEN_TOP(((int)this + 4))),0,0);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    uVar2 = F_0050c620(*((int *)GEN_TOP(((int)this + 8))),0,0);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  return uVar2;
}

/* ref: Global::ZeroVector4 */
GEN_OWN GEN_FRAME uint F_00676700(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x676700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return 0;
}

/* ref: Global::TestBit_00676720 */
GEN_OWN GEN_FRAME uint F_00676720(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x676720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (uint)((1 << ((byte)param_2 & 0x1f) & *((uint *)GEN_TOP((param_1 + (param_2 >> 5) * 4)))) != 0);
}

/* ref: Global::AssignBit */
GEN_OWN GEN_FRAME uint F_00676750(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x676750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 1 << ((byte)param_2 & 0x1f);
  uVar2 = param_2 >> 5;
  if (param_3 != '\0') {
    puVar1 = ((uint *)GEN_TOP((param_1 + uVar2 * 4)));
    *puVar1 = *puVar1 | uVar3;
    return uVar2;
  }
  puVar1 = ((uint *)GEN_TOP((param_1 + uVar2 * 4)));
  *puVar1 = *puVar1 & ~uVar3;
  return uVar2;
}

/* ref: Global::ReleaseAllSlots */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00676790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x676790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  piVar3 = ((int *)GEN_TOP(((int)this + 0x604)));
  iVar2 = 5;
  do {
    iVar4 = 0x80;
    do {
      piVar1 = ((int *)GEN_TOP(*piVar3));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return;
}

/* ref: Global::AllocateSlot_006767d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006767d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6767d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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
      puVar1 = ((uint *)GEN_TOP(((int)this + uVar5 * 4 + 0x1004)));
      *puVar1 = *puVar1 | 1 << (bVar2 & 0x1f);
      uVar4 = ~(1 << (bVar2 & 0x1f) | 1U >> 0x20 - (bVar2 & 0x1f));
      puVar1 = ((uint *)GEN_TOP(((int)this + uVar5 * 4 + 0x1014)));
      *puVar1 = *puVar1 & uVar4;
      puVar1 = ((uint *)GEN_TOP(((int)this + uVar5 * 4 + 0x1024)));
      *puVar1 = *puVar1 & uVar4;
      puVar1 = ((uint *)GEN_TOP(((int)this + uVar5 * 4 + 0x1034)));
      *puVar1 = *puVar1 & uVar4;
      puVar1 = ((uint *)GEN_TOP(((int)this + uVar5 * 4 + 0x1044)));
      *puVar1 = *puVar1 & uVar4;
      puVar1 = ((uint *)GEN_TOP(((int)this + uVar5 * 4 + 0x1054)));
      *puVar1 = *puVar1 & uVar4;
      return uVar3;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x80);
  return 0xffffffff;
}

/* ref: Global::FreeSlot */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00676850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x676850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = ~(1 << ((byte)param_1 & 0x1f));
  puVar1 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1004)));
  *puVar1 = *puVar1 & uVar2;
  return uVar2;
}

/* ref: Global::Release_00676880 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00676880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x676880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  F_00676510(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD);
  uVar2 = F_00676510(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  return uVar2;
}

/* ref: FUN_00676920 */
GEN_OWN GEN_FRAME float10 F_00676920(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x676920u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_006769a0 */
GEN_OWN GEN_FRAME byte F_006769a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6769a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  if (param_1 != 0) {
    uVar1 = 0;
    if (*((uint *)GEN_TOP((param_1 + 0xc))) != 0) {
      piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 4)));
      do {
        if (*piVar2 == param_2) {
          return 1;
        }
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 2;
      } while (uVar1 < *((uint *)GEN_TOP((param_1 + 0xc))));
    }
  }
  return 0;
}

/* ref: FUN_006769e0 */
GEN_OWN GEN_FRAME byte F_006769e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6769e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  if (param_1 != 0) {
    uVar1 = 0;
    if (*((uint *)GEN_TOP((param_1 + 0x14))) != 0) {
      piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x18))) + 4)));
      do {
        if (*piVar2 == param_2) {
          return 1;
        }
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 2;
      } while (uVar1 < *((uint *)GEN_TOP((param_1 + 0x14))));
    }
  }
  return 0;
}

/* ref: FUN_00676a20 */
GEN_OWN GEN_FRAME unsigned int F_00676a20(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x676a20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
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

/* ref: Global::GetTextureByteSize */
GEN_OWN GEN_FRAME uint F_00676bd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x676bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_004d5c60(*((undefined4 *)GEN_TOP((param_1 + 0x28))));
  return uVar1 * *((int *)GEN_TOP((param_1 + 0x1c))) * *((int *)GEN_TOP((param_1 + 0x18))) >> 3;
}

/* ref: Global::MakeRectFromSize */
GEN_OWN GEN_FRAME uint F_00676c00(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x676c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
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
GEN_OWN GEN_FRAME float10 F_00676c30(GEN_P(float param_1, float gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0x676c30u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = (float10)param_2;
  fVar1 = (float10)1;
  fVar3 = (float10)param_3;
  fVar4 = GEN_X87((float10)((float)GEN_TOF((fVar1 / ((float10)param_5 - (float10)param_4)))));
  return GEN_X87((float10)((float)GEN_TOF((fVar1 / ((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar2 - fVar3) /
                                                                    (fVar2 * fVar3)))) *
                                                   (((fVar4 * (float10)param_4) * (fVar3 - fVar2)) /
                                                    fVar3 + fVar1)))) * (float10)param_1 +
                                  (float10)((float)GEN_TOF((fVar4 * (float10)(float)(fVar1 / fVar2)))))))));
}

/* ref: FUN_00676cb0 */
GEN_OWN GEN_FRAME float10 F_00676cb0(GEN_P(float param_1, float gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0x676cb0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = (float10)param_2;
  fVar1 = (float10)1;
  fVar3 = (float10)param_3;
  fVar4 = GEN_X87((float10)((float)GEN_TOF((fVar1 / ((float10)param_5 - (float10)param_4)))));
  return GEN_X87((float10)((float)GEN_TOF(((fVar1 / (float10)param_1 -
                          (float10)((float)GEN_TOF((fVar4 * (float10)(float)(fVar1 / fVar2))))) /
                         (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar2 - fVar3) / (fVar2 * fVar3)))) *
                                         (((fVar4 * (float10)param_4) * (fVar3 - fVar2)) / fVar3 +
                                         fVar1))))))));
}

/* ref: Global::BuildHueRotationMatrix */
GEN_OWN GEN_NOFRAME unsigned int F_00676e60(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x676e60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
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
                                                    -(float10)((float)GEN_TOF(GEN_X87(SQRT(fVar6)))) - fVar7) + fVar5))) /
                 fVar8)));
  fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar5 + (float10)(float)((float10)(float)fVar4 *
                                                            (float10)((float)GEN_TOF(GEN_X87(SQRT(fVar6)))) - fVar7)))) /
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
GEN_OWN GEN_FRAME unsigned int F_00676f60(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x676f60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar2 = REFG(float, 0x10adc54);
  fVar1 = REFG(float, 0x10adc50);
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
    fVar3 = GEN_X87((float10)1 - (float10)1 / ((float10)*(double *)&REFG(undefined, 0x10adc48) - (float10)param_2));
  }
  else {
    fVar3 = -(float10)param_2;
  }
  F_00687660(param_1 GEN_EDX_ARG,(float)fVar3);
  fVar3 = (float10)1;
  *param_1 = (float)((float10)*param_1 + fVar3);
  param_1[5] = (float)((float10)param_1[5] + fVar3);
  param_1[10] = (float)(fVar3 + (float10)param_1[10]);
  return;
}

/* ref: FUN_00677010 */
GEN_OWN GEN_FRAME uint F_00677010(unsigned int gen_a0, float gen_a1)
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
  *((undefined4 *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x24))) = 0;
  fVar1 = (float10)REFG(double, 0x1088130);
  *((undefined4 *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x10))) = 0;
  fVar4 = (float)((float10)fVar4 + fVar1);
  *((undefined4 *)GEN_TOP(((*(uint *)&gen_args[0]) + 8))) = 0;
  *((undefined4 *)GEN_TOP(((*(uint *)&gen_args[0]) + 4))) = 0;
  *((float *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x28))) = fVar4;
  (*(uint *)&gen_args[0]) = 0;
  *((float *)GEN_TOP((uVar2 + 0x14))) = fVar4;
  pfVar3 = (float *)&(*(uint *)&gen_args[0]);
  *((float *)GEN_TOP(uVar2)) = fVar4;
  if (!((float10)(*(float *)&gen_args[1]) < (float10)0)) {
    pfVar3 = &(*(float *)&gen_args[1]);
  }
  fVar4 = *pfVar3;
  *((float *)GEN_TOP((uVar2 + 0x38))) = fVar4;
  *((float *)GEN_TOP((uVar2 + 0x34))) = fVar4;
  *((float *)GEN_TOP((uVar2 + 0x30))) = fVar4;
  return (uint)pfVar3;
}

/* ref: FUN_006770a0 */
GEN_OWN GEN_FRAME unsigned int F_006770a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x6770a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  undefined4 uVar1;
  float10 fVar2;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
  param_1[5] = uVar1;
  param_1[10] = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cab8)));
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
    F_006876d0(param_1 GEN_EDX_ARG,(float)((float10)*(double *)&REFG(undefined, 0x10adc48) - (float10)param_2));
  }
  else {
    F_00687660(param_1 GEN_EDX_ARG,(float)((float10)param_2 + (float10)REFG(double, 0x1088130)));
  }
  fVar2 = (float10)REFG(double, 0x1088108);
  param_1[0xc] = (undefined4)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_1[0xc]))) + fVar2));
  param_1[0xd] = (undefined4)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_1[0xd]))) + fVar2));
  param_1[0xe] = (undefined4)gen_fl2bits((float)(fVar2 + ((float10)GEN_TOD(gen_bits2f(param_1[0xe])))));
  return;
}

/* ref: FUN_00677150 */
GEN_OWN GEN_FRAME unsigned int F_00677150(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x677150u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
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
  F_00687660(param_1 GEN_EDX_ARG,param_2);
  fVar1 = GEN_X87((float10)1 - (float10)param_2);
  *param_1 = (float)((float10)*param_1 + fVar1);
  param_1[5] = (float)((float10)param_1[5] + fVar1);
  param_1[10] = (float)(fVar1 + (float10)param_1[10]);
  return;
}

/* ref: Client::Graphics::PostEffect::PostEffectSystem::PostEffectSystem */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00677210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x677210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)(this + 4) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10adc80));
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  *(undefined4 *)(this + 0x58) = 0xffffffff;
  *(undefined4 *)(this + 0x5c) = 0;
  REFG(undefined4, 0x148809c) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectSystem::AcquireSamplingShader */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00677290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x677290u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (*(int *)&gen_args[0]);
  (*(int * PTR32 *)(gen_frame + 0x0)) = param_1;
  if ((*(int *)&gen_args[0]) != -1) {
    if (param_1[(*(int *)&gen_args[0]) + 2] == 0) {
      F_004ff310(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD,5,0);
      puVar1 = (&REFG(undefined * PTR32, 0x1322348))[(int)(iVar2)];
      (*(int *)&gen_args[0]) = 0x73686364;
      if ((*(char *)&gen_args[1]) == '\0') {
        uVar3 = F_00513d20(&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(int *)&gen_args[0]),puVar1,0,0,0);
      }
      else {
        uVar3 = F_00513d70(&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(int *)&gen_args[0]),puVar1,0,0,0);
      }
    }
    else {
      uVar3 = F_00513f60(param_1[(*(int *)&gen_args[0]) + 2],0,0);
    }
    param_1[iVar2 + 2] = uVar3;
    if (uVar3 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG);
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectSystem::ReleaseSamplingShader */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00677320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x677320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  if ((param_1 != -1) && (*(int *)(this + param_1 * 4 + 8) != 0)) {
    piVar2 = ((int *)GEN_TOP((*(int *)(this + param_1 * 4 + 8) + 0x94)));
    iVar1 = _InterlockedExchangeAdd((volatile gen_long *)(piVar2), 0);
    F_0050c620(*(undefined4 *)(this + param_1 * 4 + 8),0,0);
    if (iVar1 < 2) {
      *(undefined4 *)(this + param_1 * 4 + 8) = 0;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00677380 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00677380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x677380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = REFG(undefined4, 0x130235c);
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = REFG(undefined4, 0x1302350);
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((uint *)GEN_TOP(((int)this + 0x44))) = *((uint *)GEN_TOP(((int)this + 0x44))) | 0xff;
  *((byte *)GEN_TOP(((int)this + 0x48))) = *((byte *)GEN_TOP(((int)this + 0x48))) & 0xf8;
  *((uint *)GEN_TOP(((int)this + 0x4c))) = *((uint *)GEN_TOP(((int)this + 0x4c))) & 0xfffffff0;
  *((undefined2 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x3a))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3e))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x42))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectShader::Release */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006773f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6773f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  undefined * pPVar5;
  int iVar6;
  
  piVar2 = *(int * PTR32 *)(this + 0x28);
  uVar4 = 0;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x28) = 0;
  }
  if (this[0x42] != (undefined1)0x0) {
    pPVar5 = this + 0x18;
    do {
      piVar2 = *(int * PTR32 *)pPVar5;
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
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
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
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
        piVar2 = ((int *)GEN_TOP(*piVar2));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
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
      piVar3 = ((int *)GEN_TOP((*piVar1 + 0x94)));
      iVar6 = _InterlockedExchangeAdd((volatile gen_long *)(piVar3), 0);
      F_0050c620(*piVar1,0,0);
      if (iVar6 < 2) {
        *piVar1 = 0;
      }
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    }
  }
  *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0xff;
  return uVar4;
}

/* ref: FUN_00677550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00677550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x677550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  *((uint *)GEN_TOP(((int)this + 0x2c))) = *param_1 & 0x1f;
  return (uint)param_1;
}

/* ref: FUN_00677570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00677570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x677570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  *((uint *)GEN_TOP(((int)this + 0x30))) = *param_1 & 0x7ffffff;
  return (uint)param_1;
}

/* ref: Client::Graphics::PostEffect::PostEffectShader::SetSourceRect */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00677590(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x677590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  
  fVar1 = *((float *)GEN_TOP(param_2));
  fVar2 = *((float *)GEN_TOP((param_2 + 4)));
  fVar3 = *((float *)GEN_TOP((param_2 + 0xc)));
  pfVar4 = *((float * PTR32 *)GEN_TOP((param_1 + 8)));
  *pfVar4 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 8))) - (float10)fVar1)));
  pfVar4[1] = (float)((float10)fVar3 - (float10)fVar2);
  pfVar4[2] = fVar1;
  pfVar4[3] = fVar2;
  return (uint)pfVar4;
}

/* ref: Client::Graphics::PostEffect::PostEffectShader::SetDestRect */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006775f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6775f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  fVar1 = *((float *)GEN_TOP(param_2));
  fVar2 = *((float *)GEN_TOP((param_2 + 4)));
  fVar3 = *((float *)GEN_TOP((param_2 + 0xc)));
  uVar4 = *((uint *)GEN_TOP((param_1 + 8)));
  *((float *)GEN_TOP((uVar4 + 0x10))) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 8))) - (float10)fVar1)));
  *((float *)GEN_TOP((uVar4 + 0x14))) = (float)((float10)fVar3 - (float10)fVar2);
  *((float *)GEN_TOP((uVar4 + 0x18))) = fVar1;
  *((float *)GEN_TOP((uVar4 + 0x1c))) = fVar2;
  return uVar4;
}

/* ref: Client::Graphics::PostEffect::PostEffectShader::SetUserConstants */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00677650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x677650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  undefined * pPVar2;
  undefined * pPVar3;
  undefined * PTR32 * ppPVar4;
  ulonglong uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  iVar1 = *(int *)(this + 8);
  pPVar3 = ((undefined *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x24))) << 4)));
  pPVar2 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) * 8)));
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = pPVar3;
  (*(undefined * PTR32 *)&gen_args[1]) = pPVar2;
  ppPVar4 = &(*(undefined * PTR32 *)&gen_args[1]);
  if (pPVar3 <= pPVar2) {
    ppPVar4 = &(*(undefined * PTR32 *)(gen_frame + 0x0));
  }
  uVar5 = F_00c46aa0(iVar1 + 0x28,(*(undefined4 *)&gen_args[0]),*ppPVar4);
  return (uint)uVar5;
}

/* ref: Client::Graphics::PostEffect::PostEffectShader::ResetConstants */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00677690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x677690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  puVar1 = *(undefined4 * PTR32 *)(this + 8);
  *puVar1 = GEN_FLT_TO(*puVar1, REFG(float, 0x1087f04));
  puVar1[1] = uVar2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar3 = *(int *)(this + 8);
  *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = uVar2;
  *((undefined4 *)GEN_TOP((iVar3 + 0x14))) = uVar2;
  *((undefined4 *)GEN_TOP((iVar3 + 0x18))) = 0;
  *((undefined4 *)GEN_TOP((iVar3 + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0x24))) = *(undefined4 *)(&REFG(undefined, 0x10ac578) + (char)this[0x44] * 4)
  ;
  iVar3 = *(int *)(this + 8);
  uVar5 = 0;
  if (*((int *)GEN_TOP((iVar3 + 0x24))) != 0) {
    iVar4 = 0;
    do {
      *((undefined4 *)GEN_TOP((iVar4 + 0x28 + iVar3))) = 0;
      *((undefined4 *)GEN_TOP((iVar4 + 0x2c + iVar3))) = 0;
      *((undefined4 *)GEN_TOP((iVar4 + 0x30 + iVar3))) = 0;
      *((undefined4 *)GEN_TOP((iVar4 + 0x34 + iVar3))) = 0;
      iVar3 = *(int *)(this + 8);
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x10;
    } while (uVar5 < *((uint *)GEN_TOP((iVar3 + 0x24))));
  }
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectShader::SetTexture */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00677770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x677770u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 8))))(param_2 GEN_EDX_FWD);
  }
  iVar3 = param_1 * 0xc;
  if (*((int *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar3))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar3)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  }
  *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar3))) = param_2;
  uVar2 = *param_3;
  *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8 + iVar3))) = uVar2 & 0xfffffff;
  return uVar2 & 0xfffffff;
}

/* ref: Client::Graphics::PostEffect::PostEffectShader::SetMainTexture */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006777d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x6777d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 8))))(param_2 GEN_EDX_FWD);
  }
  iVar3 = param_1 * 0xc;
  if (*((int *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar3))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar3)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  }
  *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar3))) = param_2;
  uVar2 = *param_3;
  *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8 + iVar3))) = uVar2 & 0xfffffff;
  *(int * PTR32 *)(this + 0x14) = param_2;
  return uVar2 & 0xfffffff;
}

/* ref: Client::Graphics::PostEffect::PostEffectRepeatShader::PostEffectRepeatShader */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00677830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x677830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00677380(this GEN_EDX_FWD);
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adc94));
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectRepeatShader::Release */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00677850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x677850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x50);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x50) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x54);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x54) = 0;
  }
  uVar2 = F_006773f0((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::Graphics::PostEffect::PostEffectMeasureLumShader::PostEffectMeasureLumShader */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00677890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x677890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pPVar1;
  undefined * pPVar2;
  int iVar3;
  
  F_00677380(this GEN_EDX_FWD);
  pPVar2 = this + 0x60;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adcb0));
  iVar3 = 2;
  pPVar1 = this + 0x96;
  do {
    *(undefined * PTR32 * PTR32 *)pPVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
    *(undefined4 *)(pPVar1 - 0x32) = 0;
    *(undefined4 *)(pPVar1 - 0x2e) = 0;
    *(undefined4 *)(pPVar1 - 0x2a) = 0;
    *(undefined4 *)(pPVar1 - 0x26) = 0;
    *(undefined4 *)(pPVar1 - 0x22) = 0;
    *(undefined4 *)(pPVar1 - 0xe) = 0;
    *(undefined4 *)(pPVar1 - 10) = REFG(undefined4, 0x130235c);
    *(undefined4 *)(pPVar1 - 6) = REFG(undefined4, 0x1302350);
    *(undefined4 *)(pPVar1 - 2) = 0;
    *(uint *)(pPVar1 + 0xe) = *(uint *)(pPVar1 + 0xe) | 0xff;
    pPVar1[0x12] = (undefined1)((byte)pPVar1[0x12] & 0xf8);
    *(uint *)(pPVar1 + 0x16) = *(uint *)(pPVar1 + 0x16) & 0xfffffff0;
    *(undefined2 *)(pPVar1 + 2) = 0;
    *(undefined2 *)(pPVar1 + 4) = 0;
    *(undefined2 *)(pPVar1 + 6) = 0;
    *(undefined4 *)(pPVar1 + 8) = 0;
    *(undefined2 *)(pPVar1 + 0xc) = 0;
    *(undefined4 *)(pPVar1 - 0x1e) = 0;
    *(undefined4 *)(pPVar1 - 0x1a) = 0;
    *(undefined4 *)(pPVar1 - 0x16) = 0;
    *(undefined4 *)(pPVar1 - 0x12) = 0;
    pPVar2 = pPVar2 + 0x50;
    pPVar1 = pPVar1 + 0x50;
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectMeasureLumShader::Release */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00677960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x677960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  undefined * pPVar6;
  
  pPVar6 = this + 0x60;
  iVar4 = 3;
  do {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pPVar6 + 8))))(pPVar6 GEN_EDX_FWD);
    pPVar6 = pPVar6 + 0x50;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  piVar2 = *(int * PTR32 *)(this + 0x28);
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x28) = 0;
  }
  if (this[0x42] != (undefined1)0x0) {
    pPVar6 = this + 0x18;
    uVar5 = 0;
    do {
      piVar2 = *(int * PTR32 *)pPVar6;
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
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
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
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
        piVar2 = ((int *)GEN_TOP(*piVar2));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
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
      piVar3 = ((int *)GEN_TOP((*piVar1 + 0x94)));
      iVar4 = _InterlockedExchangeAdd((volatile gen_long *)(piVar3), 0);
      F_0050c620(*piVar1,0,0);
      if (iVar4 < 2) {
        *piVar1 = 0;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    }
  }
  *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0xff;
  pPVar6 = this + 0x50;
  iVar4 = 4;
  do {
    piVar2 = *(int * PTR32 *)pPVar6;
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
      *(int *)pPVar6 = 0;
    }
    pPVar6 = pPVar6 + 4;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectAdaptLumShader::PostEffectAdaptLumShader */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00677b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x677b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00677380(this GEN_EDX_FWD);
  F_004d6630((undefined *)(this + 0x50) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adc0c));
  *(undefined * PTR32 * PTR32 *)(this + 0x50) = (*(undefined * PTR32 (*)[5])REFP(0x10adbf4));
  F_00677380(this + 0x80 GEN_EDX_ARG);
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectAdaptLumShader::Release */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00677b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x677b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined * pPVar3;
  int iVar4;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x80) + 8))))(this + 0x80 GEN_EDX_FWD);
  uVar2 = F_006773f0((undefined *)this GEN_EDX_ARG);
  piVar1 = *(int * PTR32 *)(this + 0x7c);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x7c) = 0;
  }
  pPVar3 = this + 0x5c;
  iVar4 = 8;
  do {
    piVar1 = *(int * PTR32 *)pPVar3;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      *(int *)pPVar3 = 0;
    }
    pPVar3 = pPVar3 + 4;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return uVar2;
}

/* ref: Client::Graphics::PostEffect::PostEffectBloomShader::PostEffectBloomShader */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00677bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x677bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pPVar1;
  undefined * pPVar2;
  int iVar3;
  
  F_00677380(this GEN_EDX_FWD);
  pPVar2 = this + 0x58;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adccc));
  iVar3 = 2;
  pPVar1 = this + 0x8e;
  do {
    *(undefined * PTR32 * PTR32 *)pPVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
    *(undefined4 *)(pPVar1 - 0x32) = 0;
    *(undefined4 *)(pPVar1 - 0x2e) = 0;
    *(undefined4 *)(pPVar1 - 0x2a) = 0;
    *(undefined4 *)(pPVar1 - 0x26) = 0;
    *(undefined4 *)(pPVar1 - 0x22) = 0;
    *(undefined4 *)(pPVar1 - 0xe) = 0;
    *(undefined4 *)(pPVar1 - 10) = REFG(undefined4, 0x130235c);
    *(undefined4 *)(pPVar1 - 6) = REFG(undefined4, 0x1302350);
    *(undefined4 *)(pPVar1 - 2) = 0;
    *(uint *)(pPVar1 + 0xe) = *(uint *)(pPVar1 + 0xe) | 0xff;
    pPVar1[0x12] = (undefined1)((byte)pPVar1[0x12] & 0xf8);
    *(uint *)(pPVar1 + 0x16) = *(uint *)(pPVar1 + 0x16) & 0xfffffff0;
    *(undefined2 *)(pPVar1 + 2) = 0;
    *(undefined2 *)(pPVar1 + 4) = 0;
    *(undefined2 *)(pPVar1 + 6) = 0;
    *(undefined4 *)(pPVar1 + 8) = 0;
    *(undefined2 *)(pPVar1 + 0xc) = 0;
    *(undefined4 *)(pPVar1 - 0x1e) = 0;
    *(undefined4 *)(pPVar1 - 0x1a) = 0;
    *(undefined4 *)(pPVar1 - 0x16) = 0;
    *(undefined4 *)(pPVar1 - 0x12) = 0;
    pPVar2 = pPVar2 + 0x50;
    pPVar1 = pPVar1 + 0x50;
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectBloomShader::Release */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00677c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x677c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  undefined * pPVar6;
  
  pPVar6 = this + 0x58;
  iVar4 = 3;
  do {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pPVar6 + 8))))(pPVar6 GEN_EDX_FWD);
    pPVar6 = pPVar6 + 0x50;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  piVar2 = *(int * PTR32 *)(this + 0x28);
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x28) = 0;
  }
  if (this[0x42] != (undefined1)0x0) {
    pPVar6 = this + 0x18;
    uVar5 = 0;
    do {
      piVar2 = *(int * PTR32 *)pPVar6;
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
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
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
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
        piVar2 = ((int *)GEN_TOP(*piVar2));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
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
      piVar3 = ((int *)GEN_TOP((*piVar1 + 0x94)));
      iVar4 = _InterlockedExchangeAdd((volatile gen_long *)(piVar3), 0);
      F_0050c620(*piVar1,0,0);
      if (iVar4 < 2) {
        *piVar1 = 0;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    }
  }
  *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0xff;
  pPVar6 = this + 0x50;
  iVar4 = 2;
  do {
    piVar2 = *(int * PTR32 *)pPVar6;
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
      *(int *)pPVar6 = 0;
    }
    pPVar6 = pPVar6 + 4;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectStarShader::PostEffectStarShader */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00677e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x677e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00677380(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adce8));
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectStarShader::Release */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00677e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x677e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined * pPVar3;
  int iVar4;
  
  uVar2 = F_006773f0((undefined *)this GEN_EDX_FWD);
  pPVar3 = this + 0x50;
  iVar4 = 2;
  do {
    piVar1 = *(int * PTR32 *)pPVar3;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      *(int *)pPVar3 = 0;
    }
    pPVar3 = pPVar3 + 4;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return uVar2;
}

/* ref: Client::Graphics::PostEffect::PostEffectFogShader::Release */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00677e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x677e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined * pPVar3;
  int iVar4;
  
  uVar2 = F_006773f0((undefined *)this GEN_EDX_FWD);
  pPVar3 = this + 0x50;
  iVar4 = 3;
  do {
    piVar1 = *(int * PTR32 *)pPVar3;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      *(int *)pPVar3 = 0;
    }
    pPVar3 = pPVar3 + 4;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return uVar2;
}

/* ref: Client::Graphics::PostEffect::PostEffectDofCocShader::PostEffectDofCocShader */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00677ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x677ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00677380(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10add04));
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectDofCocShader::Release */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00677ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x677ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined * pPVar3;
  int iVar4;
  
  uVar2 = F_006773f0((undefined *)this GEN_EDX_FWD);
  pPVar3 = this + 0x50;
  iVar4 = 3;
  do {
    piVar1 = *(int * PTR32 *)pPVar3;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      *(int *)pPVar3 = 0;
    }
    pPVar3 = pPVar3 + 4;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return uVar2;
}

/* ref: Client::Graphics::PostEffect::PostEffectCameraVelocityShader::PostEffectCameraVelocityShader */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00677ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x677ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00677380(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10add20));
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectMoonShader::PostEffectMoonShader */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00677f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x677f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00677380(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10add3c));
  *(undefined4 *)(this + 0x50) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectMoonShader::Release */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00677f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x677f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_006773f0((undefined *)this GEN_EDX_FWD);
  uVar1 = 0;
  if (*(int *)(this + 0x50) != 0) {
    uVar1 = F_0050c620(*(int *)(this + 0x50),0,0);
    *(undefined4 *)(this + 0x50) = 0;
  }
  return uVar1;
}

/* ref: FUN_00677f90 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00677f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x677f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  bVar5 = 1;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    uVar6 = 0;
    do {
      if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar6 * 4))) != 0) {
        iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar6 * 4)));
        iVar3 = (int)*((char *)GEN_TOP((iVar1 + 0x44)));
        if ((((iVar3 == -1) || (*((int *)GEN_TOP((REFG(int, 0x148809c) + 8 + iVar3 * 4))) == 0)) ||
            (*((int *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x148809c) + 8 + iVar3 * 4))) + 0x98))) == 0)) ||
           ((*((byte *)GEN_TOP((iVar1 + 0x48))) & 8) == 0)) {
          piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar6 * 4)));
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_FWD);
          if ((char)uVar4 == '\0') {
            bVar5 = 0;
          }
          else {
            uVar4 = 1 << GEN_SHC((byte)uVar6, (unsigned int)(uintptr_t)uVar6);
            *((uint *)GEN_TOP(((int)this + 0x1c))) = ~uVar4 & *((uint *)GEN_TOP(((int)this + 0x1c))) | uVar4;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *((uint *)GEN_TOP(((int)this + 8))));
  }
  return bVar5;
}

/* ref: FUN_00678010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00678010(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x678010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  *((uint *)GEN_TOP((param_1 + 0x1c))) =
       (uint)(param_3 != '\0') << GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2) |
       ~(1 << GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2)) & *((uint *)GEN_TOP((param_1 + 0x1c)));
  return param_1;
}

/* ref: Global::LoadLensFlareShaders */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00678040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x678040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    F_0050c620(*((int *)GEN_TOP(((int)this + 4))),0,0);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    F_0050c620(*((int *)GEN_TOP(((int)this + 8))),0,0);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  F_004ff310(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,5,0);
  (*(undefined4 *)(gen_frame + 0x4)) = 0x73686364;
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),((char *)REFP(0x10ac854)),0,0,0);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),((char *)REFP(0x10ac874)),0,0,0);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
    return 0;
  }
  return uVar1 != 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectRoofQuery::PostEffectRoofQuery */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006780f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6780f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10adc38));
  F_00c48350(this + 0x604,0,0xa00);
  return (uint)this;
}

/* ref: FUN_00678120 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00678120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x678120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *((undefined4 *)GEN_TOP(((int)this + param_1 * 0xc + 4))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + param_1 * 0xc + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + param_1 * 0xc + 0xc))) = uVar2;
  uVar3 = 1 << ((byte)param_1 & 0x1f);
  if ((*((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1064))) & uVar3) == 0) {
    return 0xffffffff;
  }
  return (uint)((*((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1074))) & uVar3) != 0);
}

/* ref: FUN_006781a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006781a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x6781a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x28))) = param_2;
  return;
}

/* ref: FUN_006781c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006781c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6781c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int * piVar2;
  char cVar3;
  uint uVar4;
  int * piVar5;
  
  iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x18)));
  piVar5 = ((int *)GEN_TOP((iVar1 + 0x18)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  }
  *piVar5 = (int)param_1;
  *((undefined1 *)GEN_TOP((iVar1 + 0x42))) = 0;
  uVar4 = 0;
  do {
    if (*piVar5 == 0) {
      return 0;
    }
    cVar3 = (char)uVar4;
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 1;
    *((char *)GEN_TOP((iVar1 + 0x42))) = cVar3 + '\x01';
  } while (uVar4 < 4);
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectManager::~PostEffectManager */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00678260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x678260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pPVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10add70));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10add58));
  *(undefined * PTR32 * PTR32 *)(this + 0x3d0) = (*(undefined * PTR32 (*)[1])REFP(0x10adc38));
  *(undefined * PTR32 * PTR32 *)(this + 0x374) = (*(undefined * PTR32 (*)[1])REFP(0x10adc30));
  pPVar1 = this + 0x374;
  iVar2 = 0x1a;
  do {
    pPVar1 = pPVar1 - 0x20;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pPVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10adc28));
  } while (-1 < iVar2);
  F_004d6680((undefined *)(this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10adc40));
  return;
}

/* ref: FUN_006782b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006782b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6782b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float10 fVar8;
  
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0da0)));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  fVar8 = (float10)*(double *)&REFG(undefined, 0x1092098);
  *((undefined4 *)GEN_TOP(((int)this + 0x1518))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x1518))), REFG(float, 0x1087f04));
  *((undefined4 *)GEN_TOP(((int)this + 0x151c))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1524))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x152c))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x152c))), REFG(float, 0x1094724));
  *((undefined4 *)GEN_TOP(((int)this + 0x1530))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x1530))), REFG(float, 0x10abe50));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1520))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1528))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1534))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1544))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x153c))) = uVar2;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10add88)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1538))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1540))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x1548))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1550))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x154c))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1564))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1568))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x156c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1570))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1574))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1578))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x157c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1580))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1584))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1588))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x1588))), REFG(float, 0x10ac050));
  *((undefined4 *)GEN_TOP(((int)this + 0x158c))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x158c))), REFG(float, 0x10ac1a8));
  *((undefined4 *)GEN_TOP(((int)this + 0x1594))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x1594))), REFG(float, 0x10add84));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094820)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1590))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1598))) = uVar2;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((float *)GEN_TOP(((int)this + 0x159c))) = ((float)GEN_TOF(SQRT(fVar8)));
  *((undefined4 *)GEN_TOP(((int)this + 0x15a0))) = uVar1;
  uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10add80)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac168)));
  *((float *)GEN_TOP(((int)this + 0x15a4))) = ((float)GEN_TOF(SQRT((float10)REFG(double, 0x1088108))));
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094884)));
  uVar7 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094880)));
  uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094870)));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 0x15c0))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x15d0))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x15d0))), REFG(float, 0x1094820));
  *((undefined4 *)GEN_TOP(((int)this + 0x15d8))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x15d8))), REFG(float, 0x10920a4));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10add7c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x15ac))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)this + 0x15dc))) = uVar2;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0da0)));
  *((undefined4 *)GEN_TOP(((int)this + 0x15a8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x15b0))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0x15b4))) = 6;
  *((undefined4 *)GEN_TOP(((int)this + 0x15b8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x15bc))) = uVar7;
  *((undefined4 *)GEN_TOP(((int)this + 0x15c4))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0x15c8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x15cc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x15d4))) = uVar6;
  *((undefined4 *)GEN_TOP(((int)this + 0x15e0))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x15e4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x15e8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x15ec))) = 0;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094808)));
  *((undefined4 *)GEN_TOP(((int)this + 0x15f0))) = *((undefined4 *)GEN_TOP(((int)this + 0x1584)));
  *((undefined4 *)GEN_TOP(((int)this + 0x15f4))) = *((undefined4 *)GEN_TOP(((int)this + 0x1588)));
  *((undefined4 *)GEN_TOP(((int)this + 0x15f8))) = *((undefined4 *)GEN_TOP(((int)this + 0x158c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x15fc))) = *((undefined4 *)GEN_TOP(((int)this + 0x1590)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1600))) = *((undefined4 *)GEN_TOP(((int)this + 0x1594)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1608))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x160c))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0x1604))) = *((undefined4 *)GEN_TOP(((int)this + 0x1598)));
  uVar3 = (uint)gen_fl2bits((float)(REFG(float, 0x10920d0)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1624))) = 0;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10add78)));
  *((uint *)GEN_TOP(((int)this + 0x1610))) = *((uint *)GEN_TOP(((int)this + 0x1584))) ^ uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x161c))) = uVar2;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1620))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x1620))), REFG(float, 0x1088068));
  *((undefined4 *)GEN_TOP(((int)this + 0x1628))) = uVar2;
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0da0)));
  *((uint *)GEN_TOP(((int)this + 0x1614))) = *((uint *)GEN_TOP(((int)this + 0x1588))) ^ uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x162c))) = uVar4;
  uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109482c)));
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
  *((uint *)GEN_TOP(((int)this + 0x1618))) = *((uint *)GEN_TOP(((int)this + 0x158c))) ^ uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x1634))) = uVar5;
  uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10add74)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1630))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0x1638))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x163c))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1648))) = uVar5;
  uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10add84)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1640))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0x1644))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x164c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1650))) = uVar7;
  *((undefined4 *)GEN_TOP(((int)this + 0x1654))) = uVar6;
  *((undefined4 *)GEN_TOP(((int)this + 0x1658))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x165c))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1660))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1664))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1668))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1678))) = 4;
  *((undefined4 *)GEN_TOP(((int)this + 0x166c))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x1670))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)this + 0x1674))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1680))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1684))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1688))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0x168c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1690))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x167c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1694))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x1698))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x169c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x16a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x16a4))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x16a8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x16ac))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x16b0))) = uVar6;
  *((undefined4 *)GEN_TOP(((int)this + 0x16b4))) = uVar7;
  *((undefined4 *)GEN_TOP(((int)this + 0x16bc))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x16bc))), REFG(float, 0x10a509c));
  *((undefined4 *)GEN_TOP(((int)this + 0x16c0))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x16c0))), REFG(float, 0x1094834));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094724)));
  *((undefined4 *)GEN_TOP(((int)this + 0x16b8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x16c4))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x16c8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x16cc))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x16d0))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x16d4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x16d8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x16dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x16e0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x16e4))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x16e8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x16ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x16f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x16f4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x16f8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x16fc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1700))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1704))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1708))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x170c))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1710))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1720))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1724))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1714))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1718))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x171c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1728))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x172c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1730))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1734))) = 0;
  return 0;
}

/* ref: FUN_00678870 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00678870(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x678870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xb8))) + 0x10)));
  if (uVar1 != 0) {
    *((undefined1 *)GEN_TOP((uVar1 + 0xd1))) = 1;
  }
  return uVar1;
}

/* ref: FUN_00678890 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00678890(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x678890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = **((uint * PTR32 *)GEN_TOP((in_ecx + 600)));
  if (uVar1 != 0) {
    *((undefined1 *)GEN_TOP((uVar1 + 0x90))) = 0;
  }
  return uVar1;
}

/* ref: FUN_006788d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006788d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6788d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xb8))) + 0x10))) + 0x60)));
}

/* ref: Global::CreateGradientTexture */
GEN_OWN GEN_FRAME uint F_00678900(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(byte * param_3, unsigned int gen_a2), GEN_P(byte * param_4, unsigned int gen_a3), GEN_P(byte * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x678900u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_3 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(byte * param_4 = (byte *)(uintptr_t)gen_a3;)
  GEN_PIN(byte * param_5 = (byte *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x58, 8);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar7;
  undefined * this;
  uint uVar8;
  float * pfVar9;
  float * pfVar10;
  float fVar11;
  undefined1 * puVar12;
  float fVar13;
  uint uVar14;
  float10 fVar15;
  float10 fVar16;
  float fVar17;
  
  this = ((undefined *)GEN_TOP(F_004dca20(param_1,1,0x1450,4,0xb)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  if ((this != ((undefined *)GEN_TOP(0x0))) &&
     (F_004d6dd0(this GEN_EDX_ARG,0,((int *)(gen_frame + 0x0)),2), (*(int *)(gen_frame + 0x8)) != 0)) {
    fVar11 = gen_bits2f(param_1[1]);
    ((float *)(gen_frame + 0x3c))[2] = 0.0;
    if (fVar11 != 0.0) {
      uVar8 = *param_1;
      ((float *)(gen_frame + 0x3c))[1] = 1.4013e-45;
      fVar17 = REFG(float, 0x10a0d8c);
      do {
        ((float *)(gen_frame + 0x3c))[3] = gen_bits2f((int)gen_fl2bits(fVar11) - 1U);
        pfVar9 = ((float *)(gen_frame + 0x3c)) + 1;
        if (0 < (int)((int)gen_fl2bits(fVar11) - 1U)) {
          pfVar9 = ((float *)(gen_frame + 0x3c)) + 3;
        }
        ((float *)(gen_frame + 0x3c))[0] = ((float *)(gen_frame + 0x3c))[2];
        fVar15 = (float10)(int)gen_fl2bits(((float *)(gen_frame + 0x3c))[2]);
        if ((int)gen_fl2bits(((float *)(gen_frame + 0x3c))[2]) < 0) {
          fVar15 = GEN_X87(fVar15 + (float10)*(float *)&REFG(undefined, 0x1088110));
        }
        uVar14 = 0;
        fVar11 = (float)(fVar15 / (float10)(int)gen_fl2bits(*pfVar9));
        (*(float *)(gen_frame + 0x4c)) = fVar11;
        if (uVar8 != 0) {
          ((float *)(gen_frame + 0x3c))[0] = 1.4013e-45;
          (*(float *)(gen_frame + 0x38)) = fVar17;
          (*(float *)(gen_frame + 0x34)) = 0.0;
          fVar15 = GEN_X87((float10)1 - (float10)fVar11);
          (*(float *)(gen_frame + 0x30)) = fVar17;
          (*(float *)(gen_frame + 0x2c)) = 0.0;
          (*(float *)(gen_frame + 0x28)) = fVar17;
          (*(float *)(gen_frame + 0x24)) = 0.0;
          dVar5 = (double)fVar15;
          (*(double *)(gen_frame + 0xc)) = dVar5;
          (*(float *)(gen_frame + 0x20)) = fVar17;
          (*(float *)(gen_frame + 0x1c)) = 0.0;
          puVar12 = ((undefined1 *)GEN_TOP((((int *)(gen_frame + 0x0))[0] * (int)gen_fl2bits(((float *)(gen_frame + 0x3c))[2]) + (*(int *)(gen_frame + 0x8)) + 2)));
          while( true ) {
            ((float *)(gen_frame + 0x3c))[3] = gen_bits2f(uVar8 - 1);
            pfVar9 = ((float *)(gen_frame + 0x3c));
            if (0 < (int)(uVar8 - 1)) {
              pfVar9 = ((float *)(gen_frame + 0x3c)) + 3;
            }
            (*(uint *)(gen_frame + 0x14)) = uVar14;
            fVar16 = (float10)(int)uVar14;
            if ((int)uVar14 < 0) {
              fVar16 = GEN_X87(fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110));
            }
            ((float *)(gen_frame + 0x3c))[3] = (float)(fVar16 / (float10)(int)gen_fl2bits(*pfVar9));
            fVar16 = GEN_X87((float10)(float)(fVar16 / (float10)(int)gen_fl2bits(*pfVar9)));
            ((float *)(gen_frame + 0x3c))[3] = gen_bits2f((uint)*param_2);
            fVar17 = ((float)GEN_TOF((fVar15 * ((float10)1 - fVar16))));
            fVar13 = (float)(fVar16 * fVar15);
            fVar1 = ((float)GEN_TOF(((float10)fVar11 * ((float10)1 - fVar16))));
            fVar2 = (float)(fVar16 * (float10)fVar11);
            ((float *)(gen_frame + 0x3c))[3] = gen_bits2f((uint)*param_3);
            ((float *)(gen_frame + 0x3c))[3] = gen_bits2f((uint)*param_4);
            ((float *)(gen_frame + 0x3c))[3] = gen_bits2f((uint)*param_5);
            fVar3 = ((float)GEN_TOF((((float10)*param_5 * (float10)fVar2 +
                            ((float10)*param_4 * (float10)fVar1 +
                            ((float10)*param_3 * (float10)fVar13 +
                            (float10)*param_2 * (float10)fVar17))) + (float10)REFG(double, 0x1088108))));
            ((float *)(gen_frame + 0x3c))[3] = fVar3;
            dVar7 = (GEN_X87MATH(((double)fVar3),0xd));
            fVar3 = (float)dVar7;
            ((float *)(gen_frame + 0x3c))[3] = fVar3;
            pfVar9 = ((float *)(gen_frame + 0x3c)) + 3;
            if (!((double)fVar3 < *(double *)&REFG(undefined, 0x1088100))) {
              pfVar9 = &(*(float *)(gen_frame + 0x38));
            }
            if (!(*(float *)&REFG(undefined, 0x1088114) < *pfVar9)) {
              pfVar9 = &(*(float *)(gen_frame + 0x34));
            }
            fVar3 = *pfVar9;
            (*(undefined1 *)(gen_frame + 0x52)) = (char)(int)fVar3;
            ((float *)(gen_frame + 0x3c))[3] = gen_bits2f((uint)param_3[1]);
            ((float *)(gen_frame + 0x3c))[3] = gen_bits2f((uint)param_2[1]);
            ((float *)(gen_frame + 0x3c))[3] = gen_bits2f((uint)param_4[1]);
            ((float *)(gen_frame + 0x3c))[3] = gen_bits2f((uint)param_5[1]);
            fVar4 = ((float)GEN_TOF((((float10)param_5[1] * (float10)fVar2 +
                            ((float10)param_4[1] * (float10)fVar1 +
                            ((float10)param_2[1] * (float10)fVar17 +
                            (float10)param_3[1] * (float10)fVar13))) + (float10)REFG(double, 0x1088108))));
            ((float *)(gen_frame + 0x3c))[3] = fVar4;
            dVar7 = (GEN_X87MATH(((double)fVar4),0xd));
            fVar4 = (float)dVar7;
            ((float *)(gen_frame + 0x3c))[3] = fVar4;
            pfVar9 = ((float *)(gen_frame + 0x3c)) + 3;
            if (!((double)fVar4 < *(double *)&REFG(undefined, 0x1088100))) {
              pfVar9 = &(*(float *)(gen_frame + 0x30));
            }
            if (!(*(float *)&REFG(undefined, 0x1088114) < *pfVar9)) {
              pfVar9 = &(*(float *)(gen_frame + 0x2c));
            }
            (*(undefined1 *)(gen_frame + 0x53)) = (char)(int)*pfVar9;
            ((float *)(gen_frame + 0x3c))[3] = gen_bits2f((uint)param_3[2]);
            ((float *)(gen_frame + 0x3c))[3] = gen_bits2f((uint)param_2[2]);
            ((float *)(gen_frame + 0x3c))[3] = gen_bits2f((uint)param_4[2]);
            ((float *)(gen_frame + 0x3c))[3] = gen_bits2f((uint)param_5[2]);
            fVar4 = ((float)GEN_TOF((((float10)param_5[2] * (float10)fVar2 +
                            ((float10)param_4[2] * (float10)fVar1 +
                            ((float10)param_2[2] * (float10)fVar17 +
                            (float10)param_3[2] * (float10)fVar13))) + (float10)REFG(double, 0x1088108))));
            ((float *)(gen_frame + 0x3c))[3] = fVar4;
            dVar7 = (GEN_X87MATH(((double)fVar4),0xd));
            fVar4 = (float)dVar7;
            ((float *)(gen_frame + 0x3c))[3] = fVar4;
            pfVar10 = ((float *)(gen_frame + 0x3c)) + 3;
            if (!((double)fVar4 < *(double *)&REFG(undefined, 0x1088100))) {
              pfVar10 = &(*(float *)(gen_frame + 0x28));
            }
            if (!(*(float *)&REFG(undefined, 0x1088114) < *pfVar10)) {
              pfVar10 = &(*(float *)(gen_frame + 0x24));
            }
            fVar4 = *pfVar10;
            ((float *)(gen_frame + 0x3c))[3] = gen_bits2f((uint)param_2[3]);
            ((float *)(gen_frame + 0x3c))[3] = gen_bits2f((uint)param_3[3]);
            ((float *)(gen_frame + 0x3c))[3] = gen_bits2f((uint)param_4[3]);
            ((float *)(gen_frame + 0x3c))[3] = gen_bits2f((uint)param_5[3]);
            fVar17 = ((float)GEN_TOF((((float10)param_5[3] * (float10)fVar2 +
                             ((float10)param_4[3] * (float10)fVar1 +
                             ((float10)param_3[3] * (float10)fVar13 +
                             (float10)param_2[3] * (float10)fVar17))) + (float10)REFG(double, 0x1088108))));
            ((float *)(gen_frame + 0x3c))[3] = fVar17;
            dVar7 = (GEN_X87MATH(((double)fVar17),0xd));
            fVar17 = (float)dVar7;
            ((float *)(gen_frame + 0x3c))[3] = fVar17;
            pfVar10 = ((float *)(gen_frame + 0x3c)) + 3;
            if (!((double)fVar17 < *(double *)&REFG(undefined, 0x1088100))) {
              pfVar10 = &(*(float *)(gen_frame + 0x20));
            }
            if (!(0.0 < *pfVar10)) {
              pfVar10 = &(*(float *)(gen_frame + 0x1c));
            }
            fVar17 = *pfVar10;
            puVar12[-1] = (char)(int)*pfVar9;
            puVar12[-2] = (char)(int)fVar4;
            *puVar12 = (char)(int)fVar3;
            puVar12[1] = (char)(int)fVar17;
            uVar8 = *param_1;
            uVar14 = uVar14 + 1;
            puVar12 = puVar12 + 4;
            fVar17 = REFG(float, 0x10a0d8c);
            if (uVar8 <= uVar14) break;
            fVar15 = (float10)dVar5;
          }
        }
        fVar11 = gen_bits2f(param_1[1]);
        fVar13 = gen_bits2f((int)gen_fl2bits(((float *)(gen_frame + 0x3c))[2]) + 1);
        ((float *)(gen_frame + 0x3c))[2] = fVar13;
        this = (*(undefined * PTR32 *)(gen_frame + 0x18));
      } while ((uint)gen_fl2bits(fVar13) < (uint)gen_fl2bits(fVar11));
    }
    F_004d6e60(this GEN_EDX_ARG,0);
    return (uint)this;
  }
  return 0;
}

/* ref: Global::CreateNoiseTexture */
GEN_OWN GEN_FRAME uint F_00678cf0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x678cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  undefined * this;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  this = ((undefined *)GEN_TOP(F_004dca20(param_1,1,0x1450,4,0xb)));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  if ((this != ((undefined *)GEN_TOP(0x0))) &&
     (F_004d6dd0(this GEN_EDX_ARG,0,((int *)(gen_frame + 0x0)),2), (*(int *)(gen_frame + 0x8)) != 0)) {
    (*(uint *)(gen_frame + 0x10)) = 0;
    if (param_1[1] != 0) {
      uVar1 = *param_1 * 4;
      do {
        iVar3 = ((int *)(gen_frame + 0x0))[0] * (*(uint *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x8));
        uVar4 = 0;
        uVar2 = (*(uint *)(gen_frame + 0x10));
        if (uVar1 != 0) {
          do {
            uVar1 = F_00c4f2dd();
            *((char *)GEN_TOP((uVar4 + iVar3))) = (char)uVar1;
            uVar4 = uVar4 + 1;
            uVar1 = *param_1 * 4;
            uVar2 = (*(uint *)(gen_frame + 0x10));
          } while (uVar4 < uVar1);
        }
        (*(uint *)(gen_frame + 0x10)) = uVar2 + 1;
        this = (*(undefined * PTR32 *)(gen_frame + 0xc));
      } while (uVar2 + 1 < (uint)param_1[1]);
    }
    F_004d6e60(this GEN_EDX_ARG,0);
    return (uint)this;
  }
  return 0;
}

/* ref: Global::GetSamplingShaderCommon */
GEN_OWN GEN_FRAME uint F_00678da0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x678da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x48, 8, 4);
  undefined4 uVar1;
  undefined * this;
  undefined * this_00;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  
  this = REFG(undefined4, 0x1370b90);
  if (REFG(int * PTR32, 0x148809c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148809c) + 8))))(REFG(int * PTR32, 0x148809c) GEN_EDX_ARG);
    return (uint)REFG(int * PTR32, 0x148809c);
  }
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x60,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    REFG(int * PTR32, 0x148809c) = ((int *)GEN_TOP(0x0));
  }
  else {
    REFG(int * PTR32, 0x148809c) = ((int *)GEN_TOP(F_00677210(this_00 GEN_EDX_ARG)));
  }
  F_004d58e0(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,0,0,0x24,0);
  uVar2 = F_004deb40(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x40)),1);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((uint *)GEN_TOP(((int)REFG(int * PTR32, 0x148809c) + 0x48))) = uVar2;
  ((undefined4 *)(gen_frame + 0x0))[0] = 0;
  ((undefined4 *)(gen_frame + 0x0))[1] = 0;
  ((undefined4 *)(gen_frame + 0x0))[2] = 0;
  ((undefined4 *)(gen_frame + 0x0))[3] = 0;
  ((undefined4 *)(gen_frame + 0x0))[4] = 0;
  ((undefined4 *)(gen_frame + 0x0))[5] = uVar1;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x20)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x34)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x38)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x3c)) = uVar1;
  uVar2 = F_004dcc90(0x40,4,0);
  *((uint *)GEN_TOP(((int)REFG(int * PTR32, 0x148809c) + 0x4c))) = uVar2;
  puVar3 = ((undefined4 *)GEN_TOP(F_004d68c0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(int * PTR32, 0x148809c) + 0x4c))) GEN_EDX_ARG,0,0x40,2)));
  puVar5 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar3 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar3 = puVar3 + 1;
  }
  F_004d6970(*((undefined * PTR32 *)GEN_TOP(((int)REFG(int * PTR32, 0x148809c) + 0x4c))) GEN_EDX_ARG);
  uVar2 = 8;
  do {
    *((undefined4 *)GEN_TOP((uVar2 + (int)REFG(int * PTR32, 0x148809c)))) = 0;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x48);
  uVar2 = F_004df8f0(*(undefined * PTR32 *)(this + 0x1c) GEN_EDX_ARG,((char *)REFP(0x10ac5b8)));
  *((uint *)GEN_TOP(((int)REFG(int * PTR32, 0x148809c) + 0x50))) = uVar2;
  uVar2 = F_004dcd60(0x30,2,0xb);
  *((uint *)GEN_TOP(((int)REFG(int * PTR32, 0x148809c) + 0x54))) = uVar2;
  uVar2 = F_004df8f0(*(undefined * PTR32 *)(this + 0x1c) GEN_EDX_ARG,((char *)REFP(0x10ac5c0)));
  *((uint *)GEN_TOP(((int)REFG(int * PTR32, 0x148809c) + 0x58))) = uVar2;
  uVar2 = F_004dcd60(0x100,2,0xb);
  *((uint *)GEN_TOP(((int)REFG(int * PTR32, 0x148809c) + 0x5c))) = uVar2;
  return (uint)REFG(int * PTR32, 0x148809c);
}

/* ref: Global::BindSamplingShader */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00678f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x678f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
  *((undefined4 *)GEN_TOP((iVar1 + 0x4c))) = *((undefined4 *)GEN_TOP(((int)this + 0x48)));
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x4c)));
  *((uint *)GEN_TOP((iVar1 + 0x6c))) = *((uint *)GEN_TOP((iVar1 + 0x6c))) & 0x800000ff;
  *((undefined1 *)GEN_TOP((iVar1 + 0x6c))) = 0x10;
  *((uint *)GEN_TOP((iVar1 + 0x6c))) = *((uint *)GEN_TOP((iVar1 + 0x6c))) & 0x7fffffff;
  *((undefined4 *)GEN_TOP((iVar1 + 0x68))) = uVar2;
  pvVar8 = this;
  if ((*((int *)GEN_TOP(((int)this + *((char *)GEN_TOP((param_1 + 0x44))) * 4 + 8))) != 0) &&
     (iVar10 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + *((char *)GEN_TOP((param_1 + 0x44))) * 4 + 8))) + 0x98))), iVar10 != 0
     )) {
    *((int *)GEN_TOP((iVar1 + 0x40))) = iVar10;
    *((undefined4 *)GEN_TOP((iVar1 + 0x60))) = 0;
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 8)));
    iVar10 = *((int *)GEN_TOP((param_1 + 0x18)));
    puVar4 = ((undefined4 *)GEN_TOP(F_004d9920(*((undefined4 *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD,0,0,2)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar4 = *puVar3;
      puVar4[1] = puVar3[1];
      puVar4[2] = puVar3[2];
      puVar4[3] = puVar3[3];
      fVar12 = (float10)*((int *)GEN_TOP((iVar10 + 0x18)));
      if (*((int *)GEN_TOP((iVar10 + 0x18))) < 0) {
        fVar12 = GEN_X87(fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      fVar13 = (float10)REFG(double, 0x1088108);
      puVar4[2] = (undefined4)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(puVar4[2]))) - fVar13 / fVar12))
      ;
      fVar12 = (float10)*((int *)GEN_TOP((iVar10 + 0x1c)));
      if (*((int *)GEN_TOP((iVar10 + 0x1c))) < 0) {
        fVar12 = GEN_X87(fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110));
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
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x54))) + 0x24))) = 0;
    }
    *((undefined4 *)GEN_TOP((iVar1 + 0xa8 + *((int *)GEN_TOP(((int)this + 0x50))) * 4))) =
         *((undefined4 *)GEN_TOP(((int)this + 0x54)));
    uVar7 = puVar3[9];
    pvVar8 = ((undefined *)GEN_TOP(0x0));
    if (uVar7 != 0) {
      iVar5 = uVar7 << 4;
      F_00c46aa0(((undefined1 *)(gen_frame + 0x0)),puVar3 + 10,iVar5);
      uVar11 = 0;
      if (3 < (int)uVar7) {
        fVar12 = (float10)*((int *)GEN_TOP((iVar10 + 0x18)));
        if (*((int *)GEN_TOP((iVar10 + 0x18))) < 0) {
          fVar12 = GEN_X87(fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110));
        }
        fVar13 = (float10)*((int *)GEN_TOP((iVar10 + 0x1c)));
        if (*((int *)GEN_TOP((iVar10 + 0x1c))) < 0) {
          fVar13 = GEN_X87(fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110));
        }
        fVar12 = (float10)(float)fVar12;
        fVar13 = (float10)(float)fVar13;
        iVar9 = (uVar7 - 4 >> 2) + 1;
        uVar11 = iVar9 * 4;
        pfVar6 = ((float *)(gen_frame + 0x4));
        do {
          iVar9 = iVar9 - 1;
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
        fVar12 = (float10)*((int *)GEN_TOP((iVar10 + 0x18)));
        if (*((int *)GEN_TOP((iVar10 + 0x18))) < 0) {
          fVar12 = GEN_X87(fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110));
        }
        fVar13 = (float10)*((int *)GEN_TOP((iVar10 + 0x1c)));
        if (*((int *)GEN_TOP((iVar10 + 0x1c))) < 0) {
          fVar13 = GEN_X87(fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110));
        }
        iVar10 = uVar7 - uVar11;
        pfVar6 = ((float *)(gen_frame + 0x4)) + uVar11 * 4;
        do {
          iVar10 = iVar10 - 1;
          pfVar6[-1] = (float)((float10)pfVar6[-1] / (float10)(float)fVar12);
          *pfVar6 = (float)((float10)*pfVar6 / (float10)(float)fVar13);
          pfVar6[1] = (float)((float10)pfVar6[1] / (float10)(float)fVar12);
          pfVar6[2] = (float)((float10)pfVar6[2] / (float10)(float)fVar13);
          pfVar6 = pfVar6 + 4;
        } while (iVar10 != 0);
      }
      uVar7 = F_004d9920(*((undefined4 *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,0,iVar5,2);
      if (uVar7 != 0) {
        F_00c46aa0(uVar7,((undefined1 *)(gen_frame + 0x0)),iVar5);
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x5c))) + 0x24))) = 0;
      }
      pvVar8 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x58)));
      *((undefined4 *)GEN_TOP((iVar1 + 0xa8 + (int)((int)(uintptr_t)pvVar8) * 4))) = *((undefined4 *)GEN_TOP(((int)this + 0x5c)));
    }
  }
  return (uint)pvVar8;
}

/* ref: Client::Graphics::PostEffect::PostEffectShader::Load */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00679280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x679280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char * pcVar1;
  char cVar2;
  int iVar3;
  undefined * this;
  undefined * pPVar4;
  byte bVar5;
  char * pcVar6;
  int * piVar7;
  uint uVar8;
  
  pPVar4 = (*(undefined * PTR32 *)&gen_args[0]);
  this = REFG(undefined4, 0x148809c);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = param_1;
  iVar3 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
  if ((iVar3 == -1) || (pcVar6 = *((char * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))), pcVar6 == ((char *)GEN_TOP(0x0)))) {
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
  if (iVar3 != (char)param_1[0x44]) {
    F_00677290(REFG(undefined4, 0x148809c) GEN_EDX_FWD,iVar3,0);
    F_00677320(this GEN_EDX_ARG,(int)(char)param_1[0x44]);
    param_1[0x44] = *pPVar4;
    if (*(int *)(param_1 + 8) != 0) {
      F_00406810(*(int *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = 0;
    }
    iVar3 = *(int *)(&REFG(undefined, 0x10ac578) + *(int *)((int)(uintptr_t)pPVar4) * 4);
    piVar7 = ((int *)GEN_TOP(F_00406520()));
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,(iVar3 - 1) * 0x10 + 0x38,0);
    *(uint *)(param_1 + 8) = uVar8;
    F_00677690(param_1 GEN_EDX_ARG);
  }
  if (*(undefined * PTR32 *)(param_1 + 4) != ((undefined *)GEN_TOP(0x0))) {
    bVar5 = F_00501350(*(undefined * PTR32 *)(param_1 + 4) GEN_EDX_ARG,*(int *)(pPVar4 + 4));
    if (bVar5 == 0) {
      F_0050c620(*(undefined4 *)(param_1 + 4),0,0);
    }
  }
  if (*(int *)(param_1 + 4) == 0) {
    F_004ff310(&(*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,5,0);
    iVar3 = *(int *)(pPVar4 + 4);
    (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(0x73686364));
    if ((*(char *)&gen_args[1]) == '\0') {
      uVar8 = F_00513d20(&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined * PTR32 *)&gen_args[0]),iVar3,0,0,0);
    }
    else {
      uVar8 = F_00513d70(&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined * PTR32 *)&gen_args[0]),iVar3,0,0,0);
    }
    param_1[0x48] = (undefined1)((byte)param_1[0x48] & 0xf7);
    *(uint *)(param_1 + 4) = uVar8;
  }
  return 1;
}

/* ref: Client::Graphics::PostEffect::PostEffectShader::SetConstantBuffer */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006793b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x6793b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 4 + param_1 * 8)));
  if (iVar1 != 0) {
    if (param_3 <= *((uint *)GEN_TOP((iVar1 + 0xc)))) goto LAB_00679402;
    if (iVar1 != 0) {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 4 + param_1 * 8)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_FWD);
      *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 4 + param_1 * 8))) = 0;
    }
  }
  uVar3 = F_004dcd60(param_3,2,0xb);
  *((uint *)GEN_TOP((*(int *)(this + 0xc) + 4 + param_1 * 8))) = uVar3;
LAB_00679402: ;
  uVar4 = F_004d9920(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 4 + param_1 * 8))) GEN_EDX_ARG,0,param_3,2);
  uVar3 = 0;
  if (uVar4 != 0) {
    F_00c46aa0(uVar4,param_2,param_3);
    uVar3 = *((uint *)GEN_TOP((*(int *)(this + 0xc) + 4 + param_1 * 8)));
    *((undefined4 *)GEN_TOP((uVar3 + 0x24))) = 0;
  }
  return uVar3;
}

/* ref: Client::Graphics::PostEffect::PostEffectRepeatShader::Load */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00679440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x679440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  
  bVar1 = F_00679280(this GEN_EDX_FWD,param_1,(undefined1)param_2);
  return bVar1;
}

/* ref: Client::Graphics::PostEffect::PostEffectMeasureLumShader::Load */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00679450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x679450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined * pPVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  iVar7 = 0;
  uVar6 = 0;
  pPVar4 = this + 0x50;
  do {
    iVar2 = 1 << GEN_SHC((byte)uVar6, (unsigned int)(uintptr_t)uVar6);
    (*(int *)(gen_frame + 0x0)) = iVar2;
    (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP(iVar2));
    uVar3 = F_004dca20(&(*(int *)(gen_frame + 0x0)),1,(-(uint)(iVar7 != 0) & 0x310) + 0x2150,0x100000,0);
    *(uint *)pPVar4 = uVar3;
    if (uVar3 == 0) {
      return 0;
    }
    uVar6 = uVar6 + 2;
    iVar7 = iVar7 + 1;
    pPVar4 = pPVar4 + 4;
  } while (uVar6 < 8);
  (*(int *)(gen_frame + 0x0)) = 3;
  (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10ac5d8));
  bVar1 = F_00679280(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),(char)param_2);
  if (bVar1 != 0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 3;
    (*(undefined4 *)(gen_frame + 0x18)) = 3;
    uVar6 = 0;
    (*(char * PTR32 *)(gen_frame + 0xc)) = "shader/posteffect/MeasureLumIterative.shcd";
    (*(char * PTR32 *)(gen_frame + 0x14)) = "shader/posteffect/MeasureLumIterative.shcd";
    (*(char * PTR32 *)(gen_frame + 0x1c)) = ((char *)REFP(0x10ac65c));
    puVar5 = &(*(undefined4 *)(gen_frame + 0x8));
    pPVar4 = this + 0x60;
    while (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pPVar4 + 4))))(pPVar4 GEN_EDX_ARG,puVar5,param_2), (char)uVar3 != '\0') {
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 2;
      pPVar4 = pPVar4 + 0x50;
      if (2 < uVar6) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectAdaptLumShader::Load */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00679560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x679560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x10, 0);
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  (*(byte *)(gen_frame + 0xb)) = 0;
  uVar4 = 0;
  do {
    (*(undefined4 *)(gen_frame + 0x0)) = 1;
    (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP(0x1));
    uVar3 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x0)),1,0x2150,0x100000,0);
    *(uint *)(this + uVar4 * 4 + 0x5c) = uVar3;
    if (uVar3 == 0) {
      return 0;
    }
    uVar4 = (uint)(byte)((*(byte *)(gen_frame + 0xb)) + 1);
    (*(byte *)(gen_frame + 0xb)) = (*(byte *)(gen_frame + 0xb)) + 1;
  } while (uVar4 < 2);
  (*(undefined4 *)(gen_frame + 0x0)) = 0x400;
  (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP(0x1));
  uVar4 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x0)),1,0x2460,0x8100000,0);
  *(uint *)(this + 0x7c) = uVar4;
  if ((uVar4 != 0) && (bVar2 = F_00679280(this GEN_EDX_ARG,param_1,(char)param_2), bVar2 != 0)) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x80) + 4)));
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10ac690));
    uVar4 = (*pcVar1)(this + 0x80,&(*(undefined4 *)(gen_frame + 0x0)),param_2);
    return (char)uVar4 != '\0';
  }
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectBloomShader::Load */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00679640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x679640u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x20, 0, 4);
  byte bVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined * pPVar5;
  uint uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c));
  uVar6 = 0;
  uVar4 = 0xb4;
  while( true ) {
    if (uVar6 < 3) {
      piVar2 = *((int * PTR32 *)GEN_TOP((uVar4 + REFG(int, 0x1371288))));
    }
    else {
      piVar2 = ((int *)GEN_TOP(0x0));
    }
    *((int * PTR32 *)GEN_TOP((this + (uVar4 - 100)))) = piVar2;
    if (piVar2 == ((int *)GEN_TOP(0x0))) break;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_FWD);
    uVar4 = uVar4 + 4;
    uVar6 = uVar6 + 1;
    if (0xbb < uVar4) {
      bVar1 = F_00679280(this GEN_EDX_ARG,param_1,(char)param_2);
      if (bVar1 != 0) {
        uVar4 = 0;
        (*(undefined4 *)(gen_frame + 0x0)) = 8;
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10ac6ec));
        (*(undefined4 *)(gen_frame + 0x8)) = 6;
        (*(char * PTR32 *)(gen_frame + 0xc)) = "shader/posteffect/BloomBlur_Linear.shcd";
        (*(undefined4 *)(gen_frame + 0x10)) = 6;
        (*(char * PTR32 *)(gen_frame + 0x14)) = "shader/posteffect/BloomBlur_Linear.shcd";
        puVar3 = &(*(undefined4 *)(gen_frame + 0x0));
        pPVar5 = this + 0x58;
        while (uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pPVar5 + 4))))(pPVar5 GEN_EDX_ARG,puVar3,param_2), (char)uVar6 != '\0'
              ) {
          uVar4 = uVar4 + 1;
          puVar3 = puVar3 + 2;
          pPVar5 = pPVar5 + 0x50;
          if (2 < uVar4) {
            return 1;
          }
        }
      }
      return 0;
    }
  }
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectStarShader::Load */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00679730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x679730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = 0xa4;
  while( true ) {
    if (uVar4 < 4) {
      piVar2 = *((int * PTR32 *)GEN_TOP((uVar3 + REFG(int, 0x1371288))));
    }
    else {
      piVar2 = ((int *)GEN_TOP(0x0));
    }
    *((int * PTR32 *)GEN_TOP((this + (uVar3 - 0x54)))) = piVar2;
    if (piVar2 == ((int *)GEN_TOP(0x0))) break;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_FWD);
    uVar3 = uVar3 + 4;
    uVar4 = uVar4 + 1;
    if (0xab < uVar3) {
      bVar1 = F_00679280(this GEN_EDX_ARG,param_1,(undefined1)param_2);
      return bVar1;
    }
  }
  return 0;
}

/* ref: FUN_00679790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00679790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x679790u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  memcpy(&gen_args[1], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[2], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[3], &gen_a4, sizeof gen_a4);
  float fVar1;
  float * pfVar2;
  
  *((uint *)GEN_TOP((in_ecx + 0x60))) = (*(uint *)&gen_args[0]);
  fVar1 = REFG(float, 0x1087f04);
  (*(uint *)&gen_args[0]) = 0;
  pfVar2 = &(*(float *)&gen_args[1]);
  if (!(0.0 < (*(float *)&gen_args[1]))) {
    pfVar2 = (float *)&(*(uint *)&gen_args[0]);
  }
  *((float *)GEN_TOP((in_ecx + 100))) = *pfVar2;
  (*(float *)&gen_args[1]) = fVar1;
  (*(uint *)&gen_args[0]) = 0;
  pfVar2 = &(*(float *)&gen_args[2]);
  if (!((*(float *)&gen_args[2]) < fVar1)) {
    pfVar2 = &(*(float *)&gen_args[1]);
  }
  if (!(0.0 < *pfVar2)) {
    pfVar2 = (float *)&(*(uint *)&gen_args[0]);
  }
  *((float *)GEN_TOP((in_ecx + 0x68))) = *pfVar2;
  *((float *)GEN_TOP((in_ecx + 0x6c))) = (*(float *)&gen_args[3]);
  return (uint)pfVar2;
}

/* ref: Client::Graphics::PostEffect::PostEffectFogShader::PostEffectFogShader */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00679800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x679800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00677380(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10add90));
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectFogShader::Load */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00679820(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x679820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  char * pcVar1;
  char cVar2;
  undefined * puVar3;
  undefined * this;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  undefined * pPVar8;
  int iVar9;
  
  pPVar8 = param_1 + 0x50;
  iVar9 = 3;
  do {
    (*(undefined4 *)(gen_frame + 0x0)) = 0x100;
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x0)),1,0x2250,4,0xb);
    *(uint *)pPVar8 = uVar5;
    this = REFG(undefined4, 0x148809c);
    pPVar8 = pPVar8 + 4;
    iVar9 = iVar9 - 1;
  } while (iVar9 != 0);
  iVar9 = *(int *)param_2;
  if ((iVar9 != -1) && (pcVar6 = *(char * PTR32 *)(param_2 + 4), pcVar6 != ((char *)GEN_TOP(0x0)))) {
    pcVar1 = pcVar6 + 1;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if (pcVar6 != pcVar1) {
      if (iVar9 != (char)param_1[0x44]) {
        if (*((int *)GEN_TOP((REFG(undefined4, 0x148809c) + iVar9 * 4 + 8))) == 0) {
          F_004ff310(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,5,0);
          puVar3 = (&REFG(undefined * PTR32, 0x1322348))[(int)(iVar9)];
          (*(undefined4 *)(gen_frame + 0x8)) = 0x73686364;
          uVar5 = F_00513d20(&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),puVar3,0,0,0);
        }
        else {
          uVar5 = F_00513f60(*((int *)GEN_TOP((REFG(undefined4, 0x148809c) + iVar9 * 4 + 8))),0,0);
        }
        *(uint *)(this + iVar9 * 4 + 8) = uVar5;
        if (uVar5 != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
        }
        F_00677320(this GEN_EDX_ARG,(int)(char)param_1[0x44]);
        param_1[0x44] = *param_2;
        if (*(int *)(param_1 + 8) != 0) {
          F_00406810(*(int *)(param_1 + 8));
          *(undefined4 *)(param_1 + 8) = 0;
        }
        iVar9 = *(int *)(&REFG(undefined, 0x10ac578) + *(int *)((int)(uintptr_t)param_2) * 4);
        piVar7 = ((int *)GEN_TOP(F_00406520()));
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,(iVar9 - 1) * 0x10 + 0x38,0);
        *(uint *)(param_1 + 8) = uVar5;
        F_00677690(param_1 GEN_EDX_ARG);
      }
      if (*(undefined * PTR32 *)(param_1 + 4) != ((undefined *)GEN_TOP(0x0))) {
        bVar4 = F_00501350(*(undefined * PTR32 *)(param_1 + 4) GEN_EDX_ARG,*(int *)(param_2 + 4));
        if (bVar4 == 0) {
          F_0050c620(*(undefined4 *)(param_1 + 4),0,0);
        }
      }
      if (*(int *)(param_1 + 4) == 0) {
        F_004ff310(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,5,0);
        iVar9 = *(int *)(param_2 + 4);
        (*(undefined4 *)(gen_frame + 0x10)) = 0x73686364;
        if (param_3 == '\0') {
          uVar5 = F_00513d20(((undefined1 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x10)),iVar9,0,0,0);
        }
        else {
          uVar5 = F_00513d70(((undefined1 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x10)),iVar9,0,0,0);
        }
        param_1[0x48] = (undefined1)((byte)param_1[0x48] & 0xf7);
        *(uint *)(param_1 + 4) = uVar5;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectDofCocShader::Load */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006799d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6799d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  char * pcVar1;
  char cVar2;
  undefined * puVar3;
  undefined * this;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  undefined * pPVar8;
  int iVar9;
  
  pPVar8 = param_1 + 0x50;
  iVar9 = 3;
  do {
    (*(undefined4 *)(gen_frame + 0x0)) = 0x100;
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x0)),1,0x1131,4,0xb);
    *(uint *)pPVar8 = uVar5;
    this = REFG(undefined4, 0x148809c);
    pPVar8 = pPVar8 + 4;
    iVar9 = iVar9 - 1;
  } while (iVar9 != 0);
  iVar9 = *(int *)param_2;
  if ((iVar9 != -1) && (pcVar6 = *(char * PTR32 *)(param_2 + 4), pcVar6 != ((char *)GEN_TOP(0x0)))) {
    pcVar1 = pcVar6 + 1;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if (pcVar6 != pcVar1) {
      if (iVar9 != (char)param_1[0x44]) {
        if (*((int *)GEN_TOP((REFG(undefined4, 0x148809c) + iVar9 * 4 + 8))) == 0) {
          F_004ff310(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,5,0);
          puVar3 = (&REFG(undefined * PTR32, 0x1322348))[(int)(iVar9)];
          (*(undefined4 *)(gen_frame + 0x8)) = 0x73686364;
          uVar5 = F_00513d20(&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),puVar3,0,0,0);
        }
        else {
          uVar5 = F_00513f60(*((int *)GEN_TOP((REFG(undefined4, 0x148809c) + iVar9 * 4 + 8))),0,0);
        }
        *(uint *)(this + iVar9 * 4 + 8) = uVar5;
        if (uVar5 != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
        }
        F_00677320(this GEN_EDX_ARG,(int)(char)param_1[0x44]);
        param_1[0x44] = *param_2;
        if (*(int *)(param_1 + 8) != 0) {
          F_00406810(*(int *)(param_1 + 8));
          *(undefined4 *)(param_1 + 8) = 0;
        }
        iVar9 = *(int *)(&REFG(undefined, 0x10ac578) + *(int *)((int)(uintptr_t)param_2) * 4);
        piVar7 = ((int *)GEN_TOP(F_00406520()));
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,(iVar9 - 1) * 0x10 + 0x38,0);
        *(uint *)(param_1 + 8) = uVar5;
        F_00677690(param_1 GEN_EDX_ARG);
      }
      if (*(undefined * PTR32 *)(param_1 + 4) != ((undefined *)GEN_TOP(0x0))) {
        bVar4 = F_00501350(*(undefined * PTR32 *)(param_1 + 4) GEN_EDX_ARG,*(int *)(param_2 + 4));
        if (bVar4 == 0) {
          F_0050c620(*(undefined4 *)(param_1 + 4),0,0);
        }
      }
      if (*(int *)(param_1 + 4) == 0) {
        F_004ff310(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,5,0);
        iVar9 = *(int *)(param_2 + 4);
        (*(undefined4 *)(gen_frame + 0x10)) = 0x73686364;
        if (param_3 == '\0') {
          uVar5 = F_00513d20(((undefined1 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x10)),iVar9,0,0,0);
        }
        else {
          uVar5 = F_00513d70(((undefined1 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x10)),iVar9,0,0,0);
        }
        param_1[0x48] = (undefined1)((byte)param_1[0x48] & 0xf7);
        *(uint *)(param_1 + 4) = uVar5;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00679b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00679b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x679b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x7c, 4, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  undefined * this_00;
  int iVar5;
  float * pfVar6;
  float * pfVar7;
  uint uVar8;
  float fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  uVar8 = (*((int *)GEN_TOP(((int)this + 0x5c))) + 1U) % 3;
  *((uint *)GEN_TOP(((int)this + 0x5c))) = uVar8;
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + uVar8 * 4 + 0x50)));
  (*(float *)(gen_frame + 0x5c)) = *(float *)(this_00 + 0x18);
  iVar5 = (int)gen_fl2bits(*(float *)(this_00 + 0x18)) - 1;
  (*(int *)(gen_frame + 0x10)) = iVar5;
  fVar10 = (float10)iVar5;
  if (iVar5 < 0) {
    fVar10 = GEN_X87(fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  (*(float *)(gen_frame + 0x58)) = (float)((float10)1 / fVar10);
  fVar9 = *((float *)GEN_TOP(((int)this + 0x78)));
  (*(float *)(gen_frame + 0x70)) = fVar9;
  fVar2 = *((float *)GEN_TOP(((int)this + 0x6c)));
  (*(float *)(gen_frame + 0x6c)) = fVar2;
  (*(float *)(gen_frame + 0x60)) = (float)((float10)fVar9 / (float10)fVar2);
  fVar10 = ((float10)GEN_TOD(GEN_X87MATH((float10)(float)((float10)fVar9 / (float10)fVar2),2)));
  (*(float *)(gen_frame + 0x60)) = (float)fVar10;
  (*(float *)(gen_frame + 0x54)) = (float)fVar10;
  (*(float *)(gen_frame + 0x60)) = REFG(float, 0x10adda8);
  pfVar6 = &(*(float *)(gen_frame + 0x60));
  fVar2 = ((float)GEN_TOF(((float10)fVar2 - (float10)*((float *)GEN_TOP(((int)this + 0x68))))));
  (*(float *)(gen_frame + 0x6c)) = fVar2;
  if (!(*(double *)&REFG(undefined, 0x1094888) < (double)fVar2)) {
    pfVar6 = &(*(float *)(gen_frame + 0x6c));
  }
  fVar2 = *pfVar6;
  fVar10 = (float10)1;
  (*(float *)(gen_frame + 0x60)) = REFG(float, 0x10947f8);
  pfVar6 = &(*(float *)(gen_frame + 0x60));
  (*(float *)(gen_frame + 0x4c)) = (float)(fVar10 / (float10)fVar2);
  fVar2 = *((float *)GEN_TOP(((int)this + 0x74)));
  (*(float *)(gen_frame + 0x6c)) = fVar2;
  fVar11 = (float10)fVar2;
  fVar2 = ((float)GEN_TOF((fVar11 - (float10)*((float *)GEN_TOP(((int)this + 0x70))))));
  (*(float *)(gen_frame + 0x6c)) = fVar2;
  if (!((double)fVar2 < REFG(double, 0x1091858))) {
    pfVar6 = &(*(float *)(gen_frame + 0x6c));
  }
  fVar2 = *pfVar6;
  pfVar6 = &(*(float *)(gen_frame + 0x60));
  (*(float *)(gen_frame + 0x24)) = (float)(fVar10 / (float10)fVar2);
  fVar9 = (float)((float10)fVar9 - fVar11);
  (*(float *)(gen_frame + 0x6c)) = fVar9;
  if (!((double)fVar9 < REFG(double, 0x1091858))) {
    pfVar6 = &(*(float *)(gen_frame + 0x6c));
  }
  (*(float *)(gen_frame + 0x3c)) = (float)(fVar10 / (float10)*pfVar6);
  F_004d6dd0(this_00 GEN_EDX_FWD,0,((undefined1 *)(gen_frame + 0x0)),2);
  uVar8 = 0;
  if ((*(int *)(gen_frame + 0x8)) != 0) {
    fVar9 = 0.0;
    (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x8));
    if ((*(float *)(gen_frame + 0x5c)) != 0.0) {
      (*(float *)(gen_frame + 0x48)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0x44)) = 0.0;
      (*(float *)(gen_frame + 0x50)) = 0.0;
      (*(float *)(gen_frame + 0x18)) = REFG(float, 0x10a0d8c);
      (*(float *)(gen_frame + 0x14)) = 0.0;
      do {
        (*(float *)(gen_frame + 0x68)) = fVar9;
        fVar10 = (float10)(int)gen_fl2bits(fVar9);
        if ((int)gen_fl2bits(fVar9) < 0) {
          fVar10 = GEN_X87(fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110));
        }
        (*(float *)(gen_frame + 0x68)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x58)));
        fVar2 = ((float)GEN_TOF(((float10)(float)(fVar10 * (float10)(*(float *)(gen_frame + 0x58))) * (float10)(*(float *)(gen_frame + 0x54)))));
        (*(float *)(gen_frame + 0x68)) = fVar2;
        fVar10 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar2,1)));
        (*(float *)(gen_frame + 0x68)) = (float)fVar10;
        pfVar6 = &(*(float *)(gen_frame + 0x6c));
        fVar2 = ((float)GEN_TOF(((float10)(float)fVar10 * (float10)*((float *)GEN_TOP(((int)this + 0x6c))))));
        (*(float *)(gen_frame + 0x68)) = fVar2;
        fVar3 = ((float)GEN_TOF(((float10)fVar2 - (float10)*((float *)GEN_TOP(((int)this + 0x68))))));
        (*(float *)(gen_frame + 0x6c)) = fVar3;
        if (!((float10)fVar3 < (float10)0)) {
          pfVar6 = &(*(float *)(gen_frame + 0x50));
        }
        fVar3 = *pfVar6;
        pfVar6 = &(*(float *)(gen_frame + 0x6c));
        (*(float *)(gen_frame + 0x6c)) = (float)((float10)fVar3 * (float10)(*(float *)(gen_frame + 0x4c)));
        if (!((float10)(float)((float10)fVar3 * (float10)(*(float *)(gen_frame + 0x4c))) < (float10)1)) {
          pfVar6 = &(*(float *)(gen_frame + 0x48));
        }
        if (!(0.0 < *pfVar6)) {
          pfVar6 = &(*(float *)(gen_frame + 0x44));
        }
        fVar3 = *pfVar6;
        fVar1 = *((float *)GEN_TOP(((int)this + 0x7c)));
        (*(float *)(gen_frame + 0x70)) = fVar3;
        (*(float *)(gen_frame + 0x64)) = fVar1;
        if (REFG(float, 0x1087f04) < fVar1) {
          (*(float *)(gen_frame + 0x6c)) = (float)((float10)1 - (float10)fVar3);
          fVar10 = ((float10)GEN_TOD(pow((float10)(float)((float10)1 - (float10)fVar3),(float10)fVar1)));
          (*(float *)(gen_frame + 0x6c)) = (float)fVar10;
          (*(float *)(gen_frame + 0x70)) = (float)((float10)1 - (float10)(float)fVar10);
        }
        else {
          (*(float *)(gen_frame + 0x70)) = (float)((float10)fVar1 * (float10)fVar3);
        }
        fVar12 = (float10)fVar2;
        fVar10 = (float10)1;
        fVar2 = *((float *)GEN_TOP(((int)this + 0x74)));
        pfVar6 = &(*(float *)(gen_frame + 0x68));
        (*(float *)(gen_frame + 0x6c)) = fVar2;
        fVar11 = (float10)fVar2;
        if (fVar11 < fVar12) {
          (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
          (*(float *)(gen_frame + 0x34)) = 0.0;
          (*(float *)(gen_frame + 0x40)) = 0.0;
          fVar2 = (float)(fVar12 - fVar11);
          (*(float *)(gen_frame + 0x68)) = fVar2;
          if (!((float10)0 < (float10)fVar2)) {
            pfVar6 = &(*(float *)(gen_frame + 0x40));
          }
          fVar2 = *pfVar6;
          pfVar6 = &(*(float *)(gen_frame + 0x68));
          (*(float *)(gen_frame + 0x68)) = (float)((float10)fVar2 * (float10)(*(float *)(gen_frame + 0x3c)));
          if (!((float10)(float)((float10)fVar2 * (float10)(*(float *)(gen_frame + 0x3c))) < (float10)1)) {
            pfVar6 = &(*(float *)(gen_frame + 0x38));
          }
          if (!(0.0 < *pfVar6)) {
            pfVar6 = &(*(float *)(gen_frame + 0x34));
          }
          fVar2 = *pfVar6;
          fVar3 = *((float *)GEN_TOP(((int)this + 0x80)));
          (*(float *)(gen_frame + 0x68)) = fVar3;
          (*(float *)(gen_frame + 0x74)) = fVar2;
          fVar11 = (float10)fVar3;
          (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
          (*(float *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
          pfVar6 = &(*(float *)(gen_frame + 0x30));
          if (!(fVar10 < fVar11)) {
            pfVar6 = ((float *)GEN_TOP(((int)this + 0x80)));
          }
          pfVar7 = ((float *)GEN_TOP(((int)this + 0x84)));
          if ((float10)*((float *)GEN_TOP(((int)this + 0x84))) < fVar11) {
            pfVar7 = ((float *)GEN_TOP(((int)this + 0x80)));
          }
          if (fVar10 < (float10)*pfVar7) {
            pfVar7 = &(*(float *)(gen_frame + 0x2c));
          }
          fVar10 = GEN_X87((float10)fVar2 * (float10)*pfVar7 + (float10)*pfVar6);
        }
        else {
          (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1087f04);
          fVar2 = *((float *)GEN_TOP(((int)this + 0x70)));
          (*(float *)(gen_frame + 0x1c)) = 0.0;
          (*(float *)(gen_frame + 0x28)) = 0.0;
          fVar2 = (float)(fVar12 - (float10)fVar2);
          (*(float *)(gen_frame + 0x68)) = fVar2;
          if (!((float10)0 < (float10)fVar2)) {
            pfVar6 = &(*(float *)(gen_frame + 0x28));
          }
          fVar2 = *pfVar6;
          pfVar6 = &(*(float *)(gen_frame + 0x68));
          (*(float *)(gen_frame + 0x68)) = (float)((float10)fVar2 * (float10)(*(float *)(gen_frame + 0x24)));
          if (!((float10)(float)((float10)fVar2 * (float10)(*(float *)(gen_frame + 0x24))) < (float10)1)) {
            pfVar6 = &(*(float *)(gen_frame + 0x20));
          }
          if (!(0.0 < *pfVar6)) {
            pfVar6 = &(*(float *)(gen_frame + 0x1c));
          }
          fVar2 = *pfVar6;
          (*(float *)(gen_frame + 0x74)) = fVar2;
          fVar3 = *((float *)GEN_TOP(((int)this + 0x80)));
          (*(float *)(gen_frame + 0x60)) = fVar3;
          if (REFG(float, 0x1087f04) < fVar3) {
            (*(float *)(gen_frame + 0x68)) = (float)(fVar10 - (float10)fVar2);
            fVar10 = ((float10)GEN_TOD(pow((float10)(float)(fVar10 - (float10)fVar2),(float10)fVar3)));
            (*(float *)(gen_frame + 0x68)) = (float)fVar10;
            fVar10 = GEN_X87((float10)1 - (float10)(float)fVar10);
          }
          else {
            fVar10 = GEN_X87((float10)fVar3 * (float10)fVar2);
          }
        }
        (*(float *)(gen_frame + 0x74)) = (float)fVar10;
        pfVar6 = &(*(float *)(gen_frame + 0x68));
        fVar11 = (float10)REFG(double, 0x1088108);
        fVar2 = (float)(fVar11 - (float10)(*(float *)(gen_frame + 0x70)) * fVar11);
        (*(float *)(gen_frame + 0x68)) = fVar2;
        fVar2 = (float)((float10)(float)fVar10 * fVar11 + (float10)fVar2);
        (*(float *)(gen_frame + 0x68)) = fVar2;
        fVar2 = (float)((float10)fVar2 * (float10)*(double *)&REFG(undefined, 0x1088100));
        (*(float *)(gen_frame + 0x68)) = fVar2;
        if (!((float10)fVar2 < (float10)*(double *)&REFG(undefined, 0x1088100))) {
          pfVar6 = &(*(float *)(gen_frame + 0x18));
        }
        if (!(0.0 < *pfVar6)) {
          pfVar6 = &(*(float *)(gen_frame + 0x14));
        }
        *((char *)GEN_TOP(((int)gen_fl2bits(fVar9) + (*(int *)(gen_frame + 0x8))))) = (char)(int)*pfVar6;
        fVar9 = gen_bits2f((int)gen_fl2bits(fVar9) + 1);
      } while ((uint)gen_fl2bits(fVar9) < (uint)gen_fl2bits((*(float *)(gen_frame + 0x5c))));
    }
    uVar8 = F_004d6e60(this_00 GEN_EDX_ARG,0);
  }
  return uVar8;
}

/* ref: Client::Graphics::PostEffect::PostEffectCameraVelocityShader::Load */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00679f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x679f80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  
  bVar1 = F_00679280(this GEN_EDX_FWD,param_1,(undefined1)param_2);
  return bVar1;
}

/* ref: Client::Graphics::PostEffect::PostEffectMoonShader::Load */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00679f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x679f90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  byte bVar1;
  uint uVar2;
  
  F_004ff2f0(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_FWD);
  (*(undefined4 *)(gen_frame + 0x28)) = 0x746578;
  F_00503ef0(((undefined1 *)(gen_frame + 0x2c)),REFG(undefined * PTR32, 0x13227b4));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = REFG(undefined4, 0x1302ff0);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 5;
  (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x1d)) = 0x101;
  (*(undefined2 *)(gen_frame + 0x21)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  if ((char)param_2 == '\0') {
    uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x28)),REFG(undefined * PTR32, 0x13227b4),&(*(undefined4 *)(gen_frame + 0x0)),0,
                       0);
  }
  else {
    uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x28)),REFG(undefined * PTR32, 0x13227b4),&(*(undefined4 *)(gen_frame + 0x0)),
                         0,0);
  }
  *(uint *)(this + 0x50) = uVar2;
  if (uVar2 == 0) {
    return 0;
  }
  bVar1 = F_00679280(this GEN_EDX_ARG,param_1,(char)param_2);
  return bVar1;
}

/* ref: Global::InitCommonTexParam */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0067a050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x67a050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 uVar1;
  undefined * _Dst;
  uint uVar2;
  
  if (param_1 < 0x21) {
    _Dst = ((undefined *)GEN_TOP(F_00406bb0(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)param_1 * 4),0,0)));
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = _Dst;
    if (_Dst != ((undefined *)GEN_TOP(0x0))) {
      F_00c48350(_Dst,0,param_1 * 4);
      *((uint *)GEN_TOP(((int)this + 8))) = param_1;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      uVar2 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x1c))) GEN_EDX_ARG,((char *)REFP(0x10ac818)));
      *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
      uVar2 = F_004dcd60(0x10,2,0);
      uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      *((uint *)GEN_TOP(((int)this + 0x14))) = uVar2;
      *((undefined4 *)GEN_TOP(((int)this + 0x18))) = uVar1;
      *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
      return 1;
    }
  }
  return 0;
}

/* ref: Global::UpdateCommonTexParam */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0067a0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67a0f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
  if (*((int *)GEN_TOP(((int)this + 0x10))) == -1) {
    uVar4 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x1c))) GEN_EDX_FWD,((char *)REFP(0x10ac828)));
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar4;
  }
  puVar5 = ((undefined4 *)GEN_TOP(F_004d9920(*((int *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,0,
                        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0xc))),2)));
  puVar6 = ((undefined4 *)GEN_TOP(0x0));
  if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar5 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
    fVar1 = *((float *)GEN_TOP(((int)this + 0x18)));
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[1] = (undefined4)gen_fl2bits((float)((float10)1 / (float10)fVar1));
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0x24))) = 0;
    puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14)));
    *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0xa8 + *((int *)GEN_TOP(((int)this + 0x10))) * 4))) = puVar6;
    uVar4 = 0;
    if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
      do {
        if (((*((uint *)GEN_TOP(((int)this + 0x1c))) >> GEN_SHC((byte)uVar4, (unsigned int)(uintptr_t)uVar4) & 1) != 0) &&
           (puVar6 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar4 * 4))),
           *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar4 * 4))) != 0)) {
          puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x10))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG)));
          if ((char)puVar6 != '\0') {
            piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar4 * 4)));
            puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG)));
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *((uint *)GEN_TOP(((int)this + 8))));
    }
  }
  return (uint)puVar6;
}

/* ref: FUN_0067a1d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0067a1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67a1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint local_c;
  uint * local_8;
  
  local_8 = ((uint *)GEN_TOP(((int)this + 0x604)));
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
  *((undefined4 *)GEN_TOP(((int)this + 0x1004))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1008))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x100c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1010))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x1014))),0,0x50);
  *((undefined4 *)GEN_TOP(((int)this + 0x1064))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1068))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x106c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1070))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1074))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1078))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x107c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1080))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1084))) = 0;
  return 1;
}

/* ref: Client::Graphics::PostEffect::PostEffectManager::PostEffectManager */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0067a2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67a2b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pPVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10adc40));
  F_004d6630((undefined *)(this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10add70));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10add58));
  pPVar1 = this + 0x14;
  iVar2 = 0x1a;
  do {
    *(undefined * PTR32 * PTR32 *)pPVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10adc28));
    *(undefined4 *)(pPVar1 + 4) = 0;
    *(undefined4 *)(pPVar1 + 0x10) = 0xffffffff;
    *(undefined4 *)(pPVar1 + 0x14) = 0;
    pPVar1 = pPVar1 + 0x20;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)(this + 0x374) = (*(undefined * PTR32 (*)[1])REFP(0x10adc30));
  *(undefined4 *)(this + 0x378) = 0;
  *(undefined4 *)(this + 0x37c) = 0;
  *(undefined4 *)(this + 0x380) = 0;
  *(undefined4 *)(this + 900) = 0;
  *(undefined4 *)(this + 0x388) = 0;
  *(undefined4 *)(this + 0x38c) = 0;
  *(undefined4 *)(this + 0x390) = 0;
  *(undefined * PTR32 * PTR32 *)(this + 0x3d0) = (*(undefined * PTR32 (*)[1])REFP(0x10adc38));
  F_00c48350(this + 0x9d4,0,0xa00);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x1458) = 0;
  *(undefined4 *)(this + 0x1460) = 0;
  *(undefined4 *)(this + 0x1464) = 0;
  *(undefined4 *)(this + 0x146c) = 0;
  *(undefined4 *)(this + 0x1470) = 0;
  *(undefined4 *)(this + 0x1474) = 0;
  *(undefined4 *)(this + 0x1478) = 0;
  *(undefined4 *)(this + 0x147c) = 0;
  *(undefined4 *)(this + 0x1480) = 0;
  *(undefined4 *)(this + 0x1484) = 0;
  *(undefined4 *)(this + 0x1488) = 0;
  *(undefined4 *)(this + 0x148c) = 0;
  *(undefined4 *)(this + 0x1490) = 0;
  *(undefined4 *)(this + 0x1494) = 0;
  *(undefined4 *)(this + 0x1498) = 0;
  *(undefined4 *)(this + 0x149c) = 0;
  *(undefined4 *)(this + 0x14a0) = 0;
  *(undefined4 *)(this + 0x14a4) = 0;
  *(undefined4 *)(this + 0x14a8) = 0;
  *(undefined4 *)(this + 0x14ac) = 0;
  *(undefined4 *)(this + 0x14b0) = 0;
  *(undefined4 *)(this + 0x14b4) = 0;
  *(undefined4 *)(this + 0x14b8) = 0;
  *(undefined4 *)(this + 0x14bc) = 0;
  *(undefined4 *)(this + 0x14c0) = 0;
  *(undefined4 *)(this + 0x14c4) = 0;
  *(undefined4 *)(this + 0x14c8) = 0;
  F_00c48350(this + 0x14cc,0,0x3c);
  *(uint *)(this + 0x1508) = *(uint *)(this + 0x1508) & 0xffffffa0 | 0x7a0;
  return (uint)this;
}

/* ref: Global::ReleaseResources_0067a420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0067a420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67a420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined * this_00;
  int * piVar6;
  int local_8;
  
  *((uint *)GEN_TOP((REFG(int, 0x137127c) + 0x11e44))) = *((uint *)GEN_TOP((REFG(int, 0x137127c) + 0x11e44))) & 0xfffffff7;
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x1510)));
  uVar3 = 0;
  uVar2 = 1;
  do {
    uVar4 = uVar4 & ~uVar2 | 0 << GEN_SHC((byte)uVar3, (unsigned int)(uintptr_t)uVar3);
    uVar3 = uVar3 + 1;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  } while (uVar3 < 0x1b);
  *((uint *)GEN_TOP(((int)this + 0x1510))) = uVar4;
  piVar6 = ((int *)GEN_TOP(((int)this + 0x9d4)));
  local_8 = 5;
  do {
    iVar5 = 0x80;
    do {
      piVar1 = ((int *)GEN_TOP(*piVar6));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
        *piVar6 = 0;
      }
      piVar6 = piVar6 + 1;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  F_00676670(((undefined *)GEN_TOP(((int)this + 0x374))) GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x14)));
  iVar5 = 0x1b;
  do {
    uVar4 = F_00676510(this_00 GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x20)));
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  piVar6 = ((int *)GEN_TOP(((int)this + 0x14cc)));
  local_8 = 5;
  do {
    iVar5 = 3;
    do {
      piVar1 = ((int *)GEN_TOP(*piVar6));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
        *piVar6 = 0;
      }
      piVar6 = piVar6 + 1;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14c8)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x14c8))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14c4)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x14c4))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14c0)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x14c0))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14bc)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x14bc))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14b8)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x14b8))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14b4)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x14b4))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14b0)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x14b0))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14ac)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x14ac))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14a8)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x14a8))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14a4)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x14a4))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14a0)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x14a0))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x149c)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x149c))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1498)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x1498))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1494)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x1494))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1490)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x1490))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x148c)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x148c))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1488)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x1488))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1484)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x1484))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1480)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x1480))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x147c)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x147c))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1478)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x1478))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1474)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x1474))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1470)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x1470))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x146c)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x146c))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1468)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x1468))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1464)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x1464))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1460)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x1460))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x145c)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x145c))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1458)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x1458))) = 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  return uVar4;
}

/* ref: Global::GetSSAOShaderName */
GEN_OWN GEN_FRAME uint F_0067a7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x67a7a0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  uVar1 = *(*(uint * PTR32 *)&gen_args[0]);
  uVar2 = uVar1 >> 7 & 3;
  ((int *)(gen_frame + 0x0))[1] = 3;
  ((int *)(gen_frame + 0x0))[0] = 0;
  (*(uint * PTR32 *)&gen_args[0]) = ((uint *)GEN_TOP(uVar2));
  if (uVar2 < 3) {
    piVar3 = (int *)&(*(uint * PTR32 *)&gen_args[0]);
    if (uVar2 == 0) {
      piVar3 = ((int *)(gen_frame + 0x0));
    }
  }
  else {
    piVar3 = ((int *)(gen_frame + 0x0)) + 1;
  }
  if ((uVar1 & 0x200) == 0) {
    return (uint)(&REFG(undefined * PTR32, 0x13227b8))[(int)(*piVar3)];
  }
  return (uint)(&REFG(undefined * PTR32, 0x13227c8))[(int)(*piVar3)];
}

/* ref: Global::UpdateQualityFlags */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0067a800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67a800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  uint * puVar7;
  
  iVar3 = REFG(int, 0x1371278);
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x1508)));
  (*(int *)(gen_frame + 0x8)) = REFG(int, 0x1371278);
  cVar1 = *((char *)GEN_TOP((REFG(int, 0x1371278) + 0x17)));
  (*(uint *)(gen_frame + 0x0)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + 0x150c)));
  if (cVar1 == '\x01') {
    *((uint *)GEN_TOP(((int)this + 0x1508))) = *((uint *)GEN_TOP(((int)this + 0x1508))) & 0xfffffcff | 0x80;
  }
  else if (cVar1 == '\x02') {
    *((uint *)GEN_TOP(((int)this + 0x1508))) = *((uint *)GEN_TOP(((int)this + 0x1508))) | 0x380;
  }
  uVar4 = 8;
  puVar6 = ((uint *)GEN_TOP(((int)this + 0x1508)));
  puVar7 = &(*(uint *)(gen_frame + 0x0));
  do {
    if (*puVar7 != *puVar6) {
      iVar5 = (*puVar7 & 0xff) - (uint)(byte)*puVar6;
      if (((iVar5 == 0) &&
          (iVar5 = (uint)*((byte *)GEN_TOP(((int)puVar7 + 1))) - (uint)*((byte *)GEN_TOP(((int)puVar6 + 1))), iVar5 == 0))
         && (iVar5 = (uint)*((byte *)GEN_TOP(((int)puVar7 + 2))) - (uint)*((byte *)GEN_TOP(((int)puVar6 + 2))), iVar5 == 0
            )) {
        iVar5 = (uint)*((byte *)GEN_TOP(((int)puVar7 + 3))) - (uint)*((byte *)GEN_TOP(((int)puVar6 + 3)));
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
  *((uint *)GEN_TOP(((int)this + 0x1508))) =
       *((uint *)GEN_TOP(((int)this + 0x1508))) ^
       ((uint)(1 < *((byte *)GEN_TOP((iVar3 + 0x18)))) * 0x400 ^ *((uint *)GEN_TOP(((int)this + 0x1508)))) & 0x400;
  if (((*((uint *)GEN_TOP(((int)this + 0x1508))) ^ uVar2) & 0x400) != 0) {
    *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) & 0xffeffbff;
    *((uint *)GEN_TOP((REFG(int, 0x137127c) + 0x11e44))) = *((uint *)GEN_TOP((REFG(int, 0x137127c) + 0x11e44))) & 0xfffffff7;
  }
  return uVar4 != 0;
}

/* ref: Global::SetEffectEnabled */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0067a900(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x67a900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  int iVar1;
  
  if (param_2 == 8) {
    if ((((*((uint *)GEN_TOP((param_1 + 0x1514))) >> 8 & 1) == 0) && (param_3 != '\0')) &&
       (**((int * PTR32 *)GEN_TOP((param_1 + 600))) != 0)) {
      *((undefined1 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 600))) + 0x90))) = 0;
    }
  }
  else if (param_2 == 0xd) {
    if (((*((uint *)GEN_TOP((param_1 + 0x1514))) >> 0xd & 1) == 0) && (param_3 != '\0')) {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xb8))) + 0x10)));
      if (iVar1 != 0) {
        *((undefined1 *)GEN_TOP((iVar1 + 0xd1))) = 1;
      }
      *((undefined1 *)GEN_TOP((param_1 + 0x173d))) = 0;
    }
    *((char *)GEN_TOP((REFG(int, 0x13759f8) + 0x288))) = param_3;
  }
  *((uint *)GEN_TOP((param_1 + 0x1514))) =
       (uint)(param_3 != '\0') << GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2) |
       ~(1 << GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2)) & *((uint *)GEN_TOP((param_1 + 0x1514)));
  return param_1;
}

/* ref: FUN_0067a9a0 */
GEN_OWN GEN_FRAME uint F_0067a9a0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x67a9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  F_004d4af0(param_1 GEN_EDX_ARG,param_3,param_3,2,-(uint)(param_2 != '\0') & 9,(float)(float10)0,0,0,
               (undefined1)param_4);
  return param_1;
}

/* ref: Global::DrawFullscreenPass */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0067a9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x67a9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  byte bVar1;
  undefined4 * puVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
  F_00678f50(this GEN_EDX_FWD,param_1);
  puVar2 = ((undefined4 *)GEN_TOP(F_004d4760(this_00 GEN_EDX_ARG,0x48)));
  uVar3 = 0;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 4;
    puVar2[1] = 6;
    puVar2[2] = 0;
    puVar2[3] = 4;
    bVar1 = F_004dc830(this_00 GEN_EDX_ARG,puVar2 + 4);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar3 = F_004d4810(this_00 GEN_EDX_ARG,puVar2);
    }
  }
  return uVar3;
}

/* ref: Client::Graphics::PostEffect::PostEffectShader::SetupResourceTables */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0067aa50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67aa50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
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
     (iVar9 = *((int *)GEN_TOP((*(int *)(this + 4) + 0x9c))), (*(int *)(gen_frame + 0xc)) = iVar9, iVar9 != 0)) {
    if (this[0x41] != (undefined1)0x0) {
      iVar9 = 0;
      uVar8 = 0;
      do {
        if (*((int *)GEN_TOP((iVar9 + 4 + *(int *)(this + 0x10)))) != 0) {
          piVar2 = *((int * PTR32 *)GEN_TOP((iVar9 + 4 + *(int *)(this + 0x10))));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_FWD);
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
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
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
    PVar1 = *((undefined *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 0xc)));
    this[0x40] = PVar1;
    uVar8 = (uint)(byte)PVar1;
    this[0x41] = *((undefined *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 0x14)));
    puVar4 = ((undefined4 *)GEN_TOP(F_00406bb0(uVar8 * 8,0,0)));
    puVar5 = puVar4;
    if (puVar4 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar4 = ((undefined4 *)GEN_TOP(0x0));
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
        puVar5 = ((undefined4 *)GEN_TOP((uVar8 + 8)));
        do {
          puVar5[-2] = 0xffffffff;
          puVar5[-1] = 0;
          *puVar5 = REFG(undefined4, 0x1375a5c);
          puVar5 = puVar5 + 3;
          iVar9 = iVar9 - 1;
        } while (-1 < iVar9);
      }
    }
    *(uint *)(this + 0x10) = uVar8;
    uVar8 = 0;
    if (this[0x40] != (undefined1)0x0) {
      do {
        *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + uVar8 * 8))) =
             *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 0x10))) + 4 + uVar8 * 8)));
        *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 4 + uVar8 * 8))) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar8 < (byte)this[0x40]);
    }
    if (this[0x41] != (undefined1)0x0) {
      dVar3 = GEN_X87(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
      ((uint *)(gen_frame + 0x0))[1] = 0x1ff;
      ((uint *)(gen_frame + 0x0))[0] = 0xfffffe00;
      iVar9 = 0;
      uVar8 = 0;
      do {
        *((undefined4 *)GEN_TOP((iVar9 + *(int *)(this + 0x10)))) =
             *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 0x18))) + 4 + uVar8 * 8)));
        *((undefined4 *)GEN_TOP((iVar9 + 4 + *(int *)(this + 0x10)))) = 0;
        ((uint *)(gen_frame + 0x0))[2] = (int)dVar3;
        puVar6 = ((uint *)(gen_frame + 0x0)) + 2;
        if (0x1fe < (int)dVar3) {
          puVar6 = ((uint *)(gen_frame + 0x0)) + 1;
        }
        ((uint *)(gen_frame + 0x0))[2] = *puVar6;
        puVar7 = ((uint *)(gen_frame + 0x0));
        if (-0x201 < (int)*puVar6) {
          puVar7 = ((uint *)(gen_frame + 0x0)) + 2;
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

/* ref: Client::Graphics::PostEffect::PostEffectShader::Render */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0067acb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67acb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x50, 0);
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
  
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if ((char)uVar8 == '\0') {
    return uVar8;
  }
  iVar14 = *((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4)));
  pvVar4 = *((undefined * PTR32 *)GEN_TOP((iVar14 + 0x1a8)));
  (*(int *)(gen_frame + 0x34)) = iVar14;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = REFG(void * PTR32, 0x148809c);
  F_004daa40(pvVar4 GEN_EDX_ARG,(uint)(byte)this[0x42],this + 0x18,*(undefined4 *)(this + 0x28),0,0);
  if (((byte)this[0x48] & 1) != 0) {
    uVar15 = *(undefined4 *)(this + 0x34);
    puVar9 = ((undefined4 *)GEN_TOP(F_004d4760(pvVar4 GEN_EDX_ARG,0x28)));
    uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar9 = 3;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[1] = 1;
      puVar9[2] = uVar15;
      puVar9[3] = uVar5;
      F_004d4810(pvVar4 GEN_EDX_ARG,puVar9);
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
    iVar11 = *((int *)GEN_TOP((iVar14 + 0x18)));
    iVar14 = *((int *)GEN_TOP((iVar14 + 0x1c)));
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
    puVar9 = ((undefined4 *)GEN_TOP(F_004d4760(pvVar4 GEN_EDX_ARG,0x14)));
    if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar9 = 2;
      puVar9[1] = (*(int *)(gen_frame + 0x20));
      puVar9[2] = (*(int *)(gen_frame + 0x24));
      puVar9[3] = (*(int *)(gen_frame + 0x28));
      puVar9[4] = (*(int *)(gen_frame + 0x2c));
      F_004d4810(pvVar4 GEN_EDX_ARG,puVar9);
    }
    uVar15 = 1;
  }
  puVar10 = ((uint *)GEN_TOP(F_004d4a30(&(*(float *)(gen_frame + 0x44)) GEN_EDX_ARG,3,1,0,uVar15,(float)(float10)0,(float)(float10)0)));
  *((uint *)GEN_TOP(((int)pvVar4 + 0x3c))) = *puVar10 & 0x7fffffff;
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
  *((float *)GEN_TOP((iVar14 + 0x10))) = (float)((float10)(*(float *)(gen_frame + 0x8)) - (float10)(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x3c)) = (float)((float10)(*(float *)(gen_frame + 0xc)) - (float10)(*(float *)(gen_frame + 0x4)));
  *((float *)GEN_TOP((iVar14 + 0x14))) = (float)((float10)(*(float *)(gen_frame + 0xc)) - (float10)(*(float *)(gen_frame + 0x4)));
  *((float *)GEN_TOP((iVar14 + 0x18))) = (*(float *)(gen_frame + 0x0));
  *((float *)GEN_TOP((iVar14 + 0x1c))) = (*(float *)(gen_frame + 0x4));
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
    *((int *)GEN_TOP(((int)pvVar4 + 0x44))) = iVar14;
    *((undefined4 *)GEN_TOP(((int)pvVar4 + 0x60))) = 0;
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
          *((int *)GEN_TOP(((int)pvVar4 + *piVar12 * 8 + 0x2a8))) = iVar11;
          *((uint *)GEN_TOP(((int)pvVar4 + *piVar12 * 8 + 0x2ac))) = piVar12[2] & 0xfffffff;
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
    *((uint *)GEN_TOP(((int)pvVar4 + 0x58))) =
         (((-(uint)(((byte)this[0x48] & 4) != 0) & 5) + 2) * 2 | (uint)bVar7) << 0x19;
    *((uint *)GEN_TOP(((int)pvVar4 + 0x5c))) =
         ((byte)PVar2 & 4) << 4 | (uint)CONCAT11(PVar1,PVar1) << 8 | (uint)(byte)PVar1 << 0x18;
    uVar8 = REFG(undefined4, 0x130235c);
    if (*(int *)(this + 0x28) != 0) {
      uVar8 = *(uint *)(this + 0x2c);
    }
    *((uint *)GEN_TOP(((int)pvVar4 + 0x50))) = uVar8 & 0x1f;
    *((uint *)GEN_TOP(((int)pvVar4 + 0x38))) = *(uint *)(this + 0x30) & 0x7ffffff;
    pvVar4 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 0x1a8)));
    F_00678f50((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,this);
    uVar6 = REFG(undefined4, 0x1370b90);
    uVar8 = *((uint *)GEN_TOP(((int)pvVar4 + 0x18)));
    if (uVar8 + 0x50 < 0x8001) {
      puVar9 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar4 + 0xc))) + uVar8)));
      *((uint *)GEN_TOP(((int)pvVar4 + 0x18))) = uVar8 + 0x50;
    }
    else {
      uVar8 = REFG(undefined4, 0x1370b90);
      piVar12 = ((int *)GEN_TOP((REFG(undefined4, 0x1370b90) + 0xc0)));
      iVar14 = _InterlockedExchangeAdd((volatile gen_long *)(piVar12), (gen_long)(0x8000));
      if (*((uint *)GEN_TOP((uVar6 + 0xb8))) < (uint)(*((int *)GEN_TOP((uVar6 + 0xc4))) * 3 + *piVar12)) {
        _InterlockedExchangeAdd((volatile gen_long *)(piVar12), (gen_long)(-0x8000));
        return uVar8;
      }
      puVar9 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0xbc))) + iVar14)));
      if (puVar9 == ((undefined4 *)GEN_TOP(0x0))) {
        return uVar6;
      }
      *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 0xc))) = puVar9;
      *((undefined4 *)GEN_TOP(((int)pvVar4 + 0x18))) = 0x50;
      uVar8 = uVar6;
    }
    if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar9 = 4;
      puVar9[1] = 6;
      puVar9[2] = 0;
      puVar9[3] = 4;
      bVar7 = F_004dc830(pvVar4 GEN_EDX_ARG,puVar9 + 4);
      uVar8 = CONCAT31(extraout_var,bVar7);
      if (bVar7 != 0) {
        uVar8 = F_004d4810(pvVar4 GEN_EDX_ARG,puVar9);
      }
    }
  }
  return uVar8;
}

