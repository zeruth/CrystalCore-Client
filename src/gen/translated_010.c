#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00483660 */
GEN_OWN GEN_FRAME uint F_00483660(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x483660u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00480d60(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00483690 */
GEN_OWN GEN_FRAME unsigned int F_00483690(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x483690u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_004836c0 */
GEN_OWN GEN_FRAME unsigned int F_004836c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4836c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004836f0 */
GEN_OWN GEN_FRAME unsigned int F_004836f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4836f0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00483720 */
GEN_OWN GEN_FRAME unsigned int F_00483720(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x483720u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00483750 */
GEN_OWN GEN_FRAME unsigned int F_00483750(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x483750u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00483780 */
GEN_OWN GEN_FRAME unsigned int F_00483780(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x483780u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004837b0 */
GEN_OWN GEN_FRAME unsigned int F_004837b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4837b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_004837e0 */
GEN_OWN GEN_FRAME unsigned int F_004837e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4837e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00483810 */
GEN_OWN GEN_FRAME unsigned int F_00483810(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x483810u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00483840 */
GEN_OWN GEN_FRAME unsigned int F_00483840(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x483840u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00483870 */
GEN_OWN GEN_FRAME uint F_00483870(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x483870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x54)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_004838b0 */
GEN_OWN GEN_FRAME unsigned int F_004838b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4838b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 in_ECX = 0;
  
  F_00480fd0(param_1,param_2,param_3,param_4,0,in_ECX);
  return;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_004838e0 */
GEN_OWN GEN_FRAME unsigned int F_004838e0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4838e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 8) {
    F_005a2670(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00483910 */
GEN_OWN GEN_FRAME unsigned int F_00483910(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x483910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x5c) {
    F_0042c880(((undefined *)GEN_TOP((iVar1 + 8))) GEN_EDX_ARG);
  }
  return;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00483940 */
GEN_OWN GEN_FRAME unsigned int F_00483940(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x483940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00483970 */
GEN_OWN GEN_FRAME unsigned int F_00483970(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x483970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0xa8)))) {
    F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_004839a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004839a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4839a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1 + 2);
  return (uint)this;
}

/* ref: FUN_004839d0 */
GEN_OWN GEN_FRAME uint F_004839d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4839d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = param_2;
  if (4 < (int)(param_2 - param_1 & 0xfffffffc)) {
    uVar1 = F_00481310(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_00483a00 */
GEN_OWN GEN_FRAME uint F_00483a00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x483a00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_004813c0(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_00483a20 */
GEN_OWN GEN_FRAME unsigned int F_00483a20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x483a20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x58))) = *((undefined4 *)GEN_TOP((param_3 + 0x58)));
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x5c))) = *((undefined4 *)GEN_TOP((param_3 + 0x5c)));
  }
  return;
}

/* ref: FUN_00483a50 */
GEN_OWN GEN_FRAME uint F_00483a50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x483a50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    puVar2 = param_3 + 2;
    puVar3 = param_2 + 2;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
  }
  return (uint)param_2;
}

/* ref: FUN_00483a80 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00483a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x483a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * _Dst;
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  *((undefined1 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x28))))) = 0;
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))),REFG(undefined4, 0x108cc50));
  F_0042e360(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  _Dst = ((undefined *)GEN_TOP(((int)this + 0x94)));
  F_00c48350(_Dst,-1,0x40);
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))) = _Dst;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x28))) = _Dst;
  **((int * PTR32 *)GEN_TOP(((int)this + 0x38))) = (int)this + (0xd3 - (int)_Dst);
  uVar1 = F_0042e360(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00483b20 */
GEN_OWN GEN_FRAME uint F_00483b20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x483b20u, gen_a0, gen_a1, gen_a2, 0u);
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
      F_00560a60(this GEN_EDX_ARG,iVar1);
    }
    iVar1 = iVar1 + 8;
    this = ((undefined *)GEN_TOP(((int)this + 8)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00483b60 */
GEN_OWN GEN_FRAME uint F_00483b60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x483b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00483b70 */
GEN_OWN GEN_FRAME uint F_00483b70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x483b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)param_2 + 0x160))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)param_2 + 0x10c))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)param_2 + 0xb8))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)param_2 + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00483bb0 */
GEN_OWN GEN_FRAME uint F_00483bb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x483bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP((param_2 + 0x11c))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP((param_2 + 0xbc))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP((param_2 + 0x60))) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_2 + 8))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00483be0 */
GEN_OWN GEN_FRAME uint F_00483be0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x483be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00483bf0 */
GEN_OWN GEN_FRAME uint F_00483bf0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x483bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00483c00 */
GEN_OWN GEN_FRAME uint F_00483c00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x483c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00483c10 */
GEN_OWN GEN_FRAME uint F_00483c10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x483c10u, gen_a0, gen_a1, gen_a2, 0u);
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
      F_0042cbc0(this GEN_EDX_ARG,iVar1);
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54)));
    }
    iVar1 = iVar1 + 0x58;
    this = ((undefined *)GEN_TOP(((int)this + 0x58)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00483c50 */
GEN_OWN GEN_FRAME uint F_00483c50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x483c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(this GEN_EDX_ARG,iVar1);
      F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,iVar1 + 0x54);
    }
    iVar1 = iVar1 + 0xa8;
    this = ((undefined *)GEN_TOP(((int)this + 0xa8)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00483ca0 */
GEN_OWN GEN_FRAME uint F_00483ca0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x483ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)param_2 + 0xfc))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)param_2 + 0xa8))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)param_2 + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00483cd0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00483cd0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x483cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    F_0042cbc0(param_1 + 3 GEN_EDX_ARG,param_2 + 3);
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  }
  return;
}

/* ref: FUN_00483d30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00483d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x483d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00483d50 */
GEN_OWN GEN_FRAME uint F_00483d50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x483d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 4 + param_1;
    F_004814f0(param_1,iVar1,iVar2 * 8 + param_1,param_4);
    F_004814f0(param_2 + iVar2 * -4,param_2,iVar2 * 4 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -4;
    F_004814f0(param_3 + iVar2 * -8,iVar3,param_3,param_4);
    uVar4 = F_004814f0(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_004814f0(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_00483df0 */
GEN_OWN GEN_FRAME uint F_00483df0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x483df0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00483e20 */
GEN_OWN GEN_FRAME uint F_00483e20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x483e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  return param_6 - param_3;
}

/* ref: FUN_00483e30 */
GEN_OWN GEN_FRAME uint F_00483e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x483e30u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) - 4)));
  *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) - 4))) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar2 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = uVar1;
  uVar3 = F_0047dac0((*(undefined4 * PTR32 *)&gen_args[0]),0,iVar2 - 4 >> 2,&(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_00483e70 */
GEN_OWN GEN_FRAME uint F_00483e70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x483e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 8) {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00560a60(this GEN_EDX_ARG,iVar1);
    }
    this = ((undefined *)GEN_TOP(((int)this + 8)));
  }
  return (uint)this;
}

/* ref: FUN_00483eb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00483eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x483eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (param_1 != 0) {
    F_00481c90(this GEN_EDX_FWD,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00483f30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00483f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x483f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00483f60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00483f60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x483f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  uint extraout_EAX = 0;
  uint uVar2;
  
  F_004797a0(param_1 GEN_EDX_FWD);
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  uVar1 = F_00481650(param_1 GEN_EDX_ARG,0x20);
  param_1[0x40] = SUB41(uVar1,0);
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar1 = *(uint *)(param_1 + 0xc) & 0x17 | 4;
    uVar2 = *(uint *)(param_1 + 0x10) & uVar1;
    *(uint *)(param_1 + 0xc) = uVar1;
    if (uVar2 != 0) {
      if ((uVar2 & 4) == 0) {
        if ((uVar2 & 2) == 0) {
          uVar1 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910b0));
        }
        else {
          uVar1 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910c8));
        }
      }
      else {
        uVar1 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910e0));
      }
      (*(undefined4 *)(gen_frame + 0x8)) = 1;
      (*(uint *)(gen_frame + 0xc)) = uVar1;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  if (param_3 != '\0') {
    F_00c463fe(param_1);
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00484010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00484010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x484010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar4 = ((int *)GEN_TOP(*puVar1));
  }
  uVar2 = *((int *)GEN_TOP(((int)this + 0xc))) + param_1;
  if (((piVar4 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*piVar4)) == ((int *)GEN_TOP(0x0)))) ||
     (piVar4 = *((int * PTR32 *)GEN_TOP(*piVar4)), piVar4 == ((int *)GEN_TOP(0x0)))) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar4;
  }
  if (*((uint *)GEN_TOP((iVar3 + 8))) <= uVar2) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + (uVar2 - *((uint *)GEN_TOP((iVar3 + 8)))) * 4)));
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + uVar2 * 4)));
}

/* ref: FUN_00484060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00484060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x484060u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x71))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00473080(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x71))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x71))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x71))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[0x1c];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 0x1c))) = (char)piVar3[0x1c];
      *(char *)(piVar3 + 0x1c) = (char)iVar1;
      goto LAB_0048417a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x71))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x71))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00471da0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x71))) == '\0') {
      uVar5 = F_00471d80(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_0048417a: ;
  if ((char)piVar3[0x1c] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x1c] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[0x1c] == '\0') {
            *(undefined1 *)(piVar6 + 0x1c) = 1;
            *(undefined1 *)(piVar4 + 0x1c) = 0;
            F_0047ed50(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x71))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x70))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x70))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x70))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x70))) = 1;
                *(undefined1 *)(piVar6 + 0x1c) = 0;
                F_0047b200(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 0x1c) = (char)piVar4[0x1c];
              *(undefined1 *)(piVar4 + 0x1c) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x70))) = 1;
              F_0047ed50(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00484238: ;
            *(undefined1 *)(piVar6 + 0x1c) = 0;
          }
        }
        else {
          if ((char)piVar6[0x1c] == '\0') {
            *(undefined1 *)(piVar6 + 0x1c) = 1;
            *(undefined1 *)(piVar4 + 0x1c) = 0;
            F_0047b200(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x71))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x70))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x70))) == '\x01'))
            goto LAB_00484238;
            if (*((char *)GEN_TOP((*piVar6 + 0x70))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x70))) = 1;
              *(undefined1 *)(piVar6 + 0x1c) = 0;
              F_0047ed50(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 0x1c) = (char)piVar4[0x1c];
            *(undefined1 *)(piVar4 + 0x1c) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x70))) = 1;
            F_0047b200(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x1c) = 1;
  }
  F_0042c880(piVar3 + 4 GEN_EDX_ARG);
  F_00429760(piVar3,0x78,400);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_004842c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004842c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4842c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x71)));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 4 GEN_EDX_FWD,param_2);
    if (bVar3 == 0) {
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0x71)));
  }
  if ((puVar2 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) &&
     (bVar3 = F_0042c7c0(param_2 GEN_EDX_ARG,puVar2 + 4), bVar3 == 0)) {
    *param_1 = puVar2;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_00484340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00484340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x484340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x69))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((int)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x69))) == '\0');
  }
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && ((int)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_004843b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004843b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4843b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_004823a0(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x192);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00484420 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00484420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x484420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + *((int *)GEN_TOP(((int)this + 0xc))) * 4)));
    F_0042c880(((undefined *)GEN_TOP((iVar2 + 0x58))) GEN_EDX_FWD);
    F_0042c880(((undefined *)GEN_TOP((iVar2 + 4))) GEN_EDX_ARG);
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
    if (*((uint *)GEN_TOP(((int)this + 8))) <= *((uint *)GEN_TOP(((int)this + 0xc)))) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
    piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
  }
  return;
}

/* ref: FUN_004844a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004844a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4844a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x19))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x19))) == '\0');
  }
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_00484510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00484510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x484510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  gen_size32 _Size;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  uVar3 = *(uint *)this;
  if (param_1 < iVar2 - uVar3) {
    iVar1 = uVar3 + param_1;
    if (iVar1 != iVar2) {
      uVar3 = F_00c46e20(iVar1,iVar2,0);
      *((int *)GEN_TOP(((int)this + 4))) = iVar1;
    }
  }
  else if (iVar2 - uVar3 < param_1) {
    F_00482530(this GEN_EDX_ARG,(uVar3 - iVar2) + param_1);
    _Size = (*(int *)this - (int)*((undefined * PTR32 *)GEN_TOP(((int)this + 4)))) + param_1;
    if (_Size != 0) {
      F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))),0,_Size);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = *(int *)this + param_1;
    return *(int *)this + param_1;
  }
  return uVar3;
}

/* ref: FUN_00484580 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00484580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x484580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  uVar1 = *(uint *)this;
  if (uVar1 != uVar2) {
    uVar2 = F_00c46e20(uVar1,uVar2,0);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  return uVar2;
}

/* ref: FUN_004845b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004845b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4845b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x71)));
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
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0x71)));
  }
  if ((puVar2 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) &&
     (bVar3 = F_0042c7c0(param_2 GEN_EDX_ARG,puVar2 + 3), bVar3 == 0)) {
    *param_1 = puVar2;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_00484630 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00484630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x484630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00482650(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00484660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00484660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x484660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar4 = ((int *)GEN_TOP(*puVar1));
  }
  uVar2 = *((int *)GEN_TOP(((int)this + 0xc))) + param_1;
  if (((piVar4 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*piVar4)) == ((int *)GEN_TOP(0x0)))) ||
     (piVar4 = *((int * PTR32 *)GEN_TOP(*piVar4)), piVar4 == ((int *)GEN_TOP(0x0)))) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar4;
  }
  if (*((uint *)GEN_TOP((iVar3 + 8))) <= uVar2) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + (uVar2 - *((uint *)GEN_TOP((iVar3 + 8)))) * 4)));
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + uVar2 * 4)));
}

/* ref: FUN_004846c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004846c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4846c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0047bed0(this GEN_EDX_FWD,param_2);
  if (uVar1 != *((uint *)GEN_TOP(((int)this + 4)))) {
    if ((*((uint *)GEN_TOP((uVar1 + 0x14))) <= param_2[1]) &&
       ((param_2[1] != *((uint *)GEN_TOP((uVar1 + 0x14))) || (*((uint *)GEN_TOP((uVar1 + 0x10))) <= *param_2)))) {
      *param_1 = uVar1;
      return (uint)param_1;
    }
  }
  *param_1 = *((uint *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_00484720 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00484720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x484720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,400);
  return (uint)uVar3;
}

/* ref: FUN_00484770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00484770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x484770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0xc,0,400)));
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar3[2] = *param_1;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_004847d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004847d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4847d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x71))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x71))) == '\0');
  }
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_00484840 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00484840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x484840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x71)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00484840(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_0042c880(piVar3 + 4 GEN_EDX_ARG);
    F_00429760(piVar3,0x78,400);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x71)));
  }
  return;
}

/* ref: FUN_00484890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00484890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(int param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x484890u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(int param_7 = (int)gen_a7;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar3 = ((int *)GEN_TOP(0x0));
  (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(0x0));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    (*(int * PTR32 *)(gen_frame + 0xc)) = *(int * PTR32 *)this;
  }
  (*(int *)(gen_frame + 0x14)) = param_4;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    piVar3 = *(int * PTR32 *)this;
  }
  uVar2 = param_4 - *((int *)GEN_TOP(((int)this + 0xc)));
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  (*(int *)(gen_frame + 0x1c)) = param_7 - param_4;
  (*(int *)(gen_frame + 0x8)) = param_7;
  uVar6 = 0;
  if (uVar2 < (uint)((*((int *)GEN_TOP(((int)this + 0x10))) + *((int *)GEN_TOP(((int)this + 0xc)))) - param_7)) {
    if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
      uVar6 = *((undefined4 *)GEN_TOP(*piVar3));
    }
    uVar5 = 0;
    if (((*(int * PTR32 *)(gen_frame + 0xc)) != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xc)))) != ((undefined4 *)GEN_TOP(0x0)))) {
      uVar5 = *((undefined4 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xc))));
    }
    F_00482d00(((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)this,0,*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar5,0,param_4,
                 uVar6,0,param_7);
    for (iVar4 = (*(int *)(gen_frame + 0x1c)); iVar4 != 0; iVar4 = iVar4 - 1) {
      if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
        F_0042c880(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + *((int *)GEN_TOP(((int)this + 0xc))) * 4))) GEN_EDX_ARG);
        *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
        if (*((uint *)GEN_TOP(((int)this + 8))) <= *((uint *)GEN_TOP(((int)this + 0xc)))) {
          *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        }
        piVar3 = ((int *)GEN_TOP(((int)this + 0x10)));
        *piVar3 = *piVar3 - 1;
        if (*piVar3 == 0) {
          *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        }
      }
    }
  }
  else {
    if (((*(int * PTR32 *)(gen_frame + 0xc)) != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xc)))) != ((undefined4 *)GEN_TOP(0x0)))) {
      uVar6 = *((undefined4 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xc))));
    }
    uVar5 = 0;
    if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
      uVar5 = *((undefined4 *)GEN_TOP(*piVar3));
    }
    F_00482d80(((undefined1 *)(gen_frame + 0x0)),uVar5,0,param_7,*(undefined4 *)this,0,
                 *((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10))),uVar6,0,param_4);
    for (iVar4 = (*(int *)(gen_frame + 0x1c)); iVar4 != 0; iVar4 = iVar4 - 1) {
      if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
        uVar2 = *((int *)GEN_TOP(((int)this + 0xc))) - 1 + *((int *)GEN_TOP(((int)this + 0x10)));
        if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar2) {
          uVar2 = uVar2 - *((uint *)GEN_TOP(((int)this + 8)));
        }
        F_0042c880(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4))) GEN_EDX_ARG);
        piVar3 = ((int *)GEN_TOP(((int)this + 0x10)));
        *piVar3 = *piVar3 - 1;
        if (*piVar3 == 0) {
          *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        }
      }
    }
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 0xc)));
  piVar3 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar3 = ((int *)GEN_TOP(*puVar1));
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0x18)) + iVar4;
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*piVar3));
  }
  return (uint)param_1;
}

/* ref: FUN_00484a50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00484a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x484a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00482990(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00484a70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00484a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x484a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  F_00482a30(this GEN_EDX_FWD,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_00484ab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00484ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x484ab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
    pvVar2 = this;
    if (0xf < uVar1) {
      pvVar2 = *(undefined * PTR32 *)this;
    }
    if (pvVar2 <= param_1) {
      pvVar2 = this;
      if (0xf < uVar1) {
        pvVar2 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (int)pvVar2)))) {
        if (0xf < uVar1) {
          uVar1 = F_00482a30(this GEN_EDX_FWD,this,(int)param_1 - *(int *)this,param_2);
          return uVar1;
        }
        uVar1 = F_00482a30(this GEN_EDX_ARG,this,(int)param_1 - (int)this,param_2);
        return uVar1;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < param_2) {
    F_0047c420(this GEN_EDX_ARG,param_2,*((undefined4 *)GEN_TOP(((int)this + 0x10))));
    if (param_2 == 0) {
      return (uint)this;
    }
  }
  else if (param_2 == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  pvVar2 = this;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    pvVar2 = *(undefined * PTR32 *)this;
  }
  F_00c46aa0(pvVar2,param_1,param_2);
  *((uint *)GEN_TOP(((int)this + 0x10))) = param_2;
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < 0x10) {
    *((undefined1 *)GEN_TOP(((int)this + param_2))) = 0;
    return (uint)this;
  }
  *((undefined1 *)GEN_TOP((*(int *)this + param_2))) = 0;
  return (uint)this;
}

/* ref: FUN_00484bb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00484bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x484bb0u, gen_a0, gen_a1, gen_a2, 0u);
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
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*piVar3));
  }
  return (uint)param_1;
}

/* ref: FUN_00484bf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00484bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x484bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    uVar3 = *((int *)GEN_TOP(((int)this + 0x10))) - 1 + *((int *)GEN_TOP(((int)this + 0xc)));
    if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar3) {
      uVar3 = uVar3 - *((uint *)GEN_TOP(((int)this + 8)));
    }
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4)));
    F_0042c880(((undefined *)GEN_TOP((iVar2 + 0x58))) GEN_EDX_FWD);
    uVar4 = F_0042c880(((undefined *)GEN_TOP((iVar2 + 4))) GEN_EDX_ARG);
    uVar3 = (uint)uVar4;
    piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_00484c30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00484c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x484c30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00482b20(this GEN_EDX_FWD);
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
    F_00481a00(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00484cd0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00484cd0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x484cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0x54)))) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00484d00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00484d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x484d00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00482b80(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0xe))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0xe))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0xe)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0xe)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0xe)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0xe)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_0047fd10(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00484da0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00484da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x484da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    uVar2 = *((int *)GEN_TOP(((int)this + 0x10))) - 1 + *((int *)GEN_TOP(((int)this + 0xc)));
    if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar2) {
      uVar2 = uVar2 - *((uint *)GEN_TOP(((int)this + 8)));
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4)));
    F_0042c880(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_FWD);
    uVar3 = F_0042c880(this_00 GEN_EDX_ARG);
    uVar2 = (uint)uVar3;
    piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00484df0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00484df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x484df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00482a30(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00484e10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00484e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x484e10u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x71))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00473f10(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x71))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x71))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x71))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[0x1c];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 0x1c))) = (char)piVar3[0x1c];
      *(char *)(piVar3 + 0x1c) = (char)iVar1;
      goto LAB_00484f2a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x71))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x71))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00473e60(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x71))) == '\0') {
      uVar5 = F_00473e40(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00484f2a: ;
  if ((char)piVar3[0x1c] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x1c] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[0x1c] == '\0') {
            *(undefined1 *)(piVar6 + 0x1c) = 1;
            *(undefined1 *)(piVar4 + 0x1c) = 0;
            F_0047c690(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x71))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x70))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x70))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x70))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x70))) = 1;
                *(undefined1 *)(piVar6 + 0x1c) = 0;
                F_0047c6f0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 0x1c) = (char)piVar4[0x1c];
              *(undefined1 *)(piVar4 + 0x1c) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x70))) = 1;
              F_0047c690(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00484fe8: ;
            *(undefined1 *)(piVar6 + 0x1c) = 0;
          }
        }
        else {
          if ((char)piVar6[0x1c] == '\0') {
            *(undefined1 *)(piVar6 + 0x1c) = 1;
            *(undefined1 *)(piVar4 + 0x1c) = 0;
            F_0047c6f0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x71))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x70))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x70))) == '\x01'))
            goto LAB_00484fe8;
            if (*((char *)GEN_TOP((*piVar6 + 0x70))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x70))) = 1;
              *(undefined1 *)(piVar6 + 0x1c) = 0;
              F_0047c690(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 0x1c) = (char)piVar4[0x1c];
            *(undefined1 *)(piVar4 + 0x1c) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x70))) = 1;
            F_0047c6f0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x1c) = 1;
  }
  F_0042c880(piVar3 + 6 GEN_EDX_ARG);
  F_00429760(piVar3,0x74,400);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00485070 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00485070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x485070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x71)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00485070(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_0042c880(piVar3 + 6 GEN_EDX_ARG);
    F_00429760(piVar3,0x74,400);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x71)));
  }
  return;
}

/* ref: FUN_004850c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004850c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4850c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_3 != 0) {
    F_00481c90(param_1 + 1 GEN_EDX_FWD,param_3);
  }
  *(undefined1 *)(param_1 + 5) = param_2;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1091268));
  return (uint)param_1;
}

/* ref: FUN_00485100 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00485100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x485100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091268));
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = F_00406ad0(*((int *)GEN_TOP(((int)this + 4))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return uVar1;
}

/* ref: FUN_00485130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00485130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x485130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x10,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((undefined2 *)GEN_TOP(((int)puVar1 + 0xd))) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined1 *)(puVar1 + 3) = *param_2;
  }
  F_00482f70(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00485190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00485190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x485190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x10,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((undefined2 *)GEN_TOP(((int)puVar1 + 0xd))) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined1 *)(puVar1 + 3) = *param_2;
  }
  F_00482f70(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_004851f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004851f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4851f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_3 != 0) {
    F_00481c90(param_1 + 1 GEN_EDX_FWD,param_3);
  }
  *(undefined1 *)(param_1 + 5) = param_2;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1091270));
  return (uint)param_1;
}

/* ref: FUN_00485230 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00485230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x485230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091270));
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = F_00406ad0(*((int *)GEN_TOP(((int)this + 4))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return uVar1;
}

/* ref: FUN_00485260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00485260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x485260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2[1];
  return (uint)this;
}

/* ref: FUN_00485280 */
GEN_OWN GEN_FRAME unsigned int F_00485280(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x485280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 in_ECX = 0;
  
  F_004835f0(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_004852a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004852a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4852a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00480d60(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_004852d0 */
GEN_OWN GEN_FRAME unsigned int F_004852d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4852d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00485300 */
GEN_OWN GEN_FRAME unsigned int F_00485300(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x485300u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00485330 */
GEN_OWN GEN_FRAME unsigned int F_00485330(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x485330u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00485360 */
GEN_OWN GEN_FRAME unsigned int F_00485360(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x485360u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00485390 */
GEN_OWN GEN_FRAME uint F_00485390(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x485390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_2 + 8))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_004853a0 */
GEN_OWN GEN_FRAME unsigned int F_004853a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4853a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_004853d0 */
GEN_OWN GEN_FRAME unsigned int F_004853d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4853d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00485400 */
GEN_OWN GEN_FRAME unsigned int F_00485400(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x485400u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00485430 */
GEN_OWN GEN_FRAME unsigned int F_00485430(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x485430u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00485460 */
GEN_OWN GEN_FRAME unsigned int F_00485460(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x485460u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00485490 */
GEN_OWN GEN_FRAME unsigned int F_00485490(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x485490u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004854c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004854c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4854c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x54)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00485500 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00485500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x485500u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00480fd0(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00485530 */
GEN_OWN GEN_FRAME unsigned int F_00485530(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x485530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 8) {
    F_005a2670(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00485560 */
GEN_OWN GEN_FRAME unsigned int F_00485560(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x485560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x5c) {
    F_0042c880(((undefined *)GEN_TOP((iVar1 + 8))) GEN_EDX_ARG);
  }
  return;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00485590 */
GEN_OWN GEN_FRAME unsigned int F_00485590(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x485590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_004855c0 */
GEN_OWN GEN_FRAME unsigned int F_004855c0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4855c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0xa8)))) {
    F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: ChunkWrite_EG_Data_System_Client::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004855f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4855f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1091268));
  if (param_1[1] != 0) {
    F_00406ad0(param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: ChunkWrite_EE_Data_System_Client::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00485640(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x485640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1091270));
  if (param_1[1] != 0) {
    F_00406ad0(param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00485690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00485690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x485690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  byte bVar4;
  undefined4 * puVar5;
  undefined * this_00;
  undefined4 * puVar6;
  byte local_8;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  this_00 = ((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10)));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x71)));
  local_8 = 1;
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  bVar3 = local_8;
  while (cVar1 == '\0') {
    if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
      bVar3 = F_0042c7c0(this_00 GEN_EDX_FWD,puVar5 + 4);
    }
    else {
      bVar3 = F_0042c7c0(puVar5 + 4 GEN_EDX_ARG,this_00);
      bVar3 = bVar3 == 0;
    }
    if (bVar3 == 0) {
      puVar6 = ((undefined4 *)GEN_TOP(puVar5[2]));
    }
    else {
      puVar6 = ((undefined4 *)GEN_TOP(*puVar5));
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    cVar1 = *((char *)GEN_TOP(((int)puVar6 + 0x71)));
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (bVar3 != 0) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar5 = ((undefined4 *)GEN_TOP(F_00483170(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00474890(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[2]);
  bVar4 = F_0042c7c0((*(undefined4 * PTR32 *)&gen_args[2]) + 4 GEN_EDX_ARG,this_00);
  if (bVar4 != 0) {
    puVar5 = ((undefined4 *)GEN_TOP(F_00483170(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),bVar3,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_0042c880(this_00 GEN_EDX_ARG);
  F_00429760((*(int *)&gen_args[1]),0x78,400);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00485790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00485790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x485790u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x71))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x71))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_004833a0(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00474a80(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_004833a0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_0042c880(((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 0x18))) GEN_EDX_ARG);
  F_00429760((*(int *)&gen_args[1]),0x74,400);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00485880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00485880(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x485880u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_0042c880(param_5 + 5 GEN_EDX_FWD);
    F_00429760(param_5,0x6c,0x192);
                    
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
      goto LAB_004858f6;
    }
    param_4[2] = param_5;
    iVar4 = *((int *)GEN_TOP((param_1 + 4)));
    if (param_4 != *((undefined4 * PTR32 *)GEN_TOP((iVar4 + 8)))) goto LAB_004858f6;
  }
  *((int * PTR32 *)GEN_TOP((iVar4 + 8))) = param_5;
LAB_004858f6: ;
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x68)));
  piVar3 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar4 + 0x68))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar3[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar4 = piVar6[2];
      if (*((char *)GEN_TOP((iVar4 + 0x68))) == '\0') {
        *(undefined1 *)(piVar5 + 0x1a) = 1;
        *((undefined1 *)GEN_TOP((iVar4 + 0x68))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x68))) = 0;
        piVar3 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
      }
      else {
        if (piVar3 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar3 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar3;
          if (*((char *)GEN_TOP((*piVar3 + 0x69))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar3[1] + 0x68))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x68))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x69))) == '\0') {
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
LAB_00485a81: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*((char *)GEN_TOP((iVar4 + 0x68))) != '\0') {
        if (piVar3 == ((int *)GEN_TOP(*piVar5))) {
          iVar4 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar4 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 8))) + 0x69))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar3[1] + 0x68))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x68))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x69))) == '\0') {
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
        goto LAB_00485a81;
      }
      *(undefined1 *)(piVar5 + 0x1a) = 1;
      *((undefined1 *)GEN_TOP((iVar4 + 0x68))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x68))) = 0;
      piVar3 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x68)));
  } while( true );
}

/* ref: FUN_00485ab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00485ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x485ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x78,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  if (puVar1 + 4 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar1 + 4 GEN_EDX_ARG,param_1);
    puVar1[0x1a] = *((undefined4 *)GEN_TOP((param_1 + 0x58)));
    puVar1[0x1b] = *((undefined4 *)GEN_TOP((param_1 + 0x5c)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00485b10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00485b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x485b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x48,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x10) = 0;
  if (puVar1 + 4 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[4] = *param_1;
    puVar1[5] = param_1[1];
    puVar3 = param_1 + 2;
    puVar4 = puVar1 + 6;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00485b70 */
GEN_OWN_GS GEN_FRAME uint F_00485b70(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x485b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * _Dst;
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  *((undefined1 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x28))))) = 0;
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,**((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x18))),REFG(undefined4, 0x108cc50));
  F_0042e360(((undefined *)GEN_TOP((param_1 + 0x40))) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  _Dst = ((undefined *)GEN_TOP((param_1 + 0x94)));
  F_00c48350(_Dst,-1,0x40);
  **((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x18))) = _Dst;
  **((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x28))) = _Dst;
  **((int * PTR32 *)GEN_TOP((param_1 + 0x38))) = (param_1 - (int)_Dst) + 0xd3;
  F_0042e360(((undefined *)GEN_TOP((param_1 + 0x40))) GEN_EDX_ARG,param_2);
  return param_1;
}

