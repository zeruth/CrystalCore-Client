#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00e15660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: CWiauPropertyList::LookupPropId */
GEN_LIB GEN_FRAME int GEN_THISCALL F_00e15680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 0x10)) {
    piVar2 = *(int * PTR32 *)(this + 0xc);
    do {
      if (*piVar2 == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < *(int *)(this + 0x10));
  }
  return -1;
}

/* ref: StructArrayImplementation::FindMemberIndex */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e156b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe156b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (0 < *(int *)(this + 0x10)) {
    piVar2 = *(int * PTR32 *)(this + 0xc);
    do {
      if (*piVar2 == *param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
    } while ((int)uVar1 < *(int *)(this + 0x10));
  }
  return 0xffffffff;
}

/* ref: StructArrayImplementation::Object::HasMember */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e156e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe156e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x78))))(this GEN_EDX_FWD,&(*(int *)&gen_args[0]),(*(int *)&gen_args[0]));
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 0x10)));
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc)));
    do {
      if ((*(int *)&gen_args[0]) == *piVar3) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar2 < iVar1);
  }
  return 0;
}

/* ref: StructArrayImplementation::Object::HasMemberHandle */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int * piVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 0x10)));
  iVar3 = 0;
  if (0 < iVar1) {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc)));
    do {
      if (*param_1 == *piVar2) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar3 < iVar1);
  }
  return 0;
}

/* ref: StructArrayImplementation::Object::IsValidMemberIndex */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(param_1 < *((int *)GEN_TOP((*(int *)(this + 0xc) + 0x10))));
}

/* ref: StructArrayImplementation::Object::GetMemberName */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + param_1 * 8)));
}

/* ref: StructArrayImplementation::Object::GetMemberHandle */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e157b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe157b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = this;
  param_1[1] = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + param_2 * 8)));
  return (uint)param_1;
}

/* ref: StructArrayImplementation::AsObject */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e157d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe157d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPVOID pvVar1;
  undefined4 * puVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x14)));
  puVar2[3] = this;
  puVar2[1] = 0x14;
  puVar2[2] = 0;
  *puVar2 = (*(undefined * PTR32 (*)[36])REFP(0x114e214));
  puVar2[4] = param_1;
  return (uint)puVar2;
}

/* ref: StructArrayImplementation::vf24 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e15810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  
  param_2[2] = param_2[2] + 1;
  iVar4 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (0 < *(int *)(this + 0x10)) {
    do {
      puVar2 = ((undefined4 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xc) + iVar4 * 8)));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0xc))))(param_2 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),*puVar2);
      F_00e1d1b0(puVar2[1] GEN_EDX_ARG,param_1,uVar3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
  }
  piVar1 = param_2 + 2;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_2)))(param_2 GEN_EDX_ARG,1);
  }
  return;
}

/* ref: StructArrayImplementation::Clear */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e15880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe15880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(this + 0x10) < 1) {
    *(undefined4 *)(this + 0x20) = 0;
    return;
  }
  do {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar2 * 8)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)(this + 0x10));
  *(undefined4 *)(this + 0x20) = 0;
  return;
}

/* ref: StructArrayImplementation::Reserve */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e158c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe158c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar2 * 8)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x10));
  }
  return;
}

/* ref: StructArrayImplementation::SetSize */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e158f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe158f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined4 *)(this + 0x20) = param_1;
  if (0 < *(int *)(this + 0x10)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar2 * 8)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x10));
  }
  return;
}

/* ref: StructArrayImplementation::Object::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15930(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe15930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: hkDataWorldDict::ObjectTracker::UntrackObject */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_FWD);
  this_00 = ((undefined *)GEN_TOP(F_00dbd970(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG,uVar1,0)));
  uVar1 = F_00dbe420(this_00 GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00e159b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e159b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe159b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc))) + 8)));
  if (param_2 != 0) {
    uVar2 = F_00da4190(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_FWD,param_2,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_2);
      F_00da3a20(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_ARG,uVar2,uVar2);
    }
    *param_1 = uVar2;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: StructArrayImplementation::FindMemberIndex_00e15a10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x18) + 0xc))) + 8)));
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00da4190(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_FWD,param_1,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_1);
      F_00da3a20(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_ARG,uVar2,uVar2);
    }
  }
  uVar3 = 0;
  if (0 < *(int *)(this + 0x10)) {
    puVar4 = *(uint * PTR32 *)(this + 0xc);
    do {
      if (*puVar4 == uVar2) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
    } while ((int)uVar3 < *(int *)(this + 0x10));
  }
  return 0xffffffff;
}

/* ref: StructArrayImplementation::Object::GetMemberHandle_00e15a80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15a80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0x18))) + 0xc))) + 8))) + 0x50)));
    uVar1 = F_00da4190(this_00 GEN_EDX_FWD,param_2,0);
    if (uVar1 == 0) {
      uVar1 = F_00da1210(param_2);
      F_00da3a20(this_00 GEN_EDX_ARG,uVar1,uVar1);
    }
  }
  uVar1 = F_00e11bf0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x18))) GEN_EDX_ARG,uVar1);
  if (uVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return (uint)param_1;
  }
  *param_1 = this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: StructArrayImplementation::Object::vf29 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e15b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00e11b60(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x18))) GEN_EDX_FWD,param_1);
  return;
}

/* ref: StructArrayImplementation::Object::InternMemberName */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15b20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0x18))) + 0xc))) + 8)));
  if (param_2 != 0) {
    uVar2 = F_00da4190(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_FWD,param_2,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_2);
      F_00da3a20(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_ARG,uVar2,uVar2);
    }
    *param_1 = uVar2;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: StructArrayImplementation::GetClass */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e15b80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe15b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x18)));
}

/* ref: StructArrayImplementation::GetMemberArray */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e15a10(this GEN_EDX_FWD,param_1);
  return *((uint *)GEN_TOP((*(int *)(this + 0xc) + 4 + uVar1 * 8)));
}

/* ref: Global::ClearAndDeallocate_00e15bb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e15bf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  uVar1 = F_00e14a10(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: StructArrayImplementation::FindOrAddMember */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (0 < *(int *)(this + 0x10)) {
    piVar2 = *(int * PTR32 *)(this + 0xc);
    do {
      if (*piVar2 == *param_1) {
        if (uVar1 != 0xffffffff) {
          return uVar1;
        }
        break;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
    } while ((int)uVar1 < *(int *)(this + 0x10));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  uVar1 = F_00e14a10(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: StructArrayImplementation::Object::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 100))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf32 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x3c))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf33 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15d80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_2);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x44))))(piVar1 GEN_EDX_ARG,param_1,*(undefined4 *)(this + 0x10));
  return param_1;
}

/* ref: StructArrayImplementation::Object::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x5c))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15df0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  uVar1 = F_00e1d1b0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar1 * 8))) GEN_EDX_ARG,
                     *(undefined4 *)(this + 0x10),param_2);
  return uVar1;
}

/* ref: StructArrayImplementation::Object::vf23 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15e20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x60))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10),param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf22 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x68))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10),param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x38))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10),param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::SetReal */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15eb0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xe15eb0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*((undefined * PTR32 *)GEN_TOP((param_1 + 0xc))) GEN_EDX_FWD,param_2);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x40))))
                    (piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x10))),(undefined4)gen_fl2bits(param_3));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15ef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10),param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe15f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x30))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10),param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::SetChar */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15f50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe15f50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*((undefined * PTR32 *)GEN_TOP((param_1 + 0xc))) GEN_EDX_FWD,param_2);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x10))),(int)param_3);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::SetShort */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15f90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10),(int)(short)param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::SetInt */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15fd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10),param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::SetInt64 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe16000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x58))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10),param_2,param_3);
  return uVar2;
}

/* ref: FUN_00e16040 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e16040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe16040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  int iVar4;
  
  iVar4 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114e174));
  if (0 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 4 + iVar4 * 8)));
      piVar2 = puVar1 + 2;
      *piVar2 = *piVar2 - 1;
      if (*piVar2 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *((int *)GEN_TOP(((int)this + 0x10))));
  }
  iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 8)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(F_00dbd970(((undefined *)GEN_TOP((iVar4 + 0x70))) GEN_EDX_ARG,uVar3,0)));
  F_00dbe420(this_00 GEN_EDX_ARG,this);
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x14)));
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar3 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    piVar2 = puVar1 + 2;
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar3;
}

/* ref: StructArrayImplementation::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e160f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe160f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e16040(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e16130 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e16130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe16130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
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

/* ref: Global::LocalArrayInit */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e161b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe161b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::LocalArrayDestroy */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e16220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe16220u, gen_a0, 0u, 0u, 0u);
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

/* ref: Global::LocalArrayInit2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e162b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe162b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::LocalArrayDestroy2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e16320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe16320u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkDataWorldDict::AddEntry */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e163b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe163b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00dbd970(this + 0xc GEN_EDX_FWD,param_1,0xffffffff);
  uVar3 = F_00e15120(this GEN_EDX_ARG);
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + uVar3 * 8)));
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  uVar2 = F_00dbd8b0(this + 0xc GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar3);
  return uVar2;
}

/* ref: Global::ClearAndDeallocateDefault */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e16400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe16400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkDataWorldDict::AddEntry2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe16440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00dbd970(this + 0xc GEN_EDX_FWD,param_1,0xffffffff);
  uVar3 = F_00e15160(this GEN_EDX_ARG);
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + uVar3 * 8)));
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  uVar2 = F_00dbd8b0(this + 0xc GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar3);
  return uVar2;
}

/* ref: hkDataObjectDict::FindOrCreateMember */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe16490u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined * phVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x14);
  iVar2 = 0;
  (*(int *)(gen_frame + 0xc)) = -1;
  if (0 < iVar8) {
    piVar6 = *(int * PTR32 *)(this + 0x10);
    do {
      if (*piVar6 == *param_2) {
        (*(int *)(gen_frame + 0xc)) = iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar6 = piVar6 + 4;
    } while (iVar2 < iVar8);
    if ((*(int *)(gen_frame + 0xc)) != -1) goto LAB_00e16699;
  }
  phVar1 = this + 0x10;
  (*(int *)(gen_frame + 0xc)) = iVar8;
  if (*(uint *)(this + 0x14) == (*(uint *)(this + 0x18) & 0x3fffffff)) {
    F_00d95710(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 0xc))),phVar1,0x10);
  }
  puVar3 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x14) * 0x10 + *(int *)phVar1)));
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar3 = 0;
  }
  iVar8 = *(int *)(this + 0x14);
  *(int *)(this + 0x14) = iVar8 + 1;
  piVar7 = ((int *)GEN_TOP((iVar8 * 0x10 + *(int *)phVar1)));
  *piVar7 = *param_2;
  piVar6 = ((int *)GEN_TOP(param_2[4]));
  iVar8 = *piVar6;
  if (iVar8 == 8) {
    uVar4 = F_00e0dd10(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),piVar6[1],0);
    piVar7[2] = uVar4;
    *((int *)GEN_TOP((uVar4 + 8))) = *((int *)GEN_TOP((uVar4 + 8))) + 1;
  }
  else if (iVar8 == 9) {
    (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(piVar6[1]));
    piVar5 = ((int *)GEN_TOP(F_00e0dd10(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),((int *)GEN_TOP(piVar6[1])),0)));
    piVar7[2] = (int)piVar5;
    iVar8 = *piVar5;
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar5;
    uVar4 = F_00e19c70(piVar6 GEN_EDX_ARG);
    ((code *)*((gen_code32 *)GEN_TOP((iVar8 + 0x10))))((*(int * PTR32 *)(gen_frame + 0x8)),uVar4);
    *((int *)GEN_TOP((piVar7[2] + 8))) = *((int *)GEN_TOP((piVar7[2] + 8))) + 1;
    if ((param_2[5] != 0) && (*(*(int * PTR32 *)(gen_frame + 0x4)) == 3)) {
      uVar4 = F_00e19c70(piVar6 GEN_EDX_ARG);
      iVar8 = 0;
      (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(param_2[5]));
      if (0 < (int)uVar4) {
        do {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar7[2])) + 0x40))))
                    (((int *)GEN_TOP(piVar7[2])) GEN_EDX_ARG,iVar8,*((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x4)) + iVar8 * 4))));
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)uVar4);
      }
    }
  }
  else if (iVar8 == 7) {
    piVar7[2] = 0;
  }
  else if (iVar8 == 6) {
    (*(int * PTR32 *)(gen_frame + 0x4)) = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc)));
    (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc)))));
    uVar4 = F_00e19c80(piVar6 GEN_EDX_ARG);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x8)) + 0x24))))((*(int * PTR32 *)(gen_frame + 0x4)),uVar4);
    (*(uint *)(gen_frame + 0x0)) = uVar4;
    puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 0x10))))
                       (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),1)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar3 + 6))) = *((short *)GEN_TOP(((int)puVar3 + 6))) + 1;
      puVar3[2] = puVar3[2] + 1;
    }
    piVar7[2] = (int)puVar3;
    puVar3[2] = puVar3[2] + 1;
    *((short *)GEN_TOP(((int)puVar3 + 6))) = *((short *)GEN_TOP(((int)puVar3 + 6))) - 1;
    piVar6 = puVar3 + 2;
    *piVar6 = *piVar6 - 1;
    if (*piVar6 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
    }
  }
  else {
    piVar6 = ((int *)GEN_TOP(param_2[5]));
    if (piVar6 == ((int *)GEN_TOP(0x0))) {
      piVar7[2] = 0;
      piVar7[3] = 0;
    }
    else if ((iVar8 == 2) || (iVar8 == 4)) {
      piVar7[2] = *piVar6;
      piVar7[3] = piVar6[1];
    }
    else if (iVar8 == 3) {
      piVar7[2] = *piVar6;
    }
    else if (iVar8 == 5) {
      uVar4 = F_00da1210(piVar6);
      piVar7[2] = uVar4;
    }
  }
LAB_00e16699: ;
  *param_1 = param_2;
  param_1[1] = (*(int *)(gen_frame + 0xc));
  return (uint)param_1;
}

/* ref: hkDataObjectDict::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e166b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe166b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00e16490(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_1,8);
  return *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x4)) * 0x10)));
}

/* ref: hkDataObjectDict::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e166e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe166e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00e16490(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_1,5);
  return *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x4)) * 0x10)));
}

/* ref: hkDataObjectDict::vf12 */
GEN_LIB GEN_FRAME ulonglong GEN_THISCALL F_00e16710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe16710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00e16490(this GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)),param_1,1);
  if ((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x10))) != 2) && (**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x10))) != 4)) {
    return 0;
  }
  return *((ulonglong *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x4)) * 0x10)));
}

/* ref: hkDataObjectDict::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe16760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00e16490(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_1,6);
  return *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x4)) * 0x10)));
}

/* ref: hkDataObjectDict::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe16790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  F_00e16490(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_1,9);
  uVar1 = F_00e0d670(*((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x4)) * 0x10))),param_2);
  return uVar1;
}

/* ref: hkDataObjectDict::vf15 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00e167d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe167d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00e16490(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_1,3);
  return *((float *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x4)) * 0x10)));
}

/* ref: hkDataObjectDict::vf24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe16800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  undefined * this_00;
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  this_00 = ((undefined *)GEN_TOP(*param_2));
  F_00e16490(this_00 GEN_EDX_FWD,&(*(int *)(gen_frame + 0x8)),param_2[1],1);
  F_00e13d50(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),param_1,1);
  iVar1 = *((int *)GEN_TOP((*(int *)(this_00 + 0x10) + 8 + (*(int *)(gen_frame + 0xc)) * 0x10)));
  (*(int *)(gen_frame + 0x10)) = iVar1;
  (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP((*(int *)(this_00 + 0x10) + 0xc + (*(int *)(gen_frame + 0xc)) * 0x10)));
  piVar2 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x10)));
  iVar3 = **((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x10)));
  if ((iVar3 == 8) || (iVar3 == 9)) {
    if (*piVar2 != 8) {
      bVar5 = *piVar2 == 9;
      goto LAB_00e1687c;
    }
  }
  else if ((iVar3 != 7) || (*piVar2 != 7)) {
    if (iVar3 != 6) goto LAB_00e16888;
    bVar5 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x10))) == piVar2;
LAB_00e1687c: ;
    if (!bVar5) goto LAB_00e16888;
  }
  if (iVar1 != 0) {
    *((int *)GEN_TOP((iVar1 + 8))) = *((int *)GEN_TOP((iVar1 + 8))) + 1;
  }
LAB_00e16888: ;
  iVar1 = *(int *)(this_00 + 0x10);
  iVar3 = *(int *)(this + 0x10);
  *((undefined4 *)GEN_TOP((iVar3 + 8 + (*(int *)(gen_frame + 0x4)) * 0x10))) = *((undefined4 *)GEN_TOP((iVar1 + 8 + (*(int *)(gen_frame + 0xc)) * 0x10)));
  uVar4 = *((uint *)GEN_TOP((iVar1 + 0xc + (*(int *)(gen_frame + 0xc)) * 0x10)));
  *((uint *)GEN_TOP((iVar3 + 0xc + (*(int *)(gen_frame + 0x4)) * 0x10))) = uVar4;
  return uVar4;
}

/* ref: hkDataObjectDict::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e168b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe168b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  int * in_ecx;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  uVar2 = F_00e13d50(this GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)),param_1,1);
  in_ecx = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x10)));
  if ((*in_ecx == 9) && (*((int *)GEN_TOP(in_ecx[1])) == 3)) {
    piVar1 = ((int *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x4)) * 0x10)));
    if (*((int *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x4)) * 0x10))) == 0) {
      piVar3 = ((int *)GEN_TOP(F_00e0dd10(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),((int *)GEN_TOP(in_ecx[1])),0)));
      *piVar1 = (int)piVar3;
      iVar4 = *piVar3;
      uVar2 = F_00e19c70(in_ecx GEN_EDX_ARG);
      ((code *)*((gen_code32 *)GEN_TOP((iVar4 + 0x10))))(*piVar1,uVar2);
      *((int *)GEN_TOP((*piVar1 + 8))) = *((int *)GEN_TOP((*piVar1 + 8))) + 1;
    }
    iVar4 = param_3 * 4;
    uVar2 = F_00e0d670(*piVar1,param_3);
    uVar2 = F_00da1010(uVar2,param_2,iVar4);
  }
  return uVar2;
}

/* ref: ArrayArrayImplementation::GetArrayAt */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe16950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4)));
  if (uVar1 == 0) {
    uVar1 = F_00e0dd10(*(undefined4 *)(this + 0x18),*((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + 4))),0);
    *((int *)GEN_TOP((uVar1 + 8))) = *((int *)GEN_TOP((uVar1 + 8))) + 1;
    *((uint *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00e16990 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e16990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe16990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
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

/* ref: FUN_00e169f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e169f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe169f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  uVar2 = F_00e16440(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,uVar2,&(*(int * PTR32 *)&gen_args[0]));
  if (*((int *)GEN_TOP(((int)this + 0x30))) == 0) {
    *((int * PTR32 *)GEN_TOP(((int)this + 0x30))) = piVar1;
  }
  return uVar2;
}

/* ref: Global::RegisterClass */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe16a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL(0x5, 11);
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(((int)this + 4)));
  uVar3 = F_00da3ae0(this_00 GEN_EDX_ARG,uVar3);
  uVar3 = F_00da3e40(this_00 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x0)),uVar3);
  if ((*(char *)(gen_frame + 0x0)) == '\0') {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    uVar3 = F_00da3a20(this_00 GEN_EDX_ARG,uVar3,piVar1);
    if (uVar2 != 0) {
      uVar3 = F_00e163b0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,uVar2,&(*(int * PTR32 *)&gen_args[0]));
    }
  }
  return uVar3;
}

