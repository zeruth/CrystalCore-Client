#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Global::EqualIstreambufIterator */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00eb6af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb6af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*((char *)GEN_TOP(((int)this + 4))) == '\0') {
    piVar1 = *(int * PTR32 *)this;
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
LAB_00eb6b2b: ;
      *(undefined4 *)this = 0;
    }
    else {
      if ((*((int *)GEN_TOP(piVar1[8])) == 0) || (*((int *)GEN_TOP(piVar1[0xc])) < 1)) {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_FWD);
      }
      else {
        uVar2 = (uint)**((byte * PTR32 *)GEN_TOP(piVar1[8]));
      }
      if (uVar2 == 0xffffffff) goto LAB_00eb6b2b;
      *((char *)GEN_TOP(((int)this + 5))) = (char)uVar2;
    }
    *((undefined1 *)GEN_TOP(((int)this + 4))) = 1;
  }
  if ((char)param_1[1] != '\0') goto LAB_00eb6b76;
  piVar1 = ((int *)GEN_TOP(*param_1));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
LAB_00eb6b6c: ;
    *param_1 = 0;
  }
  else {
    if ((*((int *)GEN_TOP(piVar1[8])) == 0) || (*((int *)GEN_TOP(piVar1[0xc])) < 1)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG);
    }
    else {
      uVar2 = (uint)**((byte * PTR32 *)GEN_TOP(piVar1[8]));
    }
    if (uVar2 == 0xffffffff) goto LAB_00eb6b6c;
    *((char *)GEN_TOP(((int)param_1 + 5))) = (char)uVar2;
  }
  *(undefined1 *)(param_1 + 1) = 1;
LAB_00eb6b76: ;
  if (*(int *)this == 0) {
    if (*param_1 == 0) {
      return 1;
    }
  }
  else if (*param_1 != 0) {
    return 1;
  }
  return 0;
}

/* ref: Global::Numpunct */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb6ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xeb6ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x115d078));
  F_00eb6750(this GEN_EDX_FWD,param_1,param_3);
  return (uint)this;
}

/* ref: numpunct_G_std::DoDecimalPoint */
GEN_LIB GEN_NOFRAME ushort GEN_THISCALL F_00eb6bd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb6bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: numpunct_G_std::DoThousandsSep */
GEN_LIB GEN_NOFRAME ushort GEN_THISCALL F_00eb6be0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb6be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 0xe)));
}

/* ref: FUN_00eb6bf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb6bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb6bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x115d078));
  F_00406b30(*((undefined4 *)GEN_TOP(((int)this + 8))));
  F_00406b30(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
  uVar1 = F_00406b30(*((undefined4 *)GEN_TOP(((int)this + 0x14))));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  return (uint)uVar1;
}

/* ref: numpunct_G_std::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb6c20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb6c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x115d078));
  F_00406b30(param_1[2]);
  F_00406b30(param_1[4]);
  F_00406b30(param_1[5]);
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00eb6c80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb6c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb6c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00eaeac0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00eb6ca0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb6ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb6ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00eaeb50(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::PairIteratorBool_00eb6cb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb6cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb6cb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::PairIteratorBool2_00eb6cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb6cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb6cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::FillBytes_00eb6cf0 */
GEN_LIB GEN_FRAME unsigned int F_00eb6cf0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xeb6cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined1 * puVar2;
  
  puVar2 = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  return 0;
}

/* ref: Global::PairIteratorBool3_00eb6d10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb6d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb6d10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::PairIteratorBool4_00eb6d30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb6d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb6d30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::ScalarDeletingDestructor_00eb6d50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb6d50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb6d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_FWD);
  F_0042c880(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::ScalarDeletingDestructorJsonPair */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb6d80(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb6d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)param_1 + 0x58))) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20(((undefined *)GEN_TOP(((int)param_1 + 0x58))) GEN_EDX_FWD);
  F_0042c880(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00eb6dc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb6dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb6dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0xb8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 0x2d) = 0;
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: Global::ConstructJsonPair */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00eb6e10(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb6e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)param_1 + 0x58))) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x60))) = 0;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x68))) = 0;
    F_00ea7d20(((undefined *)GEN_TOP(((int)param_1 + 0x58))) GEN_EDX_ARG,param_2 + 0x58);
  }
  return;
}

/* ref: Global::DestroyViaVirtual */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00eb6e50(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeb6e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: Global::ConstructPair_00eb6e70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb6e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb6e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_2);
  return (uint)this;
}

/* ref: FUN_00eb6ea0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb6ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb6ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * piVar1;
  uint extraout_EAX = 0;
  
  piVar1 = ((undefined *)GEN_TOP(((int)this + 0x60)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP((piVar1 + *((int *)GEN_TOP((*(int *)this + 4))) - 0x60))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d014));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD);
  F_00479ae0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((piVar1 + *((int *)GEN_TOP((*(int *)this + 4))) - 0x60))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1159a68));
  *((undefined * PTR32 * PTR32 *)GEN_TOP((piVar1 + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) - 0x50))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP((piVar1 + *((int *)GEN_TOP((*(int *)this + 4))) - 0x60))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  *(undefined * PTR32 * PTR32 *)piVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(piVar1);
  return extraout_EAX;
}

/* ref: Global::GetFacetCategory */
GEN_LIB GEN_FRAME uint F_00eb6f10(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb6f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  undefined * this;
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  
  bVar3 = false;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  if ((param_1 != ((uint *)GEN_TOP(0x0))) && (*param_1 == 0)) {
    this = ((undefined *)GEN_TOP(F_004069f0(0x20)));
    if (this == ((undefined *)GEN_TOP(0x0))) {
      uVar1 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP((*param_2 + 0x18)));
      bVar3 = true;
      if (iVar2 == 0) {
        iVar2 = *param_2 + 0x1c;
      }
      uVar4 = 0;
      uVar1 = F_0047dca0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,iVar2);
      uVar1 = F_00eaef10(this GEN_EDX_ARG,uVar1,uVar4);
    }
    *param_1 = uVar1;
    if (bVar3) {
      F_0047dd00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  return 2;
}