/* ref: FUN_00485c10 */
GEN_OWN GEN_FRAME uint F_00485c10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x485c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00560a60(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 8)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00485c50 */
GEN_OWN GEN_FRAME unsigned int F_00485c50(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x485c50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00485c80 */
GEN_OWN GEN_FRAME unsigned int F_00485c80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x485c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = ((undefined *)GEN_TOP((param_1 + 0x10c)));
    do {
      F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
      F_0042c880(this GEN_EDX_ARG);
      F_0042c880(((undefined *)GEN_TOP(((int)this - 0x54))) GEN_EDX_ARG);
      F_0042c880(((undefined *)GEN_TOP(((int)this - 0xb8))) GEN_EDX_ARG);
      F_0042c880(((undefined *)GEN_TOP(((int)this - 0x10c))) GEN_EDX_ARG);
      iVar1 = (int)this + 0xac;
      this = ((undefined *)GEN_TOP(((int)this + 0x1b8)));
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00485ce0 */
GEN_OWN GEN_FRAME unsigned int F_00485ce0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x485ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = ((undefined *)GEN_TOP((param_1 + 0x60)));
    do {
      F_0042c880(((undefined *)GEN_TOP(((int)this + 0xbc))) GEN_EDX_ARG);
      F_0042c880(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG);
      F_0042c880(this GEN_EDX_ARG);
      F_0042c880(((undefined *)GEN_TOP(((int)this - 0x58))) GEN_EDX_ARG);
      iVar1 = (int)this + 0x110;
      this = ((undefined *)GEN_TOP(((int)this + 0x170)));
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00485d30 */
GEN_OWN GEN_FRAME unsigned int F_00485d30(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x485d30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00485d60 */
GEN_OWN GEN_FRAME unsigned int F_00485d60(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x485d60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00485d90 */
GEN_OWN GEN_FRAME unsigned int F_00485d90(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x485d90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x54) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00485dc0 */
GEN_OWN GEN_FRAME uint F_00485dc0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x485dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(this GEN_EDX_ARG,iVar1 + (int)this);
        *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54 + (int)this)));
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x58)));
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00485e00 */
GEN_OWN GEN_FRAME uint F_00485e00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x485e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00483c50(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00485e30 */
GEN_OWN GEN_FRAME unsigned int F_00485e30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x485e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = ((undefined *)GEN_TOP((param_1 + 0xa8)));
    do {
      F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
      F_0042c880(this GEN_EDX_ARG);
      F_0042c880(((undefined *)GEN_TOP(((int)this - 0x54))) GEN_EDX_ARG);
      F_0042c880(((undefined *)GEN_TOP(((int)this - 0xa8))) GEN_EDX_ARG);
      iVar1 = (int)this + 0xa8;
      this = ((undefined *)GEN_TOP(((int)this + 0x150)));
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00485e80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00485e80(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x485e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    uVar1 = F_0042cbc0(param_1 + 2 GEN_EDX_ARG,param_2 + 2);
  }
  return uVar1;
}

/* ref: FUN_00485eb0 */
GEN_OWN GEN_FRAME uint F_00485eb0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x485eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * local_8;
  
  puVar6 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 2) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                     1);
  F_00483d50(param_2,puVar6,param_3 - 1,param_4);
  puVar5 = puVar6;
  while (((param_2 < puVar5 && (uVar3 = (*param_4)(puVar5[-1],*puVar5), (char)uVar3 == '\0')) &&
         (uVar3 = (*param_4)(*puVar5,puVar5[-1]), (char)uVar3 == '\0'))) {
    puVar5 = puVar5 - 1;
  }
  do {
    puVar6 = puVar6 + 1;
    puVar2 = puVar6;
    puVar4 = puVar5;
    if ((param_3 <= puVar6) || (uVar3 = (*param_4)(*puVar6,*puVar5), (char)uVar3 != '\0')) break;
    uVar3 = (*param_4)(*puVar5,*puVar6);
  } while ((char)uVar3 == '\0');
joined_r0x00485f53: ;
  do {
    if (puVar6 < param_3) {
      uVar3 = (*param_4)(*puVar5,*puVar6);
      local_8 = puVar2;
      if ((char)uVar3 == '\0') {
        uVar3 = (*param_4)(*puVar6,*puVar5);
        if ((char)uVar3 != '\0') goto joined_r0x00485f93;
        local_8 = puVar2 + 1;
        uVar1 = *puVar2;
        *puVar2 = *puVar6;
        *puVar6 = uVar1;
      }
      puVar6 = puVar6 + 1;
      puVar2 = local_8;
      goto joined_r0x00485f53;
    }
joined_r0x00485f93: ;
    for (; param_2 < puVar4; puVar4 = puVar4 - 1) {
      uVar3 = (*param_4)(puVar4[-1],*puVar5);
      if ((char)uVar3 == '\0') {
        uVar3 = (*param_4)(*puVar5,puVar4[-1]);
        if ((char)uVar3 != '\0') break;
        uVar1 = puVar5[-1];
        puVar5 = puVar5 - 1;
        *puVar5 = puVar4[-1];
        puVar4[-1] = uVar1;
      }
    }
    if (puVar4 == param_2) {
      if (puVar6 == param_3) {
        *param_1 = puVar5;
        param_1[1] = puVar2;
        return (uint)param_1;
      }
      if (puVar2 != puVar6) {
        uVar1 = *puVar5;
        *puVar5 = *puVar2;
        *puVar2 = uVar1;
      }
      uVar1 = *puVar5;
      *puVar5 = *puVar6;
      puVar5 = puVar5 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
      puVar2 = puVar2 + 1;
    }
    else {
      puVar4 = puVar4 - 1;
      if (puVar6 == param_3) {
        puVar5 = puVar5 - 1;
        if (puVar4 != puVar5) {
          uVar1 = *puVar4;
          *puVar4 = *puVar5;
          *puVar5 = uVar1;
        }
        uVar1 = *puVar5;
        *puVar5 = puVar2[-1];
        puVar2[-1] = uVar1;
        puVar2 = puVar2 - 1;
      }
      else {
        uVar1 = *puVar6;
        *puVar6 = *puVar4;
        *puVar4 = uVar1;
        puVar6 = puVar6 + 1;
      }
    }
  } while( true );
}

/* ref: FUN_00486060 */
GEN_OWN GEN_FRAME uint F_00486060(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x486060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    uVar1 = F_0042cbc0(param_2 + 2 GEN_EDX_ARG,param_3 + 2);
  }
  return uVar1;
}

/* ref: FUN_00486090 */
GEN_OWN GEN_FRAME unsigned int F_00486090(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x486090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    F_0042cbc0(param_2 + 3 GEN_EDX_ARG,param_3 + 3);
    *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
  }
  return;
}

/* ref: FUN_004860d0 */
GEN_OWN GEN_FRAME uint F_004860d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x4860d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  undefined * this;
  
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(this GEN_EDX_ARG,param_1);
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
    }
    param_1 = param_1 + 0x58;
    this = ((undefined *)GEN_TOP(((int)this + 0x58)));
  } while (param_1 != param_2);
  return (uint)this;
}

/* ref: FUN_00486110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00486110(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x486110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined * this;
  
  this = ((undefined *)GEN_TOP(*param_1));
  *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) - 1;
  if (*((int *)GEN_TOP(((int)this + 0x54))) < 1) {
    F_0042c880(this GEN_EDX_FWD);
    F_00406ad0(this);
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00486150 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00486150(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x486150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return (uint)param_1;
}

/* ref: FUN_00486180 */
GEN_OWN GEN_FRAME uint F_00486180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x486180u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = (*(undefined4 *)&gen_args[2]);
  uVar1 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  while (4 < (int)(uVar1 & 0xfffffffc)) {
    (*(int *)&gen_args[1]) = *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4)))) = *(*(undefined4 * PTR32 *)&gen_args[0]);
    F_0047dac0((*(undefined4 * PTR32 *)&gen_args[0]),0,(int)(uVar1 - 4) >> 2,&(*(int *)&gen_args[1]),uVar2);
    uVar1 = uVar1 - 4;
  }
  return uVar1;
}

/* ref: FUN_004861e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004861e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4861e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 8) {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00560a60(this GEN_EDX_ARG,iVar1);
    }
    this = ((undefined *)GEN_TOP(((int)this + 8)));
  }
  return (uint)this;
}

/* ref: FUN_00486220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00486220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x486220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)this;
  F_00484510(this GEN_EDX_FWD,iVar1 + param_2);
  uVar2 = F_00c46aa0(*(int *)this + iVar1,param_1,param_2);
  return (uint)uVar2;
}

/* ref: FUN_00486260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00486260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x486260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)this;
  F_00484510(this GEN_EDX_FWD,iVar1 + param_2);
  uVar2 = F_00c46aa0(*(int *)this + iVar1,param_1,param_2);
  return (uint)uVar2;
}

/* ref: FUN_004862a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004862a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4862a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  uVar1 = *(uint *)this;
  if (uVar1 != uVar2) {
    uVar2 = F_00c46e20(uVar1,uVar2,0);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  return uVar2;
}

/* ref: FUN_004862d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004862d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4862d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00482650(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x30))),8,400);
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    uVar1 = F_00406810(*((int *)GEN_TOP(((int)this + 0x14))));
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  }
  return uVar1;
}

/* ref: Client::UI::Misc::AcquaintanceModule::vf4 */
GEN_OWN GEN_NOFRAME uint F_00486320(void)
{
  GEN_ENTER(0x486320u, 0u, 0u, 0u, 0u);
  return 0x800;
}

/* ref: Client::UI::Misc::AcquaintanceModule::vf5 */
GEN_OWN GEN_NOFRAME uint F_00486330(void)
{
  GEN_ENTER(0x486330u, 0u, 0u, 0u, 0u);
  return 100;
}

/* ref: Client::UI::Misc::AcquaintanceModule::vf6 */
GEN_OWN GEN_NOFRAME uint F_00486340(void)
{
  GEN_ENTER(0x486340u, 0u, 0u, 0u, 0u);
  return 6;
}

/* ref: Client::UI::Misc::AcquaintanceModule::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00486350(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x486350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00482650(param_1 + 0xc GEN_EDX_FWD);
  F_00429760(param_1[0xc],8,400);
  param_1[0xc] = 0;
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  if (param_1[5] != 0) {
    F_00406810(param_1[5]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandAction::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004863c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4863c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar4 = *((uint *)GEN_TOP((param_1 + 4)));
  if ((int)uVar4 < 0) {
    return 7;
  }
  if ((uint)((*((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x10)))) / 0x54) < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_0042a990(*((int *)GEN_TOP((param_1 + 0x10))) + 0x54 GEN_EDX_FWD);
  }
  uVar6 = CONCAT44(1,uVar2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG);
  puVar3 = ((undefined4 *)GEN_TOP(F_00455070(uVar2 GEN_EDX_ARG,(int)uVar6,(char)((ulonglong)uVar6 >> 0x20))));
  if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
    return 2;
  }
  uVar5 = *(undefined4 *)(&REFG(undefined, 0x12fe6d4) + ((int)uVar4 >> 0x18) * 4);
  uVar4 = uVar4 & 0xffffff;
  switch((unsigned int)(uintptr_t)(uVar5)) {
  case 1: ;
    uVar4 = F_00ac1b60(uVar4);
    break;
  case 5: ;
    if (uVar4 == 2) {
      uVar5 = 1;
      uVar4 = 0x5c;
    }
    break;
  case 6: ;
  case 0xb: ;
    goto switchD_0048643d_caseD_6;
  case 9: ;
    uVar4 = F_00ac1cb0(uVar4);
  }
  bVar1 = F_00ac78f0(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,uVar5,uVar4);
  if (bVar1 != 0) {
    uVar6 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3);
    F_00ac8af0(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,uVar5,uVar4,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    return 0;
  }
switchD_0048643d_caseD_6: ;
  return 7;
}

/* ref: FUN_004864e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004864e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4864e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x10912b0);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[1])REFP(0x1091064));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  F_00483f60(*((int *)GEN_TOP((*(int *)this + 4))) + (int)this GEN_EDX_FWD,param_1,(undefined1)param_2);
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandAssist::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00486530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x486530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  int iVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  
  iVar4 = *((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x10)));
  iVar1 = iVar4 >> 0x1f;
  if (iVar4 / 0x54 + iVar1 == iVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_0042a990(*((undefined4 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_FWD);
  }
  uVar6 = 1;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(F_00455070(uVar3 GEN_EDX_ARG,uVar2,uVar6)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar5 = F_00aa1840(this_00 GEN_EDX_ARG);
    if ((int)uVar5 != -0x20000000) {
      uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,(int)uVar5,(int)(uVar5 >> 0x20));
      if (uVar2 != 0) {
        F_00543ca0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,uVar2,0,0);
        return 0;
      }
    }
  }
  return 2;
}

/* ref: Client::UI::Shell::ShellCommandFollow::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004865c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4865c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = *((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x10)));
  iVar1 = iVar5 >> 0x1f;
  if (iVar5 / 0x54 + iVar1 == iVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_0042a990(*((undefined4 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_FWD);
  }
  uVar6 = CONCAT44(1,uVar3);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG);
  piVar4 = ((int *)GEN_TOP(F_00455070(uVar3 GEN_EDX_ARG,(int)uVar6,(char)((ulonglong)uVar6 >> 0x20))));
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
    if (uVar3 == 1) {
      uVar6 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*piVar4)))(piVar4);
      bVar2 = F_00aec010((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      if (bVar2 != 0) {
        return 0;
      }
    }
  }
  return 2;
}

/* ref: Client::UI::Shell::ShellCommandTarget::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00486640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x486640u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    iVar4 = *((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x10)));
    iVar1 = iVar4 >> 0x1f;
    if (iVar4 / 0x54 + iVar1 != iVar1) {
      uVar5 = 0;
      uVar2 = F_0042a990(*((undefined4 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_FWD);
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG);
      uVar2 = F_00455070(uVar3 GEN_EDX_ARG,uVar2,uVar5);
      if (uVar2 == 0) {
        uVar5 = 1;
        uVar2 = F_0042a990(*((undefined4 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG);
        uVar2 = F_00a64490(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,uVar2,uVar5);
        if (uVar2 == 0) {
          return 2;
        }
      }
      F_00477390(uVar2);
      return 0;
    }
  }
  return 7;
}

/* ref: Client::UI::Shell::ShellCommandMarking::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004866d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4866d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if ((uint)((*((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x10)))) / 0x54) < 2) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_0042a990(*((int *)GEN_TOP((param_1 + 0x10))) + 0x54 GEN_EDX_FWD);
  }
  uVar4 = CONCAT44(1,uVar1);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(F_00455070(uVar1 GEN_EDX_ARG,(int)uVar4,(char)((ulonglong)uVar4 >> 0x20))));
  if ((puVar2 != ((undefined4 *)GEN_TOP(0x0))) && (-1 < *((int *)GEN_TOP((param_1 + 4))))) {
    uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2);
    uVar1 = F_00a67f50((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
    if (uVar1 != 0) {
      F_00a6ce30(&REFG(undefined, 0x14b2788) GEN_EDX_ARG,uVar1,0xe0000000,0);
    }
    uVar1 = *((uint *)GEN_TOP((param_1 + 4))) & 0xfffffffe;
    if (uVar1 - 0x50 < 0x21) {
                    
      switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((uVar1 + 0x486948))))) {
      case 0: ;
        uVar1 = F_00477520(0,5);
        if (0 < (int)uVar1) {
          uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2);
          F_00a6ce30(&REFG(undefined, 0x14b2788) GEN_EDX_ARG,uVar1,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
          return 0;
        }
        break;
      case 1: ;
        uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2);
        F_00a6ce30(&REFG(undefined, 0x14b2788) GEN_EDX_ARG,((int)(uVar1 - 0x52) >> 1) + 1,(int)uVar4,
                     (int)((ulonglong)uVar4 >> 0x20));
        return 0;
      case 2: ;
        uVar1 = F_00477520(5,8);
        if (0 < (int)uVar1) {
          uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2);
          F_00a6ce30(&REFG(undefined, 0x14b2788) GEN_EDX_ARG,uVar1,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
          return 0;
        }
        break;
      case 3: ;
        uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2);
        F_00a6ce30(&REFG(undefined, 0x14b2788) GEN_EDX_ARG,((int)(uVar1 - 0x5e) >> 1) + 6,(int)uVar4,
                     (int)((ulonglong)uVar4 >> 0x20));
        return 0;
      case 4: ;
        uVar1 = F_00477520(8,10);
        if (0 < (int)uVar1) {
          uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2);
          F_00a6ce30(&REFG(undefined, 0x14b2788) GEN_EDX_ARG,uVar1,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
          return 0;
        }
        break;
      case 5: ;
        uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2);
        F_00a6ce30(&REFG(undefined, 0x14b2788) GEN_EDX_ARG,((int)(uVar1 - 0x66) >> 1) + 9,(int)uVar4,
                     (int)((ulonglong)uVar4 >> 0x20));
        return 0;
      case 6: ;
        uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2);
        F_00a6ce30(&REFG(undefined, 0x14b2788) GEN_EDX_ARG,0xb,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
        return 0;
      case 7: ;
        uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2);
        F_00a6ce30(&REFG(undefined, 0x14b2788) GEN_EDX_ARG,0xc,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
        return 0;
      case 8: ;
        uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2);
        F_00a6ce30(&REFG(undefined, 0x14b2788) GEN_EDX_ARG,0xd,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
        return 0;
      case 9: ;
        uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2);
        F_00a6ce30(&REFG(undefined, 0x14b2788) GEN_EDX_ARG,0xe,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
      }
    }
    return 0;
  }
  uVar5 = 0x1a;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x48))))(param_2 GEN_EDX_ARG);
  piVar3 = ((int *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar5)));
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return 7;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG);
    return 0;
  }
  return 10;
}

/* ref: Client::UI::Shell::ShellCommandFocus::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004869c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4869c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  iVar5 = *((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x10)));
  iVar1 = iVar5 >> 0x1f;
  if (iVar5 / 0x54 + iVar1 == iVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_0042a990(*((undefined4 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_FWD);
  }
  uVar7 = 1;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG);
  puVar4 = ((undefined4 *)GEN_TOP(F_00455070(uVar3 GEN_EDX_ARG,uVar2,uVar7)));
  if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar6 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4);
    F_00537470(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    return 0;
  }
  F_00537470(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,0xe0000000,0);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandPartyInvite::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00486a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x486a40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  undefined1 uVar7;
  
  if (param_2 == ((int *)GEN_TOP(0x0))) {
    return 8;
  }
  iVar6 = *((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x10)));
  iVar1 = iVar6 >> 0x1f;
  if (iVar6 / 0x54 + iVar1 == iVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_0042a990(*((undefined4 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_FWD);
  }
  uVar7 = 1;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG);
  piVar5 = ((int *)GEN_TOP(F_00455070(uVar4 GEN_EDX_ARG,uVar3,uVar7)));
  if (piVar5 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG);
    bVar2 = F_0043f660(uVar3);
    if (bVar2 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x44))))(param_2 GEN_EDX_ARG);
      if (*((int *)GEN_TOP((uVar3 + 0xc))) == 0) {
        return 8;
      }
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG);
      F_00445760(uVar3);
      return 0;
    }
  }
  return 2;
}

/* ref: Client::UI::Shell::ShellCommandPartyKick::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00486af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x486af0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  undefined1 uVar6;
  
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    iVar5 = *((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x10)));
    iVar1 = iVar5 >> 0x1f;
    if (iVar5 / 0x54 + iVar1 == iVar1) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_0042a990(*((undefined4 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_FWD);
    }
    uVar6 = 1;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00455070(uVar3 GEN_EDX_ARG,uVar2,uVar6)));
    if ((piVar4 == ((int *)GEN_TOP(0x0))) || ((*((byte *)GEN_TOP(((int)piVar4 + 0x2dd2))) & 0x10) == 0)) {
      return 6;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x44))))(param_2 GEN_EDX_ARG);
    if (*((int *)GEN_TOP((uVar2 + 8))) != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
      F_00445960(uVar2);
      return 0;
    }
  }
  return 8;
}

/* ref: Client::UI::Shell::ShellCommandPartyLeader::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00486b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x486b90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  undefined1 uVar6;
  
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    iVar5 = *((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x10)));
    iVar1 = iVar5 >> 0x1f;
    if (iVar5 / 0x54 + iVar1 == iVar1) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_0042a990(*((undefined4 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_FWD);
    }
    uVar6 = 1;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00455070(uVar3 GEN_EDX_ARG,uVar2,uVar6)));
    if ((piVar4 == ((int *)GEN_TOP(0x0))) || ((*((byte *)GEN_TOP(((int)piVar4 + 0x2dd2))) & 0x10) == 0)) {
      return 6;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x44))))(param_2 GEN_EDX_ARG);
    if (*((int *)GEN_TOP((uVar2 + 8))) != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
      F_00445a80(uVar2);
      return 0;
    }
  }
  return 8;
}

/* ref: Client::UI::Shell::ShellCommandCheck::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00486c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x486c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  undefined * this_00;
  int iVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  
  iVar5 = *((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x10)));
  iVar1 = iVar5 >> 0x1f;
  if (iVar5 / 0x54 + iVar1 == iVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_0042a990(*((undefined4 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_FWD);
  }
  uVar6 = 1;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG);
  piVar4 = ((int *)GEN_TOP(F_00455070(uVar3 GEN_EDX_ARG,uVar2,uVar6)));
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xb8))))(piVar4 GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
      if (uVar2 == 1) {
        uVar7 = 0x27;
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x48))))(param_2 GEN_EDX_ARG);
        this_00 = ((undefined *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar7)));
        F_00771500(this_00 GEN_EDX_ARG,piVar4[0x1d]);
        return 0;
      }
    }
  }
  return 2;
}

/* ref: FUN_00486cd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00486cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x486cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00484840(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00486d00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00486d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x486d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar4 = ((int *)GEN_TOP(*puVar1));
  }
  uVar2 = *((int *)GEN_TOP(((int)this + 0xc))) + param_1;
  if (((piVar4 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*piVar4)) == ((int *)GEN_TOP(0x0)))) ||
     (piVar4 = *((int * PTR32 *)GEN_TOP(*piVar4)), piVar4 == ((int *)GEN_TOP(0x0)))) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar4;
  }
  if (*((uint *)GEN_TOP((iVar3 + 8))) <= uVar2) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + (uVar2 - *((uint *)GEN_TOP((iVar3 + 8)))) * 4)));
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + uVar2 * 4)));
}

/* ref: FUN_00486d50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00486d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x486d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = ((int *)GEN_TOP(0x0));
  if ((param_2 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_2)) != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar1 = *((int * PTR32 *)GEN_TOP(*param_2));
  }
  uVar3 = 0;
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar1)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar3 = *((undefined4 *)GEN_TOP(*piVar1));
  }
  uVar2 = 0;
  if ((param_2 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_2)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar2 = *((undefined4 *)GEN_TOP(*param_2));
  }
  F_00484890(this GEN_EDX_FWD,param_1,uVar2,0,param_4,uVar3,0,param_4 + 1);
  return param_1;
}

/* ref: FUN_00486dd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00486dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x486dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * this_00;
  undefined * _Dst;
  
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x10912c0);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd8))) = (*(undefined * PTR32 (*)[1])REFP(0x1091064));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 4)));
  F_00483f60(*((int *)GEN_TOP((*(int *)this + 4))) + (int)this GEN_EDX_FWD,this_00,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10912bc));
  F_00479880(this_00 GEN_EDX_ARG);
  *this_00 = (*(undefined * PTR32 (*)[15])REFP(0x1091164));
  F_0042b630((int)this + 0x40 GEN_EDX_ARG);
  _Dst = ((undefined *)GEN_TOP(((int)this + 0x94)));
  F_00c48350(_Dst,-1,0x40);
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))) = _Dst;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x28))) = _Dst;
  **((int * PTR32 *)GEN_TOP(((int)this + 0x38))) = (int)this_00 + (0xcf - (int)_Dst);
  return (uint)this;
}

/* ref: FUN_00486e70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00486e70(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x486e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(param_1 - 0x98 GEN_EDX_FWD);
  F_00479ae0(param_1 - 0xd4 GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((param_1 + *((int *)GEN_TOP((*(int *)(param_1 - 0xd8) + 4))) - 0xd8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(param_1);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1 - 0xd8);
  }
  return (uint)(param_1 - 0xd8);
}

/* ref: FUN_00486ee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00486ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x486ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00482990(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x48,400);
  return (uint)uVar1;
}

/* ref: FUN_00486f20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00486f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x486f20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  F_00484ab0(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00486f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00486f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x486f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  F_00482a30(param_1 GEN_EDX_FWD,this,param_2,param_3);
  return (uint)param_1;
}

/* ref: FUN_00486f80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00486f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x486f80u, gen_a0, gen_a1, 0u, 0u);
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
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a(((char *)REFP(0x1090ac0)));
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 0xc)));
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((uVar6 + param_1) * 4,0,0x2c4)));
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
    uVar9 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,0x2c4);
    uVar6 = (uint)uVar9;
  }
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + param_1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  return uVar6;
}

/* ref: FUN_004870f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004870f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4870f0u, gen_a0, gen_a1, 0u, 0u);
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
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a(((char *)REFP(0x1090ac0)));
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 0xc)));
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((uVar6 + param_1) * 4,0,400)));
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
    uVar9 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,400);
    uVar6 = (uint)uVar9;
  }
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + param_1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  return uVar6;
}

/* ref: FUN_00487260 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00487260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x487260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x69)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00487260(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_0042c880(piVar3 + 5 GEN_EDX_ARG);
    F_00429760(piVar3,0x6c,0x192);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x69)));
  }
  return;
}

/* ref: FUN_004872b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004872b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4872b0u, gen_a0, gen_a1, 0u, 0u);
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
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a(((char *)REFP(0x1090ac0)));
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 0xc)));
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((uVar6 + param_1) * 4,0,0x192)));
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
    uVar9 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,0x192);
    uVar6 = (uint)uVar9;
  }
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + param_1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  return uVar6;
}

/* ref: FUN_00487420 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00487420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x487420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
  while (iVar3 != 0) {
    if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
      uVar2 = *((int *)GEN_TOP(((int)this + 0x10))) - 1 + *((int *)GEN_TOP(((int)this + 0xc)));
      if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar2) {
        uVar2 = uVar2 - *((uint *)GEN_TOP(((int)this + 8)));
      }
      iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4)));
      F_0042c880(((undefined *)GEN_TOP((iVar3 + 0x58))) GEN_EDX_FWD);
      F_0042c880(((undefined *)GEN_TOP((iVar3 + 4))) GEN_EDX_ARG);
      piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      }
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 8)));
  while (iVar3 != 0) {
    iVar3 = iVar3 - 1;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar3 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar3 * 4))),0xac,0x192);
    }
  }
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar4 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,0x192);
    uVar2 = (uint)uVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_004874c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004874c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4874c0u, gen_a0, gen_a1, 0u, 0u);
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
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a(((char *)REFP(0x1090ac0)));
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 0xc)));
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((uVar6 + param_1) * 4,0,0x192)));
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
    uVar9 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,0x192);
    uVar6 = (uint)uVar9;
  }
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + param_1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  return uVar6;
}

/* ref: FUN_00487630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00487630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x487630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00484c30(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00487650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00487650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x487650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  undefined * pvVar1;
  undefined * this_00;
  undefined * pvVar2;
  
  if (param_2 != param_3) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    this_00 = param_2;
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 0x54)))) {
      F_0042ccf0(this_00 GEN_EDX_FWD,pvVar2);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x54)));
    }
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (pvVar2 = this_00; pvVar2 != pvVar1; pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 0x54)))) {
      F_0042c880(pvVar2 GEN_EDX_ARG);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004876d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004876d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4876d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x54)))) {
      F_0042c880(this_00 GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54) * 0x54,0x35);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_00487730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00487730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x487730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00484d00(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00487750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00487750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x487750u, gen_a0, gen_a1, 0u, 0u);
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
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a(((char *)REFP(0x1090ac0)));
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 0xc)));
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((uVar6 + param_1) * 4,0,400)));
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
    uVar9 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,400);
    uVar6 = (uint)uVar9;
  }
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + param_1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  return uVar6;
}

/* ref: FUN_004878c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004878c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4878c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
  while (iVar3 != 0) {
    if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
      uVar2 = *((int *)GEN_TOP(((int)this + 0x10))) - 1 + *((int *)GEN_TOP(((int)this + 0xc)));
      if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar2) {
        uVar2 = uVar2 - *((uint *)GEN_TOP(((int)this + 8)));
      }
      this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4)));
      F_0042c880(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_FWD);
      F_0042c880(this_00 GEN_EDX_ARG);
      piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      }
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 8)));
  while (iVar3 != 0) {
    iVar3 = iVar3 - 1;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar3 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar3 * 4))),0xa8,400);
    }
  }
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar4 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,400);
    uVar2 = (uint)uVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00487960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00487960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x487960u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_0047d100(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004879a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004879a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4879a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x18) * 0x18,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_004879f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004879f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4879f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      F_00429760(*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 0x14))) + 1,0x192);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    *(undefined1 *)this = 0;
    if ((uint)param_1[5] < 0x10) {
      F_00c46e20(this,param_1,param_1[4] + 1);
    }
    else {
      *(undefined4 *)this = *param_1;
      *param_1 = 0;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
    param_1[5] = 0xf;
    param_1[4] = 0;
    *(undefined1 *)param_1 = 0;
  }
  return (uint)this;
}

/* ref: FUN_00487a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00487a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x487a80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00484840(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x71))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x71))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x71)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x71)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x71)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x71)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00484060(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00487b40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00487b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x487b40u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x69))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_0047c010(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x69))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x69))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x69))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[0x1a];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 0x1a))) = (char)piVar3[0x1a];
      *(char *)(piVar3 + 0x1a) = (char)iVar1;
      goto LAB_00487c5a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x69))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x69))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00473940(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x69))) == '\0') {
      uVar5 = F_00473920(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00487c5a: ;
  if ((char)piVar3[0x1a] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x1a] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[0x1a] == '\0') {
            *(undefined1 *)(piVar6 + 0x1a) = 1;
            *(undefined1 *)(piVar4 + 0x1a) = 0;
            F_0047c200(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x69))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x68))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x68))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x68))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x68))) = 1;
                *(undefined1 *)(piVar6 + 0x1a) = 0;
                F_0047c260(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 0x1a) = (char)piVar4[0x1a];
              *(undefined1 *)(piVar4 + 0x1a) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x68))) = 1;
              F_0047c200(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00487d18: ;
            *(undefined1 *)(piVar6 + 0x1a) = 0;
          }
        }
        else {
          if ((char)piVar6[0x1a] == '\0') {
            *(undefined1 *)(piVar6 + 0x1a) = 1;
            *(undefined1 *)(piVar4 + 0x1a) = 0;
            F_0047c260(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x69))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x68))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x68))) == '\x01'))
            goto LAB_00487d18;
            if (*((char *)GEN_TOP((*piVar6 + 0x68))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x68))) = 1;
              *(undefined1 *)(piVar6 + 0x1a) = 0;
              F_0047c200(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 0x1a) = (char)piVar4[0x1a];
            *(undefined1 *)(piVar4 + 0x1a) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x68))) = 1;
            F_0047c260(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x1a) = 1;
  }
  F_0042c880(piVar3 + 5 GEN_EDX_ARG);
  F_00429760(piVar3,0x6c,0x192);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00487da0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00487da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x487da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x54,0,0x35);
    F_004854c0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x54)))) {
        F_0042c880(this_00 GEN_EDX_ARG);
      }
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54) * 0x54,0x35);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = (((int)pvVar1 - iVar2) / 0x54) * 0x54 + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x54 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00487e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00487e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x487e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x18;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x18,0,400);
    F_00480fd0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x18) * 0x18,400);
    }
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x18 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3 + ((iVar2 - iVar1) / 0x18) * 0x18;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00487f50 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00487f50(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x487f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 8)))) {
    F_005a2670(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00487f80 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00487f80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x487f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x5c) {
    F_0042c880(((undefined *)GEN_TOP((iVar1 + 8))) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00487fb0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00487fb0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x487fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0x58)))) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00487fe0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00487fe0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x487fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0xa8)))) {
    F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00488010 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00488010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x488010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00485070(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00488040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00488040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x488040u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  undefined * pvVar1;
  undefined * this_00;
  undefined * pvVar2;
  
  if (param_2 != param_3) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    this_00 = param_2;
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 8)))) {
      F_00596cd0(this_00 GEN_EDX_FWD,pvVar2);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 + 8)));
    }
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (pvVar2 = this_00; pvVar2 != pvVar1; pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 8)))) {
      F_005a2670(pvVar2 GEN_EDX_ARG);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004880c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004880c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4880c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x78,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  if (puVar1 + 4 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar1 + 4 GEN_EDX_ARG,param_2);
    puVar1[0x1a] = *((undefined4 *)GEN_TOP((param_2 + 0x58)));
    puVar1[0x1b] = *((undefined4 *)GEN_TOP((param_2 + 0x5c)));
  }
  F_00485690(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00488130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00488130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x488130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x48,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x10) = 0;
  if (puVar1 + 4 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[4] = *param_2;
    puVar1[5] = param_2[1];
    puVar3 = param_2 + 2;
    puVar4 = puVar1 + 6;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
  }
  F_00483050(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_004881a0 */