/* ref: FUN_00e16aa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe16aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x228, 8, 4);
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * phVar4;
  uint uVar5;
  int * piVar6;
  undefined * phVar7;
  int iVar8;
  int iVar9;
  char * pcVar10;
  char * pcVar11;
  
  piVar6 = param_1;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  if (uVar3 == 0) {
    param_1 = ((int *)GEN_TOP(0x0));
  }
  else {
    param_1 = ((int *)GEN_TOP(F_00da4190(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar3,0)));
  }
  uVar3 = F_00e11310(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,piVar6);
  if (uVar3 != 0xffffffff) {
    iVar9 = *((int *)GEN_TOP(((int)this + 0x14)));
    do {
      F_00e16aa0(this GEN_EDX_ARG,((int *)GEN_TOP(*((undefined4 *)GEN_TOP((iVar9 + uVar3 * 8))))));
      iVar9 = *((int *)GEN_TOP(((int)this + 0x14)));
      uVar3 = *((uint *)GEN_TOP((iVar9 + 4 + uVar3 * 8)));
    } while (uVar3 != 0xffffffff);
  }
  uVar3 = F_00e113a0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,param_1);
  if (uVar3 != 0xffffffff) {
    (*(uint *)(gen_frame + 0x210)) = 0;
    (*(uint *)(gen_frame + 0x214)) = 0;
    (*(uint *)(gen_frame + 0x218)) = 0x80000000;
    (*(int *)(gen_frame + 0x220)) = 0x200;
    phVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar5 = *(uint *)(phVar4 + 0xc);
    if ((*(int *)(phVar4 + 8) < 0x800) || (*(uint *)(phVar4 + 0x10) < uVar5 + 0x800)) {
      uVar5 = F_00d94390(phVar4 GEN_EDX_ARG,0x800);
    }
    else {
      *(uint *)(phVar4 + 0xc) = uVar5 + 0x800;
    }
    (*(uint *)(gen_frame + 0x210)) = uVar5;
    (*(uint *)(gen_frame + 0x21c)) = uVar5;
    (*(uint *)(gen_frame + 0x218)) = 0x80000200;
    do {
      uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + uVar3 * 8)));
      if ((*(uint *)(gen_frame + 0x214)) == ((*(uint *)(gen_frame + 0x218)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x210)),4);
      }
      *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x210)) + (*(uint *)(gen_frame + 0x214)) * 4))) = uVar1;
      uVar5 = (*(uint *)(gen_frame + 0x214)) + 1;
      (*(uint *)(gen_frame + 0x214)) = uVar5;
      uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 4 + uVar3 * 8)));
    } while (uVar3 != 0xffffffff);
    iVar9 = 0;
    if (0 < (int)uVar5) {
      do {
        if (*((int *)GEN_TOP(((int)this + 0x30))) == *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x210)) + iVar9 * 4)))) {
          *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
        }
        if (0 < *((short *)GEN_TOP((*((int *)GEN_TOP(((*(uint *)(gen_frame + 0x210)) + iVar9 * 4))) + 6)))) {
          F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
          piVar6 = *((int * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0x210)) + iVar9 * 4)));
          piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG)));
          iVar8 = (int)*((short *)GEN_TOP((*((int *)GEN_TOP(((*(uint *)(gen_frame + 0x210)) + iVar9 * 4))) + 6)));
          pcVar11 = ((char *)REFP(0x114e328));
          pcVar10 = 
          ((char *)REFP(0x114e2c0))
          ;
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG);
          phVar7 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114e2a4)))));
          phVar7 = ((undefined *)GEN_TOP(F_00d9fe80(phVar7 GEN_EDX_ARG,uVar3)));
          phVar7 = ((undefined *)GEN_TOP(F_00d9fe80(phVar7 GEN_EDX_ARG,pcVar10)));
          phVar7 = ((undefined *)GEN_TOP(F_00d9ff40(phVar7 GEN_EDX_ARG,iVar8)));
          F_00d9fe80(phVar7 GEN_EDX_ARG,pcVar11);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0x760d3794,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114dd98)),0xb87);
          F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
        }
        F_00e13ac0(*((undefined * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0x210)) + iVar9 * 4))) GEN_EDX_ARG);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(*(uint *)(gen_frame + 0x214)));
    }
    iVar9 = 0;
    if (0 < (int)(*(uint *)(gen_frame + 0x214))) {
      do {
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0x210)) + iVar9 * 4)));
        piVar6 = puVar2 + 2;
        *piVar6 = *piVar6 - 1;
        if (*piVar6 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(*(uint *)(gen_frame + 0x214)));
    }
    F_00e113c0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,param_1);
    iVar9 = (*(int *)(gen_frame + 0x220));
    uVar3 = (*(uint *)(gen_frame + 0x21c));
    if ((*(uint *)(gen_frame + 0x21c)) == (*(uint *)(gen_frame + 0x210))) {
      (*(uint *)(gen_frame + 0x214)) = 0;
    }
    phVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar5 = iVar9 * 4 + 0x7fU & 0xffffff80;
    if (((*(int *)(phVar4 + 8) < (int)uVar5) || (uVar5 + uVar3 != *(int *)(phVar4 + 0xc))) ||
       (*(uint *)(phVar4 + 0x14) == uVar3)) {
      F_00d945c0(phVar4 GEN_EDX_ARG,uVar3,uVar5);
    }
    else {
      *(uint *)(phVar4 + 0xc) = uVar3;
    }
    (*(uint *)(gen_frame + 0x214)) = 0;
    uVar3 = (*(uint *)(gen_frame + 0x218));
    if (-1 < (int)(*(uint *)(gen_frame + 0x218))) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x210)),(*(uint *)(gen_frame + 0x218)) * 4);
    }
  }
  return uVar3;
}

/* ref: Global::RemoveClassRecursive */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe16d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL(0x24, 12);
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  uint uVar4;
  int * piVar5;
  undefined * phVar6;
  undefined * this_00;
  uint uVar7;
  int * this_01;
  int iVar8;
  
  this_01 = (*(int * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  if (uVar4 == 0) {
    piVar5 = ((int *)GEN_TOP(0x0));
  }
  else {
    piVar5 = ((int *)GEN_TOP(F_00da4190(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar4,0)));
  }
  F_00e16aa0(this GEN_EDX_ARG,this_01);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x10))))(piVar5 GEN_EDX_ARG);
  if (uVar4 != 0) {
    F_00e13050(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,uVar4,&(*(int * PTR32 *)&gen_args[0]));
  }
  F_00e139b0(this_01 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  (*(int *)(gen_frame + 0x10)) = 0x40;
  phVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = *(uint *)(phVar6 + 0xc);
  if ((*(int *)(phVar6 + 8) < 0x100) || (*(uint *)(phVar6 + 0x10) < uVar4 + 0x100)) {
    uVar4 = F_00d94390(phVar6 GEN_EDX_ARG,0x100);
  }
  else {
    *(uint *)(phVar6 + 0xc) = uVar4 + 0x100;
  }
  (*(uint *)(gen_frame + 0x0)) = uVar4;
  (*(uint *)(gen_frame + 0x8)) = 0x80000040;
  (*(uint *)(gen_frame + 0xc)) = uVar4;
  uVar4 = F_00e11310(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,this_01);
  (*(bool *)(gen_frame + 0x1f)) = uVar4 != 0xffffffff;
  if (uVar4 != 0xffffffff) {
    for (; uVar4 != 0xffffffff; uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 4 + uVar4 * 8)))) {
      uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + uVar4 * 8)));
      if ((*(uint *)(gen_frame + 0x4)) == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x0)),4);
      }
      *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 4))) = uVar1;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
      this_01 = (*(int * PTR32 *)&gen_args[0]);
    }
  }
  iVar8 = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x4))) {
    do {
      F_00e16d40(this GEN_EDX_ARG,((int *)GEN_TOP(*((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + iVar8 * 4))))));
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + iVar8 * 4)));
      piVar5 = puVar2 + 2;
      *piVar5 = *piVar5 - 1;
      if (*piVar5 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)(*(uint *)(gen_frame + 0x4)));
  }
  if ((*(bool *)(gen_frame + 0x1f)) != false) {
    F_00e11330(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,this_01);
  }
  iVar8 = (*(int *)(gen_frame + 0x10));
  uVar4 = (*(uint *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0xc)) == (*(uint *)(gen_frame + 0x0))) {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  phVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar7 = iVar8 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)(phVar6 + 8) < (int)uVar7) || (uVar7 + uVar4 != *(int *)(phVar6 + 0xc))) ||
     (*(uint *)(phVar6 + 0x14) == uVar4)) {
    F_00d945c0(phVar6 GEN_EDX_ARG,uVar4,uVar7);
  }
  else {
    *(uint *)(phVar6 + 0xc) = uVar4;
  }
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x18));
  uVar4 = (*(uint *)(gen_frame + 0x14));
  this_00 = ((undefined *)GEN_TOP(F_00da4190(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x60))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x14)),0)));
  F_00da3f00(((undefined *)GEN_TOP(((int)pvVar3 + 0x60))) GEN_EDX_ARG,uVar4);
  F_00d91a80(this_00 GEN_EDX_ARG);
  uVar4 = F_00da3f00(((undefined *)GEN_TOP(((int)pvVar3 + 4))) GEN_EDX_ARG,uVar4);
  return uVar4;
}

/* ref: Global::SetClassParent */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe16f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int * this_00;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  if ((*(int *)&gen_args[0]) != 0) {
    this_00 = ((int *)GEN_TOP(((int)this + 0x14)));
    uVar2 = F_00e11310(this_00 GEN_EDX_FWD,(*(int *)&gen_args[0]));
    if (uVar2 != 0xffffffff) {
      do {
        if (*((int * PTR32 *)GEN_TOP((*this_00 + uVar2 * 8))) == piVar1) {
          F_00e12fc0(this_00 GEN_EDX_ARG,(*(int *)&gen_args[0]),uVar2);
          break;
        }
        uVar2 = *((uint *)GEN_TOP((*this_00 + 4 + uVar2 * 8)));
      } while (uVar2 != 0xffffffff);
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG);
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = F_00e163b0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,uVar3,&(*(int * PTR32 *)&gen_args[1]));
  }
  return uVar2;
}