/* ref: FUN_00eb6f80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb6f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb6f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = F_00e68a50(this GEN_EDX_FWD,0,*((undefined4 *)GEN_TOP(((int)this + 0x10))),puVar1,param_1[4]);
  return uVar2;
}

/* ref: FUN_00eb6fb0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00eb6fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb6fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (param_1 != 0) {
    F_00eaf8e0(this GEN_EDX_FWD,*((uint *)GEN_TOP(((int)this + 0xc))) | param_1,(undefined1)param_2);
  }
  return;
}

/* ref: FUN_00eb6fd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb6fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb6fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  byte * pbVar2;
  uint uVar3;
  
  if (**((int * PTR32 *)GEN_TOP(((int)this + 0x20))) != 0) {
    if (1 < **((int * PTR32 *)GEN_TOP(((int)this + 0x30)))) {
      **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) - 1;
      pbVar2 = ((byte *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x20))) + 1)));
      **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) = (int)pbVar2;
      return (uint)*pbVar2;
    }
    if ((**((int * PTR32 *)GEN_TOP(((int)this + 0x20))) != 0) && (piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x30))), 0 < *piVar1))
    {
      *piVar1 = *piVar1 - 1;
      pbVar2 = ((byte *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x20)))));
      **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) = (int)(pbVar2 + 1);
      uVar3 = (uint)*pbVar2;
      goto LAB_00eb7020;
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_FWD);
LAB_00eb7020: ;
  if (uVar3 == 0xffffffff) {
    return 0xffffffff;
  }
  if ((**((int * PTR32 *)GEN_TOP(((int)this + 0x20))) != 0) && (0 < **((int * PTR32 *)GEN_TOP(((int)this + 0x30))))) {
    return (uint)*((byte *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x20)))));
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00eb7050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb7050(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb7050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  if (0xf < (uint)in_ecx[5]) {
    *param_2 = in_ecx[4] + *in_ecx;
    return (uint)param_2;
  }
  *param_2 = in_ecx[4] + (int)in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00eb7080 */
GEN_LIB GEN_FRAME uint F_00eb7080(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb7080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 == 0) {
    return 0;
  }
  return param_1 - param_2;
}

/* ref: Global::AdvanceIteratorBy */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb70a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xeb70a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *param_2 = *in_ecx + param_3;
  return (uint)param_2;
}

/* ref: Global::UseFacet */
GEN_LIB GEN_FRAME uint F_00eb70c0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb70c0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x15e38f4);
  if (REFG(undefined4, 0x15d67a0) == 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,0);
    if (REFG(undefined4, 0x15d67a0) == 0) {
      REFG(undefined4, 0x15d6788) = REFG(undefined4, 0x15d6788) + 1;
      REFG(undefined4, 0x15d67a0) = REFG(undefined4, 0x15d6788);
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  uVar4 = REFG(undefined4, 0x15d67a0);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  if (REFG(undefined4, 0x15d67a0) < *((uint *)GEN_TOP((iVar1 + 0xc)))) {
    uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 8))) + REFG(undefined4, 0x15d67a0) * 4)));
    if (uVar3 != 0) goto LAB_00eb71c1;
  }
  else {
    uVar3 = 0;
  }
  if (*((char *)GEN_TOP((iVar1 + 0x14))) == '\0') {
LAB_00eb7143: ;
    if (uVar3 != 0) goto LAB_00eb71c1;
  }
  else {
    uVar3 = F_00c45d58();
    if (uVar4 < *((uint *)GEN_TOP((uVar3 + 0xc)))) {
      uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 8))) + uVar4 * 4)));
      goto LAB_00eb7143;
    }
  }
  uVar4 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return uVar4;
  }
  uVar4 = F_00eb6f10(&(*(uint *)(gen_frame + 0x8)),piVar2);
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if (uVar4 == 0xffffffff) {
                    
    F_00c4c6c9();
  }
  REFG(undefined4, 0x15e38f4) = (*(uint *)(gen_frame + 0x8));
  F_00c45bc0((undefined *)&(*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0);
  if (*((int *)GEN_TOP((uVar3 + 4))) != -1) {
    *((int *)GEN_TOP((uVar3 + 4))) = *((int *)GEN_TOP((uVar3 + 4))) + 1;
  }
  F_00c45be8(&(*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  F_00c45ce1(uVar3);
LAB_00eb71c1: ;
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar3;
}

/* ref: Global::PutChars */
GEN_LIB GEN_FRAME uint F_00eb71e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(byte * param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xeb71e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(byte * param_5 = (byte *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  byte bVar1;
  int * piVar2;
  byte * pbVar3;
  uint uVar4;
  int iVar5;
  byte * pbVar6;
  
  pbVar6 = param_5;
  iVar5 = param_6;
  do {
    if (iVar5 == 0) {
      *param_2 = param_3;
      param_2[1] = param_4;
      return (uint)param_2;
    }
    if (param_4 == ((int *)GEN_TOP(0x0))) {
LAB_00eb722f: ;
      uVar4 = (uint)param_3 >> 8;
      param_3 = CONCAT31((int3)uVar4,1);
    }
    else {
      bVar1 = *pbVar6;
      if ((*((int *)GEN_TOP(param_4[9])) == 0) || (piVar2 = ((int *)GEN_TOP(param_4[0xd])), *piVar2 < 1)) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 0xc))))(param_4 GEN_EDX_ARG,(uint)bVar1);
      }
      else {
        *piVar2 = *piVar2 - 1;
        pbVar3 = *((byte * PTR32 *)GEN_TOP(param_4[9]));
        *((byte * PTR32 *)GEN_TOP(param_4[9])) = pbVar3 + 1;
        *pbVar3 = bVar1;
        uVar4 = (uint)bVar1;
      }
      if (uVar4 == 0xffffffff) goto LAB_00eb722f;
    }
    pbVar6 = pbVar6 + 1;
    iVar5 = iVar5 - 1;
  } while( true );
}