GEN_OWN_GS GEN_FRAME uint F_004881a0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4881a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x17c, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x174)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x178));
  F_00486dd0(&(*(int *)(gen_frame + 0x54)) GEN_EDX_ARG,1);
  F_00485b70(&(*(int *)(gen_frame + 0x54)),param_2);
  *((undefined1 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x7c)))) = 0;
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,*(*(int * PTR32 *)(gen_frame + 0x6c)),REFG(undefined4, 0x108cc50));
  F_0042e360(((undefined1 *)(gen_frame + 0x94)) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c48350(((undefined1 *)(gen_frame + 0xe8)),-1,0x40);
  *(*(int * PTR32 *)(gen_frame + 0x6c)) = (int)((undefined1 *)(gen_frame + 0xe8));
  *(*(int * PTR32 *)(gen_frame + 0x7c)) = (int)((undefined1 *)(gen_frame + 0xe8));
  *(*(undefined4 * PTR32 *)(gen_frame + 0x8c)) = 0x3f;
  F_0042cbc0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x94)));
  F_0042c880(((undefined1 *)(gen_frame + 0x94)) GEN_EDX_ARG);
  F_00479ae0(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined1 *)(gen_frame + 0x58)) + *((int *)GEN_TOP(((*(int *)(gen_frame + 0x54)) + 4))) - 4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x12c))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x12c)));
  return (uint)param_1;
}