/* ref: FUN_00e16fc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe16fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x34)));
  uVar2 = F_00e113a0(this_00 GEN_EDX_ARG,uVar1);
  uVar3 = uVar2;
  for (; (uVar1 != 0 && (uVar2 != 0xffffffff)); uVar2 = *((uint *)GEN_TOP((*(int *)this_00 + 4 + uVar2 * 8))))
  {
    uVar3 = *(uint *)this_00;
    if ((*(int * PTR32 *)&gen_args[0]) == *((int * PTR32 *)GEN_TOP((uVar3 + uVar2 * 8)))) {
      F_00e130a0(this_00 GEN_EDX_ARG,uVar1,uVar2);
      uVar3 = F_00e16440(this_00 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[0]));
      uVar1 = 0;
    }
  }
  return uVar3;
}

/* ref: Global::ScalarDeletingDestructor_00e17020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17020(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe17020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e0e030(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x7c);
  }
  return (uint)param_1;
}

/* ref: Global::FreeSizedBlock_00e17080 */
GEN_LIB GEN_FRAME uint F_00e17080(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe17080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkDataWorldDict::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e170b0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe170b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e0ed30(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e170f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e170f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe170f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e17100 */
GEN_LIB GEN_FRAME uint F_00e17100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe17100u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  uint uVar2;
  char * pcVar3;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x1c))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,0x10);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0x10);
  if (uVar2 != 0x10) {
    *(*(undefined4 * PTR32 *)&gen_args[0]) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG);
  pcVar3 = ((char *)GEN_TOP(F_00dea6f0((int)&(*(int * PTR32 *)&gen_args[1]) + 3,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)))));
  if (*pcVar3 != '\0') {
    *(*(undefined4 * PTR32 *)&gen_args[0]) = 2;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e171c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e171c0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe171c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_00d91340(in_ecx GEN_EDX_FWD);
  F_00d91340(in_ecx + 4 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: hkMemoryResourceHandle::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e171e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe171e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d91520(this + 0xc GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkMemoryResourceHandle::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e171f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe171f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_010596b0(this + 8 GEN_EDX_FWD);
  return uVar1;
}

/* ref: hkMemoryResourceHandle::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e17200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe17200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_01059680(this + 8 GEN_EDX_FWD,param_1,param_2);
  return;
}

/* ref: hkMemoryResourceHandle::vf4 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e17210(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe17210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined * puVar1;
  
  puVar1 = ((undefined *)GEN_TOP((*((uint *)GEN_TOP((in_ecx + 0xc))) & 0xfffffffe)));
  if (puVar1 == ((undefined *)GEN_TOP(0x0))) {
    puVar1 = &REFG(undefined, 0x114c8d4);
  }
  return (uint)puVar1;
}

/* ref: hkMemoryResourceHandle::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e17220(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe17220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: hkMemoryResourceContainer::vf4 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e17230(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe17230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 8))) & 0xfffffffe;
}

/* ref: hkMemoryResourceContainer::vf12 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e17240(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe17240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x20)));
}

/* ref: hkContainerResourceMap::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe17250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    *param_2 = 0;
  }
  piVar1 = ((int *)GEN_TOP(F_00da4190(this + 4 GEN_EDX_FWD,param_1,0)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG);
    *param_2 = uVar2;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG);
  return uVar2;
}

/* ref: hkMemoryResourceContainer::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e172a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe172a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  do {
    if ((param_2 == 0) || (*(int *)(this + 0x20) <= iVar3)) break;
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + 1;
  } while (*((int *)GEN_TOP((*(int *)(this + 0x1c) + iVar1))) != param_2);
  if (iVar3 < *(int *)(this + 0x20)) {
    do {
      uVar2 = *((uint *)GEN_TOP((*(int *)(this + 0x1c) + iVar3 * 4)));
      if ((param_1 == 0) ||
         (uVar4 = F_00da0d20(param_1,*((uint *)GEN_TOP((uVar2 + 8))) & 0xfffffffe), uVar4 == 0)) {
        return uVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0x20));
  }
  return 0;
}

/* ref: hkMemoryResourceHandle::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe17310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * phVar1;
  int in_ecx;
  undefined * this_00;
  uint uVar2;
  
  phVar1 = this + 0x10;
  if (*(uint *)(this + 0x14) == (*(uint *)(this + 0x18) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),phVar1,8);
  }
  in_ecx = *(int *)phVar1 + *(int *)(this + 0x14) * 8;
  if (in_ecx != 0) {
    F_00d91340(in_ecx GEN_EDX_ARG);
    F_00d91340(in_ecx + 4 GEN_EDX_ARG);
  }
  this_00 = ((undefined *)GEN_TOP((*(int *)phVar1 + *(int *)(this + 0x14) * 8)));
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  F_00d91520(this_00 GEN_EDX_ARG,param_1);
  uVar2 = F_00d91520(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_ARG,param_2);
  return uVar2;
}

/* ref: hkMemoryResourceHandle::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x434, 12, 4);
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  uint * puVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  uint * puVar7;
  undefined * phVar8;
  undefined1 * puVar9;
  
  param_1[1] = 0;
  iVar6 = *(int *)(this + 0x14);
  uVar2 = param_1[2] & 0x3fffffff;
  (*(undefined * PTR32 *)(gen_frame + 0x428)) = this;
  if ((int)uVar2 < iVar6) {
    iVar3 = uVar2 * 2;
    if ((int)(uVar2 * 2) <= iVar6) {
      iVar3 = iVar6;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,iVar3,0x10);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  (*(uint *)(gen_frame + 0x42c)) = 0;
  if (0 < *(int *)(this + 0x14)) {
    do {
      puVar4 = ((uint *)GEN_TOP((param_1[1] * 0x10 + *param_1)));
      param_1[1] = param_1[1] + 1;
      (*(uint * PTR32 *)(gen_frame + 0x420)) = puVar4;
      uVar2 = *((uint *)GEN_TOP((*(int *)(this + 0x10) + (*(uint *)(gen_frame + 0x42c)) * 8))) & 0xfffffffe;
      (*(int *)(gen_frame + 0x424)) = *(int *)(this + 8);
      this_00 = ((undefined *)GEN_TOP(F_010596b0(this + 8 GEN_EDX_ARG)));
      uVar5 = F_00da0ef0(uVar2,0x2e);
      while (uVar5 != 0) {
        iVar6 = uVar5 - uVar2;
        F_00da1010(((undefined1 *)(gen_frame + 0x200)),uVar2,iVar6);
        ((undefined1 *)(gen_frame + 0x200))[(int)(iVar6)] = 0;
        uVar2 = uVar2 + 1 + iVar6;
        uVar5 = F_00d928d0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x200)));
        if (uVar5 == 0) goto LAB_00e17512;
        if (*((char *)GEN_TOP((uVar5 + 0xc))) != '\x19') {
          F_00da0a80(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
          puVar9 = ((undefined1 *)(gen_frame + 0x200));
          phVar8 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG,((char *)REFP(0x114e4c4)))));
          F_00d9fe80(phVar8 GEN_EDX_ARG,puVar9);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xf032edfe,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114e49c)),
                     0x80);
          F_00d9fda0(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG);
          goto LAB_00e17512;
        }
        this_00 = ((undefined *)GEN_TOP(F_00da5fd0(uVar5 GEN_EDX_ARG)));
        (*(int *)(gen_frame + 0x424)) = (*(int *)(gen_frame + 0x424)) + (uint)*((ushort *)GEN_TOP((uVar5 + 0x12)));
        uVar5 = F_00da0ef0(uVar2,0x2e);
        puVar4 = (*(uint * PTR32 *)(gen_frame + 0x420));
      }
      uVar5 = F_00d928d0(this_00 GEN_EDX_ARG,uVar2);
      if (uVar5 == 0) {
LAB_00e17512: ;
        param_1[1] = param_1[1] - 1;
        F_00da0a80(((undefined1 *)(gen_frame + 0x414)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
        phVar8 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x414)) GEN_EDX_ARG,((char *)REFP(0x114e484)))));
        F_00d9fe80(phVar8 GEN_EDX_ARG,uVar2);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xf032edf1,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114e49c)),0x92
                  );
        F_00d9fda0(((undefined1 *)(gen_frame + 0x414)) GEN_EDX_ARG);
      }
      else {
        *puVar4 = uVar2;
        puVar7 = ((uint *)GEN_TOP(F_0105a6b0(((undefined1 *)(gen_frame + 0x400)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x424)),uVar5)));
        puVar4[2] = *puVar7;
        puVar4[3] = puVar7[1];
        puVar4[1] = *((uint *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x428)) + 0x10) + 4 + (*(uint *)(gen_frame + 0x42c)) * 8))) & 0xfffffffe;
      }
      uVar2 = (*(uint *)(gen_frame + 0x42c)) + 1;
      (*(uint *)(gen_frame + 0x42c)) = uVar2;
      this = (*(undefined * PTR32 *)(gen_frame + 0x428));
    } while ((int)uVar2 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x428)) + 0x14));
  }
  return uVar2;
}

/* ref: FUN_00e17590 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e17590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  for (this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_FWD,0,0))); this_00 != ((undefined *)GEN_TOP(0x0));
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG,0,this_00)))) {
    F_00e17590(this_00 GEN_EDX_ARG,param_1);
  }
  for (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG,0,0,0); uVar1 != 0;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG,0,0,uVar1)) {
    if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1,4);
    }
    *((uint *)GEN_TOP((*param_1 + param_1[1] * 4))) = uVar1;
    param_1[1] = param_1[1] + 1;
  }
  return 0;
}

/* ref: FUN_00e17630 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e17630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined * this_00;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1,4);
  }
  *((undefined * PTR32 *)GEN_TOP((*param_1 + param_1[1] * 4))) = this;
  param_1[1] = param_1[1] + 1;
  for (this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG,0,0))); this_00 != ((undefined *)GEN_TOP(0x0));
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG,0,this_00)))) {
    F_00e17630(this_00 GEN_EDX_ARG,param_1);
  }
  return 0;
}

/* ref: hkMemoryResourceHandle::vf12 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e176a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe176a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)(this + 0x10);
  iVar2 = *(int *)(this + 0x14) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((uVar1 + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      uVar1 = F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(this + 0x14) = 0;
  return uVar1;
}

/* ref: hkMemoryResourceHandle::vf10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e176e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe176e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * this_00;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(this + 0x14)) {
    while (uVar1 = F_00da0d20(*((uint *)GEN_TOP((*(int *)(this + 0x10) + iVar4 * 8))) & 0xfffffffe,
                                    param_1), uVar1 != 0) {
      iVar4 = iVar4 + 1;
      if (*(int *)(this + 0x14) <= iVar4) {
        return;
      }
    }
    this_00 = ((undefined *)GEN_TOP((*(int *)(this + 0x10) + iVar4 * 8)));
    F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_ARG);
    F_00d91510(this_00 GEN_EDX_ARG);
    iVar2 = *(int *)(this + 0x14) - 1;
    *(int *)(this + 0x14) = iVar2;
    if (iVar2 != iVar4) {
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + iVar4 * 8)));
      iVar4 = (*(int *)(this + 0x10) + iVar2 * 8) - (int)puVar3;
      iVar2 = 2;
      do {
        *puVar3 = *((undefined4 *)GEN_TOP((iVar4 + (int)puVar3)));
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 - 1;
      } while (iVar2 != 0);
    }
  }
  return;
}

/* ref: hkMemoryResourceHandle::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x234, 12, 4);
  code * pcVar1;
  undefined * phVar2;
  uint uVar3;
  undefined4 * in_ecx;
  undefined * this_00;
  char * pcVar4;
  uint uVar5;
  undefined * phVar6;
  uint * puVar7;
  int iVar8;
  undefined * puVar9;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x2c)));
  (*(undefined * PTR32 *)(gen_frame + 0x20c)) = this;
  (*(int *)(gen_frame + 0x220)) = 0;
  (*(int *)(gen_frame + 0x224)) = 0;
  (*(uint *)(gen_frame + 0x228)) = 0x80000000;
  (*pcVar1)(this,&(*(int *)(gen_frame + 0x220)));
  iVar8 = (*(int *)(gen_frame + 0x224)) - 1;
  (*(int *)(gen_frame + 0x214)) = iVar8;
  if (-1 < iVar8) {
    (*(int *)(gen_frame + 0x218)) = iVar8 * 0x10;
    do {
      iVar8 = (*(int *)(gen_frame + 0x218)) + (*(int *)(gen_frame + 0x220));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((iVar8 + 4))),&(*(undefined * PTR32 *)(gen_frame + 0x22c)));
      (*(uint *)(gen_frame + 0x210)) = uVar3;
      if (uVar3 != 0) {
        iVar8 = iVar8 + 8;
        in_ecx = ((undefined4 *)GEN_TOP(F_0105a8f0(iVar8 GEN_EDX_ARG)));
        this_00 = ((undefined *)GEN_TOP(F_00da5fd0(in_ecx GEN_EDX_ARG)));
        pcVar4 = ((char *)GEN_TOP(F_00d92650(this_00 GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x21f)),(*(undefined * PTR32 *)(gen_frame + 0x22c)))));
        phVar2 = (*(undefined * PTR32 *)(gen_frame + 0x20c));
        if ((*pcVar4 == '\0') && ((*(undefined * PTR32 *)(gen_frame + 0x22c)) != this_00)) {
          F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
          uVar3 = F_00d92610(this_00 GEN_EDX_ARG);
          puVar9 = &REFG(undefined, 0x114e50c);
          uVar5 = F_00d92610((*(undefined * PTR32 *)(gen_frame + 0x22c)) GEN_EDX_ARG);
          phVar6 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114e4e4)))));
          phVar6 = ((undefined *)GEN_TOP(F_00d9fe80(phVar6 GEN_EDX_ARG,uVar5)));
          phVar6 = ((undefined *)GEN_TOP(F_00d9fe80(phVar6 GEN_EDX_ARG,puVar9)));
          F_00d9fe80(phVar6 GEN_EDX_ARG,uVar3);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xf034ed21,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114e49c)),
                     0xb2);
          F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
        }
        else {
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x20c)) + 0x18))))((*(undefined * PTR32 *)(gen_frame + 0x20c)) GEN_EDX_ARG);
          if ((*(uint *)(gen_frame + 0x210)) == uVar3) {
            (*(int *)(gen_frame + 0x224)) = 0;
            uVar3 = (*(uint *)(gen_frame + 0x228));
            goto joined_r0x00e17901;
          }
          puVar7 = ((uint *)GEN_TOP(F_0105a760(iVar8 GEN_EDX_ARG,0)));
          *puVar7 = (*(uint *)(gen_frame + 0x210));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)phVar2 + 0x28))))(phVar2 GEN_EDX_ARG,*in_ecx);
        }
      }
      iVar8 = (*(int *)(gen_frame + 0x214)) - 1;
      (*(int *)(gen_frame + 0x218)) = (*(int *)(gen_frame + 0x218)) - 0x10;
      (*(int *)(gen_frame + 0x214)) = iVar8;
    } while (-1 < iVar8);
  }
  (*(int *)(gen_frame + 0x224)) = 0;
  uVar3 = (*(uint *)(gen_frame + 0x228));
joined_r0x00e17901: ;
  if (-1 < (int)uVar3) {
    (*(int *)(gen_frame + 0x224)) = 0;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10)));
    (*(uint *)(gen_frame + 0x228)) = uVar3;
    uVar3 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x220)),uVar3 << 4);
  }
  return uVar3;
}

/* ref: hkMemoryResourceContainer::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  F_00e17590(this GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)));
  iVar3 = 0;
  if (0 < (*(int *)(gen_frame + 0x4))) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + iVar3 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))(piVar1 GEN_EDX_ARG,param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (*(int *)(gen_frame + 0x4)));
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar2;
}

/* ref: hkMemoryResourceContainer::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e179a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe179a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x2a0, 0, 4);
  int iVar1;
  int * piVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  undefined * in_ecx;
  char * pcVar6;
  uint uVar7;
  undefined * phVar8;
  undefined * puVar9;
  
  iVar4 = 0;
  do {
    if (((*(int *)&gen_args[2]) == 0) || (*(int *)(this + 0x14) <= iVar4)) break;
    iVar1 = iVar4 * 4;
    iVar4 = iVar4 + 1;
  } while (*((int *)GEN_TOP((*(int *)(this + 0x10) + iVar1))) != (*(int *)&gen_args[2]));
  (*(int *)(gen_frame + 0x298)) = iVar4;
  if (iVar4 < *(int *)(this + 0x14)) {
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x10) + iVar4 * 4)));
      (*(int *)(gen_frame + 0x298)) = iVar4;
      if ((*(int *)&gen_args[0]) == 0) {
LAB_00e17a81: ;
        if ((((*(undefined * PTR32 *)&gen_args[1]) == ((undefined *)GEN_TOP(0x0))) ||
            (in_ecx = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_FWD))), (*(undefined * PTR32 *)&gen_args[1]) == in_ecx)) ||
           (pcVar6 = ((char *)GEN_TOP(F_00d92650((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(int)&(*(int *)&gen_args[2]) + 3,in_ecx))),
           *pcVar6 != '\0')) {
          return (uint)piVar2;
        }
        iVar4 = (*(int *)(gen_frame + 0x298));
        if ((*(int *)&gen_args[0]) != 0) {
          F_00da0a80(((undefined1 *)(gen_frame + 0x28c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
          uVar5 = F_00d92610(in_ecx GEN_EDX_ARG);
          puVar9 = &REFG(undefined, 0x114e50c);
          uVar7 = F_00d92610((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
          phVar8 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x28c)) GEN_EDX_ARG,((char *)REFP(0x114e4e4)))));
          phVar8 = ((undefined *)GEN_TOP(F_00d9fe80(phVar8 GEN_EDX_ARG,uVar7)));
          phVar8 = ((undefined *)GEN_TOP(F_00d9fe80(phVar8 GEN_EDX_ARG,puVar9)));
          F_00d9fe80(phVar8 GEN_EDX_ARG,uVar5);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xf034ed22,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114e49c)),
                     0x138);
          F_00d9fda0(((undefined1 *)(gen_frame + 0x28c)) GEN_EDX_ARG);
          return 0;
        }
      }
      else {
        pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x10)));
        (*(undefined1 * PTR32 *)(gen_frame + 0x200)) = ((undefined1 *)(gen_frame + 0x20c));
        (*(uint *)(gen_frame + 0x208)) = 0x80000080;
        (*(undefined4 *)(gen_frame + 0x204)) = 1;
        ((undefined1 *)(gen_frame + 0x20c))[0] = 0;
        uVar5 = (*pcVar3)(piVar2,&(*(undefined1 * PTR32 *)(gen_frame + 0x200)));
        uVar5 = F_00da0d20((*(int *)&gen_args[0]),uVar5);
        (*(undefined4 *)(gen_frame + 0x204)) = 0;
        if (uVar5 == 0) {
          if (-1 < (int)(*(uint *)(gen_frame + 0x208))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x200)),(*(uint *)(gen_frame + 0x208)) & 0x3fffffff);
          }
          goto LAB_00e17a81;
        }
        if (-1 < (int)(*(uint *)(gen_frame + 0x208))) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                    (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x200)),(*(uint *)(gen_frame + 0x208)) & 0x3fffffff);
        }
      }
      iVar4 = iVar4 + 1;
      (*(int *)(gen_frame + 0x298)) = iVar4;
    } while (iVar4 < *(int *)(this + 0x14));
  }
  return 0;
}

/* ref: hkMemoryResourceContainer::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * phVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  int * piVar7;
  
  phVar2 = param_1;
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  uVar4 = 0;
  if (0 < *(int *)(this + 0x14)) {
    piVar7 = *(int * PTR32 *)(this + 0x10);
    do {
      uVar3 = uVar4;
      if (((undefined *)GEN_TOP(*piVar7)) == param_1) goto LAB_00e17ba8;
      uVar4 = uVar4 + 1;
      piVar7 = piVar7 + 1;
    } while ((int)uVar4 < *(int *)(this + 0x14));
  }
  param_1 = ((undefined *)GEN_TOP(0xffffffff));
  uVar3 = (uint)param_1;
LAB_00e17ba8: ;
  param_1 = ((undefined *)GEN_TOP(uVar3));
  if (phVar2 != ((undefined *)GEN_TOP(0x0))) {
    uVar4 = F_00d91a80(phVar2 GEN_EDX_ARG);
  }
  if (-1 < (int)param_1) {
    iVar5 = (int)((int)(uintptr_t)param_1) * 4;
    iVar1 = *(int *)(this + 0x10);
    phVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar5)));
    if (phVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(phVar2 GEN_EDX_ARG);
    }
    *((undefined4 *)GEN_TOP((iVar1 + iVar5))) = 0;
    *(int *)(this + 0x14) = *(int *)(this + 0x14) - 1;
    uVar4 = (*(int *)(this + 0x14) - (int)param_1) * 4;
    puVar6 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + iVar5)));
    if (0 < (int)uVar4) {
      iVar5 = (uVar4 - 1 >> 2) + 1;
      do {
        *puVar6 = puVar6[1];
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 - 1;
        uVar4 = 0;
      } while (iVar5 != 0);
    }
  }
  return uVar4;
}

/* ref: hkMemoryResourceContainer::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  uVar3 = 0;
  if (0 < *(int *)(this + 0x20)) {
    piVar4 = *(int * PTR32 *)(this + 0x1c);
    do {
      uVar5 = uVar3;
      if (((undefined *)GEN_TOP(*piVar4)) == param_1) goto LAB_00e17c41;
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while ((int)uVar3 < *(int *)(this + 0x20));
  }
  uVar5 = 0xffffffff;
LAB_00e17c41: ;
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    uVar3 = F_00d91a80(param_1 GEN_EDX_ARG);
  }
  if (-1 < (int)uVar5) {
    iVar2 = *(int *)(this + 0x1c);
    iVar1 = uVar5 * 4;
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar2 + iVar1)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_ARG);
    }
    *((undefined4 *)GEN_TOP((iVar2 + iVar1))) = 0;
    uVar3 = *(int *)(this + 0x20) - 1;
    *(uint *)(this + 0x20) = uVar3;
    if (uVar3 != uVar5) {
      uVar3 = *((uint *)GEN_TOP((*(int *)(this + 0x1c) + uVar3 * 4)));
      *((uint *)GEN_TOP((*(int *)(this + 0x1c) + iVar1))) = uVar3;
    }
  }
  return uVar3;
}

/* ref: hkMemoryResourceContainer::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x218, 8, 4);
  undefined * this_00;
  int iVar1;
  undefined * phVar2;
  int * piVar3;
  int iVar4;
  undefined * phVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined * phVar8;
  char * pcVar9;
  char * pcVar10;
  
  for (phVar2 = param_1; phVar2 != ((undefined *)GEN_TOP(0x0));
      phVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)phVar2 + 0x24))))(phVar2 GEN_EDX_FWD)))) {
    if (phVar2 == this) {
      F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
      pcVar10 = ((char *)REFP(0x114e52c));
      phVar8 = param_1 + 8;
      pcVar9 = ((char *)REFP(0x114e524));
      phVar2 = this + 8;
      phVar5 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114e514)))));
      phVar5 = ((undefined *)GEN_TOP(F_00da0420(phVar5 GEN_EDX_ARG,phVar2)));
      phVar5 = ((undefined *)GEN_TOP(F_00d9fe80(phVar5 GEN_EDX_ARG,pcVar9)));
      phVar5 = ((undefined *)GEN_TOP(F_00da0420(phVar5 GEN_EDX_ARG,phVar8)));
      F_00d9fe80(phVar5 GEN_EDX_ARG,pcVar10);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabba4554,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114e49c)),0x198)
      ;
      F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
      return 1;
    }
  }
  F_00d919e0((undefined *)this GEN_EDX_ARG);
  if (this != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0((undefined *)this GEN_EDX_ARG);
  }
  iVar4 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 0x20)));
  iVar6 = 0;
  if (0 < iVar4) {
    piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x1c)));
    do {
      if (((undefined *)GEN_TOP(*piVar3)) == this) {
        (*(int *)(gen_frame + 0x210)) = iVar6;
        goto LAB_00e17d07;
      }
      iVar6 = iVar6 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar6 < iVar4);
  }
  (*(int *)(gen_frame + 0x210)) = -1;
LAB_00e17d07: ;
  F_00d91a80((undefined *)this GEN_EDX_ARG);
  iVar4 = *(int *)(this + 0xc);
  iVar6 = *((int *)GEN_TOP((iVar4 + 0x1c)));
  iVar1 = (*(int *)(gen_frame + 0x210)) * 4;
  this_00 = *((undefined * PTR32 *)GEN_TOP((iVar6 + iVar1)));
  (*(int *)(gen_frame + 0x20c)) = iVar1;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(this_00 GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP((iVar6 + iVar1))) = 0;
  *((int *)GEN_TOP((iVar4 + 0x20))) = *((int *)GEN_TOP((iVar4 + 0x20))) - 1;
  iVar6 = (*((int *)GEN_TOP((iVar4 + 0x20))) - (*(int *)(gen_frame + 0x210))) * 4;
  puVar7 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x1c))) + (*(int *)(gen_frame + 0x20c)))));
  if (0 < iVar6) {
    iVar4 = (iVar6 - 1U >> 2) + 1;
    do {
      *puVar7 = puVar7[1];
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  F_00d919e0((undefined *)this GEN_EDX_ARG);
  if (*(uint *)(param_1 + 0x20) == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1 + 0x1c,4);
  }
  puVar7 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x20) * 4)));
  if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
    F_00d919e0((undefined *)this GEN_EDX_ARG);
    *puVar7 = this;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  F_00d91a80((undefined *)this GEN_EDX_ARG);
  *(undefined * PTR32 *)(this + 0xc) = param_1;
  F_00d91a80((undefined *)this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00e17e60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xa4, 12, 4);
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (*(uint *)(gen_frame + 0x8c));
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8c)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x8c)) = uVar2 & 0xffffff00;
  this_00 = ((undefined *)GEN_TOP(((int)this + 4)));
  (*(undefined * PTR32 *)(gen_frame + 0x90)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x114e560));
  F_00da3de0(this_00 GEN_EDX_FWD,(*(uint *)(gen_frame + 0x8c)));
  iVar3 = 0;
  (*(int *)(gen_frame + 0x94)) = 0;
  (*(int *)(gen_frame + 0x98)) = 0;
  (*(int *)(gen_frame + 0x9c)) = ((int)0x80000000);
  F_00e17590(param_1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x94)));
  if (0 < (*(int *)(gen_frame + 0x98))) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x94)) + iVar3 * 4)));
      (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
      (*(uint *)(gen_frame + 0x8)) = 0x80000080;
      (*(undefined4 *)(gen_frame + 0x4)) = 1;
      ((undefined1 *)(gen_frame + 0xc))[0] = 0;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
      F_00da3a20(this_00 GEN_EDX_ARG,uVar2,piVar1);
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
      }
      iVar3 = iVar3 + 1;
      this = (*(undefined * PTR32 *)(gen_frame + 0x90));
    } while (iVar3 < (*(int *)(gen_frame + 0x98)));
  }
  (*(int *)(gen_frame + 0x98)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x9c))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x94)),(*(int *)(gen_frame + 0x9c)) * 4);
  }
  return (uint)this;
}

/* ref: FUN_00e17f70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e17f70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe17f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *((undefined2 *)GEN_TOP(((int)in_ecx + 6))) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[14])REFP(0x114e56c));
  in_ecx[2] = 0;
  F_00d91340(in_ecx + 3 GEN_EDX_FWD);
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0x80000000;
  return (uint)in_ecx;
}

/* ref: FUN_00e17fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17fb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe17fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[14])REFP(0x114e56c));
  F_00d91350(in_ecx + 3 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00e17fd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e17fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe17fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x114e56c));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x14))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x10))),iVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  uVar1 = F_00d91510(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: Global::AppendScopedName */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00e18060(this_00 GEN_EDX_ARG,param_1);
  }
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x10)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  ((undefined1 *)(gen_frame + 0xc))[0] = 0;
  uVar2 = (*pcVar1)(this,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  F_00da4d70(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1080808));
  F_00da4d70(param_1 GEN_EDX_ARG,uVar2);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
  }
  return uVar2;
}

/* ref: hkMemoryResourceContainer::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe18110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  LPVOID pvVar2;
  uint in_ecx;
  undefined * this_00;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x1c);
  *((undefined2 *)GEN_TOP((in_ecx + 4))) = 0x1c;
  this_00 = ((undefined *)GEN_TOP(F_00e17f70(in_ecx GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this_00 + 0x14))))(this_00 GEN_EDX_ARG,param_1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this_00 + 0x20))))(this_00 GEN_EDX_ARG,param_2,param_3);
  F_00d919e0(this_00 GEN_EDX_ARG);
  if (*(uint *)(this + 0x14) == (*(uint *)(this + 0x18) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 0x10,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + *(int *)(this + 0x14) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    F_00d919e0(this_00 GEN_EDX_ARG);
    *puVar1 = this_00;
  }
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  F_00d91a80(this_00 GEN_EDX_ARG);
  F_00d91a80(this_00 GEN_EDX_ARG);
  return (uint)this_00;
}

/* ref: FUN_00e181c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e181c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe181c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x114e5ac));
  F_00d91480(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e18210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x114e5ac));
  F_00d91350((int)this + 8 GEN_EDX_FWD,param_1);
  if ((param_1 != 0) && (iVar2 = 0, 0 < *((int *)GEN_TOP(((int)this + 0x20))))) {
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + iVar1))) + 0xc))) = this;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x20))));
  }
  return (uint)this;
}

/* ref: FUN_00e18250 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e18250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe18250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * phVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x114e5ac));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x20))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  while (-1 < iVar4) {
    phVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (phVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(phVar2 GEN_EDX_FWD);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x24)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x1c))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x14))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  while (-1 < iVar4) {
    phVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (phVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(phVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x10))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  uVar3 = F_00d91510(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar3;
}

/* ref: hkMemoryResourceContainer::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  undefined * this_00;
  LPVOID pvVar2;
  undefined * this_01;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_FWD,param_1,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))
                                (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x28)));
    *((undefined2 *)GEN_TOP(((int)this_01 + 4))) = 0x28;
    this_00 = ((undefined *)GEN_TOP(F_00e181c0(this_01 GEN_EDX_ARG,param_1)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d919e0(this_00 GEN_EDX_ARG);
    }
    if (*(uint *)(this + 0x20) == (*(uint *)(this + 0x24) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 0x1c,4);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + *(int *)(this + 0x20) * 4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        F_00d919e0(this_00 GEN_EDX_ARG);
      }
      *puVar1 = this_00;
    }
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_ARG);
    }
    *(undefined * PTR32 *)(this_00 + 0xc) = this;
    F_00d91a80(this_00 GEN_EDX_ARG);
  }
  return (uint)this_00;
}

/* ref: FUN_00e18400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe18400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: Global::MapInsert */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe18420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: Global::MapGetWithDefault */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe18430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: Global::ElementAt8_00e184a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e184a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe184a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: Global::ElementAt4_00e184f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e184f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe184f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::ElementAt4_00e18540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18540(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::ElementAt4_00e18550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18550(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::ElementAt16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e185a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe185a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: Global::ElementAt4_00e185f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e185f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe185f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::RefPtrConstruct_00e18610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: Global::RefPtrRelease_00e18630 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e18630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe18630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: Global::RefPtrConstruct_00e18660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: Global::RefPtrRelease_00e18680 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e18680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe18680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00e186b0 */
GEN_LIB GEN_FRAME unsigned int F_00e186b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe186b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int in_ecx;
  int iVar1;
  
  in_ecx = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (in_ecx != 0) {
        F_00d91340(in_ecx GEN_EDX_ARG);
        F_00d91340(in_ecx + 4 GEN_EDX_ARG);
      }
      in_ecx = in_ecx + 8;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: Global::FillArray4 */
GEN_LIB GEN_FRAME unsigned int F_00e18760(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe18760u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::FillArray4_00e187a0 */
GEN_LIB GEN_FRAME unsigned int F_00e187a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe187a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::FreeArray8_00e187d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e187d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe187d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: Global::FreeArray4_00e187f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e187f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe187f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: Global::RefPtrCopy_00e18810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00e18840 */
GEN_LIB GEN_FRAME uint F_00e18840(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: Global::FreeArray4_00e18850 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe18850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: Global::RefPtrCopy_00e18870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00e188a0 */
GEN_LIB GEN_FRAME uint F_00e188a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe188a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: Global::FreeArray16_00e188b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e188b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe188b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: Global::FreeArray4_00e188d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e188d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe188d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: hkMemoryResourceHandle::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e18950(void)
{
  GEN_ENTER(0xe18950u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkMemoryResourceContainer::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e189b0(void)
{
  GEN_ENTER(0xe189b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00e189e0 */
GEN_LIB GEN_FRAME unsigned int F_00e189e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe189e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: hkResourceMap::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18a10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x114e3e0));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: Global::AllocSizedBlock_00e18a50 */
GEN_LIB GEN_FRAME uint F_00e18a50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe18a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: Global::AllocSizedBlock_00e18a80 */
GEN_LIB GEN_FRAME uint F_00e18a80(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe18a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: Global::ExpandOnePair */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8;
  if (iVar1 != 0) {
    F_00d91340(iVar1 GEN_EDX_ARG);
    F_00d91340(iVar1 + 4 GEN_EDX_ARG);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e18be0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18be0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) - param_2;
  return param_2;
}

/* ref: hkArrayBase::Reserve_00e18bf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe18bf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: hkArrayBase::ExpandByUnchecked_00e18c30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = param_1 + iVar1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: hkArrayBase::PushBack_00e18c50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe18c50u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: hkArrayBase::PushBack_00e18c90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe18c90u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: hkArrayUtil::ConstructRefPtrsWithCopy */
GEN_LIB GEN_FRAME unsigned int F_00e18cf0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe18cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2;
  puVar2 = param_1;
  if (0 < param_2) {
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        if (((undefined *)GEN_TOP(*param_3)) != ((undefined *)GEN_TOP(0x0))) {
          F_00d919e0(((undefined *)GEN_TOP(*param_3)) GEN_EDX_ARG);
        }
        *puVar2 = *param_3;
      }
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: hkArrayUtil::ConstructRefPtrsWithCopy_00e18d30 */
GEN_LIB GEN_FRAME unsigned int F_00e18d30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe18d30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2;
  puVar2 = param_1;
  if (0 < param_2) {
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        if (((undefined *)GEN_TOP(*param_3)) != ((undefined *)GEN_TOP(0x0))) {
          F_00d919e0(((undefined *)GEN_TOP(*param_3)) GEN_EDX_ARG);
        }
        *puVar2 = *param_3;
      }
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: hkArrayBase::ClearAndDeallocate_00e18d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18d70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::FreeBlock4_00e18db0 */
GEN_LIB GEN_FRAME unsigned int F_00e18db0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe18db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Global::FreeBlock4_00e18de0 */
GEN_LIB GEN_FRAME unsigned int F_00e18de0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe18de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: hkReferencedObject::DeleteReferencedObject_00e18e20 */
GEN_LIB GEN_FRAME uint F_00e18e20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe18e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00e18e50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18e50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18e50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e18e90 */
GEN_LIB GEN_FRAME uint F_00e18e90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe18e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00e18ec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18ec0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18ec0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e18f00 */
GEN_LIB GEN_FRAME uint F_00e18f00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe18f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00e18f30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18f30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18f30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkArray::ExpandOne_00e18f70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e18f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe18f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8;
  if (iVar1 != 0) {
    F_00d91340(iVar1 GEN_EDX_ARG);
    F_00d91340(iVar1 + 4 GEN_EDX_ARG);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: hkArray::Reserve_00e18fc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: hkArray::PushBack_00e19000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe19000u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkArray::PushBack_00e19040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe19040u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkArrayBase::IndexOf */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe19080u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  }
  if ((int)param_2 < iVar3) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + param_2 * 4)));
    uVar1 = param_2;
    do {
      if (*piVar2 == *param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while ((int)uVar1 < iVar3);
  }
  return 0xffffffff;
}

/* ref: hkArrayBase::PushBackRefPtr */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e190c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe190c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  uVar2 = *(uint *)this;
  puVar1 = ((undefined4 *)GEN_TOP((uVar2 + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (((undefined *)GEN_TOP(*param_2)) != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_00d919e0(((undefined *)GEN_TOP(*param_2)) GEN_EDX_ARG);
    }
    *puVar1 = *param_2;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar2;
}

/* ref: hkArrayBase::IndexOf_00e19110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe19110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  }
  if ((int)param_2 < iVar3) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + param_2 * 4)));
    uVar1 = param_2;
    do {
      if (*piVar2 == *param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while ((int)uVar1 < iVar3);
  }
  return 0xffffffff;
}

/* ref: hkArrayBase::PushBackRefPtr_00e19150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe19150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  uVar2 = *(uint *)this;
  puVar1 = ((undefined4 *)GEN_TOP((uVar2 + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (((undefined *)GEN_TOP(*param_2)) != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_00d919e0(((undefined *)GEN_TOP(*param_2)) GEN_EDX_ARG);
    }
    *puVar1 = *param_2;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar2;
}

/* ref: hkArray::ClearAndDeallocate_00e191a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e191a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe191a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkArrayUtil::DestructPairs */
GEN_LIB GEN_FRAME unsigned int F_00e191e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe191e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = ((undefined *)GEN_TOP((param_1 + iVar1 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
      F_00d91510(this GEN_EDX_ARG);
      this = ((undefined *)GEN_TOP(((int)this - 8)));
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: hkArrayBase::ClearAndDeallocate_00e19210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe19210u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkRefPtr::ScalarDeletingDestructor_00e19250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19250(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe19250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: hkRefPtr::ScalarDeletingDestructor_00e19290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19290(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe19290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: hkArray::PushBackRefPtr */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e192d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe192d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if (*((uint *)GEN_TOP(((int)this + 4))) == uVar2) {
    uVar2 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((uint *)GEN_TOP(0x0))) {
    if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
      F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_ARG);
    }
    uVar2 = *param_1;
    *puVar1 = uVar2;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar2;
}

/* ref: hkArray::PushBackRefPtr_00e19320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe19320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if (*((uint *)GEN_TOP(((int)this + 4))) == uVar2) {
    uVar2 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((uint *)GEN_TOP(0x0))) {
    if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
      F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_ARG);
    }
    uVar2 = *param_1;
    *puVar1 = uVar2;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar2;
}

/* ref: hkArray::Clear */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((uVar1 + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      uVar1 = F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return uVar1;
}

/* ref: hkArray::RemoveAt */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e193a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe193a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP((*(int *)this + param_1 * 8)));
  F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
  F_00d91510(this_00 GEN_EDX_ARG);
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != param_1) {
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + param_1 * 8)));
    iVar2 = (*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: hkArray::ClearAndDeallocate_00e19400 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19400u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkArray::ClearAndDeallocate_00e19440 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19440u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkArrayBase::ClearAndDeallocate_00e19480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe19480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      F_00d91510(this_00 GEN_EDX_ARG);
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

/* ref: hkArrayUtil::DestructRefPtrs */
GEN_LIB GEN_FRAME unsigned int F_00e194f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe194f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + iVar1 * 4)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 4))) = 0;
  }
  return;
}