/* ref: Global::_Rep */
GEN_LIB GEN_FRAME uint F_00eb7250(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xeb7250u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  int * piVar1;
  byte * pbVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_6;
  do {
    if (iVar4 == 0) {
      *param_2 = param_3;
      param_2[1] = param_4;
      return (uint)param_2;
    }
    if (param_4 == ((int *)GEN_TOP(0x0))) {
LAB_00eb729c: ;
      uVar3 = (uint)param_3 >> 8;
      param_3 = CONCAT31((int3)uVar3,1);
    }
    else {
      if ((*((int *)GEN_TOP(param_4[9])) == 0) || (piVar1 = ((int *)GEN_TOP(param_4[0xd])), *piVar1 < 1)) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 0xc))))(param_4 GEN_EDX_ARG,(uint)param_5);
      }
      else {
        *piVar1 = *piVar1 - 1;
        pbVar2 = *((byte * PTR32 *)GEN_TOP(param_4[9]));
        *((byte * PTR32 *)GEN_TOP(param_4[9])) = pbVar2 + 1;
        *pbVar2 = param_5;
        uVar3 = (uint)param_5;
      }
      if (uVar3 == 0xffffffff) goto LAB_00eb729c;
    }
    iVar4 = iVar4 - 1;
  } while( true );
}

/* ref: Global::_Put */
GEN_LIB GEN_FRAME uint F_00eb72c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(byte * param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xeb72c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(byte * param_5 = (byte *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  byte bVar1;
  int * piVar2;
  byte * pbVar3;
  uint uVar4;
  int iVar5;
  byte * pbVar6;
  
  pbVar6 = param_5;
  iVar5 = param_6;
  do {
    if (iVar5 == 0) {
      *param_2 = param_3;
      param_2[1] = param_4;
      return (uint)param_2;
    }
    if (param_4 == ((int *)GEN_TOP(0x0))) {
LAB_00eb730f: ;
      uVar4 = (uint)param_3 >> 8;
      param_3 = CONCAT31((int3)uVar4,1);
    }
    else {
      bVar1 = *pbVar6;
      if ((*((int *)GEN_TOP(param_4[9])) == 0) || (piVar2 = ((int *)GEN_TOP(param_4[0xd])), *piVar2 < 1)) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 0xc))))(param_4 GEN_EDX_ARG,(uint)bVar1);
      }
      else {
        *piVar2 = *piVar2 - 1;
        pbVar3 = *((byte * PTR32 *)GEN_TOP(param_4[9]));
        *((byte * PTR32 *)GEN_TOP(param_4[9])) = pbVar3 + 1;
        *pbVar3 = bVar1;
        uVar4 = (uint)bVar1;
      }
      if (uVar4 == 0xffffffff) goto LAB_00eb730f;
    }
    pbVar6 = pbVar6 + 1;
    iVar5 = iVar5 - 1;
  } while( true );
}

/* ref: Global::_Putgrouped */
GEN_LIB GEN_FRAME uint F_00eb7330(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined * param_5, unsigned int gen_a4), GEN_P(gen_size32 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xeb7330u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_5 = (undefined *)(uintptr_t)gen_a4;)
  GEN_PIN(gen_size32 param_6 = (gen_size32)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 uVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  gen_size32 _MaxCount;
  gen_size32 sVar4;
  undefined * _Buf;
  
  _MaxCount = param_6;
  _Buf = param_5;
  while( true ) {
    pvVar2 = F_00c48f80(_Buf,0,_MaxCount);
    sVar4 = _MaxCount;
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      sVar4 = (int)pvVar2 - (int)_Buf;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00eb72c0(param_1,((undefined1 *)(gen_frame + 0x8)),param_3,param_4,_Buf,sVar4)));
    param_3 = *puVar3;
    param_4 = puVar3[1];
    if (_MaxCount - sVar4 == 0) break;
    if ((char)param_7 != '\0') {
      puVar3 = ((undefined4 *)GEN_TOP(F_00eb7250(param_1,((undefined1 *)(gen_frame + 0x0)),*puVar3,puVar3[1],(char)param_7,1)));
      param_3 = *puVar3;
      param_4 = puVar3[1];
    }
    _Buf = ((undefined *)GEN_TOP(((int)_Buf + sVar4 + 1)));
    _MaxCount = (_MaxCount - sVar4) - 1;
  }
  uVar1 = *puVar3;
  param_2[1] = puVar3[1];
  *param_2 = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00eb73d0 */
GEN_LIB GEN_FRAME uint F_00eb73d0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb73d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  undefined4 * puVar1;
  int iVar2;
  bool bVar3;
  undefined8 _Var4;
  
  bVar3 = false;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  if ((param_1 != ((int *)GEN_TOP(0x0))) && (*param_1 == 0)) {
    puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x10)));
    if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar1 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      iVar2 = *((int *)GEN_TOP((*param_2 + 0x18)));
      bVar3 = true;
      if (iVar2 == 0) {
        iVar2 = *param_2 + 0x1c;
      }
      F_0047dca0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,iVar2);
      puVar1[1] = 0;
      *puVar1 = (*(undefined * PTR32 (*)[9])REFP(0x115cb34));
      _Var4 = F_01051073();
      *(undefined *)(puVar1 + 2) = _Var4;
    }
    *param_1 = (int)puVar1;
    if (bVar3) {
      F_0047dd00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  return 4;
}