/* ref: FUN_004882b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004882b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4882b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00560a60(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 8)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_004882f0 */
GEN_OWN GEN_FRAME unsigned int F_004882f0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4882f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00488320 */
GEN_OWN GEN_FRAME unsigned int F_00488320(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x488320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 in_ECX = 0;
  
  F_00485c80(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_00488340 */
GEN_OWN GEN_FRAME unsigned int F_00488340(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x488340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 in_ECX = 0;
  
  F_00485ce0(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00488360 */
GEN_OWN GEN_FRAME unsigned int F_00488360(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x488360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00488390 */
GEN_OWN GEN_FRAME unsigned int F_00488390(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x488390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_004883c0 */
GEN_OWN GEN_FRAME unsigned int F_004883c0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4883c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x54) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_004883f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004883f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4883f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(this GEN_EDX_ARG,iVar1 + (int)this);
        *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54 + (int)this)));
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x58)));
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00488430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00488430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x488430u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00483c50(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00488460 */
GEN_OWN GEN_FRAME unsigned int F_00488460(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x488460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 in_ECX = 0;
  
  F_00485e30(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_00488480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00488480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x488480u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x69))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        local_8 = *((int *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) < (int)puVar2[3];
      }
      else {
        local_8 = *((int *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) <= (int)puVar2[3];
      }
      if (local_8 == false) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(*puVar2));
      }
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x69))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_00485880(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_004749b0(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((int)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((int *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00485880(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_0042c880(((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) GEN_EDX_ARG);
  F_00429760((*(int *)&gen_args[1]),0x6c,0x192);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00488570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00488570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x488570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int * this_00;
  uint uVar1;
  int iVar2;
  
  this_00 = ((int *)GEN_TOP(((int)this + 4)));
  iVar2 = *((int *)GEN_TOP(((int)this + 8))) - *this_00;
  if (*((char *)GEN_TOP(((int)this + 0x14))) != '\0') {
    (*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[0]) + 0)) = CONCAT11((char)(*(undefined4 *)&gen_args[0]),(char)((uint)(*(undefined4 *)&gen_args[0]) >> 8));
    F_00484510(this_00 GEN_EDX_FWD,iVar2 + 2);
    *((ushort *)GEN_TOP((*this_00 + iVar2))) = (ushort)(*(undefined4 *)&gen_args[0]);
    return (uint)(ushort)(*(undefined4 *)&gen_args[0]);
  }
  uVar1 = F_00484510(this_00 GEN_EDX_ARG,iVar2 + 2);
  *((ushort *)GEN_TOP((*this_00 + iVar2))) = (ushort)(*(undefined4 *)&gen_args[0]);
  return CONCAT22((short)(uVar1 >> 0x10),(ushort)(*(undefined4 *)&gen_args[0]));
}

/* ref: FUN_004885d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004885d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4885d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  uint * this;
  uint uVar1;
  int iVar2;
  
  this = ((uint *)GEN_TOP((param_1 + 4)));
  iVar2 = *((int *)GEN_TOP((param_1 + 8))) - *this;
  if (*((char *)GEN_TOP((param_1 + 0x14))) != '\0') {
    uVar1 = F_00484510(this GEN_EDX_FWD,iVar2 + 1);
    *((undefined1 *)GEN_TOP((*this + iVar2))) = param_2;
    return uVar1;
  }
  F_00484510(this GEN_EDX_ARG,iVar2 + 1);
  uVar1 = *this;
  *((undefined1 *)GEN_TOP((uVar1 + iVar2))) = param_2;
  return uVar1;
}

/* ref: FUN_00488620 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00488620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x488620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x6c,0,0x192)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x1a) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_1;
    puVar1[4] = param_1[1];
    F_0042cbc0(puVar1 + 5 GEN_EDX_ARG,param_1 + 2);
  }
  return (uint)puVar1;
}

/* ref: FUN_00488680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00488680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x488680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x74,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_1;
    puVar1[4] = param_1[1];
    puVar1[5] = param_1[2];
    F_0042cbc0(puVar1 + 6 GEN_EDX_ARG,param_1 + 3);
    *(undefined1 *)(puVar1 + 0x1b) = *(undefined1 *)(param_1 + 0x18);
  }
  return (uint)puVar1;
}

/* ref: FUN_004886f0 */
GEN_OWN GEN_FRAME uint F_004886f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4886f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_004860d0(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00488720 */
GEN_OWN GEN_FRAME uint F_00488720(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x488720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    uVar1 = F_0042cbc0(param_2 + 2 GEN_EDX_ARG,param_3 + 2);
  }
  return uVar1;
}

/* ref: FUN_00488750 */
GEN_OWN GEN_FRAME uint F_00488750(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x488750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00486180(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00488760 */
GEN_OWN GEN_FRAME uint F_00488760(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x488760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: FUN_004887a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004887a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4887a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00482990(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x48,400);
  return (uint)uVar1;
}

/* ref: Client::UI::Info::InfoProxyFreeCompany::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004887e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4887e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::UI::Info::InfoEventManager::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004887f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4887f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1091278));
  F_00484720(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00488820 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00488820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x488820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00487260(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00488850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00488850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x488850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  if (*((uint *)GEN_TOP(((int)this + 8))) <= *((int *)GEN_TOP(((int)this + 0x10))) + 1U) {
    F_004872b0(this GEN_EDX_FWD,1);
  }
  uVar3 = *((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10)));
  if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar3) {
    uVar3 = uVar3 - *((uint *)GEN_TOP(((int)this + 8)));
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4))) == 0) {
    uVar2 = F_004296a0(0xc,0,0x192);
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4))) = uVar2;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((uVar2 + uVar3 * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    uVar2 = param_1[2];
    puVar1[2] = uVar2;
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  return uVar2;
}

/* ref: FUN_004888c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004888c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4888c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00487420(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x192);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_004888f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004888f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4888f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00484c30(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x1c,400);
  return (uint)uVar1;
}

/* ref: FUN_00488940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00488940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x488940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00487650(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00488960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00488960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x488960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00484d00(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x10,400);
  return (uint)uVar1;
}

/* ref: FUN_004889a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004889a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4889a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 8))) <= *((int *)GEN_TOP(((int)this + 0x10))) + 1U) {
    F_00487750(this GEN_EDX_FWD,1);
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar2 == 0) {
    iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  }
  iVar2 = iVar2 - 1;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0x54,0,400);
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))) = uVar1;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  this_00 = *((undefined * PTR32 *)GEN_TOP((uVar1 + iVar2 * 4)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_0042cbc0(this_00 GEN_EDX_ARG,param_1);
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  *((int *)GEN_TOP(((int)this + 0xc))) = iVar2;
  return uVar1;
}

/* ref: FUN_00488a10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00488a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x488a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_004878c0(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00488a40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00488a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x488a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  iVar1 = (param_1[1] - *param_1) / 0x18;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 0x18;
    uVar2 = F_004296a0(iVar1,0,400);
    *(uint *)this = uVar2;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
    *((uint *)GEN_TOP(((int)this + 8))) = iVar1 + uVar2;
    uVar2 = F_00480d60(*param_1,param_1[1],uVar2,(int)this + 0xc,param_1);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
  }
  return (uint)this;
}

/* ref: FUN_00488ad0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00488ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x488ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x18) * 0x18,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_00488b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00488b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x488b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (*(uint *)this != uVar1) {
    uVar1 = F_0047d100(uVar1,uVar1,*(uint *)this,this);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00488b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00488b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x488b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004879f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00488ba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00488ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x488ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00487a80(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00488bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00488bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x488bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00487260(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x69))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x69))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x69)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x69)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x69)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x69)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00487b40(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00488c80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00488c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x488c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00488bc0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00488ca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00488ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x488ca0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar2 = F_00487da0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00487da0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00488d30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00488d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x488d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x18;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x18;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00487e80(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00487e80(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00488dc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00488dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x488dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 8)))) {
      F_005a2670(this_00 GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3) * 8,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_00488e10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00488e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x488e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  if (iVar2 != 0) {
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x5c) {
      F_0042c880(((undefined *)GEN_TOP((iVar2 + 8))) GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x5c) * 0x5c,0);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_00488e70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00488e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x488e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  undefined * pvVar1;
  undefined * this_00;
  undefined * pvVar2;
  
  if (param_2 != param_3) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    this_00 = param_2;
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 0x58)))) {
      F_0042ccf0(this_00 GEN_EDX_FWD,pvVar2);
      *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x54)));
      this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)));
    }
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (pvVar2 = this_00; pvVar2 != pvVar1; pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 0x58)))) {
      F_0042c880(pvVar2 GEN_EDX_ARG);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00488ef0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00488ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x488ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)))) {
      F_0042c880(this_00 GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58) * 0x58,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_00488f50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00488f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x488f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0xa8)))) {
      F_0042c880(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_FWD);
      F_0042c880(this_00 GEN_EDX_ARG);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xa8) * 0xa8,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_00488fc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00488fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x488fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  
  uVar2 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar2 = F_004296a0(param_1 * 8,0,400);
    F_004882b0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar2);
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    this_00 = *(undefined * PTR32 *)this;
    iVar3 = (int)pvVar1 - (int)this_00;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 8)))) {
        F_005a2670(this_00 GEN_EDX_ARG);
      }
      F_00429760(*(int *)this,(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3) * 8,400);
    }
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 8 + uVar2;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2 + (iVar3 >> 3) * 8;
    *(uint *)this = uVar2;
  }
  return uVar2;
}

/* ref: FUN_00489090 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00489090(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x489090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0x58)))) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_004890c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004890c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4890c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00485c80(param_1,param_2,(int)this + 0xc,param_2);
  return;
}

/* ref: FUN_004890e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004890e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4890e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00485ce0(param_1,param_2,(int)this + 0xc,param_2);
  return;
}

/* ref: FUN_00489100 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00489100(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x489100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0x58)))) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00489130 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00489130(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x489130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0x58)))) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00489160 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00489160(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x489160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0x54)))) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00489190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00489190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x489190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x58,0,400);
    F_004883f0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)))) {
        F_0042c880(this_00 GEN_EDX_ARG);
      }
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58) * 0x58,400);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = (((int)pvVar1 - iVar2) / 0x58) * 0x58 + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x58 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00489280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00489280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x489280u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00485070(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x71))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x71))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x71)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x71)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x71)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x71)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00484e10(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00489340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00489340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x489340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xa8;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xa8,0,400);
    F_00483c50(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00487fe0(iVar1,*((undefined4 *)GEN_TOP(((int)this + 4))));
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xa8) * 0xa8,400);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = ((iVar2 - iVar1) / 0xa8) * 0xa8 + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0xa8 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00489420 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00489420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x489420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00485e30(param_1,param_2,(int)this + 0xc,param_2);
  return;
}

/* ref: FUN_00489440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00489440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x489440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00488040(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00489460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00489460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x489460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  int * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  this_00 = ((int *)GEN_TOP(((int)this + 4)));
  iVar3 = *((int *)GEN_TOP(((int)this + 8))) - *this_00;
  F_00484510(this_00 GEN_EDX_FWD,iVar3 + 1);
  uVar2 = (*(uint *)&gen_args[2]) & 0xffff;
  *((undefined1 *)GEN_TOP((*this_00 + iVar3))) = *(*(undefined1 * PTR32 *)&gen_args[0]);
  iVar3 = *((int *)GEN_TOP(((int)this + 8))) - *this_00;
  uVar1 = uVar2;
  if (*((char *)GEN_TOP(((int)this + 0x14))) != '\0') {
    (*(undefined2 *)((char *)&(*(uint *)&gen_args[2]) + 0)) = CONCAT11((char)(*(uint *)&gen_args[2]),(char)((*(uint *)&gen_args[2]) >> 8));
    uVar1 = (uint)(ushort)(*(uint *)&gen_args[2]);
  }
  (*(uint *)&gen_args[2]) = uVar1;
  F_00484510(this_00 GEN_EDX_ARG,iVar3 + 2);
  *((ushort *)GEN_TOP((*this_00 + iVar3))) = (ushort)(*(uint *)&gen_args[2]);
  iVar3 = *((int *)GEN_TOP(((int)this + 8))) - *this_00;
  F_00484510(this_00 GEN_EDX_ARG,iVar3 + uVar2);
  uVar4 = F_00c46aa0(*this_00 + iVar3,(*(undefined4 *)&gen_args[1]),uVar2);
  return (uint)uVar4;
}

/* ref: FUN_004894f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004894f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4894f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  int * this;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 8))) - *((int *)GEN_TOP((param_1 + 4)));
  this = ((int *)GEN_TOP((param_1 + 4)));
  F_00484510(this GEN_EDX_FWD,iVar1 + 1);
  *((undefined1 *)GEN_TOP((*this + iVar1))) = *param_2;
  iVar1 = *((int *)GEN_TOP((param_1 + 8))) - *this;
  F_00484510(this GEN_EDX_ARG,iVar1 + 1);
  *((byte *)GEN_TOP((*this + iVar1))) = param_4;
  iVar1 = *((int *)GEN_TOP((param_1 + 8))) - *this;
  F_00484510(this GEN_EDX_ARG,iVar1 + (uint)param_4);
  uVar2 = F_00c46aa0(*this + iVar1,param_3,(uint)param_4);
  return (uint)uVar2;
}

/* ref: FUN_00489560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00489560(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x489560u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  int * this;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 8))) - *((int *)GEN_TOP((param_1 + 4)));
  this = ((int *)GEN_TOP((param_1 + 4)));
  F_00484510(this GEN_EDX_FWD,iVar1 + 1);
  *((undefined1 *)GEN_TOP((*this + iVar1))) = *param_2;
  iVar1 = *((int *)GEN_TOP((param_1 + 8))) - *this;
  F_00484510(this GEN_EDX_ARG,iVar1 + 1);
  *((byte *)GEN_TOP((*this + iVar1))) = param_4;
  iVar1 = *((int *)GEN_TOP((param_1 + 8))) - *this;
  F_00484510(this GEN_EDX_ARG,(uint)param_4 + iVar1);
  uVar2 = F_00c46aa0(*this + iVar1,param_3,(uint)param_4);
  return (uint)uVar2;
}

/* ref: FUN_004895d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004895d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4895d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x6c,0,0x192)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x1a) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
    F_0042cbc0(puVar1 + 5 GEN_EDX_ARG,param_2 + 2);
  }
  F_00488480(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00489640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00489640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x489640u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x74,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
    puVar1[5] = param_2[2];
    F_0042cbc0(puVar1 + 6 GEN_EDX_ARG,param_2 + 3);
    *(undefined1 *)(puVar1 + 0x1b) = *(undefined1 *)(param_2 + 0x18);
  }
  F_00485790(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_004896c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004896c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4896c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_004860d0(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_004896f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004896f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4896f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x6c,0,0x192)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x1a) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_1;
    puVar1[4] = param_1[1];
    F_0042cbc0(puVar1 + 5 GEN_EDX_ARG,param_1 + 2);
  }
  return (uint)puVar1;
}

/* ref: FUN_00489750 */
GEN_OWN GEN_FRAME uint F_00489750(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x489750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2 - param_1;
  iVar3 = param_1;
  iVar5 = param_2;
  iVar4 = param_3;
  do {
    uVar2 = iVar1 >> 2;
    if ((int)uVar2 < 0x21) {
LAB_004897e2: ;
      if (1 < (int)uVar2) {
        uVar2 = F_004813c0(iVar3,iVar5,param_4,0);
      }
      return uVar2;
    }
    if (iVar4 < 1) {
      if (0x20 < (int)uVar2) {
        if (4 < (int)(iVar5 - iVar3 & 0xfffffffcU)) {
          F_00481310(iVar3,iVar5,param_4,0,0);
        }
        uVar2 = F_00486180(iVar3,iVar5,param_4);
        return uVar2;
      }
      goto LAB_004897e2;
    }
    F_00485eb0(&(*(int *)(gen_frame + 0x0)),iVar3,iVar5,param_4);
    iVar4 = iVar4 / 2 + (iVar4 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x0)) - iVar3 & 0xfffffffcU) < (int)(iVar5 - (*(int *)(gen_frame + 0x4)) & 0xfffffffcU)) {
      F_00489750(iVar3,(*(int *)(gen_frame + 0x0)),iVar4,param_4);
      iVar3 = (*(int *)(gen_frame + 0x4));
    }
    else {
      F_00489750((*(int *)(gen_frame + 0x4)),iVar5,iVar4,param_4);
      iVar5 = (*(int *)(gen_frame + 0x0));
    }
    iVar1 = iVar5 - iVar3;
  } while( true );
}

/* ref: FUN_00489840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00489840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x489840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x1c,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 6) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_1;
    puVar1[4] = param_1[1];
    puVar1[5] = param_1[2];
  }
  return (uint)puVar1;
}

/* ref: FUN_00489890 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00489890(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x489890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined * this;
  
  if (param_1 == 1) {
    this = *((undefined * PTR32 *)GEN_TOP(*param_2));
    *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)this + 0x54))) < 1) {
      F_0042c880(this GEN_EDX_ARG);
      F_00406ad0(this);
    }
  }
  return;
}

/* ref: FUN_004898c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004898c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4898c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  iVar1 = param_1[1];
  iVar2 = *param_1;
  *(undefined4 *)this = 0;
  iVar1 = iVar1 - iVar2 >> 3;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 8;
    this_00 = ((undefined *)GEN_TOP(F_004296a0(iVar1,0,400)));
    *((undefined * PTR32 *)GEN_TOP(((int)this + 8))) = ((undefined *)GEN_TOP((iVar1 + (int)this_00)));
    *(undefined * PTR32 *)this = this_00;
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this_00;
    iVar1 = param_1[1];
    for (iVar2 = *param_1; iVar2 != iVar1; iVar2 = iVar2 + 8) {
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        F_00560a60(this_00 GEN_EDX_ARG,iVar2);
      }
      this_00 = ((undefined *)GEN_TOP(((int)this_00 + 8)));
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this_00;
  }
  return (uint)this;
}

/* ref: FUN_00489950 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00489950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x489950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_004878c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),8,400);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10904dc));
  return (uint)uVar1;
}

/* ref: Client::UI::Info::InfoProxyFreeCompany::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00489980(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x489980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x10912cc));
  param_1[0x124] = (*(undefined * PTR32 (*)[1])REFP(0x1091278));
  F_00484720(param_1 + 0x125 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004899c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004899c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4899c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  ulonglong uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10912ec));
  F_00482990(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x34))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x34))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x34))),0x48,400);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x20)));
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 0x28))) - iVar1) / 0x18) * 0x18,400);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  uVar2 = F_00406b30(*((undefined4 *)GEN_TOP(((int)this + 0x18))));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  return (uint)uVar2;
}

/* ref: Client::UI::Info::InfoProxyPartyMember::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00489a60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x489a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_004899c0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00489a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00489a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x489a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00484d00(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x10,400);
  return (uint)uVar1;
}

/* ref: Client::UI::Misc::LogFilterConfig::vf4 */
GEN_OWN GEN_NOFRAME uint F_00489ad0(void)
{
  GEN_ENTER(0x489ad0u, 0u, 0u, 0u, 0u);
  return 0x800;
}

/* ref: Client::UI::Misc::LogFilterConfig::vf5 */
GEN_OWN GEN_NOFRAME uint F_00489ae0(void)
{
  GEN_ENTER(0x489ae0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::UI::Misc::LogFilterConfig::vf6 */
GEN_OWN GEN_NOFRAME uint F_00489af0(void)
{
  GEN_ENTER(0x489af0u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: Client::UI::Misc::LogFilterConfig::vf7 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00489b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x489b00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if ((param_1 != 0 || param_2 != 0) &&
     ((param_1 != *(int *)(this + 8) || (param_2 != *(int *)(this + 0xc))))) {
    this[0x2c] = (undefined1)0x1;
  }
  *(int *)(this + 8) = param_1;
  *(int *)(this + 0xc) = param_2;
  if (param_1 == 0 && param_2 == 0) {
    F_0044bb10(this GEN_EDX_FWD);
  }
  return;
}

/* ref: FUN_00489b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00489b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x489b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00484c30(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x1c,400);
  return (uint)uVar1;
}

/* ref: Client::UI::Shell::ShellCommandLookParty::vf1 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00489ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x489ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x84, 12, 4);
  int iVar1;
  undefined * this_00;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80));
  (*(uint *)(gen_frame + 0x24)) = param_1;
  if (param_2 == ((int *)GEN_TOP(0x0))) {
    return 7;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x44))))(param_2 GEN_EDX_FWD);
  this_00 = *((undefined * PTR32 *)GEN_TOP((uVar4 + 0x28)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 7;
  }
  uVar4 = F_0077a990(*((undefined4 *)GEN_TOP(((int)this_00 + 0x18))),*((undefined4 *)GEN_TOP(((int)this_00 + 0x1c))));
  iVar5 = *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x24)) + 0x14))) - *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x24)) + 0x10)));
  iVar1 = iVar5 >> 0x1f;
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  if (iVar5 / 0x54 + iVar1 != iVar1) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG,&REFG(undefined, 0x1091348),REFG(undefined4, 0x108cc50));
    F_00ada2c0(*((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x24)) + 0x10))),((undefined1 *)(gen_frame + 0x28)),&(*(int *)(gen_frame + 0x0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
  }
  cVar3 = REFG(char, 0x14ab0d4);
  iVar1 = ((*(int *)(gen_frame + 0x4)) - (*(int *)(gen_frame + 0x0))) / 0x54;
  if (iVar1 == 0) {
    (*(uint *)(gen_frame + 0x20)) = -(uint)(uVar4 != 4) & 4;
  }
  else {
    (*(uint *)(gen_frame + 0x20)) = 4;
  }
  (*(uint *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 1 << GEN_SHC(REFG(char, 0x14ab0d4) - 1U, REFG(char, 0x14ab0d4) - 1U);
  if (0 < iVar1) {
    (*(int *)(gen_frame + 0x1c)) = 0;
    (*(int *)(gen_frame + 0x10)) = iVar1;
    do {
      bVar2 = F_0043da00(param_2,(*(int *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x1c)),&(*(int *)(gen_frame + 0x18)));
      if (bVar2 == 0) {
        bVar2 = F_0043dac0(param_2,(*(int *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x1c)),&(*(int *)(gen_frame + 0x18)));
        iVar1 = (*(int *)(gen_frame + 0x18));
        if ((bVar2 != 0) && (uVar4 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(*(int *)(gen_frame + 0x18)),1), (short)uVar4 != 0)) {
          (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) | 1 << GEN_SHC((char)iVar1 - 1U, (char)iVar1 - 1U);
        }
      }
      else {
        switch((unsigned int)(uintptr_t)((*(int *)(gen_frame + 0x18)))) {
        case 0: ;
          (*(uint *)(gen_frame + 0x20)) = 4;
          break;
        case 2: ;
          (*(uint *)(gen_frame + 0x20)) = 0;
          break;
        case 0xe6: ;
        case 0xe8: ;
        case 0xea: ;
        case 0xec: ;
          (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) | 1 << GEN_SHC((byte)((*(int *)(gen_frame + 0x18)) - 0xe6 >> 1), (byte)((*(int *)(gen_frame + 0x18)) - 0xe6 >> 1));
        }
      }
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 0x54;
      iVar1 = (*(int *)(gen_frame + 0x10)) - 1;
      (*(int *)(gen_frame + 0x10)) = iVar1;
    } while (iVar1 != 0);
  }
  if ((*(uint *)(gen_frame + 0x20)) == 4) {
    if ((*((uint *)GEN_TOP(((int)this_00 + 0x20))) != (*(uint *)(gen_frame + 0x14))) ||
       (*((int *)GEN_TOP(((int)this_00 + 0x24))) != (int)(*(uint *)(gen_frame + 0x14)) >> 0x1f)) {
      *((uint *)GEN_TOP(((int)this_00 + 0x20))) = (*(uint *)(gen_frame + 0x14));
      *((int *)GEN_TOP(((int)this_00 + 0x24))) = (int)(*(uint *)(gen_frame + 0x14)) >> 0x1f;
      *((undefined1 *)GEN_TOP(((int)this_00 + 0x1ec))) = 1;
    }
    if (*((char *)GEN_TOP(((int)this_00 + 0x28))) != cVar3) {
      *((char *)GEN_TOP(((int)this_00 + 0x28))) = cVar3;
      *((undefined1 *)GEN_TOP(((int)this_00 + 0x1ec))) = 1;
    }
    if ((((*(uint *)(gen_frame + 0x24)) != 0) && (cVar3 = (char)(*(uint *)(gen_frame + 0x24)), cVar3 != '\0')) &&
       (*((char *)GEN_TOP(((int)this_00 + 0x29))) != cVar3)) {
      *((char *)GEN_TOP(((int)this_00 + 0x29))) = cVar3;
      *((undefined1 *)GEN_TOP(((int)this_00 + 0x1ec))) = 1;
    }
  }
  uVar6 = F_0077a9f0((*(uint *)(gen_frame + 0x20)));
  if ((*((int *)GEN_TOP(((int)this_00 + 0x18))) != (int)uVar6) ||
     (*((int *)GEN_TOP(((int)this_00 + 0x1c))) != (int)(uVar6 >> 0x20))) {
    *((ulonglong *)GEN_TOP(((int)this_00 + 0x18))) = uVar6;
    *((undefined1 *)GEN_TOP(((int)this_00 + 0x1ec))) = 1;
  }
  F_004408a0(this_00 GEN_EDX_ARG,0);
  F_004876d0(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00489f20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00489f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x489f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00487a80(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x78,400);
  return (uint)uVar1;
}

/* ref: FUN_00489f60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00489f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x489f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00488bc0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x6c,0x192);
  return (uint)uVar1;
}

/* ref: FUN_00489fa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00489fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x489fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_0047f720(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]));
  (*(uint *)&gen_args[0]) = 0;
  F_004835f0((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[0]),0);
  F_00488bc0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  return (*(uint *)&gen_args[0]);
}

/* ref: FUN_0048a040 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0048a040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x48a040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00488ca0(this GEN_EDX_FWD,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x54) * 0x54 + *(int *)this);
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x54;
      return;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00488ca0(this GEN_EDX_ARG,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x54;
  return;
}

/* ref: FUN_0048a100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0048a100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x48a100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00488d30(this GEN_EDX_FWD,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0x18) * 0x18)));
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      puVar2[5] = puVar1[5];
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x18;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00488d30(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      puVar3[3] = param_1[3];
      puVar3[4] = param_1[4];
      puVar3[5] = param_1[5];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x18;
  return (uint)puVar3;
}

/* ref: FUN_0048a1f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0048a1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x48a1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00488e70(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_0048a220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0048a220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x48a220u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00488fc0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00488fc0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0048a290 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0048a290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x48a290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)))) {
      F_0042c880(this_00 GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58) * 0x58,0);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_0048a2f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0048a2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x48a2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00485c80(*(int *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x1b8) * 0x1b8,0);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_0048a360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0048a360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x48a360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00485ce0(*(int *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x170) * 0x170,0);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_0048a3d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0048a3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x48a3d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)))) {
      F_0042c880(this_00 GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58) * 0x58,0);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_0048a430 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0048a430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x48a430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)))) {
      F_0042c880(this_00 GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58) * 0x58,0);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_0048a490 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0048a490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x48a490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x54)))) {
      F_0042c880(this_00 GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54) * 0x54,0);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_0048a4f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0048a4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x48a4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x58;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00489190(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00489190(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0048a580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0048a580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x48a580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00489280(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_0048a5a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0048a5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x48a5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0xa8;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xa8;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00489340(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00489340(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0048a630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0048a630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x48a630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00485e30(*(int *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x150) * 0x150,400
                        );
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_0048a6a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0048a6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x48a6a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint * puVar1;
  uint uVar2;
  uint * puVar3;
  uint * local_8;
  
  puVar3 = *((uint * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)param_1 + 0x69))) == '\0') {
    puVar1 = ((uint *)GEN_TOP(F_004296a0(0x6c,0,0x192)));
    *puVar1 = *((uint *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((uint *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((uint *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    if (puVar1 + 3 != ((uint *)GEN_TOP(0x0))) {
      puVar1[3] = param_1[3];
      puVar1[4] = param_1[4];
      F_0042cbc0(puVar1 + 5 GEN_EDX_ARG,param_1 + 5);
    }
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 0x1a) = *(undefined1 *)(param_1 + 0x1a);
    local_8 = puVar3;
    if (*((char *)GEN_TOP(((int)puVar3 + 0x69))) != '\0') {
      local_8 = puVar1;
    }
    uVar2 = F_0048a6a0(this GEN_EDX_ARG,((undefined4 *)GEN_TOP(*param_1)),(uint)puVar1);
    *puVar1 = uVar2;
    uVar2 = F_0048a6a0(this GEN_EDX_ARG,((undefined4 *)GEN_TOP(param_1[2])),(uint)puVar1);
    puVar1[2] = uVar2;
    puVar3 = local_8;
  }
  return (uint)puVar3;
}

/* ref: FUN_0048a750 */
GEN_OWN GEN_FRAME uint F_0048a750(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x48a750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00489750(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return uVar1;
}

/* ref: FUN_0048a780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0048a780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x48a780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x1c,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 6) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
    puVar1[5] = param_2[2];
  }
  F_00482e90(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_0048a7e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0048a7e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x48a7e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined * this;
  undefined4 * puVar1;
  
  puVar1 = param_1;
  if ((param_1 != ((undefined4 *)GEN_TOP(0x0))) && (param_1 == ((undefined4 *)GEN_TOP(0x1)))) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_2));
    this = ((undefined *)GEN_TOP(*puVar1));
    *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)this + 0x54))) < 1) {
      F_0042c880(this GEN_EDX_ARG);
      puVar1 = ((undefined4 *)GEN_TOP(F_00406ad0(this)));
    }
  }
  return (uint)puVar1;
}

/* ref: FUN_0048a820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0048a820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x48a820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_004898c0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_0048a850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0048a850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x48a850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00487a80(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x78,400);
  return (uint)uVar1;
}

/* ref: FUN_0048a890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0048a890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x48a890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00488bc0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x6c,0x192);
  return (uint)uVar1;
}

/* ref: FUN_0048a8d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0048a8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x48a8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00488bc0(((undefined *)GEN_TOP(((int)this + 0x72c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x730))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x730))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x730))),0x6c,0x192);
  F_00a4b160(((undefined *)GEN_TOP(((int)this + 0x708))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0048a930 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0048a930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x48a930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00488dc0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: Client::UI::Misc::LogFilterConfig::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0048a950(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x48a950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_004564b0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0048a9a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0048a9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x48a9a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00488ef0(((undefined *)GEN_TOP(((int)this + 0xb8))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: Client::UI::Shell::ShellCommandEcho::vf1 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0048a9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x48a9e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x104, 12, 4);
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  int iVar4;
  undefined4 uVar5;
  undefined1 * puVar6;
  undefined * pvVar7;
  undefined4 uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xfc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x100));
  if ((param_2 != ((int *)GEN_TOP(0x0))) &&
     (iVar4 = *((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x10))), iVar1 = iVar4 >> 0x1f,
     iVar4 / 0x54 + iVar1 != iVar1)) {
    uVar5 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_FWD);
    pvVar7 = ((undefined *)GEN_TOP((uVar2 + 0x10)));
    uVar3 = F_00a27410(((undefined *)GEN_TOP((uVar2 + 0x110))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)),uVar5,uVar2,1,0x3ff);
    F_0042ccf0(pvVar7 GEN_EDX_ARG,uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    F_00a27330(((undefined *)GEN_TOP((uVar2 + 0x110))) GEN_EDX_ARG,pvVar7);
    F_0042cbc0(((char * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG,pvVar7);
    if (*((char * PTR32 *)(gen_frame + 0xa8))[0] != '\0') {
      F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG);
      *((undefined1 *)GEN_TOP((uVar2 + 0x1b4))) = 0;
      pvVar7 = ((undefined *)GEN_TOP((uVar2 + 0x10)));
      uVar2 = F_00a27410(((undefined *)GEN_TOP((uVar2 + 0x110))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((char * PTR32 *)(gen_frame + 0xa8)),uVar2,0,0xffffffff);
      F_0042ccf0(pvVar7 GEN_EDX_ARG,uVar2);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar8 = 0;
      puVar6 = ((undefined1 *)(gen_frame + 0x54));
      uVar5 = 0x38;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x28))))(param_2 GEN_EDX_ARG)));
      F_00459b00(this_00 GEN_EDX_ARG,uVar5,puVar6,pvVar7,uVar8);
      F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
      F_0042c880(((char * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
      return 0;
    }
    F_0042c880(((char * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
  }
  return 7;
}

/* ref: Client::UI::Shell::ShellCommandChatSay::vf1 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0048ab50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x48ab50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0xb0, 0, 4);
  int iVar1;
  int * this_00;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  float * pfVar6;
  int iVar7;
  char * PTR32 * ppcVar8;
  undefined1 * puVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac));
  bVar2 = F_00a620a0();
  if (bVar2 != 0) {
    return 0xb;
  }
  iVar7 = *((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x10)));
  iVar1 = iVar7 >> 0x1f;
  if (iVar7 / 0x54 + iVar1 == iVar1) {
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x20))))(param_2 GEN_EDX_ARG)));
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x10903d4),REFG(undefined4, 0x108cc50));
    bVar2 = F_00abe720(pvVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (bVar2 != 0) {
      *((undefined4 *)GEN_TOP(((int)pvVar4 + 0x718))) = 1;
    }
  }
  else {
    uVar3 = F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    this_00 = REFG(int * PTR32, 0x1379694);
    if ((uVar3 != 0) && (REFG(int * PTR32, 0x1379694) != ((int *)GEN_TOP(0x0)))) {
      uVar11 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG)));
      uVar5 = F_0043a500(pvVar4 GEN_EDX_ARG,uVar11);
      F_0042cbc0(((char * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar5);
      if (*((char * PTR32 *)(gen_frame + 0x54))[0] != '\0') {
        uVar11 = 10;
        uVar5 = F_0042a970(((char * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG);
        F_00aa5d80(this_00 GEN_EDX_ARG,uVar5,uVar11);
        pfVar6 = ((float *)GEN_TOP(F_00a5feb0(this_00 GEN_EDX_ARG)));
        F_00974e60(uVar3 GEN_EDX_ARG,this_00[0x1d],*pfVar6,pfVar6[1],pfVar6[2],GEN_ARGF(gen_bits2f(this_00[0x2c])),
                     ((char * PTR32 *)(gen_frame + 0x54)),10);
        uVar11 = REFG(undefined4, 0x108cc50);
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xc))))(this_00 GEN_EDX_ARG);
        F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar3,uVar11);
        uVar12 = 0;
        uVar10 = 0;
        ppcVar8 = ((char * PTR32 *)(gen_frame + 0x54));
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG);
        uVar3 = F_0043a560(uVar3 GEN_EDX_ARG,ppcVar8,uVar10);
        puVar9 = ((undefined1 *)(gen_frame + 0x0));
        uVar11 = 10;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x28))))(param_2 GEN_EDX_ARG)));
        F_00459b00(pvVar4 GEN_EDX_ARG,uVar11,puVar9,uVar3,uVar12);
        F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      F_0042c880(((char * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandChatYell::vf1 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0048ad10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x48ad10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0xb0, 0, 4);
  int iVar1;
  int * this_00;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  float * pfVar6;
  int iVar7;
  char * PTR32 * ppcVar8;
  undefined1 * puVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac));
  bVar2 = F_00a620a0();
  if (bVar2 != 0) {
    return 0xb;
  }
  iVar7 = *((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x10)));
  iVar1 = iVar7 >> 0x1f;
  if (iVar7 / 0x54 + iVar1 == iVar1) {
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x20))))(param_2 GEN_EDX_ARG)));
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x10903ec)),REFG(undefined4, 0x108cc50));
    bVar2 = F_00abe720(pvVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (bVar2 != 0) {
      *((undefined4 *)GEN_TOP(((int)pvVar4 + 0x718))) = 3;
    }
  }
  else {
    uVar3 = F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    this_00 = REFG(int * PTR32, 0x1379694);
    if ((uVar3 != 0) && (REFG(int * PTR32, 0x1379694) != ((int *)GEN_TOP(0x0)))) {
      uVar11 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG)));
      uVar5 = F_0043a500(pvVar4 GEN_EDX_ARG,uVar11);
      F_0042cbc0(((char * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar5);
      if (*((char * PTR32 *)(gen_frame + 0x54))[0] != '\0') {
        uVar11 = 0x1e;
        uVar5 = F_0042a970(((char * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG);
        F_00aa5d80(this_00 GEN_EDX_ARG,uVar5,uVar11);
        pfVar6 = ((float *)GEN_TOP(F_00a5feb0(this_00 GEN_EDX_ARG)));
        F_00974e60(uVar3 GEN_EDX_ARG,this_00[0x1d],*pfVar6,pfVar6[1],pfVar6[2],GEN_ARGF(gen_bits2f(this_00[0x2c])),
                     ((char * PTR32 *)(gen_frame + 0x54)),0x1e);
        uVar11 = REFG(undefined4, 0x108cc50);
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xc))))(this_00 GEN_EDX_ARG);
        F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar3,uVar11);
        uVar12 = 0;
        uVar10 = 0;
        ppcVar8 = ((char * PTR32 *)(gen_frame + 0x54));
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG);
        uVar3 = F_0043a560(uVar3 GEN_EDX_ARG,ppcVar8,uVar10);
        puVar9 = ((undefined1 *)(gen_frame + 0x0));
        uVar11 = 0x1e;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x28))))(param_2 GEN_EDX_ARG)));
        F_00459b00(pvVar4 GEN_EDX_ARG,uVar11,puVar9,uVar3,uVar12);
        F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      F_0042c880(((char * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandChatShout::vf1 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0048aed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x48aed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0xb0, 0, 4);
  int iVar1;
  int * this_00;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  float * pfVar6;
  int iVar7;
  char * PTR32 * ppcVar8;
  undefined1 * puVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac));
  bVar2 = F_00a620a0();
  if (bVar2 != 0) {
    return 0xb;
  }
  iVar7 = *((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x10)));
  iVar1 = iVar7 >> 0x1f;
  if (iVar7 / 0x54 + iVar1 != iVar1) {
    uVar3 = F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    this_00 = REFG(int * PTR32, 0x1379694);
    if ((uVar3 != 0) && (REFG(int * PTR32, 0x1379694) != ((int *)GEN_TOP(0x0)))) {
      uVar11 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG)));
      uVar5 = F_0043a500(pvVar4 GEN_EDX_ARG,uVar11);
      F_0042cbc0(((char * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar5);
      if (*((char * PTR32 *)(gen_frame + 0x54))[0] != '\0') {
        uVar11 = 0xb;
        uVar5 = F_0042a970(((char * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG);
        F_00aa5d80(this_00 GEN_EDX_ARG,uVar5,uVar11);
        pfVar6 = ((float *)GEN_TOP(F_00a5feb0(this_00 GEN_EDX_ARG)));
        F_00974e60(uVar3 GEN_EDX_ARG,this_00[0x1d],*pfVar6,pfVar6[1],pfVar6[2],GEN_ARGF(gen_bits2f(this_00[0x2c])),
                     ((char * PTR32 *)(gen_frame + 0x54)),0xb);
        uVar11 = REFG(undefined4, 0x108cc50);
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xc))))(this_00 GEN_EDX_ARG);
        F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar3,uVar11);
        uVar12 = 0;
        uVar10 = 0;
        ppcVar8 = ((char * PTR32 *)(gen_frame + 0x54));
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG);
        uVar3 = F_0043a560(uVar3 GEN_EDX_ARG,ppcVar8,uVar10);
        puVar9 = ((undefined1 *)(gen_frame + 0x0));
        uVar11 = 0xb;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x28))))(param_2 GEN_EDX_ARG)));
        F_00459b00(pvVar4 GEN_EDX_ARG,uVar11,puVar9,uVar3,uVar12);
        F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      F_0042c880(((char * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    }
    return 0;
  }
  return 7;
}

/* ref: Client::UI::Shell::ShellCommandChatParty::vf1 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0048b060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x48b060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x104, 12, 4);
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined * this_00;
  int iVar7;
  undefined1 * puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xfc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x100));
  iVar1 = *((int *)GEN_TOP((param_1 + 0x10)));
  iVar7 = *((int *)GEN_TOP((param_1 + 0x14))) - iVar1;
  iVar2 = iVar7 >> 0x1f;
  if (iVar7 / 0x54 + iVar2 == iVar2) {
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x20))))(param_2 GEN_EDX_FWD)));
    F_0042cc20(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,((char *)REFP(0x10903e4)),REFG(undefined4, 0x108cc50));
    bVar3 = F_00abe720(pvVar6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa8)));
    F_0042c880(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
    if (bVar3 != 0) {
      *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x718))) = 2;
    }
    return 0;
  }
  if (REFG(char, 0x1338ad4) == '\0') {
    return 6;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG);
  pvVar6 = ((undefined *)GEN_TOP((uVar4 + 0x10)));
  uVar5 = F_00a27410(((undefined *)GEN_TOP((uVar4 + 0x110))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa8)),iVar1,uVar4,1,0x3ff);
  F_0042ccf0(pvVar6 GEN_EDX_ARG,uVar5);
  F_0042c880(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
  F_00a27330(((undefined *)GEN_TOP((uVar4 + 0x110))) GEN_EDX_ARG,pvVar6);
  F_0042cbc0(((char * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,pvVar6);
  pvVar6 = REFG(void * PTR32, 0x1379694);
  if (*((char * PTR32 *)(gen_frame + 0x54))[0] != '\0') {
    if (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0))) {
      uVar9 = 0xe;
      uVar4 = F_0042a970(((char * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG);
      F_00aa5d80(pvVar6 GEN_EDX_ARG,uVar4,uVar9);
    }
    pvVar6 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    F_00974ee0(pvVar6 GEN_EDX_ARG,REFG(undefined4, 0x1338ac8),REFG(undefined4, 0x1338acc),((char * PTR32 *)(gen_frame + 0x54)));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x44))))(param_2 GEN_EDX_ARG);
    if (((**((char * PTR32 *)GEN_TOP((uVar4 + 0x50))) == '\0') && (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 8))) + 8))) != 0)) &&
       (iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 8))) + 0x18))), iVar1 != 0)) {
      F_0042e430(((undefined *)GEN_TOP((uVar4 + 0x50))) GEN_EDX_ARG,iVar1 + 0x1c);
    }
    uVar4 = F_0042a990(((undefined *)GEN_TOP((uVar4 + 0x50))) GEN_EDX_ARG);
    F_0042cc20(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,uVar4,REFG(undefined4, 0x108cc50));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG);
    *((undefined1 *)GEN_TOP((uVar4 + 0x1b4))) = 1;
    pvVar6 = ((undefined *)GEN_TOP((uVar4 + 0x10)));
    uVar4 = F_00a27410(((undefined *)GEN_TOP((uVar4 + 0x110))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((char * PTR32 *)(gen_frame + 0x54)),uVar4,0,0xffffffff);
    F_0042ccf0(pvVar6 GEN_EDX_ARG,uVar4);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar10 = 0;
    puVar8 = ((undefined1 *)(gen_frame + 0xa8));
    uVar9 = 0xe;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x28))))(param_2 GEN_EDX_ARG)));
    F_00459b00(this_00 GEN_EDX_ARG,uVar9,puVar8,pvVar6,uVar10);
    F_0042c880(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
  }
  F_0042c880(((char * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandEmote::vf1 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0048bad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x48bad0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0xd4, 12, 4);
  short sVar1;
  int iVar2;
  int * this_00;
  byte bVar3;
  uint uVar4;
  undefined * pvVar5;
  float * pfVar6;
  int * piVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined1 * puVar11;
  undefined1 * puVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  
  this_00 = REFG(int * PTR32, 0x1379694);
  GEN_COOKIE((*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0));
  (*(int * PTR32 *)(gen_frame + 0x20)) = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) == ((int *)GEN_TOP(0x0))) {
    return 2;
  }
  if (*param_1 == 0x191) {
    bVar3 = F_00a620a0();
    if (bVar3 != 0) {
      return 0xb;
    }
    if ((*(int *)(param_1 + 10) - *(int *)(param_1 + 8)) / 0x54 == 0) {
      return 7;
    }
    uVar4 = F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)GEN_TOP(uVar4));
    if (uVar4 != 0) {
      uVar10 = *(undefined4 *)(param_1 + 8);
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG)));
      uVar4 = F_0043a500(pvVar5 GEN_EDX_ARG,uVar10);
      F_0042cbc0(((undefined1 *)(gen_frame + 0x78)) GEN_EDX_ARG,uVar4);
      pfVar6 = ((float *)GEN_TOP(F_00a5feb0(this_00 GEN_EDX_ARG)));
      F_00974e60((*(int * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,this_00[0x1d],*pfVar6,pfVar6[1],pfVar6[2],GEN_ARGF(gen_bits2f(this_00[0x2c])),
                   ((undefined1 *)(gen_frame + 0x78)),0x1c);
      uVar13 = 0;
      puVar12 = ((undefined1 *)(gen_frame + 0x78));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x24))))(param_2 GEN_EDX_ARG);
      uVar4 = F_0043a560(uVar4 GEN_EDX_ARG,puVar12,uVar13);
      F_0042ccf0(((undefined1 *)(gen_frame + 0x78)) GEN_EDX_ARG,uVar4);
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x14))))(param_2 GEN_EDX_ARG)));
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG)));
      if (*piVar7 - 1U < 3) {
        F_0042d190(((undefined1 *)(gen_frame + 0x78)) GEN_EDX_ARG,0x20);
      }
      uVar10 = REFG(undefined4, 0x108cc50);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xc))))(this_00 GEN_EDX_ARG);
      F_0042cc20(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG,uVar4,uVar10);
      uVar14 = 0;
      puVar12 = ((undefined1 *)(gen_frame + 0x78));
      puVar11 = ((undefined1 *)(gen_frame + 0x24));
      uVar10 = 0x1c;
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x28))))(param_2 GEN_EDX_ARG)));
      F_00459b00(pvVar5 GEN_EDX_ARG,uVar10,puVar11,puVar12,uVar14);
      F_0042c880(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x78)) GEN_EDX_ARG);
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 10) - (int)*(undefined * PTR32 *)(param_1 + 8);
    iVar2 = iVar8 >> 0x1f;
    uVar4 = 1;
    if (iVar8 / 0x54 + iVar2 != iVar2) {
      bVar3 = F_0042b6a0(*(undefined * PTR32 *)(param_1 + 8) GEN_EDX_ARG,&REFG(undefined, 0x109134c));
      if (bVar3 != 0) {
        if ((uint)((*(int *)(param_1 + 10) - *(int *)(param_1 + 8)) / 0x54) < 2) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = F_00a4cf70(*(int *)(param_1 + 8) + 0x54,10);
        }
      }
    }
    sVar1 = param_1[1];
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1090544));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 0)) = 0xe0000000;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 4)) = 0;
    (*(ulonglong *)(gen_frame + 0x8)) = 0xe0000000;
    (*(ushort *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
    (*(uint *)(gen_frame + 0x18)) = 1;
    if ((sVar1 == 0) || ((*(uint *)(param_1 + 2) & 0xfffffffe) != 0x16)) {
      bVar3 = 0;
    }
    else {
      bVar3 = 1;
    }
    uVar9 = F_00533c20(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    (*(ulonglong *)(gen_frame + 0x8)) = uVar9;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x10)) + 0)) = bVar3;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x10)) + 1)) = 0;
    (*(ushort *)(gen_frame + 0x10)) = (ushort)bVar3;
    (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
    (*(uint *)(gen_frame + 0x18)) = uVar4;
    F_00aa0ed0((*(int * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,*param_1 - 0x191,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandSearch::vf1 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0048bda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x48bda0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x8c, 4, 4);
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  int * piVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x84)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x88));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  uVar7 = 0x30;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x48))))(param_2 GEN_EDX_FWD);
  this_00 = ((undefined *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar7)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x14))))(param_2 GEN_EDX_ARG)));
  puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG)));
  uVar7 = *puVar4;
  F_0042b630(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_0077c0f0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar7);
  (*(undefined * PTR32 *)(gen_frame + 0xc))[4] = (undefined1)0x0;
  (*(int *)(gen_frame + 0x0)) = (*((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x10)))) / 0x54;
  iVar5 = 0;
  (*(char *)(gen_frame + 0x13)) = '\0';
  (*(uint *)(gen_frame + 0x8)) = 0;
  if (0 < (*(int *)(gen_frame + 0x0))) {
    do {
      if ((*(uint *)(gen_frame + 0x8)) == 1) {
        uVar6 = 0;
LAB_0048bed6: ;
        uVar2 = F_0042a990(*((int *)GEN_TOP((param_1 + 0x10))) + iVar5 GEN_EDX_ARG);
        F_0077c140(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar2,uVar6);
        (*(uint *)(gen_frame + 0x8)) = 0;
      }
      else {
        if ((*(uint *)(gen_frame + 0x8)) == 2) {
          uVar6 = 1;
          goto LAB_0048bed6;
        }
        bVar1 = F_0043da00(param_2,*((int *)GEN_TOP((param_1 + 0x10))) + iVar5,&(*(int *)(gen_frame + 0x4)));
        if (bVar1 == 0) {
          bVar1 = F_0043dac0(param_2,*((int *)GEN_TOP((param_1 + 0x10))) + iVar5,&(*(int *)(gen_frame + 0x4)));
          if (bVar1 == 0) {
            F_004582f0(((undefined1 *)(gen_frame + 0x14)),*((int *)GEN_TOP((param_1 + 0x10))) + iVar5);
          }
          else {
            if ((*(char *)(gen_frame + 0x13)) == '\0') {
              F_0077c200(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,0,0,1);
              (*(char *)(gen_frame + 0x13)) = '\x01';
            }
            F_0077c200(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x4)) - 1,1,0);
          }
        }
        else {
          uVar2 = F_0043d570((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x4)));
          (*(uint *)(gen_frame + 0x8)) = uVar2;
        }
      }
      iVar5 = iVar5 + 0x54;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  F_0087ddb0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandFaq::vf1 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0048bf30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x48bf30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0xb0, 0, 4);
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac));
  if ((param_2 != ((int *)GEN_TOP(0x0))) && (iVar1 = *((int *)GEN_TOP((param_1 + 4))), -1 < iVar1)) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x18))))(param_2 GEN_EDX_FWD);
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar2 + 0x34))) + 8))))
                              (*((int * PTR32 *)GEN_TOP((uVar2 + 0x34))) GEN_EDX_ARG,((char *)REFP(0x1091354)))));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x24))))(piVar3 GEN_EDX_ARG,iVar1)));
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        uVar7 = 7;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG)));
        uVar2 = F_00cb0950(pvVar4 GEN_EDX_ARG,uVar7);
        if (uVar2 != 0) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar2,REFG(undefined4, 0x108cc50));
          F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
          uVar8 = 0;
          puVar6 = ((undefined1 *)(gen_frame + 0x0));
          puVar5 = ((undefined1 *)(gen_frame + 0x54));
          uVar7 = 0x39;
          pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x28))))(param_2 GEN_EDX_ARG)));
          F_00459b00(pvVar4 GEN_EDX_ARG,uVar7,puVar5,puVar6,uVar8);
          F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        }
      }
    }
    return 0;
  }
  return 7;
}

/* ref: Client::UI::Shell::ShellCommandGM::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0048c030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x48c030u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  char * pcVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD,param_1,param_2,param_3);
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      pcVar3 = ((char *)REFP(0x1091360));
    }
    else {
      if (uVar1 != 2) {
        return 0;
      }
      piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      pcVar3 = ((char *)REFP(0x1091374));
    }
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
    F_0045a500(this_00 GEN_EDX_ARG,pcVar3);
  }
  return 1;
}

/* ref: Client::UI::Shell::ShellCommandGM::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0048c090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x48c090u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x220, 0);
  longlong lVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  undefined4 * puVar8;
  char * pcVar9;
  float * pfVar10;
  uint uVar11;
  undefined * pvVar12;
  uint * puVar13;
  int iVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  double dVar18;
  undefined4 uVar19;
  undefined1 * puVar20;
  undefined1 * puVar21;
  undefined4 uVar22;
  undefined4 uVar24;
  undefined * PTR32 * ppuVar25;
  undefined8 uVar23;
  
  (*(uint *)(gen_frame + 0x20c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x210);
  (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP(param_3));
  (*(ulonglong *)(gen_frame + 0x18)) = CONCAT44(param_3,(undefined4)(*(ulonglong *)(gen_frame + 0x18)));
  iVar14 = (param_1[1] - *param_1) / 0x54;
  (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
  (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = REFG(undefined4 * PTR32, 0x1379694);
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = REFG(undefined4 * PTR32, 0x1379694);
  (*(int *)(gen_frame + 0x24)) = iVar14;
  if ((REFG(undefined4 * PTR32, 0x1379694) == ((undefined4 *)GEN_TOP(0x0))) || (*((char *)GEN_TOP(((int)REFG(undefined4 * PTR32, 0x1379694) + 0x189))) == '\0')) {
    return 3;
  }
  ((uint *)(gen_frame + 0xe0))[2] = 0;
  ((uint *)(gen_frame + 0xe0))[3] = 0;
  if (10 < iVar14) {
    (*(int *)(gen_frame + 0x24)) = 10;
  }
  if (0 < (*(int *)(gen_frame + 0x24))) {
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
    iVar14 = 0;
    do {
      uVar7 = F_0042a990(*param_1 + (int)(*(float * PTR32 *)(gen_frame + 0x28)) GEN_EDX_FWD);
      uVar7 = F_00c4c74c(uVar7);
      (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x28)) + 0x54)));
      ((uint *)(gen_frame + 0xe0))[(int)(iVar14)] = uVar7;
      iVar14 = iVar14 + 1;
    } while (iVar14 < (*(int *)(gen_frame + 0x24)));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,&REFG(undefined, 0x10916c4),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x24)) * 0x54 - 0x54 + *param_1))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    puVar8 = ((undefined4 *)GEN_TOP(F_005369e0(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = puVar8;
    if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
      return 1;
    }
  }
  puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x20));
  if ((*(int *)(gen_frame + 0x24)) < 2) {
    return 1;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10916c0)),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  if (bVar6 == 0) {
LAB_0048c222: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if ((*(int *)(gen_frame + 0x24)) < 5) goto LAB_0048c222;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    pcVar9 = ((char *)GEN_TOP(F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG)));
    dVar18 = F_00c4acaa(pcVar9);
    iVar14 = (int)(dVar18 * *(double *)&REFG(undefined, 0x1088118));
    pcVar9 = ((char *)GEN_TOP(F_0042a990(*param_1 + 0xfc GEN_EDX_ARG)));
    dVar18 = F_00c4acaa(pcVar9);
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = ((undefined4 *)GEN_TOP((int)(dVar18 * *(double *)&REFG(undefined, 0x1088118))));
    pcVar9 = ((char *)GEN_TOP(F_0042a990(*param_1 + 0x150 GEN_EDX_ARG)));
    dVar18 = F_00c4acaa(pcVar9);
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP((int)(dVar18 * *(double *)&REFG(undefined, 0x1088118))));
    if ((*(int *)(gen_frame + 0x24)) < 6) {
      F_00a51420(0,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,iVar14,(*(undefined4 * PTR32 *)(gen_frame + 0xc)),(int)(dVar18 * *(double *)&REFG(undefined, 0x1088118)),0);
      return 0;
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,&REFG(undefined, 0x10916c4),REFG(undefined4, 0x108cc50));
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x1a4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
    F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
    if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == 0) {
      iVar2 = *param_1;
      F_0042a990(iVar2 + 0x1f8 GEN_EDX_ARG);
      uVar7 = F_0042a990(iVar2 + 0x1a4 GEN_EDX_ARG);
      puVar20 = ((undefined1 *)(gen_frame + 0x108));
      uVar15 = 0x100;
      F_00c472af(puVar20,0x100,((char *)REFP(0x10916b8)),uVar7);
      F_00a514d0(0,((undefined1 *)(gen_frame + 0x108)),iVar14,(*(undefined4 * PTR32 *)(gen_frame + 0xc)),(*(float * PTR32 *)(gen_frame + 0x28)),0,puVar20,uVar15);
      return 0;
    }
    F_00a51420(0,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,iVar14,(*(undefined4 * PTR32 *)(gen_frame + 0xc)),(*(float * PTR32 *)(gen_frame + 0x28)),0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,&REFG(undefined, 0x10916b0),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    if (3 < (*(int *)(gen_frame + 0x24))) {
      iVar14 = *param_1;
      F_0042a990(iVar14 + 0xfc GEN_EDX_ARG);
      uVar7 = F_0042a990(iVar14 + 0xa8 GEN_EDX_ARG);
      puVar20 = ((undefined1 *)(gen_frame + 0x108));
      uVar15 = 0x100;
      F_00c472af(puVar20,0x100,((char *)REFP(0x10916b8)),uVar7);
      F_00a514d0(7,((undefined1 *)(gen_frame + 0x108)),0,0,0,0,puVar20,uVar15);
      return 0;
    }
    uVar7 = F_005369a0(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG);
    puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
    if (uVar7 == 0) {
      return 1;
    }
    uVar15 = *((undefined4 *)GEN_TOP((uVar7 + 0x74)));
    pfVar10 = ((float *)GEN_TOP(F_00a5feb0((*(undefined4 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG)));
    (*(float * PTR32 *)(gen_frame + 0x28)) = pfVar10;
    uVar24 = 0;
    uVar7 = F_00a5feb0(puVar8 GEN_EDX_ARG);
    (*(ushort *)(gen_frame + 0x2e)) = gen_x87_cw;
    (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP((gen_x87_cw | 0xc00)));
    (*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = (undefined2)(gen_x87_cw | 0xc00);
    gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)));
    lVar1 = (longlong)TRUNC((double)*((float *)GEN_TOP((uVar7 + 8))) * *(double *)&REFG(undefined, 0x1088118));
    (*(ulonglong *)(gen_frame + 0x18)) = lVar1;
    lVar1 = (*(ulonglong *)(gen_frame + 0x18));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 0)) = (undefined4)lVar1;
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    uVar22 = (undefined4)(*(ulonglong *)(gen_frame + 0x18));
    (*(ulonglong *)(gen_frame + 0x18)) = lVar1;
    uVar7 = F_00a5feb0(puVar8 GEN_EDX_ARG);
    (*(ushort *)(gen_frame + 0x2e)) = gen_x87_cw;
    (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP((gen_x87_cw | 0xc00)));
    (*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = (undefined2)(gen_x87_cw | 0xc00);
    gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)));
    lVar1 = (longlong)TRUNC((double)*((float *)GEN_TOP((uVar7 + 4))) * *(double *)&REFG(undefined, 0x1088118));
    (*(ulonglong *)(gen_frame + 0x18)) = lVar1;
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP((gen_x87_cw | 0xc00)));
    (*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = (undefined2)(gen_x87_cw | 0xc00);
    gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)));
    (*(ulonglong *)(gen_frame + 0x18)) = (longlong)TRUNC(*(double *)&REFG(undefined, 0x1088118) * (double)*(*(float * PTR32 *)(gen_frame + 0x28)));
    lVar5 = (*(ulonglong *)(gen_frame + 0x18));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 0)) = (undefined4)(longlong)TRUNC(*(double *)&REFG(undefined, 0x1088118) * (double)*(*(float * PTR32 *)(gen_frame + 0x28)));
    uVar19 = (undefined4)(*(ulonglong *)(gen_frame + 0x18));
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    (*(ulonglong *)(gen_frame + 0x18)) = lVar5;
    F_00a51420(0,uVar15,0,uVar19,(int)lVar1,uVar22,uVar24);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,&REFG(undefined, 0x10916a8),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if (((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) && (3 < (*(int *)(gen_frame + 0x24)))) {
    iVar14 = *param_1;
    F_0042a990(iVar14 + 0xfc GEN_EDX_ARG);
    uVar7 = F_0042a990(iVar14 + 0xa8 GEN_EDX_ARG);
    puVar20 = ((undefined1 *)(gen_frame + 0x108));
    uVar15 = 0x100;
    F_00c472af(puVar20,0x100,((char *)REFP(0x10916b8)),uVar7);
    F_00a514d0(0x25e,((undefined1 *)(gen_frame + 0x108)),0,0,0,0,puVar20,uVar15);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x109169c)),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if (((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) && (2 < (*(int *)(gen_frame + 0x24)))) {
    F_00a51420(0x25f,(*(undefined4 * PTR32 *)(gen_frame + 0xc))[0x1d],0,((uint *)(gen_frame + 0xe0))[2],0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x1091694)),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    uVar7 = 2;
    if (2 < (*(int *)(gen_frame + 0x24))) {
      uVar7 = ((uint *)(gen_frame + 0xe0))[2];
    }
    F_00a51420(0xc,puVar8[0x1d],0,uVar7,0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x109168c)),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    uVar7 = 3;
    if (2 < (*(int *)(gen_frame + 0x24))) {
      uVar7 = ((uint *)(gen_frame + 0xe0))[2];
    }
    F_00a51420(9,puVar8[0x1d],0,uVar7,0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,&REFG(undefined, 0x1091684),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    uVar7 = 1;
    if (2 < (*(int *)(gen_frame + 0x24))) {
      uVar7 = ((uint *)(gen_frame + 0xe0))[2];
    }
    uVar11 = F_005369a0(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG);
    if (uVar11 == 0) {
      return 1;
    }
    F_00a51420(10,*((undefined4 *)GEN_TOP((uVar11 + 0x74))),0,uVar7,((uint *)(gen_frame + 0xe0))[3],0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,&REFG(undefined, 0x109167c),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    if ((*(int *)(gen_frame + 0x24)) < 3) {
      return 1;
    }
    F_00a51420(0x25a,puVar8[0x1d],0,((uint *)(gen_frame + 0xe0))[2],0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x1091674)),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    F_00a51420(0x25b,puVar8[0x1d],0,0,0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,&REFG(undefined, 0x109166c),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    uVar7 = 2;
    if (2 < (*(int *)(gen_frame + 0x24))) {
      uVar7 = ((uint *)(gen_frame + 0xe0))[2];
    }
    F_00a51420(0x11,puVar8[0x1d],0,uVar7,0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x1091660)),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    F_00a51420(0x25d,puVar8[0x1d],0,0,0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x1091658)),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    if (3 < (*(int *)(gen_frame + 0x24))) {
      iVar14 = *param_1;
      uVar7 = F_0042a990(iVar14 + 0xfc GEN_EDX_ARG);
      uVar11 = F_0042a990(iVar14 + 0xa8 GEN_EDX_ARG);
      F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,((char *)REFP(0x10916b8)),uVar11,uVar7);
      uVar7 = F_005369a0(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG);
      F_00a51420(8,*((undefined4 *)GEN_TOP((uVar7 + 0x74))),0,0,0,0,0);
      return 0;
    }
    uVar7 = F_005369a0(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG);
    if (uVar7 == 0) {
      return 1;
    }
    F_00a51420(8,*((undefined4 *)GEN_TOP((uVar7 + 0x74))),0,0,0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,&REFG(undefined, 0x1091654),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  if (bVar6 == 0) {
LAB_0048caa2: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048caa2;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    uVar7 = F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG);
    uVar7 = F_00c4c74c(uVar7);
    F_00a51420(0x154,puVar8[0x1d],0,uVar7,0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x109164c)),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  if (bVar6 == 0) {
LAB_0048cb2d: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048cb2d;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    uVar7 = F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG);
    uVar7 = F_00c4c74c(uVar7);
    F_00a51420(0x155,puVar8[0x1d],0,uVar7,0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x1091640)),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    F_00a51420(0xcb,puVar8[0x1d],0,((uint *)(gen_frame + 0xe0))[2],0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x1091634)),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  if (bVar6 == 0) {
LAB_0048cc21: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048cc21;
  }
  (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    uVar7 = F_005369a0(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG);
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = ((undefined4 *)GEN_TOP(uVar7));
    if (uVar7 == 0) {
      return 1;
    }
    uVar17 = 0xa00000000;
    pcVar9 = ((char *)GEN_TOP(F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG)));
    uVar16 = F_00c4b01d(pcVar9,((char * PTR32 *)GEN_TOP((uint)uVar17)),(int)((ulonglong)uVar17 >> 0x20));
    (*(ulonglong *)(gen_frame + 0x18)) = uVar16;
    uVar7 = 1;
    if (3 < (*(int *)(gen_frame + 0x24))) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,&REFG(undefined, 0x10916c4),REFG(undefined4, 0x108cc50));
      (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x10));
      bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xfc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
      if (bVar6 == 0) goto LAB_0048ccdd;
    }
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
LAB_0048ccdd: ;
    if (((uint)(*(float * PTR32 *)(gen_frame + 0x28)) & 0x10) != 0) {
      F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
    }
    if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
      uVar7 = ((uint *)(gen_frame + 0xe0))[3];
    }
    F_00a51420(0xcc,*((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x20)) + 0x74))),0,(undefined4)(*(ulonglong *)(gen_frame + 0x18)),
                 (int)((*(ulonglong *)(gen_frame + 0x18)) >> 0x20),uVar7,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x1091630)),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  if (bVar6 == 0) {
LAB_0048cd6c: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048cd6c;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    uVar15 = puVar8[0x1d];
    uVar17 = 0;
    uVar19 = 0;
    uVar7 = F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG);
    uVar7 = F_00c4c74c(uVar7);
    F_00a51420(0xc9,uVar15,0,uVar7,uVar19,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x1091628)),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  if (bVar6 == 0) {
LAB_0048cdf9: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048cdf9;
  }
  (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    uVar7 = F_005369a0(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG);
    if (uVar7 == 0) {
      return 1;
    }
    uVar15 = *((undefined4 *)GEN_TOP((uVar7 + 0x74)));
    uVar17 = 0;
    uVar19 = 0;
    uVar7 = F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG);
    uVar7 = F_00c4c74c(uVar7);
    F_00a51420(0xca,uVar15,0,uVar7,uVar19,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,&REFG(undefined, 0x1091620),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 3) {
      return 2;
    }
    F_00a51420(0xe,(*(undefined4 * PTR32 *)(gen_frame + 0xc))[0x1d],0,0,0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,&REFG(undefined, 0x1091618),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 3) {
      return 2;
    }
    uVar7 = F_005369a0(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG);
    if (uVar7 == 0) {
      return 1;
    }
    F_00a51420(0xd,*((undefined4 *)GEN_TOP((uVar7 + 0x74))),0,0,0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x1091610)),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 3) {
      return 2;
    }
    F_00a51420(0xf,puVar8[0x1d],0,0,0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x1091608)),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 3) {
      return 2;
    }
    if (2 < (*(int *)(gen_frame + 0x24))) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,&REFG(undefined, 0x10916c4),REFG(undefined4, 0x108cc50));
      (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x80));
      bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
      if (bVar6 == 0) goto LAB_0048d081;
    }
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
LAB_0048d081: ;
    if (((uint)(*(float * PTR32 *)(gen_frame + 0x28)) & 0x80) != 0) {
      F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
    }
    if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == '\0') {
      uVar7 = 2;
    }
    else {
      uVar7 = F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG);
      uVar7 = F_00c4c74c(uVar7);
    }
    F_00a51420(0x10,puVar8[0x1d],0,uVar7,0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x10915fc)),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 5) {
      return 2;
    }
    F_00a51420(0x226,(*(undefined4 * PTR32 *)(gen_frame + 0xc))[0x1d],0,0,0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x10915f4)),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    pfVar10 = ((float *)GEN_TOP(F_00a5feb0(puVar8 GEN_EDX_ARG)));
    uVar7 = F_00a5feb0(puVar8 GEN_EDX_ARG);
    dVar18 = (double)*((float *)GEN_TOP((uVar7 + 8)));
    uVar7 = F_00a5feb0(puVar8 GEN_EDX_ARG);
    F_00c4780f(&REFG(undefined, 0x1372418),200,(*(undefined * PTR32 (*)[1])REFP(0x10915dc)),(int)(ulonglong)gen_d2bits((double)*pfVar10),
                (int)((ulonglong)gen_d2bits((double)*pfVar10) >> 0x20),
                (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((uVar7 + 4)))),
                (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((uVar7 + 4)))) >> 0x20),
                (int)(ulonglong)gen_d2bits(dVar18),(int)((ulonglong)gen_d2bits(dVar18) >> 0x20));
    F_0042e170(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x1372418));
    F_0042e170(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,&REFG(undefined, 0x10915d4));
    puVar20 = ((undefined1 *)(gen_frame + 0x88));
    uVar19 = 0;
    puVar21 = ((undefined1 *)(gen_frame + 0x30));
    uVar15 = 1;
    pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) + 0x28))))((*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) GEN_EDX_ARG)));
    F_00459b00(pvVar12 GEN_EDX_ARG,uVar15,puVar21,puVar20,uVar19);
    F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x10915cc),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  if (bVar6 == 0) {
LAB_0048d27a: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048d27a;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    uVar7 = 1;
    if ((*(int *)(gen_frame + 0x24)) != 3) {
      uVar7 = ((uint *)(gen_frame + 0xe0))[3];
    }
    F_00a51420(200,puVar8[0x1d],0,((uint *)(gen_frame + 0xe0))[2],uVar7,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x10915c8),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  if (bVar6 == 0) {
LAB_0048d30b: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048d30b;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    F_00a51420(1,puVar8[0x1d],0,((uint *)(gen_frame + 0xe0))[2],((uint *)(gen_frame + 0xe0))[3],0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x10915c0),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  if (bVar6 == 0) {
LAB_0048d38b: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048d38b;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    F_00a51420(2,puVar8[0x1d],0,((uint *)(gen_frame + 0xe0))[2],0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x10915b8)),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  if (bVar6 == 0) {
LAB_0048d406: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048d406;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    F_00a51420(3,puVar8[0x1d],0,((uint *)(gen_frame + 0xe0))[2],0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10915b4)),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  if (bVar6 == 0) {
LAB_0048d480: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048d480;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    F_00a51420(4,puVar8[0x1d],0,((uint *)(gen_frame + 0xe0))[2],0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x10915b0),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  if (bVar6 == 0) {
LAB_0048d4fb: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048d4fb;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    uVar15 = puVar8[0x1d];
    uVar17 = 0;
    uVar19 = 0;
    uVar7 = F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG);
    uVar7 = F_00c4c74c(uVar7);
    F_00a51420(100,uVar15,0,uVar7,uVar19,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x10915ac),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  if (bVar6 == 0) {
LAB_0048d586: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048d586;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    uVar15 = puVar8[0x1d];
    uVar17 = 0;
    uVar19 = 0;
    uVar7 = F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG);
    uVar7 = F_00c4c74c(uVar7);
    F_00a51420(0x65,uVar15,0,uVar7,uVar19,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x10915a8),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  if (bVar6 == 0) {
LAB_0048d610: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048d610;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    uVar15 = puVar8[0x1d];
    uVar17 = 0;
    uVar19 = 0;
    uVar7 = F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG);
    uVar7 = F_00c4c74c(uVar7);
    F_00a51420(0x66,uVar15,0,uVar7,uVar19,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x10915a4),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  if (bVar6 == 0) {
LAB_0048d69a: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048d69a;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    uVar15 = puVar8[0x1d];
    uVar17 = 0;
    uVar19 = 0;
    uVar7 = F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG);
    uVar7 = F_00c4c74c(uVar7);
    F_00a51420(0x67,uVar15,0,uVar7,uVar19,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10915a0)),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  if (bVar6 == 0) {
LAB_0048d724: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048d724;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    uVar15 = puVar8[0x1d];
    uVar17 = 0;
    uVar19 = 0;
    uVar7 = F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG);
    uVar7 = F_00c4c74c(uVar7);
    F_00a51420(0x68,uVar15,0,uVar7,uVar19,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x109159c),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    F_00a51420(0x6a,puVar8[0x1d],0,0,0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x1091598)),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  iVar14 = (*(int *)(gen_frame + 0x24));
  if (bVar6 == 0) {
LAB_0048d811: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048d811;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    if (iVar14 < 4) {
      uVar7 = 0;
    }
    else {
      uVar7 = F_0042a990(*param_1 + 0xfc GEN_EDX_ARG);
      uVar7 = F_00c4c74c(uVar7);
    }
    uVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0xc))[0x1d];
    uVar17 = 0;
    uVar11 = F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG);
    uVar11 = F_00c4c74c(uVar11);
    F_00a51420(0xb,uVar15,0,uVar11,uVar7,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x109158c)),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  if (bVar6 == 0) {
LAB_0048d8bc: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if (iVar14 < 3) goto LAB_0048d8bc;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    uVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0xc))[0x1d];
    uVar17 = 0;
    uVar19 = 0;
    uVar7 = F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG);
    uVar7 = F_00c4c74c(uVar7);
    F_00a51420(0x261,uVar15,0,uVar7,uVar19,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x1091584),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  if (bVar6 == 0) {
LAB_0048d94c: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if (iVar14 < 3) goto LAB_0048d94c;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 0x5a) {
      return 2;
    }
    uVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0xc))[0x1d];
    uVar17 = 0;
    uVar19 = 0;
    uVar7 = F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG);
    uVar7 = F_00c4c74c(uVar7);
    F_00a51420(0x6b,uVar15,0,uVar7,uVar19,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x109157c)),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 0x5a) {
      return 2;
    }
    F_00a51420(0x6c,(*(undefined4 * PTR32 *)(gen_frame + 0xc))[0x1d],0,0,0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x1091574),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  if (bVar6 == 0) {
LAB_0048da5a: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if (iVar14 < 3) goto LAB_0048da5a;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 0x5a) {
      return 2;
    }
    F_00a51420(0x259,(*(undefined4 * PTR32 *)(gen_frame + 0xc))[0x1d],0,((uint *)(gen_frame + 0xe0))[2],0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,&REFG(undefined, 0x109156c),REFG(undefined4, 0x108cc50));
  bVar3 = false;
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  if (bVar6 == 0) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x1091564)),REFG(undefined4, 0x108cc50));
    bVar3 = true;
    bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
    if (bVar6 != 0) goto LAB_0048db0f;
LAB_0048db1f: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
  }
  else {
LAB_0048db0f: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048db1f;
  }
  if (bVar3) {
    F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
    if (2 < (uint)((param_1[1] - *param_1) / 0x54)) {
      pcVar9 = ((char *)GEN_TOP(F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG)));
      iVar14 = F_00c48637((int)*pcVar9);
      if (iVar14 == 0) {
        uVar11 = 0;
        uVar7 = F_00aafa70();
        if (uVar7 != 0) {
          do {
            puVar13 = ((uint *)GEN_TOP(F_00aaf9f0(uVar11,0)));
            F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,(*puVar13 & 0xffffff) + (int)puVar13,REFG(undefined4, 0x108cc50));
            (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
            F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
            if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
              uVar7 = F_00aafa20(uVar11);
              goto LAB_0048dc38;
            }
            uVar11 = uVar11 + 1;
            uVar7 = F_00aafa70();
          } while (uVar11 < uVar7);
        }
      }
      else {
        uVar7 = F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG);
        uVar7 = F_00c4c74c(uVar7);
LAB_0048dc38: ;
        (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(uVar7));
      }
    }
    uVar7 = 0xffffffff;
    if (3 < (uint)((param_1[1] - *param_1) / 0x54)) {
      uVar7 = F_0042a990(*param_1 + 0xfc GEN_EDX_ARG);
      uVar7 = F_00c4c74c(uVar7);
    }
    if ((*(float * PTR32 *)(gen_frame + 0x28)) == ((float *)GEN_TOP(0x0))) {
      return 1;
    }
    F_00a51420(600,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,(*(float * PTR32 *)(gen_frame + 0x28)),uVar7,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x109155c)),REFG(undefined4, 0x108cc50));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP(0xffffffff));
    (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP(0xffffffff));
    uVar16 = 0xffffffffffffffff;
    if ((*(int *)(gen_frame + 0x24)) == 3) {
      pcVar9 = ((char *)GEN_TOP(F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG)));
      iVar14 = F_00c48637((int)*pcVar9);
      uVar16 = CONCAT44((*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)),0xffffffff);
      if (iVar14 != 0) {
        uVar7 = F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG);
        uVar16 = F_00c4c762(uVar7);
        (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP((int)(uVar16 >> 0x20)));
      }
    }
    (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP((uVar16 >> 0x20)));
    F_00a51420(0x262,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,(*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)),(int)uVar16,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x1091554),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = bVar6 != 0;
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    uVar7 = 0x4b0;
    if (2 < (*(int *)(gen_frame + 0x24))) {
      uVar7 = F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG);
      uVar7 = F_00c4c74c(uVar7);
      if ((int)uVar7 < 0) {
        uVar7 = 0x961;
      }
    }
    F_00a51420(5,REFG(undefined4, 0x1379690),0,REFG(undefined4, 0x1379690),uVar7,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x109154c)),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = bVar6 != 0;
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  uVar15 = REFG(undefined4, 0x1379690);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    uVar17 = 0;
    uVar19 = 0;
    uVar7 = F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG);
    uVar7 = F_00c4c74c(uVar7);
    F_00a51420(6,uVar15,0,uVar7,uVar19,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x1091544)),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  if (bVar6 == 0) {
LAB_0048deda: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048deda;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 3) {
      return 2;
    }
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
    F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x1091540),REFG(undefined4, 0x108cc50));
    bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
    if (bVar6 == 0) {
LAB_0048df69: ;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
    }
    else {
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
      if ((*(int *)(gen_frame + 0x24)) < 4) goto LAB_0048df69;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
    if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == '\0') {
      F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x109153c)),REFG(undefined4, 0x108cc50));
      bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
      if (bVar6 == 0) {
LAB_0048dfda: ;
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
      }
      else {
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
        if ((*(int *)(gen_frame + 0x24)) < 4) goto LAB_0048dfda;
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == '\0') {
        F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x1091658)),REFG(undefined4, 0x108cc50));
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
        F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
        if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == 0) {
          return 1;
        }
        if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 5) {
          return 2;
        }
        uVar15 = 2;
        (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d]));
        goto LAB_0048e0ce;
      }
      uVar15 = 1;
    }
    else {
      uVar15 = 0;
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x1091538)),REFG(undefined4, 0x108cc50));
    bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xfc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = bVar6 == 0;
    F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
    if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
      uVar7 = F_0042a990(*param_1 + 0xfc GEN_EDX_ARG);
      uVar7 = F_00c4c74c(uVar7);
      (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(uVar7));
    }
LAB_0048e0ce: ;
    F_00a51420(0x6d,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,uVar15,(*(float * PTR32 *)(gen_frame + 0x28)),0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x1091530)),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  if (bVar6 == 0) {
LAB_0048e138: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048e138;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 0x5a) {
      return 2;
    }
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
    F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x1091540),REFG(undefined4, 0x108cc50));
    bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
    if (bVar6 == 0) {
LAB_0048e1c7: ;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
    }
    else {
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
      if ((*(int *)(gen_frame + 0x24)) < 4) goto LAB_0048e1c7;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
    if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == '\0') {
      F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x109153c)),REFG(undefined4, 0x108cc50));
      bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
      if (bVar6 == 0) {
LAB_0048e2a6: ;
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
      }
      else {
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
        if ((*(int *)(gen_frame + 0x24)) < 4) goto LAB_0048e2a6;
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == '\0') {
        return 1;
      }
      uVar15 = 1;
      F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x1091538)),REFG(undefined4, 0x108cc50));
      bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xfc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = bVar6 == 0;
      F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
        uVar7 = F_0042a990(*param_1 + 0xfc GEN_EDX_ARG);
        uVar7 = F_00c4c74c(uVar7);
        (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(uVar7));
        F_00a69b40(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,uVar7,0);
        goto LAB_0048e34c;
      }
      uVar4 = 0;
    }
    else {
      uVar15 = 0;
      F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x1091538)),REFG(undefined4, 0x108cc50));
      bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xfc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = bVar6 == 0;
      F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
        uVar7 = F_0042a990(*param_1 + 0xfc GEN_EDX_ARG);
        uVar7 = F_00c4c74c(uVar7);
        (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(uVar7));
        F_00a69b40(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,uVar7,1);
        goto LAB_0048e34c;
      }
      uVar4 = 1;
    }
    F_00a69b80(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,uVar4);
LAB_0048e34c: ;
    F_00a51420(500,(*(undefined4 * PTR32 *)(gen_frame + 0xc))[0x1d],0,uVar15,(*(float * PTR32 *)(gen_frame + 0x28)),0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x1091528)),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  if (bVar6 == 0) {
LAB_0048e3b3: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048e3b3;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == '\0') {
    F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x10914d0),REFG(undefined4, 0x108cc50));
    bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
    if (bVar6 == 0) {
LAB_0048ed23: ;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
    }
    else {
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
      if ((*(int *)(gen_frame + 0x24)) < 3) goto LAB_0048ed23;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
    if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == '\0') {
      F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x10914b8),REFG(undefined4, 0x108cc50));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
      F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
      if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
        if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 0x5a) {
          return 2;
        }
        bVar6 = F_006d0f20();
        if (bVar6 == 0) {
          F_0042e170(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x109149c));
          puVar20 = ((undefined1 *)(gen_frame + 0x88));
          uVar19 = 0;
          uVar7 = F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
          uVar15 = 0x39;
          pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) + 0x28))))((*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) GEN_EDX_ARG)));
          F_00459b00(pvVar12 GEN_EDX_ARG,uVar15,uVar7,puVar20,uVar19);
          F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
          return 1;
        }
        if ((*(int *)(gen_frame + 0x24)) < 4) {
          if ((*(int *)(gen_frame + 0x24)) == 3) {
            F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x1091460)),REFG(undefined4, 0x108cc50));
            (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
            F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
            if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
              if (*((byte *)GEN_TOP(((int)puVar8 + 0x189))) < 0x5a) {
                return 2;
              }
              F_0042e170(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x1091440));
              puVar20 = ((undefined1 *)(gen_frame + 0x88));
              uVar19 = 0;
              uVar7 = F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
              uVar15 = 1;
              pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) + 0x28))))((*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) GEN_EDX_ARG)));
              F_00459b00(pvVar12 GEN_EDX_ARG,uVar15,uVar7,puVar20,uVar19);
              F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
              F_00a51420(0xd0,puVar8[0x1d],0,0,0,0,0);
              F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
              return 0;
            }
            F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x1091434)),REFG(undefined4, 0x108cc50));
            (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
            F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
            if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
              if (*((byte *)GEN_TOP(((int)puVar8 + 0x189))) < 0x5a) {
                return 2;
              }
              F_00a51420(0xd1,puVar8[0x1d],0,0,0,0,0);
              return 0;
            }
          }
          goto LAB_0048f7eb;
        }
        bVar6 = F_00a4cda0(*param_1 + 0xfc,0);
        if (bVar6 == 0) goto LAB_0048f7eb;
        uVar7 = F_00a4cf70(*param_1 + 0xfc,10);
        (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(uVar7));
        F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x1091490)),REFG(undefined4, 0x108cc50));
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
        F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
        if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
          if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 0x5a) {
            return 2;
          }
          if (0 < (int)uVar7) {
            F_00a51420(0xcd,(*(undefined4 * PTR32 *)(gen_frame + 0xc))[0x1d],0,uVar7,0,0,0);
            return 0;
          }
          goto LAB_0048f7eb;
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x109147c)),REFG(undefined4, 0x108cc50));
        bVar3 = false;
        bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
        if (bVar6 == 0) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x1091470)),REFG(undefined4, 0x108cc50));
          bVar3 = true;
          bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
          if (bVar6 != 0) goto LAB_0048f6ef;
        }
        else {
LAB_0048f6ef: ;
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
        }
        if (bVar3) {
          F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
        if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == 0) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x1091468)),REFG(undefined4, 0x108cc50));
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
          F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
          if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
            if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 0x5a) {
              return 2;
            }
            if ((((param_1[1] - *param_1) / 0x54 == 5) && (-1 < (int)(*(float * PTR32 *)(gen_frame + 0x28)))) &&
               (bVar6 = F_00a4cda0(*param_1 + 0x150,0), bVar6 != 0)) {
              uVar7 = F_00a4cf70(*param_1 + 0x150,10);
              F_00a51420(0xcf,(*(undefined4 * PTR32 *)(gen_frame + 0xc))[0x1d],0,(*(float * PTR32 *)(gen_frame + 0x28)),uVar7,0,0);
              return 0;
            }
          }
        }
        else {
          if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 0x5a) {
            return 2;
          }
          if (0 < (int)(*(float * PTR32 *)(gen_frame + 0x28))) {
            F_00a51420(0xce,(*(undefined4 * PTR32 *)(gen_frame + 0xc))[0x1d],0,(*(float * PTR32 *)(gen_frame + 0x28)),0,0,0);
            return 0;
          }
        }
LAB_0048f7eb: ;
        F_006c0880(0);
        return 1;
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x1091424)),REFG(undefined4, 0x108cc50));
      bVar3 = false;
      bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
      if (bVar6 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x109141c)),REFG(undefined4, 0x108cc50));
        bVar3 = true;
        bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
        if (bVar6 != 0) goto LAB_0048fa0c;
      }
      else {
LAB_0048fa0c: ;
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
      }
      if (bVar3) {
        F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
      if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
        (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP(0xffffffff));
        (*(ulonglong *)(gen_frame + 0x18)) = CONCAT44(0xffffffff,(undefined4)(*(ulonglong *)(gen_frame + 0x18)));
        if (2 < (*(int *)(gen_frame + 0x24))) {
          pcVar9 = ((char *)GEN_TOP(F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG)));
          iVar14 = F_00c48637((int)*pcVar9);
          if (iVar14 == 0) {
            uVar11 = 0;
            uVar7 = F_00aafa70();
            if (uVar7 != 0) {
              do {
                puVar13 = ((uint *)GEN_TOP(F_00aaf9f0(uVar11,0)));
                F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,(*puVar13 & 0xffffff) + (int)puVar13,REFG(undefined4, 0x108cc50));
                (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
                F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
                if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
                  uVar7 = F_00aafa20(uVar11);
                  goto LAB_0048fb0e;
                }
                uVar11 = uVar11 + 1;
                uVar7 = F_00aafa70();
              } while (uVar11 < uVar7);
            }
          }
          else {
            uVar7 = F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG);
            uVar7 = F_00c4c74c(uVar7);
LAB_0048fb0e: ;
            (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP(uVar7));
            (*(ulonglong *)(gen_frame + 0x18)) = CONCAT44(uVar7,(undefined4)(*(ulonglong *)(gen_frame + 0x18)));
          }
        }
        uVar15 = 0;
        if (3 < (*(int *)(gen_frame + 0x24))) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x109153c)),REFG(undefined4, 0x108cc50));
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xfc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
          F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
          if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
            uVar15 = 1;
          }
        }
        F_00a51420(400,(*(undefined4 * PTR32 *)(gen_frame + 0xc))[0x1d],0,(*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)),uVar15,0,0);
        return 0;
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x1091410)),REFG(undefined4, 0x108cc50));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
      F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
        uVar15 = 0;
        if (2 < (*(int *)(gen_frame + 0x24))) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x1091540),REFG(undefined4, 0x108cc50));
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
          F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
          if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
            uVar15 = 1;
          }
        }
        F_00a51420(0x191,(*(undefined4 * PTR32 *)(gen_frame + 0xc))[0x1d],0,uVar15,0,0,0);
        return 0;
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x1091408)),REFG(undefined4, 0x108cc50));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
      F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
        if ((*(int *)(gen_frame + 0x24)) < 3) {
          return 1;
        }
        uVar7 = 0;
        F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x1091540),REFG(undefined4, 0x108cc50));
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
        F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
        uVar16 = (*(ulonglong *)(gen_frame + 0x18));
        if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == 0) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x109153c)),REFG(undefined4, 0x108cc50));
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
          F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
          if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == 0) {
            return 1;
          }
          (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP(0x1));
          (*(ulonglong *)(gen_frame + 0x18)) = CONCAT44(1,(undefined4)(*(ulonglong *)(gen_frame + 0x18)));
        }
        else {
          (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP(0x0));
          (*(ulonglong *)(gen_frame + 0x18)) = uVar16 & 0xffffffff;
        }
        if (3 < (*(int *)(gen_frame + 0x24))) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x1091538)),REFG(undefined4, 0x108cc50));
          bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xfc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = bVar6 == 0;
          F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
          if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
            pcVar9 = ((char *)GEN_TOP(F_0042a990(*param_1 + 0xfc GEN_EDX_ARG)));
            iVar14 = F_00c48637((int)*pcVar9);
            if (iVar14 == 0) {
              return 1;
            }
            uVar7 = F_0042a990(*param_1 + 0xfc GEN_EDX_ARG);
            uVar7 = F_00c4c74c(uVar7);
          }
        }
        F_00a51420(0x192,(*(undefined4 * PTR32 *)(gen_frame + 0xc))[0x1d],0,(*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)),uVar7,0,0);
        return 0;
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x1091400),REFG(undefined4, 0x108cc50));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
      F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
        if ((*(int *)(gen_frame + 0x24)) < 4) {
          return 1;
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x10913f8),REFG(undefined4, 0x108cc50));
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
        F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
        if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
          bVar6 = F_00a4cda0(*param_1 + 0xfc,0);
          if (bVar6 == 0) {
            return 1;
          }
          uVar7 = F_00a4cf70(*param_1 + 0xfc,10);
          F_00a51420(0x193,(*(undefined4 * PTR32 *)(gen_frame + 0xc))[0x1d],0,uVar7,0,0,0);
          return 0;
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x10913ec)),REFG(undefined4, 0x108cc50));
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
        F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
        if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
          bVar6 = F_00a4cda0(*param_1 + 0xfc,0);
          if (bVar6 == 0) {
            return 1;
          }
          uVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0xc))[0x1d];
          uVar17 = 0;
          uVar19 = 0;
          uVar7 = F_00a4cf70(*param_1 + 0xfc,10);
          F_00a51420(0x195,uVar15,0,uVar7,uVar19,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
          return 0;
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x10913e0)),REFG(undefined4, 0x108cc50));
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
        F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
        if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == 0) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x10913d4)),REFG(undefined4, 0x108cc50));
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
          F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
          if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == 0) {
            F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10916c0)),REFG(undefined4, 0x108cc50));
            (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
            F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
            if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
              uVar7 = F_00a4cf70(*param_1 + 0xfc,10);
              bVar6 = F_00b070e0();
              if (bVar6 != 0) {
                pfVar10 = &(*(float *)(gen_frame + 0x0));
                pvVar12 = ((undefined *)GEN_TOP(F_00b070f0()));
                bVar6 = F_00b08520(pvVar12 GEN_EDX_ARG,uVar7,pfVar10);
                if (bVar6 != 0) {
                  (*(ushort *)(gen_frame + 0x2e)) = gen_x87_cw;
                  (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP((gen_x87_cw | 0xc00)));
                  (*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = (undefined2)(gen_x87_cw | 0xc00);
                  gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)));
                  (*(ulonglong *)(gen_frame + 0x18)) = (longlong)TRUNC((double)(*(float *)(gen_frame + 0x8)) * *(double *)&REFG(undefined, 0x1088118));
                  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 0)) =
                       (undefined4)(longlong)TRUNC((double)(*(float *)(gen_frame + 0x8)) * *(double *)&REFG(undefined, 0x1088118));
                  uVar15 = (undefined4)(*(ulonglong *)(gen_frame + 0x18));
                  gen_set_x87_cw((unsigned short)gen_x87_cw);
                  (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP((gen_x87_cw | 0xc00)));
                  (*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = (undefined2)(gen_x87_cw | 0xc00);
                  gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)));
                  (*(ulonglong *)(gen_frame + 0x18)) = (longlong)TRUNC((double)(*(float *)(gen_frame + 0x4)) * *(double *)&REFG(undefined, 0x1088118));
                  gen_set_x87_cw((unsigned short)gen_x87_cw);
                  (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP((gen_x87_cw | 0xc00)));
                  (*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = (undefined2)(gen_x87_cw | 0xc00);
                  gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)));
                  (*(ulonglong *)(gen_frame + 0x18)) = (longlong)TRUNC(*(double *)&REFG(undefined, 0x1088118) * (double)(*(float *)(gen_frame + 0x0)));
                  lVar1 = (*(ulonglong *)(gen_frame + 0x18));
                  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 0)) =
                       (undefined4)(longlong)TRUNC(*(double *)&REFG(undefined, 0x1088118) * (double)(*(float *)(gen_frame + 0x0)));
                  uVar19 = (undefined4)(*(ulonglong *)(gen_frame + 0x18));
                  gen_set_x87_cw((unsigned short)gen_x87_cw);
                  (*(ulonglong *)(gen_frame + 0x18)) = lVar1;
                  F_00a51420(0,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,uVar19,
                               (int)(longlong)TRUNC((double)(*(float *)(gen_frame + 0x4)) * *(double *)&REFG(undefined, 0x1088118)),
                               uVar15,0);
                  return 0;
                }
              }
              return 0;
            }
            F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x10913cc)),REFG(undefined4, 0x108cc50));
            (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
            F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
            if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == 0) {
              return 1;
            }
            bVar6 = F_00a4cda0(*param_1 + 0xfc,0);
            if (bVar6 == 0) {
              return 1;
            }
            uVar7 = F_00a4cf70(*param_1 + 0xfc,10);
            uVar11 = 0;
            (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP(uVar7));
            if ((4 < (*(int *)(gen_frame + 0x24))) &&
               (uVar15 = (undefined4)(*(ulonglong *)(gen_frame + 0x18)), bVar6 = F_00a4cda0(*param_1 + 0x150,0), bVar6 != 0
               )) {
              uVar11 = F_00a4cf70(*param_1 + 0x150,10);
            }
            F_00a51420(0x198,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,uVar11,(*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)),0,0);
            return 0;
          }
          bVar6 = F_00a4cda0(*param_1 + 0xfc,0);
          if (bVar6 == 0) {
            return 1;
          }
          uVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0xc))[0x1d];
          uVar17 = 0;
          uVar22 = 0;
          uVar7 = F_00a4cf70(*param_1 + 0xfc,10);
          uVar19 = 0x197;
        }
        else {
          bVar6 = F_00a4cda0(*param_1 + 0xfc,0);
          if (bVar6 == 0) {
            return 1;
          }
          uVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0xc))[0x1d];
          uVar17 = 0;
          uVar22 = 0;
          uVar7 = F_00a4cf70(*param_1 + 0xfc,10);
          uVar19 = 0x196;
        }
        F_00a51420(uVar19,uVar15,0,uVar7,uVar22,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
        return 1;
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x10913c4)),REFG(undefined4, 0x108cc50));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
      F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      iVar14 = (*(int *)(gen_frame + 0x24));
      if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
        if ((*(int *)(gen_frame + 0x24)) < 3) {
          return 1;
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x10913bc),REFG(undefined4, 0x108cc50));
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
        F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
        if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == 0) {
          return 1;
        }
        if (iVar14 < 4) {
          return 1;
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x10916c4),REFG(undefined4, 0x108cc50));
        bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xfc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = bVar6 == 0;
        F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
        uVar15 = 0;
        if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == 0) {
          bVar6 = F_00b02630(1,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,0,0,0);
          if (bVar6 == 0) {
            return 1;
          }
          return 0;
        }
        uVar22 = (*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d];
        uVar7 = F_0042a990(*param_1 + 0xfc GEN_EDX_ARG);
        uVar23 = CONCAT44(uVar15,uVar7);
        uVar19 = 0;
        puVar8 = ((undefined4 *)GEN_TOP(0x0));
        uVar17 = CONCAT44(uVar22,1);
LAB_004903f4: ;
        bVar6 = F_00b02630((char)uVar17,(int)((ulonglong)uVar17 >> 0x20),uVar19,puVar8,(int)uVar23
                             ,(char)((ulonglong)uVar23 >> 0x20));
        if (bVar6 == 0) {
          return 1;
        }
        return 0;
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x10913b4),REFG(undefined4, 0x108cc50));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
      F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
        F_00a51420(0x25c,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,0,0,0,0);
        return 0;
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x10913b0),REFG(undefined4, 0x108cc50));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
      F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      iVar14 = (*(int *)(gen_frame + 0x24));
      if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
        if ((*(int *)(gen_frame + 0x24)) < 3) {
          return 1;
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x10913bc),REFG(undefined4, 0x108cc50));
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
        F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
        uVar16 = (*(ulonglong *)(gen_frame + 0x18));
        if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == 0) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x10913a8)),REFG(undefined4, 0x108cc50));
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
          F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
          if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == 0) {
            return 1;
          }
          if (iVar14 < 6) {
            return 1;
          }
          uVar17 = 0xa00000000;
          pcVar9 = ((char *)GEN_TOP(F_0042a990(*param_1 + 0xfc GEN_EDX_ARG)));
          uVar16 = F_00c4b01d(pcVar9,((char * PTR32 *)GEN_TOP((uint)uVar17)),(int)((ulonglong)uVar17 >> 0x20));
          uVar19 = (undefined4)uVar16;
          (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = ((undefined4 *)GEN_TOP((uVar16 >> 0x20)));
          uVar7 = F_00a4cf70(*param_1 + 0x1a4,10);
          (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = (char)uVar7;
          gen_piece_set(&(*(ulonglong *)(gen_frame + 0x18)), 0, 5, (unsigned long long)(CONCAT14((char)uVar7,(undefined4)(*(ulonglong *)(gen_frame + 0x18)))));
          uVar15 = (undefined4)((*(ulonglong *)(gen_frame + 0x18)) >> 0x20);
          (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d]));
          uVar7 = F_0042a990(*param_1 + 0x150 GEN_EDX_ARG);
          uVar23 = CONCAT44(uVar15,uVar7);
          uVar17 = CONCAT44((*(float * PTR32 *)(gen_frame + 0x28)),3);
          puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
        }
        else {
          uVar19 = 0;
          (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP(0x0));
          (*(ulonglong *)(gen_frame + 0x18)) = uVar16 & 0xffffffff;
          if (3 < (*(int *)(gen_frame + 0x24))) {
            F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x10916c4),REFG(undefined4, 0x108cc50));
            bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xfc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
            (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = bVar6 == 0;
            F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
            if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
              uVar17 = 0xa00000000;
              pcVar9 = ((char *)GEN_TOP(F_0042a990(*param_1 + 0xfc GEN_EDX_ARG)));
              uVar16 = F_00c4b01d(pcVar9,((char * PTR32 *)GEN_TOP((uint)uVar17)),(int)((ulonglong)uVar17 >> 0x20));
              uVar15 = (undefined4)(uVar16 >> 0x20);
              uVar19 = (undefined4)uVar16;
              (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP(uVar15));
              (*(ulonglong *)(gen_frame + 0x18)) = CONCAT44(uVar15,(undefined4)(*(ulonglong *)(gen_frame + 0x18)));
            }
          }
          uVar23 = 0;
          puVar8 = ((undefined4 *)GEN_TOP(((*(ulonglong *)(gen_frame + 0x18)) >> 0x20)));
          uVar17 = CONCAT44((*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],2);
        }
        goto LAB_004903f4;
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x10913a4),REFG(undefined4, 0x108cc50));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
      F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      iVar14 = (*(int *)(gen_frame + 0x24));
      if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
        if ((*(int *)(gen_frame + 0x24)) < 3) {
          return 1;
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x10913a8)),REFG(undefined4, 0x108cc50));
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
        F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
        if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == 0) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x1091398)),REFG(undefined4, 0x108cc50));
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
          F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
          if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == 0) {
            return 1;
          }
          if (iVar14 < 6) {
            return 1;
          }
          uVar17 = 0xa00000000;
          pcVar9 = ((char *)GEN_TOP(F_0042a990(*param_1 + 0xfc GEN_EDX_ARG)));
          uVar16 = F_00c4b01d(pcVar9,((char * PTR32 *)GEN_TOP((uint)uVar17)),(int)((ulonglong)uVar17 >> 0x20));
          uVar19 = (undefined4)uVar16;
          (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = ((undefined4 *)GEN_TOP((uVar16 >> 0x20)));
          uVar7 = F_00a4cf70(*param_1 + 0x1a4,10);
          (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = (char)uVar7;
          gen_piece_set(&(*(ulonglong *)(gen_frame + 0x18)), 0, 5, (unsigned long long)(CONCAT14((char)uVar7,(undefined4)(*(ulonglong *)(gen_frame + 0x18)))));
          uVar15 = (undefined4)((*(ulonglong *)(gen_frame + 0x18)) >> 0x20);
          (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d]));
          uVar7 = F_0042a990(*param_1 + 0x150 GEN_EDX_ARG);
          uVar23 = CONCAT44(uVar15,uVar7);
          uVar17 = CONCAT44((*(float * PTR32 *)(gen_frame + 0x28)),5);
          puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
        }
        else {
          if (iVar14 < 6) {
            return 1;
          }
          uVar17 = 0xa00000000;
          pcVar9 = ((char *)GEN_TOP(F_0042a990(*param_1 + 0xfc GEN_EDX_ARG)));
          uVar16 = F_00c4b01d(pcVar9,((char * PTR32 *)GEN_TOP((uint)uVar17)),(int)((ulonglong)uVar17 >> 0x20));
          uVar19 = (undefined4)uVar16;
          (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = ((undefined4 *)GEN_TOP((uVar16 >> 0x20)));
          uVar7 = F_00a4cf70(*param_1 + 0x1a4,10);
          (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = (char)uVar7;
          gen_piece_set(&(*(ulonglong *)(gen_frame + 0x18)), 0, 5, (unsigned long long)(CONCAT14((char)uVar7,(undefined4)(*(ulonglong *)(gen_frame + 0x18)))));
          (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d]));
          uVar15 = (undefined4)((*(ulonglong *)(gen_frame + 0x18)) >> 0x20);
          uVar7 = F_0042a990(*param_1 + 0x150 GEN_EDX_ARG);
          uVar23 = CONCAT44(uVar15,uVar7);
          uVar17 = CONCAT44((*(float * PTR32 *)(gen_frame + 0x28)),4);
          puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
        }
        goto LAB_004903f4;
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x109138c)),REFG(undefined4, 0x108cc50));
      bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
      if (bVar6 != 0) {
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
        if (2 < (*(int *)(gen_frame + 0x24))) goto LAB_004908b0;
      }
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
LAB_004908b0: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
        if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 4) {
          return 2;
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x1091540),REFG(undefined4, 0x108cc50));
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
        F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
        if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == 0) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x109153c)),REFG(undefined4, 0x108cc50));
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
          F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
          if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == 0) {
            return 1;
          }
          uVar15 = 0;
        }
        else {
          uVar15 = 1;
        }
        uVar23 = 0;
        uVar19 = 0;
        uVar17 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x20)))))((*(undefined4 * PTR32 *)(gen_frame + 0x20)));
        F_00a51420(0x260,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20),uVar15,uVar19,(int)uVar23,
                     (int)((ulonglong)uVar23 >> 0x20));
        return 0;
      }
      bVar6 = F_0042b6a0(((undefined *)GEN_TOP((*param_1 + 0x54))) GEN_EDX_ARG,&REFG(undefined, 0x1091384));
      if (bVar6 == 0) {
        return 1;
      }
      if ((*(int *)(gen_frame + 0x24)) < 4) {
        return 1;
      }
      if (0x59 < *((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189)))) {
        (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP(0xa));
        (*(ulonglong *)(gen_frame + 0x18)) = CONCAT44(10,(undefined4)(*(ulonglong *)(gen_frame + 0x18)));
        bVar6 = F_00a4cda0(*param_1 + 0xa8,0);
        if (bVar6 != 0) {
          uVar7 = F_00a4cf70(*param_1 + 0xa8,10);
          (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP(uVar7));
          (*(ulonglong *)(gen_frame + 0x18)) = CONCAT44(uVar7,(undefined4)(*(ulonglong *)(gen_frame + 0x18)));
          if ((int)uVar7 < 10) {
            (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP(0xa));
            (*(ulonglong *)(gen_frame + 0x18)) = CONCAT44(10,(undefined4)(*(ulonglong *)(gen_frame + 0x18)));
          }
        }
        uVar11 = 0;
        uVar7 = F_00aafa70();
        if (uVar7 == 0) {
          return 1;
        }
        do {
          puVar13 = ((uint *)GEN_TOP(F_00aaf9f0(uVar11,0)));
          bVar6 = F_0042b6a0(((undefined *)GEN_TOP((*param_1 + 0xfc))) GEN_EDX_ARG,(*puVar13 & 0xffffff) + (int)puVar13);
          if (bVar6 != 0) {
            uVar7 = F_00aafa20(uVar11);
            (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(uVar7));
            if (uVar7 == 0) {
              return 1;
            }
            uVar7 = 0;
            if ((4 < (*(int *)(gen_frame + 0x24))) && (bVar6 = F_00a4cda0(*param_1 + 0x150,0), bVar6 != 0)) {
              uVar7 = F_00a4cf70(*param_1 + 0x150,10);
            }
            F_00a51420(0x199,(*(undefined4 * PTR32 *)(gen_frame + 0xc))[0x1d],0,(*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)),(*(float * PTR32 *)(gen_frame + 0x28)),uVar7,0);
            return 0;
          }
          uVar11 = uVar11 + 1;
          uVar7 = F_00aafa70();
        } while (uVar11 < uVar7);
        return 1;
      }
      return 2;
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x10914c8)),REFG(undefined4, 0x108cc50));
    bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
    iVar14 = (*(int *)(gen_frame + 0x24));
    if ((bVar6 == 0) || ((*(int *)(gen_frame + 0x24)) < 4)) {
LAB_0048ed99: ;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
    }
    else {
      bVar6 = F_00a4cda0(*param_1 + 0xfc,0);
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
      if (bVar6 == 0) goto LAB_0048ed99;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
    if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
      if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 3) {
        return 2;
      }
      uVar7 = F_00a4cf70(*param_1 + 0xfc,10);
      F_00a51420(0x140,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,uVar7,0,0,0);
      return 0;
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x10914c0),REFG(undefined4, 0x108cc50));
    bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
    if ((bVar6 == 0) || (iVar14 < 4)) {
LAB_0048ee4e: ;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
    }
    else {
      bVar6 = F_00a4cda0(*param_1 + 0xfc,0);
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
      if (bVar6 == 0) goto LAB_0048ee4e;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
    if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
      if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 0x5a) {
        return 2;
      }
      uVar7 = F_00a4cf70(*param_1 + 0xfc,10);
      F_00a51420(0x141,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,uVar7,0,0,0);
      return 0;
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x1091520)),REFG(undefined4, 0x108cc50));
    bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
    if ((bVar6 == 0) || (iVar14 < 4)) {
LAB_0048ef03: ;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
    }
    else {
      bVar6 = F_00a4cda0(*param_1 + 0xfc,0);
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
      if (bVar6 == 0) goto LAB_0048ef03;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
    if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
      if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 3) {
        return 2;
      }
      uVar7 = F_00a4cf70(*param_1 + 0xfc,10);
      F_00a51420(0x142,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,uVar7,0,0,0);
      return 0;
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x1091514)),REFG(undefined4, 0x108cc50));
    bVar3 = false;
    bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
    if (bVar6 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x109150c),REFG(undefined4, 0x108cc50));
      bVar3 = true;
      bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
      if (bVar6 != 0) goto LAB_0048efce;
LAB_0048efde: ;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    }
    else {
LAB_0048efce: ;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
      if ((*(int *)(gen_frame + 0x24)) < 4) goto LAB_0048efde;
    }
    if (bVar3) {
      F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
    bVar3 = false;
    if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
      if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 3) {
        return 2;
      }
      (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
      iVar14 = 1;
      bVar6 = F_00a4cda0(*param_1 + 0xfc,0);
      if (bVar6 == 0) {
        ppuVar25 = (*(undefined * PTR32 (*)[1])REFP(0x1091538));
        pvVar12 = ((undefined *)GEN_TOP(F_004881a0(((undefined1 *)(gen_frame + 0x88)),*param_1 + 0xfc)));
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042b6a0(pvVar12 GEN_EDX_ARG,ppuVar25);
        F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
        if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
          (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
          iVar14 = 0xffff;
        }
      }
      else {
        uVar7 = F_00a4cf70(*param_1 + 0xfc,10);
        (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(uVar7));
        iVar14 = uVar7 + 1;
      }
      if ((4 < (*(int *)(gen_frame + 0x24))) && (bVar6 = F_00a4cda0(*param_1 + 0x150,0), bVar6 != 0)) {
        uVar7 = F_00a4cf70(*param_1 + 0x150,10);
        iVar14 = uVar7 + 1;
      }
      F_00a51420(0x144,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,(*(float * PTR32 *)(gen_frame + 0x28)),iVar14,0,0);
      return 0;
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x1091504)),REFG(undefined4, 0x108cc50));
    bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
    if (bVar6 == 0) {
LAB_0048f169: ;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    }
    else {
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
      if ((*(int *)(gen_frame + 0x24)) < 4) goto LAB_0048f169;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
    if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
      if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 3) {
        return 2;
      }
      (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
      iVar14 = 1;
      bVar6 = F_00a4cda0(*param_1 + 0xfc,0);
      if (bVar6 == 0) {
        ppuVar25 = (*(undefined * PTR32 (*)[1])REFP(0x1091538));
        pvVar12 = ((undefined *)GEN_TOP(F_004881a0(((undefined1 *)(gen_frame + 0x88)),*param_1 + 0xfc)));
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042b6a0(pvVar12 GEN_EDX_ARG,ppuVar25);
        F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
        if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
          (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
          iVar14 = 0xffff;
        }
      }
      else {
        uVar7 = F_00a4cf70(*param_1 + 0xfc,10);
        (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(uVar7));
        iVar14 = uVar7 + 1;
      }
      if ((4 < (*(int *)(gen_frame + 0x24))) && (bVar6 = F_00a4cda0(*param_1 + 0x150,0), bVar6 != 0)) {
        uVar7 = F_00a4cf70(*param_1 + 0x150,10);
        iVar14 = uVar7 + 1;
      }
      F_00a51420(0x143,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,(*(float * PTR32 *)(gen_frame + 0x28)),iVar14,0,0);
      return 0;
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x10914f8)),REFG(undefined4, 0x108cc50));
    bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
    if (bVar6 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x10914f0)),REFG(undefined4, 0x108cc50));
      bVar3 = true;
      bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
      if (bVar6 != 0) goto LAB_0048f2fe;
    }
    else {
LAB_0048f2fe: ;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
      if (3 < (*(int *)(gen_frame + 0x24))) goto LAB_0048f315;
    }
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
LAB_0048f315: ;
    if (bVar3) {
      F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
    if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
      if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 0x5a) {
        return 2;
      }
      (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
      iVar14 = 1;
      bVar6 = F_00a4cda0(*param_1 + 0xfc,0);
      if (bVar6 == 0) {
        ppuVar25 = (*(undefined * PTR32 (*)[1])REFP(0x1091538));
        pvVar12 = ((undefined *)GEN_TOP(F_004881a0(((undefined1 *)(gen_frame + 0x88)),*param_1 + 0xfc)));
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042b6a0(pvVar12 GEN_EDX_ARG,ppuVar25);
        F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
        if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
          (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
          iVar14 = 0xffff;
        }
      }
      else {
        uVar7 = F_00a4cf70(*param_1 + 0xfc,10);
        (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(uVar7));
        iVar14 = uVar7 + 1;
      }
      if ((4 < (*(int *)(gen_frame + 0x24))) && (bVar6 = F_00a4cda0(*param_1 + 0x150,0), bVar6 != 0)) {
        uVar7 = F_00a4cf70(*param_1 + 0x150,10);
        iVar14 = uVar7 + 1;
      }
      F_00a51420(0x145,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,(*(float * PTR32 *)(gen_frame + 0x28)),iVar14,0,0);
      return 0;
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x1091658)),REFG(undefined4, 0x108cc50));
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
    F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
    if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == 0) {
      return 1;
    }
    if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 5) {
      return 2;
    }
    uVar7 = 0;
    if ((3 < (*(int *)(gen_frame + 0x24))) && (bVar6 = F_00a4cda0(*param_1 + 0xfc,0), bVar6 != 0)) {
      uVar7 = F_00a4cf70(*param_1 + 0xfc,10);
    }
    F_00a51420(0x146,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,uVar7,0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x1091520)),REFG(undefined4, 0x108cc50));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  iVar14 = (*(int *)(gen_frame + 0x24));
  if ((bVar6 == 0) || ((*(int *)(gen_frame + 0x24)) < 4)) {
LAB_0048e428: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
  }
  else {
    bVar6 = F_00a4cda0(*param_1 + 0xfc,0);
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if (bVar6 == 0) goto LAB_0048e428;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != '\0') {
    if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 3) {
      return 2;
    }
    uVar7 = F_00a4cf70(*param_1 + 0xfc,10);
    F_00a51420(300,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,uVar7,0,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x1091514)),REFG(undefined4, 0x108cc50));
  (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x4));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  if (bVar6 == 0) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x109150c),REFG(undefined4, 0x108cc50));
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0xc));
    bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
    if (bVar6 != 0) goto LAB_0048e4fd;
LAB_0048e509: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
  }
  else {
LAB_0048e4fd: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    if (iVar14 < 4) goto LAB_0048e509;
  }
  if (((uint)(*(float * PTR32 *)(gen_frame + 0x28)) & 8) != 0) {
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(((uint)(*(float * PTR32 *)(gen_frame + 0x28)) & 0xfffffff7)));
    F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  }
  if (((uint)(*(float * PTR32 *)(gen_frame + 0x28)) & 4) != 0) {
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(((uint)(*(float * PTR32 *)(gen_frame + 0x28)) & 0xfffffffb)));
    F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  }
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 3) {
      return 2;
    }
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
    iVar14 = 1;
    bVar6 = F_00a4cda0(*param_1 + 0xfc,0);
    if (bVar6 == 0) {
      ppuVar25 = (*(undefined * PTR32 (*)[1])REFP(0x1091538));
      pvVar12 = ((undefined *)GEN_TOP(F_004881a0(((undefined1 *)(gen_frame + 0x88)),*param_1 + 0xfc)));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042b6a0(pvVar12 GEN_EDX_ARG,ppuVar25);
      F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
        (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
        iVar14 = 0xffff;
      }
    }
    else {
      uVar7 = F_00a4cf70(*param_1 + 0xfc,10);
      (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(uVar7));
      iVar14 = uVar7 + 1;
    }
    if ((4 < (*(int *)(gen_frame + 0x24))) && (bVar6 = F_00a4cda0(*param_1 + 0x150,0), bVar6 != 0)) {
      uVar7 = F_00a4cf70(*param_1 + 0x150,10);
      iVar14 = uVar7 + 1;
    }
    F_00a51420(0x12e,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,(*(float * PTR32 *)(gen_frame + 0x28)),iVar14,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x1091504)),REFG(undefined4, 0x108cc50));
  (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(((uint)(*(float * PTR32 *)(gen_frame + 0x28)) | 0x10)));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
  if (bVar6 == 0) {
LAB_0048e695: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
  }
  else {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    if (iVar14 < 4) goto LAB_0048e695;
  }
  if (((uint)(*(float * PTR32 *)(gen_frame + 0x28)) & 0x10) != 0) {
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(((uint)(*(float * PTR32 *)(gen_frame + 0x28)) & 0xffffffef)));
    F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  }
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 3) {
      return 2;
    }
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
    iVar14 = 1;
    bVar6 = F_00a4cda0(*param_1 + 0xfc,0);
    if (bVar6 == 0) {
      ppuVar25 = (*(undefined * PTR32 (*)[1])REFP(0x1091538));
      pvVar12 = ((undefined *)GEN_TOP(F_004881a0(((undefined1 *)(gen_frame + 0x88)),*param_1 + 0xfc)));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042b6a0(pvVar12 GEN_EDX_ARG,ppuVar25);
      F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
        (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
        iVar14 = 0xffff;
      }
    }
    else {
      uVar7 = F_00a4cf70(*param_1 + 0xfc,10);
      (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(uVar7));
      iVar14 = uVar7 + 1;
    }
    if ((4 < (*(int *)(gen_frame + 0x24))) && (bVar6 = F_00a4cda0(*param_1 + 0x150,0), bVar6 != 0)) {
      uVar7 = F_00a4cf70(*param_1 + 0x150,10);
      iVar14 = uVar7 + 1;
    }
    F_00a51420(0x12d,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,(*(float * PTR32 *)(gen_frame + 0x28)),iVar14,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x10914f8)),REFG(undefined4, 0x108cc50));
  (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(((uint)(*(float * PTR32 *)(gen_frame + 0x28)) | 0x20)));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  if (bVar6 == 0) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x10914f0)),REFG(undefined4, 0x108cc50));
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(((uint)(*(float * PTR32 *)(gen_frame + 0x28)) | 0x40)));
    bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
    if (bVar6 != 0) goto LAB_0048e82e;
LAB_0048e83a: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
  }
  else {
LAB_0048e82e: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    if (iVar14 < 4) goto LAB_0048e83a;
  }
  if (((uint)(*(float * PTR32 *)(gen_frame + 0x28)) & 0x40) != 0) {
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(((uint)(*(float * PTR32 *)(gen_frame + 0x28)) & 0xffffffbf)));
    F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  }
  if (((uint)(*(float * PTR32 *)(gen_frame + 0x28)) & 0x20) != 0) {
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(((uint)(*(float * PTR32 *)(gen_frame + 0x28)) & 0xffffffdf)));
    F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  }
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
    if (*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) < 0x5a) {
      return 2;
    }
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
    iVar14 = 1;
    bVar6 = F_00a4cda0(*param_1 + 0xfc,0);
    if (bVar6 == 0) {
      ppuVar25 = (*(undefined * PTR32 (*)[1])REFP(0x1091538));
      pvVar12 = ((undefined *)GEN_TOP(F_004881a0(((undefined1 *)(gen_frame + 0x88)),*param_1 + 0xfc)));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042b6a0(pvVar12 GEN_EDX_ARG,ppuVar25);
      F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
        (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
        iVar14 = 0xffff;
      }
    }
    else {
      uVar7 = F_00a4cf70(*param_1 + 0xfc,10);
      (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(uVar7));
      iVar14 = uVar7 + 1;
    }
    if ((4 < (*(int *)(gen_frame + 0x24))) && (bVar6 = F_00a4cda0(*param_1 + 0x150,0), bVar6 != 0)) {
      uVar7 = F_00a4cf70(*param_1 + 0x150,10);
      iVar14 = uVar7 + 1;
    }
    F_00a51420(0x12f,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,(*(float * PTR32 *)(gen_frame + 0x28)),iVar14,0,0);
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((char *)REFP(0x10914e4)),REFG(undefined4, 0x108cc50));
  (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(((uint)(*(float * PTR32 *)(gen_frame + 0x28)) | 0x80)));
  bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  if (bVar6 == 0) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10914e0)),REFG(undefined4, 0x108cc50));
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(((uint)(*(float * PTR32 *)(gen_frame + 0x28)) | 0x100)));
    bVar6 = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
    if (bVar6 != 0) goto LAB_0048e9f6;
  }
  else {
LAB_0048e9f6: ;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 1;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\x01';
    if (4 < iVar14) goto LAB_0048ea09;
  }
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = 0;
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = '\0';
LAB_0048ea09: ;
  if (((uint)(*(float * PTR32 *)(gen_frame + 0x28)) & 0x100) != 0) {
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(((uint)(*(float * PTR32 *)(gen_frame + 0x28)) & 0xfffffeff)));
    F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  }
  if (((uint)(*(float * PTR32 *)(gen_frame + 0x28)) & 0x80) != 0) {
    F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  }
  uVar16 = (*(ulonglong *)(gen_frame + 0x18));
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == '\0') {
    F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((char *)REFP(0x1091658)),REFG(undefined4, 0x108cc50));
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
    F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
    if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x10914d8),REFG(undefined4, 0x108cc50));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) = F_0042ac50(((undefined *)GEN_TOP((*param_1 + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
      F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      uVar16 = (*(ulonglong *)(gen_frame + 0x18));
      if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x2e)) + 1)) != 0) {
        if (*((char *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) == '\0') {
          return 2;
        }
        if (3 < iVar14) {
          (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP(0x0));
          (*(ulonglong *)(gen_frame + 0x18)) = uVar16 & 0xffffffff;
          (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
          uVar7 = 0;
          bVar6 = F_00a4cda0(*param_1 + 0xfc,0);
          if (bVar6 != 0) {
            uVar11 = F_00a4cf70(*param_1 + 0xfc,10);
            (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP(uVar11));
            (*(ulonglong *)(gen_frame + 0x18)) = CONCAT44(uVar11,(undefined4)(*(ulonglong *)(gen_frame + 0x18)));
          }
          if ((4 < (*(int *)(gen_frame + 0x24))) && (bVar6 = F_00a4cda0(*param_1 + 0x150,0), bVar6 != 0)) {
            uVar11 = F_00a4cf70(*param_1 + 0x150,10);
            (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(uVar11));
            if (uVar11 != 0) {
              (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP((uVar11 - 1)));
            }
          }
          if (((5 < (*(int *)(gen_frame + 0x24))) && (bVar6 = F_00a4cda0(*param_1 + 0x1a4,0), bVar6 != 0)) &&
             (uVar7 = F_00a4cf70(*param_1 + 0x1a4,10), uVar7 != 0)) {
            uVar7 = uVar7 - 1;
          }
          F_00a51420(0x132,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,(*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)),(*(float * PTR32 *)(gen_frame + 0x28)),uVar7,0);
          return 0;
        }
      }
      return 1;
    }
    if (4 < *((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189)))) {
      uVar7 = 0;
      if ((3 < (*(int *)(gen_frame + 0x24))) && (bVar6 = F_00a4cda0(*param_1 + 0xfc,0), bVar6 != 0)) {
        uVar7 = F_00a4cf70(*param_1 + 0xfc,10);
      }
      F_00a51420(0x131,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,uVar7,0,0,0);
      return 0;
    }
  }
  else if (*((char *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x189))) != '\0') {
    uVar7 = 0;
    (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP(0x0));
    (*(ulonglong *)(gen_frame + 0x18)) = uVar16 & 0xffffffff;
    bVar6 = F_00a4cda0(*param_1 + 0xfc,0);
    if (bVar6 != 0) {
      uVar11 = F_00a4cf70(*param_1 + 0xfc,10);
      (*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = ((int *)GEN_TOP(uVar11));
      (*(ulonglong *)(gen_frame + 0x18)) = CONCAT44(uVar11,(undefined4)(*(ulonglong *)(gen_frame + 0x18)));
    }
    bVar6 = F_00a4cda0(*param_1 + 0x150,0);
    if (bVar6 != 0) {
      uVar7 = F_00a4cf70(*param_1 + 0x150,10);
    }
    F_00a51420(0x130,(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0x1d],0,(*(int * PTR32 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)),uVar7,0,0);
    return 0;
  }
  return 2;
}

/* ref: FUN_00490b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00490b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x490b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar2) && (uVar1 = *(uint *)this, uVar1 <= param_1)) {
    if (uVar2 == *((uint *)GEN_TOP(((int)this + 8)))) {
      uVar2 = F_0048a220(this GEN_EDX_FWD,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_00560a60(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,
                           *(int *)this + ((int)(param_1 - uVar1) >> 3) * 8);
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
      return uVar2;
    }
  }
  else {
    if (uVar2 == *((uint *)GEN_TOP(((int)this + 8)))) {
      uVar2 = F_0048a220(this GEN_EDX_ARG,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_00560a60(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
  return uVar2;
}

/* ref: FUN_00490be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00490be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x490be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  iVar2 = (param_1[1] - *param_1) / 0x58;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (iVar2 != 0) {
    iVar2 = iVar2 * 0x58;
    uVar1 = F_004296a0(iVar2,0,0);
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(((int)this + 8))) = iVar2 + uVar1;
    uVar1 = F_004860d0(*param_1,param_1[1],uVar1,(int)this + 0xc,param_1);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00490cc0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00490cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x490cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_0048a4f0(this GEN_EDX_FWD,1);
    }
    pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar4 = ((int)(param_1 - uVar2) / 0x58) * 0x58 + *(int *)this;
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(pvVar3 GEN_EDX_ARG,iVar4);
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x54))) = *((undefined4 *)GEN_TOP((iVar4 + 0x54)));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x58;
      return;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_0048a4f0(this GEN_EDX_ARG,1);
    }
    pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(pvVar3 GEN_EDX_ARG,param_1);
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x58;
  return;
}

/* ref: FUN_00490d50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00490d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x490d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00489280(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x74,400);
  return (uint)uVar1;
}

/* ref: FUN_00490d90 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00490d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x490d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_0048a5a0(this GEN_EDX_FWD,1);
    }
    uVar2 = ((int)(param_1 - uVar2) / 0xa8) * 0xa8 + *(int *)this;
  }
  else {
    uVar2 = param_1;
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_0048a5a0(this GEN_EDX_ARG,1);
    }
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(this_00 GEN_EDX_ARG,uVar2);
    F_0042cbc0(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_ARG,uVar2 + 0x54);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0xa8;
  return;
}

/* ref: FUN_00490e70 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00490e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x490e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  uVar7 = F_0048a6a0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))),iVar2);
  *((uint *)GEN_TOP((iVar2 + 4))) = uVar7;
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  piVar4 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar4 + 0x69))) != '\0') {
    *piVar3 = (int)piVar3;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    return 0;
  }
  cVar1 = *((char *)GEN_TOP((*piVar4 + 0x69)));
  piVar6 = ((int *)GEN_TOP(*piVar4));
  while (cVar1 == '\0') {
    cVar1 = *((char *)GEN_TOP((*piVar6 + 0x69)));
    piVar4 = piVar6;
    piVar6 = ((int *)GEN_TOP(*piVar6));
  }
  *piVar3 = (int)piVar4;
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  iVar5 = *((int *)GEN_TOP((iVar2 + 8)));
  cVar1 = *((char *)GEN_TOP((iVar5 + 0x69)));
  while (cVar1 == '\0') {
    cVar1 = *((char *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 8))) + 0x69)));
    iVar2 = iVar5;
    iVar5 = *((int *)GEN_TOP((iVar5 + 8)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = iVar2;
  return 0;
}

/* ref: FUN_00490ef0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00490ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x490ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    F_00488dc0(this GEN_EDX_FWD);
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

/* ref: FUN_00490f30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00490f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x490f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined * this_00;
  
  if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined4 *)GEN_TOP(0x0))) {
    if ((*((char *)GEN_TOP(((int)this + 8))) != '\0') && (*((char *)GEN_TOP(((int)this + 8))) == '\x01')) {
      this_00 = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))));
      *((int *)GEN_TOP(((int)this_00 + 0x54))) = *((int *)GEN_TOP(((int)this_00 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)this_00 + 0x54))) < 1) {
        F_0042c880(this_00 GEN_EDX_FWD);
        F_00406ad0(this_00);
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 8))) = 0xff;
  }
  *(undefined4 *)this = *param_1;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this;
  *((undefined1 *)GEN_TOP(((int)this + 8))) = 0;
  return (uint)this;
}

/* ref: FUN_00490f90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00490f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x490f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * pvVar1;
  
  if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined4 *)GEN_TOP(0x0))) {
    if ((*((char *)GEN_TOP(((int)this + 8))) != '\0') && (*((char *)GEN_TOP(((int)this + 8))) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_FWD);
        F_00406ad0(pvVar1);
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 8))) = 0xff;
  }
  pvVar1 = ((undefined *)GEN_TOP(F_00406b90(0x58,0,0)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(pvVar1 GEN_EDX_ARG,param_1);
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x54))) = 1;
    *(undefined * PTR32 *)this = pvVar1;
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this;
    *((undefined1 *)GEN_TOP(((int)this + 8))) = 1;
    return (uint)this;
  }
  *(undefined4 *)this = 0;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this;
  *((undefined1 *)GEN_TOP(((int)this + 8))) = 1;
  return (uint)this;
}

/* ref: FUN_00491020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00491020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x491020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_004898c0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00491050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00491050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x491050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined * this_00;
  
  if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined4 *)GEN_TOP(0x0))) {
    if ((*((char *)GEN_TOP(((int)this + 8))) != '\0') && (*((char *)GEN_TOP(((int)this + 8))) == '\x01')) {
      this_00 = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))));
      *((int *)GEN_TOP(((int)this_00 + 0x54))) = *((int *)GEN_TOP(((int)this_00 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)this_00 + 0x54))) < 1) {
        F_0042c880(this_00 GEN_EDX_FWD);
        F_00406ad0(this_00);
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 8))) = 0xff;
  }
  *(undefined4 *)this = *param_1;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this;
  *((undefined1 *)GEN_TOP(((int)this + 8))) = 0;
  return (uint)this;
}

/* ref: FUN_004910b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004910b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4910b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  undefined * this_00;
  int iVar2;
  
  if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined4 *)GEN_TOP(0x0))) {
    if ((*((char *)GEN_TOP(((int)this + 8))) != '\0') && (*((char *)GEN_TOP(((int)this + 8))) == '\x01')) {
      this_00 = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))));
      *((int *)GEN_TOP(((int)this_00 + 0x54))) = *((int *)GEN_TOP(((int)this_00 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)this_00 + 0x54))) < 1) {
        F_0042c880(this_00 GEN_EDX_FWD);
        F_00406ad0(this_00);
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 8))) = 0xff;
  }
  iVar2 = *param_1;
  piVar1 = ((int *)GEN_TOP((iVar2 + 0x54)));
  *piVar1 = *piVar1 + 1;
  *(int *)this = iVar2;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this;
  *((undefined1 *)GEN_TOP(((int)this + 8))) = 1;
  return (uint)this;
}

/* ref: FUN_00491110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00491110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x491110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xc))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10916cc));
  *((undefined4 *)GEN_TOP(((int)this + 0x658))) = 0;
  uVar1 = F_004296a0(0x78,0,400);
  *((uint *)GEN_TOP(((int)this + 0x654))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x654))) + 4))) = *((int *)GEN_TOP(((int)this + 0x654)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x654))) + 8))) = *((int *)GEN_TOP(((int)this + 0x654)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x654))) + 0x70))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x654))) + 0x71))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x660))) = 0;
  return (uint)this;
}

/* ref: FUN_00491180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00491180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x491180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10916cc));
  F_00487a80(((undefined *)GEN_TOP(((int)this + 0x650))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x654))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x654))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x654))),0x78,400);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  return (uint)uVar1;
}

/* ref: Client::UI::Info::InfoProxyBlacklist::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004911d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4911d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x10916cc));
  F_00487a80(param_1 + 0x194 GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(param_1[0x195])),((undefined4 *)GEN_TOP(param_1[0x195])));
  F_00429760(param_1[0x195],0x78,400);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00491230 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00491230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x491230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0042b630(this GEN_EDX_FWD);
  F_0042b630((int)this + 0x54 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x704))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6e8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6f4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6f8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6fc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x700))) = 0;
  F_00a4afe0(((undefined *)GEN_TOP(((int)this + 0x708))) GEN_EDX_ARG,0x2000,0);
  *((undefined4 *)GEN_TOP(((int)this + 0x71c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x720))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x724))) = 0xff010000;
  *((undefined1 *)GEN_TOP(((int)this + 0x728))) = 0xff;
  *((undefined2 *)GEN_TOP(((int)this + 0x72a))) = 0x80;
  *((undefined4 *)GEN_TOP(((int)this + 0x734))) = 0;
  uVar1 = F_004296a0(0x6c,0,0x192);
  *((uint *)GEN_TOP(((int)this + 0x730))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x730))) + 4))) = *((int *)GEN_TOP(((int)this + 0x730)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x730))) + 8))) = *((int *)GEN_TOP(((int)this + 0x730)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x730))) + 0x68))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x730))) + 0x69))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x73c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x740))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x744))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x748))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x74c))) = 0xffffffff;
  *((undefined1 *)GEN_TOP(((int)this + 0x752))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x750))) = 0;
  return (uint)this;
}

/* ref: FUN_00491340 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00491340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x491340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00488dc0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00491360 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00491360(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x491360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP((in_ecx + 0xa8))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 0xac))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc0))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 200))) = 0;
  return in_ecx;
}

/* ref: FUN_004913a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004913a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4913a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00489280(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x74,400);
  return (uint)uVar1;
}

/* ref: FUN_004914a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004914a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4914a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00490be0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandHotbar::vf2 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004914d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4), GEN_P(uint param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x4914d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_PIN(uint param_5 = (uint)gen_a5;)
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_FWD)));
  if ((((param_2 < 0x1d) && (param_4 < 0x1d)) && (param_3 < 10)) && (param_5 < 10)) {
    F_00459650(this_00 GEN_EDX_ARG,param_2,param_3,param_4,param_5);
    return 1;
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandHotbar::vf3 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00491520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x491520u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  char * pcVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  
  if (param_4 < 0) {
    uVar7 = 0;
    uVar6 = 1;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_FWD);
    bVar1 = F_0045c2f0(uVar2 GEN_EDX_ARG,param_2,param_3,uVar6,uVar7);
    return bVar1;
  }
  if (param_5 < 0) {
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_ARG)));
    F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,0xb9);
    iVar4 = 0;
    pcVar5 = ((char *)GEN_TOP((param_4 * 0x1640 + 0x50 + (int)pvVar3)));
    do {
      if (*pcVar5 == '\0') {
        F_00459030(pvVar3 GEN_EDX_ARG,param_4,iVar4,param_2,param_3);
        return 1;
      }
      iVar4 = iVar4 + 1;
      pcVar5 = pcVar5 + 0x164;
    } while (iVar4 < 0xc);
    return 0;
  }
  if ((param_4 < 10) && (param_5 < 0x10)) {
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_ARG)));
    F_00459030(pvVar3 GEN_EDX_ARG,param_4,param_5,param_2,param_3);
    return 1;
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandHotbarCross::vf2 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004915f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4), GEN_P(uint param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x4915f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_PIN(uint param_5 = (uint)gen_a5;)
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_FWD)));
  if ((((param_2 < 0x1d) && (param_4 < 0x1d)) && (param_3 < 8)) && (param_5 < 8)) {
    F_00459650(this_00 GEN_EDX_ARG,param_2,param_3 + 10,param_4,param_5 + 10);
    return 1;
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandHotbarCross::vf3 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00491640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x491640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined * this_00;
  undefined1 uVar4;
  undefined4 uVar5;
  
  if (param_4 < 0) {
    uVar5 = 0;
    uVar4 = 1;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_FWD);
    bVar1 = F_0045c3c0(uVar2 GEN_EDX_ARG,param_2,param_3,uVar4,uVar5);
    return bVar1;
  }
  if (param_5 < 0) {
    uVar5 = 0;
    uVar4 = 1;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_ARG);
    bVar1 = F_0045c1c0(uVar2 GEN_EDX_ARG,param_4,param_2,param_3,uVar4,uVar5);
    return bVar1;
  }
  if ((param_4 < 8) && (param_5 < 0x10)) {
    iVar3 = param_4 + 10;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_ARG)));
    F_00459030(this_00 GEN_EDX_ARG,iVar3,param_5,param_2,param_3);
    return 1;
  }
  return 0;
}

/* ref: FUN_004916d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004916d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4916d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10916f4));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  F_0042b630(in_ecx + 5 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x1a GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x2f GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x44 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x59 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x6e GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x83 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x98 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0xad GEN_EDX_ARG);
  return (uint)in_ecx;
}

/* ref: FUN_00491750 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00491750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x491750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x2b4))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x260))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x20c))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x1b8))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x164))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x110))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xbc))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG);
  uVar1 = F_0048a630(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  return uVar1;
}

/* ref: FUN_004917c0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004917c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4917c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  
  if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined4 *)GEN_TOP(0x0))) {
    if ((*((char *)GEN_TOP(((int)this + 8))) != '\0') && (*((char *)GEN_TOP(((int)this + 8))) == '\x01')) {
      this_00 = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))));
      *((int *)GEN_TOP(((int)this_00 + 0x54))) = *((int *)GEN_TOP(((int)this_00 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)this_00 + 0x54))) < 1) {
        F_0042c880(this_00 GEN_EDX_FWD);
        F_00406ad0(this_00);
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 8))) = 0xff;
  }
  return;
}

/* ref: FUN_00491850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00491850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x491850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[0]);
  if (this != (*(undefined * PTR32 *)&gen_args[0])) {
    F_00488bc0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)&gen_args[0]),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
    F_00490e70(this GEN_EDX_ARG,pvVar1);
  }
  return (uint)this;
}

/* ref: FUN_00491880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00491880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x491880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (this != param_1) {
    F_00488dc0(this GEN_EDX_FWD);
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_004918c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004918c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4918c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 8))) = 0xff;
  F_00490f90(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_004918f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004918f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4918f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 8))) = 0xff;
  *(undefined4 *)this = *param_1;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this;
  *((undefined1 *)GEN_TOP(((int)this + 8))) = 0;
  return (uint)this;
}

/* ref: FUN_00491920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00491920(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x491920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined * this;
  
  if (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) != ((undefined4 *)GEN_TOP(0x0))) {
    if ((*((char *)GEN_TOP((param_1 + 8))) != '\0') && (*((char *)GEN_TOP((param_1 + 8))) == '\x01')) {
      this = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))));
      *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)this + 0x54))) < 1) {
        F_0042c880(this GEN_EDX_FWD);
        F_00406ad0(this);
      }
    }
    *((undefined4 *)GEN_TOP((param_1 + 4))) = 0;
    *((undefined1 *)GEN_TOP((param_1 + 8))) = 0xff;
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00491980 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00491980(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x491980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00488dc0(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_FWD);
  F_0042c880(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004919b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004919b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4919b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined * this_00;
  undefined4 * puVar3;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar2 = *(undefined4 * PTR32 *)this;
  puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    if ((*(char *)(puVar2 + 2) != '\0') && (*(char *)(puVar2 + 2) == '\x01')) {
      this_00 = ((undefined *)GEN_TOP(*puVar3));
      *((int *)GEN_TOP(((int)this_00 + 0x54))) = *((int *)GEN_TOP(((int)this_00 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)this_00 + 0x54))) < 1) {
        F_0042c880(this_00 GEN_EDX_FWD);
        puVar3 = ((undefined4 *)GEN_TOP(F_00406ad0(this_00)));
      }
    }
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 0xff;
  }
  *puVar2 = *puVar1;
  puVar2[1] = puVar2;
  *(undefined1 *)(puVar2 + 2) = 0;
  return (uint)puVar3;
}

/* ref: FUN_00491a10 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00491a10(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x491a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    F_004898c0(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_ARG,param_2 + 0x54);
  }
  return;
}

/* ref: FUN_00491a40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00491a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x491a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0048a290(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00491a60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00491a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x491a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  uint * puVar2;
  undefined * this_00;
  uint uVar3;
  
  puVar1 = *((uint * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar2 = *(uint * PTR32 *)this;
  if (((undefined4 *)GEN_TOP(puVar2[1])) != ((undefined4 *)GEN_TOP(0x0))) {
    if (((char)puVar2[2] != '\0') && ((char)puVar2[2] == '\x01')) {
      this_00 = *((undefined * PTR32 *)GEN_TOP(puVar2[1]));
      *((int *)GEN_TOP(((int)this_00 + 0x54))) = *((int *)GEN_TOP(((int)this_00 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)this_00 + 0x54))) < 1) {
        F_0042c880(this_00 GEN_EDX_FWD);
        F_00406ad0(this_00);
      }
    }
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 0xff;
  }
  uVar3 = *puVar1;
  *((int *)GEN_TOP((uVar3 + 0x54))) = *((int *)GEN_TOP((uVar3 + 0x54))) + 1;
  *puVar2 = uVar3;
  puVar2[1] = (uint)puVar2;
  *(undefined1 *)(puVar2 + 2) = 1;
  return uVar3;
}

/* ref: Client::UI::Shell::ShellCommandWritePcInfo::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00491b60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x491b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00491750(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00491b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00491b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x491b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[0]);
  if (this != (*(undefined * PTR32 *)&gen_args[0])) {
    F_00488bc0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)&gen_args[0]),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
    F_00490e70(this GEN_EDX_ARG,pvVar1);
  }
  return (uint)this;
}

/* ref: FUN_00491bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00491bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x491bc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * this_00;
  
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  *this_00 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  if (this_00 != param_2) {
    F_00488dc0(this_00 GEN_EDX_ARG);
    *this_00 = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_2[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00491c10 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00491c10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x491c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  undefined * this;
  
  if (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) != ((undefined4 *)GEN_TOP(0x0))) {
    if ((*((char *)GEN_TOP((param_1 + 8))) != '\0') && (*((char *)GEN_TOP((param_1 + 8))) == '\x01')) {
      this = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))));
      *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)this + 0x54))) < 1) {
        F_0042c880(this GEN_EDX_ARG);
        F_00406ad0(this);
      }
    }
    *((undefined4 *)GEN_TOP((param_1 + 4))) = 0;
    *((undefined1 *)GEN_TOP((param_1 + 8))) = 0xff;
  }
  return;
}

/* ref: FUN_00491c60 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00491c60(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x491c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00488dc0(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00491c80 */
GEN_OWN GEN_FRAME unsigned int F_00491c80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x491c80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    F_004898c0(((undefined *)GEN_TOP(((int)param_2 + 0x54))) GEN_EDX_ARG,param_3 + 0x54);
  }
  return;
}

/* ref: FUN_00491cb0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00491cb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x491cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 == 1) {
    F_00491a60(param_2 GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00491cd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00491cd0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x491cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0048a290(((undefined *)GEN_TOP(((int)param_1 + 0x58))) GEN_EDX_FWD);
  F_0042c880(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00491d00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00491d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x491d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  undefined * this_00;
  int iVar1;
  
  iVar1 = (*(int *)&gen_args[0]);
  F_00470fd0(this GEN_EDX_FWD,(*(int *)&gen_args[0]));
  F_00a4b0d0(((undefined *)GEN_TOP(((int)this + 0x708))) GEN_EDX_ARG,iVar1 + 0x708);
  *((undefined4 *)GEN_TOP(((int)this + 0x71c))) = *((undefined4 *)GEN_TOP((iVar1 + 0x71c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x720))) = *((undefined4 *)GEN_TOP((iVar1 + 0x720)));
  *((undefined4 *)GEN_TOP(((int)this + 0x724))) = *((undefined4 *)GEN_TOP((iVar1 + 0x724)));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x72c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x728))) = *((undefined4 *)GEN_TOP((iVar1 + 0x728)));
  if (this_00 != ((undefined *)GEN_TOP((iVar1 + 0x72c)))) {
    F_00488bc0(this_00 GEN_EDX_ARG,&(*(int *)&gen_args[0]),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x730))),
                 *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x730))));
    F_00490e70(this_00 GEN_EDX_ARG,iVar1 + 0x72c);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x73c))) = *((undefined4 *)GEN_TOP((iVar1 + 0x73c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x740))) = *((undefined4 *)GEN_TOP((iVar1 + 0x740)));
  *((undefined4 *)GEN_TOP(((int)this + 0x744))) = *((undefined4 *)GEN_TOP((iVar1 + 0x744)));
  *((undefined4 *)GEN_TOP(((int)this + 0x748))) = *((undefined4 *)GEN_TOP((iVar1 + 0x748)));
  *((undefined4 *)GEN_TOP(((int)this + 0x74c))) = *((undefined4 *)GEN_TOP((iVar1 + 0x74c)));
  *((undefined2 *)GEN_TOP(((int)this + 0x750))) = *((undefined2 *)GEN_TOP((iVar1 + 0x750)));
  *((undefined1 *)GEN_TOP(((int)this + 0x752))) = *((undefined1 *)GEN_TOP((iVar1 + 0x752)));
  *((undefined1 *)GEN_TOP(((int)this + 0x753))) = *((undefined1 *)GEN_TOP((iVar1 + 0x753)));
  return (uint)this;
}

/* ref: FUN_00491df0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00491df0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x491df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP((in_ecx + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xac))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xb0))) = 0;
  F_0042b630(in_ecx + 0xb8 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_00491e30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00491e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x491e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xb8))) GEN_EDX_FWD);
  F_0048a360(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00491e60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00491e60(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x491e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP((in_ecx + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xac))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xb0))) = 0;
  return in_ecx;
}

/* ref: FUN_00491e90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00491e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x491e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0048a2f0(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00491eb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00491eb0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x491eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP((in_ecx + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xac))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xb0))) = 0;
  return in_ecx;
}

/* ref: FUN_00491ee0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00491ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x491ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0048a360(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00491f00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00491f00(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x491f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP((in_ecx + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xac))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xb0))) = 0;
  return in_ecx;
}

/* ref: FUN_00491f30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00491f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x491f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0048a3d0(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00491f50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00491f50(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x491f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0xa8 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x110 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP((in_ecx + 0x164))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x168))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x16c))) = 0;
  return in_ecx;
}

/* ref: FUN_00491f90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00491f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x491f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0048a3d0(((undefined *)GEN_TOP(((int)this + 0x164))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x110))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00491fd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00491fd0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x491fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP((in_ecx + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xac))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xb0))) = 0;
  return in_ecx;
}

/* ref: FUN_00492000 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00492000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x492000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0048a490(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00492020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00492020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x492020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * this_00;
  
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  *this_00 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  if (this_00 != param_2) {
    F_00488dc0(this_00 GEN_EDX_ARG);
    *this_00 = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_2[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00492070 */
GEN_OWN GEN_FRAME uint F_00492070(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x492070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  F_00488dc0(((undefined *)GEN_TOP(((int)param_2 + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00492090 */
GEN_OWN GEN_FRAME unsigned int F_00492090(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x492090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  
  if (*((undefined4 * PTR32 *)GEN_TOP((param_2 + 4))) != ((undefined4 *)GEN_TOP(0x0))) {
    if ((*((char *)GEN_TOP((param_2 + 8))) != '\0') && (*((char *)GEN_TOP((param_2 + 8))) == '\x01')) {
      this = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((param_2 + 4)))));
      *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)this + 0x54))) < 1) {
        F_0042c880(this GEN_EDX_ARG);
        F_00406ad0(this);
      }
    }
    *((undefined4 *)GEN_TOP((param_2 + 4))) = 0;
    *((undefined1 *)GEN_TOP((param_2 + 8))) = 0xff;
  }
  return;
}

/* ref: FUN_004920e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004920e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x4920e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00488dc0(param_5 + 0x18 GEN_EDX_FWD);
    F_0042c880(param_5 + 3 GEN_EDX_ARG);
    F_00429760(param_5,0x74,400);
                    
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
      goto LAB_0049215b;
    }
    param_4[2] = param_5;
    iVar4 = *((int *)GEN_TOP((param_1 + 4)));
    if (param_4 != *((undefined4 * PTR32 *)GEN_TOP((iVar4 + 8)))) goto LAB_0049215b;
  }
  *((int * PTR32 *)GEN_TOP((iVar4 + 8))) = param_5;
LAB_0049215b: ;
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x70)));
  piVar3 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar4 + 0x70))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar3[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar4 = piVar6[2];
      if (*((char *)GEN_TOP((iVar4 + 0x70))) == '\0') {
        *(undefined1 *)(piVar5 + 0x1c) = 1;
        *((undefined1 *)GEN_TOP((iVar4 + 0x70))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x70))) = 0;
        piVar3 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
      }
      else {
        if (piVar3 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar3 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar3;
          if (*((char *)GEN_TOP((*piVar3 + 0x71))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar3[1] + 0x70))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x70))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x71))) == '\0') {
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
LAB_004922ed: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*((char *)GEN_TOP((iVar4 + 0x70))) != '\0') {
        if (piVar3 == ((int *)GEN_TOP(*piVar5))) {
          iVar4 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar4 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 8))) + 0x71))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar3[1] + 0x70))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x70))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x71))) == '\0') {
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
        goto LAB_004922ed;
      }
      *(undefined1 *)(piVar5 + 0x1c) = 1;
      *((undefined1 *)GEN_TOP((iVar4 + 0x70))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x70))) = 0;
      piVar3 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x70)));
  } while( true );
}

/* ref: FUN_00492320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00492320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x492320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x74,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar1 + 3 GEN_EDX_ARG,param_1);
    F_004898c0(puVar1 + 0x18 GEN_EDX_ARG,param_1 + 0x54);
  }
  return (uint)puVar1;
}

/* ref: FUN_00492380 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00492380(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x492380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = F_004919b0(param_2 GEN_EDX_ARG);
    return uVar1;
  }
  uVar1 = param_1;
  if (param_1 == 1) {
    uVar1 = F_00491a60(param_2 GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_004923b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004923b0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4923b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0048a290(((undefined *)GEN_TOP(((int)param_1 + 0x58))) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_004923d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004923d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4923d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  uint uVar7;
  int * piVar8;
  int * piVar9;
  undefined * this_00;
  
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x71))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_004731e0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar8 = ((int *)GEN_TOP(*piVar5));
  if (*((char *)GEN_TOP(((int)piVar8 + 0x71))) == '\0') {
    piVar9 = piVar8;
    if ((*((char *)GEN_TOP((piVar5[2] + 0x71))) == '\0') && (piVar9 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar5)) {
      piVar8[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar5;
      piVar8 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar5[2]))) {
        piVar8 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar9 + 0x71))) == '\0') {
          piVar9[1] = (int)piVar8;
        }
        *piVar8 = (int)piVar9;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar5[2];
        *((int * PTR32 *)GEN_TOP((piVar5[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar5) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar5[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar5) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar5[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[0x1c];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 0x1c))) = (char)piVar5[0x1c];
      *(char *)(piVar5 + 0x1c) = (char)iVar1;
      goto LAB_004924ea;
    }
  }
  else {
    piVar9 = ((int *)GEN_TOP(piVar5[2]));
  }
  piVar8 = ((int *)GEN_TOP(piVar5[1]));
  if (*((char *)GEN_TOP(((int)piVar9 + 0x71))) == '\0') {
    piVar9[1] = (int)piVar8;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar5) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar9;
  }
  else if (((int *)GEN_TOP(*piVar8)) == piVar5) {
    *piVar8 = (int)piVar9;
  }
  else {
    piVar8[2] = (int)piVar9;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar5) {
    piVar6 = piVar8;
    if (*((char *)GEN_TOP(((int)piVar9 + 0x71))) == '\0') {
      piVar6 = ((int *)GEN_TOP(F_00472100(piVar9)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar6;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar5) {
    if (*((char *)GEN_TOP(((int)piVar9 + 0x71))) == '\0') {
      uVar7 = F_004720e0(piVar9);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar7;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar8;
    }
  }
LAB_004924ea: ;
  if ((char)piVar5[0x1c] == '\x01') {
    if (piVar9 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar6 = piVar8;
        if ((char)piVar9[0x1c] != '\x01') break;
        piVar8 = ((int *)GEN_TOP(*piVar6));
        if (piVar9 == piVar8) {
          piVar8 = ((int *)GEN_TOP(piVar6[2]));
          if ((char)piVar8[0x1c] == '\0') {
            *(undefined1 *)(piVar8 + 0x1c) = 1;
            *(undefined1 *)(piVar6 + 0x1c) = 0;
            F_0047eff0(this GEN_EDX_ARG,piVar6);
            piVar8 = ((int *)GEN_TOP(piVar6[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar8 + 0x71))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar8 + 0x70))) != '\x01') || (*((char *)GEN_TOP((piVar8[2] + 0x70))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar8[2] + 0x70))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar8 + 0x70))) = 1;
                *(undefined1 *)(piVar8 + 0x1c) = 0;
                F_0047b3e0(this GEN_EDX_ARG,piVar8);
                piVar8 = ((int *)GEN_TOP(piVar6[2]));
              }
              *(char *)(piVar8 + 0x1c) = (char)piVar6[0x1c];
              *(undefined1 *)(piVar6 + 0x1c) = 1;
              *((undefined1 *)GEN_TOP((piVar8[2] + 0x70))) = 1;
              F_0047eff0(this GEN_EDX_ARG,piVar6);
              break;
            }
LAB_004925a8: ;
            *(undefined1 *)(piVar8 + 0x1c) = 0;
          }
        }
        else {
          if ((char)piVar8[0x1c] == '\0') {
            *(undefined1 *)(piVar8 + 0x1c) = 1;
            *(undefined1 *)(piVar6 + 0x1c) = 0;
            F_0047b3e0(this GEN_EDX_ARG,piVar6);
            piVar8 = ((int *)GEN_TOP(*piVar6));
          }
          if (*((char *)GEN_TOP(((int)piVar8 + 0x71))) == '\0') {
            if ((*((char *)GEN_TOP((piVar8[2] + 0x70))) == '\x01') && (*((char *)GEN_TOP((*piVar8 + 0x70))) == '\x01'))
            goto LAB_004925a8;
            if (*((char *)GEN_TOP((*piVar8 + 0x70))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar8[2] + 0x70))) = 1;
              *(undefined1 *)(piVar8 + 0x1c) = 0;
              F_0047eff0(this GEN_EDX_ARG,piVar8);
              piVar8 = ((int *)GEN_TOP(*piVar6));
            }
            *(char *)(piVar8 + 0x1c) = (char)piVar6[0x1c];
            *(undefined1 *)(piVar6 + 0x1c) = 1;
            *((undefined1 *)GEN_TOP((*piVar8 + 0x70))) = 1;
            F_0047b3e0(this GEN_EDX_ARG,piVar6);
            break;
          }
        }
        piVar8 = ((int *)GEN_TOP(piVar6[1]));
        piVar9 = piVar6;
      } while (piVar6 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar9 + 0x1c) = 1;
  }
  this_00 = ((undefined *)GEN_TOP(piVar5[0x18]));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    pvVar3 = ((undefined *)GEN_TOP(piVar5[0x19]));
    for (; this_00 != pvVar3; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 8)))) {
      F_005a2670(this_00 GEN_EDX_ARG);
    }
    iVar1 = piVar5[0x18];
    iVar4 = piVar5[0x1a];
    F_00429760(iVar1,(iVar4 - iVar1 >> 3) * 8,400);
  }
  piVar5[0x18] = 0;
  piVar5[0x19] = 0;
  piVar5[0x1a] = 0;
  F_0042c880(piVar5 + 3 GEN_EDX_ARG);
  F_00429760(piVar5,0x74,400);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00492680 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00492680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x492680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  undefined * pvVar3;
  int * piVar4;
  undefined * this_00;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x71)));
  piVar4 = param_1;
  while (cVar1 == '\0') {
    F_00492680(this GEN_EDX_FWD,((int *)GEN_TOP(piVar4[2])));
    this_00 = ((undefined *)GEN_TOP(piVar4[0x18]));
    piVar2 = ((int *)GEN_TOP(*piVar4));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      pvVar3 = ((undefined *)GEN_TOP(piVar4[0x19]));
      for (; this_00 != pvVar3; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 8)))) {
        F_005a2670(this_00 GEN_EDX_ARG);
      }
      F_00429760(piVar4[0x18],(piVar4[0x1a] - piVar4[0x18] >> 3) * 8,400);
    }
    piVar4[0x18] = 0;
    piVar4[0x19] = 0;
    piVar4[0x1a] = 0;
    F_0042c880(piVar4 + 3 GEN_EDX_ARG);
    F_00429760(piVar4,0x74,400);
    piVar4 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x71)));
  }
  return;
}

/* ref: FUN_00492740 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00492740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x492740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  undefined * this_00;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + *((int *)GEN_TOP(((int)this + 0xc))) * 4)));
    if (*((undefined4 * PTR32 *)GEN_TOP((iVar2 + 4))) != ((undefined4 *)GEN_TOP(0x0))) {
      if ((*((char *)GEN_TOP((iVar2 + 8))) != '\0') && (*((char *)GEN_TOP((iVar2 + 8))) == '\x01')) {
        this_00 = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((iVar2 + 4)))));
        *((int *)GEN_TOP(((int)this_00 + 0x54))) = *((int *)GEN_TOP(((int)this_00 + 0x54))) - 1;
        if (*((int *)GEN_TOP(((int)this_00 + 0x54))) < 1) {
          F_0042c880(this_00 GEN_EDX_FWD);
          F_00406ad0(this_00);
        }
      }
      *((undefined4 *)GEN_TOP((iVar2 + 4))) = 0;
      *((undefined1 *)GEN_TOP((iVar2 + 8))) = 0xff;
    }
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
    if (*((uint *)GEN_TOP(((int)this + 8))) <= *((uint *)GEN_TOP(((int)this + 0xc)))) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
    piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
  }
  return;
}

/* ref: FUN_004927b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004927b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4927b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 * puVar4;
  
  puVar4 = ((undefined4 *)GEN_TOP(0x0));
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    uVar3 = *((int *)GEN_TOP(((int)this + 0x10))) - 1 + *((int *)GEN_TOP(((int)this + 0xc)));
    if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar3) {
      uVar3 = uVar3 - *((uint *)GEN_TOP(((int)this + 8)));
    }
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4)));
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 4)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      if ((*((char *)GEN_TOP((iVar2 + 8))) != '\0') && (*((char *)GEN_TOP((iVar2 + 8))) == '\x01')) {
        this_00 = ((undefined *)GEN_TOP(*puVar4));
        *((int *)GEN_TOP(((int)this_00 + 0x54))) = *((int *)GEN_TOP(((int)this_00 + 0x54))) - 1;
        if (*((int *)GEN_TOP(((int)this_00 + 0x54))) < 1) {
          F_0042c880(this_00 GEN_EDX_FWD);
          puVar4 = ((undefined4 *)GEN_TOP(F_00406ad0(this_00)));
        }
      }
      *((undefined4 *)GEN_TOP((iVar2 + 4))) = 0;
      *((undefined1 *)GEN_TOP((iVar2 + 8))) = 0xff;
    }
    piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00492820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00492820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x492820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  byte bVar4;
  undefined4 * puVar5;
  undefined * this_00;
  undefined4 * puVar6;
  byte local_8;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  this_00 = ((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x71)));
  local_8 = 1;
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  bVar3 = local_8;
  while (cVar1 == '\0') {
    if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
      bVar3 = F_0042c7c0(this_00 GEN_EDX_FWD,puVar5 + 3);
    }
    else {
      bVar3 = F_0042c7c0(puVar5 + 3 GEN_EDX_ARG,this_00);
      bVar3 = bVar3 == 0;
    }
    if (bVar3 == 0) {
      puVar6 = ((undefined4 *)GEN_TOP(puVar5[2]));
    }
    else {
      puVar6 = ((undefined4 *)GEN_TOP(*puVar5));
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    cVar1 = *((char *)GEN_TOP(((int)puVar6 + 0x71)));
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (bVar3 != 0) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar5 = ((undefined4 *)GEN_TOP(F_004920e0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00474950(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[2]);
  bVar4 = F_0042c7c0((*(undefined4 * PTR32 *)&gen_args[2]) + 3 GEN_EDX_ARG,this_00);
  if (bVar4 != 0) {
    puVar5 = ((undefined4 *)GEN_TOP(F_004920e0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),bVar3,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00488dc0(((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 0x60))) GEN_EDX_ARG);
  F_0042c880(this_00 GEN_EDX_ARG);
  F_00429760((*(int *)&gen_args[1]),0x74,400);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00492930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00492930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x492930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  char cVar1;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 8)));
  if ((cVar1 != -1) && (this != param_1)) {
    (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)param_1 + 4)));
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
    if (cVar1 == '\0') {
      F_004919b0(&(*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD);
      return (uint)this;
    }
    if (cVar1 == '\x01') {
      F_00491a60(&(*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  return (uint)this;
}

/* ref: FUN_00492980 */
GEN_OWN GEN_FRAME uint F_00492980(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(uint param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(uint param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10))
{
  GEN_ENTER(0x492980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(uint param_7 = (uint)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(uint param_10 = (uint)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined * this;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_7;
  uVar7 = param_10;
  while (param_4 != uVar6) {
    uVar6 = uVar6 - 1;
    if (param_5 == ((int *)GEN_TOP(0x0))) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_5;
    }
    uVar4 = uVar6;
    if (*((uint *)GEN_TOP((iVar5 + 8))) <= uVar6) {
      uVar4 = uVar6 - *((uint *)GEN_TOP((iVar5 + 8)));
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 4))) + uVar4 * 4)));
    uVar7 = uVar7 - 1;
    if (param_8 == ((int *)GEN_TOP(0x0))) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_8;
    }
    uVar4 = uVar7;
    if (*((uint *)GEN_TOP((iVar5 + 8))) <= uVar7) {
      uVar4 = uVar7 - *((uint *)GEN_TOP((iVar5 + 8)));
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 4))) + uVar4 * 4)));
    cVar1 = *(char *)(puVar2 + 2);
    if ((cVar1 != -1) && (puVar3 != puVar2)) {
      puVar2 = ((undefined4 *)GEN_TOP(puVar2[1]));
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar3;
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
      if (cVar1 == '\0') {
        if (((undefined4 *)GEN_TOP(puVar3[1])) != ((undefined4 *)GEN_TOP(0x0))) {
          if ((*(char *)(puVar3 + 2) != '\0') && (*(char *)(puVar3 + 2) == '\x01')) {
            this = *((undefined * PTR32 *)GEN_TOP(puVar3[1]));
            *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) - 1;
            if (*((int *)GEN_TOP(((int)this + 0x54))) < 1) {
              F_0042c880(this GEN_EDX_ARG);
              F_00406ad0(this);
            }
          }
          puVar3[1] = 0;
          *(undefined1 *)(puVar3 + 2) = 0xff;
        }
        *puVar3 = *puVar2;
        puVar3[1] = puVar3;
        *(undefined1 *)(puVar3 + 2) = 0;
      }
      else if (cVar1 == '\x01') {
        F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar7;
  if ((param_8 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_8)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*param_8));
  }
  return (uint)param_1;
}