/* ref: hkArrayUtil::DestructRefPtrs_00e19520 */
GEN_LIB GEN_FRAME unsigned int F_00e19520(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe19520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + iVar1 * 4)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 4))) = 0;
  }
  return;
}

/* ref: hkArray::RemoveAtAndCopy */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e195d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe195d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = *(int *)this;
  iVar1 = param_1 * 4;
  this_00 = *((undefined * PTR32 *)GEN_TOP((iVar2 + iVar1)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(this_00 GEN_EDX_FWD);
  }
  *((undefined4 *)GEN_TOP((iVar2 + iVar1))) = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar2 = (*((int *)GEN_TOP(((int)this + 4))) - param_1) * 4;
  puVar3 = ((undefined4 *)GEN_TOP((*(int *)this + iVar1)));
  if (0 < iVar2) {
    iVar2 = (iVar2 - 1U >> 2) + 1;
    do {
      *puVar3 = puVar3[1];
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: hkArray::RemoveAt_00e19630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe19630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  undefined * this_00;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  iVar2 = param_1 * 4;
  this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar2)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(this_00 GEN_EDX_FWD);
  }
  *((undefined4 *)GEN_TOP((iVar1 + iVar2))) = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  uVar3 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar3 != param_1) {
    uVar3 = *((uint *)GEN_TOP((*(int *)this + uVar3 * 4)));
    *((uint *)GEN_TOP((*(int *)this + iVar2))) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00e19670 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e19670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe19670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = *(int *)this;
  iVar1 = param_1 * 4;
  this_00 = *((undefined * PTR32 *)GEN_TOP((iVar2 + iVar1)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(this_00 GEN_EDX_FWD);
  }
  *((undefined4 *)GEN_TOP((iVar2 + iVar1))) = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar2 = (*((int *)GEN_TOP(((int)this + 4))) - param_1) * 4;
  puVar3 = ((undefined4 *)GEN_TOP((*(int *)this + iVar1)));
  if (0 < iVar2) {
    iVar2 = (iVar2 - 1U >> 2) + 1;
    do {
      *puVar3 = puVar3[1];
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e196d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e196d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe196d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e19710 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      F_00d91510(this_00 GEN_EDX_ARG);
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

/* ref: FUN_00e19780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe19780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00e197f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e197f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe197f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00e19860 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00da3e20(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x114e3e0));
  return uVar1;
}

/* ref: FUN_00e19880 */
GEN_LIB GEN_FRAME unsigned int F_00e19880(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe19880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: hkContainerResourceMap::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e198b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe198b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00da3e20(param_1 + 1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x114e3e0));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x14);
  }
  return (uint)param_1;
}

/* ref: FUN_00e198f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e198f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe198f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      F_00d91510(this_00 GEN_EDX_ARG);
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

/* ref: FUN_00e19960 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00e199d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e199d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe199d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00e19a40 */
GEN_LIB GEN_FRAME uint F_00e19a40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe19a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00e19a70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00e19ae0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: hkMemoryResourceHandle::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19b50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe19b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e17fd0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: hkMemoryResourceContainer::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19b90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: FUN_00e19ba0 */
GEN_LIB GEN_FRAME uint F_00e19ba0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe19ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkMemoryResourceContainer::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19bd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x14)));
}

/* ref: hkMemoryResourceContainer::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19be0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe19be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e18250(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e19c20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00dc17f0(this GEN_EDX_FWD);
  uVar1 = F_00dc1690(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00e19c30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19c30(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe19c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx != 0;
  return param_2;
}

/* ref: hkTypeManager::Type::GetTupleSize */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19c70(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  if (*in_ecx == 9) {
    return in_ecx[2];
  }
  return 0xffffffff;
}

/* ref: hkTypeManager::Type::GetClass */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19c80(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  if (*in_ecx == 6) {
    return in_ecx[2];
  }
  return 0;
}

/* ref: hkTypeManager::Type::CalcHash */
GEN_LIB GEN_FRAME uint F_00e19c90(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe19c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = 0;
  piVar3 = param_1;
  do {
    iVar1 = *piVar3;
    uVar2 = (uVar2 << 1 | (uint)((int)uVar2 < 0)) ^ iVar1 * -0x61c8864f;
    if (iVar1 == 6) {
      uVar2 = uVar2 ^ (uint)piVar3;
    }
    else if (iVar1 == 9) {
      uVar2 = uVar2 ^ piVar3[2];
    }
    piVar3 = ((int *)GEN_TOP(piVar3[1]));
  } while (piVar3 != ((int *)GEN_TOP(0x0)));
  return uVar2;
}

/* ref: hkTypeManager::Type::GetHash */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00e19c90(this);
  if (uVar1 == 0xffffffff) {
    uVar1 = 0x7af1f32a;
  }
  return uVar1;
}

/* ref: hkTypeManager::Type::IsEqualNode */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe19cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if ((iVar1 != *param_2) || (*((int *)GEN_TOP(((int)this + 4))) != param_2[1])) {
    *param_1 = 0;
    return (uint)param_1;
  }
  if ((iVar1 != 6) && (iVar1 != 9)) {
    *param_1 = 1;
    return (uint)param_1;
  }
  *param_1 = *((int *)GEN_TOP(((int)this + 8))) == param_2[2];
  return (uint)param_1;
}

/* ref: hkTypeManager::Type::FindTerminal */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19d40(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP((in_ecx + 4)));
  while (uVar1 = uVar2, uVar1 != 0) {
    in_ecx = uVar1;
    uVar2 = *((uint *)GEN_TOP((uVar1 + 4)));
  }
  return in_ecx;
}

/* ref: hkTypeManager::Type::AsText */
GEN_LIB GEN_FRAME unsigned int F_00e19d60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe19d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined4 * in_ecx;
  uint uVar1;
  undefined * phVar2;
  undefined4 uVar3;
  char * pcVar4;
  
  in_ecx = param_1;
  do {
    if (in_ecx == ((undefined4 *)GEN_TOP(0x0))) {
      return;
    }
    phVar2 = param_2;
    switch((unsigned int)(uintptr_t)(*in_ecx)) {
    case 0: ;
      pcVar4 = &REFG(undefined, 0x11261a0);
      break;
    case 1: ;
      pcVar4 = &REFG(undefined, 0x1126468);
      break;
    case 2: ;
      pcVar4 = &REFG(undefined, 0x114c8bc);
      break;
    case 3: ;
      pcVar4 = &REFG(undefined, 0x114c8b4);
      break;
    case 4: ;
      pcVar4 = ((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x112673c))));
      break;
    case 5: ;
      pcVar4 = ((char *)REFP(0x114e608));
      break;
    case 6: ;
      uVar1 = F_00e19c80(in_ecx GEN_EDX_ARG);
      if (uVar1 == 0) {
        pcVar4 = ((char *)REFP(0x114e5ec));
      }
      else {
        pcVar4 = ((char *)GEN_TOP(F_00e19c80(((undefined4)(uint)(in_ecx)) GEN_EDX_ARG)));
        phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(param_2 GEN_EDX_ARG,((char *)REFP(0x1126550)))));
      }
      break;
    case 7: ;
      pcVar4 = &REFG(undefined, 0x111869c);
      break;
    case 8: ;
      pcVar4 = &REFG(undefined, 0x1126194);
      break;
    case 9: ;
      uVar3 = in_ecx[2];
      pcVar4 = &REFG(undefined, 0x1092088);
      phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(param_2 GEN_EDX_ARG,&REFG(undefined, 0x1092090))));
      phVar2 = ((undefined *)GEN_TOP(F_00d9ff40(phVar2 GEN_EDX_ARG,uVar3)));
      break;
    default: ;
      goto switchD_00e19d7e_default;
    }
    F_00d9fe80(phVar2 GEN_EDX_ARG,pcVar4);
switchD_00e19d7e_default: ;
    in_ecx = ((undefined4 *)GEN_TOP(in_ecx[1]));
  } while( true );
}

/* ref: hkTypeManager::Type::AsTextThunk */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e19e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe19e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00e19d60(this,param_1);
  return;
}

/* ref: hkTypeManager::Type::IsEqualChain */
GEN_LIB GEN_FRAME uint F_00e19e80(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe19e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * in_ecx;
  int * in_ecx_00;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  in_ecx = param_2;
  in_ecx_00 = param_3;
  do {
    piVar2 = in_ecx_00;
    if ((in_ecx == ((int *)GEN_TOP(0x0))) || (piVar2 = in_ecx, in_ecx_00 == ((int *)GEN_TOP(0x0)))) {
      if (piVar2 == ((int *)GEN_TOP(0x0))) {
        *param_1 = 1;
        return (uint)param_1;
      }
      *param_1 = 0;
      return (uint)param_1;
    }
    iVar1 = *in_ecx;
    if (iVar1 != *in_ecx_00) goto LAB_00e19ef7;
    if (iVar1 == 6) {
      uVar3 = F_00e19c80(in_ecx GEN_EDX_ARG);
      uVar4 = F_00e19c80(in_ecx_00 GEN_EDX_ARG);
      if ((uVar3 == 0) || (uVar4 == 0)) {
        *param_1 = 1;
        return (uint)param_1;
      }
      uVar3 = F_00da0d20(uVar3,uVar4);
      bVar5 = uVar3 == 0;
LAB_00e19edc: ;
      if (!bVar5) {
LAB_00e19ef7: ;
        *param_1 = 0;
        return (uint)param_1;
      }
    }
    else if (iVar1 == 9) {
      uVar3 = F_00e19c70(in_ecx GEN_EDX_ARG);
      uVar4 = F_00e19c70(in_ecx_00 GEN_EDX_ARG);
      bVar5 = uVar3 == uVar4;
      goto LAB_00e19edc;
    }
    in_ecx = ((int *)GEN_TOP(in_ecx[1]));
    in_ecx_00 = ((int *)GEN_TOP(in_ecx_00[1]));
  } while( true );
}

/* ref: hkTypeManager::Type::IsEqual */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe19f20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 == this) {
    *param_1 = 1;
    return (uint)param_1;
  }
  F_00e19e80(param_1,this,param_2);
  return (uint)param_1;
}

/* ref: hkTypeManager::IsValidClassName */
GEN_LIB GEN_FRAME uint F_00e19f50(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe19f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  
  if (((param_2 != ((char *)GEN_TOP(0x0))) && (cVar1 = *param_2, cVar1 != '\0')) &&
     ((('`' < cVar1 && (cVar1 < '{')) || ((('@' < cVar1 && (cVar1 < '[')) || (cVar1 == '_')))))) {
    cVar1 = param_2[1];
    pcVar2 = param_2;
    while( true ) {
      if (cVar1 == '\0') {
        *param_1 = 1;
        return (uint)param_1;
      }
      if (((((cVar1 < 'a') || ('z' < cVar1)) && ((cVar1 < 'A' || ('Z' < cVar1)))) &&
          ((cVar1 < '0' || ('9' < cVar1)))) && ((cVar1 != ':' && (cVar1 != '_')))) break;
      cVar1 = pcVar2[2];
      pcVar2 = pcVar2 + 1;
    }
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: hkTypeManager::Type::AsTypeExpression */
GEN_LIB GEN_FRAME unsigned int F_00e19fc0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe19fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined4 * in_ecx;
  uint uVar1;
  undefined * phVar2;
  undefined * puVar3;
  
  in_ecx = param_1;
  do {
    if (in_ecx == ((undefined4 *)GEN_TOP(0x0))) {
      return;
    }
    phVar2 = param_2;
    switch((unsigned int)(uintptr_t)(*in_ecx)) {
    case 0: ;
      puVar3 = &REFG(undefined, 0x11261a0);
      break;
    case 1: ;
      puVar3 = &REFG(undefined, 0x1145964);
      break;
    case 2: ;
      puVar3 = &REFG(undefined, 0x113a370);
      break;
    case 3: ;
      puVar3 = &REFG(undefined, 0x11187b8);
      break;
    case 4: ;
      puVar3 = &REFG(undefined, 0x114e614);
      break;
    case 5: ;
      puVar3 = &REFG(undefined, 0x114e610);
      break;
    case 6: ;
      puVar3 = &REFG(undefined, 0x1118a38);
      uVar1 = F_00e19c80(in_ecx GEN_EDX_ARG);
      phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(param_2 GEN_EDX_ARG,&REFG(undefined, 0x11186a8))));
      phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(phVar2 GEN_EDX_ARG,uVar1)));
      break;
    case 7: ;
      puVar3 = &REFG(undefined, 0x111869c);
      break;
    case 8: ;
      puVar3 = &REFG(undefined, 0x1126194);
      break;
    case 9: ;
      puVar3 = &REFG(undefined, 0x1092088);
      uVar1 = F_00e19c70(in_ecx GEN_EDX_ARG);
      phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(param_2 GEN_EDX_ARG,&REFG(undefined, 0x1092090))));
      phVar2 = ((undefined *)GEN_TOP(F_00d9ff40(phVar2 GEN_EDX_ARG,uVar1)));
      break;
    default: ;
      goto switchD_00e19fde_default;
    }
    F_00d9fe80(phVar2 GEN_EDX_ARG,puVar3);
switchD_00e19fde_default: ;
    in_ecx = ((undefined4 *)GEN_TOP(in_ecx[1]));
  } while( true );
}

/* ref: hkTypeManager::GetBasicLegacyType */
GEN_LIB GEN_FRAME uint F_00e1a0b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1a0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *param_2 = 0;
  switch((unsigned int)(uintptr_t)(*param_1)) {
  case 2: ;
    return 1;
  case 3: ;
    return 3;
  case 4: ;
    return 2;
  case 5: ;
    return 10;
  case 6: ;
    uVar1 = F_00e19c80(param_1 GEN_EDX_ARG);
    *param_2 = uVar1;
    return 9;
  case 7: ;
    if (*((int *)GEN_TOP(param_1[1])) == 6) {
      uVar1 = F_00e19c80(((int *)GEN_TOP(param_1[1])) GEN_EDX_ARG);
      *param_2 = uVar1;
      return 8;
    }
    break;
  case 9: ;
    if (*((int *)GEN_TOP(param_1[1])) == 3) {
      uVar1 = F_00e19c70(param_1 GEN_EDX_ARG);
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 4: ;
        return 4;
      case 8: ;
        return 5;
      case 0xc: ;
        return 6;
      case 0x10: ;
        return 7;
      }
    }
  }
  return 0;
}

/* ref: hkTypeManager::FindClass */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1a1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da4190(this + 0x34 GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: hkTypeManager::GetLegacyType */
GEN_LIB GEN_FRAME uint F_00e1a1c0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe1a1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  
  *param_2 = 0;
  *param_3 = 0;
  if (*param_1 == 8) {
    uVar2 = F_00e1a0b0(param_1[1],param_2);
    return uVar2 | 0x10;
  }
  if ((*param_1 == 9) && ((*((int *)GEN_TOP(param_1[1])) != 3 || ((((iVar1 = param_1[2], iVar1 != 4 && (iVar1 != 8)) && (iVar1 != 0xc)) && (iVar1 != 0x10)))))) {
    uVar2 = F_00e19c70(param_1 GEN_EDX_ARG);
    *param_3 = uVar2;
    uVar2 = F_00e1a0b0(*((undefined4 *)GEN_TOP((((int)(uint)(param_1)) + 4))),param_2);
    return uVar2 | 0x20;
  }
  uVar2 = F_00e1a0b0(param_1,param_2);
  return uVar2;
}

/* ref: hkTypeManager::AddClass */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1a240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x5, 11);
  undefined4 * this_00;
  uint uVar1;
  uint uVar2;
  undefined * phVar3;
  undefined4 * puVar4;
  
  this_00 = ((undefined4 *)GEN_TOP(F_00e1a1a0(this GEN_EDX_FWD,param_1)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    phVar3 = this + 0x50;
    this_00 = *(undefined4 * PTR32 *)phVar3;
    if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
      this_00 = *(undefined4 * PTR32 *)(this + 0x70);
      if (this_00 < *(undefined4 * PTR32 *)(this + 0x74)) {
        *(int *)(this + 0x84) = *(int *)(this + 0x84) - 1;
        *(int *)(this + 0x70) = *(int *)(this + 0x54) + (int)this_00;
      }
      else {
        this_00 = ((undefined4 *)GEN_TOP(F_00dc1990(phVar3 GEN_EDX_ARG)));
      }
    }
    else {
      *(int *)(this + 0x84) = *(int *)(this + 0x84) - 1;
      *(undefined4 *)phVar3 = *this_00;
    }
    phVar3 = this + 0x34;
    *this_00 = 6;
    this_00[1] = 0;
    uVar1 = F_00da3ae0(phVar3 GEN_EDX_ARG,param_1);
    F_00da3e40(phVar3 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x0)),uVar1);
    if ((*(char *)(gen_frame + 0x0)) == '\0') {
      uVar2 = F_00da0f10(param_1,&REFG(undefined * PTR32, 0x13516ac));
      F_00da3a20(phVar3 GEN_EDX_ARG,uVar2,this_00);
    }
    else {
      uVar2 = F_00da3990(phVar3 GEN_EDX_ARG,uVar1);
      F_00da39d0(phVar3 GEN_EDX_ARG,uVar1,this_00);
    }
    this_00[2] = uVar2;
    puVar4 = this_00;
    uVar1 = F_00e19cd0(this_00 GEN_EDX_ARG);
    F_0105bcf0(this + 0x44 GEN_EDX_ARG,uVar1,puVar4);
  }
  return (uint)this_00;
}