/* ref: FUN_00eb7450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb7450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xeb7450u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x115d094));
  F_00eafca0(this GEN_EDX_FWD,param_1,(undefined1)param_3);
  return (uint)this;
}

/* ref: numpunct_D_std::vf1 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00eb7480(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: numpunct_D_std::vf2 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00eb7490(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0xd)));
}

/* ref: FUN_00eb74a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb74a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb74a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x115d094));
  F_00406b30(*((undefined4 *)GEN_TOP(((int)this + 8))));
  F_00406b30(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
  uVar1 = F_00406b30(*((undefined4 *)GEN_TOP(((int)this + 0x14))));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  return (uint)uVar1;
}

/* ref: numpunct_D_std::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb74d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb74d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x115d094));
  F_00406b30(param_1[2]);
  F_00406b30(param_1[4]);
  F_00406b30(param_1[5]);
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb7520(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb7520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00eb7550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb7550(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb7550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00eb7570 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb7570(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb7570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00eb7580 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb7580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00eb1600(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00eb75b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb75b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb75b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00eb75c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb75c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb75c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00eb75e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb75e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb75e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00eacb60(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00eb75f0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00eb75f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb75f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00eb7610 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb7610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this - 0x50))) + 4))) - 0x50 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d0ec));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this - 0x4c))) =
       (*(undefined * PTR32 (*)[15])REFP(0x115cfd4));
  F_00eacbd0(((undefined *)GEN_TOP(((int)this - 0x4c))) GEN_EDX_FWD);
  F_00eaf3b0(((undefined *)GEN_TOP(((int)this - 0x4c))) GEN_EDX_ARG);
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this - 0x50))) + 4)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((uVar1 - 0x50) + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1159a60));
  return uVar1;
}

/* ref: FUN_00eb7650 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00eb7650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb7650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00eb7670 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb7670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d0f4));
  uVar1 = F_00eb1780(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return uVar1;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb7690(void)
{
  GEN_ENTER(0xeb7690u, 0u, 0u, 0u, 0u);
  return 0x7ffffff;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb76a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb76a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x38))) << 5;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb76b0(void)
{
  GEN_ENTER(0xeb76b0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb76c0(void)
{
  GEN_ENTER(0xeb76c0u, 0u, 0u, 0u, 0u);
  return 0x10;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb7700(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 100))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb7720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 100))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb7760 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb7760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d114));
  F_00eb17d0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb7780(void)
{
  GEN_ENTER(0xeb7780u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb7790(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0xd8))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb77a0(void)
{
  GEN_ENTER(0xeb77a0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb77b0(void)
{
  GEN_ENTER(0xeb77b0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb77f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb77f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x104))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb7810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x104))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb7850 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb7850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d134));
  F_00eb1820(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf1_00eb7870 */
GEN_LIB GEN_NOFRAME uint F_00eb7870(void)
{
  GEN_ENTER(0xeb7870u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf2_00eb7880 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb7880(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x78))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf3_00eb7890 */
GEN_LIB GEN_NOFRAME uint F_00eb7890(void)
{
  GEN_ENTER(0xeb7890u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf4_00eb78a0 */
GEN_LIB GEN_NOFRAME uint F_00eb78a0(void)
{
  GEN_ENTER(0xeb78a0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf5_00eb78e0 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb78e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb78e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0xa4))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf6_00eb7900 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb7900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0xa4))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb7940 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb7940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d154));
  F_00eb1870(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf1_00eb7960 */
GEN_LIB GEN_NOFRAME uint F_00eb7960(void)
{
  GEN_ENTER(0xeb7960u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf2_00eb7970 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb7970(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x168))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf3_00eb7980 */
GEN_LIB GEN_NOFRAME uint F_00eb7980(void)
{
  GEN_ENTER(0xeb7980u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf4_00eb7990 */
GEN_LIB GEN_NOFRAME uint F_00eb7990(void)
{
  GEN_ENTER(0xeb7990u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf5_00eb79d0 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb79d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb79d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x194))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf6_00eb79f0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb79f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb79f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x194))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb7a30 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb7a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d174));
  F_00eb18c0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf1_00eb7a50 */
GEN_LIB GEN_NOFRAME uint F_00eb7a50(void)
{
  GEN_ENTER(0xeb7a50u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf2_00eb7a60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb7a60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0xa8))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf3_00eb7a70 */
GEN_LIB GEN_NOFRAME uint F_00eb7a70(void)
{
  GEN_ENTER(0xeb7a70u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf4_00eb7a80 */
GEN_LIB GEN_NOFRAME uint F_00eb7a80(void)
{
  GEN_ENTER(0xeb7a80u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf5_00eb7ac0 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb7ac0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0xd4))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf6_00eb7ae0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb7ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0xd4))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb7b20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb7b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d194));
  F_00eb1910(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf1_00eb7b40 */
GEN_LIB GEN_NOFRAME uint F_00eb7b40(void)
{
  GEN_ENTER(0xeb7b40u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf2_00eb7b50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb7b50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x1c8))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf3_00eb7b60 */
GEN_LIB GEN_NOFRAME uint F_00eb7b60(void)
{
  GEN_ENTER(0xeb7b60u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf4_00eb7b70 */
GEN_LIB GEN_NOFRAME uint F_00eb7b70(void)
{
  GEN_ENTER(0xeb7b70u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf5_00eb7bb0 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb7bb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 500))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf6_00eb7bd0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb7bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 500))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb7c10 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb7c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1b4));
  F_00eb1960(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf1_00eb7c30 */
GEN_LIB GEN_NOFRAME uint F_00eb7c30(void)
{
  GEN_ENTER(0xeb7c30u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf2_00eb7c40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb7c40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x1f8))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf3_00eb7c50 */
GEN_LIB GEN_NOFRAME uint F_00eb7c50(void)
{
  GEN_ENTER(0xeb7c50u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf4_00eb7c60 */
GEN_LIB GEN_NOFRAME uint F_00eb7c60(void)
{
  GEN_ENTER(0xeb7c60u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf5_00eb7ca0 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb7ca0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x224))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf6_00eb7cc0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb7cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x224))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb7d00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb7d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1d4));
  uVar1 = F_00eb19b0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return uVar1;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf1_00eb7d20 */
GEN_LIB GEN_NOFRAME uint F_00eb7d20(void)
{
  GEN_ENTER(0xeb7d20u, 0u, 0u, 0u, 0u);
  return 0x7ffffff;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf2_00eb7d30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb7d30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x78))) << 5;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf3_00eb7d40 */