/* ref: FUN_00492a90 */
GEN_OWN GEN_FRAME uint F_00492a90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(uint param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(uint param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10))
{
  GEN_ENTER(0x492a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(uint param_7 = (uint)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(uint param_10 = (uint)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = param_10;
  for (uVar6 = param_4; uVar6 != param_7; uVar6 = uVar6 + 1) {
    if (param_2 == ((int *)GEN_TOP(0x0))) {
      iVar7 = 0;
    }
    else {
      iVar7 = *param_2;
    }
    uVar3 = uVar6;
    if (*((uint *)GEN_TOP((iVar7 + 8))) <= uVar6) {
      uVar3 = uVar6 - *((uint *)GEN_TOP((iVar7 + 8)));
    }
    if (param_8 == ((int *)GEN_TOP(0x0))) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_8;
    }
    uVar4 = uVar1;
    if (*((uint *)GEN_TOP((iVar5 + 8))) <= uVar1) {
      uVar4 = uVar1 - *((uint *)GEN_TOP((iVar5 + 8)));
    }
    iVar7 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar7 + 4))) + uVar3 * 4)));
    iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 4))) + uVar4 * 4)));
    cVar2 = *((char *)GEN_TOP((iVar7 + 8)));
    if ((cVar2 != -1) && (iVar5 != iVar7)) {
      (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((iVar7 + 4)));
      (*(int *)(gen_frame + 0x0)) = iVar5;
      if (cVar2 == '\0') {
        F_004919b0(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      else if (cVar2 == '\x01') {
        F_00491a60(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
    uVar1 = uVar1 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_8 != ((int *)GEN_TOP(0x0))) {
    if (((undefined4 *)GEN_TOP(*param_8)) == ((undefined4 *)GEN_TOP(0x0))) {
      param_1[2] = uVar1;
      return (uint)param_1;
    }
    *param_1 = *((undefined4 *)GEN_TOP(*param_8));
  }
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00492b60 */
GEN_OWN GEN_FRAME uint F_00492b60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x492b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  F_0048a290(((undefined *)GEN_TOP(((int)param_2 + 0x58))) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00492b80 */
GEN_OWN GEN_FRAME uint F_00492b80(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(uint param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x492b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(uint param_7 = (uint)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = param_7;
  for (uVar6 = param_3; uVar6 != param_5; uVar6 = uVar6 + 1) {
    uVar4 = uVar6;
    if (*((uint *)GEN_TOP((param_2 + 8))) <= uVar6) {
      uVar4 = uVar6 - *((uint *)GEN_TOP((param_2 + 8)));
    }
    uVar5 = uVar7;
    if (*((uint *)GEN_TOP((param_6 + 8))) <= uVar7) {
      uVar5 = uVar7 - *((uint *)GEN_TOP((param_6 + 8)));
    }
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 4))) + uVar4 * 4)));
    iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_6 + 4))) + uVar5 * 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 8)));
    if ((cVar1 != -1) && (iVar3 != iVar2)) {
      (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((iVar2 + 4)));
      (*(int *)(gen_frame + 0x0)) = iVar3;
      if (cVar1 == '\0') {
        F_004919b0(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      else if (cVar1 == '\x01') {
        F_00491a60(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
    uVar7 = uVar7 + 1;
  }
  param_1[1] = uVar7;
  *param_1 = param_6;
  return (uint)param_1;
}

/* ref: FUN_00492c20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00492c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x492c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00492680(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00492c50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00492c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x492c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
  while (iVar3 != 0) {
    if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
      uVar2 = *((int *)GEN_TOP(((int)this + 0x10))) - 1 + *((int *)GEN_TOP(((int)this + 0xc)));
      if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar2) {
        uVar2 = uVar2 - *((uint *)GEN_TOP(((int)this + 8)));
      }
      iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4)));
      if (*((undefined4 * PTR32 *)GEN_TOP((iVar3 + 4))) != ((undefined4 *)GEN_TOP(0x0))) {
        if ((*((char *)GEN_TOP((iVar3 + 8))) != '\0') && (*((char *)GEN_TOP((iVar3 + 8))) == '\x01')) {
          this_00 = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((iVar3 + 4)))));
          *((int *)GEN_TOP(((int)this_00 + 0x54))) = *((int *)GEN_TOP(((int)this_00 + 0x54))) - 1;
          if (*((int *)GEN_TOP(((int)this_00 + 0x54))) < 1) {
            F_0042c880(this_00 GEN_EDX_FWD);
            F_00406ad0(this_00);
          }
        }
        *((undefined4 *)GEN_TOP((iVar3 + 4))) = 0;
        *((undefined1 *)GEN_TOP((iVar3 + 8))) = 0xff;
      }
      piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      }
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 8)));
  while (iVar3 != 0) {
    iVar3 = iVar3 - 1;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar3 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar3 * 4))),0xc,0x2c4);
    }
  }
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar4 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,0x2c4);
    uVar2 = (uint)uVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00492d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00492d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x492d20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00492680(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x71))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x71))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x71)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x71)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x71)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x71)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_004923d0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00492de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00492de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x492de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x74,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar1 + 3 GEN_EDX_ARG,param_2);
    F_004898c0(puVar1 + 0x18 GEN_EDX_ARG,param_2 + 0x54);
  }
  F_00492820(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00492e50 */
GEN_OWN GEN_FRAME uint F_00492e50(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0x492e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_8)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar3 = *((undefined4 *)GEN_TOP(*param_8));
  }
  uVar2 = 0;
  if ((param_5 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_5)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar2 = *((undefined4 *)GEN_TOP(*param_5));
  }
  uVar1 = 0;
  if ((param_2 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_2)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar1 = *((undefined4 *)GEN_TOP(*param_2));
  }
  F_00492980(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10,param_1);
  return param_1;
}

/* ref: FUN_00492ed0 */
GEN_OWN GEN_FRAME uint F_00492ed0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0x492ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_8)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar3 = *((undefined4 *)GEN_TOP(*param_8));
  }
  uVar2 = 0;
  if ((param_5 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_5)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar2 = *((undefined4 *)GEN_TOP(*param_5));
  }
  uVar1 = 0;
  if ((param_2 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_2)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar1 = *((undefined4 *)GEN_TOP(*param_2));
  }
  F_00492a90(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10,param_1);
  return param_1;
}