/* ref: hkTypeManager::GetTypeChain */
GEN_LIB GEN_FRAME unsigned int F_00e1a310(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1a310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  
  param_2[1] = 0;
  for (iVar1 = param_1; iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 4)))) {
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,4);
    }
    *((int *)GEN_TOP((*param_2 + param_2[1] * 4))) = iVar1;
    param_2[1] = param_2[1] + 1;
  }
  return;
}

/* ref: FUN_00e1a370 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1a370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1a370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e61c));
  F_00dc14d0(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_FWD);
  F_0105bc30(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG);
  F_00e1b470(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG);
  uVar1 = F_00da3e20(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkTypeManager::AddType */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1a3b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x5, 11);
  undefined * this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char * pcVar7;
  undefined8 * puVar8;
  uint * puVar9;
  
  uVar5 = F_00e19cd0(param_1 GEN_EDX_FWD);
  this_00 = this + 0x44;
  uVar6 = F_0105bd60(this_00 GEN_EDX_ARG,uVar5);
  iVar1 = *(int *)(this + 0x4c);
  if (iVar1 < (int)uVar6) {
LAB_00e1a438: ;
    puVar8 = *(undefined8 * PTR32 *)(this + 0x50);
    if (puVar8 == ((undefined8 *)GEN_TOP(0x0))) {
      puVar8 = *(undefined8 * PTR32 *)(this + 0x70);
      if (puVar8 < *(undefined8 * PTR32 *)(this + 0x74)) {
        *(int *)(this + 0x84) = *(int *)(this + 0x84) - 1;
        *(int *)(this + 0x70) = *(int *)(this + 0x54) + (int)puVar8;
      }
      else {
        puVar8 = ((undefined8 *)GEN_TOP(F_00dc1990(this + 0x50 GEN_EDX_ARG)));
      }
    }
    else {
      *(int *)(this + 0x84) = *(int *)(this + 0x84) - 1;
      *(undefined4 *)(this + 0x50) = *(undefined4 *)puVar8;
    }
    *puVar8 = *param_1;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(param_1 + 1);
    F_0105bcf0(this_00 GEN_EDX_ARG,uVar5,puVar8);
    return (uint)puVar8;
  }
  iVar2 = *(int *)this_00;
LAB_00e1a3e5: ;
  uVar3 = *((uint *)GEN_TOP((iVar2 + 4 + uVar6 * 8)));
  pcVar7 = ((char *)GEN_TOP(F_00e19cf0(param_1 GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x0)),uVar3)));
  if (*pcVar7 != '\0') {
    return uVar3;
  }
  uVar6 = uVar6 + 1;
  iVar4 = *(int *)(this + 0x4c);
  do {
    if ((int)uVar6 <= iVar4) {
      puVar9 = ((uint *)GEN_TOP((iVar2 + uVar6 * 8)));
      do {
        if (*puVar9 == 0xffffffff) {
          uVar6 = iVar4 + 1;
LAB_00e1a42b: ;
          if (iVar1 < (int)uVar6) goto LAB_00e1a438;
          goto LAB_00e1a3e5;
        }
        if (*puVar9 == uVar5) goto LAB_00e1a42b;
        uVar6 = uVar6 + 1;
        puVar9 = puVar9 + 2;
      } while ((int)uVar6 <= iVar4);
    }
    uVar6 = 0;
  } while( true );
}

/* ref: hkTypeManager::FindTypesUsingClass */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1a4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1a4a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 in_ecx;
  int * piVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  
  piVar2 = param_2;
  iVar3 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(this + 0x4c);
  if (-1 < iVar1) {
    piVar5 = *(int * PTR32 *)(this + 0x44);
    do {
      if (*piVar5 != -1) break;
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 2;
    } while (iVar3 <= iVar1);
  }
  param_2 = ((int *)GEN_TOP(iVar3));
  if (iVar3 <= iVar1) {
    do {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)(this + 0x44) + 4 + (int)((int)(uintptr_t)param_2) * 8)));
      uVar4 = F_00e19d40(in_ecx GEN_EDX_FWD);
      if (uVar4 == param_1) {
        if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar2,4);
        }
        *((undefined4 *)GEN_TOP((*piVar2 + piVar2[1] * 4))) = in_ecx;
        piVar2[1] = piVar2[1] + 1;
      }
      iVar1 = *(int *)(this + 0x4c);
      iVar3 = (int)param_2 + 1;
      if (iVar3 <= iVar1) {
        piVar5 = ((int *)GEN_TOP((*(int *)(this + 0x44) + iVar3 * 8)));
        do {
          if (*piVar5 != -1) break;
          iVar3 = iVar3 + 1;
          piVar5 = piVar5 + 2;
        } while (iVar3 <= iVar1);
      }
      param_2 = ((int *)GEN_TOP(iVar3));
    } while (iVar3 <= iVar1);
  }
  return 0;
}

/* ref: hkTypeManager::RenameClass */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1a550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined * this_00;
  
  uVar1 = (*(undefined4 *)&gen_args[0]);
  uVar3 = F_00e1a1a0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  uVar2 = (*(undefined4 *)&gen_args[1]);
  uVar4 = uVar3;
  if ((uVar3 != 0) && (uVar4 = F_00e1a1a0(this GEN_EDX_ARG,(*(undefined4 *)&gen_args[1])), uVar4 == 0)) {
    this_00 = this + 0x34;
    F_00e1b630(this_00 GEN_EDX_ARG,uVar1);
    uVar4 = F_00da3ae0(this_00 GEN_EDX_ARG,uVar2);
    F_00da3e40(this_00 GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3,uVar4);
    if ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[0]) + 3)) == '\0') {
      uVar4 = F_00da0f10(uVar2,&REFG(undefined * PTR32, 0x13516ac));
      F_00da3a20(this_00 GEN_EDX_ARG,uVar4,uVar3);
      *((uint *)GEN_TOP((uVar3 + 8))) = uVar4;
      return uVar3;
    }
    uVar5 = F_00da3990(this_00 GEN_EDX_ARG,uVar4);
    F_00da39d0(this_00 GEN_EDX_ARG,uVar4,uVar3);
    *((uint *)GEN_TOP((uVar3 + 8))) = uVar5;
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e1a5f0 */
GEN_LIB GEN_FRAME unsigned int F_00e1a5f0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe1a5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  if ((param_3 != '\0') && (*param_1 == 0)) {
    if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_5,4);
    }
    *((int * PTR32 *)GEN_TOP((*param_5 + param_5[1] * 4))) = param_1;
    param_5[1] = param_5[1] + 1;
  }
  return;
}

/* ref: hkTypeManager::MakePointer */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1a640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 7;
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00e1a3b0(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: hkTypeManager::MakeArray */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1a670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 8;
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  uVar1 = F_00e1a3b0(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: hkTypeManager::MakeTuple */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1a6a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  (*(undefined4 *)(gen_frame + 0x0)) = 9;
  (*(undefined4 *)(gen_frame + 0x8)) = param_2;
  uVar1 = F_00e1a3b0(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: hkTypeManager::ReplaceParent */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1a6d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = param_1;
  if (param_1[1] != param_2) {
    iVar1 = *param_1;
    if (iVar1 != 7) {
      if (iVar1 == 8) {
        uVar2 = F_00e1a670(this GEN_EDX_FWD,param_2);
        return uVar2;
      }
      if (iVar1 != 9) {
        return 0;
      }
      uVar2 = F_00e19c70(param_1 GEN_EDX_ARG);
      uVar2 = F_00e1a6a0(this GEN_EDX_ARG,param_2,uVar2);
      return uVar2;
    }
    piVar3 = ((int *)GEN_TOP(F_00e1a640(this GEN_EDX_ARG,param_2)));
  }
  return (uint)piVar3;
}

/* ref: hkTypeManager::GetArrayOfBuiltIn */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1a730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (*(int *)(this + param_1 * 4 + 0xc) == 0) {
    return 0;
  }
  uVar1 = F_00e1a670(this GEN_EDX_FWD,*(int *)(this + param_1 * 4 + 0xc));
  return uVar1;
}

/* ref: hkTypeManager::GetClassPointer */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1a750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e1a240(this GEN_EDX_FWD,param_1);
  uVar1 = F_00e1a640(this GEN_EDX_ARG,uVar1);
  return uVar1;
}

/* ref: hkTypeManager::IsOwned */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1a770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar3 = F_00e19cd0(param_2 GEN_EDX_FWD);
  uVar4 = F_0105bd60(this + 0x44 GEN_EDX_ARG,uVar3);
  if (*(int *)(this + 0x4c) < (int)uVar4) {
LAB_00e1a7d6: ;
    *param_1 = 0;
    return (uint)param_1;
  }
  iVar1 = *(int *)(this + 0x44);
LAB_00e1a7a0: ;
  if (*((undefined * PTR32 *)GEN_TOP((iVar1 + 4 + uVar4 * 8))) == param_2) {
    *param_1 = 1;
    return (uint)param_1;
  }
  iVar2 = *(int *)(this + 0x4c);
  uVar4 = uVar4 + 1;
  do {
    if ((int)uVar4 <= iVar2) {
      puVar5 = ((uint *)GEN_TOP((iVar1 + uVar4 * 8)));
      do {
        if (*puVar5 == 0xffffffff) {
          uVar4 = iVar2 + 1;
LAB_00e1a7d1: ;
          if (*(int *)(this + 0x4c) < (int)uVar4) goto LAB_00e1a7d6;
          goto LAB_00e1a7a0;
        }
        if (*puVar5 == uVar3) goto LAB_00e1a7d1;
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 2;
      } while ((int)uVar4 <= iVar2);
    }
    uVar4 = 0;
  } while( true );
}

/* ref: hkTypeManager::ParseTypeExpression */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1a800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  int iVar7;
  
  switch((unsigned int)(uintptr_t)(*param_1)) {
  case 0x21: ;
    return *(uint *)(this + 0xc);
  case 0x2a: ;
    uVar4 = F_00e1a800(this GEN_EDX_FWD,param_1 + 1);
    uVar4 = F_00e1a640(this GEN_EDX_ARG,uVar4);
    return uVar4;
  case 0x43: ;
    pcVar1 = param_1 + 1;
    for (pcVar6 = pcVar1;
        ((((cVar3 = *pcVar6, '`' < cVar3 && (cVar3 < '{')) || (('@' < cVar3 && (cVar3 < '[')))) ||
         (('/' < cVar3 && (cVar3 < ':')))) || ((cVar3 == '_' || (cVar3 == ':'))));
        pcVar6 = pcVar6 + 1) {
    }
    iVar7 = (int)pcVar6 - (int)pcVar1;
    if (((0 < iVar7) && (iVar7 < 0x80)) && (*pcVar6 == ';')) {
      F_00da0e40(((undefined1 *)(gen_frame + 0x0)),pcVar1,iVar7);
      ((undefined1 *)(gen_frame + 0x0))[(int)(iVar7)] = 0;
      uVar4 = F_00e1a240(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      return uVar4;
    }
    break;
  case 0x5b: ;
    uVar4 = F_00e1a800(this GEN_EDX_ARG,param_1 + 2);
    uVar4 = F_00e1a670(this GEN_EDX_ARG,uVar4);
    return uVar4;
  case 0x62: ;
    return *(uint *)(this + 0x14);
  case 0x69: ;
    return *(uint *)(this + 0x1c);
  case 0x72: ;
    return *(uint *)(this + 0x18);
  case 0x73: ;
    return *(uint *)(this + 0x20);
  case 0x76: ;
    return *(uint *)(this + 0x10);
  case 0x7b: ;
    pcVar1 = param_1 + 1;
    cVar3 = *pcVar1;
    pcVar6 = pcVar1;
    while (('/' < cVar3 && (cVar3 < ':'))) {
      pcVar2 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar3 = *pcVar2;
    }
    iVar7 = (int)pcVar6 - (int)pcVar1;
    if (((0 < iVar7) && (iVar7 < 10)) && (*pcVar6 == '}')) {
      F_00da0e40(((undefined1 *)(gen_frame + 0x80)),pcVar1,iVar7);
      ((undefined1 *)(gen_frame + 0x80))[(int)(iVar7)] = 0;
      uVar4 = F_00da0e80(((undefined1 *)(gen_frame + 0x80)),0);
      uVar5 = F_00e1a800(this GEN_EDX_ARG,pcVar6 + 1);
      uVar4 = F_00e1a6a0(this GEN_EDX_ARG,uVar5,uVar4);
      return uVar4;
    }
    return 0;
  }
  return 0;
}

/* ref: hkTypeManager::GetTypeFromLegacy */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1aa20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1aa20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(param_1 & 0xf)) {
  case 0: ;
    uVar1 = *(uint *)(this + 0x10);
    break;
  case 1: ;
    uVar1 = *(uint *)(this + 0x14);
    break;
  case 2: ;
    uVar1 = *(uint *)(this + 0x1c);
    break;
  case 3: ;
    uVar1 = *(uint *)(this + 0x18);
    break;
  case 4: ;
    uVar1 = F_00e1a6a0(this GEN_EDX_FWD,*(undefined4 *)(this + 0x18),4);
    break;
  case 5: ;
    uVar1 = F_00e1a6a0(this GEN_EDX_ARG,*(undefined4 *)(this + 0x18),8);
    break;
  case 6: ;
    uVar1 = F_00e1a6a0(this GEN_EDX_ARG,*(undefined4 *)(this + 0x18),0xc);
    break;
  case 7: ;
    uVar1 = F_00e1a6a0(this GEN_EDX_ARG,*(undefined4 *)(this + 0x18),0x10);
    break;
  case 8: ;
    if (param_2 == 0) {
      uVar1 = F_00e1a640(this GEN_EDX_ARG,*(undefined4 *)(this + 8));
    }
    else {
      uVar1 = F_00e1a240(this GEN_EDX_ARG,param_2);
      uVar1 = F_00e1a640(this GEN_EDX_ARG,uVar1);
    }
    break;
  case 9: ;
    if (param_2 == 0) {
      uVar1 = *(uint *)(this + 8);
    }
    else {
      uVar1 = F_00e1a240(this GEN_EDX_ARG,param_2);
    }
    break;
  case 10: ;
    uVar1 = *(uint *)(this + 0x20);
    break;
  default: ;
    goto switchD_00e1aa38_default;
  }
  if (uVar1 != 0) {
    if ((param_1 & 0x10) == 0) {
      if ((param_1 & 0x20) != 0) {
        uVar1 = F_00e1a6a0(this GEN_EDX_ARG,uVar1,param_3);
      }
      return uVar1;
    }
    uVar1 = F_00e1a670(this GEN_EDX_ARG,uVar1);
    return uVar1;
  }
switchD_00e1aa38_default: ;
  return 0;
}

/* ref: hkTypeManager::Type::AsString */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1ab30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1ab30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0x80000000;
  F_00da04b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,&(*(int *)(gen_frame + 0xc)));
  F_00e19e60(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  if ((*(uint *)(gen_frame + 0x10)) == ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0xc)),1);
  }
  *((undefined1 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + (*(uint *)(gen_frame + 0x10))))) = 0;
  (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
  F_00d91480(param_1 GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
  F_00d9fda0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x10)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
  }
  return (uint)param_1;
}

/* ref: hkTypeManager::AddBuiltInType */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1abe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1abe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  ((int *)(gen_frame + 0x0))[1] = 0;
  ((int *)(gen_frame + 0x0))[2] = 0;
  ((int *)(gen_frame + 0x0))[0] = param_1;
  uVar1 = F_00e1a3b0(this GEN_EDX_FWD,((int *)(gen_frame + 0x0)));
  *(uint *)(this + param_1 * 4 + 0xc) = uVar1;
  return uVar1;
}

/* ref: hkTypeManager::RemoveClass */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1ac10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe1ac10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  undefined * this_00;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_ECX = 0;
  int iVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(uint *)&gen_args[0]) = F_00e19c80((*(uint *)&gen_args[0]) GEN_EDX_FWD);
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0x80000000;
  F_00e1a4a0(this GEN_EDX_ARG,extraout_ECX,&(*(int *)(gen_frame + 0xc)));
  uVar2 = (*(uint *)(gen_frame + 0x10));
  (*(int *)(gen_frame + 0x8)) = ((int)0x80000000);
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x10))) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x10)) & ((int)(*(uint *)(gen_frame + 0x10)) < 0) - 1,4);
  }
  (*(uint *)(gen_frame + 0x4)) = uVar2;
  iVar4 = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x10))) {
    do {
      uVar2 = F_00e19cd0(*((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + iVar4 * 4))) GEN_EDX_ARG);
      *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + iVar4 * 4))) = uVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(*(uint *)(gen_frame + 0x10)));
  }
  iVar4 = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x10))) {
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + iVar4 * 4)));
      F_0105cc90((*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x44 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + iVar4 * 4))),puVar1);
      iVar4 = iVar4 + 1;
      *puVar1 = 0;
      puVar1[1] = 0;
      this = (*(undefined * PTR32 *)(gen_frame + 0x18));
    } while (iVar4 < (int)(*(uint *)(gen_frame + 0x10)));
  }
  this_00 = this + 0x34;
  uVar2 = F_00da3ae0(this_00 GEN_EDX_ARG,(*(uint *)&gen_args[0]));
  F_00da3e40(this_00 GEN_EDX_ARG,(int)&(*(uint *)&gen_args[0]) + 3,uVar2);
  if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) != '\0') {
    uVar3 = F_00da3990(this_00 GEN_EDX_ARG,uVar2);
    F_00da0f40(uVar3,&REFG(undefined * PTR32, 0x13516ac));
    F_00da3b70(this_00 GEN_EDX_ARG,uVar2);
  }
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 4);
  }
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0x80000000;
  uVar2 = (*(uint *)(gen_frame + 0x14));
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) * 4);
  }
  return uVar2;
}

/* ref: FUN_00e1ad70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1ad70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1ad70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined4 * this_00;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 0x50)));
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  F_00dc18d0(this_00 GEN_EDX_FWD,((code *)REFP(0xe1a5f0)),0,&(*(int *)(gen_frame + 0x0)));
  iVar3 = 0;
  if (0 < (*(int *)(gen_frame + 0x4))) {
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + iVar3 * 4)));
      uVar2 = *this_00;
      *((int *)GEN_TOP(((int)this + 0x84))) = *((int *)GEN_TOP(((int)this + 0x84))) + 1;
      *puVar1 = uVar2;
      iVar3 = iVar3 + 1;
      *this_00 = puVar1;
    } while (iVar3 < (*(int *)(gen_frame + 0x4)));
  }
  F_00dc17f0(this_00 GEN_EDX_ARG);
  F_00dc1690(this_00 GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar4 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar4;
}

/* ref: FUN_00e1ae10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1ae10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1ae10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * this_00;
  uint uVar1;
  undefined4 * puVar2;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e61c));
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_FWD,local_8);
  F_0105cae0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG);
  F_00dc1c00(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG,0xc,4,0x800,0,0);
  F_00da1030((int)this + 0xc,0,0x28);
  F_00e1abe0(this GEN_EDX_ARG,1);
  F_00e1abe0(this GEN_EDX_ARG,4);
  F_00e1abe0(this GEN_EDX_ARG,3);
  F_00e1abe0(this GEN_EDX_ARG,5);
  F_00e1abe0(this GEN_EDX_ARG,2);
  this_00 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x50)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    this_00 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x70)));
    if (this_00 < *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x74)))) {
      *((int *)GEN_TOP(((int)this + 0x84))) = *((int *)GEN_TOP(((int)this + 0x84))) - 1;
      *((int *)GEN_TOP(((int)this + 0x70))) = *((int *)GEN_TOP(((int)this + 0x54))) + (int)this_00;
    }
    else {
      this_00 = ((undefined4 *)GEN_TOP(F_00dc1990(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG)));
    }
  }
  else {
    *((int *)GEN_TOP(((int)this + 0x84))) = *((int *)GEN_TOP(((int)this + 0x84))) - 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *this_00;
  }
  *this_00 = 6;
  this_00[1] = 0;
  this_00[2] = 0;
  puVar2 = this_00;
  uVar1 = F_00e19cd0(this_00 GEN_EDX_ARG);
  F_0105bcf0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,uVar1,puVar2);
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = this_00;
  return (uint)this;
}

/* ref: hkTypeManager::ReplaceTerminal */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1af00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1af00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_TOP(0x50, 0, 4);
  undefined4 uVar1;
  code * pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000010;
  uVar5 = param_1;
  do {
    if ((*(uint *)(gen_frame + 0x4)) == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),4);
    }
    uVar6 = (*(uint *)(gen_frame + 0x4));
    *(uint *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 4) = uVar5;
    uVar3 = (*(uint *)(gen_frame + 0x4)) + 1;
    (*(uint *)(gen_frame + 0x4)) = uVar3;
    uVar5 = *((uint *)GEN_TOP((uVar5 + 4)));
  } while (uVar5 != 0);
  uVar4 = param_2;
  if (*(uint *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + uVar3 * 4 - 4) != param_2) {
    for (; -1 < (int)uVar6; uVar6 = uVar6 - 1) {
      uVar1 = *(undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + uVar6 * 4);
      uVar4 = F_00e1a6d0(this GEN_EDX_ARG,uVar1,uVar4);
    }
    (*(uint *)(gen_frame + 0x4)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
      pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10)));
      (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
    }
    return uVar4;
  }
  (*(uint *)(gen_frame + 0x4)) = uVar5;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return param_1;
}