GEN_LIB GEN_NOFRAME uint F_00eb7d40(void)
{
  GEN_ENTER(0xeb7d40u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf4_00eb7d50 */
GEN_LIB GEN_NOFRAME uint F_00eb7d50(void)
{
  GEN_ENTER(0xeb7d50u, 0u, 0u, 0u, 0u);
  return 0x10;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf5_00eb7d90 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb7d90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0xa4))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf6_00eb7db0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb7db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0xa4))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb7df0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb7df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1f4));
  F_00eb1a00(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf1_00eb7e10 */
GEN_LIB GEN_NOFRAME uint F_00eb7e10(void)
{
  GEN_ENTER(0xeb7e10u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf2_00eb7e20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb7e20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x198))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf3_00eb7e30 */
GEN_LIB GEN_NOFRAME uint F_00eb7e30(void)
{
  GEN_ENTER(0xeb7e30u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf4_00eb7e40 */
GEN_LIB GEN_NOFRAME uint F_00eb7e40(void)
{
  GEN_ENTER(0xeb7e40u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf5_00eb7e80 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb7e80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x1c4))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf6_00eb7ea0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb7ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x1c4))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb7ee0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb7ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d214));
  F_00eb1a50(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf1_00eb7f00 */
GEN_LIB GEN_NOFRAME uint F_00eb7f00(void)
{
  GEN_ENTER(0xeb7f00u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf2_00eb7f10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb7f10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x138))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf3_00eb7f20 */
GEN_LIB GEN_NOFRAME uint F_00eb7f20(void)
{
  GEN_ENTER(0xeb7f20u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf4_00eb7f30 */
GEN_LIB GEN_NOFRAME uint F_00eb7f30(void)
{
  GEN_ENTER(0xeb7f30u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf5_00eb7f70 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb7f70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x164))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf6_00eb7f90 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb7f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x164))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb7fd0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb7fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb7fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d234));
  F_00eb1aa0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf1_00eb7ff0 */
GEN_LIB GEN_NOFRAME uint F_00eb7ff0(void)
{
  GEN_ENTER(0xeb7ff0u, 0u, 0u, 0u, 0u);
  return 0x7ffffff;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf2_00eb8000 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb8000(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x98))) << 5;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf3_00eb8010 */
GEN_LIB GEN_NOFRAME uint F_00eb8010(void)
{
  GEN_ENTER(0xeb8010u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf4_00eb8020 */
GEN_LIB GEN_NOFRAME uint F_00eb8020(void)
{
  GEN_ENTER(0xeb8020u, 0u, 0u, 0u, 0u);
  return 0x10;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf5_00eb8060 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb8060(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0xc4))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf6_00eb8080 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0xc4))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb80c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb80c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb80c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d254));
  F_00eb1af0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DB::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb80e0(void)
{
  GEN_ENTER(0xeb80e0u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DB::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb80f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb80f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x948))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DB::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb8100(void)
{
  GEN_ENTER(0xeb8100u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DB::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb8110(void)
{
  GEN_ENTER(0xeb8110u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DB::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb8150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x974))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DB::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x974))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb81b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb81b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb81b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb1b40(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf1_00eb81d0 */
GEN_LIB GEN_NOFRAME uint F_00eb81d0(void)
{
  GEN_ENTER(0xeb81d0u, 0u, 0u, 0u, 0u);
  return 0x7ffffff;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf2_00eb81e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb81e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb81e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x58))) << 5;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf3_00eb81f0 */