/* ref: FUN_00492f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00492f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x492f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  char cVar1;
  undefined4 uVar2;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 8))) = 0xff;
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 8)));
  if ((cVar1 != -1) && (this != param_1)) {
    uVar2 = *((undefined4 *)GEN_TOP(((int)param_1 + 4)));
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
    (*(undefined4 *)(gen_frame + 0x4)) = uVar2;
    if (cVar1 == '\0') {
      F_004919b0(&(*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD);
      return (uint)this;
    }
    if (cVar1 == '\x01') {
      F_00491a60(&(*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  return (uint)this;
}

/* ref: FUN_00492fb0 */
GEN_OWN GEN_FRAME uint F_00492fb0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x492fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  undefined * pvVar2;
  int * piVar3;
  int * piVar4;
  undefined * this;
  ulonglong uVar5;
  
  piVar3 = param_1;
  if (param_1 != param_2) {
    piVar4 = param_1 + 0x16;
    do {
      this = ((undefined *)GEN_TOP(*piVar4));
      if (this != ((undefined *)GEN_TOP(0x0))) {
        pvVar2 = ((undefined *)GEN_TOP(piVar4[1]));
        for (; this != pvVar2; this = ((undefined *)GEN_TOP(((int)this + 0x58)))) {
          F_0042c880(this GEN_EDX_ARG);
        }
        F_00429760(*piVar4,((piVar4[2] - *piVar4) / 0x58) * 0x58,0);
      }
      *piVar4 = 0;
      piVar4[1] = 0;
      piVar4[2] = 0;
      uVar5 = F_0042c880(piVar4 - 0x16 GEN_EDX_ARG);
      piVar3 = ((int *)GEN_TOP((uint)uVar5));
      piVar1 = piVar4 + 4;
      piVar4 = piVar4 + 0x1a;
    } while (piVar1 != param_2);
  }
  return (uint)piVar3;
}