/* ref: hkTypeManager::CopyType */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1aff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe1aff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x50, 0, 4);
  undefined4 uVar1;
  code * pcVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (*(uint *)&gen_args[0]);
  pcVar3 = ((char *)GEN_TOP(F_00e1a770(this GEN_EDX_FWD,(int)&(*(uint *)&gen_args[0]) + 3,(*(uint *)&gen_args[0]))));
  if (*pcVar3 != '\0') {
    return uVar4;
  }
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x8)) = -0x7ffffff0;
  F_00e1a310(uVar4,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  iVar5 = **(int * PTR32 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x4)) * 4 - 4);
  if (iVar5 == 6) {
    uVar4 = F_00e19c80(*(int * PTR32 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x4)) * 4 - 4) GEN_EDX_ARG);
    uVar4 = F_00e1a240(this GEN_EDX_ARG,uVar4);
  }
  else {
    uVar4 = *(uint *)(this + iVar5 * 4 + 0xc);
  }
  if (uVar4 == 0) {
    (*(int *)(gen_frame + 0x4)) = 0;
    if (-1 < (*(int *)(gen_frame + 0x8))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 4);
    }
    return 0;
  }
  for (iVar5 = (*(int *)(gen_frame + 0x4)) - 2; -1 < iVar5; iVar5 = iVar5 - 1) {
    uVar1 = *(undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + iVar5 * 4);
    uVar4 = F_00e1a6d0(this GEN_EDX_ARG,uVar1,uVar4);
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x8))) {
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10)));
    (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 4);
  }
  return uVar4;
}

/* ref: FUN_00e1b110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1b110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: hkStorageStringMap::GetWithDefault */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e1b140 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1b140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1b140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0105cae0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: hkPointerMultiMap::Insert */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1b150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0105bcf0(this GEN_EDX_FWD,param_1,param_2);
  return;
}

/* ref: hkPointerMultiMap::FindKey */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0105bd60(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkPointerMultiMap::RemoveByValue */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0105cc90(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: hkStorageStringMap::Insert */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: hkStorageStringMap::FindKey */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da3ae0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkMap::GetValue_00e1b1a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b1a0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da3990(in_ecx GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: hkMap::SetValue */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b1b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da39d0(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: hkMap::IsValid_00e1b1c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b1c0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00da3e40(in_ecx GEN_EDX_FWD,param_2,param_3);
  return param_2;
}

/* ref: hkMap::Remove */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1b1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00da3b70(this GEN_EDX_FWD,param_1);
  return;
}

/* ref: hkMap::GetNext_00e1b200 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkMap::GetValueAtIndex */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b220(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 4 + param_2 * 8)));
}

/* ref: hkMap::IsValidIndex */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b230(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: hkArray::GetElementPtr_00e1b280 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b280(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: hkMap::IsValidKey */
GEN_LIB GEN_FRAME byte F_00e1b2b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1b2b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 != -1;
}

/* ref: hkMap::KeysEqual */
GEN_LIB GEN_FRAME byte F_00e1b2c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_1 == param_2;
}

/* ref: hkArray::hkArray */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1b2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: Global::FillElements_00e1b310 */
GEN_LIB GEN_FRAME unsigned int F_00e1b310(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b310u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::FreeElements */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e1b360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1b360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: hkStorageStringMap::Insert_00e1b380 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (*(undefined4 *)&gen_args[0]);
  uVar2 = F_00da3ae0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  F_00da3e40(this GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3,uVar2);
  if ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[0]) + 3)) == '\0') {
    uVar2 = F_00da0f10(uVar1,&REFG(undefined * PTR32, 0x13516ac));
    F_00da3a20(this GEN_EDX_ARG,uVar2,(*(undefined4 *)&gen_args[1]));
    return uVar2;
  }
  uVar3 = F_00da3990(this GEN_EDX_ARG,uVar2);
  F_00da39d0(this GEN_EDX_ARG,uVar2,(*(undefined4 *)&gen_args[1]));
  return uVar3;
}

/* ref: FUN_00e1b3f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b3f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 4 + param_2 * 8)));
}

/* ref: FUN_00e1b400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b400(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: hkStorageStringMap::RemoveAt */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1b440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da3990(this GEN_EDX_FWD,param_1);
  F_00da0f40(uVar1,&REFG(undefined * PTR32, 0x13516ac));
  F_00da3b70(this GEN_EDX_ARG,param_1);
  return;
}

/* ref: hkStorageStringMap::Clear */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1b470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1b470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar2 = F_00da3970(this GEN_EDX_FWD);
  F_00da3e40(this GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3,uVar2);
  cVar1 = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3));
  while (cVar1 != '\0') {
    uVar3 = F_00da3990(this GEN_EDX_ARG,uVar2);
    F_00da0f40(uVar3,&REFG(undefined * PTR32, 0x13516ac));
    uVar2 = F_00da39f0(this GEN_EDX_ARG,uVar2);
    F_00da3e40(this GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3,uVar2);
    cVar1 = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3));
  }
  F_00da3cd0(this GEN_EDX_ARG);
  return;
}

/* ref: hkMap::FindKeyFrom */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b4f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  uVar2 = param_1 + 1;
  do {
    if ((int)uVar2 <= iVar1) {
      piVar3 = ((int *)GEN_TOP((*(int *)this + uVar2 * 8)));
      do {
        if (*piVar3 == -1) {
          return iVar1 + 1;
        }
        if (*piVar3 == param_2) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 2;
      } while ((int)uVar2 <= iVar1);
    }
    uVar2 = 0;
  } while( true );
}

/* ref: hkMap::GetNextIndex_00e1b540 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1b540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + iVar1 * 8)));
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: hkArray::PushBack_00e1b580 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b580u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e1b5c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1b5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: hkArray::ClearAndDeallocate_00e1b5e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b5e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkStorageStringMap::~hkStorageStringMap */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1b620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1b620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00e1b470(this GEN_EDX_FWD);
  uVar1 = F_00da3e20(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: hkStorageStringMap::Remove */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00da3ae0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  F_00da3e40(this GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3,uVar1);
  if ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[0]) + 3)) != '\0') {
    uVar2 = F_00da3990(this GEN_EDX_ARG,uVar1);
    F_00da0f40(uVar2,&REFG(undefined * PTR32, 0x13516ac));
    F_00da3b70(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00e1b6b0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1b6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + iVar1 * 8)));
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: FUN_00e1b6e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b6e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  uVar2 = param_1 + 1;
  do {
    if ((int)uVar2 <= iVar1) {
      piVar3 = ((int *)GEN_TOP((*(int *)this + uVar2 * 8)));
      do {
        if (*piVar3 == -1) {
          return iVar1 + 1;
        }
        if (*piVar3 == param_2) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 2;
      } while ((int)uVar2 <= iVar1);
    }
    uVar2 = 0;
  } while( true );
}

/* ref: hkArray::PushBack_00e1b730 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b730u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkArray::ClearAndDeallocate_00e1b770 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1b770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1b770u, gen_a0, 0u, 0u, 0u);
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

/* ref: Global::FreeReferencedObject_00e1b7b0 */
GEN_LIB GEN_FRAME uint F_00e1b7b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1b7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00e1b7e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1b7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1b7e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkInplaceArray::hkInplaceArray_00e1b820 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000010;
  return (uint)this;
}

/* ref: hkTypeManager::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b840(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e1a370(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e1b880 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1b880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1b880u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkStaticClassNameRegistry::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1b8c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1b8c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: hkStaticClassNameRegistry::EnsureInitialized */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1b8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1b8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)(this + 0x14) == 0) {
    F_00e05570(*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x10));
    *(undefined4 *)(this + 0x14) = 1;
  }
  return;
}

/* ref: FUN_00e1b900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1b900u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x114e62c));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  return (uint)this;
}

/* ref: hkStaticClassNameRegistry::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00e1b8d0(this GEN_EDX_FWD);
  piVar1 = *(int * PTR32 *)(this + 0xc);
  iVar4 = 0;
  if (*piVar1 != 0) {
    iVar3 = 0;
    do {
      uVar2 = F_00d92610(*((undefined4 *)GEN_TOP(((int)piVar1 + iVar3))) GEN_EDX_ARG);
      uVar2 = F_00da0d20(param_1,uVar2);
      piVar1 = *(int * PTR32 *)(this + 0xc);
      if (uVar2 == 0) {
        return piVar1[iVar4];
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar4 * 4;
    } while (piVar1[iVar4] != 0);
  }
  return 0;
}

/* ref: FUN_00e1b9a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1b9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x114e62c));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  return (uint)this;
}

/* ref: hkStaticClassNameRegistry::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1b9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  
  F_00e1b8d0(this GEN_EDX_FWD);
  piVar4 = *(int * PTR32 *)(this + 0xc);
  iVar5 = 0;
  iVar1 = *piVar4;
  while (iVar1 != 0) {
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + 1;
    iVar1 = *piVar4;
  }
  iVar2 = param_1[1];
  iVar1 = iVar2 + iVar5;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,iVar3,4);
  }
  param_1[1] = param_1[1] + iVar5;
  iVar1 = *param_1;
  piVar4 = *(int * PTR32 *)(this + 0xc);
  iVar5 = 0;
  if (*piVar4 != 0) {
    iVar3 = 0;
    do {
      *((int *)GEN_TOP((iVar3 + iVar1 + iVar2 * 4))) = *piVar4;
      iVar5 = iVar5 + 1;
      iVar3 = iVar5 * 4;
      piVar4 = ((int *)GEN_TOP((*(int *)(this + 0xc) + iVar3)));
    } while (*piVar4 != 0);
  }
  return 0;
}

/* ref: FUN_00e1ba70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1ba70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1ba70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e1bab0 */
GEN_LIB GEN_FRAME uint F_00e1bab0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1bab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkStaticClassNameRegistry::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bae0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1bae0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkArray::ExpandBy */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1bb20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = iVar2 + param_2;
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(param_1,this,iVar4,4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_2;
  return *(int *)this + iVar2 * 4;
}

/* ref: hkArray::ExpandBy_00e1bb70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bb70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1bb70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = iVar2 + param_1;
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar4,4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00e1bbf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bbf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1bbf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  if (param_1 <= (int)((*((int *)GEN_TOP(((int)this + 0x18))) - uVar1) + *((int *)GEN_TOP(((int)this + 0x14))))) {
    uVar1 = uVar1 + param_1;
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00e1bc10 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1bc10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1bc10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char * pcVar1;
  
  for (pcVar1 = ((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x14))))));
      pcVar1 < *((char * PTR32 *)GEN_TOP(((int)this + 0x10))); pcVar1 = pcVar1 + 1) {
    if ((*pcVar1 == '\r') || (*pcVar1 == '\n')) {
      *((int *)GEN_TOP(((int)this + 0x24))) = *((int *)GEN_TOP(((int)this + 0x24))) + 1;
      *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
    }
  }
  *((int *)GEN_TOP(((int)this + 0xc))) = (int)*((char * PTR32 *)GEN_TOP(((int)this + 0x10))) - *((int *)GEN_TOP(((int)this + 0x14)));
  return 0;
}

/* ref: FUN_00e1bc60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bc60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1bc60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP((in_ecx + 0x14))) + *((int *)GEN_TOP((in_ecx + 0xc))) + param_2;
  *((uint *)GEN_TOP((in_ecx + 0x10))) = uVar1;
  return uVar1;
}

/* ref: FUN_00e1bc80 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1bc80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1bc80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  *((int *)GEN_TOP(((int)this + 8))) = iVar1;
  if (0x400 < iVar1) {
    F_00da1020(*((int *)GEN_TOP(((int)this + 0x14))),iVar1 + *((int *)GEN_TOP(((int)this + 0x14))),
                      *((int *)GEN_TOP(((int)this + 0x18))) - iVar1);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x18))) - *((int *)GEN_TOP(((int)this + 8)));
    *((int *)GEN_TOP(((int)this + 0x18))) = iVar1;
    *((undefined1 *)GEN_TOP((iVar1 + *((int *)GEN_TOP(((int)this + 0x14)))))) = 0;
    *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - *((int *)GEN_TOP(((int)this + 8)));
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) - *((int *)GEN_TOP(((int)this + 8)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  return;
}

/* ref: FUN_00e1bcd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bcd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1bcd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e648));
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x14)));
  *puVar1 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x80000000;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))) = param_1;
  F_00d919e0(param_1 GEN_EDX_FWD);
  if ((*((uint *)GEN_TOP(((int)this + 0x1c))) & 0x3fffffff) == 0) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),puVar1,1,1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 1;
  *((undefined1 *)GEN_TOP(*puVar1)) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *puVar1;
  return (uint)this;
}

/* ref: FUN_00e1bd60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1bd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1bd60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e648));
  F_00d91a80(this_00 GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x1c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x14))),uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkXmlLexAnalyzer::FillBuffer */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1bdb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * phVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (param_1 < 0x100) {
    param_1 = 0x100;
  }
  iVar3 = *(int *)(this + 0x14);
  iVar4 = *(int *)(this + 0x18);
  iVar5 = *(int *)(this + 0x18);
  phVar1 = this + 0x14;
  iVar2 = iVar4 + param_1 + 1;
  if ((int)(*(uint *)(this + 0x1c) & 0x3fffffff) < iVar2) {
    iVar6 = (*(uint *)(this + 0x1c) & 0x3fffffff) * 2;
    if (iVar6 <= iVar2) {
      iVar6 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),phVar1,iVar6,1);
  }
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_1 + 1;
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x20) + 0x10))))
                    (*(int * PTR32 *)(this + 0x20) GEN_EDX_ARG,*(int *)phVar1 + iVar4,param_1);
  *((undefined1 *)GEN_TOP((*(int *)phVar1 + uVar7 + iVar5))) = 0;
  *(uint *)(this + 0x18) = uVar7 + iVar5;
  if (*(int *)phVar1 != iVar3) {
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + (*(int *)phVar1 - iVar3);
  }
  return (uVar7 + iVar5) - iVar5;
}

/* ref: hkXmlLexAnalyzer::MatchPrefix */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1be60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1be60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x10);
  iVar1 = (*(int *)(this + 0x18) - iVar3) + *(int *)(this + 0x14);
  if (iVar1 < param_3) {
    F_00e1bdb0(this GEN_EDX_FWD,param_3 - iVar1);
    iVar3 = *(int *)(this + 0x10);
    if ((*(int *)(this + 0x18) - iVar3) + *(int *)(this + 0x14) < param_3) {
      *param_1 = 0;
      return (uint)param_1;
    }
  }
  uVar2 = F_00da0d60(iVar3,param_2,param_3);
  *param_1 = uVar2 == 0;
  return (uint)param_1;
}

/* ref: hkXmlLexAnalyzer::MatchString */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1bec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da0e60(param_2);
  F_00e1be60(this GEN_EDX_ARG,param_1,param_2,uVar1);
  return param_1;
}

/* ref: hkXmlLexAnalyzer::MatchAndSkip */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1bef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 uVar1;
  uint uVar2;
  char * pcVar3;
  
  uVar1 = (*(undefined4 *)&gen_args[1]);
  uVar2 = F_00da0e60((*(undefined4 *)&gen_args[1]));
  pcVar3 = ((char *)GEN_TOP(F_00e1be60(this GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[1]) + 3,uVar1,uVar2)));
  if (*pcVar3 != '\0') {
    if ((int)uVar2 <= (*(int *)(this + 0x18) - *(int *)(this + 0x10)) + *(int *)(this + 0x14)) {
      *(uint *)(this + 0x10) = *(int *)(this + 0x10) + uVar2;
    }
    *(*(undefined1 * PTR32 *)&gen_args[0]) = 1;
    return (uint)(*(undefined1 * PTR32 *)&gen_args[0]);
  }
  *(*(undefined1 * PTR32 *)&gen_args[0]) = 0;
  return (uint)(*(undefined1 * PTR32 *)&gen_args[0]);
}

/* ref: hkArray::ExpandBy_00e1bf50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1bf50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = iVar2 + param_1;
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar4,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  return *(int *)this + iVar2;
}

/* ref: Global::DeleteReferencedObject_00e1bfa0 */
GEN_LIB GEN_FRAME uint F_00e1bfa0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1bfa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkXmlLexAnalyzer::EnsureAvailable */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bfd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1bfd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = (*(int *)(this + 0x18) - *(int *)(this + 0x10)) + *(int *)(this + 0x14);
  if ((int)uVar1 < param_1) {
    F_00e1bdb0(this GEN_EDX_FWD,param_1 - uVar1);
    uVar1 = (*(int *)(this + 0x18) - *(int *)(this + 0x10)) + *(int *)(this + 0x14);
  }
  return uVar1;
}

/* ref: hkParserBuffer::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c000(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e1bd60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: hkSubString::hkSubString */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1c040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: hkSubString::Assign */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: Global::IsDigitChar */
GEN_LIB GEN_FRAME uint F_00e1c0c0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  *((bool *)GEN_TOP(param_1)) = (byte)(param_2 - 0x30U) < 10;
  return param_1;
}

/* ref: hkXmlStreamParser::ParseInt64 */
GEN_LIB GEN_FRAME uint F_00e1c0f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(ulonglong * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(ulonglong * param_2 = (ulonglong *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  char * pcVar4;
  ulonglong uVar5;
  
  pcVar2 = ((char *)GEN_TOP(*param_1));
  pcVar3 = ((char *)GEN_TOP(param_1[1]));
  if (pcVar3 != pcVar2 && -1 < (int)pcVar3 - (int)pcVar2) {
    pcVar4 = pcVar2;
    if (*pcVar2 == '-') {
      pcVar4 = pcVar2 + 1;
    }
    if (pcVar4 < pcVar3) {
      cVar1 = *pcVar4;
      while ((byte)(cVar1 - 0x30U) < 10) {
        pcVar4 = pcVar4 + 1;
        if (pcVar3 <= pcVar4) {
          F_00da0e40(((undefined1 *)(gen_frame + 0x0)),pcVar2,(int)pcVar3 - (int)pcVar2);
          ((undefined1 *)(gen_frame + 0x0))[(int)((int)pcVar3 - (int)pcVar2)] = 0;
          uVar5 = F_00da0ea0(((undefined1 *)(gen_frame + 0x0)),0);
          *param_2 = uVar5;
          return 0;
        }
        cVar1 = *pcVar4;
      }
    }
  }
  return 1;
}

/* ref: hkXmlStreamParser::ParseUint */
GEN_LIB GEN_FRAME uint F_00e1c170(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  pcVar2 = *((char * PTR32 *)GEN_TOP(param_1));
  iVar3 = *((int *)GEN_TOP((param_1 + 4))) - (int)pcVar2;
  if ((0 < iVar3) && (iVar3 < 0x21)) {
    if (*pcVar2 != 'x') {
      uVar5 = F_00e1df40(param_1,param_2);
      return uVar5;
    }
    if (iVar3 == 9) {
      uVar5 = 0;
      iVar3 = 0;
      do {
        cVar1 = pcVar2[iVar3 + 1];
        if ((byte)(cVar1 - 0x30U) < 10) {
          uVar4 = (int)cVar1 - 0x30;
        }
        else if ((byte)(cVar1 + 0xbfU) < 6) {
          uVar4 = (int)cVar1 - 0x37;
        }
        else {
          if (5 < (byte)(cVar1 + 0x9fU)) {
            return 1;
          }
          uVar4 = (int)cVar1 - 0x57;
        }
        iVar3 = iVar3 + 1;
        uVar5 = uVar5 << 4 | uVar4;
      } while (iVar3 < 8);
      *param_2 = uVar5;
      return 0;
    }
  }
  return 1;
}

/* ref: hkXmlStreamParser::NeedsDecoding */
GEN_LIB GEN_FRAME uint F_00e1c210(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  char * pcVar1;
  
  pcVar1 = ((char *)GEN_TOP(*param_2));
  while( true ) {
    if (((char *)GEN_TOP(param_2[1])) <= pcVar1) {
      *param_1 = 0;
      return (uint)param_1;
    }
    if (*pcVar1 == '&') break;
    pcVar1 = pcVar1 + 1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkXmlStreamParser::DecodeString */
GEN_LIB GEN_FRAME uint F_00e1c240(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x16, 10, 4);
  char * pcVar1;
  char * pcVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  
  F_00da4850(param_2 GEN_EDX_ARG);
  pcVar1 = ((char *)GEN_TOP(param_1[1]));
  pcVar3 = ((char *)GEN_TOP(*param_1));
joined_r0x00e1c25e: ;
  do {
    while( true ) {
      if (pcVar1 <= pcVar3) {
        return 0;
      }
      pcVar2 = pcVar3;
      if (*pcVar3 == '&') break;
      do {
        pcVar2 = pcVar2 + 1;
        if (pcVar1 <= pcVar2) break;
      } while (*pcVar2 != '&');
      F_00da4bf0(param_2 GEN_EDX_ARG,pcVar3,(int)pcVar2 - (int)pcVar3);
      pcVar3 = pcVar2;
    }
    iVar5 = (int)pcVar1 - (int)pcVar3;
    if ((iVar5 < 5) || (uVar4 = F_00da0d60(pcVar3 + 1,&REFG(undefined, 0x114e66c),4), uVar4 != 0)) {
      if (3 < iVar5) {
        uVar4 = F_00da0d60(pcVar3 + 1,&REFG(undefined, 0x114e668),3);
        if (uVar4 == 0) {
          F_00da4bf0(param_2 GEN_EDX_ARG,&REFG(undefined, 0x1126164),1);
          pcVar3 = pcVar3 + 4;
          goto joined_r0x00e1c25e;
        }
        uVar4 = F_00da0d60(pcVar3 + 1,&REFG(undefined, 0x114e664),3);
        if (uVar4 == 0) {
          F_00da4bf0(param_2 GEN_EDX_ARG,&REFG(undefined, 0x112615c),1);
          pcVar3 = pcVar3 + 4;
          goto joined_r0x00e1c25e;
        }
      }
      if (5 < iVar5) {
        uVar4 = F_00da0d60(pcVar3 + 1,((char *)REFP(0x114e65c)),5);
        if (uVar4 == 0) {
          F_00da4bf0(param_2 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
          pcVar3 = pcVar3 + 6;
          goto joined_r0x00e1c25e;
        }
        uVar4 = F_00da0d60(pcVar3 + 1,((char *)REFP(0x114e654)),5);
        if (uVar4 == 0) {
          F_00da4bf0(param_2 GEN_EDX_ARG,&REFG(undefined, 0x11264a4),1);
          pcVar3 = pcVar3 + 6;
          goto joined_r0x00e1c25e;
        }
      }
      if (((pcVar3[1] != '#') || (9 < (byte)(pcVar3[2] - 0x30U))) ||
         (pcVar2 = pcVar3 + 2, iVar5 < 4)) {
        return 1;
      }
      while( true ) {
        if (pcVar1 <= pcVar2) {
          return 1;
        }
        if (9 < (byte)(*pcVar2 - 0x30U)) break;
        pcVar2 = pcVar2 + 1;
      }
      if (pcVar1 <= pcVar2) {
        return 1;
      }
      if (*pcVar2 != ';') {
        return 1;
      }
      iVar5 = (int)pcVar2 - (int)pcVar3;
      if (0x10 < iVar5) {
        return 1;
      }
      F_00da0e40(&(*(undefined1 *)(gen_frame + 0x2)),pcVar3 + 2,iVar5 - 2);
      ((gen_frame + 0x0))[iVar5] = 0;
      uVar4 = F_00da0e80(&(*(undefined1 *)(gen_frame + 0x2)),0);
      if (0xff < uVar4) {
        return 1;
      }
      (*(undefined1 *)(gen_frame + 0x2)) = (char)uVar4;
      (*(undefined1 *)(gen_frame + 0x3)) = 0;
      F_00da4bf0(param_2 GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x2)),0xffffffff);
      pcVar3 = pcVar2 + 1;
      goto joined_r0x00e1c25e;
    }
    F_00da4bf0(param_2 GEN_EDX_ARG,&REFG(undefined, 0x1126170),1);
    pcVar3 = pcVar3 + 5;
  } while( true );
}

/* ref: hkXmlStreamParser::GetValue */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1c430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = F_00da4190(this + 8 GEN_EDX_FWD,param_1,0xffffffff);
  if ((int)uVar5 < 0) {
    return 1;
  }
  piVar1 = ((int *)GEN_TOP((*(int *)(this + 0x68) + uVar5 * 8)));
  iVar2 = *(int *)(this + 0x4c);
  iVar3 = *(int *)(this + 0x40);
  iVar4 = piVar1[1];
  *param_2 = *piVar1 + iVar2 + iVar3;
  param_2[1] = iVar4 + iVar2 + iVar3;
  return 0;
}

/* ref: hkXmlStreamParser::GetBlockName */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  if (0 < *(int *)(this + 0x6c)) {
    iVar1 = *(int *)(this + 0x4c);
    iVar2 = *(int *)(this + 0x40);
    piVar3 = *(int * PTR32 *)(this + 0x68);
    *param_1 = *piVar3 + iVar1 + iVar2;
    param_1[1] = piVar3[1] + iVar1 + iVar2;
    return (uint)param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: hkXmlStreamParser::GetLexeme */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c4c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x48);
  *param_1 = *(int *)(this + 0x4c) + *(int *)(this + 0x44);
  param_1[1] = iVar1;
  return (uint)param_1;
}