GEN_LIB GEN_NOFRAME uint F_00eb81f0(void)
{
  GEN_ENTER(0xeb81f0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf4_00eb8200 */
GEN_LIB GEN_NOFRAME uint F_00eb8200(void)
{
  GEN_ENTER(0xeb8200u, 0u, 0u, 0u, 0u);
  return 0x10;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf5_00eb8240 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb8240(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x84))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf6_00eb8260 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x84))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb82a0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb82a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb82a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d294));
  F_00eb1b90(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BA::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb82c0(void)
{
  GEN_ENTER(0xeb82c0u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BA::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb82d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb82d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x318))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BA::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb82e0(void)
{
  GEN_ENTER(0xeb82e0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BA::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb82f0(void)
{
  GEN_ENTER(0xeb82f0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BA::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb8330(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x344))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BA::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x344))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8390 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2b4));
  F_00eb1be0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BN::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb83b0(void)
{
  GEN_ENTER(0xeb83b0u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BN::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb83c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb83c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x588))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BN::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb83d0(void)
{
  GEN_ENTER(0xeb83d0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BN::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb83e0(void)
{
  GEN_ENTER(0xeb83e0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BN::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb8420(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x5b4))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BN::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x5b4))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8480 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2d4));
  F_00eb1c30(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb84a0(void)
{
  GEN_ENTER(0xeb84a0u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb84b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb84b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x24d8))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb84c0(void)
{
  GEN_ENTER(0xeb84c0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb84d0(void)
{
  GEN_ENTER(0xeb84d0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb8510(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x2504))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x2504))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8570 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2f4));
  F_00eb1c90(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb8590(void)
{
  GEN_ENTER(0xeb8590u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb85a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb85a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 600))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb85b0(void)
{
  GEN_ENTER(0xeb85b0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb85c0(void)
{
  GEN_ENTER(0xeb85c0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb8600(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x284))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x284))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8660 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d314));
  F_00eb1ce0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb8680(void)
{
  GEN_ENTER(0xeb8680u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb8690(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x3d8))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb86a0(void)
{
  GEN_ENTER(0xeb86a0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb86b0(void)
{
  GEN_ENTER(0xeb86b0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb86f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb86f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x404))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x404))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8750 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d334));
  F_00eb1d30(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb8770(void)
{
  GEN_ENTER(0xeb8770u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb8780(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x378))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb8790(void)
{
  GEN_ENTER(0xeb8790u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb87a0(void)
{
  GEN_ENTER(0xeb87a0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb87e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb87e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x3a4))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x3a4))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8840 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d354));
  F_00eb1d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb8860(void)
{
  GEN_ENTER(0xeb8860u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb8870(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x2b8))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb8880(void)
{
  GEN_ENTER(0xeb8880u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb8890(void)
{
  GEN_ENTER(0xeb8890u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb88d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb88d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x2e4))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb88f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb88f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x2e4))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8930 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d374));
  F_00eb1dd0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb8950(void)
{
  GEN_ENTER(0xeb8950u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb8960(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x438))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb8970(void)
{
  GEN_ENTER(0xeb8970u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb8980(void)
{
  GEN_ENTER(0xeb8980u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb89c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb89c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x464))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb89e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb89e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x464))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8a20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d394));
  F_00eb1e20(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb8a40(void)
{
  GEN_ENTER(0xeb8a40u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb8a50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x768))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb8a60(void)
{
  GEN_ENTER(0xeb8a60u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb8a70(void)
{
  GEN_ENTER(0xeb8a70u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb8ab0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x794))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x794))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8b10 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3b4));
  F_00eb1e70(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb8b30(void)
{
  GEN_ENTER(0xeb8b30u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb8b40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x468))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb8b50(void)
{
  GEN_ENTER(0xeb8b50u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb8b60(void)
{
  GEN_ENTER(0xeb8b60u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb8ba0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x494))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x494))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8c00 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3d4));
  F_00eb1ec0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb8c20(void)
{
  GEN_ENTER(0xeb8c20u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb8c30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0xa68))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb8c40(void)
{
  GEN_ENTER(0xeb8c40u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb8c50(void)
{
  GEN_ENTER(0xeb8c50u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb8c90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0xa94))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0xa94))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8cf0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3f4));
  F_00eb1f10(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb8d10(void)
{
  GEN_ENTER(0xeb8d10u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb8d20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x858))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb8d30(void)
{
  GEN_ENTER(0xeb8d30u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb8d40(void)
{
  GEN_ENTER(0xeb8d40u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb8d80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x884))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x884))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8de0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d414));
  F_00eb1f60(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb8e00(void)
{
  GEN_ENTER(0xeb8e00u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb8e10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0xb88))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb8e20(void)
{
  GEN_ENTER(0xeb8e20u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb8e30(void)
{
  GEN_ENTER(0xeb8e30u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb8e70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0xbb4))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0xbb4))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8ed0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d434));
  F_00eb1fb0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb8ef0(void)
{
  GEN_ENTER(0xeb8ef0u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb8f00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x2e8))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb8f10(void)
{
  GEN_ENTER(0xeb8f10u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb8f20(void)
{
  GEN_ENTER(0xeb8f20u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb8f60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x314))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8f80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x314))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8fc0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb8fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb2000(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb8fe0(void)
{
  GEN_ENTER(0xeb8fe0u, 0u, 0u, 0u, 0u);
  return 0x7ffffff;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb8ff0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb8ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 600))) << 5;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb9000(void)
{
  GEN_ENTER(0xeb9000u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb9010(void)
{
  GEN_ENTER(0xeb9010u, 0u, 0u, 0u, 0u);
  return 0x10;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb9050(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb9050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x284))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb9070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb9070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x284))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb90b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb90b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb90b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d474));
  F_00eb2050(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb90d0(void)
{
  GEN_ENTER(0xeb90d0u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb90e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb90e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x978))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb90f0(void)
{
  GEN_ENTER(0xeb90f0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb9100(void)
{
  GEN_ENTER(0xeb9100u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb9140(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb9140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x9a4))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb9160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb9160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x9a4))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb91a0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb91a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb91a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d494));
  F_00eb20a0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb91c0(void)
{
  GEN_ENTER(0xeb91c0u, 0u, 0u, 0u, 0u);
  return 0x7ffffff;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb91d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb91d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x4b8))) << 5;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb91e0(void)
{
  GEN_ENTER(0xeb91e0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb91f0(void)
{
  GEN_ENTER(0xeb91f0u, 0u, 0u, 0u, 0u);
  return 0x10;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb9230(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb9230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x4e4))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb9250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb9250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x4e4))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb9290 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb9290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb9290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d4b4));
  F_00eb20f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf1 */
GEN_LIB GEN_NOFRAME uint F_00eb92b0(void)
{
  GEN_ENTER(0xeb92b0u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eb92c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb92c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x1938))) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf3 */
GEN_LIB GEN_NOFRAME uint F_00eb92d0(void)
{
  GEN_ENTER(0xeb92d0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf4 */
GEN_LIB GEN_NOFRAME uint F_00eb92e0(void)
{
  GEN_ENTER(0xeb92e0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf5 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00eb9320(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb9320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *((int *)GEN_TOP((in_ecx + 0x1964))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00eb9340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb9340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x1964))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)))) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0xc)));
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = ((uint *)GEN_TOP((iVar4 + 8)));
        iVar4 = *((int *)GEN_TOP((iVar4 + 4)));
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb9380 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9380(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined * this;
  
  this = ((undefined *)GEN_TOP((param_1 - 0x60)));
  F_00eb6ea0(this GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb93b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb93b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d0f4));
  F_00eb1780(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb93e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb93e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d114));
  F_00eb17d0(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9410(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d134));
  F_00eb1820(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9440(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d154));
  F_00eb1870(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9470(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d174));
  F_00eb18c0(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb94a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb94a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb94a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d194));
  F_00eb1910(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb94d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb94d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb94d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d1b4));
  F_00eb1960(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9500(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d1d4));
  F_00eb19b0(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9530(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d1f4));
  F_00eb1a00(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9560(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d214));
  F_00eb1a50(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9590(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d234));
  F_00eb1aa0(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DB::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb95c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb95c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d254));
  F_00eb1af0(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb95f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb95f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb95f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb1b40(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BA::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9620(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d294));
  F_00eb1b90(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BN::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9650(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d2b4));
  F_00eb1be0(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9680(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d2d4));
  F_00eb1c30(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb96b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb96b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d2f4));
  F_00eb1c90(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb96e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb96e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d314));
  F_00eb1ce0(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9710(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d334));
  F_00eb1d30(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9740(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d354));
  F_00eb1d80(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9770(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d374));
  F_00eb1dd0(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb97a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb97a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d394));
  F_00eb1e20(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb97d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb97d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d3b4));
  F_00eb1e70(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9800(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d3d4));
  F_00eb1ec0(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9830(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d3f4));
  F_00eb1f10(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9860(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d414));
  F_00eb1f60(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9890(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d434));
  F_00eb1fb0(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb98c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb98c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb2000(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb98f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb98f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d474));
  F_00eb2050(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9920(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d494));
  F_00eb20a0(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9950(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x115d4b4));
  F_00eb20f0(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00eb9980 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0xb5)));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3 GEN_EDX_FWD,param_2);
    if (bVar3 == 0) {
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0xb5)));
  }
  *param_1 = (int)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00eb99d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb99d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xeb99d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: std::_Tree::_Lrotate */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb99e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb99e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x81))) == '\0') {
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

/* ref: FUN_00eb9a40 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00eb9a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0xaaaaaaa < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_004069f0(param_1 * 0x18);
    if (uVar1 == 0) {
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  *(uint *)this = uVar1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1 + param_1 * 0x18;
  return 1;
}

/* ref: FUN_00eb9ad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9ad0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9ad0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eb9ae0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9ae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_2);
  return (uint)this;
}

/* ref: Global::IteratorAt_00eb9b10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9b10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = *(int *)this + param_2 * 0x18;
  return (uint)param_1;
}

/* ref: Global::basic_stringbuf */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9b30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeb9b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  F_00eb2150(param_1 GEN_EDX_FWD);
  uVar1 = 0;
  *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x115cfd4));
  if ((param_2 & 1) == 0) {
    uVar1 = 4;
  }
  if ((param_2 & 2) == 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_2 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  param_1[0x10] = uVar1;
  param_1[0xf] = 0;
  return (uint)param_1;
}