/* ref: FUN_00493030 */
GEN_OWN GEN_FRAME uint F_00493030(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x493030u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  F_00492b80(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_1);
  return param_1;
}

/* ref: FUN_00493070 */
GEN_OWN GEN_FRAME uint F_00493070(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x493070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x1c, 4);
  char cVar1;
  undefined4 * puVar2;
  undefined * this;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x14)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18);
  cVar1 = *(char *)(param_1 + 2);
  uVar3 = CONCAT31((int3)((REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18)) >> 8),cVar1);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = ((undefined4 *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x10)) = -1;
  if ((cVar1 != -1) && (&(*(undefined4 *)(gen_frame + 0x8)) != param_1)) {
    uVar3 = (uint)cVar1;
    puVar2 = ((undefined4 *)GEN_TOP(param_1[1]));
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = &(*(undefined4 *)(gen_frame + 0x8));
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
    if (uVar3 == 0) {
      uVar3 = F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    else if (uVar3 == 1) {
      uVar3 = F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  cVar1 = *(char *)(param_2 + 2);
  uVar3 = CONCAT31((int3)(uVar3 >> 8),cVar1);
  if ((cVar1 != -1) && (param_1 != param_2)) {
    puVar2 = ((undefined4 *)GEN_TOP(param_2[1]));
    uVar3 = (uint)cVar1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
    if (uVar3 == 0) {
      uVar3 = F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    else if (uVar3 == 1) {
      uVar3 = F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  uVar3 = CONCAT31((int3)(uVar3 >> 8),(*(char *)(gen_frame + 0x10)));
  if (((*(char *)(gen_frame + 0x10)) != -1) && (param_2 != &(*(undefined4 *)(gen_frame + 0x8)))) {
    uVar3 = (uint)(*(char *)(gen_frame + 0x10));
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
    if (uVar3 == 0) {
      uVar3 = F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    else if (uVar3 == 1) {
      uVar3 = F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0xc)) != ((undefined4 *)GEN_TOP(0x0))) && (uVar3 = (uint)(*(char *)(gen_frame + 0x10)), uVar3 != 0)) && (uVar3 == 1)) {
    this = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0xc))));
    *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)this + 0x54))) < 1) {
      F_0042c880(this GEN_EDX_ARG);
      uVar3 = F_00406ad0(this);
    }
  }
  return uVar3;
}