/* ref: hkXmlStreamParser::DumpBlock */
GEN_LIB GEN_FRAME uint F_00e1c4e0(GEN_P(undefined * in_esi, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c4e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * in_esi = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  uint uVar2;
  undefined * phVar3;
  int iVar4;
  undefined4 uVar5;
  undefined * puVar6;
  
  uVar2 = F_00e1c480(in_esi GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar2 = F_0105a4c0(param_2,uVar2);
  iVar4 = 0;
  if (0 < *(int *)(in_esi + 0x1c)) {
    do {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(in_esi + 0x18) + iVar4 * 4)));
      puVar6 = &REFG(undefined, 0x1118a3c);
      uVar5 = uVar1;
      phVar3 = ((undefined *)GEN_TOP(F_00d9fe80(param_2 GEN_EDX_ARG,&REFG(undefined, 0x10919e8))));
      phVar3 = ((undefined *)GEN_TOP(F_00d9fe80(phVar3 GEN_EDX_ARG,uVar5)));
      F_00d9fe80(phVar3 GEN_EDX_ARG,puVar6);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      F_00e1c430(in_esi GEN_EDX_ARG,uVar1,&(*(undefined4 *)(gen_frame + 0x0)));
      uVar2 = F_0105a4c0(param_2,&(*(undefined4 *)(gen_frame + 0x0)));
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_esi + 0x1c));
  }
  return uVar2;
}

/* ref: hkXmlStreamParser::GetIntAttribute */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1c560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(char * PTR32 *)(gen_frame + 0x8)) = ((char *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0xc)) = ((char *)GEN_TOP(0x0));
  uVar1 = F_00e1c430(this GEN_EDX_FWD,param_1,&(*(char * PTR32 *)(gen_frame + 0x8)));
  if (((uVar1 == 0) && (*(*(char * PTR32 *)(gen_frame + 0x8)) == '\"')) && (*((char *)GEN_TOP(((int)(*(char * PTR32 *)(gen_frame + 0xc)) - 1))) == '\"')) {
    (*(char * PTR32 *)(gen_frame + 0x8)) = (*(char * PTR32 *)(gen_frame + 0x8)) + 1;
    (*(char * PTR32 *)(gen_frame + 0xc)) = ((char *)GEN_TOP(((int)(*(char * PTR32 *)(gen_frame + 0xc)) - 1)));
    (*(undefined8 *)(gen_frame + 0x0)) = 0;
    uVar1 = F_00e1c0f0(&(*(char * PTR32 *)(gen_frame + 0x8)),&(*(undefined8 *)(gen_frame + 0x0)));
    *param_2 = (undefined4)(*(undefined8 *)(gen_frame + 0x0));
    return uVar1;
  }
  return 1;
}

/* ref: hkXmlStreamParser::HasAttribute */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1c5d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  uVar1 = F_00e1c430(this GEN_EDX_FWD,param_2,((undefined1 *)(gen_frame + 0x0)));
  *((bool *)GEN_TOP(param_1)) = uVar1 == 0;
  return param_1;
}

/* ref: hkXmlStreamParser::GetUintAttribute */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1c600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP(0x0));
  uVar1 = F_00e1c430(this GEN_EDX_FWD,param_1,&(*(char * PTR32 *)(gen_frame + 0x0)));
  if (((uVar1 == 0) && (*(*(char * PTR32 *)(gen_frame + 0x0)) == '\"')) && (*((char *)GEN_TOP(((int)(*(char * PTR32 *)(gen_frame + 0x4)) - 1))) == '\"')) {
    (*(char * PTR32 *)(gen_frame + 0x0)) = (*(char * PTR32 *)(gen_frame + 0x0)) + 1;
    (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP(((int)(*(char * PTR32 *)(gen_frame + 0x4)) - 1)));
    uVar1 = F_00e1c170((uint)&(*(char * PTR32 *)(gen_frame + 0x0)),param_2);
    return uVar1;
  }
  return 1;
}

/* ref: hkXmlStreamParser::PushLexeme */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1c660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1c660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (*(uint *)(this + 0x6c) == (*(uint *)(this + 0x70) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 0x68,8);
  }
  piVar1 = ((int *)GEN_TOP((*(int *)(this + 0x68) + *(int *)(this + 0x6c) * 8)));
  *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + 1;
  *piVar1 = *(int *)(this + 0x44) - *(int *)(this + 0x40);
  uVar2 = (*(int *)(this + 0x48) - *(int *)(this + 0x4c)) - *(int *)(this + 0x40);
  piVar1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00e1c6b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e678));
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,local_8);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x80000000;
  F_00e25550(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 6;
  return (uint)this;
}

/* ref: hkXmlStreamParser::ExtractAttributes */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1c720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_8;
  
  F_00da3cd0(this + 8 GEN_EDX_FWD);
  iVar7 = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  if (1 < *(int *)(this + 0x6c)) {
    piVar3 = ((int *)GEN_TOP((*(int *)(this + 0x68) + 8)));
    iVar6 = (*(int *)(this + 0x6c) - 2U >> 1) + 1;
    do {
      piVar1 = piVar3 + 1;
      iVar5 = *piVar3;
      piVar3 = piVar3 + 4;
      iVar6 = iVar6 - 1;
      iVar7 = iVar7 + 1 + (*piVar1 - iVar5);
    } while (iVar6 != 0);
  }
  uVar4 = *(uint *)(this + 0x2c) & 0x3fffffff;
  if ((int)uVar4 < iVar7) {
    iVar6 = uVar4 * 2;
    if ((int)(uVar4 * 2) <= iVar7) {
      iVar6 = iVar7;
    }
    bVar2 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this + 0x24,iVar6,1);
    uVar4 = CONCAT31(extraout_var,bVar2);
  }
  *(int *)(this + 0x28) = iVar7;
  iVar7 = *(int *)(this + 0x24);
  local_8 = 1;
  if (1 < *(int *)(this + 0x6c)) {
    do {
      piVar3 = ((int *)GEN_TOP((*(int *)(this + 0x68) + local_8 * 8)));
      iVar6 = *piVar3;
      iVar5 = piVar3[1] - iVar6;
      F_00da0e40(iVar7,*(int *)(this + 0x4c) + iVar6 + *(int *)(this + 0x40),iVar5);
      *((undefined1 *)GEN_TOP((iVar5 + iVar7))) = 0;
      if (*(uint *)(this + 0x1c) == (*(uint *)(this + 0x20) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 0x18,4);
      }
      *((int *)GEN_TOP((*(int *)(this + 0x18) + *(int *)(this + 0x1c) * 4))) = iVar7;
      *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
      F_00da3a20(this + 8 GEN_EDX_ARG,iVar7,local_8 + 1);
      uVar4 = local_8 + 2;
      iVar7 = iVar5 + 1 + iVar7;
      local_8 = uVar4;
    } while ((int)uVar4 < *(int *)(this + 0x6c));
  }
  return uVar4;
}

/* ref: hkXmlStreamParser::ParseBlock */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1c830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1c830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  bool bVar2;
  
  uVar1 = F_00e25a70(this + 0x30 GEN_EDX_FWD);
  if (uVar1 == 0xb) {
    uVar1 = F_00e25a70(this + 0x30 GEN_EDX_ARG);
    if (uVar1 == 8) {
      F_00e1c660(this GEN_EDX_ARG);
      uVar1 = F_00e25a70(this + 0x30 GEN_EDX_ARG);
      return (-(uint)(uVar1 != 6) & 3) + 3;
    }
  }
  else {
    bVar2 = uVar1 == 8;
    while (bVar2) {
      F_00e1c660(this GEN_EDX_ARG);
      uVar1 = F_00e25a70(this + 0x30 GEN_EDX_ARG);
      if (uVar1 == 6) {
        F_00e1c720(this GEN_EDX_ARG);
        return 1;
      }
      if (uVar1 != 8) {
        if (uVar1 != 0xb) {
          return 6;
        }
        uVar1 = F_00e25a70(this + 0x30 GEN_EDX_ARG);
        F_00e1c720(this GEN_EDX_ARG);
        return (uint)(uVar1 != 6) * 4 + 2;
      }
      F_00e1c660(this GEN_EDX_ARG);
      uVar1 = F_00e25a70(this + 0x30 GEN_EDX_ARG);
      if (uVar1 != 9) {
        return 6;
      }
      uVar1 = F_00e25a70(this + 0x30 GEN_EDX_ARG);
      bVar2 = uVar1 == 10;
    }
  }
  return 6;
}

/* ref: FUN_00e1c8f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1c8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1c8f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00e25a70(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD);
  if (uVar1 == 8) {
    while( true ) {
      F_00e1c660(this GEN_EDX_ARG);
      uVar1 = F_00e25a70(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
      if (uVar1 == 7) {
        F_00e1c720(this GEN_EDX_ARG);
        return 0;
      }
      if (uVar1 != 8) break;
      F_00e1c660(this GEN_EDX_ARG);
      uVar1 = F_00e25a70(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
      if (uVar1 != 9) {
        return 6;
      }
      uVar1 = F_00e25a70(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
      if (uVar1 != 10) {
        return 6;
      }
    }
  }
  return 6;
}

/* ref: hkXmlStreamParser::ParseNext */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1c950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1c950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined4 *)(this + 0x1c) = 0;
  F_00da3cd0(this + 8 GEN_EDX_FWD);
  F_00e1bc80(this + 0x38 GEN_EDX_ARG);
  *(undefined4 *)(this + 0x6c) = 0;
  uVar1 = F_00e25a70(this + 0x30 GEN_EDX_ARG);
  while (uVar1 < 6) {
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
      uVar1 = F_00e1c830(this GEN_EDX_ARG);
      return uVar1;
    case 1: ;
      uVar1 = F_00e1c8f0(this GEN_EDX_ARG);
      return uVar1;
    case 2: ;
      return 4;
    case 3: ;
      return 5;
    case 4: ;
      uVar1 = F_00e25a70(this + 0x30 GEN_EDX_ARG);
      break;
    case 5: ;
      return 7;
    }
  }
  return 6;
}

/* ref: hkXmlStreamParser::Advance */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1c9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1c9e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00e1c950(this GEN_EDX_FWD);
  *(uint *)(this + 0x74) = uVar1;
  return uVar1;
}

/* ref: hkXmlStreamParser::Dump */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1c9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  undefined * puVar3;
  
  do {
    uVar1 = F_00e1c9e0(this GEN_EDX_FWD);
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
      F_00d9fe80(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114e68c));
      F_00e1c4e0(this,param_1);
      F_00d9fe80(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114e688));
      break;
    case 1: ;
    case 2: ;
      F_00d9fe80(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1126164));
      F_00e1c4e0(this,param_1);
      if (uVar1 == 2) {
        F_00d9fe80(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1080808));
      }
      F_00d9fe80(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114d124));
      break;
    case 3: ;
      puVar3 = &REFG(undefined, 0x114d124);
      uVar1 = F_00e1c480(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
      uVar2 = F_00d9fe80(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114e684));
      this_00 = ((undefined *)GEN_TOP(F_0105a4c0(uVar2,uVar1)));
      F_00d9fe80(this_00 GEN_EDX_ARG,puVar3);
      break;
    case 4: ;
    case 5: ;
      uVar1 = F_00e1c4c0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      F_0105a4c0(param_1,uVar1);
      break;
    case 6: ;
    case 7: ;
      return 0;
    }
  } while( true );
}

/* ref: FUN_00e1caf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1caf0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1caf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e1cb20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1cb20(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1cb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e1cb30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1cb30(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1cb30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e1cb80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1cb80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1cb80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x14))) + *((int *)GEN_TOP(((int)this + 8)));
  *param_1 = iVar1 + param_2;
  param_1[1] = iVar1 + param_3;
  return (uint)param_1;
}

/* ref: FUN_00e1cba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1cba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1cba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
  *param_1 = *((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x14)));
  param_1[1] = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00e1cbd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1cbd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1cbd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x10)));
  *param_1 = iVar1 + param_2;
  param_1[1] = iVar1 + param_3;
  return (uint)param_1;
}

/* ref: hkArray::ExpandOne_00e1cc10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1cc10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1cc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: hkArray::ExpandOneDefault */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1cc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1cc50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: Global::DeleteReferencedObject2 */
GEN_LIB GEN_FRAME uint F_00e1cc80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1cc80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkXmlStreamParser::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1ccb0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1ccb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00df5bb0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e1ccf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1ccf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1ccf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(uint *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return param_1;
}

/* ref: FUN_00e1cd10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1cd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1cd10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 100))))(*(int * PTR32 *)this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 4))),&(*(undefined4 *)(gen_frame + 0x0)));
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: hkDataWorldNative::vf12 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1cd40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: hkDataWorldNative::vf13 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cd50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1cd50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: hkDataWorldNative::vf14 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1cd60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: hkDataWorldNative::vf15 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1cd70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: hkDataWorldNative::vf18 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1cd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: hkDataWorldNative::vf19 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1cd90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: hkDataWorldNative::vf20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1cda0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: hkDataWorldNative::vf21 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1cdb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: hkDataWorldNative::vf22 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cdc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1cdc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: hkDataWorldNative::vf17 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cdd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1cdd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: hkDataWorldNative::vf23 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1cde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1cde0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: hkDataWorldNative::vf16 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe1cdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return;
}

/* ref: FUN_00e1ce00 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1ce00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1ce00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x18))))(*(int * PTR32 *)this GEN_EDX_FWD);
  iVar2 = 0;
  if (0 < (int)uVar1) {
    iVar3 = 0;
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x1c))))(*(int * PTR32 *)this GEN_EDX_ARG,iVar2,*param_1 + iVar3);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < (int)uVar1);
  }
  return 0;
}

/* ref: hkDataClass::GetClassInfo */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1ce50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1ce50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  uint * puVar6;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = this;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 8))))(*(int * PTR32 *)this GEN_EDX_FWD);
  *param_1 = uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0xc))))(*(int * PTR32 *)this GEN_EDX_ARG);
  param_1[1] = uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this GEN_EDX_ARG);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
  }
  param_1[2] = uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x18))))(*(int * PTR32 *)this GEN_EDX_ARG);
  puVar6 = param_1 + 3;
  if ((int)(param_1[5] & 0x3fffffff) < (int)uVar1) {
    uVar3 = (param_1[5] & 0x3fffffff) * 2;
    if ((int)uVar3 <= (int)uVar1) {
      uVar3 = uVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),puVar6,uVar3,0xc);
  }
  iVar4 = 0;
  if (uVar1 != param_1[4] && -1 < (int)(uVar1 - param_1[4])) {
    do {
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uVar1 - param_1[4]));
  }
  iVar4 = 0;
  param_1[4] = uVar1;
  if (0 < (int)uVar1) {
    param_1 = ((uint *)GEN_TOP(0x0));
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x10)))) + 0x1c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x10)))) GEN_EDX_ARG,iVar4,&(*(undefined4 *)(gen_frame + 0x0)));
      puVar5 = ((undefined4 *)GEN_TOP((*puVar6 + (int)param_1)));
      param_1 = ((uint *)GEN_TOP(((int)param_1 + 0xc)));
      iVar4 = iVar4 + 1;
      *puVar5 = (*(undefined4 *)(gen_frame + 0x0));
      puVar5[1] = (*(undefined4 *)(gen_frame + 0x8));
    } while (iVar4 < (int)uVar1);
  }
  return 0;
}

/* ref: FUN_00e1cf50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1cf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe1cf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c))))(this GEN_EDX_FWD)));
  if (param_4 == 0) {
    uVar2 = F_00e1a800(this_00 GEN_EDX_ARG,param_3);
    uVar1 = uVar2;
  }
  else {
    (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
    (*(uint *)(gen_frame + 0x8)) = 0x80000080;
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    ((undefined1 *)(gen_frame + 0xc))[0] = 0;
    F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_3,0xffffffff);
    F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x11186a8),0xffffffff);
    F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_4,0xffffffff);
    F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1118a38),0xffffffff);
    uVar1 = F_00e1a800(this_00 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    uVar2 = (*(uint *)(gen_frame + 0x8));
    if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
    }
    (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)GEN_TOP(0x0));
    (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  }
  if (uVar1 != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x40))))(this GEN_EDX_ARG,param_1,param_2,uVar1,param_5);
  }
  return uVar2;
}

/* ref: Global::AssignValueToObject */
GEN_LIB GEN_FRAME uint F_00e1d060(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe1d060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int * piVar1;
  undefined4 * in_ecx;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  float10 extraout_ST0;
  
  in_ecx = ((undefined4 *)GEN_TOP(F_00e1cd10(param_3 GEN_EDX_ARG)));
  switch((unsigned int)(uintptr_t)(*in_ecx)) {
  case 2: ;
  case 4: ;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_3)) + 0x30))))(((int *)GEN_TOP(*param_3)) GEN_EDX_ARG,param_3[1]);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x44))))(param_1 GEN_EDX_ARG,param_2,uVar3);
    return uVar3;
  case 3: ;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_3)) + 0x3c))))(((int *)GEN_TOP(*param_3)),param_3[1]);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x50))))
                      (param_1 GEN_EDX_ARG,param_2,(undefined4)gen_fl2bits((float)extraout_ST0));
    return uVar3;
  case 5: ;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_3)) + 0x2c))))(((int *)GEN_TOP(*param_3)) GEN_EDX_ARG,param_3[1]);
    in_ecx = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x54))))(param_1 GEN_EDX_ARG,param_2,uVar3)));
    break;
  case 6: ;
  case 7: ;
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_3)) + 0x34))))(((int *)GEN_TOP(*param_3)) GEN_EDX_ARG,param_3[1])));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) + 1;
      puVar2[2] = puVar2[2] + 1;
    }
    in_ecx = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x5c))))(param_1 GEN_EDX_ARG,param_2,puVar2)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      in_ecx = ((undefined4 *)GEN_TOP(0xffffffff));
      *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) - 1;
      piVar1 = puVar2 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
        return uVar3;
      }
    }
    break;
  case 8: ;
    break;
  case 9: ;
    if (*((int *)GEN_TOP(in_ecx[1])) == 3) {
      uVar3 = F_00e19c70(in_ecx GEN_EDX_ARG);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_3)) + 0x38))))(((int *)GEN_TOP(*param_3)) GEN_EDX_ARG,param_3[1],uVar3);
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x48))))(param_1 GEN_EDX_ARG,param_2,uVar4,uVar3);
      return uVar3;
    }
    break;
  default: ;
    goto switchD_00e1d07e_default;
  }