/* ref: FUN_00eb9b80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9b80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0xb8);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0xb4))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0xb5))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00eb9bf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9bf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x88);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x80))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x81))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00eb9c60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x20) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x10 - 0x20;
  return uVar1;
}

/* ref: FUN_00eb9ca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9ca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eb9ce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9ce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eb9d20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9d20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eb9d60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9d60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eb9da0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9da0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eb9de0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eb9e20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9e20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x20) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x10 - 0x20;
  return uVar1;
}

/* ref: FUN_00eb9e60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9e60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eb9ea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9ea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eb9ee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9ee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x20) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x10 - 0x20;
  return uVar1;
}

/* ref: FUN_00eb9f20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9f20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eb9f60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x20) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x10 - 0x20;
  return uVar1;
}

/* ref: FUN_00eb9fa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9fa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eb9fe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eb9fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeb9fe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eba020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eba060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eba0a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba0a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eba0e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba0e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eba120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eba160 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eba1a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba1a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eba1e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba1e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eba220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eba260 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eba2a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba2a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eba2e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba2e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eba320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x20) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x10 - 0x20;
  return uVar1;
}

/* ref: FUN_00eba360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: FUN_00eba3a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba3a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x20) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x10 - 0x20;
  return uVar1;
}

/* ref: FUN_00eba3e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba3e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 - 1) * -0x20 - 0x30;
  return uVar1;
}

/* ref: Global::_Put_00eba420 */
GEN_LIB GEN_FRAME uint F_00eba420(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(ushort * param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xeba420u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(ushort * param_5 = (ushort *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  int * piVar1;
  ushort * puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ushort * puVar6;
  
  puVar6 = param_5;
  iVar5 = param_6;
  do {
    if (iVar5 == 0) {
      *param_2 = param_3;
      param_2[1] = param_4;
      return (uint)param_2;
    }
    if (param_4 == ((int *)GEN_TOP(0x0))) {
LAB_00eba475: ;
      uVar4 = (uint)param_3 >> 8;
      param_3 = CONCAT31((int3)uVar4,1);
    }
    else {
      uVar3 = *puVar6;
      if ((*((int *)GEN_TOP(param_4[9])) == 0) || (piVar1 = ((int *)GEN_TOP(param_4[0xd])), *piVar1 < 1)) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 0xc))))(param_4 GEN_EDX_ARG,(uint)uVar3);
        uVar3 = (ushort)uVar4;
      }
      else {
        *piVar1 = *piVar1 - 1;
        puVar2 = *((ushort * PTR32 *)GEN_TOP(param_4[9]));
        *((ushort * PTR32 *)GEN_TOP(param_4[9])) = puVar2 + 1;
        *puVar2 = uVar3;
      }
      if (uVar3 == 0xffff) goto LAB_00eba475;
    }
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 - 1;
  } while( true );
}

/* ref: Global::_Rep_00eba490 */
GEN_LIB GEN_FRAME uint F_00eba490(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xeba490u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  int * piVar1;
  undefined2 * puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_6;
  do {
    if (iVar4 == 0) {
      *param_2 = param_3;
      param_2[1] = param_4;
      return (uint)param_2;
    }
    if (param_4 == ((int *)GEN_TOP(0x0))) {
LAB_00eba4e2: ;
      uVar3 = (uint)param_3 >> 8;
      param_3 = CONCAT31((int3)uVar3,1);
    }
    else {
      if ((*((int *)GEN_TOP(param_4[9])) == 0) || (piVar1 = ((int *)GEN_TOP(param_4[0xd])), *piVar1 < 1)) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 0xc))))(param_4 GEN_EDX_ARG,param_5);
      }
      else {
        *piVar1 = *piVar1 - 1;
        puVar2 = *((undefined2 * PTR32 *)GEN_TOP(param_4[9]));
        *((undefined2 * PTR32 *)GEN_TOP(param_4[9])) = puVar2 + 1;
        *puVar2 = (short)param_5;
        uVar3 = param_5;
      }
      if ((short)uVar3 == -1) goto LAB_00eba4e2;
    }
    iVar4 = iVar4 - 1;
  } while( true );
}