/* ref: FUN_00493180 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00493180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x493180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00492c50(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x2c4);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_004931c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004931c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(int param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x4931c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(int param_7 = (int)gen_a7;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  undefined * this_00;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar3 = ((int *)GEN_TOP(0x0));
  (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(0x0));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    (*(int * PTR32 *)(gen_frame + 0xc)) = *(int * PTR32 *)this;
  }
  (*(int *)(gen_frame + 0x14)) = param_4;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    piVar3 = *(int * PTR32 *)this;
  }
  uVar2 = param_4 - *((int *)GEN_TOP(((int)this + 0xc)));
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  (*(int *)(gen_frame + 0x1c)) = param_7 - param_4;
  (*(int *)(gen_frame + 0x8)) = param_7;
  uVar6 = 0;
  if (uVar2 < (uint)((*((int *)GEN_TOP(((int)this + 0x10))) + *((int *)GEN_TOP(((int)this + 0xc)))) - param_7)) {
    if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
      uVar6 = *((undefined4 *)GEN_TOP(*piVar3));
    }
    uVar5 = 0;
    if (((*(int * PTR32 *)(gen_frame + 0xc)) != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xc)))) != ((undefined4 *)GEN_TOP(0x0)))) {
      uVar5 = *((undefined4 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xc))));
    }
    F_00492e50(((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)this,0,*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar5,0,param_4,
                 uVar6,0,param_7);
    while ((*(int *)(gen_frame + 0x1c)) != 0) {
      if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
        iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + *((int *)GEN_TOP(((int)this + 0xc))) * 4)));
        if (*((undefined4 * PTR32 *)GEN_TOP((iVar4 + 4))) != ((undefined4 *)GEN_TOP(0x0))) {
          if ((*((char *)GEN_TOP((iVar4 + 8))) != '\0') && (*((char *)GEN_TOP((iVar4 + 8))) == '\x01')) {
            this_00 = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((iVar4 + 4)))));
            *((int *)GEN_TOP(((int)this_00 + 0x54))) = *((int *)GEN_TOP(((int)this_00 + 0x54))) - 1;
            if (*((int *)GEN_TOP(((int)this_00 + 0x54))) < 1) {
              F_0042c880(this_00 GEN_EDX_ARG);
              F_00406ad0(this_00);
            }
          }
          *((undefined4 *)GEN_TOP((iVar4 + 4))) = 0;
          *((undefined1 *)GEN_TOP((iVar4 + 8))) = 0xff;
        }
        *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
        if (*((uint *)GEN_TOP(((int)this + 8))) <= *((uint *)GEN_TOP(((int)this + 0xc)))) {
          *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        }
        piVar3 = ((int *)GEN_TOP(((int)this + 0x10)));
        *piVar3 = *piVar3 - 1;
        if (*piVar3 == 0) {
          *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        }
      }
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) - 1;
    }
  }
  else {
    if (((*(int * PTR32 *)(gen_frame + 0xc)) != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xc)))) != ((undefined4 *)GEN_TOP(0x0)))) {
      uVar6 = *((undefined4 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xc))));
    }
    uVar5 = 0;
    if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
      uVar5 = *((undefined4 *)GEN_TOP(*piVar3));
    }
    F_00492ed0(((undefined1 *)(gen_frame + 0x0)),uVar5,0,param_7,*(undefined4 *)this,0,
                 *((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10))),uVar6,0,param_4);
    for (iVar4 = (*(int *)(gen_frame + 0x1c)); iVar4 != 0; iVar4 = iVar4 - 1) {
      F_004927b0(this GEN_EDX_ARG);
    }
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 0xc)));
  piVar3 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar3 = ((int *)GEN_TOP(*puVar1));
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0x18)) + iVar4;
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*piVar3));
  }
  return (uint)param_1;
}

/* ref: FUN_004933a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004933a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4933a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00492d20(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_004933c0 */
GEN_OWN GEN_FRAME uint F_004933c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4933c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00492fb0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_004933e0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_004933e0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4933e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00493400 */
GEN_OWN GEN_FRAME uint F_00493400(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0x493400u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  if (((param_8 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*param_8)) == ((int *)GEN_TOP(0x0)))) ||
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_8)), puVar1 == ((undefined4 *)GEN_TOP(0x0)))) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x4)) = *puVar1;
  }
  if (((param_5 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*param_5)) == ((int *)GEN_TOP(0x0)))) ||
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_5)), puVar1 == ((undefined4 *)GEN_TOP(0x0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  if (((param_2 != ((int *)GEN_TOP(0x0))) && (((int *)GEN_TOP(*param_2)) != ((int *)GEN_TOP(0x0)))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_2)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar2 = *puVar1;
  }
  F_00492b80(((undefined1 *)(gen_frame + 0x0)),uVar2,param_4,uVar3,param_7,(*(undefined4 *)(gen_frame + 0x4)),param_10,param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(undefined4 *)(gen_frame + 0x4));
  if ((param_8 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_8)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*param_8));
  }
  return (uint)param_1;
}

/* ref: FUN_004934b0 */
GEN_OWN GEN_FRAME uint F_004934b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4934b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_4;
  if (*((uint *)GEN_TOP((param_3 + 8))) <= param_4) {
    uVar1 = param_4 - *((uint *)GEN_TOP((param_3 + 8)));
  }
  uVar2 = param_2;
  if (*((uint *)GEN_TOP((param_1 + 8))) <= param_2) {
    uVar2 = param_2 - *((uint *)GEN_TOP((param_1 + 8)));
  }
  uVar1 = F_00493070(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + uVar2 * 4))),
                       *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_3 + 4))) + uVar1 * 4))));
  return uVar1;
}

/* ref: FUN_00493500 */
GEN_OWN GEN_FRAME unsigned int F_00493500(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x493500u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  int iVar1;
  int iVar2;
  byte * pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = param_4 - param_2;
  (*(int *)(gen_frame + 0x2c)) = iVar2;
  (*(int *)(gen_frame + 0x30)) = param_6 - param_2;
  iVar1 = (*(int *)(gen_frame + 0x30));
  while (iVar2 != 0) {
    (*(int *)(gen_frame + 0x30)) = iVar2;
    iVar2 = iVar1 % iVar2;
    iVar1 = (*(int *)(gen_frame + 0x30));
  }
  (*(int *)(gen_frame + 0x30)) = iVar1;
  if (iVar1 < (int)(param_6 - param_2)) {
    while (0 < (*(int *)(gen_frame + 0x30))) {
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = param_2;
      uVar6 = param_2 + (*(int *)(gen_frame + 0x30));
      (*(int *)(gen_frame + 0x24)) = param_1;
      uVar4 = (*(int *)(gen_frame + 0x2c)) + uVar6;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = uVar6;
      iVar2 = param_1;
      uVar5 = param_2;
      if (uVar4 != param_6) {
        (*(int *)(gen_frame + 0x1c)) = param_1;
        (*(uint *)(gen_frame + 0x20)) = uVar4;
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = uVar6;
        uVar5 = uVar4;
      }
      do {
        uVar4 = uVar5;
        if (*((uint *)GEN_TOP((iVar2 + 8))) <= uVar5) {
          uVar4 = uVar5 - *((uint *)GEN_TOP((iVar2 + 8)));
        }
        if (*((uint *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + 8))) <= uVar6) {
          uVar6 = uVar6 - *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + 8)));
        }
        F_00493070(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + 4))) + uVar6 * 4))),
                     *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 4))) + uVar4 * 4))));
        (*(int *)(gen_frame + 0x24)) = iVar2;
        (*(uint *)(gen_frame + 0x28)) = uVar5;
        if ((*(int *)(gen_frame + 0x2c)) < (int)(param_6 - uVar5)) {
          ((byte *)(gen_frame + 0x0))[0] = (char)uVar5;
          ((byte *)(gen_frame + 0x0))[1] = (char)(uVar5 >> 8);
          ((byte *)(gen_frame + 0x0))[2] = (char)(uVar5 >> 0x10);
          ((byte *)(gen_frame + 0x0))[3] = (char)(uVar5 >> 0x18);
          (*(int *)(gen_frame + 0x14)) = iVar2;
          (*(int *)(gen_frame + 0x18)) = uVar5 + (*(int *)(gen_frame + 0x2c));
          pbVar3 = (byte *)&(*(int *)(gen_frame + 0x14));
        }
        else {
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = (param_2 - (param_6 - uVar5)) + (*(int *)(gen_frame + 0x2c));
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = param_2;
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = param_1;
          pbVar3 = ((byte *)(gen_frame + 0x0)) + 0xc;
        }
        iVar2 = *(int *)pbVar3;
        uVar6 = uVar5;
        uVar5 = *(uint *)(pbVar3 + 4);
      } while (*(uint *)(pbVar3 + 4) != (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)));
      iVar2 = (*(int *)(gen_frame + 0x30)) - 1;
      (*(int *)(gen_frame + 0x30)) = iVar2;
    }
  }
  return 0;
}

/* ref: FUN_00493650 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00493650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x493650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG);
  F_00492c50(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),8,0x2c4);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return (uint)uVar1;
}

/* ref: Component::Text::MacroDecoder::vf11 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00493690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x493690u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf12 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004936a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x4936a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf14 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004936b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x4936b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf15 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004936c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x4936c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf16 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004936d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x4936d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004936e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x4936e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf18 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004936f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x4936f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf19 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00493700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x493700u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: Component::Text::TextModule::vf13 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00493710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x493710u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  
  bVar1 = F_00a23c00(this + 4 GEN_EDX_FWD,param_1,param_2,param_3);
  return (uint)(bVar1 != 0);
}