switchD_00e1d07e_default: ;
  return (uint)in_ecx;
}

/* ref: Global::AssignValueToArrayItem */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1d1b0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe1d1b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  float10 extraout_ST0;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  if ((*piVar1 == 9) && (*((int *)GEN_TOP(piVar1[1])) != 3)) {
switchD_00e1d1e9_caseD_8: ;
    puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(param_3)) + 0x28))))(*((int * PTR32 *)GEN_TOP(param_3)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_3 + 4))))));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar3 + 6))) = *((short *)GEN_TOP(((int)puVar3 + 6))) + 1;
      puVar3[2] = puVar3[2] + 1;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x68))))(param_1 GEN_EDX_ARG,param_2,puVar3)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      piVar2 = ((int *)GEN_TOP(0xffffffff));
      *((short *)GEN_TOP(((int)puVar3 + 6))) = *((short *)GEN_TOP(((int)puVar3 + 6))) - 1;
      piVar1 = puVar3 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
        return uVar4;
      }
    }
  }
  else {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    piVar2 = ((int *)GEN_TOP((*piVar2 - 2)));
    switch((unsigned int)(uintptr_t)(piVar2)) {
    case 0x0: ;
    case 0x2: ;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(param_3)) + 0x30))))(*((int * PTR32 *)GEN_TOP(param_3)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_3 + 4))))
      ;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x50))))(param_1 GEN_EDX_ARG,param_2,uVar4);
      return uVar4;
    case 0x1: ;
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(param_3)) + 0x3c))))(*((int * PTR32 *)GEN_TOP(param_3)),*((undefined4 *)GEN_TOP((param_3 + 4))));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x40))))
                        (param_1 GEN_EDX_ARG,param_2,(undefined4)gen_fl2bits((float)extraout_ST0));
      return uVar4;
    case 0x3: ;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(param_3)) + 0x2c))))(*((int * PTR32 *)GEN_TOP(param_3)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_3 + 4))))
      ;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x38))))(param_1 GEN_EDX_ARG,param_2,uVar4);
      return uVar4;
    case 0x4: ;
    case 0x5: ;
      puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(param_3)) + 0x34))))
                         (*((int * PTR32 *)GEN_TOP(param_3)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_3 + 4))))));
      if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar3 + 6))) = *((short *)GEN_TOP(((int)puVar3 + 6))) + 1;
        puVar3[2] = puVar3[2] + 1;
      }
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x60))))(param_1 GEN_EDX_ARG,param_2,puVar3)));
      if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
        piVar2 = ((int *)GEN_TOP(0xffffffff));
        *((short *)GEN_TOP(((int)puVar3 + 6))) = *((short *)GEN_TOP(((int)puVar3 + 6))) - 1;
        piVar1 = puVar3 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
          return uVar4;
        }
      }
      break;
    case 0x6: ;
      goto switchD_00e1d1e9_caseD_8;
    case 0x7: ;
      piVar2 = ((int *)GEN_TOP(piVar1[1]));
      if (*piVar2 == 3) {
        uVar4 = F_00e19c70(piVar1 GEN_EDX_ARG);
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(param_3)) + 0x38))))
                          (*((int * PTR32 *)GEN_TOP(param_3)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_3 + 4))),uVar4);
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_ARG,param_2,uVar4)));
      }
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00e1d370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1d370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1d370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: Global::FillPairs */
GEN_LIB GEN_FRAME unsigned int F_00e1d390(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe1d390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: hkRelocationInfo::ApplyLocalAndGlobal */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1d3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1d3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 4)))) {
    do {
      iVar1 = iVar2 * 8;
      iVar3 = iVar2 * 8;
      iVar2 = iVar2 + 1;
      *((int *)GEN_TOP((param_1 + *((int *)GEN_TOP((*(int *)this + iVar3)))))) =
           *((int *)GEN_TOP((*(int *)this + 4 + iVar1))) + param_1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 4))));
  }
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      *((undefined4 *)GEN_TOP((param_1 + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar3)))))) =
           *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 4 + iVar3)));
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x10))));
  }
  return 0;
}

/* ref: hkRelocationInfo::AddImport */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1d410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1d410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  uint local_8;
  
  if (*((int *)GEN_TOP(((int)this + 0x30))) == 0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 4))))
                               (*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,0x10)));
    if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
      pvVar4 = ((undefined *)GEN_TOP(0x0));
    }
    else {
      local_8 = local_8 & 0xffffff00;
      F_00da3de0(pvVar4 GEN_EDX_ARG,local_8);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0x30))) = pvVar4;
  }
  uVar2 = (*(undefined4 *)&gen_args[1]);
  pvVar4 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x30)));
  uVar5 = F_00da3ae0(pvVar4 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
  F_00da3e40(pvVar4 GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[1]) + 3,uVar5);
  if ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 3)) == '\0') {
    uVar6 = F_00da0f10(uVar2,&REFG(undefined * PTR32, 0x13516ac));
    F_00da3a20(pvVar4 GEN_EDX_ARG,uVar6,0);
  }
  else {
    uVar6 = F_00da3990(pvVar4 GEN_EDX_ARG,uVar5);
    F_00da39d0(pvVar4 GEN_EDX_ARG,uVar5,0);
  }
  if (*((uint *)GEN_TOP(((int)this + 0x28))) == (*((uint *)GEN_TOP(((int)this + 0x2c))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x24))),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + *((int *)GEN_TOP(((int)this + 0x28))) * 8)));
  *puVar1 = (*(undefined4 *)&gen_args[0]);
  puVar1[1] = uVar6;
  *((int *)GEN_TOP(((int)this + 0x28))) = *((int *)GEN_TOP(((int)this + 0x28))) + 1;
  return (uint)puVar1;
}

/* ref: hkRelocationInfo::~hkRelocationInfo */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1d4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1d4f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  LPVOID pvVar1;
  uint uVar2;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x30)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00df5070(this_00 GEN_EDX_FWD);
    F_00da3e20(this_00 GEN_EDX_ARG);
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,this_00,0x10);
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x2c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x24))),uVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x18))),uVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar2 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: hkArray::PushBack8WithAllocator */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1d5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1d5f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: hkArray::PushBack8_00e1d630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1d630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1d630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: Global::RouterAllocate */
GEN_LIB GEN_FRAME uint F_00e1d670(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1d670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00e1d690 */
GEN_LIB GEN_FRAME unsigned int F_00e1d690(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1d690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: hkStringMap::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1d6c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1d6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00df5070(param_1 GEN_EDX_FWD);
  F_00da3e20(param_1 GEN_EDX_ARG);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00e1d740 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1d740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1d740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x114e6ac));
  uVar1 = F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkPlatformObjectWriter::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1d770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1d770u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,param_2,param_3);
  return (uint)(uVar1 != param_3);
}

/* ref: FUN_00e1d7a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1d7a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1d7a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 8))) + 0xc;
}

/* ref: FUN_00e1d7b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1d7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1d7b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(uint *)&gen_args[0]);
  uVar1 = F_00dbd9c0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,(*(uint *)&gen_args[0]),&(*(uint *)&gen_args[0]));
  if (uVar1 == 0) {
    return (*(uint *)&gen_args[0]);
  }
  uVar2 = F_00e25db0(uVar2,&REFG(undefined, 0x15da330),((undefined *)GEN_TOP(((int)this + 8))),0,0,0);
  if (*((uint *)GEN_TOP(((int)this + 0x24))) == (*((uint *)GEN_TOP(((int)this + 0x28))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x20))),4);
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + *((int *)GEN_TOP(((int)this + 0x24))) * 4))) = uVar2;
  *((int *)GEN_TOP(((int)this + 0x24))) = *((int *)GEN_TOP(((int)this + 0x24))) + 1;
  F_00e05b60((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,uVar2,(int)this + 0x14,1);
  return uVar2;
}

/* ref: hkPlatformObjectWriter::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1d840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe1d840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0x50, 0, 4);
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  undefined * phVar3;
  char * pcVar4;
  undefined4 uVar5;
  
  this_00 = *(undefined * PTR32 *)(this + 0xc);
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    (*(uint *)(gen_frame + 0x48)) = (*(uint *)&gen_args[2]);
  }
  else {
    uVar2 = F_00e1d7a0(this GEN_EDX_FWD);
    uVar2 = F_00e1d7b0(this_00 GEN_EDX_ARG,(*(uint *)&gen_args[2]),uVar2);
    (*(uint *)(gen_frame + 0x48)) = uVar2;
  }
  F_0105aa30(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
  phVar3 = (*(undefined * PTR32 *)&gen_args[0]);
  if (*(int *)(this + 0xc) != 0) {
    pcVar4 = ((char *)REFP(0x113ba6c));
    uVar2 = F_00d92610((*(uint *)(gen_frame + 0x48)) GEN_EDX_ARG);
    uVar2 = F_00da0d20(uVar2,pcVar4);
    if (uVar2 == 0) {
      uVar2 = F_00e1d7a0(this GEN_EDX_ARG);
      uVar2 = F_00e1d7b0(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_ARG,&REFG(undefined, 0x15da330),uVar2);
      (*(uint *)(gen_frame + 0x48)) = uVar2;
      uVar2 = F_00e1d7a0(this GEN_EDX_ARG);
      uVar2 = F_00e1d7b0(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),uVar2);
      (*(uint *)(gen_frame + 0x44)) = uVar2;
      uVar5 = 0;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      F_0105a9d0(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,uVar2,uVar5);
      piVar1 = *(int * PTR32 *)(this + 8);
      (*(undefined4 *)(gen_frame + 0x8)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x14)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x20)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)),(*(uint *)&gen_args[2]),(*(undefined * PTR32 *)&gen_args[0]),(*(uint *)(gen_frame + 0x48)),&(*(undefined4 *)(gen_frame + 0x0)));
      phVar3 = ((undefined1 *)(gen_frame + 0x34));
      F_00e1d4f0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0xc))))
            (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(uint *)&gen_args[2]),phVar3,(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)&gen_args[3]));
  pcVar4 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)phVar3 + 0xc))))(phVar3 GEN_EDX_ARG,(int)&(*(uint *)&gen_args[2]) + 3)));
  return (uint)(*pcVar4 == '\0');
}

/* ref: FUN_00e1d980 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1d980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1d980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e6c4));
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e1d9c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1d9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1d9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e6c4));
  if (0 < *((int *)GEN_TOP(((int)this + 0x24)))) {
    do {
      F_00e25d30(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + iVar2 * 4))));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x24))));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x28)));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x20))),iVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0x80000000;
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  uVar1 = F_00dbdb20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00e1da60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1da60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1da60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  LPVOID pvVar1;
  undefined * pvVar2;
  uint uVar3;
  char * pcVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x114e6ac));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                             (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x18)));
  *((undefined2 *)GEN_TOP(((int)pvVar2 + 4))) = 0x18;
  F_00e05640(&(*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined4, 0x135491c));
  uVar3 = F_00e26520(pvVar2 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),param_1,param_3);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar3;
  pcVar4 = ((char *)GEN_TOP(F_00e1d7a0(this GEN_EDX_ARG)));
  if ((((*pcVar4 == (char)REFG(undefined4, 0x135491c)) && (pcVar4[1] == (char)((uint)REFG(undefined4, 0x135491c) >> 8))) &&
      (pcVar4[2] == (*(undefined1 *)((char *)&REFG(undefined4, 0x135491c) + 2)))) && (pcVar4[3] == (*(undefined1 *)((char *)&REFG(undefined4, 0x135491c) + 3)))) {
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    return (uint)this;
  }
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_2 GEN_EDX_ARG);
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) = param_2;
    return (uint)this;
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                             (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x2c)));
  *((undefined2 *)GEN_TOP(((int)pvVar2 + 4))) = 0x2c;
  uVar3 = F_00e1d980(pvVar2 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar3;
  return (uint)this;
}

/* ref: hkPointerMap::Get */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1db50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1db50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd9c0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),&(*(undefined4 *)&gen_args[0]));
  if (uVar1 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[0]);
    return 0;
  }
  return 1;
}

/* ref: Global::DeallocateReferencedObject */
GEN_LIB GEN_FRAME uint F_00e1dba0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1dba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: Global::AllocateReferencedObject */
GEN_LIB GEN_FRAME uint F_00e1dbd0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1dbd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: Global::AllocateReferencedObject2 */
GEN_LIB GEN_FRAME uint F_00e1dc00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1dc00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: Global::DeallocateReferencedObject2 */
GEN_LIB GEN_FRAME uint F_00e1dc30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1dc30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkPlatformObjectWriter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1dc80(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1dc80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e1d740(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e1dcc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1dcc0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1dcc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e1dd20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1dd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1dd20u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e1dd60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1dd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1dd60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e1dda0 */
GEN_LIB GEN_FRAME uint F_00e1dda0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1dda0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkPlatformObjectWriter::Cache::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1ddd0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1ddd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e1d9c0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: Global::GetSpecialFloat */
GEN_LIB GEN_FRAME float F_00e1de10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1de10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return gen_bits2f((&REFG(float, 0x114e724))[(int)(param_1)]);
}

/* ref: Global::ClassifyFloat */
GEN_LIB GEN_FRAME uint F_00e1de20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1de20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  if ((param_1 & 0x7f800000) != 0x7f800000) {
    return 5;
  }
  if (param_1 == 0x7f800000) {
    return 1;
  }
  if (param_1 == 0xff800000) {
    return 0;
  }
  if (param_1 == 0xffc00000) {
    return 4;
  }
  return ~(param_1 >> 0x1f) & 1 | 2;
}

/* ref: Global::FormatFloat */
GEN_LIB GEN_FRAME uint F_00e1de80(GEN_P(float param_1, float gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1de80u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e1de20((undefined4)gen_fl2bits(param_1));
  if (uVar1 == 5) {
    uVar1 = F_00da4890(param_2,&REFG(undefined, 0x114e73c),(int)(ulonglong)gen_d2bits((double)param_1),
                                (int)((ulonglong)gen_d2bits((double)param_1) >> 0x20));
    return uVar1;
  }
  uVar1 = F_00da46f0(param_2 GEN_EDX_ARG,(&REFG(undefined * PTR32, 0x114e70c))[(int)(uVar1)]);
  return uVar1;
}

/* ref: Global::FormatFloatWithPoint */
GEN_LIB GEN_FRAME uint F_00e1ded0(GEN_P(float param_1, float gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1ded0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e1de20((undefined4)gen_fl2bits(param_1));
  if (uVar1 == 5) {
    F_00da4890(param_2,&REFG(undefined, 0x114e73c),(int)(ulonglong)gen_d2bits((double)param_1),
                        (int)((ulonglong)gen_d2bits((double)param_1) >> 0x20));
    uVar1 = F_00da4230(param_2 GEN_EDX_ARG,0x2e,0,0x7fffffff);
    if (uVar1 == 0xffffffff) {
      uVar1 = F_00da4d70(param_2 GEN_EDX_ARG,&REFG(undefined, 0x114e740));
    }
    return uVar1;
  }
  uVar1 = F_00da46f0(param_2 GEN_EDX_ARG,(&REFG(undefined * PTR32, 0x114e70c))[(int)(uVar1)]);
  return uVar1;
}

/* ref: Global::ParseFloat */
GEN_LIB GEN_FRAME uint F_00e1df40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1df40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x48, 8, 4);
  char * pcVar1;
  char * pcVar2;
  undefined4 * this;
  char * pcVar3;
  int iVar4;
  float fVar5;
  
  this = (*(undefined4 * PTR32 *)&gen_args[0]);
  pcVar3 = ((char *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[0])[1]));
  pcVar1 = ((char *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
  pcVar2 = pcVar1;
  if (0x40 < (int)pcVar3 - (int)pcVar1) {
    return 1;
  }
  while( true ) {
    if (pcVar3 <= pcVar2) {
      F_00da0e40(((undefined1 *)(gen_frame + 0x0)),pcVar1,(int)pcVar3 - (int)pcVar1);
      ((undefined1 *)(gen_frame + 0x0))[(int)((int)pcVar3 - (int)pcVar1)] = 0;
      fVar5 = F_00da0ec0(((undefined1 *)(gen_frame + 0x0)));
      *(*(float * PTR32 *)&gen_args[1]) = fVar5;
      return 0;
    }
    if (*pcVar2 == '#') break;
    pcVar2 = pcVar2 + 1;
  }
  iVar4 = 0;
  do {
    pcVar3 = ((char *)GEN_TOP(F_0105a5b0(this GEN_EDX_ARG,(int)&(*(undefined4 * PTR32 *)&gen_args[0]) + 3,(&REFG(undefined * PTR32, 0x114e70c))[(int)(iVar4)])));
    if (*pcVar3 != '\0') {
      *(*(float * PTR32 *)&gen_args[1]) = gen_bits2f((&REFG(float, 0x114e724))[(int)(iVar4)]);
      return 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  return 1;
}

/* ref: Global::FloatsEqual */
GEN_LIB GEN_FRAME uint F_00e1dff0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xe1dff0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00e1de20((undefined4)gen_fl2bits(param_2));
  uVar2 = F_00e1de20((undefined4)gen_fl2bits(param_3));
  if (uVar1 != uVar2) {
    *param_1 = 0;
    return (uint)param_1;
  }
  if ((uVar1 == 5) &&
     ((GEN_ISNAN(param_2) || GEN_ISNAN(param_3)) == ((GEN_ISNAN(param_2) || GEN_ISNAN(param_3)) || param_2 == param_3))) {
    *param_1 = 0;
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: Global::ReadAlignedString */
GEN_LIB GEN_FRAME uint F_00e1e050(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1e050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = ((char *)GEN_TOP((param_1 + *param_2)));
  uVar3 = 0;
  cVar1 = *pcVar2;
  while (cVar1 != '\0') {
    uVar3 = uVar3 + 1;
    cVar1 = pcVar2[uVar3];
  }
  do {
    uVar3 = uVar3 + 1;
  } while ((uVar3 & 3) != 0);
  *param_2 = *param_2 + uVar3;
  return (uint)pcVar2;
}

/* ref: hkPackfileSectionHeader::GetExports */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1e080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1e080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *((uint *)GEN_TOP(((int)this + 0x24)));
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x28)));
  iVar1 = uVar5 + param_1;
  (*(int *)(gen_frame + 0x0)) = 0;
  if (uVar3 != uVar5 && -1 < (int)(uVar3 - uVar5)) {
    do {
      uVar3 = F_00e1e1c0(iVar1,&(*(int *)(gen_frame + 0x0)));
      if (uVar3 == 0xffffffff) {
        return 0xffffffff;
      }
      uVar4 = F_00e1e050(iVar1,&(*(int *)(gen_frame + 0x0)));
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,8);
      }
      puVar2 = ((uint *)GEN_TOP((*param_2 + param_2[1] * 8)));
      uVar5 = param_2[1] + 1;
      param_2[1] = uVar5;
      *puVar2 = uVar4;
      puVar2[1] = uVar3 + param_1;
    } while ((*(int *)(gen_frame + 0x0)) < *((int *)GEN_TOP(((int)this + 0x28))) - *((int *)GEN_TOP(((int)this + 0x24))));
  }
  return uVar5;
}

/* ref: hkPackfileSectionHeader::GetImports */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1e120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1e120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *((uint *)GEN_TOP(((int)this + 0x28)));
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x2c)));
  iVar1 = uVar5 + param_1;
  (*(int *)(gen_frame + 0x0)) = 0;
  if (uVar3 != uVar5 && -1 < (int)(uVar3 - uVar5)) {
    do {
      uVar3 = F_00e1e1c0(iVar1,&(*(int *)(gen_frame + 0x0)));
      if (uVar3 == 0xffffffff) {
        return 0xffffffff;
      }
      uVar4 = F_00e1e050(iVar1,&(*(int *)(gen_frame + 0x0)));
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,8);
      }
      puVar2 = ((uint *)GEN_TOP((*param_2 + param_2[1] * 8)));
      uVar5 = param_2[1] + 1;
      param_2[1] = uVar5;
      *puVar2 = uVar4;
      puVar2[1] = uVar3 + param_1;
    } while ((*(int *)(gen_frame + 0x0)) < *((int *)GEN_TOP(((int)this + 0x2c))) - *((int *)GEN_TOP(((int)this + 0x28))));
  }
  return uVar5;
}

/* ref: Global::ReadUint32 */
GEN_LIB GEN_FRAME uint F_00e1e1c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1e1c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  return *((uint *)GEN_TOP((iVar1 + param_1)));
}

/* ref: hkArray::ExpandOne8WithAllocator */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1e220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1e220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: hkArray::ExpandOne8WithAllocator2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1e260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1e260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: hkArray::ExpandOne8_00e1e2a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1e2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1e2a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