/* ref: FUN_00eba500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeba500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  uVar3 = **((uint * PTR32 *)GEN_TOP(((int)this + 0x30)));
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x0))))) = uVar3;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,0);
  if (*((int *)GEN_TOP((uVar3 + 4))) != -1) {
    *((int *)GEN_TOP((uVar3 + 4))) = *((int *)GEN_TOP((uVar3 + 4))) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar2 = ((int *)GEN_TOP(F_00eb70c0(&(*(undefined4 *)(gen_frame + 0x0)))));
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  iVar1 = *((int *)GEN_TOP((uVar3 + 4)));
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *((int *)GEN_TOP((uVar3 + 4))) = iVar1 - 1;
  }
  iVar1 = *((int *)GEN_TOP((uVar3 + 4)));
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  puVar4 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & uVar3)));
  if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,1);
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,param_1);
  return uVar3;
}

/* ref: FUN_00eba590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00eb1600(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00eba5b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eba5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeba5b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x3c)));
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d0f4));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x5c))) = puVar1;
  *((uint *)GEN_TOP(((int)this + 0x34))) = uVar2;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68))) = puVar1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 100))) = puVar1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x60))) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 1;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x20);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *((uint *)GEN_TOP(((int)this + 0x48))) = uVar2;
  *((uint *)GEN_TOP(((int)this + 0x40))) = uVar2;
  *((undefined4 *)GEN_TOP((uVar2 + 4))) = 0;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x48))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x44)));
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x48))) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  return (uint)this;
}

/* ref: FUN_00eba620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb2de0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x60))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 100)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb2de0(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb2d60(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb2de0(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00eba690 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eba690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeba690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d114));
  F_00eb2e90(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00eba6b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba6b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb2fb0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x100))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x104)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb2fb0(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb2f10(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb2fb0(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00eba730 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eba730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeba730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d134));
  F_00eb3050(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00eba750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb3160(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xa0))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xa4)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb3160(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb30d0(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb3160(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00eba7d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eba7d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeba7d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d154));
  F_00eb3200(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00eba7f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba7f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb3320(*((undefined * PTR32 *)GEN_TOP(((int)this + 400))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x194)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb3320(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb3280(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb3320(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00eba870 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eba870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeba870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d174));
  F_00eb33c0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00eba890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb34e0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xd0))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xd4)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb34e0(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb3440(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb34e0(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00eba910 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eba910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeba910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d194));
  F_00eb3580(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00eba930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb36a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1f0))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 500)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb36a0(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb3600(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb36a0(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00eba9b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00eba9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xeba9b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1b4));
  F_00eb3740(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00eba9d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eba9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeba9d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb3860(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x220))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x224)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb3860(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb37c0(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb3860(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebaa50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebaa50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebaa50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1d4));
  F_00eb3900(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebaa70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebaa70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebaa70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb3a10(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xa0))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xa4)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb3a10(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb3980(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb3a10(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebaaf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebaaf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebaaf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1f4));
  F_00eb3ac0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebab10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebab10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebab10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb3be0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c0))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c4)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb3be0(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb3b40(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb3be0(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebab90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebab90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebab90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d214));
  F_00eb3c80(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebabb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebabb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebabb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb3da0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x160))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x164)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb3da0(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb3d00(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb3da0(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebac30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebac30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebac30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d234));
  F_00eb3e40(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebac50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebac50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebac50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb3f50(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc0))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc4)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb3f50(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb3ec0(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb3f50(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebacd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebacd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebacd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d254));
  F_00eb4000(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebacf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebacf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebacf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb4120(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x970))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x974)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb4120(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb4080(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb4120(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebad70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebad70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebad70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebad90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebad90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebad90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb42d0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x84)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb42d0(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb4240(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb42d0(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebae10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebae10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebae10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d294));
  F_00eb4380(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebae30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebae30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebae30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb44a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x340))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x344)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb44a0(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb4400(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb44a0(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebaeb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebaeb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebaeb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2b4));
  F_00eb4540(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebaed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebaed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebaed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb4660(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x5b0))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x5b4)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb4660(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb45c0(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb4660(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebaf50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebaf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebaf50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2d4));
  F_00eb4700(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebaf70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebaf70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebaf70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb4820(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2500))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x2504)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb4820(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb4780(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb4820(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebaff0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebaff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebaff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2f4));
  F_00eb48c0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebb010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebb010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebb010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb49e0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x280))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x284)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb49e0(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb4940(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb49e0(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb090 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebb090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebb090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d314));
  F_00eb4a80(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebb0b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebb0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebb0b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb4ba0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x400))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x404)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb4ba0(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb4b00(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb4ba0(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb130 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebb130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebb130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d334));
  F_00eb4c40(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebb150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebb150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebb150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb4d60(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x3a0))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x3a4)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb4d60(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb4cc0(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb4d60(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb1d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebb1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebb1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d354));
  F_00eb4e00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebb1f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebb1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebb1f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb4f20(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2e0))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x2e4)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb4f20(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb4e80(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb4f20(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb270 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebb270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebb270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d374));
  F_00eb4fc0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebb290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebb290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebb290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb50e0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x460))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x464)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb50e0(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb5040(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb50e0(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb310 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebb310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebb310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d394));
  F_00eb5180(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebb330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebb330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebb330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb52a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x790))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x794)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb52a0(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb5200(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb52a0(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb3b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebb3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebb3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3b4));
  F_00eb5340(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebb3d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebb3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebb3d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb5460(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x490))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x494)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb5460(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb53c0(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb5460(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb450 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebb450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebb450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3d4));
  F_00eb5500(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebb470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebb470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebb470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb5620(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xa90))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xa94)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb5620(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb5580(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb5620(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb4f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebb4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebb4f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3f4));
  F_00eb56c0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebb510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebb510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebb510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb57e0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x880))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x884)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb57e0(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb5740(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb57e0(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb590 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebb590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebb590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d414));
  F_00eb5880(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebb5b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebb5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebb5b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb59a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xbb0))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xbb4)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb59a0(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb5900(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb59a0(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb630 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebb630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebb630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d434));
  F_00eb5a40(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebb650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebb650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebb650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb5b60(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x310))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x314)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb5b60(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb5ac0(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb5b60(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb6d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebb6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebb6d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb5c00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebb6f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebb6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebb6f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb5d20(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x280))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x284)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb5d20(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb5c80(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb5d20(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb770 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ebb770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xebb770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d474));
  F_00eb5dd0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ebb790 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ebb790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xebb790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb5ef0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x9a0))) GEN_EDX_FWD,param_1,param_2);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x9a4)));
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) break;
    uVar1 = F_00eb5ef0(pvVar2 GEN_EDX_ARG,param_1,param_2);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00eb5e50(this GEN_EDX_ARG,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00eb5ef0(pvVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

